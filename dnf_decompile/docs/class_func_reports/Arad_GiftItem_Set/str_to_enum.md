# str_to_enum

`_ZN17Arad_GiftItem_Set11str_to_enumEPKc`

`Arad_GiftItem_Set::str_to_enum(char const*)`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a2e3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a2e3e  _ZN17Arad_GiftItem_Set11str_to_enumEPKc
#           Arad_GiftItem_Set::str_to_enum(char const*)
# range [0x081a2e3e, 0x081a2f1d]
081a2e3e +0x00:  push   %ebp
081a2e3f +0x01:  mov    %esp,%ebp
081a2e41 +0x03:  push   %esi
081a2e42 +0x04:  push   %ebx
081a2e43 +0x05:  sub    $0x20,%esp
081a2e46 +0x08:  lea    -0xd(%ebp),%eax
081a2e49 +0x0b:  mov    %eax,(%esp)
081a2e4c +0x0e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081a2e51 +0x13:  lea    -0xd(%ebp),%eax
081a2e54 +0x16:  mov    %eax,0x8(%esp)
081a2e58 +0x1a:  mov    0xc(%ebp),%eax
081a2e5b +0x1d:  mov    %eax,0x4(%esp)
081a2e5f +0x21:  lea    -0x14(%ebp),%eax
081a2e62 +0x24:  mov    %eax,(%esp)
081a2e65 +0x27:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081a2e6a +0x2c:  mov    0x8(%ebp),%eax
081a2e6d +0x2f:  lea    0x1c(%eax),%ecx
081a2e70 +0x32:  lea    -0x18(%ebp),%eax
081a2e73 +0x35:  lea    -0x14(%ebp),%edx
081a2e76 +0x38:  mov    %edx,0x8(%esp)
081a2e7a +0x3c:  mov    %ecx,0x4(%esp)
081a2e7e +0x40:  mov    %eax,(%esp)
081a2e81 +0x43:  call   0817cdb0 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1f7>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1f7
081a2e86 +0x48:  sub    $0x4,%esp
081a2e89 +0x4b:  lea    -0x14(%ebp),%eax
081a2e8c +0x4e:  mov    %eax,(%esp)
081a2e8f +0x51:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081a2e94 +0x56:  jmp    081a2ec6 <+0x88>
081a2e96 +0x58:  mov    %edx,%ebx
081a2e98 +0x5a:  mov    %eax,%esi
081a2e9a +0x5c:  lea    -0x14(%ebp),%eax
081a2e9d +0x5f:  mov    %eax,(%esp)
081a2ea0 +0x62:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081a2ea5 +0x67:  mov    %esi,%eax
081a2ea7 +0x69:  mov    %ebx,%edx
081a2ea9 +0x6b:  jmp    081a2eab <+0x6d>
081a2eab +0x6d:  mov    %edx,%ebx
081a2ead +0x6f:  mov    %eax,%esi
081a2eaf +0x71:  lea    -0xd(%ebp),%eax
081a2eb2 +0x74:  mov    %eax,(%esp)
081a2eb5 +0x77:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081a2eba +0x7c:  mov    %esi,%eax
081a2ebc +0x7e:  mov    %ebx,%edx
081a2ebe +0x80:  mov    %eax,(%esp)
081a2ec1 +0x83:  call   08ae3750 <_Unwind_Resume>
081a2ec6 +0x88:  lea    -0xd(%ebp),%eax
081a2ec9 +0x8b:  mov    %eax,(%esp)
081a2ecc +0x8e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081a2ed1 +0x93:  mov    0x8(%ebp),%eax
081a2ed4 +0x96:  lea    0x1c(%eax),%edx
081a2ed7 +0x99:  lea    -0xc(%ebp),%eax
081a2eda +0x9c:  mov    %edx,0x4(%esp)
081a2ede +0xa0:  mov    %eax,(%esp)
081a2ee1 +0xa3:  call   0817cddc <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x223>  ; global constructors keyed to Arad_Script::Arad_Script()+0x223
081a2ee6 +0xa8:  sub    $0x4,%esp
081a2ee9 +0xab:  lea    -0x18(%ebp),%eax
081a2eec +0xae:  mov    %eax,0x4(%esp)
081a2ef0 +0xb2:  lea    -0xc(%ebp),%eax
081a2ef3 +0xb5:  mov    %eax,(%esp)
081a2ef6 +0xb8:  call   0817ce02 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x249>  ; global constructors keyed to Arad_Script::Arad_Script()+0x249
081a2efb +0xbd:  test   %al,%al
081a2efd +0xbf:  je     081a2f0f <+0xd1>
081a2eff +0xc1:  lea    -0x18(%ebp),%eax
081a2f02 +0xc4:  mov    %eax,(%esp)
081a2f05 +0xc7:  call   0817ce16 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x25d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x25d
081a2f0a +0xcc:  mov    0x4(%eax),%eax
081a2f0d +0xcf:  jmp    081a2f14 <+0xd6>
081a2f0f +0xd1:  mov    $0x0,%eax
081a2f14 +0xd6:  lea    -0x8(%ebp),%esp
081a2f17 +0xd9:  add    $0x0,%esp
081a2f1a +0xdc:  pop    %ebx
081a2f1b +0xdd:  pop    %esi
081a2f1c +0xde:  pop    %ebp
081a2f1d +0xdf:  ret
```

## 反编译 C

```c
// Arad_GiftItem_Set::str_to_enum @ 0x81a2e3e

/* Arad_GiftItem_Set::str_to_enum(char const*) */

undefined4 __thiscall Arad_GiftItem_Set::str_to_enum(Arad_GiftItem_Set *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 081a2e65 to 081a2e69 has its CatchHandler @ 081a2eab */
  std::string::string(local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 081a2e81 to 081a2e85 has its CatchHandler @ 081a2e96 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_1c);
                    /* try { // try from 081a2e8f to 081a2e93 has its CatchHandler @ 081a2eab */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)local_10,
                     (_Rb_tree_iterator *)&local_1c);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
