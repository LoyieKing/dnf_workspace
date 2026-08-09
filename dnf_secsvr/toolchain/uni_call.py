#!/usr/bin/env python3
"""unicorn 调用器：模拟执行 secagent 代码，调用任意符号函数。

用法：python3 uni_call.py <symbol> <arg>...
  数据参数：hex 字符串（分配 guest 内存传指针，调用后读回）
  整数参数：int:N 或 0xADDR
  类方法（_ZN 开头）自动补 this（分配清零对象）。
输出：每个指针参数调用后的内容 hex。
"""
import struct
import re
import sys

from unicorn import *
from unicorn.x86_const import *

BIN = "/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/secsvr/zergsvr/secagent"


def parse_elf(data):
    e_phoff = struct.unpack_from("<I", data, 28)[0]
    e_phentsize = struct.unpack_from("<H", data, 42)[0]
    e_phnum = struct.unpack_from("<H", data, 44)[0]
    phdrs = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_flags, p_align = \
            struct.unpack_from("<IIIIIIII", data, off)
        phdrs.append((p_type, p_offset, p_vaddr, p_filesz, p_memsz, p_flags))
    e_shoff = struct.unpack_from("<I", data, 32)[0]
    e_shentsize = struct.unpack_from("<H", data, 46)[0]
    e_shnum = struct.unpack_from("<H", data, 48)[0]
    e_shstrndx = struct.unpack_from("<H", data, 50)[0]
    shdrs = []
    for i in range(e_shnum):
        sh = struct.unpack_from("<IIIIIIIIII", data, e_shoff + i * e_shentsize)
        shdrs.append(sh)
    shstr_off = shdrs[e_shstrndx][4]
    shstr_size = shdrs[e_shstrndx][5]
    shstr = data[shstr_off:shstr_off + shstr_size]
    sections = {}
    for sh in shdrs:
        name = shstr[sh[0]:shstr.find(b"\x00", sh[0])].decode()
        sections[name] = sh
    return phdrs, sections


def load_segments(uc, data, phdrs):
    PAGE = 0x1000
    for p_type, p_offset, p_vaddr, p_filesz, p_memsz, p_flags in phdrs:
        if p_type != 1:
            continue
        start = p_vaddr & ~(PAGE - 1)
        end = (p_vaddr + p_memsz + PAGE - 1) & ~(PAGE - 1)
        uc.mem_map(start, end - start)
        if p_filesz:
            uc.mem_write(p_vaddr, data[p_offset:p_offset + p_filesz])
        if p_memsz > p_filesz:
            uc.mem_write(p_vaddr + p_filesz, b"\x00" * (p_memsz - p_filesz))


def load_symtab(data, sections):
    """返回 {mangled_name: addr}"""
    symtab = sections[".symtab"]
    s_off = symtab[4]
    nsyms = symtab[5] // 16
    str_off = sections[".strtab"][4]
    strtab = data[str_off:]
    out = {}
    for i in range(nsyms):
        st_name, st_value, st_size, st_info, st_other, st_shndx = \
            struct.unpack_from("<IIIBBH", data, s_off + i * 16)
        if st_name and st_value:
            nm = strtab[st_name:strtab.find(b"\x00", st_name)].decode()
            out[nm] = st_value
    return out


def parse_plt(data, sections):
    """返回 {plt_entry_addr: libc_name}（按 rel.plt 顺序）"""
    dynsym = sections[".dynsym"]
    sym_off = dynsym[4]
    nsyms = dynsym[5] // 16
    str_off = sections[".dynstr"][4]
    strtab = data[str_off:]
    names = []
    for i in range(nsyms):
        st_name, st_value, st_size, st_info, st_other, st_shndx = \
            struct.unpack_from("<IIIBBH", data, sym_off + i * 16)
        names.append(strtab[st_name:strtab.find(b"\x00", st_name)].decode() if st_name else "")
    rel = sections[".rel.plt"]
    r_off, r_addr, r_size = rel[4], rel[2], rel[5]
    relocs = []
    for i in range(r_size // 8):
        r_offset, r_info = struct.unpack_from("<II", data, r_off + i * 8)
        relocs.append((r_offset, names[r_info >> 8]))
    plt = sections[".plt"]
    p_addr = plt[3]   # sh_addr
    out = {}
    for i, (_, name) in enumerate(relocs):
        out[p_addr + 16 + i * 16] = name
    return out


def apply_relocs(uc, data, sections, syms):
    """应用 .rel.dyn 重定位（R_386_32 / R_386_RELATIVE），把内部符号地址
       写入 GOT/数据区（模拟动态链接器的静态重定位）。"""
    if ".rel.dyn" not in sections:
        return
    rel = sections[".rel.dyn"]
    r_off, r_size = rel[4], rel[5]
    for i in range(r_size // 8):
        r_offset, r_info = struct.unpack_from("<II", data, r_off + i * 8)
        rtype = r_info & 0xff
        sym_idx = r_info >> 8
        if rtype in (1, 6):      # R_386_32: S+A；R_386_GLOB_DAT: S
            sym_name = None
            dynsym = sections[".dynsym"]
            st_name, st_value, st_size, st_info, st_other, st_shndx = \
                struct.unpack_from("<IIIBBH", data, dynsym[4] + sym_idx * 16)
            str_off = sections[".dynstr"][4]
            strtab = data[str_off:]
            sym_name = strtab[st_name:strtab.find(b"\x00", st_name)].decode() if st_name else ""
            base = syms.get(sym_name, 0)
            if rtype == 1:
                addend = struct.unpack("<I", uc.mem_read(r_offset, 4))[0]
                base = (base + addend) & 0xFFFFFFFF
            uc.mem_write(r_offset, struct.pack("<I", base))
        elif rtype == 8:    # R_386_RELATIVE: B + A
            addend = struct.unpack("<I", uc.mem_read(r_offset, 4))[0]
            uc.mem_write(r_offset, struct.pack("<I", (0x08048000 + addend) & 0xFFFFFFFF))


def main():
    sym = sys.argv[1]
    args = sys.argv[2:]
    data = open(BIN, "rb").read()
    phdrs, sections = parse_elf(data)

    uc = Uc(UC_ARCH_X86, UC_MODE_32)
    load_segments(uc, data, phdrs)
    syms = load_symtab(data, sections)
    apply_relocs(uc, data, sections, syms)
    if sym not in syms:
        raise KeyError(f"symbol not found: {sym}")
    target = syms[sym]
    plt_map = parse_plt(data, sections)

    # 宿主堆与数据区
    uc.mem_map(0x00500000, 0x100000)   # 宿主堆（guest 地址）
    uc.mem_map(0x00600000, 0x10000)    # 数据区
    uc.mem_map(0x00800000, 0x40000)    # 栈
    host_top = 0

    def host_malloc(size):
        nonlocal host_top
        size = (size + 15) & ~15
        if host_top + size > 0x100000:
            raise RuntimeError("host heap exhausted")
        ptr = 0x00500000 + host_top
        host_top += size
        return ptr

    def handle_libc(uc, addr, name):
        esp = uc.reg_read(UC_X86_REG_ESP)
        ret = struct.unpack("<I", uc.mem_read(esp, 4))[0]
        a = [struct.unpack("<I", uc.mem_read(esp + 4 + i * 4, 4))[0] for i in range(4)]
        if name in ("malloc", "_Znwj", "_Znam", "_Znwm", "_Znaj", "operator new"):
            result = host_malloc(a[0])
        elif name in ("free", "_ZdlPv", "_ZdaPv", "_ZdaPv", "operator delete"):
            result = 0
        elif name in ("memcpy", "memmove", "__memcpy_chk"):
            uc.mem_write(a[0], bytes(uc.mem_read(a[1], a[2])))
            result = a[0]
        elif name == "memset":
            uc.mem_write(a[0], bytes([a[1] & 0xFF]) * a[2])
            result = a[0]
        elif name == "memcmp":
            ba = bytes(uc.mem_read(a[0], a[2]))
            bb = bytes(uc.mem_read(a[1], a[2]))
            result = (ba > bb) - (ba < bb)
        elif name == "strlen":
            i = 0
            while uc.mem_read(a[0] + i, 1) != b"\x00":
                i += 1
            result = i
        elif name in ("printf", "fprintf", "puts", "__cxa_guard_acquire",
                      "__cxa_guard_release", "pthread_mutex_lock",
                      "pthread_mutex_unlock", "pthread_once"):
            result = 0
        else:
            raise RuntimeError(f"unhandled libc call: {name} @ {addr:#x}")
        uc.reg_write(UC_X86_REG_EAX, result & 0xFFFFFFFF)
        uc.reg_write(UC_X86_REG_ESP, esp + 4)
        uc.reg_write(UC_X86_REG_EIP, ret)

    def on_code(uc, address, size, user_data):
        if address in plt_map:
            handle_libc(uc, address, plt_map[address])

    uc.hook_add(UC_HOOK_CODE, on_code)

    done = {"hit": False}

    def on_unmapped(uc, access, address, size, value, user_data):
        if address == 0xCCCCCCCC:
            done["hit"] = True
            uc.emu_stop()
            return True
        return False

    uc.hook_add(UC_HOOK_MEM_FETCH_UNMAPPED, on_unmapped)

    def on_mem_unmapped(uc, access, address, size, value, user_data):
        print(f"MEM_UNMAPPED access={access} addr={address:#x} size={size}", flush=True)
        return False

    uc.hook_add(UC_HOOK_MEM_WRITE_UNMAPPED, on_mem_unmapped)
    uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED, on_mem_unmapped)

    # 参数
    datas = []
    call_args = []
    for a in args:
        if a.startswith("int:"):
            call_args.append(int(a[4:], 0) & 0xFFFFFFFF)
        elif a.startswith("0x"):
            call_args.append(int(a, 16) & 0xFFFFFFFF)
        else:
            datas.append(bytes.fromhex(a))
            call_args.append(None)

    DATA_BASE = 0x00600000
    data_ptrs = []
    off = 0
    for d in datas:
        ptr = DATA_BASE + off
        data_ptrs.append(ptr)
        uc.mem_write(ptr, d + b"\x00" * 16)
        off += len(d) + 16
    obj_ptr = DATA_BASE + off + 0x200
    uc.mem_write(obj_ptr, b"\x00" * 256)

    esp0 = 0x00800000 + 0x40000 - 0x200
    ret_addr = esp0

    def run_call(target_addr, frame_words):
        frame = [struct.pack("<I", 0xCCCCCCCC)] + [struct.pack("<I", w) for w in frame_words]
        uc.mem_write(ret_addr, b"".join(frame))
        done["hit"] = False
        uc.reg_write(UC_X86_REG_ESP, ret_addr)
        uc.reg_write(UC_X86_REG_EBP, ret_addr)
        uc.reg_write(UC_X86_REG_EIP, target_addr)
        try:
            uc.emu_start(target_addr, 0, timeout=10 * UC_SECOND_SCALE)
        except UcError as e:
            if not done["hit"]:
                raise

    frame_words = []
    di = 0
    if sym.startswith("_ZN"):
        # 先调用构造函数（C1）初始化对象
        m = re.match(r"^_ZN(\d+)(.*)C[12]Ev$", sym)
        if m:
            pass  # 目标本身就是构造函数，不重复构造
        else:
            mm = re.match(r"^_ZN(\d+)", sym)
            if mm:
                cls_len = int(mm.group(1))
                cls_name = sym[mm.end():mm.end() + cls_len]
                ctor = syms.get(f"_ZN{len(cls_name)}{cls_name}C1Ev")
                if ctor:
                    run_call(ctor, [obj_ptr])
        frame_words.append(obj_ptr)
    for a in call_args:
        if a is None:
            frame_words.append(data_ptrs[di])
            di += 1
        else:
            frame_words.append(a)
    run_call(target, frame_words)

    for d, ptr in zip(datas, data_ptrs):
        print(bytes(uc.mem_read(ptr, len(d))).hex())


if __name__ == "__main__":
    main()
