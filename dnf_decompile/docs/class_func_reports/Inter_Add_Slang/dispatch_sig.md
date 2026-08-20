# dispatch_sig

`_ZN15Inter_Add_Slang12dispatch_sigEP5CUserPci`

`Inter_Add_Slang::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Add_Slang` | `0x084d5498` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d5498  _ZN15Inter_Add_Slang12dispatch_sigEP5CUserPci
#           Inter_Add_Slang::dispatch_sig(CUser*, char*, int)
# range [0x084d5498, 0x084d553d]
084d5498 +0x00:  push   %ebp
084d5499 +0x01:  mov    %esp,%ebp
084d549b +0x03:  push   %esi
084d549c +0x04:  push   %ebx
084d549d +0x05:  sub    $0x20,%esp
084d54a0 +0x08:  mov    0x10(%ebp),%eax
084d54a3 +0x0b:  mov    %eax,-0xc(%ebp)
084d54a6 +0x0e:  lea    -0xd(%ebp),%eax
084d54a9 +0x11:  mov    %eax,(%esp)
084d54ac +0x14:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084d54b1 +0x19:  mov    -0xc(%ebp),%eax
084d54b4 +0x1c:  lea    0xa(%eax),%edx
084d54b7 +0x1f:  lea    -0xd(%ebp),%eax
084d54ba +0x22:  mov    %eax,0x8(%esp)
084d54be +0x26:  mov    %edx,0x4(%esp)
084d54c2 +0x2a:  lea    -0x14(%ebp),%eax
084d54c5 +0x2d:  mov    %eax,(%esp)
084d54c8 +0x30:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084d54cd +0x35:  jmp    084d54ea <+0x52>
084d54cf +0x37:  mov    %edx,%ebx
084d54d1 +0x39:  mov    %eax,%esi
084d54d3 +0x3b:  lea    -0xd(%ebp),%eax
084d54d6 +0x3e:  mov    %eax,(%esp)
084d54d9 +0x41:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084d54de +0x46:  mov    %esi,%eax
084d54e0 +0x48:  mov    %ebx,%edx
084d54e2 +0x4a:  mov    %eax,(%esp)
084d54e5 +0x4d:  call   08ae3750 <_Unwind_Resume>
084d54ea +0x52:  lea    -0xd(%ebp),%eax
084d54ed +0x55:  mov    %eax,(%esp)
084d54f0 +0x58:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084d54f5 +0x5d:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
084d54fa +0x62:  lea    -0x14(%ebp),%edx
084d54fd +0x65:  mov    %edx,0x4(%esp)
084d5501 +0x69:  mov    %eax,(%esp)
084d5504 +0x6c:  call   0862e72a <_ZN16CSyncSlangFilter8AddSlangERKSs>  ; CSyncSlangFilter::AddSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
084d5509 +0x71:  mov    $0x0,%ebx
084d550e +0x76:  lea    -0x14(%ebp),%eax
084d5511 +0x79:  mov    %eax,(%esp)
084d5514 +0x7c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084d5519 +0x81:  mov    %ebx,%eax
084d551b +0x83:  add    $0x20,%esp
084d551e +0x86:  pop    %ebx
084d551f +0x87:  pop    %esi
084d5520 +0x88:  pop    %ebp
084d5521 +0x89:  ret
084d5522 +0x8a:  mov    %edx,%ebx
084d5524 +0x8c:  mov    %eax,%esi
084d5526 +0x8e:  lea    -0x14(%ebp),%eax
084d5529 +0x91:  mov    %eax,(%esp)
084d552c +0x94:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084d5531 +0x99:  mov    %esi,%eax
084d5533 +0x9b:  mov    %ebx,%edx
084d5535 +0x9d:  mov    %eax,(%esp)
084d5538 +0xa0:  call   08ae3750 <_Unwind_Resume>
084d553d +0xa5:  nop
```

## 反编译 C

```c
// Inter_Add_Slang::dispatch_sig @ 0x84d5498

/* Inter_Add_Slang::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Add_Slang::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CSyncSlangFilter *this;
  string local_18;
  allocator<char> local_11;
  int local_10;
  
  local_10 = param_3;
  std::allocator<char>::allocator();
                    /* try { // try from 084d54c8 to 084d54cc has its CatchHandler @ 084d54cf */
  std::string::string((string *)&local_18,(char *)(local_10 + 10),(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 084d54f5 to 084d5508 has its CatchHandler @ 084d5522 */
  this = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  CSyncSlangFilter::AddSlang(this,&local_18);
  std::string::~string((string *)&local_18);
  return 0;
}
```
