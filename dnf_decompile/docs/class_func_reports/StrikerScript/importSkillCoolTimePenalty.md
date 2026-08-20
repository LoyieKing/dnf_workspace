# importSkillCoolTimePenalty

`_ZN13StrikerScript26importSkillCoolTimePenaltyEv`

`StrikerScript::importSkillCoolTimePenalty()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e5fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e5fc  _ZN13StrikerScript26importSkillCoolTimePenaltyEv
#           StrikerScript::importSkillCoolTimePenalty()
# range [0x08a9e5fc, 0x08a9e627]
08a9e5fc +0x00:  push   %ebp
08a9e5fd +0x01:  mov    %esp,%ebp
08a9e5ff +0x03:  sub    $0x18,%esp
08a9e602 +0x06:  mov    0x8(%ebp),%eax
08a9e605 +0x09:  add    $0x58,%eax
08a9e608 +0x0c:  mov    %eax,(%esp)
08a9e60b +0x0f:  call   08a9f54e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x861>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x861
08a9e610 +0x14:  mov    0x8(%ebp),%eax
08a9e613 +0x17:  add    $0x58,%eax
08a9e616 +0x1a:  mov    %eax,0x4(%esp)
08a9e61a +0x1e:  mov    0x8(%ebp),%eax
08a9e61d +0x21:  mov    %eax,(%esp)
08a9e620 +0x24:  call   08a9e6cc <_ZN13StrikerScript16readSkillPenaltyERSt6vectorI15TagSkillPenaltySaIS1_EE>  ; StrikerScript::readSkillPenalty(std::vector<TagSkillPenalty, std::allocator<TagSkillPenalty> >&)
08a9e625 +0x29:  leave
08a9e626 +0x2a:  ret
08a9e627 +0x2b:  nop
```

## 反编译 C

```c
// StrikerScript::importSkillCoolTimePenalty @ 0x8a9e5fc

/* StrikerScript::importSkillCoolTimePenalty() */

void __thiscall StrikerScript::importSkillCoolTimePenalty(StrikerScript *this)

{
  std::vector<TagSkillPenalty,std::allocator<TagSkillPenalty>>::clear
            ((vector<TagSkillPenalty,std::allocator<TagSkillPenalty>> *)(this + 0x58));
  readSkillPenalty(this,(vector *)(this + 0x58));
  return;
}
```
