# CServerXml

`_ZN13np_server_xml10CServerXmlC1Ev`

`np_server_xml::CServerXml::CServerXml()`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5a14  _ZN13np_server_xml10CServerXmlC1Ev
#           np_server_xml::CServerXml::CServerXml()
# range [0x080c5a14, 0x080c5b25]
080c5a14 +0x000:  push   %ebp
080c5a15 +0x001:  mov    %esp,%ebp
080c5a17 +0x003:  push   %esi
080c5a18 +0x004:  push   %ebx
080c5a19 +0x005:  sub    $0x10,%esp
080c5a1c +0x008:  mov    0x8(%ebp),%eax
080c5a1f +0x00b:  add    $0x8,%eax
080c5a22 +0x00e:  mov    %eax,(%esp)
080c5a25 +0x011:  call   087e2df0 <_ZN13TiXmlDocumentC1Ev>  ; TiXmlDocument::TiXmlDocument()
080c5a2a +0x016:  mov    0x8(%ebp),%eax
080c5a2d +0x019:  add    $0x54,%eax
080c5a30 +0x01c:  mov    %eax,(%esp)
080c5a33 +0x01f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080c5a38 +0x024:  mov    0x8(%ebp),%eax
080c5a3b +0x027:  add    $0x58,%eax
080c5a3e +0x02a:  mov    %eax,(%esp)
080c5a41 +0x02d:  call   080c6bea <_GLOBAL__I_g_ServerString_+0x155>  ; global constructors keyed to g_ServerString_+0x155
080c5a46 +0x032:  mov    0x8(%ebp),%eax
080c5a49 +0x035:  add    $0x70,%eax
080c5a4c +0x038:  mov    %eax,(%esp)
080c5a4f +0x03b:  call   080c6bea <_GLOBAL__I_g_ServerString_+0x155>  ; global constructors keyed to g_ServerString_+0x155
080c5a54 +0x040:  mov    0x8(%ebp),%eax
080c5a57 +0x043:  add    $0x88,%eax
080c5a5c +0x048:  mov    %eax,(%esp)
080c5a5f +0x04b:  call   080c6bea <_GLOBAL__I_g_ServerString_+0x155>  ; global constructors keyed to g_ServerString_+0x155
080c5a64 +0x050:  mov    0x8(%ebp),%eax
080c5a67 +0x053:  add    $0xa0,%eax
080c5a6c +0x058:  mov    %eax,(%esp)
080c5a6f +0x05b:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
080c5a74 +0x060:  mov    0x8(%ebp),%eax
080c5a77 +0x063:  mov    %eax,(%esp)
080c5a7a +0x066:  call   080c5c3e <_ZN13np_server_xml10CServerXml10InitStringEv>  ; np_server_xml::CServerXml::InitString()
080c5a7f +0x06b:  jmp    080c5b1e <+0x10a>
080c5a84 +0x070:  mov    %edx,%ebx
080c5a86 +0x072:  mov    %eax,%esi
080c5a88 +0x074:  mov    0x8(%ebp),%eax
080c5a8b +0x077:  add    $0xa0,%eax
080c5a90 +0x07c:  mov    %eax,(%esp)
080c5a93 +0x07f:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
080c5a98 +0x084:  mov    %esi,%eax
080c5a9a +0x086:  mov    %ebx,%edx
080c5a9c +0x088:  jmp    080c5a9e <+0x8a>
080c5a9e +0x08a:  mov    %edx,%ebx
080c5aa0 +0x08c:  mov    %eax,%esi
080c5aa2 +0x08e:  mov    0x8(%ebp),%eax
080c5aa5 +0x091:  add    $0x88,%eax
080c5aaa +0x096:  mov    %eax,(%esp)
080c5aad +0x099:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5ab2 +0x09e:  mov    %esi,%eax
080c5ab4 +0x0a0:  mov    %ebx,%edx
080c5ab6 +0x0a2:  jmp    080c5ab8 <+0xa4>
080c5ab8 +0x0a4:  mov    %edx,%ebx
080c5aba +0x0a6:  mov    %eax,%esi
080c5abc +0x0a8:  mov    0x8(%ebp),%eax
080c5abf +0x0ab:  add    $0x70,%eax
080c5ac2 +0x0ae:  mov    %eax,(%esp)
080c5ac5 +0x0b1:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5aca +0x0b6:  mov    %esi,%eax
080c5acc +0x0b8:  mov    %ebx,%edx
080c5ace +0x0ba:  jmp    080c5ad0 <+0xbc>
080c5ad0 +0x0bc:  mov    %edx,%ebx
080c5ad2 +0x0be:  mov    %eax,%esi
080c5ad4 +0x0c0:  mov    0x8(%ebp),%eax
080c5ad7 +0x0c3:  add    $0x58,%eax
080c5ada +0x0c6:  mov    %eax,(%esp)
080c5add +0x0c9:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5ae2 +0x0ce:  mov    %esi,%eax
080c5ae4 +0x0d0:  mov    %ebx,%edx
080c5ae6 +0x0d2:  jmp    080c5ae8 <+0xd4>
080c5ae8 +0x0d4:  mov    %edx,%ebx
080c5aea +0x0d6:  mov    %eax,%esi
080c5aec +0x0d8:  mov    0x8(%ebp),%eax
080c5aef +0x0db:  add    $0x54,%eax
080c5af2 +0x0de:  mov    %eax,(%esp)
080c5af5 +0x0e1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c5afa +0x0e6:  mov    %esi,%eax
080c5afc +0x0e8:  mov    %ebx,%edx
080c5afe +0x0ea:  jmp    080c5b00 <+0xec>
080c5b00 +0x0ec:  mov    %edx,%ebx
080c5b02 +0x0ee:  mov    %eax,%esi
080c5b04 +0x0f0:  mov    0x8(%ebp),%eax
080c5b07 +0x0f3:  add    $0x8,%eax
080c5b0a +0x0f6:  mov    %eax,(%esp)
080c5b0d +0x0f9:  call   080c6b00 <_GLOBAL__I_g_ServerString_+0x6b>  ; global constructors keyed to g_ServerString_+0x6b
080c5b12 +0x0fe:  mov    %esi,%eax
080c5b14 +0x100:  mov    %ebx,%edx
080c5b16 +0x102:  mov    %eax,(%esp)
080c5b19 +0x105:  call   08ae3750 <_Unwind_Resume>
080c5b1e +0x10a:  add    $0x10,%esp
080c5b21 +0x10d:  pop    %ebx
080c5b22 +0x10e:  pop    %esi
080c5b23 +0x10f:  pop    %ebp
080c5b24 +0x110:  ret
080c5b25 +0x111:  nop
```

## 反编译 C

```c
// np_server_xml::CServerXml::CServerXml @ 0x80c5a14

/* np_server_xml::CServerXml::CServerXml() */

void __thiscall np_server_xml::CServerXml::CServerXml(CServerXml *this)

{
  TiXmlDocument::TiXmlDocument((TiXmlDocument *)(this + 8));
                    /* try { // try from 080c5a33 to 080c5a37 has its CatchHandler @ 080c5b00 */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 080c5a41 to 080c5a45 has its CatchHandler @ 080c5ae8 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
                    /* try { // try from 080c5a4f to 080c5a53 has its CatchHandler @ 080c5ad0 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
                    /* try { // try from 080c5a5f to 080c5a63 has its CatchHandler @ 080c5ab8 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
                    /* try { // try from 080c5a6f to 080c5a73 has its CatchHandler @ 080c5a9e */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
                    /* try { // try from 080c5a7a to 080c5a7e has its CatchHandler @ 080c5a84 */
  InitString(this);
  return;
}
```
