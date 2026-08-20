# FindOrCreate

`_ZN17TiXmlAttributeSet12FindOrCreateERKSs`

`TiXmlAttributeSet::FindOrCreate(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e3b50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3b50  _ZN17TiXmlAttributeSet12FindOrCreateERKSs
#           TiXmlAttributeSet::FindOrCreate(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087e3b50, 0x087e3c1e]
087e3b50 +0x00:  push   %ebp
087e3b51 +0x01:  mov    %esp,%ebp
087e3b53 +0x03:  push   %edi
087e3b54 +0x04:  push   %esi
087e3b55 +0x05:  push   %ebx
087e3b56 +0x06:  sub    $0x3c,%esp
087e3b59 +0x09:  mov    0x8(%ebp),%edx
087e3b5c +0x0c:  mov    0x20(%edx),%ebx
087e3b5f +0x0f:  cmp    %edx,%ebx
087e3b61 +0x11:  je     087e3ba3 <+0x53>
087e3b63 +0x13:  mov    0xc(%ebp),%eax
087e3b66 +0x16:  mov    %edx,-0x2c(%ebp)
087e3b69 +0x19:  mov    (%eax),%eax
087e3b6b +0x1b:  mov    %eax,-0x1c(%ebp)
087e3b6e +0x1e:  mov    -0xc(%eax),%eax
087e3b71 +0x21:  jmp    087e3b80 <+0x30>
087e3b73 +0x23:  nop
087e3b74 +0x24:  lea    0x0(%esi,%eiz,1),%esi
087e3b78 +0x28:  mov    0x20(%ebx),%ebx
087e3b7b +0x2b:  cmp    %ebx,-0x2c(%ebp)
087e3b7e +0x2e:  je     087e3ba0 <+0x50>
087e3b80 +0x30:  mov    0x14(%ebx),%esi
087e3b83 +0x33:  cmp    -0xc(%esi),%eax
087e3b86 +0x36:  jne    087e3b78 <+0x28>
087e3b88 +0x38:  mov    -0x1c(%ebp),%edi
087e3b8b +0x3b:  cmp    %eax,%eax
087e3b8d +0x3d:  mov    %eax,%ecx
087e3b8f +0x3f:  repz cmpsb %es:(%edi),%ds:(%esi)
087e3b91 +0x41:  jne    087e3b78 <+0x28>
087e3b93 +0x43:  add    $0x3c,%esp
087e3b96 +0x46:  mov    %ebx,%eax
087e3b98 +0x48:  pop    %ebx
087e3b99 +0x49:  pop    %esi
087e3b9a +0x4a:  pop    %edi
087e3b9b +0x4b:  pop    %ebp
087e3b9c +0x4c:  ret
087e3b9d +0x4d:  lea    0x0(%esi),%esi
087e3ba0 +0x50:  mov    -0x2c(%ebp),%edx
087e3ba3 +0x53:  mov    %edx,-0x20(%ebp)
087e3ba6 +0x56:  movl   $0x24,(%esp)
087e3bad +0x5d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e3bb2 +0x62:  mov    -0x20(%ebp),%edx
087e3bb5 +0x65:  movl   $0xffffffff,0x8(%eax)
087e3bbc +0x6c:  mov    %eax,%ebx
087e3bbe +0x6e:  movl   $0xffffffff,0x4(%eax)
087e3bc5 +0x75:  movl   $0x0,0xc(%eax)
087e3bcc +0x7c:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e3bd2 +0x82:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e3bd9 +0x89:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e3be0 +0x90:  movl   $0x0,0x10(%eax)
087e3be7 +0x97:  movl   $0x0,0x20(%eax)
087e3bee +0x9e:  movl   $0x0,0x1c(%eax)
087e3bf5 +0xa5:  mov    %eax,0x4(%esp)
087e3bf9 +0xa9:  mov    %edx,(%esp)
087e3bfc +0xac:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e3c01 +0xb1:  mov    0xc(%ebp),%eax
087e3c04 +0xb4:  mov    %eax,0x4(%esp)
087e3c08 +0xb8:  lea    0x14(%ebx),%eax
087e3c0b +0xbb:  mov    %eax,(%esp)
087e3c0e +0xbe:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e3c13 +0xc3:  add    $0x3c,%esp
087e3c16 +0xc6:  mov    %ebx,%eax
087e3c18 +0xc8:  pop    %ebx
087e3c19 +0xc9:  pop    %esi
087e3c1a +0xca:  pop    %edi
087e3c1b +0xcb:  pop    %ebp
087e3c1c +0xcc:  ret
087e3c1d +0xcd:  nop
087e3c1e +0xce:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlAttributeSet::FindOrCreate @ 0x87e3b50

/* TiXmlAttributeSet::FindOrCreate(std::string const&) */

TiXmlAttributeSet * __thiscall
TiXmlAttributeSet::FindOrCreate(TiXmlAttributeSet *this,string *param_1)

{
  int iVar1;
  TiXmlAttribute *pTVar2;
  int iVar3;
  TiXmlAttributeSet *pTVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  pTVar4 = *(TiXmlAttributeSet **)(this + 0x20);
  if (pTVar4 != this) {
    iVar1 = *(int *)(*(char **)param_1 + -0xc);
    do {
      if (iVar1 == *(int *)(*(char **)(pTVar4 + 0x14) + -0xc)) {
        bVar7 = true;
        iVar3 = iVar1;
        pcVar5 = *(char **)(pTVar4 + 0x14);
        pcVar6 = *(char **)param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          return pTVar4;
        }
      }
      pTVar4 = *(TiXmlAttributeSet **)(pTVar4 + 0x20);
    } while (this != pTVar4);
  }
  pTVar2 = operator_new(0x24);
  *(undefined4 *)(pTVar2 + 8) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 4) = 0xffffffff;
  *(undefined4 *)(pTVar2 + 0xc) = 0;
  *(undefined ***)pTVar2 = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(pTVar2 + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(pTVar2 + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(pTVar2 + 0x10) = 0;
  *(undefined4 *)(pTVar2 + 0x20) = 0;
  *(undefined4 *)(pTVar2 + 0x1c) = 0;
  Add(this,pTVar2);
  std::string::assign((string *)(pTVar2 + 0x14),param_1);
  return (TiXmlAttributeSet *)pTVar2;
}
```
