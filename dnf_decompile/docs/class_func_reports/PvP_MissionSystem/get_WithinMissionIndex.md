# get_WithinMissionIndex

`_ZNK17PvP_MissionSystem22get_WithinMissionIndexEi`

`PvP_MissionSystem::get_WithinMissionIndex(int) const`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e2f00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e2f00  _ZNK17PvP_MissionSystem22get_WithinMissionIndexEi
#           PvP_MissionSystem::get_WithinMissionIndex(int) const
# range [0x085e2f00, 0x085e2ffb]
085e2f00 +0x00:  push   %ebp
085e2f01 +0x01:  mov    %esp,%ebp
085e2f03 +0x03:  sub    $0x38,%esp
085e2f06 +0x06:  movl   $0x0,-0x1c(%ebp)
085e2f0d +0x0d:  movl   $0x0,-0x18(%ebp)
085e2f14 +0x14:  lea    -0x1c(%ebp),%eax
085e2f17 +0x17:  mov    %eax,0x8(%esp)
085e2f1b +0x1b:  lea    -0x18(%ebp),%eax
085e2f1e +0x1e:  mov    %eax,0x4(%esp)
085e2f22 +0x22:  lea    -0x24(%ebp),%eax
085e2f25 +0x25:  mov    %eax,(%esp)
085e2f28 +0x28:  call   081627d4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa42
085e2f2d +0x2d:  mov    0x8(%ebp),%eax
085e2f30 +0x30:  add    $0x18,%eax
085e2f33 +0x33:  movl   $0x1b,0x4(%esp)
085e2f3b +0x3b:  mov    %eax,(%esp)
085e2f3e +0x3e:  call   085e7f50 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16d8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16d8
085e2f43 +0x43:  lea    -0x28(%ebp),%edx
085e2f46 +0x46:  mov    %eax,0x4(%esp)
085e2f4a +0x4a:  mov    %edx,(%esp)
085e2f4d +0x4d:  call   085e7f62 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16ea>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16ea
085e2f52 +0x52:  sub    $0x4,%esp
085e2f55 +0x55:  jmp    085e2fb2 <+0xb2>
085e2f57 +0x57:  lea    -0x28(%ebp),%eax
085e2f5a +0x5a:  mov    %eax,(%esp)
085e2f5d +0x5d:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e2f62 +0x62:  mov    (%eax),%edx
085e2f64 +0x64:  lea    -0x10(%ebp),%eax
085e2f67 +0x67:  mov    %edx,0x4(%esp)
085e2f6b +0x6b:  mov    %eax,(%esp)
085e2f6e +0x6e:  call   085e692a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xb2>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xb2
085e2f73 +0x73:  sub    $0x4,%esp
085e2f76 +0x76:  lea    -0x10(%ebp),%eax
085e2f79 +0x79:  mov    %eax,0x4(%esp)
085e2f7d +0x7d:  lea    -0x24(%ebp),%eax
085e2f80 +0x80:  mov    %eax,(%esp)
085e2f83 +0x83:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
085e2f88 +0x88:  mov    -0x24(%ebp),%eax
085e2f8b +0x8b:  cmp    0xc(%ebp),%eax
085e2f8e +0x8e:  jne    085e2fa7 <+0xa7>
085e2f90 +0x90:  lea    -0x28(%ebp),%eax
085e2f93 +0x93:  mov    %eax,(%esp)
085e2f96 +0x96:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e2f9b +0x9b:  mov    (%eax),%eax
085e2f9d +0x9d:  mov    %eax,(%esp)
085e2fa0 +0xa0:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e2fa5 +0xa5:  jmp    085e2ff9 <+0xf9>
085e2fa7 +0xa7:  lea    -0x28(%ebp),%eax
085e2faa +0xaa:  mov    %eax,(%esp)
085e2fad +0xad:  call   085e7fc0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1748>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1748
085e2fb2 +0xb2:  mov    0x8(%ebp),%eax
085e2fb5 +0xb5:  add    $0x18,%eax
085e2fb8 +0xb8:  movl   $0x1b,0x4(%esp)
085e2fc0 +0xc0:  mov    %eax,(%esp)
085e2fc3 +0xc3:  call   085e7f50 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16d8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16d8
085e2fc8 +0xc8:  lea    -0x14(%ebp),%edx
085e2fcb +0xcb:  mov    %eax,0x4(%esp)
085e2fcf +0xcf:  mov    %edx,(%esp)
085e2fd2 +0xd2:  call   085e7f88 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1710>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1710
085e2fd7 +0xd7:  sub    $0x4,%esp
085e2fda +0xda:  lea    -0x14(%ebp),%eax
085e2fdd +0xdd:  mov    %eax,0x4(%esp)
085e2fe1 +0xe1:  lea    -0x28(%ebp),%eax
085e2fe4 +0xe4:  mov    %eax,(%esp)
085e2fe7 +0xe7:  call   085e7fac <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1734>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1734
085e2fec +0xec:  test   %al,%al
085e2fee +0xee:  jne    085e2f57 <+0x57>
085e2ff4 +0xf4:  mov    $0x0,%eax
085e2ff9 +0xf9:  leave
085e2ffa +0xfa:  ret
085e2ffb +0xfb:  nop
```

## 反编译 C

```c
// PvP_MissionSystem::get_WithinMissionIndex @ 0x85e2f00

/* PvP_MissionSystem::get_WithinMissionIndex(int) const */

undefined4 __thiscall PvP_MissionSystem::get_WithinMissionIndex(PvP_MissionSystem *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  _List_const_iterator<CMission*> local_2c [4];
  int local_28 [2];
  int local_20 [2];
  _List_const_iterator local_18 [4];
  pair local_14 [16];
  
  local_20[0] = 0;
  local_20[1] = 0;
  std::pair<int,int>::pair<int,int>((pair<int,int> *)local_28,local_20 + 1,local_20);
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                *)(this + 0x18),0x1b);
  std::list<CMission*,std::allocator<CMission*>>::begin();
  while( true ) {
    std::
    vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
    ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18),0x1b);
    std::list<CMission*,std::allocator<CMission*>>::end();
    cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_2c,local_18);
    if (cVar1 == '\0') {
      return 0;
    }
    std::_List_const_iterator<CMission*>::operator*(local_2c);
    CMission::GetRankRange();
    std::pair<int,int>::operator=((pair<int,int> *)local_28,local_14);
    if (local_28[0] == param_1) break;
    std::_List_const_iterator<CMission*>::operator++(local_2c);
  }
  puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_2c);
  uVar3 = CMission::GetMissionIndex((CMission *)*puVar2);
  return uVar3;
}
```
