# WideString

`_ZN10WideStringC1ERKSbIwSt11char_traitsIwESaIwEE`

`WideString::WideString(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9b34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9b34  _ZN10WideStringC1ERKSbIwSt11char_traitsIwESaIwEE
#           WideString::WideString(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)
# range [0x08ad9b34, 0x08ad9bbf]
08ad9b34 +0x00:  push   %ebp
08ad9b35 +0x01:  mov    %esp,%ebp
08ad9b37 +0x03:  push   %esi
08ad9b38 +0x04:  push   %ebx
08ad9b39 +0x05:  sub    $0x20,%esp
08ad9b3c +0x08:  mov    0xc(%ebp),%eax
08ad9b3f +0x0b:  mov    %eax,(%esp)
08ad9b42 +0x0e:  call   0871c1c0 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6ba4>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6ba4
08ad9b47 +0x13:  mov    %eax,-0x10(%ebp)
08ad9b4a +0x16:  cmpl   $0x0,-0x10(%ebp)
08ad9b4e +0x1a:  jne    08ad9b66 <+0x32>
08ad9b50 +0x1c:  mov    &_ZL21s_emptyWideStringData,%eax
08ad9b55 +0x21:  mov    %eax,0x4(%esp)
08ad9b59 +0x25:  mov    0x8(%ebp),%eax
08ad9b5c +0x28:  mov    %eax,(%esp)
08ad9b5f +0x2b:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9b64 +0x30:  jmp    08ad9bb9 <+0x85>
08ad9b66 +0x32:  mov    -0x10(%ebp),%eax
08ad9b69 +0x35:  mov    %eax,(%esp)
08ad9b6c +0x38:  call   08ad999a <_ZN14WideStringData6createEi>  ; WideStringData::create(int)
08ad9b71 +0x3d:  mov    %eax,-0xc(%ebp)
08ad9b74 +0x40:  mov    -0x10(%ebp),%eax
08ad9b77 +0x43:  add    $0x1,%eax
08ad9b7a +0x46:  shl    $0x2,%eax
08ad9b7d +0x49:  mov    %eax,%esi
08ad9b7f +0x4b:  mov    0xc(%ebp),%eax
08ad9b82 +0x4e:  mov    %eax,(%esp)
08ad9b85 +0x51:  call   0871c040 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6a24>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6a24
08ad9b8a +0x56:  mov    %eax,%ebx
08ad9b8c +0x58:  mov    -0xc(%ebp),%eax
08ad9b8f +0x5b:  mov    %eax,(%esp)
08ad9b92 +0x5e:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9b97 +0x63:  mov    %esi,0x8(%esp)
08ad9b9b +0x67:  mov    %ebx,0x4(%esp)
08ad9b9f +0x6b:  mov    %eax,(%esp)
08ad9ba2 +0x6e:  call   0807d8a0 <_init+0x198>
08ad9ba7 +0x73:  mov    -0xc(%ebp),%eax
08ad9baa +0x76:  mov    %eax,0x4(%esp)
08ad9bae +0x7a:  mov    0x8(%ebp),%eax
08ad9bb1 +0x7d:  mov    %eax,(%esp)
08ad9bb4 +0x80:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9bb9 +0x85:  add    $0x20,%esp
08ad9bbc +0x88:  pop    %ebx
08ad9bbd +0x89:  pop    %esi
08ad9bbe +0x8a:  pop    %ebp
08ad9bbf +0x8b:  ret
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad9b34

/* DWARF original prototype: void WideString(WideString * this, wstring * src) */

void __thiscall WideString::WideString(WideString *this,wstring *src)

{
  int length;
  WideStringData *this_00;
  void *__src;
  wchar *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * data@[???] */
  length = std::wstring::size((wstring *)src);
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::create(length);
    __src = (void *)std::wstring::c_str((wstring *)src);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,__src,(length + 1) * 4);
    attachData(this,this_00);
  }
  return;
}
```
