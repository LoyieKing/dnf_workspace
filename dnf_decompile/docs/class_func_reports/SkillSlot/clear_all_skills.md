# clear_all_skills

`_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND`

`SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604d90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604d90  _ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND
#           SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
# range [0x08604d90, 0x08604e07]
08604d90 +0x00:  push   %ebp
08604d91 +0x01:  mov    %esp,%ebp
08604d93 +0x03:  sub    $0x28,%esp
08604d96 +0x06:  mov    0xc(%ebp),%eax
08604d99 +0x09:  mov    %eax,0x4(%esp)
08604d9d +0x0d:  mov    0x8(%ebp),%eax
08604da0 +0x10:  mov    %eax,(%esp)
08604da3 +0x13:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08604da8 +0x18:  mov    %eax,-0x10(%ebp)
08604dab +0x1b:  mov    0xc(%ebp),%eax
08604dae +0x1e:  mov    %eax,0x4(%esp)
08604db2 +0x22:  mov    0x8(%ebp),%eax
08604db5 +0x25:  mov    %eax,(%esp)
08604db8 +0x28:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08604dbd +0x2d:  mov    %eax,-0xc(%ebp)
08604dc0 +0x30:  cmpl   $0x0,-0x10(%ebp)
08604dc4 +0x34:  je     08604dcc <+0x3c>
08604dc6 +0x36:  cmpl   $0x0,-0xc(%ebp)
08604dca +0x3a:  jne    08604dd3 <+0x43>
08604dcc +0x3c:  mov    $0x0,%eax
08604dd1 +0x41:  jmp    08604e05 <+0x75>
08604dd3 +0x43:  mov    0x8(%ebp),%eax
08604dd6 +0x46:  movl   $0x0,(%eax)
08604ddc +0x4c:  mov    -0xc(%ebp),%eax
08604ddf +0x4f:  movl   $0x0,(%eax)
08604de5 +0x55:  movl   $0x198,0x8(%esp)
08604ded +0x5d:  movl   $0x0,0x4(%esp)
08604df5 +0x65:  mov    -0x10(%ebp),%eax
08604df8 +0x68:  mov    %eax,(%esp)
08604dfb +0x6b:  call   0807dcc0 <_init+0x5b8>
08604e00 +0x70:  mov    $0x1,%eax
08604e05 +0x75:  leave
08604e06 +0x76:  ret
08604e07 +0x77:  nop
```

## 反编译 C

```c
// SkillSlot::clear_all_skills @ 0x8604d90

/* SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::clear_all_skills(SkillSlot *this,undefined4 param_2)

{
  void *__s;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __s = (void *)get_skillslot_buf(this,param_2);
  puVar1 = (undefined4 *)get_cur_remain_sp(this,param_2);
  if ((__s == (void *)0x0) || (puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)this = 0;
    *puVar1 = 0;
    memset(__s,0,0x198);
    uVar2 = 1;
  }
  return uVar2;
}
```
