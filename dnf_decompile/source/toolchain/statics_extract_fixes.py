#!/usr/bin/env python3
"""Extract per-function call-site corrections from statics md diffs.

For each md file, parse the unified diff block and pair up ORIG (-) / OURS (+)
lines of the same instruction form to list concrete source corrections:
  - function-name arg: ORIG `&_ZZ...E12__FUNCTION__` vs OURS literal
  - line constant: ORIG 0xNNN vs OURS 0xMMM (movl $0xN,0x8(%esp))
  - string: ORIG "A" vs OURS "B"
  - file path (0x4(%esp)): ORIG "./x" vs OURS "./y"
"""
import glob
import re
import os

MD_DIR = '/home/loyieking/dnf_workspace/dnf_decompile/function_reports/statics'

LINECONST = re.compile(r"^([-+])movl\s+\$0x([0-9a-f]+),0x8\(%esp\)$")
FUNCARG = re.compile(r"^([-+])movl\s+(\$&_ZZ.*E12__FUNCTION__|\$\"[A-Za-z_][A-Za-z0-9_]*\"),0x4\(%esp\)$")
STR8 = re.compile(r"^([-+])movl\s+(\$\".*\"),0x8\(%esp\)$")
STR4 = re.compile(r"^([-+])movl\s+(\$\".*\"),0x4\(%esp\)$")


def pair(diff_lines, kind_re):
    """Pair '-' ORIG lines with nearest following '+' OURS lines of same form."""
    minus = []
    plus = []
    for ln in diff_lines:
        m = kind_re.match(ln)
        if not m:
            continue
        if m.group(1) == '-':
            minus.append(m.group(2))
        else:
            plus.append(m.group(2))
    return list(zip(minus, plus))


def sites(diff_lines):
    """Extract per-call-site corrections with context pairing.

    For each call site (ctor + op() pair), ORIG (-) and OURS (+) both set
    [esp+0x8] (line or fmt) and [esp+0x4] (name or file). Walk the diff lines
    and, for each '+' movl $0xN,0x8(%esp), find the nearest surrounding '-'
    movl $0xM,0x8(%esp) and their adjacent string lines.
    """
    out = []
    lines = [l for l in diff_lines if l.startswith(('-', '+'))]
    for idx, l in enumerate(lines):
        if not l.startswith('+'):
            continue
        m = re.match(r"^\+movl\s+\$0x([0-9a-f]+),0x8\(%esp\)$", l)
        if not m:
            continue
        ours_line = int(m.group(1), 16)
        # find nearest preceding ORIG line-const (within 12 lines)
        o = None
        for j in range(max(0, idx - 12), idx):
            om = re.match(r"^-movl\s+\$0x([0-9a-f]+),0x8\(%esp\)$", lines[j])
            if om:
                o = int(om.group(1), 16)
                o_idx = j
                break
        ours_str = None
        orig_str = None
        for j in range(max(0, idx - 6), min(len(lines), idx + 6)):
            sm = re.match(r"^[+-]movl\s+(\$\".*\"),0x8\(%esp\)$", lines[j])
            if sm:
                if lines[j].startswith('+') and ours_str is None:
                    ours_str = sm.group(1)
                elif lines[j].startswith('-') and orig_str is None:
                    orig_str = sm.group(1)
        out.append((o, ours_line, orig_str, ours_str))
    return out


def sites_sep(diff_lines):
    """Extract ORIG and OURS call-site groups independently.

    A site = (line_const, name_arg, file_arg, fmt_arg) from the contiguous
    `movl $0xN,0x8(%esp)` / `movl $name,0x4(%esp)` / `movl $file,0x4(%esp)` /
    `movl $fmt,0x8(%esp)` sequence that precedes a CMyFileLogC1 call.
    """
    import re as _re
    out_o = []
    out_n = []
    cur = {'-': [], '+': []}
    for l in diff_lines:
        if _re.match(r"^[+-]movl\s+\$0x[0-9a-f]+,0x8\(%esp\)$", l):
            cur[l[0]].append(('LINE', l[1:].strip()))
        elif _re.match(r"^[+-]movl\s+\$&_ZZ.*E12__FUNCTION__,0x4\(%esp\)$", l):
            cur[l[0]].append(('NAME', 'FUNCTION'))
        elif _re.match(r"^[+-]movl\s+\$\"[A-Za-z_][A-Za-z0-9_]*\",0x4\(%esp\)$", l):
            cur[l[0]].append(('NAME', l[1:].strip()))
        elif _re.match(r"^[+-]movl\s+\$\"\./log[^\"]*\",0x4\(%esp\)$", l):
            cur[l[0]].append(('FILE', l[1:].strip()))
        elif _re.match(r"^[+-]movl\s+\$\"[^\"]*\",0x8\(%esp\)$", l):
            cur[l[0]].append(('FMT', l[1:].strip()))
        elif _re.match(r"^[+-]call\s+<T> <_ZN10CMyFileLogC1EPKci>$", l):
            cur[l[0]].append(('CTOR', ''))
    # group by CTOR boundaries
    for side, key in (('-', out_o), ('+', out_n)):
        site = []
        for item in cur[side]:
            if item[0] == 'CTOR':
                if site:
                    key.append(site)
                site = []
            else:
                site.append(item)
    return out_o, out_n


def main():
    out = []
    for f in sorted(glob.glob(os.path.join(MD_DIR, '*.md'))):
        name = os.path.basename(f)[:-3]
        if name == 'README':
            continue
        lines = open(f, encoding='utf-8').read().splitlines()
        in_diff = False
        diff_lines = []
        for ln in lines:
            if ln.startswith('```diff'):
                in_diff = True
                continue
            if in_diff and ln.startswith('```'):
                break
            if in_diff:
                diff_lines.append(ln)
        fixes = []
        for m, p in pair(diff_lines, LINECONST):
            if m != p:
                fixes.append('LINE {} -> {}'.format(p, m))
        for m, p in pair(diff_lines, FUNCARG):
            if m != p:
                fixes.append('FUNC {} -> {}'.format(p, m))
        for m, p in pair(diff_lines, STR8):
            if m != p:
                fixes.append('STR8 {} -> {}'.format(p, m))
        for m, p in pair(diff_lines, STR4):
            if m != p:
                fixes.append('STR4 {} -> {}'.format(p, m))
        for (o, u, os_, us) in sites(diff_lines):
            if o is not None and (o != u or (os_ and os_ != us)):
                fixes.append('SITE LINE {:x}->{:x} ORIG_STR {} OURS_STR {}'.format(
                    o, u, os_, us))
        so, sn = sites_sep(diff_lines)
        if so or sn:
            fixes.append('ORIG_SITES {}'.format(so))
            fixes.append('OURS_SITES {}'.format(sn))
        if fixes:
            out.append((name, fixes))
    for name, fixes in out:
        print('== {}'.format(name))
        for fx in fixes:
            print('   {}'.format(fx))


if __name__ == '__main__':
    main()
