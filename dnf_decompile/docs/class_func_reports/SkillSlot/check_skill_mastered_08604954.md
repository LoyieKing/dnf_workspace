# check_skill_mastered

`_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND`

`SkillSlot::check_skill_mastered(int, int, int, ENUM_SKILL_TREE_KIND) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604954  _ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND
#           SkillSlot::check_skill_mastered(int, int, int, ENUM_SKILL_TREE_KIND) const
# range [0x08604954, 0x086049fb]
08604954 +0x00:  push   %ebp
08604955 +0x01:  mov    %esp,%ebp
08604957 +0x03:  sub    $0x38,%esp
0860495a +0x06:  mov    0x8(%ebp),%eax
0860495d +0x09:  mov    (%eax),%eax
0860495f +0x0b:  test   %eax,%eax
08604961 +0x0d:  jne    0860496d <+0x19>
08604963 +0x0f:  mov    $0x0,%eax
08604968 +0x14:  jmp    086049fa <+0xa6>
0860496d +0x19:  mov    0x18(%ebp),%eax
08604970 +0x1c:  mov    %eax,0x4(%esp)
08604974 +0x20:  mov    0x8(%ebp),%eax
08604977 +0x23:  mov    %eax,(%esp)
0860497a +0x26:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
0860497f +0x2b:  mov    %eax,-0x10(%ebp)
08604982 +0x2e:  cmpl   $0x0,-0x10(%ebp)
08604986 +0x32:  jne    0860498f <+0x3b>
08604988 +0x34:  mov    $0x0,%eax
0860498d +0x39:  jmp    086049fa <+0xa6>
0860498f +0x3b:  movl   $0x1,0x10(%esp)
08604997 +0x43:  mov    0x18(%ebp),%eax
0860499a +0x46:  mov    %eax,0xc(%esp)
0860499e +0x4a:  mov    0x14(%ebp),%eax
086049a1 +0x4d:  mov    %eax,0x8(%esp)
086049a5 +0x51:  mov    0xc(%ebp),%eax
086049a8 +0x54:  mov    %eax,0x4(%esp)
086049ac +0x58:  mov    0x8(%ebp),%eax
086049af +0x5b:  mov    %eax,(%esp)
086049b2 +0x5e:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
086049b7 +0x63:  mov    %eax,-0xc(%ebp)
086049ba +0x66:  cmpl   $0x0,-0xc(%ebp)
086049be +0x6a:  jns    086049c7 <+0x73>
086049c0 +0x6c:  mov    $0x0,%eax
086049c5 +0x71:  jmp    086049fa <+0xa6>
086049c7 +0x73:  mov    -0xc(%ebp),%eax
086049ca +0x76:  add    %eax,%eax
086049cc +0x78:  add    -0x10(%ebp),%eax
086049cf +0x7b:  movzbl (%eax),%eax
086049d2 +0x7e:  movzbl %al,%eax
086049d5 +0x81:  cmp    0xc(%ebp),%eax
086049d8 +0x84:  jne    086049f5 <+0xa1>
086049da +0x86:  mov    -0xc(%ebp),%eax
086049dd +0x89:  add    %eax,%eax
086049df +0x8b:  add    -0x10(%ebp),%eax
086049e2 +0x8e:  movzbl 0x1(%eax),%eax
086049e6 +0x92:  movsbl %al,%eax
086049e9 +0x95:  cmp    0x10(%ebp),%eax
086049ec +0x98:  jl     086049f5 <+0xa1>
086049ee +0x9a:  mov    $0x1,%eax
086049f3 +0x9f:  jmp    086049fa <+0xa6>
086049f5 +0xa1:  mov    $0x0,%eax
086049fa +0xa6:  leave
086049fb +0xa7:  ret
```

## 反编译 C

```c
// SkillSlot::check_skill_mastered @ 0x8604954

/* SkillSlot::check_skill_mastered(int, int, int, ENUM_SKILL_TREE_KIND) const */

undefined4 __thiscall
SkillSlot::check_skill_mastered
          (SkillSlot *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_5);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = get_skillslot_no(this,param_1,param_3,param_5,1);
      if (iVar3 < 0) {
        uVar1 = 0;
      }
      else if ((*(byte *)(iVar3 * 2 + iVar2) == param_1) &&
              (param_2 <= *(char *)(iVar3 * 2 + iVar2 + 1))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
