# dispatch_sig

`_ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci`

`Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdateServerMessage` | `0x084da3e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da3e6  _ZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPci
#           Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int)
# range [0x084da3e6, 0x084da725]
084da3e6 +0x000:  push   %ebp
084da3e7 +0x001:  mov    %esp,%ebp
084da3e9 +0x003:  push   %edi
084da3ea +0x004:  push   %esi
084da3eb +0x005:  push   %ebx
084da3ec +0x006:  sub    $0xec,%esp
084da3f2 +0x00c:  mov    0x10(%ebp),%eax
084da3f5 +0x00f:  mov    %eax,-0x1c(%ebp)
084da3f8 +0x012:  lea    -0x48(%ebp),%eax
084da3fb +0x015:  mov    %eax,(%esp)
084da3fe +0x018:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084da403 +0x01d:  mov    -0x1c(%ebp),%eax
084da406 +0x020:  movzbl 0x8(%eax),%eax
084da40a +0x024:  movzbl %al,%eax
084da40d +0x027:  test   %eax,%eax
084da40f +0x029:  je     084da41f <+0x39>
084da411 +0x02b:  cmp    $0x1,%eax
084da414 +0x02e:  je     084da515 <+0x12f>
084da41a +0x034:  jmp    084da6b7 <+0x2d1>
084da41f +0x039:  movl   $0xc0,0x8(%esp)
084da427 +0x041:  movl   $0x0,0x4(%esp)
084da42f +0x049:  lea    -0x48(%ebp),%eax
084da432 +0x04c:  mov    %eax,(%esp)
084da435 +0x04f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084da43a +0x054:  movl   $0x1,0x4(%esp)
084da442 +0x05c:  lea    -0x48(%ebp),%eax
084da445 +0x05f:  mov    %eax,(%esp)
084da448 +0x062:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da44d +0x067:  movl   $0x1,0x4(%esp)
084da455 +0x06f:  lea    -0x48(%ebp),%eax
084da458 +0x072:  mov    %eax,(%esp)
084da45b +0x075:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da460 +0x07a:  mov    -0x1c(%ebp),%eax
084da463 +0x07d:  movzbl 0x9(%eax),%eax
084da467 +0x081:  movzbl %al,%eax
084da46a +0x084:  mov    %eax,0x4(%esp)
084da46e +0x088:  lea    -0x48(%ebp),%eax
084da471 +0x08b:  mov    %eax,(%esp)
084da474 +0x08e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da479 +0x093:  mov    -0x1c(%ebp),%eax
084da47c +0x096:  mov    0xc(%eax),%eax
084da47f +0x099:  mov    %eax,0x4(%esp)
084da483 +0x09d:  lea    -0x48(%ebp),%eax
084da486 +0x0a0:  mov    %eax,(%esp)
084da489 +0x0a3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084da48e +0x0a8:  mov    -0x1c(%ebp),%eax
084da491 +0x0ab:  mov    0xc(%eax),%eax
084da494 +0x0ae:  mov    -0x1c(%ebp),%edx
084da497 +0x0b1:  add    $0x10,%edx
084da49a +0x0b4:  mov    %eax,0x8(%esp)
084da49e +0x0b8:  mov    %edx,0x4(%esp)
084da4a2 +0x0bc:  lea    -0x48(%ebp),%eax
084da4a5 +0x0bf:  mov    %eax,(%esp)
084da4a8 +0x0c2:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084da4ad +0x0c7:  mov    -0x1c(%ebp),%eax
084da4b0 +0x0ca:  mov    0x44(%eax),%eax
084da4b3 +0x0cd:  mov    %eax,0x4(%esp)
084da4b7 +0x0d1:  lea    -0x48(%ebp),%eax
084da4ba +0x0d4:  mov    %eax,(%esp)
084da4bd +0x0d7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084da4c2 +0x0dc:  mov    -0x1c(%ebp),%eax
084da4c5 +0x0df:  mov    0x44(%eax),%eax
084da4c8 +0x0e2:  mov    -0x1c(%ebp),%edx
084da4cb +0x0e5:  add    $0x48,%edx
084da4ce +0x0e8:  mov    %eax,0x8(%esp)
084da4d2 +0x0ec:  mov    %edx,0x4(%esp)
084da4d6 +0x0f0:  lea    -0x48(%ebp),%eax
084da4d9 +0x0f3:  mov    %eax,(%esp)
084da4dc +0x0f6:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084da4e1 +0x0fb:  movl   $0x1,0x4(%esp)
084da4e9 +0x103:  lea    -0x48(%ebp),%eax
084da4ec +0x106:  mov    %eax,(%esp)
084da4ef +0x109:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084da4f4 +0x10e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084da4f9 +0x113:  movl   $0x3,0x8(%esp)
084da501 +0x11b:  lea    -0x48(%ebp),%edx
084da504 +0x11e:  mov    %edx,0x4(%esp)
084da508 +0x122:  mov    %eax,(%esp)
084da50b +0x125:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
084da510 +0x12a:  jmp    084da6ed <+0x307>
084da515 +0x12f:  lea    -0xa7(%ebp),%eax
084da51b +0x135:  mov    %eax,(%esp)
084da51e +0x138:  call   084e93a2 <_GLOBAL__I__Z7getUserj+0x354>  ; global constructors keyed to getUser(unsigned int)+0x354
084da523 +0x13d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084da528 +0x142:  mov    %eax,(%esp)
084da52b +0x145:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084da530 +0x14a:  mov    %al,-0x9d(%ebp)
084da536 +0x150:  mov    -0x1c(%ebp),%eax
084da539 +0x153:  movzbl 0x8(%eax),%eax
084da53d +0x157:  mov    %al,-0x9c(%ebp)
084da543 +0x15d:  mov    -0x1c(%ebp),%eax
084da546 +0x160:  movzbl 0x9(%eax),%eax
084da54a +0x164:  mov    %al,-0x9b(%ebp)
084da550 +0x16a:  mov    -0x1c(%ebp),%eax
084da553 +0x16d:  mov    0xc(%eax),%eax
084da556 +0x170:  mov    %eax,-0x9a(%ebp)
084da55c +0x176:  mov    -0x1c(%ebp),%eax
084da55f +0x179:  mov    0x44(%eax),%eax
084da562 +0x17c:  mov    %eax,-0x64(%ebp)
084da565 +0x17f:  mov    -0x1c(%ebp),%eax
084da568 +0x182:  mov    0x5c(%eax),%eax
084da56b +0x185:  mov    %eax,-0x4c(%ebp)
084da56e +0x188:  mov    -0x1c(%ebp),%eax
084da571 +0x18b:  add    $0x10,%eax
084da574 +0x18e:  movl   $0x32,0x8(%esp)
084da57c +0x196:  mov    %eax,0x4(%esp)
084da580 +0x19a:  lea    -0xa7(%ebp),%eax
084da586 +0x1a0:  add    $0x11,%eax
084da589 +0x1a3:  mov    %eax,(%esp)
084da58c +0x1a6:  call   0807d8d0 <_init+0x1c8>
084da591 +0x1ab:  mov    -0x1c(%ebp),%eax
084da594 +0x1ae:  add    $0x48,%eax
084da597 +0x1b1:  movl   $0x14,0x8(%esp)
084da59f +0x1b9:  mov    %eax,0x4(%esp)
084da5a3 +0x1bd:  lea    -0xa7(%ebp),%eax
084da5a9 +0x1c3:  add    $0x47,%eax
084da5ac +0x1c6:  mov    %eax,(%esp)
084da5af +0x1c9:  call   0807d8d0 <_init+0x1c8>
084da5b4 +0x1ce:  lea    -0xa7(%ebp),%ebx
084da5ba +0x1d4:  mov    0xc(%ebp),%eax
084da5bd +0x1d7:  mov    %eax,(%esp)
084da5c0 +0x1da:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084da5c5 +0x1df:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084da5cb +0x1e5:  mov    %eax,0x4(%esp)
084da5cf +0x1e9:  mov    %edx,(%esp)
084da5d2 +0x1ec:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084da5d7 +0x1f1:  movl   $0x5f,0x8(%esp)
084da5df +0x1f9:  mov    %ebx,0x4(%esp)
084da5e3 +0x1fd:  mov    %eax,(%esp)
084da5e6 +0x200:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084da5eb +0x205:  mov    -0x1c(%ebp),%eax
084da5ee +0x208:  mov    0x5c(%eax),%edi
084da5f1 +0x20b:  mov    -0x1c(%ebp),%eax
084da5f4 +0x20e:  add    $0x48,%eax
084da5f7 +0x211:  mov    %eax,-0xbc(%ebp)
084da5fd +0x217:  mov    -0x1c(%ebp),%eax
084da600 +0x21a:  mov    0x44(%eax),%eax
084da603 +0x21d:  mov    %eax,-0xb8(%ebp)
084da609 +0x223:  mov    -0x1c(%ebp),%eax
084da60c +0x226:  add    $0x10,%eax
084da60f +0x229:  mov    %eax,-0xb4(%ebp)
084da615 +0x22f:  mov    -0x1c(%ebp),%eax
084da618 +0x232:  mov    0xc(%eax),%eax
084da61b +0x235:  mov    %eax,-0xb0(%ebp)
084da621 +0x23b:  mov    -0x1c(%ebp),%eax
084da624 +0x23e:  movzbl 0x9(%eax),%eax
084da628 +0x242:  movzbl %al,%eax
084da62b +0x245:  mov    %eax,-0xac(%ebp)
084da631 +0x24b:  mov    -0x1c(%ebp),%eax
084da634 +0x24e:  movzbl 0x8(%eax),%eax
084da638 +0x252:  movzbl %al,%esi
084da63b +0x255:  mov    -0x1c(%ebp),%eax
084da63e +0x258:  mov    0x4(%eax),%ebx
084da641 +0x25b:  movl   $0x0,0xc(%esp)
084da649 +0x263:  movl   $0x42a0,0x8(%esp)
084da651 +0x26b:  movl   $&_ZZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084da659 +0x273:  lea    -0x3c(%ebp),%eax
084da65c +0x276:  mov    %eax,(%esp)
084da65f +0x279:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084da664 +0x27e:  mov    %edi,0x24(%esp)
084da668 +0x282:  mov    -0xbc(%ebp),%eax
084da66e +0x288:  mov    %eax,0x20(%esp)
084da672 +0x28c:  mov    -0xb8(%ebp),%eax
084da678 +0x292:  mov    %eax,0x1c(%esp)
084da67c +0x296:  mov    -0xb4(%ebp),%eax
084da682 +0x29c:  mov    %eax,0x18(%esp)
084da686 +0x2a0:  mov    -0xb0(%ebp),%eax
084da68c +0x2a6:  mov    %eax,0x14(%esp)
084da690 +0x2aa:  mov    -0xac(%ebp),%eax
084da696 +0x2b0:  mov    %eax,0x10(%esp)
084da69a +0x2b4:  mov    %esi,0xc(%esp)
084da69e +0x2b8:  mov    %ebx,0x8(%esp)
084da6a2 +0x2bc:  movl   $"SERVER_MESSAGE : Send ServerMessage to monitor server(source_channel:%d, kind:%d, index:%d, msg_len:%d, msg:%s, name_len:%d, name:%s, time:%d",0x4(%esp)
084da6aa +0x2c4:  lea    -0x3c(%ebp),%eax
084da6ad +0x2c7:  mov    %eax,(%esp)
084da6b0 +0x2ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084da6b5 +0x2cf:  jmp    084da6ed <+0x307>
084da6b7 +0x2d1:  movl   $0x0,0xc(%esp)
084da6bf +0x2d9:  movl   $0x42a6,0x8(%esp)
084da6c7 +0x2e1:  movl   $&_ZZN25Inter_UpdateServerMessage12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084da6cf +0x2e9:  lea    -0x2c(%ebp),%eax
084da6d2 +0x2ec:  mov    %eax,(%esp)
084da6d5 +0x2ef:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084da6da +0x2f4:  movl   $"SERVER_MESSAGE : NOT EXIST SHARE TYPE",0x4(%esp)
084da6e2 +0x2fc:  lea    -0x2c(%ebp),%eax
084da6e5 +0x2ff:  mov    %eax,(%esp)
084da6e8 +0x302:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084da6ed +0x307:  mov    $0x0,%ebx
084da6f2 +0x30c:  lea    -0x48(%ebp),%eax
084da6f5 +0x30f:  mov    %eax,(%esp)
084da6f8 +0x312:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da6fd +0x317:  mov    %ebx,%eax
084da6ff +0x319:  add    $0xec,%esp
084da705 +0x31f:  pop    %ebx
084da706 +0x320:  pop    %esi
084da707 +0x321:  pop    %edi
084da708 +0x322:  pop    %ebp
084da709 +0x323:  ret
084da70a +0x324:  mov    %edx,%ebx
084da70c +0x326:  mov    %eax,%esi
084da70e +0x328:  lea    -0x48(%ebp),%eax
084da711 +0x32b:  mov    %eax,(%esp)
084da714 +0x32e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da719 +0x333:  mov    %esi,%eax
084da71b +0x335:  mov    %ebx,%edx
084da71d +0x337:  mov    %eax,(%esp)
084da720 +0x33a:  call   08ae3750 <_Unwind_Resume>
084da725 +0x33f:  nop
```

## 反编译 C

```c
// Inter_UpdateServerMessage::dispatch_sig @ 0x84da3e6

/* Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateServerMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameWorld *this;
  CEnvironment *this_00;
  undefined4 uVar6;
  CMonitorServerProxy *this_01;
  int iVar7;
  int iVar8;
  Packet_Monitor_Server_Message_Info local_ab [10];
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined4 local_9e;
  char acStack_9a [50];
  undefined4 local_68;
  char acStack_64 [20];
  undefined4 local_50;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  PacketGuard::PacketGuard(local_4c);
  if (*(char *)(local_20 + 8) == '\0') {
                    /* try { // try from 084da435 to 084da6ec has its CatchHandler @ 084da70a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0xc0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,(uint)*(byte *)(local_20 + 9));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,*(int *)(local_20 + 0xc));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_4c,(char *)(local_20 + 0x10),*(int *)(local_20 + 0xc));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,*(int *)(local_20 + 0x44));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_4c,(char *)(local_20 + 0x48),*(int *)(local_20 + 0x44));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_4c,3);
  }
  else if (*(char *)(local_20 + 8) == '\x01') {
    Packet_Monitor_Server_Message_Info::Packet_Monitor_Server_Message_Info(local_ab);
    this_00 = (CEnvironment *)G_CEnvironment();
    local_a1 = CEnvironment::get_channel_no(this_00);
    local_a0 = *(undefined1 *)(local_20 + 8);
    local_9f = *(undefined1 *)(local_20 + 9);
    local_9e = *(undefined4 *)(local_20 + 0xc);
    local_68 = *(undefined4 *)(local_20 + 0x44);
    local_50 = *(undefined4 *)(local_20 + 0x5c);
    strncpy(acStack_9a,(char *)(local_20 + 0x10),0x32);
    strncpy(acStack_64,(char *)(local_20 + 0x48),0x14);
    uVar6 = CUser::GetServerGroup((CUser *)param_2);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar6);
    CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_ab,0x5f);
    uVar6 = *(undefined4 *)(local_20 + 0x5c);
    iVar7 = local_20 + 0x48;
    uVar3 = *(undefined4 *)(local_20 + 0x44);
    iVar8 = local_20 + 0x10;
    uVar4 = *(undefined4 *)(local_20 + 0xc);
    bVar1 = *(byte *)(local_20 + 9);
    bVar2 = *(byte *)(local_20 + 8);
    uVar5 = *(undefined4 *)(local_20 + 4);
    cMyTrace::cMyTrace(local_40,
                       "virtual int Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int)",
                       0x42a0,0);
    cMyTrace::operator()
              (local_40,
               "SERVER_MESSAGE : Send ServerMessage to monitor server(source_channel:%d, kind:%d, index:%d, msg_len:%d, msg:%s, name_len:%d, name:%s, time:%d"
               ,uVar5,(uint)bVar2,(uint)bVar1,uVar4,iVar8,uVar3,iVar7,uVar6);
  }
  else {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_UpdateServerMessage::dispatch_sig(CUser*, char*, int)",
                       0x42a6,0);
    cMyTrace::operator()(local_30,"SERVER_MESSAGE : NOT EXIST SHARE TYPE");
  }
  PacketGuard::~PacketGuard(local_4c);
  return 0;
}
```
