# attachTimer

`_ZN4ARAD23Arad_ServerStateManager11attachTimerEv`

`ARAD::Arad_ServerStateManager::attachTimer()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a98d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a98d4  _ZN4ARAD23Arad_ServerStateManager11attachTimerEv
#           ARAD::Arad_ServerStateManager::attachTimer()
# range [0x081a98d4, 0x081a9919]
081a98d4 +0x00:  push   %ebp
081a98d5 +0x01:  mov    %esp,%ebp
081a98d7 +0x03:  sub    $0x28,%esp
081a98da +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
081a98df +0x0b:  movl   $0x0,0x18(%esp)
081a98e7 +0x13:  movl   $0x0,0x14(%esp)
081a98ef +0x1b:  movl   $0x78,0x10(%esp)
081a98f7 +0x23:  movl   $0xac,0xc(%esp)
081a98ff +0x2b:  movl   $0x0,0x8(%esp)
081a9907 +0x33:  movl   $0x2,0x4(%esp)
081a990f +0x3b:  mov    %eax,(%esp)
081a9912 +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
081a9917 +0x43:  leave
081a9918 +0x44:  ret
081a9919 +0x45:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::attachTimer @ 0x81a98d4

/* ARAD::Arad_ServerStateManager::attachTimer() */

void ARAD::Arad_ServerStateManager::attachTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xac,0x78,0,0);
  return;
}
```
