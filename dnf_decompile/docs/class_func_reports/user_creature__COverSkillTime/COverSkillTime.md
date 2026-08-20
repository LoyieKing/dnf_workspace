# COverSkillTime

`_ZN13user_creature14COverSkillTimeC1Ev`

`user_creature::COverSkillTime::COverSkillTime()`

| 类 | 地址 |
|---|---|
| `user_creature::COverSkillTime` | `0x0833d636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d636  _ZN13user_creature14COverSkillTimeC1Ev
#           user_creature::COverSkillTime::COverSkillTime()
# range [0x0833d636, 0x0833d643]
0833d636 +0x00:  push   %ebp
0833d637 +0x01:  mov    %esp,%ebp
0833d639 +0x03:  mov    0x8(%ebp),%eax
0833d63c +0x06:  movl   $0x0,(%eax)
0833d642 +0x0c:  pop    %ebp
0833d643 +0x0d:  ret
```

## 反编译 C

```c
// user_creature::COverSkillTime::COverSkillTime @ 0x833d636

/* user_creature::COverSkillTime::COverSkillTime() */

void __thiscall user_creature::COverSkillTime::COverSkillTime(COverSkillTime *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
