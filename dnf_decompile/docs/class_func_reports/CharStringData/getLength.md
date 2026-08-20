# getLength

`_ZNK14CharStringData9getLengthEv`

`CharStringData::getLength() const`

| 类 | 地址 |
|---|---|
| `CharStringData` | `0x08ad6934` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6934  _ZNK14CharStringData9getLengthEv
#           CharStringData::getLength() const
# range [0x08ad6934, 0x08ad6941]
08ad6934 +0x00:  push   %ebp
08ad6935 +0x01:  mov    %esp,%ebp
08ad6937 +0x03:  mov    0x8(%ebp),%eax
08ad693a +0x06:  mov    0x4(%eax),%eax
08ad693d +0x09:  sub    $0x1,%eax
08ad6940 +0x0c:  pop    %ebp
08ad6941 +0x0d:  ret
```

## 反编译 C

```c
// CharStringData::getLength @ 0x8ad6934

/* DWARF original prototype: int32 getLength(CharStringData * this) */

int32 __thiscall CharStringData::getLength(CharStringData *this)

{
  return (this->super_StringData).size_ + -1;
}
```
