# TiXmlElement

`_ZN12TiXmlElementC1EPKc`

`TiXmlElement::TiXmlElement(char const*)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3640  _ZN12TiXmlElementC1EPKc
#           TiXmlElement::TiXmlElement(char const*)
# range [0x087e3640, 0x087e371e]
087e3640 +0x00:  push   %ebp
087e3641 +0x01:  mov    %esp,%ebp
087e3643 +0x03:  sub    $0x28,%esp
087e3646 +0x06:  mov    %ebx,-0xc(%ebp)
087e3649 +0x09:  mov    0x8(%ebp),%ebx
087e364c +0x0c:  mov    %edi,-0x4(%ebp)
087e364f +0x0f:  mov    0xc(%ebp),%edi
087e3652 +0x12:  mov    %esi,-0x8(%ebp)
087e3655 +0x15:  lea    0x2c(%ebx),%esi
087e3658 +0x18:  movl   $0xffffffff,0x8(%ebx)
087e365f +0x1f:  movl   $0xffffffff,0x4(%ebx)
087e3666 +0x26:  movl   $0x0,0xc(%ebx)
087e366d +0x2d:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e3674 +0x34:  movl   $0x0,0x10(%ebx)
087e367b +0x3b:  movl   $0x1,0x14(%ebx)
087e3682 +0x42:  movl   $0x0,0x24(%ebx)
087e3689 +0x49:  movl   $0x0,0x28(%ebx)
087e3690 +0x50:  movl   $&_ZTV12TiXmlElement+0x8,(%ebx)
087e3696 +0x56:  movl   $0xffffffff,0x34(%ebx)
087e369d +0x5d:  movl   $0xffffffff,0x30(%ebx)
087e36a4 +0x64:  movl   $0x0,0x38(%ebx)
087e36ab +0x6b:  movl   $&_ZTV14TiXmlAttribute+0x8,0x2c(%ebx)
087e36b2 +0x72:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x40(%ebx)
087e36b9 +0x79:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x44(%ebx)
087e36c0 +0x80:  movl   $0x0,0x3c(%ebx)
087e36c7 +0x87:  mov    %esi,0x4c(%ebx)
087e36ca +0x8a:  mov    %esi,0x48(%ebx)
087e36cd +0x8d:  movl   $0x0,0x1c(%ebx)
087e36d4 +0x94:  movl   $0x0,0x18(%ebx)
087e36db +0x9b:  mov    %edi,(%esp)
087e36de +0x9e:  call   0807e3b0 <_init+0xca8>
087e36e3 +0xa3:  mov    %edi,0x4(%esp)
087e36e7 +0xa7:  mov    %eax,0x8(%esp)
087e36eb +0xab:  lea    0x20(%ebx),%eax
087e36ee +0xae:  mov    %eax,(%esp)
087e36f1 +0xb1:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e36f6 +0xb6:  mov    -0xc(%ebp),%ebx
087e36f9 +0xb9:  mov    -0x8(%ebp),%esi
087e36fc +0xbc:  mov    -0x4(%ebp),%edi
087e36ff +0xbf:  mov    %ebp,%esp
087e3701 +0xc1:  pop    %ebp
087e3702 +0xc2:  ret
087e3703 +0xc3:  mov    %eax,%edi
087e3705 +0xc5:  mov    %esi,(%esp)
087e3708 +0xc8:  call   087e1cd0 <_ZN17TiXmlAttributeSetD1Ev>  ; TiXmlAttributeSet::~TiXmlAttributeSet()
087e370d +0xcd:  mov    %ebx,(%esp)
087e3710 +0xd0:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e3715 +0xd5:  mov    %edi,(%esp)
087e3718 +0xd8:  call   08ae3750 <_Unwind_Resume>
087e371d +0xdd:  nop
087e371e +0xde:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlElement::TiXmlElement @ 0x87e3640

/* TiXmlElement::TiXmlElement(char const*) */

void __thiscall TiXmlElement::TiXmlElement(TiXmlElement *this,char *param_1)

{
  size_t sVar1;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x2c) = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x40) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x44) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x3c) = 0;
  *(TiXmlElement **)(this + 0x4c) = this + 0x2c;
  *(TiXmlElement **)(this + 0x48) = this + 0x2c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  sVar1 = strlen(param_1);
                    /* try { // try from 087e36f1 to 087e36f5 has its CatchHandler @ 087e3703 */
  std::string::assign((string *)(this + 0x20),param_1,sVar1);
  return;
}
```
