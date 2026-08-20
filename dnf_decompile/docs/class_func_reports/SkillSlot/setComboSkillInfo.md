# setComboSkillInfo

`_ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE`

`SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int, std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int, std::allocator<int> > > > >&)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608c30  _ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE
#           SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int, std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int, std::allocator<int> > > > >&)
# range [0x08608c30, 0x08608c97]
08608c30 +0x00:  push   %ebp
08608c31 +0x01:  mov    %esp,%ebp
08608c33 +0x03:  sub    $0x28,%esp
08608c36 +0x06:  mov    0xc(%ebp),%eax
08608c39 +0x09:  test   %eax,%eax
08608c3b +0x0b:  je     08608c7a <+0x4a>
08608c3d +0x0d:  mov    0xc(%ebp),%eax
08608c40 +0x10:  cmp    $0x1,%eax
08608c43 +0x13:  je     08608c7a <+0x4a>
08608c45 +0x15:  mov    0xc(%ebp),%eax
08608c48 +0x18:  mov    %eax,0x14(%esp)
08608c4c +0x1c:  movl   $"SkillSlot::setComboSkillInfo kind(%d) error",0x10(%esp)
08608c54 +0x24:  movl   $0xc92,0xc(%esp)
08608c5c +0x2c:  movl   $&_ZZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEEE19__PRETTY_FUNCTION__,0x8(%esp)
08608c64 +0x34:  movl   $"skill_slot.cpp",0x4(%esp)
08608c6c +0x3c:  movl   $0x1,(%esp)
08608c73 +0x43:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08608c78 +0x48:  jmp    08608c96 <+0x66>
08608c7a +0x4a:  mov    0x8(%ebp),%eax
08608c7d +0x4d:  lea    0x1c(%eax),%edx
08608c80 +0x50:  mov    0x10(%ebp),%eax
08608c83 +0x53:  mov    %eax,0x8(%esp)
08608c87 +0x57:  mov    0xc(%ebp),%eax
08608c8a +0x5a:  mov    %eax,0x4(%esp)
08608c8e +0x5e:  mov    %edx,(%esp)
08608c91 +0x61:  call   080ea030 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE>  ; ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int, std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int, std::allocator<int> > > > >&)
08608c96 +0x66:  leave
08608c97 +0x67:  ret
```

## 反编译 C

```c
// SkillSlot::setComboSkillInfo @ 0x8608c30

/* SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int,
   std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int,
   std::allocator<int> > > > >&) */

void __thiscall SkillSlot::setComboSkillInfo(SkillSlot *this,int param_2,undefined4 param_3)

{
  if ((param_2 == 0) || (param_2 == 1)) {
    ComboSkill::setComboSkill((ComboSkill *)(this + 0x1c),param_2,param_3);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "void SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, ComboSkillMap&)",0xc92,
               "SkillSlot::setComboSkillInfo kind(%d) error",param_2);
  }
  return;
}
```
