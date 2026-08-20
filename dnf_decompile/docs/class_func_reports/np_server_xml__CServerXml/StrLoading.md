# StrLoading

`_ZN13np_server_xml10CServerXml10StrLoadingEv`

`np_server_xml::CServerXml::StrLoading()`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5ca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5ca8  _ZN13np_server_xml10CServerXml10StrLoadingEv
#           np_server_xml::CServerXml::StrLoading()
# range [0x080c5ca8, 0x080c5d37]
080c5ca8 +0x00:  push   %ebp
080c5ca9 +0x01:  mov    %esp,%ebp
080c5cab +0x03:  push   %esi
080c5cac +0x04:  push   %ebx
080c5cad +0x05:  sub    $0x20,%esp
080c5cb0 +0x08:  lea    -0x9(%ebp),%eax
080c5cb3 +0x0b:  mov    %eax,(%esp)
080c5cb6 +0x0e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
080c5cbb +0x13:  lea    -0x9(%ebp),%eax
080c5cbe +0x16:  mov    %eax,0x8(%esp)
080c5cc2 +0x1a:  movl   $&_ZN13np_server_xmlL9FILE_NAMEE,0x4(%esp)
080c5cca +0x22:  lea    -0x10(%ebp),%eax
080c5ccd +0x25:  mov    %eax,(%esp)
080c5cd0 +0x28:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
080c5cd5 +0x2d:  lea    -0x10(%ebp),%eax
080c5cd8 +0x30:  mov    %eax,0x4(%esp)
080c5cdc +0x34:  mov    0x8(%ebp),%eax
080c5cdf +0x37:  mov    %eax,(%esp)
080c5ce2 +0x3a:  call   080c5d38 <_ZN13np_server_xml10CServerXml10StrLoadingESs>  ; np_server_xml::CServerXml::StrLoading(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
080c5ce7 +0x3f:  jmp    080c5cfe <+0x56>
080c5ce9 +0x41:  mov    %edx,%ebx
080c5ceb +0x43:  mov    %eax,%esi
080c5ced +0x45:  lea    -0x10(%ebp),%eax
080c5cf0 +0x48:  mov    %eax,(%esp)
080c5cf3 +0x4b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c5cf8 +0x50:  mov    %esi,%eax
080c5cfa +0x52:  mov    %ebx,%edx
080c5cfc +0x54:  jmp    080c5d0b <+0x63>
080c5cfe +0x56:  lea    -0x10(%ebp),%eax
080c5d01 +0x59:  mov    %eax,(%esp)
080c5d04 +0x5c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c5d09 +0x61:  jmp    080c5d26 <+0x7e>
080c5d0b +0x63:  mov    %edx,%ebx
080c5d0d +0x65:  mov    %eax,%esi
080c5d0f +0x67:  lea    -0x9(%ebp),%eax
080c5d12 +0x6a:  mov    %eax,(%esp)
080c5d15 +0x6d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c5d1a +0x72:  mov    %esi,%eax
080c5d1c +0x74:  mov    %ebx,%edx
080c5d1e +0x76:  mov    %eax,(%esp)
080c5d21 +0x79:  call   08ae3750 <_Unwind_Resume>
080c5d26 +0x7e:  lea    -0x9(%ebp),%eax
080c5d29 +0x81:  mov    %eax,(%esp)
080c5d2c +0x84:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c5d31 +0x89:  add    $0x20,%esp
080c5d34 +0x8c:  pop    %ebx
080c5d35 +0x8d:  pop    %esi
080c5d36 +0x8e:  pop    %ebp
080c5d37 +0x8f:  ret
```

## 反编译 C

```c
// np_server_xml::CServerXml::StrLoading @ 0x80c5ca8

/* np_server_xml::CServerXml::StrLoading() */

void __thiscall np_server_xml::CServerXml::StrLoading(CServerXml *this)

{
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 080c5cd0 to 080c5cd4 has its CatchHandler @ 080c5d0b */
  std::string::string(local_14,"server_str.xml",(allocator *)&local_d);
                    /* try { // try from 080c5ce2 to 080c5ce6 has its CatchHandler @ 080c5ce9 */
  StrLoading(this,(string)local_14);
                    /* try { // try from 080c5d04 to 080c5d08 has its CatchHandler @ 080c5d0b */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  return;
}
```
