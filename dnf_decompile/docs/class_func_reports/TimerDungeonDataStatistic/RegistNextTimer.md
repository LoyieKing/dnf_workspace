# RegistNextTimer

`_ZN25TimerDungeonDataStatistic15RegistNextTimerEv`

`TimerDungeonDataStatistic::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerDungeonDataStatistic` | `0x08636856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636856  _ZN25TimerDungeonDataStatistic15RegistNextTimerEv
#           TimerDungeonDataStatistic::RegistNextTimer()
# range [0x08636856, 0x08636959]
08636856 +0x000:  push   %ebp
08636857 +0x001:  mov    %esp,%ebp
08636859 +0x003:  push   %ebx
0863685a +0x004:  sub    $0x64,%esp
0863685d +0x007:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08636864 +0x00e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08636869 +0x013:  mov    %eax,-0x1c(%ebp)
0863686c +0x016:  lea    -0x48(%ebp),%eax
0863686f +0x019:  mov    %eax,0x4(%esp)
08636873 +0x01d:  lea    -0x1c(%ebp),%eax
08636876 +0x020:  mov    %eax,(%esp)
08636879 +0x023:  call   0807e360 <_init+0xc58>
0863687e +0x028:  mov    %eax,-0x18(%ebp)
08636881 +0x02b:  mov    -0x18(%ebp),%eax
08636884 +0x02e:  mov    0x8(%eax),%eax
08636887 +0x031:  mov    %eax,-0x14(%ebp)
0863688a +0x034:  mov    -0x18(%ebp),%eax
0863688d +0x037:  movl   $0x5,0x8(%eax)
08636894 +0x03e:  mov    -0x18(%ebp),%eax
08636897 +0x041:  movl   $0x0,0x4(%eax)
0863689e +0x048:  mov    -0x18(%ebp),%eax
086368a1 +0x04b:  movl   $0x0,(%eax)
086368a7 +0x051:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086368ac +0x056:  mov    0x1b0(%eax),%ecx
086368b2 +0x05c:  mov    $0x88888889,%edx
086368b7 +0x061:  mov    %ecx,%eax
086368b9 +0x063:  imul   %edx
086368bb +0x065:  lea    (%edx,%ecx,1),%eax
086368be +0x068:  mov    %eax,%edx
086368c0 +0x06a:  sar    $0x4,%edx
086368c3 +0x06d:  mov    %ecx,%eax
086368c5 +0x06f:  sar    $0x1f,%eax
086368c8 +0x072:  mov    %edx,%ebx
086368ca +0x074:  sub    %eax,%ebx
086368cc +0x076:  mov    %ebx,%eax
086368ce +0x078:  lea    (%eax,%eax,1),%edx
086368d1 +0x07b:  mov    %edx,%eax
086368d3 +0x07d:  shl    $0x4,%eax
086368d6 +0x080:  sub    %edx,%eax
086368d8 +0x082:  mov    %ecx,%edx
086368da +0x084:  sub    %eax,%edx
086368dc +0x086:  mov    %edx,%eax
086368de +0x088:  mov    -0x18(%ebp),%edx
086368e1 +0x08b:  mov    %eax,0x4(%edx)
086368e4 +0x08e:  mov    -0x18(%ebp),%eax
086368e7 +0x091:  mov    %eax,(%esp)
086368ea +0x094:  call   0807e820 <_init+0x1118>
086368ef +0x099:  mov    %eax,-0x10(%ebp)
086368f2 +0x09c:  mov    -0x18(%ebp),%eax
086368f5 +0x09f:  mov    0x8(%eax),%eax
086368f8 +0x0a2:  cmp    -0x14(%ebp),%eax
086368fb +0x0a5:  jg     08636904 <+0xae>
086368fd +0x0a7:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x10(%ebp)
08636904 +0x0ae:  mov    -0x1c(%ebp),%eax
08636907 +0x0b1:  mov    -0x10(%ebp),%edx
0863690a +0x0b4:  mov    %edx,%ecx
0863690c +0x0b6:  sub    %eax,%ecx
0863690e +0x0b8:  mov    %ecx,%eax
08636910 +0x0ba:  mov    %eax,-0xc(%ebp)
08636913 +0x0bd:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08636918 +0x0c2:  movl   $0x0,0x18(%esp)
08636920 +0x0ca:  movl   $0x0,0x14(%esp)
08636928 +0x0d2:  mov    -0xc(%ebp),%edx
0863692b +0x0d5:  mov    %edx,0x10(%esp)
0863692f +0x0d9:  movl   $0x66,0xc(%esp)
08636937 +0x0e1:  movl   $0x0,0x8(%esp)
0863693f +0x0e9:  movl   $0x2,0x4(%esp)
08636947 +0x0f1:  mov    %eax,(%esp)
0863694a +0x0f4:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863694f +0x0f9:  mov    $0x1,%eax
08636954 +0x0fe:  add    $0x64,%esp
08636957 +0x101:  pop    %ebx
08636958 +0x102:  pop    %ebp
08636959 +0x103:  ret
```

## 反编译 C

```c
// TimerDungeonDataStatistic::RegistNextTimer @ 0x8636856

/* TimerDungeonDataStatistic::RegistNextTimer() */

undefined4 TimerDungeonDataStatistic::RegistNextTimer(void)

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
  TimerQueue::InsertTimer(pTVar2,2,0,0x66,local_10,0,0);
  return 1;
}
```
