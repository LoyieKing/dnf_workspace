#!/usr/bin/env python3
"""CMyFileLog 行号对齐工具。

把 `CMyFileLog log("Name", 0xNN);` 恢复为 `DNF_LOG_SCOPE();`
（= `CMyFileLog log(__FUNCTION__, __LINE__)`），并通过在调用点前插入空行，
使 __LINE__ 精确等于原 0xNN。

用法：
  align_log_lines.py check   <file.cpp>   # 只报告可行性
  align_log_lines.py apply   <file.cpp>   # 对齐 + 转换为宏（幂等，先 check）

约束：不删除任何代码行/注释，只增删空行；调用点目标行号必须严格递增，
且相邻调用点之间现有非空行数 ≤ 目标行号差，否则报不可行并列出原因。
"""
import re
import sys

PAT = re.compile(r'^(?P<ind>\s*)CMyFileLog log\("(?P<name>[^"]+)", (?P<val>0x[0-9a-fA-F]+|\d+)\);')


def load_sites(lines):
    sites = []
    for i, l in enumerate(lines, 1):
        m = PAT.search(l)
        if m:
            sites.append((i, int(m.group("val"), 16), m.group("name")))
    return sites


def check(lines):
    sites = load_sites(lines)
    problems = []
    for k in range(len(sites) - 1):
        ca, ta, _ = sites[k]
        cb, tb, _ = sites[k + 1]
        if tb <= ta:
            problems.append((ca, ta, cb, tb, "目标行号未递增"))
            continue
        nonblank = sum(1 for l in lines[ca:cb - 1] if l.strip())
        gap = tb - ta - 1
        if nonblank > gap:
            problems.append((ca, ta, cb, tb, f"非空行 {nonblank} > 目标间距 {gap}"))
    return sites, problems


def apply(fname):
    lines = open(fname).read().splitlines()
    sites, problems = check(lines)
    if problems:
        print(f"[FAIL] {fname}: {len(problems)} 处不可行：")
        for p in problems[:10]:
            print("   ", p)
        return 1
    if not sites:
        print(f"[SKIP] {fname}: 无 CMyFileLog log 调用")
        return 0
    out = []
    offset = 0
    si = 0
    for idx, l in enumerate(lines):
        lineno = idx + 1
        if si < len(sites) and lineno == sites[si][0]:
            cur = lineno + offset
            need = sites[si][1] - cur
            if need < 0:
                print(f"[FAIL] {fname}: 行 {lineno} 需要负填充")
                return 1
            out.extend([""] * need)
            offset += need
            si += 1
        m = PAT.match(l)
        out.append(m.group("ind") + "DNF_LOG_SCOPE();" if m else l)
    new_sites = load_sites(out)
    assert [t for _, t, _ in new_sites] == [t for _, t, _ in sites]
    open(fname, "w").write("\n".join(out) + "\n")
    print(f"[OK] {fname}: {len(sites)} 处已对齐并转换，文件 {len(lines)}->{len(out)} 行")
    return 0


if __name__ == "__main__":
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    mode, fname = sys.argv[1], sys.argv[2]
    lines = open(fname).read().splitlines()
    sites, problems = check(lines)
    print(f"== {fname}: {len(sites)} 个调用点")
    for s in sites:
        print(f"   当前行 {s[0]:5d}  目标 {s[1]:5d}  {s[2]}")
    if mode == "check":
        print("不可行对:", len(problems))
        for p in problems[:15]:
            print("   ", p)
    elif mode == "apply":
        sys.exit(apply(fname))
