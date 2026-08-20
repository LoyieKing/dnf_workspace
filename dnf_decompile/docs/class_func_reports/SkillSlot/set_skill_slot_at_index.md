# set_skill_slot_at_index

`_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND`

`SkillSlot::set_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08603420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603420  _ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND
#           SkillSlot::set_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND)
# range [0x08603420, 0x08603489]
08603420 +0x00:  push   %ebp
08603421 +0x01:  mov    %esp,%ebp
08603423 +0x03:  sub    $0x18,%esp
08603426 +0x06:  mov    0x10(%ebp),%eax
08603429 +0x09:  cmp    $0x198,%eax
0860342e +0x0e:  jbe    08603437 <+0x17>
08603430 +0x10:  movl   $0x198,0x10(%ebp)
08603437 +0x17:  mov    0x14(%ebp),%eax
0860343a +0x1a:  cmp    $0xffffffff,%eax
0860343d +0x1d:  jl     08603487 <+0x67>
0860343f +0x1f:  test   %eax,%eax
08603441 +0x21:  jle    0860344a <+0x2a>
08603443 +0x23:  cmp    $0x1,%eax
08603446 +0x26:  je     08603468 <+0x48>
08603448 +0x28:  jmp    08603487 <+0x67>
0860344a +0x2a:  mov    0x10(%ebp),%eax
0860344d +0x2d:  mov    0x8(%ebp),%edx
08603450 +0x30:  add    $0x46,%edx
08603453 +0x33:  mov    %eax,0x8(%esp)
08603457 +0x37:  mov    0xc(%ebp),%eax
0860345a +0x3a:  mov    %eax,0x4(%esp)
0860345e +0x3e:  mov    %edx,(%esp)
08603461 +0x41:  call   0807d8a0 <_init+0x198>
08603466 +0x46:  jmp    08603487 <+0x67>
08603468 +0x48:  mov    0x10(%ebp),%eax
0860346b +0x4b:  mov    0x8(%ebp),%edx
0860346e +0x4e:  add    $0x1de,%edx
08603474 +0x54:  mov    %eax,0x8(%esp)
08603478 +0x58:  mov    0xc(%ebp),%eax
0860347b +0x5b:  mov    %eax,0x4(%esp)
0860347f +0x5f:  mov    %edx,(%esp)
08603482 +0x62:  call   0807d8a0 <_init+0x198>
08603487 +0x67:  leave
08603488 +0x68:  ret
08603489 +0x69:  nop
```

## 反编译 C

```c
// SkillSlot::set_skill_slot_at_index @ 0x8603420

/* SkillSlot::set_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND) */

void __thiscall
SkillSlot::set_skill_slot_at_index(SkillSlot *this,void *param_1,uint param_2,int param_4)

{
  if (0x198 < param_2) {
    param_2 = 0x198;
  }
  if (-2 < param_4) {
    if (param_4 < 1) {
      memcpy(this + 0x46,param_1,param_2);
    }
    else if (param_4 == 1) {
      memcpy(this + 0x1de,param_1,param_2);
    }
  }
  return;
}
```
