# getStandardDimensionLevel

`_ZN6CParty25getStandardDimensionLevelEv`

`CParty::getStandardDimensionLevel()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f6d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f6d4  _ZN6CParty25getStandardDimensionLevelEv
#           CParty::getStandardDimensionLevel()
# range [0x0859f6d4, 0x0859f6e1]
0859f6d4 +0x00:  push   %ebp
0859f6d5 +0x01:  mov    %esp,%ebp
0859f6d7 +0x03:  mov    0x8(%ebp),%eax
0859f6da +0x06:  mov    0xd5c(%eax),%eax
0859f6e0 +0x0c:  pop    %ebp
0859f6e1 +0x0d:  ret
```

## 反编译 C

```c
// CParty::getStandardDimensionLevel @ 0x859f6d4

/* CParty::getStandardDimensionLevel() */

undefined4 __thiscall CParty::getStandardDimensionLevel(CParty *this)

{
  return *(undefined4 *)(this + 0xd5c);
}
```
