# RegistNextTimer

`_ZN15CEventCreateDnf15RegistNextTimerEv`

`CEventCreateDnf::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163d4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163d4c  _ZN15CEventCreateDnf15RegistNextTimerEv
#           CEventCreateDnf::RegistNextTimer()
# range [0x08163d4c, 0x08163e7b]
08163d4c +0x000:  push   %ebp
08163d4d +0x001:  mov    %esp,%ebp
08163d4f +0x003:  push   %ebx
08163d50 +0x004:  sub    $0x74,%esp
08163d53 +0x007:  mov    0x8(%ebp),%eax
08163d56 +0x00a:  mov    (%eax),%eax
08163d58 +0x00c:  add    $0x34,%eax
08163d5b +0x00f:  mov    (%eax),%edx
08163d5d +0x011:  mov    0x8(%ebp),%eax
08163d60 +0x014:  movl   $0x0,0x4(%esp)
08163d68 +0x01c:  mov    %eax,(%esp)
08163d6b +0x01f:  call   *%edx
08163d6d +0x021:  xor    $0x1,%eax
08163d70 +0x024:  test   %al,%al
08163d72 +0x026:  jne    08163e74 <+0x128>
08163d78 +0x02c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08163d7f +0x033:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08163d84 +0x038:  mov    %eax,-0x20(%ebp)
08163d87 +0x03b:  lea    -0x4c(%ebp),%eax
08163d8a +0x03e:  mov    %eax,0x4(%esp)
08163d8e +0x042:  lea    -0x20(%ebp),%eax
08163d91 +0x045:  mov    %eax,(%esp)
08163d94 +0x048:  call   0807e360 <_init+0xc58>
08163d99 +0x04d:  mov    0x8(%ebp),%eax
08163d9c +0x050:  movzbl 0x11(%eax),%eax
08163da0 +0x054:  movzbl %al,%eax
08163da3 +0x057:  mov    %eax,-0x44(%ebp)
08163da6 +0x05a:  movl   $0x0,-0x48(%ebp)
08163dad +0x061:  movl   $0x0,-0x4c(%ebp)
08163db4 +0x068:  lea    -0x4c(%ebp),%eax
08163db7 +0x06b:  mov    %eax,(%esp)
08163dba +0x06e:  call   0807e820 <_init+0x1118>
08163dbf +0x073:  mov    %eax,-0xc(%ebp)
08163dc2 +0x076:  mov    -0x20(%ebp),%eax
08163dc5 +0x079:  cmp    %eax,-0xc(%ebp)
08163dc8 +0x07c:  jl     08163ddd <+0x91>
08163dca +0x07e:  movl   $0x2,0x4(%esp)
08163dd2 +0x086:  mov    0x8(%ebp),%eax
08163dd5 +0x089:  mov    %eax,(%esp)
08163dd8 +0x08c:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
08163ddd +0x091:  mov    0x8(%ebp),%eax
08163de0 +0x094:  movzwl 0x12(%eax),%eax
08163de4 +0x098:  movzwl %ax,%ebx
08163de7 +0x09b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08163dec +0x0a0:  movl   $0x0,0x18(%esp)
08163df4 +0x0a8:  movl   $0x0,0x14(%esp)
08163dfc +0x0b0:  mov    %ebx,0x10(%esp)
08163e00 +0x0b4:  movl   $0xae,0xc(%esp)
08163e08 +0x0bc:  movl   $0x0,0x8(%esp)
08163e10 +0x0c4:  movl   $0x2,0x4(%esp)
08163e18 +0x0cc:  mov    %eax,(%esp)
08163e1b +0x0cf:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08163e20 +0x0d4:  mov    0x8(%ebp),%eax
08163e23 +0x0d7:  movzwl 0x12(%eax),%eax
08163e27 +0x0db:  movzwl %ax,%ebx
08163e2a +0x0de:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08163e31 +0x0e5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08163e36 +0x0ea:  add    %eax,%ebx
08163e38 +0x0ec:  movl   $0x0,0xc(%esp)
08163e40 +0x0f4:  movl   $0x55,0x8(%esp)
08163e48 +0x0fc:  movl   $&_ZZN15CEventCreateDnf15RegistNextTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
08163e50 +0x104:  lea    -0x1c(%ebp),%eax
08163e53 +0x107:  mov    %eax,(%esp)
08163e56 +0x10a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08163e5b +0x10f:  mov    %ebx,0x8(%esp)
08163e5f +0x113:  movl   $"[Taiwan, CreateDnfEvent] next db load time:%d",0x4(%esp)
08163e67 +0x11b:  lea    -0x1c(%ebp),%eax
08163e6a +0x11e:  mov    %eax,(%esp)
08163e6d +0x121:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08163e72 +0x126:  jmp    08163e75 <+0x129>
08163e74 +0x128:  nop
08163e75 +0x129:  add    $0x74,%esp
08163e78 +0x12c:  pop    %ebx
08163e79 +0x12d:  pop    %ebp
08163e7a +0x12e:  ret
08163e7b +0x12f:  nop
```

## 反编译 C

```c
// CEventCreateDnf::RegistNextTimer @ 0x8163d4c

/* CEventCreateDnf::RegistNextTimer() */

void __thiscall CEventCreateDnf::RegistNextTimer(CEventCreateDnf *this)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  TimerQueue *pTVar4;
  int iVar5;
  tm local_50;
  int local_24;
  cMyTrace local_20 [16];
  time_t local_10;
  
  cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar3 == '\x01') {
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_24,&local_50);
    local_50.tm_hour = (int)(byte)this[0x11];
    local_50.tm_min = 0;
    local_50.tm_sec = 0;
    local_10 = mktime(&local_50);
    if (local_24 <= local_10) {
      setState(this,2);
    }
    uVar1 = *(undefined2 *)(this + 0x12);
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0xae,uVar1,0,0);
    uVar2 = *(ushort *)(this + 0x12);
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    cMyTrace::cMyTrace(local_20,"void CEventCreateDnf::RegistNextTimer()",0x55,0);
    cMyTrace::operator()
              (local_20,"[Taiwan, CreateDnfEvent] next db load time:%d",(uint)uVar2 + iVar5);
  }
  return;
}
```
