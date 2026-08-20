# concat

`_ZN10WideString6concatEPKwiS1_i`

`WideString::concat(wchar_t const*, int, wchar_t const*, int)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb63e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb63e  _ZN10WideString6concatEPKwiS1_i
#           WideString::concat(wchar_t const*, int, wchar_t const*, int)
# range [0x08adb63e, 0x08adb6ed]
08adb63e +0x00:  push   %ebp
08adb63f +0x01:  mov    %esp,%ebp
08adb641 +0x03:  push   %esi
08adb642 +0x04:  push   %ebx
08adb643 +0x05:  sub    $0x20,%esp
08adb646 +0x08:  mov    0x8(%ebp),%ebx
08adb649 +0x0b:  mov    0x18(%ebp),%eax
08adb64c +0x0e:  mov    0x10(%ebp),%edx
08adb64f +0x11:  lea    (%edx,%eax,1),%eax
08adb652 +0x14:  test   %eax,%eax
08adb654 +0x16:  jne    08adb662 <+0x24>
08adb656 +0x18:  mov    %ebx,%eax
08adb658 +0x1a:  mov    %eax,(%esp)
08adb65b +0x1d:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adb660 +0x22:  jmp    08adb6e0 <+0xa2>
08adb662 +0x24:  mov    0x18(%ebp),%eax
08adb665 +0x27:  mov    0x10(%ebp),%edx
08adb668 +0x2a:  lea    (%edx,%eax,1),%eax
08adb66b +0x2d:  mov    %eax,(%esp)
08adb66e +0x30:  call   08ad99cc <_ZN14WideStringData16createTerminatedEi>  ; WideStringData::createTerminated(int)
08adb673 +0x35:  mov    %eax,-0xc(%ebp)
08adb676 +0x38:  mov    0x10(%ebp),%eax
08adb679 +0x3b:  lea    0x0(,%eax,4),%esi
08adb680 +0x42:  mov    -0xc(%ebp),%eax
08adb683 +0x45:  mov    %eax,(%esp)
08adb686 +0x48:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adb68b +0x4d:  mov    %esi,0x8(%esp)
08adb68f +0x51:  mov    0xc(%ebp),%edx
08adb692 +0x54:  mov    %edx,0x4(%esp)
08adb696 +0x58:  mov    %eax,(%esp)
08adb699 +0x5b:  call   0807d8a0 <_init+0x198>
08adb69e +0x60:  mov    0x18(%ebp),%eax
08adb6a1 +0x63:  lea    0x0(,%eax,4),%esi
08adb6a8 +0x6a:  mov    -0xc(%ebp),%eax
08adb6ab +0x6d:  mov    %eax,(%esp)
08adb6ae +0x70:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08adb6b3 +0x75:  mov    0x10(%ebp),%edx
08adb6b6 +0x78:  shl    $0x2,%edx
08adb6b9 +0x7b:  lea    (%eax,%edx,1),%edx
08adb6bc +0x7e:  mov    %esi,0x8(%esp)
08adb6c0 +0x82:  mov    0x14(%ebp),%eax
08adb6c3 +0x85:  mov    %eax,0x4(%esp)
08adb6c7 +0x89:  mov    %edx,(%esp)
08adb6ca +0x8c:  call   0807d8a0 <_init+0x198>
08adb6cf +0x91:  mov    %ebx,%eax
08adb6d1 +0x93:  mov    -0xc(%ebp),%edx
08adb6d4 +0x96:  mov    %edx,0x4(%esp)
08adb6d8 +0x9a:  mov    %eax,(%esp)
08adb6db +0x9d:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08adb6e0 +0xa2:  mov    %ebx,%eax
08adb6e2 +0xa4:  mov    %ebx,%eax
08adb6e4 +0xa6:  add    $0x20,%esp
08adb6e7 +0xa9:  pop    %ebx
08adb6e8 +0xaa:  pop    %esi
08adb6e9 +0xab:  pop    %ebp
08adb6ea +0xac:  ret    $0x4
08adb6ed +0xaf:  nop
```

## 反编译 C

```c
// WideString::concat @ 0x8adb63e

WideString *
WideString::concat(WideString *__return_storage_ptr__,wchar *src1,int32 len1,wchar *src2,int32 len2)

{
  WideStringData *this;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (len1 + len2 == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::createTerminated(len1 + len2);
    pwVar1 = WideStringData::getBuffer(this);
    memcpy(pwVar1,src1,len1 * 4);
    pwVar1 = WideStringData::getBuffer(this);
    memcpy(pwVar1 + len1,src2,len2 * 4);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```
