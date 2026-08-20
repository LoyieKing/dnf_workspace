# getSkillSlotIndex

`_ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi`

`SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860917e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860917e  _ZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDi
#           SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const
# range [0x0860917e, 0x086091fd]
0860917e +0x00:  push   %ebp
0860917f +0x01:  mov    %esp,%ebp
08609181 +0x03:  sub    $0x28,%esp
08609184 +0x06:  mov    0xc(%ebp),%eax
08609187 +0x09:  cmp    $0x1,%eax
0860918a +0x0c:  jle    086091c6 <+0x48>
0860918c +0x0e:  mov    0xc(%ebp),%eax
0860918f +0x11:  mov    %eax,0x14(%esp)
08609193 +0x15:  movl   $"SkillSlot::getSkillSlotIndex kind(%d) error",0x10(%esp)
0860919b +0x1d:  movl   $0xd1f,0xc(%esp)
086091a3 +0x25:  movl   $&_ZZNK9SkillSlot17getSkillSlotIndexE20ENUM_SKILL_TREE_KINDiE19__PRETTY_FUNCTION__,0x8(%esp)
086091ab +0x2d:  movl   $"skill_slot.cpp",0x4(%esp)
086091b3 +0x35:  movl   $0x1,(%esp)
086091ba +0x3c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086091bf +0x41:  mov    $0xffffffff,%eax
086091c4 +0x46:  jmp    086091fc <+0x7e>
086091c6 +0x48:  mov    0xc(%ebp),%eax
086091c9 +0x4b:  cmp    $0xffffffff,%eax
086091cc +0x4e:  je     086091d5 <+0x57>
086091ce +0x50:  mov    0xc(%ebp),%eax
086091d1 +0x53:  test   %eax,%eax
086091d3 +0x55:  jne    086091e8 <+0x6a>
086091d5 +0x57:  mov    0x10(%ebp),%edx
086091d8 +0x5a:  mov    0x8(%ebp),%eax
086091db +0x5d:  add    $0x20,%edx
086091de +0x60:  movzbl 0x6(%eax,%edx,2),%eax
086091e3 +0x65:  movzbl %al,%eax
086091e6 +0x68:  jmp    086091fc <+0x7e>
086091e8 +0x6a:  mov    0x10(%ebp),%edx
086091eb +0x6d:  mov    0x8(%ebp),%eax
086091ee +0x70:  add    $0xe8,%edx
086091f4 +0x76:  movzbl 0xe(%eax,%edx,2),%eax
086091f9 +0x7b:  movzbl %al,%eax
086091fc +0x7e:  leave
086091fd +0x7f:  ret
```

## 反编译 C

```c
// SkillSlot::getSkillSlotIndex @ 0x860917e

/* SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const */

uint __thiscall SkillSlot::getSkillSlotIndex(SkillSlot *this,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 < 2) {
    if ((param_2 == -1) || (param_2 == 0)) {
      uVar1 = (uint)(byte)this[(param_3 + 0x20) * 2 + 6];
    }
    else {
      uVar1 = (uint)(byte)this[(param_3 + 0xe8) * 2 + 0xe];
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::getSkillSlotIndex(ENUM_SKILL_TREE_KIND, int) const",0xd1f,
               "SkillSlot::getSkillSlotIndex kind(%d) error",param_2);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
