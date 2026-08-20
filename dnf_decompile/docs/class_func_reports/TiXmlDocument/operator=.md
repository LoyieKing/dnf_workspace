# operator=

`_ZN13TiXmlDocumentaSERKS_`

`TiXmlDocument::operator=(TiXmlDocument const&)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e2960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2960  _ZN13TiXmlDocumentaSERKS_
#           TiXmlDocument::operator=(TiXmlDocument const&)
# range [0x087e2960, 0x087e2a2e]
087e2960 +0x00:  push   %ebp
087e2961 +0x01:  mov    %esp,%ebp
087e2963 +0x03:  push   %edi
087e2964 +0x04:  push   %esi
087e2965 +0x05:  push   %ebx
087e2966 +0x06:  sub    $0x1c,%esp
087e2969 +0x09:  mov    0x8(%ebp),%esi
087e296c +0x0c:  mov    0xc(%ebp),%ebx
087e296f +0x0f:  mov    0x18(%esi),%eax
087e2972 +0x12:  test   %eax,%eax
087e2974 +0x14:  jne    087e297a <+0x1a>
087e2976 +0x16:  jmp    087e2989 <+0x29>
087e2978 +0x18:  mov    %edi,%eax
087e297a +0x1a:  mov    0x28(%eax),%edi
087e297d +0x1d:  mov    (%eax),%edx
087e297f +0x1f:  mov    %eax,(%esp)
087e2982 +0x22:  call   *0x4(%edx)
087e2985 +0x25:  test   %edi,%edi
087e2987 +0x27:  jne    087e2978 <+0x18>
087e2989 +0x29:  mov    0x20(%ebx),%edi
087e298c +0x2c:  movl   $0x0,0x18(%esi)
087e2993 +0x33:  movl   $0x0,0x1c(%esi)
087e299a +0x3a:  mov    %edi,(%esp)
087e299d +0x3d:  call   0807e3b0 <_init+0xca8>
087e29a2 +0x42:  mov    %edi,0x4(%esp)
087e29a6 +0x46:  mov    %eax,0x8(%esp)
087e29aa +0x4a:  lea    0x20(%esi),%eax
087e29ad +0x4d:  mov    %eax,(%esp)
087e29b0 +0x50:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e29b5 +0x55:  mov    0xc(%ebx),%eax
087e29b8 +0x58:  mov    0x8(%ebx),%edx
087e29bb +0x5b:  mov    %eax,0xc(%esi)
087e29be +0x5e:  mov    0x4(%ebx),%eax
087e29c1 +0x61:  mov    %edx,0x8(%esi)
087e29c4 +0x64:  mov    %eax,0x4(%esi)
087e29c7 +0x67:  movzbl 0x2c(%ebx),%eax
087e29cb +0x6b:  mov    %al,0x2c(%esi)
087e29ce +0x6e:  mov    0x30(%ebx),%eax
087e29d1 +0x71:  mov    %eax,0x30(%esi)
087e29d4 +0x74:  lea    0x34(%ebx),%eax
087e29d7 +0x77:  mov    %eax,0x4(%esp)
087e29db +0x7b:  lea    0x34(%esi),%eax
087e29de +0x7e:  mov    %eax,(%esp)
087e29e1 +0x81:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e29e6 +0x86:  mov    0x38(%ebx),%eax
087e29e9 +0x89:  mov    0x40(%ebx),%edx
087e29ec +0x8c:  mov    %eax,0x38(%esi)
087e29ef +0x8f:  mov    0x3c(%ebx),%eax
087e29f2 +0x92:  mov    %edx,0x40(%esi)
087e29f5 +0x95:  mov    %eax,0x3c(%esi)
087e29f8 +0x98:  movzbl 0x44(%ebx),%eax
087e29fc +0x9c:  mov    0x18(%ebx),%ebx
087e29ff +0x9f:  mov    %al,0x44(%esi)
087e2a02 +0xa2:  test   %ebx,%ebx
087e2a04 +0xa4:  je     087e2a23 <+0xc3>
087e2a06 +0xa6:  xchg   %ax,%ax
087e2a08 +0xa8:  mov    (%ebx),%eax
087e2a0a +0xaa:  mov    %ebx,(%esp)
087e2a0d +0xad:  call   *0x40(%eax)
087e2a10 +0xb0:  mov    %esi,(%esp)
087e2a13 +0xb3:  mov    %eax,0x4(%esp)
087e2a17 +0xb7:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e2a1c +0xbc:  mov    0x28(%ebx),%ebx
087e2a1f +0xbf:  test   %ebx,%ebx
087e2a21 +0xc1:  jne    087e2a08 <+0xa8>
087e2a23 +0xc3:  add    $0x1c,%esp
087e2a26 +0xc6:  mov    %esi,%eax
087e2a28 +0xc8:  pop    %ebx
087e2a29 +0xc9:  pop    %esi
087e2a2a +0xca:  pop    %edi
087e2a2b +0xcb:  pop    %ebp
087e2a2c +0xcc:  ret
087e2a2d +0xcd:  nop
087e2a2e +0xce:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlDocument::operator= @ 0x87e2960

/* TiXmlDocument::TEMPNAMEPLACEHOLDERVALUE(TiXmlDocument const&) */

TiXmlDocument * __thiscall TiXmlDocument::operator=(TiXmlDocument *this,TiXmlDocument *param_1)

{
  int *piVar1;
  char *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  size_t sVar5;
  TiXmlNode *pTVar6;
  
  piVar4 = *(int **)(this + 0x18);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[10];
    (**(code **)(*piVar4 + 4))(piVar4);
    piVar4 = piVar1;
  }
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  sVar5 = strlen(__s);
  std::string::assign((string *)(this + 0x20),__s,sVar5);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  piVar4 = *(int **)(param_1 + 0x18);
  this[0x44] = param_1[0x44];
  for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[10]) {
    pTVar6 = (TiXmlNode *)(**(code **)(*piVar4 + 0x40))(piVar4);
    TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar6);
  }
  return this;
}
```
