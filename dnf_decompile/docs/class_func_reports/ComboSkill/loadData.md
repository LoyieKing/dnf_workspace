# loadData

`_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL`

`ComboSkill::loadData(SIG_COMBO_SKILL*)`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9d6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9d6c  _ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL
#           ComboSkill::loadData(SIG_COMBO_SKILL*)
# range [0x080e9d6c, 0x080e9df1]
080e9d6c +0x00:  push   %ebp
080e9d6d +0x01:  mov    %esp,%ebp
080e9d6f +0x03:  sub    $0x18,%esp
080e9d72 +0x06:  cmpl   $0x0,0xc(%ebp)
080e9d76 +0x0a:  jne    080e9d7f <+0x13>
080e9d78 +0x0c:  mov    $0x0,%eax
080e9d7d +0x11:  jmp    080e9df0 <+0x84>
080e9d7f +0x13:  mov    0xc(%ebp),%eax
080e9d82 +0x16:  movzbl 0x4(%eax),%eax
080e9d86 +0x1a:  test   %al,%al
080e9d88 +0x1c:  je     080e9db5 <+0x49>
080e9d8a +0x1e:  mov    0xc(%ebp),%eax
080e9d8d +0x21:  lea    0xa(%eax),%edx
080e9d90 +0x24:  mov    0xc(%ebp),%eax
080e9d93 +0x27:  movzbl 0x4(%eax),%eax
080e9d97 +0x2b:  movzbl %al,%eax
080e9d9a +0x2e:  movl   $0x0,0xc(%esp)
080e9da2 +0x36:  mov    %edx,0x8(%esp)
080e9da6 +0x3a:  mov    %eax,0x4(%esp)
080e9daa +0x3e:  mov    0x8(%ebp),%eax
080e9dad +0x41:  mov    %eax,(%esp)
080e9db0 +0x44:  call   080e975a <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND>  ; ComboSkill::convertComboSkillMap(unsigned char, comoboSkillData const*, ENUM_SKILL_TREE_KIND)
080e9db5 +0x49:  mov    0xc(%ebp),%eax
080e9db8 +0x4c:  movzbl 0x5(%eax),%eax
080e9dbc +0x50:  test   %al,%al
080e9dbe +0x52:  je     080e9deb <+0x7f>
080e9dc0 +0x54:  mov    0xc(%ebp),%eax
080e9dc3 +0x57:  lea    0x5e(%eax),%edx
080e9dc6 +0x5a:  mov    0xc(%ebp),%eax
080e9dc9 +0x5d:  movzbl 0x5(%eax),%eax
080e9dcd +0x61:  movzbl %al,%eax
080e9dd0 +0x64:  movl   $0x1,0xc(%esp)
080e9dd8 +0x6c:  mov    %edx,0x8(%esp)
080e9ddc +0x70:  mov    %eax,0x4(%esp)
080e9de0 +0x74:  mov    0x8(%ebp),%eax
080e9de3 +0x77:  mov    %eax,(%esp)
080e9de6 +0x7a:  call   080e975a <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND>  ; ComboSkill::convertComboSkillMap(unsigned char, comoboSkillData const*, ENUM_SKILL_TREE_KIND)
080e9deb +0x7f:  mov    $0x1,%eax
080e9df0 +0x84:  leave
080e9df1 +0x85:  ret
```

## 反编译 C

```c
// ComboSkill::loadData @ 0x80e9d6c

/* ComboSkill::loadData(SIG_COMBO_SKILL*) */

undefined4 __thiscall ComboSkill::loadData(ComboSkill *this,SIG_COMBO_SKILL *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (SIG_COMBO_SKILL *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_1[4] != (SIG_COMBO_SKILL)0x0) {
      convertComboSkillMap(this,param_1[4],param_1 + 10,0);
    }
    if (param_1[5] != (SIG_COMBO_SKILL)0x0) {
      convertComboSkillMap(this,param_1[5],param_1 + 0x5e,1);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```
