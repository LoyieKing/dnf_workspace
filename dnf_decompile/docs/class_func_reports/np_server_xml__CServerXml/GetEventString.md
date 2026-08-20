# GetEventString

`_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb`

`np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c6822` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c6822  _ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb
#           np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const
# range [0x080c6822, 0x080c6a29]
080c6822 +0x000:  push   %ebp
080c6823 +0x001:  mov    %esp,%ebp
080c6825 +0x003:  push   %esi
080c6826 +0x004:  push   %ebx
080c6827 +0x005:  sub    $0x40,%esp
080c682a +0x008:  mov    0x8(%ebp),%ebx
080c682d +0x00b:  lea    -0x11(%ebp),%eax
080c6830 +0x00e:  mov    %eax,(%esp)
080c6833 +0x011:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
080c6838 +0x016:  lea    -0x11(%ebp),%eax
080c683b +0x019:  mov    %eax,0x8(%esp)
080c683f +0x01d:  movl   $"",0x4(%esp)
080c6847 +0x025:  lea    -0x18(%ebp),%eax
080c684a +0x028:  mov    %eax,(%esp)
080c684d +0x02b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
080c6852 +0x030:  jmp    080c686f <+0x4d>
080c6854 +0x032:  mov    %edx,%ebx
080c6856 +0x034:  mov    %eax,%esi
080c6858 +0x036:  lea    -0x11(%ebp),%eax
080c685b +0x039:  mov    %eax,(%esp)
080c685e +0x03c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c6863 +0x041:  mov    %esi,%eax
080c6865 +0x043:  mov    %ebx,%edx
080c6867 +0x045:  mov    %eax,(%esp)
080c686a +0x048:  call   08ae3750 <_Unwind_Resume>
080c686f +0x04d:  lea    -0x11(%ebp),%eax
080c6872 +0x050:  mov    %eax,(%esp)
080c6875 +0x053:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c687a +0x058:  lea    -0x1c(%ebp),%eax
080c687d +0x05b:  mov    %eax,(%esp)
080c6880 +0x05e:  call   080c6e1a <_GLOBAL__I_g_ServerString_+0x385>  ; global constructors keyed to g_ServerString_+0x385
080c6885 +0x063:  mov    0x14(%ebp),%eax
080c6888 +0x066:  cmp    $0x1,%eax
080c688b +0x069:  je     080c689b <+0x79>
080c688d +0x06b:  cmp    $0x2,%eax
080c6890 +0x06e:  je     080c693f <+0x11d>
080c6896 +0x074:  jmp    080c69e3 <+0x1c1>
080c689b +0x079:  mov    0xc(%ebp),%eax
080c689e +0x07c:  lea    0x70(%eax),%ecx
080c68a1 +0x07f:  lea    -0x2c(%ebp),%eax
080c68a4 +0x082:  lea    0x10(%ebp),%edx
080c68a7 +0x085:  mov    %edx,0x8(%esp)
080c68ab +0x089:  mov    %ecx,0x4(%esp)
080c68af +0x08d:  mov    %eax,(%esp)
080c68b2 +0x090:  call   080c6e28 <_GLOBAL__I_g_ServerString_+0x393>  ; global constructors keyed to g_ServerString_+0x393
080c68b7 +0x095:  sub    $0x4,%esp
080c68ba +0x098:  mov    -0x2c(%ebp),%eax
080c68bd +0x09b:  mov    %eax,-0x1c(%ebp)
080c68c0 +0x09e:  mov    0xc(%ebp),%eax
080c68c3 +0x0a1:  lea    0x70(%eax),%edx
080c68c6 +0x0a4:  lea    -0x10(%ebp),%eax
080c68c9 +0x0a7:  mov    %edx,0x4(%esp)
080c68cd +0x0ab:  mov    %eax,(%esp)
080c68d0 +0x0ae:  call   080c6e54 <_GLOBAL__I_g_ServerString_+0x3bf>  ; global constructors keyed to g_ServerString_+0x3bf
080c68d5 +0x0b3:  sub    $0x4,%esp
080c68d8 +0x0b6:  lea    -0x10(%ebp),%eax
080c68db +0x0b9:  mov    %eax,0x4(%esp)
080c68df +0x0bd:  lea    -0x1c(%ebp),%eax
080c68e2 +0x0c0:  mov    %eax,(%esp)
080c68e5 +0x0c3:  call   080c6e7a <_GLOBAL__I_g_ServerString_+0x3e5>  ; global constructors keyed to g_ServerString_+0x3e5
080c68ea +0x0c8:  test   %al,%al
080c68ec +0x0ca:  je     080c68fc <+0xda>
080c68ee +0x0cc:  cmpl   $0x0,0x18(%ebp)
080c68f2 +0x0d0:  je     080c691e <+0xfc>
080c68f4 +0x0d2:  mov    0x18(%ebp),%eax
080c68f7 +0x0d5:  movb   $0x1,(%eax)
080c68fa +0x0d8:  jmp    080c691e <+0xfc>
080c68fc +0x0da:  cmpl   $0x0,0x18(%ebp)
080c6900 +0x0de:  je     080c6908 <+0xe6>
080c6902 +0x0e0:  mov    0x18(%ebp),%eax
080c6905 +0x0e3:  movb   $0x0,(%eax)
080c6908 +0x0e6:  mov    %ebx,%eax
080c690a +0x0e8:  lea    -0x18(%ebp),%edx
080c690d +0x0eb:  mov    %edx,0x4(%esp)
080c6911 +0x0ef:  mov    %eax,(%esp)
080c6914 +0x0f2:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c6919 +0x0f7:  jmp    080c6a11 <+0x1ef>
080c691e +0x0fc:  mov    %ebx,%esi
080c6920 +0x0fe:  lea    -0x1c(%ebp),%eax
080c6923 +0x101:  mov    %eax,(%esp)
080c6926 +0x104:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
080c692b +0x109:  add    $0x4,%eax
080c692e +0x10c:  mov    %eax,0x4(%esp)
080c6932 +0x110:  mov    %esi,(%esp)
080c6935 +0x113:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c693a +0x118:  jmp    080c6a11 <+0x1ef>
080c693f +0x11d:  mov    0xc(%ebp),%eax
080c6942 +0x120:  lea    0x88(%eax),%ecx
080c6948 +0x126:  lea    -0x2c(%ebp),%eax
080c694b +0x129:  lea    0x10(%ebp),%edx
080c694e +0x12c:  mov    %edx,0x8(%esp)
080c6952 +0x130:  mov    %ecx,0x4(%esp)
080c6956 +0x134:  mov    %eax,(%esp)
080c6959 +0x137:  call   080c6e28 <_GLOBAL__I_g_ServerString_+0x393>  ; global constructors keyed to g_ServerString_+0x393
080c695e +0x13c:  sub    $0x4,%esp
080c6961 +0x13f:  mov    -0x2c(%ebp),%eax
080c6964 +0x142:  mov    %eax,-0x1c(%ebp)
080c6967 +0x145:  mov    0xc(%ebp),%eax
080c696a +0x148:  lea    0x88(%eax),%edx
080c6970 +0x14e:  lea    -0xc(%ebp),%eax
080c6973 +0x151:  mov    %edx,0x4(%esp)
080c6977 +0x155:  mov    %eax,(%esp)
080c697a +0x158:  call   080c6e54 <_GLOBAL__I_g_ServerString_+0x3bf>  ; global constructors keyed to g_ServerString_+0x3bf
080c697f +0x15d:  sub    $0x4,%esp
080c6982 +0x160:  lea    -0xc(%ebp),%eax
080c6985 +0x163:  mov    %eax,0x4(%esp)
080c6989 +0x167:  lea    -0x1c(%ebp),%eax
080c698c +0x16a:  mov    %eax,(%esp)
080c698f +0x16d:  call   080c6e7a <_GLOBAL__I_g_ServerString_+0x3e5>  ; global constructors keyed to g_ServerString_+0x3e5
080c6994 +0x172:  test   %al,%al
080c6996 +0x174:  je     080c69a6 <+0x184>
080c6998 +0x176:  cmpl   $0x0,0x18(%ebp)
080c699c +0x17a:  je     080c69c5 <+0x1a3>
080c699e +0x17c:  mov    0x18(%ebp),%eax
080c69a1 +0x17f:  movb   $0x1,(%eax)
080c69a4 +0x182:  jmp    080c69c5 <+0x1a3>
080c69a6 +0x184:  cmpl   $0x0,0x18(%ebp)
080c69aa +0x188:  je     080c69b2 <+0x190>
080c69ac +0x18a:  mov    0x18(%ebp),%eax
080c69af +0x18d:  movb   $0x0,(%eax)
080c69b2 +0x190:  mov    %ebx,%eax
080c69b4 +0x192:  lea    -0x18(%ebp),%edx
080c69b7 +0x195:  mov    %edx,0x4(%esp)
080c69bb +0x199:  mov    %eax,(%esp)
080c69be +0x19c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c69c3 +0x1a1:  jmp    080c6a11 <+0x1ef>
080c69c5 +0x1a3:  mov    %ebx,%esi
080c69c7 +0x1a5:  lea    -0x1c(%ebp),%eax
080c69ca +0x1a8:  mov    %eax,(%esp)
080c69cd +0x1ab:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
080c69d2 +0x1b0:  add    $0x4,%eax
080c69d5 +0x1b3:  mov    %eax,0x4(%esp)
080c69d9 +0x1b7:  mov    %esi,(%esp)
080c69dc +0x1ba:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c69e1 +0x1bf:  jmp    080c6a11 <+0x1ef>
080c69e3 +0x1c1:  mov    %ebx,%eax
080c69e5 +0x1c3:  lea    -0x18(%ebp),%edx
080c69e8 +0x1c6:  mov    %edx,0x4(%esp)
080c69ec +0x1ca:  mov    %eax,(%esp)
080c69ef +0x1cd:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
080c69f4 +0x1d2:  jmp    080c6a11 <+0x1ef>
080c69f6 +0x1d4:  mov    %edx,%ebx
080c69f8 +0x1d6:  mov    %eax,%esi
080c69fa +0x1d8:  lea    -0x18(%ebp),%eax
080c69fd +0x1db:  mov    %eax,(%esp)
080c6a00 +0x1de:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c6a05 +0x1e3:  mov    %esi,%eax
080c6a07 +0x1e5:  mov    %ebx,%edx
080c6a09 +0x1e7:  mov    %eax,(%esp)
080c6a0c +0x1ea:  call   08ae3750 <_Unwind_Resume>
080c6a11 +0x1ef:  lea    -0x18(%ebp),%eax
080c6a14 +0x1f2:  mov    %eax,(%esp)
080c6a17 +0x1f5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c6a1c +0x1fa:  mov    %ebx,%eax
080c6a1e +0x1fc:  mov    %ebx,%eax
080c6a20 +0x1fe:  lea    -0x8(%ebp),%esp
080c6a23 +0x201:  add    $0x0,%esp
080c6a26 +0x204:  pop    %ebx
080c6a27 +0x205:  pop    %esi
080c6a28 +0x206:  pop    %ebp
080c6a29 +0x207:  ret    $0x4
```

## 反编译 C

```c
// np_server_xml::CServerXml::GetEventString @ 0x80c6822

/* np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const */

string * np_server_xml::CServerXml::GetEventString
                   (string *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  int local_30 [4];
  int local_20;
  string local_1c [7];
  allocator<char> local_15;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 080c684d to 080c6851 has its CatchHandler @ 080c6854 */
  std::string::string(local_1c,"",(allocator *)&local_15);
  std::allocator<char>::~allocator(&local_15);
  std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
  if (param_4 == 1) {
                    /* try { // try from 080c68b2 to 080c69f3 has its CatchHandler @ 080c69f6 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
              (local_30);
    local_20 = local_30[0];
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      std::string::string(param_1,local_1c);
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
      std::string::string(param_1,(string *)(iVar2 + 4));
    }
  }
  else if (param_4 == 2) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
              (local_30);
    local_20 = local_30[0];
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      std::string::string(param_1,local_1c);
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
      std::string::string(param_1,(string *)(iVar2 + 4));
    }
  }
  else {
    std::string::string(param_1,local_1c);
  }
  std::string::~string(local_1c);
  return param_1;
}
```
