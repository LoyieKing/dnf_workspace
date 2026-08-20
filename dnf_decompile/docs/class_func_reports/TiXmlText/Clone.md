# Clone

`_ZNK9TiXmlText5CloneEv`

`TiXmlText::Clone() const`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e3090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3090  _ZNK9TiXmlText5CloneEv
#           TiXmlText::Clone() const
# range [0x087e3090, 0x087e317e]
087e3090 +0x00:  push   %ebp
087e3091 +0x01:  mov    %esp,%ebp
087e3093 +0x03:  sub    $0x38,%esp
087e3096 +0x06:  movl   $0x30,(%esp)
087e309d +0x0d:  mov    %ebx,-0xc(%ebp)
087e30a0 +0x10:  mov    %esi,-0x8(%ebp)
087e30a3 +0x13:  mov    0x8(%ebp),%esi
087e30a6 +0x16:  mov    %edi,-0x4(%ebp)
087e30a9 +0x19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e30ae +0x1e:  movl   $0xffffffff,0x8(%eax)
087e30b5 +0x25:  lea    0x20(%eax),%edi
087e30b8 +0x28:  mov    %eax,%ebx
087e30ba +0x2a:  movl   $0xffffffff,0x4(%eax)
087e30c1 +0x31:  movl   $0x0,0xc(%eax)
087e30c8 +0x38:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%eax)
087e30cf +0x3f:  movl   $0x0,0x10(%eax)
087e30d6 +0x46:  movl   $0x4,0x14(%eax)
087e30dd +0x4d:  movl   $0x0,0x18(%eax)
087e30e4 +0x54:  movl   $0x0,0x1c(%eax)
087e30eb +0x5b:  movl   $0x0,0x24(%eax)
087e30f2 +0x62:  movl   $0x0,0x28(%eax)
087e30f9 +0x69:  movl   $&_ZTV9TiXmlText+0x8,(%eax)
087e30ff +0x6f:  movl   $0x0,0x8(%esp)
087e3107 +0x77:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e310f +0x7f:  mov    %edi,(%esp)
087e3112 +0x82:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e3117 +0x87:  mov    0x20(%esi),%edx
087e311a +0x8a:  movb   $0x0,0x2c(%ebx)
087e311e +0x8e:  mov    %edx,(%esp)
087e3121 +0x91:  mov    %edx,-0x1c(%ebp)
087e3124 +0x94:  call   0807e3b0 <_init+0xca8>
087e3129 +0x99:  mov    -0x1c(%ebp),%edx
087e312c +0x9c:  mov    %edi,(%esp)
087e312f +0x9f:  mov    %edx,0x4(%esp)
087e3133 +0xa3:  mov    %eax,0x8(%esp)
087e3137 +0xa7:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e313c +0xac:  mov    0xc(%esi),%eax
087e313f +0xaf:  mov    0x8(%esi),%edx
087e3142 +0xb2:  mov    %eax,0xc(%ebx)
087e3145 +0xb5:  mov    0x4(%esi),%eax
087e3148 +0xb8:  mov    %edx,0x8(%ebx)
087e314b +0xbb:  mov    %eax,0x4(%ebx)
087e314e +0xbe:  movzbl 0x2c(%esi),%eax
087e3152 +0xc2:  mov    %al,0x2c(%ebx)
087e3155 +0xc5:  mov    %ebx,%eax
087e3157 +0xc7:  mov    -0x8(%ebp),%esi
087e315a +0xca:  mov    -0xc(%ebp),%ebx
087e315d +0xcd:  mov    -0x4(%ebp),%edi
087e3160 +0xd0:  mov    %ebp,%esp
087e3162 +0xd2:  pop    %ebp
087e3163 +0xd3:  ret
087e3164 +0xd4:  mov    %eax,%esi
087e3166 +0xd6:  mov    %ebx,(%esp)
087e3169 +0xd9:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e316e +0xde:  mov    %ebx,(%esp)
087e3171 +0xe1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e3176 +0xe6:  mov    %esi,(%esp)
087e3179 +0xe9:  call   08ae3750 <_Unwind_Resume>
087e317e +0xee:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlText::Clone @ 0x87e3090

/* TiXmlText::Clone() const */

undefined4 * __thiscall TiXmlText::Clone(TiXmlText *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  
  puVar3 = operator_new(0x30);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  puVar3[8] = &DAT_0948ccfc;
  puVar3[4] = 0;
  puVar3[5] = 4;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlText_08de1168;
                    /* try { // try from 087e3112 to 087e3116 has its CatchHandler @ 087e3164 */
  std::string::assign((string *)(puVar3 + 8),"",0);
  __s = *(char **)(this + 0x20);
  *(undefined1 *)(puVar3 + 0xb) = 0;
  sVar4 = strlen(__s);
  std::string::assign((string *)(puVar3 + 8),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  puVar3[3] = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  *(TiXmlText *)(puVar3 + 0xb) = this[0x2c];
  return puVar3;
}
```
