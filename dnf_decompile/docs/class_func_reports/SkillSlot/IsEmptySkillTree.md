# IsEmptySkillTree

`_ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND`

`SkillSlot::IsEmptySkillTree(ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08606958` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08606958  _ZNK9SkillSlot16IsEmptySkillTreeE20ENUM_SKILL_TREE_KIND
#           SkillSlot::IsEmptySkillTree(ENUM_SKILL_TREE_KIND) const
# range [0x08606958, 0x086069b9]
08606958 +0x00:  push   %ebp
08606959 +0x01:  mov    %esp,%ebp
0860695b +0x03:  sub    $0x18,%esp
0860695e +0x06:  mov    0xc(%ebp),%eax
08606961 +0x09:  mov    %eax,0x4(%esp)
08606965 +0x0d:  mov    0x8(%ebp),%eax
08606968 +0x10:  mov    %eax,(%esp)
0860696b +0x13:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08606970 +0x18:  mov    %eax,-0xc(%ebp)
08606973 +0x1b:  cmpl   $0x0,-0xc(%ebp)
08606977 +0x1f:  jne    08606980 <+0x28>
08606979 +0x21:  mov    $0x0,%eax
0860697e +0x26:  jmp    086069b8 <+0x60>
08606980 +0x28:  movb   $0x1,-0x5(%ebp)
08606984 +0x2c:  movl   $0x0,-0x4(%ebp)
0860698b +0x33:  jmp    086069a6 <+0x4e>
0860698d +0x35:  mov    -0x4(%ebp),%eax
08606990 +0x38:  add    %eax,%eax
08606992 +0x3a:  add    -0xc(%ebp),%eax
08606995 +0x3d:  movzbl (%eax),%eax
08606998 +0x40:  test   %al,%al
0860699a +0x42:  je     086069a2 <+0x4a>
0860699c +0x44:  movb   $0x0,-0x5(%ebp)
086069a0 +0x48:  jmp    086069b4 <+0x5c>
086069a2 +0x4a:  addl   $0x1,-0x4(%ebp)
086069a6 +0x4e:  cmpl   $0xcb,-0x4(%ebp)
086069ad +0x55:  setle  %al
086069b0 +0x58:  test   %al,%al
086069b2 +0x5a:  jne    0860698d <+0x35>
086069b4 +0x5c:  movzbl -0x5(%ebp),%eax
086069b8 +0x60:  leave
086069b9 +0x61:  ret
```

## 反编译 C

```c
// SkillSlot::IsEmptySkillTree @ 0x8606958

/* SkillSlot::IsEmptySkillTree(ENUM_SKILL_TREE_KIND) const */

undefined1 __thiscall SkillSlot::IsEmptySkillTree(SkillSlot *this,undefined4 param_2)

{
  int iVar1;
  undefined1 local_9;
  int local_8;
  
  iVar1 = get_skillslot_buf(this,param_2);
  if (iVar1 == 0) {
    local_9 = 0;
  }
  else {
    local_9 = 1;
    for (local_8 = 0; local_8 < 0xcc; local_8 = local_8 + 1) {
      if (*(char *)(local_8 * 2 + iVar1) != '\0') {
        return 0;
      }
    }
  }
  return local_9;
}
```
