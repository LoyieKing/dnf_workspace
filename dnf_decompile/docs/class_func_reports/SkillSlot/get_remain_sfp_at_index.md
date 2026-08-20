# get_remain_sfp_at_index

`_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND`

`SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086035f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086035f2  _ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND
#           SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
# range [0x086035f2, 0x08603651]
086035f2 +0x00:  push   %ebp
086035f3 +0x01:  mov    %esp,%ebp
086035f5 +0x03:  sub    $0x28,%esp
086035f8 +0x06:  mov    0xc(%ebp),%eax
086035fb +0x09:  cmp    $0x2,%eax
086035fe +0x0c:  jne    08603608 <+0x16>
08603600 +0x0e:  mov    0x8(%ebp),%eax
08603603 +0x11:  mov    0x14(%eax),%eax
08603606 +0x14:  jmp    08603650 <+0x5e>
08603608 +0x16:  mov    0xc(%ebp),%eax
0860360b +0x19:  cmp    $0x3,%eax
0860360e +0x1c:  jne    08603618 <+0x26>
08603610 +0x1e:  mov    0x8(%ebp),%eax
08603613 +0x21:  mov    0x18(%eax),%eax
08603616 +0x24:  jmp    08603650 <+0x5e>
08603618 +0x26:  mov    0xc(%ebp),%eax
0860361b +0x29:  mov    %eax,0x14(%esp)
0860361f +0x2d:  movl   $"Wrong Skill Tree Kind : %d",0x10(%esp)
08603627 +0x35:  movl   $0x81,0xc(%esp)
0860362f +0x3d:  movl   $&_ZZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08603637 +0x45:  movl   $"skill_slot.cpp",0x4(%esp)
0860363f +0x4d:  movl   $0x1,(%esp)
08603646 +0x54:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0860364b +0x59:  mov    $0x0,%eax
08603650 +0x5e:  leave
08603651 +0x5f:  ret
```

## 反编译 C

```c
// SkillSlot::get_remain_sfp_at_index @ 0x86035f2

/* SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const */

undefined4 __thiscall SkillSlot::get_remain_sfp_at_index(SkillSlot *this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(undefined4 *)(this + 0x14);
  }
  else if (param_2 == 3) {
    uVar1 = *(undefined4 *)(this + 0x18);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const",0x81,
               "Wrong Skill Tree Kind : %d",param_2);
    uVar1 = 0;
  }
  return uVar1;
}
```
