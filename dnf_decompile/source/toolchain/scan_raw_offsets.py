#!/usr/bin/env python3
"""扫描源码中仍可能需要语义化替换的裸对象偏移访问。

仅报告表达式级访问，不把布局注释、地址常量和正常序列化缓冲区转换列为候选。
用法：scan_raw_offsets.py [source-root]
"""
from __future__ import print_function
import re
import sys
from pathlib import Path

ROOT = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(__file__).resolve().parents[1]
PATTERNS = (
    re.compile(r"\(char\s*\*\)\s*this\s*\+\s*0x[0-9a-fA-F]+"),
    re.compile(r"\(char\s*\*\)\s*\w+\s*\+\s*(?:\w+\s*\*\s*)?0x[0-9a-fA-F]+"),
    re.compile(r"\*\s*\([^)]*\*\)\s*\(\s*\(char\s*\*\)\s*\w+\s*\+"),
)
SKIP = ("/build/", "/Library3rd/", "/docs/")
count = 0
for path in sorted(ROOT.rglob("*.cpp")) + sorted(ROOT.rglob("*.h")):
    name = str(path)
    if any(part in name for part in SKIP):
        continue
    try:
        lines = path.read_text(errors="ignore").splitlines()
    except OSError:
        continue
    for lineno, line in enumerate(lines, 1):
        code = line.split("//", 1)[0]
        if any(pattern.search(code) for pattern in PATTERNS):
            print("{}:{}:{}".format(path.relative_to(ROOT.parent), lineno, code.strip()))
            count += 1
print("裸偏移候选: {} 条".format(count))
