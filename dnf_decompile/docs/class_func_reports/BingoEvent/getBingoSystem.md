# getBingoSystem

`_ZN10BingoEvent14getBingoSystemEv`

`BingoEvent::getBingoSystem()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9fea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9fea  _ZN10BingoEvent14getBingoSystemEv
#           BingoEvent::getBingoSystem()
# range [0x080c9fea, 0x080c9ff5]
080c9fea +0x00:  push   %ebp
080c9feb +0x01:  mov    %esp,%ebp
080c9fed +0x03:  mov    0x8(%ebp),%eax
080c9ff0 +0x06:  add    $0xc,%eax
080c9ff3 +0x09:  pop    %ebp
080c9ff4 +0x0a:  ret
080c9ff5 +0x0b:  nop
```

## 反编译 C

```c
// BingoEvent::getBingoSystem @ 0x80c9fea

/* BingoEvent::getBingoSystem() */

BingoEvent * __thiscall BingoEvent::getBingoSystem(BingoEvent *this)

{
  return this + 0xc;
}
```
