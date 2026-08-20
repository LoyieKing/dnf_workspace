# vformat

`_ZN10WideString7vformatEPKwPc`

`WideString::vformat(wchar_t const*, char*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adbc88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adbc88  _ZN10WideString7vformatEPKwPc
#           WideString::vformat(wchar_t const*, char*)
# range [0x08adbc88, 0x08adbd23]
08adbc88 +0x00:  push   %ebp
08adbc89 +0x01:  mov    %esp,%ebp
08adbc8b +0x03:  push   %esi
08adbc8c +0x04:  push   %ebx
08adbc8d +0x05:  sub    $0x20,%esp
08adbc90 +0x08:  mov    0x8(%ebp),%ebx
08adbc93 +0x0b:  mov    0x10(%ebp),%eax
08adbc96 +0x0e:  mov    %eax,0xc(%esp)
08adbc9a +0x12:  mov    0xc(%ebp),%eax
08adbc9d +0x15:  mov    %eax,0x8(%esp)
08adbca1 +0x19:  movl   $0x0,0x4(%esp)
08adbca9 +0x21:  movl   $0x0,(%esp)
08adbcb0 +0x28:  call   0807e000 <_init+0x8f8>
08adbcb5 +0x2d:  mov    %eax,-0x10(%ebp)
08adbcb8 +0x30:  cmpl   $0x0,-0x10(%ebp)
08adbcbc +0x34:  jne    08adbcca <+0x42>
08adbcbe +0x36:  mov    %ebx,%eax
08adbcc0 +0x38:  mov    %eax,(%esp)
08adbcc3 +0x3b:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adbcc8 +0x40:  jmp    08adbd16 <+0x8e>
08adbcca +0x42:  mov    -0x10(%ebp),%eax
08adbccd +0x45:  mov    %eax,(%esp)
08adbcd0 +0x48:  call   08ad999a <_ZN14WideStringData6createEi>  ; WideStringData::create(int)
08adbcd5 +0x4d:  mov    %eax,-0xc(%ebp)
08adbcd8 +0x50:  mov    -0x10(%ebp),%eax
08adbcdb +0x53:  add    $0x1,%eax
08adbcde +0x56:  mov    %eax,%esi
08adbce0 +0x58:  mov    -0xc(%ebp),%eax
08adbce3 +0x5b:  mov    %eax,(%esp)
08adbce6 +0x5e:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adbceb +0x63:  mov    0x10(%ebp),%edx
08adbcee +0x66:  mov    %edx,0xc(%esp)
08adbcf2 +0x6a:  mov    0xc(%ebp),%edx
08adbcf5 +0x6d:  mov    %edx,0x8(%esp)
08adbcf9 +0x71:  mov    %esi,0x4(%esp)
08adbcfd +0x75:  mov    %eax,(%esp)
08adbd00 +0x78:  call   08ad45f3 <_Z12ss_vswprintfPwjPKwPc>  ; ss_vswprintf(wchar_t*, unsigned int, wchar_t const*, char*)
08adbd05 +0x7d:  mov    %ebx,%eax
08adbd07 +0x7f:  mov    -0xc(%ebp),%edx
08adbd0a +0x82:  mov    %edx,0x4(%esp)
08adbd0e +0x86:  mov    %eax,(%esp)
08adbd11 +0x89:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adbd16 +0x8e:  mov    %ebx,%eax
08adbd18 +0x90:  mov    %ebx,%eax
08adbd1a +0x92:  add    $0x20,%esp
08adbd1d +0x95:  pop    %ebx
08adbd1e +0x96:  pop    %esi
08adbd1f +0x97:  pop    %ebp
08adbd20 +0x98:  ret    $0x4
08adbd23 +0x9b:  nop
```

## 反编译 C

```c
// WideString::vformat @ 0x8adbc88

WideString *
WideString::vformat(WideString *__return_storage_ptr__,wchar *formatStr,va_list argList)

{
  int length;
  WideStringData *this;
  wchar_t *buffer;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  length = vswprintf((wchar_t *)0x0,0,formatStr,argList);
  if (length == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::create(length);
    buffer = WideStringData::getBuffer(this);
    ss_vswprintf(buffer,length + 1,formatStr,argList);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
