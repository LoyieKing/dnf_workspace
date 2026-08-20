# getMaterialItemIndex

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption20getMaterialItemIndexEv`

`ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088b0164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b0164  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOption20getMaterialItemIndexEv
#           ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex()
# range [0x088b0164, 0x088b016f]
088b0164 +0x00:  push   %ebp
088b0165 +0x01:  mov    %esp,%ebp
088b0167 +0x03:  mov    0x8(%ebp),%eax
088b016a +0x06:  mov    0x48(%eax),%eax
088b016d +0x09:  pop    %ebp
088b016e +0x0a:  ret
088b016f +0x0b:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex @ 0x88b0164

/* ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex() */

undefined4 __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex(AvatarFixedHiddenOption *this)

{
  return *(undefined4 *)(this + 0x48);
}
```
