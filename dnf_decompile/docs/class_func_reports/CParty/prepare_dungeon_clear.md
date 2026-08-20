# prepare_dungeon_clear

`_ZN6CParty21prepare_dungeon_clearEv`

`CParty::prepare_dungeon_clear()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085aa39a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085aa39a  _ZN6CParty21prepare_dungeon_clearEv
#           CParty::prepare_dungeon_clear()
# range [0x085aa39a, 0x085aa5d3]
085aa39a +0x000:  push   %ebp
085aa39b +0x001:  mov    %esp,%ebp
085aa39d +0x003:  push   %ebx
085aa39e +0x004:  sub    $0x24,%esp
085aa3a1 +0x007:  mov    0x8(%ebp),%eax
085aa3a4 +0x00a:  movzbl 0x11a(%eax),%eax
085aa3ab +0x011:  movzbl %al,%eax
085aa3ae +0x014:  mov    0x8(%ebp),%edx
085aa3b1 +0x017:  add    $0xc7c,%edx
085aa3b7 +0x01d:  mov    %eax,0x4(%esp)
085aa3bb +0x021:  mov    %edx,(%esp)
085aa3be +0x024:  call   082fee4a <_ZN19CDungeonClearTracer17SetClearedDungeonEb>  ; CDungeonClearTracer::SetClearedDungeon(bool)
085aa3c3 +0x029:  mov    0x8(%ebp),%eax
085aa3c6 +0x02c:  add    $0xb24,%eax
085aa3cb +0x031:  mov    %eax,(%esp)
085aa3ce +0x034:  call   0822cfa6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2650>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2650
085aa3d3 +0x039:  movzbl %al,%eax
085aa3d6 +0x03c:  mov    0x8(%ebp),%edx
085aa3d9 +0x03f:  add    $0xc7c,%edx
085aa3df +0x045:  mov    %eax,0x4(%esp)
085aa3e3 +0x049:  mov    %edx,(%esp)
085aa3e6 +0x04c:  call   082fee62 <_ZN19CDungeonClearTracer11SetEndPointEb>  ; CDungeonClearTracer::SetEndPoint(bool)
085aa3eb +0x051:  mov    0x8(%ebp),%eax
085aa3ee +0x054:  add    $0xb24,%eax
085aa3f3 +0x059:  mov    %eax,(%esp)
085aa3f6 +0x05c:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085aa3fb +0x061:  test   %al,%al
085aa3fd +0x063:  je     085aa5cd <+0x233>
085aa403 +0x069:  movl   $0x0,-0xc(%ebp)
085aa40a +0x070:  jmp    085aa561 <+0x1c7>
085aa40f +0x075:  mov    -0xc(%ebp),%eax
085aa412 +0x078:  mov    %eax,0x4(%esp)
085aa416 +0x07c:  mov    0x8(%ebp),%eax
085aa419 +0x07f:  mov    %eax,(%esp)
085aa41c +0x082:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085aa421 +0x087:  xor    $0x1,%eax
085aa424 +0x08a:  test   %al,%al
085aa426 +0x08c:  jne    085aa559 <+0x1bf>
085aa42c +0x092:  mov    0x8(%ebp),%eax
085aa42f +0x095:  mov    0xcd8(%eax),%eax
085aa435 +0x09b:  cmp    $0x1,%eax
085aa438 +0x09e:  je     085aa55c <+0x1c2>
085aa43e +0x0a4:  mov    0x8(%ebp),%eax
085aa441 +0x0a7:  add    $0xb24,%eax
085aa446 +0x0ac:  mov    %eax,(%esp)
085aa449 +0x0af:  call   0822cffc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26a6
085aa44e +0x0b4:  mov    %eax,%ebx
085aa450 +0x0b6:  mov    -0xc(%ebp),%edx
085aa453 +0x0b9:  mov    0x8(%ebp),%ecx
085aa456 +0x0bc:  mov    %edx,%eax
085aa458 +0x0be:  add    %eax,%eax
085aa45a +0x0c0:  add    %edx,%eax
085aa45c +0x0c2:  shl    $0x3,%eax
085aa45f +0x0c5:  lea    (%ecx,%eax,1),%eax
085aa462 +0x0c8:  add    $0x78,%eax
085aa465 +0x0cb:  mov    (%eax),%eax
085aa467 +0x0cd:  mov    %eax,(%esp)
085aa46a +0x0d0:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
085aa46f +0x0d5:  movl   $0x0,0xc(%esp)
085aa477 +0x0dd:  mov    %ebx,0x8(%esp)
085aa47b +0x0e1:  movl   $0x1,0x4(%esp)
085aa483 +0x0e9:  mov    %eax,(%esp)
085aa486 +0x0ec:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
085aa48b +0x0f1:  mov    -0xc(%ebp),%edx
085aa48e +0x0f4:  mov    0x8(%ebp),%ecx
085aa491 +0x0f7:  mov    %edx,%eax
085aa493 +0x0f9:  add    %eax,%eax
085aa495 +0x0fb:  add    %edx,%eax
085aa497 +0x0fd:  shl    $0x3,%eax
085aa49a +0x100:  lea    (%ecx,%eax,1),%eax
085aa49d +0x103:  add    $0x78,%eax
085aa4a0 +0x106:  mov    (%eax),%eax
085aa4a2 +0x108:  mov    0x8e08c(%eax),%eax
085aa4a8 +0x10e:  test   %eax,%eax
085aa4aa +0x110:  jle    085aa536 <+0x19c>
085aa4b0 +0x116:  mov    -0xc(%ebp),%edx
085aa4b3 +0x119:  mov    0x8(%ebp),%ecx
085aa4b6 +0x11c:  mov    %edx,%eax
085aa4b8 +0x11e:  add    %eax,%eax
085aa4ba +0x120:  add    %edx,%eax
085aa4bc +0x122:  shl    $0x3,%eax
085aa4bf +0x125:  lea    (%ecx,%eax,1),%eax
085aa4c2 +0x128:  add    $0x78,%eax
085aa4c5 +0x12b:  mov    (%eax),%eax
085aa4c7 +0x12d:  mov    %eax,(%esp)
085aa4ca +0x130:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085aa4cf +0x135:  mov    %eax,(%esp)
085aa4d2 +0x138:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085aa4d7 +0x13d:  mov    %eax,(%esp)
085aa4da +0x140:  call   0833debc <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv>  ; user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const
085aa4df +0x145:  xor    $0x1,%eax
085aa4e2 +0x148:  test   %al,%al
085aa4e4 +0x14a:  je     085aa536 <+0x19c>
085aa4e6 +0x14c:  mov    -0xc(%ebp),%edx
085aa4e9 +0x14f:  mov    0x8(%ebp),%ecx
085aa4ec +0x152:  mov    %edx,%eax
085aa4ee +0x154:  add    %eax,%eax
085aa4f0 +0x156:  add    %edx,%eax
085aa4f2 +0x158:  shl    $0x3,%eax
085aa4f5 +0x15b:  lea    (%ecx,%eax,1),%eax
085aa4f8 +0x15e:  add    $0x78,%eax
085aa4fb +0x161:  mov    (%eax),%eax
085aa4fd +0x163:  mov    0x8e08c(%eax),%ebx
085aa503 +0x169:  mov    -0xc(%ebp),%edx
085aa506 +0x16c:  mov    0x8(%ebp),%ecx
085aa509 +0x16f:  mov    %edx,%eax
085aa50b +0x171:  add    %eax,%eax
085aa50d +0x173:  add    %edx,%eax
085aa50f +0x175:  shl    $0x3,%eax
085aa512 +0x178:  lea    (%ecx,%eax,1),%eax
085aa515 +0x17b:  add    $0x78,%eax
085aa518 +0x17e:  mov    (%eax),%eax
085aa51a +0x180:  mov    %eax,(%esp)
085aa51d +0x183:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085aa522 +0x188:  mov    %eax,(%esp)
085aa525 +0x18b:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
085aa52a +0x190:  mov    %ebx,0x4(%esp)
085aa52e +0x194:  mov    %eax,(%esp)
085aa531 +0x197:  call   08339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>  ; user_creature::CCreatureMgr::GainExp(int)
085aa536 +0x19c:  mov    -0xc(%ebp),%edx
085aa539 +0x19f:  mov    0x8(%ebp),%ecx
085aa53c +0x1a2:  mov    %edx,%eax
085aa53e +0x1a4:  add    %eax,%eax
085aa540 +0x1a6:  add    %edx,%eax
085aa542 +0x1a8:  shl    $0x3,%eax
085aa545 +0x1ab:  lea    (%ecx,%eax,1),%eax
085aa548 +0x1ae:  add    $0x78,%eax
085aa54b +0x1b1:  mov    (%eax),%eax
085aa54d +0x1b3:  movl   $0x0,0x8e08c(%eax)
085aa557 +0x1bd:  jmp    085aa55d <+0x1c3>
085aa559 +0x1bf:  nop
085aa55a +0x1c0:  jmp    085aa55d <+0x1c3>
085aa55c +0x1c2:  nop
085aa55d +0x1c3:  addl   $0x1,-0xc(%ebp)
085aa561 +0x1c7:  cmpl   $0x3,-0xc(%ebp)
085aa565 +0x1cb:  setle  %al
085aa568 +0x1ce:  test   %al,%al
085aa56a +0x1d0:  jne    085aa40f <+0x75>
085aa570 +0x1d6:  mov    0x8(%ebp),%eax
085aa573 +0x1d9:  add    $0xb24,%eax
085aa578 +0x1de:  mov    %eax,(%esp)
085aa57b +0x1e1:  call   0822d05e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2708>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2708
085aa580 +0x1e6:  mov    0x8(%ebp),%edx
085aa583 +0x1e9:  add    $0xb24,%edx
085aa589 +0x1ef:  mov    %eax,0x8(%esp)
085aa58d +0x1f3:  movl   $0x1,0x4(%esp)
085aa595 +0x1fb:  mov    %edx,(%esp)
085aa598 +0x1fe:  call   085bf29a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7f8>  ; global constructors keyed to CParty::cMember::cMember()+0x7f8
085aa59d +0x203:  test   %al,%al
085aa59f +0x205:  je     085aa5ae <+0x214>
085aa5a1 +0x207:  mov    0x8(%ebp),%eax
085aa5a4 +0x20a:  mov    %eax,(%esp)
085aa5a7 +0x20d:  call   085a9330 <_ZN6CParty12ClearDungeonEv>  ; CParty::ClearDungeon()
085aa5ac +0x212:  jmp    085aa5cd <+0x233>
085aa5ae +0x214:  mov    0x8(%ebp),%eax
085aa5b1 +0x217:  add    $0xb24,%eax
085aa5b6 +0x21c:  mov    %eax,(%esp)
085aa5b9 +0x21f:  call   0822cfa6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2650>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2650
085aa5be +0x224:  test   %al,%al
085aa5c0 +0x226:  je     085aa5cd <+0x233>
085aa5c2 +0x228:  mov    0x8(%ebp),%eax
085aa5c5 +0x22b:  mov    %eax,(%esp)
085aa5c8 +0x22e:  call   085a9330 <_ZN6CParty12ClearDungeonEv>  ; CParty::ClearDungeon()
085aa5cd +0x233:  add    $0x24,%esp
085aa5d0 +0x236:  pop    %ebx
085aa5d1 +0x237:  pop    %ebp
085aa5d2 +0x238:  ret
085aa5d3 +0x239:  nop
```

## 反编译 C

```c
// CParty::prepare_dungeon_clear @ 0x85aa39a

/* CParty::prepare_dungeon_clear() */

void __thiscall CParty::prepare_dungeon_clear(CParty *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  UserQuest *pUVar4;
  CInventory *pCVar5;
  CCreatureMgr *pCVar6;
  undefined4 uVar7;
  int local_10;
  
  CDungeonClearTracer::SetClearedDungeon((CDungeonClearTracer *)(this + 0xc7c),(bool)this[0x11a]);
  bVar2 = (bool)CBattle_Field::check_end_point((CBattle_Field *)(this + 0xb24));
  CDungeonClearTracer::SetEndPoint((CDungeonClearTracer *)(this + 0xc7c),bVar2);
  cVar3 = CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
  if (cVar3 != '\0') {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar3 = _checkValidUser(this,local_10);
      if ((cVar3 == '\x01') && (*(int *)(this + 0xcd8) != 1)) {
        uVar7 = CBattle_Field::get_cur_map((CBattle_Field *)(this + 0xb24));
        pUVar4 = (UserQuest *)CUser::getCurCharacQuestW(*(CUser **)(this + local_10 * 0x18 + 0x78));
        UserQuest::set_authen_data(pUVar4,1,uVar7,0);
        if (0 < *(int *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0x8e08c)) {
          pCVar5 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR
                             (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
          pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar5);
          cVar3 = user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(pCVar6);
          if (cVar3 != '\x01') {
            iVar1 = *(int *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0x8e08c);
            pCVar5 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW
                               (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
            pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
            user_creature::CCreatureMgr::GainExp(pCVar6,iVar1);
          }
        }
        *(undefined4 *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0x8e08c) = 0;
      }
    }
    uVar7 = CBattle_Field::GetCurrentMapIndex((CBattle_Field *)(this + 0xb24));
    cVar3 = CBattle_Field::ClearCondition((CBattle_Field *)(this + 0xb24),1,uVar7);
    if (cVar3 == '\0') {
      cVar3 = CBattle_Field::check_end_point((CBattle_Field *)(this + 0xb24));
      if (cVar3 != '\0') {
        ClearDungeon(this);
      }
    }
    else {
      ClearDungeon(this);
    }
  }
  return;
}
```
