# getLength

`_ZNK14WideStringData9getLengthEv`

`WideStringData::getLength() const`

| 类 | 地址 |
|---|---|
| `WideStringData` | `0x08ad997c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad997c  _ZNK14WideStringData9getLengthEv
#           WideStringData::getLength() const
# range [0x08ad997c, 0x08ad998d]
08ad997c +0x00:  push   %ebp
08ad997d +0x01:  mov    %esp,%ebp
08ad997f +0x03:  mov    0x8(%ebp),%eax
08ad9982 +0x06:  mov    0x4(%eax),%eax
08ad9985 +0x09:  shr    $0x2,%eax
08ad9988 +0x0c:  sub    $0x1,%eax
08ad998b +0x0f:  pop    %ebp
08ad998c +0x10:  ret
08ad998d +0x11:  nop
```

## 反编译 C

```c
// WideStringData::getLength @ 0x8ad997c

/* DWARF original prototype: int32 getLength(WideStringData * this) */

int32 __thiscall WideStringData::getLength(WideStringData *this)

{
  return ((uint)(this->super_StringData).size_ >> 2) - 1;
}
```
