# RegistNextTimer

`_ZN23TimerInsertUserPlayTime15RegistNextTimerEv`

`TimerInsertUserPlayTime::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerInsertUserPlayTime` | `0x08636d44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636d44  _ZN23TimerInsertUserPlayTime15RegistNextTimerEv
#           TimerInsertUserPlayTime::RegistNextTimer()
# range [0x08636d44, 0x08636e05]
08636d44 +0x00:  push   %ebp
08636d45 +0x01:  mov    %esp,%ebp
08636d47 +0x03:  sub    $0x68,%esp
08636d4a +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08636d51 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08636d56 +0x12:  mov    %eax,-0x1c(%ebp)
08636d59 +0x15:  lea    -0x48(%ebp),%eax
08636d5c +0x18:  mov    %eax,0x4(%esp)
08636d60 +0x1c:  lea    -0x1c(%ebp),%eax
08636d63 +0x1f:  mov    %eax,(%esp)
08636d66 +0x22:  call   0807e360 <_init+0xc58>
08636d6b +0x27:  mov    %eax,-0x18(%ebp)
08636d6e +0x2a:  mov    -0x18(%ebp),%eax
08636d71 +0x2d:  mov    0x8(%eax),%eax
08636d74 +0x30:  mov    %eax,-0x14(%ebp)
08636d77 +0x33:  mov    -0x18(%ebp),%eax
08636d7a +0x36:  movl   $0x4,0x8(%eax)
08636d81 +0x3d:  mov    -0x18(%ebp),%eax
08636d84 +0x40:  movl   $0x1e,0x4(%eax)
08636d8b +0x47:  mov    -0x18(%ebp),%eax
08636d8e +0x4a:  movl   $0x0,(%eax)
08636d94 +0x50:  mov    -0x18(%ebp),%eax
08636d97 +0x53:  mov    %eax,(%esp)
08636d9a +0x56:  call   0807e820 <_init+0x1118>
08636d9f +0x5b:  mov    %eax,-0x10(%ebp)
08636da2 +0x5e:  mov    -0x18(%ebp),%eax
08636da5 +0x61:  mov    0x8(%eax),%eax
08636da8 +0x64:  cmp    -0x14(%ebp),%eax
08636dab +0x67:  jg     08636db4 <+0x70>
08636dad +0x69:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x10(%ebp)
08636db4 +0x70:  mov    -0x1c(%ebp),%eax
08636db7 +0x73:  mov    -0x10(%ebp),%edx
08636dba +0x76:  mov    %edx,%ecx
08636dbc +0x78:  sub    %eax,%ecx
08636dbe +0x7a:  mov    %ecx,%eax
08636dc0 +0x7c:  mov    %eax,-0xc(%ebp)
08636dc3 +0x7f:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08636dc8 +0x84:  movl   $0x0,0x18(%esp)
08636dd0 +0x8c:  movl   $0x0,0x14(%esp)
08636dd8 +0x94:  mov    -0xc(%ebp),%edx
08636ddb +0x97:  mov    %edx,0x10(%esp)
08636ddf +0x9b:  movl   $0x69,0xc(%esp)
08636de7 +0xa3:  movl   $0x0,0x8(%esp)
08636def +0xab:  movl   $0x2,0x4(%esp)
08636df7 +0xb3:  mov    %eax,(%esp)
08636dfa +0xb6:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08636dff +0xbb:  mov    $0x1,%eax
08636e04 +0xc0:  leave
08636e05 +0xc1:  ret
```

## 反编译 C

```c
// TimerInsertUserPlayTime::RegistNextTimer @ 0x8636d44

/* TimerInsertUserPlayTime::RegistNextTimer() */

undefined4 TimerInsertUserPlayTime::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  local_1c->tm_hour = 4;
  local_1c->tm_min = 0x1e;
  local_1c->tm_sec = 0;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x69,local_10,0,0);
  return 1;
}
```
