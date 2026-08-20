# _isAcceptCondition

`_ZNK15CMission_within18_isAcceptConditionERK5CUser`

`CMission_within::_isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_within` | `0x085e3c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3c30  _ZNK15CMission_within18_isAcceptConditionERK5CUser
#           CMission_within::_isAcceptCondition(CUser const&) const
# range [0x085e3c30, 0x085e3d4d]
085e3c30 +0x000:  push   %ebp
085e3c31 +0x001:  mov    %esp,%ebp
085e3c33 +0x003:  push   %ebx
085e3c34 +0x004:  sub    $0x44,%esp
085e3c37 +0x007:  movl   $0x8,0x4(%esp)
085e3c3f +0x00f:  mov    0xc(%ebp),%eax
085e3c42 +0x012:  mov    %eax,(%esp)
085e3c45 +0x015:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
085e3c4a +0x01a:  mov    %eax,-0x14(%ebp)
085e3c4d +0x01d:  mov    0x8(%ebp),%eax
085e3c50 +0x020:  mov    %eax,(%esp)
085e3c53 +0x023:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e3c58 +0x028:  mov    %eax,0x4(%esp)
085e3c5c +0x02c:  mov    -0x14(%ebp),%eax
085e3c5f +0x02f:  mov    %eax,(%esp)
085e3c62 +0x032:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e3c67 +0x037:  test   %al,%al
085e3c69 +0x039:  je     085e3c75 <+0x45>
085e3c6b +0x03b:  mov    $0x0,%eax
085e3c70 +0x040:  jmp    085e3d49 <+0x119>
085e3c75 +0x045:  mov    0xc(%ebp),%eax
085e3c78 +0x048:  mov    %eax,(%esp)
085e3c7b +0x04b:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085e3c80 +0x050:  mov    0x14(%eax),%ebx
085e3c83 +0x053:  mov    0x8(%ebp),%edx
085e3c86 +0x056:  lea    -0x2c(%ebp),%eax
085e3c89 +0x059:  mov    %edx,0x4(%esp)
085e3c8d +0x05d:  mov    %eax,(%esp)
085e3c90 +0x060:  call   085e692a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xb2>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xb2
085e3c95 +0x065:  sub    $0x4,%esp
085e3c98 +0x068:  mov    -0x2c(%ebp),%eax
085e3c9b +0x06b:  cmp    %eax,%ebx
085e3c9d +0x06d:  setne  %al
085e3ca0 +0x070:  test   %al,%al
085e3ca2 +0x072:  je     085e3cae <+0x7e>
085e3ca4 +0x074:  mov    $0x0,%eax
085e3ca9 +0x079:  jmp    085e3d49 <+0x119>
085e3cae +0x07e:  mov    0x8(%ebp),%edx
085e3cb1 +0x081:  lea    -0x24(%ebp),%eax
085e3cb4 +0x084:  mov    %edx,0x4(%esp)
085e3cb8 +0x088:  mov    %eax,(%esp)
085e3cbb +0x08b:  call   085e692a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xb2>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xb2
085e3cc0 +0x090:  sub    $0x4,%esp
085e3cc3 +0x093:  mov    -0x24(%ebp),%edx
085e3cc6 +0x096:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
085e3ccb +0x09b:  mov    %edx,0x4(%esp)
085e3ccf +0x09f:  mov    %eax,(%esp)
085e3cd2 +0x0a2:  call   085d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>  ; RefPvpGrade::GetPvpPoint(int) const
085e3cd7 +0x0a7:  mov    %eax,-0x10(%ebp)
085e3cda +0x0aa:  mov    0x8(%ebp),%edx
085e3cdd +0x0ad:  lea    -0x1c(%ebp),%eax
085e3ce0 +0x0b0:  mov    %edx,0x4(%esp)
085e3ce4 +0x0b4:  mov    %eax,(%esp)
085e3ce7 +0x0b7:  call   085e692a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xb2>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xb2
085e3cec +0x0bc:  sub    $0x4,%esp
085e3cef +0x0bf:  mov    -0x1c(%ebp),%edx
085e3cf2 +0x0c2:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
085e3cf7 +0x0c7:  mov    %edx,0x4(%esp)
085e3cfb +0x0cb:  mov    %eax,(%esp)
085e3cfe +0x0ce:  call   085d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>  ; RefPvpGrade::GetPvpNextRankPoint(int) const
085e3d03 +0x0d3:  mov    %eax,-0xc(%ebp)
085e3d06 +0x0d6:  mov    0xc(%ebp),%eax
085e3d09 +0x0d9:  mov    %eax,(%esp)
085e3d0c +0x0dc:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
085e3d11 +0x0e1:  mov    0x8(%eax),%edx
085e3d14 +0x0e4:  mov    -0x10(%ebp),%eax
085e3d17 +0x0e7:  mov    -0xc(%ebp),%ecx
085e3d1a +0x0ea:  mov    %ecx,%ebx
085e3d1c +0x0ec:  sub    %eax,%ebx
085e3d1e +0x0ee:  mov    %ebx,%eax
085e3d20 +0x0f0:  add    -0x10(%ebp),%eax
085e3d23 +0x0f3:  cmp    %eax,%edx
085e3d25 +0x0f5:  setge  %al
085e3d28 +0x0f8:  test   %al,%al
085e3d2a +0x0fa:  je     085e3d44 <+0x114>
085e3d2c +0x0fc:  mov    0xc(%ebp),%eax
085e3d2f +0x0ff:  mov    %eax,(%esp)
085e3d32 +0x102:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
085e3d37 +0x107:  mov    -0xc(%ebp),%edx
085e3d3a +0x10a:  mov    %edx,0x8(%eax)
085e3d3d +0x10d:  mov    $0x1,%eax
085e3d42 +0x112:  jmp    085e3d49 <+0x119>
085e3d44 +0x114:  mov    $0x0,%eax
085e3d49 +0x119:  mov    -0x4(%ebp),%ebx
085e3d4c +0x11c:  leave
085e3d4d +0x11d:  ret
```

## 反编译 C

```c
// CMission_within::_isAcceptCondition @ 0x85e3c30

/* CMission_within::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall CMission_within::_isAcceptCondition(CMission_within *this,CUser *param_1)

{
  char cVar1;
  CMissionList_Charac *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar2 = CMission::GetMissionIndex((CMission *)this);
  cVar1 = CMissionList_Charac::isClearMission(this_00,iVar2);
  if (cVar1 == '\0') {
    iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
    iVar2 = *(int *)(iVar2 + 0x14);
    CMission::GetRankRange();
    if (iVar2 == local_30) {
      CMission::GetRankRange();
      RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,local_28);
      CMission::GetRankRange();
      iVar2 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,local_20);
      iVar4 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
      if (*(int *)(iVar4 + 8) < iVar2) {
        uVar3 = 0;
      }
      else {
        iVar4 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
        *(int *)(iVar4 + 8) = iVar2;
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
