# end

`_ZNK10WideString3endEv`

`WideString::end() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9f7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9f7e  _ZNK10WideString3endEv
#           WideString::end() const
# range [0x08ad9f7e, 0x08ad9fa1]
08ad9f7e +0x00:  push   %ebp
08ad9f7f +0x01:  mov    %esp,%ebp
08ad9f81 +0x03:  push   %ebx
08ad9f82 +0x04:  sub    $0x14,%esp
08ad9f85 +0x07:  mov    0x8(%ebp),%eax
08ad9f88 +0x0a:  mov    (%eax),%ebx
08ad9f8a +0x0c:  mov    0x8(%ebp),%eax
08ad9f8d +0x0f:  mov    %eax,(%esp)
08ad9f90 +0x12:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9f95 +0x17:  shl    $0x2,%eax
08ad9f98 +0x1a:  lea    (%ebx,%eax,1),%eax
08ad9f9b +0x1d:  add    $0x14,%esp
08ad9f9e +0x20:  pop    %ebx
08ad9f9f +0x21:  pop    %ebp
08ad9fa0 +0x22:  ret
08ad9fa1 +0x23:  nop
```

## 反编译 C

```c
// WideString::end @ 0x8ad9f7e

/* DWARF original prototype: const_iterator end(WideString * this) */

const_iterator __thiscall WideString::end(WideString *this)

{
  wchar *pwVar1;
  int32 iVar2;
  
  pwVar1 = this->buffer_;
  iVar2 = length(this);
  return pwVar1 + iVar2;
}
```
