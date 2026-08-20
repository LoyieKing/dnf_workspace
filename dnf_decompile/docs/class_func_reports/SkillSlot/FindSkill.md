# FindSkill

`_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND`

`SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086036ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086036ce  _ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND
#           SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const
# range [0x086036ce, 0x0860373b]
086036ce +0x00:  push   %ebp
086036cf +0x01:  mov    %esp,%ebp
086036d1 +0x03:  sub    $0x28,%esp
086036d4 +0x06:  mov    0x10(%ebp),%eax
086036d7 +0x09:  mov    %eax,0x4(%esp)
086036db +0x0d:  mov    0x8(%ebp),%eax
086036de +0x10:  mov    %eax,(%esp)
086036e1 +0x13:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
086036e6 +0x18:  mov    %eax,-0x10(%ebp)
086036e9 +0x1b:  cmpl   $0x0,-0x10(%ebp)
086036ed +0x1f:  jne    086036f6 <+0x28>
086036ef +0x21:  mov    $0x0,%eax
086036f4 +0x26:  jmp    0860373a <+0x6c>
086036f6 +0x28:  movl   $0x0,-0xc(%ebp)
086036fd +0x2f:  jmp    08603727 <+0x59>
086036ff +0x31:  mov    -0xc(%ebp),%eax
08603702 +0x34:  add    %eax,%eax
08603704 +0x36:  add    -0x10(%ebp),%eax
08603707 +0x39:  movzbl (%eax),%eax
0860370a +0x3c:  movzbl %al,%eax
0860370d +0x3f:  cmp    0xc(%ebp),%eax
08603710 +0x42:  jne    08603723 <+0x55>
08603712 +0x44:  mov    -0xc(%ebp),%eax
08603715 +0x47:  add    %eax,%eax
08603717 +0x49:  add    -0x10(%ebp),%eax
0860371a +0x4c:  movzbl 0x1(%eax),%eax
0860371e +0x50:  movsbl %al,%eax
08603721 +0x53:  jmp    0860373a <+0x6c>
08603723 +0x55:  addl   $0x1,-0xc(%ebp)
08603727 +0x59:  cmpl   $0xcb,-0xc(%ebp)
0860372e +0x60:  setle  %al
08603731 +0x63:  test   %al,%al
08603733 +0x65:  jne    086036ff <+0x31>
08603735 +0x67:  mov    $0x0,%eax
0860373a +0x6c:  leave
0860373b +0x6d:  ret
```

## 反编译 C

```c
// SkillSlot::FindSkill @ 0x86036ce

/* SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const */

int __thiscall SkillSlot::FindSkill(SkillSlot *this,uint param_1,undefined4 param_3)

{
  int iVar1;
  int local_10;
  
  iVar1 = get_skillslot_buf(this,param_3);
  if (iVar1 != 0) {
    for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (*(byte *)(local_10 * 2 + iVar1) == param_1) {
        return (int)*(char *)(local_10 * 2 + iVar1 + 1);
      }
    }
  }
  return 0;
}
```
