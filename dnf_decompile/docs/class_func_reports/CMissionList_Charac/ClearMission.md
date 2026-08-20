# ClearMission

`_ZN19CMissionList_Charac12ClearMissionER5CUsers`

`CMissionList_Charac::ClearMission(CUser&, short)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e641c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e641c  _ZN19CMissionList_Charac12ClearMissionER5CUsers
#           CMissionList_Charac::ClearMission(CUser&, short)
# range [0x085e641c, 0x085e65d9]
085e641c +0x000:  push   %ebp
085e641d +0x001:  mov    %esp,%ebp
085e641f +0x003:  push   %esi
085e6420 +0x004:  push   %ebx
085e6421 +0x005:  sub    $0x50,%esp
085e6424 +0x008:  mov    0x10(%ebp),%eax
085e6427 +0x00b:  mov    %ax,-0x3c(%ebp)
085e642b +0x00f:  movswl -0x3c(%ebp),%ebx
085e642f +0x013:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e6434 +0x018:  mov    %ebx,0x4(%esp)
085e6438 +0x01c:  mov    %eax,(%esp)
085e643b +0x01f:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e6440 +0x024:  mov    %eax,-0x10(%ebp)
085e6443 +0x027:  cmpl   $0x0,-0x10(%ebp)
085e6447 +0x02b:  jne    085e648c <+0x70>
085e6449 +0x02d:  movswl -0x3c(%ebp),%ebx
085e644d +0x031:  movl   $0x5,0xc(%esp)
085e6455 +0x039:  movl   $0x797,0x8(%esp)
085e645d +0x041:  movl   $&_ZZN19CMissionList_Charac12ClearMissionER5CUsersE19__PRETTY_FUNCTION__,0x4(%esp)
085e6465 +0x049:  lea    -0x38(%ebp),%eax
085e6468 +0x04c:  mov    %eax,(%esp)
085e646b +0x04f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e6470 +0x054:  mov    %ebx,0x8(%esp)
085e6474 +0x058:  movl   $"[@missionSystem] InvalidIndex: <index : %d>",0x4(%esp)
085e647c +0x060:  lea    -0x38(%ebp),%eax
085e647f +0x063:  mov    %eax,(%esp)
085e6482 +0x066:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e6487 +0x06b:  jmp    085e65d0 <+0x1b4>
085e648c +0x070:  mov    -0x10(%ebp),%eax
085e648f +0x073:  mov    %eax,(%esp)
085e6492 +0x076:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e6497 +0x07b:  mov    %eax,-0xc(%ebp)
085e649a +0x07e:  cmpl   $0x6,-0xc(%ebp)
085e649e +0x082:  jne    085e64aa <+0x8e>
085e64a0 +0x084:  mov    0x8(%ebp),%eax
085e64a3 +0x087:  movb   $0x1,0x14e(%eax)
085e64aa +0x08e:  mov    -0xc(%ebp),%edx
085e64ad +0x091:  mov    0x8(%ebp),%eax
085e64b0 +0x094:  movzwl 0x7(%eax,%edx,8),%eax
085e64b5 +0x099:  cmp    -0x3c(%ebp),%ax
085e64b9 +0x09d:  je     085e6510 <+0xf4>
085e64bb +0x09f:  movswl -0x3c(%ebp),%esi
085e64bf +0x0a3:  mov    -0xc(%ebp),%edx
085e64c2 +0x0a6:  mov    0x8(%ebp),%eax
085e64c5 +0x0a9:  movzwl 0x7(%eax,%edx,8),%eax
085e64ca +0x0ae:  movswl %ax,%ebx
085e64cd +0x0b1:  movl   $0x5,0xc(%esp)
085e64d5 +0x0b9:  movl   $0x7a5,0x8(%esp)
085e64dd +0x0c1:  movl   $&_ZZN19CMissionList_Charac12ClearMissionER5CUsersE19__PRETTY_FUNCTION__,0x4(%esp)
085e64e5 +0x0c9:  lea    -0x28(%ebp),%eax
085e64e8 +0x0cc:  mov    %eax,(%esp)
085e64eb +0x0cf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e64f0 +0x0d4:  mov    %esi,0xc(%esp)
085e64f4 +0x0d8:  mov    %ebx,0x8(%esp)
085e64f8 +0x0dc:  movl   $"[@missionSystem] NotMatchIndex: <valid index:%d invalid index:%d>",0x4(%esp)
085e6500 +0x0e4:  lea    -0x28(%ebp),%eax
085e6503 +0x0e7:  mov    %eax,(%esp)
085e6506 +0x0ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e650b +0x0ef:  jmp    085e65d0 <+0x1b4>
085e6510 +0x0f4:  mov    0x8(%ebp),%eax
085e6513 +0x0f7:  mov    %eax,(%esp)
085e6516 +0x0fa:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e651b +0x0ff:  movswl -0x3c(%ebp),%edx
085e651f +0x103:  mov    0x8(%ebp),%eax
085e6522 +0x106:  lea    0x128(%eax),%ecx
085e6528 +0x10c:  lea    -0x18(%ebp),%eax
085e652b +0x10f:  mov    %edx,0x8(%esp)
085e652f +0x113:  mov    %ecx,0x4(%esp)
085e6533 +0x117:  mov    %eax,(%esp)
085e6536 +0x11a:  call   085e81a4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x192c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x192c
085e653b +0x11f:  sub    $0x4,%esp
085e653e +0x122:  movl   $0x1,0x4(%esp)
085e6546 +0x12a:  lea    -0x18(%ebp),%eax
085e6549 +0x12d:  mov    %eax,(%esp)
085e654c +0x130:  call   085e81d8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1960>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1960
085e6551 +0x135:  jmp    085e656e <+0x152>
085e6553 +0x137:  mov    %edx,%ebx
085e6555 +0x139:  mov    %eax,%esi
085e6557 +0x13b:  lea    -0x18(%ebp),%eax
085e655a +0x13e:  mov    %eax,(%esp)
085e655d +0x141:  call   085e81d2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x195a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x195a
085e6562 +0x146:  mov    %esi,%eax
085e6564 +0x148:  mov    %ebx,%edx
085e6566 +0x14a:  mov    %eax,(%esp)
085e6569 +0x14d:  call   08ae3750 <_Unwind_Resume>
085e656e +0x152:  lea    -0x18(%ebp),%eax
085e6571 +0x155:  mov    %eax,(%esp)
085e6574 +0x158:  call   085e81d2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x195a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x195a
085e6579 +0x15d:  mov    -0xc(%ebp),%eax
085e657c +0x160:  shl    $0x3,%eax
085e657f +0x163:  add    0x8(%ebp),%eax
085e6582 +0x166:  add    $0x5,%eax
085e6585 +0x169:  mov    %eax,(%esp)
085e6588 +0x16c:  call   085e68b6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3e
085e658d +0x171:  mov    -0x10(%ebp),%eax
085e6590 +0x174:  mov    (%eax),%eax
085e6592 +0x176:  add    $0x2c,%eax
085e6595 +0x179:  mov    (%eax),%edx
085e6597 +0x17b:  mov    0xc(%ebp),%eax
085e659a +0x17e:  mov    %eax,0x4(%esp)
085e659e +0x182:  mov    -0x10(%ebp),%eax
085e65a1 +0x185:  mov    %eax,(%esp)
085e65a4 +0x188:  call   *%edx
085e65a6 +0x18a:  mov    -0x10(%ebp),%eax
085e65a9 +0x18d:  mov    %eax,(%esp)
085e65ac +0x190:  call   085e6944 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcc
085e65b1 +0x195:  cmp    $0x2,%eax
085e65b4 +0x198:  sete   %al
085e65b7 +0x19b:  test   %al,%al
085e65b9 +0x19d:  jne    085e65cf <+0x1b3>
085e65bb +0x19f:  mov    0xc(%ebp),%eax
085e65be +0x1a2:  mov    %eax,0x4(%esp)
085e65c2 +0x1a6:  mov    0x8(%ebp),%eax
085e65c5 +0x1a9:  mov    %eax,(%esp)
085e65c8 +0x1ac:  call   085e4e4c <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser>  ; CMissionList_Charac::MakeMissionList_forOldUser(CUser const&)
085e65cd +0x1b1:  jmp    085e65d0 <+0x1b4>
085e65cf +0x1b3:  nop
085e65d0 +0x1b4:  lea    -0x8(%ebp),%esp
085e65d3 +0x1b7:  add    $0x0,%esp
085e65d6 +0x1ba:  pop    %ebx
085e65d7 +0x1bb:  pop    %esi
085e65d8 +0x1bc:  pop    %ebp
085e65d9 +0x1bd:  ret
```

## 反编译 C

```c
// CMissionList_Charac::ClearMission @ 0x85e641c

/* CMissionList_Charac::ClearMission(CUser&, short) */

void __thiscall
CMissionList_Charac::ClearMission(CMissionList_Charac *this,CUser *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  reference local_1c [8];
  CMission *local_14;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_14 = (CMission *)CDataManager::find_mission(iVar2);
  if (local_14 == (CMission *)0x0) {
    cMyTrace::cMyTrace(local_3c,"void CMissionList_Charac::ClearMission(CUser&, short int)",0x797,5)
    ;
    cMyTrace::operator()(local_3c,"[@missionSystem] InvalidIndex: <index : %d>",(int)param_2);
  }
  else {
    local_10 = CMission::GetMissionKind(local_14);
    if (local_10 == 6) {
      this[0x14e] = (CMissionList_Charac)0x1;
    }
    if (*(short *)(this + local_10 * 8 + 7) == param_2) {
      charac_expand::CData::alter((CData *)this);
      iVar2 = (int)param_2;
      std::bitset<256u>::operator[]((uint)local_1c);
                    /* try { // try from 085e654c to 085e6550 has its CatchHandler @ 085e6553 */
      std::bitset<256u>::reference::operator=(local_1c,true);
      std::bitset<256u>::reference::~reference(local_1c);
      MissionInfo::clear((MissionInfo *)(this + local_10 * 8 + 5));
      (**(code **)(*(int *)local_14 + 0x2c))(local_14,param_1,iVar2);
      iVar2 = CMission::GetMissionGrade(local_14);
      if (iVar2 != 2) {
        MakeMissionList_forOldUser(this,param_1);
      }
    }
    else {
      sVar1 = *(short *)(this + local_10 * 8 + 7);
      cMyTrace::cMyTrace(local_2c,"void CMissionList_Charac::ClearMission(CUser&, short int)",0x7a5,
                         5);
      cMyTrace::operator()
                (local_2c,"[@missionSystem] NotMatchIndex: <valid index:%d invalid index:%d>",
                 (int)sVar1,(int)param_2);
    }
  }
  return;
}
```
