# get_temp_skill_slot

`_ZN9SkillSlot19get_temp_skill_slotEv`

`SkillSlot::get_temp_skill_slot()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08607f3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08607f3a  _ZN9SkillSlot19get_temp_skill_slotEv
#           SkillSlot::get_temp_skill_slot()
# range [0x08607f3a, 0x08607f57]
08607f3a +0x00:  push   %ebp
08607f3b +0x01:  mov    %esp,%ebp
08607f3d +0x03:  mov    0x8(%ebp),%eax
08607f40 +0x06:  mov    (%eax),%eax
08607f42 +0x08:  test   %eax,%eax
08607f44 +0x0a:  jne    08607f4d <+0x13>
08607f46 +0x0c:  mov    $0x0,%eax
08607f4b +0x11:  jmp    08607f55 <+0x1b>
08607f4d +0x13:  mov    0x8(%ebp),%eax
08607f50 +0x16:  add    $0x376,%eax
08607f55 +0x1b:  pop    %ebp
08607f56 +0x1c:  ret
08607f57 +0x1d:  nop
```

## 反编译 C

```c
// SkillSlot::get_temp_skill_slot @ 0x8607f3a

/* SkillSlot::get_temp_skill_slot() */

SkillSlot * __thiscall SkillSlot::get_temp_skill_slot(SkillSlot *this)

{
  SkillSlot *pSVar1;
  
  if (*(int *)this == 0) {
    pSVar1 = (SkillSlot *)0x0;
  }
  else {
    pSVar1 = this + 0x376;
  }
  return pSVar1;
}
```
