# IsLoadStrikerSkill

`_ZN9SkillSlot18IsLoadStrikerSkillEv`

`SkillSlot::IsLoadStrikerSkill()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086086aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086086aa  _ZN9SkillSlot18IsLoadStrikerSkillEv
#           SkillSlot::IsLoadStrikerSkill()
# range [0x086086aa, 0x086086b5]
086086aa +0x00:  push   %ebp
086086ab +0x01:  mov    %esp,%ebp
086086ad +0x03:  mov    0x8(%ebp),%eax
086086b0 +0x06:  movzbl 0x8(%eax),%eax
086086b4 +0x0a:  pop    %ebp
086086b5 +0x0b:  ret
```

## 反编译 C

```c
// SkillSlot::IsLoadStrikerSkill @ 0x86086aa

/* SkillSlot::IsLoadStrikerSkill() */

SkillSlot __thiscall SkillSlot::IsLoadStrikerSkill(SkillSlot *this)

{
  return this[8];
}
```
