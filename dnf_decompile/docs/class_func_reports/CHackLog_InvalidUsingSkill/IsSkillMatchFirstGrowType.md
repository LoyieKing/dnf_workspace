# IsSkillMatchFirstGrowType

`_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc`

`CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill const*, char)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidUsingSkill` | `0x082865ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082865ca  _ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc
#           CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill const*, char)
# range [0x082865ca, 0x08286611]
082865ca +0x00:  push   %ebp
082865cb +0x01:  mov    %esp,%ebp
082865cd +0x03:  sub    $0x14,%esp
082865d0 +0x06:  mov    0xc(%ebp),%eax
082865d3 +0x09:  mov    %al,-0x14(%ebp)
082865d6 +0x0c:  movl   $0x0,-0x4(%ebp)
082865dd +0x13:  jmp    082865ff <+0x35>
082865df +0x15:  mov    -0x4(%ebp),%edx
082865e2 +0x18:  mov    0x8(%ebp),%eax
082865e5 +0x1b:  add    $0x30,%edx
082865e8 +0x1e:  mov    0xc(%eax,%edx,4),%edx
082865ec +0x22:  movsbl -0x14(%ebp),%eax
082865f0 +0x26:  cmp    %eax,%edx
082865f2 +0x28:  jne    082865fb <+0x31>
082865f4 +0x2a:  mov    $0x1,%eax
082865f9 +0x2f:  jmp    0828660f <+0x45>
082865fb +0x31:  addl   $0x1,-0x4(%ebp)
082865ff +0x35:  cmpl   $0x5,-0x4(%ebp)
08286603 +0x39:  setle  %al
08286606 +0x3c:  test   %al,%al
08286608 +0x3e:  jne    082865df <+0x15>
0828660a +0x40:  mov    $0x0,%eax
0828660f +0x45:  leave
08286610 +0x46:  ret
08286611 +0x47:  nop
```

## 反编译 C

```c
// CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType @ 0x82865ca

/* CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill const*, char) */

undefined4 CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill *param_1,char param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (5 < local_8) {
      return 0;
    }
    if (*(int *)(param_1 + (local_8 + 0x30) * 4 + 0xc) == (int)param_2) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
