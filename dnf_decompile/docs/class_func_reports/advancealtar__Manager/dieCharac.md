# dieCharac

`_ZN12advancealtar7Manager9dieCharacEP5CUser`

`advancealtar::Manager::dieCharac(CUser*)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x08130ab2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130ab2  _ZN12advancealtar7Manager9dieCharacEP5CUser
#           advancealtar::Manager::dieCharac(CUser*)
# range [0x08130ab2, 0x08130bb7]
08130ab2 +0x000:  push   %ebp
08130ab3 +0x001:  mov    %esp,%ebp
08130ab5 +0x003:  sub    $0x28,%esp
08130ab8 +0x006:  cmpl   $0x0,0x8(%ebp)
08130abc +0x00a:  je     08130bb2 <+0x100>
08130ac2 +0x010:  mov    0x8(%ebp),%eax
08130ac5 +0x013:  mov    %eax,(%esp)
08130ac8 +0x016:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08130acd +0x01b:  mov    %eax,-0xc(%ebp)
08130ad0 +0x01e:  cmpl   $0x0,-0xc(%ebp)
08130ad4 +0x022:  je     08130bb6 <+0x104>
08130ada +0x028:  mov    -0xc(%ebp),%eax
08130add +0x02b:  mov    %eax,(%esp)
08130ae0 +0x02e:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130ae5 +0x033:  mov    %eax,(%esp)
08130ae8 +0x036:  call   0812f770 <_ZNK12advancealtar9ProcStage13isRewardStateEv>  ; advancealtar::ProcStage::isRewardState() const
08130aed +0x03b:  xor    $0x1,%eax
08130af0 +0x03e:  test   %al,%al
08130af2 +0x040:  jne    08130bb5 <+0x103>
08130af8 +0x046:  mov    -0xc(%ebp),%eax
08130afb +0x049:  mov    %eax,(%esp)
08130afe +0x04c:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130b03 +0x051:  mov    %eax,(%esp)
08130b06 +0x054:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
08130b0b +0x059:  cmp    $0x1,%eax
08130b0e +0x05c:  sete   %al
08130b11 +0x05f:  test   %al,%al
08130b13 +0x061:  je     08130b60 <+0xae>
08130b15 +0x063:  mov    -0xc(%ebp),%eax
08130b18 +0x066:  mov    %eax,(%esp)
08130b1b +0x069:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130b20 +0x06e:  mov    %eax,(%esp)
08130b23 +0x071:  call   0812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>  ; advancealtar::ProcStage::clearStageAndReward()
08130b28 +0x076:  mov    -0xc(%ebp),%eax
08130b2b +0x079:  mov    %eax,(%esp)
08130b2e +0x07c:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130b33 +0x081:  movl   $0x5,0x4(%esp)
08130b3b +0x089:  mov    %eax,(%esp)
08130b3e +0x08c:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130b43 +0x091:  mov    -0xc(%ebp),%eax
08130b46 +0x094:  mov    %eax,(%esp)
08130b49 +0x097:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130b4e +0x09c:  movl   $0x1,0x4(%esp)
08130b56 +0x0a4:  mov    %eax,(%esp)
08130b59 +0x0a7:  call   0812f89c <_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T)
08130b5e +0x0ac:  jmp    08130bb6 <+0x104>
08130b60 +0x0ae:  mov    -0xc(%ebp),%eax
08130b63 +0x0b1:  mov    %eax,(%esp)
08130b66 +0x0b4:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130b6b +0x0b9:  movl   $0x6,0x4(%esp)
08130b73 +0x0c1:  mov    %eax,(%esp)
08130b76 +0x0c4:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130b7b +0x0c9:  mov    -0xc(%ebp),%eax
08130b7e +0x0cc:  mov    %eax,(%esp)
08130b81 +0x0cf:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08130b86 +0x0d4:  movl   $0x1,0x4(%esp)
08130b8e +0x0dc:  mov    %eax,(%esp)
08130b91 +0x0df:  call   0812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>  ; advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T)
08130b96 +0x0e4:  movl   $0x0,0x8(%esp)
08130b9e +0x0ec:  mov    -0xc(%ebp),%eax
08130ba1 +0x0ef:  mov    %eax,0x4(%esp)
08130ba5 +0x0f3:  mov    0x8(%ebp),%eax
08130ba8 +0x0f6:  mov    %eax,(%esp)
08130bab +0x0f9:  call   08133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>  ; advancealtar::HistoryLog::dungeonClearInfo(CUser&, advancealtar::StageControl&, bool)
08130bb0 +0x0fe:  jmp    08130bb6 <+0x104>
08130bb2 +0x100:  nop
08130bb3 +0x101:  jmp    08130bb6 <+0x104>
08130bb5 +0x103:  nop
08130bb6 +0x104:  leave
08130bb7 +0x105:  ret
```

## 反编译 C

```c
// advancealtar::Manager::dieCharac @ 0x8130ab2

/* advancealtar::Manager::dieCharac(CUser*) */

void advancealtar::Manager::dieCharac(CUser *param_1)

{
  char cVar1;
  StageControl *this;
  ProcStage *pPVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (CUser *)0x0) &&
     (this = (StageControl *)CUser::getAdvanceAltar(param_1), this != (StageControl *)0x0)) {
    pPVar2 = (ProcStage *)StageControl::getProcStage(this);
    cVar1 = ProcStage::isRewardState(pPVar2);
    if (cVar1 == '\x01') {
      pPVar2 = (ProcStage *)StageControl::getProcStage(this);
      iVar3 = ProcStage::getStageType(pPVar2);
      if (iVar3 == 1) {
        pPVar2 = (ProcStage *)StageControl::getProcStage(this);
        ProcStage::clearStageAndReward(pPVar2);
        pPVar2 = (ProcStage *)StageControl::getProcStage(this);
        ProcStage::setState(pPVar2,5);
        uVar4 = StageControl::getIndex(this);
        Timer_StageControl::RegistTimerClearReward(uVar4,1);
      }
      else {
        pPVar2 = (ProcStage *)StageControl::getProcStage(this);
        ProcStage::setState(pPVar2,6);
        uVar4 = StageControl::getIndex(this);
        Timer_StageControl::RegistTimerEPLP(uVar4,1);
        HistoryLog::dungeonClearInfo(param_1,this,false);
      }
    }
  }
  return;
}
```
