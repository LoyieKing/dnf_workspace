# process

`_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::CointLimitCount::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::CointLimitCount` | `0x0826d4ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d4ac  _ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::CointLimitCount::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d4ac, 0x0826d597]
0826d4ac +0x00:  push   %ebp
0826d4ad +0x01:  mov    %esp,%ebp
0826d4af +0x03:  push   %esi
0826d4b0 +0x04:  push   %ebx
0826d4b1 +0x05:  sub    $0x20,%esp
0826d4b4 +0x08:  mov    0x8(%ebp),%eax
0826d4b7 +0x0b:  lea    0x8(%eax),%ecx
0826d4ba +0x0e:  mov    0x8(%ebp),%eax
0826d4bd +0x11:  mov    0x4(%eax),%eax
0826d4c0 +0x14:  lea    0x38(%eax),%edx
0826d4c3 +0x17:  lea    -0x18(%ebp),%eax
0826d4c6 +0x1a:  mov    %ecx,0x8(%esp)
0826d4ca +0x1e:  mov    %edx,0x4(%esp)
0826d4ce +0x22:  mov    %eax,(%esp)
0826d4d1 +0x25:  call   0826dfee <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x61a>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x61a
0826d4d6 +0x2a:  sub    $0x4,%esp
0826d4d9 +0x2d:  mov    0x8(%ebp),%eax
0826d4dc +0x30:  mov    0x4(%eax),%eax
0826d4df +0x33:  lea    0x38(%eax),%edx
0826d4e2 +0x36:  lea    -0x14(%ebp),%eax
0826d4e5 +0x39:  mov    %edx,0x4(%esp)
0826d4e9 +0x3d:  mov    %eax,(%esp)
0826d4ec +0x40:  call   0826e01a <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x646>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x646
0826d4f1 +0x45:  sub    $0x4,%esp
0826d4f4 +0x48:  lea    -0x14(%ebp),%eax
0826d4f7 +0x4b:  mov    %eax,0x4(%esp)
0826d4fb +0x4f:  lea    -0x18(%ebp),%eax
0826d4fe +0x52:  mov    %eax,(%esp)
0826d501 +0x55:  call   0826e040 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x66c>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x66c
0826d506 +0x5a:  test   %al,%al
0826d508 +0x5c:  jne    0826d586 <+0xda>
0826d50a +0x5e:  lea    -0x18(%ebp),%eax
0826d50d +0x61:  mov    %eax,(%esp)
0826d510 +0x64:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d515 +0x69:  add    $0xc,%eax
0826d518 +0x6c:  mov    %eax,(%esp)
0826d51b +0x6f:  call   0826df92 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5be>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5be
0826d520 +0x74:  mov    %eax,-0x10(%ebp)
0826d523 +0x77:  mov    0xc(%ebp),%eax
0826d526 +0x7a:  mov    %eax,(%esp)
0826d529 +0x7d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d52e +0x82:  sub    $0x2,%eax
0826d531 +0x85:  mov    %eax,-0xc(%ebp)
0826d534 +0x88:  cmpl   $0x0,-0xc(%ebp)
0826d538 +0x8c:  js     0826d589 <+0xdd>
0826d53a +0x8e:  mov    -0xc(%ebp),%eax
0826d53d +0x91:  cmp    -0x10(%ebp),%eax
0826d540 +0x94:  jge    0826d58c <+0xe0>
0826d542 +0x96:  mov    0x14(%ebp),%eax
0826d545 +0x99:  mov    (%eax),%esi
0826d547 +0x9b:  mov    -0xc(%ebp),%ebx
0826d54a +0x9e:  lea    -0x18(%ebp),%eax
0826d54d +0xa1:  mov    %eax,(%esp)
0826d550 +0xa4:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d555 +0xa9:  add    $0xc,%eax
0826d558 +0xac:  mov    %ebx,0x4(%esp)
0826d55c +0xb0:  mov    %eax,(%esp)
0826d55f +0xb3:  call   0826dfae <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5da>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5da
0826d564 +0xb8:  mov    0x4(%eax),%eax
0826d567 +0xbb:  mov    %esi,%edx
0826d569 +0xbd:  sub    %eax,%edx
0826d56b +0xbf:  mov    0x14(%ebp),%eax
0826d56e +0xc2:  mov    %edx,(%eax)
0826d570 +0xc4:  mov    0x14(%ebp),%eax
0826d573 +0xc7:  mov    (%eax),%edx
0826d575 +0xc9:  mov    0xc(%ebp),%eax
0826d578 +0xcc:  mov    %edx,0x4(%esp)
0826d57c +0xd0:  mov    %eax,(%esp)
0826d57f +0xd3:  call   0859bc58 <_ZN6CParty27increase_dungeon_coin_countEi>  ; CParty::increase_dungeon_coin_count(int)
0826d584 +0xd8:  jmp    0826d58d <+0xe1>
0826d586 +0xda:  nop
0826d587 +0xdb:  jmp    0826d58d <+0xe1>
0826d589 +0xdd:  nop
0826d58a +0xde:  jmp    0826d58d <+0xe1>
0826d58c +0xe0:  nop
0826d58d +0xe1:  lea    -0x8(%ebp),%esp
0826d590 +0xe4:  add    $0x0,%esp
0826d593 +0xe7:  pop    %ebx
0826d594 +0xe8:  pop    %esi
0826d595 +0xe9:  pop    %ebp
0826d596 +0xea:  ret
0826d597 +0xeb:  nop
```

## 反编译 C

```c
// QuickParty::CointLimitCount::process @ 0x826d4ac

/* QuickParty::CointLimitCount::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::CointLimitCount::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
  local_1c [4];
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::find(local_1c);
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::end(local_18);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
          ::operator==(local_1c,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
            ::operator->(local_1c);
    local_14 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::size
                         ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                          (iVar2 + 0xc));
    iVar2 = CParty::get_member_count(param_2);
    uVar3 = iVar2 - 2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < local_14)) {
      iVar2 = *param_4;
      local_10 = uVar3;
      iVar4 = std::
              _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
              ::operator->(local_1c);
      iVar4 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                        ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                         (iVar4 + 0xc),uVar3);
      *param_4 = iVar2 - *(int *)(iVar4 + 4);
      CParty::increase_dungeon_coin_count(param_2,*param_4);
    }
  }
  return;
}
```
