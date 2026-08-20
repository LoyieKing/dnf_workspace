# dispatch_sig

`_ZN19TimerStatisticLevel12dispatch_sigEiij`

`TimerStatisticLevel::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStatisticLevel` | `0x086358ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086358ac  _ZN19TimerStatisticLevel12dispatch_sigEiij
#           TimerStatisticLevel::dispatch_sig(int, int, unsigned int)
# range [0x086358ac, 0x08635919]
086358ac +0x00:  push   %ebp
086358ad +0x01:  mov    %esp,%ebp
086358af +0x03:  push   %ebx
086358b0 +0x04:  sub    $0x24,%esp
086358b3 +0x07:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086358b8 +0x0c:  mov    %eax,(%esp)
086358bb +0x0f:  call   086cd0b0 <_ZN9GameWorld30UpdateStatistic4ChannelUserLevEv>  ; GameWorld::UpdateStatistic4ChannelUserLev()
086358c0 +0x14:  call   0863591a <_ZN19TimerStatisticLevel12CalcNextTimeEv>  ; TimerStatisticLevel::CalcNextTime()
086358c5 +0x19:  mov    %eax,%ebx
086358c7 +0x1b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086358ce +0x22:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086358d3 +0x27:  sub    %eax,%ebx
086358d5 +0x29:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086358da +0x2e:  movl   $0x0,0x18(%esp)
086358e2 +0x36:  movl   $0x0,0x14(%esp)
086358ea +0x3e:  mov    %ebx,0x10(%esp)
086358ee +0x42:  movl   $0x55,0xc(%esp)
086358f6 +0x4a:  movl   $0x0,0x8(%esp)
086358fe +0x52:  movl   $0x2,0x4(%esp)
08635906 +0x5a:  mov    %eax,(%esp)
08635909 +0x5d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863590e +0x62:  mov    $0x1,%eax
08635913 +0x67:  add    $0x24,%esp
08635916 +0x6a:  pop    %ebx
08635917 +0x6b:  pop    %ebp
08635918 +0x6c:  ret
08635919 +0x6d:  nop
```

## 反编译 C

```c
// TimerStatisticLevel::dispatch_sig @ 0x86358ac

/* TimerStatisticLevel::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStatisticLevel::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  TimerQueue *pTVar3;
  
  G_GameWorld();
  GameWorld::UpdateStatistic4ChannelUserLev();
  iVar1 = CalcNextTime();
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,0,0x55,iVar1 - iVar2,0,0);
  return 1;
}
```
