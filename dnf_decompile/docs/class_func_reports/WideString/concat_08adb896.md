# concat

`_ZN10WideString6concatERKS_w`

`WideString::concat(WideString const&, wchar_t)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb896` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb896  _ZN10WideString6concatERKS_w
#           WideString::concat(WideString const&, wchar_t)
# range [0x08adb896, 0x08adb97d]
08adb896 +0x00:  push   %ebp
08adb897 +0x01:  mov    %esp,%ebp
08adb899 +0x03:  push   %edi
08adb89a +0x04:  push   %esi
08adb89b +0x05:  push   %ebx
08adb89c +0x06:  sub    $0x2c,%esp
08adb89f +0x09:  mov    0x8(%ebp),%ebx
08adb8a2 +0x0c:  mov    0xc(%ebp),%eax
08adb8a5 +0x0f:  mov    %eax,(%esp)
08adb8a8 +0x12:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb8ad +0x17:  test   %eax,%eax
08adb8af +0x19:  sete   %al
08adb8b2 +0x1c:  test   %al,%al
08adb8b4 +0x1e:  je     08adb8cc <+0x36>
08adb8b6 +0x20:  mov    %ebx,%eax
08adb8b8 +0x22:  mov    0x10(%ebp),%edx
08adb8bb +0x25:  mov    %edx,0x4(%esp)
08adb8bf +0x29:  mov    %eax,(%esp)
08adb8c2 +0x2c:  call   08ad9bc0 <_ZN10WideStringC1Ew>  ; WideString::WideString(wchar_t)
08adb8c7 +0x31:  jmp    08adb96f <+0xd9>
08adb8cc +0x36:  cmpl   $0x0,0x10(%ebp)
08adb8d0 +0x3a:  jne    08adb8e8 <+0x52>
08adb8d2 +0x3c:  mov    %ebx,%eax
08adb8d4 +0x3e:  mov    0xc(%ebp),%edx
08adb8d7 +0x41:  mov    %edx,0x4(%esp)
08adb8db +0x45:  mov    %eax,(%esp)
08adb8de +0x48:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08adb8e3 +0x4d:  jmp    08adb96f <+0xd9>
08adb8e8 +0x52:  mov    0xc(%ebp),%eax
08adb8eb +0x55:  mov    %eax,(%esp)
08adb8ee +0x58:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb8f3 +0x5d:  add    $0x1,%eax
08adb8f6 +0x60:  mov    %eax,(%esp)
08adb8f9 +0x63:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08adb8fe +0x68:  mov    %eax,-0x1c(%ebp)
08adb901 +0x6b:  mov    0xc(%ebp),%eax
08adb904 +0x6e:  mov    %eax,(%esp)
08adb907 +0x71:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb90c +0x76:  lea    0x0(,%eax,4),%edi
08adb913 +0x7d:  mov    0xc(%ebp),%eax
08adb916 +0x80:  mov    %eax,(%esp)
08adb919 +0x83:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adb91e +0x88:  mov    %eax,%esi
08adb920 +0x8a:  mov    -0x1c(%ebp),%eax
08adb923 +0x8d:  mov    %eax,(%esp)
08adb926 +0x90:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adb92b +0x95:  mov    %edi,0x8(%esp)
08adb92f +0x99:  mov    %esi,0x4(%esp)
08adb933 +0x9d:  mov    %eax,(%esp)
08adb936 +0xa0:  call   0807d8a0 <_init+0x198>
08adb93b +0xa5:  mov    -0x1c(%ebp),%eax
08adb93e +0xa8:  mov    %eax,(%esp)
08adb941 +0xab:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adb946 +0xb0:  mov    %eax,%esi
08adb948 +0xb2:  mov    0xc(%ebp),%eax
08adb94b +0xb5:  mov    %eax,(%esp)
08adb94e +0xb8:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb953 +0xbd:  shl    $0x2,%eax
08adb956 +0xc0:  lea    (%esi,%eax,1),%edx
08adb959 +0xc3:  mov    0x10(%ebp),%eax
08adb95c +0xc6:  mov    %eax,(%edx)
08adb95e +0xc8:  mov    %ebx,%eax
08adb960 +0xca:  mov    -0x1c(%ebp),%edx
08adb963 +0xcd:  mov    %edx,0x4(%esp)
08adb967 +0xd1:  mov    %eax,(%esp)
08adb96a +0xd4:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adb96f +0xd9:  mov    %ebx,%eax
08adb971 +0xdb:  mov    %ebx,%eax
08adb973 +0xdd:  add    $0x2c,%esp
08adb976 +0xe0:  pop    %ebx
08adb977 +0xe1:  pop    %esi
08adb978 +0xe2:  pop    %edi
08adb979 +0xe3:  pop    %ebp
08adb97a +0xe4:  ret    $0x4
08adb97d +0xe7:  nop
```

## 反编译 C

```c
// WideString::concat @ 0x8adb896

WideString * WideString::concat(WideString *__return_storage_ptr__,WideString *src1,wchar src2)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  iVar1 = length(src1);
  if (iVar1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else if (src2 == 0) {
    WideString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    this = WideStringData::createTerminated(iVar1 + 1);
    iVar1 = length(src1);
    pwVar2 = c_str(src1);
    __dest = WideStringData::getBuffer(this);
    memcpy(__dest,pwVar2,iVar1 * 4);
    pwVar2 = WideStringData::getBuffer(this);
    iVar1 = length(src1);
    pwVar2[iVar1] = src2;
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
