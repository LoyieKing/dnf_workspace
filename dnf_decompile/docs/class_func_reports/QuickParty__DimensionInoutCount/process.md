# process

`_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::DimensionInoutCount::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::DimensionInoutCount` | `0x0826d5ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d5ac  _ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::DimensionInoutCount::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d5ac, 0x0826d687]
0826d5ac +0x00:  push   %ebp
0826d5ad +0x01:  mov    %esp,%ebp
0826d5af +0x03:  push   %ebx
0826d5b0 +0x04:  sub    $0x24,%esp
0826d5b3 +0x07:  mov    0x8(%ebp),%eax
0826d5b6 +0x0a:  lea    0x8(%eax),%ecx
0826d5b9 +0x0d:  mov    0x8(%ebp),%eax
0826d5bc +0x10:  mov    0x4(%eax),%eax
0826d5bf +0x13:  lea    0x38(%eax),%edx
0826d5c2 +0x16:  lea    -0x18(%ebp),%eax
0826d5c5 +0x19:  mov    %ecx,0x8(%esp)
0826d5c9 +0x1d:  mov    %edx,0x4(%esp)
0826d5cd +0x21:  mov    %eax,(%esp)
0826d5d0 +0x24:  call   0826dfee <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x61a>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x61a
0826d5d5 +0x29:  sub    $0x4,%esp
0826d5d8 +0x2c:  mov    0x8(%ebp),%eax
0826d5db +0x2f:  mov    0x4(%eax),%eax
0826d5de +0x32:  lea    0x38(%eax),%edx
0826d5e1 +0x35:  lea    -0x14(%ebp),%eax
0826d5e4 +0x38:  mov    %edx,0x4(%esp)
0826d5e8 +0x3c:  mov    %eax,(%esp)
0826d5eb +0x3f:  call   0826e01a <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x646>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x646
0826d5f0 +0x44:  sub    $0x4,%esp
0826d5f3 +0x47:  lea    -0x14(%ebp),%eax
0826d5f6 +0x4a:  mov    %eax,0x4(%esp)
0826d5fa +0x4e:  lea    -0x18(%ebp),%eax
0826d5fd +0x51:  mov    %eax,(%esp)
0826d600 +0x54:  call   0826e040 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x66c>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x66c
0826d605 +0x59:  test   %al,%al
0826d607 +0x5b:  jne    0826d67c <+0xd0>
0826d609 +0x5d:  lea    -0x18(%ebp),%eax
0826d60c +0x60:  mov    %eax,(%esp)
0826d60f +0x63:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d614 +0x68:  add    $0xc,%eax
0826d617 +0x6b:  mov    %eax,(%esp)
0826d61a +0x6e:  call   0826df92 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5be>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5be
0826d61f +0x73:  mov    %eax,-0x10(%ebp)
0826d622 +0x76:  mov    0xc(%ebp),%eax
0826d625 +0x79:  mov    %eax,(%esp)
0826d628 +0x7c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d62d +0x81:  sub    $0x2,%eax
0826d630 +0x84:  mov    %eax,-0xc(%ebp)
0826d633 +0x87:  cmpl   $0x0,-0xc(%ebp)
0826d637 +0x8b:  js     0826d67f <+0xd3>
0826d639 +0x8d:  mov    -0xc(%ebp),%eax
0826d63c +0x90:  cmp    -0x10(%ebp),%eax
0826d63f +0x93:  jge    0826d682 <+0xd6>
0826d641 +0x95:  mov    -0xc(%ebp),%ebx
0826d644 +0x98:  lea    -0x18(%ebp),%eax
0826d647 +0x9b:  mov    %eax,(%esp)
0826d64a +0x9e:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d64f +0xa3:  add    $0xc,%eax
0826d652 +0xa6:  mov    %ebx,0x4(%esp)
0826d656 +0xaa:  mov    %eax,(%esp)
0826d659 +0xad:  call   0826dfae <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5da>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5da
0826d65e +0xb2:  mov    0x4(%eax),%edx
0826d661 +0xb5:  mov    0x14(%ebp),%eax
0826d664 +0xb8:  mov    %edx,(%eax)
0826d666 +0xba:  mov    0x14(%ebp),%eax
0826d669 +0xbd:  mov    (%eax),%edx
0826d66b +0xbf:  mov    0xc(%ebp),%eax
0826d66e +0xc2:  mov    %edx,0x4(%esp)
0826d672 +0xc6:  mov    %eax,(%esp)
0826d675 +0xc9:  call   0859bfe2 <_ZN6CParty30increase_dimension_inout_countEi>  ; CParty::increase_dimension_inout_count(int)
0826d67a +0xce:  jmp    0826d683 <+0xd7>
0826d67c +0xd0:  nop
0826d67d +0xd1:  jmp    0826d683 <+0xd7>
0826d67f +0xd3:  nop
0826d680 +0xd4:  jmp    0826d683 <+0xd7>
0826d682 +0xd6:  nop
0826d683 +0xd7:  mov    -0x4(%ebp),%ebx
0826d686 +0xda:  leave
0826d687 +0xdb:  ret
```

## 反编译 C

```c
// QuickParty::DimensionInoutCount::process @ 0x826d5ac

/* QuickParty::DimensionInoutCount::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::DimensionInoutCount::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
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
      local_10 = uVar3;
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
              ::operator->(local_1c);
      iVar2 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                        ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                         (iVar2 + 0xc),uVar3);
      *param_4 = *(int *)(iVar2 + 4);
      CParty::increase_dimension_inout_count(param_2,*param_4);
    }
  }
  return;
}
```
