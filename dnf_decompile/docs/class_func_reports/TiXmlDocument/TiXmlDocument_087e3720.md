# TiXmlDocument

`_ZN13TiXmlDocumentC1ERKS_`

`TiXmlDocument::TiXmlDocument(TiXmlDocument const&)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e3720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3720  _ZN13TiXmlDocumentC1ERKS_
#           TiXmlDocument::TiXmlDocument(TiXmlDocument const&)
# range [0x087e3720, 0x087e383d]
087e3720 +0x000:  push   %ebp
087e3721 +0x001:  mov    %esp,%ebp
087e3723 +0x003:  push   %edi
087e3724 +0x004:  push   %esi
087e3725 +0x005:  push   %ebx
087e3726 +0x006:  sub    $0x1c,%esp
087e3729 +0x009:  mov    0x8(%ebp),%esi
087e372c +0x00c:  mov    0xc(%ebp),%ebx
087e372f +0x00f:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%esi)
087e3736 +0x016:  mov    0x20(%ebx),%edi
087e3739 +0x019:  movl   $0xffffffff,0x8(%esi)
087e3740 +0x020:  movl   $0xffffffff,0x4(%esi)
087e3747 +0x027:  movl   $0x0,0xc(%esi)
087e374e +0x02e:  movl   $0x0,0x10(%esi)
087e3755 +0x035:  movl   $0x0,0x14(%esi)
087e375c +0x03c:  movl   $0x0,0x18(%esi)
087e3763 +0x043:  movl   $0x0,0x1c(%esi)
087e376a +0x04a:  movl   $0x0,0x24(%esi)
087e3771 +0x051:  movl   $0x0,0x28(%esi)
087e3778 +0x058:  movl   $&_ZTV13TiXmlDocument+0x8,(%esi)
087e377e +0x05e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%esi)
087e3785 +0x065:  movl   $0xffffffff,0x40(%esi)
087e378c +0x06c:  movl   $0xffffffff,0x3c(%esi)
087e3793 +0x073:  mov    %edi,(%esp)
087e3796 +0x076:  call   0807e3b0 <_init+0xca8>
087e379b +0x07b:  mov    %edi,0x4(%esp)
087e379f +0x07f:  lea    0x34(%esi),%edi
087e37a2 +0x082:  mov    %eax,0x8(%esp)
087e37a6 +0x086:  lea    0x20(%esi),%eax
087e37a9 +0x089:  mov    %eax,(%esp)
087e37ac +0x08c:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e37b1 +0x091:  mov    0xc(%ebx),%eax
087e37b4 +0x094:  mov    0x8(%ebx),%edx
087e37b7 +0x097:  mov    %eax,0xc(%esi)
087e37ba +0x09a:  mov    0x4(%ebx),%eax
087e37bd +0x09d:  mov    %edx,0x8(%esi)
087e37c0 +0x0a0:  mov    %eax,0x4(%esi)
087e37c3 +0x0a3:  movzbl 0x2c(%ebx),%eax
087e37c7 +0x0a7:  mov    %al,0x2c(%esi)
087e37ca +0x0aa:  mov    0x30(%ebx),%eax
087e37cd +0x0ad:  mov    %eax,0x30(%esi)
087e37d0 +0x0b0:  lea    0x34(%ebx),%eax
087e37d3 +0x0b3:  mov    %eax,0x4(%esp)
087e37d7 +0x0b7:  mov    %edi,(%esp)
087e37da +0x0ba:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e37df +0x0bf:  mov    0x38(%ebx),%eax
087e37e2 +0x0c2:  mov    0x40(%ebx),%edx
087e37e5 +0x0c5:  mov    %eax,0x38(%esi)
087e37e8 +0x0c8:  mov    0x3c(%ebx),%eax
087e37eb +0x0cb:  mov    %edx,0x40(%esi)
087e37ee +0x0ce:  mov    %eax,0x3c(%esi)
087e37f1 +0x0d1:  movzbl 0x44(%ebx),%eax
087e37f5 +0x0d5:  mov    0x18(%ebx),%ebx
087e37f8 +0x0d8:  mov    %al,0x44(%esi)
087e37fb +0x0db:  test   %ebx,%ebx
087e37fd +0x0dd:  je     087e381b <+0xfb>
087e37ff +0x0df:  nop
087e3800 +0x0e0:  mov    (%ebx),%eax
087e3802 +0x0e2:  mov    %ebx,(%esp)
087e3805 +0x0e5:  call   *0x40(%eax)
087e3808 +0x0e8:  mov    %eax,0x4(%esp)
087e380c +0x0ec:  mov    %esi,(%esp)
087e380f +0x0ef:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e3814 +0x0f4:  mov    0x28(%ebx),%ebx
087e3817 +0x0f7:  test   %ebx,%ebx
087e3819 +0x0f9:  jne    087e3800 <+0xe0>
087e381b +0x0fb:  add    $0x1c,%esp
087e381e +0x0fe:  pop    %ebx
087e381f +0x0ff:  pop    %esi
087e3820 +0x100:  pop    %edi
087e3821 +0x101:  pop    %ebp
087e3822 +0x102:  ret
087e3823 +0x103:  mov    %eax,%ebx
087e3825 +0x105:  mov    %edi,(%esp)
087e3828 +0x108:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e382d +0x10d:  mov    %esi,(%esp)
087e3830 +0x110:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e3835 +0x115:  mov    %ebx,(%esp)
087e3838 +0x118:  call   08ae3750 <_Unwind_Resume>
087e383d +0x11d:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlDocument::TiXmlDocument @ 0x87e3720

/* TiXmlDocument::TiXmlDocument(TiXmlDocument const&) */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this,TiXmlDocument *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  size_t sVar4;
  TiXmlNode *pTVar5;
  
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDocument_08de2048;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  sVar4 = strlen(__s);
                    /* try { // try from 087e37ac to 087e3813 has its CatchHandler @ 087e3823 */
  std::string::assign((string *)(this + 0x20),__s,sVar4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  piVar3 = *(int **)(param_1 + 0x18);
  this[0x44] = param_1[0x44];
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
    pTVar5 = (TiXmlNode *)(**(code **)(*piVar3 + 0x40))(piVar3);
    TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
  }
  return;
}
```
