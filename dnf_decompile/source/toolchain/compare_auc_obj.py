#!/usr/bin/env python3
"""Wave4 辅助：把 auction 单个 CU 的「原始二进制函数」与「重建 .o 函数」做助记符+调用集比对。
用法: python3 compare_auc_obj.py <CU> <obj.o> [--sym 'substring']
说明: 与 compare_auc_tu.py 同口径（严格 DWARF 项目符号 + norm/mnemonic），
      但 NEW 侧是单个目标文件，便于子代理在不动 build-auction 的情况下自校验。
"""
import re, subprocess, sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import norm_identical

sys.path.insert(0, '/tmp')
import auclib

def dem(n):
    return subprocess.run(['c++filt', '-n'], input=n, text=True, capture_output=True).stdout.strip()

def mnem(l):
    return [x.split()[0] for x in l if x.split()]

def strict_syms(cu):
    f = Path(f'/tmp/auc_{cu}_fns.txt')
    if not f.exists():
        hits = list(Path('/tmp').glob(f'auc_*{cu}*_fns.txt')) + list(Path('/tmp').glob(f'auc_{cu}_fns.txt'))
        if not hits:
            raise SystemExit(f'no fn list for {cu}')
        f = hits[0]
    syms = []
    for line in f.read_text(errors='replace').splitlines():
        m = re.match(r'\s*\d+\s+0x[0-9a-f]+\s+line=\s*\d+\s+.*\[(_Z[^]]*|main)\]', line)
        if m:
            syms.append(m.group(1))
    return syms

def obj_dis(obj, name):
    """Return (instr_lines, call_targets) for one symbol in an object file."""
    def run(n):
        try:
            out = subprocess.check_output(
                ['objdump', '-d', '-r', '--no-show-raw-insn', '-M', 'intel',
                 f'--disassemble={n}', obj], text=True, stderr=subprocess.DEVNULL)
        except subprocess.CalledProcessError:
            return [], []
        lines, relocs = [], {}
        for l in out.splitlines():
            rm = re.match(r'\s*([0-9a-f]+):\s+R_386_\w+\s+(\S+)', l)
            if rm:
                relocs[int(rm.group(1), 16)] = rm.group(2)
                continue
            m = re.match(r'\s*([0-9a-f]+):\s+(.*)$', l)
            if m:
                lines.append((int(m.group(1), 16), m.group(2).strip()))
        # symbol ranges of the object, for resolving intra-TU call targets
        ranges = []
        try:
            nm_out = subprocess.check_output(['nm', '-S', '--defined-only', obj], text=True)
            for ln in nm_out.splitlines():
                p = ln.split()
                if len(p) >= 4 and p[2] in 'TtWw':
                    ranges.append((int(p[0], 16), int(p[1], 16), p[3]))
        except subprocess.CalledProcessError:
            pass
        ranges.sort()
        def sym_at(addr):
            for a, sz, s in ranges:
                if a <= addr < a + max(sz, 1):
                    return s
            return None
        # next address per instruction (call is 5 bytes: e8 rel32)
        nxt = {}
        for i in range(len(lines) - 1):
            nxt[lines[i][0]] = lines[i + 1][0]
        calls = []
        for addr, txt in lines:
            if txt.startswith('call'):
                t = relocs.get(addr) or relocs.get(addr + 1)
                if t is None:
                    t = sym_at(nxt.get(addr, addr))
                calls.append(t or '?')
        return [txt for _, txt in lines], calls

    instr, calls = run(name)
    if instr:
        return instr, calls
    for alt in (name.replace('C2E', 'C1E').replace('D2E', 'D1E'),
                name.replace('C1E', 'C2E').replace('D1E', 'D2E')):
        if alt != name:
            instr, calls = run(alt)
            if instr:
                return instr, calls
    return [], []

def orig_calls(name):
    a = auclib.disasm(auclib.ORIG, name)
    ts = []
    for x in a:
        if x.startswith('call'):
            m = re.search(r'<([^>]+)>', x)
            ts.append(m.group(1).split('+')[0] if m else x)
    return ts

def main():
    cu, obj = sys.argv[1], sys.argv[2]
    syms = strict_syms(cu)
    filter_s = None
    if '--sym' in sys.argv:
        filter_s = sys.argv[sys.argv.index('--sym') + 1]
    obj_nm = subprocess.check_output(['nm', '-S', '--defined-only', obj], text=True)
    obj_syms = set(re.findall(r'\s(T|t|W|w)\s(\S+)$', obj_nm, re.M))
    obj_syms = {s for _, s in obj_syms if s.startswith('_Z') or s == 'main'}
    stats = {'IDENTICAL': 0, 'NEAR': 0, 'DIFF': 0, 'DIFF+CALL': 0, 'MISSING': 0}
    diffs = []
    for name in sorted(syms):
        if filter_s and filter_s not in name and filter_s not in dem(name):
            continue
        if name not in auclib.load_symbols(auclib.ORIG):
            continue
        if name not in obj_syms:
            stats['MISSING'] += 1
            diffs.append((name, 'MISSING'))
            continue
        a = auclib.disasm(auclib.ORIG, name)
        b, bcalls = obj_dis(obj, name)
        if not a or not b:
            stats['MISSING'] += 1
            diffs.append((name, 'EMPTY'))
            continue
        if norm_identical(a) == norm_identical(b):
            cls = 'IDENTICAL'
        elif mnem(a) == mnem(b):
            cls = 'NEAR'
        else:
            cls = 'DIFF'
        oc = orig_calls(name)
        cm = cls == 'DIFF' and oc != bcalls
        if cm:
            cls = 'DIFF+CALL'
        stats[cls] += 1
        if cls != 'IDENTICAL':
            diffs.append((name, cls, oc, bcalls))
    print(f'== {cu}: {obj}')
    print(f'   {dict(stats)}')
    for d in diffs:
        if len(d) == 2:
            name, cls = d
            print(f'   {cls:9s} {dem(name)}  {name}')
        else:
            name, cls, oc, bc = d
            print(f'   {cls:9s} {dem(name)}')
            if cls == 'DIFF+CALL':
                print(f'            ORIG calls: {oc}')
                print(f'            OBJ  calls: {bc}')

if __name__ == '__main__':
    main()
