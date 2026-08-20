# registNextTimer

`_ZN32TimerUpdateCompoundEmblemStatics15registNextTimerEv`

`TimerUpdateCompoundEmblemStatics::registNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerUpdateCompoundEmblemStatics` | `0x0863939a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863939a  _ZN32TimerUpdateCompoundEmblemStatics15registNextTimerEv
#           TimerUpdateCompoundEmblemStatics::registNextTimer()
# range [0x0863939a, 0x0863949d]
0863939a +0x000:  push   %ebp
0863939b +0x001:  mov    %esp,%ebp
0863939d +0x003:  push   %ebx
0863939e +0x004:  sub    $0x64,%esp
086393a1 +0x007:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086393a8 +0x00e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086393ad +0x013:  mov    %eax,-0x1c(%ebp)
086393b0 +0x016:  lea    -0x48(%ebp),%eax
086393b3 +0x019:  mov    %eax,0x4(%esp)
086393b7 +0x01d:  lea    -0x1c(%ebp),%eax
086393ba +0x020:  mov    %eax,(%esp)
086393bd +0x023:  call   0807e360 <_init+0xc58>
086393c2 +0x028:  mov    %eax,-0x18(%ebp)
086393c5 +0x02b:  mov    -0x18(%ebp),%eax
086393c8 +0x02e:  mov    0x8(%eax),%eax
086393cb +0x031:  mov    %eax,-0x14(%ebp)
086393ce +0x034:  mov    -0x18(%ebp),%eax
086393d1 +0x037:  movl   $0x5,0x8(%eax)
086393d8 +0x03e:  mov    -0x18(%ebp),%eax
086393db +0x041:  movl   $0x0,0x4(%eax)
086393e2 +0x048:  mov    -0x18(%ebp),%eax
086393e5 +0x04b:  movl   $0x0,(%eax)
086393eb +0x051:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086393f0 +0x056:  mov    0x1b0(%eax),%ecx
086393f6 +0x05c:  mov    $0x88888889,%edx
086393fb +0x061:  mov    %ecx,%eax
086393fd +0x063:  imul   %edx
086393ff +0x065:  lea    (%edx,%ecx,1),%eax
08639402 +0x068:  mov    %eax,%edx
08639404 +0x06a:  sar    $0x4,%edx
08639407 +0x06d:  mov    %ecx,%eax
08639409 +0x06f:  sar    $0x1f,%eax
0863940c +0x072:  mov    %edx,%ebx
0863940e +0x074:  sub    %eax,%ebx
08639410 +0x076:  mov    %ebx,%eax
08639412 +0x078:  lea    (%eax,%eax,1),%edx
08639415 +0x07b:  mov    %edx,%eax
08639417 +0x07d:  shl    $0x4,%eax
0863941a +0x080:  sub    %edx,%eax
0863941c +0x082:  mov    %ecx,%edx
0863941e +0x084:  sub    %eax,%edx
08639420 +0x086:  mov    %edx,%eax
08639422 +0x088:  mov    -0x18(%ebp),%edx
08639425 +0x08b:  mov    %eax,0x4(%edx)
08639428 +0x08e:  mov    -0x18(%ebp),%eax
0863942b +0x091:  mov    %eax,(%esp)
0863942e +0x094:  call   0807e820 <_init+0x1118>
08639433 +0x099:  mov    %eax,-0x10(%ebp)
08639436 +0x09c:  mov    -0x18(%ebp),%eax
08639439 +0x09f:  mov    0x8(%eax),%eax
0863943c +0x0a2:  cmp    -0x14(%ebp),%eax
0863943f +0x0a5:  jg     08639448 <+0xae>
08639441 +0x0a7:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x10(%ebp)
08639448 +0x0ae:  mov    -0x1c(%ebp),%eax
0863944b +0x0b1:  mov    -0x10(%ebp),%edx
0863944e +0x0b4:  mov    %edx,%ecx
08639450 +0x0b6:  sub    %eax,%ecx
08639452 +0x0b8:  mov    %ecx,%eax
08639454 +0x0ba:  mov    %eax,-0xc(%ebp)
08639457 +0x0bd:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863945c +0x0c2:  movl   $0x0,0x18(%esp)
08639464 +0x0ca:  movl   $0x0,0x14(%esp)
0863946c +0x0d2:  mov    -0xc(%ebp),%edx
0863946f +0x0d5:  mov    %edx,0x10(%esp)
08639473 +0x0d9:  movl   $0x89,0xc(%esp)
0863947b +0x0e1:  movl   $0x0,0x8(%esp)
08639483 +0x0e9:  movl   $0x2,0x4(%esp)
0863948b +0x0f1:  mov    %eax,(%esp)
0863948e +0x0f4:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08639493 +0x0f9:  mov    $0x1,%eax
08639498 +0x0fe:  add    $0x64,%esp
0863949b +0x101:  pop    %ebx
0863949c +0x102:  pop    %ebp
0863949d +0x103:  ret
```

## 反编译 C

```c
// TimerUpdateCompoundEmblemStatics::registNextTimer @ 0x863939a

/* TimerUpdateCompoundEmblemStatics::registNextTimer() */

undefined4 TimerUpdateCompoundEmblemStatics::registNextTimer(void)

{
  int iVar1;
  TimerQueue *pTVar2;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  local_1c->tm_hour = 5;
  local_1c->tm_min = 0;
  local_1c->tm_sec = 0;
  iVar1 = G_CEnvironment();
  local_1c->tm_min = *(int *)(iVar1 + 0x1b0) % 0x1e;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,0,0x89,local_10,0,0);
  return 1;
}
```
