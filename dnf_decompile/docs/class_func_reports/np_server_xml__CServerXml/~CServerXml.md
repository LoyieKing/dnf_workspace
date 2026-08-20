# ~CServerXml

`_ZN13np_server_xml10CServerXmlD1Ev`

`np_server_xml::CServerXml::~CServerXml()`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5b26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5b26  _ZN13np_server_xml10CServerXmlD1Ev
#           np_server_xml::CServerXml::~CServerXml()
# range [0x080c5b26, 0x080c5c3d]
080c5b26 +0x000:  push   %ebp
080c5b27 +0x001:  mov    %esp,%ebp
080c5b29 +0x003:  push   %esi
080c5b2a +0x004:  push   %ebx
080c5b2b +0x005:  sub    $0x10,%esp
080c5b2e +0x008:  mov    0x8(%ebp),%eax
080c5b31 +0x00b:  mov    %eax,(%esp)
080c5b34 +0x00e:  call   080c5c3e <_ZN13np_server_xml10CServerXml10InitStringEv>  ; np_server_xml::CServerXml::InitString()
080c5b39 +0x013:  jmp    080c5b55 <+0x2f>
080c5b3b +0x015:  mov    %edx,%ebx
080c5b3d +0x017:  mov    %eax,%esi
080c5b3f +0x019:  mov    0x8(%ebp),%eax
080c5b42 +0x01c:  add    $0xa0,%eax
080c5b47 +0x021:  mov    %eax,(%esp)
080c5b4a +0x024:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
080c5b4f +0x029:  mov    %esi,%eax
080c5b51 +0x02b:  mov    %ebx,%edx
080c5b53 +0x02d:  jmp    080c5b67 <+0x41>
080c5b55 +0x02f:  mov    0x8(%ebp),%eax
080c5b58 +0x032:  add    $0xa0,%eax
080c5b5d +0x037:  mov    %eax,(%esp)
080c5b60 +0x03a:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
080c5b65 +0x03f:  jmp    080c5b81 <+0x5b>
080c5b67 +0x041:  mov    %edx,%ebx
080c5b69 +0x043:  mov    %eax,%esi
080c5b6b +0x045:  mov    0x8(%ebp),%eax
080c5b6e +0x048:  add    $0x88,%eax
080c5b73 +0x04d:  mov    %eax,(%esp)
080c5b76 +0x050:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5b7b +0x055:  mov    %esi,%eax
080c5b7d +0x057:  mov    %ebx,%edx
080c5b7f +0x059:  jmp    080c5b93 <+0x6d>
080c5b81 +0x05b:  mov    0x8(%ebp),%eax
080c5b84 +0x05e:  add    $0x88,%eax
080c5b89 +0x063:  mov    %eax,(%esp)
080c5b8c +0x066:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5b91 +0x06b:  jmp    080c5bab <+0x85>
080c5b93 +0x06d:  mov    %edx,%ebx
080c5b95 +0x06f:  mov    %eax,%esi
080c5b97 +0x071:  mov    0x8(%ebp),%eax
080c5b9a +0x074:  add    $0x70,%eax
080c5b9d +0x077:  mov    %eax,(%esp)
080c5ba0 +0x07a:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5ba5 +0x07f:  mov    %esi,%eax
080c5ba7 +0x081:  mov    %ebx,%edx
080c5ba9 +0x083:  jmp    080c5bbb <+0x95>
080c5bab +0x085:  mov    0x8(%ebp),%eax
080c5bae +0x088:  add    $0x70,%eax
080c5bb1 +0x08b:  mov    %eax,(%esp)
080c5bb4 +0x08e:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5bb9 +0x093:  jmp    080c5bd3 <+0xad>
080c5bbb +0x095:  mov    %edx,%ebx
080c5bbd +0x097:  mov    %eax,%esi
080c5bbf +0x099:  mov    0x8(%ebp),%eax
080c5bc2 +0x09c:  add    $0x58,%eax
080c5bc5 +0x09f:  mov    %eax,(%esp)
080c5bc8 +0x0a2:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5bcd +0x0a7:  mov    %esi,%eax
080c5bcf +0x0a9:  mov    %ebx,%edx
080c5bd1 +0x0ab:  jmp    080c5be3 <+0xbd>
080c5bd3 +0x0ad:  mov    0x8(%ebp),%eax
080c5bd6 +0x0b0:  add    $0x58,%eax
080c5bd9 +0x0b3:  mov    %eax,(%esp)
080c5bdc +0x0b6:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
080c5be1 +0x0bb:  jmp    080c5bfb <+0xd5>
080c5be3 +0x0bd:  mov    %edx,%ebx
080c5be5 +0x0bf:  mov    %eax,%esi
080c5be7 +0x0c1:  mov    0x8(%ebp),%eax
080c5bea +0x0c4:  add    $0x54,%eax
080c5bed +0x0c7:  mov    %eax,(%esp)
080c5bf0 +0x0ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c5bf5 +0x0cf:  mov    %esi,%eax
080c5bf7 +0x0d1:  mov    %ebx,%edx
080c5bf9 +0x0d3:  jmp    080c5c0b <+0xe5>
080c5bfb +0x0d5:  mov    0x8(%ebp),%eax
080c5bfe +0x0d8:  add    $0x54,%eax
080c5c01 +0x0db:  mov    %eax,(%esp)
080c5c04 +0x0de:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c5c09 +0x0e3:  jmp    080c5c29 <+0x103>
080c5c0b +0x0e5:  mov    %edx,%ebx
080c5c0d +0x0e7:  mov    %eax,%esi
080c5c0f +0x0e9:  mov    0x8(%ebp),%eax
080c5c12 +0x0ec:  add    $0x8,%eax
080c5c15 +0x0ef:  mov    %eax,(%esp)
080c5c18 +0x0f2:  call   080c6b00 <_GLOBAL__I_g_ServerString_+0x6b>  ; global constructors keyed to g_ServerString_+0x6b
080c5c1d +0x0f7:  mov    %esi,%eax
080c5c1f +0x0f9:  mov    %ebx,%edx
080c5c21 +0x0fb:  mov    %eax,(%esp)
080c5c24 +0x0fe:  call   08ae3750 <_Unwind_Resume>
080c5c29 +0x103:  mov    0x8(%ebp),%eax
080c5c2c +0x106:  add    $0x8,%eax
080c5c2f +0x109:  mov    %eax,(%esp)
080c5c32 +0x10c:  call   080c6b00 <_GLOBAL__I_g_ServerString_+0x6b>  ; global constructors keyed to g_ServerString_+0x6b
080c5c37 +0x111:  add    $0x10,%esp
080c5c3a +0x114:  pop    %ebx
080c5c3b +0x115:  pop    %esi
080c5c3c +0x116:  pop    %ebp
080c5c3d +0x117:  ret
```

## 反编译 C

```c
// np_server_xml::CServerXml::~CServerXml @ 0x80c5b26

/* np_server_xml::CServerXml::~CServerXml() */

void __thiscall np_server_xml::CServerXml::~CServerXml(CServerXml *this)

{
                    /* try { // try from 080c5b34 to 080c5b38 has its CatchHandler @ 080c5b3b */
  InitString(this);
                    /* try { // try from 080c5b60 to 080c5b64 has its CatchHandler @ 080c5b67 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
                    /* try { // try from 080c5b8c to 080c5b90 has its CatchHandler @ 080c5b93 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
                    /* try { // try from 080c5bb4 to 080c5bb8 has its CatchHandler @ 080c5bbb */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
                    /* try { // try from 080c5bdc to 080c5be0 has its CatchHandler @ 080c5be3 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
                    /* try { // try from 080c5c04 to 080c5c08 has its CatchHandler @ 080c5c0b */
  std::string::~string((string *)(this + 0x54));
  TiXmlDocument::~TiXmlDocument((TiXmlDocument *)(this + 8));
  return;
}
```
