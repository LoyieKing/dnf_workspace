#!/usr/bin/env python3
"""Binary-level per-TU -O sweep for guild (round 3).

For each guild TU, temporarily add "-O<level>" to SRC_OPTS in the guild
CMakeLists, rebuild incrementally, regenerate ALL md, and record the total
md count.  The per-TU choice is the level with the lowest total md.
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
CMAKE = ROOT / 'source/cmake/guild/CMakeLists.txt'
SRC_DIR = ROOT / 'source/DNFServer/GameServer/Guild'

SKIP = {'CFileLogWriterBase.cpp', 'tinyxml.cpp', 'tinyxmlerror.cpp',
        'tinyxmlparser.cpp'}
PRESERVE = [('${SVC_DIR}/DNFGuild.cpp', '-O1')]


def run(cmd, **kw):
    return subprocess.run(cmd, shell=True, text=True, capture_output=True, **kw)


def md_count():
    r = run("find {} -name '*.md' ! -name README.md | wc -l"
            .format(ROOT / 'function_reports/guild'))
    return int(r.stdout.strip())


def patch_opts(pairs):
    txt = CMAKE.read_text()
    txt = re.sub(r'\n\s*"[^"\n]*\|-O[012]"', '', txt)
    ins = '\n'.join('        "{}|{}"'.format(s, o)
                    for s, o in PRESERVE + pairs)
    if PRESERVE or pairs:
        txt = txt.replace(
            '        "${COMMON}/CFileLogWriterBase.cpp|-fno-exceptions"',
            '        "${COMMON}/CFileLogWriterBase.cpp|-fno-exceptions"\n' + ins)
    CMAKE.write_text(txt)


def main():
    base = md_count()
    print('baseline md:', base, flush=True)
    tus = sorted(p.name for p in SRC_DIR.glob('*.cpp')
                 if p.name not in SKIP)
    results = []
    for tu in tus:
        best = None
        for level in ('1', '2'):
            patch_opts([('${SVC_DIR}/' + tu, '-O' + level)])
            r = run("cmake --build {}/build/guild -j{} >/dev/null 2>&1"
                    .format(ROOT, 16))
            if r.returncode != 0:
                print('{} -O{} BUILD FAIL'.format(tu, level), flush=True)
                continue
            run("python3 {}/source/toolchain/gen_function_md.py "
                "--services guild >/dev/null 2>&1".format(ROOT))
            cnt = md_count()
            delta = cnt - base
            results.append((tu, level, cnt, delta))
            print('{:<34} -O{} -> {} (delta {})'.format(
                tu, level, cnt, delta), flush=True)
        patch_opts([])
        run("cmake --build {}/build/guild -j{} >/dev/null 2>&1"
            .format(ROOT, 16))
    print('\n=== sweep summary (TU, level, md, delta) ===')
    for r in results:
        print(r)
    print('final md (should be baseline {}): {}'.format(
        base, md_count()))


if __name__ == '__main__':
    main()
