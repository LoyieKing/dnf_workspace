# insert_skill

`_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi`

`SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604324` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604324  _ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi
#           SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int)
# range [0x08604324, 0x086043b3]
08604324 +0x00:  push   %ebp
08604325 +0x01:  mov    %esp,%ebp
08604327 +0x03:  sub    $0x48,%esp
0860432a +0x06:  mov    0x14(%ebp),%eax
0860432d +0x09:  mov    %al,-0x1c(%ebp)
08604330 +0x0c:  mov    0x8(%ebp),%eax
08604333 +0x0f:  mov    (%eax),%eax
08604335 +0x11:  test   %eax,%eax
08604337 +0x13:  jne    08604340 <+0x1c>
08604339 +0x15:  mov    $0xffffffff,%eax
0860433e +0x1a:  jmp    086043b2 <+0x8e>
08604340 +0x1c:  mov    0x18(%ebp),%eax
08604343 +0x1f:  mov    %eax,0x4(%esp)
08604347 +0x23:  mov    0x8(%ebp),%eax
0860434a +0x26:  mov    %eax,(%esp)
0860434d +0x29:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08604352 +0x2e:  mov    %eax,-0x10(%ebp)
08604355 +0x31:  cmpl   $0x0,-0x10(%ebp)
08604359 +0x35:  jne    08604362 <+0x3e>
0860435b +0x37:  mov    $0xffffffff,%eax
08604360 +0x3c:  jmp    086043b2 <+0x8e>
08604362 +0x3e:  movzbl -0x1c(%ebp),%eax
08604366 +0x42:  mov    %eax,0x10(%esp)
0860436a +0x46:  mov    0x18(%ebp),%eax
0860436d +0x49:  mov    %eax,0xc(%esp)
08604371 +0x4d:  mov    0x10(%ebp),%eax
08604374 +0x50:  mov    %eax,0x8(%esp)
08604378 +0x54:  movl   $0x0,0x4(%esp)
08604380 +0x5c:  mov    0x8(%ebp),%eax
08604383 +0x5f:  mov    %eax,(%esp)
08604386 +0x62:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
0860438b +0x67:  mov    %eax,-0xc(%ebp)
0860438e +0x6a:  cmpl   $0xffffffff,-0xc(%ebp)
08604392 +0x6e:  je     086043af <+0x8b>
08604394 +0x70:  mov    -0xc(%ebp),%eax
08604397 +0x73:  add    %eax,%eax
08604399 +0x75:  add    -0x10(%ebp),%eax
0860439c +0x78:  mov    0xc(%ebp),%edx
0860439f +0x7b:  mov    %dl,(%eax)
086043a1 +0x7d:  mov    -0xc(%ebp),%eax
086043a4 +0x80:  add    %eax,%eax
086043a6 +0x82:  add    -0x10(%ebp),%eax
086043a9 +0x85:  mov    0x1c(%ebp),%edx
086043ac +0x88:  mov    %dl,0x1(%eax)
086043af +0x8b:  mov    -0xc(%ebp),%eax
086043b2 +0x8e:  leave
086043b3 +0x8f:  ret
```

## 反编译 C

```c
// SkillSlot::insert_skill @ 0x8604324

/* SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int) */

int __thiscall
SkillSlot::insert_skill
          (SkillSlot *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,
          undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_5);
    if (iVar2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = get_skillslot_no(this,0,param_2,param_5,param_3);
      if (iVar1 != -1) {
        *(undefined1 *)(iVar1 * 2 + iVar2) = param_1;
        *(undefined1 *)(iVar1 * 2 + iVar2 + 1) = param_6;
      }
    }
  }
  return iVar1;
}
```
