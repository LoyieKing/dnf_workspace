# parse

`_ZN11game_master16CClearRewardTest5parseEv`

`game_master::CClearRewardTest::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CClearRewardTest` | `0x084b2a02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b2a02  _ZN11game_master16CClearRewardTest5parseEv
#           game_master::CClearRewardTest::parse()
# range [0x084b2a02, 0x084b2a07]
084b2a02 +0x00:  push   %ebp
084b2a03 +0x01:  mov    %esp,%ebp
084b2a05 +0x03:  pop    %ebp
084b2a06 +0x04:  ret
084b2a07 +0x05:  nop
```

## 反编译 C

```c
// game_master::CClearRewardTest::parse @ 0x84b2a02

/* game_master::CClearRewardTest::parse() */

void game_master::CClearRewardTest::parse(void)

{
  return;
}
```
