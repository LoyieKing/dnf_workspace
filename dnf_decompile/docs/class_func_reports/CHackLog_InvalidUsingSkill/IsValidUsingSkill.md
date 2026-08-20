# IsValidUsingSkill

`_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO`

`CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidUsingSkill` | `0x082864fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082864fc  _ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO
#           CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*)
# range [0x082864fc, 0x082865c9]
082864fc +0x00:  push   %ebp
082864fd +0x01:  mov    %esp,%ebp
082864ff +0x03:  push   %esi
08286500 +0x04:  push   %ebx
08286501 +0x05:  sub    $0x20,%esp
08286504 +0x08:  mov    0x8(%ebp),%eax
08286507 +0x0b:  movzbl 0x4(%eax),%eax
0828650b +0x0f:  movzbl %al,%esi
0828650e +0x12:  mov    0x8(%ebp),%eax
08286511 +0x15:  mov    (%eax),%ebx
08286513 +0x17:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08286518 +0x1c:  mov    %esi,0x8(%esp)
0828651c +0x20:  mov    %ebx,0x4(%esp)
08286520 +0x24:  mov    %eax,(%esp)
08286523 +0x27:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08286528 +0x2c:  mov    %eax,-0xc(%ebp)
0828652b +0x2f:  cmpl   $0x0,-0xc(%ebp)
0828652f +0x33:  je     082865bd <+0xc1>
08286535 +0x39:  mov    0x8(%ebp),%eax
08286538 +0x3c:  movzbl 0x5(%eax),%eax
0828653c +0x40:  movsbl %al,%eax
0828653f +0x43:  mov    %eax,0x4(%esp)
08286543 +0x47:  mov    -0xc(%ebp),%eax
08286546 +0x4a:  mov    %eax,(%esp)
08286549 +0x4d:  call   082865ca <_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc>  ; CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill const*, char)
0828654e +0x52:  test   %al,%al
08286550 +0x54:  je     08286559 <+0x5d>
08286552 +0x56:  mov    $0x1,%eax
08286557 +0x5b:  jmp    082865c2 <+0xc6>
08286559 +0x5d:  mov    0x8(%ebp),%eax
0828655c +0x60:  movzbl 0x6(%eax),%eax
08286560 +0x64:  movsbl %al,%edx
08286563 +0x67:  mov    0x8(%ebp),%eax
08286566 +0x6a:  movzbl 0x5(%eax),%eax
0828656a +0x6e:  movsbl %al,%eax
0828656d +0x71:  mov    %edx,0x8(%esp)
08286571 +0x75:  mov    %eax,0x4(%esp)
08286575 +0x79:  mov    -0xc(%ebp),%eax
08286578 +0x7c:  mov    %eax,(%esp)
0828657b +0x7f:  call   08286612 <_ZN26CHackLog_InvalidUsingSkill26IsSkillMatchSecondGrowTypeEPK6CSkillcc>  ; CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType(CSkill const*, char, char)
08286580 +0x84:  test   %al,%al
08286582 +0x86:  je     0828658b <+0x8f>
08286584 +0x88:  mov    $0x1,%eax
08286589 +0x8d:  jmp    082865c2 <+0xc6>
0828658b +0x8f:  mov    0x8(%ebp),%eax
0828658e +0x92:  movzbl 0x6(%eax),%eax
08286592 +0x96:  movsbl %al,%edx
08286595 +0x99:  mov    0x8(%ebp),%eax
08286598 +0x9c:  movzbl 0x5(%eax),%eax
0828659c +0xa0:  movsbl %al,%eax
0828659f +0xa3:  mov    %edx,0x8(%esp)
082865a3 +0xa7:  mov    %eax,0x4(%esp)
082865a7 +0xab:  mov    -0xc(%ebp),%eax
082865aa +0xae:  mov    %eax,(%esp)
082865ad +0xb1:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
082865b2 +0xb6:  test   %al,%al
082865b4 +0xb8:  je     082865bd <+0xc1>
082865b6 +0xba:  mov    $0x1,%eax
082865bb +0xbf:  jmp    082865c2 <+0xc6>
082865bd +0xc1:  mov    $0x0,%eax
082865c2 +0xc6:  add    $0x20,%esp
082865c5 +0xc9:  pop    %ebx
082865c6 +0xca:  pop    %esi
082865c7 +0xcb:  pop    %ebp
082865c8 +0xcc:  ret
082865c9 +0xcd:  nop
```

## 反编译 C

```c
// CHackLog_InvalidUsingSkill::IsValidUsingSkill @ 0x82864fc

/* CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*) */

undefined4 CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  CSkill *this;
  
  iVar1 = *(int *)param_1;
  iVar3 = G_CDataManager();
  this = (CSkill *)CDataManager::find_skill(iVar3,iVar1);
  if (this != (CSkill *)0x0) {
    cVar2 = IsSkillMatchFirstGrowType(this,(char)param_1[5]);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = IsSkillMatchSecondGrowType(this,(char)param_1[5],(char)param_1[6]);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = CSkill::IsStealable(this,(int)(char)param_1[5],(int)(char)param_1[6]);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}
```
