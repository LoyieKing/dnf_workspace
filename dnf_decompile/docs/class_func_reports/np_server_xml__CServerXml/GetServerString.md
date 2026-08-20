# GetServerString

`_ZNK13np_server_xml10CServerXml15GetServerStringEiPb`

`np_server_xml::CServerXml::GetServerString(int, bool*) const`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c6668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c6668  _ZNK13np_server_xml10CServerXml15GetServerStringEiPb
#           np_server_xml::CServerXml::GetServerString(int, bool*) const
# range [0x080c6668, 0x080c679f]
080c6668 +0x000:  push   %ebp
080c6669 +0x001:  mov    %esp,%ebp
080c666b +0x003:  push   %esi
080c666c +0x004:  push   %ebx
080c666d +0x005:  sub    $0x30,%esp
080c6670 +0x008:  mov    0x8(%ebp),%ebx
080c6673 +0x00b:  lea    -0xd(%ebp),%eax
080c6676 +0x00e:  mov    %eax,(%esp)
080c6679 +0x011:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
080c667e +0x016:  lea    -0xd(%ebp),%eax
080c6681 +0x019:  mov    %eax,0x8(%esp)
080c6685 +0x01d:  movl   $"",0x4(%esp)
080c668d +0x025:  lea    -0x14(%ebp),%eax
080c6690 +0x028:  mov    %eax,(%esp)
080c6693 +0x02b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
080c6698 +0x030:  jmp    080c66b5 <+0x4d>
080c669a +0x032:  mov    %edx,%ebx
080c669c +0x034:  mov    %eax,%esi
080c669e +0x036:  lea    -0xd(%ebp),%eax
080c66a1 +0x039:  mov    %eax,(%esp)
080c66a4 +0x03c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c66a9 +0x041:  mov    %esi,%eax
080c66ab +0x043:  mov    %ebx,%edx
080c66ad +0x045:  mov    %eax,(%esp)
080c66b0 +0x048:  call   08ae3750 <_Unwind_Resume>
080c66b5 +0x04d:  lea    -0xd(%ebp),%eax
080c66b8 +0x050:  mov    %eax,(%esp)
080c66bb +0x053:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c66c0 +0x058:  lea    -0x18(%ebp),%eax
080c66c3 +0x05b:  mov    %eax,(%esp)
080c66c6 +0x05e:  call   080c6e1a <_GLOBAL__I_g_ServerString_+0x385>  ; global constructors keyed to g_ServerString_+0x385
080c66cb +0x063:  mov    0xc(%ebp),%eax
080c66ce +0x066:  lea    0x58(%eax),%ecx
080c66d1 +0x069:  lea    -0x1c(%ebp),%eax
080c66d4 +0x06c:  lea    0x10(%ebp),%edx
080c66d7 +0x06f:  mov    %edx,0x8(%esp)
080c66db +0x073:  mov    %ecx,0x4(%esp)
080c66df +0x077:  mov    %eax,(%esp)
080c66e2 +0x07a:  call   080c6e28 <_GLOBAL__I_g_ServerString_+0x393>  ; global constructors keyed to g_ServerString_+0x393
080c66e7 +0x07f:  sub    $0x4,%esp
080c66ea +0x082:  mov    -0x1c(%ebp),%eax
080c66ed +0x085:  mov    %eax,-0x18(%ebp)
080c66f0 +0x088:  mov    0xc(%ebp),%eax
080c66f3 +0x08b:  lea    0x58(%eax),%edx
080c66f6 +0x08e:  lea    -0xc(%ebp),%eax
080c66f9 +0x091:  mov    %edx,0x4(%esp)
080c66fd +0x095:  mov    %eax,(%esp)
080c6700 +0x098:  call   080c6e54 <_GLOBAL__I_g_ServerString_+0x3bf>  ; global constructors keyed to g_ServerString_+0x3bf
080c6705 +0x09d:  sub    $0x4,%esp
080c6708 +0x0a0:  lea    -0xc(%ebp),%eax
080c670b +0x0a3:  mov    %eax,0x4(%esp)
080c670f +0x0a7:  lea    -0x18(%ebp),%eax
080c6712 +0x0aa:  mov    %eax,(%esp)
080c6715 +0x0ad:  call   080c6e7a <_GLOBAL__I_g_ServerString_+0x3e5>  ; global constructors keyed to g_ServerString_+0x3e5
080c671a +0x0b2:  test   %al,%al
080c671c +0x0b4:  je     080c672c <+0xc4>
080c671e +0x0b6:  cmpl   $0x0,0x14(%ebp)
080c6722 +0x0ba:  je     080c674b <+0xe3>
080c6724 +0x0bc:  mov    0x14(%ebp),%eax
080c6727 +0x0bf:  movb   $0x1,(%eax)
080c672a +0x0c2:  jmp    080c674b <+0xe3>
080c672c +0x0c4:  cmpl   $0x0,0x14(%ebp)
080c6730 +0x0c8:  je     080c6738 <+0xd0>
080c6732 +0x0ca:  mov    0x14(%ebp),%eax
080c6735 +0x0cd:  movb   $0x0,(%eax)
080c6738 +0x0d0:  mov    %ebx,%eax
080c673a +0x0d2:  lea    -0x14(%ebp),%edx
080c673d +0x0d5:  mov    %edx,0x4(%esp)
080c6741 +0x0d9:  mov    %eax,(%esp)
080c6744 +0x0dc:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c6749 +0x0e1:  jmp    080c6784 <+0x11c>
080c674b +0x0e3:  mov    %ebx,%esi
080c674d +0x0e5:  lea    -0x18(%ebp),%eax
080c6750 +0x0e8:  mov    %eax,(%esp)
080c6753 +0x0eb:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
080c6758 +0x0f0:  add    $0x4,%eax
080c675b +0x0f3:  mov    %eax,0x4(%esp)
080c675f +0x0f7:  mov    %esi,(%esp)
080c6762 +0x0fa:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c6767 +0x0ff:  jmp    080c6784 <+0x11c>
080c6769 +0x101:  mov    %edx,%ebx
080c676b +0x103:  mov    %eax,%esi
080c676d +0x105:  lea    -0x14(%ebp),%eax
080c6770 +0x108:  mov    %eax,(%esp)
080c6773 +0x10b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c6778 +0x110:  mov    %esi,%eax
080c677a +0x112:  mov    %ebx,%edx
080c677c +0x114:  mov    %eax,(%esp)
080c677f +0x117:  call   08ae3750 <_Unwind_Resume>
080c6784 +0x11c:  lea    -0x14(%ebp),%eax
080c6787 +0x11f:  mov    %eax,(%esp)
080c678a +0x122:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c678f +0x127:  mov    %ebx,%eax
080c6791 +0x129:  mov    %ebx,%eax
080c6793 +0x12b:  lea    -0x8(%ebp),%esp
080c6796 +0x12e:  add    $0x0,%esp
080c6799 +0x131:  pop    %ebx
080c679a +0x132:  pop    %esi
080c679b +0x133:  pop    %ebp
080c679c +0x134:  ret    $0x4
080c679f +0x137:  nop
```

## 反编译 C

```c
// np_server_xml::CServerXml::GetServerString @ 0x80c6668

/* np_server_xml::CServerXml::GetServerString(int, bool*) const */

int np_server_xml::CServerXml::GetServerString(int param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *in_stack_00000010;
  int local_20;
  int local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 080c6693 to 080c6697 has its CatchHandler @ 080c669a */
  std::string::string(local_18,"",(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
  std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c);
                    /* try { // try from 080c66e2 to 080c6766 has its CatchHandler @ 080c6769 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            (&local_20);
  local_1c = local_20;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 0;
    }
    std::string::string((string *)param_1,local_18);
  }
  else {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 1;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c);
    std::string::string((string *)param_1,(string *)(iVar2 + 4));
  }
  std::string::~string(local_18);
  return param_1;
}
```
