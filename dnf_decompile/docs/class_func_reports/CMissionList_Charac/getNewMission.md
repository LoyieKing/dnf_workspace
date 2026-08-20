# getNewMission

`_ZN19CMissionList_Charac13getNewMissionER5CUseri`

`CMissionList_Charac::getNewMission(CUser&, int)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e65da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e65da  _ZN19CMissionList_Charac13getNewMissionER5CUseri
#           CMissionList_Charac::getNewMission(CUser&, int)
# range [0x085e65da, 0x085e6627]
085e65da +0x00:  push   %ebp
085e65db +0x01:  mov    %esp,%ebp
085e65dd +0x03:  sub    $0x28,%esp
085e65e0 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e65e5 +0x0b:  mov    0x10(%ebp),%edx
085e65e8 +0x0e:  mov    %edx,0x4(%esp)
085e65ec +0x12:  mov    %eax,(%esp)
085e65ef +0x15:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e65f4 +0x1a:  mov    %eax,-0x10(%ebp)
085e65f7 +0x1d:  cmpl   $0x0,-0x10(%ebp)
085e65fb +0x21:  je     085e6625 <+0x4b>
085e65fd +0x23:  mov    -0x10(%ebp),%eax
085e6600 +0x26:  mov    %eax,(%esp)
085e6603 +0x29:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e6608 +0x2e:  mov    %eax,-0xc(%ebp)
085e660b +0x31:  mov    -0xc(%ebp),%eax
085e660e +0x34:  cwtl
085e660f +0x35:  mov    %eax,0x8(%esp)
085e6613 +0x39:  mov    0xc(%ebp),%eax
085e6616 +0x3c:  mov    %eax,0x4(%esp)
085e661a +0x40:  mov    0x8(%ebp),%eax
085e661d +0x43:  mov    %eax,(%esp)
085e6620 +0x46:  call   085e63d6 <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers>  ; CMissionList_Charac::ClearMissionKind(CUser&, short)
085e6625 +0x4b:  leave
085e6626 +0x4c:  ret
085e6627 +0x4d:  nop
```

## 反编译 C

```c
// CMissionList_Charac::getNewMission @ 0x85e65da

/* CMissionList_Charac::getNewMission(CUser&, int) */

void CMissionList_Charac::getNewMission(CUser *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  CMission *this;
  
  iVar2 = G_CDataManager();
  this = (CMission *)CDataManager::find_mission(iVar2);
  if (this != (CMission *)0x0) {
    sVar1 = CMission::GetMissionKind(this);
    ClearMissionKind((CMissionList_Charac *)param_1,(CUser *)param_2,sVar1);
  }
  return;
}
```
