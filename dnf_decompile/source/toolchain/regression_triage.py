#!/usr/bin/env python3
"""Generate a first-pass triage table for the remaining non-identical md files.

This is a decision aid for the v2 workflow, not a source-of-truth classifier.
It reads the actual md files on disk and emits one row per function with:

    service, name, status, diff_pm, same_mnemonic, call_diff_orig,
    call_diff_new, has_eh, src_ok, src_file, attempts, bucket, reason

The bucket order intentionally puts real call-set differences first.
"""
import argparse
import difflib
import re
import sys
from pathlib import Path


ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
REPORT_ROOT = ROOT / 'function_reports'
DEFAULT_SERVICES = [
    'coserver', 'dbmw', 'guild', 'manager', 'monitor', 'statics'
]

# Calls that are layout/toolchain noise or too generic to treat as real source
# differences.  They must not be the only reason a function goes to CALL_DIFF.
NOISE_PREFIX = (
    '_Unwind_', '__cxa_', '__gxx_personality', '_ZSt9terminate',
    '_ZSt', '_ZNSt', '_ZNKSt', '__libc', '__assert_fail',
    '_ZdlPv', '_Znwj', '_Znwm',
)
NOISE_EXACT = {
    'printf', 'puts', 'fprintf', 'fwrite', 'sprintf', 'vsprintf',
    'vprintf', 'snprintf', 'strlen', 'strcmp', 'strcpy', 'strncpy',
    'memcpy', 'memset', 'malloc', 'free', 'realloc', 'calloc',
    'abort', 'exit', '_exit', 'time', 'localtime', 'localtime_r',
    'strftime', 'mktime', 'gmtime', 'gmtime_r', 'atoi', 'atol',
    'strtoul', 'strtol', '__errno_location', '__stack_chk_fail',
}


def md_files(svc):
    d = REPORT_ROOT / svc
    if not d.exists():
        return []
    return sorted(p for p in d.glob('*.md') if p.name != 'README.md')


def parse_md(path):
    text = path.read_text(errors='replace')
    m = re.search(r'\| (?:[^|]+) \| (DIFF|NEAR|IDENTICAL_AE|IDENTICAL) \|', text)
    status = m.group(1) if m else 'UNKNOWN'

    dm = re.search(r'```diff\s*\n(.*?)```', text, re.S)
    diff = dm.group(1) if dm else ''
    orig = []
    new = []
    for line in diff.splitlines():
        if line.startswith('-') and not line.startswith('---'):
            orig.append(line[1:].strip())
        elif line.startswith('+') and not line.startswith('+++'):
            new.append(line[1:].strip())
        elif not line.startswith(('@@', 'diff ', 'index ')) and line.strip():
            # 共同行（无 +/- 前缀）属于 ORIG 和 OURS 两侧，都纳入，
            # 否则代码顺序不同的函数会把共同调用误判为单侧差异。
            common = line.strip()
            orig.append(common)
            new.append(common)

    sm = re.search(r'定义于 \[([^\]]+)\]', text)
    src = sm.group(1).split(':')[0].strip() if sm else ''
    return text, status, orig, new, src


def mnemonics(insns):
    return [x.split()[0] for x in insns if x.split()]


def call_symbols(insns):
    out = set()
    for x in insns:
        if x.startswith('call'):
            syms = re.findall(r'<([^>]*)>', x)
            if syms:
                out.add(syms[-1])
    return out


def real_calls(insns):
    raw = call_symbols(insns)
    out = set()
    for c in raw:
        if not c or c in NOISE_EXACT:
            continue
        if c.startswith(NOISE_PREFIX):
            continue
        if 'terminate' in c or 'Resume' in c or 'personality' in c:
            continue
        out.add(c)
    return out


def has_eh(insns):
    return any(k in x for x in insns for k in (
        '_Unwind_Resume', '__cxa_', '__gxx_personality',
        '_ZSt9terminate', 'CGuard'
    ))


def has_const_or_offset(orig, new):
    for x in orig + new:
        if re.search(r'\$0x', x):
            return True
        if re.search(r'0x[0-9a-f]+\(%', x):
            return True
        if re.search(r'__assert_fail|movl\s+\$0x[0-9a-f]+,0x8\(%esp\)', x):
            return True
    return False


def same_mnemonics(orig, new):
    return mnemonics(orig) == mnemonics(new)


def classify(status, orig, new, src_ok, diff_pm, real_o, real_n):
    # Real call-target differences almost always mean a source-level miss.
    if real_o or real_n:
        return 'CALL_DIFF', 'real call set differs'
    if not src_ok:
        return 'NEEDS_REVERSE', 'source location missing from md'
    if has_eh(orig + new):
        return 'EH_OR_CLEANUP', 'exception/cleanup pattern present'
    if status == 'NEAR' or same_mnemonics(orig, new):
        return 'CODEGEN_TAIL', 'same mnemonic sequence; operand/codegen tail'
    if has_const_or_offset(orig, new):
        return 'CONST_OR_OFFSET', 'immediate/field/stack offset present'
    if diff_pm <= 20:
        return 'CODEGEN_TAIL', 'very small structural diff'
    return 'NEEDS_REVERSE', 'large mixed structural diff'


def attempts_info(svc, name):
    p = REPORT_ROOT / svc / 'attempts' / f'{name}.tsv'
    if not p.exists():
        return 0
    return sum(1 for _ in p.open(errors='replace'))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--services', nargs='*', default=DEFAULT_SERVICES)
    ap.add_argument('--out', default=str(REPORT_ROOT / '_triage' / 'v2_triage.tsv'))
    args = ap.parse_args()

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    header = [
        'service', 'name', 'status', 'diff_pm', 'same_mnemonic',
        'call_diff_orig', 'call_diff_new', 'has_eh', 'src_ok',
        'src_file', 'attempts', 'bucket', 'reason',
    ]

    rows = []
    for svc in args.services:
        for p in md_files(svc):
            text, status, orig, new, src = parse_md(p)
            diff_pm = len(orig) + len(new)
            sm = same_mnemonics(orig, new)
            ro = real_calls(orig)
            rn = real_calls(new)
            call_o = ro - rn
            call_n = rn - ro
            src_ok = bool(src)
            att = attempts_info(svc, p.stem)
            bucket, reason = classify(
                status, orig, new, src_ok, diff_pm, call_o, call_n)
            rows.append([
                svc, p.stem, status, str(diff_pm),
                'Y' if sm else 'N',
                '|'.join(sorted(call_o)),
                '|'.join(sorted(call_n)),
                'Y' if has_eh(orig + new) else 'N',
                'Y' if src_ok else 'N',
                src,
                str(att),
                bucket,
                reason,
            ])

    with out.open('w', encoding='utf-8') as f:
        f.write('\t'.join(header) + '\n')
        for r in rows:
            f.write('\t'.join(r) + '\n')

    from collections import Counter
    buckets = Counter(r[-2] for r in rows)
    print(f'OUT={out}')
    print(f'ROWS={len(rows)}')
    print('BUCKETS=' + ', '.join(f'{k}:{v}' for k, v in
          sorted(buckets.items(), key=lambda kv: -kv[1])))


if __name__ == '__main__':
    main()
