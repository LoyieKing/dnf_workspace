# backupSkill

`_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND`

`SkillSlot::backupSkill(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08607f58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08607f58  _ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND
#           SkillSlot::backupSkill(ENUM_SKILL_TREE_KIND)
# range [0x08607f58, 0x08608013]
08607f58 +0x00:  push   %ebp
08607f59 +0x01:  mov    %esp,%ebp
08607f5b +0x03:  sub    $0x28,%esp
08607f5e +0x06:  movl   $0x198,-0xc(%ebp)
08607f65 +0x0d:  mov    0xc(%ebp),%eax
08607f68 +0x10:  cmp    $0xffffffff,%eax
08607f6b +0x13:  je     08607f74 <+0x1c>
08607f6d +0x15:  mov    0xc(%ebp),%eax
08607f70 +0x18:  test   %eax,%eax
08607f72 +0x1a:  jne    08607fbb <+0x63>
08607f74 +0x1c:  mov    -0xc(%ebp),%eax
08607f77 +0x1f:  mov    0x8(%ebp),%edx
08607f7a +0x22:  lea    0x46(%edx),%ecx
08607f7d +0x25:  mov    0x8(%ebp),%edx
08607f80 +0x28:  add    $0x376,%edx
08607f86 +0x2e:  mov    %eax,0x8(%esp)
08607f8a +0x32:  mov    %ecx,0x4(%esp)
08607f8e +0x36:  mov    %edx,(%esp)
08607f91 +0x39:  call   0807d8a0 <_init+0x198>
08607f96 +0x3e:  mov    0x8(%ebp),%eax
08607f99 +0x41:  mov    0x4(%eax),%edx
08607f9c +0x44:  mov    0x8(%ebp),%eax
08607f9f +0x47:  mov    %edx,0x510(%eax)
08607fa5 +0x4d:  mov    0x8(%ebp),%eax
08607fa8 +0x50:  mov    0x14(%eax),%edx
08607fab +0x53:  mov    0x8(%ebp),%eax
08607fae +0x56:  mov    %edx,0x514(%eax)
08607fb4 +0x5c:  mov    $0x1,%eax
08607fb9 +0x61:  jmp    08608012 <+0xba>
08607fbb +0x63:  mov    0xc(%ebp),%eax
08607fbe +0x66:  cmp    $0x1,%eax
08607fc1 +0x69:  jne    0860800d <+0xb5>
08607fc3 +0x6b:  mov    -0xc(%ebp),%eax
08607fc6 +0x6e:  mov    0x8(%ebp),%edx
08607fc9 +0x71:  lea    0x1de(%edx),%ecx
08607fcf +0x77:  mov    0x8(%ebp),%edx
08607fd2 +0x7a:  add    $0x376,%edx
08607fd8 +0x80:  mov    %eax,0x8(%esp)
08607fdc +0x84:  mov    %ecx,0x4(%esp)
08607fe0 +0x88:  mov    %edx,(%esp)
08607fe3 +0x8b:  call   0807d8a0 <_init+0x198>
08607fe8 +0x90:  mov    0x8(%ebp),%eax
08607feb +0x93:  mov    0xc(%eax),%edx
08607fee +0x96:  mov    0x8(%ebp),%eax
08607ff1 +0x99:  mov    %edx,0x510(%eax)
08607ff7 +0x9f:  mov    0x8(%ebp),%eax
08607ffa +0xa2:  mov    0x18(%eax),%edx
08607ffd +0xa5:  mov    0x8(%ebp),%eax
08608000 +0xa8:  mov    %edx,0x514(%eax)
08608006 +0xae:  mov    $0x1,%eax
0860800b +0xb3:  jmp    08608012 <+0xba>
0860800d +0xb5:  mov    $0x0,%eax
08608012 +0xba:  leave
08608013 +0xbb:  ret
```

## 反编译 C

```c
// SkillSlot::backupSkill @ 0x8607f58

/* SkillSlot::backupSkill(ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::backupSkill(SkillSlot *this,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == -1) || (param_2 == 0)) {
    memcpy(this + 0x376,this + 0x46,0x198);
    *(undefined4 *)(this + 0x510) = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 0x514) = *(undefined4 *)(this + 0x14);
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    memcpy(this + 0x376,this + 0x1de,0x198);
    *(undefined4 *)(this + 0x510) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0x514) = *(undefined4 *)(this + 0x18);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
