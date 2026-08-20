# isUnique

`_ZNK10StringData8isUniqueEv`

`StringData::isUnique() const`

| 类 | 地址 |
|---|---|
| `StringData` | `0x08ad68c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad68c0  _ZNK10StringData8isUniqueEv
#           StringData::isUnique() const
# range [0x08ad68c0, 0x08ad68cf]
08ad68c0 +0x00:  push   %ebp
08ad68c1 +0x01:  mov    %esp,%ebp
08ad68c3 +0x03:  mov    0x8(%ebp),%eax
08ad68c6 +0x06:  mov    (%eax),%eax
08ad68c8 +0x08:  cmp    $0x1,%eax
08ad68cb +0x0b:  sete   %al
08ad68ce +0x0e:  pop    %ebp
08ad68cf +0x0f:  ret
```

## 反编译 C

```c
// StringData::isUnique @ 0x8ad68c0

/* DWARF original prototype: bool isUnique(StringData * this) */

bool __thiscall StringData::isUnique(StringData *this)

{
  return this->refCount_ == 1;
}
```
