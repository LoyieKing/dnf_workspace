# isTradePunishOverThirtyDays

`_ZN5CUser27isTradePunishOverThirtyDaysEv`

`CUser::isTradePunishOverThirtyDays()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689880  _ZN5CUser27isTradePunishOverThirtyDaysEv
#           CUser::isTradePunishOverThirtyDays()
# range [0x08689880, 0x0868988f]
08689880 +0x00:  push   %ebp
08689881 +0x01:  mov    %esp,%ebp
08689883 +0x03:  mov    0x8(%ebp),%eax
08689886 +0x06:  movzbl 0x7962c(%eax),%eax
0868988d +0x0d:  pop    %ebp
0868988e +0x0e:  ret
0868988f +0x0f:  nop
```

## 反编译 C

```c
// CUser::isTradePunishOverThirtyDays @ 0x8689880

/* CUser::isTradePunishOverThirtyDays() */

CUser __thiscall CUser::isTradePunishOverThirtyDays(CUser *this)

{
  return this[0x7962c];
}
```
