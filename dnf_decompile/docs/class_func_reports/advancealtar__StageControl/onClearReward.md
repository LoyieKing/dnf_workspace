# onClearReward

`_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE`

`advancealtar::StageControl::onClearReward(advancealtar::StageEndType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x081305f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081305f6  _ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE
#           advancealtar::StageControl::onClearReward(advancealtar::StageEndType::T)
# range [0x081305f6, 0x08130643]
081305f6 +0x00:  push   %ebp
081305f7 +0x01:  mov    %esp,%ebp
081305f9 +0x03:  sub    $0x18,%esp
081305fc +0x06:  mov    0xc(%ebp),%eax
081305ff +0x09:  test   %eax,%eax
08130601 +0x0b:  js     0813063a <+0x44>
08130603 +0x0d:  cmp    $0x2,%eax
08130606 +0x10:  jle    0813063d <+0x47>
08130608 +0x12:  cmp    $0x3,%eax
0813060b +0x15:  jne    08130640 <+0x4a>
0813060d +0x17:  nop
0813060e +0x18:  mov    0x8(%ebp),%eax
08130611 +0x1b:  add    $0x4,%eax
08130614 +0x1e:  movl   $0x6,0x4(%esp)
0813061c +0x26:  mov    %eax,(%esp)
0813061f +0x29:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130624 +0x2e:  mov    0x8(%ebp),%eax
08130627 +0x31:  mov    (%eax),%eax
08130629 +0x33:  mov    0xc(%ebp),%edx
0813062c +0x36:  mov    %edx,0x4(%esp)
08130630 +0x3a:  mov    %eax,(%esp)
08130633 +0x3d:  call   0812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T)
08130638 +0x42:  jmp    08130641 <+0x4b>
0813063a +0x44:  nop
0813063b +0x45:  jmp    08130641 <+0x4b>
0813063d +0x47:  nop
0813063e +0x48:  jmp    08130641 <+0x4b>
08130640 +0x4a:  nop
08130641 +0x4b:  leave
08130642 +0x4c:  ret
08130643 +0x4d:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::onClearReward @ 0x81305f6

/* advancealtar::StageControl::onClearReward(advancealtar::StageEndType::T) */

void __thiscall advancealtar::StageControl::onClearReward(StageControl *this,int param_2)

{
  if (((-1 < param_2) && (2 < param_2)) && (param_2 == 3)) {
    ProcStage::setState((ProcStage *)(this + 4),6);
    Timer_StageControl::RegistTimerEPLP(*(undefined4 *)this,3);
  }
  return;
}
```
