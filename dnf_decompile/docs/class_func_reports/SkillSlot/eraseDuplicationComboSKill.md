# eraseDuplicationComboSKill

`_ZN9SkillSlot26eraseDuplicationComboSKillEv`

`SkillSlot::eraseDuplicationComboSKill()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086090a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086090a0  _ZN9SkillSlot26eraseDuplicationComboSKillEv
#           SkillSlot::eraseDuplicationComboSKill()
# range [0x086090a0, 0x086090cd]
086090a0 +0x00:  push   %ebp
086090a1 +0x01:  mov    %esp,%ebp
086090a3 +0x03:  sub    $0x18,%esp
086090a6 +0x06:  movl   $0x0,0x4(%esp)
086090ae +0x0e:  mov    0x8(%ebp),%eax
086090b1 +0x11:  mov    %eax,(%esp)
086090b4 +0x14:  call   086090ce <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND)
086090b9 +0x19:  movl   $0x1,0x4(%esp)
086090c1 +0x21:  mov    0x8(%ebp),%eax
086090c4 +0x24:  mov    %eax,(%esp)
086090c7 +0x27:  call   086090ce <_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND)
086090cc +0x2c:  leave
086090cd +0x2d:  ret
```

## 反编译 C

```c
// SkillSlot::eraseDuplicationComboSKill @ 0x86090a0

/* SkillSlot::eraseDuplicationComboSKill() */

void __thiscall SkillSlot::eraseDuplicationComboSKill(SkillSlot *this)

{
  eraseDuplicationComboSKillTree(this,0);
  eraseDuplicationComboSKillTree(this,1);
  return;
}
```
