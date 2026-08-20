# OnFightVillageMonster

`_ZN6CParty21OnFightVillageMonsterEP5CUseri`

`CParty::OnFightVillageMonster(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9596` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9596  _ZN6CParty21OnFightVillageMonsterEP5CUseri
#           CParty::OnFightVillageMonster(CUser*, int)
# range [0x085b9596, 0x085b99ab]
085b9596 +0x000:  push   %ebp
085b9597 +0x001:  mov    %esp,%ebp
085b9599 +0x003:  push   %edi
085b959a +0x004:  push   %esi
085b959b +0x005:  push   %ebx
085b959c +0x006:  sub    $0x16c,%esp
085b95a2 +0x00c:  movl   $0x0,-0x30(%ebp)
085b95a9 +0x013:  mov    0x10(%ebp),%eax
085b95ac +0x016:  movzwl %ax,%edx
085b95af +0x019:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
085b95b4 +0x01e:  mov    %edx,0x8(%esp)
085b95b8 +0x022:  mov    0xc(%ebp),%edx
085b95bb +0x025:  mov    %edx,0x4(%esp)
085b95bf +0x029:  mov    %eax,(%esp)
085b95c2 +0x02c:  call   086b4672 <_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert>  ; village_attacked::CVillageMonsterMgr::OnFightVillageMonster(CUser*, unsigned short)
085b95c7 +0x031:  mov    %eax,-0x30(%ebp)
085b95ca +0x034:  cmpl   $0x0,-0x30(%ebp)
085b95ce +0x038:  setne  %al
085b95d1 +0x03b:  test   %al,%al
085b95d3 +0x03d:  je     085b95dd <+0x47>
085b95d5 +0x03f:  mov    -0x30(%ebp),%ebx
085b95d8 +0x042:  jmp    085b999f <+0x409>
085b95dd +0x047:  mov    0xc(%ebp),%eax
085b95e0 +0x04a:  mov    %eax,0x4(%esp)
085b95e4 +0x04e:  mov    0x8(%ebp),%eax
085b95e7 +0x051:  mov    %eax,(%esp)
085b95ea +0x054:  call   0859d718 <_ZN6CParty10game_startEP5CUser>  ; CParty::game_start(CUser*)
085b95ef +0x059:  mov    0x8(%ebp),%eax
085b95f2 +0x05c:  add    $0xb24,%eax
085b95f7 +0x061:  mov    %eax,(%esp)
085b95fa +0x064:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b95ff +0x069:  mov    %eax,-0x2c(%ebp)
085b9602 +0x06c:  movl   $0x0,-0x28(%ebp)
085b9609 +0x073:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b960e +0x078:  mov    -0x2c(%ebp),%edx
085b9611 +0x07b:  mov    %edx,0x4(%esp)
085b9615 +0x07f:  mov    %eax,(%esp)
085b9618 +0x082:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085b961d +0x087:  mov    %eax,-0x24(%ebp)
085b9620 +0x08a:  cmpl   $0x0,-0x24(%ebp)
085b9624 +0x08e:  jne    085b9630 <+0x9a>
085b9626 +0x090:  mov    $0x15,%ebx
085b962b +0x095:  jmp    085b999f <+0x409>
085b9630 +0x09a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b9635 +0x09f:  mov    0xc(%ebp),%edx
085b9638 +0x0a2:  mov    %edx,0x4(%esp)
085b963c +0x0a6:  mov    %eax,(%esp)
085b963f +0x0a9:  call   086cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>  ; GameWorld::GetWorldMapIndex(CUser*)
085b9644 +0x0ae:  mov    %eax,-0x20(%ebp)
085b9647 +0x0b1:  cmpl   $0x0,-0x20(%ebp)
085b964b +0x0b5:  jle    085b9670 <+0xda>
085b964d +0x0b7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b9652 +0x0bc:  lea    0x8780(%eax),%edx
085b9658 +0x0c2:  mov    -0x20(%ebp),%eax
085b965b +0x0c5:  mov    %eax,0x4(%esp)
085b965f +0x0c9:  mov    %edx,(%esp)
085b9662 +0x0cc:  call   083647a2 <_ZNK13CWorldMapList14find_world_mapEi>  ; CWorldMapList::find_world_map(int) const
085b9667 +0x0d1:  mov    0x8(%ebp),%edx
085b966a +0x0d4:  mov    %eax,0x1868(%edx)
085b9670 +0x0da:  mov    0x8(%ebp),%eax
085b9673 +0x0dd:  mov    %eax,(%esp)
085b9676 +0x0e0:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b967b +0x0e5:  mov    0x8(%ebp),%edx
085b967e +0x0e8:  add    $0xb24,%edx
085b9684 +0x0ee:  movl   $0x0,0x20(%esp)
085b968c +0x0f6:  movl   $0x0,0x1c(%esp)
085b9694 +0x0fe:  movl   $0x0,0x18(%esp)
085b969c +0x106:  mov    %eax,0x14(%esp)
085b96a0 +0x10a:  movl   $0x0,0x10(%esp)
085b96a8 +0x112:  mov    -0x28(%ebp),%eax
085b96ab +0x115:  mov    %eax,0xc(%esp)
085b96af +0x119:  mov    -0x24(%ebp),%eax
085b96b2 +0x11c:  mov    %eax,0x8(%esp)
085b96b6 +0x120:  mov    -0x2c(%ebp),%eax
085b96b9 +0x123:  mov    %eax,0x4(%esp)
085b96bd +0x127:  mov    %edx,(%esp)
085b96c0 +0x12a:  call   082ff486 <_ZN13CBattle_Field13SelectDungeonEiPK8CDungeoni17ENUM_DUNGEON_TYPEiP9CWorldMapbi>  ; CBattle_Field::SelectDungeon(int, CDungeon const*, int, ENUM_DUNGEON_TYPE, int, CWorldMap*, bool, int)
085b96c5 +0x12f:  xor    $0x1,%eax
085b96c8 +0x132:  test   %al,%al
085b96ca +0x134:  je     085b96d6 <+0x140>
085b96cc +0x136:  mov    $0x1,%ebx
085b96d1 +0x13b:  jmp    085b999f <+0x409>
085b96d6 +0x140:  lea    -0x13c(%ebp),%ebx
085b96dc +0x146:  mov    $0x0,%eax
085b96e1 +0x14b:  mov    $0x40,%edx
085b96e6 +0x150:  mov    %ebx,%edi
085b96e8 +0x152:  mov    %edx,%ecx
085b96ea +0x154:  rep stos %eax,%es:(%edi)
085b96ec +0x156:  lea    -0x13c(%ebp),%eax
085b96f2 +0x15c:  mov    %eax,0x4(%esp)
085b96f6 +0x160:  mov    0x8(%ebp),%eax
085b96f9 +0x163:  mov    %eax,(%esp)
085b96fc +0x166:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085b9701 +0x16b:  movl   $0x0,-0x1c(%ebp)
085b9708 +0x172:  jmp    085b978d <+0x1f7>
085b970d +0x177:  mov    -0x1c(%ebp),%eax
085b9710 +0x17a:  mov    %eax,0x4(%esp)
085b9714 +0x17e:  mov    0x8(%ebp),%eax
085b9717 +0x181:  mov    %eax,(%esp)
085b971a +0x184:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b971f +0x189:  xor    $0x1,%eax
085b9722 +0x18c:  test   %al,%al
085b9724 +0x18e:  jne    085b9788 <+0x1f2>
085b9726 +0x190:  lea    -0x13c(%ebp),%eax
085b972c +0x196:  mov    %eax,0x4(%esp)
085b9730 +0x19a:  mov    0x8(%ebp),%eax
085b9733 +0x19d:  mov    %eax,(%esp)
085b9736 +0x1a0:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085b973b +0x1a5:  mov    %eax,%ebx
085b973d +0x1a7:  mov    -0x24(%ebp),%eax
085b9740 +0x1aa:  mov    %eax,(%esp)
085b9743 +0x1ad:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
085b9748 +0x1b2:  mov    %eax,%ecx
085b974a +0x1b4:  mov    -0x1c(%ebp),%edx
085b974d +0x1b7:  mov    0x8(%ebp),%esi
085b9750 +0x1ba:  mov    %edx,%eax
085b9752 +0x1bc:  add    %eax,%eax
085b9754 +0x1be:  add    %edx,%eax
085b9756 +0x1c0:  shl    $0x3,%eax
085b9759 +0x1c3:  lea    (%esi,%eax,1),%eax
085b975c +0x1c6:  add    $0x78,%eax
085b975f +0x1c9:  mov    (%eax),%eax
085b9761 +0x1cb:  lea    0x79700(%eax),%edx
085b9767 +0x1d1:  movl   $0x0,0x10(%esp)
085b976f +0x1d9:  mov    %ebx,0xc(%esp)
085b9773 +0x1dd:  mov    -0x28(%ebp),%eax
085b9776 +0x1e0:  mov    %eax,0x8(%esp)
085b977a +0x1e4:  mov    %ecx,0x4(%esp)
085b977e +0x1e8:  mov    %edx,(%esp)
085b9781 +0x1eb:  call   086849a2 <_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i>  ; cUserHistoryLog::EnterDungeon(char const*, int, char const*, int)
085b9786 +0x1f0:  jmp    085b9789 <+0x1f3>
085b9788 +0x1f2:  nop
085b9789 +0x1f3:  addl   $0x1,-0x1c(%ebp)
085b978d +0x1f7:  cmpl   $0x3,-0x1c(%ebp)
085b9791 +0x1fb:  setle  %al
085b9794 +0x1fe:  test   %al,%al
085b9796 +0x200:  jne    085b970d <+0x177>
085b979c +0x206:  lea    -0x3c(%ebp),%eax
085b979f +0x209:  mov    %eax,(%esp)
085b97a2 +0x20c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b97a7 +0x211:  lea    -0x3c(%ebp),%eax
085b97aa +0x214:  mov    %eax,(%esp)
085b97ad +0x217:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b97b2 +0x21c:  movl   $0x1c,0x8(%esp)
085b97ba +0x224:  movl   $0x0,0x4(%esp)
085b97c2 +0x22c:  lea    -0x3c(%ebp),%eax
085b97c5 +0x22f:  mov    %eax,(%esp)
085b97c8 +0x232:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b97cd +0x237:  mov    -0x2c(%ebp),%eax
085b97d0 +0x23a:  mov    %eax,0x4(%esp)
085b97d4 +0x23e:  lea    -0x3c(%ebp),%eax
085b97d7 +0x241:  mov    %eax,(%esp)
085b97da +0x244:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b97df +0x249:  mov    -0x28(%ebp),%eax
085b97e2 +0x24c:  mov    %eax,0x4(%esp)
085b97e6 +0x250:  lea    -0x3c(%ebp),%eax
085b97e9 +0x253:  mov    %eax,(%esp)
085b97ec +0x256:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b97f1 +0x25b:  mov    0x8(%ebp),%eax
085b97f4 +0x25e:  lea    0xb24(%eax),%edx
085b97fa +0x264:  lea    -0x3c(%ebp),%eax
085b97fd +0x267:  mov    %eax,0x8(%esp)
085b9801 +0x26b:  movl   $0x1c,0x4(%esp)
085b9809 +0x273:  mov    %edx,(%esp)
085b980c +0x276:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085b9811 +0x27b:  lea    -0x3c(%ebp),%eax
085b9814 +0x27e:  mov    %eax,0x4(%esp)
085b9818 +0x282:  mov    0x8(%ebp),%eax
085b981b +0x285:  mov    %eax,(%esp)
085b981e +0x288:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b9823 +0x28d:  lea    -0x3c(%ebp),%eax
085b9826 +0x290:  mov    %eax,(%esp)
085b9829 +0x293:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b982e +0x298:  mov    0x8(%ebp),%eax
085b9831 +0x29b:  lea    0xb24(%eax),%edx
085b9837 +0x2a1:  lea    -0x3c(%ebp),%eax
085b983a +0x2a4:  mov    %eax,0x8(%esp)
085b983e +0x2a8:  movl   $0x1d,0x4(%esp)
085b9846 +0x2b0:  mov    %edx,(%esp)
085b9849 +0x2b3:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085b984e +0x2b8:  lea    -0x3c(%ebp),%eax
085b9851 +0x2bb:  mov    %eax,0x4(%esp)
085b9855 +0x2bf:  mov    0x8(%ebp),%eax
085b9858 +0x2c2:  mov    %eax,(%esp)
085b985b +0x2c5:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b9860 +0x2ca:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b9867 +0x2d1:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085b986c +0x2d6:  mov    $0x0,%edx
085b9871 +0x2db:  mov    0x8(%ebp),%ecx
085b9874 +0x2de:  mov    %eax,0x34c(%ecx)
085b987a +0x2e4:  mov    %edx,0x350(%ecx)
085b9880 +0x2ea:  mov    0x8(%ebp),%eax
085b9883 +0x2ed:  movl   $0x0,0x33c(%eax)
085b988d +0x2f7:  movl   $0x0,0x340(%eax)
085b9897 +0x301:  mov    0x8(%ebp),%eax
085b989a +0x304:  movl   $0x0,0x344(%eax)
085b98a4 +0x30e:  movl   $0x0,0x348(%eax)
085b98ae +0x318:  mov    0x8(%ebp),%eax
085b98b1 +0x31b:  movl   $0x0,0x358(%eax)
085b98bb +0x325:  movl   $0x0,0x35c(%eax)
085b98c5 +0x32f:  mov    0x8(%ebp),%eax
085b98c8 +0x332:  mov    0x350(%eax),%edx
085b98ce +0x338:  mov    0x34c(%eax),%eax
085b98d4 +0x33e:  mov    0x8(%ebp),%ecx
085b98d7 +0x341:  mov    %eax,0x360(%ecx)
085b98dd +0x347:  mov    %edx,0x364(%ecx)
085b98e3 +0x34d:  movl   $0x2,0x4(%esp)
085b98eb +0x355:  mov    0x8(%ebp),%eax
085b98ee +0x358:  mov    %eax,(%esp)
085b98f1 +0x35b:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085b98f6 +0x360:  movl   $0x1,0x4(%esp)
085b98fe +0x368:  mov    0x8(%ebp),%eax
085b9901 +0x36b:  mov    %eax,(%esp)
085b9904 +0x36e:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085b9909 +0x373:  mov    0x8(%ebp),%eax
085b990c +0x376:  mov    %eax,(%esp)
085b990f +0x379:  call   085b1fe0 <_ZN6CParty21send_loadingcheck_msgEv>  ; CParty::send_loadingcheck_msg()
085b9914 +0x37e:  lea    -0x3c(%ebp),%eax
085b9917 +0x381:  mov    %eax,(%esp)
085b991a +0x384:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b991f +0x389:  movl   $0x10b,0x8(%esp)
085b9927 +0x391:  movl   $0x1,0x4(%esp)
085b992f +0x399:  lea    -0x3c(%ebp),%eax
085b9932 +0x39c:  mov    %eax,(%esp)
085b9935 +0x39f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b993a +0x3a4:  movl   $0x1,0x4(%esp)
085b9942 +0x3ac:  lea    -0x3c(%ebp),%eax
085b9945 +0x3af:  mov    %eax,(%esp)
085b9948 +0x3b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b994d +0x3b7:  movl   $0x1,0x4(%esp)
085b9955 +0x3bf:  lea    -0x3c(%ebp),%eax
085b9958 +0x3c2:  mov    %eax,(%esp)
085b995b +0x3c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b9960 +0x3ca:  lea    -0x3c(%ebp),%eax
085b9963 +0x3cd:  mov    %eax,0x4(%esp)
085b9967 +0x3d1:  mov    0xc(%ebp),%eax
085b996a +0x3d4:  mov    %eax,(%esp)
085b996d +0x3d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b9972 +0x3dc:  mov    $0x0,%ebx
085b9977 +0x3e1:  lea    -0x3c(%ebp),%eax
085b997a +0x3e4:  mov    %eax,(%esp)
085b997d +0x3e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b9982 +0x3ec:  jmp    085b999f <+0x409>
085b9984 +0x3ee:  mov    %edx,%ebx
085b9986 +0x3f0:  mov    %eax,%esi
085b9988 +0x3f2:  lea    -0x3c(%ebp),%eax
085b998b +0x3f5:  mov    %eax,(%esp)
085b998e +0x3f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b9993 +0x3fd:  mov    %esi,%eax
085b9995 +0x3ff:  mov    %ebx,%edx
085b9997 +0x401:  mov    %eax,(%esp)
085b999a +0x404:  call   08ae3750 <_Unwind_Resume>
085b999f +0x409:  mov    %ebx,%eax
085b99a1 +0x40b:  add    $0x16c,%esp
085b99a7 +0x411:  pop    %ebx
085b99a8 +0x412:  pop    %esi
085b99a9 +0x413:  pop    %edi
085b99aa +0x414:  pop    %ebp
085b99ab +0x415:  ret
```

## 反编译 C

```c
// CParty::OnFightVillageMonster @ 0x85b9596

/* CParty::OnFightVillageMonster(CUser*, int) */

int __thiscall CParty::OnFightVillageMonster(CParty *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_140 [256];
  PacketGuard local_40 [12];
  int local_34;
  int local_30;
  int local_2c;
  CDungeon *local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_34 = 0;
  iVar2 = village_attacked::CVillageMonsterMgr::OnFightVillageMonster
                    (GlobalData::s_villageMonsterMgr,param_1,(ushort)param_2);
  if (iVar2 == 0) {
    local_34 = iVar2;
    game_start(this,param_1);
    local_30 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    local_2c = 0;
    iVar2 = G_CDataManager();
    local_28 = (CDungeon *)CDataManager::find_dungeon(iVar2);
    if (local_28 == (CDungeon *)0x0) {
      iVar2 = 0x15;
    }
    else {
      this_00 = (GameWorld *)G_GameWorld();
      local_24 = GameWorld::GetWorldMapIndex(this_00,param_1);
      if (0 < local_24) {
        iVar2 = G_CDataManager();
        uVar3 = CWorldMapList::find_world_map(iVar2 + 0x8780);
        *(undefined4 *)(this + 0x1868) = uVar3;
      }
      uVar3 = get_member_count(this);
      cVar1 = CBattle_Field::SelectDungeon
                        ((CBattle_Field *)(this + 0xb24),local_30,local_28,local_2c,0,uVar3,0,0,0);
      if (cVar1 == '\x01') {
        pcVar4 = local_140;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
        }
        _getMemberNames(this,local_140);
        for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
          cVar1 = _checkValidUser(this,local_20);
          if (cVar1 == '\x01') {
            pcVar4 = (char *)_getMemberNames(this,local_140);
            pcVar5 = (char *)CDungeon::GetDungeonName(local_28);
            cUserHistoryLog::EnterDungeon
                      ((cUserHistoryLog *)(*(int *)(this + local_20 * 0x18 + 0x78) + 0x79700),pcVar5
                       ,local_2c,pcVar4,0);
          }
        }
        PacketGuard::PacketGuard(local_40);
                    /* try { // try from 085b97ad to 085b9971 has its CatchHandler @ 085b9984 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x1c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,local_30);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,local_2c);
        CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x1c,local_40);
        send_to_party(this,local_40);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
        CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x1d,local_40);
        send_to_party(this,local_40);
        uVar3 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(this + 0x34c) = uVar3;
        *(undefined4 *)(this + 0x350) = 0;
        *(undefined4 *)(this + 0x33c) = 0;
        *(undefined4 *)(this + 0x340) = 0;
        *(undefined4 *)(this + 0x344) = 0;
        *(undefined4 *)(this + 0x348) = 0;
        *(undefined4 *)(this + 0x358) = 0;
        *(undefined4 *)(this + 0x35c) = 0;
        *(undefined4 *)(this + 0x360) = *(undefined4 *)(this + 0x34c);
        *(undefined4 *)(this + 0x364) = *(undefined4 *)(this + 0x350);
        set_state(this,'\x02');
        SetEPLPState(this,'\x01');
        send_loadingcheck_msg(this);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x10b);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
        CUser::Send(param_1,local_40);
        iVar2 = 0;
        PacketGuard::~PacketGuard(local_40);
      }
      else {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}
```
