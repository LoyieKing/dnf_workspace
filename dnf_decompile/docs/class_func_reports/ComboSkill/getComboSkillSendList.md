# getComboSkillSendList

`_ZNK10ComboSkill21getComboSkillSendListER11PacketGuard`

`ComboSkill::getComboSkillSendList(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `ComboSkill` | `0x080e9e5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9e5a  _ZNK10ComboSkill21getComboSkillSendListER11PacketGuard
#           ComboSkill::getComboSkillSendList(PacketGuard&) const
# range [0x080e9e5a, 0x080e9e95]
080e9e5a +0x00:  push   %ebp
080e9e5b +0x01:  mov    %esp,%ebp
080e9e5d +0x03:  sub    $0x18,%esp
080e9e60 +0x06:  movl   $0x0,0x8(%esp)
080e9e68 +0x0e:  mov    0xc(%ebp),%eax
080e9e6b +0x11:  mov    %eax,0x4(%esp)
080e9e6f +0x15:  mov    0x8(%ebp),%eax
080e9e72 +0x18:  mov    %eax,(%esp)
080e9e75 +0x1b:  call   080e9e96 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND>  ; ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const
080e9e7a +0x20:  movl   $0x1,0x8(%esp)
080e9e82 +0x28:  mov    0xc(%ebp),%eax
080e9e85 +0x2b:  mov    %eax,0x4(%esp)
080e9e89 +0x2f:  mov    0x8(%ebp),%eax
080e9e8c +0x32:  mov    %eax,(%esp)
080e9e8f +0x35:  call   080e9e96 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND>  ; ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const
080e9e94 +0x3a:  leave
080e9e95 +0x3b:  ret
```

## 反编译 C

```c
// ComboSkill::getComboSkillSendList @ 0x80e9e5a

/* ComboSkill::getComboSkillSendList(PacketGuard&) const */

void __thiscall ComboSkill::getComboSkillSendList(ComboSkill *this,PacketGuard *param_1)

{
  getComboSkillSendForm(this,param_1,0);
  getComboSkillSendForm(this,param_1,1);
  return;
}
```
