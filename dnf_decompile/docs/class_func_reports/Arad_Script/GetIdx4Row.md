# GetIdx4Row

`_ZN11Arad_Script10GetIdx4RowEPc`

`Arad_Script::GetIdx4Row(char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c52e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c52e  _ZN11Arad_Script10GetIdx4RowEPc
#           Arad_Script::GetIdx4Row(char*)
# range [0x0817c52e, 0x0817c60d]
0817c52e +0x00:  push   %ebp
0817c52f +0x01:  mov    %esp,%ebp
0817c531 +0x03:  push   %esi
0817c532 +0x04:  push   %ebx
0817c533 +0x05:  sub    $0x20,%esp
0817c536 +0x08:  lea    -0xd(%ebp),%eax
0817c539 +0x0b:  mov    %eax,(%esp)
0817c53c +0x0e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817c541 +0x13:  lea    -0xd(%ebp),%eax
0817c544 +0x16:  mov    %eax,0x8(%esp)
0817c548 +0x1a:  mov    0xc(%ebp),%eax
0817c54b +0x1d:  mov    %eax,0x4(%esp)
0817c54f +0x21:  lea    -0x14(%ebp),%eax
0817c552 +0x24:  mov    %eax,(%esp)
0817c555 +0x27:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817c55a +0x2c:  mov    0x8(%ebp),%eax
0817c55d +0x2f:  lea    0x3c(%eax),%ecx
0817c560 +0x32:  lea    -0x18(%ebp),%eax
0817c563 +0x35:  lea    -0x14(%ebp),%edx
0817c566 +0x38:  mov    %edx,0x8(%esp)
0817c56a +0x3c:  mov    %ecx,0x4(%esp)
0817c56e +0x40:  mov    %eax,(%esp)
0817c571 +0x43:  call   0817cdb0 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1f7>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1f7
0817c576 +0x48:  sub    $0x4,%esp
0817c579 +0x4b:  lea    -0x14(%ebp),%eax
0817c57c +0x4e:  mov    %eax,(%esp)
0817c57f +0x51:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c584 +0x56:  jmp    0817c5b6 <+0x88>
0817c586 +0x58:  mov    %edx,%ebx
0817c588 +0x5a:  mov    %eax,%esi
0817c58a +0x5c:  lea    -0x14(%ebp),%eax
0817c58d +0x5f:  mov    %eax,(%esp)
0817c590 +0x62:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c595 +0x67:  mov    %esi,%eax
0817c597 +0x69:  mov    %ebx,%edx
0817c599 +0x6b:  jmp    0817c59b <+0x6d>
0817c59b +0x6d:  mov    %edx,%ebx
0817c59d +0x6f:  mov    %eax,%esi
0817c59f +0x71:  lea    -0xd(%ebp),%eax
0817c5a2 +0x74:  mov    %eax,(%esp)
0817c5a5 +0x77:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c5aa +0x7c:  mov    %esi,%eax
0817c5ac +0x7e:  mov    %ebx,%edx
0817c5ae +0x80:  mov    %eax,(%esp)
0817c5b1 +0x83:  call   08ae3750 <_Unwind_Resume>
0817c5b6 +0x88:  lea    -0xd(%ebp),%eax
0817c5b9 +0x8b:  mov    %eax,(%esp)
0817c5bc +0x8e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c5c1 +0x93:  mov    0x8(%ebp),%eax
0817c5c4 +0x96:  lea    0x3c(%eax),%edx
0817c5c7 +0x99:  lea    -0xc(%ebp),%eax
0817c5ca +0x9c:  mov    %edx,0x4(%esp)
0817c5ce +0xa0:  mov    %eax,(%esp)
0817c5d1 +0xa3:  call   0817cddc <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x223>  ; global constructors keyed to Arad_Script::Arad_Script()+0x223
0817c5d6 +0xa8:  sub    $0x4,%esp
0817c5d9 +0xab:  lea    -0xc(%ebp),%eax
0817c5dc +0xae:  mov    %eax,0x4(%esp)
0817c5e0 +0xb2:  lea    -0x18(%ebp),%eax
0817c5e3 +0xb5:  mov    %eax,(%esp)
0817c5e6 +0xb8:  call   0817ce02 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x249>  ; global constructors keyed to Arad_Script::Arad_Script()+0x249
0817c5eb +0xbd:  test   %al,%al
0817c5ed +0xbf:  je     0817c5ff <+0xd1>
0817c5ef +0xc1:  lea    -0x18(%ebp),%eax
0817c5f2 +0xc4:  mov    %eax,(%esp)
0817c5f5 +0xc7:  call   0817ce16 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x25d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x25d
0817c5fa +0xcc:  mov    0x4(%eax),%eax
0817c5fd +0xcf:  jmp    0817c604 <+0xd6>
0817c5ff +0xd1:  mov    $0xffffffff,%eax
0817c604 +0xd6:  lea    -0x8(%ebp),%esp
0817c607 +0xd9:  add    $0x0,%esp
0817c60a +0xdc:  pop    %ebx
0817c60b +0xdd:  pop    %esi
0817c60c +0xde:  pop    %ebp
0817c60d +0xdf:  ret
```

## 反编译 C

```c
// Arad_Script::GetIdx4Row @ 0x817c52e

/* Arad_Script::GetIdx4Row(char*) */

undefined4 __thiscall Arad_Script::GetIdx4Row(Arad_Script *this,char *param_1)

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
                    /* try { // try from 0817c555 to 0817c559 has its CatchHandler @ 0817c59b */
  std::string::string(local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 0817c571 to 0817c575 has its CatchHandler @ 0817c586 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_1c);
                    /* try { // try from 0817c57f to 0817c583 has its CatchHandler @ 0817c59b */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
