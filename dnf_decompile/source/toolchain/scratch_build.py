#!/usr/bin/env python3
"""服务 scratch 构建助手（§0.1 类粒度并行化用，2026-08-11 新增）。

用法:
  python3 source/toolchain/scratch_build.py init    <svc> <scratch>
  python3 source/toolchain/scratch_build.py rebuild <svc> <scratch> [--cxx <wrapper>] <src.cpp> [...]
  python3 source/toolchain/scratch_build.py link    <svc> <scratch>

语义:
  init    : 把 build/<svc>/CMakeFiles/<svc>.dir（全部 .o 与 build.make/flags.make/
            link.txt）复制到 <scratch>/CMakeFiles/<svc>.dir。禁止改动 build/<svc>。
  rebuild : 仅重编列出的 TU（.cpp），使用与 CMake 完全一致的编译器/flags/逐文件
            选项（从 build.make 原样提取 recipe），输出覆盖 scratch 中对应 .o；
            --cxx 可覆盖编译器包装（A/B 试编译 4.1.2 / 4.4.6-3 / 4.4.7 用）。
  link    : 用 link.txt 原命令在 scratch 根目录链接出 <scratch>/df_<svc>_r。

闭环: 改源码 -> rebuild -> link -> gen_function_md.py --check-only --new-bin。
"""
import argparse
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')


def _cmf(svc):
    return ROOT / 'build' / svc / 'CMakeFiles' / ('%s.dir' % svc)


def _read_flags(svc):
    """解析 flags.make 中的 CXX_DEFINES / CXX_INCLUDES / CXX_FLAGS。"""
    flags = {}
    p = _cmf(svc) / 'flags.make'
    for line in p.read_text(encoding='utf-8').splitlines():
        m = re.match(r'^(CXX_[A-Z_]+)\s*=\s*(.*)$', line)
        if m:
            flags[m.group(1)] = m.group(2).strip()
    return flags


def _compile_recipe(svc, src, flags, cxx=None):
    """从 build.make 提取该 TU 的编译 recipe 文本（含逐文件选项）。"""
    src = str(Path(src).resolve())
    obj_rel = 'CMakeFiles/%s.dir/%s' % (svc, src.lstrip('/'))
    build_make = (_cmf(svc) / 'build.make').read_text(encoding='utf-8',
                                                      errors='replace')
    for line in build_make.splitlines():
        line = line.strip()
        if line.startswith('@'):
            line = line[1:]
        if ' -c %s' % src in line and ' -o %s' % obj_rel in line:
            if cxx:
                m = re.match(r'^(\S+)', line)
                if m:
                    line = line.replace(m.group(1), str(cxx), 1)
            for var in ('CXX_DEFINES', 'CXX_INCLUDES', 'CXX_FLAGS'):
                line = line.replace('$(%s)' % var, flags.get(var, ''))
            return line
    raise RuntimeError('未在 build.make 中找到 %s 的编译 recipe' % src)


def cmd_init(svc, scratch):
    scratch = Path(scratch)
    if scratch.exists():
        shutil.rmtree(scratch)
    (scratch / 'CMakeFiles').mkdir(parents=True)
    shutil.copytree(_cmf(svc), scratch / 'CMakeFiles' / ('%s.dir' % svc))
    print('init ok -> %s' % scratch)


def cmd_rebuild(svc, scratch, srcs, cxx=None):
    scratch = Path(scratch)
    cmf = scratch / 'CMakeFiles' / ('%s.dir' % svc)
    flags = _read_flags(svc)
    if cxx:
        cxx = str(Path(cxx).resolve())
    for src in srcs:
        src = Path(src)
        if not src.exists():
            raise RuntimeError('源文件不存在: %s' % src)
        recipe = _compile_recipe(svc, src, flags, cxx)
        subprocess.run(['bash', '-c', 'exec ' + recipe], cwd=str(scratch),
                       check=True)
        print('rebuilt: %s' % src)


def cmd_link(svc, scratch):
    scratch = Path(scratch)
    link_txt = scratch / 'CMakeFiles' / ('%s.dir' % svc) / 'link.txt'
    link_cmd = link_txt.read_text(encoding='utf-8').strip()
    # link.txt 中的 mysqlclient/trees.o 是相对路径（build/<svc> 相对）；
    # 在 scratch 下补一个副本，保证链接原命令可直接执行。
    if 'mysqlclient/trees.o' in link_cmd:
        trees_src = ROOT / 'build' / svc / 'mysqlclient' / 'trees.o'
        if trees_src.exists():
            (scratch / 'mysqlclient').mkdir(parents=True, exist_ok=True)
            shutil.copy2(trees_src, scratch / 'mysqlclient' / 'trees.o')
    subprocess.run(['bash', '-c', 'exec ' + link_cmd], cwd=str(scratch),
                   check=True)
    out = scratch / ('df_%s_r' % svc)
    if not out.exists():
        raise RuntimeError('链接未产出 %s' % out)
    print('link ok -> %s' % out)


def main():
    argv = sys.argv[1:]
    cxx = None
    pos = []
    i = 0
    while i < len(argv):
        if argv[i] == '--cxx' and i + 1 < len(argv):
            cxx = argv[i + 1]
            i += 2
        else:
            pos.append(argv[i])
            i += 1
    if len(pos) < 3:
        print(__doc__)
        sys.exit(2)
    mode, svc, scratch = pos[:3]
    srcs = pos[3:]
    if mode == 'init':
        cmd_init(svc, scratch)
    elif mode == 'rebuild':
        if not srcs:
            print('rebuild 需要至少一个源文件', file=sys.stderr)
            sys.exit(2)
        cmd_rebuild(svc, scratch, srcs, cxx)
    else:
        cmd_link(svc, scratch)


if __name__ == '__main__':
    main()
