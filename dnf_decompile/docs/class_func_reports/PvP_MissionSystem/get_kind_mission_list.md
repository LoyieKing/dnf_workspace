# get_kind_mission_list

`_ZN17PvP_MissionSystem21get_kind_mission_listEj`

`PvP_MissionSystem::get_kind_mission_list(unsigned int)`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e2692` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e2692  _ZN17PvP_MissionSystem21get_kind_mission_listEj
#           PvP_MissionSystem::get_kind_mission_list(unsigned int)
# range [0x085e2692, 0x085e26df]
085e2692 +0x00:  push   %ebp
085e2693 +0x01:  mov    %esp,%ebp
085e2695 +0x03:  sub    $0x18,%esp
085e2698 +0x06:  mov    0x8(%ebp),%eax
085e269b +0x09:  add    $0x18,%eax
085e269e +0x0c:  mov    %eax,(%esp)
085e26a1 +0x0f:  call   085e7a3e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x11c6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x11c6
085e26a6 +0x14:  cmp    0xc(%ebp),%eax
085e26a9 +0x17:  seta   %al
085e26ac +0x1a:  test   %al,%al
085e26ae +0x1c:  je     085e26c7 <+0x35>
085e26b0 +0x1e:  mov    0x8(%ebp),%eax
085e26b3 +0x21:  lea    0x18(%eax),%edx
085e26b6 +0x24:  mov    0xc(%ebp),%eax
085e26b9 +0x27:  mov    %eax,0x4(%esp)
085e26bd +0x2b:  mov    %edx,(%esp)
085e26c0 +0x2e:  call   085e760a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xd92>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xd92
085e26c5 +0x33:  jmp    085e26dd <+0x4b>
085e26c7 +0x35:  mov    0x8(%ebp),%eax
085e26ca +0x38:  add    $0x18,%eax
085e26cd +0x3b:  movl   $0x0,0x4(%esp)
085e26d5 +0x43:  mov    %eax,(%esp)
085e26d8 +0x46:  call   085e760a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xd92>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xd92
085e26dd +0x4b:  leave
085e26de +0x4c:  ret
085e26df +0x4d:  nop
```

## 反编译 C

```c
// PvP_MissionSystem::get_kind_mission_list @ 0x85e2692

/* PvP_MissionSystem::get_kind_mission_list(unsigned int) */

void __thiscall PvP_MissionSystem::get_kind_mission_list(PvP_MissionSystem *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = std::
          vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
          ::size((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18));
  if (param_1 < uVar1) {
    std::
    vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
    ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18),param_1);
  }
  else {
    std::
    vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
    ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                  *)(this + 0x18),0);
  }
  return;
}
```
