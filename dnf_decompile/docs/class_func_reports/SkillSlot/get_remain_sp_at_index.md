# get_remain_sp_at_index

`_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND`

`SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08603528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603528  _ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND
#           SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
# range [0x08603528, 0x0860358f]
08603528 +0x00:  push   %ebp
08603529 +0x01:  mov    %esp,%ebp
0860352b +0x03:  sub    $0x28,%esp
0860352e +0x06:  mov    0xc(%ebp),%eax
08603531 +0x09:  cmp    $0xffffffff,%eax
08603534 +0x0c:  je     0860353d <+0x15>
08603536 +0x0e:  mov    0xc(%ebp),%eax
08603539 +0x11:  test   %eax,%eax
0860353b +0x13:  jne    08603545 <+0x1d>
0860353d +0x15:  mov    0x8(%ebp),%eax
08603540 +0x18:  mov    0x4(%eax),%eax
08603543 +0x1b:  jmp    0860358d <+0x65>
08603545 +0x1d:  mov    0xc(%ebp),%eax
08603548 +0x20:  cmp    $0x1,%eax
0860354b +0x23:  jne    08603555 <+0x2d>
0860354d +0x25:  mov    0x8(%ebp),%eax
08603550 +0x28:  mov    0xc(%eax),%eax
08603553 +0x2b:  jmp    0860358d <+0x65>
08603555 +0x2d:  mov    0xc(%ebp),%eax
08603558 +0x30:  mov    %eax,0x14(%esp)
0860355c +0x34:  movl   $"Wrong Skill Tree Kind : %d",0x10(%esp)
08603564 +0x3c:  movl   $0x68,0xc(%esp)
0860356c +0x44:  movl   $&_ZZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08603574 +0x4c:  movl   $"skill_slot.cpp",0x4(%esp)
0860357c +0x54:  movl   $0x1,(%esp)
08603583 +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08603588 +0x60:  mov    $0x0,%eax
0860358d +0x65:  leave
0860358e +0x66:  ret
0860358f +0x67:  nop
```

## 反编译 C

```c
// SkillSlot::get_remain_sp_at_index @ 0x8603528

/* SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const */

undefined4 __thiscall SkillSlot::get_remain_sp_at_index(SkillSlot *this,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == -1) || (param_2 == 0)) {
    uVar1 = *(undefined4 *)(this + 4);
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const",0x68,
               "Wrong Skill Tree Kind : %d",param_2);
    uVar1 = 0;
  }
  return uVar1;
}
```
