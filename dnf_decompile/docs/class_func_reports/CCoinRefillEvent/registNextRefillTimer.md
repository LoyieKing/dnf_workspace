# registNextRefillTimer

`_ZNK16CCoinRefillEvent21registNextRefillTimerEv`

`CCoinRefillEvent::registNextRefillTimer() const`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832c1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c1fe  _ZNK16CCoinRefillEvent21registNextRefillTimerEv
#           CCoinRefillEvent::registNextRefillTimer() const
# range [0x0832c1fe, 0x0832c358]
0832c1fe +0x000:  push   %ebp
0832c1ff +0x001:  mov    %esp,%ebp
0832c201 +0x003:  push   %ebx
0832c202 +0x004:  sub    $0x94,%esp
0832c208 +0x00a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0832c20f +0x011:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0832c214 +0x016:  mov    %eax,-0x1c(%ebp)
0832c217 +0x019:  lea    -0x4c(%ebp),%eax
0832c21a +0x01c:  mov    %eax,0x4(%esp)
0832c21e +0x020:  lea    -0x1c(%ebp),%eax
0832c221 +0x023:  mov    %eax,(%esp)
0832c224 +0x026:  call   0807e360 <_init+0xc58>
0832c229 +0x02b:  mov    -0x4c(%ebp),%eax
0832c22c +0x02e:  mov    %eax,-0x78(%ebp)
0832c22f +0x031:  mov    -0x48(%ebp),%eax
0832c232 +0x034:  mov    %eax,-0x74(%ebp)
0832c235 +0x037:  mov    -0x44(%ebp),%eax
0832c238 +0x03a:  mov    %eax,-0x70(%ebp)
0832c23b +0x03d:  mov    -0x40(%ebp),%eax
0832c23e +0x040:  mov    %eax,-0x6c(%ebp)
0832c241 +0x043:  mov    -0x3c(%ebp),%eax
0832c244 +0x046:  mov    %eax,-0x68(%ebp)
0832c247 +0x049:  mov    -0x38(%ebp),%eax
0832c24a +0x04c:  mov    %eax,-0x64(%ebp)
0832c24d +0x04f:  mov    -0x34(%ebp),%eax
0832c250 +0x052:  mov    %eax,-0x60(%ebp)
0832c253 +0x055:  mov    -0x30(%ebp),%eax
0832c256 +0x058:  mov    %eax,-0x5c(%ebp)
0832c259 +0x05b:  mov    -0x2c(%ebp),%eax
0832c25c +0x05e:  mov    %eax,-0x58(%ebp)
0832c25f +0x061:  mov    -0x28(%ebp),%eax
0832c262 +0x064:  mov    %eax,-0x54(%ebp)
0832c265 +0x067:  mov    -0x24(%ebp),%eax
0832c268 +0x06a:  mov    %eax,-0x50(%ebp)
0832c26b +0x06d:  lea    -0x4c(%ebp),%eax
0832c26e +0x070:  mov    %eax,0x4(%esp)
0832c272 +0x074:  mov    0x8(%ebp),%eax
0832c275 +0x077:  mov    %eax,(%esp)
0832c278 +0x07a:  call   0832c148 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm>  ; CCoinRefillEvent::getNextEventTime(tm const&) const
0832c27d +0x07f:  mov    %eax,-0x70(%ebp)
0832c280 +0x082:  mov    -0x70(%ebp),%edx
0832c283 +0x085:  mov    -0x44(%ebp),%eax
0832c286 +0x088:  cmp    %eax,%edx
0832c288 +0x08a:  jge    0832c293 <+0x95>
0832c28a +0x08c:  mov    -0x6c(%ebp),%eax
0832c28d +0x08f:  add    $0x1,%eax
0832c290 +0x092:  mov    %eax,-0x6c(%ebp)
0832c293 +0x095:  movl   $0x0,-0x74(%ebp)
0832c29a +0x09c:  movl   $0x0,-0x78(%ebp)
0832c2a1 +0x0a3:  lea    -0x78(%ebp),%eax
0832c2a4 +0x0a6:  mov    %eax,(%esp)
0832c2a7 +0x0a9:  call   0807e820 <_init+0x1118>
0832c2ac +0x0ae:  mov    %eax,-0x20(%ebp)
0832c2af +0x0b1:  mov    -0x20(%ebp),%edx
0832c2b2 +0x0b4:  mov    -0x1c(%ebp),%eax
0832c2b5 +0x0b7:  mov    %edx,%ecx
0832c2b7 +0x0b9:  sub    %eax,%ecx
0832c2b9 +0x0bb:  mov    %ecx,%eax
0832c2bb +0x0bd:  test   %eax,%eax
0832c2bd +0x0bf:  js     0832c34f <+0x151>
0832c2c3 +0x0c5:  mov    -0x20(%ebp),%edx
0832c2c6 +0x0c8:  mov    -0x1c(%ebp),%eax
0832c2c9 +0x0cb:  mov    %edx,%ebx
0832c2cb +0x0cd:  sub    %eax,%ebx
0832c2cd +0x0cf:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0832c2d2 +0x0d4:  movl   $0x0,0x18(%esp)
0832c2da +0x0dc:  movl   $0x0,0x14(%esp)
0832c2e2 +0x0e4:  mov    %ebx,0x10(%esp)
0832c2e6 +0x0e8:  movl   $0x65,0xc(%esp)
0832c2ee +0x0f0:  movl   $0x0,0x8(%esp)
0832c2f6 +0x0f8:  movl   $0x2,0x4(%esp)
0832c2fe +0x100:  mov    %eax,(%esp)
0832c301 +0x103:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0832c306 +0x108:  lea    -0x20(%ebp),%eax
0832c309 +0x10b:  mov    %eax,(%esp)
0832c30c +0x10e:  call   0807e670 <_init+0xf68>
0832c311 +0x113:  mov    %eax,%ebx
0832c313 +0x115:  movl   $0x0,0xc(%esp)
0832c31b +0x11d:  movl   $0x88,0x8(%esp)
0832c323 +0x125:  movl   $&_ZZNK16CCoinRefillEvent21registNextRefillTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
0832c32b +0x12d:  lea    -0x18(%ebp),%eax
0832c32e +0x130:  mov    %eax,(%esp)
0832c331 +0x133:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0832c336 +0x138:  mov    %ebx,0x8(%esp)
0832c33a +0x13c:  movl   $"Next coin refill time is %s",0x4(%esp)
0832c342 +0x144:  lea    -0x18(%ebp),%eax
0832c345 +0x147:  mov    %eax,(%esp)
0832c348 +0x14a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0832c34d +0x14f:  jmp    0832c350 <+0x152>
0832c34f +0x151:  nop
0832c350 +0x152:  add    $0x94,%esp
0832c356 +0x158:  pop    %ebx
0832c357 +0x159:  pop    %ebp
0832c358 +0x15a:  ret
```

## 反编译 C

```c
// CCoinRefillEvent::registNextRefillTimer @ 0x832c1fe

/* CCoinRefillEvent::registNextRefillTimer() const */

void __thiscall CCoinRefillEvent::registNextRefillTimer(CCoinRefillEvent *this)

{
  TimerQueue *pTVar1;
  char *pcVar2;
  int iVar3;
  tm local_7c;
  tm local_50;
  time_t local_24;
  int local_20;
  cMyTrace local_1c [20];
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_20,&local_50);
  local_7c.tm_sec = local_50.tm_sec;
  local_7c.tm_min = local_50.tm_min;
  local_7c.tm_hour = local_50.tm_hour;
  local_7c.tm_mday = local_50.tm_mday;
  local_7c.tm_mon = local_50.tm_mon;
  local_7c.tm_year = local_50.tm_year;
  local_7c.tm_wday = local_50.tm_wday;
  local_7c.tm_yday = local_50.tm_yday;
  local_7c.tm_isdst = local_50.tm_isdst;
  local_7c.tm_gmtoff = local_50.tm_gmtoff;
  local_7c.tm_zone = local_50.tm_zone;
  local_7c.tm_hour = getNextEventTime(this,&local_50);
  if (local_7c.tm_hour < local_50.tm_hour) {
    local_7c.tm_mday = local_7c.tm_mday + 1;
  }
  local_7c.tm_min = 0;
  local_7c.tm_sec = 0;
  local_24 = mktime(&local_7c);
  if (-1 < local_24 - local_20) {
    iVar3 = local_24 - local_20;
    pTVar1 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar1,2,0,0x65,iVar3,0,0);
    pcVar2 = ctime(&local_24);
    cMyTrace::cMyTrace(local_1c,"void CCoinRefillEvent::registNextRefillTimer() const",0x88,0);
    cMyTrace::operator()(local_1c,"Next coin refill time is %s",pcVar2);
  }
  return;
}
```
