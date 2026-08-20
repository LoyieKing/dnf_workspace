# dispatch_sig

`_ZN29Inter_MonitorServerEventStart12dispatch_sigEP5CUserPci`

`Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorServerEventStart` | `0x084cf3ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf3ca  _ZN29Inter_MonitorServerEventStart12dispatch_sigEP5CUserPci
#           Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int)
# range [0x084cf3ca, 0x084cf541]
084cf3ca +0x000:  push   %ebp
084cf3cb +0x001:  mov    %esp,%ebp
084cf3cd +0x003:  push   %edi
084cf3ce +0x004:  push   %esi
084cf3cf +0x005:  push   %ebx
084cf3d0 +0x006:  sub    $0x5c,%esp
084cf3d3 +0x009:  mov    0x10(%ebp),%eax
084cf3d6 +0x00c:  mov    %eax,-0x1c(%ebp)
084cf3d9 +0x00f:  lea    -0x48(%ebp),%eax
084cf3dc +0x012:  mov    %eax,(%esp)
084cf3df +0x015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cf3e4 +0x01a:  mov    -0x1c(%ebp),%eax
084cf3e7 +0x01d:  mov    0xa(%eax),%eax
084cf3ea +0x020:  cmp    $0x1,%eax
084cf3ed +0x023:  jne    084cf4d1 <+0x107>
084cf3f3 +0x029:  mov    -0x1c(%ebp),%eax
084cf3f6 +0x02c:  movzwl 0x10(%eax),%eax
084cf3fa +0x030:  movswl %ax,%edx
084cf3fd +0x033:  mov    -0x1c(%ebp),%eax
084cf400 +0x036:  mov    0xa(%eax),%eax
084cf403 +0x039:  cwtl
084cf404 +0x03a:  movl   $0x0,0xc(%esp)
084cf40c +0x042:  mov    %edx,0x8(%esp)
084cf410 +0x046:  mov    %eax,0x4(%esp)
084cf414 +0x04a:  movl   $0x1,(%esp)
084cf41b +0x051:  call   084cf2de <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser>  ; Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*)
084cf420 +0x056:  mov    -0x1c(%ebp),%eax
084cf423 +0x059:  movzwl 0xe(%eax),%eax
084cf427 +0x05d:  movzwl %ax,%eax
084cf42a +0x060:  mov    %eax,(%esp)
084cf42d +0x063:  call   084e9248 <_GLOBAL__I__Z7getUserj+0x1fa>  ; global constructors keyed to getUser(unsigned int)+0x1fa
084cf432 +0x068:  mov    -0x1c(%ebp),%eax
084cf435 +0x06b:  movzwl 0x10(%eax),%eax
084cf439 +0x06f:  movzwl %ax,%edx
084cf43c +0x072:  mov    -0x1c(%ebp),%eax
084cf43f +0x075:  mov    0xa(%eax),%eax
084cf442 +0x078:  mov    %edx,0x4(%esp)
084cf446 +0x07c:  mov    %eax,(%esp)
084cf449 +0x07f:  call   084e925f <_GLOBAL__I__Z7getUserj+0x211>  ; global constructors keyed to getUser(unsigned int)+0x211
084cf44e +0x084:  mov    -0x1c(%ebp),%eax
084cf451 +0x087:  mov    0xa(%eax),%edi
084cf454 +0x08a:  mov    -0x1c(%ebp),%eax
084cf457 +0x08d:  movzwl 0xe(%eax),%eax
084cf45b +0x091:  movzwl %ax,%esi
084cf45e +0x094:  mov    -0x1c(%ebp),%eax
084cf461 +0x097:  movzwl 0x10(%eax),%eax
084cf465 +0x09b:  movzwl %ax,%ebx
084cf468 +0x09e:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
084cf46d +0x0a3:  mov    %edi,0x18(%esp)
084cf471 +0x0a7:  mov    %esi,0x14(%esp)
084cf475 +0x0ab:  mov    %ebx,0x10(%esp)
084cf479 +0x0af:  movl   $0x53,0xc(%esp)
084cf481 +0x0b7:  movl   $0x0,0x8(%esp)
084cf489 +0x0bf:  movl   $0x2,0x4(%esp)
084cf491 +0x0c7:  mov    %eax,(%esp)
084cf494 +0x0ca:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
084cf499 +0x0cf:  movl   $0x0,0xc(%esp)
084cf4a1 +0x0d7:  movl   $0x2c48,0x8(%esp)
084cf4a9 +0x0df:  movl   $&_ZZN29Inter_MonitorServerEventStart12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084cf4b1 +0x0e7:  lea    -0x3c(%ebp),%eax
084cf4b4 +0x0ea:  mov    %eax,(%esp)
084cf4b7 +0x0ed:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cf4bc +0x0f2:  movl   $"X-Mas Event Start",0x4(%esp)
084cf4c4 +0x0fa:  lea    -0x3c(%ebp),%eax
084cf4c7 +0x0fd:  mov    %eax,(%esp)
084cf4ca +0x100:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cf4cf +0x105:  jmp    084cf511 <+0x147>
084cf4d1 +0x107:  mov    -0x1c(%ebp),%eax
084cf4d4 +0x10a:  mov    0xa(%eax),%ebx
084cf4d7 +0x10d:  movl   $0x5,0xc(%esp)
084cf4df +0x115:  movl   $0x2c4b,0x8(%esp)
084cf4e7 +0x11d:  movl   $&_ZZN29Inter_MonitorServerEventStart12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084cf4ef +0x125:  lea    -0x2c(%ebp),%eax
084cf4f2 +0x128:  mov    %eax,(%esp)
084cf4f5 +0x12b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cf4fa +0x130:  mov    %ebx,0x8(%esp)
084cf4fe +0x134:  movl   $"Unknown ServerEvent (%d)",0x4(%esp)
084cf506 +0x13c:  lea    -0x2c(%ebp),%eax
084cf509 +0x13f:  mov    %eax,(%esp)
084cf50c +0x142:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cf511 +0x147:  mov    $0x0,%ebx
084cf516 +0x14c:  lea    -0x48(%ebp),%eax
084cf519 +0x14f:  mov    %eax,(%esp)
084cf51c +0x152:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cf521 +0x157:  mov    %ebx,%eax
084cf523 +0x159:  add    $0x5c,%esp
084cf526 +0x15c:  pop    %ebx
084cf527 +0x15d:  pop    %esi
084cf528 +0x15e:  pop    %edi
084cf529 +0x15f:  pop    %ebp
084cf52a +0x160:  ret
084cf52b +0x161:  mov    %edx,%ebx
084cf52d +0x163:  mov    %eax,%esi
084cf52f +0x165:  lea    -0x48(%ebp),%eax
084cf532 +0x168:  mov    %eax,(%esp)
084cf535 +0x16b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cf53a +0x170:  mov    %esi,%eax
084cf53c +0x172:  mov    %ebx,%edx
084cf53e +0x174:  mov    %eax,(%esp)
084cf541 +0x177:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_MonitorServerEventStart::dispatch_sig @ 0x84cf3ca

/* Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorServerEventStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  PacketGuard::PacketGuard(local_4c);
  if (*(int *)(local_20 + 10) == 1) {
                    /* try { // try from 084cf41b to 084cf510 has its CatchHandler @ 084cf52b */
    SendEventNotiPacket(true,(short)*(undefined4 *)(local_20 + 10),*(short *)(local_20 + 0x10),
                        (CUser *)0x0);
    CServerEvent::AddExpRate((uint)*(ushort *)(local_20 + 0xe));
    CServerEvent::TurnOnEvent(*(int *)(local_20 + 10),(uint)*(ushort *)(local_20 + 0x10));
    uVar3 = *(undefined4 *)(local_20 + 10);
    uVar1 = *(undefined2 *)(local_20 + 0xe);
    uVar2 = *(undefined2 *)(local_20 + 0x10);
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x53,uVar2,uVar1,uVar3);
    cMyTrace::cMyTrace(local_40,
                       "virtual int Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int)"
                       ,0x2c48,0);
    cMyTrace::operator()(local_40,"X-Mas Event Start");
  }
  else {
    uVar3 = *(undefined4 *)(local_20 + 10);
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int)"
                       ,0x2c4b,5);
    cMyTrace::operator()(local_30,"Unknown ServerEvent (%d)",uVar3);
  }
  PacketGuard::~PacketGuard(local_4c);
  return 0;
}
```
