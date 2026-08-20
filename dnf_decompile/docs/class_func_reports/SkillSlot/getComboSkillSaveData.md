# getComboSkillSaveData

`_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL`

`SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608b78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608b78  _ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL
#           SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const
# range [0x08608b78, 0x08608c11]
08608b78 +0x00:  push   %ebp
08608b79 +0x01:  mov    %esp,%ebp
08608b7b +0x03:  sub    $0x28,%esp
08608b7e +0x06:  mov    0x8(%ebp),%eax
08608b81 +0x09:  mov    (%eax),%eax
08608b83 +0x0b:  test   %eax,%eax
08608b85 +0x0d:  je     08608c0c <+0x94>
08608b8b +0x13:  cmpl   $0x0,0xc(%ebp)
08608b8f +0x17:  je     08608c0f <+0x97>
08608b91 +0x19:  mov    0x8(%ebp),%eax
08608b94 +0x1c:  mov    (%eax),%eax
08608b96 +0x1e:  movl   $0xffffffff,0x4(%esp)
08608b9e +0x26:  mov    %eax,(%esp)
08608ba1 +0x29:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08608ba6 +0x2e:  mov    %eax,%edx
08608ba8 +0x30:  mov    0xc(%ebp),%eax
08608bab +0x33:  mov    %edx,(%eax)
08608bad +0x35:  mov    0x8(%ebp),%eax
08608bb0 +0x38:  mov    (%eax),%eax
08608bb2 +0x3a:  mov    %eax,(%esp)
08608bb5 +0x3d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608bba +0x42:  mov    %eax,%edx
08608bbc +0x44:  mov    0xc(%ebp),%eax
08608bbf +0x47:  mov    %edx,0x6(%eax)
08608bc2 +0x4a:  mov    0x8(%ebp),%eax
08608bc5 +0x4d:  lea    0x1c(%eax),%edx
08608bc8 +0x50:  mov    0xc(%ebp),%eax
08608bcb +0x53:  mov    %eax,0x4(%esp)
08608bcf +0x57:  mov    %edx,(%esp)
08608bd2 +0x5a:  call   080e9df2 <_ZNK10ComboSkill8saveDataEP15SIG_COMBO_SKILL>  ; ComboSkill::saveData(SIG_COMBO_SKILL*) const
08608bd7 +0x5f:  xor    $0x1,%eax
08608bda +0x62:  test   %al,%al
08608bdc +0x64:  je     08608c10 <+0x98>
08608bde +0x66:  movl   $"SkillSlot::getComboSkillSaveData error",0x10(%esp)
08608be6 +0x6e:  movl   $0xc84,0xc(%esp)
08608bee +0x76:  movl   $&_ZZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILLE19__PRETTY_FUNCTION__,0x8(%esp)
08608bf6 +0x7e:  movl   $"skill_slot.cpp",0x4(%esp)
08608bfe +0x86:  movl   $0x1,(%esp)
08608c05 +0x8d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08608c0a +0x92:  jmp    08608c10 <+0x98>
08608c0c +0x94:  nop
08608c0d +0x95:  jmp    08608c10 <+0x98>
08608c0f +0x97:  nop
08608c10 +0x98:  leave
08608c11 +0x99:  ret
```

## 反编译 C

```c
// SkillSlot::getComboSkillSaveData @ 0x8608b78

/* SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const */

void __thiscall SkillSlot::getComboSkillSaveData(SkillSlot *this,SIG_COMBO_SKILL *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(int *)this != 0) && (param_1 != (SIG_COMBO_SKILL *)0x0)) {
    uVar2 = CUser::get_charac_no(*(CUser **)this,-1);
    *(undefined4 *)param_1 = uVar2;
    uVar2 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
    *(undefined4 *)(param_1 + 6) = uVar2;
    cVar1 = ComboSkill::saveData((ComboSkill *)(this + 0x1c),param_1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"skill_slot.cpp","void SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const",
                 0xc84,"SkillSlot::getComboSkillSaveData error");
    }
  }
  return;
}
```
