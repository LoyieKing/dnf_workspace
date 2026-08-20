# SetTime

`_ZN13user_creature14COverSkillTime7SetTimeEv`

`user_creature::COverSkillTime::SetTime()`

| 类 | 地址 |
|---|---|
| `user_creature::COverSkillTime` | `0x0833d644` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d644  _ZN13user_creature14COverSkillTime7SetTimeEv
#           user_creature::COverSkillTime::SetTime()
# range [0x0833d644, 0x0833d65d]
0833d644 +0x00:  push   %ebp
0833d645 +0x01:  mov    %esp,%ebp
0833d647 +0x03:  sub    $0x18,%esp
0833d64a +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0833d651 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0833d656 +0x12:  mov    0x8(%ebp),%edx
0833d659 +0x15:  mov    %eax,(%edx)
0833d65b +0x17:  leave
0833d65c +0x18:  ret
0833d65d +0x19:  nop
```

## 反编译 C

```c
// user_creature::COverSkillTime::SetTime @ 0x833d644

/* user_creature::COverSkillTime::SetTime() */

void __thiscall user_creature::COverSkillTime::SetTime(COverSkillTime *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)this = uVar1;
  return;
}
```
