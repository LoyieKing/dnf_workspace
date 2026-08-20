# setAt

`_ZN10WideString5setAtEiw`

`WideString::setAt(int, wchar_t)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9cf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9cf8  _ZN10WideString5setAtEiw
#           WideString::setAt(int, wchar_t)
# range [0x08ad9cf8, 0x08ad9dc5]
08ad9cf8 +0x00:  push   %ebp
08ad9cf9 +0x01:  mov    %esp,%ebp
08ad9cfb +0x03:  push   %edi
08ad9cfc +0x04:  push   %esi
08ad9cfd +0x05:  push   %ebx
08ad9cfe +0x06:  sub    $0x2c,%esp
08ad9d01 +0x09:  mov    0x8(%ebp),%ebx
08ad9d04 +0x0c:  mov    0xc(%ebp),%eax
08ad9d07 +0x0f:  mov    (%eax),%eax
08ad9d09 +0x11:  mov    0x10(%ebp),%edx
08ad9d0c +0x14:  shl    $0x2,%edx
08ad9d0f +0x17:  add    %edx,%eax
08ad9d11 +0x19:  mov    (%eax),%eax
08ad9d13 +0x1b:  cmp    0x14(%ebp),%eax
08ad9d16 +0x1e:  jne    08ad9d2e <+0x36>
08ad9d18 +0x20:  mov    %ebx,%eax
08ad9d1a +0x22:  mov    0xc(%ebp),%edx
08ad9d1d +0x25:  mov    %edx,0x4(%esp)
08ad9d21 +0x29:  mov    %eax,(%esp)
08ad9d24 +0x2c:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08ad9d29 +0x31:  jmp    08ad9db7 <+0xbf>
08ad9d2e +0x36:  mov    0xc(%ebp),%eax
08ad9d31 +0x39:  mov    %eax,(%esp)
08ad9d34 +0x3c:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ad9d39 +0x41:  mov    %eax,-0x20(%ebp)
08ad9d3c +0x44:  mov    -0x20(%ebp),%eax
08ad9d3f +0x47:  mov    %eax,(%esp)
08ad9d42 +0x4a:  call   08ad997c <_ZNK14WideStringData9getLengthEv>  ; WideStringData::getLength() const
08ad9d47 +0x4f:  mov    %eax,(%esp)
08ad9d4a +0x52:  call   08ad999a <_ZN14WideStringData6createEi>  ; WideStringData::create(int)
08ad9d4f +0x57:  mov    %eax,-0x1c(%ebp)
08ad9d52 +0x5a:  mov    -0x20(%ebp),%eax
08ad9d55 +0x5d:  mov    %eax,(%esp)
08ad9d58 +0x60:  call   08ad997c <_ZNK14WideStringData9getLengthEv>  ; WideStringData::getLength() const
08ad9d5d +0x65:  add    $0x1,%eax
08ad9d60 +0x68:  shl    $0x2,%eax
08ad9d63 +0x6b:  mov    %eax,%edi
08ad9d65 +0x6d:  mov    -0x20(%ebp),%eax
08ad9d68 +0x70:  mov    %eax,(%esp)
08ad9d6b +0x73:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9d70 +0x78:  mov    %eax,%esi
08ad9d72 +0x7a:  mov    -0x1c(%ebp),%eax
08ad9d75 +0x7d:  mov    %eax,(%esp)
08ad9d78 +0x80:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9d7d +0x85:  mov    %edi,0x8(%esp)
08ad9d81 +0x89:  mov    %esi,0x4(%esp)
08ad9d85 +0x8d:  mov    %eax,(%esp)
08ad9d88 +0x90:  call   0807d8a0 <_init+0x198>
08ad9d8d +0x95:  mov    -0x1c(%ebp),%eax
08ad9d90 +0x98:  mov    %eax,(%esp)
08ad9d93 +0x9b:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad9d98 +0xa0:  mov    0x10(%ebp),%edx
08ad9d9b +0xa3:  shl    $0x2,%edx
08ad9d9e +0xa6:  lea    (%eax,%edx,1),%edx
08ad9da1 +0xa9:  mov    0x14(%ebp),%eax
08ad9da4 +0xac:  mov    %eax,(%edx)
08ad9da6 +0xae:  mov    %ebx,%eax
08ad9da8 +0xb0:  mov    -0x1c(%ebp),%edx
08ad9dab +0xb3:  mov    %edx,0x4(%esp)
08ad9daf +0xb7:  mov    %eax,(%esp)
08ad9db2 +0xba:  call   08ad9bfa <_ZN10WideStringC1EP14WideStringData>  ; WideString::WideString(WideStringData*)
08ad9db7 +0xbf:  mov    %ebx,%eax
08ad9db9 +0xc1:  mov    %ebx,%eax
08ad9dbb +0xc3:  add    $0x2c,%esp
08ad9dbe +0xc6:  pop    %ebx
08ad9dbf +0xc7:  pop    %esi
08ad9dc0 +0xc8:  pop    %edi
08ad9dc1 +0xc9:  pop    %ebp
08ad9dc2 +0xca:  ret    $0x4
08ad9dc5 +0xcd:  nop
```

## 反编译 C

```c
// WideString::setAt @ 0x8ad9cf8

/* DWARF original prototype: WideString setAt(WideString * this, int32 idx, wchar ch) */

WideString __thiscall WideString::setAt(WideString *this,int32 idx,wchar ch)

{
  WideStringData *this_00;
  int32 iVar1;
  WideStringData *this_01;
  wchar *pwVar2;
  wchar *__dest;
  int in_stack_00000010;
  
                    /* Unresolved local var: WideStringData * thisData@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  if (*(int *)(*(int *)idx + ch * 4) == in_stack_00000010) {
    WideString(this,(WideString *)idx);
  }
  else {
    this_00 = getData((WideString *)idx);
    iVar1 = WideStringData::getLength(this_00);
    this_01 = WideStringData::create(iVar1);
    iVar1 = WideStringData::getLength(this_00);
    pwVar2 = WideStringData::getBuffer(this_00);
    __dest = WideStringData::getBuffer(this_01);
    memcpy(__dest,pwVar2,(iVar1 + 1) * 4);
    pwVar2 = WideStringData::getBuffer(this_01);
    pwVar2[ch] = in_stack_00000010;
    WideString(this,this_01);
  }
  return (WideString)(wchar *)this;
}
```
