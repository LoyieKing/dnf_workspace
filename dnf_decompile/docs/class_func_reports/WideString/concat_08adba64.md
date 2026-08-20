# concat

`_ZN10WideString6concatEwRKS_`

`WideString::concat(wchar_t, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adba64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adba64  _ZN10WideString6concatEwRKS_
#           WideString::concat(wchar_t, WideString const&)
# range [0x08adba64, 0x08adbb35]
08adba64 +0x00:  push   %ebp
08adba65 +0x01:  mov    %esp,%ebp
08adba67 +0x03:  push   %edi
08adba68 +0x04:  push   %esi
08adba69 +0x05:  push   %ebx
08adba6a +0x06:  sub    $0x2c,%esp
08adba6d +0x09:  mov    0x8(%ebp),%ebx
08adba70 +0x0c:  cmpl   $0x0,0xc(%ebp)
08adba74 +0x10:  jne    08adba8c <+0x28>
08adba76 +0x12:  mov    %ebx,%eax
08adba78 +0x14:  mov    0x10(%ebp),%edx
08adba7b +0x17:  mov    %edx,0x4(%esp)
08adba7f +0x1b:  mov    %eax,(%esp)
08adba82 +0x1e:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08adba87 +0x23:  jmp    08adbb2a <+0xc6>
08adba8c +0x28:  mov    0x10(%ebp),%eax
08adba8f +0x2b:  mov    %eax,(%esp)
08adba92 +0x2e:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adba97 +0x33:  test   %eax,%eax
08adba99 +0x35:  sete   %al
08adba9c +0x38:  test   %al,%al
08adba9e +0x3a:  je     08adbab3 <+0x4f>
08adbaa0 +0x3c:  mov    %ebx,%eax
08adbaa2 +0x3e:  mov    0xc(%ebp),%edx
08adbaa5 +0x41:  mov    %edx,0x4(%esp)
08adbaa9 +0x45:  mov    %eax,(%esp)
08adbaac +0x48:  call   08ad9bc0 <_ZN10WideStringC1Ew>  ; WideString::WideString(wchar_t)
08adbab1 +0x4d:  jmp    08adbb2a <+0xc6>
08adbab3 +0x4f:  mov    0x10(%ebp),%eax
08adbab6 +0x52:  mov    %eax,(%esp)
08adbab9 +0x55:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adbabe +0x5a:  add    $0x1,%eax
08adbac1 +0x5d:  mov    %eax,(%esp)
08adbac4 +0x60:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08adbac9 +0x65:  mov    %eax,-0x1c(%ebp)
08adbacc +0x68:  mov    -0x1c(%ebp),%eax
08adbacf +0x6b:  mov    %eax,(%esp)
08adbad2 +0x6e:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adbad7 +0x73:  mov    0xc(%ebp),%edx
08adbada +0x76:  mov    %edx,(%eax)
08adbadc +0x78:  mov    0x10(%ebp),%eax
08adbadf +0x7b:  mov    %eax,(%esp)
08adbae2 +0x7e:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adbae7 +0x83:  lea    0x0(,%eax,4),%edi
08adbaee +0x8a:  mov    0x10(%ebp),%eax
08adbaf1 +0x8d:  mov    %eax,(%esp)
08adbaf4 +0x90:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adbaf9 +0x95:  mov    %eax,%esi
08adbafb +0x97:  mov    -0x1c(%ebp),%eax
08adbafe +0x9a:  mov    %eax,(%esp)
08adbb01 +0x9d:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adbb06 +0xa2:  add    $0x4,%eax
08adbb09 +0xa5:  mov    %edi,0x8(%esp)
08adbb0d +0xa9:  mov    %esi,0x4(%esp)
08adbb11 +0xad:  mov    %eax,(%esp)
08adbb14 +0xb0:  call   0807d8a0 <_init+0x198>
08adbb19 +0xb5:  mov    %ebx,%eax
08adbb1b +0xb7:  mov    -0x1c(%ebp),%edx
08adbb1e +0xba:  mov    %edx,0x4(%esp)
08adbb22 +0xbe:  mov    %eax,(%esp)
08adbb25 +0xc1:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adbb2a +0xc6:  mov    %ebx,%eax
08adbb2c +0xc8:  mov    %ebx,%eax
08adbb2e +0xca:  add    $0x2c,%esp
08adbb31 +0xcd:  pop    %ebx
08adbb32 +0xce:  pop    %esi
08adbb33 +0xcf:  pop    %edi
08adbb34 +0xd0:  pop    %ebp
08adbb35 +0xd1:  ret    $0x4
```

## 反编译 C

```c
// WideString::concat @ 0x8adba64

WideString * WideString::concat(WideString *__return_storage_ptr__,wchar src1,WideString *src2)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *pwVar3;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (src1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      this = WideStringData::createTerminated(iVar1 + 1);
      pwVar2 = WideStringData::getBuffer(this);
      *pwVar2 = src1;
      iVar1 = length(src2);
      pwVar2 = c_str(src2);
      pwVar3 = WideStringData::getBuffer(this);
      memcpy(pwVar3 + 1,pwVar2,iVar1 * 4);
      WideString(__return_storage_ptr__,this);
    }
  }
  return __return_storage_ptr__;
}
```
