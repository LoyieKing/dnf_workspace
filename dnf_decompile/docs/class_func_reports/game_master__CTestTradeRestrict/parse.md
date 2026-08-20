# parse

`_ZN11game_master18CTestTradeRestrict5parseEv`

`game_master::CTestTradeRestrict::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CTestTradeRestrict` | `0x084b263a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b263a  _ZN11game_master18CTestTradeRestrict5parseEv
#           game_master::CTestTradeRestrict::parse()
# range [0x084b263a, 0x084b263f]
084b263a +0x00:  push   %ebp
084b263b +0x01:  mov    %esp,%ebp
084b263d +0x03:  pop    %ebp
084b263e +0x04:  ret
084b263f +0x05:  nop
```

## 反编译 C

```c
// game_master::CTestTradeRestrict::parse @ 0x84b263a

/* game_master::CTestTradeRestrict::parse() */

void game_master::CTestTradeRestrict::parse(void)

{
  return;
}
```
