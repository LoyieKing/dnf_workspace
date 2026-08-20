# RegistNextTimer

`_ZN23Timer_Schedule_MidNight15RegistNextTimerEv`

`Timer_Schedule_MidNight::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_Schedule_MidNight` | `0x0863a9a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a9a2  _ZN23Timer_Schedule_MidNight15RegistNextTimerEv
#           Timer_Schedule_MidNight::RegistNextTimer()
# range [0x0863a9a2, 0x0863aa8f]
0863a9a2 +0x00:  push   %ebp
0863a9a3 +0x01:  mov    %esp,%ebp
0863a9a5 +0x03:  sub    $0x78,%esp
0863a9a8 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863a9af +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863a9b4 +0x12:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
0863a9b9 +0x17:  mov    %eax,-0x28(%ebp)
0863a9bc +0x1a:  lea    -0x54(%ebp),%eax
0863a9bf +0x1d:  mov    %eax,0x4(%esp)
0863a9c3 +0x21:  lea    -0x28(%ebp),%eax
0863a9c6 +0x24:  mov    %eax,(%esp)
0863a9c9 +0x27:  call   0807e360 <_init+0xc58>
0863a9ce +0x2c:  mov    %eax,-0x14(%ebp)
0863a9d1 +0x2f:  mov    -0x14(%ebp),%eax
0863a9d4 +0x32:  movl   $0x0,0x8(%eax)
0863a9db +0x39:  mov    -0x14(%ebp),%eax
0863a9de +0x3c:  movl   $0x0,0x4(%eax)
0863a9e5 +0x43:  mov    -0x14(%ebp),%eax
0863a9e8 +0x46:  movl   $0x0,(%eax)
0863a9ee +0x4c:  mov    -0x14(%ebp),%eax
0863a9f1 +0x4f:  mov    %eax,(%esp)
0863a9f4 +0x52:  call   0807e820 <_init+0x1118>
0863a9f9 +0x57:  mov    %eax,-0x10(%ebp)
0863a9fc +0x5a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863aa03 +0x61:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863aa08 +0x66:  mov    -0x10(%ebp),%edx
0863aa0b +0x69:  mov    %edx,%ecx
0863aa0d +0x6b:  sub    %eax,%ecx
0863aa0f +0x6d:  mov    %ecx,%eax
0863aa11 +0x6f:  mov    %eax,-0xc(%ebp)
0863aa14 +0x72:  movl   $0x0,0xc(%esp)
0863aa1c +0x7a:  movl   $0x1626,0x8(%esp)
0863aa24 +0x82:  movl   $&_ZZN23Timer_Schedule_MidNight15RegistNextTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
0863aa2c +0x8a:  lea    -0x24(%ebp),%eax
0863aa2f +0x8d:  mov    %eax,(%esp)
0863aa32 +0x90:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863aa37 +0x95:  mov    -0xc(%ebp),%eax
0863aa3a +0x98:  mov    %eax,0x8(%esp)
0863aa3e +0x9c:  movl   $"RegistNextTimer Schedule_MidNight delta %d\n",0x4(%esp)
0863aa46 +0xa4:  lea    -0x24(%ebp),%eax
0863aa49 +0xa7:  mov    %eax,(%esp)
0863aa4c +0xaa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863aa51 +0xaf:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863aa56 +0xb4:  movl   $0x0,0x18(%esp)
0863aa5e +0xbc:  movl   $0x0,0x14(%esp)
0863aa66 +0xc4:  mov    -0xc(%ebp),%edx
0863aa69 +0xc7:  mov    %edx,0x10(%esp)
0863aa6d +0xcb:  movl   $0x9a,0xc(%esp)
0863aa75 +0xd3:  movl   $0x0,0x8(%esp)
0863aa7d +0xdb:  movl   $0x2,0x4(%esp)
0863aa85 +0xe3:  mov    %eax,(%esp)
0863aa88 +0xe6:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863aa8d +0xeb:  leave
0863aa8e +0xec:  ret
0863aa8f +0xed:  nop
```

## 反编译 C

```c
// Timer_Schedule_MidNight::RegistNextTimer @ 0x863a9a2

/* Timer_Schedule_MidNight::RegistNextTimer() */

void Timer_Schedule_MidNight::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  tm local_58;
  int local_2c;
  cMyTrace local_28 [16];
  tm *local_18;
  int local_14;
  int local_10;
  
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = local_2c + 0x15180;
  local_18 = localtime_r(&local_2c,&local_58);
  local_18->tm_hour = 0;
  local_18->tm_min = 0;
  local_18->tm_sec = 0;
  local_14 = mktime(local_18);
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_10 = local_14 - local_10;
  cMyTrace::cMyTrace(local_28,"static void Timer_Schedule_MidNight::RegistNextTimer()",0x1626,0);
  cMyTrace::operator()(local_28,"RegistNextTimer Schedule_MidNight delta %d\n",local_10);
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x9a,local_10,0,0);
  return;
}
```
