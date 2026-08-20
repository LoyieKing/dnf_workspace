# CurSpawnStepReset

`_ZN7WarRoom17CurSpawnStepResetEv`

`WarRoom::CurSpawnStepReset()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c077e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c077e  _ZN7WarRoom17CurSpawnStepResetEv
#           WarRoom::CurSpawnStepReset()
# range [0x086c077e, 0x086c078d]
086c077e +0x00:  push   %ebp
086c077f +0x01:  mov    %esp,%ebp
086c0781 +0x03:  mov    0x8(%ebp),%eax
086c0784 +0x06:  movl   $0x0,0xc(%eax)
086c078b +0x0d:  pop    %ebp
086c078c +0x0e:  ret
086c078d +0x0f:  nop
```

## 反编译 C

```c
// WarRoom::CurSpawnStepReset @ 0x86c077e

/* WarRoom::CurSpawnStepReset() */

void __thiscall WarRoom::CurSpawnStepReset(WarRoom *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
