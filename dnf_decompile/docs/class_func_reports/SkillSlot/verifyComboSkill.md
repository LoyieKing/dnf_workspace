# verifyComboSkill

`_ZN9SkillSlot16verifyComboSkillEv`

`SkillSlot::verifyComboSkill()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086091fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086091fe  _ZN9SkillSlot16verifyComboSkillEv
#           SkillSlot::verifyComboSkill()
# range [0x086091fe, 0x0860922b]
086091fe +0x00:  push   %ebp
086091ff +0x01:  mov    %esp,%ebp
08609201 +0x03:  sub    $0x18,%esp
08609204 +0x06:  movl   $0x0,0x4(%esp)
0860920c +0x0e:  mov    0x8(%ebp),%eax
0860920f +0x11:  mov    %eax,(%esp)
08609212 +0x14:  call   0860922c <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)
08609217 +0x19:  movl   $0x1,0x4(%esp)
0860921f +0x21:  mov    0x8(%ebp),%eax
08609222 +0x24:  mov    %eax,(%esp)
08609225 +0x27:  call   0860922c <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)
0860922a +0x2c:  leave
0860922b +0x2d:  ret
```

## 反编译 C

```c
// SkillSlot::verifyComboSkill @ 0x86091fe

/* SkillSlot::verifyComboSkill() */

void __thiscall SkillSlot::verifyComboSkill(SkillSlot *this)

{
  verifyComboSkillTree(this,0);
  verifyComboSkillTree(this,1);
  return;
}
```
