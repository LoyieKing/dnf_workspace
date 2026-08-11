#!/usr/bin/env python3
"""community per-TU compiler A/B harness.

Compile each target TU with the 5 candidate compilers (c6446r / c6444r / c6 /
c5 / c5r52) and score target functions against ORIG under a layout-insensitive
normalized text (branch/call targets -> <T>).
"""
import bisect
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/community/df_community_r')
AB = Path('/tmp/community_ab_t')

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm

_BRANCH_RE = re.compile(r"^(j[a-z]*|callq?|loop[a-z]*)\b")

SRC = ROOT / 'source'
INC_COMMON = (
    "-I{SRC}/Community "
    "-I{SRC}/DNFServer/ServerCommon "
    "-isystem{SRC}/Library3rd/Boost/Include "
    "-I{SRC}/shared -I{SRC}/shared/common/include -I{SRC}/shared/packet/include "
    "-D_GNU_SOURCE -pthread -DBOOST_DISABLE_ASSERTS -DDNF_SVC_COMMUNITY"
).format(SRC=SRC)

VARIANTS = {
    # name: (wrapper, extra -B, include flags, cxx_std flag)
    'c6446r': (TOOL / 'cmake/dnf_c6446r_gxx.sh', '-B /tmp/cc1plus446bin/',
               "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
               "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
               "-isystem /tmp/lsd44/v4.4.6/usr/include/c++/4.4.6 "
               "-isystem /tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/x86_64-redhat-linux "
               "-isystem /tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/backward "
               "-isystem /tmp/c6root/usr/include "
               "-isystem /tmp/c5root/usr/include/c++/4.1.2 "
               "-isystem /tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux "
               "-isystem /tmp/c5root/usr/include/c++/4.1.2/backward "
               "-isystem /tmp/c5root/usr/include",
               '-std=gnu++0x'),
    'c6444r': (TOOL / 'cmake/dnf_c6444r_gxx.sh', '-B /tmp/cc1plus444bin/',
               "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
               "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
               "-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4 "
               "-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/i686-redhat-linux "
               "-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/backward "
               "-isystem /tmp/c6root/usr/include "
               "-isystem /tmp/c5root/usr/include/c++/4.1.2 "
               "-isystem /tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux "
               "-isystem /tmp/c5root/usr/include/c++/4.1.2/backward "
               "-isystem /tmp/c5root/usr/include",
               '-std=gnu++0x'),
    'c6':    (TOOL / 'cmake/dnf_c6_gxx.sh', '',
              "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
              "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
              "-isystem /tmp/c6root/usr/include/c++/4.4.7 "
              "-isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux "
              "-isystem /tmp/c6root/usr/include/c++/4.4.7/backward "
              "-isystem /tmp/c6root/usr/include "
              "-isystem /tmp/c5root/usr/include/c++/4.1.2 "
              "-isystem /tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux "
              "-isystem /tmp/c5root/usr/include/c++/4.1.2/backward "
              "-isystem /tmp/c5root/usr/include",
              '-std=gnu++0x'),
    'c5':    (TOOL / 'cmake/dnf_c5_gxx.sh', '',
              "-isystem /tmp/c5root/usr/lib/gcc/x86_64-redhat-linux/4.1.1/include "
              "-isystem /tmp/c5root/usr/lib/gcc/x86_64-redhat-linux/4.1.1/include-fixed "
              "-isystem /tmp/c5root/usr/include/c++/4.1.2 "
              "-isystem /tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux "
              "-isystem /tmp/c5root/usr/include/c++/4.1.2/backward "
              "-isystem /tmp/c5root/usr/include",
              ''),
    'c5r52': (TOOL / 'cmake/dnf_c5r52_gxx.sh', '',
              "-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/include "
              "-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/include-fixed "
              "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2 "
              "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/x86_64-redhat-linux "
              "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/backward "
              "-isystem /tmp/c5r52tool/usr/include",
              ''),
}


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True,
                                   stderr=subprocess.STDOUT)


def syms(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4:
            continue
        addr, size, typ, name = p[0], p[1], p[2], p[3]
        if typ not in {'T', 't', 'W', 'w'}:
            continue
        rows[name] = (int(addr, 16), int(size, 16))
    return rows


def disasm_range(path, addr, size):
    insn, addrs = load_disasm(str(path))
    lo = bisect.bisect_left(addrs, addr)
    hi = bisect.bisect_left(addrs, addr + size)
    return [insn[addrs[i]] for i in range(lo, hi)]


def norm_line(line):
    if _BRANCH_RE.match(line):
        line = re.sub(r'\s*<[^>]*>', '', line)
        line = re.sub(r'(?<![0-9a-zA-Z$*#])0x[0-9a-f]+(?=$|\s)', '<T>', line)
        line = re.sub(r'(?<![0-9a-zA-Z$*#])[0-9a-f]+(?=$|\s)', '<T>', line)
    return line


def mnemonics(insns):
    return [x.split()[0] for x in insns]


def compile_tu(cpp, variant, extra_opts=''):
    wrapper, bflag, incs, std = VARIANTS[variant]
    out_dir = AB / variant
    out_dir.mkdir(parents=True, exist_ok=True)
    obj = out_dir / (Path(cpp).stem + '.o')
    flags = ('-m32 -O0 -fno-enforce-eh-specs -nostdinc {std} {incs} {inc_common} {extra}'
             .format(std=std, incs=incs, inc_common=INC_COMMON, extra=extra_opts))
    cmd = "'{}' {} {} -c '{}' -o '{}'".format(wrapper, bflag, flags, cpp, obj)
    r = subprocess.run(cmd, shell=True, text=True,
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if r.returncode != 0:
        print('!! {} {} FAILED: {}'.format(variant, Path(cpp).name,
                                           r.stdout[-500:]))
        return None
    return obj


def score(name, variant, obj, orig_insns):
    s = syms(obj).get(name)
    if not s:
        return None, None, None
    ours = disasm_range(obj, s[0], s[1])
    o_n = [norm_line(x) for x in orig_insns]
    n_n = [norm_line(x) for x in ours]
    m_orig = mnemonics(orig_insns)
    m_ours = mnemonics(ours)
    match = sum(1 for a, b in zip(o_n, n_n) if a == b)
    m_match = sum(1 for a, b in zip(m_orig, m_ours) if a == b)
    return ours, (match, len(o_n), m_match, len(m_orig)), s


def main():
    tasks = []
    import json
    if len(sys.argv) > 1:
        spec = json.loads(sys.argv[1])
    else:
        spec = {
            'ArchiveLog.cpp': {
                'opts': '-fno-exceptions',
                'funcs': ['_ZN11CArchiveLog8WriteLogEPKc'],
            },
            'NetworkSession.cpp': {
                'opts': '',
                'funcs': ['_ZN15CNetworkSession7ParsingEPKci',
                          '_ZN15CNetworkSession8dispatchEP12PacketHeader'],
            },
            'User.cpp': {
                'opts': '',
                'funcs': ['_ZN5CUser15send_buddy_listEv',
                          '_ZN5CUser34send_other_channel_chat_hyper_linkEP44Packet_Monitor_Other_Channel_Chat_Hyper_LinkPS_',
                          '_ZN5CUser41send_other_channel_chat_result_hyper_linkEP44Packet_Monitor_Other_Channel_Chat_Hyper_Link18ENUM_MONITOR_ERROR'],
            },
            'CommunityServer.cpp': {
                'opts': '',
                'funcs': ['main'],
            },
        }
    o_syms = syms(str(ORIG))
    for cpp, info in spec.items():
        cpp_path = SRC / 'Community' / cpp
        print('==== TU {}'.format(cpp))
        for variant in VARIANTS:
            obj = compile_tu(cpp_path, variant, info['opts'])
            if obj is None:
                continue
            parts = []
            for fn in info['funcs']:
                oa, osz = o_syms.get(fn, (None, None))
                if oa is None:
                    parts.append('{}:no-orig-sym'.format(fn))
                    continue
                orig_insns = disasm_range(str(ORIG), oa, osz)
                ours, sc, s = score(fn, variant, obj, orig_insns)
                if sc is None:
                    parts.append('{}:no-sym'.format(fn))
                    continue
                match, tot, mm, mt = sc
                parts.append('{} {}/{} m{} {}'.format(fn, match, tot,
                                                      mm, mt))
            print('  {:<8} {}'.format(variant, ' | '.join(parts)))


if __name__ == '__main__':
    main()
