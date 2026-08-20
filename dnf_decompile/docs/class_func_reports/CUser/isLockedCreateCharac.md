# isLockedCreateCharac

`_ZN5CUser20isLockedCreateCharacEv`

`CUser::isLockedCreateCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aae6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aae6  _ZN5CUser20isLockedCreateCharacEv
#           CUser::isLockedCreateCharac()
# range [0x0864aae6, 0x0864aaf5]
0864aae6 +0x00:  push   %ebp
0864aae7 +0x01:  mov    %esp,%ebp
0864aae9 +0x03:  mov    0x8(%ebp),%eax
0864aaec +0x06:  movzbl 0x8d0f2(%eax),%eax
0864aaf3 +0x0d:  pop    %ebp
0864aaf4 +0x0e:  ret
0864aaf5 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isLockedCreateCharac @ 0x864aae6

/* CUser::isLockedCreateCharac() */

CUser __thiscall CUser::isLockedCreateCharac(CUser *this)

{
  return this[0x8d0f2];
}
```
