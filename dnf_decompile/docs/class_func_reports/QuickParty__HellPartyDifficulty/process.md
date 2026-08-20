# process

`_ZN10QuickParty19HellPartyDifficulty7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::HellPartyDifficulty::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::HellPartyDifficulty` | `0x0826d116` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d116  _ZN10QuickParty19HellPartyDifficulty7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::HellPartyDifficulty::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d116, 0x0826d197]
0826d116 +0x00:  push   %ebp
0826d117 +0x01:  mov    %esp,%ebp
0826d119 +0x03:  sub    $0x28,%esp
0826d11c +0x06:  mov    0x8(%ebp),%eax
0826d11f +0x09:  mov    0x4(%eax),%eax
0826d122 +0x0c:  add    $0x24,%eax
0826d125 +0x0f:  mov    %eax,(%esp)
0826d128 +0x12:  call   0826dfc0 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5ec>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5ec
0826d12d +0x17:  mov    %eax,-0x10(%ebp)
0826d130 +0x1a:  mov    0xc(%ebp),%eax
0826d133 +0x1d:  mov    %eax,(%esp)
0826d136 +0x20:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d13b +0x25:  sub    $0x2,%eax
0826d13e +0x28:  mov    %eax,-0xc(%ebp)
0826d141 +0x2b:  cmpl   $0x0,-0xc(%ebp)
0826d145 +0x2f:  js     0826d191 <+0x7b>
0826d147 +0x31:  mov    -0xc(%ebp),%eax
0826d14a +0x34:  cmp    -0x10(%ebp),%eax
0826d14d +0x37:  jge    0826d194 <+0x7e>
0826d14f +0x39:  mov    -0xc(%ebp),%eax
0826d152 +0x3c:  mov    0x8(%ebp),%edx
0826d155 +0x3f:  mov    0x4(%edx),%edx
0826d158 +0x42:  add    $0x24,%edx
0826d15b +0x45:  mov    %eax,0x4(%esp)
0826d15f +0x49:  mov    %edx,(%esp)
0826d162 +0x4c:  call   0826dfdc <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x608>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x608
0826d167 +0x51:  mov    0x4(%eax),%edx
0826d16a +0x54:  mov    0x14(%ebp),%eax
0826d16d +0x57:  mov    %edx,(%eax)
0826d16f +0x59:  mov    -0xc(%ebp),%eax
0826d172 +0x5c:  mov    0x8(%ebp),%edx
0826d175 +0x5f:  mov    0x4(%edx),%edx
0826d178 +0x62:  add    $0x24,%edx
0826d17b +0x65:  mov    %eax,0x4(%esp)
0826d17f +0x69:  mov    %edx,(%esp)
0826d182 +0x6c:  call   0826dfdc <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x608>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x608
0826d187 +0x71:  mov    (%eax),%edx
0826d189 +0x73:  mov    0x14(%ebp),%eax
0826d18c +0x76:  mov    %edx,0x4(%eax)
0826d18f +0x79:  jmp    0826d195 <+0x7f>
0826d191 +0x7b:  nop
0826d192 +0x7c:  jmp    0826d195 <+0x7f>
0826d194 +0x7e:  nop
0826d195 +0x7f:  leave
0826d196 +0x80:  ret
0826d197 +0x81:  nop
```

## 反编译 C

```c
// QuickParty::HellPartyDifficulty::process @ 0x826d116

/* QuickParty::HellPartyDifficulty::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::HellPartyDifficulty::process
               (int param_1,CParty *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = std::vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::size
                    ((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>> *)
                     (*(int *)(param_1 + 4) + 0x24));
  iVar2 = CParty::get_member_count(param_2);
  uVar3 = iVar2 - 2;
  if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
    iVar1 = std::vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::
            operator[]((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>
                        *)(*(int *)(param_1 + 4) + 0x24),uVar3);
    *param_4 = *(undefined4 *)(iVar1 + 4);
    puVar4 = (undefined4 *)
             std::vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::
             operator[]((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>
                         *)(*(int *)(param_1 + 4) + 0x24),uVar3);
    param_4[1] = *puVar4;
  }
  return;
}
```
