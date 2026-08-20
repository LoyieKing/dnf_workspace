# RegistNextTimer

`_ZN17TimerFatigueReset15RegistNextTimerEv`

`TimerFatigueReset::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerFatigueReset` | `0x08633a04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633a04  _ZN17TimerFatigueReset15RegistNextTimerEv
#           TimerFatigueReset::RegistNextTimer()
# range [0x08633a04, 0x08633b83]
08633a04 +0x000:  push   %ebp
08633a05 +0x001:  mov    %esp,%ebp
08633a07 +0x003:  push   %edi
08633a08 +0x004:  push   %esi
08633a09 +0x005:  push   %ebx
08633a0a +0x006:  sub    $0x8c,%esp
08633a10 +0x00c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08633a17 +0x013:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08633a1c +0x018:  mov    %eax,-0x4c(%ebp)
08633a1f +0x01b:  lea    -0x78(%ebp),%eax
08633a22 +0x01e:  mov    %eax,0x4(%esp)
08633a26 +0x022:  lea    -0x4c(%ebp),%eax
08633a29 +0x025:  mov    %eax,(%esp)
08633a2c +0x028:  call   0807e360 <_init+0xc58>
08633a31 +0x02d:  mov    %eax,-0x28(%ebp)
08633a34 +0x030:  mov    -0x28(%ebp),%eax
08633a37 +0x033:  mov    0x8(%eax),%eax
08633a3a +0x036:  mov    %eax,-0x24(%ebp)
08633a3d +0x039:  mov    -0x28(%ebp),%eax
08633a40 +0x03c:  mov    (%eax),%edi
08633a42 +0x03e:  mov    -0x28(%ebp),%eax
08633a45 +0x041:  mov    0x4(%eax),%esi
08633a48 +0x044:  mov    -0x28(%ebp),%eax
08633a4b +0x047:  mov    0x8(%eax),%ebx
08633a4e +0x04a:  movl   $0x0,0xc(%esp)
08633a56 +0x052:  movl   $0x572,0x8(%esp)
08633a5e +0x05a:  movl   $&_ZZN17TimerFatigueReset15RegistNextTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
08633a66 +0x062:  lea    -0x48(%ebp),%eax
08633a69 +0x065:  mov    %eax,(%esp)
08633a6c +0x068:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08633a71 +0x06d:  mov    %edi,0x10(%esp)
08633a75 +0x071:  mov    %esi,0xc(%esp)
08633a79 +0x075:  mov    %ebx,0x8(%esp)
08633a7d +0x079:  movl   $"Reset all user's fatigue!(%02d:%02d:%02d)",0x4(%esp)
08633a85 +0x081:  lea    -0x48(%ebp),%eax
08633a88 +0x084:  mov    %eax,(%esp)
08633a8b +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08633a90 +0x08c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08633a95 +0x091:  mov    0x37c(%eax),%edx
08633a9b +0x097:  mov    -0x28(%ebp),%eax
08633a9e +0x09a:  mov    %edx,0x8(%eax)
08633aa1 +0x09d:  mov    -0x28(%ebp),%eax
08633aa4 +0x0a0:  movl   $0x0,0x4(%eax)
08633aab +0x0a7:  mov    -0x28(%ebp),%eax
08633aae +0x0aa:  movl   $0x0,(%eax)
08633ab4 +0x0b0:  mov    -0x28(%ebp),%eax
08633ab7 +0x0b3:  mov    %eax,(%esp)
08633aba +0x0b6:  call   0807e820 <_init+0x1118>
08633abf +0x0bb:  mov    %eax,-0x20(%ebp)
08633ac2 +0x0be:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08633ac7 +0x0c3:  mov    0x37c(%eax),%eax
08633acd +0x0c9:  cmp    -0x24(%ebp),%eax
08633ad0 +0x0cc:  setle  %al
08633ad3 +0x0cf:  test   %al,%al
08633ad5 +0x0d1:  je     08633ade <+0xda>
08633ad7 +0x0d3:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x20(%ebp)
08633ade +0x0da:  mov    -0x4c(%ebp),%eax
08633ae1 +0x0dd:  mov    -0x20(%ebp),%edx
08633ae4 +0x0e0:  mov    %edx,%ecx
08633ae6 +0x0e2:  sub    %eax,%ecx
08633ae8 +0x0e4:  mov    %ecx,%eax
08633aea +0x0e6:  mov    %eax,-0x1c(%ebp)
08633aed +0x0e9:  mov    -0x4c(%ebp),%ebx
08633af0 +0x0ec:  movl   $0x0,0xc(%esp)
08633af8 +0x0f4:  movl   $0x587,0x8(%esp)
08633b00 +0x0fc:  movl   $&_ZZN17TimerFatigueReset15RegistNextTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
08633b08 +0x104:  lea    -0x38(%ebp),%eax
08633b0b +0x107:  mov    %eax,(%esp)
08633b0e +0x10a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08633b13 +0x10f:  mov    %ebx,0x10(%esp)
08633b17 +0x113:  mov    -0x20(%ebp),%eax
08633b1a +0x116:  mov    %eax,0xc(%esp)
08633b1e +0x11a:  mov    -0x1c(%ebp),%eax
08633b21 +0x11d:  mov    %eax,0x8(%esp)
08633b25 +0x121:  movl   $"DELTA %d , CHECK_T %d , CUR_T %d\n",0x4(%esp)
08633b2d +0x129:  lea    -0x38(%ebp),%eax
08633b30 +0x12c:  mov    %eax,(%esp)
08633b33 +0x12f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08633b38 +0x134:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08633b3d +0x139:  movl   $0x0,0x18(%esp)
08633b45 +0x141:  movl   $0x0,0x14(%esp)
08633b4d +0x149:  mov    -0x1c(%ebp),%edx
08633b50 +0x14c:  mov    %edx,0x10(%esp)
08633b54 +0x150:  movl   $0x50,0xc(%esp)
08633b5c +0x158:  movl   $0x0,0x8(%esp)
08633b64 +0x160:  movl   $0x2,0x4(%esp)
08633b6c +0x168:  mov    %eax,(%esp)
08633b6f +0x16b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08633b74 +0x170:  mov    $0x1,%eax
08633b79 +0x175:  add    $0x8c,%esp
08633b7f +0x17b:  pop    %ebx
08633b80 +0x17c:  pop    %esi
08633b81 +0x17d:  pop    %edi
08633b82 +0x17e:  pop    %ebp
08633b83 +0x17f:  ret
```

## 反编译 C

```c
// TimerFatigueReset::RegistNextTimer @ 0x8633a04

/* TimerFatigueReset::RegistNextTimer() */

undefined4 TimerFatigueReset::RegistNextTimer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TimerQueue *pTVar4;
  tm local_7c;
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  tm *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_50 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = localtime_r(&local_50,&local_7c);
  local_28 = local_2c->tm_hour;
  iVar2 = local_2c->tm_sec;
  iVar3 = local_2c->tm_min;
  iVar1 = local_2c->tm_hour;
  cMyTrace::cMyTrace(local_4c,"bool TimerFatigueReset::RegistNextTimer()",0x572,0);
  cMyTrace::operator()(local_4c,"Reset all user\'s fatigue!(%02d:%02d:%02d)",iVar1,iVar3,iVar2);
  iVar2 = G_CEnvironment();
  local_2c->tm_hour = *(int *)(iVar2 + 0x37c);
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  local_24 = mktime(local_2c);
  iVar3 = G_CEnvironment();
  iVar2 = local_50;
  if (*(int *)(iVar3 + 0x37c) <= local_28) {
    local_24 = local_24 + 0x15180;
  }
  local_20 = local_24 - local_50;
  cMyTrace::cMyTrace(local_3c,"bool TimerFatigueReset::RegistNextTimer()",0x587,0);
  cMyTrace::operator()(local_3c,"DELTA %d , CHECK_T %d , CUR_T %d\n",local_20,local_24,iVar2);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,2,0,0x50,local_20,0,0);
  return 1;
}
```
