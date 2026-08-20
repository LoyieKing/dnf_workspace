# GetSkillLevel

`_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser`

`CItemMakingSkill::GetSkillLevel(ENUM_ITEM_MAKING_TYPE, CUser*) const`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545c0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545c0c  _ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser
#           CItemMakingSkill::GetSkillLevel(ENUM_ITEM_MAKING_TYPE, CUser*) const
# range [0x08545c0c, 0x08545cf3]
08545c0c +0x00:  push   %ebp
08545c0d +0x01:  mov    %esp,%ebp
08545c0f +0x03:  push   %ebx
08545c10 +0x04:  sub    $0x24,%esp
08545c13 +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08545c18 +0x0c:  mov    %eax,(%esp)
08545c1b +0x0f:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08545c20 +0x14:  mov    %eax,-0x14(%ebp)
08545c23 +0x17:  movl   $0x0,-0x10(%ebp)
08545c2a +0x1e:  movl   $0x0,-0xc(%ebp)
08545c31 +0x25:  movl   $0x0,-0x10(%ebp)
08545c38 +0x2c:  jmp    08545c6c <+0x60>
08545c3a +0x2e:  mov    0xc(%ebp),%edx
08545c3d +0x31:  mov    0x8(%ebp),%eax
08545c40 +0x34:  movzwl 0x6(%eax,%edx,2),%eax
08545c45 +0x39:  movswl %ax,%ebx
08545c48 +0x3c:  mov    -0x10(%ebp),%eax
08545c4b +0x3f:  mov    -0x14(%ebp),%edx
08545c4e +0x42:  add    $0x18,%edx
08545c51 +0x45:  mov    %eax,0x4(%esp)
08545c55 +0x49:  mov    %edx,(%esp)
08545c58 +0x4c:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545c5d +0x51:  mov    (%eax),%eax
08545c5f +0x53:  cmp    %eax,%ebx
08545c61 +0x55:  setge  %al
08545c64 +0x58:  test   %al,%al
08545c66 +0x5a:  je     08545c86 <+0x7a>
08545c68 +0x5c:  addl   $0x1,-0x10(%ebp)
08545c6c +0x60:  mov    -0x14(%ebp),%eax
08545c6f +0x63:  add    $0x18,%eax
08545c72 +0x66:  mov    %eax,(%esp)
08545c75 +0x69:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08545c7a +0x6e:  cmp    -0x10(%ebp),%eax
08545c7d +0x71:  setg   %al
08545c80 +0x74:  test   %al,%al
08545c82 +0x76:  jne    08545c3a <+0x2e>
08545c84 +0x78:  jmp    08545c87 <+0x7b>
08545c86 +0x7a:  nop
08545c87 +0x7b:  movl   $0x0,-0xc(%ebp)
08545c8e +0x82:  jmp    08545cc2 <+0xb6>
08545c90 +0x84:  mov    0x10(%ebp),%eax
08545c93 +0x87:  mov    %eax,(%esp)
08545c96 +0x8a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08545c9b +0x8f:  mov    %eax,%ebx
08545c9d +0x91:  mov    -0xc(%ebp),%eax
08545ca0 +0x94:  mov    -0x14(%ebp),%edx
08545ca3 +0x97:  add    $0x18,%edx
08545ca6 +0x9a:  mov    %eax,0x4(%esp)
08545caa +0x9e:  mov    %edx,(%esp)
08545cad +0xa1:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545cb2 +0xa6:  mov    0x4(%eax),%eax
08545cb5 +0xa9:  cmp    %eax,%ebx
08545cb7 +0xab:  setge  %al
08545cba +0xae:  test   %al,%al
08545cbc +0xb0:  je     08545cdc <+0xd0>
08545cbe +0xb2:  addl   $0x1,-0xc(%ebp)
08545cc2 +0xb6:  mov    -0x14(%ebp),%eax
08545cc5 +0xb9:  add    $0x18,%eax
08545cc8 +0xbc:  mov    %eax,(%esp)
08545ccb +0xbf:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08545cd0 +0xc4:  cmp    -0xc(%ebp),%eax
08545cd3 +0xc7:  setg   %al
08545cd6 +0xca:  test   %al,%al
08545cd8 +0xcc:  jne    08545c90 <+0x84>
08545cda +0xce:  jmp    08545cdd <+0xd1>
08545cdc +0xd0:  nop
08545cdd +0xd1:  mov    -0x10(%ebp),%eax
08545ce0 +0xd4:  cmp    -0xc(%ebp),%eax
08545ce3 +0xd7:  jg     08545cea <+0xde>
08545ce5 +0xd9:  mov    -0x10(%ebp),%eax
08545ce8 +0xdc:  jmp    08545ced <+0xe1>
08545cea +0xde:  mov    -0xc(%ebp),%eax
08545ced +0xe1:  add    $0x24,%esp
08545cf0 +0xe4:  pop    %ebx
08545cf1 +0xe5:  pop    %ebp
08545cf2 +0xe6:  ret
08545cf3 +0xe7:  nop
```

## 反编译 C

```c
// CItemMakingSkill::GetSkillLevel @ 0x8545c0c

/* CItemMakingSkill::GetSkillLevel(ENUM_ITEM_MAKING_TYPE, CUser*) const */

uint __thiscall
CItemMakingSkill::GetSkillLevel(CItemMakingSkill *this,int param_2,CUserCharacInfo *param_3)

{
  short sVar1;
  CDataManager *this_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::GetItemMakingSkill(this_00);
  local_14 = 0;
  while ((iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (iVar2 + 0x18)), (int)local_14 < iVar4 &&
         (sVar1 = *(short *)(this + param_2 * 2 + 6),
         piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                         operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *
                                    )(iVar2 + 0x18),local_14), *piVar3 <= (int)sVar1))) {
    local_14 = local_14 + 1;
  }
  for (local_10 = 0;
      iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (iVar2 + 0x18)), (int)local_10 < iVar4; local_10 = local_10 + 1) {
    iVar4 = CUserCharacInfo::get_charac_level(param_3);
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (iVar2 + 0x18),local_10);
    if (iVar4 < *(int *)(iVar5 + 4)) break;
  }
  if ((int)local_14 <= (int)local_10) {
    local_10 = local_14;
  }
  return local_10;
}
```
