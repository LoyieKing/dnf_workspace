#!/usr/bin/env python3
"""审计头文件 virtual、实现 TU 与单 TU 检查入口。

用法：python3 audit_vtable_headers.py [source-root]
输出 TSV，供报告和人工核对使用；不修改源码。
"""
import pathlib
import re
import sys

root = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else pathlib.Path(__file__).resolve().parents[1])
headers = sorted(root.rglob('*.h'))
source = sorted(root.rglob('*.cpp'))
virtual_re = re.compile(r'\bvirtual\b[^;{]*?(?:\([^;{}]*\))[^;{]*?(?:=\s*0)?\s*;')
class_re = re.compile(r'\bclass\s+([A-Za-z_]\w*)')
method_re = re.compile(r'\b(?:[A-Za-z_]\w*::)?([A-Za-z_]\w*)\s*\([^;{}]*\)')

print('kind\tpath\tclass\tdeclaration')
for h in headers:
    text = h.read_text(errors='replace')
    if 'virtual' not in text:
        continue
    classes = class_re.findall(text)
    owner = classes[-1] if classes else '?'
    for m in virtual_re.finditer(text):
        decl = ' '.join(m.group(0).split())
        print('virtual\t%s\t%s\t%s' % (h.relative_to(root), owner, decl))

print('--- remaining TU includes ---')
for cpp in source:
    if cpp.name == 'GameStubs_remaining.cpp':
        for line in cpp.read_text(errors='replace').splitlines():
            m = re.match(r'\s*#include\s+["<]([^">]+)', line)
            if m:
                print('include\t%s\t%s' % (cpp.relative_to(root), m.group(1)))
