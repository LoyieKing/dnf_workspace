# TagSkillPenalty

`_ZN15TagSkillPenaltyC1Ev`

`TagSkillPenalty::TagSkillPenalty()`

| 类 | 地址 |
|---|---|
| `TagSkillPenalty` | `0x08a9d768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d768  _ZN15TagSkillPenaltyC1Ev
#           TagSkillPenalty::TagSkillPenalty()
# range [0x08a9d768, 0x08a9d77b]
08a9d768 +0x00:  push   %ebp
08a9d769 +0x01:  mov    %esp,%ebp
08a9d76b +0x03:  sub    $0x18,%esp
08a9d76e +0x06:  mov    0x8(%ebp),%eax
08a9d771 +0x09:  mov    %eax,(%esp)
08a9d774 +0x0c:  call   08a9d77c <_ZN15TagSkillPenalty5clearEv>  ; TagSkillPenalty::clear()
08a9d779 +0x11:  leave
08a9d77a +0x12:  ret
08a9d77b +0x13:  nop
```

## 反编译 C

```c
// TagSkillPenalty::TagSkillPenalty @ 0x8a9d768

/* TagSkillPenalty::TagSkillPenalty() */

void __thiscall TagSkillPenalty::TagSkillPenalty(TagSkillPenalty *this)

{
  clear(this);
  return;
}
```
