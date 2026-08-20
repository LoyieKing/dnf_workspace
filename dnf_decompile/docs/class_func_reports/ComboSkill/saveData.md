# saveData

`_ZNK10ComboSkill8saveDataEP15SIG_COMBO_SKILL`

`ComboSkill::saveData(SIG_COMBO_SKILL*) const`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9df2  _ZNK10ComboSkill8saveDataEP15SIG_COMBO_SKILL
#           ComboSkill::saveData(SIG_COMBO_SKILL*) const
# range [0x080e9df2, 0x080e9e59]
080e9df2 +0x00:  push   %ebp
080e9df3 +0x01:  mov    %esp,%ebp
080e9df5 +0x03:  sub    $0x18,%esp
080e9df8 +0x06:  cmpl   $0x0,0xc(%ebp)
080e9dfc +0x0a:  jne    080e9e05 <+0x13>
080e9dfe +0x0c:  mov    $0x0,%eax
080e9e03 +0x11:  jmp    080e9e58 <+0x66>
080e9e05 +0x13:  mov    0xc(%ebp),%eax
080e9e08 +0x16:  lea    0xa(%eax),%edx
080e9e0b +0x19:  mov    0xc(%ebp),%eax
080e9e0e +0x1c:  add    $0x4,%eax
080e9e11 +0x1f:  movl   $0x0,0xc(%esp)
080e9e19 +0x27:  mov    %edx,0x8(%esp)
080e9e1d +0x2b:  mov    %eax,0x4(%esp)
080e9e21 +0x2f:  mov    0x8(%ebp),%eax
080e9e24 +0x32:  mov    %eax,(%esp)
080e9e27 +0x35:  call   080e9986 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND>  ; ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const
080e9e2c +0x3a:  mov    0xc(%ebp),%eax
080e9e2f +0x3d:  lea    0x5e(%eax),%edx
080e9e32 +0x40:  mov    0xc(%ebp),%eax
080e9e35 +0x43:  add    $0x5,%eax
080e9e38 +0x46:  movl   $0x1,0xc(%esp)
080e9e40 +0x4e:  mov    %edx,0x8(%esp)
080e9e44 +0x52:  mov    %eax,0x4(%esp)
080e9e48 +0x56:  mov    0x8(%ebp),%eax
080e9e4b +0x59:  mov    %eax,(%esp)
080e9e4e +0x5c:  call   080e9986 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND>  ; ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const
080e9e53 +0x61:  mov    $0x1,%eax
080e9e58 +0x66:  leave
080e9e59 +0x67:  ret
```

## 反编译 C

```c
// ComboSkill::saveData @ 0x80e9df2

/* ComboSkill::saveData(SIG_COMBO_SKILL*) const */

bool __thiscall ComboSkill::saveData(ComboSkill *this,SIG_COMBO_SKILL *param_1)

{
  if (param_1 != (SIG_COMBO_SKILL *)0x0) {
    convertComboSkillArray(this,param_1 + 4,param_1 + 10,0);
    convertComboSkillArray(this,param_1 + 5,param_1 + 0x5e,1);
  }
  return param_1 != (SIG_COMBO_SKILL *)0x0;
}
```
