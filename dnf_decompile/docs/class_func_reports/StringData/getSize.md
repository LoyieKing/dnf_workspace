# getSize

`_ZNK10StringData7getSizeEv`

`StringData::getSize() const`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad68e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad68e0  _ZNK10StringData7getSizeEv
#           StringData::getSize() const
# range [0x08ad68e0, 0x08ad68eb]
08ad68e0 +0x00:  push   %ebp
08ad68e1 +0x01:  mov    %esp,%ebp
08ad68e3 +0x03:  mov    0x8(%ebp),%eax
08ad68e6 +0x06:  mov    0x4(%eax),%eax
08ad68e9 +0x09:  pop    %ebp
08ad68ea +0x0a:  ret
08ad68eb +0x0b:  nop
```

## 反编译 C

```c
// StringData::getSize @ 0x8ad68e0

/* DWARF original prototype: int32 getSize(StringData * this) */

int32 __thiscall StringData::getSize(StringData *this)

{
  return this->size_;
}
```
