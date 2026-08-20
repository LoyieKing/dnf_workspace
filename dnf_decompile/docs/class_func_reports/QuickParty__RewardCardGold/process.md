# process

`_ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE`

`QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `QuickParty::RewardCardGold` | `0x0826d070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d070  _ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE
#           QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0826d070, 0x0826d115]
0826d070 +0x00:  push   %ebp
0826d071 +0x01:  mov    %esp,%ebp
0826d073 +0x03:  sub    $0x38,%esp
0826d076 +0x06:  mov    0x8(%ebp),%eax
0826d079 +0x09:  mov    0x4(%eax),%eax
0826d07c +0x0c:  add    $0x18,%eax
0826d07f +0x0f:  mov    %eax,(%esp)
0826d082 +0x12:  call   0826df92 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5be>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5be
0826d087 +0x17:  mov    %eax,-0x14(%ebp)
0826d08a +0x1a:  mov    0xc(%ebp),%eax
0826d08d +0x1d:  mov    %eax,(%esp)
0826d090 +0x20:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826d095 +0x25:  sub    $0x2,%eax
0826d098 +0x28:  mov    %eax,-0x10(%ebp)
0826d09b +0x2b:  cmpl   $0x0,-0x10(%ebp)
0826d09f +0x2f:  js     0826d110 <+0xa0>
0826d0a1 +0x31:  mov    -0x10(%ebp),%eax
0826d0a4 +0x34:  cmp    -0x14(%ebp),%eax
0826d0a7 +0x37:  jge    0826d113 <+0xa3>
0826d0a9 +0x39:  mov    $0x3f800000,%eax
0826d0ae +0x3e:  mov    %eax,-0xc(%ebp)
0826d0b1 +0x41:  mov    -0x10(%ebp),%eax
0826d0b4 +0x44:  mov    0x8(%ebp),%edx
0826d0b7 +0x47:  mov    0x4(%edx),%edx
0826d0ba +0x4a:  add    $0x18,%edx
0826d0bd +0x4d:  mov    %eax,0x4(%esp)
0826d0c1 +0x51:  mov    %edx,(%esp)
0826d0c4 +0x54:  call   0826dfae <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x5da>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x5da
0826d0c9 +0x59:  mov    0x4(%eax),%eax
0826d0cc +0x5c:  mov    %eax,-0x1c(%ebp)
0826d0cf +0x5f:  fildl  -0x1c(%ebp)
0826d0d2 +0x62:  flds   ""
0826d0d8 +0x68:  fdivrp %st,%st(1)
0826d0da +0x6a:  flds   -0xc(%ebp)
0826d0dd +0x6d:  faddp  %st,%st(1)
0826d0df +0x6f:  fstps  -0xc(%ebp)
0826d0e2 +0x72:  mov    0x14(%ebp),%eax
0826d0e5 +0x75:  mov    (%eax),%eax
0826d0e7 +0x77:  mov    %eax,-0x1c(%ebp)
0826d0ea +0x7a:  fildl  -0x1c(%ebp)
0826d0ed +0x7d:  fmuls  -0xc(%ebp)
0826d0f0 +0x80:  fnstcw -0x1e(%ebp)
0826d0f3 +0x83:  movzwl -0x1e(%ebp),%eax
0826d0f7 +0x87:  mov    $0xc,%ah
0826d0f9 +0x89:  mov    %ax,-0x20(%ebp)
0826d0fd +0x8d:  fldcw  -0x20(%ebp)
0826d100 +0x90:  fistpl -0x1c(%ebp)
0826d103 +0x93:  fldcw  -0x1e(%ebp)
0826d106 +0x96:  mov    -0x1c(%ebp),%edx
0826d109 +0x99:  mov    0x14(%ebp),%eax
0826d10c +0x9c:  mov    %edx,(%eax)
0826d10e +0x9e:  jmp    0826d114 <+0xa4>
0826d110 +0xa0:  nop
0826d111 +0xa1:  jmp    0826d114 <+0xa4>
0826d113 +0xa3:  nop
0826d114 +0xa4:  leave
0826d115 +0xa5:  ret
```

## 反编译 C

```c
// QuickParty::RewardCardGold::process @ 0x826d070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
    */

void QuickParty::RewardCardGold::process
               (int param_1,CParty *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::size
                    ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                     (*(int *)(param_1 + 4) + 0x18));
  iVar2 = CParty::get_member_count(param_2);
  uVar3 = iVar2 - 2;
  if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
    iVar1 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                      ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                       (*(int *)(param_1 + 4) + 0x18),uVar3);
    *param_4 = (int)ROUND((float)*param_4 * ((float)*(int *)(iVar1 + 4) / _DAT_08bf7458 + 1.0));
  }
  return;
}
```
