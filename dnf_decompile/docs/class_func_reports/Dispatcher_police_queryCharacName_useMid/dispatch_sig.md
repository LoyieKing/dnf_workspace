# dispatch_sig

`_ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_police_queryCharacName_useMid::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_police_queryCharacName_useMid` | `0x082273ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082273ae  _ZN40Dispatcher_police_queryCharacName_useMid12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_police_queryCharacName_useMid::dispatch_sig(CUser*, PacketBuf&)
# range [0x082273ae, 0x0822759b]
082273ae +0x000:  push   %ebp
082273af +0x001:  mov    %esp,%ebp
082273b1 +0x003:  push   %esi
082273b2 +0x004:  push   %ebx
082273b3 +0x005:  sub    $0x60,%esp
082273b6 +0x008:  mov    0xc(%ebp),%eax
082273b9 +0x00b:  mov    %eax,(%esp)
082273bc +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082273c1 +0x013:  cmp    $0x2,%eax
082273c4 +0x016:  jle    082273e7 <+0x39>
082273c6 +0x018:  mov    0xc(%ebp),%eax
082273c9 +0x01b:  mov    %eax,(%esp)
082273cc +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082273d1 +0x023:  test   %eax,%eax
082273d3 +0x025:  je     082273e7 <+0x39>
082273d5 +0x027:  mov    0xc(%ebp),%eax
082273d8 +0x02a:  mov    %eax,(%esp)
082273db +0x02d:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
082273e0 +0x032:  xor    $0x1,%eax
082273e3 +0x035:  test   %al,%al
082273e5 +0x037:  je     082273ee <+0x40>
082273e7 +0x039:  mov    $0x1,%eax
082273ec +0x03e:  jmp    082273f3 <+0x45>
082273ee +0x040:  mov    $0x0,%eax
082273f3 +0x045:  test   %al,%al
082273f5 +0x047:  je     08227401 <+0x53>
082273f7 +0x049:  mov    $0x0,%eax
082273fc +0x04e:  jmp    08227595 <+0x1e7>
08227401 +0x053:  lea    -0x4c(%ebp),%eax
08227404 +0x056:  mov    %eax,(%esp)
08227407 +0x059:  call   0822c2e2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x198c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x198c
0822740c +0x05e:  mov    0xc(%ebp),%eax
0822740f +0x061:  mov    %eax,(%esp)
08227412 +0x064:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08227417 +0x069:  mov    %eax,-0x42(%ebp)
0822741a +0x06c:  lea    -0x4c(%ebp),%eax
0822741d +0x06f:  add    $0xe,%eax
08227420 +0x072:  mov    %eax,0x4(%esp)
08227424 +0x076:  mov    0x10(%ebp),%eax
08227427 +0x079:  mov    %eax,(%esp)
0822742a +0x07c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0822742f +0x081:  mov    -0x3e(%ebp),%eax
08227432 +0x084:  movzwl %ax,%ebx
08227435 +0x087:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0822743a +0x08c:  mov    %ebx,0x4(%esp)
0822743e +0x090:  mov    %eax,(%esp)
08227441 +0x093:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
08227446 +0x098:  mov    %eax,-0xc(%ebp)
08227449 +0x09b:  cmpl   $0x0,-0xc(%ebp)
0822744d +0x09f:  je     0822755c <+0x1ae>
08227453 +0x0a5:  mov    -0xc(%ebp),%eax
08227456 +0x0a8:  mov    %eax,(%esp)
08227459 +0x0ab:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0822745e +0x0b0:  mov    %eax,(%esp)
08227461 +0x0b3:  call   0807e3b0 <_init+0xca8>
08227466 +0x0b8:  mov    %eax,-0x3a(%ebp)
08227469 +0x0bb:  mov    -0x3a(%ebp),%eax
0822746c +0x0be:  cmp    $0x1d,%eax
0822746f +0x0c1:  jbe    08227478 <+0xca>
08227471 +0x0c3:  movl   $0x0,-0x3a(%ebp)
08227478 +0x0ca:  mov    -0x3a(%ebp),%eax
0822747b +0x0cd:  test   %eax,%eax
0822747d +0x0cf:  je     08227590 <+0x1e2>
08227483 +0x0d5:  mov    -0x3a(%ebp),%ebx
08227486 +0x0d8:  mov    -0xc(%ebp),%eax
08227489 +0x0db:  mov    %eax,(%esp)
0822748c +0x0de:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08227491 +0x0e3:  mov    %ebx,0x8(%esp)
08227495 +0x0e7:  mov    %eax,0x4(%esp)
08227499 +0x0eb:  lea    -0x4c(%ebp),%eax
0822749c +0x0ee:  add    $0x16,%eax
0822749f +0x0f1:  mov    %eax,(%esp)
082274a2 +0x0f4:  call   0807d8d0 <_init+0x1c8>
082274a7 +0x0f9:  lea    -0x18(%ebp),%eax
082274aa +0x0fc:  mov    %eax,(%esp)
082274ad +0x0ff:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082274b2 +0x104:  movl   $0x14b,0x8(%esp)
082274ba +0x10c:  movl   $0x1,0x4(%esp)
082274c2 +0x114:  lea    -0x18(%ebp),%eax
082274c5 +0x117:  mov    %eax,(%esp)
082274c8 +0x11a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082274cd +0x11f:  mov    -0x3e(%ebp),%eax
082274d0 +0x122:  mov    %eax,0x4(%esp)
082274d4 +0x126:  lea    -0x18(%ebp),%eax
082274d7 +0x129:  mov    %eax,(%esp)
082274da +0x12c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082274df +0x131:  mov    -0x3a(%ebp),%eax
082274e2 +0x134:  mov    %eax,0x4(%esp)
082274e6 +0x138:  lea    -0x18(%ebp),%eax
082274e9 +0x13b:  mov    %eax,(%esp)
082274ec +0x13e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082274f1 +0x143:  mov    -0x3a(%ebp),%eax
082274f4 +0x146:  mov    %eax,0x8(%esp)
082274f8 +0x14a:  lea    -0x4c(%ebp),%eax
082274fb +0x14d:  add    $0x16,%eax
082274fe +0x150:  mov    %eax,0x4(%esp)
08227502 +0x154:  lea    -0x18(%ebp),%eax
08227505 +0x157:  mov    %eax,(%esp)
08227508 +0x15a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0822750d +0x15f:  movl   $0x1,0x4(%esp)
08227515 +0x167:  lea    -0x18(%ebp),%eax
08227518 +0x16a:  mov    %eax,(%esp)
0822751b +0x16d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08227520 +0x172:  lea    -0x18(%ebp),%eax
08227523 +0x175:  mov    %eax,0x4(%esp)
08227527 +0x179:  mov    0xc(%ebp),%eax
0822752a +0x17c:  mov    %eax,(%esp)
0822752d +0x17f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08227532 +0x184:  jmp    0822754f <+0x1a1>
08227534 +0x186:  mov    %edx,%ebx
08227536 +0x188:  mov    %eax,%esi
08227538 +0x18a:  lea    -0x18(%ebp),%eax
0822753b +0x18d:  mov    %eax,(%esp)
0822753e +0x190:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08227543 +0x195:  mov    %esi,%eax
08227545 +0x197:  mov    %ebx,%edx
08227547 +0x199:  mov    %eax,(%esp)
0822754a +0x19c:  call   08ae3750 <_Unwind_Resume>
0822754f +0x1a1:  lea    -0x18(%ebp),%eax
08227552 +0x1a4:  mov    %eax,(%esp)
08227555 +0x1a7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822755a +0x1ac:  jmp    08227590 <+0x1e2>
0822755c +0x1ae:  lea    -0x4c(%ebp),%ebx
0822755f +0x1b1:  mov    0xc(%ebp),%eax
08227562 +0x1b4:  mov    %eax,(%esp)
08227565 +0x1b7:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0822756a +0x1bc:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08227570 +0x1c2:  mov    %eax,0x4(%esp)
08227574 +0x1c6:  mov    %edx,(%esp)
08227577 +0x1c9:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0822757c +0x1ce:  movl   $0x34,0x8(%esp)
08227584 +0x1d6:  mov    %ebx,0x4(%esp)
08227588 +0x1da:  mov    %eax,(%esp)
0822758b +0x1dd:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08227590 +0x1e2:  mov    $0x0,%eax
08227595 +0x1e7:  add    $0x60,%esp
08227598 +0x1ea:  pop    %ebx
08227599 +0x1eb:  pop    %esi
0822759a +0x1ec:  pop    %ebp
0822759b +0x1ed:  ret
```

## 反编译 C

```c
// Dispatcher_police_queryCharacName_useMid::dispatch_sig @ 0x82273ae

/* Dispatcher_police_queryCharacName_useMid::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_police_queryCharacName_useMid::dispatch_sig
          (Dispatcher_police_queryCharacName_useMid *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  char *pcVar5;
  undefined4 uVar6;
  CMonitorServerProxy *this_01;
  Pakcet_FindUserName_use_Charac_no local_50 [10];
  undefined4 local_46;
  uint local_42;
  size_t local_3e;
  char acStack_3a [30];
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (((iVar4 < 3) ||
      (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) ||
     (cVar3 = CUser::isGMUser(param_1), cVar3 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Pakcet_FindUserName_use_Charac_no::Pakcet_FindUserName_use_Charac_no(local_50);
    local_46 = CUser::GetUID(param_1);
    PacketBuf::get_int(param_2,&local_42);
    uVar2 = local_42;
    this_00 = (GameWorld *)G_GameWorld();
    local_10 = (CUserCharacInfo *)GameWorld::find_from_world(this_00,(ushort)uVar2);
    if (local_10 == (CUserCharacInfo *)0x0) {
      uVar6 = CUser::GetServerGroup(param_1);
      this_01 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar6);
      CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_50,0x34);
    }
    else {
      pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_10);
      local_3e = strlen(pcVar5);
      if (0x1d < local_3e) {
        local_3e = 0;
      }
      __n = local_3e;
      if (local_3e != 0) {
        pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_10);
        strncpy(acStack_3a,pcVar5,__n);
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082274c8 to 08227531 has its CatchHandler @ 08227534 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14b);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_42);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_3e);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,acStack_3a,local_3e);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send(param_1,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
  }
  return 0;
}
```
