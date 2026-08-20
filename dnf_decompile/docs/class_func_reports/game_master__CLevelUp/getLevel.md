# getLevel

`_ZN11game_master8CLevelUp8getLevelEv`

`game_master::CLevelUp::getLevel()`

| 类 | 地址 |
|---|---|
| `game_master::CLevelUp` | `0x084b398e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b398e  _ZN11game_master8CLevelUp8getLevelEv
#           game_master::CLevelUp::getLevel()
# range [0x084b398e, 0x084b3999]
084b398e +0x00:  push   %ebp
084b398f +0x01:  mov    %esp,%ebp
084b3991 +0x03:  mov    0x8(%ebp),%eax
084b3994 +0x06:  mov    0x8(%eax),%eax
084b3997 +0x09:  pop    %ebp
084b3998 +0x0a:  ret
084b3999 +0x0b:  nop
```

## 反编译 C

```c
// game_master::CLevelUp::getLevel @ 0x84b398e

/* game_master::CLevelUp::getLevel() */

undefined4 __thiscall game_master::CLevelUp::getLevel(CLevelUp *this)

{
  return *(undefined4 *)(this + 8);
}
```
