# getForceDropFlag

`_ZN5CUser16getForceDropFlagEv`

`CUser::getForceDropFlag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f716  _ZN5CUser16getForceDropFlagEv
#           CUser::getForceDropFlag()
# range [0x0868f716, 0x0868f725]
0868f716 +0x00:  push   %ebp
0868f717 +0x01:  mov    %esp,%ebp
0868f719 +0x03:  mov    0x8(%ebp),%eax
0868f71c +0x06:  movzbl 0x70391(%eax),%eax
0868f723 +0x0d:  pop    %ebp
0868f724 +0x0e:  ret
0868f725 +0x0f:  nop
```

## 反编译 C

```c
// CUser::getForceDropFlag @ 0x868f716

/* CUser::getForceDropFlag() */

CUser __thiscall CUser::getForceDropFlag(CUser *this)

{
  return this[0x70391];
}
```
