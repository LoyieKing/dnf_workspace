# getGoldMemberType

`_ZN6Taiwan14GarenaAuthData17getGoldMemberTypeEv`

`Taiwan::GarenaAuthData::getGoldMemberType()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x0817304e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817304e  _ZN6Taiwan14GarenaAuthData17getGoldMemberTypeEv
#           Taiwan::GarenaAuthData::getGoldMemberType()
# range [0x0817304e, 0x08173059]
0817304e +0x00:  push   %ebp
0817304f +0x01:  mov    %esp,%ebp
08173051 +0x03:  mov    0x8(%ebp),%eax
08173054 +0x06:  movzbl 0x2a(%eax),%eax
08173058 +0x0a:  pop    %ebp
08173059 +0x0b:  ret
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getGoldMemberType @ 0x817304e

/* Taiwan::GarenaAuthData::getGoldMemberType() */

GarenaAuthData __thiscall Taiwan::GarenaAuthData::getGoldMemberType(GarenaAuthData *this)

{
  return this[0x2a];
}
```
