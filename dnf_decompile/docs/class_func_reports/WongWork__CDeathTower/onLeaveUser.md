# onLeaveUser

`_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser`

`WongWork::CDeathTower::onLeaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x084636f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084636f2  _ZN8WongWork11CDeathTower11onLeaveUserEP5CUser
#           WongWork::CDeathTower::onLeaveUser(CUser*)
# range [0x084636f2, 0x0846388f]
084636f2 +0x000:  push   %ebp
084636f3 +0x001:  mov    %esp,%ebp
084636f5 +0x003:  push   %edi
084636f6 +0x004:  push   %esi
084636f7 +0x005:  push   %ebx
084636f8 +0x006:  sub    $0x13c,%esp
084636fe +0x00c:  movl   $0xffffffff,0x4(%esp)
08463706 +0x014:  mov    0xc(%ebp),%eax
08463709 +0x017:  mov    %eax,(%esp)
0846370c +0x01a:  call   08469a6e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x151>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x151
08463711 +0x01f:  mov    0xc(%ebp),%eax
08463714 +0x022:  mov    %eax,(%esp)
08463717 +0x025:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0846371c +0x02a:  mov    %eax,(%esp)
0846371f +0x02d:  call   0850a392 <_ZN10CInventory12RemoveFPItemEv>  ; CInventory::RemoveFPItem()
08463724 +0x032:  lea    -0x119(%ebp),%edx
0846372a +0x038:  mov    $0x100,%ebx
0846372f +0x03d:  mov    $0x0,%eax
08463734 +0x042:  mov    %edx,%ecx
08463736 +0x044:  and    $0x1,%ecx
08463739 +0x047:  test   %ecx,%ecx
0846373b +0x049:  je     08463745 <+0x53>
0846373d +0x04b:  mov    %al,(%edx)
0846373f +0x04d:  add    $0x1,%edx
08463742 +0x050:  sub    $0x1,%ebx
08463745 +0x053:  mov    %edx,%ecx
08463747 +0x055:  and    $0x2,%ecx
0846374a +0x058:  test   %ecx,%ecx
0846374c +0x05a:  je     08463757 <+0x65>
0846374e +0x05c:  mov    %ax,(%edx)
08463751 +0x05f:  add    $0x2,%edx
08463754 +0x062:  sub    $0x2,%ebx
08463757 +0x065:  mov    %ebx,%ecx
08463759 +0x067:  shr    $0x2,%ecx
0846375c +0x06a:  mov    %edx,%edi
0846375e +0x06c:  rep stos %eax,%es:(%edi)
08463760 +0x06e:  mov    %edi,%edx
08463762 +0x070:  mov    %ebx,%ecx
08463764 +0x072:  and    $0x2,%ecx
08463767 +0x075:  test   %ecx,%ecx
08463769 +0x077:  je     08463771 <+0x7f>
0846376b +0x079:  mov    %ax,(%edx)
0846376e +0x07c:  add    $0x2,%edx
08463771 +0x07f:  mov    %ebx,%ecx
08463773 +0x081:  and    $0x1,%ecx
08463776 +0x084:  test   %ecx,%ecx
08463778 +0x086:  je     0846377f <+0x8d>
0846377a +0x088:  mov    %al,(%edx)
0846377c +0x08a:  add    $0x1,%edx
0846377f +0x08d:  mov    0x8(%ebp),%eax
08463782 +0x090:  mov    (%eax),%eax
08463784 +0x092:  test   %eax,%eax
08463786 +0x094:  je     084637ee <+0xfc>
08463788 +0x096:  mov    0x8(%ebp),%eax
0846378b +0x099:  mov    (%eax),%eax
0846378d +0x09b:  mov    0xcd8(%eax),%eax
08463793 +0x0a1:  mov    %al,-0x19(%ebp)
08463796 +0x0a4:  movsbl -0x19(%ebp),%esi
0846379a +0x0a8:  mov    0x8(%ebp),%eax
0846379d +0x0ab:  mov    (%eax),%eax
0846379f +0x0ad:  lea    -0x119(%ebp),%edx
084637a5 +0x0b3:  mov    %edx,0x4(%esp)
084637a9 +0x0b7:  mov    %eax,(%esp)
084637ac +0x0ba:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
084637b1 +0x0bf:  mov    %eax,%ebx
084637b3 +0x0c1:  mov    0x8(%ebp),%eax
084637b6 +0x0c4:  add    $0xc,%eax
084637b9 +0x0c7:  mov    %eax,(%esp)
084637bc +0x0ca:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
084637c1 +0x0cf:  mov    %eax,(%esp)
084637c4 +0x0d2:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
084637c9 +0x0d7:  mov    0xc(%ebp),%edx
084637cc +0x0da:  add    $0x79700,%edx
084637d2 +0x0e0:  mov    %esi,0x10(%esp)
084637d6 +0x0e4:  mov    %ebx,0xc(%esp)
084637da +0x0e8:  movl   $0x0,0x8(%esp)
084637e2 +0x0f0:  mov    %eax,0x4(%esp)
084637e6 +0x0f4:  mov    %edx,(%esp)
084637e9 +0x0f7:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
084637ee +0x0fc:  mov    0x8(%ebp),%eax
084637f1 +0x0ff:  mov    (%eax),%eax
084637f3 +0x101:  test   %eax,%eax
084637f5 +0x103:  je     08463810 <+0x11e>
084637f7 +0x105:  mov    0x8(%ebp),%eax
084637fa +0x108:  add    $0xc,%eax
084637fd +0x10b:  mov    %eax,(%esp)
08463800 +0x10e:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08463805 +0x113:  test   %eax,%eax
08463807 +0x115:  je     08463810 <+0x11e>
08463809 +0x117:  mov    $0x1,%eax
0846380e +0x11c:  jmp    08463815 <+0x123>
08463810 +0x11e:  mov    $0x0,%eax
08463815 +0x123:  test   %al,%al
08463817 +0x125:  je     0846384a <+0x158>
08463819 +0x127:  mov    0x8(%ebp),%eax
0846381c +0x12a:  add    $0xc,%eax
0846381f +0x12d:  mov    %eax,(%esp)
08463822 +0x130:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08463827 +0x135:  mov    %eax,(%esp)
0846382a +0x138:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0846382f +0x13d:  mov    %eax,%ebx
08463831 +0x13f:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
08463836 +0x144:  movl   $0x0,0x8(%esp)
0846383e +0x14c:  mov    %ebx,0x4(%esp)
08463842 +0x150:  mov    %eax,(%esp)
08463845 +0x153:  call   0860e324 <_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib>  ; CDungeonEntranceLog::DecrementDungeonEntrance(int, bool)
0846384a +0x158:  mov    0x8(%ebp),%eax
0846384d +0x15b:  mov    (%eax),%eax
0846384f +0x15d:  test   %eax,%eax
08463851 +0x15f:  je     08463864 <+0x172>
08463853 +0x161:  mov    0x8(%ebp),%eax
08463856 +0x164:  mov    (%eax),%eax
08463858 +0x166:  mov    %eax,(%esp)
0846385b +0x169:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08463860 +0x16e:  test   %eax,%eax
08463862 +0x170:  jg     0846386b <+0x179>
08463864 +0x172:  mov    $0x1,%eax
08463869 +0x177:  jmp    08463870 <+0x17e>
0846386b +0x179:  mov    $0x0,%eax
08463870 +0x17e:  test   %al,%al
08463872 +0x180:  je     0846387f <+0x18d>
08463874 +0x182:  mov    0x8(%ebp),%eax
08463877 +0x185:  mov    %eax,(%esp)
0846387a +0x188:  call   08467b20 <_ZN8WongWork11CDeathTower8_destroyEv>  ; WongWork::CDeathTower::_destroy()
0846387f +0x18d:  mov    $0x1,%eax
08463884 +0x192:  add    $0x13c,%esp
0846388a +0x198:  pop    %ebx
0846388b +0x199:  pop    %esi
0846388c +0x19a:  pop    %edi
0846388d +0x19b:  pop    %ebp
0846388e +0x19c:  ret
0846388f +0x19d:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::onLeaveUser @ 0x84636f2

/* WongWork::CDeathTower::onLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::onLeaveUser(CDeathTower *this,CUser *param_1)

{
  CInventory *this_00;
  CDungeon *pCVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  char local_11d;
  char local_11c [255];
  char local_1d;
  
  bVar8 = 0;
  CUser::setDeathTowerIndex(param_1,-1);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::RemoveFPItem(this_00);
  pcVar4 = &local_11d;
  uVar5 = 0x100;
  bVar7 = ((uint)pcVar4 & 1) != 0;
  if (bVar7) {
    local_11d = '\0';
    pcVar4 = local_11c;
    uVar5 = 0xff;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (bVar7) {
    *pcVar4 = '\0';
  }
  if (*(int *)this != 0) {
    local_1d = (char)*(undefined4 *)(*(int *)this + 0xcd8);
    iVar6 = (int)local_1d;
    pcVar4 = (char *)CParty::getMemberNames(*(CParty **)this,&local_11d);
    pCVar1 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    pcVar2 = (char *)CDungeon::GetDungeonName(pCVar1);
    cUserHistoryLog::LeaveDungeon((cUserHistoryLog *)(param_1 + 0x79700),pcVar2,0,pcVar4,iVar6);
  }
  if (*(int *)this == 0) {
LAB_08463810:
    bVar7 = false;
  }
  else {
    iVar6 = CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    if (iVar6 == 0) goto LAB_08463810;
    bVar7 = true;
  }
  if (bVar7) {
    pCVar1 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    bVar7 = (bool)CDungeon::get_index(pCVar1);
    iVar6 = GetInstanceDungeonEntranceLog();
    CDungeonEntranceLog::DecrementDungeonEntrance(iVar6,bVar7);
  }
  if (*(int *)this != 0) {
    iVar6 = CParty::get_member_count(*(CParty **)this);
    if (0 < iVar6) {
      bVar7 = false;
      goto LAB_08463870;
    }
  }
  bVar7 = true;
LAB_08463870:
  if (bVar7) {
    _destroy(this);
  }
  return 1;
}
```
