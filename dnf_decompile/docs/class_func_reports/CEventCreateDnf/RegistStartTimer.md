# RegistStartTimer

`_ZN15CEventCreateDnf16RegistStartTimerEb`

`CEventCreateDnf::RegistStartTimer(bool)`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163e7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163e7c  _ZN15CEventCreateDnf16RegistStartTimerEb
#           CEventCreateDnf::RegistStartTimer(bool)
# range [0x08163e7c, 0x08164091]
08163e7c +0x000:  push   %ebp
08163e7d +0x001:  mov    %esp,%ebp
08163e7f +0x003:  push   %ebx
08163e80 +0x004:  sub    $0x94,%esp
08163e86 +0x00a:  mov    0xc(%ebp),%eax
08163e89 +0x00d:  mov    %al,-0x6c(%ebp)
08163e8c +0x010:  mov    0x8(%ebp),%eax
08163e8f +0x013:  mov    (%eax),%eax
08163e91 +0x015:  add    $0x34,%eax
08163e94 +0x018:  mov    (%eax),%edx
08163e96 +0x01a:  mov    0x8(%ebp),%eax
08163e99 +0x01d:  movl   $0x0,0x4(%esp)
08163ea1 +0x025:  mov    %eax,(%esp)
08163ea4 +0x028:  call   *%edx
08163ea6 +0x02a:  xor    $0x1,%eax
08163ea9 +0x02d:  test   %al,%al
08163eab +0x02f:  jne    08164088 <+0x20c>
08163eb1 +0x035:  movl   $0x0,0xc(%esp)
08163eb9 +0x03d:  movl   $0x0,0x8(%esp)
08163ec1 +0x045:  movl   $0x0,0x4(%esp)
08163ec9 +0x04d:  mov    0x8(%ebp),%eax
08163ecc +0x050:  mov    %eax,(%esp)
08163ecf +0x053:  call   081640d4 <_ZN15CEventCreateDnf12SetEventInfoEiii>  ; CEventCreateDnf::SetEventInfo(int, int, int)
08163ed4 +0x058:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08163edb +0x05f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08163ee0 +0x064:  mov    %eax,-0x34(%ebp)
08163ee3 +0x067:  lea    -0x60(%ebp),%eax
08163ee6 +0x06a:  mov    %eax,0x4(%esp)
08163eea +0x06e:  lea    -0x34(%ebp),%eax
08163eed +0x071:  mov    %eax,(%esp)
08163ef0 +0x074:  call   0807e360 <_init+0xc58>
08163ef5 +0x079:  mov    0x8(%ebp),%eax
08163ef8 +0x07c:  movzbl 0x10(%eax),%eax
08163efc +0x080:  movzbl %al,%eax
08163eff +0x083:  mov    %eax,-0x58(%ebp)
08163f02 +0x086:  movl   $0x0,-0x5c(%ebp)
08163f09 +0x08d:  movl   $0x0,-0x60(%ebp)
08163f10 +0x094:  lea    -0x60(%ebp),%eax
08163f13 +0x097:  mov    %eax,(%esp)
08163f16 +0x09a:  call   0807e820 <_init+0x1118>
08163f1b +0x09f:  mov    %eax,-0x10(%ebp)
08163f1e +0x0a2:  mov    -0x34(%ebp),%eax
08163f21 +0x0a5:  cmp    %eax,-0x10(%ebp)
08163f24 +0x0a8:  jl     08163fc2 <+0x146>
08163f2a +0x0ae:  movl   $0x0,0x4(%esp)
08163f32 +0x0b6:  mov    0x8(%ebp),%eax
08163f35 +0x0b9:  mov    %eax,(%esp)
08163f38 +0x0bc:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
08163f3d +0x0c1:  mov    -0x34(%ebp),%eax
08163f40 +0x0c4:  mov    -0x10(%ebp),%edx
08163f43 +0x0c7:  mov    %edx,%ebx
08163f45 +0x0c9:  sub    %eax,%ebx
08163f47 +0x0cb:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08163f4c +0x0d0:  movl   $0x0,0x18(%esp)
08163f54 +0x0d8:  movl   $0x0,0x14(%esp)
08163f5c +0x0e0:  mov    %ebx,0x10(%esp)
08163f60 +0x0e4:  movl   $0xae,0xc(%esp)
08163f68 +0x0ec:  movl   $0x0,0x8(%esp)
08163f70 +0x0f4:  movl   $0x2,0x4(%esp)
08163f78 +0x0fc:  mov    %eax,(%esp)
08163f7b +0x0ff:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08163f80 +0x104:  movl   $0x0,0xc(%esp)
08163f88 +0x10c:  movl   $0x6e,0x8(%esp)
08163f90 +0x114:  movl   $&_ZZN15CEventCreateDnf16RegistStartTimerEbE19__PRETTY_FUNCTION__,0x4(%esp)
08163f98 +0x11c:  lea    -0x30(%ebp),%eax
08163f9b +0x11f:  mov    %eax,(%esp)
08163f9e +0x122:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08163fa3 +0x127:  mov    -0x10(%ebp),%eax
08163fa6 +0x12a:  mov    %eax,0x8(%esp)
08163faa +0x12e:  movl   $"[Taiwan, CreateDnfEvent] next db load time:%d",0x4(%esp)
08163fb2 +0x136:  lea    -0x30(%ebp),%eax
08163fb5 +0x139:  mov    %eax,(%esp)
08163fb8 +0x13c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08163fbd +0x141:  jmp    08164089 <+0x20d>
08163fc2 +0x146:  call   0815ba94 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv>  ; DBSelectCreateDnfEventInfo::makeRequest()
08163fc7 +0x14b:  movl   $0x1,0x4(%esp)
08163fcf +0x153:  mov    0x8(%ebp),%eax
08163fd2 +0x156:  mov    %eax,(%esp)
08163fd5 +0x159:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
08163fda +0x15e:  mov    0x8(%ebp),%eax
08163fdd +0x161:  movzwl 0x12(%eax),%eax
08163fe1 +0x165:  movzwl %ax,%eax
08163fe4 +0x168:  add    -0x10(%ebp),%eax
08163fe7 +0x16b:  mov    %eax,-0xc(%ebp)
08163fea +0x16e:  jmp    08163ff9 <+0x17d>
08163fec +0x170:  mov    0x8(%ebp),%eax
08163fef +0x173:  movzwl 0x12(%eax),%eax
08163ff3 +0x177:  movzwl %ax,%eax
08163ff6 +0x17a:  add    %eax,-0xc(%ebp)
08163ff9 +0x17d:  mov    -0x34(%ebp),%eax
08163ffc +0x180:  cmp    %eax,-0xc(%ebp)
08163fff +0x183:  setl   %al
08164002 +0x186:  test   %al,%al
08164004 +0x188:  jne    08163fec <+0x170>
08164006 +0x18a:  mov    -0x34(%ebp),%eax
08164009 +0x18d:  mov    -0xc(%ebp),%edx
0816400c +0x190:  mov    %edx,%ebx
0816400e +0x192:  sub    %eax,%ebx
08164010 +0x194:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08164015 +0x199:  movl   $0x0,0x18(%esp)
0816401d +0x1a1:  movl   $0x0,0x14(%esp)
08164025 +0x1a9:  mov    %ebx,0x10(%esp)
08164029 +0x1ad:  movl   $0xae,0xc(%esp)
08164031 +0x1b5:  movl   $0x0,0x8(%esp)
08164039 +0x1bd:  movl   $0x2,0x4(%esp)
08164041 +0x1c5:  mov    %eax,(%esp)
08164044 +0x1c8:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08164049 +0x1cd:  movl   $0x0,0xc(%esp)
08164051 +0x1d5:  movl   $0x7e,0x8(%esp)
08164059 +0x1dd:  movl   $&_ZZN15CEventCreateDnf16RegistStartTimerEbE19__PRETTY_FUNCTION__,0x4(%esp)
08164061 +0x1e5:  lea    -0x20(%ebp),%eax
08164064 +0x1e8:  mov    %eax,(%esp)
08164067 +0x1eb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816406c +0x1f0:  mov    -0xc(%ebp),%eax
0816406f +0x1f3:  mov    %eax,0x8(%esp)
08164073 +0x1f7:  movl   $"[Taiwan, CreateDnfEvent] next db load time:%d",0x4(%esp)
0816407b +0x1ff:  lea    -0x20(%ebp),%eax
0816407e +0x202:  mov    %eax,(%esp)
08164081 +0x205:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08164086 +0x20a:  jmp    08164089 <+0x20d>
08164088 +0x20c:  nop
08164089 +0x20d:  add    $0x94,%esp
0816408f +0x213:  pop    %ebx
08164090 +0x214:  pop    %ebp
08164091 +0x215:  ret
```

## 反编译 C

```c
// CEventCreateDnf::RegistStartTimer @ 0x8163e7c

/* CEventCreateDnf::RegistStartTimer(bool) */

void CEventCreateDnf::RegistStartTimer(bool param_1)

{
  char cVar1;
  TimerQueue *pTVar2;
  int iVar3;
  undefined3 in_stack_00000005;
  tm local_64;
  int local_38;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  cVar1 = (**(code **)(*(int *)_param_1 + 0x34))(_param_1,0);
  if (cVar1 == '\x01') {
    SetEventInfo(_param_1,0,0,0);
    local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_38,&local_64);
    local_64.tm_hour = (int)(byte)_param_1[0x10];
    local_64.tm_min = 0;
    local_64.tm_sec = 0;
    local_14 = mktime(&local_64);
    if (local_14 < local_38) {
      DBSelectCreateDnfEventInfo::makeRequest();
      setState(_param_1,1);
      for (local_10 = (uint)*(ushort *)(_param_1 + 0x12) + local_14; local_10 < local_38;
          local_10 = local_10 + (uint)*(ushort *)(_param_1 + 0x12)) {
      }
      iVar3 = local_10 - local_38;
      pTVar2 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar2,2,0,0xae,iVar3,0,0);
      cMyTrace::cMyTrace(local_24,"void CEventCreateDnf::RegistStartTimer(bool)",0x7e,0);
      cMyTrace::operator()(local_24,"[Taiwan, CreateDnfEvent] next db load time:%d",local_10);
    }
    else {
      setState(_param_1,0);
      iVar3 = local_14 - local_38;
      pTVar2 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar2,2,0,0xae,iVar3,0,0);
      cMyTrace::cMyTrace(local_34,"void CEventCreateDnf::RegistStartTimer(bool)",0x6e,0);
      cMyTrace::operator()(local_34,"[Taiwan, CreateDnfEvent] next db load time:%d",local_14);
    }
  }
  return;
}
```
