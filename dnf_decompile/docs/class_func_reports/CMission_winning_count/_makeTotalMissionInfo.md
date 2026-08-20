# _makeTotalMissionInfo

`_ZNK22CMission_winning_count21_makeTotalMissionInfoER11MissionInfoRK5CUser`

`CMission_winning_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_count` | `0x085e3548` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3548  _ZNK22CMission_winning_count21_makeTotalMissionInfoER11MissionInfoRK5CUser
#           CMission_winning_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e3548, 0x085e3595]
085e3548 +0x00:  push   %ebp
085e3549 +0x01:  mov    %esp,%ebp
085e354b +0x03:  push   %ebx
085e354c +0x04:  sub    $0x24,%esp
085e354f +0x07:  mov    0x8(%ebp),%eax
085e3552 +0x0a:  mov    0x14(%eax),%eax
085e3555 +0x0d:  cmp    $0xffffffff,%eax
085e3558 +0x10:  je     085e358f <+0x47>
085e355a +0x12:  mov    0x8(%ebp),%eax
085e355d +0x15:  mov    0x14(%eax),%ebx
085e3560 +0x18:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e3565 +0x1d:  mov    %ebx,0x4(%esp)
085e3569 +0x21:  mov    %eax,(%esp)
085e356c +0x24:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e3571 +0x29:  mov    %eax,-0xc(%ebp)
085e3574 +0x2c:  mov    -0xc(%ebp),%eax
085e3577 +0x2f:  mov    (%eax),%eax
085e3579 +0x31:  add    $0x28,%eax
085e357c +0x34:  mov    (%eax),%edx
085e357e +0x36:  mov    -0xc(%ebp),%eax
085e3581 +0x39:  mov    %eax,(%esp)
085e3584 +0x3c:  call   *%edx
085e3586 +0x3e:  mov    %eax,%edx
085e3588 +0x40:  mov    0xc(%ebp),%eax
085e358b +0x43:  mov    %dx,0x4(%eax)
085e358f +0x47:  add    $0x24,%esp
085e3592 +0x4a:  pop    %ebx
085e3593 +0x4b:  pop    %ebp
085e3594 +0x4c:  ret
085e3595 +0x4d:  nop
```

## 反编译 C

```c
// CMission_winning_count::_makeTotalMissionInfo @ 0x85e3548

/* CMission_winning_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_winning_count::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x14) != -1) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    iVar2 = G_CDataManager();
    piVar3 = (int *)CDataManager::find_mission(iVar2);
    uVar1 = (**(code **)(*piVar3 + 0x28))(piVar3,uVar4);
    *(undefined2 *)(param_2 + 4) = uVar1;
  }
  return;
}
```
