# StartEvent

`_ZN14CGuildWarEvent10StartEventE10Word_Param`

`CGuildWarEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CGuildWarEvent` | `0x0811d152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d152  _ZN14CGuildWarEvent10StartEventE10Word_Param
#           CGuildWarEvent::StartEvent(Word_Param)
# range [0x0811d152, 0x0811d28b]
0811d152 +0x000:  push   %ebp
0811d153 +0x001:  mov    %esp,%ebp
0811d155 +0x003:  push   %esi
0811d156 +0x004:  push   %ebx
0811d157 +0x005:  sub    $0x30,%esp
0811d15a +0x008:  mov    0x8(%ebp),%eax
0811d15d +0x00b:  mov    (%eax),%eax
0811d15f +0x00d:  add    $0x34,%eax
0811d162 +0x010:  mov    (%eax),%edx
0811d164 +0x012:  mov    0x8(%ebp),%eax
0811d167 +0x015:  movl   $0x0,0x4(%esp)
0811d16f +0x01d:  mov    %eax,(%esp)
0811d172 +0x020:  call   *%edx
0811d174 +0x022:  xor    $0x1,%eax
0811d177 +0x025:  test   %al,%al
0811d179 +0x027:  je     0811d284 <+0x132>
0811d17f +0x02d:  mov    0x8(%ebp),%eax
0811d182 +0x030:  movl   $0x1,0x4(%esp)
0811d18a +0x038:  mov    %eax,(%esp)
0811d18d +0x03b:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811d192 +0x040:  mov    0x8(%ebp),%eax
0811d195 +0x043:  mov    0xc(%ebp),%edx
0811d198 +0x046:  mov    %edx,0xa(%eax)
0811d19b +0x049:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0811d1a0 +0x04e:  mov    %eax,(%esp)
0811d1a3 +0x051:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0811d1a8 +0x056:  cmp    $0x6,%eax
0811d1ab +0x059:  sete   %al
0811d1ae +0x05c:  test   %al,%al
0811d1b0 +0x05e:  je     0811d284 <+0x132>
0811d1b6 +0x064:  mov    0x8(%ebp),%eax
0811d1b9 +0x067:  movzwl 0xa(%eax),%eax
0811d1bd +0x06b:  movzwl %ax,%eax
0811d1c0 +0x06e:  imul   $0xe10,%eax,%eax
0811d1c6 +0x074:  lea    -0x258(%eax),%ebx
0811d1cc +0x07a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0811d1d1 +0x07f:  movl   $0x0,0x18(%esp)
0811d1d9 +0x087:  movl   $0xa,0x14(%esp)
0811d1e1 +0x08f:  mov    %ebx,0x10(%esp)
0811d1e5 +0x093:  movl   $0x62,0xc(%esp)
0811d1ed +0x09b:  movl   $0x0,0x8(%esp)
0811d1f5 +0x0a3:  movl   $0x2,0x4(%esp)
0811d1fd +0x0ab:  mov    %eax,(%esp)
0811d200 +0x0ae:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0811d205 +0x0b3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0811d20a +0x0b8:  mov    0x1b0(%eax),%eax
0811d210 +0x0be:  movzbl %al,%ebx
0811d213 +0x0c1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0811d218 +0x0c6:  movl   $0x0,0x4(%esp)
0811d220 +0x0ce:  mov    %eax,(%esp)
0811d223 +0x0d1:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0811d228 +0x0d6:  mov    %ebx,0x4(%esp)
0811d22c +0x0da:  mov    %eax,(%esp)
0811d22f +0x0dd:  call   0846df90 <_ZN17CGuildServerProxy17SendGuildWarStartEh>  ; CGuildServerProxy::SendGuildWarStart(unsigned char)
0811d234 +0x0e2:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0811d239 +0x0e7:  mov    0x1b0(%eax),%esi
0811d23f +0x0ed:  movzwl 0xc(%ebp),%eax
0811d243 +0x0f1:  movzwl %ax,%ebx
0811d246 +0x0f4:  movl   $0x0,0xc(%esp)
0811d24e +0x0fc:  movl   $0x39,0x8(%esp)
0811d256 +0x104:  movl   $&_ZZN14CGuildWarEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0811d25e +0x10c:  lea    -0x18(%ebp),%eax
0811d261 +0x10f:  mov    %eax,(%esp)
0811d264 +0x112:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811d269 +0x117:  mov    %esi,0xc(%esp)
0811d26d +0x11b:  mov    %ebx,0x8(%esp)
0811d271 +0x11f:  movl   $"Guild War Event Start! time(%d), server(%d)",0x4(%esp)
0811d279 +0x127:  lea    -0x18(%ebp),%eax
0811d27c +0x12a:  mov    %eax,(%esp)
0811d27f +0x12d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811d284 +0x132:  add    $0x30,%esp
0811d287 +0x135:  pop    %ebx
0811d288 +0x136:  pop    %esi
0811d289 +0x137:  pop    %ebp
0811d28a +0x138:  ret
0811d28b +0x139:  nop
```

## 反编译 C

```c
// CGuildWarEvent::StartEvent @ 0x811d152

/* CGuildWarEvent::StartEvent(Word_Param) */

void __thiscall CGuildWarEvent::StartEvent(CGuildWarEvent *this,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  GameWorld *this_00;
  int iVar4;
  TimerQueue *pTVar5;
  CGuildServerProxy *this_01;
  cMyTrace local_1c [16];
  
  cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar3 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    *(uint *)(this + 10) = param_2;
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
      iVar4 = G_CEnvironment();
      uVar2 = *(undefined4 *)(iVar4 + 0x1b0);
      cMyTrace::cMyTrace(local_1c,"virtual void CGuildWarEvent::StartEvent(Word_Param)",0x39,0);
      cMyTrace::operator()
                (local_1c,"Guild War Event Start! time(%d), server(%d)",param_2 & 0xffff,uVar2);
    }
  }
  return;
}
```
