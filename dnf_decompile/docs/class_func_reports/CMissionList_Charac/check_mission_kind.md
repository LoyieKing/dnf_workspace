# check_mission_kind

`_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE`

`CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e627c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e627c  _ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE
#           CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
# range [0x085e627c, 0x085e63d5]
085e627c +0x000:  push   %ebp
085e627d +0x001:  mov    %esp,%ebp
085e627f +0x003:  push   %ebx
085e6280 +0x004:  sub    $0x24,%esp
085e6283 +0x007:  movb   $0x0,-0xd(%ebp)
085e6287 +0x00b:  mov    0xc(%ebp),%edx
085e628a +0x00e:  mov    0x8(%ebp),%eax
085e628d +0x011:  movzwl 0x7(%eax,%edx,8),%eax
085e6292 +0x016:  test   %ax,%ax
085e6295 +0x019:  je     085e63d0 <+0x154>
085e629b +0x01f:  mov    0xc(%ebp),%edx
085e629e +0x022:  mov    0x8(%ebp),%eax
085e62a1 +0x025:  movzwl 0x7(%eax,%edx,8),%eax
085e62a6 +0x02a:  movswl %ax,%ebx
085e62a9 +0x02d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e62ae +0x032:  mov    %ebx,0x4(%esp)
085e62b2 +0x036:  mov    %eax,(%esp)
085e62b5 +0x039:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e62ba +0x03e:  mov    %eax,-0xc(%ebp)
085e62bd +0x041:  cmpl   $0x0,-0xc(%ebp)
085e62c1 +0x045:  je     085e62e0 <+0x64>
085e62c3 +0x047:  mov    0x14(%ebp),%eax
085e62c6 +0x04a:  mov    %eax,0x4(%esp)
085e62ca +0x04e:  mov    -0xc(%ebp),%eax
085e62cd +0x051:  mov    %eax,(%esp)
085e62d0 +0x054:  call   085e327a <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter>  ; CMission::canUpdate(MissionClearCondition_Parameter const&) const
085e62d5 +0x059:  test   %al,%al
085e62d7 +0x05b:  je     085e62e0 <+0x64>
085e62d9 +0x05d:  mov    $0x1,%eax
085e62de +0x062:  jmp    085e62e5 <+0x69>
085e62e0 +0x064:  mov    $0x0,%eax
085e62e5 +0x069:  test   %al,%al
085e62e7 +0x06b:  je     085e63d0 <+0x154>
085e62ed +0x071:  mov    -0xc(%ebp),%eax
085e62f0 +0x074:  mov    (%eax),%eax
085e62f2 +0x076:  add    $0x24,%eax
085e62f5 +0x079:  mov    (%eax),%edx
085e62f7 +0x07b:  mov    0xc(%ebp),%eax
085e62fa +0x07e:  shl    $0x3,%eax
085e62fd +0x081:  add    0x8(%ebp),%eax
085e6300 +0x084:  lea    0x5(%eax),%ecx
085e6303 +0x087:  mov    0x14(%ebp),%eax
085e6306 +0x08a:  mov    %eax,0x8(%esp)
085e630a +0x08e:  mov    %ecx,0x4(%esp)
085e630e +0x092:  mov    -0xc(%ebp),%eax
085e6311 +0x095:  mov    %eax,(%esp)
085e6314 +0x098:  call   *%edx
085e6316 +0x09a:  mov    -0xc(%ebp),%eax
085e6319 +0x09d:  mov    (%eax),%eax
085e631b +0x09f:  add    $0x14,%eax
085e631e +0x0a2:  mov    (%eax),%edx
085e6320 +0x0a4:  mov    0xc(%ebp),%eax
085e6323 +0x0a7:  shl    $0x3,%eax
085e6326 +0x0aa:  add    0x8(%ebp),%eax
085e6329 +0x0ad:  lea    0x5(%eax),%ecx
085e632c +0x0b0:  lea    -0xd(%ebp),%eax
085e632f +0x0b3:  mov    %eax,0x8(%esp)
085e6333 +0x0b7:  mov    %ecx,0x4(%esp)
085e6337 +0x0bb:  mov    -0xc(%ebp),%eax
085e633a +0x0be:  mov    %eax,(%esp)
085e633d +0x0c1:  call   *%edx
085e633f +0x0c3:  test   %al,%al
085e6341 +0x0c5:  je     085e63a2 <+0x126>
085e6343 +0x0c7:  mov    0xc(%ebp),%edx
085e6346 +0x0ca:  mov    0x8(%ebp),%eax
085e6349 +0x0cd:  movzwl 0x7(%eax,%edx,8),%eax
085e634e +0x0d2:  cwtl
085e634f +0x0d3:  mov    %eax,-0x14(%ebp)
085e6352 +0x0d6:  lea    -0x14(%ebp),%eax
085e6355 +0x0d9:  mov    %eax,0x4(%esp)
085e6359 +0x0dd:  mov    0x18(%ebp),%eax
085e635c +0x0e0:  mov    %eax,(%esp)
085e635f +0x0e3:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085e6364 +0x0e8:  cmpl   $0x1b,0xc(%ebp)
085e6368 +0x0ec:  jne    085e6388 <+0x10c>
085e636a +0x0ee:  mov    0x8(%ebp),%eax
085e636d +0x0f1:  add    $0x3d,%eax
085e6370 +0x0f4:  mov    %eax,(%esp)
085e6373 +0x0f7:  call   085e68b6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3e
085e6378 +0x0fc:  mov    0x8(%ebp),%eax
085e637b +0x0ff:  add    $0xf5,%eax
085e6380 +0x104:  mov    %eax,(%esp)
085e6383 +0x107:  call   085e68b6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3e
085e6388 +0x10c:  mov    -0x14(%ebp),%eax
085e638b +0x10f:  cwtl
085e638c +0x110:  mov    %eax,0x8(%esp)
085e6390 +0x114:  mov    0x10(%ebp),%eax
085e6393 +0x117:  mov    %eax,0x4(%esp)
085e6397 +0x11b:  mov    0x8(%ebp),%eax
085e639a +0x11e:  mov    %eax,(%esp)
085e639d +0x121:  call   085e641c <_ZN19CMissionList_Charac12ClearMissionER5CUsers>  ; CMissionList_Charac::ClearMission(CUser&, short)
085e63a2 +0x126:  movzbl -0xd(%ebp),%eax
085e63a6 +0x12a:  test   %al,%al
085e63a8 +0x12c:  je     085e63d0 <+0x154>
085e63aa +0x12e:  mov    0xc(%ebp),%edx
085e63ad +0x131:  mov    0x8(%ebp),%eax
085e63b0 +0x134:  movzwl 0x7(%eax,%edx,8),%eax
085e63b5 +0x139:  cwtl
085e63b6 +0x13a:  mov    %eax,0x8(%esp)
085e63ba +0x13e:  mov    0x10(%ebp),%eax
085e63bd +0x141:  mov    %eax,0x4(%esp)
085e63c1 +0x145:  mov    0x8(%ebp),%eax
085e63c4 +0x148:  mov    %eax,(%esp)
085e63c7 +0x14b:  call   085e5858 <_ZN19CMissionList_Charac17Send_Fail_MissionER5CUsers>  ; CMissionList_Charac::Send_Fail_Mission(CUser&, short)
085e63cc +0x150:  movb   $0x0,-0xd(%ebp)
085e63d0 +0x154:  add    $0x24,%esp
085e63d3 +0x157:  pop    %ebx
085e63d4 +0x158:  pop    %ebp
085e63d5 +0x159:  ret
```

## 反编译 C

```c
// CMissionList_Charac::check_mission_kind @ 0x85e627c

/* CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter
   const&, std::vector<int, std::allocator<int> >&) */

void __thiscall
CMissionList_Charac::check_mission_kind
          (CMissionList_Charac *this,uint param_1,CUser *param_2,
          MissionClearCondition_Parameter *param_3,vector *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_18;
  char local_11;
  CMission *local_10;
  
  local_11 = '\0';
  if (*(short *)(this + param_1 * 8 + 7) != 0) {
    iVar3 = G_CDataManager();
    local_10 = (CMission *)CDataManager::find_mission(iVar3);
    if ((local_10 == (CMission *)0x0) ||
       (cVar2 = CMission::canUpdate(local_10,param_3), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(int *)local_10 + 0x24))(local_10,this + param_1 * 8 + 5,param_3);
      cVar2 = (**(code **)(*(int *)local_10 + 0x14))(local_10,this + param_1 * 8 + 5,&local_11);
      if (cVar2 != '\0') {
        local_18 = (int)*(short *)(this + param_1 * 8 + 7);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_4,&local_18);
        if (param_1 == 0x1b) {
          MissionInfo::clear((MissionInfo *)(this + 0x3d));
          MissionInfo::clear((MissionInfo *)(this + 0xf5));
        }
        ClearMission(this,param_2,(short)local_18);
      }
      if (local_11 != '\0') {
        Send_Fail_Mission(this,param_2,*(short *)(this + param_1 * 8 + 7));
      }
    }
    return;
  }
  return;
}
```
