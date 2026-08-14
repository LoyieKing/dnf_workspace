#!/usr/bin/env python3
"""Extract one FUNC symbol from an ELF32 ET_EXEC into a tiny ET_REL .o.

objdiff only ingests relocatable objects. Linked service binaries (ORIG and
rebuild) are ET_EXEC; this writer copies the function bytes into a one-symbol
.o so objdiff-cli can score instruction match.
"""
from __future__ import annotations

import struct
from pathlib import Path


def _u16(data, off):
    return struct.unpack_from("<H", data, off)[0]


def _u32(data, off):
    return struct.unpack_from("<I", data, off)[0]


def load_elf32(path: Path):
    data = path.read_bytes()
    if data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
        raise ValueError("need ELF32 LE: %s" % path)
    e_shoff = _u32(data, 32)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", data, 46)
    shdrs = []
    for i in range(e_shnum):
        off = e_shoff + i * e_shentsize
        fields = struct.unpack_from("<IIIIIIIIII", data, off)
        shdrs.append(
            {
                "name": fields[0],
                "typ": fields[1],
                "flags": fields[2],
                "addr": fields[3],
                "off": fields[4],
                "size": fields[5],
                "link": fields[6],
                "info": fields[7],
                "addralign": fields[8],
                "entsize": fields[9],
            }
        )
    shstr = shdrs[e_shstrndx]
    shstrtab = data[shstr["off"] : shstr["off"] + shstr["size"]]

    def sec_name(sh):
        start = sh["name"]
        end = shstrtab.find(b"\x00", start)
        return shstrtab[start:end].decode("latin1", "replace")

    sections = []
    for i, sh in enumerate(shdrs):
        sh = dict(sh)
        sh["index"] = i
        sh["strname"] = sec_name(sh)
        sections.append(sh)

    symbols = []
    for sh in sections:
        if sh["typ"] != 2:  # SHT_SYMTAB
            continue
        entsz = sh["entsize"] or 16
        strtab_sh = sections[sh["link"]]
        strtab = data[strtab_sh["off"] : strtab_sh["off"] + strtab_sh["size"]]
        n = sh["size"] // entsz
        for j in range(n):
            soff = sh["off"] + j * entsz
            st_name, st_value, st_size, st_info, st_other, st_shndx = struct.unpack_from(
                "<IIIBBH", data, soff
            )
            end = strtab.find(b"\x00", st_name)
            name = strtab[st_name:end].decode("latin1", "replace")
            symbols.append(
                {
                    "name": name,
                    "value": st_value,
                    "size": st_size,
                    "info": st_info,
                    "shndx": st_shndx,
                    "bind": st_info >> 4,
                    "typ": st_info & 0xF,
                }
            )
        break
    return data, sections, symbols


def find_func(symbols, sections, name: str):
    cands = [s for s in symbols if s["name"] == name and s["typ"] == 2]
    if not cands:
        cands = [s for s in symbols if s["name"] == name]
    if not cands:
        return None
    # prefer sized FUNC in a real section
    cands.sort(key=lambda s: (s["size"] == 0, s["shndx"] == 0, -s["size"]))
    return cands[0]


def func_bytes(data, sections, sym):
    if not (0 < sym["shndx"] < len(sections)):
        raise ValueError("bad shndx for %s" % sym["name"])
    sh = sections[sym["shndx"]]
    size = sym["size"]
    if size <= 0:
        raise ValueError("zero size for %s" % sym["name"])
    # ET_EXEC: st_value is VMA
    if sh["addr"] and sym["value"] >= sh["addr"]:
        off = sh["off"] + (sym["value"] - sh["addr"])
    else:
        off = sh["off"] + sym["value"]
    if off < 0 or off + size > len(data):
        raise ValueError("bytes oob for %s" % sym["name"])
    return data[off : off + size]


def write_func_rel(dst: Path, name: str, blob: bytes):
    """Minimal ELF32 LE ET_REL with one .text FUNC symbol."""
    shstr = b"\x00.text\x00.strtab\x00.symtab\x00.shstrtab\x00"
    strtab = b"\x00" + name.encode("latin1") + b"\x00"
    # symbol 0 NULL, symbol 1 the function
    symtab = bytearray(32)
    struct.pack_into("<IIIBBH", symtab, 16, 1, 0, len(blob), (1 << 4) | 2, 0, 1)

    # layout: ehdr | .text | .strtab | .symtab | .shstrtab | shdrs
    ehdr_sz = 52
    text_off = ehdr_sz
    str_off = text_off + len(blob)
    # align symtab to 4
    pad1 = (4 - (str_off + len(strtab)) % 4) % 4
    sym_off = str_off + len(strtab) + pad1
    shstr_off = sym_off + len(symtab)
    shoff = shstr_off + len(shstr)
    shentsize = 40
    shnum = 5
    out = bytearray(shoff + shentsize * shnum)

    # e_ident + ehdr
    out[0:16] = b"\x7fELF\x01\x01\x01\x00" + b"\x00" * 8
    struct.pack_into(
        "<HHIIIIIHHHHHH",
        out,
        16,
        1,  # ET_REL
        3,  # EM_386
        1,  # version
        0,  # entry
        0,  # phoff
        shoff,
        0,  # flags
        52,  # ehsize
        0,  # phentsize
        0,  # phnum
        shentsize,
        shnum,
        4,  # shstrndx
    )
    out[text_off : text_off + len(blob)] = blob
    out[str_off : str_off + len(strtab)] = strtab
    out[sym_off : sym_off + len(symtab)] = symtab
    out[shstr_off : shstr_off + len(shstr)] = shstr

    def shdr(i, name_off, typ, flags, soff, size, link=0, info=0, align=1, entsize=0):
        off = shoff + i * shentsize
        struct.pack_into(
            "<IIIIIIIIII",
            out,
            off,
            name_off,
            typ,
            flags,
            0,
            soff,
            size,
            link,
            info,
            align,
            entsize,
        )

    # 0 NULL
    shdr(0, 0, 0, 0, 0, 0)
    # 1 .text
    shdr(1, 1, 1, 0x6, text_off, len(blob), align=4)
    # 2 .strtab
    shdr(2, 7, 3, 0, str_off, len(strtab))
    # 3 .symtab  link=.strtab info=1 (first global)
    shdr(3, 15, 2, 0, sym_off, len(symtab), link=2, info=1, align=4, entsize=16)
    # 4 .shstrtab
    shdr(4, 23, 3, 0, shstr_off, len(shstr))
    dst.parent.mkdir(parents=True, exist_ok=True)
    dst.write_bytes(out)


def extract_one(src: Path, name: str, dst: Path) -> dict:
    data, sections, symbols = load_elf32(src)
    sym = find_func(symbols, sections, name)
    if sym is None:
        raise KeyError("missing %s in %s" % (name, src))
    blob = func_bytes(data, sections, sym)
    write_func_rel(dst, name, blob)
    return {"name": name, "size": len(blob), "addr": hex(sym["value"]), "out": str(dst)}
