# GetIdx4Col

`_ZN11Arad_Script10GetIdx4ColEPc`

`Arad_Script::GetIdx4Col(char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c44e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c44e  _ZN11Arad_Script10GetIdx4ColEPc
#           Arad_Script::GetIdx4Col(char*)
# range [0x0817c44e, 0x0817c52d]
0817c44e +0x00:  push   %ebp
0817c44f +0x01:  mov    %esp,%ebp
0817c451 +0x03:  push   %esi
0817c452 +0x04:  push   %ebx
0817c453 +0x05:  sub    $0x20,%esp
0817c456 +0x08:  lea    -0xd(%ebp),%eax
0817c459 +0x0b:  mov    %eax,(%esp)
0817c45c +0x0e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0817c461 +0x13:  lea    -0xd(%ebp),%eax
0817c464 +0x16:  mov    %eax,0x8(%esp)
0817c468 +0x1a:  mov    0xc(%ebp),%eax
0817c46b +0x1d:  mov    %eax,0x4(%esp)
0817c46f +0x21:  lea    -0x14(%ebp),%eax
0817c472 +0x24:  mov    %eax,(%esp)
0817c475 +0x27:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0817c47a +0x2c:  mov    0x8(%ebp),%eax
0817c47d +0x2f:  lea    0x24(%eax),%ecx
0817c480 +0x32:  lea    -0x18(%ebp),%eax
0817c483 +0x35:  lea    -0x14(%ebp),%edx
0817c486 +0x38:  mov    %edx,0x8(%esp)
0817c48a +0x3c:  mov    %ecx,0x4(%esp)
0817c48e +0x40:  mov    %eax,(%esp)
0817c491 +0x43:  call   0817cdb0 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1f7>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1f7
0817c496 +0x48:  sub    $0x4,%esp
0817c499 +0x4b:  lea    -0x14(%ebp),%eax
0817c49c +0x4e:  mov    %eax,(%esp)
0817c49f +0x51:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c4a4 +0x56:  jmp    0817c4d6 <+0x88>
0817c4a6 +0x58:  mov    %edx,%ebx
0817c4a8 +0x5a:  mov    %eax,%esi
0817c4aa +0x5c:  lea    -0x14(%ebp),%eax
0817c4ad +0x5f:  mov    %eax,(%esp)
0817c4b0 +0x62:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817c4b5 +0x67:  mov    %esi,%eax
0817c4b7 +0x69:  mov    %ebx,%edx
0817c4b9 +0x6b:  jmp    0817c4bb <+0x6d>
0817c4bb +0x6d:  mov    %edx,%ebx
0817c4bd +0x6f:  mov    %eax,%esi
0817c4bf +0x71:  lea    -0xd(%ebp),%eax
0817c4c2 +0x74:  mov    %eax,(%esp)
0817c4c5 +0x77:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c4ca +0x7c:  mov    %esi,%eax
0817c4cc +0x7e:  mov    %ebx,%edx
0817c4ce +0x80:  mov    %eax,(%esp)
0817c4d1 +0x83:  call   08ae3750 <_Unwind_Resume>
0817c4d6 +0x88:  lea    -0xd(%ebp),%eax
0817c4d9 +0x8b:  mov    %eax,(%esp)
0817c4dc +0x8e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0817c4e1 +0x93:  mov    0x8(%ebp),%eax
0817c4e4 +0x96:  lea    0x24(%eax),%edx
0817c4e7 +0x99:  lea    -0xc(%ebp),%eax
0817c4ea +0x9c:  mov    %edx,0x4(%esp)
0817c4ee +0xa0:  mov    %eax,(%esp)
0817c4f1 +0xa3:  call   0817cddc <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x223>  ; global constructors keyed to Arad_Script::Arad_Script()+0x223
0817c4f6 +0xa8:  sub    $0x4,%esp
0817c4f9 +0xab:  lea    -0xc(%ebp),%eax
0817c4fc +0xae:  mov    %eax,0x4(%esp)
0817c500 +0xb2:  lea    -0x18(%ebp),%eax
0817c503 +0xb5:  mov    %eax,(%esp)
0817c506 +0xb8:  call   0817ce02 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x249>  ; global constructors keyed to Arad_Script::Arad_Script()+0x249
0817c50b +0xbd:  test   %al,%al
0817c50d +0xbf:  je     0817c51f <+0xd1>
0817c50f +0xc1:  lea    -0x18(%ebp),%eax
0817c512 +0xc4:  mov    %eax,(%esp)
0817c515 +0xc7:  call   0817ce16 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x25d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x25d
0817c51a +0xcc:  mov    0x4(%eax),%eax
0817c51d +0xcf:  jmp    0817c524 <+0xd6>
0817c51f +0xd1:  mov    $0xffffffff,%eax
0817c524 +0xd6:  lea    -0x8(%ebp),%esp
0817c527 +0xd9:  add    $0x0,%esp
0817c52a +0xdc:  pop    %ebx
0817c52b +0xdd:  pop    %esi
0817c52c +0xde:  pop    %ebp
0817c52d +0xdf:  ret
```

## 反编译 C

```c
// Arad_Script::GetIdx4Col @ 0x817c44e

/* Arad_Script::GetIdx4Col(char*) */

undefined4 __thiscall Arad_Script::GetIdx4Col(Arad_Script *this,char *param_1)

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
                    /* try { // try from 0817c475 to 0817c479 has its CatchHandler @ 0817c4bb */
  std::string::string(local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 0817c491 to 0817c495 has its CatchHandler @ 0817c4a6 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_1c);
                    /* try { // try from 0817c49f to 0817c4a3 has its CatchHandler @ 0817c4bb */
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
