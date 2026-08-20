# isLockedDeleteCharac

`_ZN5CUser20isLockedDeleteCharacEv`

`CUser::isLockedDeleteCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aa78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aa78  _ZN5CUser20isLockedDeleteCharacEv
#           CUser::isLockedDeleteCharac()
# range [0x0864aa78, 0x0864aa87]
0864aa78 +0x00:  push   %ebp
0864aa79 +0x01:  mov    %esp,%ebp
0864aa7b +0x03:  mov    0x8(%ebp),%eax
0864aa7e +0x06:  movzbl 0x8d0f1(%eax),%eax
0864aa85 +0x0d:  pop    %ebp
0864aa86 +0x0e:  ret
0864aa87 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isLockedDeleteCharac @ 0x864aa78

/* CUser::isLockedDeleteCharac() */

CUser __thiscall CUser::isLockedDeleteCharac(CUser *this)

{
  return this[0x8d0f1];
}
```
