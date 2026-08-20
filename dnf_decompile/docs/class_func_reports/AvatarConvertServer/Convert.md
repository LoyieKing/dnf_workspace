# Convert

`_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE`

`AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x081926de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081926de  _ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE
#           AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)
# range [0x081926de, 0x081930b9]
081926de +0x000:  push   %ebp
081926df +0x001:  mov    %esp,%ebp
081926e1 +0x003:  push   %edi
081926e2 +0x004:  push   %esi
081926e3 +0x005:  push   %ebx
081926e4 +0x006:  sub    $0x14c,%esp
081926ea +0x00c:  mov    0x10(%ebp),%eax
081926ed +0x00f:  mov    0x4(%eax),%eax
081926f0 +0x012:  mov    %eax,%ebx
081926f2 +0x014:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081926f7 +0x019:  mov    %ebx,0x4(%esp)
081926fb +0x01d:  mov    %eax,(%esp)
081926fe +0x020:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08192703 +0x025:  mov    %eax,-0x4c(%ebp)
08192706 +0x028:  cmpl   $0x0,-0x4c(%ebp)
0819270a +0x02c:  je     08192725 <+0x47>
0819270c +0x02e:  mov    -0x4c(%ebp),%eax
0819270f +0x031:  mov    (%eax),%eax
08192711 +0x033:  add    $0x10,%eax
08192714 +0x036:  mov    (%eax),%edx
08192716 +0x038:  mov    -0x4c(%ebp),%eax
08192719 +0x03b:  mov    %eax,(%esp)
0819271c +0x03e:  call   *%edx
0819271e +0x040:  xor    $0x1,%eax
08192721 +0x043:  test   %al,%al
08192723 +0x045:  je     0819272c <+0x4e>
08192725 +0x047:  mov    $0x1,%eax
0819272a +0x04c:  jmp    08192731 <+0x53>
0819272c +0x04e:  mov    $0x0,%eax
08192731 +0x053:  test   %al,%al
08192733 +0x055:  je     0819275c <+0x7e>
08192735 +0x057:  mov    0x10(%ebp),%eax
08192738 +0x05a:  mov    0x4(%eax),%eax
0819273b +0x05d:  mov    %eax,0x8(%esp)
0819273f +0x061:  mov    0xc(%ebp),%eax
08192742 +0x064:  mov    %eax,0x4(%esp)
08192746 +0x068:  movl   $"AVATAR CONVERT",(%esp)
0819274d +0x06f:  call   08197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>  ; ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
08192752 +0x074:  mov    $0x0,%ebx
08192757 +0x079:  jmp    081930ac <+0x9ce>
0819275c +0x07e:  mov    -0x4c(%ebp),%eax
0819275f +0x081:  mov    %eax,(%esp)
08192762 +0x084:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08192767 +0x089:  mov    %eax,-0x48(%ebp)
0819276a +0x08c:  mov    -0x4c(%ebp),%eax
0819276d +0x08f:  mov    %eax,-0x44(%ebp)
08192770 +0x092:  mov    -0x44(%ebp),%eax
08192773 +0x095:  mov    (%eax),%eax
08192775 +0x097:  add    $0xc,%eax
08192778 +0x09a:  mov    (%eax),%edx
0819277a +0x09c:  mov    -0x44(%ebp),%eax
0819277d +0x09f:  mov    %eax,(%esp)
08192780 +0x0a2:  call   *%edx
08192782 +0x0a4:  cmp    $0x9,%eax
08192785 +0x0a7:  sete   %al
08192788 +0x0aa:  test   %al,%al
0819278a +0x0ac:  je     08192793 <+0xb5>
0819278c +0x0ae:  movl   $0x3,-0x48(%ebp)
08192793 +0x0b5:  mov    0x10(%ebp),%eax
08192796 +0x0b8:  movzwl (%eax),%eax
08192799 +0x0bb:  movzwl %ax,%eax
0819279c +0x0be:  mov    %eax,-0x40(%ebp)
0819279f +0x0c1:  mov    0x8(%ebp),%eax
081927a2 +0x0c4:  lea    0x4(%eax),%edx
081927a5 +0x0c7:  mov    -0x48(%ebp),%eax
081927a8 +0x0ca:  mov    %eax,0x4(%esp)
081927ac +0x0ce:  mov    %edx,(%esp)
081927af +0x0d1:  call   088b1e48 <_ZN4ARAD6SCRIPT13AvatarConvert16getConvertResultEi>  ; ARAD::SCRIPT::AvatarConvert::getConvertResult(int)
081927b4 +0x0d6:  mov    %eax,-0x3c(%ebp)
081927b7 +0x0d9:  mov    -0x3c(%ebp),%eax
081927ba +0x0dc:  movzbl 0x20(%eax),%eax
081927be +0x0e0:  xor    $0x1,%eax
081927c1 +0x0e3:  test   %al,%al
081927c3 +0x0e5:  je     08192878 <+0x19a>
081927c9 +0x0eb:  mov    -0x3c(%ebp),%eax
081927cc +0x0ee:  mov    0x4(%eax),%eax
081927cf +0x0f1:  mov    %eax,(%esp)
081927d2 +0x0f4:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081927d7 +0x0f9:  mov    %eax,-0xb8(%ebp)
081927dd +0x0ff:  mov    -0x3c(%ebp),%eax
081927e0 +0x102:  lea    0x14(%eax),%edx
081927e3 +0x105:  lea    -0x8c(%ebp),%eax
081927e9 +0x10b:  mov    %edx,0x4(%esp)
081927ed +0x10f:  mov    %eax,(%esp)
081927f0 +0x112:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081927f5 +0x117:  sub    $0x4,%esp
081927f8 +0x11a:  mov    -0x3c(%ebp),%eax
081927fb +0x11d:  lea    0x14(%eax),%edx
081927fe +0x120:  lea    -0x88(%ebp),%eax
08192804 +0x126:  mov    %edx,0x4(%esp)
08192808 +0x12a:  mov    %eax,(%esp)
0819280b +0x12d:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08192810 +0x132:  sub    $0x4,%esp
08192813 +0x135:  lea    -0xbc(%ebp),%eax
08192819 +0x13b:  lea    -0xb8(%ebp),%edx
0819281f +0x141:  mov    %edx,0xc(%esp)
08192823 +0x145:  mov    -0x8c(%ebp),%edx
08192829 +0x14b:  mov    %edx,0x8(%esp)
0819282d +0x14f:  mov    -0x88(%ebp),%edx
08192833 +0x155:  mov    %edx,0x4(%esp)
08192837 +0x159:  mov    %eax,(%esp)
0819283a +0x15c:  call   0817efb9 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x1ea>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x1ea
0819283f +0x161:  sub    $0x4,%esp
08192842 +0x164:  mov    -0x3c(%ebp),%eax
08192845 +0x167:  lea    0x14(%eax),%edx
08192848 +0x16a:  lea    -0x84(%ebp),%eax
0819284e +0x170:  mov    %edx,0x4(%esp)
08192852 +0x174:  mov    %eax,(%esp)
08192855 +0x177:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0819285a +0x17c:  sub    $0x4,%esp
0819285d +0x17f:  lea    -0x84(%ebp),%eax
08192863 +0x185:  mov    %eax,0x4(%esp)
08192867 +0x189:  lea    -0xbc(%ebp),%eax
0819286d +0x18f:  mov    %eax,(%esp)
08192870 +0x192:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
08192875 +0x197:  mov    %eax,-0x40(%ebp)
08192878 +0x19a:  mov    -0x40(%ebp),%eax
0819287b +0x19d:  mov    -0x3c(%ebp),%edx
0819287e +0x1a0:  add    $0x8,%edx
08192881 +0x1a3:  mov    %eax,0x4(%esp)
08192885 +0x1a7:  mov    %edx,(%esp)
08192888 +0x1aa:  call   0819382c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x494>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x494
0819288d +0x1af:  mov    (%eax),%edx
0819288f +0x1b1:  mov    0x10(%ebp),%eax
08192892 +0x1b4:  mov    %edx,0x8(%eax)
08192895 +0x1b7:  mov    -0x40(%ebp),%eax
08192898 +0x1ba:  mov    -0x3c(%ebp),%edx
0819289b +0x1bd:  add    $0x8,%edx
0819289e +0x1c0:  mov    %eax,0x4(%esp)
081928a2 +0x1c4:  mov    %edx,(%esp)
081928a5 +0x1c7:  call   0819382c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x494>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x494
081928aa +0x1cc:  movzwl 0x4(%eax),%edx
081928ae +0x1d0:  mov    0x10(%ebp),%eax
081928b1 +0x1d3:  mov    %dx,0xc(%eax)
081928b5 +0x1d7:  mov    0x10(%ebp),%eax
081928b8 +0x1da:  mov    0x8(%eax),%eax
081928bb +0x1dd:  mov    %eax,%ebx
081928bd +0x1df:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081928c2 +0x1e4:  mov    %ebx,0x4(%esp)
081928c6 +0x1e8:  mov    %eax,(%esp)
081928c9 +0x1eb:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081928ce +0x1f0:  mov    %eax,-0x38(%ebp)
081928d1 +0x1f3:  cmpl   $0x0,-0x38(%ebp)
081928d5 +0x1f7:  jne    08192919 <+0x23b>
081928d7 +0x1f9:  movl   $0x11,0x8(%esp)
081928df +0x201:  movl   $0x24f,0x4(%esp)
081928e7 +0x209:  mov    0xc(%ebp),%eax
081928ea +0x20c:  mov    %eax,(%esp)
081928ed +0x20f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081928f2 +0x214:  mov    0x10(%ebp),%eax
081928f5 +0x217:  mov    0x4(%eax),%eax
081928f8 +0x21a:  mov    %eax,0x8(%esp)
081928fc +0x21e:  mov    0xc(%ebp),%eax
081928ff +0x221:  mov    %eax,0x4(%esp)
08192903 +0x225:  movl   $"AVATAR CONVERT",(%esp)
0819290a +0x22c:  call   08197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>  ; ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
0819290f +0x231:  mov    $0x0,%ebx
08192914 +0x236:  jmp    081930ac <+0x9ce>
08192919 +0x23b:  lea    -0xf9(%ebp),%eax
0819291f +0x241:  mov    %eax,(%esp)
08192922 +0x244:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08192927 +0x249:  mov    0x10(%ebp),%eax
0819292a +0x24c:  mov    0x8(%eax),%eax
0819292d +0x24f:  mov    %eax,-0xf7(%ebp)
08192933 +0x255:  mov    -0x38(%ebp),%eax
08192936 +0x258:  mov    %eax,(%esp)
08192939 +0x25b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0819293e +0x260:  test   %al,%al
08192940 +0x262:  je     08192a30 <+0x352>
08192946 +0x268:  mov    0x10(%ebp),%eax
08192949 +0x26b:  movzwl 0xc(%eax),%eax
0819294d +0x26f:  cwtl
0819294e +0x270:  mov    %eax,-0xf2(%ebp)
08192954 +0x276:  mov    -0x38(%ebp),%eax
08192957 +0x279:  mov    (%eax),%eax
08192959 +0x27b:  add    $0x8,%eax
0819295c +0x27e:  mov    (%eax),%edx
0819295e +0x280:  lea    -0xf9(%ebp),%eax
08192964 +0x286:  mov    %eax,0x4(%esp)
08192968 +0x28a:  mov    -0x38(%ebp),%eax
0819296b +0x28d:  mov    %eax,(%esp)
0819296e +0x290:  call   *%edx
08192970 +0x292:  mov    0xc(%ebp),%eax
08192973 +0x295:  mov    %eax,(%esp)
08192976 +0x298:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0819297b +0x29d:  mov    -0xf9(%ebp),%edx
08192981 +0x2a3:  mov    %edx,0x4(%esp)
08192985 +0x2a7:  mov    -0xf5(%ebp),%edx
0819298b +0x2ad:  mov    %edx,0x8(%esp)
0819298f +0x2b1:  mov    -0xf1(%ebp),%edx
08192995 +0x2b7:  mov    %edx,0xc(%esp)
08192999 +0x2bb:  mov    -0xed(%ebp),%edx
0819299f +0x2c1:  mov    %edx,0x10(%esp)
081929a3 +0x2c5:  mov    -0xe9(%ebp),%edx
081929a9 +0x2cb:  mov    %edx,0x14(%esp)
081929ad +0x2cf:  mov    -0xe5(%ebp),%edx
081929b3 +0x2d5:  mov    %edx,0x18(%esp)
081929b7 +0x2d9:  mov    -0xe1(%ebp),%edx
081929bd +0x2df:  mov    %edx,0x1c(%esp)
081929c1 +0x2e3:  mov    -0xdd(%ebp),%edx
081929c7 +0x2e9:  mov    %edx,0x20(%esp)
081929cb +0x2ed:  mov    -0xd9(%ebp),%edx
081929d1 +0x2f3:  mov    %edx,0x24(%esp)
081929d5 +0x2f7:  mov    -0xd5(%ebp),%edx
081929db +0x2fd:  mov    %edx,0x28(%esp)
081929df +0x301:  mov    -0xd1(%ebp),%edx
081929e5 +0x307:  mov    %edx,0x2c(%esp)
081929e9 +0x30b:  mov    -0xcd(%ebp),%edx
081929ef +0x311:  mov    %edx,0x30(%esp)
081929f3 +0x315:  mov    -0xc9(%ebp),%edx
081929f9 +0x31b:  mov    %edx,0x34(%esp)
081929fd +0x31f:  mov    -0xc5(%ebp),%edx
08192a03 +0x325:  mov    %edx,0x38(%esp)
08192a07 +0x329:  mov    -0xc1(%ebp),%edx
08192a0d +0x32f:  mov    %edx,0x3c(%esp)
08192a11 +0x333:  movzbl -0xbd(%ebp),%edx
08192a18 +0x33a:  mov    %dl,0x40(%esp)
08192a1c +0x33e:  mov    %eax,(%esp)
08192a1f +0x341:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
08192a24 +0x346:  shr    $0x1f,%eax
08192a27 +0x349:  test   %al,%al
08192a29 +0x34b:  jne    08192a9a <+0x3bc>
08192a2b +0x34d:  jmp    08192b04 <+0x426>
08192a30 +0x352:  movl   $0x11,0x8(%esp)
08192a38 +0x35a:  movl   $0x24f,0x4(%esp)
08192a40 +0x362:  mov    0xc(%ebp),%eax
08192a43 +0x365:  mov    %eax,(%esp)
08192a46 +0x368:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192a4b +0x36d:  mov    0xc(%ebp),%eax
08192a4e +0x370:  mov    %eax,(%esp)
08192a51 +0x373:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192a56 +0x378:  mov    0x10(%ebp),%edx
08192a59 +0x37b:  mov    0x8(%edx),%edx
08192a5c +0x37e:  mov    %eax,0x18(%esp)
08192a60 +0x382:  mov    %edx,0x14(%esp)
08192a64 +0x386:  movl   $"AVATAR CONVERT : is_stackable() fail [item_id:%d] [charac_no:%d]",0x10(%esp)
08192a6c +0x38e:  movl   $0x322,0xc(%esp)
08192a74 +0x396:  movl   $&_ZZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
08192a7c +0x39e:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
08192a84 +0x3a6:  movl   $0x1,(%esp)
08192a8b +0x3ad:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08192a90 +0x3b2:  mov    $0x0,%ebx
08192a95 +0x3b7:  jmp    081930ac <+0x9ce>
08192a9a +0x3bc:  movl   $0x4,0x8(%esp)
08192aa2 +0x3c4:  movl   $0x24f,0x4(%esp)
08192aaa +0x3cc:  mov    0xc(%ebp),%eax
08192aad +0x3cf:  mov    %eax,(%esp)
08192ab0 +0x3d2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192ab5 +0x3d7:  mov    0xc(%ebp),%eax
08192ab8 +0x3da:  mov    %eax,(%esp)
08192abb +0x3dd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192ac0 +0x3e2:  mov    0x10(%ebp),%edx
08192ac3 +0x3e5:  mov    0x8(%edx),%edx
08192ac6 +0x3e8:  mov    %eax,0x18(%esp)
08192aca +0x3ec:  mov    %edx,0x14(%esp)
08192ace +0x3f0:  movl   $"AVATAR CONVERT : tryInsertItemIntoInventory() fail [item_id:%d] [charac_no:%d]",0x10(%esp)
08192ad6 +0x3f8:  movl   $0x329,0xc(%esp)
08192ade +0x400:  movl   $&_ZZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
08192ae6 +0x408:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
08192aee +0x410:  movl   $0x1,(%esp)
08192af5 +0x417:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08192afa +0x41c:  mov    $0x0,%ebx
08192aff +0x421:  jmp    081930ac <+0x9ce>
08192b04 +0x426:  mov    0x10(%ebp),%eax
08192b07 +0x429:  movzwl 0x2(%eax),%eax
08192b0b +0x42d:  movzwl %ax,%ebx
08192b0e +0x430:  mov    0xc(%ebp),%eax
08192b11 +0x433:  mov    %eax,(%esp)
08192b14 +0x436:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08192b19 +0x43b:  mov    %ebx,0x8(%esp)
08192b1d +0x43f:  movl   $0x2,0x4(%esp)
08192b25 +0x447:  mov    %eax,(%esp)
08192b28 +0x44a:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08192b2d +0x44f:  mov    %eax,-0x34(%ebp)
08192b30 +0x452:  mov    -0x34(%ebp),%eax
08192b33 +0x455:  mov    0x7(%eax),%eax
08192b36 +0x458:  mov    %eax,-0x30(%ebp)
08192b39 +0x45b:  mov    0x10(%ebp),%eax
08192b3c +0x45e:  movzwl 0x2(%eax),%eax
08192b40 +0x462:  movzwl %ax,%ebx
08192b43 +0x465:  mov    0xc(%ebp),%eax
08192b46 +0x468:  mov    %eax,(%esp)
08192b49 +0x46b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08192b4e +0x470:  movl   $0x1,0x14(%esp)
08192b56 +0x478:  movl   $0x6,0x10(%esp)
08192b5e +0x480:  movl   $0x1,0xc(%esp)
08192b66 +0x488:  mov    %ebx,0x8(%esp)
08192b6a +0x48c:  movl   $0x2,0x4(%esp)
08192b72 +0x494:  mov    %eax,(%esp)
08192b75 +0x497:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08192b7a +0x49c:  xor    $0x1,%eax
08192b7d +0x49f:  test   %al,%al
08192b7f +0x4a1:  je     08192bc7 <+0x4e9>
08192b81 +0x4a3:  movl   $0x16,0x8(%esp)
08192b89 +0x4ab:  movl   $0x24f,0x4(%esp)
08192b91 +0x4b3:  mov    0xc(%ebp),%eax
08192b94 +0x4b6:  mov    %eax,(%esp)
08192b97 +0x4b9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192b9c +0x4be:  mov    0x10(%ebp),%eax
08192b9f +0x4c1:  movzwl 0x2(%eax),%eax
08192ba3 +0x4c5:  movzwl %ax,%eax
08192ba6 +0x4c8:  mov    %eax,0x8(%esp)
08192baa +0x4cc:  mov    0xc(%ebp),%eax
08192bad +0x4cf:  mov    %eax,0x4(%esp)
08192bb1 +0x4d3:  movl   $"AVATAR CONVERT",(%esp)
08192bb8 +0x4da:  call   08197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>  ; ARAD::PRINT_ERROR::delete_item(char*, CUser*, unsigned short)
08192bbd +0x4df:  mov    $0x0,%ebx
08192bc2 +0x4e4:  jmp    081930ac <+0x9ce>
08192bc7 +0x4e9:  mov    0xc(%ebp),%eax
08192bca +0x4ec:  mov    %eax,(%esp)
08192bcd +0x4ef:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08192bd2 +0x4f4:  mov    %eax,(%esp)
08192bd5 +0x4f7:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
08192bda +0x4fc:  mov    -0x30(%ebp),%edx
08192bdd +0x4ff:  mov    %edx,0x4(%esp)
08192be1 +0x503:  mov    %eax,(%esp)
08192be4 +0x506:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
08192be9 +0x50b:  xor    $0x1,%eax
08192bec +0x50e:  test   %al,%al
08192bee +0x510:  je     08192c57 <+0x579>
08192bf0 +0x512:  movl   $0x16,0x8(%esp)
08192bf8 +0x51a:  movl   $0x24f,0x4(%esp)
08192c00 +0x522:  mov    0xc(%ebp),%eax
08192c03 +0x525:  mov    %eax,(%esp)
08192c06 +0x528:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08192c0b +0x52d:  mov    0xc(%ebp),%eax
08192c0e +0x530:  mov    %eax,(%esp)
08192c11 +0x533:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192c16 +0x538:  mov    %eax,0x18(%esp)
08192c1a +0x53c:  mov    -0x30(%ebp),%eax
08192c1d +0x53f:  mov    %eax,0x14(%esp)
08192c21 +0x543:  movl   $"AVATAR CONVERT : UnRegistItem() fail [ui_id:%d] [charac_no:%d]",0x10(%esp)
08192c29 +0x54b:  movl   $0x33c,0xc(%esp)
08192c31 +0x553:  movl   $&_ZZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x8(%esp)
08192c39 +0x55b:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
08192c41 +0x563:  movl   $0x1,(%esp)
08192c48 +0x56a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08192c4d +0x56f:  mov    $0x0,%ebx
08192c52 +0x574:  jmp    081930ac <+0x9ce>
08192c57 +0x579:  mov    0x10(%ebp),%eax
08192c5a +0x57c:  movzwl 0x2(%eax),%eax
08192c5e +0x580:  movzwl %ax,%eax
08192c61 +0x583:  lea    0xa(%eax),%ebx
08192c64 +0x586:  mov    0xc(%ebp),%eax
08192c67 +0x589:  mov    %eax,(%esp)
08192c6a +0x58c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08192c6f +0x591:  movl   $0x0,0x14(%esp)
08192c77 +0x599:  mov    %ebx,0x10(%esp)
08192c7b +0x59d:  movl   $0x5,0xc(%esp)
08192c83 +0x5a5:  mov    -0x30(%ebp),%edx
08192c86 +0x5a8:  mov    %edx,0x8(%esp)
08192c8a +0x5ac:  movl   $0x36,0x4(%esp)
08192c92 +0x5b4:  mov    %eax,(%esp)
08192c95 +0x5b7:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
08192c9a +0x5bc:  mov    0xc(%ebp),%eax
08192c9d +0x5bf:  mov    %eax,(%esp)
08192ca0 +0x5c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192ca5 +0x5c7:  movl   $"",0x8(%esp)
08192cad +0x5cf:  mov    -0x30(%ebp),%edx
08192cb0 +0x5d2:  mov    %edx,0x4(%esp)
08192cb4 +0x5d6:  mov    %eax,(%esp)
08192cb7 +0x5d9:  call   0844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>  ; DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)
08192cbc +0x5de:  lea    -0x98(%ebp),%eax
08192cc2 +0x5e4:  mov    %eax,(%esp)
08192cc5 +0x5e7:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08192cca +0x5ec:  lea    -0xa4(%ebp),%eax
08192cd0 +0x5f2:  mov    %eax,(%esp)
08192cd3 +0x5f5:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08192cd8 +0x5fa:  mov    0x10(%ebp),%eax
08192cdb +0x5fd:  lea    0xc(%eax),%ecx
08192cde +0x600:  mov    0x10(%ebp),%eax
08192ce1 +0x603:  lea    0x8(%eax),%edx
08192ce4 +0x606:  lea    -0x78(%ebp),%eax
08192ce7 +0x609:  mov    %ecx,0x8(%esp)
08192ceb +0x60d:  mov    %edx,0x4(%esp)
08192cef +0x611:  mov    %eax,(%esp)
08192cf2 +0x614:  call   0819383e <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x4a6>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x4a6
08192cf7 +0x619:  sub    $0x4,%esp
08192cfa +0x61c:  lea    -0x78(%ebp),%eax
08192cfd +0x61f:  mov    %eax,0x4(%esp)
08192d01 +0x623:  lea    -0x80(%ebp),%eax
08192d04 +0x626:  mov    %eax,(%esp)
08192d07 +0x629:  call   0819387c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x4e4>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x4e4
08192d0c +0x62e:  lea    -0x80(%ebp),%eax
08192d0f +0x631:  mov    %eax,0x4(%esp)
08192d13 +0x635:  lea    -0x98(%ebp),%eax
08192d19 +0x63b:  mov    %eax,(%esp)
08192d1c +0x63e:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08192d21 +0x643:  mov    0xc(%ebp),%eax
08192d24 +0x646:  mov    %eax,(%esp)
08192d27 +0x649:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08192d2c +0x64e:  movl   $"",0x1c(%esp)
08192d34 +0x656:  movl   $"",0x18(%esp)
08192d3c +0x65e:  movl   $0x0,0x14(%esp)
08192d44 +0x666:  movl   $0xa,0x10(%esp)
08192d4c +0x66e:  movl   $0x0,0xc(%esp)
08192d54 +0x676:  lea    -0xa4(%ebp),%edx
08192d5a +0x67c:  mov    %edx,0x8(%esp)
08192d5e +0x680:  lea    -0x98(%ebp),%edx
08192d64 +0x686:  mov    %edx,0x4(%esp)
08192d68 +0x68a:  mov    %eax,(%esp)
08192d6b +0x68d:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
08192d70 +0x692:  mov    %eax,-0x2c(%ebp)
08192d73 +0x695:  lea    -0xb0(%ebp),%eax
08192d79 +0x69b:  mov    %eax,(%esp)
08192d7c +0x69e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08192d81 +0x6a3:  lea    -0xb0(%ebp),%eax
08192d87 +0x6a9:  mov    %eax,(%esp)
08192d8a +0x6ac:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08192d8f +0x6b1:  movl   $0x24f,0x8(%esp)
08192d97 +0x6b9:  movl   $0x1,0x4(%esp)
08192d9f +0x6c1:  lea    -0xb0(%ebp),%eax
08192da5 +0x6c7:  mov    %eax,(%esp)
08192da8 +0x6ca:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08192dad +0x6cf:  movl   $0x1,0x4(%esp)
08192db5 +0x6d7:  lea    -0xb0(%ebp),%eax
08192dbb +0x6dd:  mov    %eax,(%esp)
08192dbe +0x6e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08192dc3 +0x6e5:  mov    0x10(%ebp),%eax
08192dc6 +0x6e8:  movzwl 0x2(%eax),%eax
08192dca +0x6ec:  movzwl %ax,%eax
08192dcd +0x6ef:  mov    %eax,0x4(%esp)
08192dd1 +0x6f3:  lea    -0xb0(%ebp),%eax
08192dd7 +0x6f9:  mov    %eax,(%esp)
08192dda +0x6fc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08192ddf +0x701:  mov    -0x2c(%ebp),%eax
08192de2 +0x704:  mov    %eax,0x4(%esp)
08192de6 +0x708:  lea    -0xb0(%ebp),%eax
08192dec +0x70e:  mov    %eax,(%esp)
08192def +0x711:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08192df4 +0x716:  lea    -0x70(%ebp),%eax
08192df7 +0x719:  lea    -0xa4(%ebp),%edx
08192dfd +0x71f:  mov    %edx,0x4(%esp)
08192e01 +0x723:  mov    %eax,(%esp)
08192e04 +0x726:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08192e09 +0x72b:  sub    $0x4,%esp
08192e0c +0x72e:  lea    -0x70(%ebp),%eax
08192e0f +0x731:  mov    %eax,0x4(%esp)
08192e13 +0x735:  lea    -0xb4(%ebp),%eax
08192e19 +0x73b:  mov    %eax,(%esp)
08192e1c +0x73e:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08192e21 +0x743:  movl   $0x0,-0x28(%ebp)
08192e28 +0x74a:  movl   $0x0,-0x24(%ebp)
08192e2f +0x751:  movl   $0x0,-0x20(%ebp)
08192e36 +0x758:  jmp    08192f7c <+0x89e>
08192e3b +0x75d:  lea    -0xb4(%ebp),%eax
08192e41 +0x763:  mov    %eax,(%esp)
08192e44 +0x766:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08192e49 +0x76b:  mov    (%eax),%eax
08192e4b +0x76d:  mov    %eax,-0x28(%ebp)
08192e4e +0x770:  mov    -0x28(%ebp),%eax
08192e51 +0x773:  mov    %eax,0x4(%esp)
08192e55 +0x777:  lea    -0xb0(%ebp),%eax
08192e5b +0x77d:  mov    %eax,(%esp)
08192e5e +0x780:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08192e63 +0x785:  lea    -0x68(%ebp),%eax
08192e66 +0x788:  movl   $0x0,0x8(%esp)
08192e6e +0x790:  lea    -0xb4(%ebp),%edx
08192e74 +0x796:  mov    %edx,0x4(%esp)
08192e78 +0x79a:  mov    %eax,(%esp)
08192e7b +0x79d:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08192e80 +0x7a2:  sub    $0x4,%esp
08192e83 +0x7a5:  lea    -0xb4(%ebp),%eax
08192e89 +0x7ab:  mov    %eax,(%esp)
08192e8c +0x7ae:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08192e91 +0x7b3:  mov    (%eax),%eax
08192e93 +0x7b5:  mov    %eax,-0x24(%ebp)
08192e96 +0x7b8:  mov    -0x24(%ebp),%eax
08192e99 +0x7bb:  mov    %eax,0x4(%esp)
08192e9d +0x7bf:  lea    -0xb0(%ebp),%eax
08192ea3 +0x7c5:  mov    %eax,(%esp)
08192ea6 +0x7c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08192eab +0x7cd:  lea    -0x64(%ebp),%eax
08192eae +0x7d0:  movl   $0x0,0x8(%esp)
08192eb6 +0x7d8:  lea    -0xb4(%ebp),%edx
08192ebc +0x7de:  mov    %edx,0x4(%esp)
08192ec0 +0x7e2:  mov    %eax,(%esp)
08192ec3 +0x7e5:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08192ec8 +0x7ea:  sub    $0x4,%esp
08192ecb +0x7ed:  lea    -0xb4(%ebp),%eax
08192ed1 +0x7f3:  mov    %eax,(%esp)
08192ed4 +0x7f6:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08192ed9 +0x7fb:  mov    (%eax),%eax
08192edb +0x7fd:  mov    %eax,-0x20(%ebp)
08192ede +0x800:  mov    -0x20(%ebp),%eax
08192ee1 +0x803:  mov    %eax,0x4(%esp)
08192ee5 +0x807:  lea    -0xb0(%ebp),%eax
08192eeb +0x80d:  mov    %eax,(%esp)
08192eee +0x810:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08192ef3 +0x815:  lea    -0x60(%ebp),%eax
08192ef6 +0x818:  movl   $0x0,0x8(%esp)
08192efe +0x820:  lea    -0xb4(%ebp),%edx
08192f04 +0x826:  mov    %edx,0x4(%esp)
08192f08 +0x82a:  mov    %eax,(%esp)
08192f0b +0x82d:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08192f10 +0x832:  sub    $0x4,%esp
08192f13 +0x835:  mov    0xc(%ebp),%eax
08192f16 +0x838:  mov    %eax,(%esp)
08192f19 +0x83b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08192f1e +0x840:  mov    %eax,%ebx
08192f20 +0x842:  mov    0x10(%ebp),%eax
08192f23 +0x845:  movzwl (%eax),%eax
08192f26 +0x848:  movzwl %ax,%edi
08192f29 +0x84b:  mov    0x10(%ebp),%eax
08192f2c +0x84e:  movzwl 0x2(%eax),%eax
08192f30 +0x852:  movzwl %ax,%esi
08192f33 +0x855:  movl   $0x0,0xc(%esp)
08192f3b +0x85d:  movl   $0x368,0x8(%esp)
08192f43 +0x865:  movl   $&_ZZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertEE19__PRETTY_FUNCTION__,0x4(%esp)
08192f4b +0x86d:  lea    -0x5c(%ebp),%eax
08192f4e +0x870:  mov    %eax,(%esp)
08192f51 +0x873:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08192f56 +0x878:  mov    %ebx,0x14(%esp)
08192f5a +0x87c:  mov    -0x24(%ebp),%eax
08192f5d +0x87f:  mov    %eax,0x10(%esp)
08192f61 +0x883:  mov    %edi,0xc(%esp)
08192f65 +0x887:  mov    %esi,0x8(%esp)
08192f69 +0x88b:  movl   $"AVATAR CONVERT : success [slot:%d] [selectNo:%d] [resultIdx:%d] [charac_no:%d]",0x4(%esp)
08192f71 +0x893:  lea    -0x5c(%ebp),%eax
08192f74 +0x896:  mov    %eax,(%esp)
08192f77 +0x899:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08192f7c +0x89e:  lea    -0x6c(%ebp),%eax
08192f7f +0x8a1:  lea    -0xa4(%ebp),%edx
08192f85 +0x8a7:  mov    %edx,0x4(%esp)
08192f89 +0x8ab:  mov    %eax,(%esp)
08192f8c +0x8ae:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08192f91 +0x8b3:  sub    $0x4,%esp
08192f94 +0x8b6:  lea    -0x6c(%ebp),%eax
08192f97 +0x8b9:  mov    %eax,0x4(%esp)
08192f9b +0x8bd:  lea    -0xb4(%ebp),%eax
08192fa1 +0x8c3:  mov    %eax,(%esp)
08192fa4 +0x8c6:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
08192fa9 +0x8cb:  test   %al,%al
08192fab +0x8cd:  jne    08192e3b <+0x75d>
08192fb1 +0x8d3:  movl   $0x1,0x4(%esp)
08192fb9 +0x8db:  lea    -0xb0(%ebp),%eax
08192fbf +0x8e1:  mov    %eax,(%esp)
08192fc2 +0x8e4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08192fc7 +0x8e9:  lea    -0xb0(%ebp),%eax
08192fcd +0x8ef:  mov    %eax,0x4(%esp)
08192fd1 +0x8f3:  mov    0xc(%ebp),%eax
08192fd4 +0x8f6:  mov    %eax,(%esp)
08192fd7 +0x8f9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08192fdc +0x8fe:  mov    0x10(%ebp),%eax
08192fdf +0x901:  mov    0x8(%eax),%eax
08192fe2 +0x904:  mov    %eax,%ebx
08192fe4 +0x906:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
08192fe9 +0x90b:  add    $0x4,%eax
08192fec +0x90e:  mov    %ebx,0x4(%esp)
08192ff0 +0x912:  mov    %eax,(%esp)
08192ff3 +0x915:  call   088b13a6 <_ZN4ARAD6SCRIPT14AvatarRecharge21IsEmblemRechargeStoneEi>  ; ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int)
08192ff8 +0x91a:  test   %al,%al
08192ffa +0x91c:  je     08193003 <+0x925>
08192ffc +0x91e:  mov    $0x1,%eax
08193001 +0x923:  jmp    08193008 <+0x92a>
08193003 +0x925:  mov    $0x0,%eax
08193008 +0x92a:  mov    %eax,-0x1c(%ebp)
0819300b +0x92d:  mov    -0x1c(%ebp),%eax
0819300e +0x930:  mov    %eax,0x4(%esp)
08193012 +0x934:  mov    -0x4c(%ebp),%eax
08193015 +0x937:  mov    %eax,(%esp)
08193018 +0x93a:  call   08193136 <_ZN19AvatarConvertServer24StatisticsAvatarDisjointEPK5CItemi>  ; AvatarConvertServer::StatisticsAvatarDisjoint(CItem const*, int)
0819301d +0x93f:  lea    -0x98(%ebp),%eax
08193023 +0x945:  mov    %eax,(%esp)
08193026 +0x948:  call   081931dc <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE>  ; AvatarConvertServer::StatisticsEmblemCreate(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0819302b +0x94d:  mov    $0x1,%ebx
08193030 +0x952:  lea    -0xb0(%ebp),%eax
08193036 +0x958:  mov    %eax,(%esp)
08193039 +0x95b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819303e +0x960:  jmp    08193070 <+0x992>
08193040 +0x962:  mov    %edx,%ebx
08193042 +0x964:  mov    %eax,%esi
08193044 +0x966:  lea    -0xb0(%ebp),%eax
0819304a +0x96c:  mov    %eax,(%esp)
0819304d +0x96f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08193052 +0x974:  mov    %esi,%eax
08193054 +0x976:  mov    %ebx,%edx
08193056 +0x978:  jmp    08193058 <+0x97a>
08193058 +0x97a:  mov    %edx,%ebx
0819305a +0x97c:  mov    %eax,%esi
0819305c +0x97e:  lea    -0xa4(%ebp),%eax
08193062 +0x984:  mov    %eax,(%esp)
08193065 +0x987:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0819306a +0x98c:  mov    %esi,%eax
0819306c +0x98e:  mov    %ebx,%edx
0819306e +0x990:  jmp    08193080 <+0x9a2>
08193070 +0x992:  lea    -0xa4(%ebp),%eax
08193076 +0x998:  mov    %eax,(%esp)
08193079 +0x99b:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0819307e +0x9a0:  jmp    0819309e <+0x9c0>
08193080 +0x9a2:  mov    %edx,%ebx
08193082 +0x9a4:  mov    %eax,%esi
08193084 +0x9a6:  lea    -0x98(%ebp),%eax
0819308a +0x9ac:  mov    %eax,(%esp)
0819308d +0x9af:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08193092 +0x9b4:  mov    %esi,%eax
08193094 +0x9b6:  mov    %ebx,%edx
08193096 +0x9b8:  mov    %eax,(%esp)
08193099 +0x9bb:  call   08ae3750 <_Unwind_Resume>
0819309e +0x9c0:  lea    -0x98(%ebp),%eax
081930a4 +0x9c6:  mov    %eax,(%esp)
081930a7 +0x9c9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081930ac +0x9ce:  mov    %ebx,%eax
081930ae +0x9d0:  lea    -0xc(%ebp),%esp
081930b1 +0x9d3:  add    $0x0,%esp
081930b4 +0x9d6:  pop    %ebx
081930b5 +0x9d7:  pop    %esi
081930b6 +0x9d8:  pop    %edi
081930b7 +0x9d9:  pop    %ebp
081930b8 +0x9da:  ret
081930b9 +0x9db:  nop
```

## 反编译 C

```c
// AvatarConvertServer::Convert @ 0x81926de

/* AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*) */

undefined4 __thiscall
AvatarConvertServer::Convert(AvatarConvertServer *this,CUser *param_1,SigAradAvatarConvert *param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  CDataManager *this_00;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined2 local_fd;
  undefined2 uStack_fb;
  undefined2 uStack_f9;
  undefined1 uStack_f7;
  int iStack_f6;
  undefined1 uStack_f2;
  uint local_f1;
  uint local_ed;
  uint local_e9;
  uint local_e5;
  uint local_e1;
  uint local_dd;
  uint local_d9;
  uint local_d5;
  uint local_d1;
  uint local_cd;
  uint local_c9;
  uint local_c5;
  undefined1 local_c1;
  __normal_iterator local_c0 [4];
  undefined4 local_bc;
  undefined1 local_b8 [4];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [20];
  __normal_iterator local_88 [4];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [16];
  CItem *local_50;
  undefined4 local_4c;
  CItem *local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  puVar12 = (uint *)&stack0xfffffea4;
  iVar6 = *(int *)(param_2 + 4);
  this_00 = (CDataManager *)G_CDataManager();
  local_50 = (CItem *)CDataManager::find_item(this_00,iVar6);
  if ((local_50 == (CItem *)0x0) ||
     (cVar4 = (**(code **)(*(int *)local_50 + 0x10))(), cVar4 != '\x01')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    ARAD::PRINT_ERROR::find_item("AVATAR CONVERT",param_1,*(int *)(param_2 + 4));
    uVar11 = 0;
  }
  else {
    local_4c = CItem::get_grade(local_50);
    local_48 = local_50;
    iVar6 = (**(code **)(*(int *)local_50 + 0xc))();
    if (iVar6 == 9) {
      local_4c = 3;
    }
    local_44 = (uint)*(ushort *)param_2;
    local_40 = ARAD::SCRIPT::AvatarConvert::getConvertResult((int)(this + 4));
    if (*(char *)(local_40 + 0x20) != '\x01') {
      local_bc = get_rand_int(*(int *)(local_40 + 4));
      std::vector<int,std::allocator<int>>::end();
      std::vector<int,std::allocator<int>>::begin();
      std::upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                ();
      std::vector<int,std::allocator<int>>::begin();
      puVar12 = (uint *)&stack0xfffffea0;
      local_44 = __gnu_cxx::operator-(local_c0,local_88);
    }
    puVar12[1] = local_44;
    *puVar12 = local_40 + 8;
    puVar12[-1] = 0x819288d;
    puVar7 = (undefined4 *)
             std::
             vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
             ::operator[]((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                           *)*puVar12,puVar12[1]);
    *(undefined4 *)(param_2 + 8) = *puVar7;
    puVar12[1] = local_44;
    *puVar12 = local_40 + 8;
    puVar12[-1] = 0x81928aa;
    iVar6 = std::
            vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
            ::operator[]((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                          *)*puVar12,puVar12[1]);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar6 + 4);
    uVar9 = *(uint *)(param_2 + 8);
    puVar12[-1] = 0x81928c2;
    uVar11 = G_CDataManager();
    puVar12[1] = uVar9;
    *puVar12 = uVar11;
    puVar12[-1] = 0x81928ce;
    local_3c = (int *)CDataManager::find_item((CDataManager *)*puVar12,puVar12[1]);
    if (local_3c == (int *)0x0) {
      puVar12[2] = 0x11;
      puVar12[1] = 0x24f;
      *puVar12 = (uint)param_1;
      puVar12[-1] = 0x81928f2;
      CUser::SendCmdErrorPacket();
      puVar12[2] = *(uint *)(param_2 + 4);
      puVar12[1] = (uint)param_1;
      *puVar12 = (uint)"AVATAR CONVERT";
      puVar12[-1] = 0x819290f;
      ARAD::PRINT_ERROR::find_item((char *)*puVar12,(CUser *)puVar12[1],puVar12[2]);
      uVar11 = 0;
    }
    else {
      *puVar12 = (uint)&local_fd;
      puVar12[-1] = 0x8192927;
      Inven_Item::Inven_Item((Inven_Item *)*puVar12);
      uStack_fb = (undefined2)*(undefined4 *)(param_2 + 8);
      uStack_f9 = (undefined2)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
      *puVar12 = (uint)local_3c;
      puVar12[-1] = 0x819293e;
      cVar4 = CItem::is_stackable((CItem *)*puVar12);
      if (cVar4 == '\0') {
        puVar12[2] = 0x11;
        puVar12[1] = 0x24f;
        *puVar12 = (uint)param_1;
        puVar12[-1] = 0x8192a4b;
        CUser::SendCmdErrorPacket();
        *puVar12 = (uint)param_1;
        puVar12[-1] = 0x8192a56;
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
        uVar9 = *(uint *)(param_2 + 8);
        puVar12[6] = uVar8;
        puVar12[5] = uVar9;
        puVar12[4] = (uint)"AVATAR CONVERT : is_stackable() fail [item_id:%d] [charac_no:%d]";
        puVar12[3] = 0x322;
        puVar12[2] = (uint)"bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)";
        puVar12[1] = (uint)"localjapan/Arad_EmblemReformServer.cpp";
        *puVar12 = 1;
        puVar12[-1] = 0x8192a90;
        LogManager::logFormat
                  (*puVar12,(char *)puVar12[1],(char *)puVar12[2],puVar12[3],(char *)puVar12[4]);
        uVar11 = 0;
      }
      else {
        iStack_f6 = (int)*(short *)(param_2 + 0xc);
        pcVar3 = *(code **)(*local_3c + 8);
        puVar12[1] = (uint)&local_fd;
        *puVar12 = (uint)local_3c;
        puVar12[-1] = 0x8192970;
        (*pcVar3)();
        *puVar12 = (uint)param_1;
        puVar12[-1] = 0x819297b;
        uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
        puVar12[1] = CONCAT22(uStack_fb,local_fd);
        puVar12[2] = CONCAT13((undefined1)iStack_f6,CONCAT12(uStack_f7,uStack_f9));
        puVar12[3] = CONCAT13(uStack_f2,iStack_f6._1_3_);
        puVar12[4] = local_f1;
        puVar12[5] = local_ed;
        puVar12[6] = local_e9;
        puVar12[7] = local_e5;
        puVar12[8] = local_e1;
        puVar12[9] = local_dd;
        puVar12[10] = local_d9;
        puVar12[0xb] = local_d5;
        puVar12[0xc] = local_d1;
        puVar12[0xd] = local_cd;
        puVar12[0xe] = local_c9;
        puVar12[0xf] = local_c5;
        *(undefined1 *)(puVar12 + 0x10) = local_c1;
        *puVar12 = uVar11;
        puVar12[-1] = 0x8192a24;
        iVar6 = CInventory::tryInsertItemIntoInventory();
        if (iVar6 < 0) {
          puVar12[2] = 4;
          puVar12[1] = 0x24f;
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192ab5;
          CUser::SendCmdErrorPacket();
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192ac0;
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
          uVar9 = *(uint *)(param_2 + 8);
          puVar12[6] = uVar8;
          puVar12[5] = uVar9;
          puVar12[4] = (uint)
                       "AVATAR CONVERT : tryInsertItemIntoInventory() fail [item_id:%d] [charac_no:%d]"
          ;
          puVar12[3] = 0x329;
          puVar12[2] = (uint)
                       "bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)";
          puVar12[1] = (uint)"localjapan/Arad_EmblemReformServer.cpp";
          *puVar12 = 1;
          puVar12[-1] = 0x8192afa;
          LogManager::logFormat
                    (*puVar12,(char *)puVar12[1],(char *)puVar12[2],puVar12[3],(char *)puVar12[4]);
          uVar11 = 0;
        }
        else {
          uVar1 = *(ushort *)(param_2 + 2);
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192b19;
          uVar11 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)*puVar12);
          puVar12[2] = (uint)uVar1;
          puVar12[1] = 2;
          *puVar12 = uVar11;
          puVar12[-1] = 0x8192b2d;
          local_38 = CInventory::GetInvenRef((CInventory *)*puVar12,puVar12[1],puVar12[2]);
          local_34 = *(uint *)(local_38 + 7);
          uVar1 = *(ushort *)(param_2 + 2);
          *puVar12 = (uint)param_1;
          puVar12[-1] = 0x8192b4e;
          uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
          puVar12[5] = 1;
          puVar12[4] = 6;
          puVar12[3] = 1;
          puVar12[2] = (uint)uVar1;
          puVar12[1] = 2;
          *puVar12 = uVar11;
          puVar12[-1] = 0x8192b7a;
          cVar4 = CInventory::delete_item();
          if (cVar4 == '\x01') {
            *puVar12 = (uint)param_1;
            puVar12[-1] = 0x8192bd2;
            uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
            *puVar12 = uVar11;
            puVar12[-1] = 0x8192bda;
            uVar11 = CInventory::GetAvatarItemMgrW((CInventory *)*puVar12);
            puVar12[1] = local_34;
            *puVar12 = uVar11;
            puVar12[-1] = 0x8192be9;
            cVar4 = WongWork::CAvatarItemMgr::UnRegistItem(*puVar12);
            if (cVar4 == '\x01') {
              uVar1 = *(ushort *)(param_2 + 2);
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192c6f;
              uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
              puVar12[5] = 0;
              puVar12[4] = uVar1 + 10;
              puVar12[3] = 5;
              puVar12[2] = local_34;
              puVar12[1] = 0x36;
              *puVar12 = uVar11;
              puVar12[-1] = 0x8192c9a;
              CInventory::SendAvatarEvent
                        ((CInventory *)*puVar12,puVar12[1],puVar12[2],puVar12[3],puVar12[4],
                         puVar12[5]);
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192ca5;
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
              puVar12[2] = (uint)&DAT_08b9a913;
              puVar12[1] = local_34;
              *puVar12 = uVar11;
              puVar12[-1] = 0x8192cbc;
              DB_UpdateAvatarHistory::makeRequest(*puVar12,puVar12[1],(char *)puVar12[2]);
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x8192cca;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*puVar12);
              *puVar12 = (uint)local_a8;
                    /* try { // try from 08192cd3 to 08192cd7 has its CatchHandler @ 08193080 */
              puVar12[-1] = 0x8192cd8;
              std::vector<int,std::allocator<int>>::vector
                        ((vector<int,std::allocator<int>> *)*puVar12);
              puVar12[2] = (uint)(param_2 + 0xc);
              puVar12[1] = (uint)(param_2 + 8);
              *puVar12 = (uint)local_7c;
                    /* try { // try from 08192cf2 to 08192d80 has its CatchHandler @ 08193058 */
              puVar12[-1] = 0x8192cf7;
              std::make_pair<unsigned_long&,short&>((ulong *)*puVar12,(short *)puVar12[1]);
              puVar12[1] = (uint)local_7c;
              *puVar12 = (uint)local_84;
              puVar12[-1] = 0x8192d0c;
              std::pair<int,int>::pair<unsigned_long,short>
                        ((pair<int,int> *)*puVar12,(pair *)puVar12[1]);
              puVar12[1] = (uint)local_84;
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x8192d21;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*puVar12,
                         (pair *)puVar12[1]);
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192d2c;
              uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)*puVar12);
              puVar12[7] = (uint)&DAT_08b9a913;
              puVar12[6] = (uint)&DAT_08b9a913;
              puVar12[5] = 0;
              puVar12[4] = 10;
              puVar12[3] = 0;
              puVar12[2] = (uint)local_a8;
              puVar12[1] = (uint)local_9c;
              *puVar12 = uVar11;
              puVar12[-1] = 0x8192d70;
              local_30 = CInventory::insert_event_items();
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192d81;
              PacketGuard::PacketGuard((PacketGuard *)*puVar12);
              *puVar12 = (uint)local_b4;
                    /* try { // try from 08192d8a to 0819302a has its CatchHandler @ 08193040 */
              puVar12[-1] = 0x8192d8f;
              InterfacePacketBuf::clear((InterfacePacketBuf *)*puVar12);
              puVar12[2] = 0x24f;
              puVar12[1] = 1;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192dad;
              InterfacePacketBuf::put_header((InterfacePacketBuf *)*puVar12,puVar12[1],puVar12[2]);
              puVar12[1] = 1;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192dc3;
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)*puVar12,puVar12[1]);
              puVar12[1] = (uint)*(ushort *)(param_2 + 2);
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192ddf;
              InterfacePacketBuf::put_short((InterfacePacketBuf *)*puVar12,puVar12[1]);
              puVar12[1] = local_30;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192df4;
              InterfacePacketBuf::put_short((InterfacePacketBuf *)*puVar12,puVar12[1]);
              puVar12[1] = (uint)local_a8;
              *puVar12 = (uint)local_74;
              puVar12[-1] = 0x8192e09;
              std::vector<int,std::allocator<int>>::begin();
              puVar12[1] = (uint)local_74;
              *puVar12 = (uint)local_b8;
              puVar12[-1] = 0x8192e21;
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              __normal_iterator<int*>
                        ((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                         *puVar12,(__normal_iterator *)puVar12[1]);
              local_2c = 0;
              local_28 = 0;
              local_24 = 0;
              while( true ) {
                puVar12[1] = (uint)local_a8;
                *puVar12 = (uint)local_70;
                puVar12[-1] = 0x8192f91;
                std::vector<int,std::allocator<int>>::end();
                puVar12[1] = (uint)local_70;
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192fa9;
                bVar5 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)*puVar12,(__normal_iterator *)puVar12[1]);
                if (!bVar5) break;
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192e49;
                puVar10 = (uint *)__gnu_cxx::
                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                  ::operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                               *)*puVar12);
                local_2c = *puVar10;
                puVar12[1] = local_2c;
                *puVar12 = (uint)local_b4;
                puVar12[-1] = 0x8192e63;
                InterfacePacketBuf::put_short((InterfacePacketBuf *)*puVar12,puVar12[1]);
                puVar12[2] = 0;
                puVar12[1] = (uint)local_b8;
                *puVar12 = (uint)local_6c;
                puVar12[-1] = 0x8192e80;
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                           *puVar12,puVar12[1]);
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192e91;
                puVar10 = (uint *)__gnu_cxx::
                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                  ::operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                               *)*puVar12);
                local_28 = *puVar10;
                puVar12[1] = local_28;
                *puVar12 = (uint)local_b4;
                puVar12[-1] = 0x8192eab;
                InterfacePacketBuf::put_int((InterfacePacketBuf *)*puVar12,puVar12[1]);
                puVar12[2] = 0;
                puVar12[1] = (uint)local_b8;
                *puVar12 = (uint)local_68;
                puVar12[-1] = 0x8192ec8;
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                           *puVar12,puVar12[1]);
                *puVar12 = (uint)local_b8;
                puVar12[-1] = 0x8192ed9;
                puVar10 = (uint *)__gnu_cxx::
                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                  ::operator*((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                               *)*puVar12);
                local_24 = *puVar10;
                puVar12[1] = local_24;
                *puVar12 = (uint)local_b4;
                puVar12[-1] = 0x8192ef3;
                InterfacePacketBuf::put_int((InterfacePacketBuf *)*puVar12,puVar12[1]);
                puVar12[2] = 0;
                puVar12[1] = (uint)local_b8;
                *puVar12 = (uint)local_64;
                puVar12[-1] = 0x8192f10;
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++((__normal_iterator<int_const*,std::vector<int,std::allocator<int>>> *)
                           *puVar12,puVar12[1]);
                *puVar12 = (uint)param_1;
                puVar12[-1] = 0x8192f1e;
                uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
                uVar1 = *(ushort *)param_2;
                uVar2 = *(ushort *)(param_2 + 2);
                puVar12[3] = 0;
                puVar12[2] = 0x368;
                puVar12[1] = (uint)
                             "bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)"
                ;
                *puVar12 = (uint)local_60;
                puVar12[-1] = 0x8192f56;
                cMyTrace::cMyTrace((cMyTrace *)*puVar12,(char *)puVar12[1],puVar12[2],puVar12[3]);
                puVar12[5] = uVar9;
                puVar12[4] = local_28;
                puVar12[3] = (uint)uVar1;
                puVar12[2] = (uint)uVar2;
                puVar12[1] = (uint)
                             "AVATAR CONVERT : success [slot:%d] [selectNo:%d] [resultIdx:%d] [charac_no:%d]"
                ;
                *puVar12 = (uint)local_60;
                puVar12[-1] = 0x8192f7c;
                cMyTrace::operator()((cMyTrace *)*puVar12,(char *)puVar12[1]);
              }
              puVar12[1] = 1;
              *puVar12 = (uint)local_b4;
              puVar12[-1] = 0x8192fc7;
              InterfacePacketBuf::finalize((InterfacePacketBuf *)*puVar12,SUB41(puVar12[1],0));
              puVar12[1] = (uint)local_b4;
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192fdc;
              CUser::Send((CUser *)*puVar12,(PacketGuard *)puVar12[1]);
              uVar9 = *(uint *)(param_2 + 8);
              puVar12[-1] = 0x8192fe9;
              iVar6 = ARAD::Singleton<AvatarRechargeServer>::Get();
              puVar12[1] = uVar9;
              *puVar12 = iVar6 + 4;
              puVar12[-1] = 0x8192ff8;
              cVar4 = ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(*puVar12);
              local_20 = (uint)(cVar4 != '\0');
              puVar12[1] = local_20;
              *puVar12 = (uint)local_50;
              puVar12[-1] = 0x819301d;
              StatisticsAvatarDisjoint((CItem *)*puVar12,puVar12[1]);
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x819302b;
              StatisticsEmblemCreate((vector *)*puVar12);
              uVar11 = 1;
              *puVar12 = (uint)local_b4;
                    /* try { // try from 08193039 to 0819303d has its CatchHandler @ 08193058 */
              puVar12[-1] = 0x819303e;
              PacketGuard::~PacketGuard((PacketGuard *)*puVar12);
              *puVar12 = (uint)local_a8;
                    /* try { // try from 08193079 to 0819307d has its CatchHandler @ 08193080 */
              puVar12[-1] = 0x819307e;
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)*puVar12);
              *puVar12 = (uint)local_9c;
              puVar12[-1] = 0x81930ac;
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)*puVar12);
            }
            else {
              puVar12[2] = 0x16;
              puVar12[1] = 0x24f;
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192c0b;
              CUser::SendCmdErrorPacket();
              *puVar12 = (uint)param_1;
              puVar12[-1] = 0x8192c16;
              uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*puVar12);
              puVar12[6] = uVar9;
              puVar12[5] = local_34;
              puVar12[4] = (uint)"AVATAR CONVERT : UnRegistItem() fail [ui_id:%d] [charac_no:%d]";
              puVar12[3] = 0x33c;
              puVar12[2] = (uint)
                           "bool AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)";
              puVar12[1] = (uint)"localjapan/Arad_EmblemReformServer.cpp";
              *puVar12 = 1;
              puVar12[-1] = 0x8192c4d;
              LogManager::logFormat
                        (*puVar12,(char *)puVar12[1],(char *)puVar12[2],puVar12[3],
                         (char *)puVar12[4]);
              uVar11 = 0;
            }
          }
          else {
            puVar12[2] = 0x16;
            puVar12[1] = 0x24f;
            *puVar12 = (uint)param_1;
            puVar12[-1] = 0x8192b9c;
            CUser::SendCmdErrorPacket();
            puVar12[2] = (uint)*(ushort *)(param_2 + 2);
            puVar12[1] = (uint)param_1;
            *puVar12 = (uint)"AVATAR CONVERT";
            puVar12[-1] = 0x8192bbd;
            ARAD::PRINT_ERROR::delete_item((char *)*puVar12,(CUser *)puVar12[1],(ushort)puVar12[2]);
            uVar11 = 0;
          }
        }
      }
    }
  }
  return uVar11;
}
```
