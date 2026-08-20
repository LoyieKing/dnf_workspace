# _makeTotalMissionInfo

`_ZNK19CMission_kill_count21_makeTotalMissionInfoER11MissionInfoRK5CUser`

`CMission_kill_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill_count` | `0x085e384c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e384c  _ZNK19CMission_kill_count21_makeTotalMissionInfoER11MissionInfoRK5CUser
#           CMission_kill_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e384c, 0x085e3899]
085e384c +0x00:  push   %ebp
085e384d +0x01:  mov    %esp,%ebp
085e384f +0x03:  push   %ebx
085e3850 +0x04:  sub    $0x24,%esp
085e3853 +0x07:  mov    0x8(%ebp),%eax
085e3856 +0x0a:  mov    0x14(%eax),%eax
085e3859 +0x0d:  cmp    $0xffffffff,%eax
085e385c +0x10:  je     085e3893 <+0x47>
085e385e +0x12:  mov    0x8(%ebp),%eax
085e3861 +0x15:  mov    0x14(%eax),%ebx
085e3864 +0x18:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e3869 +0x1d:  mov    %ebx,0x4(%esp)
085e386d +0x21:  mov    %eax,(%esp)
085e3870 +0x24:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e3875 +0x29:  mov    %eax,-0xc(%ebp)
085e3878 +0x2c:  mov    -0xc(%ebp),%eax
085e387b +0x2f:  mov    (%eax),%eax
085e387d +0x31:  add    $0x28,%eax
085e3880 +0x34:  mov    (%eax),%edx
085e3882 +0x36:  mov    -0xc(%ebp),%eax
085e3885 +0x39:  mov    %eax,(%esp)
085e3888 +0x3c:  call   *%edx
085e388a +0x3e:  mov    %eax,%edx
085e388c +0x40:  mov    0xc(%ebp),%eax
085e388f +0x43:  mov    %dx,0x4(%eax)
085e3893 +0x47:  add    $0x24,%esp
085e3896 +0x4a:  pop    %ebx
085e3897 +0x4b:  pop    %ebp
085e3898 +0x4c:  ret
085e3899 +0x4d:  nop
```

## 反编译 C

```c
// CMission_kill_count::_makeTotalMissionInfo @ 0x85e384c

/* CMission_kill_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_kill_count::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

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
