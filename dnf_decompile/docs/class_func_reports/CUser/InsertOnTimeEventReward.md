# InsertOnTimeEventReward

`_ZN5CUser23InsertOnTimeEventRewardEjj`

`CUser::InsertOnTimeEventReward(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681c30  _ZN5CUser23InsertOnTimeEventRewardEjj
#           CUser::InsertOnTimeEventReward(unsigned int, unsigned int)
# range [0x08681c30, 0x08682081]
08681c30 +0x000:  push   %ebp
08681c31 +0x001:  mov    %esp,%ebp
08681c33 +0x003:  push   %edi
08681c34 +0x004:  push   %esi
08681c35 +0x005:  push   %ebx
08681c36 +0x006:  sub    $0x2dc,%esp
08681c3c +0x00c:  lea    -0x18a(%ebp),%edx
08681c42 +0x012:  mov    $0x100,%ebx
08681c47 +0x017:  mov    $0x0,%eax
08681c4c +0x01c:  mov    %edx,%ecx
08681c4e +0x01e:  and    $0x2,%ecx
08681c51 +0x021:  test   %ecx,%ecx
08681c53 +0x023:  je     08681c5e <+0x2e>
08681c55 +0x025:  mov    %ax,(%edx)
08681c58 +0x028:  add    $0x2,%edx
08681c5b +0x02b:  sub    $0x2,%ebx
08681c5e +0x02e:  mov    %ebx,%ecx
08681c60 +0x030:  shr    $0x2,%ecx
08681c63 +0x033:  mov    %edx,%edi
08681c65 +0x035:  rep stos %eax,%es:(%edi)
08681c67 +0x037:  mov    %edi,%edx
08681c69 +0x039:  mov    %ebx,%ecx
08681c6b +0x03b:  and    $0x2,%ecx
08681c6e +0x03e:  test   %ecx,%ecx
08681c70 +0x040:  je     08681c78 <+0x48>
08681c72 +0x042:  mov    %ax,(%edx)
08681c75 +0x045:  add    $0x2,%edx
08681c78 +0x048:  mov    %ebx,%ecx
08681c7a +0x04a:  and    $0x1,%ecx
08681c7d +0x04d:  test   %ecx,%ecx
08681c7f +0x04f:  je     08681c86 <+0x56>
08681c81 +0x051:  mov    %al,(%edx)
08681c83 +0x053:  add    $0x1,%edx
08681c86 +0x056:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08681c8b +0x05b:  mov    %eax,(%esp)
08681c8e +0x05e:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
08681c93 +0x063:  mov    %eax,0x8(%esp)
08681c97 +0x067:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
08681c9f +0x06f:  lea    -0x18a(%ebp),%eax
08681ca5 +0x075:  mov    %eax,(%esp)
08681ca8 +0x078:  call   0807e440 <_init+0xd38>
08681cad +0x07d:  movl   $0xffffffff,0x4(%esp)
08681cb5 +0x085:  mov    0x8(%ebp),%eax
08681cb8 +0x088:  mov    %eax,(%esp)
08681cbb +0x08b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08681cc0 +0x090:  mov    %eax,%esi
08681cc2 +0x092:  mov    0x8(%ebp),%eax
08681cc5 +0x095:  mov    %eax,(%esp)
08681cc8 +0x098:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08681ccd +0x09d:  movl   $0x0,0x4(%esp)
08681cd5 +0x0a5:  mov    %eax,(%esp)
08681cd8 +0x0a8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08681cdd +0x0ad:  mov    %eax,%ebx
08681cdf +0x0af:  movl   $0x869f,0x8(%esp)
08681ce7 +0x0b7:  movl   $&_ZZN5CUser23InsertOnTimeEventRewardEjjE19__PRETTY_FUNCTION__,0x4(%esp)
08681cef +0x0bf:  lea    -0x2c(%ebp),%eax
08681cf2 +0x0c2:  mov    %eax,(%esp)
08681cf5 +0x0c5:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
08681cfa +0x0ca:  mov    %esi,0x10(%esp)
08681cfe +0x0ce:  mov    %ebx,0xc(%esp)
08681d02 +0x0d2:  movl   $"On Time Event:InsertOnTimeEventReward(%s, %u)",0x8(%esp)
08681d0a +0x0da:  lea    -0x18a(%ebp),%eax
08681d10 +0x0e0:  mov    %eax,0x4(%esp)
08681d14 +0x0e4:  lea    -0x2c(%ebp),%eax
08681d17 +0x0e7:  mov    %eax,(%esp)
08681d1a +0x0ea:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
08681d1f +0x0ef:  cmpl   $0x0,0xc(%ebp)
08681d23 +0x0f3:  jne    08681d2f <+0xff>
08681d25 +0x0f5:  mov    $0x0,%ebx
08681d2a +0x0fa:  jmp    08682075 <+0x445>
08681d2f +0x0ff:  lea    -0x38(%ebp),%eax
08681d32 +0x102:  mov    %eax,(%esp)
08681d35 +0x105:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08681d3a +0x10a:  movl   $0x120,0x8(%esp)
08681d42 +0x112:  movl   $0x1,0x4(%esp)
08681d4a +0x11a:  lea    -0x38(%ebp),%eax
08681d4d +0x11d:  mov    %eax,(%esp)
08681d50 +0x120:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08681d55 +0x125:  movl   $0x1,0x4(%esp)
08681d5d +0x12d:  lea    -0x38(%ebp),%eax
08681d60 +0x130:  mov    %eax,(%esp)
08681d63 +0x133:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08681d68 +0x138:  lea    -0x38(%ebp),%eax
08681d6b +0x13b:  mov    %eax,(%esp)
08681d6e +0x13e:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08681d73 +0x143:  mov    %eax,-0x24(%ebp)
08681d76 +0x146:  movl   $0x1,0x4(%esp)
08681d7e +0x14e:  lea    -0x38(%ebp),%eax
08681d81 +0x151:  mov    %eax,(%esp)
08681d84 +0x154:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08681d89 +0x159:  mov    0xc(%ebp),%ebx
08681d8c +0x15c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08681d91 +0x161:  mov    %ebx,0x4(%esp)
08681d95 +0x165:  mov    %eax,(%esp)
08681d98 +0x168:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08681d9d +0x16d:  mov    %eax,-0x20(%ebp)
08681da0 +0x170:  cmpl   $0x0,-0x20(%ebp)
08681da4 +0x174:  je     0868201c <+0x3ec>
08681daa +0x17a:  lea    -0x8a(%ebp),%eax
08681db0 +0x180:  mov    %eax,(%esp)
08681db3 +0x183:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08681db8 +0x188:  mov    0xc(%ebp),%eax
08681dbb +0x18b:  mov    %eax,-0x88(%ebp)
08681dc1 +0x191:  mov    0x10(%ebp),%ebx
08681dc4 +0x194:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08681dc9 +0x199:  mov    0xc(%eax),%eax
08681dcc +0x19c:  mov    %ebx,0xc(%esp)
08681dd0 +0x1a0:  lea    -0x8a(%ebp),%edx
08681dd6 +0x1a6:  mov    %edx,0x8(%esp)
08681dda +0x1aa:  movl   $0x0,0x4(%esp)
08681de2 +0x1b2:  mov    %eax,(%esp)
08681de5 +0x1b5:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08681dea +0x1ba:  mov    -0x88(%ebp),%eax
08681df0 +0x1c0:  test   %eax,%eax
08681df2 +0x1c2:  jne    08681e06 <+0x1d6>
08681df4 +0x1c4:  lea    -0x8a(%ebp),%eax
08681dfa +0x1ca:  mov    %eax,(%esp)
08681dfd +0x1cd:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08681e02 +0x1d2:  test   %eax,%eax
08681e04 +0x1d4:  je     08681e0d <+0x1dd>
08681e06 +0x1d6:  mov    $0x1,%eax
08681e0b +0x1db:  jmp    08681e12 <+0x1e2>
08681e0d +0x1dd:  mov    $0x0,%eax
08681e12 +0x1e2:  test   %al,%al
08681e14 +0x1e4:  je     08682023 <+0x3f3>
08681e1a +0x1ea:  movl   $0xffffffff,-0x1c(%ebp)
08681e21 +0x1f1:  mov    0x8(%ebp),%eax
08681e24 +0x1f4:  mov    %eax,(%esp)
08681e27 +0x1f7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08681e2c +0x1fc:  movl   $0x1,0x4c(%esp)
08681e34 +0x204:  movl   $0x1,0x48(%esp)
08681e3c +0x20c:  movl   $0xd,0x44(%esp)
08681e44 +0x214:  mov    -0x8a(%ebp),%edx
08681e4a +0x21a:  mov    %edx,0x4(%esp)
08681e4e +0x21e:  mov    -0x86(%ebp),%edx
08681e54 +0x224:  mov    %edx,0x8(%esp)
08681e58 +0x228:  mov    -0x82(%ebp),%edx
08681e5e +0x22e:  mov    %edx,0xc(%esp)
08681e62 +0x232:  mov    -0x7e(%ebp),%edx
08681e65 +0x235:  mov    %edx,0x10(%esp)
08681e69 +0x239:  mov    -0x7a(%ebp),%edx
08681e6c +0x23c:  mov    %edx,0x14(%esp)
08681e70 +0x240:  mov    -0x76(%ebp),%edx
08681e73 +0x243:  mov    %edx,0x18(%esp)
08681e77 +0x247:  mov    -0x72(%ebp),%edx
08681e7a +0x24a:  mov    %edx,0x1c(%esp)
08681e7e +0x24e:  mov    -0x6e(%ebp),%edx
08681e81 +0x251:  mov    %edx,0x20(%esp)
08681e85 +0x255:  mov    -0x6a(%ebp),%edx
08681e88 +0x258:  mov    %edx,0x24(%esp)
08681e8c +0x25c:  mov    -0x66(%ebp),%edx
08681e8f +0x25f:  mov    %edx,0x28(%esp)
08681e93 +0x263:  mov    -0x62(%ebp),%edx
08681e96 +0x266:  mov    %edx,0x2c(%esp)
08681e9a +0x26a:  mov    -0x5e(%ebp),%edx
08681e9d +0x26d:  mov    %edx,0x30(%esp)
08681ea1 +0x271:  mov    -0x5a(%ebp),%edx
08681ea4 +0x274:  mov    %edx,0x34(%esp)
08681ea8 +0x278:  mov    -0x56(%ebp),%edx
08681eab +0x27b:  mov    %edx,0x38(%esp)
08681eaf +0x27f:  mov    -0x52(%ebp),%edx
08681eb2 +0x282:  mov    %edx,0x3c(%esp)
08681eb6 +0x286:  movzbl -0x4e(%ebp),%edx
08681eba +0x28a:  mov    %dl,0x40(%esp)
08681ebe +0x28e:  mov    %eax,(%esp)
08681ec1 +0x291:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08681ec6 +0x296:  mov    %eax,-0x1c(%ebp)
08681ec9 +0x299:  mov    -0x1c(%ebp),%eax
08681ecc +0x29c:  shr    $0x1f,%eax
08681ecf +0x29f:  test   %al,%al
08681ed1 +0x2a1:  je     08681fd3 <+0x3a3>
08681ed7 +0x2a7:  movl   $0x0,0xc(%esp)
08681edf +0x2af:  movl   $"game_server_msg_132",0x8(%esp)
08681ee7 +0x2b7:  movl   $0x4,0x4(%esp)
08681eef +0x2bf:  movl   $&g_scriptStringManager_,(%esp)
08681ef6 +0x2c6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08681efb +0x2cb:  movl   $0x14,0x8(%esp)
08681f03 +0x2d3:  mov    %eax,0x4(%esp)
08681f07 +0x2d7:  lea    -0x4d(%ebp),%eax
08681f0a +0x2da:  mov    %eax,(%esp)
08681f0d +0x2dd:  call   0807d8d0 <_init+0x1c8>
08681f12 +0x2e2:  movl   $0x0,0xc(%esp)
08681f1a +0x2ea:  movl   $"game_server_msg_133",0x8(%esp)
08681f22 +0x2f2:  movl   $0x4,0x4(%esp)
08681f2a +0x2fa:  movl   $&g_scriptStringManager_,(%esp)
08681f31 +0x301:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08681f36 +0x306:  movl   $0xff,0x8(%esp)
08681f3e +0x30e:  mov    %eax,0x4(%esp)
08681f42 +0x312:  lea    -0x28a(%ebp),%eax
08681f48 +0x318:  mov    %eax,(%esp)
08681f4b +0x31b:  call   0807d8d0 <_init+0x1c8>
08681f50 +0x320:  mov    0x8(%ebp),%eax
08681f53 +0x323:  mov    %eax,(%esp)
08681f56 +0x326:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08681f5b +0x32b:  mov    %eax,%ebx
08681f5d +0x32d:  lea    -0x28a(%ebp),%eax
08681f63 +0x333:  mov    %eax,(%esp)
08681f66 +0x336:  call   0807e3b0 <_init+0xca8>
08681f6b +0x33b:  mov    %eax,%esi
08681f6d +0x33d:  mov    0x8(%ebp),%eax
08681f70 +0x340:  mov    %eax,(%esp)
08681f73 +0x343:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08681f78 +0x348:  movl   $0x0,0x24(%esp)
08681f80 +0x350:  movl   $0x0,0x20(%esp)
08681f88 +0x358:  mov    %ebx,0x1c(%esp)
08681f8c +0x35c:  movl   $0x0,0x18(%esp)
08681f94 +0x364:  mov    %esi,0x14(%esp)
08681f98 +0x368:  lea    -0x28a(%ebp),%edx
08681f9e +0x36e:  mov    %edx,0x10(%esp)
08681fa2 +0x372:  mov    %eax,0xc(%esp)
08681fa6 +0x376:  movl   $0x0,0x8(%esp)
08681fae +0x37e:  lea    -0x8a(%ebp),%eax
08681fb4 +0x384:  mov    %eax,0x4(%esp)
08681fb8 +0x388:  lea    -0x4d(%ebp),%eax
08681fbb +0x38b:  mov    %eax,(%esp)
08681fbe +0x38e:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08681fc3 +0x393:  lea    -0x8a(%ebp),%eax
08681fc9 +0x399:  mov    %eax,(%esp)
08681fcc +0x39c:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08681fd1 +0x3a1:  jmp    08681ff5 <+0x3c5>
08681fd3 +0x3a3:  mov    -0x1c(%ebp),%eax
08681fd6 +0x3a6:  mov    %eax,0xc(%esp)
08681fda +0x3aa:  movl   $0x0,0x8(%esp)
08681fe2 +0x3b2:  movl   $0x1,0x4(%esp)
08681fea +0x3ba:  mov    0x8(%ebp),%eax
08681fed +0x3bd:  mov    %eax,(%esp)
08681ff0 +0x3c0:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08681ff5 +0x3c5:  mov    0xc(%ebp),%eax
08681ff8 +0x3c8:  mov    %eax,0x4(%esp)
08681ffc +0x3cc:  lea    -0x38(%ebp),%eax
08681fff +0x3cf:  mov    %eax,(%esp)
08682002 +0x3d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08682007 +0x3d7:  mov    0x10(%ebp),%eax
0868200a +0x3da:  cwtl
0868200b +0x3db:  mov    %eax,0x4(%esp)
0868200f +0x3df:  lea    -0x38(%ebp),%eax
08682012 +0x3e2:  mov    %eax,(%esp)
08682015 +0x3e5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868201a +0x3ea:  jmp    08682023 <+0x3f3>
0868201c +0x3ec:  mov    $0x0,%ebx
08682021 +0x3f1:  jmp    0868206a <+0x43a>
08682023 +0x3f3:  movl   $0x1,0x4(%esp)
0868202b +0x3fb:  lea    -0x38(%ebp),%eax
0868202e +0x3fe:  mov    %eax,(%esp)
08682031 +0x401:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08682036 +0x406:  lea    -0x38(%ebp),%eax
08682039 +0x409:  mov    %eax,0x4(%esp)
0868203d +0x40d:  mov    0x8(%ebp),%eax
08682040 +0x410:  mov    %eax,(%esp)
08682043 +0x413:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08682048 +0x418:  mov    $0x1,%ebx
0868204d +0x41d:  jmp    0868206a <+0x43a>
0868204f +0x41f:  mov    %edx,%ebx
08682051 +0x421:  mov    %eax,%esi
08682053 +0x423:  lea    -0x38(%ebp),%eax
08682056 +0x426:  mov    %eax,(%esp)
08682059 +0x429:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868205e +0x42e:  mov    %esi,%eax
08682060 +0x430:  mov    %ebx,%edx
08682062 +0x432:  mov    %eax,(%esp)
08682065 +0x435:  call   08ae3750 <_Unwind_Resume>
0868206a +0x43a:  lea    -0x38(%ebp),%eax
0868206d +0x43d:  mov    %eax,(%esp)
08682070 +0x440:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08682075 +0x445:  mov    %ebx,%eax
08682077 +0x447:  add    $0x2dc,%esp
0868207d +0x44d:  pop    %ebx
0868207e +0x44e:  pop    %esi
0868207f +0x44f:  pop    %edi
08682080 +0x450:  pop    %ebp
08682081 +0x451:  ret
```

## 反编译 C

```c
// CUser::InsertOnTimeEventReward @ 0x8681c30

/* WARNING: Removing unreachable block (ram,0x08681c81) */
/* CUser::InsertOnTimeEventReward(unsigned int, unsigned int) */

undefined4 __thiscall CUser::InsertOnTimeEventReward(CUser *this,uint param_1,uint param_2)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  CDataManager *this_01;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  bool bVar7;
  char local_28e [256];
  char local_18e [256];
  undefined2 local_8e;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 local_52;
  char local_51 [21];
  PacketGuard local_3c [12];
  CMyFileLog local_30 [8];
  undefined4 local_28;
  int local_24;
  int local_20;
  
  pcVar4 = local_18e;
  uVar6 = 0x100;
  bVar7 = ((uint)pcVar4 & 2) != 0;
  if (bVar7) {
    local_18e[0] = '\0';
    local_18e[1] = '\0';
    pcVar4 = local_18e + 2;
    uVar6 = 0xfe;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (bVar7) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
  }
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this_00);
  sprintf(local_18e,"./log/%s/OnTimeEvent",uVar1);
  uVar1 = get_charac_no(this,-1);
  uVar6 = get_acc_id(this);
  uVar2 = NumberToString(uVar6,0);
  CMyFileLog::CMyFileLog
            (local_30,"bool CUser::InsertOnTimeEventReward(unsigned int, unsigned int)",0x869f);
  CMyFileLog::operator()
            (local_30,local_18e,"On Time Event:InsertOnTimeEventReward(%s, %u)",uVar2,uVar1);
  if (param_1 == 0) {
    return 0;
  }
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08681d50 to 08682047 has its CatchHandler @ 0868204f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x120);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
  this_01 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::find_item(this_01,param_1);
  if (local_24 == 0) {
    uVar1 = 0;
    goto LAB_0868206a;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_8e);
  uStack_8c = param_1;
  iVar3 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar3 + 0xc),0,&local_8e,param_2);
  if (uStack_8c == 0) {
    iVar3 = Inven_Item::get_add_info((Inven_Item *)&local_8e);
    if (iVar3 != 0) goto LAB_08681e06;
    bVar7 = false;
  }
  else {
LAB_08681e06:
    bVar7 = true;
  }
  if (bVar7) {
    local_20 = 0xffffffff;
    uVar1 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_20 = CInventory::insertItemIntoInventory
                         (uVar1,CONCAT22((undefined2)uStack_8c,local_8e),
                          CONCAT22(uStack_88,uStack_8c._2_2_),local_86,local_82,local_7e,local_7a,
                          local_76,local_72,local_6e,local_6a,local_66,local_62,local_5e,local_5a,
                          local_56,local_52,0xd,1,1);
    if (local_20 < 0) {
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_132",(bool *)0x0);
      strncpy(local_51,pcVar4,0x14);
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_133",(bool *)0x0);
      strncpy(local_28e,pcVar4,0xff);
      uVar1 = GetServerGroup(this);
      sVar5 = strlen(local_28e);
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_51,&local_8e,0,uVar2,local_28e,sVar5,0,uVar1,0,0);
      Inven_Item::reset((Inven_Item *)&local_8e);
    }
    else {
      SendUpdateItem(this,1,0,local_20);
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,(int)(short)param_2);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  Send(this,local_3c);
  uVar1 = 1;
LAB_0868206a:
  PacketGuard::~PacketGuard(local_3c);
  return uVar1;
}
```
