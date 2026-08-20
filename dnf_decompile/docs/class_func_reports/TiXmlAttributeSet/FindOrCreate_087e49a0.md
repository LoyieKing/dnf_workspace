# FindOrCreate

`_ZN17TiXmlAttributeSet12FindOrCreateEPKc`

`TiXmlAttributeSet::FindOrCreate(char const*)`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e49a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e49a0  _ZN17TiXmlAttributeSet12FindOrCreateEPKc
#           TiXmlAttributeSet::FindOrCreate(char const*)
# range [0x087e49a0, 0x087e4a5e]
087e49a0 +0x00:  push   %ebp
087e49a1 +0x01:  mov    %esp,%ebp
087e49a3 +0x03:  push   %edi
087e49a4 +0x04:  push   %esi
087e49a5 +0x05:  push   %ebx
087e49a6 +0x06:  sub    $0x1c,%esp
087e49a9 +0x09:  mov    0x8(%ebp),%esi
087e49ac +0x0c:  mov    0xc(%ebp),%edi
087e49af +0x0f:  mov    0x20(%esi),%ebx
087e49b2 +0x12:  cmp    %esi,%ebx
087e49b4 +0x14:  jne    087e49bf <+0x1f>
087e49b6 +0x16:  jmp    087e49e0 <+0x40>
087e49b8 +0x18:  mov    0x20(%ebx),%ebx
087e49bb +0x1b:  cmp    %esi,%ebx
087e49bd +0x1d:  je     087e49e0 <+0x40>
087e49bf +0x1f:  mov    0x14(%ebx),%eax
087e49c2 +0x22:  mov    %edi,0x4(%esp)
087e49c6 +0x26:  mov    %eax,(%esp)
087e49c9 +0x29:  call   0807e4e0 <_init+0xdd8>
087e49ce +0x2e:  test   %eax,%eax
087e49d0 +0x30:  jne    087e49b8 <+0x18>
087e49d2 +0x32:  add    $0x1c,%esp
087e49d5 +0x35:  mov    %ebx,%eax
087e49d7 +0x37:  pop    %ebx
087e49d8 +0x38:  pop    %esi
087e49d9 +0x39:  pop    %edi
087e49da +0x3a:  pop    %ebp
087e49db +0x3b:  ret
087e49dc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
087e49e0 +0x40:  movl   $0x24,(%esp)
087e49e7 +0x47:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e49ec +0x4c:  movl   $0xffffffff,0x8(%eax)
087e49f3 +0x53:  mov    %eax,%ebx
087e49f5 +0x55:  movl   $0xffffffff,0x4(%eax)
087e49fc +0x5c:  movl   $0x0,0xc(%eax)
087e4a03 +0x63:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e4a09 +0x69:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e4a10 +0x70:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e4a17 +0x77:  movl   $0x0,0x10(%eax)
087e4a1e +0x7e:  movl   $0x0,0x20(%eax)
087e4a25 +0x85:  movl   $0x0,0x1c(%eax)
087e4a2c +0x8c:  mov    %eax,0x4(%esp)
087e4a30 +0x90:  mov    %esi,(%esp)
087e4a33 +0x93:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e4a38 +0x98:  mov    %edi,(%esp)
087e4a3b +0x9b:  call   0807e3b0 <_init+0xca8>
087e4a40 +0xa0:  mov    %edi,0x4(%esp)
087e4a44 +0xa4:  mov    %eax,0x8(%esp)
087e4a48 +0xa8:  lea    0x14(%ebx),%eax
087e4a4b +0xab:  mov    %eax,(%esp)
087e4a4e +0xae:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e4a53 +0xb3:  add    $0x1c,%esp
087e4a56 +0xb6:  mov    %ebx,%eax
087e4a58 +0xb8:  pop    %ebx
087e4a59 +0xb9:  pop    %esi
087e4a5a +0xba:  pop    %edi
087e4a5b +0xbb:  pop    %ebp
087e4a5c +0xbc:  ret
087e4a5d +0xbd:  nop
087e4a5e +0xbe:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlAttributeSet::FindOrCreate @ 0x87e49a0

/* TiXmlAttributeSet::FindOrCreate(char const*) */

TiXmlAttribute * __thiscall TiXmlAttributeSet::FindOrCreate(TiXmlAttributeSet *this,char *param_1)

{
  TiXmlAttributeSet *pTVar1;
  int iVar2;
  TiXmlAttribute *pTVar3;
  size_t sVar4;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  while( true ) {
    if (pTVar1 == this) {
      pTVar3 = operator_new(0x24);
      *(undefined4 *)(pTVar3 + 8) = 0xffffffff;
      *(undefined4 *)(pTVar3 + 4) = 0xffffffff;
      *(undefined4 *)(pTVar3 + 0xc) = 0;
      *(undefined ***)pTVar3 = &PTR__TiXmlAttribute_08de2028;
      *(undefined1 **)(pTVar3 + 0x14) = &DAT_0948ccfc;
      *(undefined1 **)(pTVar3 + 0x18) = &DAT_0948ccfc;
      *(undefined4 *)(pTVar3 + 0x10) = 0;
      *(undefined4 *)(pTVar3 + 0x20) = 0;
      *(undefined4 *)(pTVar3 + 0x1c) = 0;
      Add(this,pTVar3);
      sVar4 = strlen(param_1);
      std::string::assign((string *)(pTVar3 + 0x14),param_1,sVar4);
      return pTVar3;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlAttributeSet **)(pTVar1 + 0x20);
  }
  return (TiXmlAttribute *)pTVar1;
}
```
