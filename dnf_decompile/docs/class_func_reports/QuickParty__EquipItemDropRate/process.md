# process

`_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::EquipItemDropRate::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::EquipItemDropRate` | `0x0826d2aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d2aa  _ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::EquipItemDropRate::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d2aa, 0x0826d397]
0826d2aa +0x00:  push   %ebp
0826d2ab +0x01:  mov    %esp,%ebp
0826d2ad +0x03:  push   %ebx
0826d2ae +0x04:  sub    $0x44,%esp
0826d2b1 +0x07:  mov    0x8(%ebp),%eax
0826d2b4 +0x0a:  lea    0x8(%eax),%ecx
0826d2b7 +0x0d:  mov    0x8(%ebp),%eax
0826d2ba +0x10:  mov    0x4(%eax),%eax
0826d2bd +0x13:  lea    0x38(%eax),%edx
0826d2c0 +0x16:  lea    -0x1c(%ebp),%eax
0826d2c3 +0x19:  mov    %ecx,0x8(%esp)
0826d2c7 +0x1d:  mov    %edx,0x4(%esp)
0826d2cb +0x21:  mov    %eax,(%esp)
0826d2ce +0x24:  call   0826dfee <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x61a>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x61a
0826d2d3 +0x29:  sub    $0x4,%esp
0826d2d6 +0x2c:  mov    0x8(%ebp),%eax
0826d2d9 +0x2f:  mov    0x4(%eax),%eax
0826d2dc +0x32:  lea    0x38(%eax),%edx
0826d2df +0x35:  lea    -0x18(%ebp),%eax
0826d2e2 +0x38:  mov    %edx,0x4(%esp)
0826d2e6 +0x3c:  mov    %eax,(%esp)
0826d2e9 +0x3f:  call   0826e01a <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x646>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x646
0826d2ee +0x44:  sub    $0x4,%esp
0826d2f1 +0x47:  lea    -0x18(%ebp),%eax
0826d2f4 +0x4a:  mov    %eax,0x4(%esp)
0826d2f8 +0x4e:  lea    -0x1c(%ebp),%eax
0826d2fb +0x51:  mov    %eax,(%esp)
0826d2fe +0x54:  call   0826e040 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x66c>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x66c
0826d303 +0x59:  test   %al,%al
0826d305 +0x5b:  jne    0826d38c <+0xe2>
0826d30b +0x61:  lea    -0x1c(%ebp),%eax
0826d30e +0x64:  mov    %eax,(%esp)
0826d311 +0x67:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d316 +0x6c:  add    $0xc,%eax
0826d319 +0x6f:  mov    %eax,(%esp)
0826d31c +0x72:  call   0826df92 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5be>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5be
0826d321 +0x77:  mov    %eax,-0x14(%ebp)
0826d324 +0x7a:  mov    0xc(%ebp),%eax
0826d327 +0x7d:  mov    %eax,(%esp)
0826d32a +0x80:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d32f +0x85:  sub    $0x2,%eax
0826d332 +0x88:  mov    %eax,-0x10(%ebp)
0826d335 +0x8b:  cmpl   $0x0,-0x10(%ebp)
0826d339 +0x8f:  js     0826d38f <+0xe5>
0826d33b +0x91:  mov    -0x10(%ebp),%eax
0826d33e +0x94:  cmp    -0x14(%ebp),%eax
0826d341 +0x97:  jge    0826d392 <+0xe8>
0826d343 +0x99:  mov    $0x3f800000,%eax
0826d348 +0x9e:  mov    %eax,-0xc(%ebp)
0826d34b +0xa1:  mov    -0x10(%ebp),%ebx
0826d34e +0xa4:  lea    -0x1c(%ebp),%eax
0826d351 +0xa7:  mov    %eax,(%esp)
0826d354 +0xaa:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d359 +0xaf:  add    $0xc,%eax
0826d35c +0xb2:  mov    %ebx,0x4(%esp)
0826d360 +0xb6:  mov    %eax,(%esp)
0826d363 +0xb9:  call   0826dfae <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5da>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5da
0826d368 +0xbe:  mov    0x4(%eax),%eax
0826d36b +0xc1:  mov    %eax,-0x2c(%ebp)
0826d36e +0xc4:  fildl  -0x2c(%ebp)
0826d371 +0xc7:  flds   ""
0826d377 +0xcd:  fdivrp %st,%st(1)
0826d379 +0xcf:  flds   -0xc(%ebp)
0826d37c +0xd2:  faddp  %st,%st(1)
0826d37e +0xd4:  fstps  -0xc(%ebp)
0826d381 +0xd7:  mov    0x14(%ebp),%eax
0826d384 +0xda:  mov    -0xc(%ebp),%edx
0826d387 +0xdd:  mov    %edx,0x14(%eax)
0826d38a +0xe0:  jmp    0826d393 <+0xe9>
0826d38c +0xe2:  nop
0826d38d +0xe3:  jmp    0826d393 <+0xe9>
0826d38f +0xe5:  nop
0826d390 +0xe6:  jmp    0826d393 <+0xe9>
0826d392 +0xe8:  nop
0826d393 +0xe9:  mov    -0x4(%ebp),%ebx
0826d396 +0xec:  leave
0826d397 +0xed:  ret
```

## 反编译 C

```c
// QuickParty::EquipItemDropRate::process @ 0x826d2aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::EquipItemDropRate::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::EquipItemDropRate::process
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
      *(float *)(param_4 + 0x14) = local_10 + (float)*(int *)(iVar2 + 4) / _DAT_08bf7458;
    }
  }
  return;
}
```
