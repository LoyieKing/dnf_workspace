# find_mission

`_ZN17PvP_MissionSystem12find_missionEi`

`PvP_MissionSystem::find_mission(int)`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e262e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e262e  _ZN17PvP_MissionSystem12find_missionEi
#           PvP_MissionSystem::find_mission(int)
# range [0x085e262e, 0x085e2691]
085e262e +0x00:  push   %ebp
085e262f +0x01:  mov    %esp,%ebp
085e2631 +0x03:  sub    $0x28,%esp
085e2634 +0x06:  mov    0x8(%ebp),%edx
085e2637 +0x09:  lea    -0x10(%ebp),%eax
085e263a +0x0c:  lea    0xc(%ebp),%ecx
085e263d +0x0f:  mov    %ecx,0x8(%esp)
085e2641 +0x13:  mov    %edx,0x4(%esp)
085e2645 +0x17:  mov    %eax,(%esp)
085e2648 +0x1a:  call   085e7cba <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1442>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1442
085e264d +0x1f:  sub    $0x4,%esp
085e2650 +0x22:  mov    0x8(%ebp),%edx
085e2653 +0x25:  lea    -0xc(%ebp),%eax
085e2656 +0x28:  mov    %edx,0x4(%esp)
085e265a +0x2c:  mov    %eax,(%esp)
085e265d +0x2f:  call   085e74ee <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc76>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc76
085e2662 +0x34:  sub    $0x4,%esp
085e2665 +0x37:  lea    -0xc(%ebp),%eax
085e2668 +0x3a:  mov    %eax,0x4(%esp)
085e266c +0x3e:  lea    -0x10(%ebp),%eax
085e266f +0x41:  mov    %eax,(%esp)
085e2672 +0x44:  call   085e7514 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc9c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc9c
085e2677 +0x49:  test   %al,%al
085e2679 +0x4b:  je     085e268b <+0x5d>
085e267b +0x4d:  lea    -0x10(%ebp),%eax
085e267e +0x50:  mov    %eax,(%esp)
085e2681 +0x53:  call   085e7546 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcce>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcce
085e2686 +0x58:  mov    0x4(%eax),%eax
085e2689 +0x5b:  jmp    085e2690 <+0x62>
085e268b +0x5d:  mov    $0x0,%eax
085e2690 +0x62:  leave
085e2691 +0x63:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::find_mission @ 0x85e262e

/* PvP_MissionSystem::find_mission(int) */

undefined4 PvP_MissionSystem::find_mission(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,CMission*>> local_14 [4];
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_10 [12];
  
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::find
            ((int *)local_14);
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
