# execute

`_ZN11game_master22CResetTrainingQuestCmd7executeEv`

`game_master::CResetTrainingQuestCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CResetTrainingQuestCmd` | `0x084ab508` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab508  _ZN11game_master22CResetTrainingQuestCmd7executeEv
#           game_master::CResetTrainingQuestCmd::execute()
# range [0x084ab508, 0x084ab523]
084ab508 +0x00:  push   %ebp
084ab509 +0x01:  mov    %esp,%ebp
084ab50b +0x03:  sub    $0x18,%esp
084ab50e +0x06:  mov    0x8(%ebp),%eax
084ab511 +0x09:  mov    %eax,(%esp)
084ab514 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab519 +0x11:  mov    %eax,(%esp)
084ab51c +0x14:  call   08657662 <_ZN5CUser18ResetTrainingQuestEv>  ; CUser::ResetTrainingQuest()
084ab521 +0x19:  leave
084ab522 +0x1a:  ret
084ab523 +0x1b:  nop
```

## 反编译 C

```c
// game_master::CResetTrainingQuestCmd::execute @ 0x84ab508

/* game_master::CResetTrainingQuestCmd::execute() */

void __thiscall game_master::CResetTrainingQuestCmd::execute(CResetTrainingQuestCmd *this)

{
  CUser *this_00;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::ResetTrainingQuest(this_00);
  return;
}
```
