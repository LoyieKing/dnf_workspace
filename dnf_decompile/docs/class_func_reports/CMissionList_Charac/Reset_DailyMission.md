# Reset_DailyMission

`_ZN19CMissionList_Charac18Reset_DailyMissionEv`

`CMissionList_Charac::Reset_DailyMission()`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5528  _ZN19CMissionList_Charac18Reset_DailyMissionEv
#           CMissionList_Charac::Reset_DailyMission()
# range [0x085e5528, 0x085e56e9]
085e5528 +0x000:  push   %ebp
085e5529 +0x001:  mov    %esp,%ebp
085e552b +0x003:  push   %esi
085e552c +0x004:  push   %ebx
085e552d +0x005:  sub    $0x50,%esp
085e5530 +0x008:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e5535 +0x00d:  lea    -0x38(%ebp),%edx
085e5538 +0x010:  mov    %eax,0x4(%esp)
085e553c +0x014:  mov    %edx,(%esp)
085e553f +0x017:  call   0835fae6 <_ZNK12CDataManager22get_daily_mission_kindEv>  ; CDataManager::get_daily_mission_kind() const
085e5544 +0x01c:  sub    $0x4,%esp
085e5547 +0x01f:  movl   $0x0,-0x14(%ebp)
085e554e +0x026:  jmp    085e55b0 <+0x88>
085e5550 +0x028:  mov    -0x14(%ebp),%edx
085e5553 +0x02b:  lea    -0x34(%ebp),%eax
085e5556 +0x02e:  mov    %edx,0x8(%esp)
085e555a +0x032:  lea    -0x38(%ebp),%edx
085e555d +0x035:  mov    %edx,0x4(%esp)
085e5561 +0x039:  mov    %eax,(%esp)
085e5564 +0x03c:  call   08111846 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd58>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd58
085e5569 +0x041:  sub    $0x4,%esp
085e556c +0x044:  lea    -0x34(%ebp),%eax
085e556f +0x047:  mov    %eax,(%esp)
085e5572 +0x04a:  call   0811187a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd8c
085e5577 +0x04f:  mov    %eax,%ebx
085e5579 +0x051:  lea    -0x34(%ebp),%eax
085e557c +0x054:  mov    %eax,(%esp)
085e557f +0x057:  call   08111874 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd86>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd86
085e5584 +0x05c:  test   %bl,%bl
085e5586 +0x05e:  je     085e55ac <+0x84>
085e5588 +0x060:  mov    -0x14(%ebp),%eax
085e558b +0x063:  shl    $0x3,%eax
085e558e +0x066:  add    0x8(%ebp),%eax
085e5591 +0x069:  add    $0x5,%eax
085e5594 +0x06c:  mov    %eax,(%esp)
085e5597 +0x06f:  call   085e68b6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3e
085e559c +0x074:  mov    -0x14(%ebp),%edx
085e559f +0x077:  mov    -0x14(%ebp),%eax
085e55a2 +0x07a:  mov    %eax,%ecx
085e55a4 +0x07c:  mov    0x8(%ebp),%eax
085e55a7 +0x07f:  mov    %cx,0x5(%eax,%edx,8)
085e55ac +0x084:  addl   $0x1,-0x14(%ebp)
085e55b0 +0x088:  cmpl   $0x1f,-0x14(%ebp)
085e55b4 +0x08c:  setle  %al
085e55b7 +0x08f:  test   %al,%al
085e55b9 +0x091:  jne    085e5550 <+0x28>
085e55bb +0x093:  lea    -0x44(%ebp),%eax
085e55be +0x096:  mov    %eax,(%esp)
085e55c1 +0x099:  call   085e80ee <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1876>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1876
085e55c6 +0x09e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e55cb +0x0a3:  lea    -0x44(%ebp),%edx
085e55ce +0x0a6:  mov    %edx,0x4(%esp)
085e55d2 +0x0aa:  mov    %eax,(%esp)
085e55d5 +0x0ad:  call   0835fac6 <_ZN12CDataManager20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE>  ; CDataManager::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)
085e55da +0x0b2:  lea    -0x44(%ebp),%eax
085e55dd +0x0b5:  mov    %eax,(%esp)
085e55e0 +0x0b8:  call   085e8160 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x18e8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x18e8
085e55e5 +0x0bd:  test   %al,%al
085e55e7 +0x0bf:  je     085e561f <+0xf7>
085e55e9 +0x0c1:  movl   $0x5,0xc(%esp)
085e55f1 +0x0c9:  movl   $0x669,0x8(%esp)
085e55f9 +0x0d1:  movl   $&_ZZN19CMissionList_Charac18Reset_DailyMissionEvE19__PRETTY_FUNCTION__,0x4(%esp)
085e5601 +0x0d9:  lea    -0x2c(%ebp),%eax
085e5604 +0x0dc:  mov    %eax,(%esp)
085e5607 +0x0df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e560c +0x0e4:  movl   $"[@missionSystem] Daily Mission List is Empty!!",0x4(%esp)
085e5614 +0x0ec:  lea    -0x2c(%ebp),%eax
085e5617 +0x0ef:  mov    %eax,(%esp)
085e561a +0x0f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e561f +0x0f7:  movl   $0x0,-0x10(%ebp)
085e5626 +0x0fe:  jmp    085e569a <+0x172>
085e5628 +0x100:  mov    -0x10(%ebp),%eax
085e562b +0x103:  mov    %eax,0x4(%esp)
085e562f +0x107:  lea    -0x44(%ebp),%eax
085e5632 +0x10a:  mov    %eax,(%esp)
085e5635 +0x10d:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e563a +0x112:  mov    (%eax),%eax
085e563c +0x114:  mov    %eax,-0xc(%ebp)
085e563f +0x117:  lea    -0x1c(%ebp),%eax
085e5642 +0x11a:  mov    -0xc(%ebp),%edx
085e5645 +0x11d:  mov    %edx,0x8(%esp)
085e5649 +0x121:  lea    -0x38(%ebp),%edx
085e564c +0x124:  mov    %edx,0x4(%esp)
085e5650 +0x128:  mov    %eax,(%esp)
085e5653 +0x12b:  call   08111846 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd58>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd58
085e5658 +0x130:  sub    $0x4,%esp
085e565b +0x133:  lea    -0x1c(%ebp),%eax
085e565e +0x136:  mov    %eax,(%esp)
085e5661 +0x139:  call   0811187a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd8c
085e5666 +0x13e:  mov    %eax,%ebx
085e5668 +0x140:  lea    -0x1c(%ebp),%eax
085e566b +0x143:  mov    %eax,(%esp)
085e566e +0x146:  call   08111874 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd86>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd86
085e5673 +0x14b:  test   %bl,%bl
085e5675 +0x14d:  je     085e5696 <+0x16e>
085e5677 +0x14f:  mov    0x8(%ebp),%eax
085e567a +0x152:  mov    0x154(%eax),%eax
085e5680 +0x158:  mov    -0xc(%ebp),%edx
085e5683 +0x15b:  mov    %edx,0x8(%esp)
085e5687 +0x15f:  mov    %eax,0x4(%esp)
085e568b +0x163:  mov    0x8(%ebp),%eax
085e568e +0x166:  mov    %eax,(%esp)
085e5691 +0x169:  call   085e4fba <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj>  ; CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int)
085e5696 +0x16e:  addl   $0x1,-0x10(%ebp)
085e569a +0x172:  lea    -0x44(%ebp),%eax
085e569d +0x175:  mov    %eax,(%esp)
085e56a0 +0x178:  call   085e7f06 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x168e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x168e
085e56a5 +0x17d:  cmp    -0x10(%ebp),%eax
085e56a8 +0x180:  seta   %al
085e56ab +0x183:  test   %al,%al
085e56ad +0x185:  jne    085e5628 <+0x100>
085e56b3 +0x18b:  mov    0x8(%ebp),%eax
085e56b6 +0x18e:  mov    %eax,(%esp)
085e56b9 +0x191:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e56be +0x196:  lea    -0x44(%ebp),%eax
085e56c1 +0x199:  mov    %eax,(%esp)
085e56c4 +0x19c:  call   085e8102 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x188a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x188a
085e56c9 +0x1a1:  lea    -0x8(%ebp),%esp
085e56cc +0x1a4:  add    $0x0,%esp
085e56cf +0x1a7:  pop    %ebx
085e56d0 +0x1a8:  pop    %esi
085e56d1 +0x1a9:  pop    %ebp
085e56d2 +0x1aa:  ret
085e56d3 +0x1ab:  mov    %edx,%ebx
085e56d5 +0x1ad:  mov    %eax,%esi
085e56d7 +0x1af:  lea    -0x44(%ebp),%eax
085e56da +0x1b2:  mov    %eax,(%esp)
085e56dd +0x1b5:  call   085e8102 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x188a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x188a
085e56e2 +0x1ba:  mov    %esi,%eax
085e56e4 +0x1bc:  mov    %ebx,%edx
085e56e6 +0x1be:  mov    %eax,(%esp)
085e56e9 +0x1c1:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CMissionList_Charac::Reset_DailyMission @ 0x85e5528

/* CMissionList_Charac::Reset_DailyMission() */

void __thiscall CMissionList_Charac::Reset_DailyMission(CMissionList_Charac *this)

{
  char cVar1;
  bool bVar2;
  CDataManager *this_00;
  uint *puVar3;
  uint uVar4;
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  local_48 [12];
  CDataManager local_3c [4];
  reference local_38 [8];
  cMyTrace local_30 [16];
  reference local_20 [8];
  int local_18;
  uint local_14;
  uint local_10;
  
  G_CDataManager();
  CDataManager::get_daily_mission_kind(local_3c);
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    std::bitset<32u>::operator[]((uint)local_38);
    bVar2 = std::bitset::reference::operator_cast_to_bool(local_38);
    std::bitset<32u>::reference::~reference((reference *)local_38);
    if (bVar2) {
      MissionInfo::clear((MissionInfo *)(this + local_18 * 8 + 5));
      *(short *)(this + local_18 * 8 + 5) = (short)local_18;
    }
  }
  std::
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  ::vector(local_48);
                    /* try { // try from 085e55c6 to 085e5695 has its CatchHandler @ 085e56d3 */
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::get_New_DailyMission(this_00,(vector *)local_48);
  cVar1 = std::
          vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
          ::empty();
  if (cVar1 != '\0') {
    cMyTrace::cMyTrace(local_30,"void CMissionList_Charac::Reset_DailyMission()",0x669,5);
    cMyTrace::operator()(local_30,"[@missionSystem] Daily Mission List is Empty!!");
  }
  local_14 = 0;
  while( true ) {
    uVar4 = std::
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
            ::size(local_48);
    if (uVar4 <= local_14) break;
    puVar3 = (uint *)std::
                     vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     ::operator[](local_48,local_14);
    local_10 = *puVar3;
    std::bitset<32u>::operator[]((uint)local_20);
    bVar2 = std::bitset::reference::operator_cast_to_bool(local_20);
    std::bitset<32u>::reference::~reference((reference *)local_20);
    if (bVar2) {
      MakeMissionList_JustKind(this,*(CUser **)(this + 0x154),local_10);
    }
    local_14 = local_14 + 1;
  }
  charac_expand::CData::alter((CData *)this);
  std::
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  ::~vector(local_48);
  return;
}
```
