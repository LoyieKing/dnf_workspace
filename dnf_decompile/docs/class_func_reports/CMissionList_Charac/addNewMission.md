# addNewMission

`_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo`

`CMissionList_Charac::addNewMission(MissionInfo const&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4c6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4c6c  _ZN19CMissionList_Charac13addNewMissionERK11MissionInfo
#           CMissionList_Charac::addNewMission(MissionInfo const&)
# range [0x085e4c6c, 0x085e4d13]
085e4c6c +0x00:  push   %ebp
085e4c6d +0x01:  mov    %esp,%ebp
085e4c6f +0x03:  push   %esi
085e4c70 +0x04:  push   %ebx
085e4c71 +0x05:  sub    $0x30,%esp
085e4c74 +0x08:  mov    0xc(%ebp),%eax
085e4c77 +0x0b:  movzwl 0x2(%eax),%eax
085e4c7b +0x0f:  movswl %ax,%ebx
085e4c7e +0x12:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e4c83 +0x17:  mov    %ebx,0x4(%esp)
085e4c87 +0x1b:  mov    %eax,(%esp)
085e4c8a +0x1e:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e4c8f +0x23:  mov    %eax,-0xc(%ebp)
085e4c92 +0x26:  cmpl   $0x0,-0xc(%ebp)
085e4c96 +0x2a:  je     085e4d0d <+0xa1>
085e4c98 +0x2c:  mov    0xc(%ebp),%eax
085e4c9b +0x2f:  movzwl (%eax),%eax
085e4c9e +0x32:  movswl %ax,%ebx
085e4ca1 +0x35:  mov    0x8(%ebp),%ecx
085e4ca4 +0x38:  mov    0xc(%ebp),%eax
085e4ca7 +0x3b:  mov    0x4(%eax),%edx
085e4caa +0x3e:  mov    (%eax),%eax
085e4cac +0x40:  mov    %eax,0x5(%ecx,%ebx,8)
085e4cb0 +0x44:  mov    %edx,0x9(%ecx,%ebx,8)
085e4cb4 +0x48:  mov    0x8(%ebp),%eax
085e4cb7 +0x4b:  mov    0x154(%eax),%eax
085e4cbd +0x51:  test   %eax,%eax
085e4cbf +0x53:  je     085e4d0d <+0xa1>
085e4cc1 +0x55:  mov    0xc(%ebp),%eax
085e4cc4 +0x58:  movzwl 0x6(%eax),%eax
085e4cc8 +0x5c:  movswl %ax,%ebx
085e4ccb +0x5f:  mov    0xc(%ebp),%eax
085e4cce +0x62:  movzwl 0x4(%eax),%eax
085e4cd2 +0x66:  movswl %ax,%ecx
085e4cd5 +0x69:  mov    0xc(%ebp),%eax
085e4cd8 +0x6c:  movzwl 0x2(%eax),%eax
085e4cdc +0x70:  movswl %ax,%edx
085e4cdf +0x73:  mov    0xc(%ebp),%eax
085e4ce2 +0x76:  movzwl (%eax),%eax
085e4ce5 +0x79:  cwtl
085e4ce6 +0x7a:  mov    0x8(%ebp),%esi
085e4ce9 +0x7d:  mov    0x154(%esi),%esi
085e4cef +0x83:  add    $0x79700,%esi
085e4cf5 +0x89:  mov    %ebx,0x10(%esp)
085e4cf9 +0x8d:  mov    %ecx,0xc(%esp)
085e4cfd +0x91:  mov    %edx,0x8(%esp)
085e4d01 +0x95:  mov    %eax,0x4(%esp)
085e4d05 +0x99:  mov    %esi,(%esp)
085e4d08 +0x9c:  call   086869e8 <_ZN15cUserHistoryLog13pvpMissionAddEiiii>  ; cUserHistoryLog::pvpMissionAdd(int, int, int, int)
085e4d0d +0xa1:  add    $0x30,%esp
085e4d10 +0xa4:  pop    %ebx
085e4d11 +0xa5:  pop    %esi
085e4d12 +0xa6:  pop    %ebp
085e4d13 +0xa7:  ret
```

## 反编译 C

```c
// CMissionList_Charac::addNewMission @ 0x85e4c6c

/* CMissionList_Charac::addNewMission(MissionInfo const&) */

void __thiscall CMissionList_Charac::addNewMission(CMissionList_Charac *this,MissionInfo *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = G_CDataManager();
  iVar3 = CDataManager::find_mission(iVar3);
  if (iVar3 != 0) {
    sVar1 = *(short *)param_1;
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + sVar1 * 8 + 5) = *(undefined4 *)param_1;
    *(undefined4 *)(this + sVar1 * 8 + 9) = uVar2;
    if (*(int *)(this + 0x154) != 0) {
      cUserHistoryLog::pvpMissionAdd
                ((cUserHistoryLog *)(*(int *)(this + 0x154) + 0x79700),(int)*(short *)param_1,
                 (int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),
                 (int)*(short *)(param_1 + 6));
    }
  }
  return;
}
```
