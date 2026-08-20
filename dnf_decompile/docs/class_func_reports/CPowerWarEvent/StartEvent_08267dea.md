# StartEvent

`_ZN14CPowerWarEvent10StartEventE10Word_Param`

`CPowerWarEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x08267dea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267dea  _ZN14CPowerWarEvent10StartEventE10Word_Param
#           CPowerWarEvent::StartEvent(Word_Param)
# range [0x08267dea, 0x082681e1]
08267dea +0x000:  push   %ebp
08267deb +0x001:  mov    %esp,%ebp
08267ded +0x003:  push   %edi
08267dee +0x004:  push   %esi
08267def +0x005:  push   %ebx
08267df0 +0x006:  sub    $0x8c,%esp
08267df6 +0x00c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267dfb +0x011:  mov    0x1a8(%eax),%eax
08267e01 +0x017:  cmp    $0x1,%eax
08267e04 +0x01a:  je     08267e16 <+0x2c>
08267e06 +0x01c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267e0b +0x021:  mov    0x1a8(%eax),%eax
08267e11 +0x027:  cmp    $0x2,%eax
08267e14 +0x02a:  jne    08267e1d <+0x33>
08267e16 +0x02c:  mov    $0x1,%eax
08267e1b +0x031:  jmp    08267e22 <+0x38>
08267e1d +0x033:  mov    $0x0,%eax
08267e22 +0x038:  test   %al,%al
08267e24 +0x03a:  je     08267e78 <+0x8e>
08267e26 +0x03c:  lea    -0x5a(%ebp),%eax
08267e29 +0x03f:  mov    %eax,(%esp)
08267e2c +0x042:  call   0826889a <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x22b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x22b
08267e31 +0x047:  movl   $0x1e,-0x50(%ebp)
08267e38 +0x04e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267e3d +0x053:  mov    %eax,(%esp)
08267e40 +0x056:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08267e45 +0x05b:  mov    %eax,-0x1c(%ebp)
08267e48 +0x05e:  lea    -0x5a(%ebp),%ebx
08267e4b +0x061:  mov    -0x1c(%ebp),%edx
08267e4e +0x064:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08267e53 +0x069:  mov    %edx,0x4(%esp)
08267e57 +0x06d:  mov    %eax,(%esp)
08267e5a +0x070:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08267e5f +0x075:  movl   $0xe,0x8(%esp)
08267e67 +0x07d:  mov    %ebx,0x4(%esp)
08267e6b +0x081:  mov    %eax,(%esp)
08267e6e +0x084:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08267e73 +0x089:  jmp    082681d7 <+0x3ed>
08267e78 +0x08e:  mov    0x8(%ebp),%eax
08267e7b +0x091:  mov    (%eax),%eax
08267e7d +0x093:  add    $0x34,%eax
08267e80 +0x096:  mov    (%eax),%edx
08267e82 +0x098:  mov    0x8(%ebp),%eax
08267e85 +0x09b:  movl   $0x0,0x4(%esp)
08267e8d +0x0a3:  mov    %eax,(%esp)
08267e90 +0x0a6:  call   *%edx
08267e92 +0x0a8:  xor    $0x1,%eax
08267e95 +0x0ab:  test   %al,%al
08267e97 +0x0ad:  je     082681d7 <+0x3ed>
08267e9d +0x0b3:  mov    0x8(%ebp),%eax
08267ea0 +0x0b6:  movl   $0x1,0x4(%esp)
08267ea8 +0x0be:  mov    %eax,(%esp)
08267eab +0x0c1:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267eb0 +0x0c6:  mov    0x8(%ebp),%eax
08267eb3 +0x0c9:  mov    0xc(%ebp),%edx
08267eb6 +0x0cc:  mov    %edx,0xa(%eax)
08267eb9 +0x0cf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267ebe +0x0d4:  add    $0x68,%eax
08267ec1 +0x0d7:  movl   $0x2aff,0x4(%esp)
08267ec9 +0x0df:  mov    %eax,(%esp)
08267ecc +0x0e2:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
08267ed1 +0x0e7:  test   %al,%al
08267ed3 +0x0e9:  je     08267f4a <+0x160>
08267ed5 +0x0eb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267eda +0x0f0:  add    $0x68,%eax
08267edd +0x0f3:  movl   $0x0,0x8(%esp)
08267ee5 +0x0fb:  movl   $0x2aff,0x4(%esp)
08267eed +0x103:  mov    %eax,(%esp)
08267ef0 +0x106:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
08267ef5 +0x10b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08267efa +0x110:  movl   $0x0,0x8(%esp)
08267f02 +0x118:  movl   $0x2aff,0x4(%esp)
08267f0a +0x120:  mov    %eax,(%esp)
08267f0d +0x123:  call   086c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>  ; GameWorld::send_all_dungeon_inout_message(int, bool)
08267f12 +0x128:  movl   $0x0,0xc(%esp)
08267f1a +0x130:  movl   $0x8f,0x8(%esp)
08267f22 +0x138:  movl   $&_ZZN14CPowerWarEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
08267f2a +0x140:  lea    -0x4c(%ebp),%eax
08267f2d +0x143:  mov    %eax,(%esp)
08267f30 +0x146:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267f35 +0x14b:  movl   $"ULTIMATE_LOG : POWER WAR START!! ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
08267f3d +0x153:  lea    -0x4c(%ebp),%eax
08267f40 +0x156:  mov    %eax,(%esp)
08267f43 +0x159:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267f48 +0x15e:  jmp    08267f80 <+0x196>
08267f4a +0x160:  movl   $0x0,0xc(%esp)
08267f52 +0x168:  movl   $0x92,0x8(%esp)
08267f5a +0x170:  movl   $&_ZZN14CPowerWarEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
08267f62 +0x178:  lea    -0x3c(%ebp),%eax
08267f65 +0x17b:  mov    %eax,(%esp)
08267f68 +0x17e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267f6d +0x183:  movl   $"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
08267f75 +0x18b:  lea    -0x3c(%ebp),%eax
08267f78 +0x18e:  mov    %eax,(%esp)
08267f7b +0x191:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267f80 +0x196:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08267f85 +0x19b:  mov    %eax,(%esp)
08267f88 +0x19e:  call   0847eabc <_ZN13CPowerManager4InitEv>  ; CPowerManager::Init()
08267f8d +0x1a3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08267f92 +0x1a8:  mov    %eax,(%esp)
08267f95 +0x1ab:  call   086cf138 <_ZN9GameWorld26CleanupPowerWarVillToStartEv>  ; GameWorld::CleanupPowerWarVillToStart()
08267f9a +0x1b0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267f9f +0x1b5:  mov    0xa6ac(%eax),%eax
08267fa5 +0x1bb:  mov    %eax,-0x70(%ebp)
08267fa8 +0x1be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267fad +0x1c3:  mov    0xa6b0(%eax),%eax
08267fb3 +0x1c9:  mov    %eax,-0x6c(%ebp)
08267fb6 +0x1cc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267fbb +0x1d1:  mov    0xa6a8(%eax),%edi
08267fc1 +0x1d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267fc6 +0x1dc:  mov    0xa6a4(%eax),%esi
08267fcc +0x1e2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267fd1 +0x1e7:  mov    0xa634(%eax),%eax
08267fd7 +0x1ed:  movzwl %ax,%ebx
08267fda +0x1f0:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
08267fdf +0x1f5:  movl   $0x0,0x4(%esp)
08267fe7 +0x1fd:  mov    %eax,(%esp)
08267fea +0x200:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08267fef +0x205:  mov    -0x70(%ebp),%edx
08267ff2 +0x208:  mov    %edx,0x14(%esp)
08267ff6 +0x20c:  mov    -0x6c(%ebp),%edx
08267ff9 +0x20f:  mov    %edx,0x10(%esp)
08267ffd +0x213:  mov    %edi,0xc(%esp)
08268001 +0x217:  mov    %esi,0x8(%esp)
08268005 +0x21b:  mov    %ebx,0x4(%esp)
08268009 +0x21f:  mov    %eax,(%esp)
0826800c +0x222:  call   0846dfce <_ZN17CGuildServerProxy15SendPowerWarCfgEtiiii>  ; CGuildServerProxy::SendPowerWarCfg(unsigned short, int, int, int, int)
08268011 +0x227:  lea    -0x68(%ebp),%eax
08268014 +0x22a:  mov    %eax,(%esp)
08268017 +0x22d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0826801c +0x232:  movl   $0x9f,0x8(%esp)
08268024 +0x23a:  movl   $0x0,0x4(%esp)
0826802c +0x242:  lea    -0x68(%ebp),%eax
0826802f +0x245:  mov    %eax,(%esp)
08268032 +0x248:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08268037 +0x24d:  movl   $0x1,0x4(%esp)
0826803f +0x255:  lea    -0x68(%ebp),%eax
08268042 +0x258:  mov    %eax,(%esp)
08268045 +0x25b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0826804a +0x260:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0826804f +0x265:  lea    -0x68(%ebp),%edx
08268052 +0x268:  mov    %edx,0x4(%esp)
08268056 +0x26c:  mov    %eax,(%esp)
08268059 +0x26f:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0826805e +0x274:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08268063 +0x279:  mov    0xa658(%eax),%ebx
08268069 +0x27f:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0826806e +0x284:  movl   $0x0,0x18(%esp)
08268076 +0x28c:  movl   $0x0,0x14(%esp)
0826807e +0x294:  mov    %ebx,0x10(%esp)
08268082 +0x298:  movl   $0x7b,0xc(%esp)
0826808a +0x2a0:  movl   $0x0,0x8(%esp)
08268092 +0x2a8:  movl   $0x0,0x4(%esp)
0826809a +0x2b0:  mov    %eax,(%esp)
0826809d +0x2b3:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
082680a2 +0x2b8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082680a7 +0x2bd:  mov    0xa670(%eax),%eax
082680ad +0x2c3:  shl    $0x2,%eax
082680b0 +0x2c6:  mov    %eax,%edx
082680b2 +0x2c8:  shl    $0x4,%edx
082680b5 +0x2cb:  mov    %edx,%ebx
082680b7 +0x2cd:  sub    %eax,%ebx
082680b9 +0x2cf:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
082680be +0x2d4:  movl   $0x0,0x18(%esp)
082680c6 +0x2dc:  movl   $0x0,0x14(%esp)
082680ce +0x2e4:  mov    %ebx,0x10(%esp)
082680d2 +0x2e8:  movl   $0x7c,0xc(%esp)
082680da +0x2f0:  movl   $0x0,0x8(%esp)
082680e2 +0x2f8:  movl   $0x2,0x4(%esp)
082680ea +0x300:  mov    %eax,(%esp)
082680ed +0x303:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
082680f2 +0x308:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082680f7 +0x30d:  mov    0xa670(%eax),%eax
082680fd +0x313:  shl    $0x2,%eax
08268100 +0x316:  mov    %eax,%edx
08268102 +0x318:  shl    $0x4,%edx
08268105 +0x31b:  sub    %eax,%edx
08268107 +0x31d:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0826810c +0x322:  mov    %edx,0x4(%esp)
08268110 +0x326:  mov    %eax,(%esp)
08268113 +0x329:  call   082688be <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x24f>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x24f
08268118 +0x32e:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0826811d +0x333:  movl   $0x0,0x4(%esp)
08268125 +0x33b:  mov    %eax,(%esp)
08268128 +0x33e:  call   082688cc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x25d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x25d
0826812d +0x343:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08268132 +0x348:  movl   $0x0,0x18(%esp)
0826813a +0x350:  movl   $0x0,0x14(%esp)
08268142 +0x358:  movl   $0x5,0x10(%esp)
0826814a +0x360:  movl   $0x7d,0xc(%esp)
08268152 +0x368:  movl   $0x0,0x8(%esp)
0826815a +0x370:  movl   $0x2,0x4(%esp)
08268162 +0x378:  mov    %eax,(%esp)
08268165 +0x37b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0826816a +0x380:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0826816f +0x385:  mov    0x1b0(%eax),%ebx
08268175 +0x38b:  movl   $0x0,0xc(%esp)
0826817d +0x393:  movl   $0xc6,0x8(%esp)
08268185 +0x39b:  movl   $&_ZZN14CPowerWarEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0826818d +0x3a3:  lea    -0x2c(%ebp),%eax
08268190 +0x3a6:  mov    %eax,(%esp)
08268193 +0x3a9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268198 +0x3ae:  mov    %ebx,0x8(%esp)
0826819c +0x3b2:  movl   $"Power War Event Start! server(%d)",0x4(%esp)
082681a4 +0x3ba:  lea    -0x2c(%ebp),%eax
082681a7 +0x3bd:  mov    %eax,(%esp)
082681aa +0x3c0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082681af +0x3c5:  jmp    082681cc <+0x3e2>
082681b1 +0x3c7:  mov    %edx,%ebx
082681b3 +0x3c9:  mov    %eax,%esi
082681b5 +0x3cb:  lea    -0x68(%ebp),%eax
082681b8 +0x3ce:  mov    %eax,(%esp)
082681bb +0x3d1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082681c0 +0x3d6:  mov    %esi,%eax
082681c2 +0x3d8:  mov    %ebx,%edx
082681c4 +0x3da:  mov    %eax,(%esp)
082681c7 +0x3dd:  call   08ae3750 <_Unwind_Resume>
082681cc +0x3e2:  lea    -0x68(%ebp),%eax
082681cf +0x3e5:  mov    %eax,(%esp)
082681d2 +0x3e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082681d7 +0x3ed:  add    $0x8c,%esp
082681dd +0x3f3:  pop    %ebx
082681de +0x3f4:  pop    %esi
082681df +0x3f5:  pop    %edi
082681e0 +0x3f6:  pop    %ebp
082681e1 +0x3f7:  ret
```

## 反编译 C

```c
// CPowerWarEvent::StartEvent @ 0x8267dea

/* CPowerWarEvent::StartEvent(Word_Param) */

void __thiscall CPowerWarEvent::StartEvent(CPowerWarEvent *this,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CEnvironment *this_00;
  CMonitorServerProxy *this_01;
  GameWorld *pGVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CGuildServerProxy *this_02;
  TimerQueue *pTVar10;
  PacketGuard local_6c [14];
  Packet_Monitor_Event_End local_5e [10];
  undefined4 local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  undefined4 local_20;
  
  iVar4 = G_CEnvironment();
  if (*(int *)(iVar4 + 0x1a8) != 1) {
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) != 2) {
      bVar2 = false;
      goto LAB_08267e22;
    }
  }
  bVar2 = true;
LAB_08267e22:
  if (bVar2) {
    Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_5e);
    local_54 = 0x1e;
    this_00 = (CEnvironment *)G_CEnvironment();
    local_20 = CEnvironment::get_server_group(this_00);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,local_20);
    CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_5e,0xe);
  }
  else {
    cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar3 != '\x01') {
      CEventBase::SetEventFlag((CEventBase *)this,true);
      *(undefined4 *)(this + 10) = param_2;
      iVar4 = G_CDataManager();
      cVar3 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
      if (cVar3 == '\0') {
        cMyTrace::cMyTrace(local_40,"virtual void CPowerWarEvent::StartEvent(Word_Param)",0x92,0);
        cMyTrace::operator()(local_40,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!");
      }
      else {
        iVar4 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar4 + 0x68),0x2aff,false);
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(pGVar5,0x2aff,false);
        cMyTrace::cMyTrace(local_50,"virtual void CPowerWarEvent::StartEvent(Word_Param)",0x8f,0);
        cMyTrace::operator()(local_50,"ULTIMATE_LOG : POWER WAR START!! ULTIMATE DUNGEON CLOSE!!");
      }
      CPowerManager::Init(GlobalData::s_power_manager);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::CleanupPowerWarVillToStart(pGVar5);
      iVar4 = G_CDataManager();
      iVar4 = *(int *)(iVar4 + 0xa6ac);
      iVar6 = G_CDataManager();
      iVar6 = *(int *)(iVar6 + 0xa6b0);
      iVar7 = G_CDataManager();
      iVar7 = *(int *)(iVar7 + 0xa6a8);
      iVar8 = G_CDataManager();
      iVar8 = *(int *)(iVar8 + 0xa6a4);
      iVar9 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar9 + 0xa634);
      this_02 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendPowerWarCfg(this_02,(ushort)uVar1,iVar8,iVar7,iVar6,iVar4);
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08268032 to 082681ae has its CatchHandler @ 082681b1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x9f);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_6c);
      iVar4 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar4 + 0xa658);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,0,0,0x7b,uVar1,0,0);
      iVar4 = G_CDataManager();
      iVar4 = *(int *)(iVar4 + 0xa670);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,2,0,0x7c,iVar4 * 0x3c,0,0);
      iVar4 = G_CDataManager();
      CPowerManager::SetPowerUpRemainTime
                (GlobalData::s_power_manager,*(int *)(iVar4 + 0xa670) * 0x3c);
      CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
      pTVar10 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar10,2,0,0x7d,5,0,0);
      iVar4 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar4 + 0x1b0);
      cMyTrace::cMyTrace(local_30,"virtual void CPowerWarEvent::StartEvent(Word_Param)",0xc6,0);
      cMyTrace::operator()(local_30,"Power War Event Start! server(%d)",uVar1);
      PacketGuard::~PacketGuard(local_6c);
    }
  }
  return;
}
```
