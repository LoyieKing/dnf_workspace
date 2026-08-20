# front

`_ZNK10WideString5frontEv`

`WideString::front() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9f2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9f2a  _ZNK10WideString5frontEv
#           WideString::front() const
# range [0x08ad9f2a, 0x08ad9f35]
08ad9f2a +0x00:  push   %ebp
08ad9f2b +0x01:  mov    %esp,%ebp
08ad9f2d +0x03:  mov    0x8(%ebp),%eax
08ad9f30 +0x06:  mov    (%eax),%eax
08ad9f32 +0x08:  mov    (%eax),%eax
08ad9f34 +0x0a:  pop    %ebp
08ad9f35 +0x0b:  ret
```

## 反编译 C

```c
// WideString::front @ 0x8ad9f2a

/* DWARF original prototype: wchar front(WideString * this) */

wchar __thiscall WideString::front(WideString *this)

{
  return *this->buffer_;
}
```
