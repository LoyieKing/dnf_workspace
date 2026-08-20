# eraseDuplicationComboSKillTree

`_ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND`

`SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086090ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086090ce  _ZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KIND
#           SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND)
# range [0x086090ce, 0x0860917d]
086090ce +0x00:  push   %ebp
086090cf +0x01:  mov    %esp,%ebp
086090d1 +0x03:  sub    $0x38,%esp
086090d4 +0x06:  mov    0xc(%ebp),%eax
086090d7 +0x09:  test   %eax,%eax
086090d9 +0x0b:  je     08609118 <+0x4a>
086090db +0x0d:  mov    0xc(%ebp),%eax
086090de +0x10:  cmp    $0x1,%eax
086090e1 +0x13:  je     08609118 <+0x4a>
086090e3 +0x15:  mov    0xc(%ebp),%eax
086090e6 +0x18:  mov    %eax,0x14(%esp)
086090ea +0x1c:  movl   $"SkillSlot::eraseDuplicationComboSKillTree kind(%d) error",0x10(%esp)
086090f2 +0x24:  movl   $0xd0b,0xc(%esp)
086090fa +0x2c:  movl   $&_ZZN9SkillSlot30eraseDuplicationComboSKillTreeE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08609102 +0x34:  movl   $"skill_slot.cpp",0x4(%esp)
0860910a +0x3c:  movl   $0x1,(%esp)
08609111 +0x43:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08609116 +0x48:  jmp    0860917b <+0xad>
08609118 +0x4a:  movl   $0x0,-0x10(%ebp)
0860911f +0x51:  movl   $0xc6,-0xc(%ebp)
08609126 +0x58:  jmp    0860916d <+0x9f>
08609128 +0x5a:  mov    -0xc(%ebp),%eax
0860912b +0x5d:  mov    %eax,0x8(%esp)
0860912f +0x61:  mov    0xc(%ebp),%eax
08609132 +0x64:  mov    %eax,0x4(%esp)
08609136 +0x68:  mov    0x8(%ebp),%eax
08609139 +0x6b:  mov    %eax,(%esp)
0860913c +0x6e:  call   0860917e <_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi>  ; SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const
08609141 +0x73:  mov    %eax,-0x10(%ebp)
08609144 +0x76:  cmpl   $0x0,-0x10(%ebp)
08609148 +0x7a:  je     08609168 <+0x9a>
0860914a +0x7c:  mov    0x8(%ebp),%eax
0860914d +0x7f:  lea    0x1c(%eax),%edx
08609150 +0x82:  mov    -0x10(%ebp),%eax
08609153 +0x85:  mov    %eax,0x8(%esp)
08609157 +0x89:  mov    0xc(%ebp),%eax
0860915a +0x8c:  mov    %eax,0x4(%esp)
0860915e +0x90:  mov    %edx,(%esp)
08609161 +0x93:  call   080ea206 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi>  ; ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int)
08609166 +0x98:  jmp    08609169 <+0x9b>
08609168 +0x9a:  nop
08609169 +0x9b:  addl   $0x1,-0xc(%ebp)
0860916d +0x9f:  cmpl   $0xcb,-0xc(%ebp)
08609174 +0xa6:  setle  %al
08609177 +0xa9:  test   %al,%al
08609179 +0xab:  jne    08609128 <+0x5a>
0860917b +0xad:  leave
0860917c +0xae:  ret
0860917d +0xaf:  nop
```

## 反编译 C

```c
// SkillSlot::eraseDuplicationComboSKillTree @ 0x86090ce

/* SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::eraseDuplicationComboSKillTree(SkillSlot *this,int param_2)

{
  int iVar1;
  int local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    for (local_10 = 0xc6; local_10 < 0xcc; local_10 = local_10 + 1) {
      iVar1 = getSkillSlotIndex(this,param_2,local_10);
      if (iVar1 != 0) {
        ComboSkill::eraseDuplicationComboSKill((ComboSkill *)(this + 0x1c),param_2,iVar1);
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "void SkillSlot::eraseDuplicationComboSKillTree(ENUM_SKILL_TREE_KIND)",0xd0b,
               "SkillSlot::eraseDuplicationComboSKillTree kind(%d) error",param_2);
  }
  return;
}
```
