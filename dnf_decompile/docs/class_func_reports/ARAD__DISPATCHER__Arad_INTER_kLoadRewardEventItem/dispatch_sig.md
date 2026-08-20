# dispatch_sig

`_ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem` | `0x08198fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198fd0  _ZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig(CUser*, char*, int)
# range [0x08198fd0, 0x08199277]
08198fd0 +0x000:  push   %ebp
08198fd1 +0x001:  mov    %esp,%ebp
08198fd3 +0x003:  push   %esi
08198fd4 +0x004:  push   %ebx
08198fd5 +0x005:  sub    $0x40,%esp
08198fd8 +0x008:  cmpl   $0x0,0xc(%ebp)
08198fdc +0x00c:  je     08198fed <+0x1d>
08198fde +0x00e:  mov    0xc(%ebp),%eax
08198fe1 +0x011:  mov    %eax,(%esp)
08198fe4 +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08198fe9 +0x019:  test   %eax,%eax
08198feb +0x01b:  jne    08198ff4 <+0x24>
08198fed +0x01d:  mov    $0x1,%eax
08198ff2 +0x022:  jmp    08198ff9 <+0x29>
08198ff4 +0x024:  mov    $0x0,%eax
08198ff9 +0x029:  test   %al,%al
08198ffb +0x02b:  je     08199007 <+0x37>
08198ffd +0x02d:  mov    $0x4d3,%eax
08199002 +0x032:  jmp    08199270 <+0x2a0>
08199007 +0x037:  mov    0x10(%ebp),%eax
0819900a +0x03a:  mov    %eax,-0xc(%ebp)
0819900d +0x03d:  cmpl   $0x0,-0xc(%ebp)
08199011 +0x041:  jne    08199049 <+0x79>
08199013 +0x043:  movl   $"SigLoadRewardEventItem is null.",0x10(%esp)
0819901b +0x04b:  movl   $0x4d8,0xc(%esp)
08199023 +0x053:  movl   $&_ZZN4ARAD10DISPATCHER31Arad_INTER_kLoadRewardEventItem12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0819902b +0x05b:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08199033 +0x063:  movl   $0x1,(%esp)
0819903a +0x06a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819903f +0x06f:  mov    $0x4d9,%eax
08199044 +0x074:  jmp    08199270 <+0x2a0>
08199049 +0x079:  lea    -0x1d(%ebp),%eax
0819904c +0x07c:  mov    %eax,(%esp)
0819904f +0x07f:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08199054 +0x084:  lea    -0x1d(%ebp),%eax
08199057 +0x087:  mov    %eax,0x8(%esp)
0819905b +0x08b:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
08199063 +0x093:  lea    -0x24(%ebp),%eax
08199066 +0x096:  mov    %eax,(%esp)
08199069 +0x099:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0819906e +0x09e:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
08199073 +0x0a3:  lea    -0x24(%ebp),%edx
08199076 +0x0a6:  mov    %edx,0x4(%esp)
0819907a +0x0aa:  mov    %eax,(%esp)
0819907d +0x0ad:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08199082 +0x0b2:  mov    -0xc(%ebp),%edx
08199085 +0x0b5:  mov    %edx,0x8(%esp)
08199089 +0x0b9:  mov    0xc(%ebp),%edx
0819908c +0x0bc:  mov    %edx,0x4(%esp)
08199090 +0x0c0:  mov    %eax,(%esp)
08199093 +0x0c3:  call   08195994 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE>  ; ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&)
08199098 +0x0c8:  jmp    081990af <+0xdf>
0819909a +0x0ca:  mov    %edx,%ebx
0819909c +0x0cc:  mov    %eax,%esi
0819909e +0x0ce:  lea    -0x24(%ebp),%eax
081990a1 +0x0d1:  mov    %eax,(%esp)
081990a4 +0x0d4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081990a9 +0x0d9:  mov    %esi,%eax
081990ab +0x0db:  mov    %ebx,%edx
081990ad +0x0dd:  jmp    081990bc <+0xec>
081990af +0x0df:  lea    -0x24(%ebp),%eax
081990b2 +0x0e2:  mov    %eax,(%esp)
081990b5 +0x0e5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081990ba +0x0ea:  jmp    081990d7 <+0x107>
081990bc +0x0ec:  mov    %edx,%ebx
081990be +0x0ee:  mov    %eax,%esi
081990c0 +0x0f0:  lea    -0x1d(%ebp),%eax
081990c3 +0x0f3:  mov    %eax,(%esp)
081990c6 +0x0f6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081990cb +0x0fb:  mov    %esi,%eax
081990cd +0x0fd:  mov    %ebx,%edx
081990cf +0x0ff:  mov    %eax,(%esp)
081990d2 +0x102:  call   08ae3750 <_Unwind_Resume>
081990d7 +0x107:  lea    -0x1d(%ebp),%eax
081990da +0x10a:  mov    %eax,(%esp)
081990dd +0x10d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081990e2 +0x112:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081990e9 +0x119:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081990ee +0x11e:  mov    %eax,%ebx
081990f0 +0x120:  lea    -0x15(%ebp),%eax
081990f3 +0x123:  mov    %eax,(%esp)
081990f6 +0x126:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081990fb +0x12b:  lea    -0x15(%ebp),%eax
081990fe +0x12e:  mov    %eax,0x8(%esp)
08199102 +0x132:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
0819910a +0x13a:  lea    -0x1c(%ebp),%eax
0819910d +0x13d:  mov    %eax,(%esp)
08199110 +0x140:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08199115 +0x145:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
0819911a +0x14a:  lea    -0x1c(%ebp),%edx
0819911d +0x14d:  mov    %edx,0x4(%esp)
08199121 +0x151:  mov    %eax,(%esp)
08199124 +0x154:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08199129 +0x159:  mov    0xc(%ebp),%edx
0819912c +0x15c:  mov    %edx,0xc(%esp)
08199130 +0x160:  mov    %ebx,0x8(%esp)
08199134 +0x164:  movl   $0x8f,0x4(%esp)
0819913c +0x16c:  mov    %eax,(%esp)
0819913f +0x16f:  call   0819abc8 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x8ae>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x8ae
08199144 +0x174:  jmp    0819915b <+0x18b>
08199146 +0x176:  mov    %edx,%ebx
08199148 +0x178:  mov    %eax,%esi
0819914a +0x17a:  lea    -0x1c(%ebp),%eax
0819914d +0x17d:  mov    %eax,(%esp)
08199150 +0x180:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08199155 +0x185:  mov    %esi,%eax
08199157 +0x187:  mov    %ebx,%edx
08199159 +0x189:  jmp    08199168 <+0x198>
0819915b +0x18b:  lea    -0x1c(%ebp),%eax
0819915e +0x18e:  mov    %eax,(%esp)
08199161 +0x191:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08199166 +0x196:  jmp    08199183 <+0x1b3>
08199168 +0x198:  mov    %edx,%ebx
0819916a +0x19a:  mov    %eax,%esi
0819916c +0x19c:  lea    -0x15(%ebp),%eax
0819916f +0x19f:  mov    %eax,(%esp)
08199172 +0x1a2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08199177 +0x1a7:  mov    %esi,%eax
08199179 +0x1a9:  mov    %ebx,%edx
0819917b +0x1ab:  mov    %eax,(%esp)
0819917e +0x1ae:  call   08ae3750 <_Unwind_Resume>
08199183 +0x1b3:  lea    -0x15(%ebp),%eax
08199186 +0x1b6:  mov    %eax,(%esp)
08199189 +0x1b9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0819918e +0x1be:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08199193 +0x1c3:  movl   $0x9b,0x4(%esp)
0819919b +0x1cb:  mov    %eax,(%esp)
0819919e +0x1ce:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081991a3 +0x1d3:  mov    (%eax),%edx
081991a5 +0x1d5:  add    $0x34,%edx
081991a8 +0x1d8:  mov    (%edx),%edx
081991aa +0x1da:  movl   $0x0,0x4(%esp)
081991b2 +0x1e2:  mov    %eax,(%esp)
081991b5 +0x1e5:  call   *%edx
081991b7 +0x1e7:  test   %al,%al
081991b9 +0x1e9:  je     0819926b <+0x29b>
081991bf +0x1ef:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081991c6 +0x1f6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081991cb +0x1fb:  mov    %eax,%ebx
081991cd +0x1fd:  lea    -0xd(%ebp),%eax
081991d0 +0x200:  mov    %eax,(%esp)
081991d3 +0x203:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081991d8 +0x208:  lea    -0xd(%ebp),%eax
081991db +0x20b:  mov    %eax,0x8(%esp)
081991df +0x20f:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
081991e7 +0x217:  lea    -0x14(%ebp),%eax
081991ea +0x21a:  mov    %eax,(%esp)
081991ed +0x21d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081991f2 +0x222:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
081991f7 +0x227:  lea    -0x14(%ebp),%edx
081991fa +0x22a:  mov    %edx,0x4(%esp)
081991fe +0x22e:  mov    %eax,(%esp)
08199201 +0x231:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08199206 +0x236:  mov    0xc(%ebp),%edx
08199209 +0x239:  mov    %edx,0xc(%esp)
0819920d +0x23d:  mov    %ebx,0x8(%esp)
08199211 +0x241:  movl   $0x9b,0x4(%esp)
08199219 +0x249:  mov    %eax,(%esp)
0819921c +0x24c:  call   0819adb6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xa9c
08199221 +0x251:  jmp    08199238 <+0x268>
08199223 +0x253:  mov    %edx,%ebx
08199225 +0x255:  mov    %eax,%esi
08199227 +0x257:  lea    -0x14(%ebp),%eax
0819922a +0x25a:  mov    %eax,(%esp)
0819922d +0x25d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08199232 +0x262:  mov    %esi,%eax
08199234 +0x264:  mov    %ebx,%edx
08199236 +0x266:  jmp    08199245 <+0x275>
08199238 +0x268:  lea    -0x14(%ebp),%eax
0819923b +0x26b:  mov    %eax,(%esp)
0819923e +0x26e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08199243 +0x273:  jmp    08199260 <+0x290>
08199245 +0x275:  mov    %edx,%ebx
08199247 +0x277:  mov    %eax,%esi
08199249 +0x279:  lea    -0xd(%ebp),%eax
0819924c +0x27c:  mov    %eax,(%esp)
0819924f +0x27f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08199254 +0x284:  mov    %esi,%eax
08199256 +0x286:  mov    %ebx,%edx
08199258 +0x288:  mov    %eax,(%esp)
0819925b +0x28b:  call   08ae3750 <_Unwind_Resume>
08199260 +0x290:  lea    -0xd(%ebp),%eax
08199263 +0x293:  mov    %eax,(%esp)
08199266 +0x296:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0819926b +0x29b:  mov    $0x0,%eax
08199270 +0x2a0:  add    $0x40,%esp
08199273 +0x2a3:  pop    %ebx
08199274 +0x2a4:  pop    %esi
08199275 +0x2a5:  pop    %ebp
08199276 +0x2a6:  ret
08199277 +0x2a7:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig @ 0x8198fd0

/* ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Arad_DataManager *pAVar5;
  Arad_EventPeriodDataManager *pAVar6;
  int *piVar7;
  string local_28 [7];
  allocator<char> local_21;
  string local_20 [7];
  allocator<char> local_19;
  string local_18 [7];
  allocator<char> local_11;
  SigLoadRewardEventItem *local_10;
  
  if (param_2 != (char *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08198ff9;
    }
  }
  bVar1 = true;
LAB_08198ff9:
  if (bVar1) {
    uVar4 = 0x4d3;
  }
  else {
    local_10 = (SigLoadRewardEventItem *)param_3;
    if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem::dispatch_sig(CUser*, char*, int)"
                 ,0x4d8,"SigLoadRewardEventItem is null.");
      uVar4 = 0x4d9;
    }
    else {
      std::allocator<char>::allocator();
                    /* try { // try from 08199069 to 0819906d has its CatchHandler @ 081990bc */
      std::string::string(local_28,"Arad_EventPeriodDataManager",(allocator *)&local_21);
                    /* try { // try from 0819906e to 08199097 has its CatchHandler @ 0819909a */
      pAVar5 = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
      pAVar6 = (Arad_EventPeriodDataManager *)
               Arad_DataManager::findGameScript(pAVar5,(string)local_28);
      Arad_EventPeriodDataManager::addUserRewardData(pAVar6,(CUser *)param_2,local_10);
                    /* try { // try from 081990b5 to 081990b9 has its CatchHandler @ 081990bc */
      std::string::~string(local_28);
      std::allocator<char>::~allocator(&local_21);
      uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      std::allocator<char>::allocator();
                    /* try { // try from 08199110 to 08199114 has its CatchHandler @ 08199168 */
      std::string::string(local_20,"Arad_EventPeriodDataManager",(allocator *)&local_19);
                    /* try { // try from 08199115 to 08199143 has its CatchHandler @ 08199146 */
      pAVar5 = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
      pAVar6 = (Arad_EventPeriodDataManager *)
               Arad_DataManager::findGameScript(pAVar5,(string)local_20);
      Arad_EventPeriodDataManager::eventReward<ARAD::FnRewardLethe>(pAVar6,0x8f,uVar4,param_2);
                    /* try { // try from 08199161 to 08199165 has its CatchHandler @ 08199168 */
      std::string::~string(local_20);
      std::allocator<char>::~allocator(&local_19);
      piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9b);
      cVar2 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
      if (cVar2 != '\0') {
        uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::allocator<char>::allocator();
                    /* try { // try from 081991ed to 081991f1 has its CatchHandler @ 08199245 */
        std::string::string(local_18,"Arad_EventPeriodDataManager",(allocator *)&local_11);
                    /* try { // try from 081991f2 to 08199220 has its CatchHandler @ 08199223 */
        pAVar5 = (Arad_DataManager *)Singleton<ARAD::Arad_DataManager>::Get();
        pAVar6 = (Arad_EventPeriodDataManager *)
                 Arad_DataManager::findGameScript(pAVar5,(string)local_18);
        Arad_EventPeriodDataManager::eventReward<ARAD::FnRewardMomoji>(pAVar6,0x9b,uVar4,param_2);
                    /* try { // try from 0819923e to 08199242 has its CatchHandler @ 08199245 */
        std::string::~string(local_18);
        std::allocator<char>::~allocator(&local_11);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
