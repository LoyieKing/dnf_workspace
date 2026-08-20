# IsSkillMatchSecondGrowType

`_ZN26CHackLog_InvalidUsingSkill26IsSkillMatchSecondGrowTypeEPK6CSkillcc`

`CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType(CSkill const*, char, char)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidUsingSkill` | `0x08286612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286612  _ZN26CHackLog_InvalidUsingSkill26IsSkillMatchSecondGrowTypeEPK6CSkillcc
#           CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType(CSkill const*, char, char)
# range [0x08286612, 0x08286655]
08286612 +0x00:  push   %ebp
08286613 +0x01:  mov    %esp,%ebp
08286615 +0x03:  sub    $0x28,%esp
08286618 +0x06:  mov    0xc(%ebp),%edx
0828661b +0x09:  mov    0x10(%ebp),%eax
0828661e +0x0c:  mov    %dl,-0xc(%ebp)
08286621 +0x0f:  mov    %al,-0x10(%ebp)
08286624 +0x12:  movsbl -0x10(%ebp),%edx
08286628 +0x16:  movsbl -0xc(%ebp),%eax
0828662c +0x1a:  mov    %edx,0x8(%esp)
08286630 +0x1e:  mov    %eax,0x4(%esp)
08286634 +0x22:  mov    0x8(%ebp),%eax
08286637 +0x25:  mov    %eax,(%esp)
0828663a +0x28:  call   08350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>  ; CSkill::get_second_growtype_max_level(int, int) const
0828663f +0x2d:  test   %eax,%eax
08286641 +0x2f:  setg   %al
08286644 +0x32:  test   %al,%al
08286646 +0x34:  je     0828664f <+0x3d>
08286648 +0x36:  mov    $0x1,%eax
0828664d +0x3b:  jmp    08286654 <+0x42>
0828664f +0x3d:  mov    $0x0,%eax
08286654 +0x42:  leave
08286655 +0x43:  ret
```

## 反编译 C

```c
// CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType @ 0x8286612

/* CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType(CSkill const*, char, char) */

bool CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType
               (CSkill *param_1,char param_2,char param_3)

{
  int iVar1;
  
  iVar1 = CSkill::get_second_growtype_max_level(param_1,(int)param_2,(int)param_3);
  return 0 < iVar1;
}
```
