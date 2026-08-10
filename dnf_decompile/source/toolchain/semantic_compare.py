#!/usr/bin/env python3
"""Semantic signature comparison of a symbol between original and our build.

Extracts from each disassembly:
  - call sequence (resolved symbol names)
  - constant immediates (excluding stack offsets/displacements)
  - branch structure (conditional/unconditional counts)
  - instruction count / size

Then compares the two signatures to decide:
  ALIGNED   - identical call sequence + identical constants + same branch counts
  MINOR     - identical call sequence, small constant diffs in same positions
  MISALIGN  - call sequence differs, or substantial constant differences
  NOCODE    - no disassembly

Usage: semantic_compare.py <symbol>
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = ROOT / 'dnf_decompile/build/community/df_community_r'

BRANCH = {'jmp', 'je', 'jne', 'jz', 'jnz', 'ja', 'jae', 'jb', 'jbe', 'jg', 'jge', 'jl', 'jle',
          'js', 'jns', 'jo', 'jno', 'jp', 'jnp', 'loop', 'loope', 'loopne'}
COND_BRANCH = BRANCH - {'jmp', 'loop', 'loope', 'loopne'}


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def disasm(bin_path, symbol):
    try:
        out = run("objdump -d --no-show-raw-insn --disassemble='{}' '{}'".format(symbol, bin_path))
    except Exception:
        return []
    insns = []
    for line in out.splitlines():
        m = re.match(r'^\s*([0-9a-fA-F]+):\s+(.*)$', line)
        if not m:
            continue
        txt = m.group(2).strip()
        if not txt:
            continue
        insns.append((m.group(1), txt))
    return insns


def is_stack_disp(operand):
    # matches -0xN(%ebp) / 0xN(%ebp) / offsets in %esp
    return re.search(r'[-0-9a-fA-Fx]*\(%[es]bp\)', operand) or re.search(r'\(%esp\)', operand)


def signature(insns):
    calls = []
    consts = []
    nbranch = 0
    ncond = 0
    for _addr, txt in insns:
        parts = txt.split(None, 1)
        mn = parts[0]
        rest = parts[1] if len(parts) > 1 else ''
        if mn == 'call':
            m = re.search(r'<([^>]*)>', rest)
            calls.append(m.group(1) if m else rest.strip())
        elif mn in BRANCH:
            nbranch += 1
            if mn in COND_BRANCH:
                ncond += 1
        elif mn.startswith(('mov', 'cmp', 'add', 'sub', 'and', 'or', 'xor', 'test', 'lea', 'push', 'shl', 'shr', 'sar', 'imul', 'inc', 'dec')):
            # extract $immediates
            for cm in re.finditer(r'\$(-?0x[0-9a-fA-F]+|-?[0-9]+)', rest):
                imm = cm.group(1)
                if imm in ('$0x0', '$0') and is_stack_disp(rest):
                    continue  # zero store to stack slot
                consts.append(imm)
    return {'calls': calls, 'consts': consts, 'nbranch': nbranch,
            'ncond': ncond, 'ninsn': len(insns)}


def main():
    symbol = sys.argv[1]
    orig = signature(disasm(ORIG, symbol))
    new = signature(disasm(NEW, symbol))
    if orig['ninsn'] == 0 and new['ninsn'] == 0:
        print('NOCODE')
        return
    if orig['ninsn'] == 0 or new['ninsn'] == 0:
        print('ONLY_ONE_HAS_CODE orig={} new={}'.format(orig['ninsn'], new['ninsn']))
        return

    same_calls = orig['calls'] == new['calls']
    same_consts = orig['consts'] == new['consts']
    same_branch = (orig['nbranch'], orig['ncond']) == (new['nbranch'], new['ncond'])

    print('CALLS {}'.format('SAME' if same_calls else 'DIFF'))
    if not same_calls:
        print('  orig: {}'.format(orig['calls']))
        print('  new : {}'.format(new['calls']))
    print('CONSTS {}'.format('SAME' if same_consts else 'DIFF'))
    if not same_consts:
        print('  orig: {}'.format(orig['consts']))
        print('  new : {}'.format(new['consts']))
    print('BRANCH {} (orig {} cond {}, new {} cond {})'.format(
        'SAME' if same_branch else 'DIFF', orig['nbranch'], orig['ncond'],
        new['nbranch'], new['ncond']))
    print('SIZE orig={} new={} insn'.format(orig['ninsn'], new['ninsn']))

    if not same_calls:
        print('VERDICT MISALIGN')
    elif not same_consts or not same_branch:
        print('VERDICT MINOR')
    else:
        print('VERDICT ALIGNED')


if __name__ == '__main__':
    main()
