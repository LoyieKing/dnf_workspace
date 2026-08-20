# format

`_ZN10WideString6formatEPKwz`

`WideString::format(wchar_t const*, ...)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adbbe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adbbe4  _ZN10WideString6formatEPKwz
#           WideString::format(wchar_t const*, ...)
# range [0x08adbbe4, 0x08adbc87]
08adbbe4 +0x00:  push   %ebp
08adbbe5 +0x01:  mov    %esp,%ebp
08adbbe7 +0x03:  push   %edi
08adbbe8 +0x04:  push   %esi
08adbbe9 +0x05:  push   %ebx
08adbbea +0x06:  sub    $0x2c,%esp
08adbbed +0x09:  mov    0x8(%ebp),%ebx
08adbbf0 +0x0c:  lea    0x10(%ebp),%eax
08adbbf3 +0x0f:  mov    %eax,-0x24(%ebp)
08adbbf6 +0x12:  mov    -0x24(%ebp),%eax
08adbbf9 +0x15:  mov    %eax,0xc(%esp)
08adbbfd +0x19:  mov    0xc(%ebp),%eax
08adbc00 +0x1c:  mov    %eax,0x8(%esp)
08adbc04 +0x20:  movl   $0x0,0x4(%esp)
08adbc0c +0x28:  movl   $0x0,(%esp)
08adbc13 +0x2f:  call   0807e000 <_init+0x8f8>
08adbc18 +0x34:  mov    %eax,-0x20(%ebp)
08adbc1b +0x37:  cmpl   $0x0,-0x20(%ebp)
08adbc1f +0x3b:  jne    08adbc2d <+0x49>
08adbc21 +0x3d:  mov    %ebx,%eax
08adbc23 +0x3f:  mov    %eax,(%esp)
08adbc26 +0x42:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adbc2b +0x47:  jmp    08adbc79 <+0x95>
08adbc2d +0x49:  mov    -0x20(%ebp),%eax
08adbc30 +0x4c:  mov    %eax,(%esp)
08adbc33 +0x4f:  call   08ad999a <_ZN14WideStringData6createEi>  ; WideStringData::create(int)
08adbc38 +0x54:  mov    %eax,-0x1c(%ebp)
08adbc3b +0x57:  mov    -0x24(%ebp),%edi
08adbc3e +0x5a:  mov    -0x20(%ebp),%eax
08adbc41 +0x5d:  add    $0x1,%eax
08adbc44 +0x60:  mov    %eax,%esi
08adbc46 +0x62:  mov    -0x1c(%ebp),%eax
08adbc49 +0x65:  mov    %eax,(%esp)
08adbc4c +0x68:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adbc51 +0x6d:  mov    %edi,0xc(%esp)
08adbc55 +0x71:  mov    0xc(%ebp),%edx
08adbc58 +0x74:  mov    %edx,0x8(%esp)
08adbc5c +0x78:  mov    %esi,0x4(%esp)
08adbc60 +0x7c:  mov    %eax,(%esp)
08adbc63 +0x7f:  call   08ad45f3 <_Z12ss_vswprintfPwjPKwPc>  ; ss_vswprintf(wchar_t*, unsigned int, wchar_t const*, char*)
08adbc68 +0x84:  mov    %ebx,%eax
08adbc6a +0x86:  mov    -0x1c(%ebp),%edx
08adbc6d +0x89:  mov    %edx,0x4(%esp)
08adbc71 +0x8d:  mov    %eax,(%esp)
08adbc74 +0x90:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adbc79 +0x95:  mov    %ebx,%eax
08adbc7b +0x97:  mov    %ebx,%eax
08adbc7d +0x99:  add    $0x2c,%esp
08adbc80 +0x9c:  pop    %ebx
08adbc81 +0x9d:  pop    %esi
08adbc82 +0x9e:  pop    %edi
08adbc83 +0x9f:  pop    %ebp
08adbc84 +0xa0:  ret    $0x4
08adbc87 +0xa3:  nop
```

## 反编译 C

```c
// WideString::format @ 0x8adbbe4

WideString * WideString::format(WideString *__return_storage_ptr__,wchar *formatStr,...)

{
  int length;
  WideStringData *this;
  wchar_t *buffer;
  
                    /* Unresolved local var: va_list argList@[???]
                       Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  length = vswprintf((wchar_t *)0x0,0,formatStr,&stack0x0000000c);
  if (length == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::create(length);
    buffer = WideStringData::getBuffer(this);
    ss_vswprintf(buffer,length + 1,formatStr,&stack0x0000000c);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
