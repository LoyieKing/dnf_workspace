# TiXmlDeclaration

`_ZN16TiXmlDeclarationC1ERKS_`

`TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&)`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e3180` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3180  _ZN16TiXmlDeclarationC1ERKS_
#           TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&)
# range [0x087e3180, 0x087e32a9]
087e3180 +0x000:  push   %ebp
087e3181 +0x001:  mov    %esp,%ebp
087e3183 +0x003:  push   %edi
087e3184 +0x004:  push   %esi
087e3185 +0x005:  push   %ebx
087e3186 +0x006:  sub    $0x2c,%esp
087e3189 +0x009:  mov    0x8(%ebp),%ebx
087e318c +0x00c:  mov    0xc(%ebp),%esi
087e318f +0x00f:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e3196 +0x016:  mov    0x20(%esi),%edi
087e3199 +0x019:  movl   $0xffffffff,0x8(%ebx)
087e31a0 +0x020:  movl   $0xffffffff,0x4(%ebx)
087e31a7 +0x027:  movl   $0x0,0xc(%ebx)
087e31ae +0x02e:  movl   $0x0,0x10(%ebx)
087e31b5 +0x035:  movl   $0x5,0x14(%ebx)
087e31bc +0x03c:  movl   $0x0,0x18(%ebx)
087e31c3 +0x043:  movl   $0x0,0x1c(%ebx)
087e31ca +0x04a:  movl   $0x0,0x24(%ebx)
087e31d1 +0x051:  movl   $0x0,0x28(%ebx)
087e31d8 +0x058:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%ebx)
087e31de +0x05e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x2c(%ebx)
087e31e5 +0x065:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x30(%ebx)
087e31ec +0x06c:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x34(%ebx)
087e31f3 +0x073:  mov    %edi,(%esp)
087e31f6 +0x076:  call   0807e3b0 <_init+0xca8>
087e31fb +0x07b:  mov    %edi,0x4(%esp)
087e31ff +0x07f:  lea    0x34(%ebx),%edi
087e3202 +0x082:  mov    %eax,0x8(%esp)
087e3206 +0x086:  lea    0x20(%ebx),%eax
087e3209 +0x089:  mov    %eax,(%esp)
087e320c +0x08c:  lea    0x2c(%ebx),%eax
087e320f +0x08f:  mov    %eax,-0x20(%ebp)
087e3212 +0x092:  lea    0x30(%ebx),%eax
087e3215 +0x095:  mov    %eax,-0x1c(%ebp)
087e3218 +0x098:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e321d +0x09d:  mov    0xc(%esi),%eax
087e3220 +0x0a0:  mov    0x8(%esi),%edx
087e3223 +0x0a3:  mov    %eax,0xc(%ebx)
087e3226 +0x0a6:  mov    0x4(%esi),%eax
087e3229 +0x0a9:  mov    %edx,0x8(%ebx)
087e322c +0x0ac:  mov    %eax,0x4(%ebx)
087e322f +0x0af:  lea    0x2c(%esi),%eax
087e3232 +0x0b2:  mov    %eax,0x4(%esp)
087e3236 +0x0b6:  lea    0x2c(%ebx),%eax
087e3239 +0x0b9:  mov    %eax,-0x20(%ebp)
087e323c +0x0bc:  mov    %eax,(%esp)
087e323f +0x0bf:  lea    0x30(%ebx),%eax
087e3242 +0x0c2:  mov    %eax,-0x1c(%ebp)
087e3245 +0x0c5:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e324a +0x0ca:  lea    0x30(%esi),%eax
087e324d +0x0cd:  mov    %eax,0x4(%esp)
087e3251 +0x0d1:  lea    0x30(%ebx),%eax
087e3254 +0x0d4:  mov    %eax,-0x1c(%ebp)
087e3257 +0x0d7:  mov    %eax,(%esp)
087e325a +0x0da:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e325f +0x0df:  add    $0x34,%esi
087e3262 +0x0e2:  mov    %esi,0x4(%esp)
087e3266 +0x0e6:  mov    %edi,(%esp)
087e3269 +0x0e9:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e326e +0x0ee:  add    $0x2c,%esp
087e3271 +0x0f1:  pop    %ebx
087e3272 +0x0f2:  pop    %esi
087e3273 +0x0f3:  pop    %edi
087e3274 +0x0f4:  pop    %ebp
087e3275 +0x0f5:  ret
087e3276 +0x0f6:  mov    %eax,%esi
087e3278 +0x0f8:  mov    %edi,(%esp)
087e327b +0x0fb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e3280 +0x100:  mov    -0x1c(%ebp),%eax
087e3283 +0x103:  mov    %eax,(%esp)
087e3286 +0x106:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e328b +0x10b:  mov    -0x20(%ebp),%eax
087e328e +0x10e:  mov    %eax,(%esp)
087e3291 +0x111:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e3296 +0x116:  mov    %ebx,(%esp)
087e3299 +0x119:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e329e +0x11e:  mov    %esi,(%esp)
087e32a1 +0x121:  call   08ae3750 <_Unwind_Resume>
087e32a6 +0x126:  lea    0x0(%esi),%esi
087e32a9 +0x129:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDeclaration::TiXmlDeclaration @ 0x87e3180

/* TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&) */

void __thiscall TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this,TiXmlDeclaration *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDeclaration_08de1108;
  *(undefined1 **)(this + 0x2c) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x30) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  sVar3 = strlen(__s);
                    /* try { // try from 087e3218 to 087e326d has its CatchHandler @ 087e3276 */
  std::string::assign((string *)(this + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::string::assign((string *)(this + 0x2c),(string *)(param_1 + 0x2c));
  std::string::assign((string *)(this + 0x30),(string *)(param_1 + 0x30));
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  return;
}
```
