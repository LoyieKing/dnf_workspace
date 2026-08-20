# dispatch_sig

`_ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ModItemAttr::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ModItemAttr` | `0x08200b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08200b08  _ZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ModItemAttr::dispatch_sig(CUser*, PacketBuf&)
# range [0x08200b08, 0x08201937]
08200b08 +0x000:  push   %ebp
08200b09 +0x001:  mov    %esp,%ebp
08200b0b +0x003:  push   %edi
08200b0c +0x004:  push   %esi
08200b0d +0x005:  push   %ebx
08200b0e +0x006:  sub    $0x1ac,%esp
08200b14 +0x00c:  mov    0xc(%ebp),%eax
08200b17 +0x00f:  mov    %eax,(%esp)
08200b1a +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08200b1f +0x017:  cmp    $0x3,%eax
08200b22 +0x01a:  jne    08200b33 <+0x2b>
08200b24 +0x01c:  mov    0xc(%ebp),%eax
08200b27 +0x01f:  mov    %eax,(%esp)
08200b2a +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08200b2f +0x027:  test   %eax,%eax
08200b31 +0x029:  jne    08200b3a <+0x32>
08200b33 +0x02b:  mov    $0x1,%eax
08200b38 +0x030:  jmp    08200b3f <+0x37>
08200b3a +0x032:  mov    $0x0,%eax
08200b3f +0x037:  test   %al,%al
08200b41 +0x039:  je     08200bdb <+0xd3>
08200b47 +0x03f:  mov    0xc(%ebp),%eax
08200b4a +0x042:  mov    %eax,(%esp)
08200b4d +0x045:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08200b52 +0x04a:  movl   $0x0,0x4(%esp)
08200b5a +0x052:  mov    %eax,(%esp)
08200b5d +0x055:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08200b62 +0x05a:  mov    %eax,%ebx
08200b64 +0x05c:  mov    0xc(%ebp),%eax
08200b67 +0x05f:  mov    %eax,(%esp)
08200b6a +0x062:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08200b6f +0x067:  mov    %eax,%esi
08200b71 +0x069:  movl   $0x5,0xc(%esp)
08200b79 +0x071:  movl   $0x95db,0x8(%esp)
08200b81 +0x079:  movl   $&_ZZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200b89 +0x081:  lea    -0x58(%ebp),%eax
08200b8c +0x084:  mov    %eax,(%esp)
08200b8f +0x087:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08200b94 +0x08c:  mov    %ebx,0xc(%esp)
08200b98 +0x090:  mov    %esi,0x8(%esp)
08200b9c +0x094:  movl   $"Dispatcher_ModItemAttr => User State : %d, m_id : %s",0x4(%esp)
08200ba4 +0x09c:  lea    -0x58(%ebp),%eax
08200ba7 +0x09f:  mov    %eax,(%esp)
08200baa +0x0a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08200baf +0x0a7:  movl   $0x4,(%esp)
08200bb6 +0x0ae:  call   08725800 <__cxa_allocate_exception>
08200bbb +0x0b3:  mov    %eax,%edx
08200bbd +0x0b5:  movl   $0x0,(%edx)
08200bc3 +0x0bb:  movl   $0x0,0x8(%esp)
08200bcb +0x0c3:  movl   $&_ZTIi,0x4(%esp)
08200bd3 +0x0cb:  mov    %eax,(%esp)
08200bd6 +0x0ce:  call   08724c50 <__cxa_throw>
08200bdb +0x0d3:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08200be0 +0x0d8:  movl   $0xf,0xc(%esp)
08200be8 +0x0e0:  movl   $0x1,0x8(%esp)
08200bf0 +0x0e8:  mov    0xc(%ebp),%edx
08200bf3 +0x0eb:  mov    %edx,0x4(%esp)
08200bf7 +0x0ef:  mov    %eax,(%esp)
08200bfa +0x0f2:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08200bff +0x0f7:  test   %al,%al
08200c01 +0x0f9:  je     08200c28 <+0x120>
08200c03 +0x0fb:  movl   $0xd1,0x8(%esp)
08200c0b +0x103:  movl   $0x54,0x4(%esp)
08200c13 +0x10b:  mov    0xc(%ebp),%eax
08200c16 +0x10e:  mov    %eax,(%esp)
08200c19 +0x111:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08200c1e +0x116:  mov    $0x0,%ebx
08200c23 +0x11b:  jmp    0820192b <+0xe23>
08200c28 +0x120:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08200c2d +0x125:  movl   $0x26,0x8(%esp)
08200c35 +0x12d:  mov    0xc(%ebp),%edx
08200c38 +0x130:  mov    %edx,0x4(%esp)
08200c3c +0x134:  mov    %eax,(%esp)
08200c3f +0x137:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08200c44 +0x13c:  mov    %eax,-0x40(%ebp)
08200c47 +0x13f:  cmpl   $0x0,-0x40(%ebp)
08200c4b +0x143:  je     08200c74 <+0x16c>
08200c4d +0x145:  mov    -0x40(%ebp),%eax
08200c50 +0x148:  movzbl %al,%eax
08200c53 +0x14b:  mov    %eax,0x8(%esp)
08200c57 +0x14f:  movl   $0x54,0x4(%esp)
08200c5f +0x157:  mov    0xc(%ebp),%eax
08200c62 +0x15a:  mov    %eax,(%esp)
08200c65 +0x15d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08200c6a +0x162:  mov    $0x0,%ebx
08200c6f +0x167:  jmp    0820192b <+0xe23>
08200c74 +0x16c:  mov    0xc(%ebp),%eax
08200c77 +0x16f:  mov    %eax,(%esp)
08200c7a +0x172:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08200c7f +0x177:  test   %al,%al
08200c81 +0x179:  je     08200c8d <+0x185>
08200c83 +0x17b:  mov    $0x0,%ebx
08200c88 +0x180:  jmp    0820192b <+0xe23>
08200c8d +0x185:  lea    -0x6d(%ebp),%eax
08200c90 +0x188:  add    $0xd,%eax
08200c93 +0x18b:  mov    %eax,0x4(%esp)
08200c97 +0x18f:  mov    0x10(%ebp),%eax
08200c9a +0x192:  mov    %eax,(%esp)
08200c9d +0x195:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08200ca2 +0x19a:  xor    $0x1,%eax
08200ca5 +0x19d:  test   %al,%al
08200ca7 +0x19f:  jne    08200ce1 <+0x1d9>
08200ca9 +0x1a1:  lea    -0x6d(%ebp),%eax
08200cac +0x1a4:  add    $0xf,%eax
08200caf +0x1a7:  mov    %eax,0x4(%esp)
08200cb3 +0x1ab:  mov    0x10(%ebp),%eax
08200cb6 +0x1ae:  mov    %eax,(%esp)
08200cb9 +0x1b1:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
08200cbe +0x1b6:  xor    $0x1,%eax
08200cc1 +0x1b9:  test   %al,%al
08200cc3 +0x1bb:  jne    08200ce1 <+0x1d9>
08200cc5 +0x1bd:  lea    -0x6d(%ebp),%eax
08200cc8 +0x1c0:  add    $0x13,%eax
08200ccb +0x1c3:  mov    %eax,0x4(%esp)
08200ccf +0x1c7:  mov    0x10(%ebp),%eax
08200cd2 +0x1ca:  mov    %eax,(%esp)
08200cd5 +0x1cd:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08200cda +0x1d2:  xor    $0x1,%eax
08200cdd +0x1d5:  test   %al,%al
08200cdf +0x1d7:  je     08200ce8 <+0x1e0>
08200ce1 +0x1d9:  mov    $0x1,%eax
08200ce6 +0x1de:  jmp    08200ced <+0x1e5>
08200ce8 +0x1e0:  mov    $0x0,%eax
08200ced +0x1e5:  test   %al,%al
08200cef +0x1e7:  je     08200d1d <+0x215>
08200cf1 +0x1e9:  movl   $0x4,(%esp)
08200cf8 +0x1f0:  call   08725800 <__cxa_allocate_exception>
08200cfd +0x1f5:  mov    %eax,%edx
08200cff +0x1f7:  movl   $0xffffffff,(%edx)
08200d05 +0x1fd:  movl   $0x0,0x8(%esp)
08200d0d +0x205:  movl   $&_ZTIi,0x4(%esp)
08200d15 +0x20d:  mov    %eax,(%esp)
08200d18 +0x210:  call   08724c50 <__cxa_throw>
08200d1d +0x215:  mov    0xc(%ebp),%eax
08200d20 +0x218:  mov    %eax,(%esp)
08200d23 +0x21b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08200d28 +0x220:  mov    %eax,-0x3c(%ebp)
08200d2b +0x223:  lea    -0xaa(%ebp),%eax
08200d31 +0x229:  mov    %eax,(%esp)
08200d34 +0x22c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08200d39 +0x231:  movzwl -0x60(%ebp),%eax
08200d3d +0x235:  movzwl %ax,%edx
08200d40 +0x238:  lea    -0x168(%ebp),%eax
08200d46 +0x23e:  mov    %edx,0xc(%esp)
08200d4a +0x242:  movl   $0x1,0x8(%esp)
08200d52 +0x24a:  mov    -0x3c(%ebp),%edx
08200d55 +0x24d:  mov    %edx,0x4(%esp)
08200d59 +0x251:  mov    %eax,(%esp)
08200d5c +0x254:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08200d61 +0x259:  sub    $0x4,%esp
08200d64 +0x25c:  mov    -0x168(%ebp),%eax
08200d6a +0x262:  mov    %eax,-0xaa(%ebp)
08200d70 +0x268:  mov    -0x164(%ebp),%eax
08200d76 +0x26e:  mov    %eax,-0xa6(%ebp)
08200d7c +0x274:  mov    -0x160(%ebp),%eax
08200d82 +0x27a:  mov    %eax,-0xa2(%ebp)
08200d88 +0x280:  mov    -0x15c(%ebp),%eax
08200d8e +0x286:  mov    %eax,-0x9e(%ebp)
08200d94 +0x28c:  mov    -0x158(%ebp),%eax
08200d9a +0x292:  mov    %eax,-0x9a(%ebp)
08200da0 +0x298:  mov    -0x154(%ebp),%eax
08200da6 +0x29e:  mov    %eax,-0x96(%ebp)
08200dac +0x2a4:  mov    -0x150(%ebp),%eax
08200db2 +0x2aa:  mov    %eax,-0x92(%ebp)
08200db8 +0x2b0:  mov    -0x14c(%ebp),%eax
08200dbe +0x2b6:  mov    %eax,-0x8e(%ebp)
08200dc4 +0x2bc:  mov    -0x148(%ebp),%eax
08200dca +0x2c2:  mov    %eax,-0x8a(%ebp)
08200dd0 +0x2c8:  mov    -0x144(%ebp),%eax
08200dd6 +0x2ce:  mov    %eax,-0x86(%ebp)
08200ddc +0x2d4:  mov    -0x140(%ebp),%eax
08200de2 +0x2da:  mov    %eax,-0x82(%ebp)
08200de8 +0x2e0:  mov    -0x13c(%ebp),%eax
08200dee +0x2e6:  mov    %eax,-0x7e(%ebp)
08200df1 +0x2e9:  mov    -0x138(%ebp),%eax
08200df7 +0x2ef:  mov    %eax,-0x7a(%ebp)
08200dfa +0x2f2:  mov    -0x134(%ebp),%eax
08200e00 +0x2f8:  mov    %eax,-0x76(%ebp)
08200e03 +0x2fb:  mov    -0x130(%ebp),%eax
08200e09 +0x301:  mov    %eax,-0x72(%ebp)
08200e0c +0x304:  movzbl -0x12c(%ebp),%eax
08200e13 +0x30b:  mov    %al,-0x6e(%ebp)
08200e16 +0x30e:  lea    -0xaa(%ebp),%eax
08200e1c +0x314:  mov    %eax,(%esp)
08200e1f +0x317:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08200e24 +0x31c:  test   %al,%al
08200e26 +0x31e:  je     08200e54 <+0x34c>
08200e28 +0x320:  movl   $0x4,(%esp)
08200e2f +0x327:  call   08725800 <__cxa_allocate_exception>
08200e34 +0x32c:  mov    %eax,%edx
08200e36 +0x32e:  movl   $0x4,(%edx)
08200e3c +0x334:  movl   $0x0,0x8(%esp)
08200e44 +0x33c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08200e4c +0x344:  mov    %eax,(%esp)
08200e4f +0x347:  call   08724c50 <__cxa_throw>
08200e54 +0x34c:  mov    -0xa8(%ebp),%edx
08200e5a +0x352:  mov    -0x5e(%ebp),%eax
08200e5d +0x355:  cmp    %eax,%edx
08200e5f +0x357:  je     08200e8d <+0x385>
08200e61 +0x359:  movl   $0x4,(%esp)
08200e68 +0x360:  call   08725800 <__cxa_allocate_exception>
08200e6d +0x365:  mov    %eax,%edx
08200e6f +0x367:  movl   $0x4,(%edx)
08200e75 +0x36d:  movl   $0x0,0x8(%esp)
08200e7d +0x375:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08200e85 +0x37d:  mov    %eax,(%esp)
08200e88 +0x380:  call   08724c50 <__cxa_throw>
08200e8d +0x385:  movzbl -0xa9(%ebp),%eax
08200e94 +0x38c:  cmp    $0x1,%al
08200e96 +0x38e:  je     08200ec4 <+0x3bc>
08200e98 +0x390:  movl   $0x4,(%esp)
08200e9f +0x397:  call   08725800 <__cxa_allocate_exception>
08200ea4 +0x39c:  mov    %eax,%edx
08200ea6 +0x39e:  movl   $0x13,(%edx)
08200eac +0x3a4:  movl   $0x0,0x8(%esp)
08200eb4 +0x3ac:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08200ebc +0x3b4:  mov    %eax,(%esp)
08200ebf +0x3b7:  call   08724c50 <__cxa_throw>
08200ec4 +0x3bc:  mov    -0xa8(%ebp),%eax
08200eca +0x3c2:  mov    %eax,%ebx
08200ecc +0x3c4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08200ed1 +0x3c9:  mov    %ebx,0x4(%esp)
08200ed5 +0x3cd:  mov    %eax,(%esp)
08200ed8 +0x3d0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08200edd +0x3d5:  mov    %eax,-0x38(%ebp)
08200ee0 +0x3d8:  cmpl   $0x0,-0x38(%ebp)
08200ee4 +0x3dc:  jne    08200f12 <+0x40a>
08200ee6 +0x3de:  movl   $0x4,(%esp)
08200eed +0x3e5:  call   08725800 <__cxa_allocate_exception>
08200ef2 +0x3ea:  mov    %eax,%edx
08200ef4 +0x3ec:  movl   $0x4,(%edx)
08200efa +0x3f2:  movl   $0x0,0x8(%esp)
08200f02 +0x3fa:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08200f0a +0x402:  mov    %eax,(%esp)
08200f0d +0x405:  call   08724c50 <__cxa_throw>
08200f12 +0x40a:  mov    -0x38(%ebp),%eax
08200f15 +0x40d:  mov    (%eax),%eax
08200f17 +0x40f:  add    $0xc,%eax
08200f1a +0x412:  mov    (%eax),%edx
08200f1c +0x414:  mov    -0x38(%ebp),%eax
08200f1f +0x417:  mov    %eax,(%esp)
08200f22 +0x41a:  call   *%edx
08200f24 +0x41c:  cmp    $0x9,%eax
08200f27 +0x41f:  jle    08200f40 <+0x438>
08200f29 +0x421:  mov    -0x38(%ebp),%eax
08200f2c +0x424:  mov    (%eax),%eax
08200f2e +0x426:  add    $0xc,%eax
08200f31 +0x429:  mov    (%eax),%edx
08200f33 +0x42b:  mov    -0x38(%ebp),%eax
08200f36 +0x42e:  mov    %eax,(%esp)
08200f39 +0x431:  call   *%edx
08200f3b +0x433:  cmp    $0x15,%eax
08200f3e +0x436:  jle    08200f47 <+0x43f>
08200f40 +0x438:  mov    $0x1,%eax
08200f45 +0x43d:  jmp    08200f4c <+0x444>
08200f47 +0x43f:  mov    $0x0,%eax
08200f4c +0x444:  test   %al,%al
08200f4e +0x446:  je     08200f7c <+0x474>
08200f50 +0x448:  movl   $0x4,(%esp)
08200f57 +0x44f:  call   08725800 <__cxa_allocate_exception>
08200f5c +0x454:  mov    %eax,%edx
08200f5e +0x456:  movl   $0x13,(%edx)
08200f64 +0x45c:  movl   $0x0,0x8(%esp)
08200f6c +0x464:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08200f74 +0x46c:  mov    %eax,(%esp)
08200f77 +0x46f:  call   08724c50 <__cxa_throw>
08200f7c +0x474:  lea    -0xe7(%ebp),%eax
08200f82 +0x47a:  mov    %eax,(%esp)
08200f85 +0x47d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08200f8a +0x482:  movzwl -0x5a(%ebp),%eax
08200f8e +0x486:  movzwl %ax,%edx
08200f91 +0x489:  lea    -0x168(%ebp),%eax
08200f97 +0x48f:  mov    %edx,0xc(%esp)
08200f9b +0x493:  movl   $0x1,0x8(%esp)
08200fa3 +0x49b:  mov    -0x3c(%ebp),%edx
08200fa6 +0x49e:  mov    %edx,0x4(%esp)
08200faa +0x4a2:  mov    %eax,(%esp)
08200fad +0x4a5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08200fb2 +0x4aa:  sub    $0x4,%esp
08200fb5 +0x4ad:  mov    -0x168(%ebp),%eax
08200fbb +0x4b3:  mov    %eax,-0xe7(%ebp)
08200fc1 +0x4b9:  mov    -0x164(%ebp),%eax
08200fc7 +0x4bf:  mov    %eax,-0xe3(%ebp)
08200fcd +0x4c5:  mov    -0x160(%ebp),%eax
08200fd3 +0x4cb:  mov    %eax,-0xdf(%ebp)
08200fd9 +0x4d1:  mov    -0x15c(%ebp),%eax
08200fdf +0x4d7:  mov    %eax,-0xdb(%ebp)
08200fe5 +0x4dd:  mov    -0x158(%ebp),%eax
08200feb +0x4e3:  mov    %eax,-0xd7(%ebp)
08200ff1 +0x4e9:  mov    -0x154(%ebp),%eax
08200ff7 +0x4ef:  mov    %eax,-0xd3(%ebp)
08200ffd +0x4f5:  mov    -0x150(%ebp),%eax
08201003 +0x4fb:  mov    %eax,-0xcf(%ebp)
08201009 +0x501:  mov    -0x14c(%ebp),%eax
0820100f +0x507:  mov    %eax,-0xcb(%ebp)
08201015 +0x50d:  mov    -0x148(%ebp),%eax
0820101b +0x513:  mov    %eax,-0xc7(%ebp)
08201021 +0x519:  mov    -0x144(%ebp),%eax
08201027 +0x51f:  mov    %eax,-0xc3(%ebp)
0820102d +0x525:  mov    -0x140(%ebp),%eax
08201033 +0x52b:  mov    %eax,-0xbf(%ebp)
08201039 +0x531:  mov    -0x13c(%ebp),%eax
0820103f +0x537:  mov    %eax,-0xbb(%ebp)
08201045 +0x53d:  mov    -0x138(%ebp),%eax
0820104b +0x543:  mov    %eax,-0xb7(%ebp)
08201051 +0x549:  mov    -0x134(%ebp),%eax
08201057 +0x54f:  mov    %eax,-0xb3(%ebp)
0820105d +0x555:  mov    -0x130(%ebp),%eax
08201063 +0x55b:  mov    %eax,-0xaf(%ebp)
08201069 +0x561:  movzbl -0x12c(%ebp),%eax
08201070 +0x568:  mov    %al,-0xab(%ebp)
08201076 +0x56e:  lea    -0xe7(%ebp),%eax
0820107c +0x574:  mov    %eax,(%esp)
0820107f +0x577:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08201084 +0x57c:  test   %al,%al
08201086 +0x57e:  je     082010b4 <+0x5ac>
08201088 +0x580:  movl   $0x4,(%esp)
0820108f +0x587:  call   08725800 <__cxa_allocate_exception>
08201094 +0x58c:  mov    %eax,%edx
08201096 +0x58e:  movl   $0x11,(%edx)
0820109c +0x594:  movl   $0x0,0x8(%esp)
082010a4 +0x59c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082010ac +0x5a4:  mov    %eax,(%esp)
082010af +0x5a7:  call   08724c50 <__cxa_throw>
082010b4 +0x5ac:  movzwl -0x60(%ebp),%eax
082010b8 +0x5b0:  movzwl %ax,%eax
082010bb +0x5b3:  mov    %eax,0x8(%esp)
082010bf +0x5b7:  movl   $0x1,0x4(%esp)
082010c7 +0x5bf:  mov    0xc(%ebp),%eax
082010ca +0x5c2:  mov    %eax,(%esp)
082010cd +0x5c5:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
082010d2 +0x5ca:  test   %al,%al
082010d4 +0x5cc:  je     082010fb <+0x5f3>
082010d6 +0x5ce:  movl   $0xd5,0x8(%esp)
082010de +0x5d6:  movl   $0x54,0x4(%esp)
082010e6 +0x5de:  mov    0xc(%ebp),%eax
082010e9 +0x5e1:  mov    %eax,(%esp)
082010ec +0x5e4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082010f1 +0x5e9:  mov    $0x0,%ebx
082010f6 +0x5ee:  jmp    0820192b <+0xe23>
082010fb +0x5f3:  movw   $0x0,-0x32(%ebp)
08201101 +0x5f9:  movl   $0x1,-0x30(%ebp)
08201108 +0x600:  mov    -0xe5(%ebp),%eax
0820110e +0x606:  cmp    $0x28d14e,%eax
08201113 +0x60b:  je     082012b8 <+0x7b0>
08201119 +0x611:  cmp    $0x28d14e,%eax
0820111e +0x616:  ja     0820113e <+0x636>
08201120 +0x618:  cmp    $0xf,%eax
08201123 +0x61b:  je     082012b8 <+0x7b0>
08201129 +0x621:  cmp    $0x381,%eax
0820112e +0x626:  je     082012b8 <+0x7b0>
08201134 +0x62c:  cmp    $0xe,%eax
08201137 +0x62f:  je     08201160 <+0x658>
08201139 +0x631:  nop
0820113a +0x632:  nop
0820113b +0x633:  nop
0820113c +0x634:  nop
0820113d +0x635:  nop
0820113e +0x636:  cmp    $0x292090f1,%eax
08201143 +0x63b:  je     08201160 <+0x658>
08201145 +0x63d:  cmp    $0x292090f2,%eax
0820114a +0x642:  je     082012b8 <+0x7b0>
08201150 +0x648:  cmp    $0x28978e,%eax
08201155 +0x64d:  je     082012c3 <+0x7bb>
0820115b +0x653:  jmp    082013d4 <+0x8cc>
08201160 +0x658:  movw   $0x1,-0x32(%ebp)
08201166 +0x65e:  lea    -0xaa(%ebp),%eax
0820116c +0x664:  mov    %eax,(%esp)
0820116f +0x667:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08201174 +0x66c:  cmp    $0x6,%al
08201176 +0x66e:  seta   %al
08201179 +0x671:  test   %al,%al
0820117b +0x673:  je     082011a9 <+0x6a1>
0820117d +0x675:  movl   $0x4,(%esp)
08201184 +0x67c:  call   08725800 <__cxa_allocate_exception>
08201189 +0x681:  mov    %eax,%edx
0820118b +0x683:  movl   $0xd,(%edx)
08201191 +0x689:  movl   $0x0,0x8(%esp)
08201199 +0x691:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082011a1 +0x699:  mov    %eax,(%esp)
082011a4 +0x69c:  call   08724c50 <__cxa_throw>
082011a9 +0x6a1:  mov    -0x38(%ebp),%eax
082011ac +0x6a4:  mov    (%eax),%eax
082011ae +0x6a6:  add    $0xc,%eax
082011b1 +0x6a9:  mov    (%eax),%edx
082011b3 +0x6ab:  mov    -0x38(%ebp),%eax
082011b6 +0x6ae:  mov    %eax,(%esp)
082011b9 +0x6b1:  call   *%edx
082011bb +0x6b3:  cmp    $0xb,%eax
082011be +0x6b6:  sete   %al
082011c1 +0x6b9:  test   %al,%al
082011c3 +0x6bb:  je     082011f1 <+0x6e9>
082011c5 +0x6bd:  movl   $0x4,(%esp)
082011cc +0x6c4:  call   08725800 <__cxa_allocate_exception>
082011d1 +0x6c9:  mov    %eax,%edx
082011d3 +0x6cb:  movl   $0x13,(%edx)
082011d9 +0x6d1:  movl   $0x0,0x8(%esp)
082011e1 +0x6d9:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082011e9 +0x6e1:  mov    %eax,(%esp)
082011ec +0x6e4:  call   08724c50 <__cxa_throw>
082011f1 +0x6e9:  lea    -0xaa(%ebp),%eax
082011f7 +0x6ef:  mov    %eax,(%esp)
082011fa +0x6f2:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
082011ff +0x6f7:  movzbl %al,%edi
08201202 +0x6fa:  mov    -0x38(%ebp),%eax
08201205 +0x6fd:  mov    %eax,(%esp)
08201208 +0x700:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0820120d +0x705:  movzbl %al,%esi
08201210 +0x708:  mov    -0x38(%ebp),%eax
08201213 +0x70b:  mov    %eax,(%esp)
08201216 +0x70e:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0820121b +0x713:  movzbl %al,%ebx
0820121e +0x716:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08201223 +0x71b:  add    $0x2c,%eax
08201226 +0x71e:  mov    %edi,0xc(%esp)
0820122a +0x722:  mov    %esi,0x8(%esp)
0820122e +0x726:  mov    %ebx,0x4(%esp)
08201232 +0x72a:  mov    %eax,(%esp)
08201235 +0x72d:  call   08900b02 <_ZN14reseal_table_t15get_reseal_costEhhh>  ; reseal_table_t::get_reseal_cost(unsigned char, unsigned char, unsigned char)
0820123a +0x732:  mov    %eax,-0x30(%ebp)
0820123d +0x735:  mov    -0x30(%ebp),%eax
08201240 +0x738:  shr    $0x1f,%eax
08201243 +0x73b:  test   %al,%al
08201245 +0x73d:  je     08201273 <+0x76b>
08201247 +0x73f:  movl   $0x4,(%esp)
0820124e +0x746:  call   08725800 <__cxa_allocate_exception>
08201253 +0x74b:  mov    %eax,%edx
08201255 +0x74d:  movl   $0xfffffffe,(%edx)
0820125b +0x753:  movl   $0x0,0x8(%esp)
08201263 +0x75b:  movl   $&_ZTIi,0x4(%esp)
0820126b +0x763:  mov    %eax,(%esp)
0820126e +0x766:  call   08724c50 <__cxa_throw>
08201273 +0x76b:  mov    -0x38(%ebp),%eax
08201276 +0x76e:  mov    %eax,(%esp)
08201279 +0x771:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
0820127e +0x776:  cmp    $0x3,%eax
08201281 +0x779:  setne  %al
08201284 +0x77c:  test   %al,%al
08201286 +0x77e:  je     08201400 <+0x8f8>
0820128c +0x784:  movl   $0x4,(%esp)
08201293 +0x78b:  call   08725800 <__cxa_allocate_exception>
08201298 +0x790:  mov    %eax,%edx
0820129a +0x792:  movl   $0x13,(%edx)
082012a0 +0x798:  movl   $0x0,0x8(%esp)
082012a8 +0x7a0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082012b0 +0x7a8:  mov    %eax,(%esp)
082012b3 +0x7ab:  call   08724c50 <__cxa_throw>
082012b8 +0x7b0:  movw   $0x2,-0x32(%ebp)
082012be +0x7b6:  jmp    08201404 <+0x8fc>
082012c3 +0x7bb:  movw   $0x1,-0x32(%ebp)
082012c9 +0x7c1:  mov    -0x38(%ebp),%eax
082012cc +0x7c4:  mov    (%eax),%eax
082012ce +0x7c6:  add    $0xc,%eax
082012d1 +0x7c9:  mov    (%eax),%edx
082012d3 +0x7cb:  mov    -0x38(%ebp),%eax
082012d6 +0x7ce:  mov    %eax,(%esp)
082012d9 +0x7d1:  call   *%edx
082012db +0x7d3:  cmp    $0xb,%eax
082012de +0x7d6:  sete   %al
082012e1 +0x7d9:  test   %al,%al
082012e3 +0x7db:  je     08201311 <+0x809>
082012e5 +0x7dd:  movl   $0x4,(%esp)
082012ec +0x7e4:  call   08725800 <__cxa_allocate_exception>
082012f1 +0x7e9:  mov    %eax,%edx
082012f3 +0x7eb:  movl   $0x13,(%edx)
082012f9 +0x7f1:  movl   $0x0,0x8(%esp)
08201301 +0x7f9:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08201309 +0x801:  mov    %eax,(%esp)
0820130c +0x804:  call   08724c50 <__cxa_throw>
08201311 +0x809:  mov    -0x38(%ebp),%eax
08201314 +0x80c:  mov    %eax,(%esp)
08201317 +0x80f:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
0820131c +0x814:  cmp    $0x3,%eax
0820131f +0x817:  setne  %al
08201322 +0x81a:  test   %al,%al
08201324 +0x81c:  je     08201352 <+0x84a>
08201326 +0x81e:  movl   $0x4,(%esp)
0820132d +0x825:  call   08725800 <__cxa_allocate_exception>
08201332 +0x82a:  mov    %eax,%edx
08201334 +0x82c:  movl   $0x13,(%edx)
0820133a +0x832:  movl   $0x0,0x8(%esp)
08201342 +0x83a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0820134a +0x842:  mov    %eax,(%esp)
0820134d +0x845:  call   08724c50 <__cxa_throw>
08201352 +0x84a:  lea    -0xaa(%ebp),%eax
08201358 +0x850:  mov    %eax,(%esp)
0820135b +0x853:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08201360 +0x858:  movzbl %al,%edi
08201363 +0x85b:  mov    -0x38(%ebp),%eax
08201366 +0x85e:  mov    %eax,(%esp)
08201369 +0x861:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0820136e +0x866:  movzbl %al,%esi
08201371 +0x869:  mov    -0x38(%ebp),%eax
08201374 +0x86c:  mov    %eax,(%esp)
08201377 +0x86f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0820137c +0x874:  movzbl %al,%ebx
0820137f +0x877:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08201384 +0x87c:  add    $0x2c,%eax
08201387 +0x87f:  mov    %edi,0xc(%esp)
0820138b +0x883:  mov    %esi,0x8(%esp)
0820138f +0x887:  mov    %ebx,0x4(%esp)
08201393 +0x88b:  mov    %eax,(%esp)
08201396 +0x88e:  call   08900be0 <_ZN14reseal_table_t23get_oneshot_reseal_costEhhh>  ; reseal_table_t::get_oneshot_reseal_cost(unsigned char, unsigned char, unsigned char)
0820139b +0x893:  mov    %eax,-0x30(%ebp)
0820139e +0x896:  mov    -0x30(%ebp),%eax
082013a1 +0x899:  shr    $0x1f,%eax
082013a4 +0x89c:  test   %al,%al
082013a6 +0x89e:  je     08201403 <+0x8fb>
082013a8 +0x8a0:  movl   $0x4,(%esp)
082013af +0x8a7:  call   08725800 <__cxa_allocate_exception>
082013b4 +0x8ac:  mov    %eax,%edx
082013b6 +0x8ae:  movl   $0xfffffffe,(%edx)
082013bc +0x8b4:  movl   $0x0,0x8(%esp)
082013c4 +0x8bc:  movl   $&_ZTIi,0x4(%esp)
082013cc +0x8c4:  mov    %eax,(%esp)
082013cf +0x8c7:  call   08724c50 <__cxa_throw>
082013d4 +0x8cc:  movl   $0x4,(%esp)
082013db +0x8d3:  call   08725800 <__cxa_allocate_exception>
082013e0 +0x8d8:  mov    %eax,%edx
082013e2 +0x8da:  movl   $0x11,(%edx)
082013e8 +0x8e0:  movl   $0x0,0x8(%esp)
082013f0 +0x8e8:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082013f8 +0x8f0:  mov    %eax,(%esp)
082013fb +0x8f3:  call   08724c50 <__cxa_throw>
08201400 +0x8f8:  nop
08201401 +0x8f9:  jmp    08201404 <+0x8fc>
08201403 +0x8fb:  nop
08201404 +0x8fc:  lea    -0xe7(%ebp),%eax
0820140a +0x902:  mov    %eax,(%esp)
0820140d +0x905:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08201412 +0x90a:  cmp    -0x30(%ebp),%eax
08201415 +0x90d:  setl   %al
08201418 +0x910:  test   %al,%al
0820141a +0x912:  je     08201448 <+0x940>
0820141c +0x914:  movl   $0x4,(%esp)
08201423 +0x91b:  call   08725800 <__cxa_allocate_exception>
08201428 +0x920:  mov    %eax,%edx
0820142a +0x922:  movl   $0x16,(%edx)
08201430 +0x928:  movl   $0x0,0x8(%esp)
08201438 +0x930:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08201440 +0x938:  mov    %eax,(%esp)
08201443 +0x93b:  call   08724c50 <__cxa_throw>
08201448 +0x940:  movzwl -0x5a(%ebp),%eax
0820144c +0x944:  movzwl %ax,%eax
0820144f +0x947:  movl   $0x1,0x14(%esp)
08201457 +0x94f:  movl   $0x3,0x10(%esp)
0820145f +0x957:  mov    -0x30(%ebp),%edx
08201462 +0x95a:  mov    %edx,0xc(%esp)
08201466 +0x95e:  mov    %eax,0x8(%esp)
0820146a +0x962:  movl   $0x1,0x4(%esp)
08201472 +0x96a:  mov    -0x3c(%ebp),%eax
08201475 +0x96d:  mov    %eax,(%esp)
08201478 +0x970:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0820147d +0x975:  xor    $0x1,%eax
08201480 +0x978:  test   %al,%al
08201482 +0x97a:  je     082014b0 <+0x9a8>
08201484 +0x97c:  movl   $0x4,(%esp)
0820148b +0x983:  call   08725800 <__cxa_allocate_exception>
08201490 +0x988:  mov    %eax,%edx
08201492 +0x98a:  movl   $0xfffffffd,(%edx)
08201498 +0x990:  movl   $0x0,0x8(%esp)
082014a0 +0x998:  movl   $&_ZTIi,0x4(%esp)
082014a8 +0x9a0:  mov    %eax,(%esp)
082014ab +0x9a3:  call   08724c50 <__cxa_throw>
082014b0 +0x9a8:  movzwl -0x32(%ebp),%eax
082014b4 +0x9ac:  cmp    $0x1,%eax
082014b7 +0x9af:  je     082014c7 <+0x9bf>
082014b9 +0x9b1:  cmp    $0x2,%eax
082014bc +0x9b4:  je     0820154e <+0xa46>
082014c2 +0x9ba:  jmp    0820156c <+0xa64>
082014c7 +0x9bf:  movzbl -0xaa(%ebp),%eax
082014ce +0x9c6:  test   %al,%al
082014d0 +0x9c8:  je     082014fe <+0x9f6>
082014d2 +0x9ca:  movl   $0x4,(%esp)
082014d9 +0x9d1:  call   08725800 <__cxa_allocate_exception>
082014de +0x9d6:  mov    %eax,%edx
082014e0 +0x9d8:  movl   $0x12,(%edx)
082014e6 +0x9de:  movl   $0x0,0x8(%esp)
082014ee +0x9e6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082014f6 +0x9ee:  mov    %eax,(%esp)
082014f9 +0x9f1:  call   08724c50 <__cxa_throw>
082014fe +0x9f6:  movb   $0x1,-0xaa(%ebp)
08201505 +0x9fd:  movl   $0x7,-0x48(%ebp)
0820150c +0xa04:  lea    -0xaa(%ebp),%eax
08201512 +0xa0a:  mov    %eax,(%esp)
08201515 +0xa0d:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
0820151a +0xa12:  movzbl %al,%eax
0820151d +0xa15:  add    $0x1,%eax
08201520 +0xa18:  mov    %eax,-0x44(%ebp)
08201523 +0xa1b:  lea    -0x48(%ebp),%eax
08201526 +0xa1e:  mov    %eax,0x4(%esp)
0820152a +0xa22:  lea    -0x44(%ebp),%eax
0820152d +0xa25:  mov    %eax,(%esp)
08201530 +0xa28:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08201535 +0xa2d:  mov    (%eax),%eax
08201537 +0xa2f:  movzbl %al,%eax
0820153a +0xa32:  mov    %eax,0x4(%esp)
0820153e +0xa36:  lea    -0xaa(%ebp),%eax
08201544 +0xa3c:  mov    %eax,(%esp)
08201547 +0xa3f:  call   0822b466 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb10
0820154c +0xa44:  jmp    0820156c <+0xa64>
0820154e +0xa46:  movl   $0x0,(%esp)
08201555 +0xa4d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0820155a +0xa52:  mov    %eax,0x4(%esp)
0820155e +0xa56:  lea    -0xaa(%ebp),%eax
08201564 +0xa5c:  mov    %eax,(%esp)
08201567 +0xa5f:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0820156c +0xa64:  movzwl -0x60(%ebp),%eax
08201570 +0xa68:  movzwl %ax,%eax
08201573 +0xa6b:  mov    -0xaa(%ebp),%edx
08201579 +0xa71:  mov    %edx,0xc(%esp)
0820157d +0xa75:  mov    -0xa6(%ebp),%edx
08201583 +0xa7b:  mov    %edx,0x10(%esp)
08201587 +0xa7f:  mov    -0xa2(%ebp),%edx
0820158d +0xa85:  mov    %edx,0x14(%esp)
08201591 +0xa89:  mov    -0x9e(%ebp),%edx
08201597 +0xa8f:  mov    %edx,0x18(%esp)
0820159b +0xa93:  mov    -0x9a(%ebp),%edx
082015a1 +0xa99:  mov    %edx,0x1c(%esp)
082015a5 +0xa9d:  mov    -0x96(%ebp),%edx
082015ab +0xaa3:  mov    %edx,0x20(%esp)
082015af +0xaa7:  mov    -0x92(%ebp),%edx
082015b5 +0xaad:  mov    %edx,0x24(%esp)
082015b9 +0xab1:  mov    -0x8e(%ebp),%edx
082015bf +0xab7:  mov    %edx,0x28(%esp)
082015c3 +0xabb:  mov    -0x8a(%ebp),%edx
082015c9 +0xac1:  mov    %edx,0x2c(%esp)
082015cd +0xac5:  mov    -0x86(%ebp),%edx
082015d3 +0xacb:  mov    %edx,0x30(%esp)
082015d7 +0xacf:  mov    -0x82(%ebp),%edx
082015dd +0xad5:  mov    %edx,0x34(%esp)
082015e1 +0xad9:  mov    -0x7e(%ebp),%edx
082015e4 +0xadc:  mov    %edx,0x38(%esp)
082015e8 +0xae0:  mov    -0x7a(%ebp),%edx
082015eb +0xae3:  mov    %edx,0x3c(%esp)
082015ef +0xae7:  mov    -0x76(%ebp),%edx
082015f2 +0xaea:  mov    %edx,0x40(%esp)
082015f6 +0xaee:  mov    -0x72(%ebp),%edx
082015f9 +0xaf1:  mov    %edx,0x44(%esp)
082015fd +0xaf5:  movzbl -0x6e(%ebp),%edx
08201601 +0xaf9:  mov    %dl,0x48(%esp)
08201605 +0xafd:  mov    %eax,0x8(%esp)
08201609 +0xb01:  movl   $0x1,0x4(%esp)
08201611 +0xb09:  mov    -0x3c(%ebp),%eax
08201614 +0xb0c:  mov    %eax,(%esp)
08201617 +0xb0f:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0820161c +0xb14:  movzwl -0x60(%ebp),%eax
08201620 +0xb18:  movzwl %ax,%ecx
08201623 +0xb1b:  movzwl -0x5a(%ebp),%eax
08201627 +0xb1f:  movzwl %ax,%edx
0820162a +0xb22:  movzwl -0x32(%ebp),%eax
0820162e +0xb26:  mov    %ecx,0x10(%esp)
08201632 +0xb2a:  mov    %edx,0xc(%esp)
08201636 +0xb2e:  mov    %eax,0x8(%esp)
0820163a +0xb32:  mov    0xc(%ebp),%eax
0820163d +0xb35:  mov    %eax,0x4(%esp)
08201641 +0xb39:  mov    0x8(%ebp),%eax
08201644 +0xb3c:  mov    %eax,(%esp)
08201647 +0xb3f:  call   08201938 <_ZN22Dispatcher_ModItemAttr11_SendResultEP5CUserttt>  ; Dispatcher_ModItemAttr::_SendResult(CUser*, unsigned short, unsigned short, unsigned short)
0820164c +0xb44:  movl   $0x0,-0x2c(%ebp)
08201653 +0xb4b:  mov    -0xe5(%ebp),%eax
08201659 +0xb51:  mov    %eax,%ebx
0820165b +0xb53:  mov    0xc(%ebp),%eax
0820165e +0xb56:  mov    %eax,(%esp)
08201661 +0xb59:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08201666 +0xb5e:  mov    %ebx,0x4(%esp)
0820166a +0xb62:  mov    %eax,(%esp)
0820166d +0xb65:  call   086ae7a8 <_ZNK8WongWork12CUserPremium17GetReturnItemRateEi>  ; WongWork::CUserPremium::GetReturnItemRate(int) const
08201672 +0xb6a:  mov    %eax,-0x2c(%ebp)
08201675 +0xb6d:  cmpl   $0x0,-0x2c(%ebp)
08201679 +0xb71:  je     08201926 <+0xe1e>
0820167f +0xb77:  mov    -0x30(%ebp),%eax
08201682 +0xb7a:  mov    %eax,%ecx
08201684 +0xb7c:  imul   -0x2c(%ebp),%ecx
08201688 +0xb80:  mov    $0x51eb851f,%edx
0820168d +0xb85:  mov    %ecx,%eax
0820168f +0xb87:  imul   %edx
08201691 +0xb89:  sar    $0x5,%edx
08201694 +0xb8c:  mov    %ecx,%eax
08201696 +0xb8e:  sar    $0x1f,%eax
08201699 +0xb91:  mov    %edx,%ecx
0820169b +0xb93:  sub    %eax,%ecx
0820169d +0xb95:  mov    %ecx,%eax
0820169f +0xb97:  mov    %eax,-0x28(%ebp)
082016a2 +0xb9a:  cmpl   $0x0,-0x28(%ebp)
082016a6 +0xb9e:  jle    08201926 <+0xe1e>
082016ac +0xba4:  mov    -0xe7(%ebp),%eax
082016b2 +0xbaa:  mov    %eax,-0x124(%ebp)
082016b8 +0xbb0:  mov    -0xe3(%ebp),%eax
082016be +0xbb6:  mov    %eax,-0x120(%ebp)
082016c4 +0xbbc:  mov    -0xdf(%ebp),%eax
082016ca +0xbc2:  mov    %eax,-0x11c(%ebp)
082016d0 +0xbc8:  mov    -0xdb(%ebp),%eax
082016d6 +0xbce:  mov    %eax,-0x118(%ebp)
082016dc +0xbd4:  mov    -0xd7(%ebp),%eax
082016e2 +0xbda:  mov    %eax,-0x114(%ebp)
082016e8 +0xbe0:  mov    -0xd3(%ebp),%eax
082016ee +0xbe6:  mov    %eax,-0x110(%ebp)
082016f4 +0xbec:  mov    -0xcf(%ebp),%eax
082016fa +0xbf2:  mov    %eax,-0x10c(%ebp)
08201700 +0xbf8:  mov    -0xcb(%ebp),%eax
08201706 +0xbfe:  mov    %eax,-0x108(%ebp)
0820170c +0xc04:  mov    -0xc7(%ebp),%eax
08201712 +0xc0a:  mov    %eax,-0x104(%ebp)
08201718 +0xc10:  mov    -0xc3(%ebp),%eax
0820171e +0xc16:  mov    %eax,-0x100(%ebp)
08201724 +0xc1c:  mov    -0xbf(%ebp),%eax
0820172a +0xc22:  mov    %eax,-0xfc(%ebp)
08201730 +0xc28:  mov    -0xbb(%ebp),%eax
08201736 +0xc2e:  mov    %eax,-0xf8(%ebp)
0820173c +0xc34:  mov    -0xb7(%ebp),%eax
08201742 +0xc3a:  mov    %eax,-0xf4(%ebp)
08201748 +0xc40:  mov    -0xb3(%ebp),%eax
0820174e +0xc46:  mov    %eax,-0xf0(%ebp)
08201754 +0xc4c:  mov    -0xaf(%ebp),%eax
0820175a +0xc52:  mov    %eax,-0xec(%ebp)
08201760 +0xc58:  movzbl -0xab(%ebp),%eax
08201767 +0xc5f:  mov    %al,-0xe8(%ebp)
0820176d +0xc65:  mov    -0x28(%ebp),%eax
08201770 +0xc68:  mov    %eax,-0x11d(%ebp)
08201776 +0xc6e:  movl   $0x0,0x4c(%esp)
0820177e +0xc76:  movl   $0x1,0x48(%esp)
08201786 +0xc7e:  movl   $0xe,0x44(%esp)
0820178e +0xc86:  mov    -0x124(%ebp),%eax
08201794 +0xc8c:  mov    %eax,0x4(%esp)
08201798 +0xc90:  mov    -0x120(%ebp),%eax
0820179e +0xc96:  mov    %eax,0x8(%esp)
082017a2 +0xc9a:  mov    -0x11c(%ebp),%eax
082017a8 +0xca0:  mov    %eax,0xc(%esp)
082017ac +0xca4:  mov    -0x118(%ebp),%eax
082017b2 +0xcaa:  mov    %eax,0x10(%esp)
082017b6 +0xcae:  mov    -0x114(%ebp),%eax
082017bc +0xcb4:  mov    %eax,0x14(%esp)
082017c0 +0xcb8:  mov    -0x110(%ebp),%eax
082017c6 +0xcbe:  mov    %eax,0x18(%esp)
082017ca +0xcc2:  mov    -0x10c(%ebp),%eax
082017d0 +0xcc8:  mov    %eax,0x1c(%esp)
082017d4 +0xccc:  mov    -0x108(%ebp),%eax
082017da +0xcd2:  mov    %eax,0x20(%esp)
082017de +0xcd6:  mov    -0x104(%ebp),%eax
082017e4 +0xcdc:  mov    %eax,0x24(%esp)
082017e8 +0xce0:  mov    -0x100(%ebp),%eax
082017ee +0xce6:  mov    %eax,0x28(%esp)
082017f2 +0xcea:  mov    -0xfc(%ebp),%eax
082017f8 +0xcf0:  mov    %eax,0x2c(%esp)
082017fc +0xcf4:  mov    -0xf8(%ebp),%eax
08201802 +0xcfa:  mov    %eax,0x30(%esp)
08201806 +0xcfe:  mov    -0xf4(%ebp),%eax
0820180c +0xd04:  mov    %eax,0x34(%esp)
08201810 +0xd08:  mov    -0xf0(%ebp),%eax
08201816 +0xd0e:  mov    %eax,0x38(%esp)
0820181a +0xd12:  mov    -0xec(%ebp),%eax
08201820 +0xd18:  mov    %eax,0x3c(%esp)
08201824 +0xd1c:  movzbl -0xe8(%ebp),%eax
0820182b +0xd23:  mov    %al,0x40(%esp)
0820182f +0xd27:  mov    -0x3c(%ebp),%eax
08201832 +0xd2a:  mov    %eax,(%esp)
08201835 +0xd2d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0820183a +0xd32:  mov    %eax,-0x24(%ebp)
0820183d +0xd35:  cmpl   $0x0,-0x24(%ebp)
08201841 +0xd39:  js     08201926 <+0xe1e>
08201847 +0xd3f:  mov    -0x24(%ebp),%eax
0820184a +0xd42:  mov    %eax,0xc(%esp)
0820184e +0xd46:  movl   $0x0,0x8(%esp)
08201856 +0xd4e:  movl   $0x1,0x4(%esp)
0820185e +0xd56:  mov    0xc(%ebp),%eax
08201861 +0xd59:  mov    %eax,(%esp)
08201864 +0xd5c:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08201869 +0xd61:  jmp    08201926 <+0xe1e>
0820186e +0xd66:  cmp    $0x2,%edx
08201871 +0xd69:  je     08201880 <+0xd78>
08201873 +0xd6b:  cmp    $0x1,%edx
08201876 +0xd6e:  je     082018c8 <+0xdc0>
08201878 +0xd70:  mov    %eax,(%esp)
0820187b +0xd73:  call   08ae3750 <_Unwind_Resume>
08201880 +0xd78:  mov    %eax,(%esp)
08201883 +0xd7b:  call   08725ce0 <__cxa_begin_catch>
08201888 +0xd80:  mov    (%eax),%eax
0820188a +0xd82:  mov    %eax,-0x20(%ebp)
0820188d +0xd85:  mov    -0x20(%ebp),%eax
08201890 +0xd88:  movzbl %al,%eax
08201893 +0xd8b:  mov    %eax,0x8(%esp)
08201897 +0xd8f:  movl   $0x54,0x4(%esp)
0820189f +0xd97:  mov    0xc(%ebp),%eax
082018a2 +0xd9a:  mov    %eax,(%esp)
082018a5 +0xd9d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082018aa +0xda2:  jmp    082018c1 <+0xdb9>
082018ac +0xda4:  mov    %edx,%ebx
082018ae +0xda6:  mov    %eax,%esi
082018b0 +0xda8:  call   08725c30 <__cxa_end_catch>
082018b5 +0xdad:  mov    %esi,%eax
082018b7 +0xdaf:  mov    %ebx,%edx
082018b9 +0xdb1:  mov    %eax,(%esp)
082018bc +0xdb4:  call   08ae3750 <_Unwind_Resume>
082018c1 +0xdb9:  call   08725c30 <__cxa_end_catch>
082018c6 +0xdbe:  jmp    08201926 <+0xe1e>
082018c8 +0xdc0:  mov    %eax,(%esp)
082018cb +0xdc3:  call   08725ce0 <__cxa_begin_catch>
082018d0 +0xdc8:  mov    (%eax),%eax
082018d2 +0xdca:  mov    %eax,-0x1c(%ebp)
082018d5 +0xdcd:  cmpl   $0x0,-0x1c(%ebp)
082018d9 +0xdd1:  jns    08201903 <+0xdfb>
082018db +0xdd3:  movl   $0x0,0xc(%esp)
082018e3 +0xddb:  movl   $0x0,0x8(%esp)
082018eb +0xde3:  movl   $&_ZZN22Dispatcher_ModItemAttr12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082018f3 +0xdeb:  movl   $0x9706,(%esp)
082018fa +0xdf2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082018ff +0xdf7:  mov    %eax,%ebx
08201901 +0xdf9:  jmp    0820191f <+0xe17>
08201903 +0xdfb:  mov    $0x0,%ebx
08201908 +0xe00:  jmp    0820191f <+0xe17>
0820190a +0xe02:  mov    %edx,%ebx
0820190c +0xe04:  mov    %eax,%esi
0820190e +0xe06:  call   08725c30 <__cxa_end_catch>
08201913 +0xe0b:  mov    %esi,%eax
08201915 +0xe0d:  mov    %ebx,%edx
08201917 +0xe0f:  mov    %eax,(%esp)
0820191a +0xe12:  call   08ae3750 <_Unwind_Resume>
0820191f +0xe17:  call   08725c30 <__cxa_end_catch>
08201924 +0xe1c:  jmp    0820192b <+0xe23>
08201926 +0xe1e:  mov    $0x0,%ebx
0820192b +0xe23:  mov    %ebx,%eax
0820192d +0xe25:  lea    -0xc(%ebp),%esp
08201930 +0xe28:  add    $0x0,%esp
08201933 +0xe2b:  pop    %ebx
08201934 +0xe2c:  pop    %esi
08201935 +0xe2d:  pop    %edi
08201936 +0xe2e:  pop    %ebp
08201937 +0xe2f:  ret
```

## 反编译 C

```c
// Dispatcher_ModItemAttr::dispatch_sig @ 0x8200b08

/* Dispatcher_ModItemAttr::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ModItemAttr::dispatch_sig(Dispatcher_ModItemAttr *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ServiceRestrictManager *pSVar12;
  CDataManager *this_00;
  uint uVar13;
  int *piVar14;
  CInventory *pCVar15;
  uint uVar16;
  undefined1 local_16c [8];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined2 uStack_e9;
  undefined2 local_e7;
  undefined2 uStack_e5;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined1 local_af;
  Inven_Item local_ae;
  char cStack_ad;
  undefined2 uStack_ac;
  undefined2 local_aa;
  undefined2 uStack_a8;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined1 local_72;
  ushort local_64;
  ulong local_62;
  ushort local_5e;
  cMyTrace local_5c [16];
  int local_4c;
  int local_48;
  uint local_44;
  CInventory *local_40;
  CItem *local_3c;
  ushort local_36;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar7 = CUser::get_state(param_1);
  if ((iVar7 == 3) &&
     (iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar7 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar8 = CUser::get_acc_id(param_1);
                    /* try { // try from 08200b5d to 08201868 has its CatchHandler @ 0820186e */
    uVar9 = NumberToString(uVar8,0);
    uVar10 = CUser::get_state(param_1);
    cMyTrace::cMyTrace(local_5c,
                       "virtual int Dispatcher_ModItemAttr::dispatch_sig(CUser*, PacketBuf&)",0x95db
                       ,5);
    cMyTrace::operator()
              (local_5c,"Dispatcher_ModItemAttr => User State : %d, m_id : %s",uVar10,uVar9);
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&int::typeinfo,0);
  }
  pSVar12 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar12,param_1,1,0xf);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x54,0xd1);
    return 0;
  }
  local_44 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x26);
  if (local_44 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x54,local_44 & 0xff);
    return 0;
  }
  cVar3 = CUser::CheckInTrade(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_64);
  if (((cVar3 == '\x01') && (cVar3 = PacketBuf::get_int(param_2,&local_62), cVar3 == '\x01')) &&
     (cVar3 = PacketBuf::get_short(param_2,&local_5e), cVar3 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&int::typeinfo,0);
  }
  local_40 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  Inven_Item::Inven_Item(&local_ae);
  uVar8 = (uint)local_64;
  uVar9 = 1;
  CInventory::GetInvenSlot((int)local_16c,(int)local_40);
  local_ae = SUB41(local_16c._0_4_,0);
  cStack_ad = SUB41(local_16c._0_4_,1);
  uStack_ac = SUB42(local_16c._0_4_,2);
  local_aa = (undefined2)local_16c._4_4_;
  uStack_a8 = SUB42(local_16c._4_4_,2);
  local_a6 = local_164;
  local_a2 = local_160;
  local_9e = local_15c;
  local_9a = local_158;
  local_96 = local_154;
  local_92 = local_150;
  local_8e = local_14c;
  local_8a = local_148;
  local_86 = local_144;
  local_82 = local_140;
  local_7e = local_13c;
  local_7a = local_138;
  local_76 = local_134;
  local_72 = local_130;
  cVar3 = Inven_Item::isEmpty(&local_ae);
  if (cVar3 != '\0') {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  if (CONCAT22(local_aa,uStack_ac) != local_62) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  if (cStack_ad != '\x01') {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  iVar7 = CONCAT22(local_aa,uStack_ac);
  this_00 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(this_00,iVar7);
  if (local_3c == (CItem *)0x0) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c,iVar7,uVar9,uVar8);
  if ((iVar7 < 10) || (iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c), 0x15 < iVar7)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_eb);
  uVar8 = (uint)local_5e;
  uVar9 = 1;
  pCVar15 = local_40;
  CInventory::GetInvenSlot((int)local_16c,(int)local_40);
  local_eb = (undefined2)local_16c._0_4_;
  uStack_e9 = SUB42(local_16c._0_4_,2);
  local_e7 = (undefined2)local_16c._4_4_;
  uStack_e5 = SUB42(local_16c._4_4_,2);
  local_e3 = local_164;
  local_df = local_160;
  local_db = local_15c;
  local_d7 = local_158;
  local_d3 = local_154;
  local_cf = local_150;
  local_cb = local_14c;
  local_c7 = local_148;
  local_c3 = local_144;
  local_bf = local_140;
  local_bb = local_13c;
  local_b7 = local_138;
  local_b3 = local_134;
  local_af = local_130;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_eb);
  if (cVar3 != '\0') {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4,pCVar15,uVar9);
    *puVar11 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  uVar13 = (uint)local_64;
  uVar16 = 1;
  cVar3 = CUser::CheckItemLock(param_1,1,uVar13);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x54,0xd5);
    return 0;
  }
  local_36 = 0;
  local_34 = 1;
  uVar2 = CONCAT22(local_e7,uStack_e9);
  if (uVar2 != 0x28d14e) {
    if (uVar2 < 0x28d14f) {
      if ((uVar2 != 0xf) && (uVar2 != 0x381)) {
        if (uVar2 != 0xe) goto LAB_0820113e;
        goto LAB_08201160;
      }
    }
    else {
LAB_0820113e:
      if (uVar2 == 0x292090f1) {
LAB_08201160:
        local_36 = 1;
        bVar5 = Inven_Item::GetReSealCount(&local_ae);
        if (6 < bVar5) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0xd;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c,uVar16,uVar13,uVar8);
        if (iVar7 == 0xb) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        bVar5 = Inven_Item::GetReSealCount(&local_ae);
        uVar8 = (uint)bVar5;
        bVar6 = CItem::get_grade(local_3c);
        uVar13 = (uint)bVar6;
        bVar4 = CItem::get_rarity(local_3c);
        uVar16 = (uint)bVar4;
        iVar7 = G_CDataManager();
        local_34 = reseal_table_t::get_reseal_cost
                             ((reseal_table_t *)(iVar7 + 0x2c),bVar4,bVar6,bVar5);
        if (local_34 < 0) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0xfffffffe;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&int::typeinfo,0);
        }
        iVar7 = CItem::GetAttachType(local_3c);
        if (iVar7 != 3) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        goto LAB_08201404;
      }
      if (uVar2 != 0x292090f2) {
        if (uVar2 != 0x28978e) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x11;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        local_36 = 1;
        iVar7 = (**(code **)(*(int *)local_3c + 0xc))(local_3c);
        if (iVar7 == 0xb) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        iVar7 = CItem::GetAttachType(local_3c);
        if (iVar7 != 3) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar11 = 0x13;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
        }
        uVar8 = Inven_Item::GetReSealCount(&local_ae);
        uVar8 = uVar8 & 0xff;
        bVar5 = CItem::get_grade(local_3c);
        uVar13 = (uint)bVar5;
        bVar6 = CItem::get_rarity(local_3c);
        uVar16 = (uint)bVar6;
        cVar3 = G_CDataManager();
        local_34 = reseal_table_t::get_oneshot_reseal_cost(cVar3 + ',',bVar6,bVar5);
        if (local_34 < 0) {
          puVar11 = (undefined4 *)__cxa_allocate_exception(4,uVar16,uVar13,uVar8);
          *puVar11 = 0xfffffffe;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar11,&int::typeinfo,0);
        }
        goto LAB_08201404;
      }
    }
  }
  local_36 = 2;
LAB_08201404:
  iVar7 = Inven_Item::get_add_info((Inven_Item *)&local_eb);
  if (iVar7 < local_34) {
    puVar11 = (undefined4 *)__cxa_allocate_exception(4,uVar16,uVar13,uVar8);
    *puVar11 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = CInventory::delete_item(local_40,1,local_5e,local_34,3,1);
  if (cVar3 == '\x01') {
    if (local_36 == 1) {
      if (local_ae != (Inven_Item)0x0) {
        puVar11 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar11 = 0x12;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar11,&ENUM_ERROR::typeinfo,0);
      }
      local_ae = (Inven_Item)0x1;
      local_4c = 7;
      uVar8 = Inven_Item::GetReSealCount(&local_ae);
      local_48 = (uVar8 & 0xff) + 1;
      piVar14 = std::min<int>(&local_48,&local_4c);
      Inven_Item::SetReSealCount(&local_ae,(uchar)*piVar14);
    }
    else if (local_36 == 2) {
      iVar7 = get_rand_int(0);
      Inven_Item::set_add_info(&local_ae,iVar7);
    }
    CInventory::update_item
              (local_40,1,local_64,CONCAT22(uStack_ac,CONCAT11(cStack_ad,local_ae)),
               CONCAT22(uStack_a8,local_aa),local_a6,local_a2,local_9e,local_9a,local_96,local_92,
               local_8e,local_8a,local_86,local_82,local_7e,local_7a,local_76,local_72);
    _SendResult(this,param_1,local_36,local_5e,local_64);
    local_30 = 0;
    iVar7 = CUser::GetPremiumInfo(param_1);
    local_30 = WongWork::CUserPremium::GetReturnItemRate(iVar7);
    if ((local_30 != 0) && (local_2c = (local_34 * local_30) / 100, 0 < local_2c)) {
      local_128 = CONCAT22(uStack_e9,local_eb);
      local_11c = local_df;
      local_118 = local_db;
      local_114 = local_d7;
      local_110 = local_d3;
      local_10c = local_cf;
      local_108 = local_cb;
      local_104 = local_c7;
      local_100 = local_c3;
      local_fc = local_bf;
      local_f8 = local_bb;
      local_f4 = local_b7;
      local_f0 = local_b3;
      local_ec = local_af;
      local_124._0_3_ = (undefined3)CONCAT22(uStack_e5,local_e7);
      local_124._3_1_ = (undefined1)local_2c;
      local_120._3_1_ = (undefined1)((uint)local_e3 >> 0x18);
      local_120._0_3_ = (undefined3)((uint)local_2c >> 8);
      local_28 = CInventory::insertItemIntoInventory
                           (local_40,local_128,local_124,local_120,local_df,local_db,local_d7,
                            local_d3,local_cf,local_cb,local_c7,local_c3,local_bf,local_bb,local_b7,
                            local_b3,local_af,0xe,1,0);
      if (-1 < local_28) {
        CUser::SendUpdateItemList(param_1,1,0,local_28);
      }
    }
    return 0;
  }
  puVar11 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar11 = 0xfffffffd;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar11,&int::typeinfo,0);
}
```
