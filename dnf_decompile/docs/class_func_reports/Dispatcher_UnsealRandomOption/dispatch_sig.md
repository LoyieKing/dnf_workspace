# dispatch_sig

`_ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UnsealRandomOption` | `0x08228e5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08228e5e  _ZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&)
# range [0x08228e5e, 0x08229643]
08228e5e +0x000:  push   %ebp
08228e5f +0x001:  mov    %esp,%ebp
08228e61 +0x003:  push   %edi
08228e62 +0x004:  push   %esi
08228e63 +0x005:  push   %ebx
08228e64 +0x006:  sub    $0xcc,%esp
08228e6a +0x00c:  mov    0xc(%ebp),%eax
08228e6d +0x00f:  mov    %eax,(%esp)
08228e70 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08228e75 +0x017:  cmp    $0x2,%eax
08228e78 +0x01a:  jle    08228e89 <+0x2b>
08228e7a +0x01c:  mov    0xc(%ebp),%eax
08228e7d +0x01f:  mov    %eax,(%esp)
08228e80 +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08228e85 +0x027:  test   %eax,%eax
08228e87 +0x029:  jne    08228e90 <+0x32>
08228e89 +0x02b:  mov    $0x1,%eax
08228e8e +0x030:  jmp    08228e95 <+0x37>
08228e90 +0x032:  mov    $0x0,%eax
08228e95 +0x037:  test   %al,%al
08228e97 +0x039:  je     08228ea3 <+0x45>
08228e99 +0x03b:  mov    $0x0,%ebx
08228e9e +0x040:  jmp    08229636 <+0x7d8>
08228ea3 +0x045:  mov    0xc(%ebp),%eax
08228ea6 +0x048:  mov    %eax,(%esp)
08228ea9 +0x04b:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08228eae +0x050:  test   %al,%al
08228eb0 +0x052:  je     08228ebc <+0x5e>
08228eb2 +0x054:  mov    $0x0,%ebx
08228eb7 +0x059:  jmp    08229636 <+0x7d8>
08228ebc +0x05e:  movw   $0x0,-0x36(%ebp)
08228ec2 +0x064:  lea    -0x36(%ebp),%eax
08228ec5 +0x067:  mov    %eax,0x4(%esp)
08228ec9 +0x06b:  mov    0x10(%ebp),%eax
08228ecc +0x06e:  mov    %eax,(%esp)
08228ecf +0x071:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08228ed4 +0x076:  xor    $0x1,%eax
08228ed7 +0x079:  test   %al,%al
08228ed9 +0x07b:  je     08228f06 <+0xa8>
08228edb +0x07d:  movl   $0x0,0xc(%esp)
08228ee3 +0x085:  movl   $0x0,0x8(%esp)
08228eeb +0x08d:  movl   $&_ZZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08228ef3 +0x095:  movl   $0xe67c,(%esp)
08228efa +0x09c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08228eff +0x0a1:  mov    %eax,%ebx
08228f01 +0x0a3:  jmp    08229636 <+0x7d8>
08228f06 +0x0a8:  movw   $0x0,-0x38(%ebp)
08228f0c +0x0ae:  lea    -0x38(%ebp),%eax
08228f0f +0x0b1:  mov    %eax,0x4(%esp)
08228f13 +0x0b5:  mov    0x10(%ebp),%eax
08228f16 +0x0b8:  mov    %eax,(%esp)
08228f19 +0x0bb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08228f1e +0x0c0:  xor    $0x1,%eax
08228f21 +0x0c3:  test   %al,%al
08228f23 +0x0c5:  je     08228f50 <+0xf2>
08228f25 +0x0c7:  movl   $0x0,0xc(%esp)
08228f2d +0x0cf:  movl   $0x0,0x8(%esp)
08228f35 +0x0d7:  movl   $&_ZZN29Dispatcher_UnsealRandomOption12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08228f3d +0x0df:  movl   $0xe681,(%esp)
08228f44 +0x0e6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08228f49 +0x0eb:  mov    %eax,%ebx
08228f4b +0x0ed:  jmp    08229636 <+0x7d8>
08228f50 +0x0f2:  movzwl -0x36(%ebp),%eax
08228f54 +0x0f6:  cwtl
08228f55 +0x0f7:  mov    %eax,0x8(%esp)
08228f59 +0x0fb:  movl   $0x1,0x4(%esp)
08228f61 +0x103:  mov    0xc(%ebp),%eax
08228f64 +0x106:  mov    %eax,(%esp)
08228f67 +0x109:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08228f6c +0x10e:  test   %al,%al
08228f6e +0x110:  je     08228f95 <+0x137>
08228f70 +0x112:  movl   $0xd5,0x8(%esp)
08228f78 +0x11a:  movl   $0x191,0x4(%esp)
08228f80 +0x122:  mov    0xc(%ebp),%eax
08228f83 +0x125:  mov    %eax,(%esp)
08228f86 +0x128:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08228f8b +0x12d:  mov    $0x0,%ebx
08228f90 +0x132:  jmp    08229636 <+0x7d8>
08228f95 +0x137:  movzwl -0x36(%ebp),%eax
08228f99 +0x13b:  movswl %ax,%ebx
08228f9c +0x13e:  mov    0xc(%ebp),%eax
08228f9f +0x141:  mov    %eax,(%esp)
08228fa2 +0x144:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08228fa7 +0x149:  mov    %ebx,0x8(%esp)
08228fab +0x14d:  movl   $0x1,0x4(%esp)
08228fb3 +0x155:  mov    %eax,(%esp)
08228fb6 +0x158:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08228fbb +0x15d:  mov    %eax,-0x28(%ebp)
08228fbe +0x160:  cmpl   $0x0,-0x28(%ebp)
08228fc2 +0x164:  sete   %al
08228fc5 +0x167:  test   %al,%al
08228fc7 +0x169:  je     08228fee <+0x190>
08228fc9 +0x16b:  movl   $0x11,0x8(%esp)
08228fd1 +0x173:  movl   $0x191,0x4(%esp)
08228fd9 +0x17b:  mov    0xc(%ebp),%eax
08228fdc +0x17e:  mov    %eax,(%esp)
08228fdf +0x181:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08228fe4 +0x186:  mov    $0x0,%ebx
08228fe9 +0x18b:  jmp    08229636 <+0x7d8>
08228fee +0x190:  mov    -0x28(%ebp),%eax
08228ff1 +0x193:  mov    0x2(%eax),%eax
08228ff4 +0x196:  mov    %eax,%ebx
08228ff6 +0x198:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08228ffb +0x19d:  mov    %ebx,0x4(%esp)
08228fff +0x1a1:  mov    %eax,(%esp)
08229002 +0x1a4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08229007 +0x1a9:  mov    %eax,-0x24(%ebp)
0822900a +0x1ac:  cmpl   $0x0,-0x24(%ebp)
0822900e +0x1b0:  jne    08229035 <+0x1d7>
08229010 +0x1b2:  movl   $0x11,0x8(%esp)
08229018 +0x1ba:  movl   $0x191,0x4(%esp)
08229020 +0x1c2:  mov    0xc(%ebp),%eax
08229023 +0x1c5:  mov    %eax,(%esp)
08229026 +0x1c8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822902b +0x1cd:  mov    $0x0,%ebx
08229030 +0x1d2:  jmp    08229636 <+0x7d8>
08229035 +0x1d7:  mov    -0x24(%ebp),%eax
08229038 +0x1da:  mov    %eax,(%esp)
0822903b +0x1dd:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08229040 +0x1e2:  cmp    $0x2,%eax
08229043 +0x1e5:  jg     08229054 <+0x1f6>
08229045 +0x1e7:  mov    -0x28(%ebp),%eax
08229048 +0x1ea:  mov    %eax,(%esp)
0822904b +0x1ed:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08229050 +0x1f2:  cmp    $0xa,%al
08229052 +0x1f4:  jbe    0822905b <+0x1fd>
08229054 +0x1f6:  mov    $0x1,%eax
08229059 +0x1fb:  jmp    08229060 <+0x202>
0822905b +0x1fd:  mov    $0x0,%eax
08229060 +0x202:  test   %al,%al
08229062 +0x204:  je     082290b0 <+0x252>
08229064 +0x206:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08229069 +0x20b:  movl   $0x25,0x8(%esp)
08229071 +0x213:  mov    0xc(%ebp),%edx
08229074 +0x216:  mov    %edx,0x4(%esp)
08229078 +0x21a:  mov    %eax,(%esp)
0822907b +0x21d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08229080 +0x222:  mov    %eax,-0x1c(%ebp)
08229083 +0x225:  cmpl   $0x0,-0x1c(%ebp)
08229087 +0x229:  je     082290b0 <+0x252>
08229089 +0x22b:  mov    -0x1c(%ebp),%eax
0822908c +0x22e:  movzbl %al,%eax
0822908f +0x231:  mov    %eax,0x8(%esp)
08229093 +0x235:  movl   $0x191,0x4(%esp)
0822909b +0x23d:  mov    0xc(%ebp),%eax
0822909e +0x240:  mov    %eax,(%esp)
082290a1 +0x243:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082290a6 +0x248:  mov    $0x0,%ebx
082290ab +0x24d:  jmp    08229636 <+0x7d8>
082290b0 +0x252:  mov    -0x28(%ebp),%eax
082290b3 +0x255:  add    $0x25,%eax
082290b6 +0x258:  mov    %eax,(%esp)
082290b9 +0x25b:  call   0822abd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x27a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x27a
082290be +0x260:  xor    $0x1,%eax
082290c1 +0x263:  test   %al,%al
082290c3 +0x265:  je     082290ea <+0x28c>
082290c5 +0x267:  movl   $0x13,0x8(%esp)
082290cd +0x26f:  movl   $0x191,0x4(%esp)
082290d5 +0x277:  mov    0xc(%ebp),%eax
082290d8 +0x27a:  mov    %eax,(%esp)
082290db +0x27d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082290e0 +0x282:  mov    $0x0,%ebx
082290e5 +0x287:  jmp    08229636 <+0x7d8>
082290ea +0x28c:  movzwl -0x38(%ebp),%eax
082290ee +0x290:  movzwl %ax,%eax
082290f1 +0x293:  mov    %eax,0xc(%esp)
082290f5 +0x297:  mov    -0x28(%ebp),%eax
082290f8 +0x29a:  mov    %eax,0x8(%esp)
082290fc +0x29e:  mov    0xc(%ebp),%eax
082290ff +0x2a1:  mov    %eax,0x4(%esp)
08229103 +0x2a5:  mov    0x8(%ebp),%eax
08229106 +0x2a8:  mov    %eax,(%esp)
08229109 +0x2ab:  call   08229644 <_ZN29Dispatcher_UnsealRandomOption25_check_unseal_scroll_itemEP5CUserPK10Inven_Itemt>  ; Dispatcher_UnsealRandomOption::_check_unseal_scroll_item(CUser*, Inven_Item const*, unsigned short)
0822910e +0x2b0:  mov    %eax,-0x20(%ebp)
08229111 +0x2b3:  cmpl   $0x0,-0x20(%ebp)
08229115 +0x2b7:  je     0822913e <+0x2e0>
08229117 +0x2b9:  mov    -0x20(%ebp),%eax
0822911a +0x2bc:  movzbl %al,%eax
0822911d +0x2bf:  mov    %eax,0x8(%esp)
08229121 +0x2c3:  movl   $0x191,0x4(%esp)
08229129 +0x2cb:  mov    0xc(%ebp),%eax
0822912c +0x2ce:  mov    %eax,(%esp)
0822912f +0x2d1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229134 +0x2d6:  mov    $0x0,%ebx
08229139 +0x2db:  jmp    08229636 <+0x7d8>
0822913e +0x2e0:  mov    -0x24(%ebp),%eax
08229141 +0x2e3:  mov    %eax,(%esp)
08229144 +0x2e6:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08229149 +0x2eb:  mov    %al,-0x3c(%ebp)
0822914c +0x2ee:  mov    -0x24(%ebp),%eax
0822914f +0x2f1:  mov    %eax,(%esp)
08229152 +0x2f4:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
08229157 +0x2f9:  mov    %ax,-0x3a(%ebp)
0822915b +0x2fd:  mov    -0x24(%ebp),%eax
0822915e +0x300:  mov    (%eax),%eax
08229160 +0x302:  add    $0x50,%eax
08229163 +0x305:  mov    (%eax),%edx
08229165 +0x307:  mov    -0x24(%ebp),%eax
08229168 +0x30a:  mov    %eax,(%esp)
0822916b +0x30d:  call   *%edx
0822916d +0x30f:  mov    %al,-0x3b(%ebp)
08229170 +0x312:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229175 +0x317:  lea    0x4f88(%eax),%ecx
0822917b +0x31d:  lea    -0x34(%ebp),%eax
0822917e +0x320:  lea    -0x3c(%ebp),%edx
08229181 +0x323:  mov    %edx,0x8(%esp)
08229185 +0x327:  mov    %ecx,0x4(%esp)
08229189 +0x32b:  mov    %eax,(%esp)
0822918c +0x32e:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08229191 +0x333:  sub    $0x4,%esp
08229194 +0x336:  lea    -0x34(%ebp),%eax
08229197 +0x339:  mov    %eax,0x4(%esp)
0822919b +0x33d:  lea    -0x40(%ebp),%eax
0822919e +0x340:  mov    %eax,(%esp)
082291a1 +0x343:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
082291a6 +0x348:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082291ab +0x34d:  lea    0x4f88(%eax),%edx
082291b1 +0x353:  lea    -0x2c(%ebp),%eax
082291b4 +0x356:  mov    %edx,0x4(%esp)
082291b8 +0x35a:  mov    %eax,(%esp)
082291bb +0x35d:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
082291c0 +0x362:  sub    $0x4,%esp
082291c3 +0x365:  lea    -0x2c(%ebp),%eax
082291c6 +0x368:  mov    %eax,0x4(%esp)
082291ca +0x36c:  lea    -0x30(%ebp),%eax
082291cd +0x36f:  mov    %eax,(%esp)
082291d0 +0x372:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
082291d5 +0x377:  lea    -0x30(%ebp),%eax
082291d8 +0x37a:  mov    %eax,0x4(%esp)
082291dc +0x37e:  lea    -0x40(%ebp),%eax
082291df +0x381:  mov    %eax,(%esp)
082291e2 +0x384:  call   080c7d34 <_GLOBAL__I_g_ServerString_+0x129f>  ; global constructors keyed to g_ServerString_+0x129f
082291e7 +0x389:  test   %al,%al
082291e9 +0x38b:  je     08229210 <+0x3b2>
082291eb +0x38d:  movl   $0x11,0x8(%esp)
082291f3 +0x395:  movl   $0x191,0x4(%esp)
082291fb +0x39d:  mov    0xc(%ebp),%eax
082291fe +0x3a0:  mov    %eax,(%esp)
08229201 +0x3a3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229206 +0x3a8:  mov    $0x0,%ebx
0822920b +0x3ad:  jmp    08229636 <+0x7d8>
08229210 +0x3b2:  movzwl -0x38(%ebp),%eax
08229214 +0x3b6:  cmp    $0xffff,%ax
08229218 +0x3ba:  je     0822927c <+0x41e>
0822921a +0x3bc:  movzwl -0x38(%ebp),%eax
0822921e +0x3c0:  movzwl %ax,%ebx
08229221 +0x3c3:  mov    0xc(%ebp),%eax
08229224 +0x3c6:  mov    %eax,(%esp)
08229227 +0x3c9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822922c +0x3ce:  lea    -0x89(%ebp),%edx
08229232 +0x3d4:  mov    %ebx,0xc(%esp)
08229236 +0x3d8:  movl   $0x1,0x8(%esp)
0822923e +0x3e0:  mov    %eax,0x4(%esp)
08229242 +0x3e4:  mov    %edx,(%esp)
08229245 +0x3e7:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822924a +0x3ec:  sub    $0x4,%esp
0822924d +0x3ef:  mov    -0x82(%ebp),%eax
08229253 +0x3f5:  test   %eax,%eax
08229255 +0x3f7:  jg     082292cb <+0x46d>
08229257 +0x3f9:  movl   $0x16,0x8(%esp)
0822925f +0x401:  movl   $0x191,0x4(%esp)
08229267 +0x409:  mov    0xc(%ebp),%eax
0822926a +0x40c:  mov    %eax,(%esp)
0822926d +0x40f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229272 +0x414:  mov    $0x0,%ebx
08229277 +0x419:  jmp    08229636 <+0x7d8>
0822927c +0x41e:  lea    -0x40(%ebp),%eax
0822927f +0x421:  mov    %eax,(%esp)
08229282 +0x424:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08229287 +0x429:  mov    0x4(%eax),%ebx
0822928a +0x42c:  mov    0xc(%ebp),%eax
0822928d +0x42f:  mov    %eax,(%esp)
08229290 +0x432:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08229295 +0x437:  mov    %eax,(%esp)
08229298 +0x43a:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0822929d +0x43f:  cmp    %eax,%ebx
0822929f +0x441:  setg   %al
082292a2 +0x444:  test   %al,%al
082292a4 +0x446:  je     082292cb <+0x46d>
082292a6 +0x448:  movl   $0xa,0x8(%esp)
082292ae +0x450:  movl   $0x191,0x4(%esp)
082292b6 +0x458:  mov    0xc(%ebp),%eax
082292b9 +0x45b:  mov    %eax,(%esp)
082292bc +0x45e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082292c1 +0x463:  mov    $0x0,%ebx
082292c6 +0x468:  jmp    08229636 <+0x7d8>
082292cb +0x46d:  mov    -0x28(%ebp),%eax
082292ce +0x470:  add    $0x25,%eax
082292d1 +0x473:  mov    %eax,-0x9c(%ebp)
082292d7 +0x479:  mov    -0x24(%ebp),%eax
082292da +0x47c:  mov    (%eax),%eax
082292dc +0x47e:  add    $0x50,%eax
082292df +0x481:  mov    (%eax),%edx
082292e1 +0x483:  mov    -0x24(%ebp),%eax
082292e4 +0x486:  mov    %eax,(%esp)
082292e7 +0x489:  call   *%edx
082292e9 +0x48b:  mov    %eax,%edi
082292eb +0x48d:  mov    -0x24(%ebp),%eax
082292ee +0x490:  mov    %eax,(%esp)
082292f1 +0x493:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
082292f6 +0x498:  mov    %eax,%esi
082292f8 +0x49a:  mov    -0x24(%ebp),%eax
082292fb +0x49d:  mov    %eax,(%esp)
082292fe +0x4a0:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
08229303 +0x4a5:  mov    %eax,%ebx
08229305 +0x4a7:  mov    -0x24(%ebp),%eax
08229308 +0x4aa:  mov    %eax,(%esp)
0822930b +0x4ad:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08229310 +0x4b2:  mov    %eax,%edx
08229312 +0x4b4:  mov    -0x28(%ebp),%eax
08229315 +0x4b7:  mov    0x2(%eax),%ecx
08229318 +0x4ba:  mov    &_ZN10GlobalData20g_randomOptionHandleE,%eax
0822931d +0x4bf:  mov    %eax,-0xac(%ebp)
08229323 +0x4c5:  mov    -0x9c(%ebp),%eax
08229329 +0x4cb:  mov    %eax,0x18(%esp)
0822932d +0x4cf:  mov    %edi,0x14(%esp)
08229331 +0x4d3:  mov    %esi,0x10(%esp)
08229335 +0x4d7:  mov    %ebx,0xc(%esp)
08229339 +0x4db:  mov    %edx,0x8(%esp)
0822933d +0x4df:  mov    %ecx,0x4(%esp)
08229341 +0x4e3:  mov    -0xac(%ebp),%eax
08229347 +0x4e9:  mov    %eax,(%esp)
0822934a +0x4ec:  call   085f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>  ; random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*)
0822934f +0x4f1:  xor    $0x1,%eax
08229352 +0x4f4:  test   %al,%al
08229354 +0x4f6:  je     0822937b <+0x51d>
08229356 +0x4f8:  movl   $0x13,0x8(%esp)
0822935e +0x500:  movl   $0x191,0x4(%esp)
08229366 +0x508:  mov    0xc(%ebp),%eax
08229369 +0x50b:  mov    %eax,(%esp)
0822936c +0x50e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229371 +0x513:  mov    $0x0,%ebx
08229376 +0x518:  jmp    08229636 <+0x7d8>
0822937b +0x51d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08229382 +0x524:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
08229387 +0x529:  mov    %eax,%ebx
08229389 +0x52b:  mov    0xc(%ebp),%eax
0822938c +0x52e:  mov    %eax,(%esp)
0822938f +0x531:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
08229394 +0x536:  mov    %ebx,0x18(%esp)
08229398 +0x53a:  mov    %eax,0x14(%esp)
0822939c +0x53e:  movl   $"%d,'%s'",0x10(%esp)
082293a4 +0x546:  movl   $0x1,0xc(%esp)
082293ac +0x54e:  movl   $"unseal_cnt",0x8(%esp)
082293b4 +0x556:  movl   $"log_random_option",0x4(%esp)
082293bc +0x55e:  mov    0xc(%ebp),%eax
082293bf +0x561:  mov    %eax,(%esp)
082293c2 +0x564:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
082293c7 +0x569:  mov    0xc(%ebp),%eax
082293ca +0x56c:  lea    0x79700(%eax),%edx
082293d0 +0x572:  movl   $0x0,0x8(%esp)
082293d8 +0x57a:  mov    -0x28(%ebp),%eax
082293db +0x57d:  mov    %eax,0x4(%esp)
082293df +0x581:  mov    %edx,(%esp)
082293e2 +0x584:  call   08682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>  ; cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T)
082293e7 +0x589:  movzwl -0x38(%ebp),%eax
082293eb +0x58d:  cmp    $0xffff,%ax
082293ef +0x591:  je     0822947c <+0x61e>
082293f5 +0x597:  movzwl -0x38(%ebp),%eax
082293f9 +0x59b:  movzwl %ax,%ebx
082293fc +0x59e:  mov    0xc(%ebp),%eax
082293ff +0x5a1:  mov    %eax,(%esp)
08229402 +0x5a4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08229407 +0x5a9:  movl   $0x1,0xc(%esp)
0822940f +0x5b1:  movl   $0x1,0x8(%esp)
08229417 +0x5b9:  mov    %ebx,0x4(%esp)
0822941b +0x5bd:  mov    %eax,(%esp)
0822941e +0x5c0:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
08229423 +0x5c5:  test   %eax,%eax
08229425 +0x5c7:  setne  %al
08229428 +0x5ca:  test   %al,%al
0822942a +0x5cc:  je     08229451 <+0x5f3>
0822942c +0x5ce:  movl   $0x16,0x8(%esp)
08229434 +0x5d6:  movl   $0x191,0x4(%esp)
0822943c +0x5de:  mov    0xc(%ebp),%eax
0822943f +0x5e1:  mov    %eax,(%esp)
08229442 +0x5e4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229447 +0x5e9:  mov    $0x0,%ebx
0822944c +0x5ee:  jmp    08229636 <+0x7d8>
08229451 +0x5f3:  movzwl -0x38(%ebp),%eax
08229455 +0x5f7:  movzwl %ax,%eax
08229458 +0x5fa:  mov    %eax,0xc(%esp)
0822945c +0x5fe:  movl   $0x0,0x8(%esp)
08229464 +0x606:  movl   $0x1,0x4(%esp)
0822946c +0x60e:  mov    0xc(%ebp),%eax
0822946f +0x611:  mov    %eax,(%esp)
08229472 +0x614:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08229477 +0x619:  jmp    08229535 <+0x6d7>
0822947c +0x61e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08229483 +0x625:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
08229488 +0x62a:  mov    %eax,%esi
0822948a +0x62c:  mov    0xc(%ebp),%eax
0822948d +0x62f:  mov    %eax,(%esp)
08229490 +0x632:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
08229495 +0x637:  mov    %eax,%ebx
08229497 +0x639:  lea    -0x40(%ebp),%eax
0822949a +0x63c:  mov    %eax,(%esp)
0822949d +0x63f:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
082294a2 +0x644:  mov    0x4(%eax),%eax
082294a5 +0x647:  mov    %esi,0x18(%esp)
082294a9 +0x64b:  mov    %ebx,0x14(%esp)
082294ad +0x64f:  movl   $"%d,'%s'",0x10(%esp)
082294b5 +0x657:  mov    %eax,0xc(%esp)
082294b9 +0x65b:  movl   $"unseal_gold",0x8(%esp)
082294c1 +0x663:  movl   $"log_random_option",0x4(%esp)
082294c9 +0x66b:  mov    0xc(%ebp),%eax
082294cc +0x66e:  mov    %eax,(%esp)
082294cf +0x671:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
082294d4 +0x676:  lea    -0x40(%ebp),%eax
082294d7 +0x679:  mov    %eax,(%esp)
082294da +0x67c:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
082294df +0x681:  mov    0x4(%eax),%ebx
082294e2 +0x684:  mov    0xc(%ebp),%eax
082294e5 +0x687:  mov    %eax,(%esp)
082294e8 +0x68a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082294ed +0x68f:  movl   $0x1,0xc(%esp)
082294f5 +0x697:  movl   $0x2c,0x8(%esp)
082294fd +0x69f:  mov    %ebx,0x4(%esp)
08229501 +0x6a3:  mov    %eax,(%esp)
08229504 +0x6a6:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08229509 +0x6ab:  xor    $0x1,%eax
0822950c +0x6ae:  test   %al,%al
0822950e +0x6b0:  je     08229535 <+0x6d7>
08229510 +0x6b2:  movl   $0xa,0x8(%esp)
08229518 +0x6ba:  movl   $0x191,0x4(%esp)
08229520 +0x6c2:  mov    0xc(%ebp),%eax
08229523 +0x6c5:  mov    %eax,(%esp)
08229526 +0x6c8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822952b +0x6cd:  mov    $0x0,%ebx
08229530 +0x6d2:  jmp    08229636 <+0x7d8>
08229535 +0x6d7:  movl   $0x0,0xc(%esp)
0822953d +0x6df:  movl   $0x0,0x8(%esp)
08229545 +0x6e7:  movl   $0x1,0x4(%esp)
0822954d +0x6ef:  mov    0xc(%ebp),%eax
08229550 +0x6f2:  mov    %eax,(%esp)
08229553 +0x6f5:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08229558 +0x6fa:  movl   $0x191,0x4(%esp)
08229560 +0x702:  mov    0xc(%ebp),%eax
08229563 +0x705:  mov    %eax,(%esp)
08229566 +0x708:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
0822956b +0x70d:  lea    -0x4c(%ebp),%eax
0822956e +0x710:  mov    %eax,(%esp)
08229571 +0x713:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08229576 +0x718:  movl   $0xe,0x8(%esp)
0822957e +0x720:  movl   $0x0,0x4(%esp)
08229586 +0x728:  lea    -0x4c(%ebp),%eax
08229589 +0x72b:  mov    %eax,(%esp)
0822958c +0x72e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08229591 +0x733:  movl   $0x0,0x4(%esp)
08229599 +0x73b:  lea    -0x4c(%ebp),%eax
0822959c +0x73e:  mov    %eax,(%esp)
0822959f +0x741:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082295a4 +0x746:  movl   $0x1,0x4(%esp)
082295ac +0x74e:  lea    -0x4c(%ebp),%eax
082295af +0x751:  mov    %eax,(%esp)
082295b2 +0x754:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082295b7 +0x759:  movzwl -0x36(%ebp),%eax
082295bb +0x75d:  movswl %ax,%ebx
082295be +0x760:  mov    0xc(%ebp),%eax
082295c1 +0x763:  mov    %eax,(%esp)
082295c4 +0x766:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082295c9 +0x76b:  lea    -0x4c(%ebp),%edx
082295cc +0x76e:  mov    %edx,0xc(%esp)
082295d0 +0x772:  mov    %ebx,0x8(%esp)
082295d4 +0x776:  movl   $0x1,0x4(%esp)
082295dc +0x77e:  mov    %eax,(%esp)
082295df +0x781:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
082295e4 +0x786:  movl   $0x1,0x4(%esp)
082295ec +0x78e:  lea    -0x4c(%ebp),%eax
082295ef +0x791:  mov    %eax,(%esp)
082295f2 +0x794:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082295f7 +0x799:  lea    -0x4c(%ebp),%eax
082295fa +0x79c:  mov    %eax,0x4(%esp)
082295fe +0x7a0:  mov    0xc(%ebp),%eax
08229601 +0x7a3:  mov    %eax,(%esp)
08229604 +0x7a6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08229609 +0x7ab:  mov    $0x0,%ebx
0822960e +0x7b0:  lea    -0x4c(%ebp),%eax
08229611 +0x7b3:  mov    %eax,(%esp)
08229614 +0x7b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08229619 +0x7bb:  jmp    08229636 <+0x7d8>
0822961b +0x7bd:  mov    %edx,%ebx
0822961d +0x7bf:  mov    %eax,%esi
0822961f +0x7c1:  lea    -0x4c(%ebp),%eax
08229622 +0x7c4:  mov    %eax,(%esp)
08229625 +0x7c7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822962a +0x7cc:  mov    %esi,%eax
0822962c +0x7ce:  mov    %ebx,%edx
0822962e +0x7d0:  mov    %eax,(%esp)
08229631 +0x7d3:  call   08ae3750 <_Unwind_Resume>
08229636 +0x7d8:  mov    %ebx,%eax
08229638 +0x7da:  lea    -0xc(%ebp),%esp
0822963b +0x7dd:  add    $0x0,%esp
0822963e +0x7e0:  pop    %ebx
0822963f +0x7e1:  pop    %esi
08229640 +0x7e2:  pop    %edi
08229641 +0x7e3:  pop    %ebp
08229642 +0x7e4:  ret
08229643 +0x7e5:  nop
```

## 反编译 C

```c
// Dispatcher_UnsealRandomOption::dispatch_sig @ 0x8228e5e

/* Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UnsealRandomOption::dispatch_sig
          (Dispatcher_UnsealRandomOption *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  CDataManager *this_00;
  uint uVar7;
  _Rb_tree_const_iterator *p_Var8;
  int iVar9;
  Inven_Item *pIVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 local_8d [7];
  int local_86;
  PacketGuard local_50 [12];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_44 [4];
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  ushort local_3c;
  short local_3a;
  _Rb_tree_iterator local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  Inven_Item *local_2c;
  CItem *local_28;
  uint local_24;
  uint local_20;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  cVar2 = CUser::CheckInTrade(param_1);
  if (cVar2 != '\0') {
    return 0;
  }
  local_3a = 0;
  cVar2 = PacketBuf::get_short(param_2,&local_3a);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xe67c,
                     "virtual int Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar5;
  }
  local_3c = 0;
  cVar2 = PacketBuf::get_short(param_2,&local_3c);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xe681,
                     "virtual int Dispatcher_UnsealRandomOption::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar5;
  }
  cVar2 = CUser::CheckItemLock(param_1,1,(int)local_3a);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x191,0xd5);
    return 0;
  }
  iVar4 = (int)local_3a;
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_2c = (Inven_Item *)CInventory::GetInvenRef(pCVar6,1,iVar4);
  if (local_2c == (Inven_Item *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x191,0x11);
    return 0;
  }
  iVar4 = *(int *)(local_2c + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_28 = (CItem *)CDataManager::find_item(this_00,iVar4);
  if (local_28 != (CItem *)0x0) {
    iVar4 = CItem::get_rarity(local_28);
    if ((iVar4 < 3) && (bVar3 = Inven_Item::GetUpgrade(local_2c), bVar3 < 0xb)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x25),
       local_20 != 0)) {
      CUser::SendCmdErrorPacket(param_1,0x191,local_20 & 0xff);
      return 0;
    }
    cVar2 = RandomOption::empty((RandomOption *)(local_2c + 0x25));
    if (cVar2 == '\x01') {
      uVar7 = (uint)local_3c;
      local_24 = _check_unseal_scroll_item(this,param_1,local_2c,local_3c);
      if (local_24 == 0) {
        local_40 = CItem::get_rarity(local_28);
        local_3e = CItem::getUsableLevel(local_28);
        local_3f = (**(code **)(*(int *)local_28 + 0x50))(local_28);
        G_CDataManager();
        puVar14 = &local_40;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_38);
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                  (local_44,local_38);
        G_CDataManager();
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                  (local_34,(_Rb_tree_iterator *)local_30);
        p_Var8 = (_Rb_tree_const_iterator *)local_34;
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator==(local_44,p_Var8);
        if (cVar2 == '\0') {
          if (local_3c == 0xffff) {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_44);
            iVar4 = *(int *)(iVar4 + 4);
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar9 = CInventory::get_money(pCVar6);
            if (iVar9 < iVar4) {
              CUser::SendCmdErrorPacket(param_1,0x191,10);
              return 0;
            }
          }
          else {
            uVar7 = (uint)local_3c;
            p_Var8 = (_Rb_tree_const_iterator *)
                     CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            puVar14 = (undefined1 *)0x1;
            CInventory::GetInvenSlot((int)local_8d,(int)p_Var8);
            if (local_86 < 1) {
              CUser::SendCmdErrorPacket(param_1,0x191,0x16);
              return 0;
            }
          }
          pIVar10 = local_2c + 0x25;
          uVar5 = (**(code **)(*(int *)local_28 + 0x50))(local_28,p_Var8,puVar14,uVar7);
          uVar11 = CItem::getItemGroupName(local_28);
          uVar12 = CItem::getUsableLevel(local_28);
          uVar13 = CItem::get_rarity(local_28);
          cVar2 = random_option::CRandomOptionItemHandle::give_option
                            (GlobalData::g_randomOptionHandle,*(undefined4 *)(local_2c + 2),uVar13,
                             uVar12,uVar11,uVar5,pIVar10);
          if (cVar2 == '\x01') {
            uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
            uVar11 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
            statistc_proxy::add(param_1,"log_random_option","unseal_cnt",1,"%d,\'%s\'",uVar11,uVar5)
            ;
            cUserHistoryLog::RandomOption((cUserHistoryLog *)(param_1 + 0x79700),local_2c,0);
            if (local_3c == 0xffff) {
              uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
              uVar11 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
              iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_44);
              statistc_proxy::add(param_1,"log_random_option","unseal_gold",*(uint *)(iVar4 + 4),
                                  "%d,\'%s\'",uVar11,uVar5);
              iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_44);
              uVar5 = *(undefined4 *)(iVar4 + 4);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar2 = CInventory::use_money(pCVar6,uVar5,0x2c,1);
              if (cVar2 != '\x01') {
                CUser::SendCmdErrorPacket(param_1,0x191,10);
                return 0;
              }
            }
            else {
              uVar7 = (uint)local_3c;
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              iVar4 = CInventory::use_item(pCVar6,uVar7,1,1);
              if (iVar4 != 0) {
                CUser::SendCmdErrorPacket(param_1,0x191,0x16);
                return 0;
              }
              CUser::SendUpdateItem(param_1,1,0,local_3c);
            }
            CUser::SendUpdateItemList(param_1,1,0,0);
            CUser::SendCmdOkPacket(param_1,0x191);
            PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0822958c to 08229608 has its CatchHandler @ 0822961b */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
            iVar4 = (int)local_3a;
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::MakeItemPacket(pCVar6,1,iVar4,local_50);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
            CUser::Send(param_1,local_50);
            PacketGuard::~PacketGuard(local_50);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x191,0x13);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x191,0x11);
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x191,local_24 & 0xff);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x191,0x13);
    }
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0x191,0x11);
  return 0;
}
```
