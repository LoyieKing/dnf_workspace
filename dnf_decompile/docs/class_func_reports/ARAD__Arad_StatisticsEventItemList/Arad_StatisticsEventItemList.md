# Arad_StatisticsEventItemList

`_ZN4ARAD28Arad_StatisticsEventItemListC1Ev`

`ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_StatisticsEventItemList` | `0x0819cbe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819cbe8  _ZN4ARAD28Arad_StatisticsEventItemListC1Ev
#           ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()
# range [0x0819cbe8, 0x0819ccab]
0819cbe8 +0x00:  push   %ebp
0819cbe9 +0x01:  mov    %esp,%ebp
0819cbeb +0x03:  push   %esi
0819cbec +0x04:  push   %ebx
0819cbed +0x05:  sub    $0x20,%esp
0819cbf0 +0x08:  lea    -0x9(%ebp),%eax
0819cbf3 +0x0b:  mov    %eax,(%esp)
0819cbf6 +0x0e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0819cbfb +0x13:  lea    -0x9(%ebp),%eax
0819cbfe +0x16:  mov    %eax,0x8(%esp)
0819cc02 +0x1a:  movl   $"Arad_StatisticsEventItemList",0x4(%esp)
0819cc0a +0x22:  lea    -0x10(%ebp),%eax
0819cc0d +0x25:  mov    %eax,(%esp)
0819cc10 +0x28:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0819cc15 +0x2d:  mov    0x8(%ebp),%eax
0819cc18 +0x30:  lea    -0x10(%ebp),%edx
0819cc1b +0x33:  mov    %edx,0x4(%esp)
0819cc1f +0x37:  mov    %eax,(%esp)
0819cc22 +0x3a:  call   08195c5c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1c
0819cc27 +0x3f:  jmp    0819cc3e <+0x56>
0819cc29 +0x41:  mov    %edx,%ebx
0819cc2b +0x43:  mov    %eax,%esi
0819cc2d +0x45:  lea    -0x10(%ebp),%eax
0819cc30 +0x48:  mov    %eax,(%esp)
0819cc33 +0x4b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0819cc38 +0x50:  mov    %esi,%eax
0819cc3a +0x52:  mov    %ebx,%edx
0819cc3c +0x54:  jmp    0819cc4b <+0x63>
0819cc3e +0x56:  lea    -0x10(%ebp),%eax
0819cc41 +0x59:  mov    %eax,(%esp)
0819cc44 +0x5c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0819cc49 +0x61:  jmp    0819cc66 <+0x7e>
0819cc4b +0x63:  mov    %edx,%ebx
0819cc4d +0x65:  mov    %eax,%esi
0819cc4f +0x67:  lea    -0x9(%ebp),%eax
0819cc52 +0x6a:  mov    %eax,(%esp)
0819cc55 +0x6d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0819cc5a +0x72:  mov    %esi,%eax
0819cc5c +0x74:  mov    %ebx,%edx
0819cc5e +0x76:  mov    %eax,(%esp)
0819cc61 +0x79:  call   08ae3750 <_Unwind_Resume>
0819cc66 +0x7e:  lea    -0x9(%ebp),%eax
0819cc69 +0x81:  mov    %eax,(%esp)
0819cc6c +0x84:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0819cc71 +0x89:  mov    0x8(%ebp),%eax
0819cc74 +0x8c:  movl   $&_ZTVN4ARAD28Arad_StatisticsEventItemListE+0x8,(%eax)
0819cc7a +0x92:  mov    0x8(%ebp),%eax
0819cc7d +0x95:  add    $0x8,%eax
0819cc80 +0x98:  mov    %eax,(%esp)
0819cc83 +0x9b:  call   080f53c2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x373>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x373
0819cc88 +0xa0:  jmp    0819cca5 <+0xbd>
0819cc8a +0xa2:  mov    %edx,%ebx
0819cc8c +0xa4:  mov    %eax,%esi
0819cc8e +0xa6:  mov    0x8(%ebp),%eax
0819cc91 +0xa9:  mov    %eax,(%esp)
0819cc94 +0xac:  call   08195c82 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42
0819cc99 +0xb1:  mov    %esi,%eax
0819cc9b +0xb3:  mov    %ebx,%edx
0819cc9d +0xb5:  mov    %eax,(%esp)
0819cca0 +0xb8:  call   08ae3750 <_Unwind_Resume>
0819cca5 +0xbd:  add    $0x20,%esp
0819cca8 +0xc0:  pop    %ebx
0819cca9 +0xc1:  pop    %esi
0819ccaa +0xc2:  pop    %ebp
0819ccab +0xc3:  ret
```

## 反编译 C

```c
// ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList @ 0x819cbe8

/* ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList(Arad_StatisticsEventItemList *this)

{
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 0819cc10 to 0819cc14 has its CatchHandler @ 0819cc4b */
  std::string::string(local_14,"Arad_StatisticsEventItemList",(allocator *)&local_d);
                    /* try { // try from 0819cc22 to 0819cc26 has its CatchHandler @ 0819cc29 */
  Arad_InterfaceGameScript::Arad_InterfaceGameScript
            ((Arad_InterfaceGameScript *)this,(string)local_14);
                    /* try { // try from 0819cc44 to 0819cc48 has its CatchHandler @ 0819cc4b */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  *(undefined ***)this = &PTR__Arad_StatisticsEventItemList_08ba5a80;
                    /* try { // try from 0819cc83 to 0819cc87 has its CatchHandler @ 0819cc8a */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::vector
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8));
  return;
}
```
