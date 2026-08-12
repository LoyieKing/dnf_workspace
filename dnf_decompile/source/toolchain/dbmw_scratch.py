#!/usr/bin/env python3
"""dbmw scratch 构建/复检辅助（第 16 轮子 agent 专用）。

用法:
  python3 source/toolchain/dbmw_scratch.py setup --tag <tag>
      # 一次性：从 build/dbmw 复制全部 .o 到 /tmp/sub_dbmw_<tag>/obj
  python3 source/toolchain/dbmw_scratch.py build --tag <tag> --tus A.cpp,B.cpp
      # 用与 CMake 完全一致的 flags 重编指定 TU 并链接 scratch 二进制
      # /tmp/sub_dbmw_<tag>/df_dbmw_r
  python3 source/toolchain/dbmw_scratch.py check --tag <tag> --funcs <mangled>,...
      # 用 gen_function_md 单函数模式（--check-only，不写报告）复检

子 agent 循环：改源码 -> build -> check 直到输出 "md 已删除" 等价状态
(IDENTICAL / IDENTICAL_AE)。
"""

import argparse
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
BUILD = ROOT / 'build/dbmw'
OBJROOT = BUILD / 'CMakeFiles/dbmw.dir'
TOOLCHAIN = ROOT / 'source/toolchain'
SCRATCH_ROOT = Path('/tmp/sub_dbmw')


def obj_src_rel(o):
    """object 路径 -> 源文件路径（object 布局镜像绝对源路径）"""
    try:
        rel = Path(o).relative_to(OBJROOT)
    except ValueError:
        return None
    src = Path('/') / rel
    src = Path(str(src)[:-2] if str(src).endswith('.o') else str(src))
    return src if src.exists() else None


def src_for_tu(tag, tu):
    """TU -> 编译用源文件：优先 scratch/src/ 下的私有副本，否则工作区源文件。"""
    scratch = SCRATCH_ROOT / tag
    priv = scratch / 'src'
    stem = re.sub(r'\.(cpp|cc|c)$', '', tu)
    for cand in (priv / (stem + '.cpp'), priv / (stem + '.cc'),
                 priv / (stem + '.c')):
        if cand.exists():
            return cand
    matches = [o for o in OBJROOT.rglob('*.o')
               if o.name in (tu + '.o', stem + '.cpp.o', stem + '.cc.o',
                             stem + '.c.o')]
    if not matches:
        raise SystemExit('no object for TU: ' + tu)
    ws = obj_src_rel(matches[0])
    return ws


def parse_flags():
    """从 flags.make 读取 CXX_FLAGS（含 per-file _OPTIONS / _INCLUDE_DIRECTORIES）。"""
    text = (OBJROOT / 'flags.make').read_text()
    m = re.search(r'^CXX_FLAGS = (.*)$', text, re.M)
    base = m.group(1).strip() if m else ''
    opts = {}
    incs = {}
    for line in text.splitlines():
        m = re.match(r'^# Custom options: (\S+\.o_OPTIONS) = (.*)$', line)
        if m:
            opts[m.group(1).replace('.o_OPTIONS', '')] = m.group(2).strip()
            continue
        m = re.match(
            r'^# Custom include directories: (\S+\.o_INCLUDE_DIRECTORIES) = (.*)$',
            line)
        if m:
            incs[m.group(1).replace('.o_INCLUDE_DIRECTORIES', '')] = \
                m.group(2).strip()
    return base, opts, incs


def build_tus(tag, tus, cc_extra=''):
    scratch = SCRATCH_ROOT / tag
    objdir = scratch / 'obj'
    base, opts, incs = parse_flags()
    cxx = str(TOOLCHAIN / 'cmake/dnf_c6_gxx.sh')
    priv = scratch / 'src'
    priv_inc = ('-I' + str(priv)) if priv.exists() else ''
    for tu in tus:
        # 定位 object：build 树里与源文件同名的 .o
        matches = []
        for o in OBJROOT.rglob('*.o'):
            if o.name in (tu + '.o', tu.replace('.cpp', '') + '.cpp.o'):
                matches.append(o)
        if not matches:
            print('ERROR: no object for TU', tu, file=sys.stderr)
            sys.exit(1)
        if len(matches) > 1:
            # 同名冲突（如 StringFormat 多个）；选 DBMW 服务目录内的
            cand = [o for o in matches if 'GameServer/DBMW' in str(o)]
            o = (cand or matches)[0]
        else:
            o = matches[0]
        rel = o.relative_to(OBJROOT)
        dest = objdir / rel
        dest.parent.mkdir(parents=True, exist_ok=True)
        src = obj_src_rel(o)
        if src is None:
            print('ERROR: cannot find source for', o, file=sys.stderr)
            sys.exit(1)
        key = str(o).replace(str(OBJROOT) + '/', '')
        # flags.make 的自定义选项键 = 'CMakeFiles/<svc>.dir/<rel 源路径>'（无 .o 后缀、
        # 带前缀），而这里计算出的 key 是去掉前缀且带 .o 后缀的相对路径；
        # 归一化后再查。
        key_noext = key[:-2] if key.endswith('.o') else key
        prefixed = 'CMakeFiles/dbmw.dir/' + key_noext
        per_opts = opts.get(key, '') or opts.get(key_noext, '') or \
            opts.get(prefixed, '')
        per_incs = incs.get(key, '') or incs.get(key_noext, '') or \
            incs.get(prefixed, '')
        cmd = [cxx] + base.split() + per_opts.split() + per_incs.split()
        if priv_inc:
            # 私有 src 目录优先：quoted include 已按文件所在目录优先，
            # 这里保证 <...> 形式也能命中私有头文件副本。
            cmd.insert(1, priv_inc)
        if cc_extra:
            cmd += cc_extra.split()
        src = src_for_tu(tag, tu)
        cmd += ['-o', str(dest), '-c', str(src)]
        print('CC', rel)
        r = subprocess.run(cmd, cwd=str(scratch))
        if r.returncode != 0:
            print('COMPILE FAILED:', tu, file=sys.stderr)
            sys.exit(1)


def link(tag):
    scratch = SCRATCH_ROOT / tag
    objdir = scratch / 'obj'
    link_txt = (OBJROOT / 'link.txt').read_text()
    # 把 link.txt 中的相对 object 路径指向 scratch objdir（绝对路径）
    link_txt = link_txt.replace('CMakeFiles/dbmw.dir/',
                                str(objdir) + '/')
    # 目标路径
    out = scratch / 'df_dbmw_r'
    link_txt = re.sub(r'(^| )-o [^ ]+', ' -o ' + str(out), link_txt)
    # link_dbmw.sh 需要 bash；直接调用（首 token 是脚本绝对路径）
    argv = link_txt.split()
    print('LINK ->', out)
    env = dict(os.environ)
    env['LD_LIBRARY_PATH'] = '/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib'
    r = subprocess.run(argv, cwd=str(scratch), env=env)
    if r.returncode != 0:
        print('LINK FAILED', file=sys.stderr)
        sys.exit(1)


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest='cmd', required=True)
    p = sub.add_parser('setup')
    p.add_argument('--tag', required=True)
    p.add_argument('--tus', default='',
                   help='同时把指定 TU 源文件复制为私有副本（scratch/src/）')
    p = sub.add_parser('build')
    p.add_argument('--tag', required=True)
    p.add_argument('--tus', required=True)
    p.add_argument('--cc-extra', default='',
                   help='额外编译参数（A/B 工具链实验，如 -B/tmp/cc1plus446bin）')
    p = sub.add_parser('check')
    p.add_argument('--tag', required=True)
    p.add_argument('--funcs', required=True)
    args = ap.parse_args()

    if args.cmd == 'setup':
        scratch = SCRATCH_ROOT / args.tag
        if scratch.exists():
            shutil.rmtree(scratch)
        objdir = scratch / 'obj'
        shutil.copytree(OBJROOT, objdir,
                        ignore=shutil.ignore_patterns('*.d', '*.i', '*.s'))
        if args.tus:
            priv = scratch / 'src'
            priv.mkdir(parents=True, exist_ok=True)
            for tu in [t.strip() for t in args.tus.split(',') if t.strip()]:
                src = src_for_tu(args.tag, tu)
                shutil.copy2(src, priv / src.name)
                print('priv src:', priv / src.name)
        print('setup ok:', objdir)
        link(args.tag)
        return

    if args.cmd == 'build':
        build_tus(args.tag,
                  [t.strip() for t in args.tus.split(',') if t.strip()],
                  args.cc_extra)
        link(args.tag)
        return

    if args.cmd == 'check':
        out = SCRATCH_ROOT / args.tag / 'df_dbmw_r'
        funcs = [f.strip() for f in args.funcs.split(',') if f.strip()]
        for f in funcs:
            r = subprocess.run([
                sys.executable, str(TOOLCHAIN / 'gen_function_md.py'),
                '--services', 'dbmw', '--function', f,
                '--new-bin', str(out), '--check-only',
            ], cwd=str(ROOT))
            if r.returncode != 0:
                sys.exit(r.returncode)


if __name__ == '__main__':
    main()
