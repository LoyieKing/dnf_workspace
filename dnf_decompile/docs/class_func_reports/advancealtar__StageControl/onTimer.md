# onTimer

`_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE`

`advancealtar::StageControl::onTimer(TIMER_MESSAGE, advancealtar::StageEndType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fbfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fbfa  _ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE
#           advancealtar::StageControl::onTimer(TIMER_MESSAGE, advancealtar::StageEndType::T)
# range [0x0812fbfa, 0x0812fc4d]
0812fbfa +0x00:  push   %ebp
0812fbfb +0x01:  mov    %esp,%ebp
0812fbfd +0x03:  sub    $0x18,%esp
0812fc00 +0x06:  mov    0xc(%ebp),%eax
0812fc03 +0x09:  cmp    $0xa9,%eax
0812fc08 +0x0e:  je     0812fc2c <+0x32>
0812fc0a +0x10:  cmp    $0xaa,%eax
0812fc0f +0x15:  je     0812fc40 <+0x46>
0812fc11 +0x17:  cmp    $0xa8,%eax
0812fc16 +0x1c:  jne    0812fc4b <+0x51>
0812fc18 +0x1e:  mov    0x10(%ebp),%eax
0812fc1b +0x21:  mov    %eax,0x4(%esp)
0812fc1f +0x25:  mov    0x8(%ebp),%eax
0812fc22 +0x28:  mov    %eax,(%esp)
0812fc25 +0x2b:  call   081305f6 <_ZN12advancealtar12StageControl13onClearRewardENS_12StageEndType1TE>  ; advancealtar::StageControl::onClearReward(advancealtar::StageEndType::T)
0812fc2a +0x30:  jmp    0812fc4b <+0x51>
0812fc2c +0x32:  mov    0x10(%ebp),%eax
0812fc2f +0x35:  mov    %eax,0x4(%esp)
0812fc33 +0x39:  mov    0x8(%ebp),%eax
0812fc36 +0x3c:  mov    %eax,(%esp)
0812fc39 +0x3f:  call   08130644 <_ZN12advancealtar12StageControl6onEplpENS_12StageEndType1TE>  ; advancealtar::StageControl::onEplp(advancealtar::StageEndType::T)
0812fc3e +0x44:  jmp    0812fc4b <+0x51>
0812fc40 +0x46:  mov    0x8(%ebp),%eax
0812fc43 +0x49:  mov    %eax,(%esp)
0812fc46 +0x4c:  call   08130692 <_ZN12advancealtar12StageControl19onEplpReturnVillageEv>  ; advancealtar::StageControl::onEplpReturnVillage()
0812fc4b +0x51:  leave
0812fc4c +0x52:  ret
0812fc4d +0x53:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::onTimer @ 0x812fbfa

/* advancealtar::StageControl::onTimer(TIMER_MESSAGE, advancealtar::StageEndType::T) */

void __thiscall
advancealtar::StageControl::onTimer(StageControl *this,int param_2,undefined4 param_3)

{
  if (param_2 == 0xa9) {
    onEplp(this,param_3);
  }
  else if (param_2 == 0xaa) {
    onEplpReturnVillage(this);
  }
  else if (param_2 == 0xa8) {
    onClearReward(this,param_3);
  }
  return;
}
```
