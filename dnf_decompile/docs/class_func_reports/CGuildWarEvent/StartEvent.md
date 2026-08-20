# StartEvent

`_ZN14CGuildWarEvent10StartEventEv`

`CGuildWarEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CGuildWarEvent` | `0x0811d024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d024  _ZN14CGuildWarEvent10StartEventEv
#           CGuildWarEvent::StartEvent()
# range [0x0811d024, 0x0811d151]
0811d024 +0x000:  push   %ebp
0811d025 +0x001:  mov    %esp,%ebp
0811d027 +0x003:  push   %ebx
0811d028 +0x004:  sub    $0x34,%esp
0811d02b +0x007:  mov    0x8(%ebp),%eax
0811d02e +0x00a:  mov    (%eax),%eax
0811d030 +0x00c:  add    $0x34,%eax
0811d033 +0x00f:  mov    (%eax),%edx
0811d035 +0x011:  mov    0x8(%ebp),%eax
0811d038 +0x014:  movl   $0x0,0x4(%esp)
0811d040 +0x01c:  mov    %eax,(%esp)
0811d043 +0x01f:  call   *%edx
0811d045 +0x021:  xor    $0x1,%eax
0811d048 +0x024:  test   %al,%al
0811d04a +0x026:  je     0811d14c <+0x128>
0811d050 +0x02c:  mov    0x8(%ebp),%eax
0811d053 +0x02f:  movl   $0x1,0x4(%esp)
0811d05b +0x037:  mov    %eax,(%esp)
0811d05e +0x03a:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811d063 +0x03f:  mov    0x8(%ebp),%eax
0811d066 +0x042:  movw   $0x5,0xa(%eax)
0811d06c +0x048:  mov    0x8(%ebp),%eax
0811d06f +0x04b:  movw   $0x0,0xc(%eax)
0811d075 +0x051:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0811d07a +0x056:  mov    %eax,(%esp)
0811d07d +0x059:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0811d082 +0x05e:  cmp    $0x6,%eax
0811d085 +0x061:  sete   %al
0811d088 +0x064:  test   %al,%al
0811d08a +0x066:  je     0811d14c <+0x128>
0811d090 +0x06c:  mov    0x8(%ebp),%eax
0811d093 +0x06f:  movzwl 0xa(%eax),%eax
0811d097 +0x073:  movzwl %ax,%eax
0811d09a +0x076:  imul   $0xe10,%eax,%eax
0811d0a0 +0x07c:  lea    -0x258(%eax),%ebx
0811d0a6 +0x082:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0811d0ab +0x087:  movl   $0x0,0x18(%esp)
0811d0b3 +0x08f:  movl   $0xa,0x14(%esp)
0811d0bb +0x097:  mov    %ebx,0x10(%esp)
0811d0bf +0x09b:  movl   $0x62,0xc(%esp)
0811d0c7 +0x0a3:  movl   $0x0,0x8(%esp)
0811d0cf +0x0ab:  movl   $0x2,0x4(%esp)
0811d0d7 +0x0b3:  mov    %eax,(%esp)
0811d0da +0x0b6:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0811d0df +0x0bb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0811d0e4 +0x0c0:  mov    0x1b0(%eax),%eax
0811d0ea +0x0c6:  movzbl %al,%ebx
0811d0ed +0x0c9:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0811d0f2 +0x0ce:  movl   $0x0,0x4(%esp)
0811d0fa +0x0d6:  mov    %eax,(%esp)
0811d0fd +0x0d9:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0811d102 +0x0de:  mov    %ebx,0x4(%esp)
0811d106 +0x0e2:  mov    %eax,(%esp)
0811d109 +0x0e5:  call   0846df90 <_ZN17CGuildServerProxy17SendGuildWarStartEh>  ; CGuildServerProxy::SendGuildWarStart(unsigned char)
0811d10e +0x0ea:  movl   $0x0,0xc(%esp)
0811d116 +0x0f2:  movl   $0x27,0x8(%esp)
0811d11e +0x0fa:  movl   $&_ZZN14CGuildWarEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0811d126 +0x102:  lea    -0x18(%ebp),%eax
0811d129 +0x105:  mov    %eax,(%esp)
0811d12c +0x108:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811d131 +0x10d:  movl   $0x5,0x8(%esp)
0811d139 +0x115:  movl   $"Guild War Event Start! time(%d)",0x4(%esp)
0811d141 +0x11d:  lea    -0x18(%ebp),%eax
0811d144 +0x120:  mov    %eax,(%esp)
0811d147 +0x123:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811d14c +0x128:  add    $0x34,%esp
0811d14f +0x12b:  pop    %ebx
0811d150 +0x12c:  pop    %ebp
0811d151 +0x12d:  ret
```

## 反编译 C

```c
// CGuildWarEvent::StartEvent @ 0x811d024

/* CGuildWarEvent::StartEvent() */

void __thiscall CGuildWarEvent::StartEvent(CGuildWarEvent *this)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  GameWorld *this_00;
  int iVar4;
  TimerQueue *pTVar5;
  CGuildServerProxy *this_01;
  cMyTrace local_1c [20];
  
  cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar3 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    *(undefined2 *)(this + 10) = 5;
    *(undefined2 *)(this + 0xc) = 0;
    this_00 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(this_00);
    if (iVar4 == 6) {
      uVar1 = *(ushort *)(this + 10);
      pTVar5 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar5,2,0,0x62,(uint)uVar1 * 0xe10 + -600,10,0);
      iVar4 = G_CEnvironment();
      uVar2 = *(undefined4 *)(iVar4 + 0x1b0);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildWarStart(this_01,(uchar)uVar2);
      cMyTrace::cMyTrace(local_1c,"virtual void CGuildWarEvent::StartEvent()",0x27,0);
      cMyTrace::operator()(local_1c,"Guild War Event Start! time(%d)",5);
    }
  }
  return;
}
```
