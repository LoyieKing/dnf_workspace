# loadComboSkill

`_ZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILL`

`SkillSlot::loadComboSkill(SIG_COMBO_SKILL*)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608b1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608b1e  _ZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILL
#           SkillSlot::loadComboSkill(SIG_COMBO_SKILL*)
# range [0x08608b1e, 0x08608b77]
08608b1e +0x00:  push   %ebp
08608b1f +0x01:  mov    %esp,%ebp
08608b21 +0x03:  sub    $0x28,%esp
08608b24 +0x06:  cmpl   $0x0,0xc(%ebp)
08608b28 +0x0a:  je     08608b74 <+0x56>
08608b2a +0x0c:  mov    0x8(%ebp),%eax
08608b2d +0x0f:  lea    0x1c(%eax),%edx
08608b30 +0x12:  mov    0xc(%ebp),%eax
08608b33 +0x15:  mov    %eax,0x4(%esp)
08608b37 +0x19:  mov    %edx,(%esp)
08608b3a +0x1c:  call   080e9d6c <_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL>  ; ComboSkill::loadData(SIG_COMBO_SKILL*)
08608b3f +0x21:  xor    $0x1,%eax
08608b42 +0x24:  test   %al,%al
08608b44 +0x26:  je     08608b75 <+0x57>
08608b46 +0x28:  movl   $"SkillSlot::loadComboSkill error",0x10(%esp)
08608b4e +0x30:  movl   $0xc75,0xc(%esp)
08608b56 +0x38:  movl   $&_ZZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILLE19__PRETTY_FUNCTION__,0x8(%esp)
08608b5e +0x40:  movl   $"skill_slot.cpp",0x4(%esp)
08608b66 +0x48:  movl   $0x1,(%esp)
08608b6d +0x4f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08608b72 +0x54:  jmp    08608b75 <+0x57>
08608b74 +0x56:  nop
08608b75 +0x57:  leave
08608b76 +0x58:  ret
08608b77 +0x59:  nop
```

## 反编译 C

```c
// SkillSlot::loadComboSkill @ 0x8608b1e

/* SkillSlot::loadComboSkill(SIG_COMBO_SKILL*) */

void __thiscall SkillSlot::loadComboSkill(SkillSlot *this,SIG_COMBO_SKILL *param_1)

{
  char cVar1;
  
  if (param_1 != (SIG_COMBO_SKILL *)0x0) {
    cVar1 = ComboSkill::loadData((ComboSkill *)(this + 0x1c),param_1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"skill_slot.cpp","void SkillSlot::loadComboSkill(SIG_COMBO_SKILL*)",0xc75,
                 "SkillSlot::loadComboSkill error");
    }
  }
  return;
}
```
