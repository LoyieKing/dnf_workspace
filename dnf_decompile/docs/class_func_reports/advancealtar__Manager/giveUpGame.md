# giveUpGame

`_ZN12advancealtar7Manager10giveUpGameEP5CUser`

`advancealtar::Manager::giveUpGame(CUser*)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x08130fa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130fa8  _ZN12advancealtar7Manager10giveUpGameEP5CUser
#           advancealtar::Manager::giveUpGame(CUser*)
# range [0x08130fa8, 0x0813101d]
08130fa8 +0x00:  push   %ebp
08130fa9 +0x01:  mov    %esp,%ebp
08130fab +0x03:  sub    $0x28,%esp
08130fae +0x06:  cmpl   $0x0,0x8(%ebp)
08130fb2 +0x0a:  je     0813101a <+0x72>
08130fb4 +0x0c:  mov    0x8(%ebp),%eax
08130fb7 +0x0f:  mov    %eax,(%esp)
08130fba +0x12:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08130fbf +0x17:  mov    %eax,-0xc(%ebp)
08130fc2 +0x1a:  cmpl   $0x0,-0xc(%ebp)
08130fc6 +0x1e:  je     0813101b <+0x73>
08130fc8 +0x20:  mov    -0xc(%ebp),%eax
08130fcb +0x23:  mov    %eax,(%esp)
08130fce +0x26:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130fd3 +0x2b:  movl   $0x6,0x4(%esp)
08130fdb +0x33:  mov    %eax,(%esp)
08130fde +0x36:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130fe3 +0x3b:  mov    -0xc(%ebp),%eax
08130fe6 +0x3e:  mov    %eax,(%esp)
08130fe9 +0x41:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130fee +0x46:  movl   $0x2,0x4(%esp)
08130ff6 +0x4e:  mov    %eax,(%esp)
08130ff9 +0x51:  call   0812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T)
08130ffe +0x56:  movl   $0x0,0x8(%esp)
08131006 +0x5e:  mov    -0xc(%ebp),%eax
08131009 +0x61:  mov    %eax,0x4(%esp)
0813100d +0x65:  mov    0x8(%ebp),%eax
08131010 +0x68:  mov    %eax,(%esp)
08131013 +0x6b:  call   08133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>  ; advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool)
08131018 +0x70:  jmp    0813101b <+0x73>
0813101a +0x72:  nop
0813101b +0x73:  leave
0813101c +0x74:  ret
0813101d +0x75:  nop
```

## 反编译 C

```c
// advancealtar::Manager::giveUpGame @ 0x8130fa8

/* advancealtar::Manager::giveUpGame(CUser*) */

void advancealtar::Manager::giveUpGame(CUser *param_1)

{
  StageControl *this;
  ProcStage *pPVar1;
  undefined4 uVar2;
  
  if (param_1 != (CUser *)0x0) {
    this = (StageControl *)CUser::getAdvanceAltar(param_1);
    if (this != (StageControl *)0x0) {
      pPVar1 = (ProcStage *)StageControl::getProcStage(this);
      ProcStage::setState(pPVar1,6);
      uVar2 = StageControl::getIndex(this);
      Timer_StageControl::RegistTimerEPLP(uVar2,2);
      HistoryLog::dungeonClearInfo(param_1,this,false);
    }
  }
  return;
}
```
