# StrLoading

`_ZN13np_server_xml10CServerXml10StrLoadingESs`

`np_server_xml::CServerXml::StrLoading(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5d38  _ZN13np_server_xml10CServerXml10StrLoadingESs
#           np_server_xml::CServerXml::StrLoading(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x080c5d38, 0x080c5e0d]
080c5d38 +0x00:  push   %ebp
080c5d39 +0x01:  mov    %esp,%ebp
080c5d3b +0x03:  sub    $0x28,%esp
080c5d3e +0x06:  mov    0x8(%ebp),%eax
080c5d41 +0x09:  mov    %eax,(%esp)
080c5d44 +0x0c:  call   080c5c3e <_ZN13np_server_xml10CServerXml10InitStringEv>  ; np_server_xml::CServerXml::InitString()
080c5d49 +0x11:  mov    0x8(%ebp),%eax
080c5d4c +0x14:  lea    0x54(%eax),%edx
080c5d4f +0x17:  mov    0xc(%ebp),%eax
080c5d52 +0x1a:  mov    %eax,0x4(%esp)
080c5d56 +0x1e:  mov    %edx,(%esp)
080c5d59 +0x21:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
080c5d5e +0x26:  mov    0x8(%ebp),%eax
080c5d61 +0x29:  add    $0x8,%eax
080c5d64 +0x2c:  mov    %eax,(%esp)
080c5d67 +0x2f:  call   087dfdf0 <_ZN9TiXmlNode5ClearEv>  ; TiXmlNode::Clear()
080c5d6c +0x34:  mov    0x8(%ebp),%eax
080c5d6f +0x37:  lea    0x54(%eax),%edx
080c5d72 +0x3a:  mov    0x8(%ebp),%eax
080c5d75 +0x3d:  add    $0x8,%eax
080c5d78 +0x40:  movl   $0x0,0x8(%esp)
080c5d80 +0x48:  mov    %edx,0x4(%esp)
080c5d84 +0x4c:  mov    %eax,(%esp)
080c5d87 +0x4f:  call   080c6b80 <_GLOBAL__I_g_ServerString_+0xeb>  ; global constructors keyed to g_ServerString_+0xeb
080c5d8c +0x54:  xor    $0x1,%eax
080c5d8f +0x57:  test   %al,%al
080c5d91 +0x59:  je     080c5da9 <+0x71>
080c5d93 +0x5b:  movl   $&_ZN13np_server_xmlL9FILE_NAMEE,0x4(%esp)
080c5d9b +0x63:  movl   $"[CServerXml] Load Fail File : %s\n",(%esp)
080c5da2 +0x6a:  call   0807db60 <_init+0x458>
080c5da7 +0x6f:  jmp    080c5e0c <+0xd4>
080c5da9 +0x71:  mov    0x8(%ebp),%eax
080c5dac +0x74:  add    $0x8,%eax
080c5daf +0x77:  movl   $"xml",0x4(%esp)
080c5db7 +0x7f:  mov    %eax,(%esp)
080c5dba +0x82:  call   080c6ada <_GLOBAL__I_g_ServerString_+0x45>  ; global constructors keyed to g_ServerString_+0x45
080c5dbf +0x87:  mov    %eax,-0xc(%ebp)
080c5dc2 +0x8a:  cmpl   $0x0,-0xc(%ebp)
080c5dc6 +0x8e:  jne    080c5dd6 <+0x9e>
080c5dc8 +0x90:  movl   $"[CServerXml] <xml> Tag Error",(%esp)
080c5dcf +0x97:  call   0807e570 <_init+0xe68>
080c5dd4 +0x9c:  jmp    080c5e0c <+0xd4>
080c5dd6 +0x9e:  mov    -0xc(%ebp),%eax
080c5dd9 +0xa1:  mov    %eax,0x4(%esp)
080c5ddd +0xa5:  mov    0x8(%ebp),%eax
080c5de0 +0xa8:  mov    %eax,(%esp)
080c5de3 +0xab:  call   080c5e0e <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode>  ; np_server_xml::CServerXml::CharsetInit(TiXmlNode*)
080c5de8 +0xb0:  mov    -0xc(%ebp),%eax
080c5deb +0xb3:  mov    %eax,0x4(%esp)
080c5def +0xb7:  mov    0x8(%ebp),%eax
080c5df2 +0xba:  mov    %eax,(%esp)
080c5df5 +0xbd:  call   080c5fae <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode>  ; np_server_xml::CServerXml::EventLoad(TiXmlNode*)
080c5dfa +0xc2:  mov    -0xc(%ebp),%eax
080c5dfd +0xc5:  mov    %eax,0x4(%esp)
080c5e01 +0xc9:  mov    0x8(%ebp),%eax
080c5e04 +0xcc:  mov    %eax,(%esp)
080c5e07 +0xcf:  call   080c62b6 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode>  ; np_server_xml::CServerXml::ProcessLoad(TiXmlNode*)
080c5e0c +0xd4:  leave
080c5e0d +0xd5:  ret
```

## 反编译 C

```c
// np_server_xml::CServerXml::StrLoading @ 0x80c5d38

/* np_server_xml::CServerXml::StrLoading(std::string) */

void __thiscall np_server_xml::CServerXml::StrLoading(CServerXml *this,string param_1)

{
  char cVar1;
  TiXmlNode *pTVar2;
  
  InitString(this);
  std::string::operator=((string *)(this + 0x54),(string *)param_1._M_dataplus._M_p);
  TiXmlNode::Clear((TiXmlNode *)(this + 8));
  cVar1 = TiXmlDocument::LoadFile((TiXmlDocument *)(this + 8),this + 0x54,0);
  if (cVar1 == '\x01') {
    pTVar2 = (TiXmlNode *)TiXmlNode::FirstChild((TiXmlNode *)(this + 8),"xml");
    if (pTVar2 == (TiXmlNode *)0x0) {
      puts("[CServerXml] <xml> Tag Error");
    }
    else {
      CharsetInit(this,pTVar2);
      EventLoad(this,pTVar2);
      ProcessLoad(this,pTVar2);
    }
  }
  else {
    printf("[CServerXml] Load Fail File : %s\n","server_str.xml");
  }
  return;
}
```
