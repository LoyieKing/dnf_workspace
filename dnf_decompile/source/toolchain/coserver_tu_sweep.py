#!/usr/bin/env python3
"""coserver per-TU compiler sweep: switch each TU to 4.1.2-52, relink,
refresh manifest, report official non-identical count, then restore."""
import os
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
OBJ_DIR = ROOT / 'build/coserver/CMakeFiles/coserver.dir'
OBJ_ROOT = OBJ_DIR / 'home/loyieking/dnf_workspace/dnf_decompile/source'
BACKUP = Path('/tmp/coserver_obj_backup')


def run(cmd, **kw):
    return subprocess.run(cmd, shell=True, text=True, capture_output=True, **kw)


def nonidentical_count():
    r = run("cd {} && python3 source/toolchain/gen_report_manifest.py --services coserver 2>&1 | tail -2".format(ROOT))
    m = [l for l in r.stdout.splitlines() if 'non-identical' in l or 'NEAR' in l]
    line = r.stdout.splitlines()[-2] if r.stdout else ''
    import re
    mm = re.search(r"'DIFF': (\d+).*'NEAR': (\d+)", line)
    if mm:
        return int(mm.group(1)) + int(mm.group(2))
    return None


def all_tus():
    tus = []
    for d in (OBJ_ROOT / 'DNFServer/GameServer/COServer',
              OBJ_ROOT / 'DNFServer/ServerCommon',
              OBJ_ROOT / 'shared/packet/src'):
        if d.exists():
            tus += sorted(d.glob('*.cpp.o'))
    return tus


def compile_c5(src, obj):
    tc = ROOT / 'source/toolchain/cmake/dnf_c5r52_gxx.sh'
    t = '/tmp/c5r52tool'
    flags = ("-m32 -O0 -fno-enforce-eh-specs -nostdinc "
             "-isystem {t}/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include "
             "-isystem {t}/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed "
             "-isystem {t}/usr/include/c++/4.1.2 "
             "-isystem {t}/usr/include/c++/4.1.2/x86_64-redhat-linux "
             "-isystem {t}/usr/include/c++/4.1.2/backward "
             "-isystem {t}/usr/include "
             "-I{ROOT}/source/DNFServer/ServerCommon "
             "-I{ROOT}/source/DNFServer/GameServer/COServer "
             "-I{ROOT}/source/shared/packet/include "
             "-I{ROOT}/source/shared -I{ROOT}/source/shared/common/include "
             "-DDF_NO_CODEPAGE").format(t=t, ROOT=ROOT)
    r = run("(cd {} && '{}' {} -c '{}' -o '{}')".format(
        src.parent, tc, flags, src.name, obj))
    return r.returncode == 0, r.stdout + r.stderr


def main():
    BACKUP.mkdir(exist_ok=True)
    base = nonidentical_count()
    print('baseline non-identical:', base)
    results = []
    for obj in all_tus():
        sobj = str(obj)
        src = ROOT / Path(sobj.rsplit('/dnf_decompile/', 1)[-1]) if 'dnf_decompile/' in sobj else obj
        src = Path(str(src)[:-2])
        if not src.exists():
            continue
        # skip TUs not actually rebuilt by CMake (e.g. stale)
        bak = BACKUP / obj.name
        shutil.copy2(obj, bak)
        ok, err = compile_c5(src, obj)
        if not ok:
            results.append((obj.name, 'COMPILE_FAIL'))
            shutil.copy2(bak, obj)
            continue
        # relink
        r = run("cmake --build {}/build/coserver -j{} >/dev/null 2>&1".format(ROOT, os.cpu_count()))
        cnt = nonidentical_count()
        delta = (cnt - base) if cnt is not None else None
        results.append((obj.name, cnt, delta))
        # restore
        shutil.copy2(bak, obj)
        run("cmake --build {}/build/coserver -j{} >/dev/null 2>&1".format(ROOT, os.cpu_count()))
        print('{:<34} count={} delta={}'.format(obj.name, cnt, delta), flush=True)
    print('\n=== sweep summary ===')
    for r in results:
        print(r)
    # final restore check
    cnt = nonidentical_count()
    print('final count (should equal baseline {}): {}'.format(base, cnt))


if __name__ == '__main__':
    main()
