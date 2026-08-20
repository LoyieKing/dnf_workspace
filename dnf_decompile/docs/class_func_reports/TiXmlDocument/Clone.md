# Clone

`_ZNK13TiXmlDocument5CloneEv`

`TiXmlDocument::Clone() const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e2ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2ec0  _ZNK13TiXmlDocument5CloneEv
#           TiXmlDocument::Clone() const
# range [0x087e2ec0, 0x087e2f9f]
087e2ec0 +0x00:  push   %ebp
087e2ec1 +0x01:  mov    %esp,%ebp
087e2ec3 +0x03:  push   %edi
087e2ec4 +0x04:  push   %esi
087e2ec5 +0x05:  push   %ebx
087e2ec6 +0x06:  sub    $0x2c,%esp
087e2ec9 +0x09:  mov    0x8(%ebp),%esi
087e2ecc +0x0c:  movl   $0x48,(%esp)
087e2ed3 +0x13:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e2ed8 +0x18:  mov    %eax,%ebx
087e2eda +0x1a:  mov    %eax,(%esp)
087e2edd +0x1d:  call   087e2df0 <_ZN13TiXmlDocumentC1Ev>  ; TiXmlDocument::TiXmlDocument()
087e2ee2 +0x22:  xor    %edi,%edi
087e2ee4 +0x24:  test   %ebx,%ebx
087e2ee6 +0x26:  je     087e2f83 <+0xc3>
087e2eec +0x2c:  mov    0x20(%esi),%edx
087e2eef +0x2f:  mov    %ebx,%edi
087e2ef1 +0x31:  mov    %edx,(%esp)
087e2ef4 +0x34:  mov    %edx,-0x1c(%ebp)
087e2ef7 +0x37:  call   0807e3b0 <_init+0xca8>
087e2efc +0x3c:  mov    -0x1c(%ebp),%edx
087e2eff +0x3f:  mov    %edx,0x4(%esp)
087e2f03 +0x43:  mov    %eax,0x8(%esp)
087e2f07 +0x47:  lea    0x20(%ebx),%eax
087e2f0a +0x4a:  mov    %eax,(%esp)
087e2f0d +0x4d:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2f12 +0x52:  mov    0xc(%esi),%eax
087e2f15 +0x55:  mov    0x8(%esi),%edx
087e2f18 +0x58:  mov    %eax,0xc(%ebx)
087e2f1b +0x5b:  mov    0x4(%esi),%eax
087e2f1e +0x5e:  mov    %edx,0x8(%ebx)
087e2f21 +0x61:  mov    %eax,0x4(%ebx)
087e2f24 +0x64:  movzbl 0x2c(%esi),%eax
087e2f28 +0x68:  mov    %al,0x2c(%ebx)
087e2f2b +0x6b:  mov    0x30(%esi),%eax
087e2f2e +0x6e:  mov    %eax,0x30(%ebx)
087e2f31 +0x71:  lea    0x34(%esi),%eax
087e2f34 +0x74:  mov    %eax,0x4(%esp)
087e2f38 +0x78:  lea    0x34(%ebx),%eax
087e2f3b +0x7b:  mov    %eax,(%esp)
087e2f3e +0x7e:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e2f43 +0x83:  mov    0x38(%esi),%eax
087e2f46 +0x86:  mov    0x40(%esi),%edx
087e2f49 +0x89:  mov    %eax,0x38(%ebx)
087e2f4c +0x8c:  mov    0x3c(%esi),%eax
087e2f4f +0x8f:  mov    %edx,0x40(%ebx)
087e2f52 +0x92:  mov    %eax,0x3c(%ebx)
087e2f55 +0x95:  movzbl 0x44(%esi),%eax
087e2f59 +0x99:  mov    0x18(%esi),%esi
087e2f5c +0x9c:  mov    %al,0x44(%ebx)
087e2f5f +0x9f:  test   %esi,%esi
087e2f61 +0xa1:  je     087e2f83 <+0xc3>
087e2f63 +0xa3:  nop
087e2f64 +0xa4:  lea    0x0(%esi,%eiz,1),%esi
087e2f68 +0xa8:  mov    (%esi),%eax
087e2f6a +0xaa:  mov    %esi,(%esp)
087e2f6d +0xad:  call   *0x40(%eax)
087e2f70 +0xb0:  mov    %ebx,(%esp)
087e2f73 +0xb3:  mov    %eax,0x4(%esp)
087e2f77 +0xb7:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e2f7c +0xbc:  mov    0x28(%esi),%esi
087e2f7f +0xbf:  test   %esi,%esi
087e2f81 +0xc1:  jne    087e2f68 <+0xa8>
087e2f83 +0xc3:  add    $0x2c,%esp
087e2f86 +0xc6:  mov    %edi,%eax
087e2f88 +0xc8:  pop    %ebx
087e2f89 +0xc9:  pop    %esi
087e2f8a +0xca:  pop    %edi
087e2f8b +0xcb:  pop    %ebp
087e2f8c +0xcc:  ret
087e2f8d +0xcd:  mov    %eax,%esi
087e2f8f +0xcf:  mov    %ebx,(%esp)
087e2f92 +0xd2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e2f97 +0xd7:  mov    %esi,(%esp)
087e2f9a +0xda:  call   08ae3750 <_Unwind_Resume>
087e2f9f +0xdf:  nop
```

## 反编译 C

```c
// TiXmlDocument::Clone @ 0x87e2ec0

/* TiXmlDocument::Clone() const */

TiXmlDocument * __thiscall TiXmlDocument::Clone(TiXmlDocument *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  TiXmlDocument *this_00;
  size_t sVar4;
  TiXmlNode *pTVar5;
  TiXmlDocument *pTVar6;
  
  this_00 = operator_new(0x48);
                    /* try { // try from 087e2edd to 087e2ee1 has its CatchHandler @ 087e2f8d */
  TiXmlDocument(this_00);
  pTVar6 = (TiXmlDocument *)0x0;
  if (this_00 != (TiXmlDocument *)0x0) {
    __s = *(char **)(this + 0x20);
    sVar4 = strlen(__s);
    std::string::assign((string *)(this_00 + 0x20),__s,sVar4);
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
    uVar2 = *(undefined4 *)(this + 4);
    *(undefined4 *)(this_00 + 8) = uVar1;
    *(undefined4 *)(this_00 + 4) = uVar2;
    this_00[0x2c] = this[0x2c];
    *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this + 0x30);
    std::string::assign((string *)(this_00 + 0x34),(string *)(this + 0x34));
    uVar1 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(this + 0x38);
    uVar2 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this_00 + 0x40) = uVar1;
    *(undefined4 *)(this_00 + 0x3c) = uVar2;
    piVar3 = *(int **)(this + 0x18);
    this_00[0x44] = this[0x44];
    for (; pTVar6 = this_00, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
      pTVar5 = (TiXmlNode *)(**(code **)(*piVar3 + 0x40))(piVar3);
      TiXmlNode::LinkEndChild((TiXmlNode *)this_00,pTVar5);
    }
  }
  return pTVar6;
}
```
