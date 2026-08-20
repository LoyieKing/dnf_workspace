# Notice10MinShutDownMessage

`_ZN22GameServerDemonManager26Notice10MinShutDownMessageEv`

`GameServerDemonManager::Notice10MinShutDownMessage()`

| 类 | 地址 |
|---|---|
| `GameServerDemonManager` | `0x080f623a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f623a  _ZN22GameServerDemonManager26Notice10MinShutDownMessageEv
#           GameServerDemonManager::Notice10MinShutDownMessage()
# range [0x080f623a, 0x080f627f]
080f623a +0x00:  push   %ebp
080f623b +0x01:  mov    %esp,%ebp
080f623d +0x03:  sub    $0x28,%esp
080f6240 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
080f6245 +0x0b:  movl   $0x0,0x18(%esp)
080f624d +0x13:  movl   $0x0,0x14(%esp)
080f6255 +0x1b:  movl   $0x3c,0x10(%esp)
080f625d +0x23:  movl   $0xa2,0xc(%esp)
080f6265 +0x2b:  movl   $0x0,0x8(%esp)
080f626d +0x33:  movl   $0x2,0x4(%esp)
080f6275 +0x3b:  mov    %eax,(%esp)
080f6278 +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
080f627d +0x43:  leave
080f627e +0x44:  ret
080f627f +0x45:  nop
```

## 反编译 C

```c
// GameServerDemonManager::Notice10MinShutDownMessage @ 0x80f623a

/* GameServerDemonManager::Notice10MinShutDownMessage() */

void GameServerDemonManager::Notice10MinShutDownMessage(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xa2,0x3c,0,0);
  return;
}
```
