# isShared

`_ZNK10StringData8isSharedEv`

`StringData::isShared() const`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad68d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad68d0  _ZNK10StringData8isSharedEv
#           StringData::isShared() const
# range [0x08ad68d0, 0x08ad68df]
08ad68d0 +0x00:  push   %ebp
08ad68d1 +0x01:  mov    %esp,%ebp
08ad68d3 +0x03:  mov    0x8(%ebp),%eax
08ad68d6 +0x06:  mov    (%eax),%eax
08ad68d8 +0x08:  cmp    $0x1,%eax
08ad68db +0x0b:  setg   %al
08ad68de +0x0e:  pop    %ebp
08ad68df +0x0f:  ret
```

## 反编译 C

```c
// StringData::isShared @ 0x8ad68d0

/* DWARF original prototype: bool isShared(StringData * this) */

bool __thiscall StringData::isShared(StringData *this)

{
  return 1 < this->refCount_;
}
```
