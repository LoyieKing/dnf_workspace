# UseRevivalItem

`_ZN10expert_job10CAlchemist14UseRevivalItemEP5CUser`

`expert_job::CAlchemist::UseRevivalItem(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d1694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1694  _ZN10expert_job10CAlchemist14UseRevivalItemEP5CUser
#           expert_job::CAlchemist::UseRevivalItem(CUser*)
# range [0x085d1694, 0x085d1711]
085d1694 +0x00:  push   %ebp
085d1695 +0x01:  mov    %esp,%ebp
085d1697 +0x03:  push   %esi
085d1698 +0x04:  push   %ebx
085d1699 +0x05:  sub    $0x20,%esp
085d169c +0x08:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d16a3 +0x0f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d16a8 +0x14:  add    $0x4b0,%eax
085d16ad +0x19:  mov    %eax,0x4(%esp)
085d16b1 +0x1d:  mov    0x8(%ebp),%eax
085d16b4 +0x20:  mov    %eax,(%esp)
085d16b7 +0x23:  call   0814aa7a <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x819>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x819
085d16bc +0x28:  mov    0x8(%ebp),%eax
085d16bf +0x2b:  mov    %eax,(%esp)
085d16c2 +0x2e:  call   0814aa8c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x82b>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x82b
085d16c7 +0x33:  mov    %eax,%esi
085d16c9 +0x35:  mov    0x8(%ebp),%eax
085d16cc +0x38:  mov    %eax,(%esp)
085d16cf +0x3b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085d16d4 +0x40:  mov    %eax,%ebx
085d16d6 +0x42:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085d16db +0x47:  movl   $0x0,0x18(%esp)
085d16e3 +0x4f:  mov    %esi,0x14(%esp)
085d16e7 +0x53:  movl   $0x4b0,0x10(%esp)
085d16ef +0x5b:  movl   $0x82,0xc(%esp)
085d16f7 +0x63:  mov    %ebx,0x8(%esp)
085d16fb +0x67:  movl   $0x0,0x4(%esp)
085d1703 +0x6f:  mov    %eax,(%esp)
085d1706 +0x72:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085d170b +0x77:  add    $0x20,%esp
085d170e +0x7a:  pop    %ebx
085d170f +0x7b:  pop    %esi
085d1710 +0x7c:  pop    %ebp
085d1711 +0x7d:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::UseRevivalItem @ 0x85d1694

/* expert_job::CAlchemist::UseRevivalItem(CUser*) */

void expert_job::CAlchemist::UseRevivalItem(CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUser::SetRevivalTime(param_1,iVar1 + 0x4b0);
  uVar2 = CUser::GetRevivalTime(param_1);
  uVar3 = CUser::GetUID(param_1);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,0,uVar3,0x82,0x4b0,uVar2,0);
  return;
}
```
