# process

`_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::KillMonsterExp::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::KillMonsterExp` | `0x0826d198` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d198  _ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::KillMonsterExp::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d198, 0x0826d2a9]
0826d198 +0x000:  push   %ebp
0826d199 +0x001:  mov    %esp,%ebp
0826d19b +0x003:  push   %ebx
0826d19c +0x004:  sub    $0x44,%esp
0826d19f +0x007:  mov    0x8(%ebp),%eax
0826d1a2 +0x00a:  lea    0x8(%eax),%ecx
0826d1a5 +0x00d:  mov    0x8(%ebp),%eax
0826d1a8 +0x010:  mov    0x4(%eax),%eax
0826d1ab +0x013:  lea    0x38(%eax),%edx
0826d1ae +0x016:  lea    -0x1c(%ebp),%eax
0826d1b1 +0x019:  mov    %ecx,0x8(%esp)
0826d1b5 +0x01d:  mov    %edx,0x4(%esp)
0826d1b9 +0x021:  mov    %eax,(%esp)
0826d1bc +0x024:  call   0826dfee <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x61a>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x61a
0826d1c1 +0x029:  sub    $0x4,%esp
0826d1c4 +0x02c:  mov    0x8(%ebp),%eax
0826d1c7 +0x02f:  mov    0x4(%eax),%eax
0826d1ca +0x032:  lea    0x38(%eax),%edx
0826d1cd +0x035:  lea    -0x18(%ebp),%eax
0826d1d0 +0x038:  mov    %edx,0x4(%esp)
0826d1d4 +0x03c:  mov    %eax,(%esp)
0826d1d7 +0x03f:  call   0826e01a <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x646>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x646
0826d1dc +0x044:  sub    $0x4,%esp
0826d1df +0x047:  lea    -0x18(%ebp),%eax
0826d1e2 +0x04a:  mov    %eax,0x4(%esp)
0826d1e6 +0x04e:  lea    -0x1c(%ebp),%eax
0826d1e9 +0x051:  mov    %eax,(%esp)
0826d1ec +0x054:  call   0826e040 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x66c>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x66c
0826d1f1 +0x059:  test   %al,%al
0826d1f3 +0x05b:  jne    0826d29d <+0x105>
0826d1f9 +0x061:  lea    -0x1c(%ebp),%eax
0826d1fc +0x064:  mov    %eax,(%esp)
0826d1ff +0x067:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d204 +0x06c:  add    $0xc,%eax
0826d207 +0x06f:  mov    %eax,(%esp)
0826d20a +0x072:  call   0826df92 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5be>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5be
0826d20f +0x077:  mov    %eax,-0x14(%ebp)
0826d212 +0x07a:  mov    0xc(%ebp),%eax
0826d215 +0x07d:  mov    %eax,(%esp)
0826d218 +0x080:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d21d +0x085:  sub    $0x2,%eax
0826d220 +0x088:  mov    %eax,-0x10(%ebp)
0826d223 +0x08b:  cmpl   $0x0,-0x10(%ebp)
0826d227 +0x08f:  js     0826d2a0 <+0x108>
0826d229 +0x091:  mov    -0x10(%ebp),%eax
0826d22c +0x094:  cmp    -0x14(%ebp),%eax
0826d22f +0x097:  jge    0826d2a3 <+0x10b>
0826d231 +0x099:  mov    $0x3f800000,%eax
0826d236 +0x09e:  mov    %eax,-0xc(%ebp)
0826d239 +0x0a1:  mov    -0x10(%ebp),%ebx
0826d23c +0x0a4:  lea    -0x1c(%ebp),%eax
0826d23f +0x0a7:  mov    %eax,(%esp)
0826d242 +0x0aa:  call   0826e054 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x680>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x680
0826d247 +0x0af:  add    $0xc,%eax
0826d24a +0x0b2:  mov    %ebx,0x4(%esp)
0826d24e +0x0b6:  mov    %eax,(%esp)
0826d251 +0x0b9:  call   0826dfae <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5da>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5da
0826d256 +0x0be:  mov    0x4(%eax),%eax
0826d259 +0x0c1:  mov    %eax,-0x2c(%ebp)
0826d25c +0x0c4:  fildl  -0x2c(%ebp)
0826d25f +0x0c7:  flds   ""
0826d265 +0x0cd:  fdivrp %st,%st(1)
0826d267 +0x0cf:  flds   -0xc(%ebp)
0826d26a +0x0d2:  faddp  %st,%st(1)
0826d26c +0x0d4:  fstps  -0xc(%ebp)
0826d26f +0x0d7:  mov    0x14(%ebp),%eax
0826d272 +0x0da:  mov    (%eax),%eax
0826d274 +0x0dc:  mov    %eax,-0x2c(%ebp)
0826d277 +0x0df:  fildl  -0x2c(%ebp)
0826d27a +0x0e2:  fmuls  -0xc(%ebp)
0826d27d +0x0e5:  fnstcw -0x2e(%ebp)
0826d280 +0x0e8:  movzwl -0x2e(%ebp),%eax
0826d284 +0x0ec:  mov    $0xc,%ah
0826d286 +0x0ee:  mov    %ax,-0x30(%ebp)
0826d28a +0x0f2:  fldcw  -0x30(%ebp)
0826d28d +0x0f5:  fistpl -0x2c(%ebp)
0826d290 +0x0f8:  fldcw  -0x2e(%ebp)
0826d293 +0x0fb:  mov    -0x2c(%ebp),%edx
0826d296 +0x0fe:  mov    0x14(%ebp),%eax
0826d299 +0x101:  mov    %edx,(%eax)
0826d29b +0x103:  jmp    0826d2a4 <+0x10c>
0826d29d +0x105:  nop
0826d29e +0x106:  jmp    0826d2a4 <+0x10c>
0826d2a0 +0x108:  nop
0826d2a1 +0x109:  jmp    0826d2a4 <+0x10c>
0826d2a3 +0x10b:  nop
0826d2a4 +0x10c:  mov    -0x4(%ebp),%ebx
0826d2a7 +0x10f:  leave
0826d2a8 +0x110:  ret
0826d2a9 +0x111:  nop
```

## 反编译 C

```c
// QuickParty::KillMonsterExp::process @ 0x826d198

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::KillMonsterExp::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
    */

void QuickParty::KillMonsterExp::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int *param_4)

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
      *param_4 = (int)ROUND((float)*param_4 *
                            (local_10 + (float)*(int *)(iVar2 + 4) / _DAT_08bf7458));
    }
  }
  return;
}
```
