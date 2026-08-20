# clear_all_skills_both

`_ZN9SkillSlot21clear_all_skills_bothEv`

`SkillSlot::clear_all_skills_both()`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604e08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604e08  _ZN9SkillSlot21clear_all_skills_bothEv
#           SkillSlot::clear_all_skills_both()
# range [0x08604e08, 0x08604e77]
08604e08 +0x00:  push   %ebp
08604e09 +0x01:  mov    %esp,%ebp
08604e0b +0x03:  sub    $0x18,%esp
08604e0e +0x06:  mov    0x8(%ebp),%eax
08604e11 +0x09:  movl   $0x0,(%eax)
08604e17 +0x0f:  mov    0x8(%ebp),%eax
08604e1a +0x12:  movl   $0x0,0x4(%eax)
08604e21 +0x19:  mov    0x8(%ebp),%eax
08604e24 +0x1c:  add    $0x46,%eax
08604e27 +0x1f:  movl   $0x198,0x8(%esp)
08604e2f +0x27:  movl   $0x0,0x4(%esp)
08604e37 +0x2f:  mov    %eax,(%esp)
08604e3a +0x32:  call   0807dcc0 <_init+0x5b8>
08604e3f +0x37:  mov    0x8(%ebp),%eax
08604e42 +0x3a:  movl   $0x0,0xc(%eax)
08604e49 +0x41:  mov    0x8(%ebp),%eax
08604e4c +0x44:  add    $0x1de,%eax
08604e51 +0x49:  movl   $0x198,0x8(%esp)
08604e59 +0x51:  movl   $0x0,0x4(%esp)
08604e61 +0x59:  mov    %eax,(%esp)
08604e64 +0x5c:  call   0807dcc0 <_init+0x5b8>
08604e69 +0x61:  mov    0x8(%ebp),%eax
08604e6c +0x64:  movb   $0x0,0x8(%eax)
08604e70 +0x68:  mov    $0x1,%eax
08604e75 +0x6d:  leave
08604e76 +0x6e:  ret
08604e77 +0x6f:  nop
```

## 反编译 C

```c
// SkillSlot::clear_all_skills_both @ 0x8604e08

/* SkillSlot::clear_all_skills_both() */

undefined4 __thiscall SkillSlot::clear_all_skills_both(SkillSlot *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  memset(this + 0x46,0,0x198);
  *(undefined4 *)(this + 0xc) = 0;
  memset(this + 0x1de,0,0x198);
  this[8] = (SkillSlot)0x0;
  return 1;
}
```
