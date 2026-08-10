#!/usr/bin/env python3
import re
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent / 'toolchain'))
from compare_common import (
    demangle_batch,
    disasm_slice,
    load_disasm,
    norm_line,
)

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = ROOT / 'dnf_decompile/build/community/df_community_r'
OBJ_DIR = ROOT / 'dnf_decompile/build/community/CMakeFiles/df_community_r.dir'
OUT_TSV = ROOT / 'dnf_decompile/build/community/df_community_r_function_compare.tsv'
OUT_MD = ROOT / 'dnf_decompile/build/community/df_community_r_function_validation.md'


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def nm_map(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = []
    for line in out.splitlines():
        parts = line.split(None, 3)
        if len(parts) < 4:
            continue
        addr, size, sym_type, name = parts
        if sym_type not in {'T', 't', 'W', 'w'}:
            continue
        rows.append((name, sym_type, size, int(addr, 16)))
    dem = demangle_batch([r[0] for r in rows])
    return {r[0]: (r[1], r[2], dem.get(r[0], r[0]), r[3]) for r in rows}


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


_DIS_CACHE = {}


def disasm_sig(bin_path, addr, size):
    """Return (normalized_instruction_texts, mnemonic_sequence) for a range."""
    loaded = _DIS_CACHE.get(bin_path)
    if loaded is None:
        loaded = _DIS_CACHE[bin_path] = load_disasm(bin_path)
    texts, seq = [], []
    for ins in disasm_slice(loaded, addr, addr + size):
        texts.append(norm_line(ins))
        seq.append(ins.split()[0])
    return texts, seq


def main():
    orig_nm = nm_map(ORIG)
    new_nm = nm_map(NEW)
    rows = []

    for obj in sorted(OBJ_DIR.rglob('*.cpp.o')):
        rel = obj.relative_to(OBJ_DIR).as_posix()
        for sym in sorted(set(obj_funcs(obj))):
            if sym not in new_nm:
                continue

            _typ, new_size, demangled, n_addr = new_nm[sym]
            in_orig = sym in orig_nm
            orig_size = orig_nm[sym][1] if in_orig else ''
            o_addr = orig_nm[sym][3] if in_orig else 0

            new_texts, new_seq = disasm_sig(NEW, n_addr, int(new_size, 16))
            old_texts, old_seq = (
                disasm_sig(ORIG, o_addr, int(orig_size, 16)) if in_orig else ([], []))

            # 统一严格口径：除直接跳转/调用目标地址外，指令文本逐条一致
            exact = in_orig and bool(new_texts) and (new_texts == old_texts)
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
                'identical': 'yes' if exact else 'no',
                'mnemonic_overlap': overlap,
            })

    with OUT_TSV.open('w', encoding='utf-8') as f:
        f.write('file\tsymbol\tdemangled\tin_original\tnew_size_hex\torig_size_hex\tnew_insn_count\torig_insn_count\tidentical\tmnemonic_overlap\n')
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
                    r['identical'],
                    r['mnemonic_overlap'],
                )
            )

    total = len(rows)
    in_orig = sum(1 for r in rows if r['in_original'])
    exact = sum(1 for r in rows if r['identical'] == 'yes')
    avg_overlap = (sum(r['mnemonic_overlap'] for r in rows if r['in_original']) / in_orig) if in_orig else 0.0

    per_file = defaultdict(lambda: {'total': 0, 'in_orig': 0, 'exact': 0, 'ov_sum': 0.0})
    for r in rows:
        p = per_file[r['file']]
        p['total'] += 1
        if r['in_original']:
            p['in_orig'] += 1
            p['ov_sum'] += r['mnemonic_overlap']
        if r['identical'] == 'yes':
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
        f.write('- IDENTICAL（统一严格口径，仅归一化跳转/调用目标地址）函数数：`{}`\n'.format(exact))
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
    print('TOTAL={} IN_ORIG={} IDENTICAL={} AVG_OVERLAP={:.2f}%'.format(total, in_orig, exact, avg_overlap * 100.0))


if __name__ == '__main__':
    main()
