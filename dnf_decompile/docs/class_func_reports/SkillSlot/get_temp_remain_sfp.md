# get_temp_remain_sfp

`_ZN9SkillSlot19get_temp_remain_sfpEv`

`SkillSlot::get_temp_remain_sfp()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08607f1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08607f1c  _ZN9SkillSlot19get_temp_remain_sfpEv
#           SkillSlot::get_temp_remain_sfp()
# range [0x08607f1c, 0x08607f39]
08607f1c +0x00:  push   %ebp
08607f1d +0x01:  mov    %esp,%ebp
08607f1f +0x03:  mov    0x8(%ebp),%eax
08607f22 +0x06:  mov    (%eax),%eax
08607f24 +0x08:  test   %eax,%eax
08607f26 +0x0a:  jne    08607f2f <+0x13>
08607f28 +0x0c:  mov    $0x0,%eax
08607f2d +0x11:  jmp    08607f37 <+0x1b>
08607f2f +0x13:  mov    0x8(%ebp),%eax
08607f32 +0x16:  add    $0x514,%eax
08607f37 +0x1b:  pop    %ebp
08607f38 +0x1c:  ret
08607f39 +0x1d:  nop
```

## 反编译 C

```c
// SkillSlot::get_temp_remain_sfp @ 0x8607f1c

/* SkillSlot::get_temp_remain_sfp() */

SkillSlot * __thiscall SkillSlot::get_temp_remain_sfp(SkillSlot *this)

{
  SkillSlot *pSVar1;
  
  if (*(int *)this == 0) {
    pSVar1 = (SkillSlot *)0x0;
  }
  else {
    pSVar1 = this + 0x514;
  }
  return pSVar1;
}
```
