# SetPlayResult

`_ZN6CParty13SetPlayResultEP5CUser`

`CParty::SetPlayResult(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b2412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b2412  _ZN6CParty13SetPlayResultEP5CUser
#           CParty::SetPlayResult(CUser*)
# range [0x085b2412, 0x085b26e7]
085b2412 +0x000:  push   %ebp
085b2413 +0x001:  mov    %esp,%ebp
085b2415 +0x003:  push   %edi
085b2416 +0x004:  push   %esi
085b2417 +0x005:  push   %ebx
085b2418 +0x006:  sub    $0x7c,%esp
085b241b +0x009:  mov    0x8(%ebp),%eax
085b241e +0x00c:  mov    %eax,(%esp)
085b2421 +0x00f:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
085b2426 +0x014:  cmp    $0x1,%al
085b2428 +0x016:  sete   %al
085b242b +0x019:  test   %al,%al
085b242d +0x01b:  je     085b26da <+0x2c8>
085b2433 +0x021:  mov    0x8(%ebp),%eax
085b2436 +0x024:  add    $0x17f4,%eax
085b243b +0x029:  mov    %eax,0x8(%esp)
085b243f +0x02d:  mov    0xc(%ebp),%eax
085b2442 +0x030:  mov    %eax,0x4(%esp)
085b2446 +0x034:  mov    0x8(%ebp),%eax
085b2449 +0x037:  mov    %eax,(%esp)
085b244c +0x03a:  call   085b2068 <_ZN6CParty15set_play_resultEP5CUserR13GameResultSet>  ; CParty::set_play_result(CUser*, GameResultSet&)
085b2451 +0x03f:  mov    %eax,-0x3c(%ebp)
085b2454 +0x042:  mov    0x8(%ebp),%eax
085b2457 +0x045:  mov    0x330(%eax),%edx
085b245d +0x04b:  mov    0x32c(%eax),%eax
085b2463 +0x051:  mov    %eax,-0x38(%ebp)
085b2466 +0x054:  mov    0x8(%ebp),%eax
085b2469 +0x057:  add    $0xb24,%eax
085b246e +0x05c:  mov    %eax,(%esp)
085b2471 +0x05f:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b2476 +0x064:  mov    %eax,-0x34(%ebp)
085b2479 +0x067:  mov    0x8(%ebp),%eax
085b247c +0x06a:  add    $0xb24,%eax
085b2481 +0x06f:  mov    %eax,(%esp)
085b2484 +0x072:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b2489 +0x077:  mov    %eax,-0x30(%ebp)
085b248c +0x07a:  mov    -0x30(%ebp),%esi
085b248f +0x07d:  mov    0x8(%ebp),%eax
085b2492 +0x080:  mov    %eax,(%esp)
085b2495 +0x083:  call   085bf76c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xcca>  ; global constructors keyed to CParty::cMember::cMember()+0xcca
085b249a +0x088:  mov    %eax,%ebx
085b249c +0x08a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b24a1 +0x08f:  mov    %esi,0xc(%esp)
085b24a5 +0x093:  mov    %ebx,0x8(%esp)
085b24a9 +0x097:  mov    -0x34(%ebp),%edx
085b24ac +0x09a:  mov    %edx,0x4(%esp)
085b24b0 +0x09e:  mov    %eax,(%esp)
085b24b3 +0x0a1:  call   083639d2 <_ZN12CDataManager26getDungeonClearAverageTimeEii23ENUM_DUNGEON_DIFFICULTY>  ; CDataManager::getDungeonClearAverageTime(int, int, ENUM_DUNGEON_DIFFICULTY)
085b24b8 +0x0a6:  mov    %eax,-0x2c(%ebp)
085b24bb +0x0a9:  mov    0x8(%ebp),%eax
085b24be +0x0ac:  movzbl 0x17fd(%eax),%eax
085b24c5 +0x0b3:  movsbl %al,%eax
085b24c8 +0x0b6:  mov    %eax,-0x28(%ebp)
085b24cb +0x0b9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b24d0 +0x0be:  mov    -0x38(%ebp),%edx
085b24d3 +0x0c1:  mov    %edx,0x8(%esp)
085b24d7 +0x0c5:  mov    -0x2c(%ebp),%edx
085b24da +0x0c8:  mov    %edx,0x4(%esp)
085b24de +0x0cc:  mov    %eax,(%esp)
085b24e1 +0x0cf:  call   08363ac8 <_ZN12CDataManager22getClearTimeBonusPointEii>  ; CDataManager::getClearTimeBonusPoint(int, int)
085b24e6 +0x0d4:  mov    %eax,-0x24(%ebp)
085b24e9 +0x0d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b24ee +0x0dc:  mov    -0x28(%ebp),%edx
085b24f1 +0x0df:  mov    %edx,0x8(%esp)
085b24f5 +0x0e3:  mov    -0x24(%ebp),%edx
085b24f8 +0x0e6:  mov    %edx,0x4(%esp)
085b24fc +0x0ea:  mov    %eax,(%esp)
085b24ff +0x0ed:  call   083639c4 <_ZN12CDataManager12calRankPointEii>  ; CDataManager::calRankPoint(int, int)
085b2504 +0x0f2:  mov    %eax,-0x20(%ebp)
085b2507 +0x0f5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b250c +0x0fa:  mov    -0x20(%ebp),%edx
085b250f +0x0fd:  mov    %edx,0x4(%esp)
085b2513 +0x101:  mov    %eax,(%esp)
085b2516 +0x104:  call   083638c0 <_ZN12CDataManager12getRankIndexEi>  ; CDataManager::getRankIndex(int)
085b251b +0x109:  mov    0x8(%ebp),%edx
085b251e +0x10c:  mov    %ax,0x183c(%edx)
085b2525 +0x113:  mov    0x8(%ebp),%eax
085b2528 +0x116:  mov    -0x38(%ebp),%edx
085b252b +0x119:  mov    %edx,0x1800(%eax)
085b2531 +0x11f:  mov    -0x24(%ebp),%eax
085b2534 +0x122:  mov    %eax,%edx
085b2536 +0x124:  mov    0x8(%ebp),%eax
085b2539 +0x127:  mov    %dl,0x1804(%eax)
085b253f +0x12d:  mov    0x8(%ebp),%eax
085b2542 +0x130:  add    $0xb24,%eax
085b2547 +0x135:  mov    %eax,(%esp)
085b254a +0x138:  call   0830e31e <_ZN13CBattle_Field11isQuestMazeEv>  ; CBattle_Field::isQuestMaze()
085b254f +0x13d:  xor    $0x1,%eax
085b2552 +0x140:  test   %al,%al
085b2554 +0x142:  je     085b2576 <+0x164>
085b2556 +0x144:  mov    -0x38(%ebp),%eax
085b2559 +0x147:  mov    %eax,0xc(%esp)
085b255d +0x14b:  mov    -0x30(%ebp),%eax
085b2560 +0x14e:  mov    %eax,0x8(%esp)
085b2564 +0x152:  mov    -0x34(%ebp),%eax
085b2567 +0x155:  mov    %eax,0x4(%esp)
085b256b +0x159:  mov    0x8(%ebp),%eax
085b256e +0x15c:  mov    %eax,(%esp)
085b2571 +0x15f:  call   085be178 <_ZN6CParty16setBestClearTimeEiii>  ; CParty::setBestClearTime(int, int, int)
085b2576 +0x164:  mov    0x8(%ebp),%eax
085b2579 +0x167:  lea    0x17f4(%eax),%edx
085b257f +0x16d:  mov    -0x3c(%ebp),%eax
085b2582 +0x170:  mov    %eax,0x8(%esp)
085b2586 +0x174:  mov    %edx,0x4(%esp)
085b258a +0x178:  mov    0x8(%ebp),%eax
085b258d +0x17b:  mov    %eax,(%esp)
085b2590 +0x17e:  call   081f5db6 <_ZN24DisPatcher_SetPlayResult10SendResultEP6CPartyR13GameResultSeti>  ; DisPatcher_SetPlayResult::SendResult(CParty*, GameResultSet&, int)
085b2595 +0x183:  movzbl %al,%eax
085b2598 +0x186:  mov    %eax,-0x1c(%ebp)
085b259b +0x189:  cmpl   $0x0,-0x1c(%ebp)
085b259f +0x18d:  jne    085b25ab <+0x199>
085b25a1 +0x18f:  mov    $0x0,%eax
085b25a6 +0x194:  jmp    085b26df <+0x2cd>
085b25ab +0x199:  mov    0x8(%ebp),%eax
085b25ae +0x19c:  movzwl 0x183c(%eax),%eax
085b25b5 +0x1a3:  movzwl %ax,%eax
085b25b8 +0x1a6:  mov    %eax,0x4(%esp)
085b25bc +0x1aa:  mov    0x8(%ebp),%eax
085b25bf +0x1ad:  mov    %eax,(%esp)
085b25c2 +0x1b0:  call   085ae0d4 <_ZN6CParty12clear_rewardEi>  ; CParty::clear_reward(int)
085b25c7 +0x1b5:  movl   $0x2,0x4(%esp)
085b25cf +0x1bd:  mov    0x8(%ebp),%eax
085b25d2 +0x1c0:  mov    %eax,(%esp)
085b25d5 +0x1c3:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
085b25da +0x1c8:  movl   $0x1e,0x4(%esp)
085b25e2 +0x1d0:  mov    0x8(%ebp),%eax
085b25e5 +0x1d3:  mov    %eax,(%esp)
085b25e8 +0x1d6:  call   085b21c8 <_ZN6CParty36insert_time_clear_dungeon_reward_msgEi>  ; CParty::insert_time_clear_dungeon_reward_msg(int)
085b25ed +0x1db:  mov    0x8(%ebp),%eax
085b25f0 +0x1de:  mov    %eax,(%esp)
085b25f3 +0x1e1:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b25f8 +0x1e6:  mov    %eax,%ebx
085b25fa +0x1e8:  mov    0x8(%ebp),%eax
085b25fd +0x1eb:  mov    %eax,(%esp)
085b2600 +0x1ee:  call   085b231e <_ZN6CParty21GetSetPlayResultCountEv>  ; CParty::GetSetPlayResultCount()
085b2605 +0x1f3:  cmp    %eax,%ebx
085b2607 +0x1f5:  setne  %al
085b260a +0x1f8:  test   %al,%al
085b260c +0x1fa:  je     085b26da <+0x2c8>
085b2612 +0x200:  movl   $0x3,0x4(%esp)
085b261a +0x208:  mov    0x8(%ebp),%eax
085b261d +0x20b:  mov    %eax,(%esp)
085b2620 +0x20e:  call   085b2384 <_ZN6CParty26GetNoSendSetPlayResultUserEi>  ; CParty::GetNoSendSetPlayResultUser(int)
085b2625 +0x213:  mov    %eax,-0x64(%ebp)
085b2628 +0x216:  movl   $0x2,0x4(%esp)
085b2630 +0x21e:  mov    0x8(%ebp),%eax
085b2633 +0x221:  mov    %eax,(%esp)
085b2636 +0x224:  call   085b2384 <_ZN6CParty26GetNoSendSetPlayResultUserEi>  ; CParty::GetNoSendSetPlayResultUser(int)
085b263b +0x229:  mov    %eax,-0x60(%ebp)
085b263e +0x22c:  movl   $0x1,0x4(%esp)
085b2646 +0x234:  mov    0x8(%ebp),%eax
085b2649 +0x237:  mov    %eax,(%esp)
085b264c +0x23a:  call   085b2384 <_ZN6CParty26GetNoSendSetPlayResultUserEi>  ; CParty::GetNoSendSetPlayResultUser(int)
085b2651 +0x23f:  mov    %eax,-0x5c(%ebp)
085b2654 +0x242:  movl   $0x0,0x4(%esp)
085b265c +0x24a:  mov    0x8(%ebp),%eax
085b265f +0x24d:  mov    %eax,(%esp)
085b2662 +0x250:  call   085b2384 <_ZN6CParty26GetNoSendSetPlayResultUserEi>  ; CParty::GetNoSendSetPlayResultUser(int)
085b2667 +0x255:  mov    %eax,%edi
085b2669 +0x257:  mov    0x8(%ebp),%eax
085b266c +0x25a:  mov    %eax,(%esp)
085b266f +0x25d:  call   085b231e <_ZN6CParty21GetSetPlayResultCountEv>  ; CParty::GetSetPlayResultCount()
085b2674 +0x262:  mov    %eax,%esi
085b2676 +0x264:  mov    0x8(%ebp),%eax
085b2679 +0x267:  mov    %eax,(%esp)
085b267c +0x26a:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b2681 +0x26f:  mov    %eax,%ebx
085b2683 +0x271:  movl   $0x0,0xc(%esp)
085b268b +0x279:  movl   $0x3261,0x8(%esp)
085b2693 +0x281:  movl   $&_ZZN6CParty13SetPlayResultEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085b269b +0x289:  lea    -0x4c(%ebp),%eax
085b269e +0x28c:  mov    %eax,(%esp)
085b26a1 +0x28f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b26a6 +0x294:  mov    -0x64(%ebp),%eax
085b26a9 +0x297:  mov    %eax,0x1c(%esp)
085b26ad +0x29b:  mov    -0x60(%ebp),%eax
085b26b0 +0x29e:  mov    %eax,0x18(%esp)
085b26b4 +0x2a2:  mov    -0x5c(%ebp),%eax
085b26b7 +0x2a5:  mov    %eax,0x14(%esp)
085b26bb +0x2a9:  mov    %edi,0x10(%esp)
085b26bf +0x2ad:  mov    %esi,0xc(%esp)
085b26c3 +0x2b1:  mov    %ebx,0x8(%esp)
085b26c7 +0x2b5:  movl   $"DUNGEON_CLEAR_BUG_CHECK total(%d),recv(%d), (%s,%s,%s,%s)",0x4(%esp)
085b26cf +0x2bd:  lea    -0x4c(%ebp),%eax
085b26d2 +0x2c0:  mov    %eax,(%esp)
085b26d5 +0x2c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b26da +0x2c8:  mov    $0x1,%eax
085b26df +0x2cd:  add    $0x7c,%esp
085b26e2 +0x2d0:  pop    %ebx
085b26e3 +0x2d1:  pop    %esi
085b26e4 +0x2d2:  pop    %edi
085b26e5 +0x2d3:  pop    %ebp
085b26e6 +0x2d4:  ret
085b26e7 +0x2d5:  nop
```

## 反编译 C

```c
// CParty::SetPlayResult @ 0x85b2412

/* CParty::SetPlayResult(CUser*) */

undefined4 __thiscall CParty::SetPlayResult(CParty *this,CUser *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  cMyTrace local_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  cVar1 = get_dungeon_clear_state(this);
  if (cVar1 == '\x01') {
    local_40 = set_play_result((CUser *)this,(GameResultSet *)param_1);
    local_3c = *(int *)(this + 0x32c);
    local_38 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    iVar3 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
    local_34 = iVar3;
    uVar4 = getStartGamePartyCount(this);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_30 = CDataManager::getDungeonClearAverageTime(pCVar5,local_38,uVar4,iVar3);
    local_2c = (int)(char)this[0x17fd];
    pCVar5 = (CDataManager *)G_CDataManager();
    local_28 = CDataManager::getClearTimeBonusPoint(pCVar5,local_30,local_3c);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_24 = CDataManager::calRankPoint(pCVar5,local_28,local_2c);
    pCVar5 = (CDataManager *)G_CDataManager();
    uVar2 = CDataManager::getRankIndex(pCVar5,local_24);
    *(undefined2 *)(this + 0x183c) = uVar2;
    *(int *)(this + 0x1800) = local_3c;
    this[0x1804] = SUB41(local_28,0);
    cVar1 = CBattle_Field::isQuestMaze((CBattle_Field *)(this + 0xb24));
    if (cVar1 != '\x01') {
      setBestClearTime(this,local_38,local_34,local_3c);
    }
    local_20 = DisPatcher_SetPlayResult::SendResult(this,(GameResultSet *)(this + 0x17f4),local_40);
    local_20 = local_20 & 0xff;
    if (local_20 == 0) {
      return 0;
    }
    clear_reward(this,(uint)*(ushort *)(this + 0x183c));
    set_dungeon_clear_state(this,'\x02');
    insert_time_clear_dungeon_reward_msg(this,0x1e);
    iVar3 = get_member_count(this);
    iVar6 = GetSetPlayResultCount(this);
    if (iVar3 != iVar6) {
      uVar4 = GetNoSendSetPlayResultUser(this,3);
      uVar7 = GetNoSendSetPlayResultUser(this,2);
      uVar8 = GetNoSendSetPlayResultUser(this,1);
      uVar9 = GetNoSendSetPlayResultUser(this,0);
      uVar10 = GetSetPlayResultCount(this);
      uVar11 = get_member_count(this);
      cMyTrace::cMyTrace(local_50,"bool CParty::SetPlayResult(CUser*)",0x3261,0);
      cMyTrace::operator()
                (local_50,"DUNGEON_CLEAR_BUG_CHECK total(%d),recv(%d), (%s,%s,%s,%s)",uVar11,uVar10,
                 uVar9,uVar8,uVar7,uVar4);
    }
  }
  return 1;
}
```
