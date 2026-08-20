# setAt

`_ZN10CharString5setAtEic`

`CharString::setAt(int, char)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6ca2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6ca2  _ZN10CharString5setAtEic
#           CharString::setAt(int, char)
# range [0x08ad6ca2, 0x08ad6d6f]
08ad6ca2 +0x00:  push   %ebp
08ad6ca3 +0x01:  mov    %esp,%ebp
08ad6ca5 +0x03:  push   %edi
08ad6ca6 +0x04:  push   %esi
08ad6ca7 +0x05:  push   %ebx
08ad6ca8 +0x06:  sub    $0x3c,%esp
08ad6cab +0x09:  mov    0x8(%ebp),%ebx
08ad6cae +0x0c:  mov    0x14(%ebp),%eax
08ad6cb1 +0x0f:  mov    %al,-0x2c(%ebp)
08ad6cb4 +0x12:  mov    0xc(%ebp),%eax
08ad6cb7 +0x15:  mov    (%eax),%edx
08ad6cb9 +0x17:  mov    0x10(%ebp),%eax
08ad6cbc +0x1a:  lea    (%edx,%eax,1),%eax
08ad6cbf +0x1d:  movzbl (%eax),%eax
08ad6cc2 +0x20:  cmp    -0x2c(%ebp),%al
08ad6cc5 +0x23:  jne    08ad6cdd <+0x3b>
08ad6cc7 +0x25:  mov    %ebx,%eax
08ad6cc9 +0x27:  mov    0xc(%ebp),%edx
08ad6ccc +0x2a:  mov    %edx,0x4(%esp)
08ad6cd0 +0x2e:  mov    %eax,(%esp)
08ad6cd3 +0x31:  call   08ad69c6 <_ZN10CharStringC1ERKS_>  ; CharString::CharString(CharString const&)
08ad6cd8 +0x36:  jmp    08ad6d61 <+0xbf>
08ad6cdd +0x3b:  mov    0xc(%ebp),%eax
08ad6ce0 +0x3e:  mov    %eax,(%esp)
08ad6ce3 +0x41:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad6ce8 +0x46:  mov    %eax,-0x20(%ebp)
08ad6ceb +0x49:  mov    -0x20(%ebp),%eax
08ad6cee +0x4c:  mov    %eax,(%esp)
08ad6cf1 +0x4f:  call   08ad6934 <_ZNK14CharStringData9getLengthEv>  ; CharStringData::getLength() const
08ad6cf6 +0x54:  mov    %eax,(%esp)
08ad6cf9 +0x57:  call   08ad694e <_ZN14CharStringData6createEi>  ; CharStringData::create(int)
08ad6cfe +0x5c:  mov    %eax,-0x1c(%ebp)
08ad6d01 +0x5f:  mov    -0x20(%ebp),%eax
08ad6d04 +0x62:  mov    %eax,(%esp)
08ad6d07 +0x65:  call   08ad6934 <_ZNK14CharStringData9getLengthEv>  ; CharStringData::getLength() const
08ad6d0c +0x6a:  add    $0x1,%eax
08ad6d0f +0x6d:  mov    %eax,%edi
08ad6d11 +0x6f:  mov    -0x20(%ebp),%eax
08ad6d14 +0x72:  mov    %eax,(%esp)
08ad6d17 +0x75:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6d1c +0x7a:  mov    %eax,%esi
08ad6d1e +0x7c:  mov    -0x1c(%ebp),%eax
08ad6d21 +0x7f:  mov    %eax,(%esp)
08ad6d24 +0x82:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6d29 +0x87:  mov    %edi,0x8(%esp)
08ad6d2d +0x8b:  mov    %esi,0x4(%esp)
08ad6d31 +0x8f:  mov    %eax,(%esp)
08ad6d34 +0x92:  call   0807d8a0 <_init+0x198>
08ad6d39 +0x97:  mov    -0x1c(%ebp),%eax
08ad6d3c +0x9a:  mov    %eax,(%esp)
08ad6d3f +0x9d:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6d44 +0xa2:  mov    0x10(%ebp),%edx
08ad6d47 +0xa5:  lea    (%eax,%edx,1),%edx
08ad6d4a +0xa8:  movzbl -0x2c(%ebp),%eax
08ad6d4e +0xac:  mov    %al,(%edx)
08ad6d50 +0xae:  mov    %ebx,%eax
08ad6d52 +0xb0:  mov    -0x1c(%ebp),%edx
08ad6d55 +0xb3:  mov    %edx,0x4(%esp)
08ad6d59 +0xb7:  mov    %eax,(%esp)
08ad6d5c +0xba:  call   08ad6ba0 <_ZN10CharStringC1EP14CharStringData>  ; CharString::CharString(CharStringData*)
08ad6d61 +0xbf:  mov    %ebx,%eax
08ad6d63 +0xc1:  mov    %ebx,%eax
08ad6d65 +0xc3:  add    $0x3c,%esp
08ad6d68 +0xc6:  pop    %ebx
08ad6d69 +0xc7:  pop    %esi
08ad6d6a +0xc8:  pop    %edi
08ad6d6b +0xc9:  pop    %ebp
08ad6d6c +0xca:  ret    $0x4
08ad6d6f +0xcd:  nop
```

## 反编译 C

```c
// CharString::setAt @ 0x8ad6ca2

/* DWARF original prototype: CharString setAt(CharString * this, int32 idx, char ch) */

CharString __thiscall CharString::setAt(CharString *this,int32 idx,char ch)

{
  CharStringData *this_00;
  int32 iVar1;
  CharStringData *this_01;
  char *pcVar2;
  char *__dest;
  undefined3 in_stack_0000000d;
  char in_stack_00000010;
  
                    /* Unresolved local var: CharStringData * thisData@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  if (*(char *)(*(int *)idx + _ch) == in_stack_00000010) {
    CharString(this,(CharString *)idx);
  }
  else {
    this_00 = getData((CharString *)idx);
    iVar1 = CharStringData::getLength(this_00);
    this_01 = CharStringData::create(iVar1);
    iVar1 = CharStringData::getLength(this_00);
    pcVar2 = CharStringData::getBuffer(this_00);
    __dest = CharStringData::getBuffer(this_01);
    memcpy(__dest,pcVar2,iVar1 + 1);
    pcVar2 = CharStringData::getBuffer(this_01);
    pcVar2[_ch] = in_stack_00000010;
    CharString(this,this_01);
  }
  return (CharString)(char *)this;
}
```
