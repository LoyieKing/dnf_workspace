# registNextTimer

`_ZN33TimerUpdateItemGenerateStatistics15registNextTimerEl`

`TimerUpdateItemGenerateStatistics::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerUpdateItemGenerateStatistics` | `0x08637318` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637318  _ZN33TimerUpdateItemGenerateStatistics15registNextTimerEl
#           TimerUpdateItemGenerateStatistics::registNextTimer(long)
# range [0x08637318, 0x086373c5]
08637318 +0x00:  push   %ebp
08637319 +0x01:  mov    %esp,%ebp
0863731b +0x03:  push   %ebx
0863731c +0x04:  sub    $0x64,%esp
0863731f +0x07:  lea    -0x3c(%ebp),%eax
08637322 +0x0a:  mov    %eax,0x4(%esp)
08637326 +0x0e:  lea    0x8(%ebp),%eax
08637329 +0x11:  mov    %eax,(%esp)
0863732c +0x14:  call   0807e360 <_init+0xc58>
08637331 +0x19:  movl   $0x17,-0x34(%ebp)
08637338 +0x20:  movl   $0x0,-0x38(%ebp)
0863733f +0x27:  movl   $0x0,-0x3c(%ebp)
08637346 +0x2e:  lea    -0x3c(%ebp),%eax
08637349 +0x31:  mov    %eax,(%esp)
0863734c +0x34:  call   0807e820 <_init+0x1118>
08637351 +0x39:  mov    %eax,0x8(%ebp)
08637354 +0x3c:  mov    0x8(%ebp),%ebx
08637357 +0x3f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863735e +0x46:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637363 +0x4b:  mov    %ebx,%edx
08637365 +0x4d:  sub    %eax,%edx
08637367 +0x4f:  mov    %edx,%eax
08637369 +0x51:  mov    %eax,-0x10(%ebp)
0863736c +0x54:  movl   $0x1,-0xc(%ebp)
08637373 +0x5b:  lea    -0x10(%ebp),%eax
08637376 +0x5e:  mov    %eax,0x4(%esp)
0863737a +0x62:  lea    -0xc(%ebp),%eax
0863737d +0x65:  mov    %eax,(%esp)
08637380 +0x68:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08637385 +0x6d:  mov    (%eax),%ebx
08637387 +0x6f:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863738c +0x74:  movl   $0x0,0x18(%esp)
08637394 +0x7c:  movl   $0x0,0x14(%esp)
0863739c +0x84:  mov    %ebx,0x10(%esp)
086373a0 +0x88:  movl   $0x6b,0xc(%esp)
086373a8 +0x90:  movl   $0x0,0x8(%esp)
086373b0 +0x98:  movl   $0x2,0x4(%esp)
086373b8 +0xa0:  mov    %eax,(%esp)
086373bb +0xa3:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086373c0 +0xa8:  add    $0x64,%esp
086373c3 +0xab:  pop    %ebx
086373c4 +0xac:  pop    %ebp
086373c5 +0xad:  ret
```

## 反编译 C

```c
// TimerUpdateItemGenerateStatistics::registNextTimer @ 0x8637318

/* TimerUpdateItemGenerateStatistics::registNextTimer(long) */

void TimerUpdateItemGenerateStatistics::registNextTimer(long param_1)

{
  int iVar1;
  time_t tVar2;
  int *piVar3;
  TimerQueue *pTVar4;
  tm local_40;
  int local_14 [3];
  
  localtime_r(&param_1,&local_40);
  local_40.tm_hour = 0x17;
  local_40.tm_min = 0;
  local_40.tm_sec = 0;
  tVar2 = mktime(&local_40);
  param_1 = tVar2;
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14[0] = tVar2 - local_14[0];
  local_14[1] = 1;
  piVar3 = std::max<int>(local_14 + 1,local_14);
  iVar1 = *piVar3;
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,2,0,0x6b,iVar1,0,0);
  return;
}
```
