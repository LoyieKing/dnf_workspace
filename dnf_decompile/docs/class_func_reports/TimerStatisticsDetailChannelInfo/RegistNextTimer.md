# RegistNextTimer

`_ZN32TimerStatisticsDetailChannelInfo15RegistNextTimerEv`

`TimerStatisticsDetailChannelInfo::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerStatisticsDetailChannelInfo` | `0x08635782` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635782  _ZN32TimerStatisticsDetailChannelInfo15RegistNextTimerEv
#           TimerStatisticsDetailChannelInfo::RegistNextTimer()
# range [0x08635782, 0x086358ab]
08635782 +0x000:  push   %ebp
08635783 +0x001:  mov    %esp,%ebp
08635785 +0x003:  push   %edi
08635786 +0x004:  push   %esi
08635787 +0x005:  push   %ebx
08635788 +0x006:  sub    $0x7c,%esp
0863578b +0x009:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08635792 +0x010:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08635797 +0x015:  mov    %eax,-0x34(%ebp)
0863579a +0x018:  lea    -0x60(%ebp),%eax
0863579d +0x01b:  mov    %eax,0x4(%esp)
086357a1 +0x01f:  lea    -0x34(%ebp),%eax
086357a4 +0x022:  mov    %eax,(%esp)
086357a7 +0x025:  call   0807e360 <_init+0xc58>
086357ac +0x02a:  mov    %eax,-0x20(%ebp)
086357af +0x02d:  mov    -0x20(%ebp),%eax
086357b2 +0x030:  mov    0x4(%eax),%ecx
086357b5 +0x033:  mov    $0x88888889,%edx
086357ba +0x038:  mov    %ecx,%eax
086357bc +0x03a:  imul   %edx
086357be +0x03c:  lea    (%edx,%ecx,1),%eax
086357c1 +0x03f:  mov    %eax,%edx
086357c3 +0x041:  sar    $0x4,%edx
086357c6 +0x044:  mov    %ecx,%eax
086357c8 +0x046:  sar    $0x1f,%eax
086357cb +0x049:  mov    %edx,%ebx
086357cd +0x04b:  sub    %eax,%ebx
086357cf +0x04d:  mov    %ebx,%eax
086357d1 +0x04f:  lea    (%eax,%eax,1),%edx
086357d4 +0x052:  mov    %edx,%eax
086357d6 +0x054:  shl    $0x4,%eax
086357d9 +0x057:  sub    %edx,%eax
086357db +0x059:  mov    %ecx,%edx
086357dd +0x05b:  sub    %eax,%edx
086357df +0x05d:  mov    %edx,%eax
086357e1 +0x05f:  imul   $0xffffffc4,%eax,%eax
086357e4 +0x062:  lea    0x6cc(%eax),%ecx
086357ea +0x068:  mov    -0x20(%ebp),%eax
086357ed +0x06b:  mov    (%eax),%eax
086357ef +0x06d:  mov    $0x3c,%edx
086357f4 +0x072:  mov    %edx,%ebx
086357f6 +0x074:  sub    %eax,%ebx
086357f8 +0x076:  mov    %ebx,%eax
086357fa +0x078:  lea    (%ecx,%eax,1),%eax
086357fd +0x07b:  mov    %eax,-0x1c(%ebp)
08635800 +0x07e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08635805 +0x083:  mov    %eax,(%esp)
08635808 +0x086:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0863580d +0x08b:  mov    %eax,%ebx
0863580f +0x08d:  mov    -0x20(%ebp),%eax
08635812 +0x090:  mov    (%eax),%edi
08635814 +0x092:  mov    -0x20(%ebp),%eax
08635817 +0x095:  mov    0x4(%eax),%esi
0863581a +0x098:  movl   $0x0,0xc(%esp)
08635822 +0x0a0:  movl   $0x92c,0x8(%esp)
0863582a +0x0a8:  movl   $&_ZZN32TimerStatisticsDetailChannelInfo15RegistNextTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
08635832 +0x0b0:  lea    -0x30(%ebp),%eax
08635835 +0x0b3:  mov    %eax,(%esp)
08635838 +0x0b6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863583d +0x0bb:  mov    %ebx,0x14(%esp)
08635841 +0x0bf:  mov    -0x1c(%ebp),%eax
08635844 +0x0c2:  mov    %eax,0x10(%esp)
08635848 +0x0c6:  mov    %edi,0xc(%esp)
0863584c +0x0ca:  mov    %esi,0x8(%esp)
08635850 +0x0ce:  movl   $"content min:%d sec:%d next sec:%d  (channel no:%d)\n",0x4(%esp)
08635858 +0x0d6:  lea    -0x30(%ebp),%eax
0863585b +0x0d9:  mov    %eax,(%esp)
0863585e +0x0dc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08635863 +0x0e1:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08635868 +0x0e6:  movl   $0x0,0x18(%esp)
08635870 +0x0ee:  movl   $0x0,0x14(%esp)
08635878 +0x0f6:  mov    -0x1c(%ebp),%edx
0863587b +0x0f9:  mov    %edx,0x10(%esp)
0863587f +0x0fd:  movl   $0x54,0xc(%esp)
08635887 +0x105:  movl   $0x0,0x8(%esp)
0863588f +0x10d:  movl   $0x2,0x4(%esp)
08635897 +0x115:  mov    %eax,(%esp)
0863589a +0x118:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863589f +0x11d:  mov    $0x1,%eax
086358a4 +0x122:  add    $0x7c,%esp
086358a7 +0x125:  pop    %ebx
086358a8 +0x126:  pop    %esi
086358a9 +0x127:  pop    %edi
086358aa +0x128:  pop    %ebp
086358ab +0x129:  ret
```

## 反编译 C

```c
// TimerStatisticsDetailChannelInfo::RegistNextTimer @ 0x8635782

/* TimerStatisticsDetailChannelInfo::RegistNextTimer() */

undefined4 TimerStatisticsDetailChannelInfo::RegistNextTimer(void)

{
  int iVar1;
  int iVar2;
  CEnvironment *this;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  tm local_64;
  time_t local_38;
  cMyTrace local_34 [16];
  tm *local_24;
  int local_20;
  
  local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_38,&local_64);
  local_20 = (local_24->tm_min % 0x1e) * -0x3c + (0x708 - local_24->tm_sec);
  this = (CEnvironment *)G_CEnvironment();
  uVar3 = CEnvironment::get_channel_no(this);
  iVar1 = local_24->tm_sec;
  iVar2 = local_24->tm_min;
  cMyTrace::cMyTrace(local_34,"bool TimerStatisticsDetailChannelInfo::RegistNextTimer()",0x92c,0);
  cMyTrace::operator()
            (local_34,"content min:%d sec:%d next sec:%d  (channel no:%d)\n",iVar2,iVar1,local_20,
             uVar3);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,2,0,0x54,local_20,0,0);
  return 1;
}
```
