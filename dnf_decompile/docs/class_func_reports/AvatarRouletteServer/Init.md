# Init

`_ZN20AvatarRouletteServer4InitEP14AvatarRoulette`

`AvatarRouletteServer::Init(AvatarRoulette*)`

| 类 | 地址 |
|---|---|
| `AvatarRouletteServer` | `0x0817f706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817f706  _ZN20AvatarRouletteServer4InitEP14AvatarRoulette
#           AvatarRouletteServer::Init(AvatarRoulette*)
# range [0x0817f706, 0x0817fb09]
0817f706 +0x000:  push   %ebp
0817f707 +0x001:  mov    %esp,%ebp
0817f709 +0x003:  push   %edi
0817f70a +0x004:  push   %esi
0817f70b +0x005:  push   %ebx
0817f70c +0x006:  sub    $0x6c,%esp
0817f70f +0x009:  movl   $0x11c,(%esp)
0817f716 +0x010:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0817f71b +0x015:  mov    %eax,%ebx
0817f71d +0x017:  mov    %ebx,%eax
0817f71f +0x019:  mov    %eax,(%esp)
0817f722 +0x01c:  call   08911b98 <_ZN14AvatarRouletteC1Ev>  ; AvatarRoulette::AvatarRoulette()
0817f727 +0x021:  jmp    0817f741 <+0x3b>
0817f729 +0x023:  mov    %edx,%esi
0817f72b +0x025:  mov    %eax,%edi
0817f72d +0x027:  mov    %ebx,(%esp)
0817f730 +0x02a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0817f735 +0x02f:  mov    %edi,%eax
0817f737 +0x031:  mov    %esi,%edx
0817f739 +0x033:  mov    %eax,(%esp)
0817f73c +0x036:  call   08ae3750 <_Unwind_Resume>
0817f741 +0x03b:  mov    %ebx,%edx
0817f743 +0x03d:  mov    0x8(%ebp),%eax
0817f746 +0x040:  mov    %edx,0x18(%eax)
0817f749 +0x043:  mov    0x8(%ebp),%eax
0817f74c +0x046:  mov    0x18(%eax),%eax
0817f74f +0x049:  mov    0xc(%ebp),%edx
0817f752 +0x04c:  mov    %edx,0x4(%esp)
0817f756 +0x050:  mov    %eax,(%esp)
0817f759 +0x053:  call   08911e4e <_ZN14AvatarRoulette4swapEPS_>  ; AvatarRoulette::swap(AvatarRoulette*)
0817f75e +0x058:  mov    0x8(%ebp),%eax
0817f761 +0x05b:  mov    0x18(%eax),%eax
0817f764 +0x05e:  mov    0xc(%eax),%edx
0817f767 +0x061:  mov    0x8(%ebp),%eax
0817f76a +0x064:  mov    0x18(%eax),%eax
0817f76d +0x067:  mov    0x10(%eax),%eax
0817f770 +0x06a:  add    %eax,%edx
0817f772 +0x06c:  mov    0x8(%ebp),%eax
0817f775 +0x06f:  mov    %edx,0x1c(%eax)
0817f778 +0x072:  movb   $0x1,-0x45(%ebp)
0817f77c +0x076:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0817f781 +0x07b:  movzbl 0x310(%eax),%eax
0817f788 +0x082:  test   %al,%al
0817f78a +0x084:  je     0817fafc <+0x3f6>
0817f790 +0x08a:  movl   $0x0,-0x44(%ebp)
0817f797 +0x091:  jmp    0817faed <+0x3e7>
0817f79c +0x096:  mov    0x8(%ebp),%eax
0817f79f +0x099:  mov    0x18(%eax),%ecx
0817f7a2 +0x09c:  mov    -0x44(%ebp),%edx
0817f7a5 +0x09f:  mov    %edx,%eax
0817f7a7 +0x0a1:  add    %eax,%eax
0817f7a9 +0x0a3:  add    %edx,%eax
0817f7ab +0x0a5:  shl    $0x2,%eax
0817f7ae +0x0a8:  add    $0x10,%eax
0817f7b1 +0x0ab:  lea    (%ecx,%eax,1),%eax
0817f7b4 +0x0ae:  add    $0x4,%eax
0817f7b7 +0x0b1:  mov    %eax,-0x40(%ebp)
0817f7ba +0x0b4:  mov    -0x40(%ebp),%eax
0817f7bd +0x0b7:  mov    %eax,(%esp)
0817f7c0 +0x0ba:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
0817f7c5 +0x0bf:  movl   $0x0,-0x3c(%ebp)
0817f7cc +0x0c6:  mov    -0x40(%ebp),%eax
0817f7cf +0x0c9:  mov    %eax,(%esp)
0817f7d2 +0x0cc:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
0817f7d7 +0x0d1:  mov    %eax,-0x38(%ebp)
0817f7da +0x0d4:  jmp    0817fad8 <+0x3d2>
0817f7df +0x0d9:  mov    -0x3c(%ebp),%eax
0817f7e2 +0x0dc:  mov    %eax,0x4(%esp)
0817f7e6 +0x0e0:  mov    -0x40(%ebp),%eax
0817f7e9 +0x0e3:  mov    %eax,(%esp)
0817f7ec +0x0e6:  call   08180782 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x419>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x419
0817f7f1 +0x0eb:  mov    %eax,-0x34(%ebp)
0817f7f4 +0x0ee:  movl   $0x0,-0x30(%ebp)
0817f7fb +0x0f5:  jmp    0817fac5 <+0x3bf>
0817f800 +0x0fa:  mov    -0x30(%ebp),%eax
0817f803 +0x0fd:  mov    %eax,0x4(%esp)
0817f807 +0x101:  mov    -0x34(%ebp),%eax
0817f80a +0x104:  mov    %eax,(%esp)
0817f80d +0x107:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f812 +0x10c:  mov    (%eax),%eax
0817f814 +0x10e:  mov    %eax,%ebx
0817f816 +0x110:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0817f81b +0x115:  mov    %ebx,0x4(%esp)
0817f81f +0x119:  mov    %eax,(%esp)
0817f822 +0x11c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0817f827 +0x121:  mov    %eax,-0x2c(%ebp)
0817f82a +0x124:  cmpl   $0x0,-0x2c(%ebp)
0817f82e +0x128:  jne    0817f878 <+0x172>
0817f830 +0x12a:  mov    -0x30(%ebp),%eax
0817f833 +0x12d:  mov    %eax,0x4(%esp)
0817f837 +0x131:  mov    -0x34(%ebp),%eax
0817f83a +0x134:  mov    %eax,(%esp)
0817f83d +0x137:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f842 +0x13c:  mov    (%eax),%eax
0817f844 +0x13e:  mov    %eax,0x14(%esp)
0817f848 +0x142:  movl   $"AvatarRouletteServer not exist item_no(%d)",0x10(%esp)
0817f850 +0x14a:  movl   $0x80,0xc(%esp)
0817f858 +0x152:  movl   $&_ZZN20AvatarRouletteServer4InitEP14AvatarRouletteE19__PRETTY_FUNCTION__,0x8(%esp)
0817f860 +0x15a:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817f868 +0x162:  movl   $0x1,(%esp)
0817f86f +0x169:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817f874 +0x16e:  movb   $0x0,-0x45(%ebp)
0817f878 +0x172:  mov    -0x2c(%ebp),%eax
0817f87b +0x175:  mov    (%eax),%eax
0817f87d +0x177:  add    $0x10,%eax
0817f880 +0x17a:  mov    (%eax),%edx
0817f882 +0x17c:  mov    -0x2c(%ebp),%eax
0817f885 +0x17f:  mov    %eax,(%esp)
0817f888 +0x182:  call   *%edx
0817f88a +0x184:  xor    $0x1,%eax
0817f88d +0x187:  test   %al,%al
0817f88f +0x189:  je     0817f8d9 <+0x1d3>
0817f891 +0x18b:  mov    -0x30(%ebp),%eax
0817f894 +0x18e:  mov    %eax,0x4(%esp)
0817f898 +0x192:  mov    -0x34(%ebp),%eax
0817f89b +0x195:  mov    %eax,(%esp)
0817f89e +0x198:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f8a3 +0x19d:  mov    (%eax),%eax
0817f8a5 +0x19f:  mov    %eax,0x14(%esp)
0817f8a9 +0x1a3:  movl   $"AvatarRouletteServer no avatar item_no(%d)",0x10(%esp)
0817f8b1 +0x1ab:  movl   $0x86,0xc(%esp)
0817f8b9 +0x1b3:  movl   $&_ZZN20AvatarRouletteServer4InitEP14AvatarRouletteE19__PRETTY_FUNCTION__,0x8(%esp)
0817f8c1 +0x1bb:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817f8c9 +0x1c3:  movl   $0x1,(%esp)
0817f8d0 +0x1ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817f8d5 +0x1cf:  movb   $0x0,-0x45(%ebp)
0817f8d9 +0x1d3:  mov    -0x2c(%ebp),%eax
0817f8dc +0x1d6:  mov    %eax,-0x28(%ebp)
0817f8df +0x1d9:  mov    -0x44(%ebp),%eax
0817f8e2 +0x1dc:  movsbl %al,%edx
0817f8e5 +0x1df:  mov    -0x28(%ebp),%eax
0817f8e8 +0x1e2:  mov    %edx,0x4(%esp)
0817f8ec +0x1e6:  mov    %eax,(%esp)
0817f8ef +0x1e9:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
0817f8f4 +0x1ee:  xor    $0x1,%eax
0817f8f7 +0x1f1:  test   %al,%al
0817f8f9 +0x1f3:  je     0817f94a <+0x244>
0817f8fb +0x1f5:  mov    -0x30(%ebp),%eax
0817f8fe +0x1f8:  mov    %eax,0x4(%esp)
0817f902 +0x1fc:  mov    -0x34(%ebp),%eax
0817f905 +0x1ff:  mov    %eax,(%esp)
0817f908 +0x202:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f90d +0x207:  mov    (%eax),%eax
0817f90f +0x209:  mov    -0x44(%ebp),%edx
0817f912 +0x20c:  mov    %edx,0x18(%esp)
0817f916 +0x210:  mov    %eax,0x14(%esp)
0817f91a +0x214:  movl   $"AvatarRouletteServer item_no(%d) check_job_type(%d)==false",0x10(%esp)
0817f922 +0x21c:  movl   $0x8d,0xc(%esp)
0817f92a +0x224:  movl   $&_ZZN20AvatarRouletteServer4InitEP14AvatarRouletteE19__PRETTY_FUNCTION__,0x8(%esp)
0817f932 +0x22c:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817f93a +0x234:  movl   $0x1,(%esp)
0817f941 +0x23b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817f946 +0x240:  movb   $0x0,-0x45(%ebp)
0817f94a +0x244:  mov    -0x28(%ebp),%eax
0817f94d +0x247:  mov    (%eax),%eax
0817f94f +0x249:  add    $0xc,%eax
0817f952 +0x24c:  mov    (%eax),%edx
0817f954 +0x24e:  mov    -0x28(%ebp),%eax
0817f957 +0x251:  mov    %eax,(%esp)
0817f95a +0x254:  call   *%edx
0817f95c +0x256:  mov    %eax,-0x24(%ebp)
0817f95f +0x259:  mov    -0x24(%ebp),%eax
0817f962 +0x25c:  cmp    -0x30(%ebp),%eax
0817f965 +0x25f:  je     0817f9bd <+0x2b7>
0817f967 +0x261:  mov    -0x30(%ebp),%eax
0817f96a +0x264:  mov    %eax,0x4(%esp)
0817f96e +0x268:  mov    -0x34(%ebp),%eax
0817f971 +0x26b:  mov    %eax,(%esp)
0817f974 +0x26e:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f979 +0x273:  mov    (%eax),%eax
0817f97b +0x275:  mov    -0x30(%ebp),%edx
0817f97e +0x278:  mov    %edx,0x1c(%esp)
0817f982 +0x27c:  mov    -0x24(%ebp),%edx
0817f985 +0x27f:  mov    %edx,0x18(%esp)
0817f989 +0x283:  mov    %eax,0x14(%esp)
0817f98d +0x287:  movl   $"AvatarRouletteServer item_no(%d) GetItemType(%d)!=%d",0x10(%esp)
0817f995 +0x28f:  movl   $0x95,0xc(%esp)
0817f99d +0x297:  movl   $&_ZZN20AvatarRouletteServer4InitEP14AvatarRouletteE19__PRETTY_FUNCTION__,0x8(%esp)
0817f9a5 +0x29f:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817f9ad +0x2a7:  movl   $0x1,(%esp)
0817f9b4 +0x2ae:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817f9b9 +0x2b3:  movb   $0x0,-0x45(%ebp)
0817f9bd +0x2b7:  cmpl   $0x8,-0x30(%ebp)
0817f9c1 +0x2bb:  je     0817fac0 <+0x3ba>
0817f9c7 +0x2c1:  mov    -0x28(%ebp),%eax
0817f9ca +0x2c4:  mov    %eax,(%esp)
0817f9cd +0x2c7:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0817f9d2 +0x2cc:  mov    %eax,-0x20(%ebp)
0817f9d5 +0x2cf:  movl   $0x0,-0x1c(%ebp)
0817f9dc +0x2d6:  cmpl   $0x1,-0x3c(%ebp)
0817f9e0 +0x2da:  ja     0817fa4e <+0x348>
0817f9e2 +0x2dc:  cmpl   $0x2,-0x20(%ebp)
0817f9e6 +0x2e0:  je     0817fa4e <+0x348>
0817f9e8 +0x2e2:  movl   $0x2,-0x1c(%ebp)
0817f9ef +0x2e9:  mov    -0x30(%ebp),%eax
0817f9f2 +0x2ec:  mov    %eax,0x4(%esp)
0817f9f6 +0x2f0:  mov    -0x34(%ebp),%eax
0817f9f9 +0x2f3:  mov    %eax,(%esp)
0817f9fc +0x2f6:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817fa01 +0x2fb:  mov    (%eax),%eax
0817fa03 +0x2fd:  mov    -0x3c(%ebp),%edx
0817fa06 +0x300:  mov    %edx,0x20(%esp)
0817fa0a +0x304:  mov    -0x1c(%ebp),%edx
0817fa0d +0x307:  mov    %edx,0x1c(%esp)
0817fa11 +0x30b:  mov    -0x20(%ebp),%edx
0817fa14 +0x30e:  mov    %edx,0x18(%esp)
0817fa18 +0x312:  mov    %eax,0x14(%esp)
0817fa1c +0x316:  movl   $"AvatarRouletteServer item_no(%d) get_grade(%d)!=%d, line_num(%d)",0x10(%esp)
0817fa24 +0x31e:  movl   $0xa3,0xc(%esp)
0817fa2c +0x326:  movl   $&_ZZN20AvatarRouletteServer4InitEP14AvatarRouletteE19__PRETTY_FUNCTION__,0x8(%esp)
0817fa34 +0x32e:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817fa3c +0x336:  movl   $0x1,(%esp)
0817fa43 +0x33d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817fa48 +0x342:  movb   $0x0,-0x45(%ebp)
0817fa4c +0x346:  jmp    0817fac1 <+0x3bb>
0817fa4e +0x348:  cmpl   $0x1,-0x3c(%ebp)
0817fa52 +0x34c:  jbe    0817fac1 <+0x3bb>
0817fa54 +0x34e:  cmpl   $0x1,-0x20(%ebp)
0817fa58 +0x352:  je     0817fac1 <+0x3bb>
0817fa5a +0x354:  movl   $0x1,-0x1c(%ebp)
0817fa61 +0x35b:  mov    -0x30(%ebp),%eax
0817fa64 +0x35e:  mov    %eax,0x4(%esp)
0817fa68 +0x362:  mov    -0x34(%ebp),%eax
0817fa6b +0x365:  mov    %eax,(%esp)
0817fa6e +0x368:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817fa73 +0x36d:  mov    (%eax),%eax
0817fa75 +0x36f:  mov    -0x3c(%ebp),%edx
0817fa78 +0x372:  mov    %edx,0x20(%esp)
0817fa7c +0x376:  mov    -0x1c(%ebp),%edx
0817fa7f +0x379:  mov    %edx,0x1c(%esp)
0817fa83 +0x37d:  mov    -0x20(%ebp),%edx
0817fa86 +0x380:  mov    %edx,0x18(%esp)
0817fa8a +0x384:  mov    %eax,0x14(%esp)
0817fa8e +0x388:  movl   $"AvatarRouletteServer item_no(%d) get_grade(%d)!=%d, line_num(%d)",0x10(%esp)
0817fa96 +0x390:  movl   $0xa9,0xc(%esp)
0817fa9e +0x398:  movl   $&_ZZN20AvatarRouletteServer4InitEP14AvatarRouletteE19__PRETTY_FUNCTION__,0x8(%esp)
0817faa6 +0x3a0:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817faae +0x3a8:  movl   $0x1,(%esp)
0817fab5 +0x3af:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817faba +0x3b4:  movb   $0x0,-0x45(%ebp)
0817fabe +0x3b8:  jmp    0817fac1 <+0x3bb>
0817fac0 +0x3ba:  nop
0817fac1 +0x3bb:  addl   $0x1,-0x30(%ebp)
0817fac5 +0x3bf:  cmpl   $0x8,-0x30(%ebp)
0817fac9 +0x3c3:  setle  %al
0817facc +0x3c6:  test   %al,%al
0817face +0x3c8:  jne    0817f800 <+0xfa>
0817fad4 +0x3ce:  addl   $0x1,-0x3c(%ebp)
0817fad8 +0x3d2:  mov    -0x3c(%ebp),%eax
0817fadb +0x3d5:  cmp    -0x38(%ebp),%eax
0817fade +0x3d8:  setb   %al
0817fae1 +0x3db:  test   %al,%al
0817fae3 +0x3dd:  jne    0817f7df <+0xd9>
0817fae9 +0x3e3:  addl   $0x1,-0x44(%ebp)
0817faed +0x3e7:  cmpl   $0xa,-0x44(%ebp)
0817faf1 +0x3eb:  setle  %al
0817faf4 +0x3ee:  test   %al,%al
0817faf6 +0x3f0:  jne    0817f79c <+0x96>
0817fafc +0x3f6:  mov    $0x1,%eax
0817fb01 +0x3fb:  add    $0x6c,%esp
0817fb04 +0x3fe:  pop    %ebx
0817fb05 +0x3ff:  pop    %esi
0817fb06 +0x400:  pop    %edi
0817fb07 +0x401:  pop    %ebp
0817fb08 +0x402:  ret
0817fb09 +0x403:  nop
```

## 反编译 C

```c
// AvatarRouletteServer::Init @ 0x817f706

/* AvatarRouletteServer::Init(AvatarRoulette*) */

undefined4 __thiscall AvatarRouletteServer::Init(AvatarRouletteServer *this,AvatarRoulette *param_1)

{
  char cVar1;
  AvatarRoulette *this_00;
  int iVar2;
  vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
  *this_01;
  uint uVar3;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *this_02;
  int *piVar4;
  CDataManager *this_03;
  CItem *this_04;
  undefined4 *puVar5;
  uint uVar6;
  int local_48;
  uint local_40;
  uint local_34;
  
  this_00 = operator_new(0x11c);
                    /* try { // try from 0817f722 to 0817f726 has its CatchHandler @ 0817f729 */
  AvatarRoulette::AvatarRoulette(this_00);
  *(AvatarRoulette **)(this + 0x18) = this_00;
  AvatarRoulette::swap(*(AvatarRoulette **)(this + 0x18),param_1);
  *(int *)(this + 0x1c) =
       *(int *)(*(int *)(this + 0x18) + 0xc) + *(int *)(*(int *)(this + 0x18) + 0x10);
  iVar2 = G_CEnvironment();
  if (*(char *)(iVar2 + 0x310) != '\0') {
    for (local_48 = 0; local_48 < 0xb; local_48 = local_48 + 1) {
      this_01 = (vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                 *)(*(int *)(this + 0x18) + local_48 * 0xc + 0x14);
      std::
      vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
      ::size(this_01);
      local_40 = 0;
      uVar3 = std::
              vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
              ::size(this_01);
      for (; local_40 < uVar3; local_40 = local_40 + 1) {
        this_02 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                   *)std::
                     vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                     ::operator[](this_01,local_40);
        for (local_34 = 0; (int)local_34 < 9; local_34 = local_34 + 1) {
          piVar4 = (int *)std::
                          vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                          ::operator[](this_02,local_34);
          iVar2 = *piVar4;
          this_03 = (CDataManager *)G_CDataManager();
          this_04 = (CItem *)CDataManager::find_item(this_03,iVar2);
          if (this_04 == (CItem *)0x0) {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x80,
                       "AvatarRouletteServer not exist item_no(%d)",*puVar5);
          }
          cVar1 = (**(code **)(*(int *)this_04 + 0x10))(this_04);
          if (cVar1 != '\x01') {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x86,
                       "AvatarRouletteServer no avatar item_no(%d)",*puVar5);
          }
          cVar1 = CItem::check_job_type(this_04,(char)local_48);
          if (cVar1 != '\x01') {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x8d,
                       "AvatarRouletteServer item_no(%d) check_job_type(%d)==false",*puVar5,local_48
                      );
          }
          uVar6 = (**(code **)(*(int *)this_04 + 0xc))(this_04);
          if (uVar6 != local_34) {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x95,
                       "AvatarRouletteServer item_no(%d) GetItemType(%d)!=%d",*puVar5,uVar6,local_34
                      );
          }
          if (local_34 != 8) {
            iVar2 = CItem::get_grade(this_04);
            if ((local_40 < 2) && (iVar2 != 2)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                       ::operator[](this_02,local_34);
              LogManager::logFormat
                        (1,"localjapan/Arad_AvatarRoulette.cpp",
                         "bool AvatarRouletteServer::Init(AvatarRoulette*)",0xa3,
                         "AvatarRouletteServer item_no(%d) get_grade(%d)!=%d, line_num(%d)",*puVar5,
                         iVar2,2,local_40);
            }
            else if ((1 < local_40) && (iVar2 != 1)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                       ::operator[](this_02,local_34);
              LogManager::logFormat
                        (1,"localjapan/Arad_AvatarRoulette.cpp",
                         "bool AvatarRouletteServer::Init(AvatarRoulette*)",0xa9,
                         "AvatarRouletteServer item_no(%d) get_grade(%d)!=%d, line_num(%d)",*puVar5,
                         iVar2,1,local_40);
            }
          }
        }
      }
    }
  }
  return 1;
}
```
