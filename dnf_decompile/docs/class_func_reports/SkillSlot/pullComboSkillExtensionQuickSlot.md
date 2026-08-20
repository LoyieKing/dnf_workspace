# pullComboSkillExtensionQuickSlot

`_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND`

`SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608da4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608da4  _ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND
#           SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND)
# range [0x08608da4, 0x08608ee7]
08608da4 +0x000:  push   %ebp
08608da5 +0x001:  mov    %esp,%ebp
08608da7 +0x003:  push   %ebx
08608da8 +0x004:  sub    $0x44,%esp
08608dab +0x007:  mov    0x8(%ebp),%eax
08608dae +0x00a:  mov    (%eax),%eax
08608db0 +0x00c:  test   %eax,%eax
08608db2 +0x00e:  je     08608edd <+0x139>
08608db8 +0x014:  mov    0xc(%ebp),%eax
08608dbb +0x017:  mov    %eax,0x4(%esp)
08608dbf +0x01b:  mov    0x8(%ebp),%eax
08608dc2 +0x01e:  mov    %eax,(%esp)
08608dc5 +0x021:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08608dca +0x026:  mov    %eax,-0x10(%ebp)
08608dcd +0x029:  cmpl   $0x0,-0x10(%ebp)
08608dd1 +0x02d:  je     08608ee0 <+0x13c>
08608dd7 +0x033:  movl   $0xc6,-0xc(%ebp)
08608dde +0x03a:  jmp    08608ec9 <+0x125>
08608de3 +0x03f:  mov    -0xc(%ebp),%eax
08608de6 +0x042:  add    %eax,%eax
08608de8 +0x044:  add    -0x10(%ebp),%eax
08608deb +0x047:  movzbl (%eax),%eax
08608dee +0x04a:  test   %al,%al
08608df0 +0x04c:  je     08608ec4 <+0x120>
08608df6 +0x052:  mov    -0xc(%ebp),%eax
08608df9 +0x055:  add    %eax,%eax
08608dfb +0x057:  add    -0x10(%ebp),%eax
08608dfe +0x05a:  movzbl 0x1(%eax),%eax
08608e02 +0x05e:  movsbl %al,%edx
08608e05 +0x061:  mov    -0xc(%ebp),%eax
08608e08 +0x064:  add    %eax,%eax
08608e0a +0x066:  add    -0x10(%ebp),%eax
08608e0d +0x069:  movzbl (%eax),%eax
08608e10 +0x06c:  movzbl %al,%eax
08608e13 +0x06f:  mov    0xc(%ebp),%ecx
08608e16 +0x072:  mov    %ecx,0xc(%esp)
08608e1a +0x076:  mov    %edx,0x8(%esp)
08608e1e +0x07a:  mov    %eax,0x4(%esp)
08608e22 +0x07e:  mov    0x8(%ebp),%eax
08608e25 +0x081:  mov    %eax,(%esp)
08608e28 +0x084:  call   08608ee8 <_ZN9SkillSlot32moveComboSkillExtensionQuickSlotEii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::moveComboSkillExtensionQuickSlot(int, int, ENUM_SKILL_TREE_KIND)
08608e2d +0x089:  test   %al,%al
08608e2f +0x08b:  je     08608e4a <+0xa6>
08608e31 +0x08d:  mov    -0xc(%ebp),%eax
08608e34 +0x090:  add    %eax,%eax
08608e36 +0x092:  add    -0x10(%ebp),%eax
08608e39 +0x095:  movb   $0x0,(%eax)
08608e3c +0x098:  mov    -0xc(%ebp),%eax
08608e3f +0x09b:  add    %eax,%eax
08608e41 +0x09d:  add    -0x10(%ebp),%eax
08608e44 +0x0a0:  movb   $0x0,0x1(%eax)
08608e48 +0x0a4:  jmp    08608ec5 <+0x121>
08608e4a +0x0a6:  mov    0x8(%ebp),%eax
08608e4d +0x0a9:  mov    (%eax),%eax
08608e4f +0x0ab:  movl   $0xffffffff,0x4(%esp)
08608e57 +0x0b3:  mov    %eax,(%esp)
08608e5a +0x0b6:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08608e5f +0x0bb:  mov    0xc(%ebp),%ebx
08608e62 +0x0be:  mov    -0xc(%ebp),%edx
08608e65 +0x0c1:  add    %edx,%edx
08608e67 +0x0c3:  add    -0x10(%ebp),%edx
08608e6a +0x0c6:  movzbl 0x1(%edx),%edx
08608e6e +0x0ca:  movsbl %dl,%ecx
08608e71 +0x0cd:  mov    -0xc(%ebp),%edx
08608e74 +0x0d0:  add    %edx,%edx
08608e76 +0x0d2:  add    -0x10(%ebp),%edx
08608e79 +0x0d5:  movzbl (%edx),%edx
08608e7c +0x0d8:  movzbl %dl,%edx
08608e7f +0x0db:  mov    %eax,0x24(%esp)
08608e83 +0x0df:  mov    %ebx,0x20(%esp)
08608e87 +0x0e3:  mov    %ecx,0x1c(%esp)
08608e8b +0x0e7:  mov    %edx,0x18(%esp)
08608e8f +0x0eb:  mov    -0xc(%ebp),%eax
08608e92 +0x0ee:  mov    %eax,0x14(%esp)
08608e96 +0x0f2:  movl   $"pullComboSkillExtensionQuickSlot Error slot(%d) index(%d) level(%d)kind(%d) characNo(%d)",0x10(%esp)
08608e9e +0x0fa:  movl   $0xcd7,0xc(%esp)
08608ea6 +0x102:  movl   $&_ZZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08608eae +0x10a:  movl   $"skill_slot.cpp",0x4(%esp)
08608eb6 +0x112:  movl   $0x1,(%esp)
08608ebd +0x119:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08608ec2 +0x11e:  jmp    08608ec5 <+0x121>
08608ec4 +0x120:  nop
08608ec5 +0x121:  addl   $0x1,-0xc(%ebp)
08608ec9 +0x125:  cmpl   $0xcb,-0xc(%ebp)
08608ed0 +0x12c:  setle  %al
08608ed3 +0x12f:  test   %al,%al
08608ed5 +0x131:  jne    08608de3 <+0x3f>
08608edb +0x137:  jmp    08608ee1 <+0x13d>
08608edd +0x139:  nop
08608ede +0x13a:  jmp    08608ee1 <+0x13d>
08608ee0 +0x13c:  nop
08608ee1 +0x13d:  add    $0x44,%esp
08608ee4 +0x140:  pop    %ebx
08608ee5 +0x141:  pop    %ebp
08608ee6 +0x142:  ret
08608ee7 +0x143:  nop
```

## 反编译 C

```c
// SkillSlot::pullComboSkillExtensionQuickSlot @ 0x8608da4

/* SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::pullComboSkillExtensionQuickSlot(SkillSlot *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((*(int *)this != 0) && (iVar2 = get_skillslot_buf(this,param_2), iVar2 != 0)) {
    for (local_10 = 0xc6; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (*(char *)(local_10 * 2 + iVar2) != '\0') {
        cVar1 = moveComboSkillExtensionQuickSlot
                          (this,*(undefined1 *)(local_10 * 2 + iVar2),
                           (int)*(char *)(local_10 * 2 + iVar2 + 1),param_2);
        if (cVar1 == '\0') {
          uVar3 = CUser::get_charac_no(*(CUser **)this,-1);
          LogManager::logFormat
                    (1,"skill_slot.cpp",
                     "void SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND)",0xcd7,
                     "pullComboSkillExtensionQuickSlot Error slot(%d) index(%d) level(%d)kind(%d) characNo(%d)"
                     ,local_10,(uint)*(byte *)(local_10 * 2 + iVar2),
                     (int)*(char *)(local_10 * 2 + iVar2 + 1),param_2,uVar3);
        }
        else {
          *(undefined1 *)(local_10 * 2 + iVar2) = 0;
          *(undefined1 *)(local_10 * 2 + iVar2 + 1) = 0;
        }
      }
    }
  }
  return;
}
```
