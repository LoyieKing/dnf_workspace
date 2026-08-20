# TiXmlText

`_ZN9TiXmlTextC2EPKc.clone.0`

`TiXmlText::TiXmlText(char const*) [clone .clone.0]`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e6bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6bd0  _ZN9TiXmlTextC2EPKc.clone.0
#           TiXmlText::TiXmlText(char const*) [clone .clone.0]
# range [0x087e6bd0, 0x087e6c2a]
087e6bd0 +0x00:  push   %ebp
087e6bd1 +0x01:  mov    %esp,%ebp
087e6bd3 +0x03:  push   %ebx
087e6bd4 +0x04:  mov    %eax,%ebx
087e6bd6 +0x06:  sub    $0x24,%esp
087e6bd9 +0x09:  mov    %eax,(%esp)
087e6bdc +0x0c:  movl   $0x4,0x4(%esp)
087e6be4 +0x14:  call   087dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>  ; TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
087e6be9 +0x19:  lea    0x20(%ebx),%eax
087e6bec +0x1c:  movl   $&_ZTV9TiXmlText+0x8,(%ebx)
087e6bf2 +0x22:  movl   $0x0,0x8(%esp)
087e6bfa +0x2a:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e6c02 +0x32:  mov    %eax,(%esp)
087e6c05 +0x35:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e6c0a +0x3a:  movb   $0x0,0x2c(%ebx)
087e6c0e +0x3e:  add    $0x24,%esp
087e6c11 +0x41:  pop    %ebx
087e6c12 +0x42:  pop    %ebp
087e6c13 +0x43:  ret
087e6c14 +0x44:  mov    %eax,-0xc(%ebp)
087e6c17 +0x47:  mov    %ebx,(%esp)
087e6c1a +0x4a:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e6c1f +0x4f:  mov    -0xc(%ebp),%eax
087e6c22 +0x52:  mov    %eax,(%esp)
087e6c25 +0x55:  call   08ae3750 <_Unwind_Resume>
087e6c2a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlText::TiXmlText @ 0x87e6bd0

/* TiXmlText::TiXmlText(char const*) [clone .clone.0] */

void __thiscall TiXmlText::TiXmlText(TiXmlText *this,char *param_1)

{
  undefined4 *in_EAX;
  
  TiXmlNode::TiXmlNode();
  *in_EAX = &PTR__TiXmlText_08de1168;
                    /* try { // try from 087e6c05 to 087e6c09 has its CatchHandler @ 087e6c14 */
  std::string::assign((string *)(in_EAX + 8),"",0);
  *(undefined1 *)(in_EAX + 0xb) = 0;
  return;
}
```
