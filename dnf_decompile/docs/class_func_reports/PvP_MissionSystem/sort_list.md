# sort_list

`_ZN17PvP_MissionSystem9sort_listEv`

`PvP_MissionSystem::sort_list()`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e20d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e20d4  _ZN17PvP_MissionSystem9sort_listEv
#           PvP_MissionSystem::sort_list()
# range [0x085e20d4, 0x085e2131]
085e20d4 +0x00:  push   %ebp
085e20d5 +0x01:  mov    %esp,%ebp
085e20d7 +0x03:  push   %ebx
085e20d8 +0x04:  sub    $0x24,%esp
085e20db +0x07:  movl   $0x0,-0x10(%ebp)
085e20e2 +0x0e:  jmp    085e210f <+0x3b>
085e20e4 +0x10:  mov    0x8(%ebp),%eax
085e20e7 +0x13:  lea    0x18(%eax),%edx
085e20ea +0x16:  mov    -0x10(%ebp),%eax
085e20ed +0x19:  mov    %eax,0x4(%esp)
085e20f1 +0x1d:  mov    %edx,(%esp)
085e20f4 +0x20:  call   085e760a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xd92>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xd92
085e20f9 +0x25:  mov    %eax,-0xc(%ebp)
085e20fc +0x28:  mov    %bl,0x4(%esp)
085e2100 +0x2c:  mov    -0xc(%ebp),%eax
085e2103 +0x2f:  mov    %eax,(%esp)
085e2106 +0x32:  call   085e7a5a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x11e2>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x11e2
085e210b +0x37:  addl   $0x1,-0x10(%ebp)
085e210f +0x3b:  mov    0x8(%ebp),%eax
085e2112 +0x3e:  add    $0x18,%eax
085e2115 +0x41:  mov    %eax,(%esp)
085e2118 +0x44:  call   085e7a3e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x11c6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x11c6
085e211d +0x49:  cmp    -0x10(%ebp),%eax
085e2120 +0x4c:  seta   %al
085e2123 +0x4f:  test   %al,%al
085e2125 +0x51:  jne    085e20e4 <+0x10>
085e2127 +0x53:  mov    $0x0,%eax
085e212c +0x58:  add    $0x24,%esp
085e212f +0x5b:  pop    %ebx
085e2130 +0x5c:  pop    %ebp
085e2131 +0x5d:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::sort_list @ 0x85e20d4

/* PvP_MissionSystem::sort_list() */

undefined4 __thiscall PvP_MissionSystem::sort_list(PvP_MissionSystem *this)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 unaff_BL;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    uVar2 = std::
            vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            ::size((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                    *)(this + 0x18));
    if (uVar2 <= local_14) break;
    uVar1 = std::
            vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
            ::operator[]((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
                          *)(this + 0x18),local_14);
    std::list<CMission*,std::allocator<CMission*>>::sort<MissionLessThan>(uVar1,unaff_BL);
    local_14 = local_14 + 1;
  }
  return 0;
}
```
