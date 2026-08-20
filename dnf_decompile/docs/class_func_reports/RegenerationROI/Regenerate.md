# Regenerate

`_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser`

`RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f8646` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f8646  _ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser
#           RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*)
# range [0x085f8646, 0x085f8cb3]
085f8646 +0x000:  push   %ebp
085f8647 +0x001:  mov    %esp,%ebp
085f8649 +0x003:  push   %edi
085f864a +0x004:  push   %esi
085f864b +0x005:  push   %ebx
085f864c +0x006:  sub    $0x15c,%esp
085f8652 +0x00c:  movl   $0x8,0x4(%esp)
085f865a +0x014:  movl   $0x10,(%esp)
085f8661 +0x01b:  call   081681bb <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1c>  ; global constructors keyed to HeroMissionValue::clear()+0x1c
085f8666 +0x020:  mov    %eax,0x4(%esp)
085f866a +0x024:  lea    -0x124(%ebp),%eax
085f8670 +0x02a:  mov    %eax,(%esp)
085f8673 +0x02d:  call   08701420 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xcbb4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xcbb4
085f8678 +0x032:  lea    -0x58(%ebp),%eax
085f867b +0x035:  mov    %eax,(%esp)
085f867e +0x038:  call   085f97ac <_GLOBAL__I__Z16_GetRandomOptionv+0xde>  ; global constructors keyed to _GetRandomOption()+0xde
085f8683 +0x03d:  lea    -0x124(%ebp),%eax
085f8689 +0x043:  mov    %eax,0x10(%esp)
085f868d +0x047:  lea    -0x58(%ebp),%eax
085f8690 +0x04a:  mov    %eax,0xc(%esp)
085f8694 +0x04e:  mov    0x10(%ebp),%eax
085f8697 +0x051:  mov    %eax,0x8(%esp)
085f869b +0x055:  mov    0xc(%ebp),%eax
085f869e +0x058:  mov    %eax,0x4(%esp)
085f86a2 +0x05c:  mov    0x8(%ebp),%eax
085f86a5 +0x05f:  mov    %eax,(%esp)
085f86a8 +0x062:  call   085f93cc <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE>  ; RegenerationROI::_RandomLevel(int, int, select_base_item&, std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&)
085f86ad +0x067:  mov    $&_ZGVZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,%eax
085f86b2 +0x06c:  movzbl (%eax),%eax
085f86b5 +0x06f:  test   %al,%al
085f86b7 +0x071:  jne    085f8727 <+0xe1>
085f86b9 +0x073:  movl   $&_ZGVZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,(%esp)
085f86c0 +0x07a:  call   08725330 <__cxa_guard_acquire>
085f86c5 +0x07f:  test   %eax,%eax
085f86c7 +0x081:  setne  %al
085f86ca +0x084:  test   %al,%al
085f86cc +0x086:  je     085f8727 <+0xe1>
085f86ce +0x088:  mov    $0x0,%ebx
085f86d3 +0x08d:  movl   $&_ZZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,(%esp)
085f86da +0x094:  call   085f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>  ; random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()
085f86df +0x099:  movl   $&_ZGVZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,(%esp)
085f86e6 +0x0a0:  call   08725250 <__cxa_guard_release>
085f86eb +0x0a5:  mov    $&_ZN13random_option23CRandomOptionItemHandleD1Ev,%eax
085f86f0 +0x0aa:  movl   $&__dso_handle,0x8(%esp)
085f86f8 +0x0b2:  movl   $&_ZZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,0x4(%esp)
085f8700 +0x0ba:  mov    %eax,(%esp)
085f8703 +0x0bd:  call   0807ddd0 <_init+0x6c8>
085f8708 +0x0c2:  jmp    085f8727 <+0xe1>
085f870a +0x0c4:  mov    %edx,%esi
085f870c +0x0c6:  mov    %eax,%edi
085f870e +0x0c8:  test   %bl,%bl
085f8710 +0x0ca:  jne    085f871e <+0xd8>
085f8712 +0x0cc:  movl   $&_ZGVZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,(%esp)
085f8719 +0x0d3:  call   087252c0 <__cxa_guard_abort>
085f871e +0x0d8:  mov    %edi,%eax
085f8720 +0x0da:  mov    %esi,%edx
085f8722 +0x0dc:  jmp    085f8c7a <+0x634>
085f8727 +0x0e1:  cmpl   $0x0,0x18(%ebp)
085f872b +0x0e5:  je     085f873d <+0xf7>
085f872d +0x0e7:  cmpl   $0x65,0x18(%ebp)
085f8731 +0x0eb:  je     085f873d <+0xf7>
085f8733 +0x0ed:  mov    $0x11,%ebx
085f8738 +0x0f2:  jmp    085f8c98 <+0x652>
085f873d +0x0f7:  mov    0x10(%ebp),%eax
085f8740 +0x0fa:  mov    %eax,0x10(%esp)
085f8744 +0x0fe:  mov    0xc(%ebp),%eax
085f8747 +0x101:  mov    %eax,0xc(%esp)
085f874b +0x105:  mov    0x18(%ebp),%eax
085f874e +0x108:  mov    %eax,0x8(%esp)
085f8752 +0x10c:  mov    0x14(%ebp),%eax
085f8755 +0x10f:  mov    %eax,0x4(%esp)
085f8759 +0x113:  mov    0x8(%ebp),%eax
085f875c +0x116:  mov    %eax,(%esp)
085f875f +0x119:  call   085f9094 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii>  ; RegenerationROI::_Calculate_RegenCost(int, int, int, int)
085f8764 +0x11e:  mov    0x1c(%ebp),%edx
085f8767 +0x121:  mov    %eax,(%edx)
085f8769 +0x123:  mov    0x1c(%ebp),%eax
085f876c +0x126:  mov    (%eax),%eax
085f876e +0x128:  cmp    $0xffffffff,%eax
085f8771 +0x12b:  jne    085f87cf <+0x189>
085f8773 +0x12d:  movl   $0x5,0xc(%esp)
085f877b +0x135:  movl   $0x47,0x8(%esp)
085f8783 +0x13d:  movl   $&_ZZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085f878b +0x145:  lea    -0x40(%ebp),%eax
085f878e +0x148:  mov    %eax,(%esp)
085f8791 +0x14b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085f8796 +0x150:  mov    0x10(%ebp),%eax
085f8799 +0x153:  mov    %eax,0x14(%esp)
085f879d +0x157:  mov    0xc(%ebp),%eax
085f87a0 +0x15a:  mov    %eax,0x10(%esp)
085f87a4 +0x15e:  mov    0x18(%ebp),%eax
085f87a7 +0x161:  mov    %eax,0xc(%esp)
085f87ab +0x165:  mov    0x14(%ebp),%eax
085f87ae +0x168:  mov    %eax,0x8(%esp)
085f87b2 +0x16c:  movl   $"ROI regen Error : %d, %d, %d, %d",0x4(%esp)
085f87ba +0x174:  lea    -0x40(%ebp),%eax
085f87bd +0x177:  mov    %eax,(%esp)
085f87c0 +0x17a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085f87c5 +0x17f:  mov    $0x11,%ebx
085f87ca +0x184:  jmp    085f8c98 <+0x652>
085f87cf +0x189:  lea    -0x64(%ebp),%eax
085f87d2 +0x18c:  mov    %eax,(%esp)
085f87d5 +0x18f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085f87da +0x194:  cmpl   $0x0,0x14(%ebp)
085f87de +0x198:  je     085f87f9 <+0x1b3>
085f87e0 +0x19a:  lea    -0x64(%ebp),%eax
085f87e3 +0x19d:  mov    %eax,0x8(%esp)
085f87e7 +0x1a1:  mov    0x14(%ebp),%eax
085f87ea +0x1a4:  mov    %eax,0x4(%esp)
085f87ee +0x1a8:  mov    0x8(%ebp),%eax
085f87f1 +0x1ab:  mov    %eax,(%esp)
085f87f4 +0x1ae:  call   085f8ec2 <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE>  ; RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&)
085f87f9 +0x1b3:  cmpl   $0xffffffff,0x14(%ebp)
085f87fd +0x1b7:  jne    085f8809 <+0x1c3>
085f87ff +0x1b9:  mov    $0x11,%ebx
085f8804 +0x1be:  jmp    085f8c6d <+0x627>
085f8809 +0x1c3:  mov    -0x58(%ebp),%eax
085f880c +0x1c6:  lea    -0x64(%ebp),%edx
085f880f +0x1c9:  mov    %edx,0xc(%esp)
085f8813 +0x1cd:  mov    %eax,0x8(%esp)
085f8817 +0x1d1:  movl   $0x2,0x4(%esp)
085f881f +0x1d9:  movl   $&_ZZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,(%esp)
085f8826 +0x1e0:  call   085f1802 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE>  ; random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, std::vector<int, std::allocator<int> > const&)
085f882b +0x1e5:  mov    %eax,-0x24(%ebp)
085f882e +0x1e8:  movl   $"base item index : ",0x4(%esp)
085f8836 +0x1f0:  lea    -0x124(%ebp),%eax
085f883c +0x1f6:  add    $0x8,%eax
085f883f +0x1f9:  mov    %eax,(%esp)
085f8842 +0x1fc:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8847 +0x201:  mov    -0x24(%ebp),%edx
085f884a +0x204:  mov    %edx,0x4(%esp)
085f884e +0x208:  mov    %eax,(%esp)
085f8851 +0x20b:  call   086ffe30 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5c4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5c4
085f8856 +0x210:  movl   $"\n",0x4(%esp)
085f885e +0x218:  mov    %eax,(%esp)
085f8861 +0x21b:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8866 +0x220:  mov    -0x24(%ebp),%ebx
085f8869 +0x223:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085f886e +0x228:  mov    %ebx,0x4(%esp)
085f8872 +0x22c:  mov    %eax,(%esp)
085f8875 +0x22f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085f887a +0x234:  mov    %eax,-0x20(%ebp)
085f887d +0x237:  cmpl   $0x0,-0x20(%ebp)
085f8881 +0x23b:  jne    085f8908 <+0x2c2>
085f8887 +0x241:  movl   $"base item is Null\n",0x4(%esp)
085f888f +0x249:  lea    -0x124(%ebp),%eax
085f8895 +0x24f:  add    $0x8,%eax
085f8898 +0x252:  mov    %eax,(%esp)
085f889b +0x255:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f88a0 +0x25a:  lea    -0x30(%ebp),%eax
085f88a3 +0x25d:  lea    -0x124(%ebp),%edx
085f88a9 +0x263:  mov    %edx,0x4(%esp)
085f88ad +0x267:  mov    %eax,(%esp)
085f88b0 +0x26a:  call   08704950 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4
085f88b5 +0x26f:  sub    $0x4,%esp
085f88b8 +0x272:  lea    -0x30(%ebp),%eax
085f88bb +0x275:  mov    %eax,(%esp)
085f88be +0x278:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085f88c3 +0x27d:  mov    %eax,0x8(%esp)
085f88c7 +0x281:  mov    0x24(%ebp),%eax
085f88ca +0x284:  mov    %eax,0x4(%esp)
085f88ce +0x288:  mov    0x8(%ebp),%eax
085f88d1 +0x28b:  mov    %eax,(%esp)
085f88d4 +0x28e:  call   085f853c <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc>  ; RegenerationROI::SendMessageToCUser(CUser*, char const*)
085f88d9 +0x293:  jmp    085f88f3 <+0x2ad>
085f88db +0x295:  mov    %edx,%ebx
085f88dd +0x297:  mov    %eax,%esi
085f88df +0x299:  lea    -0x30(%ebp),%eax
085f88e2 +0x29c:  mov    %eax,(%esp)
085f88e5 +0x29f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f88ea +0x2a4:  mov    %esi,%eax
085f88ec +0x2a6:  mov    %ebx,%edx
085f88ee +0x2a8:  jmp    085f8c58 <+0x612>
085f88f3 +0x2ad:  lea    -0x30(%ebp),%eax
085f88f6 +0x2b0:  mov    %eax,(%esp)
085f88f9 +0x2b3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f88fe +0x2b8:  mov    $0x11,%ebx
085f8903 +0x2bd:  jmp    085f8c6d <+0x627>
085f8908 +0x2c2:  mov    -0x20(%ebp),%eax
085f890b +0x2c5:  mov    %eax,(%esp)
085f890e +0x2c8:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085f8913 +0x2cd:  mov    %al,-0x68(%ebp)
085f8916 +0x2d0:  mov    -0x20(%ebp),%eax
085f8919 +0x2d3:  mov    %eax,(%esp)
085f891c +0x2d6:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
085f8921 +0x2db:  mov    %ax,-0x66(%ebp)
085f8925 +0x2df:  mov    -0x20(%ebp),%eax
085f8928 +0x2e2:  mov    (%eax),%eax
085f892a +0x2e4:  add    $0x50,%eax
085f892d +0x2e7:  mov    (%eax),%edx
085f892f +0x2e9:  mov    -0x20(%ebp),%eax
085f8932 +0x2ec:  mov    %eax,(%esp)
085f8935 +0x2ef:  call   *%edx
085f8937 +0x2f1:  mov    %al,-0x67(%ebp)
085f893a +0x2f4:  movzbl -0x67(%ebp),%eax
085f893e +0x2f8:  movsbl %al,%ebx
085f8941 +0x2fb:  movzwl -0x66(%ebp),%eax
085f8945 +0x2ff:  movzwl %ax,%esi
085f8948 +0x302:  movzbl -0x68(%ebp),%eax
085f894c +0x306:  movsbl %al,%edi
085f894f +0x309:  movl   $"rarity : ",0x4(%esp)
085f8957 +0x311:  lea    -0x124(%ebp),%eax
085f895d +0x317:  add    $0x8,%eax
085f8960 +0x31a:  mov    %eax,(%esp)
085f8963 +0x31d:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8968 +0x322:  mov    %edi,0x4(%esp)
085f896c +0x326:  mov    %eax,(%esp)
085f896f +0x329:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f8974 +0x32e:  movl   $" level : ",0x4(%esp)
085f897c +0x336:  mov    %eax,(%esp)
085f897f +0x339:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8984 +0x33e:  mov    %esi,0x4(%esp)
085f8988 +0x342:  mov    %eax,(%esp)
085f898b +0x345:  call   086ffe10 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb5a4
085f8990 +0x34a:  movl   $" base item item : ",0x4(%esp)
085f8998 +0x352:  mov    %eax,(%esp)
085f899b +0x355:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f89a0 +0x35a:  mov    %ebx,0x4(%esp)
085f89a4 +0x35e:  mov    %eax,(%esp)
085f89a7 +0x361:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f89ac +0x366:  movl   $"\n",0x4(%esp)
085f89b4 +0x36e:  mov    %eax,(%esp)
085f89b7 +0x371:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f89bc +0x376:  mov    0x20(%ebp),%eax
085f89bf +0x379:  mov    %eax,(%esp)
085f89c2 +0x37c:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085f89c7 +0x381:  mov    0x20(%ebp),%eax
085f89ca +0x384:  mov    -0x24(%ebp),%edx
085f89cd +0x387:  mov    %edx,0x2(%eax)
085f89d0 +0x38a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085f89d5 +0x38f:  mov    0xc(%eax),%eax
085f89d8 +0x392:  movl   $0x1,0xc(%esp)
085f89e0 +0x39a:  mov    0x20(%ebp),%edx
085f89e3 +0x39d:  mov    %edx,0x8(%esp)
085f89e7 +0x3a1:  movl   $0x0,0x4(%esp)
085f89ef +0x3a9:  mov    %eax,(%esp)
085f89f2 +0x3ac:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085f89f7 +0x3b1:  mov    0x20(%ebp),%eax
085f89fa +0x3b4:  add    $0x25,%eax
085f89fd +0x3b7:  mov    %eax,-0x12c(%ebp)
085f8a03 +0x3bd:  mov    -0x20(%ebp),%eax
085f8a06 +0x3c0:  mov    (%eax),%eax
085f8a08 +0x3c2:  add    $0x50,%eax
085f8a0b +0x3c5:  mov    (%eax),%edx
085f8a0d +0x3c7:  mov    -0x20(%ebp),%eax
085f8a10 +0x3ca:  mov    %eax,(%esp)
085f8a13 +0x3cd:  call   *%edx
085f8a15 +0x3cf:  mov    %eax,%edi
085f8a17 +0x3d1:  mov    -0x20(%ebp),%eax
085f8a1a +0x3d4:  mov    %eax,(%esp)
085f8a1d +0x3d7:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
085f8a22 +0x3dc:  mov    %eax,%esi
085f8a24 +0x3de:  mov    -0x20(%ebp),%eax
085f8a27 +0x3e1:  mov    %eax,(%esp)
085f8a2a +0x3e4:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
085f8a2f +0x3e9:  mov    %eax,%ebx
085f8a31 +0x3eb:  mov    -0x20(%ebp),%eax
085f8a34 +0x3ee:  mov    %eax,(%esp)
085f8a37 +0x3f1:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085f8a3c +0x3f6:  mov    0x18(%ebp),%edx
085f8a3f +0x3f9:  mov    %edx,0x20(%esp)
085f8a43 +0x3fd:  mov    0x8(%ebp),%edx
085f8a46 +0x400:  mov    %edx,0x1c(%esp)
085f8a4a +0x404:  mov    -0x12c(%ebp),%edx
085f8a50 +0x40a:  mov    %edx,0x18(%esp)
085f8a54 +0x40e:  mov    %edi,0x14(%esp)
085f8a58 +0x412:  mov    %esi,0x10(%esp)
085f8a5c +0x416:  mov    %ebx,0xc(%esp)
085f8a60 +0x41a:  mov    %eax,0x8(%esp)
085f8a64 +0x41e:  mov    -0x24(%ebp),%eax
085f8a67 +0x421:  mov    %eax,0x4(%esp)
085f8a6b +0x425:  movl   $&_ZZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUserE6handle,(%esp)
085f8a72 +0x42c:  call   085f1bb0 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi>  ; random_option::CRandomOptionItemHandle::RegenVer_give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)
085f8a77 +0x431:  xor    $0x1,%eax
085f8a7a +0x434:  test   %al,%al
085f8a7c +0x436:  je     085f8b03 <+0x4bd>
085f8a82 +0x43c:  movl   $"give_option false\n",0x4(%esp)
085f8a8a +0x444:  lea    -0x124(%ebp),%eax
085f8a90 +0x44a:  add    $0x8,%eax
085f8a93 +0x44d:  mov    %eax,(%esp)
085f8a96 +0x450:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8a9b +0x455:  lea    -0x2c(%ebp),%eax
085f8a9e +0x458:  lea    -0x124(%ebp),%edx
085f8aa4 +0x45e:  mov    %edx,0x4(%esp)
085f8aa8 +0x462:  mov    %eax,(%esp)
085f8aab +0x465:  call   08704950 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4
085f8ab0 +0x46a:  sub    $0x4,%esp
085f8ab3 +0x46d:  lea    -0x2c(%ebp),%eax
085f8ab6 +0x470:  mov    %eax,(%esp)
085f8ab9 +0x473:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085f8abe +0x478:  mov    %eax,0x8(%esp)
085f8ac2 +0x47c:  mov    0x24(%ebp),%eax
085f8ac5 +0x47f:  mov    %eax,0x4(%esp)
085f8ac9 +0x483:  mov    0x8(%ebp),%eax
085f8acc +0x486:  mov    %eax,(%esp)
085f8acf +0x489:  call   085f853c <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc>  ; RegenerationROI::SendMessageToCUser(CUser*, char const*)
085f8ad4 +0x48e:  jmp    085f8aee <+0x4a8>
085f8ad6 +0x490:  mov    %edx,%ebx
085f8ad8 +0x492:  mov    %eax,%esi
085f8ada +0x494:  lea    -0x2c(%ebp),%eax
085f8add +0x497:  mov    %eax,(%esp)
085f8ae0 +0x49a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f8ae5 +0x49f:  mov    %esi,%eax
085f8ae7 +0x4a1:  mov    %ebx,%edx
085f8ae9 +0x4a3:  jmp    085f8c58 <+0x612>
085f8aee +0x4a8:  lea    -0x2c(%ebp),%eax
085f8af1 +0x4ab:  mov    %eax,(%esp)
085f8af4 +0x4ae:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f8af9 +0x4b3:  mov    $0x13,%ebx
085f8afe +0x4b8:  jmp    085f8c6d <+0x627>
085f8b03 +0x4bd:  movl   $0x0,-0x1c(%ebp)
085f8b0a +0x4c4:  jmp    085f8be7 <+0x5a1>
085f8b0f +0x4c9:  mov    -0x1c(%ebp),%edx
085f8b12 +0x4cc:  mov    0x20(%ebp),%ecx
085f8b15 +0x4cf:  mov    %edx,%eax
085f8b17 +0x4d1:  add    %eax,%eax
085f8b19 +0x4d3:  add    %edx,%eax
085f8b1b +0x4d5:  lea    (%ecx,%eax,1),%eax
085f8b1e +0x4d8:  add    $0x27,%eax
085f8b21 +0x4db:  movzbl (%eax),%eax
085f8b24 +0x4de:  movzbl %al,%ebx
085f8b27 +0x4e1:  mov    -0x1c(%ebp),%edx
085f8b2a +0x4e4:  mov    0x20(%ebp),%ecx
085f8b2d +0x4e7:  mov    %edx,%eax
085f8b2f +0x4e9:  add    %eax,%eax
085f8b31 +0x4eb:  add    %edx,%eax
085f8b33 +0x4ed:  lea    (%ecx,%eax,1),%eax
085f8b36 +0x4f0:  add    $0x26,%eax
085f8b39 +0x4f3:  movzbl (%eax),%eax
085f8b3c +0x4f6:  movzbl %al,%esi
085f8b3f +0x4f9:  mov    -0x1c(%ebp),%edx
085f8b42 +0x4fc:  mov    0x20(%ebp),%ecx
085f8b45 +0x4ff:  mov    %edx,%eax
085f8b47 +0x501:  add    %eax,%eax
085f8b49 +0x503:  add    %edx,%eax
085f8b4b +0x505:  lea    (%ecx,%eax,1),%eax
085f8b4e +0x508:  add    $0x25,%eax
085f8b51 +0x50b:  movzbl (%eax),%eax
085f8b54 +0x50e:  movzbl %al,%edi
085f8b57 +0x511:  movl   $"[",0x4(%esp)
085f8b5f +0x519:  lea    -0x124(%ebp),%eax
085f8b65 +0x51f:  add    $0x8,%eax
085f8b68 +0x522:  mov    %eax,(%esp)
085f8b6b +0x525:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8b70 +0x52a:  mov    -0x1c(%ebp),%edx
085f8b73 +0x52d:  mov    %edx,0x4(%esp)
085f8b77 +0x531:  mov    %eax,(%esp)
085f8b7a +0x534:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f8b7f +0x539:  movl   $"] :",0x4(%esp)
085f8b87 +0x541:  mov    %eax,(%esp)
085f8b8a +0x544:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8b8f +0x549:  mov    %edi,0x4(%esp)
085f8b93 +0x54d:  mov    %eax,(%esp)
085f8b96 +0x550:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f8b9b +0x555:  movl   $":",0x4(%esp)
085f8ba3 +0x55d:  mov    %eax,(%esp)
085f8ba6 +0x560:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8bab +0x565:  mov    %esi,0x4(%esp)
085f8baf +0x569:  mov    %eax,(%esp)
085f8bb2 +0x56c:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f8bb7 +0x571:  movl   $":",0x4(%esp)
085f8bbf +0x579:  mov    %eax,(%esp)
085f8bc2 +0x57c:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8bc7 +0x581:  mov    %ebx,0x4(%esp)
085f8bcb +0x585:  mov    %eax,(%esp)
085f8bce +0x588:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f8bd3 +0x58d:  movl   $"\n",0x4(%esp)
085f8bdb +0x595:  mov    %eax,(%esp)
085f8bde +0x598:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f8be3 +0x59d:  addl   $0x1,-0x1c(%ebp)
085f8be7 +0x5a1:  cmpl   $0x2,-0x1c(%ebp)
085f8beb +0x5a5:  setle  %al
085f8bee +0x5a8:  test   %al,%al
085f8bf0 +0x5aa:  jne    085f8b0f <+0x4c9>
085f8bf6 +0x5b0:  lea    -0x28(%ebp),%eax
085f8bf9 +0x5b3:  lea    -0x124(%ebp),%edx
085f8bff +0x5b9:  mov    %edx,0x4(%esp)
085f8c03 +0x5bd:  mov    %eax,(%esp)
085f8c06 +0x5c0:  call   08704950 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x100e4
085f8c0b +0x5c5:  sub    $0x4,%esp
085f8c0e +0x5c8:  lea    -0x28(%ebp),%eax
085f8c11 +0x5cb:  mov    %eax,(%esp)
085f8c14 +0x5ce:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085f8c19 +0x5d3:  mov    %eax,0x8(%esp)
085f8c1d +0x5d7:  mov    0x24(%ebp),%eax
085f8c20 +0x5da:  mov    %eax,0x4(%esp)
085f8c24 +0x5de:  mov    0x8(%ebp),%eax
085f8c27 +0x5e1:  mov    %eax,(%esp)
085f8c2a +0x5e4:  call   085f853c <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc>  ; RegenerationROI::SendMessageToCUser(CUser*, char const*)
085f8c2f +0x5e9:  jmp    085f8c46 <+0x600>
085f8c31 +0x5eb:  mov    %edx,%ebx
085f8c33 +0x5ed:  mov    %eax,%esi
085f8c35 +0x5ef:  lea    -0x28(%ebp),%eax
085f8c38 +0x5f2:  mov    %eax,(%esp)
085f8c3b +0x5f5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f8c40 +0x5fa:  mov    %esi,%eax
085f8c42 +0x5fc:  mov    %ebx,%edx
085f8c44 +0x5fe:  jmp    085f8c58 <+0x612>
085f8c46 +0x600:  lea    -0x28(%ebp),%eax
085f8c49 +0x603:  mov    %eax,(%esp)
085f8c4c +0x606:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f8c51 +0x60b:  mov    $0x0,%ebx
085f8c56 +0x610:  jmp    085f8c6d <+0x627>
085f8c58 +0x612:  mov    %edx,%ebx
085f8c5a +0x614:  mov    %eax,%esi
085f8c5c +0x616:  lea    -0x64(%ebp),%eax
085f8c5f +0x619:  mov    %eax,(%esp)
085f8c62 +0x61c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085f8c67 +0x621:  mov    %esi,%eax
085f8c69 +0x623:  mov    %ebx,%edx
085f8c6b +0x625:  jmp    085f8c7a <+0x634>
085f8c6d +0x627:  lea    -0x64(%ebp),%eax
085f8c70 +0x62a:  mov    %eax,(%esp)
085f8c73 +0x62d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085f8c78 +0x632:  jmp    085f8c98 <+0x652>
085f8c7a +0x634:  mov    %edx,%ebx
085f8c7c +0x636:  mov    %eax,%esi
085f8c7e +0x638:  lea    -0x124(%ebp),%eax
085f8c84 +0x63e:  mov    %eax,(%esp)
085f8c87 +0x641:  call   08703dc0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554
085f8c8c +0x646:  mov    %esi,%eax
085f8c8e +0x648:  mov    %ebx,%edx
085f8c90 +0x64a:  mov    %eax,(%esp)
085f8c93 +0x64d:  call   08ae3750 <_Unwind_Resume>
085f8c98 +0x652:  lea    -0x124(%ebp),%eax
085f8c9e +0x658:  mov    %eax,(%esp)
085f8ca1 +0x65b:  call   08703dc0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xf554
085f8ca6 +0x660:  mov    %ebx,%eax
085f8ca8 +0x662:  lea    -0xc(%ebp),%esp
085f8cab +0x665:  add    $0x0,%esp
085f8cae +0x668:  pop    %ebx
085f8caf +0x669:  pop    %esi
085f8cb0 +0x66a:  pop    %edi
085f8cb1 +0x66b:  pop    %ebp
085f8cb2 +0x66c:  ret
085f8cb3 +0x66d:  nop
```

## 反编译 C

```c
// RegenerationROI::Regenerate @ 0x85f8646

/* RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*) */

undefined4 __thiscall
RegenerationROI::Regenerate
          (RegenerationROI *this,int param_1,int param_2,int param_3,int param_4,int *param_5,
          Inven_Item *param_6,CUser *param_7)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  ushort uVar4;
  ulong uVar5;
  char cVar6;
  _Ios_Openmode _Var7;
  int iVar8;
  int iVar9;
  ostream *poVar10;
  CDataManager *this_00;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  stringstream local_128 [8];
  ostream aoStack_120 [180];
  char local_6c;
  char local_6b;
  ushort local_6a;
  vector<int,std::allocator<int>> local_68 [12];
  undefined4 local_5c [6];
  cMyTrace local_44 [16];
  string local_34 [4];
  string local_30 [4];
  string local_2c [4];
  ulong local_28;
  CItem *local_24;
  int local_20;
  
  _Var7 = std::operator|(_S_out,_S_in);
  std::stringstream::stringstream(local_128,_Var7);
  select_base_item::select_base_item((select_base_item *)local_5c);
                    /* try { // try from 085f86a8 to 085f86ac has its CatchHandler @ 085f8c7a */
  _RandomLevel(this,param_1,param_2,(select_base_item *)local_5c,local_128);
  if (Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle == '\0') {
    iVar8 = __cxa_guard_acquire(&Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle);
    if (iVar8 != 0) {
                    /* try { // try from 085f86da to 085f86de has its CatchHandler @ 085f870a */
      random_option::CRandomOptionItemHandle::CRandomOptionItemHandle
                ((CRandomOptionItemHandle *)
                 Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle);
      __cxa_guard_release(&Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle);
      __cxa_atexit(random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle,
                   Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle,&__dso_handle);
    }
  }
  if ((param_4 == 0) || (param_4 == 0x65)) {
    iVar8 = param_2;
                    /* try { // try from 085f875f to 085f87d9 has its CatchHandler @ 085f8c7a */
    iVar9 = _Calculate_RegenCost((int)this,param_3,param_4,param_1);
    *param_5 = iVar9;
    if (*param_5 == -1) {
      cMyTrace::cMyTrace(local_44,
                         "int RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*)"
                         ,0x47,5);
      cMyTrace::operator()
                (local_44,"ROI regen Error : %d, %d, %d, %d",param_3,param_4,param_1,param_2);
      uVar15 = 0x11;
    }
    else {
      std::vector<int,std::allocator<int>>::vector(local_68);
      if (param_3 != 0) {
                    /* try { // try from 085f87f4 to 085f88b4 has its CatchHandler @ 085f8c58 */
        _Select_Part(this,param_3,(vector *)local_68);
      }
      if (param_3 == -1) {
        uVar15 = 0x11;
      }
      else {
        local_28 = random_option::CRandomOptionItemHandle::RegenVer_choose_item
                             ((CRandomOptionItemHandle *)
                              Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle,2,
                              local_5c[0],local_68,iVar8);
        poVar10 = std::operator<<(aoStack_120,"base item index : ");
        poVar10 = (ostream *)std::ostream::operator<<(poVar10,local_28);
        std::operator<<(poVar10,"\n");
        uVar5 = local_28;
        this_00 = (CDataManager *)G_CDataManager();
        local_24 = (CItem *)CDataManager::find_item(this_00,uVar5);
        if (local_24 == (CItem *)0x0) {
          std::operator<<(aoStack_120,"base item is Null\n");
          std::stringstream::str();
                    /* try { // try from 085f88be to 085f88d8 has its CatchHandler @ 085f88db */
          pcVar11 = (char *)std::string::c_str(local_34);
          SendMessageToCUser(this,param_7,pcVar11);
                    /* try { // try from 085f88f9 to 085f8aaf has its CatchHandler @ 085f8c58 */
          std::string::~string(local_34);
          uVar15 = 0x11;
        }
        else {
          local_6c = CItem::get_rarity(local_24);
          local_6a = CItem::getUsableLevel(local_24);
          local_6b = (**(code **)(*(int *)local_24 + 0x50))(local_24);
          uVar4 = local_6a;
          iVar8 = (int)local_6b;
          iVar9 = (int)local_6c;
          poVar10 = std::operator<<(aoStack_120,"rarity : ");
          poVar10 = (ostream *)std::ostream::operator<<(poVar10,iVar9);
          poVar10 = std::operator<<(poVar10," level : ");
          poVar10 = (ostream *)std::ostream::operator<<(poVar10,uVar4);
          poVar10 = std::operator<<(poVar10," base item item : ");
          poVar10 = (ostream *)std::ostream::operator<<(poVar10,iVar8);
          std::operator<<(poVar10,"\n");
          Inven_Item::reset(param_6);
          *(ulong *)(param_6 + 2) = local_28;
          iVar8 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar8 + 0xc),0,param_6,1);
          uVar15 = (**(code **)(*(int *)local_24 + 0x50))(local_24);
          uVar12 = CItem::getItemGroupName(local_24);
          uVar13 = CItem::getUsableLevel(local_24);
          uVar14 = CItem::get_rarity(local_24);
          cVar6 = random_option::CRandomOptionItemHandle::RegenVer_give_option
                            (Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle,local_28,
                             uVar14,uVar13,uVar12,uVar15,param_6 + 0x25,this,param_4);
          if (cVar6 == '\x01') {
            for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
              IVar1 = param_6[local_20 * 3 + 0x27];
              IVar2 = param_6[local_20 * 3 + 0x26];
              IVar3 = param_6[local_20 * 3 + 0x25];
              poVar10 = std::operator<<(aoStack_120,"[");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,local_20);
              poVar10 = std::operator<<(poVar10,"] :");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,(uint)(byte)IVar3);
              poVar10 = std::operator<<(poVar10,":");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,(uint)(byte)IVar2);
              poVar10 = std::operator<<(poVar10,":");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,(uint)(byte)IVar1);
              std::operator<<(poVar10,"\n");
            }
            std::stringstream::str();
                    /* try { // try from 085f8c14 to 085f8c2e has its CatchHandler @ 085f8c31 */
            pcVar11 = (char *)std::string::c_str(local_2c);
            SendMessageToCUser(this,param_7,pcVar11);
                    /* try { // try from 085f8c4c to 085f8c50 has its CatchHandler @ 085f8c58 */
            std::string::~string(local_2c);
            uVar15 = 0;
          }
          else {
            std::operator<<(aoStack_120,"give_option false\n");
            std::stringstream::str();
                    /* try { // try from 085f8ab9 to 085f8ad3 has its CatchHandler @ 085f8ad6 */
            pcVar11 = (char *)std::string::c_str(local_30);
            SendMessageToCUser(this,param_7,pcVar11);
                    /* try { // try from 085f8af4 to 085f8c0a has its CatchHandler @ 085f8c58 */
            std::string::~string(local_30);
            uVar15 = 0x13;
          }
        }
      }
                    /* try { // try from 085f8c73 to 085f8c77 has its CatchHandler @ 085f8c7a */
      std::vector<int,std::allocator<int>>::~vector(local_68);
    }
  }
  else {
    uVar15 = 0x11;
  }
  std::stringstream::~stringstream(local_128);
  return uVar15;
}
```
