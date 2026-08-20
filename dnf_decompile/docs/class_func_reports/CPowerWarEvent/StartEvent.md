# StartEvent

`_ZN14CPowerWarEvent10StartEventEv`

`CPowerWarEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x082679fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082679fa  _ZN14CPowerWarEvent10StartEventEv
#           CPowerWarEvent::StartEvent()
# range [0x082679fa, 0x08267de9]
082679fa +0x000:  push   %ebp
082679fb +0x001:  mov    %esp,%ebp
082679fd +0x003:  push   %edi
082679fe +0x004:  push   %esi
082679ff +0x005:  push   %ebx
08267a00 +0x006:  sub    $0x8c,%esp
08267a06 +0x00c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267a0b +0x011:  mov    0x1a8(%eax),%eax
08267a11 +0x017:  cmp    $0x1,%eax
08267a14 +0x01a:  je     08267a26 <+0x2c>
08267a16 +0x01c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267a1b +0x021:  mov    0x1a8(%eax),%eax
08267a21 +0x027:  cmp    $0x2,%eax
08267a24 +0x02a:  jne    08267a2d <+0x33>
08267a26 +0x02c:  mov    $0x1,%eax
08267a2b +0x031:  jmp    08267a32 <+0x38>
08267a2d +0x033:  mov    $0x0,%eax
08267a32 +0x038:  test   %al,%al
08267a34 +0x03a:  je     08267a88 <+0x8e>
08267a36 +0x03c:  lea    -0x5a(%ebp),%eax
08267a39 +0x03f:  mov    %eax,(%esp)
08267a3c +0x042:  call   0826889a <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x22b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x22b
08267a41 +0x047:  movl   $0x1e,-0x50(%ebp)
08267a48 +0x04e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267a4d +0x053:  mov    %eax,(%esp)
08267a50 +0x056:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08267a55 +0x05b:  mov    %eax,-0x1c(%ebp)
08267a58 +0x05e:  lea    -0x5a(%ebp),%ebx
08267a5b +0x061:  mov    -0x1c(%ebp),%edx
08267a5e +0x064:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
08267a63 +0x069:  mov    %edx,0x4(%esp)
08267a67 +0x06d:  mov    %eax,(%esp)
08267a6a +0x070:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08267a6f +0x075:  movl   $0xe,0x8(%esp)
08267a77 +0x07d:  mov    %ebx,0x4(%esp)
08267a7b +0x081:  mov    %eax,(%esp)
08267a7e +0x084:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08267a83 +0x089:  jmp    08267dde <+0x3e4>
08267a88 +0x08e:  mov    0x8(%ebp),%eax
08267a8b +0x091:  mov    (%eax),%eax
08267a8d +0x093:  add    $0x34,%eax
08267a90 +0x096:  mov    (%eax),%edx
08267a92 +0x098:  mov    0x8(%ebp),%eax
08267a95 +0x09b:  movl   $0x0,0x4(%esp)
08267a9d +0x0a3:  mov    %eax,(%esp)
08267aa0 +0x0a6:  call   *%edx
08267aa2 +0x0a8:  xor    $0x1,%eax
08267aa5 +0x0ab:  test   %al,%al
08267aa7 +0x0ad:  je     08267dde <+0x3e4>
08267aad +0x0b3:  mov    0x8(%ebp),%eax
08267ab0 +0x0b6:  movl   $0x1,0x4(%esp)
08267ab8 +0x0be:  mov    %eax,(%esp)
08267abb +0x0c1:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267ac0 +0x0c6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267ac5 +0x0cb:  add    $0x68,%eax
08267ac8 +0x0ce:  movl   $0x2aff,0x4(%esp)
08267ad0 +0x0d6:  mov    %eax,(%esp)
08267ad3 +0x0d9:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
08267ad8 +0x0de:  test   %al,%al
08267ada +0x0e0:  je     08267b51 <+0x157>
08267adc +0x0e2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267ae1 +0x0e7:  add    $0x68,%eax
08267ae4 +0x0ea:  movl   $0x0,0x8(%esp)
08267aec +0x0f2:  movl   $0x2aff,0x4(%esp)
08267af4 +0x0fa:  mov    %eax,(%esp)
08267af7 +0x0fd:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
08267afc +0x102:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08267b01 +0x107:  movl   $0x0,0x8(%esp)
08267b09 +0x10f:  movl   $0x2aff,0x4(%esp)
08267b11 +0x117:  mov    %eax,(%esp)
08267b14 +0x11a:  call   086c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>  ; GameWorld::send_all_dungeon_inout_message(int, bool)
08267b19 +0x11f:  movl   $0x0,0xc(%esp)
08267b21 +0x127:  movl   $0x3a,0x8(%esp)
08267b29 +0x12f:  movl   $&_ZZN14CPowerWarEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08267b31 +0x137:  lea    -0x4c(%ebp),%eax
08267b34 +0x13a:  mov    %eax,(%esp)
08267b37 +0x13d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267b3c +0x142:  movl   $"ULTIMATE_LOG : POWER WAR START!! ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
08267b44 +0x14a:  lea    -0x4c(%ebp),%eax
08267b47 +0x14d:  mov    %eax,(%esp)
08267b4a +0x150:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267b4f +0x155:  jmp    08267b87 <+0x18d>
08267b51 +0x157:  movl   $0x0,0xc(%esp)
08267b59 +0x15f:  movl   $0x3d,0x8(%esp)
08267b61 +0x167:  movl   $&_ZZN14CPowerWarEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08267b69 +0x16f:  lea    -0x3c(%ebp),%eax
08267b6c +0x172:  mov    %eax,(%esp)
08267b6f +0x175:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267b74 +0x17a:  movl   $"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
08267b7c +0x182:  lea    -0x3c(%ebp),%eax
08267b7f +0x185:  mov    %eax,(%esp)
08267b82 +0x188:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267b87 +0x18d:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08267b8c +0x192:  mov    %eax,(%esp)
08267b8f +0x195:  call   0847eabc <_ZN13CPowerManager4InitEv>  ; CPowerManager::Init()
08267b94 +0x19a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08267b99 +0x19f:  mov    %eax,(%esp)
08267b9c +0x1a2:  call   086cf138 <_ZN9GameWorld26CleanupPowerWarVillToStartEv>  ; GameWorld::CleanupPowerWarVillToStart()
08267ba1 +0x1a7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267ba6 +0x1ac:  mov    0xa6ac(%eax),%eax
08267bac +0x1b2:  mov    %eax,-0x70(%ebp)
08267baf +0x1b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267bb4 +0x1ba:  mov    0xa6b0(%eax),%eax
08267bba +0x1c0:  mov    %eax,-0x6c(%ebp)
08267bbd +0x1c3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267bc2 +0x1c8:  mov    0xa6a8(%eax),%edi
08267bc8 +0x1ce:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267bcd +0x1d3:  mov    0xa6a4(%eax),%esi
08267bd3 +0x1d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267bd8 +0x1de:  mov    0xa634(%eax),%eax
08267bde +0x1e4:  movzwl %ax,%ebx
08267be1 +0x1e7:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
08267be6 +0x1ec:  movl   $0x0,0x4(%esp)
08267bee +0x1f4:  mov    %eax,(%esp)
08267bf1 +0x1f7:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08267bf6 +0x1fc:  mov    -0x70(%ebp),%edx
08267bf9 +0x1ff:  mov    %edx,0x14(%esp)
08267bfd +0x203:  mov    -0x6c(%ebp),%edx
08267c00 +0x206:  mov    %edx,0x10(%esp)
08267c04 +0x20a:  mov    %edi,0xc(%esp)
08267c08 +0x20e:  mov    %esi,0x8(%esp)
08267c0c +0x212:  mov    %ebx,0x4(%esp)
08267c10 +0x216:  mov    %eax,(%esp)
08267c13 +0x219:  call   0846dfce <_ZN17CGuildServerProxy15SendPowerWarCfgEtiiii>  ; CGuildServerProxy::SendPowerWarCfg(unsigned short, int, int, int, int)
08267c18 +0x21e:  lea    -0x68(%ebp),%eax
08267c1b +0x221:  mov    %eax,(%esp)
08267c1e +0x224:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08267c23 +0x229:  movl   $0x9f,0x8(%esp)
08267c2b +0x231:  movl   $0x0,0x4(%esp)
08267c33 +0x239:  lea    -0x68(%ebp),%eax
08267c36 +0x23c:  mov    %eax,(%esp)
08267c39 +0x23f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08267c3e +0x244:  movl   $0x1,0x4(%esp)
08267c46 +0x24c:  lea    -0x68(%ebp),%eax
08267c49 +0x24f:  mov    %eax,(%esp)
08267c4c +0x252:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08267c51 +0x257:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08267c56 +0x25c:  lea    -0x68(%ebp),%edx
08267c59 +0x25f:  mov    %edx,0x4(%esp)
08267c5d +0x263:  mov    %eax,(%esp)
08267c60 +0x266:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08267c65 +0x26b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267c6a +0x270:  mov    0xa658(%eax),%ebx
08267c70 +0x276:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08267c75 +0x27b:  movl   $0x0,0x18(%esp)
08267c7d +0x283:  movl   $0x0,0x14(%esp)
08267c85 +0x28b:  mov    %ebx,0x10(%esp)
08267c89 +0x28f:  movl   $0x7b,0xc(%esp)
08267c91 +0x297:  movl   $0x0,0x8(%esp)
08267c99 +0x29f:  movl   $0x0,0x4(%esp)
08267ca1 +0x2a7:  mov    %eax,(%esp)
08267ca4 +0x2aa:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08267ca9 +0x2af:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267cae +0x2b4:  mov    0xa670(%eax),%eax
08267cb4 +0x2ba:  shl    $0x2,%eax
08267cb7 +0x2bd:  mov    %eax,%edx
08267cb9 +0x2bf:  shl    $0x4,%edx
08267cbc +0x2c2:  mov    %edx,%ebx
08267cbe +0x2c4:  sub    %eax,%ebx
08267cc0 +0x2c6:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08267cc5 +0x2cb:  movl   $0x0,0x18(%esp)
08267ccd +0x2d3:  movl   $0x0,0x14(%esp)
08267cd5 +0x2db:  mov    %ebx,0x10(%esp)
08267cd9 +0x2df:  movl   $0x7c,0xc(%esp)
08267ce1 +0x2e7:  movl   $0x0,0x8(%esp)
08267ce9 +0x2ef:  movl   $0x2,0x4(%esp)
08267cf1 +0x2f7:  mov    %eax,(%esp)
08267cf4 +0x2fa:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08267cf9 +0x2ff:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08267cfe +0x304:  mov    0xa670(%eax),%eax
08267d04 +0x30a:  shl    $0x2,%eax
08267d07 +0x30d:  mov    %eax,%edx
08267d09 +0x30f:  shl    $0x4,%edx
08267d0c +0x312:  sub    %eax,%edx
08267d0e +0x314:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08267d13 +0x319:  mov    %edx,0x4(%esp)
08267d17 +0x31d:  mov    %eax,(%esp)
08267d1a +0x320:  call   082688be <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x24f>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x24f
08267d1f +0x325:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08267d24 +0x32a:  movl   $0x0,0x4(%esp)
08267d2c +0x332:  mov    %eax,(%esp)
08267d2f +0x335:  call   082688cc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x25d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x25d
08267d34 +0x33a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08267d39 +0x33f:  movl   $0x0,0x18(%esp)
08267d41 +0x347:  movl   $0x0,0x14(%esp)
08267d49 +0x34f:  movl   $0x5,0x10(%esp)
08267d51 +0x357:  movl   $0x7d,0xc(%esp)
08267d59 +0x35f:  movl   $0x0,0x8(%esp)
08267d61 +0x367:  movl   $0x2,0x4(%esp)
08267d69 +0x36f:  mov    %eax,(%esp)
08267d6c +0x372:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08267d71 +0x377:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08267d76 +0x37c:  mov    0x1b0(%eax),%ebx
08267d7c +0x382:  movl   $0x0,0xc(%esp)
08267d84 +0x38a:  movl   $0x70,0x8(%esp)
08267d8c +0x392:  movl   $&_ZZN14CPowerWarEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08267d94 +0x39a:  lea    -0x2c(%ebp),%eax
08267d97 +0x39d:  mov    %eax,(%esp)
08267d9a +0x3a0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267d9f +0x3a5:  mov    %ebx,0x8(%esp)
08267da3 +0x3a9:  movl   $"Power War Event Start! server(%d)",0x4(%esp)
08267dab +0x3b1:  lea    -0x2c(%ebp),%eax
08267dae +0x3b4:  mov    %eax,(%esp)
08267db1 +0x3b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267db6 +0x3bc:  jmp    08267dd3 <+0x3d9>
08267db8 +0x3be:  mov    %edx,%ebx
08267dba +0x3c0:  mov    %eax,%esi
08267dbc +0x3c2:  lea    -0x68(%ebp),%eax
08267dbf +0x3c5:  mov    %eax,(%esp)
08267dc2 +0x3c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08267dc7 +0x3cd:  mov    %esi,%eax
08267dc9 +0x3cf:  mov    %ebx,%edx
08267dcb +0x3d1:  mov    %eax,(%esp)
08267dce +0x3d4:  call   08ae3750 <_Unwind_Resume>
08267dd3 +0x3d9:  lea    -0x68(%ebp),%eax
08267dd6 +0x3dc:  mov    %eax,(%esp)
08267dd9 +0x3df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08267dde +0x3e4:  add    $0x8c,%esp
08267de4 +0x3ea:  pop    %ebx
08267de5 +0x3eb:  pop    %esi
08267de6 +0x3ec:  pop    %edi
08267de7 +0x3ed:  pop    %ebp
08267de8 +0x3ee:  ret
08267de9 +0x3ef:  nop
```

## 反编译 C

```c
// CPowerWarEvent::StartEvent @ 0x82679fa

/* CPowerWarEvent::StartEvent() */

void __thiscall CPowerWarEvent::StartEvent(CPowerWarEvent *this)

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
      goto LAB_08267a32;
    }
  }
  bVar2 = true;
LAB_08267a32:
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
      iVar4 = G_CDataManager();
      cVar3 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
      if (cVar3 == '\0') {
        cMyTrace::cMyTrace(local_40,"virtual void CPowerWarEvent::StartEvent()",0x3d,0);
        cMyTrace::operator()(local_40,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!");
      }
      else {
        iVar4 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar4 + 0x68),0x2aff,false);
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(pGVar5,0x2aff,false);
        cMyTrace::cMyTrace(local_50,"virtual void CPowerWarEvent::StartEvent()",0x3a,0);
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
                    /* try { // try from 08267c39 to 08267db5 has its CatchHandler @ 08267db8 */
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
      cMyTrace::cMyTrace(local_30,"virtual void CPowerWarEvent::StartEvent()",0x70,0);
      cMyTrace::operator()(local_30,"Power War Event Start! server(%d)",uVar1);
      PacketGuard::~PacketGuard(local_6c);
    }
  }
  return;
}
```
