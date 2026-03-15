#!/usr/bin/env python3
import re
import subprocess
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = ROOT / 'dnf_decompile/source/build-verify-community/df_community_r'
OBJ_DIR = ROOT / 'dnf_decompile/source/build-verify-community/CMakeFiles/df_community_r.dir'
OUT_TSV = ROOT / 'dnf_decompile/source/build-verify-community/df_community_r_function_compare.tsv'
OUT_MD = ROOT / 'dnf_decompile/source/build-verify-community/df_community_r_function_validation.md'


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def demangle(name):
    p = subprocess.run(['c++filt', '-n'], input=name, text=True, capture_output=True, check=True)
    return p.stdout.strip()


def nm_map(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    result = {}
    for line in out.splitlines():
        parts = line.split(None, 3)
        if len(parts) < 4:
            continue
        _addr, size, sym_type, name = parts
        if sym_type not in {'T', 't', 'W', 'w'}:
            continue
        result[name] = (sym_type, size, demangle(name))
    return result


def obj_funcs(obj_path):
    out = run("nm --defined-only '{}'".format(obj_path))
    symbols = []
    for line in out.splitlines():
        parts = line.split()
        if len(parts) == 3:
            _addr, sym_type, name = parts
            if sym_type in {'T', 't', 'W', 'w'}:
                symbols.append(name)
    return symbols


def mnemonic_seq(bin_path, symbol):
    cmd = "objdump -d --no-show-raw-insn --disassemble='{}' '{}'".format(symbol, bin_path)
    try:
        out = run(cmd)
    except Exception:
        return []

    seq = []
    for line in out.splitlines():
        if re.match(r'^\s*[0-9a-fA-F]+:\s', line):
            cols = line.split('\t')
            if len(cols) < 2:
                continue
            ins = cols[1].strip()
            if not ins:
                continue
            seq.append(ins.split()[0])
    return seq


def main():
    orig_nm = nm_map(ORIG)
    new_nm = nm_map(NEW)
    rows = []

    for obj in sorted(OBJ_DIR.rglob('*.cpp.o')):
        rel = obj.relative_to(OBJ_DIR).as_posix()
        for sym in sorted(set(obj_funcs(obj))):
            if sym not in new_nm:
                continue

            _typ, new_size, demangled = new_nm[sym]
            in_orig = sym in orig_nm
            orig_size = orig_nm[sym][1] if in_orig else ''

            new_seq = mnemonic_seq(NEW, sym)
            old_seq = mnemonic_seq(ORIG, sym) if in_orig else []

            exact = in_orig and bool(new_seq) and (new_seq == old_seq)
            if in_orig and new_seq and old_seq:
                c1 = Counter(new_seq)
                c2 = Counter(old_seq)
                common = sum((c1 & c2).values())
                overlap = common / max(len(new_seq), len(old_seq))
            else:
                overlap = 0.0

            rows.append({
                'file': rel,
                'symbol': sym,
                'demangled': demangled,
                'in_original': in_orig,
                'new_size_hex': new_size,
                'orig_size_hex': orig_size,
                'new_insn_count': len(new_seq),
                'orig_insn_count': len(old_seq),
                'mnemonic_exact': 'yes' if exact else 'no',
                'mnemonic_overlap': overlap,
            })

    with OUT_TSV.open('w', encoding='utf-8') as f:
        f.write('file\tsymbol\tdemangled\tin_original\tnew_size_hex\torig_size_hex\tnew_insn_count\torig_insn_count\tmnemonic_exact\tmnemonic_overlap\n')
        for r in rows:
            f.write(
                '{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{:.4f}\n'.format(
                    r['file'],
                    r['symbol'],
                    r['demangled'].replace('\t', ' '),
                    1 if r['in_original'] else 0,
                    r['new_size_hex'],
                    r['orig_size_hex'],
                    r['new_insn_count'],
                    r['orig_insn_count'],
                    r['mnemonic_exact'],
                    r['mnemonic_overlap'],
                )
            )

    total = len(rows)
    in_orig = sum(1 for r in rows if r['in_original'])
    exact = sum(1 for r in rows if r['mnemonic_exact'] == 'yes')
    avg_overlap = (sum(r['mnemonic_overlap'] for r in rows if r['in_original']) / in_orig) if in_orig else 0.0

    per_file = defaultdict(lambda: {'total': 0, 'in_orig': 0, 'exact': 0, 'ov_sum': 0.0})
    for r in rows:
        p = per_file[r['file']]
        p['total'] += 1
        if r['in_original']:
            p['in_orig'] += 1
            p['ov_sum'] += r['mnemonic_overlap']
        if r['mnemonic_exact'] == 'yes':
            p['exact'] += 1

    rank_low = sorted(
        ((k, v) for k, v in per_file.items() if v['in_orig'] > 0),
        key=lambda kv: (kv[1]['ov_sum'] / kv[1]['in_orig'])
    )[:10]

    with OUT_MD.open('w', encoding='utf-8') as f:
        f.write('# df_community_r 逐函数验证报告\n\n')
        f.write('## 已从文件/日志验证（Verified from files/logs）\n\n')
        f.write('- 总函数数（按重建对象文件导出符号统计）：`{}`\n'.format(total))
        f.write('- 原始 ELF 可匹配函数数：`{}`\n'.format(in_orig))
        f.write('- 助记符序列完全一致函数数：`{}`\n'.format(exact))
        f.write('- 原始可匹配函数平均助记符重叠率：`{:.2f}%`\n'.format(avg_overlap * 100.0))
        f.write('- 逐函数明细：`{}`\n\n'.format(OUT_TSV.relative_to(ROOT)))

        f.write('## 每文件函数级摘要\n\n')
        f.write('| File | Func Total | In Original | Exact Match | Avg Mnemonic Overlap |\n')
        f.write('|---|---:|---:|---:|---:|\n')
        for path in sorted(per_file):
            p = per_file[path]
            avg = (p['ov_sum'] / p['in_orig'] * 100.0) if p['in_orig'] else 0.0
            f.write('| `{}` | {} | {} | {} | {:.2f}% |\n'.format(path, p['total'], p['in_orig'], p['exact'], avg))

        f.write('\n## 低重叠优先复核（按文件）\n\n')
        for path, p in rank_low:
            avg = (p['ov_sum'] / p['in_orig'] * 100.0) if p['in_orig'] else 0.0
            f.write('- `{}`: {:.2f}%\n'.format(path, avg))

        f.write('\n## 来自反编译/DWARF 的推断（Inferred from decompile/DWARF）\n\n')
        f.write('- 助记符重叠率高通常表示函数控制流骨架接近，但不等价于完全语义一致。\n')
        f.write('- 重叠率低的文件建议回到 Ghidra 逐函数核对条件分支、异常路径、容器操作与字符串构造逻辑。\n')

    print('TSV={}'.format(OUT_TSV))
    print('MD={}'.format(OUT_MD))
    print('TOTAL={} IN_ORIG={} EXACT={} AVG_OVERLAP={:.2f}%'.format(total, in_orig, exact, avg_overlap * 100.0))


if __name__ == '__main__':
    main()
