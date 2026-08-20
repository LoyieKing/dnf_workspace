# _GetBaseSkillPoint

`_ZNK8WongWork13CSkillChanger18_GetBaseSkillPointEPK5CUser`

`WongWork::CSkillChanger::_GetBaseSkillPoint(CUser const*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a634` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a634  _ZNK8WongWork13CSkillChanger18_GetBaseSkillPointEPK5CUser
#           WongWork::CSkillChanger::_GetBaseSkillPoint(CUser const*) const
# range [0x0860a634, 0x0860a67f]
0860a634 +0x00:  push   %ebp
0860a635 +0x01:  mov    %esp,%ebp
0860a637 +0x03:  sub    $0x28,%esp
0860a63a +0x06:  movl   $0x0,-0x10(%ebp)
0860a641 +0x0d:  movl   $0x1,-0xc(%ebp)
0860a648 +0x14:  jmp    0860a665 <+0x31>
0860a64a +0x16:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860a64f +0x1b:  mov    -0xc(%ebp),%edx
0860a652 +0x1e:  mov    %edx,0x4(%esp)
0860a656 +0x22:  mov    %eax,(%esp)
0860a659 +0x25:  call   08360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>  ; CDataManager::GetSpAtLevelUp(int) const
0860a65e +0x2a:  add    %eax,-0x10(%ebp)
0860a661 +0x2d:  addl   $0x1,-0xc(%ebp)
0860a665 +0x31:  mov    0xc(%ebp),%eax
0860a668 +0x34:  mov    %eax,(%esp)
0860a66b +0x37:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860a670 +0x3c:  cmp    -0xc(%ebp),%eax
0860a673 +0x3f:  setge  %al
0860a676 +0x42:  test   %al,%al
0860a678 +0x44:  jne    0860a64a <+0x16>
0860a67a +0x46:  mov    -0x10(%ebp),%eax
0860a67d +0x49:  leave
0860a67e +0x4a:  ret
0860a67f +0x4b:  nop
```

## 反编译 C

```c
// WongWork::CSkillChanger::_GetBaseSkillPoint @ 0x860a634

/* WongWork::CSkillChanger::_GetBaseSkillPoint(CUser const*) const */

int __thiscall WongWork::CSkillChanger::_GetBaseSkillPoint(CSkillChanger *this,CUser *param_1)

{
  CDataManager *this_00;
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 1;
  while( true ) {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar1 < local_10) break;
    this_00 = (CDataManager *)G_CDataManager();
    iVar1 = CDataManager::GetSpAtLevelUp(this_00,local_10);
    local_14 = local_14 + iVar1;
    local_10 = local_10 + 1;
  }
  return local_14;
}
```
