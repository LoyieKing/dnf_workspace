#!/usr/bin/env python3
"""dbmw scratch-build helper for round-12 class-granular subagents (2026-08-11).

Subagents must NOT rebuild build/dbmw/ or write function_reports/dbmw/.
This helper replicates the CMake compile/link for a chosen TU (or several) in a
private scratch dir under /tmp, so agents can loop:
    edit source -> scratch rebuild -> gen_function_md --check-only --new-bin

Usage:
  python3 source/toolchain/scratch_dbmw_build.py init <name> [TU.cpp ...]
      create /tmp/sub_dbmw_<name>, copy object tree, compile listed TUs, link
  python3 source/toolchain/scratch_dbmw_build.py rebuild <name> [TU.cpp ...]
      recompile listed TUs in the existing scratch dir and relink

TU.cpp is matched by basename (e.g. DBManager.cpp). All TUs must be part of the
dbmw service (they will be; the manifest only contains project functions).
"""
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
BUILD = ROOT / 'build' / 'dbmw'
OBJROOT = BUILD / 'CMakeFiles' / 'dbmw.dir'
FLAGS = OBJROOT / 'flags.make'
LINKTXT = OBJROOT / 'link.txt'
LINK_SH = ROOT / 'source' / 'toolchain' / 'link_dbmw.sh'
SCRATCH_BASE = Path('/tmp')


def parse_flags():
    text = FLAGS.read_text(encoding='utf-8')
    cxx = None
    cxx_flags = None
    per_file = {}      # obj-relative-path -> extra options string
    per_file_inc = {}  # obj-relative-path -> extra include dirs (;-joined)
    for line in text.splitlines():
        if line.startswith('# compile CXX with '):
            cxx = line[len('# compile CXX with '):].strip()
        elif line.startswith('CXX_FLAGS = '):
            cxx_flags = line[len('CXX_FLAGS = '):].strip()
        elif line.startswith('# Custom options: '):
            rest = line[len('# Custom options: '):]
            obj, _, opts = rest.partition(' = ')
            per_file[obj] = opts.strip()
        elif line.startswith('# Custom include directories: '):
            rest = line[len('# Custom include directories: '):]
            obj, _, dirs = rest.partition(' = ')
            per_file_inc[obj] = dirs.strip()
    if not cxx or cxx_flags is None:
        raise SystemExit('parse_flags: cannot read CXX/CXX_FLAGS from %s' % FLAGS)
    return cxx, cxx_flags, per_file, per_file_inc


def find_tu_obj(tu):
    """Find the CMake object path for a TU basename, e.g. DBManager.cpp ->
    CMakeFiles/dbmw.dir/home/.../DBManager.cpp.o"""
    tu = Path(tu).name
    for p in OBJROOT.rglob(tu + '.o'):
        return p.relative_to(BUILD)
    raise SystemExit('TU not found in dbmw build objects: %s' % tu)


def find_src(tu):
    tu = Path(tu).name
    cands = []
    for base in (ROOT / 'source' / 'DNFServer' / 'GameServer' / 'DBMW',
                 ROOT / 'source' / 'DNFServer' / 'ServerCommon',
                 ROOT / 'source' / 'shared'):
        p = base / tu
        if p.exists():
            cands.append(p)
    # fall back: any file under source with this basename
    if not cands:
        for p in (ROOT / 'source').rglob(tu):
            cands.append(p)
    if len(cands) != 1:
        raise SystemExit('source ambiguity for %s: %s' % (tu, cands))
    return cands[0]


def link_txt():
    return LINKTXT.read_text(encoding='utf-8').strip()


def compile_tu(scratch, cxx, cxx_flags, per_file, per_file_inc, tu):
    obj_rel = find_tu_obj(tu)
    src = find_src(tu)
    opts = per_file.get(str(obj_rel), '')
    incs = per_file_inc.get(str(obj_rel), '')
    inc_args = ' '.join('-I' + d for d in incs.split(';') if d)
    out_obj = scratch / obj_rel
    out_obj.parent.mkdir(parents=True, exist_ok=True)
    cmd = '%s %s %s %s -c %s -o %s' % (
        cxx, cxx_flags, opts, inc_args, src, out_obj)
    print('compile:', tu, flush=True)
    subprocess.check_call(cmd, shell=True, cwd=str(scratch))


def link(scratch):
    # link.txt already starts with the link_dbmw.sh wrapper path.
    cmd = link_txt()
    print('link ...', flush=True)
    subprocess.check_call(cmd, shell=True, cwd=str(scratch))
    print('OK -> %s/df_dbmw_r' % scratch, flush=True)


def main():
    if len(sys.argv) < 3:
        raise SystemExit(__doc__)
    mode, name = sys.argv[1], sys.argv[2]
    tus = sys.argv[3:]
    scratch = SCRATCH_BASE / ('sub_dbmw_%s' % name)
    cxx, cxx_flags, per_file, per_file_inc = parse_flags()
    if mode == 'init':
        if scratch.exists():
            shutil.rmtree(scratch)
        shutil.copytree(OBJROOT, scratch / OBJROOT.relative_to(BUILD),
                        ignore=shutil.ignore_patterns('*.make', '*.cmake',
                                                      '*.ts', '*.internal',
                                                      'link.txt', 'flags.make',
                                                      'DependInfo.cmake',
                                                      'progress.make',
                                                      'build.make',
                                                      'cmake_clean.cmake',
                                                      'compiler_depend.*'))
        print('copied object tree -> %s' % scratch, flush=True)
        for tu in tus:
            compile_tu(scratch, cxx, cxx_flags, per_file, per_file_inc, tu)
        link(scratch)
    elif mode == 'rebuild':
        if not scratch.exists():
            raise SystemExit('scratch %s does not exist; run init first' % scratch)
        for tu in tus:
            compile_tu(scratch, cxx, cxx_flags, per_file, per_file_inc, tu)
        link(scratch)
    else:
        raise SystemExit('unknown mode: %s' % mode)


if __name__ == '__main__':
    main()
