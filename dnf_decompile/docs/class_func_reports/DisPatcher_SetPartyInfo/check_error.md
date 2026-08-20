# check_error

`_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_SetPartyInfo::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPartyInfo` | `0x081c4708` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4708  _ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_SetPartyInfo::check_error(CUser*, MSG_BASE&)
# range [0x081c4708, 0x081c47b9]
081c4708 +0x00:  push   %ebp
081c4709 +0x01:  mov    %esp,%ebp
081c470b +0x03:  push   %esi
081c470c +0x04:  push   %ebx
081c470d +0x05:  sub    $0x20,%esp
081c4710 +0x08:  mov    0x10(%ebp),%eax
081c4713 +0x0b:  mov    %eax,-0xc(%ebp)
081c4716 +0x0e:  lea    -0xd(%ebp),%eax
081c4719 +0x11:  mov    %eax,(%esp)
081c471c +0x14:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081c4721 +0x19:  mov    -0xc(%ebp),%eax
081c4724 +0x1c:  lea    0x12(%eax),%edx
081c4727 +0x1f:  lea    -0xd(%ebp),%eax
081c472a +0x22:  mov    %eax,0x8(%esp)
081c472e +0x26:  mov    %edx,0x4(%esp)
081c4732 +0x2a:  lea    -0x14(%ebp),%eax
081c4735 +0x2d:  mov    %eax,(%esp)
081c4738 +0x30:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081c473d +0x35:  jmp    081c475a <+0x52>
081c473f +0x37:  mov    %edx,%ebx
081c4741 +0x39:  mov    %eax,%esi
081c4743 +0x3b:  lea    -0xd(%ebp),%eax
081c4746 +0x3e:  mov    %eax,(%esp)
081c4749 +0x41:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081c474e +0x46:  mov    %esi,%eax
081c4750 +0x48:  mov    %ebx,%edx
081c4752 +0x4a:  mov    %eax,(%esp)
081c4755 +0x4d:  call   08ae3750 <_Unwind_Resume>
081c475a +0x52:  lea    -0xd(%ebp),%eax
081c475d +0x55:  mov    %eax,(%esp)
081c4760 +0x58:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081c4765 +0x5d:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081c476a +0x62:  lea    -0x14(%ebp),%edx
081c476d +0x65:  mov    %edx,0x4(%esp)
081c4771 +0x69:  mov    %eax,(%esp)
081c4774 +0x6c:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081c4779 +0x71:  test   %al,%al
081c477b +0x73:  je     081c4784 <+0x7c>
081c477d +0x75:  mov    $0x9f,%ebx
081c4782 +0x7a:  jmp    081c47a6 <+0x9e>
081c4784 +0x7c:  mov    $0x0,%ebx
081c4789 +0x81:  jmp    081c47a6 <+0x9e>
081c478b +0x83:  mov    %edx,%ebx
081c478d +0x85:  mov    %eax,%esi
081c478f +0x87:  lea    -0x14(%ebp),%eax
081c4792 +0x8a:  mov    %eax,(%esp)
081c4795 +0x8d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081c479a +0x92:  mov    %esi,%eax
081c479c +0x94:  mov    %ebx,%edx
081c479e +0x96:  mov    %eax,(%esp)
081c47a1 +0x99:  call   08ae3750 <_Unwind_Resume>
081c47a6 +0x9e:  lea    -0x14(%ebp),%eax
081c47a9 +0xa1:  mov    %eax,(%esp)
081c47ac +0xa4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081c47b1 +0xa9:  mov    %ebx,%eax
081c47b3 +0xab:  add    $0x20,%esp
081c47b6 +0xae:  pop    %ebx
081c47b7 +0xaf:  pop    %esi
081c47b8 +0xb0:  pop    %ebp
081c47b9 +0xb1:  ret
```

## 反编译 C

```c
// DisPatcher_SetPartyInfo::check_error @ 0x81c4708

/* DisPatcher_SetPartyInfo::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPartyInfo::check_error(DisPatcher_SetPartyInfo *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  CSyncSlangFilter *this_00;
  undefined4 uVar2;
  string local_18;
  allocator<char> local_11;
  MSG_BASE *local_10;
  
  local_10 = param_2;
  std::allocator<char>::allocator();
                    /* try { // try from 081c4738 to 081c473c has its CatchHandler @ 081c473f */
  std::string::string((string *)&local_18,(char *)(local_10 + 0x12),(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 081c4765 to 081c4778 has its CatchHandler @ 081c478b */
  this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar1 = CSyncSlangFilter::HasSlang(this_00,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x9f;
  }
  std::string::~string((string *)&local_18);
  return uVar2;
}
```
