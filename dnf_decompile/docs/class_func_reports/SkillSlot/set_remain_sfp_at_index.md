# set_remain_sfp_at_index

`_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND`

`SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08603590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603590  _ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND
#           SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
# range [0x08603590, 0x086035f1]
08603590 +0x00:  push   %ebp
08603591 +0x01:  mov    %esp,%ebp
08603593 +0x03:  sub    $0x28,%esp
08603596 +0x06:  mov    0x10(%ebp),%eax
08603599 +0x09:  cmp    $0x2,%eax
0860359c +0x0c:  jne    086035a9 <+0x19>
0860359e +0x0e:  mov    0x8(%ebp),%eax
086035a1 +0x11:  mov    0xc(%ebp),%edx
086035a4 +0x14:  mov    %edx,0x14(%eax)
086035a7 +0x17:  jmp    086035ef <+0x5f>
086035a9 +0x19:  mov    0x10(%ebp),%eax
086035ac +0x1c:  cmp    $0x3,%eax
086035af +0x1f:  jne    086035bc <+0x2c>
086035b1 +0x21:  mov    0x8(%ebp),%eax
086035b4 +0x24:  mov    0xc(%ebp),%edx
086035b7 +0x27:  mov    %edx,0x18(%eax)
086035ba +0x2a:  jmp    086035ef <+0x5f>
086035bc +0x2c:  mov    0x10(%ebp),%eax
086035bf +0x2f:  mov    %eax,0x14(%esp)
086035c3 +0x33:  movl   $"Wrong Skill Tree Kind : %d",0x10(%esp)
086035cb +0x3b:  movl   $0x75,0xc(%esp)
086035d3 +0x43:  movl   $&_ZZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
086035db +0x4b:  movl   $"skill_slot.cpp",0x4(%esp)
086035e3 +0x53:  movl   $0x1,(%esp)
086035ea +0x5a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086035ef +0x5f:  leave
086035f0 +0x60:  ret
086035f1 +0x61:  nop
```

## 反编译 C

```c
// SkillSlot::set_remain_sfp_at_index @ 0x8603590

/* SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::set_remain_sfp_at_index(SkillSlot *this,undefined4 param_1,int param_3)

{
  if (param_3 == 2) {
    *(undefined4 *)(this + 0x14) = param_1;
  }
  else if (param_3 == 3) {
    *(undefined4 *)(this + 0x18) = param_1;
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "void SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)",0x75,
               "Wrong Skill Tree Kind : %d",param_3);
  }
  return;
}
```
