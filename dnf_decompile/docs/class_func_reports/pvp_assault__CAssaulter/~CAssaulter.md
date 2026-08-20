# ~CAssaulter

`_ZN11pvp_assault10CAssaulterD1Ev`

`pvp_assault::CAssaulter::~CAssaulter()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6636  _ZN11pvp_assault10CAssaulterD1Ev
#           pvp_assault::CAssaulter::~CAssaulter()
# range [0x082e6636, 0x082e663b]
082e6636 +0x00:  push   %ebp
082e6637 +0x01:  mov    %esp,%ebp
082e6639 +0x03:  pop    %ebp
082e663a +0x04:  ret
082e663b +0x05:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::~CAssaulter @ 0x82e6636

/* pvp_assault::CAssaulter::~CAssaulter() */

void __thiscall pvp_assault::CAssaulter::~CAssaulter(CAssaulter *this)

{
  return;
}
```
