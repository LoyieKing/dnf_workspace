# resetDailyData

`_ZN5CUser14resetDailyDataEv`

`CUser::resetDailyData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657450  _ZN5CUser14resetDailyDataEv
#           CUser::resetDailyData()
# range [0x08657450, 0x0865756f]
08657450 +0x000:  push   %ebp
08657451 +0x001:  mov    %esp,%ebp
08657453 +0x003:  push   %ebx
08657454 +0x004:  sub    $0x14,%esp
08657457 +0x007:  mov    0x8(%ebp),%eax
0865745a +0x00a:  mov    %eax,(%esp)
0865745d +0x00d:  call   084ec86c <_GLOBAL__I__Z7getUserj+0x381e>  ; global constructors keyed to getUser(unsigned int)+0x381e
08657462 +0x012:  mov    %eax,(%esp)
08657465 +0x015:  call   0869704e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38a3
0865746a +0x01a:  mov    0x8(%ebp),%eax
0865746d +0x01d:  mov    %eax,(%esp)
08657470 +0x020:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08657475 +0x025:  mov    %eax,(%esp)
08657478 +0x028:  call   0822ef4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45f6
0865747d +0x02d:  test   %eax,%eax
0865747f +0x02f:  setne  %al
08657482 +0x032:  test   %al,%al
08657484 +0x034:  je     086574b4 <+0x64>
08657486 +0x036:  mov    0x8(%ebp),%eax
08657489 +0x039:  mov    %eax,(%esp)
0865748c +0x03c:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08657491 +0x041:  mov    %eax,(%esp)
08657494 +0x044:  call   086959a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21fd
08657499 +0x049:  mov    0x8(%ebp),%eax
0865749c +0x04c:  mov    %eax,(%esp)
0865749f +0x04f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086574a4 +0x054:  movl   $0x0,0x4(%esp)
086574ac +0x05c:  mov    %eax,(%esp)
086574af +0x05f:  call   0842c112 <_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj>  ; DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int)
086574b4 +0x064:  mov    0x8(%ebp),%eax
086574b7 +0x067:  mov    %eax,(%esp)
086574ba +0x06a:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086574bf +0x06f:  mov    %eax,(%esp)
086574c2 +0x072:  call   0822efb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x465e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x465e
086574c7 +0x077:  test   %eax,%eax
086574c9 +0x079:  setg   %al
086574cc +0x07c:  test   %al,%al
086574ce +0x07e:  je     08657517 <+0xc7>
086574d0 +0x080:  mov    0x8(%ebp),%eax
086574d3 +0x083:  mov    %eax,(%esp)
086574d6 +0x086:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086574db +0x08b:  movl   $0x0,0x4(%esp)
086574e3 +0x093:  mov    %eax,(%esp)
086574e6 +0x096:  call   084ebdfa <_GLOBAL__I__Z7getUserj+0x2dac>  ; global constructors keyed to getUser(unsigned int)+0x2dac
086574eb +0x09b:  mov    0x8(%ebp),%eax
086574ee +0x09e:  mov    %eax,(%esp)
086574f1 +0x0a1:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
086574f6 +0x0a6:  mov    %eax,%ebx
086574f8 +0x0a8:  mov    0x8(%ebp),%eax
086574fb +0x0ab:  mov    %eax,(%esp)
086574fe +0x0ae:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08657503 +0x0b3:  mov    %ebx,0x8(%esp)
08657507 +0x0b7:  movl   $0x0,0x4(%esp)
0865750f +0x0bf:  mov    %eax,(%esp)
08657512 +0x0c2:  call   0842403a <_ZN25DB_PassPadUpdateCancelCnt11makeRequestEjjPc>  ; DB_PassPadUpdateCancelCnt::makeRequest(unsigned int, unsigned int, char*)
08657517 +0x0c7:  mov    0x8(%ebp),%eax
0865751a +0x0ca:  mov    %eax,(%esp)
0865751d +0x0cd:  call   08681218 <_ZN5CUser29resetNPCRelationShipDailyDataEv>  ; CUser::resetNPCRelationShipDailyData()
08657522 +0x0d2:  mov    0x8(%ebp),%eax
08657525 +0x0d5:  mov    %eax,(%esp)
08657528 +0x0d8:  call   0868121e <_ZN5CUser24sendNPCRelationShipFavorEv>  ; CUser::sendNPCRelationShipFavor()
0865752d +0x0dd:  mov    0x8(%ebp),%eax
08657530 +0x0e0:  add    $0x8d264,%eax
08657535 +0x0e5:  mov    %eax,(%esp)
08657538 +0x0e8:  call   08694bfc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1451>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1451
0865753d +0x0ed:  mov    %eax,%ebx
0865753f +0x0ef:  mov    0x8(%ebp),%eax
08657542 +0x0f2:  mov    %eax,(%esp)
08657545 +0x0f5:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865754a +0x0fa:  movl   $0x1,0x8(%esp)
08657552 +0x102:  mov    %ebx,0x4(%esp)
08657556 +0x106:  mov    %eax,(%esp)
08657559 +0x109:  call   0812431c <_ZN8APSystem20DB_UpdateActionPoint11makeRequestEiRKNS_22_SIG_LOAD_ACTION_POINTEb>  ; APSystem::DB_UpdateActionPoint::makeRequest(int, APSystem::_SIG_LOAD_ACTION_POINT const&, bool)
0865755e +0x10e:  mov    0x8(%ebp),%eax
08657561 +0x111:  mov    %eax,(%esp)
08657564 +0x114:  call   0812238a <_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser>  ; APSystem::CUserProc::SetTodayActionAndCheckMedalReward(CUser*)
08657569 +0x119:  add    $0x14,%esp
0865756c +0x11c:  pop    %ebx
0865756d +0x11d:  pop    %ebp
0865756e +0x11e:  ret
0865756f +0x11f:  nop
```

## 反编译 C

```c
// CUser::resetDailyData @ 0x8657450

/* CUser::resetDailyData() */

void __thiscall CUser::resetDailyData(CUser *this)

{
  CDungeonGainedGold *this_00;
  CSecurityCard *pCVar1;
  int iVar2;
  uint uVar3;
  CPad *pCVar4;
  char *pcVar5;
  _SIG_LOAD_ACTION_POINT *p_Var6;
  
  this_00 = (CDungeonGainedGold *)getDungeonGainedGold(this);
  CDungeonGainedGold::reset(this_00);
  pCVar1 = (CSecurityCard *)getSecurityCard(this);
  iVar2 = WongWork::CSecurityCard::getCancelCnt(pCVar1);
  if (iVar2 != 0) {
    pCVar1 = (CSecurityCard *)getSecurityCard(this);
    WongWork::CSecurityCard::resetCancelCnt(pCVar1);
    uVar3 = get_acc_id(this);
    DB_SecurityCardUpdateCancelCnt::makeRequest(uVar3,0);
  }
  pCVar4 = (CPad *)getPad(this);
  iVar2 = Sanicova::CPad::getCancelCnt(pCVar4);
  if (0 < iVar2) {
    pCVar4 = (CPad *)getPad(this);
    Sanicova::CPad::setCancelCnt(pCVar4,0);
    pcVar5 = (char *)getWebAddress(this);
    uVar3 = get_acc_id(this);
    DB_PassPadUpdateCancelCnt::makeRequest(uVar3,0,pcVar5);
  }
  resetNPCRelationShipDailyData();
  sendNPCRelationShipFavor();
  p_Var6 = (_SIG_LOAD_ACTION_POINT *)
           APSystem::CActionPointManager::GetActionPoint((CActionPointManager *)(this + 0x8d264));
  iVar2 = GetUID(this);
  APSystem::DB_UpdateActionPoint::makeRequest(iVar2,p_Var6,true);
  APSystem::CUserProc::SetTodayActionAndCheckMedalReward(this);
  return;
}
```
