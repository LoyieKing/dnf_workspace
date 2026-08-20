# get_cur_remain_sp

`_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND`

`SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08606812` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08606812  _ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND
#           SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
# range [0x08606812, 0x08606873]
08606812 +0x00:  push   %ebp
08606813 +0x01:  mov    %esp,%ebp
08606815 +0x03:  mov    0x8(%ebp),%eax
08606818 +0x06:  mov    (%eax),%eax
0860681a +0x08:  test   %eax,%eax
0860681c +0x0a:  jne    08606825 <+0x13>
0860681e +0x0c:  mov    $0x0,%eax
08606823 +0x11:  jmp    08606871 <+0x5f>
08606825 +0x13:  mov    0xc(%ebp),%eax
08606828 +0x16:  cmp    $0xffffffff,%eax
0860682b +0x19:  je     08606834 <+0x22>
0860682d +0x1b:  mov    0xc(%ebp),%eax
08606830 +0x1e:  test   %eax,%eax
08606832 +0x20:  jne    0860683c <+0x2a>
08606834 +0x22:  mov    0x8(%ebp),%eax
08606837 +0x25:  add    $0x4,%eax
0860683a +0x28:  jmp    08606871 <+0x5f>
0860683c +0x2a:  mov    0xc(%ebp),%eax
0860683f +0x2d:  cmp    $0x1,%eax
08606842 +0x30:  jne    0860684c <+0x3a>
08606844 +0x32:  mov    0x8(%ebp),%eax
08606847 +0x35:  add    $0xc,%eax
0860684a +0x38:  jmp    08606871 <+0x5f>
0860684c +0x3a:  mov    0xc(%ebp),%eax
0860684f +0x3d:  cmp    $0x2,%eax
08606852 +0x40:  jne    0860685c <+0x4a>
08606854 +0x42:  mov    0x8(%ebp),%eax
08606857 +0x45:  add    $0x14,%eax
0860685a +0x48:  jmp    08606871 <+0x5f>
0860685c +0x4a:  mov    0xc(%ebp),%eax
0860685f +0x4d:  cmp    $0x3,%eax
08606862 +0x50:  jne    0860686c <+0x5a>
08606864 +0x52:  mov    0x8(%ebp),%eax
08606867 +0x55:  add    $0x18,%eax
0860686a +0x58:  jmp    08606871 <+0x5f>
0860686c +0x5a:  mov    $0x0,%eax
08606871 +0x5f:  pop    %ebp
08606872 +0x60:  ret
08606873 +0x61:  nop
```

## 反编译 C

```c
// SkillSlot::get_cur_remain_sp @ 0x8606812

/* SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const */

SkillSlot * __thiscall SkillSlot::get_cur_remain_sp(SkillSlot *this,int param_2)

{
  if (*(int *)this == 0) {
    this = (SkillSlot *)0x0;
  }
  else if ((param_2 == -1) || (param_2 == 0)) {
    this = this + 4;
  }
  else if (param_2 == 1) {
    this = this + 0xc;
  }
  else if (param_2 == 2) {
    this = this + 0x14;
  }
  else if (param_2 == 3) {
    this = this + 0x18;
  }
  else {
    this = (SkillSlot *)0x0;
  }
  return this;
}
```
