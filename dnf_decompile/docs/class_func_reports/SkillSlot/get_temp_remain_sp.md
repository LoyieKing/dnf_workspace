# get_temp_remain_sp

`_ZN9SkillSlot18get_temp_remain_spEv`

`SkillSlot::get_temp_remain_sp()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08607efe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08607efe  _ZN9SkillSlot18get_temp_remain_spEv
#           SkillSlot::get_temp_remain_sp()
# range [0x08607efe, 0x08607f1b]
08607efe +0x00:  push   %ebp
08607eff +0x01:  mov    %esp,%ebp
08607f01 +0x03:  mov    0x8(%ebp),%eax
08607f04 +0x06:  mov    (%eax),%eax
08607f06 +0x08:  test   %eax,%eax
08607f08 +0x0a:  jne    08607f11 <+0x13>
08607f0a +0x0c:  mov    $0x0,%eax
08607f0f +0x11:  jmp    08607f19 <+0x1b>
08607f11 +0x13:  mov    0x8(%ebp),%eax
08607f14 +0x16:  add    $0x510,%eax
08607f19 +0x1b:  pop    %ebp
08607f1a +0x1c:  ret
08607f1b +0x1d:  nop
```

## 反编译 C

```c
// SkillSlot::get_temp_remain_sp @ 0x8607efe

/* SkillSlot::get_temp_remain_sp() */

SkillSlot * __thiscall SkillSlot::get_temp_remain_sp(SkillSlot *this)

{
  SkillSlot *pSVar1;
  
  if (*(int *)this == 0) {
    pSVar1 = (SkillSlot *)0x0;
  }
  else {
    pSVar1 = this + 0x510;
  }
  return pSVar1;
}
```
