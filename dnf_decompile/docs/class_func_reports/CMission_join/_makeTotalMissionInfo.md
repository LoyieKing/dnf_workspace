# _makeTotalMissionInfo

`_ZNK13CMission_join21_makeTotalMissionInfoER11MissionInfoRK5CUser`

`CMission_join::_makeTotalMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_join` | `0x085e378a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e378a  _ZNK13CMission_join21_makeTotalMissionInfoER11MissionInfoRK5CUser
#           CMission_join::_makeTotalMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e378a, 0x085e37d7]
085e378a +0x00:  push   %ebp
085e378b +0x01:  mov    %esp,%ebp
085e378d +0x03:  push   %ebx
085e378e +0x04:  sub    $0x24,%esp
085e3791 +0x07:  mov    0x8(%ebp),%eax
085e3794 +0x0a:  mov    0x14(%eax),%eax
085e3797 +0x0d:  cmp    $0xffffffff,%eax
085e379a +0x10:  je     085e37d1 <+0x47>
085e379c +0x12:  mov    0x8(%ebp),%eax
085e379f +0x15:  mov    0x14(%eax),%ebx
085e37a2 +0x18:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e37a7 +0x1d:  mov    %ebx,0x4(%esp)
085e37ab +0x21:  mov    %eax,(%esp)
085e37ae +0x24:  call   0835fa86 <_ZNK12CDataManager12find_missionEi>  ; CDataManager::find_mission(int) const
085e37b3 +0x29:  mov    %eax,-0xc(%ebp)
085e37b6 +0x2c:  mov    -0xc(%ebp),%eax
085e37b9 +0x2f:  mov    (%eax),%eax
085e37bb +0x31:  add    $0x28,%eax
085e37be +0x34:  mov    (%eax),%edx
085e37c0 +0x36:  mov    -0xc(%ebp),%eax
085e37c3 +0x39:  mov    %eax,(%esp)
085e37c6 +0x3c:  call   *%edx
085e37c8 +0x3e:  mov    %eax,%edx
085e37ca +0x40:  mov    0xc(%ebp),%eax
085e37cd +0x43:  mov    %dx,0x4(%eax)
085e37d1 +0x47:  add    $0x24,%esp
085e37d4 +0x4a:  pop    %ebx
085e37d5 +0x4b:  pop    %ebp
085e37d6 +0x4c:  ret
085e37d7 +0x4d:  nop
```

## 反编译 C

```c
// CMission_join::_makeTotalMissionInfo @ 0x85e378a

/* CMission_join::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_join::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

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
