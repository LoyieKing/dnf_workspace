# resetComboSkill

`_ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND`

`SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608cf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608cf6  _ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND
#           SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND)
# range [0x08608cf6, 0x08608d57]
08608cf6 +0x00:  push   %ebp
08608cf7 +0x01:  mov    %esp,%ebp
08608cf9 +0x03:  sub    $0x28,%esp
08608cfc +0x06:  mov    0xc(%ebp),%eax
08608cff +0x09:  cmp    $0xffffffff,%eax
08608d02 +0x0c:  je     08608d40 <+0x4a>
08608d04 +0x0e:  mov    0xc(%ebp),%eax
08608d07 +0x11:  test   %eax,%eax
08608d09 +0x13:  je     08608d40 <+0x4a>
08608d0b +0x15:  mov    0xc(%ebp),%eax
08608d0e +0x18:  mov    %eax,0x14(%esp)
08608d12 +0x1c:  movl   $"SkillSlot::resetComboSkill kind(%d) error",0x10(%esp)
08608d1a +0x24:  movl   $0xcab,0xc(%esp)
08608d22 +0x2c:  movl   $&_ZZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08608d2a +0x34:  movl   $"skill_slot.cpp",0x4(%esp)
08608d32 +0x3c:  movl   $0x1,(%esp)
08608d39 +0x43:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08608d3e +0x48:  jmp    08608d55 <+0x5f>
08608d40 +0x4a:  mov    0x8(%ebp),%eax
08608d43 +0x4d:  lea    0x1c(%eax),%edx
08608d46 +0x50:  mov    0xc(%ebp),%eax
08608d49 +0x53:  mov    %eax,0x4(%esp)
08608d4d +0x57:  mov    %edx,(%esp)
08608d50 +0x5a:  call   080e9644 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND>  ; ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)
08608d55 +0x5f:  leave
08608d56 +0x60:  ret
08608d57 +0x61:  nop
```

## 反编译 C

```c
// SkillSlot::resetComboSkill @ 0x8608cf6

/* SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::resetComboSkill(SkillSlot *this,int param_2)

{
  if ((param_2 == -1) || (param_2 == 0)) {
    ComboSkill::resetTree((ComboSkill *)(this + 0x1c),param_2);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp","void SkillSlot::resetComboSkill(ENUM_SKILL_TREE_KIND)",0xcab,
               "SkillSlot::resetComboSkill kind(%d) error",param_2);
  }
  return;
}
```
