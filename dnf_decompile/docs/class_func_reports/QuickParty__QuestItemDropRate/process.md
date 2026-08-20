# process

`_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::QuestItemDropRate::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::QuestItemDropRate` | `0x0826d398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d398  _ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::QuestItemDropRate::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d398, 0x0826d4ab]
0826d398 +0x000:  push   %ebp
0826d399 +0x001:  mov    %esp,%ebp
0826d39b +0x003:  push   %ebx
0826d39c +0x004:  sub    $0x44,%esp
0826d39f +0x007:  mov    0x8(%ebp),%eax
0826d3a2 +0x00a:  lea    0x8(%eax),%ecx
0826d3a5 +0x00d:  mov    0x8(%ebp),%eax
0826d3a8 +0x010:  mov    0x4(%eax),%eax
0826d3ab +0x013:  lea    0x38(%eax),%edx
0826d3ae +0x016:  lea    -0x1c(%ebp),%eax
0826d3b1 +0x019:  mov    %ecx,0x8(%esp)
0826d3b5 +0x01d:  mov    %edx,0x4(%esp)
0826d3b9 +0x021:  mov    %eax,(%esp)
0826d3bc +0x024:  call   0826dfee <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x61a>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x61a
0826d3c1 +0x029:  sub    $0x4,%esp
0826d3c4 +0x02c:  mov    0x8(%ebp),%eax
0826d3c7 +0x02f:  mov    0x4(%eax),%eax
0826d3ca +0x032:  lea    0x38(%eax),%edx
0826d3cd +0x035:  lea    -0x18(%ebp),%eax
0826d3d0 +0x038:  mov    %edx,0x4(%esp)
0826d3d4 +0x03c:  mov    %eax,(%esp)
0826d3d7 +0x03f:  call   0826e01a <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x646>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x646
0826d3dc +0x044:  sub    $0x4,%esp
0826d3df +0x047:  lea    -0x18(%ebp),%eax
0826d3e2 +0x04a:  mov    %eax,0x4(%esp)
0826d3e6 +0x04e:  lea    -0x1c(%ebp),%eax
0826d3e9 +0x051:  mov    %eax,(%esp)
0826d3ec +0x054:  call   0826e040 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x66c>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x66c
0826d3f1 +0x059:  test   %al,%al
0826d3f3 +0x05b:  jne    0826d49f <+0x107>
0826d3f9 +0x061:  lea    -0x1c(%ebp),%eax
0826d3fc +0x064:  mov    %eax,(%esp)
0826d3ff +0x067:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d404 +0x06c:  add    $0xc,%eax
0826d407 +0x06f:  mov    %eax,(%esp)
0826d40a +0x072:  call   0826df92 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5be>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5be
0826d40f +0x077:  mov    %eax,-0x14(%ebp)
0826d412 +0x07a:  mov    0xc(%ebp),%eax
0826d415 +0x07d:  mov    %eax,(%esp)
0826d418 +0x080:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d41d +0x085:  sub    $0x2,%eax
0826d420 +0x088:  mov    %eax,-0x10(%ebp)
0826d423 +0x08b:  cmpl   $0x0,-0x10(%ebp)
0826d427 +0x08f:  js     0826d4a2 <+0x10a>
0826d429 +0x091:  mov    -0x10(%ebp),%eax
0826d42c +0x094:  cmp    -0x14(%ebp),%eax
0826d42f +0x097:  jge    0826d4a5 <+0x10d>
0826d431 +0x099:  mov    $0x3f800000,%eax
0826d436 +0x09e:  mov    %eax,-0xc(%ebp)
0826d439 +0x0a1:  mov    -0x10(%ebp),%ebx
0826d43c +0x0a4:  lea    -0x1c(%ebp),%eax
0826d43f +0x0a7:  mov    %eax,(%esp)
0826d442 +0x0aa:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d447 +0x0af:  add    $0xc,%eax
0826d44a +0x0b2:  mov    %ebx,0x4(%esp)
0826d44e +0x0b6:  mov    %eax,(%esp)
0826d451 +0x0b9:  call   0826dfae <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5da>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5da
0826d456 +0x0be:  mov    0x4(%eax),%eax
0826d459 +0x0c1:  mov    %eax,-0x2c(%ebp)
0826d45c +0x0c4:  fildl  -0x2c(%ebp)
0826d45f +0x0c7:  flds   ""
0826d465 +0x0cd:  fdivrp %st,%st(1)
0826d467 +0x0cf:  flds   -0xc(%ebp)
0826d46a +0x0d2:  faddp  %st,%st(1)
0826d46c +0x0d4:  fstps  -0xc(%ebp)
0826d46f +0x0d7:  mov    0x14(%ebp),%eax
0826d472 +0x0da:  mov    0x18(%eax),%eax
0826d475 +0x0dd:  mov    %eax,-0x2c(%ebp)
0826d478 +0x0e0:  fildl  -0x2c(%ebp)
0826d47b +0x0e3:  fmuls  -0xc(%ebp)
0826d47e +0x0e6:  fnstcw -0x2e(%ebp)
0826d481 +0x0e9:  movzwl -0x2e(%ebp),%eax
0826d485 +0x0ed:  mov    $0xc,%ah
0826d487 +0x0ef:  mov    %ax,-0x30(%ebp)
0826d48b +0x0f3:  fldcw  -0x30(%ebp)
0826d48e +0x0f6:  fistpl -0x2c(%ebp)
0826d491 +0x0f9:  fldcw  -0x2e(%ebp)
0826d494 +0x0fc:  mov    -0x2c(%ebp),%edx
0826d497 +0x0ff:  mov    0x14(%ebp),%eax
0826d49a +0x102:  mov    %edx,0x18(%eax)
0826d49d +0x105:  jmp    0826d4a6 <+0x10e>
0826d49f +0x107:  nop
0826d4a0 +0x108:  jmp    0826d4a6 <+0x10e>
0826d4a2 +0x10a:  nop
0826d4a3 +0x10b:  jmp    0826d4a6 <+0x10e>
0826d4a5 +0x10d:  nop
0826d4a6 +0x10e:  mov    -0x4(%ebp),%ebx
0826d4a9 +0x111:  leave
0826d4aa +0x112:  ret
0826d4ab +0x113:  nop
```

## 反编译 C

```c
// QuickParty::QuestItemDropRate::process @ 0x826d398

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::QuestItemDropRate::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::QuestItemDropRate::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
  local_20 [4];
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  local_1c [4];
  int local_18;
  uint local_14;
  float local_10;
  
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::find(local_20);
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
          ::operator==(local_20,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
            ::operator->(local_20);
    local_18 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::size
                         ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                          (iVar2 + 0xc));
    iVar2 = CParty::get_member_count(param_2);
    uVar3 = iVar2 - 2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < local_18)) {
      local_10 = 1.0;
      local_14 = uVar3;
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
              ::operator->(local_20);
      iVar2 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                        ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                         (iVar2 + 0xc),uVar3);
      *(int *)(param_4 + 0x18) =
           (int)ROUND((float)*(int *)(param_4 + 0x18) *
                      (local_10 + (float)*(int *)(iVar2 + 4) / _DAT_08bf7458));
    }
  }
  return;
}
```
