# dispatch

`_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream`

`DB_AvatarChangeStat::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarChangeStat` | `0x0840065e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840065e  _ZN19DB_AvatarChangeStat8dispatchEiiP6Stream
#           DB_AvatarChangeStat::dispatch(int, int, Stream*)
# range [0x0840065e, 0x08400cc1]
0840065e +0x000:  push   %ebp
0840065f +0x001:  mov    %esp,%ebp
08400661 +0x003:  push   %esi
08400662 +0x004:  push   %ebx
08400663 +0x005:  add    $0xffffff80,%esp
08400666 +0x008:  mov    0x14(%ebp),%eax
08400669 +0x00b:  mov    %eax,(%esp)
0840066c +0x00e:  call   08450482 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3098>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3098
08400671 +0x013:  mov    %eax,-0x1c(%ebp)
08400674 +0x016:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08400679 +0x01b:  movl   $0x0,0x8(%esp)
08400681 +0x023:  movl   $0x3,0x4(%esp)
08400689 +0x02b:  mov    %eax,(%esp)
0840068c +0x02e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08400691 +0x033:  mov    %eax,-0x18(%ebp)
08400694 +0x036:  mov    -0x1c(%ebp),%eax
08400697 +0x039:  mov    0x9(%eax),%esi
0840069a +0x03c:  mov    -0x1c(%ebp),%eax
0840069d +0x03f:  mov    (%eax),%ecx
0840069f +0x041:  mov    -0x1c(%ebp),%eax
084006a2 +0x044:  movzbl 0x8(%eax),%eax
084006a6 +0x048:  movzbl %al,%edx
084006a9 +0x04b:  mov    -0x1c(%ebp),%eax
084006ac +0x04e:  mov    0x4(%eax),%eax
084006af +0x051:  mov    %esi,0x14(%esp)
084006b3 +0x055:  mov    %ecx,0x10(%esp)
084006b7 +0x059:  mov    %edx,0xc(%esp)
084006bb +0x05d:  mov    %eax,0x8(%esp)
084006bf +0x061:  movl   $"upDate user_items set stat=%d,slot=%d where ui_id=%d and charac_no=%d",0x4(%esp)
084006c7 +0x069:  mov    -0x18(%ebp),%eax
084006ca +0x06c:  mov    %eax,(%esp)
084006cd +0x06f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084006d2 +0x074:  movl   $0x1,0x4(%esp)
084006da +0x07c:  mov    -0x18(%ebp),%eax
084006dd +0x07f:  mov    %eax,(%esp)
084006e0 +0x082:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084006e5 +0x087:  xor    $0x1,%eax
084006e8 +0x08a:  test   %al,%al
084006ea +0x08c:  je     084006f6 <+0x98>
084006ec +0x08e:  mov    $0x0,%ebx
084006f1 +0x093:  jmp    08400cb9 <+0x65b>
084006f6 +0x098:  mov    -0x1c(%ebp),%eax
084006f9 +0x09b:  mov    0x4(%eax),%eax
084006fc +0x09e:  test   %eax,%eax
084006fe +0x0a0:  jne    08400cb4 <+0x656>
08400704 +0x0a6:  mov    -0x1c(%ebp),%eax
08400707 +0x0a9:  mov    (%eax),%edx
08400709 +0x0ab:  mov    -0x1c(%ebp),%eax
0840070c +0x0ae:  mov    0x9(%eax),%eax
0840070f +0x0b1:  mov    %edx,0xc(%esp)
08400713 +0x0b5:  mov    %eax,0x8(%esp)
08400717 +0x0b9:  movl   $"seLect slot,ui_id,it_id,unix_timestamp(reg_date),unix_timestamp(expire_date),ability_no,ipg_agency_no,jewel_socket,hidden_option,emblem_endurance from user_items where charac_no=%u and ui_id=%d",0x4(%esp)
0840071f +0x0c1:  mov    -0x18(%ebp),%eax
08400722 +0x0c4:  mov    %eax,(%esp)
08400725 +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840072a +0x0cc:  movl   $0x1,0x4(%esp)
08400732 +0x0d4:  mov    -0x18(%ebp),%eax
08400735 +0x0d7:  mov    %eax,(%esp)
08400738 +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840073d +0x0df:  xor    $0x1,%eax
08400740 +0x0e2:  test   %al,%al
08400742 +0x0e4:  je     0840074e <+0xf0>
08400744 +0x0e6:  mov    $0x0,%ebx
08400749 +0x0eb:  jmp    08400cb9 <+0x65b>
0840074e +0x0f0:  mov    -0x18(%ebp),%eax
08400751 +0x0f3:  mov    %eax,(%esp)
08400754 +0x0f6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08400759 +0x0fb:  xor    $0x1,%eax
0840075c +0x0fe:  test   %al,%al
0840075e +0x100:  je     0840076a <+0x10c>
08400760 +0x102:  mov    $0x0,%ebx
08400765 +0x107:  jmp    08400cb9 <+0x65b>
0840076a +0x10c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0840076f +0x111:  movl   $0xbe2,0x8(%esp)
08400777 +0x119:  movl   $"DBThread.cpp",0x4(%esp)
0840077f +0x121:  mov    %eax,(%esp)
08400782 +0x124:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08400787 +0x129:  movl   $0x1,0x8(%esp)
0840078f +0x131:  mov    %eax,0x4(%esp)
08400793 +0x135:  lea    -0x24(%ebp),%eax
08400796 +0x138:  mov    %eax,(%esp)
08400799 +0x13b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840079e +0x140:  lea    -0x24(%ebp),%eax
084007a1 +0x143:  mov    %eax,(%esp)
084007a4 +0x146:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084007a9 +0x14b:  movl   $0x36,0x4(%esp)
084007b1 +0x153:  mov    %eax,(%esp)
084007b4 +0x156:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084007b9 +0x15b:  lea    -0x24(%ebp),%eax
084007bc +0x15e:  mov    %eax,(%esp)
084007bf +0x161:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084007c4 +0x166:  mov    0x10(%ebp),%edx
084007c7 +0x169:  mov    %edx,0x4(%esp)
084007cb +0x16d:  mov    %eax,(%esp)
084007ce +0x170:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084007d3 +0x175:  lea    -0x24(%ebp),%eax
084007d6 +0x178:  mov    %eax,(%esp)
084007d9 +0x17b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084007de +0x180:  mov    %eax,(%esp)
084007e1 +0x183:  call   084504d6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x30ec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x30ec
084007e6 +0x188:  mov    %eax,-0x14(%ebp)
084007e9 +0x18b:  movl   $0x0,-0x28(%ebp)
084007f0 +0x192:  movl   $0x0,-0x2c(%ebp)
084007f7 +0x199:  movl   $0x0,-0x30(%ebp)
084007fe +0x1a0:  movl   $0x0,-0x34(%ebp)
08400805 +0x1a7:  movl   $0x0,-0x38(%ebp)
0840080c +0x1ae:  movl   $0x0,-0x3c(%ebp)
08400813 +0x1b5:  movl   $0x0,-0x60(%ebp)
0840081a +0x1bc:  movl   $0x0,-0x10(%ebp)
08400821 +0x1c3:  lea    -0x28(%ebp),%eax
08400824 +0x1c6:  mov    %eax,0x8(%esp)
08400828 +0x1ca:  movl   $0x0,0x4(%esp)
08400830 +0x1d2:  mov    -0x18(%ebp),%eax
08400833 +0x1d5:  mov    %eax,(%esp)
08400836 +0x1d8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840083b +0x1dd:  xor    $0x1,%eax
0840083e +0x1e0:  test   %al,%al
08400840 +0x1e2:  je     0840086e <+0x210>
08400842 +0x1e4:  movl   $0x4,(%esp)
08400849 +0x1eb:  call   08725800 <__cxa_allocate_exception>
0840084e +0x1f0:  mov    %eax,%edx
08400850 +0x1f2:  movl   $0xbf2,(%edx)
08400856 +0x1f8:  movl   $0x0,0x8(%esp)
0840085e +0x200:  movl   $&_ZTIi,0x4(%esp)
08400866 +0x208:  mov    %eax,(%esp)
08400869 +0x20b:  call   08724c50 <__cxa_throw>
0840086e +0x210:  lea    -0x2c(%ebp),%eax
08400871 +0x213:  mov    %eax,0x8(%esp)
08400875 +0x217:  movl   $0x1,0x4(%esp)
0840087d +0x21f:  mov    -0x18(%ebp),%eax
08400880 +0x222:  mov    %eax,(%esp)
08400883 +0x225:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08400888 +0x22a:  xor    $0x1,%eax
0840088b +0x22d:  test   %al,%al
0840088d +0x22f:  je     084008bb <+0x25d>
0840088f +0x231:  movl   $0x4,(%esp)
08400896 +0x238:  call   08725800 <__cxa_allocate_exception>
0840089b +0x23d:  mov    %eax,%edx
0840089d +0x23f:  movl   $0xbf3,(%edx)
084008a3 +0x245:  movl   $0x0,0x8(%esp)
084008ab +0x24d:  movl   $&_ZTIi,0x4(%esp)
084008b3 +0x255:  mov    %eax,(%esp)
084008b6 +0x258:  call   08724c50 <__cxa_throw>
084008bb +0x25d:  lea    -0x30(%ebp),%eax
084008be +0x260:  mov    %eax,0x8(%esp)
084008c2 +0x264:  movl   $0x2,0x4(%esp)
084008ca +0x26c:  mov    -0x18(%ebp),%eax
084008cd +0x26f:  mov    %eax,(%esp)
084008d0 +0x272:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084008d5 +0x277:  xor    $0x1,%eax
084008d8 +0x27a:  test   %al,%al
084008da +0x27c:  je     08400908 <+0x2aa>
084008dc +0x27e:  movl   $0x4,(%esp)
084008e3 +0x285:  call   08725800 <__cxa_allocate_exception>
084008e8 +0x28a:  mov    %eax,%edx
084008ea +0x28c:  movl   $0xbf4,(%edx)
084008f0 +0x292:  movl   $0x0,0x8(%esp)
084008f8 +0x29a:  movl   $&_ZTIi,0x4(%esp)
08400900 +0x2a2:  mov    %eax,(%esp)
08400903 +0x2a5:  call   08724c50 <__cxa_throw>
08400908 +0x2aa:  lea    -0x38(%ebp),%eax
0840090b +0x2ad:  mov    %eax,0x8(%esp)
0840090f +0x2b1:  movl   $0x3,0x4(%esp)
08400917 +0x2b9:  mov    -0x18(%ebp),%eax
0840091a +0x2bc:  mov    %eax,(%esp)
0840091d +0x2bf:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08400922 +0x2c4:  xor    $0x1,%eax
08400925 +0x2c7:  test   %al,%al
08400927 +0x2c9:  je     08400955 <+0x2f7>
08400929 +0x2cb:  movl   $0x4,(%esp)
08400930 +0x2d2:  call   08725800 <__cxa_allocate_exception>
08400935 +0x2d7:  mov    %eax,%edx
08400937 +0x2d9:  movl   $0xbf5,(%edx)
0840093d +0x2df:  movl   $0x0,0x8(%esp)
08400945 +0x2e7:  movl   $&_ZTIi,0x4(%esp)
0840094d +0x2ef:  mov    %eax,(%esp)
08400950 +0x2f2:  call   08724c50 <__cxa_throw>
08400955 +0x2f7:  lea    -0x3c(%ebp),%eax
08400958 +0x2fa:  mov    %eax,0x8(%esp)
0840095c +0x2fe:  movl   $0x4,0x4(%esp)
08400964 +0x306:  mov    -0x18(%ebp),%eax
08400967 +0x309:  mov    %eax,(%esp)
0840096a +0x30c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840096f +0x311:  xor    $0x1,%eax
08400972 +0x314:  test   %al,%al
08400974 +0x316:  je     084009a2 <+0x344>
08400976 +0x318:  movl   $0x4,(%esp)
0840097d +0x31f:  call   08725800 <__cxa_allocate_exception>
08400982 +0x324:  mov    %eax,%edx
08400984 +0x326:  movl   $0xbf6,(%edx)
0840098a +0x32c:  movl   $0x0,0x8(%esp)
08400992 +0x334:  movl   $&_ZTIi,0x4(%esp)
0840099a +0x33c:  mov    %eax,(%esp)
0840099d +0x33f:  call   08724c50 <__cxa_throw>
084009a2 +0x344:  lea    -0x34(%ebp),%eax
084009a5 +0x347:  mov    %eax,0x8(%esp)
084009a9 +0x34b:  movl   $0x5,0x4(%esp)
084009b1 +0x353:  mov    -0x18(%ebp),%eax
084009b4 +0x356:  mov    %eax,(%esp)
084009b7 +0x359:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084009bc +0x35e:  xor    $0x1,%eax
084009bf +0x361:  test   %al,%al
084009c1 +0x363:  je     084009ef <+0x391>
084009c3 +0x365:  movl   $0x4,(%esp)
084009ca +0x36c:  call   08725800 <__cxa_allocate_exception>
084009cf +0x371:  mov    %eax,%edx
084009d1 +0x373:  movl   $0xbf7,(%edx)
084009d7 +0x379:  movl   $0x0,0x8(%esp)
084009df +0x381:  movl   $&_ZTIi,0x4(%esp)
084009e7 +0x389:  mov    %eax,(%esp)
084009ea +0x38c:  call   08724c50 <__cxa_throw>
084009ef +0x391:  mov    -0x14(%ebp),%eax
084009f2 +0x394:  add    $0x12,%eax
084009f5 +0x397:  movl   $0x18,0xc(%esp)
084009fd +0x39f:  mov    %eax,0x8(%esp)
08400a01 +0x3a3:  movl   $0x6,0x4(%esp)
08400a09 +0x3ab:  mov    -0x18(%ebp),%eax
08400a0c +0x3ae:  mov    %eax,(%esp)
08400a0f +0x3b1:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08400a14 +0x3b6:  xor    $0x1,%eax
08400a17 +0x3b9:  test   %al,%al
08400a19 +0x3bb:  je     08400a47 <+0x3e9>
08400a1b +0x3bd:  movl   $0x4,(%esp)
08400a22 +0x3c4:  call   08725800 <__cxa_allocate_exception>
08400a27 +0x3c9:  mov    %eax,%edx
08400a29 +0x3cb:  movl   $0xbf9,(%edx)
08400a2f +0x3d1:  movl   $0x0,0x8(%esp)
08400a37 +0x3d9:  movl   $&_ZTIi,0x4(%esp)
08400a3f +0x3e1:  mov    %eax,(%esp)
08400a42 +0x3e4:  call   08724c50 <__cxa_throw>
08400a47 +0x3e9:  lea    -0x5a(%ebp),%eax
08400a4a +0x3ec:  mov    %eax,(%esp)
08400a4d +0x3ef:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
08400a52 +0x3f4:  movl   $0x1e,0xc(%esp)
08400a5a +0x3fc:  lea    -0x5a(%ebp),%eax
08400a5d +0x3ff:  mov    %eax,0x8(%esp)
08400a61 +0x403:  movl   $0x7,0x4(%esp)
08400a69 +0x40b:  mov    -0x18(%ebp),%eax
08400a6c +0x40e:  mov    %eax,(%esp)
08400a6f +0x411:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08400a74 +0x416:  xor    $0x1,%eax
08400a77 +0x419:  test   %al,%al
08400a79 +0x41b:  je     08400a8a <+0x42c>
08400a7b +0x41d:  mov    $0x0,%ebx
08400a80 +0x422:  mov    $0x0,%esi
08400a85 +0x427:  jmp    08400ca5 <+0x647>
08400a8a +0x42c:  lea    -0x60(%ebp),%eax
08400a8d +0x42f:  mov    %eax,0x8(%esp)
08400a91 +0x433:  movl   $0x8,0x4(%esp)
08400a99 +0x43b:  mov    -0x18(%ebp),%eax
08400a9c +0x43e:  mov    %eax,(%esp)
08400a9f +0x441:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08400aa4 +0x446:  xor    $0x1,%eax
08400aa7 +0x449:  test   %al,%al
08400aa9 +0x44b:  je     08400ad7 <+0x479>
08400aab +0x44d:  movl   $0x4,(%esp)
08400ab2 +0x454:  call   08725800 <__cxa_allocate_exception>
08400ab7 +0x459:  mov    %eax,%edx
08400ab9 +0x45b:  movl   $0xc00,(%edx)
08400abf +0x461:  movl   $0x0,0x8(%esp)
08400ac7 +0x469:  movl   $&_ZTIi,0x4(%esp)
08400acf +0x471:  mov    %eax,(%esp)
08400ad2 +0x474:  call   08724c50 <__cxa_throw>
08400ad7 +0x479:  movw   $0x0,-0x62(%ebp)
08400add +0x47f:  movw   $0x0,-0x64(%ebp)
08400ae3 +0x485:  lea    -0x62(%ebp),%eax
08400ae6 +0x488:  mov    %eax,0x8(%esp)
08400aea +0x48c:  movl   $0x8,0x4(%esp)
08400af2 +0x494:  mov    -0x18(%ebp),%eax
08400af5 +0x497:  mov    %eax,(%esp)
08400af8 +0x49a:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08400afd +0x49f:  xor    $0x1,%eax
08400b00 +0x4a2:  test   %al,%al
08400b02 +0x4a4:  je     08400b30 <+0x4d2>
08400b04 +0x4a6:  movl   $0x4,(%esp)
08400b0b +0x4ad:  call   08725800 <__cxa_allocate_exception>
08400b10 +0x4b2:  mov    %eax,%edx
08400b12 +0x4b4:  movl   $0xc07,(%edx)
08400b18 +0x4ba:  movl   $0x0,0x8(%esp)
08400b20 +0x4c2:  movl   $&_ZTIi,0x4(%esp)
08400b28 +0x4ca:  mov    %eax,(%esp)
08400b2b +0x4cd:  call   08724c50 <__cxa_throw>
08400b30 +0x4d2:  lea    -0x64(%ebp),%eax
08400b33 +0x4d5:  mov    %eax,0x8(%esp)
08400b37 +0x4d9:  movl   $0x9,0x4(%esp)
08400b3f +0x4e1:  mov    -0x18(%ebp),%eax
08400b42 +0x4e4:  mov    %eax,(%esp)
08400b45 +0x4e7:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08400b4a +0x4ec:  xor    $0x1,%eax
08400b4d +0x4ef:  test   %al,%al
08400b4f +0x4f1:  je     08400b7d <+0x51f>
08400b51 +0x4f3:  movl   $0x4,(%esp)
08400b58 +0x4fa:  call   08725800 <__cxa_allocate_exception>
08400b5d +0x4ff:  mov    %eax,%edx
08400b5f +0x501:  movl   $0xc08,(%edx)
08400b65 +0x507:  movl   $0x0,0x8(%esp)
08400b6d +0x50f:  movl   $&_ZTIi,0x4(%esp)
08400b75 +0x517:  mov    %eax,(%esp)
08400b78 +0x51a:  call   08724c50 <__cxa_throw>
08400b7d +0x51f:  movzwl -0x62(%ebp),%edx
08400b81 +0x523:  mov    -0x14(%ebp),%eax
08400b84 +0x526:  mov    %dx,0x4d(%eax)
08400b88 +0x52a:  movzwl -0x64(%ebp),%edx
08400b8c +0x52e:  mov    -0x14(%ebp),%eax
08400b8f +0x531:  mov    %dx,0x4f(%eax)
08400b93 +0x535:  mov    -0x28(%ebp),%eax
08400b96 +0x538:  mov    %eax,%edx
08400b98 +0x53a:  mov    -0x14(%ebp),%eax
08400b9b +0x53d:  mov    %dl,0x8(%eax)
08400b9e +0x540:  mov    -0x2c(%ebp),%eax
08400ba1 +0x543:  mov    %eax,%edx
08400ba3 +0x545:  mov    -0x14(%ebp),%eax
08400ba6 +0x548:  mov    %edx,(%eax)
08400ba8 +0x54a:  mov    -0x30(%ebp),%eax
08400bab +0x54d:  mov    %eax,%edx
08400bad +0x54f:  mov    -0x14(%ebp),%eax
08400bb0 +0x552:  mov    %edx,0x4(%eax)
08400bb3 +0x555:  mov    -0x38(%ebp),%edx
08400bb6 +0x558:  mov    -0x14(%ebp),%eax
08400bb9 +0x55b:  mov    %edx,0xa(%eax)
08400bbc +0x55e:  mov    -0x3c(%ebp),%edx
08400bbf +0x561:  mov    -0x14(%ebp),%eax
08400bc2 +0x564:  mov    %edx,0xe(%eax)
08400bc5 +0x567:  mov    -0x34(%ebp),%eax
08400bc8 +0x56a:  mov    %eax,%edx
08400bca +0x56c:  mov    -0x14(%ebp),%eax
08400bcd +0x56f:  mov    %dl,0x9(%eax)
08400bd0 +0x572:  mov    -0x14(%ebp),%eax
08400bd3 +0x575:  mov    -0x5a(%ebp),%edx
08400bd6 +0x578:  mov    %edx,0x2f(%eax)
08400bd9 +0x57b:  mov    -0x56(%ebp),%edx
08400bdc +0x57e:  mov    %edx,0x33(%eax)
08400bdf +0x581:  mov    -0x52(%ebp),%edx
08400be2 +0x584:  mov    %edx,0x37(%eax)
08400be5 +0x587:  mov    -0x4e(%ebp),%edx
08400be8 +0x58a:  mov    %edx,0x3b(%eax)
08400beb +0x58d:  mov    -0x4a(%ebp),%edx
08400bee +0x590:  mov    %edx,0x3f(%eax)
08400bf1 +0x593:  mov    -0x46(%ebp),%edx
08400bf4 +0x596:  mov    %edx,0x43(%eax)
08400bf7 +0x599:  mov    -0x42(%ebp),%edx
08400bfa +0x59c:  mov    %edx,0x47(%eax)
08400bfd +0x59f:  movzwl -0x3e(%ebp),%edx
08400c01 +0x5a3:  mov    %dx,0x4b(%eax)
08400c05 +0x5a7:  mov    -0x60(%ebp),%eax
08400c08 +0x5aa:  mov    %eax,%edx
08400c0a +0x5ac:  mov    -0x14(%ebp),%eax
08400c0d +0x5af:  mov    %dx,0x2b(%eax)
08400c11 +0x5b3:  mov    -0x10(%ebp),%eax
08400c14 +0x5b6:  mov    %eax,%edx
08400c16 +0x5b8:  mov    -0x14(%ebp),%eax
08400c19 +0x5bb:  mov    %dx,0x2d(%eax)
08400c1d +0x5bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08400c22 +0x5c4:  lea    -0x24(%ebp),%edx
08400c25 +0x5c7:  mov    %edx,0x8(%esp)
08400c29 +0x5cb:  movl   $0x1,0x4(%esp)
08400c31 +0x5d3:  mov    %eax,(%esp)
08400c34 +0x5d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08400c39 +0x5db:  jmp    08400c83 <+0x625>
08400c3b +0x5dd:  cmp    $0x1,%edx
08400c3e +0x5e0:  jne    08400c8a <+0x62c>
08400c40 +0x5e2:  mov    %eax,(%esp)
08400c43 +0x5e5:  call   08725ce0 <__cxa_begin_catch>
08400c48 +0x5ea:  mov    (%eax),%eax
08400c4a +0x5ec:  mov    %eax,-0xc(%ebp)
08400c4d +0x5ef:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08400c52 +0x5f4:  lea    -0x24(%ebp),%edx
08400c55 +0x5f7:  mov    %edx,0x4(%esp)
08400c59 +0x5fb:  mov    %eax,(%esp)
08400c5c +0x5fe:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08400c61 +0x603:  mov    $0x0,%ebx
08400c66 +0x608:  call   08725c30 <__cxa_end_catch>
08400c6b +0x60d:  jmp    08400c7c <+0x61e>
08400c6d +0x60f:  mov    %edx,%ebx
08400c6f +0x611:  mov    %eax,%esi
08400c71 +0x613:  call   08725c30 <__cxa_end_catch>
08400c76 +0x618:  mov    %esi,%eax
08400c78 +0x61a:  mov    %ebx,%edx
08400c7a +0x61c:  jmp    08400c8a <+0x62c>
08400c7c +0x61e:  mov    $0x0,%esi
08400c81 +0x623:  jmp    08400ca5 <+0x647>
08400c83 +0x625:  mov    $0x1,%esi
08400c88 +0x62a:  jmp    08400ca5 <+0x647>
08400c8a +0x62c:  mov    %edx,%ebx
08400c8c +0x62e:  mov    %eax,%esi
08400c8e +0x630:  lea    -0x24(%ebp),%eax
08400c91 +0x633:  mov    %eax,(%esp)
08400c94 +0x636:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08400c99 +0x63b:  mov    %esi,%eax
08400c9b +0x63d:  mov    %ebx,%edx
08400c9d +0x63f:  mov    %eax,(%esp)
08400ca0 +0x642:  call   08ae3750 <_Unwind_Resume>
08400ca5 +0x647:  lea    -0x24(%ebp),%eax
08400ca8 +0x64a:  mov    %eax,(%esp)
08400cab +0x64d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08400cb0 +0x652:  test   %esi,%esi
08400cb2 +0x654:  je     08400cb9 <+0x65b>
08400cb4 +0x656:  mov    $0x1,%ebx
08400cb9 +0x65b:  mov    %ebx,%eax
08400cbb +0x65d:  sub    $0xffffff80,%esp
08400cbe +0x660:  pop    %ebx
08400cbf +0x661:  pop    %esi
08400cc0 +0x662:  pop    %ebp
08400cc1 +0x663:  ret
```

## 反编译 C

```c
// DB_AvatarChangeStat::dispatch @ 0x840065e

/* DB_AvatarChangeStat::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AvatarChangeStat::dispatch(DB_AvatarChangeStat *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  undefined4 uVar7;
  short local_68;
  short local_66;
  int local_64;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined2 local_42;
  uint local_40;
  uint local_3c [5];
  CStreamGuard local_28 [8];
  SIG_AVATAR_CHANGE_STAT *local_20;
  MySQL *local_1c;
  SIG_AVATAR_CHANGE_STAT *local_18;
  undefined4 local_14;
  
  local_20 = Stream::GetOutBuffer<SIG_AVATAR_CHANGE_STAT>(param_3);
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar7 = *(undefined4 *)(local_20 + 9);
  uVar6 = *(undefined4 *)local_20;
  MySQL::set_query(local_1c,"upDate user_items set stat=%d,slot=%d where ui_id=%d and charac_no=%d",
                   *(undefined4 *)(local_20 + 4),(uint)(byte)local_20[8],uVar6,uVar7);
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  if (*(int *)(local_20 + 4) == 0) {
    MySQL::set_query(local_1c,
                     "seLect slot,ui_id,it_id,unix_timestamp(reg_date),unix_timestamp(expire_date),ability_no,ipg_agency_no,jewel_socket,hidden_option,emblem_endurance from user_items where charac_no=%u and ui_id=%d"
                     ,*(undefined4 *)(local_20 + 9),*(undefined4 *)local_20,uVar6,uVar7);
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::fetch(local_1c);
    if (cVar2 != '\x01') {
      return 0;
    }
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbe2);
    CStreamGuard::CStreamGuard(local_28,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 084007b4 to 084007e5 has its CatchHandler @ 08400c8a */
    CStreamGuard::operator<<(pCVar4,0x36);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_18 = CStreamGuard::GetInBuffer<SIG_AVATAR_CHANGE_STAT>(pCVar4);
    local_3c[4] = 0;
    local_3c[3] = 0;
    local_3c[2] = 0;
    local_3c[1] = 0;
    local_3c[0] = 0;
    local_40 = 0;
    local_64 = 0;
    local_14 = 0;
    cVar2 = MySQL::get_int(local_1c,0,(int *)(local_3c + 4));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf2;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08400869 to 08400c38 has its CatchHandler @ 08400c3b */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_1c,1,(int *)(local_3c + 3));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_1c,2,(int *)(local_3c + 2));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_uint(local_1c,3,local_3c);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_uint(local_1c,4,&local_40);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf6;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_1c,5,(int *)(local_3c + 1));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_str(local_1c,6,(char *)(local_18 + 0x12),0x18);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf9;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)&local_5e);
    cVar2 = MySQL::get_binary(local_1c,7,&local_5e,0x1e);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_int(local_1c,8,&local_64);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 0xc00;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
      local_66 = 0;
      local_68 = 0;
      cVar2 = MySQL::get_short(local_1c,8,&local_66);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 0xc07;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
      cVar2 = MySQL::get_short(local_1c,9,&local_68);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 0xc08;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
      *(short *)(local_18 + 0x4d) = local_66;
      *(short *)(local_18 + 0x4f) = local_68;
      local_18[8] = SUB41(local_3c[4],0);
      *(uint *)local_18 = local_3c[3];
      *(uint *)(local_18 + 4) = local_3c[2];
      *(uint *)(local_18 + 10) = local_3c[0];
      *(uint *)(local_18 + 0xe) = local_40;
      local_18[9] = SUB41(local_3c[1],0);
      *(undefined4 *)(local_18 + 0x2f) = local_5e;
      *(undefined4 *)(local_18 + 0x33) = local_5a;
      *(undefined4 *)(local_18 + 0x37) = local_56;
      *(undefined4 *)(local_18 + 0x3b) = local_52;
      *(undefined4 *)(local_18 + 0x3f) = local_4e;
      *(undefined4 *)(local_18 + 0x43) = local_4a;
      *(undefined4 *)(local_18 + 0x47) = local_46;
      *(undefined2 *)(local_18 + 0x4b) = local_42;
      *(short *)(local_18 + 0x2b) = (short)local_64;
      *(short *)(local_18 + 0x2d) = (short)local_14;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
      bVar1 = true;
    }
    else {
      unaff_EBX = 0;
      bVar1 = false;
    }
    CStreamGuard::~CStreamGuard(local_28);
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  return 1;
}
```
