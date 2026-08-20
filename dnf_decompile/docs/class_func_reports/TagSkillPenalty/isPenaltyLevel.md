# isPenaltyLevel

`_ZN15TagSkillPenalty14isPenaltyLevelEi`

`TagSkillPenalty::isPenaltyLevel(int)`

| 类 | 地址 |
|---|---|
| `TagSkillPenalty` | `0x08a9d7a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d7a6  _ZN15TagSkillPenalty14isPenaltyLevelEi
#           TagSkillPenalty::isPenaltyLevel(int)
# range [0x08a9d7a6, 0x08a9d7cb]
08a9d7a6 +0x00:  push   %ebp
08a9d7a7 +0x01:  mov    %esp,%ebp
08a9d7a9 +0x03:  mov    0x8(%ebp),%eax
08a9d7ac +0x06:  mov    (%eax),%eax
08a9d7ae +0x08:  cmp    0xc(%ebp),%eax
08a9d7b1 +0x0b:  jg     08a9d7c5 <+0x1f>
08a9d7b3 +0x0d:  mov    0x8(%ebp),%eax
08a9d7b6 +0x10:  mov    0x4(%eax),%eax
08a9d7b9 +0x13:  cmp    0xc(%ebp),%eax
08a9d7bc +0x16:  jl     08a9d7c5 <+0x1f>
08a9d7be +0x18:  mov    $0x1,%eax
08a9d7c3 +0x1d:  jmp    08a9d7ca <+0x24>
08a9d7c5 +0x1f:  mov    $0x0,%eax
08a9d7ca +0x24:  pop    %ebp
08a9d7cb +0x25:  ret
```

## 反编译 C

```c
// TagSkillPenalty::isPenaltyLevel @ 0x8a9d7a6

/* TagSkillPenalty::isPenaltyLevel(int) */

undefined4 __thiscall TagSkillPenalty::isPenaltyLevel(TagSkillPenalty *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < *(int *)this) || (*(int *)(this + 4) < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
