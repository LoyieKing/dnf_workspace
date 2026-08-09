#!/usr/bin/env python3
"""严格归一化口径（2026-08-08 用户新规）：

IDENTICAL 判定只对「跳转/调用指令的目标地址」做归一化：
- `jmp/jcc/call 0xADDR <SYM[+0xOFF]>`  ->  `jmp/jcc/call <SYM[+0xOFF]>`
  （绝对地址是二进制布局产物，去掉；SYM 与函数内相对偏移 +0xOFF 保留，
   若函数体一致则 +0xOFF 必然一致，可做严格比对）
- 无符号注解的裸跳转地址 `jmp 0xADDR` -> `jmp 0xX`

除此之外一律原样保留：
- 字段/成员偏移 `[eax+0x2c]`、栈槽 `[ebp-0x24]`/`[esp+0x8]`
- 立即数常量 `$0x1c20`、`$0xd2f00`、`$0x8152fb0` 等（包括数据地址）
- call 间接形式 `call *%ebx`
"""
import re


def norm_strict(line):
    m = re.match(r'^(jmp|j[a-z]+|call)(\s+.*)$', line)
    if not m:
        return line
    op, rest = m.group(1), m.group(2)
    # "0xADDR <SYM[+0xOFF]>" -> "<SYM[+0xOFF]>"
    rest = re.sub(r'0x[0-9a-fA-F]+ <([^>]*)>', r'<\1>', rest)
    # bare address without annotation (e.g. "jmp 0x80a0a6e")
    rest = re.sub(r'\b0x[0-9a-fA-F]+\b', '0xX', rest)
    return op + rest


def norm(lines):
    return [norm_strict(x) for x in lines]


def mnemonics(lines):
    return [x.split()[0] for x in lines if x.split()]
