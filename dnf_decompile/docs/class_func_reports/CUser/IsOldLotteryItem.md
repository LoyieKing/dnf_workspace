# IsOldLotteryItem

`_ZN5CUser16IsOldLotteryItemEj`

`CUser::IsOldLotteryItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08673342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08673342  _ZN5CUser16IsOldLotteryItemEj
#           CUser::IsOldLotteryItem(unsigned int)
# range [0x08673342, 0x086733a1]
08673342 +0x00:  push   %ebp
08673343 +0x01:  mov    %esp,%ebp
08673345 +0x03:  mov    0xc(%ebp),%eax
08673348 +0x06:  cmp    $0x1d56,%eax
0867334d +0x0b:  ja     08673370 <+0x2e>
0867334f +0x0d:  cmp    $0x1d4c,%eax
08673354 +0x12:  jae    08673394 <+0x52>
08673356 +0x14:  cmp    $0x1bc6,%eax
0867335b +0x19:  jb     0867339b <+0x59>
0867335d +0x1b:  cmp    $0x1bf5,%eax
08673362 +0x20:  jbe    08673394 <+0x52>
08673364 +0x22:  sub    $0x1c15,%eax
08673369 +0x27:  cmp    $0x4,%eax
0867336c +0x2a:  ja     0867339b <+0x59>
0867336e +0x2c:  jmp    08673394 <+0x52>
08673370 +0x2e:  cmp    $0x1e5c,%eax
08673375 +0x33:  ja     0867338a <+0x48>
08673377 +0x35:  cmp    $0x1e44,%eax
0867337c +0x3a:  jae    08673394 <+0x52>
0867337e +0x3c:  sub    $0x1dca,%eax
08673383 +0x41:  cmp    $0x5,%eax
08673386 +0x44:  ja     0867339b <+0x59>
08673388 +0x46:  jmp    08673394 <+0x52>
0867338a +0x48:  sub    $0x1eba,%eax
0867338f +0x4d:  cmp    $0x1,%eax
08673392 +0x50:  ja     0867339b <+0x59>
08673394 +0x52:  mov    $0x1,%eax
08673399 +0x57:  jmp    086733a0 <+0x5e>
0867339b +0x59:  mov    $0x0,%eax
086733a0 +0x5e:  pop    %ebp
086733a1 +0x5f:  ret
```

## 反编译 C

```c
// CUser::IsOldLotteryItem @ 0x8673342

/* CUser::IsOldLotteryItem(unsigned int) */

undefined4 __thiscall CUser::IsOldLotteryItem(CUser *this,uint param_1)

{
  if (param_1 < 0x1d57) {
    if (param_1 < 0x1d4c) {
      if (param_1 < 0x1bc6) {
        return 0;
      }
      if ((0x1bf5 < param_1) && (4 < param_1 - 0x1c15)) {
        return 0;
      }
    }
  }
  else if (param_1 < 0x1e5d) {
    if ((param_1 < 0x1e44) && (5 < param_1 - 0x1dca)) {
      return 0;
    }
  }
  else if (1 < param_1 - 0x1eba) {
    return 0;
  }
  return 1;
}
```
