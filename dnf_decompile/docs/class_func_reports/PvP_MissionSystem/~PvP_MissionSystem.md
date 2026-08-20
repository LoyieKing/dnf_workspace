# ~PvP_MissionSystem

`_ZN17PvP_MissionSystemD1Ev`

`PvP_MissionSystem::~PvP_MissionSystem()`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e1c48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1c48  _ZN17PvP_MissionSystemD1Ev
#           PvP_MissionSystem::~PvP_MissionSystem()
# range [0x085e1c48, 0x085e1dc5]
085e1c48 +0x000:  push   %ebp
085e1c49 +0x001:  mov    %esp,%ebp
085e1c4b +0x003:  push   %esi
085e1c4c +0x004:  push   %ebx
085e1c4d +0x005:  sub    $0x20,%esp
085e1c50 +0x008:  mov    0x8(%ebp),%eax
085e1c53 +0x00b:  mov    0x44(%eax),%eax
085e1c56 +0x00e:  test   %eax,%eax
085e1c58 +0x010:  je     085e1c68 <+0x20>
085e1c5a +0x012:  mov    0x8(%ebp),%eax
085e1c5d +0x015:  mov    0x44(%eax),%eax
085e1c60 +0x018:  mov    %eax,(%esp)
085e1c63 +0x01b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e1c68 +0x020:  mov    0x8(%ebp),%eax
085e1c6b +0x023:  movl   $0x0,0x44(%eax)
085e1c72 +0x02a:  movl   $"Mission System Delete",(%esp)
085e1c79 +0x031:  call   0807e570 <_init+0xe68>
085e1c7e +0x036:  mov    0x8(%ebp),%edx
085e1c81 +0x039:  lea    -0x10(%ebp),%eax
085e1c84 +0x03c:  mov    %edx,0x4(%esp)
085e1c88 +0x040:  mov    %eax,(%esp)
085e1c8b +0x043:  call   085e74c8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc50>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc50
085e1c90 +0x048:  sub    $0x4,%esp
085e1c93 +0x04b:  jmp    085e1cbe <+0x76>
085e1c95 +0x04d:  lea    -0x10(%ebp),%eax
085e1c98 +0x050:  mov    %eax,(%esp)
085e1c9b +0x053:  call   085e7546 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcce>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcce
085e1ca0 +0x058:  mov    0x4(%eax),%eax
085e1ca3 +0x05b:  test   %eax,%eax
085e1ca5 +0x05d:  je     085e1cb3 <+0x6b>
085e1ca7 +0x05f:  mov    (%eax),%edx
085e1ca9 +0x061:  add    $0x10,%edx
085e1cac +0x064:  mov    (%edx),%edx
085e1cae +0x066:  mov    %eax,(%esp)
085e1cb1 +0x069:  call   *%edx
085e1cb3 +0x06b:  lea    -0x10(%ebp),%eax
085e1cb6 +0x06e:  mov    %eax,(%esp)
085e1cb9 +0x071:  call   085e7528 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcb0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcb0
085e1cbe +0x076:  mov    0x8(%ebp),%edx
085e1cc1 +0x079:  lea    -0xc(%ebp),%eax
085e1cc4 +0x07c:  mov    %edx,0x4(%esp)
085e1cc8 +0x080:  mov    %eax,(%esp)
085e1ccb +0x083:  call   085e74ee <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc76>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc76
085e1cd0 +0x088:  sub    $0x4,%esp
085e1cd3 +0x08b:  lea    -0xc(%ebp),%eax
085e1cd6 +0x08e:  mov    %eax,0x4(%esp)
085e1cda +0x092:  lea    -0x10(%ebp),%eax
085e1cdd +0x095:  mov    %eax,(%esp)
085e1ce0 +0x098:  call   085e7514 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc9c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc9c
085e1ce5 +0x09d:  test   %al,%al
085e1ce7 +0x09f:  jne    085e1c95 <+0x4d>
085e1ce9 +0x0a1:  mov    0x8(%ebp),%eax
085e1cec +0x0a4:  mov    %eax,(%esp)
085e1cef +0x0a7:  call   085e7554 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcdc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcdc
085e1cf4 +0x0ac:  jmp    085e1d0e <+0xc6>
085e1cf6 +0x0ae:  mov    %edx,%ebx
085e1cf8 +0x0b0:  mov    %eax,%esi
085e1cfa +0x0b2:  mov    0x8(%ebp),%eax
085e1cfd +0x0b5:  add    $0x48,%eax
085e1d00 +0x0b8:  mov    %eax,(%esp)
085e1d03 +0x0bb:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085e1d08 +0x0c0:  mov    %esi,%eax
085e1d0a +0x0c2:  mov    %ebx,%edx
085e1d0c +0x0c4:  jmp    085e1d1e <+0xd6>
085e1d0e +0x0c6:  mov    0x8(%ebp),%eax
085e1d11 +0x0c9:  add    $0x48,%eax
085e1d14 +0x0cc:  mov    %eax,(%esp)
085e1d17 +0x0cf:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085e1d1c +0x0d4:  jmp    085e1d36 <+0xee>
085e1d1e +0x0d6:  mov    %edx,%ebx
085e1d20 +0x0d8:  mov    %eax,%esi
085e1d22 +0x0da:  mov    0x8(%ebp),%eax
085e1d25 +0x0dd:  add    $0x34,%eax
085e1d28 +0x0e0:  mov    %eax,(%esp)
085e1d2b +0x0e3:  call   085e6eb0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x638>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x638
085e1d30 +0x0e8:  mov    %esi,%eax
085e1d32 +0x0ea:  mov    %ebx,%edx
085e1d34 +0x0ec:  jmp    085e1d46 <+0xfe>
085e1d36 +0x0ee:  mov    0x8(%ebp),%eax
085e1d39 +0x0f1:  add    $0x34,%eax
085e1d3c +0x0f4:  mov    %eax,(%esp)
085e1d3f +0x0f7:  call   085e6eb0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x638>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x638
085e1d44 +0x0fc:  jmp    085e1d5e <+0x116>
085e1d46 +0x0fe:  mov    %edx,%ebx
085e1d48 +0x100:  mov    %eax,%esi
085e1d4a +0x102:  mov    0x8(%ebp),%eax
085e1d4d +0x105:  add    $0x24,%eax
085e1d50 +0x108:  mov    %eax,(%esp)
085e1d53 +0x10b:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085e1d58 +0x110:  mov    %esi,%eax
085e1d5a +0x112:  mov    %ebx,%edx
085e1d5c +0x114:  jmp    085e1d6e <+0x126>
085e1d5e +0x116:  mov    0x8(%ebp),%eax
085e1d61 +0x119:  add    $0x24,%eax
085e1d64 +0x11c:  mov    %eax,(%esp)
085e1d67 +0x11f:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085e1d6c +0x124:  jmp    085e1d86 <+0x13e>
085e1d6e +0x126:  mov    %edx,%ebx
085e1d70 +0x128:  mov    %eax,%esi
085e1d72 +0x12a:  mov    0x8(%ebp),%eax
085e1d75 +0x12d:  add    $0x18,%eax
085e1d78 +0x130:  mov    %eax,(%esp)
085e1d7b +0x133:  call   085e72da <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa62>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa62
085e1d80 +0x138:  mov    %esi,%eax
085e1d82 +0x13a:  mov    %ebx,%edx
085e1d84 +0x13c:  jmp    085e1d96 <+0x14e>
085e1d86 +0x13e:  mov    0x8(%ebp),%eax
085e1d89 +0x141:  add    $0x18,%eax
085e1d8c +0x144:  mov    %eax,(%esp)
085e1d8f +0x147:  call   085e72da <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa62>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa62
085e1d94 +0x14c:  jmp    085e1db1 <+0x169>
085e1d96 +0x14e:  mov    %edx,%ebx
085e1d98 +0x150:  mov    %eax,%esi
085e1d9a +0x152:  mov    0x8(%ebp),%eax
085e1d9d +0x155:  mov    %eax,(%esp)
085e1da0 +0x158:  call   085e6e9c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x624>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x624
085e1da5 +0x15d:  mov    %esi,%eax
085e1da7 +0x15f:  mov    %ebx,%edx
085e1da9 +0x161:  mov    %eax,(%esp)
085e1dac +0x164:  call   08ae3750 <_Unwind_Resume>
085e1db1 +0x169:  mov    0x8(%ebp),%eax
085e1db4 +0x16c:  mov    %eax,(%esp)
085e1db7 +0x16f:  call   085e6e9c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x624>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x624
085e1dbc +0x174:  lea    -0x8(%ebp),%esp
085e1dbf +0x177:  add    $0x0,%esp
085e1dc2 +0x17a:  pop    %ebx
085e1dc3 +0x17b:  pop    %esi
085e1dc4 +0x17c:  pop    %ebp
085e1dc5 +0x17d:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::~PvP_MissionSystem @ 0x85e1c48

/* PvP_MissionSystem::~PvP_MissionSystem() */

void __thiscall PvP_MissionSystem::~PvP_MissionSystem(PvP_MissionSystem *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_14 [4];
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_10 [4];
  
  if (*(int *)(this + 0x44) != 0) {
    operator_delete(*(void **)(this + 0x44));
  }
  *(undefined4 *)(this + 0x44) = 0;
                    /* try { // try from 085e1c79 to 085e1cf3 has its CatchHandler @ 085e1cf6 */
  puts("Mission System Delete");
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::begin
            (local_14);
  while( true ) {
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
              (local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_14);
    piVar1 = *(int **)(iVar3 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_14);
  }
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::clear
            ((map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> *)
             this);
                    /* try { // try from 085e1d17 to 085e1d1b has its CatchHandler @ 085e1d1e */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x48));
                    /* try { // try from 085e1d3f to 085e1d43 has its CatchHandler @ 085e1d46 */
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  ~list((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
         *)(this + 0x34));
                    /* try { // try from 085e1d67 to 085e1d6b has its CatchHandler @ 085e1d6e */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24));
                    /* try { // try from 085e1d8f to 085e1d93 has its CatchHandler @ 085e1d96 */
  std::
  vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
  ::~vector((vector<std::list<CMission*,std::allocator<CMission*>>,std::allocator<std::list<CMission*,std::allocator<CMission*>>>>
             *)(this + 0x18));
  std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::~map
            ((map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> *)
             this);
  return;
}
```
