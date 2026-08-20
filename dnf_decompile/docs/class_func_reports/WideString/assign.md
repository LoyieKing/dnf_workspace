# assign

`_ZN10WideString6assignEPKw`

`WideString::assign(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9fa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9fa2  _ZN10WideString6assignEPKw
#           WideString::assign(wchar_t const*)
# range [0x08ad9fa2, 0x08ad9fcb]
08ad9fa2 +0x00:  push   %ebp
08ad9fa3 +0x01:  mov    %esp,%ebp
08ad9fa5 +0x03:  sub    $0x18,%esp
08ad9fa8 +0x06:  mov    0xc(%ebp),%eax
08ad9fab +0x09:  mov    %eax,(%esp)
08ad9fae +0x0c:  call   0807e130 <_init+0xa28>
08ad9fb3 +0x11:  mov    %eax,0x8(%esp)
08ad9fb7 +0x15:  mov    0xc(%ebp),%eax
08ad9fba +0x18:  mov    %eax,0x4(%esp)
08ad9fbe +0x1c:  mov    0x8(%ebp),%eax
08ad9fc1 +0x1f:  mov    %eax,(%esp)
08ad9fc4 +0x22:  call   08ad9fcc <_ZN10WideString6assignEPKwi>  ; WideString::assign(wchar_t const*, int)
08ad9fc9 +0x27:  leave
08ad9fca +0x28:  ret
08ad9fcb +0x29:  nop
```

## 反编译 C

```c
// WideString::assign @ 0x8ad9fa2

/* DWARF original prototype: void assign(WideString * this, wchar * src) */

void __thiscall WideString::assign(WideString *this,wchar *src)

{
  size_t srcLength;
  
  srcLength = wcslen(src);
  assign(this,src,srcLength);
  return;
}
```
