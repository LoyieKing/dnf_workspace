# GetItemMakingSkillLevel

`_ZN16CItemMakingSkill23GetItemMakingSkillLevelEPK14CStackableItemP5CUser`

`CItemMakingSkill::GetItemMakingSkillLevel(CStackableItem const*, CUser*)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545cf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545cf4  _ZN16CItemMakingSkill23GetItemMakingSkillLevelEPK14CStackableItemP5CUser
#           CItemMakingSkill::GetItemMakingSkillLevel(CStackableItem const*, CUser*)
# range [0x08545cf4, 0x08545d23]
08545cf4 +0x00:  push   %ebp
08545cf5 +0x01:  mov    %esp,%ebp
08545cf7 +0x03:  sub    $0x28,%esp
08545cfa +0x06:  mov    0xc(%ebp),%eax
08545cfd +0x09:  mov    %eax,(%esp)
08545d00 +0x0c:  call   08545fcc <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x1d>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x1d
08545d05 +0x11:  mov    %eax,-0xc(%ebp)
08545d08 +0x14:  mov    0x10(%ebp),%eax
08545d0b +0x17:  mov    %eax,0x8(%esp)
08545d0f +0x1b:  mov    -0xc(%ebp),%eax
08545d12 +0x1e:  mov    %eax,0x4(%esp)
08545d16 +0x22:  mov    0x8(%ebp),%eax
08545d19 +0x25:  mov    %eax,(%esp)
08545d1c +0x28:  call   08545c0c <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser>  ; CItemMakingSkill::GetSkillLevel(ENUM_ITEM_MAKING_TYPE, CUser*) const
08545d21 +0x2d:  leave
08545d22 +0x2e:  ret
08545d23 +0x2f:  nop
```

## 反编译 C

```c
// CItemMakingSkill::GetItemMakingSkillLevel @ 0x8545cf4

/* CItemMakingSkill::GetItemMakingSkillLevel(CStackableItem const*, CUser*) */

void __thiscall
CItemMakingSkill::GetItemMakingSkillLevel
          (CItemMakingSkill *this,CStackableItem *param_1,CUser *param_2)

{
  undefined4 uVar1;
  
  uVar1 = CItem::GetUpSkillType((CItem *)param_1);
  GetSkillLevel(this,uVar1,param_2);
  return;
}
```
