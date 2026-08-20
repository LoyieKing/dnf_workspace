# get_skill_slot_at_index

`_ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND`

`SkillSlot::get_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860348a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860348a  _ZNK9SkillSlot23get_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND
#           SkillSlot::get_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND) const
# range [0x0860348a, 0x086034f7]
0860348a +0x00:  push   %ebp
0860348b +0x01:  mov    %esp,%ebp
0860348d +0x03:  sub    $0x18,%esp
08603490 +0x06:  mov    0x10(%ebp),%eax
08603493 +0x09:  cmp    $0x198,%eax
08603498 +0x0e:  jbe    086034a1 <+0x17>
0860349a +0x10:  movl   $0x198,0x10(%ebp)
086034a1 +0x17:  mov    0x14(%ebp),%eax
086034a4 +0x1a:  cmp    $0xffffffff,%eax
086034a7 +0x1d:  je     086034b0 <+0x26>
086034a9 +0x1f:  mov    0x14(%ebp),%eax
086034ac +0x22:  test   %eax,%eax
086034ae +0x24:  jne    086034ce <+0x44>
086034b0 +0x26:  mov    0x10(%ebp),%eax
086034b3 +0x29:  mov    0x8(%ebp),%edx
086034b6 +0x2c:  add    $0x46,%edx
086034b9 +0x2f:  mov    %eax,0x8(%esp)
086034bd +0x33:  mov    %edx,0x4(%esp)
086034c1 +0x37:  mov    0xc(%ebp),%eax
086034c4 +0x3a:  mov    %eax,(%esp)
086034c7 +0x3d:  call   0807d8a0 <_init+0x198>
086034cc +0x42:  jmp    086034f5 <+0x6b>
086034ce +0x44:  mov    0x14(%ebp),%eax
086034d1 +0x47:  cmp    $0x1,%eax
086034d4 +0x4a:  jne    086034f5 <+0x6b>
086034d6 +0x4c:  mov    0x10(%ebp),%eax
086034d9 +0x4f:  mov    0x8(%ebp),%edx
086034dc +0x52:  add    $0x1de,%edx
086034e2 +0x58:  mov    %eax,0x8(%esp)
086034e6 +0x5c:  mov    %edx,0x4(%esp)
086034ea +0x60:  mov    0xc(%ebp),%eax
086034ed +0x63:  mov    %eax,(%esp)
086034f0 +0x66:  call   0807d8a0 <_init+0x198>
086034f5 +0x6b:  leave
086034f6 +0x6c:  ret
086034f7 +0x6d:  nop
```

## 反编译 C

```c
// SkillSlot::get_skill_slot_at_index @ 0x860348a

/* SkillSlot::get_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND) const */

void __thiscall
SkillSlot::get_skill_slot_at_index(SkillSlot *this,void *param_1,uint param_2,int param_4)

{
  if (0x198 < param_2) {
    param_2 = 0x198;
  }
  if ((param_4 == -1) || (param_4 == 0)) {
    memcpy(param_1,this + 0x46,param_2);
  }
  else if (param_4 == 1) {
    memcpy(param_1,this + 0x1de,param_2);
  }
  return;
}
```
