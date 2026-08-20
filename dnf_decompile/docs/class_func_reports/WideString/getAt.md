# getAt

`_ZNK10WideString5getAtEi`

`WideString::getAt(int) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9ce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9ce4  _ZNK10WideString5getAtEi
#           WideString::getAt(int) const
# range [0x08ad9ce4, 0x08ad9cf7]
08ad9ce4 +0x00:  push   %ebp
08ad9ce5 +0x01:  mov    %esp,%ebp
08ad9ce7 +0x03:  mov    0x8(%ebp),%eax
08ad9cea +0x06:  mov    (%eax),%eax
08ad9cec +0x08:  mov    0xc(%ebp),%edx
08ad9cef +0x0b:  shl    $0x2,%edx
08ad9cf2 +0x0e:  add    %edx,%eax
08ad9cf4 +0x10:  mov    (%eax),%eax
08ad9cf6 +0x12:  pop    %ebp
08ad9cf7 +0x13:  ret
```

## 反编译 C

```c
// WideString::getAt @ 0x8ad9ce4

/* DWARF original prototype: wchar getAt(WideString * this, int32 idx) */

wchar __thiscall WideString::getAt(WideString *this,int32 idx)

{
  return this->buffer_[idx];
}
```
