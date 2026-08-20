# get_skillslot_buf

`_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND`

`SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086067de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086067de  _ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND
#           SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
# range [0x086067de, 0x08606811]
086067de +0x00:  push   %ebp
086067df +0x01:  mov    %esp,%ebp
086067e1 +0x03:  mov    0xc(%ebp),%eax
086067e4 +0x06:  cmp    $0xffffffff,%eax
086067e7 +0x09:  je     086067f0 <+0x12>
086067e9 +0x0b:  mov    0xc(%ebp),%eax
086067ec +0x0e:  test   %eax,%eax
086067ee +0x10:  jne    086067f8 <+0x1a>
086067f0 +0x12:  mov    0x8(%ebp),%eax
086067f3 +0x15:  add    $0x46,%eax
086067f6 +0x18:  jmp    0860680f <+0x31>
086067f8 +0x1a:  mov    0xc(%ebp),%eax
086067fb +0x1d:  cmp    $0x1,%eax
086067fe +0x20:  jne    0860680a <+0x2c>
08606800 +0x22:  mov    0x8(%ebp),%eax
08606803 +0x25:  add    $0x1de,%eax
08606808 +0x2a:  jmp    0860680f <+0x31>
0860680a +0x2c:  mov    $0x0,%eax
0860680f +0x31:  pop    %ebp
08606810 +0x32:  ret
08606811 +0x33:  nop
```

## 反编译 C

```c
// SkillSlot::get_skillslot_buf @ 0x86067de

/* SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const */

SkillSlot * __thiscall SkillSlot::get_skillslot_buf(SkillSlot *this,int param_2)

{
  if ((param_2 == -1) || (param_2 == 0)) {
    this = this + 0x46;
  }
  else if (param_2 == 1) {
    this = this + 0x1de;
  }
  else {
    this = (SkillSlot *)0x0;
  }
  return this;
}
```
