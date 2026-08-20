# Arad_EventPeriodDataManager

`_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev`

`ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x081953fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081953fa  _ZN4ARAD27Arad_EventPeriodDataManagerC1Ev
#           ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager()
# range [0x081953fa, 0x08195531]
081953fa +0x000:  push   %ebp
081953fb +0x001:  mov    %esp,%ebp
081953fd +0x003:  push   %esi
081953fe +0x004:  push   %ebx
081953ff +0x005:  sub    $0x20,%esp
08195402 +0x008:  lea    -0x9(%ebp),%eax
08195405 +0x00b:  mov    %eax,(%esp)
08195408 +0x00e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0819540d +0x013:  lea    -0x9(%ebp),%eax
08195410 +0x016:  mov    %eax,0x8(%esp)
08195414 +0x01a:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
0819541c +0x022:  lea    -0x10(%ebp),%eax
0819541f +0x025:  mov    %eax,(%esp)
08195422 +0x028:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08195427 +0x02d:  mov    0x8(%ebp),%eax
0819542a +0x030:  lea    -0x10(%ebp),%edx
0819542d +0x033:  mov    %edx,0x4(%esp)
08195431 +0x037:  mov    %eax,(%esp)
08195434 +0x03a:  call   08195c5c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1c>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1c
08195439 +0x03f:  jmp    08195450 <+0x56>
0819543b +0x041:  mov    %edx,%ebx
0819543d +0x043:  mov    %eax,%esi
0819543f +0x045:  lea    -0x10(%ebp),%eax
08195442 +0x048:  mov    %eax,(%esp)
08195445 +0x04b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0819544a +0x050:  mov    %esi,%eax
0819544c +0x052:  mov    %ebx,%edx
0819544e +0x054:  jmp    0819545d <+0x63>
08195450 +0x056:  lea    -0x10(%ebp),%eax
08195453 +0x059:  mov    %eax,(%esp)
08195456 +0x05c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0819545b +0x061:  jmp    08195478 <+0x7e>
0819545d +0x063:  mov    %edx,%ebx
0819545f +0x065:  mov    %eax,%esi
08195461 +0x067:  lea    -0x9(%ebp),%eax
08195464 +0x06a:  mov    %eax,(%esp)
08195467 +0x06d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0819546c +0x072:  mov    %esi,%eax
0819546e +0x074:  mov    %ebx,%edx
08195470 +0x076:  mov    %eax,(%esp)
08195473 +0x079:  call   08ae3750 <_Unwind_Resume>
08195478 +0x07e:  lea    -0x9(%ebp),%eax
0819547b +0x081:  mov    %eax,(%esp)
0819547e +0x084:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08195483 +0x089:  mov    0x8(%ebp),%eax
08195486 +0x08c:  movl   $&_ZTVN4ARAD27Arad_EventPeriodDataManagerE+0x8,(%eax)
0819548c +0x092:  mov    0x8(%ebp),%eax
0819548f +0x095:  add    $0xc,%eax
08195492 +0x098:  mov    %eax,(%esp)
08195495 +0x09b:  call   08195e08 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1c8>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1c8
0819549a +0x0a0:  mov    0x8(%ebp),%eax
0819549d +0x0a3:  add    $0x18,%eax
081954a0 +0x0a6:  mov    %eax,(%esp)
081954a3 +0x0a9:  call   08195e7a <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x23a>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x23a
081954a8 +0x0ae:  mov    0x8(%ebp),%eax
081954ab +0x0b1:  add    $0x24,%eax
081954ae +0x0b4:  mov    %eax,(%esp)
081954b1 +0x0b7:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
081954b6 +0x0bc:  mov    0x8(%ebp),%eax
081954b9 +0x0bf:  add    $0x3c,%eax
081954bc +0x0c2:  mov    %eax,(%esp)
081954bf +0x0c5:  call   08195eec <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x2ac>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x2ac
081954c4 +0x0ca:  mov    0x8(%ebp),%eax
081954c7 +0x0cd:  movl   $0x0,0x8(%eax)
081954ce +0x0d4:  add    $0x20,%esp
081954d1 +0x0d7:  pop    %ebx
081954d2 +0x0d8:  pop    %esi
081954d3 +0x0d9:  pop    %ebp
081954d4 +0x0da:  ret
081954d5 +0x0db:  mov    %edx,%ebx
081954d7 +0x0dd:  mov    %eax,%esi
081954d9 +0x0df:  mov    0x8(%ebp),%eax
081954dc +0x0e2:  add    $0x24,%eax
081954df +0x0e5:  mov    %eax,(%esp)
081954e2 +0x0e8:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
081954e7 +0x0ed:  mov    %esi,%eax
081954e9 +0x0ef:  mov    %ebx,%edx
081954eb +0x0f1:  mov    %edx,%ebx
081954ed +0x0f3:  mov    %eax,%esi
081954ef +0x0f5:  mov    0x8(%ebp),%eax
081954f2 +0x0f8:  add    $0x18,%eax
081954f5 +0x0fb:  mov    %eax,(%esp)
081954f8 +0x0fe:  call   08195e8e <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x24e>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x24e
081954fd +0x103:  mov    %esi,%eax
081954ff +0x105:  mov    %ebx,%edx
08195501 +0x107:  jmp    08195503 <+0x109>
08195503 +0x109:  mov    %edx,%ebx
08195505 +0x10b:  mov    %eax,%esi
08195507 +0x10d:  mov    0x8(%ebp),%eax
0819550a +0x110:  add    $0xc,%eax
0819550d +0x113:  mov    %eax,(%esp)
08195510 +0x116:  call   08195e1c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1dc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1dc
08195515 +0x11b:  mov    %esi,%eax
08195517 +0x11d:  mov    %ebx,%edx
08195519 +0x11f:  jmp    0819551b <+0x121>
0819551b +0x121:  mov    %edx,%ebx
0819551d +0x123:  mov    %eax,%esi
0819551f +0x125:  mov    0x8(%ebp),%eax
08195522 +0x128:  mov    %eax,(%esp)
08195525 +0x12b:  call   08195c82 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42
0819552a +0x130:  mov    %esi,%eax
0819552c +0x132:  mov    %ebx,%edx
0819552e +0x134:  mov    %eax,(%esp)
08195531 +0x137:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager @ 0x81953fa

/* ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::Arad_EventPeriodDataManager(Arad_EventPeriodDataManager *this)

{
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 08195422 to 08195426 has its CatchHandler @ 0819545d */
  std::string::string(local_14,"Arad_EventPeriodDataManager",(allocator *)&local_d);
                    /* try { // try from 08195434 to 08195438 has its CatchHandler @ 0819543b */
  Arad_InterfaceGameScript::Arad_InterfaceGameScript
            ((Arad_InterfaceGameScript *)this,(string)local_14);
                    /* try { // try from 08195456 to 0819545a has its CatchHandler @ 0819545d */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  *(undefined ***)this = &PTR__Arad_EventPeriodDataManager_08b9ca40;
                    /* try { // try from 08195495 to 08195499 has its CatchHandler @ 0819551b */
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::vector
            ((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
              *)(this + 0xc));
                    /* try { // try from 081954a3 to 081954a7 has its CatchHandler @ 08195503 */
  std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>::
  vector((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>> *)
         (this + 0x18));
  Mutex::Mutex((Mutex *)(this + 0x24));
                    /* try { // try from 081954bf to 081954c3 has its CatchHandler @ 081954d5 */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::list
            ((list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>> *)
             (this + 0x3c));
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
