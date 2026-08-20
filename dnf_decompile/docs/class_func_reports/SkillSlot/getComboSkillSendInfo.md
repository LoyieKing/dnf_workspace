# getComboSkillSendInfo

`_ZNK9SkillSlot21getComboSkillSendInfoER11PacketGuard`

`SkillSlot::getComboSkillSendInfo(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608c12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608c12  _ZNK9SkillSlot21getComboSkillSendInfoER11PacketGuard
#           SkillSlot::getComboSkillSendInfo(PacketGuard&) const
# range [0x08608c12, 0x08608c2f]
08608c12 +0x00:  push   %ebp
08608c13 +0x01:  mov    %esp,%ebp
08608c15 +0x03:  sub    $0x18,%esp
08608c18 +0x06:  mov    0x8(%ebp),%eax
08608c1b +0x09:  lea    0x1c(%eax),%edx
08608c1e +0x0c:  mov    0xc(%ebp),%eax
08608c21 +0x0f:  mov    %eax,0x4(%esp)
08608c25 +0x13:  mov    %edx,(%esp)
08608c28 +0x16:  call   080e9e5a <_ZNK10ComboSkill21getComboSkillSendListER11PacketGuard>  ; ComboSkill::getComboSkillSendList(PacketGuard&) const
08608c2d +0x1b:  leave
08608c2e +0x1c:  ret
08608c2f +0x1d:  nop
```

## 反编译 C

```c
// SkillSlot::getComboSkillSendInfo @ 0x8608c12

/* SkillSlot::getComboSkillSendInfo(PacketGuard&) const */

void __thiscall SkillSlot::getComboSkillSendInfo(SkillSlot *this,PacketGuard *param_1)

{
  ComboSkill::getComboSkillSendList((ComboSkill *)(this + 0x1c),param_1);
  return;
}
```
