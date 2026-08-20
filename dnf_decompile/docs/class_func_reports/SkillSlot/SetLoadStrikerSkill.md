# SetLoadStrikerSkill

`_ZN9SkillSlot19SetLoadStrikerSkillEb`

`SkillSlot::SetLoadStrikerSkill(bool)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086086b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086086b6  _ZN9SkillSlot19SetLoadStrikerSkillEb
#           SkillSlot::SetLoadStrikerSkill(bool)
# range [0x086086b6, 0x086086cd]
086086b6 +0x00:  push   %ebp
086086b7 +0x01:  mov    %esp,%ebp
086086b9 +0x03:  sub    $0x4,%esp
086086bc +0x06:  mov    0xc(%ebp),%eax
086086bf +0x09:  mov    %al,-0x4(%ebp)
086086c2 +0x0c:  mov    0x8(%ebp),%eax
086086c5 +0x0f:  movzbl -0x4(%ebp),%edx
086086c9 +0x13:  mov    %dl,0x8(%eax)
086086cc +0x16:  leave
086086cd +0x17:  ret
```

## 反编译 C

```c
// SkillSlot::SetLoadStrikerSkill @ 0x86086b6

/* SkillSlot::SetLoadStrikerSkill(bool) */

void __thiscall SkillSlot::SetLoadStrikerSkill(SkillSlot *this,bool param_1)

{
  this[8] = (SkillSlot)param_1;
  return;
}
```
