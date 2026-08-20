#!/usr/bin/env python3
"""class_func_reports 汇编格式化与组装。

子命令：
  manifest  — 生成 /tmp/df_cr/funcs.tsv（含 mangled + demangled）
  extract   — objdump 切分并格式化每函数汇编到 /tmp/df_cr/asm/
  assemble  — 按类文件夹 / 每函数一份 md 写出
  all       — 清单 + 直接写出每函数 md（不经 .asm，多进程）
"""
from __future__ import annotations

import argparse
import bisect
import gzip
import multiprocessing as mp
import os
import re
import shutil
import subprocess
import sys
import time
from collections import defaultdict
from pathlib import Path

_HERE = Path(__file__).resolve().parent
_DECOMP = _HERE.parent.parent
_ROOT = _DECOMP.parent
_TOOLCHAIN = _DECOMP / "source" / "toolchain"
sys.path.insert(0, str(_TOOLCHAIN))

from compare_common import demangle_batch  # noqa: E402
from report_resolve import build_addr_map, pseudo_lines  # noqa: E402

DEFAULT_BIN = _ROOT / "dnf_installer/build/dnf_data/home/template/init/df_game_r"
CR_DIR = Path("/tmp/df_cr")
FUNCS_TSV = CR_DIR / "funcs.tsv"
CLASSES_LST = CR_DIR / "classes.lst"
COUNT_TSV = CR_DIR / "class_func_count.tsv"
ASM_DIR = CR_DIR / "asm"
DECOMP_DIR = CR_DIR / "decomp"
DISASM_PATH = Path("/tmp/df_text_disasm.txt")
DEFAULT_OUT = _DECOMP / "docs" / "class_func_reports"
LEGACY_C_PKL = CR_DIR / "legacy_c.pkl"

_DIRECT_BR_RE = re.compile(
    r"^((?:j[a-z]*|callq?|loop[a-z]*)\s+)"
    r"(0x)?([0-9a-fA-F]+)"
    r"(?:\s+<([^>]*)>)?"
    r"(.*)$"
)
_C_AT_RE = re.compile(r"@ 0x([0-9a-fA-F]+)")
_LOCAL_LABEL_RE = re.compile(r"^\.L")

# fork 子进程共享（必须在 Pool 创建前填好）
_G = {}


def _now():
    return time.time()


def _jobs_default():
    return max(1, os.cpu_count() or 8)


def escape_name(s: str) -> str:
    s = (s.replace("::", "__")
         .replace("<", "_lt_")
         .replace(">", "_gt_")
         .replace("/", "_s_"))
    return re.sub(r'[ "*,():]', "_", s)


def strip_func_sig(dem: str) -> str:
    """去掉 demangled 签名的参数表，保留 operator() 名称本身。"""
    s = dem.strip()
    if not s:
        return s
    depth = 0
    end = start = -1
    for i in range(len(s) - 1, -1, -1):
        c = s[i]
        if c == ")":
            if depth == 0:
                end = i
            depth += 1
        elif c == "(":
            depth -= 1
            if depth == 0 and end >= 0:
                start = i
                break
    return s[:start] if start >= 0 else s


def split_cls_mth(dem_full: str) -> tuple:
    base = strip_func_sig(dem_full)
    base = re.sub(r"\s*\[abi:[^\]]+\]", "", base).strip()
    if "::" not in base:
        return "<global>", base or dem_full
    cls, _, mth = base.rpartition("::")
    return cls, mth


def run_nm(bin_path: Path):
    out = subprocess.check_output(
        ["nm", "--defined-only", str(bin_path)],
        stderr=subprocess.DEVNULL, text=True)
    rows = []
    for line in out.splitlines():
        p = line.split(None, 2)
        if len(p) < 3:
            continue
        addr_s, typ, name = p[0], p[1], p[2]
        if typ not in "tT" or _LOCAL_LABEL_RE.match(name) or name.startswith(".L"):
            continue
        try:
            addr = int(addr_s, 16)
        except ValueError:
            continue
        rows.append((addr, name.split("@")[0]))
    rows.sort(key=lambda x: (x[0], x[1]))
    return rows


def unique_by_addr(rows):
    best = {}

    def score(name: str):
        thunk = 1 if ("thunk" in name or name.startswith("_ZTh")
                      or name.startswith("_ZTv") or name.startswith("_ZTc")) else 0
        return (thunk, len(name), name)

    for addr, name in rows:
        cur = best.get(addr)
        if cur is None or score(name) < score(cur):
            best[addr] = name
    return sorted(best.items())


def cmd_manifest(bin_path: Path) -> None:
    CR_DIR.mkdir(parents=True, exist_ok=True)
    rows = unique_by_addr(run_nm(bin_path))
    dem_map = demangle_batch([n for _, n in rows])
    lines = []
    classes = set()
    counts = defaultdict(int)
    for addr, mng in rows:
        dem = dem_map.get(mng, mng)
        cls, mth = split_cls_mth(dem)
        if not mth:
            mth = "_" + format(addr, "08x")
        cls = cls.replace("\t", " ")
        mth = mth.replace("\t", " ")
        dem = dem.replace("\t", " ")
        lines.append("{:08x}\t{}\t{}\t{}\t{}\n".format(addr, cls, mth, mng, dem))
        classes.add(cls)
        counts[cls] += 1
    FUNCS_TSV.write_text("".join(lines), encoding="utf-8")
    CLASSES_LST.write_text("".join(c + "\n" for c in sorted(classes)), encoding="utf-8")
    ranked = sorted(counts.items(), key=lambda kv: (-kv[1], kv[0]))
    COUNT_TSV.write_text(
        "".join("{}\t{}\n".format(n, c) for c, n in ranked), encoding="utf-8")
    print("函数总数: {}".format(len(lines)))
    print("类路径数: {}".format(len(classes)))
    print("清单已写入 {}".format(CR_DIR))


def load_funcs_tsv(path: Path = FUNCS_TSV):
    rows = []
    seen_key = {}
    for line in path.read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        f = line.split("\t")
        if len(f) < 3:
            continue
        addr = int(f[0], 16)
        cls, mth = f[1], f[2]
        mangled = f[3] if len(f) > 3 else ""
        dem = f[4] if len(f) > 4 else "{}::{}".format(cls, mth)
        base = escape_name(mth) or ("_" + format(addr, "08x"))
        key = (escape_name(cls), base)
        if key in seen_key:
            base = base + "_" + format(addr, "08x")
        seen_key[key] = addr
        rows.append({
            "addr": addr,
            "cls": cls,
            "mth": mth,
            "mangled": mangled,
            "dem": dem,
            "cls_esc": escape_name(cls),
            "mth_esc": base,
        })
    rows.sort(key=lambda r: r["addr"])
    return rows


def _parse_insn_fast(line: str):
    """objdump --no-show-raw-insn 指令行。无正则。"""
    if not line or line[0] not in " \t":
        return None
    s = line.lstrip()
    c = s.find(":")
    if c < 6 or c > 16:
        return None
    try:
        addr = int(s[:c], 16)
    except ValueError:
        return None
    rest = s[c + 1:].strip()
    if not rest:
        return None
    # 兼容带机器码的 objdump：`55                    push   %ebp`
    if len(rest) >= 2 and rest[0] in "0123456789abcdef" and rest[1] in "0123456789abcdef":
        tab = rest.find("\t")
        if tab >= 0:
            rest = rest[tab + 1:].strip()
        else:
            rest = re.sub(r"^(?:[0-9a-fA-F]{2}\s+)+", "", rest, count=1).strip()
        if not rest:
            return None
    return addr, rest


def ensure_disasm(bin_path: Path, disasm_path: Path) -> None:
    if disasm_path.exists() and disasm_path.stat().st_size > 0:
        return
    print("objdump -d --no-show-raw-insn → {}".format(disasm_path), flush=True)
    with disasm_path.open("w", encoding="utf-8", errors="replace") as fh:
        subprocess.check_call(
            ["objdump", "-d", "--no-show-raw-insn", str(bin_path)],
            stdout=fh, stderr=subprocess.DEVNULL)


def load_objdump_insns(disasm_path: Path):
    """返回平行数组 (addrs, texts)，按地址升序。"""
    addrs = []
    texts = []
    with open(disasm_path, "r", encoding="utf-8", errors="replace") as fh:
        for line in fh:
            p = _parse_insn_fast(line)
            if p:
                addrs.append(p[0])
                texts.append(p[1])
    return addrs, texts


def lookup_symbol(target: int, exact, starts, by_start):
    hit = exact.get(target)
    if hit:
        return hit[0], hit[1], 0
    i = bisect.bisect_right(starts, target) - 1
    if i < 0:
        return None
    s = starts[i]
    mng, dem, size = by_start[s]
    if size > 0 and s < target < s + size:
        return mng, dem, target - s
    if size == 0 and s <= target:
        nxt = starts[i + 1] if i + 1 < len(starts) else s + 0x10000
        if target < nxt:
            return mng, dem, target - s
    return None


def format_branch(line: str, fn_start: int, fn_end: int,
                  exact, starts, by_start) -> str:
    m = _DIRECT_BR_RE.match(line)
    if not m:
        return line
    prefix, _ox, hx, _ann, tail = m.groups()
    target = int(hx, 16)
    if fn_start <= target <= fn_end:
        return "{}{:08x} <+0x{:x}>{}".format(
            prefix, target, target - fn_start, tail)
    info = lookup_symbol(target, exact, starts, by_start)
    if info:
        mng, dem, off = info
        if off:
            tag = "{}+0x{:x}".format(mng, off)
            extra = "  ; {}+0x{:x}".format(dem, off) if dem and dem != mng else ""
        else:
            tag = mng
            extra = "  ; {}".format(dem) if dem and dem != mng else ""
        return "{}{:08x} <{}>{}{}".format(prefix, target, tag, extra, tail)
    if _ann:
        return "{}{:08x} <{}>{}".format(prefix, target, _ann, tail)
    return "{}{:08x}{}".format(prefix, target, tail)


def format_function(insns, meta, addr_info, exact, starts, by_start) -> str:
    if not insns:
        return ""
    fn_start = meta["addr"]
    fn_end = insns[-1][0]
    texts = []
    for _addr, text in insns:
        if text.startswith(("j", "call", "loop")):
            texts.append(format_branch(text, fn_start, fn_end, exact, starts, by_start))
        else:
            texts.append(text)
    if any('0x' in t or '@' in t or '<' in t for t in texts):
        translated = pseudo_lines(texts, addr_info, fn_base=fn_start)
    else:
        translated = texts
    max_off = fn_end - fn_start
    w = max(2, len(format(max_off, "x")))
    out = []
    mangled = meta.get("mangled") or ""
    dem = meta.get("dem") or ""
    out.append("# {:08x}  {}".format(fn_start, mangled))
    if dem:
        out.append("#           {}".format(dem))
    out.append("# range [0x{:08x}, 0x{:08x}]".format(fn_start, fn_end))
    for (addr, _), text in zip(insns, translated):
        out.append("{:08x} +0x{:0{w}x}:  {}".format(
            addr, addr - fn_start, text, w=w))
    return "\n".join(out) + "\n"


def build_sym_index(rows):
    exact = {}
    by_start = {}
    for i, r in enumerate(rows):
        nxt = rows[i + 1]["addr"] if i + 1 < len(rows) else r["addr"] + 0x100
        size = max(0, nxt - r["addr"])
        exact[r["addr"]] = (r["mangled"], r["dem"])
        by_start[r["addr"]] = (r["mangled"], r["dem"], size)
    starts = sorted(by_start)
    return exact, starts, by_start


def extract_c_blocks(text: str, out: dict) -> int:
    """线性扫描 ```c 块，按首行 @ 0xADDR 索引。"""
    n = 0
    i = 0
    find = text.find
    while True:
        a = find("```c\n", i)
        if a < 0:
            break
        a += 5
        b = find("\n```", a)
        if b < 0:
            break
        head = text[a:a + 240]
        m = _C_AT_RE.search(head)
        if m:
            out[int(m.group(1), 16)] = text[a:b].strip() + "\n"
            n += 1
        i = b + 4
    return n


def _parse_legacy_one(path: str) -> dict:
    out = {}
    try:
        if path.endswith(".gz"):
            with gzip.open(path, "rt", encoding="utf-8", errors="replace") as fh:
                extract_c_blocks(fh.read(), out)
        else:
            with open(path, "r", encoding="utf-8", errors="replace") as fh:
                extract_c_blocks(fh.read(), out)
    except OSError:
        pass
    return out


def load_legacy_c(out_dir: Path, jobs: int) -> dict:
    """从旧的一类一份 md 抽 Ghidra C。结果缓存在 /tmp/df_cr/legacy_c.pkl。

    父进程顺序解析，避免巨型 C 字典经 IPC 回传。3rd 先于主目录，同地址以主报告为准。
    """
    import pickle
    del jobs
    files = []
    third = out_dir.parent / "class_func_reports_3rd"
    if third.is_dir():
        for p in sorted(third.glob("*.md")):
            if p.name != "README.md":
                files.append(str(p))
    for p in sorted(out_dir.glob("*.md")):
        if p.name in ("README.md", "INDEX.md"):
            continue
        files.append(str(p))
    gz = out_dir / "_lt_global_gt_.md.gz"
    if gz.exists():
        files.append(str(gz))
    key = tuple((f, os.path.getmtime(f), os.path.getsize(f)) for f in files)
    if LEGACY_C_PKL.exists():
        try:
            with open(LEGACY_C_PKL, "rb") as fh:
                saved_key, by_addr = pickle.load(fh)
            if saved_key == key:
                print("  legacy C 缓存命中: {}".format(len(by_addr)), flush=True)
                return by_addr
        except Exception:
            pass
    by_addr = {}
    nfiles = len(files)
    t0 = _now()
    for i, f in enumerate(files, 1):
        by_addr.update(_parse_legacy_one(f))
        if i == 1 or i == nfiles or i % 400 == 0:
            print("  parse {}/{}  c={}  ({:.1f}s)".format(
                i, nfiles, len(by_addr), _now() - t0), flush=True)
    try:
        CR_DIR.mkdir(parents=True, exist_ok=True)
        with open(LEGACY_C_PKL, "wb") as fh:
            pickle.dump((key, by_addr), fh, protocol=pickle.HIGHEST_PROTOCOL)
    except Exception:
        pass
    return by_addr


def func_md_text(meta, asm: str, c) -> str:
    parts = [
        "# {}\n".format(meta["mth"] or meta["mth_esc"]),
    ]
    if meta.get("mangled"):
        parts.append("`{}`\n".format(meta["mangled"]))
    if meta.get("dem"):
        parts.append("`{}`\n".format(meta["dem"]))
    parts.extend([
        "| 类 | 地址 |",
        "|---|---|",
        "| `{}` | `0x{:08x}` |\n".format(meta["cls"], meta["addr"]),
        "> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，"
        "地址=绝对+函数内偏移），C=Ghidra 反编译。"
        "数据地址按 function_reports/report_resolve 规则翻译为"
        " `&符号` / `\"字符串\"`。\n",
        "## 汇编\n",
        "```asm",
        asm.rstrip(),
        "```\n",
        "## 反编译 C\n",
    ])
    if c and str(c).strip():
        parts.extend(["```c", str(c).rstrip(), "```\n"])
    else:
        parts.append("> （该函数反编译 C 未生成）\n")
    return "\n".join(parts)


def _worker_chunk(spec):
    """处理 [lo, hi) 号函数：写 md（及可选 asm）。返回写出数量。"""
    lo, hi, write_asm, write_md = spec
    addrs = _G["addrs"]
    texts = _G["texts"]
    rows = _G["rows"]
    addr_info = _G["addr_info"]
    exact = _G["exact"]
    starts = _G["starts"]
    by_start = _G["by_start"]
    legacy_c = _G["legacy_c"]
    out_dir = _G["out_dir"]
    n = 0
    n_rows = len(rows)
    decomp_root = _G.get("decomp_root")
    for i in range(lo, hi):
        r = rows[i]
        end = rows[i + 1]["addr"] - 1 if i + 1 < n_rows else r["addr"] + 0x100
        a0 = bisect.bisect_left(addrs, r["addr"])
        a1 = bisect.bisect_right(addrs, end)
        insns = list(zip(addrs[a0:a1], texts[a0:a1]))
        asm = format_function(insns, r, addr_info, exact, starts, by_start)
        if write_asm:
            p = os.path.join(str(ASM_DIR), r["cls_esc"], r["mth_esc"] + ".asm")
            with open(p, "w", encoding="utf-8") as fh:
                fh.write(asm)
        if write_md:
            c = None
            if decomp_root:
                cp = os.path.join(decomp_root, r["cls_esc"], r["mth_esc"] + ".c")
                if os.path.isfile(cp):
                    with open(cp, "r", encoding="utf-8", errors="replace") as fh:
                        c = fh.read()
            if not c:
                c = legacy_c.get(r["addr"])
            md = func_md_text(r, asm, c)
            p = os.path.join(out_dir, r["cls_esc"], r["mth_esc"] + ".md")
            with open(p, "w", encoding="utf-8") as fh:
                fh.write(md)
        n += 1
    return n


def _chunks(n, jobs, size=None):
    del size
    jobs = max(1, min(jobs, n or 1))
    step = max(1, (n + jobs - 1) // jobs)
    out = []
    i = 0
    while i < n:
        out.append((i, min(n, i + step)))
        i += step
    return out


def _prepare_shared(bin_path, disasm_path, out_dir, rows):
    t0 = _now()
    ensure_disasm(bin_path, disasm_path)
    print("解析 objdump …", flush=True)
    addrs, texts = load_objdump_insns(disasm_path)
    print("  指令数: {}  ({:.1f}s)".format(len(addrs), _now() - t0), flush=True)
    t1 = _now()
    print("build_addr_map …", flush=True)
    addr_info = build_addr_map(str(bin_path))
    print("  addr_map 就绪 ({:.1f}s)".format(_now() - t1), flush=True)
    exact, starts, by_start = build_sym_index(rows)
    _G["addrs"] = addrs
    _G["texts"] = texts
    _G["rows"] = rows
    _G["addr_info"] = addr_info
    _G["exact"] = exact
    _G["starts"] = starts
    _G["by_start"] = by_start
    _G["out_dir"] = str(out_dir)
    _G["decomp_root"] = str(DECOMP_DIR) if DECOMP_DIR.is_dir() else None


def write_indexes(out_dir: Path, rows, n_ok: int) -> None:
    by_cls = defaultdict(list)
    for r in rows:
        by_cls[r["cls_esc"]].append(r)
    for cls_esc, items in by_cls.items():
        items = sorted(items, key=lambda x: (x["mth"], x["addr"]))
        lines = [
            "# {}\n".format(items[0]["cls"]),
            "函数数: {}\n".format(len(items)),
            "| 地址 | 函数 | mangled | 报告 |",
            "|---|---|---|---|",
        ]
        for r in items:
            lines.append("| `0x{:08x}` | `{}` | `{}` | [{}]({}.md) |".format(
                r["addr"], r["dem"] or r["mth"], r["mangled"],
                r["mth_esc"], r["mth_esc"]))
        (out_dir / cls_esc / "README.md").write_text(
            "\n".join(lines) + "\n", encoding="utf-8")
    ranked = sorted(by_cls.items(), key=lambda kv: (-len(kv[1]), kv[0]))
    idx = [
        "# df_game_r 类函数报告索引（每函数一份）\n",
        "> 每类一个文件夹，每个函数一份 Markdown。"
        "旧的一类一份 `*.md` 仍保留在本目录，未被删除。\n",
        "> 生成管线：`tools/class_reports/`"
        "（01 清单 → 02/04 多进程切分组装）。\n",
        "## 统计\n",
        "- 类文件夹: {}".format(len(by_cls)),
        "- 函数报告: {}".format(n_ok),
        "",
        "## 按函数数排序\n",
        "| 函数数 | 类 |",
        "|---|---|",
    ]
    for cls_esc, items in ranked:
        idx.append("| {} | [{}]({}/README.md) |".format(
            len(items), items[0]["cls"], cls_esc))
    (out_dir / "INDEX.md").write_text("\n".join(idx) + "\n", encoding="utf-8")


def _run_pool(jobs, n, write_asm, write_md):
    specs = [(a, b, write_asm, write_md) for a, b in _chunks(n, jobs)]
    t0 = _now()
    n_ok = 0
    # fork：子进程继承 _G，避免把 100MB+ addr_map pickle 到每个 worker
    ctx = mp.get_context("fork")
    ctx_jobs = min(jobs, len(specs))
    with ctx.Pool(processes=ctx_jobs) as pool:
        for k, got in enumerate(pool.imap_unordered(_worker_chunk, specs, chunksize=1), 1):
            n_ok += got
            print("  chunk {}/{}  已写 {}  ({:.1f}s)".format(
                k, len(specs), n_ok, _now() - t0), flush=True)
    return n_ok


def cmd_extract(bin_path: Path, disasm_path: Path, jobs: int) -> None:
    rows = load_funcs_tsv()
    if not rows:
        sys.exit("funcs.tsv 为空，请先跑 01_gen_manifest")
    _prepare_shared(bin_path, disasm_path, DEFAULT_OUT, rows)
    _G["legacy_c"] = {}
    if ASM_DIR.exists():
        shutil.rmtree(ASM_DIR)
    for r in rows:
        os.makedirs(ASM_DIR / r["cls_esc"], exist_ok=True)
    n_ok = _run_pool(jobs, len(rows), write_asm=True, write_md=False)
    print("汇编切分完成: {} 个函数".format(n_ok))


def cmd_assemble(out_dir: Path, jobs: int) -> None:
    rows = load_funcs_tsv()
    if not rows:
        sys.exit("funcs.tsv 为空")
    out_dir.mkdir(parents=True, exist_ok=True)
    print("读取旧报告中的 Ghidra C …", flush=True)
    t0 = _now()
    legacy_c = load_legacy_c(out_dir, jobs)
    print("  旧 C 函数: {}  ({:.1f}s)".format(len(legacy_c), _now() - t0), flush=True)
    n = 0
    missing_asm = 0
    by_cls = defaultdict(list)
    for r in rows:
        asm_p = ASM_DIR / r["cls_esc"] / (r["mth_esc"] + ".asm")
        if not asm_p.is_file():
            missing_asm += 1
            continue
        asm = asm_p.read_text(encoding="utf-8", errors="replace")
        cp = DECOMP_DIR / r["cls_esc"] / (r["mth_esc"] + ".c")
        c = None
        if cp.is_file():
            c = cp.read_text(encoding="utf-8", errors="replace")
        if not c:
            c = legacy_c.get(r["addr"])
        d = out_dir / r["cls_esc"]
        d.mkdir(parents=True, exist_ok=True)
        (d / (r["mth_esc"] + ".md")).write_text(func_md_text(r, asm, c), encoding="utf-8")
        by_cls[r["cls_esc"]].append(r)
        n += 1
    write_indexes(out_dir, rows, n)
    print("报告数: {} 函数 / {} 类  缺汇编={}  → {}".format(
        n, len(by_cls), missing_asm, out_dir))


def cmd_all(bin_path: Path, out_dir: Path, jobs: int) -> None:
    t_all = _now()
    cmd_manifest(bin_path)
    rows = load_funcs_tsv()
    out_dir.mkdir(parents=True, exist_ok=True)
    print("读取旧报告中的 Ghidra C …", flush=True)
    t0 = _now()
    legacy_c = load_legacy_c(out_dir, jobs)
    print("  旧 C 函数: {}  ({:.1f}s)".format(len(legacy_c), _now() - t0), flush=True)
    _prepare_shared(bin_path, DISASM_PATH, out_dir, rows)
    _G["legacy_c"] = legacy_c
    print("预建 {} 个类目录 …".format(len({r["cls_esc"] for r in rows})), flush=True)
    for cls in {r["cls_esc"] for r in rows}:
        os.makedirs(out_dir / cls, exist_ok=True)
    print("多进程写出 md（{} 路）…".format(jobs), flush=True)
    n_ok = _run_pool(jobs, len(rows), write_asm=False, write_md=True)
    write_indexes(out_dir, rows, n_ok)
    print("报告数: {} 函数 / {} 类  → {}".format(
        n_ok, len({r["cls_esc"] for r in rows}), out_dir))
    print("总耗时 {:.1f}s".format(_now() - t_all))


def main():
    jobs_d = _jobs_default()
    ap = argparse.ArgumentParser(description=__doc__)
    sub = ap.add_subparsers(dest="cmd", required=True)
    p_m = sub.add_parser("manifest")
    p_m.add_argument("bin", nargs="?", default=str(DEFAULT_BIN))
    p_e = sub.add_parser("extract")
    p_e.add_argument("disasm", nargs="?", default=str(DISASM_PATH))
    p_e.add_argument("--bin", default=str(DEFAULT_BIN))
    p_e.add_argument("-j", "--jobs", type=int, default=jobs_d)
    p_a = sub.add_parser("assemble")
    p_a.add_argument("out", nargs="?", default=str(DEFAULT_OUT))
    p_a.add_argument("-j", "--jobs", type=int, default=jobs_d)
    p_all = sub.add_parser("all")
    p_all.add_argument("--bin", default=str(DEFAULT_BIN))
    p_all.add_argument("--out", default=str(DEFAULT_OUT))
    p_all.add_argument("-j", "--jobs", type=int, default=jobs_d)
    args = ap.parse_args()
    jobs = max(1, getattr(args, 'jobs', jobs_d))
    if args.cmd == "manifest":
        cmd_manifest(Path(args.bin))
    elif args.cmd == "extract":
        cmd_extract(Path(args.bin), Path(args.disasm), jobs)
    elif args.cmd == "assemble":
        cmd_assemble(Path(args.out), jobs)
    elif args.cmd == "all":
        cmd_all(Path(args.bin), Path(args.out), jobs)


if __name__ == "__main__":
    main()
