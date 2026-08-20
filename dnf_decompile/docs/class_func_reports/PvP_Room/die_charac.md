# die_charac

`_ZN8PvP_Room10die_characEP5CUserS1_`

`PvP_Room::die_charac(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d9386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d9386  _ZN8PvP_Room10die_characEP5CUserS1_
#           PvP_Room::die_charac(CUser*, CUser*)
# range [0x085d9386, 0x085d96eb]
085d9386 +0x000:  push   %ebp
085d9387 +0x001:  mov    %esp,%ebp
085d9389 +0x003:  push   %edi
085d938a +0x004:  push   %esi
085d938b +0x005:  push   %ebx
085d938c +0x006:  sub    $0x7c,%esp
085d938f +0x009:  mov    0x8(%ebp),%eax
085d9392 +0x00c:  mov    %eax,(%esp)
085d9395 +0x00f:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085d939a +0x014:  mov    %eax,-0x5c(%ebp)
085d939d +0x017:  mov    0x8(%ebp),%eax
085d93a0 +0x01a:  mov    %eax,(%esp)
085d93a3 +0x01d:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085d93a8 +0x022:  mov    %eax,%edi
085d93aa +0x024:  mov    0xc(%ebp),%eax
085d93ad +0x027:  mov    %eax,(%esp)
085d93b0 +0x02a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085d93b5 +0x02f:  mov    %eax,%esi
085d93b7 +0x031:  mov    0xc(%ebp),%eax
085d93ba +0x034:  mov    %eax,(%esp)
085d93bd +0x037:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085d93c2 +0x03c:  mov    %eax,%ebx
085d93c4 +0x03e:  movl   $0x0,0x10(%esp)
085d93cc +0x046:  movl   $0x0,0xc(%esp)
085d93d4 +0x04e:  movl   $0x9a1,0x8(%esp)
085d93dc +0x056:  movl   $&_ZZN8PvP_Room10die_characEP5CUserS1_E19__PRETTY_FUNCTION__,0x4(%esp)
085d93e4 +0x05e:  lea    -0x3c(%ebp),%eax
085d93e7 +0x061:  mov    %eax,(%esp)
085d93ea +0x064:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085d93ef +0x069:  mov    -0x5c(%ebp),%eax
085d93f2 +0x06c:  mov    %eax,0x14(%esp)
085d93f6 +0x070:  mov    %edi,0x10(%esp)
085d93fa +0x074:  mov    %esi,0xc(%esp)
085d93fe +0x078:  mov    %ebx,0x8(%esp)
085d9402 +0x07c:  movl   $"pvp@log %s,%s,%d,%d",0x4(%esp)
085d940a +0x084:  lea    -0x3c(%ebp),%eax
085d940d +0x087:  mov    %eax,(%esp)
085d9410 +0x08a:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085d9415 +0x08f:  mov    0x8(%ebp),%eax
085d9418 +0x092:  mov    0xb8(%eax),%eax
085d941e +0x098:  cmp    $0x2,%eax
085d9421 +0x09b:  je     085d942d <+0xa7>
085d9423 +0x09d:  mov    $0x13,%ebx
085d9428 +0x0a2:  jmp    085d96e1 <+0x35b>
085d942d +0x0a7:  mov    0x8(%ebp),%eax
085d9430 +0x0aa:  mov    %eax,(%esp)
085d9433 +0x0ad:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d9438 +0x0b2:  mov    0xc(%ebp),%eax
085d943b +0x0b5:  mov    %eax,0x4(%esp)
085d943f +0x0b9:  mov    0x8(%ebp),%eax
085d9442 +0x0bc:  mov    %eax,(%esp)
085d9445 +0x0bf:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085d944a +0x0c4:  mov    %eax,-0x2c(%ebp)
085d944d +0x0c7:  cmpl   $0x0,-0x2c(%ebp)
085d9451 +0x0cb:  jns    085d9468 <+0xe2>
085d9453 +0x0cd:  mov    0x8(%ebp),%eax
085d9456 +0x0d0:  mov    %eax,(%esp)
085d9459 +0x0d3:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d945e +0x0d8:  mov    $0xffffffff,%ebx
085d9463 +0x0dd:  jmp    085d96e1 <+0x35b>
085d9468 +0x0e2:  mov    -0x2c(%ebp),%eax
085d946b +0x0e5:  mov    0x8(%ebp),%edx
085d946e +0x0e8:  movzbl 0x5c8(%edx,%eax,1),%eax
085d9476 +0x0f0:  xor    $0x1,%eax
085d9479 +0x0f3:  test   %al,%al
085d947b +0x0f5:  je     085d9492 <+0x10c>
085d947d +0x0f7:  mov    0x8(%ebp),%eax
085d9480 +0x0fa:  mov    %eax,(%esp)
085d9483 +0x0fd:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d9488 +0x102:  mov    $0x12,%ebx
085d948d +0x107:  jmp    085d96e1 <+0x35b>
085d9492 +0x10c:  mov    -0x2c(%ebp),%eax
085d9495 +0x10f:  mov    0x8(%ebp),%edx
085d9498 +0x112:  movb   $0x0,0x5c8(%edx,%eax,1)
085d94a0 +0x11a:  mov    0x8(%ebp),%eax
085d94a3 +0x11d:  mov    %eax,(%esp)
085d94a6 +0x120:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d94ab +0x125:  lea    -0x48(%ebp),%eax
085d94ae +0x128:  mov    %eax,(%esp)
085d94b1 +0x12b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d94b6 +0x130:  movl   $0x2e,0x8(%esp)
085d94be +0x138:  movl   $0x0,0x4(%esp)
085d94c6 +0x140:  lea    -0x48(%ebp),%eax
085d94c9 +0x143:  mov    %eax,(%esp)
085d94cc +0x146:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d94d1 +0x14b:  mov    -0x2c(%ebp),%eax
085d94d4 +0x14e:  mov    %eax,0x4(%esp)
085d94d8 +0x152:  lea    -0x48(%ebp),%eax
085d94db +0x155:  mov    %eax,(%esp)
085d94de +0x158:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d94e3 +0x15d:  cmpl   $0x0,0x10(%ebp)
085d94e7 +0x161:  je     085d950c <+0x186>
085d94e9 +0x163:  mov    0x10(%ebp),%eax
085d94ec +0x166:  mov    %eax,0x4(%esp)
085d94f0 +0x16a:  mov    0x8(%ebp),%eax
085d94f3 +0x16d:  mov    %eax,(%esp)
085d94f6 +0x170:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085d94fb +0x175:  mov    %eax,0x4(%esp)
085d94ff +0x179:  lea    -0x48(%ebp),%eax
085d9502 +0x17c:  mov    %eax,(%esp)
085d9505 +0x17f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d950a +0x184:  jmp    085d951f <+0x199>
085d950c +0x186:  movl   $0xffffffff,0x4(%esp)
085d9514 +0x18e:  lea    -0x48(%ebp),%eax
085d9517 +0x191:  mov    %eax,(%esp)
085d951a +0x194:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d951f +0x199:  movl   $0x1,0x4(%esp)
085d9527 +0x1a1:  lea    -0x48(%ebp),%eax
085d952a +0x1a4:  mov    %eax,(%esp)
085d952d +0x1a7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d9532 +0x1ac:  lea    -0x48(%ebp),%eax
085d9535 +0x1af:  mov    %eax,0x4(%esp)
085d9539 +0x1b3:  mov    0x8(%ebp),%eax
085d953c +0x1b6:  mov    %eax,(%esp)
085d953f +0x1b9:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085d9544 +0x1be:  mov    0x8(%ebp),%eax
085d9547 +0x1c1:  mov    0x4(%eax),%eax
085d954a +0x1c4:  cmp    $0x4,%eax
085d954d +0x1c7:  je     085d955a <+0x1d4>
085d954f +0x1c9:  mov    0x8(%ebp),%eax
085d9552 +0x1cc:  mov    0x4(%eax),%eax
085d9555 +0x1cf:  cmp    $0x5,%eax
085d9558 +0x1d2:  jne    085d95c6 <+0x240>
085d955a +0x1d4:  mov    0x10(%ebp),%eax
085d955d +0x1d7:  mov    %eax,0x4(%esp)
085d9561 +0x1db:  mov    0x8(%ebp),%eax
085d9564 +0x1de:  mov    %eax,(%esp)
085d9567 +0x1e1:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085d956c +0x1e6:  mov    %eax,-0x28(%ebp)
085d956f +0x1e9:  mov    0x8(%ebp),%eax
085d9572 +0x1ec:  lea    0x69c(%eax),%edx
085d9578 +0x1f2:  mov    -0x28(%ebp),%eax
085d957b +0x1f5:  mov    %eax,0x4(%esp)
085d957f +0x1f9:  mov    %edx,(%esp)
085d9582 +0x1fc:  call   085def0e <_ZN20CDeathMatchBattleMgr17IncreaseKillCountEi>  ; CDeathMatchBattleMgr::IncreaseKillCount(int)
085d9587 +0x201:  mov    0x8(%ebp),%eax
085d958a +0x204:  lea    0x69c(%eax),%edx
085d9590 +0x20a:  mov    -0x2c(%ebp),%eax
085d9593 +0x20d:  mov    %eax,0x4(%esp)
085d9597 +0x211:  mov    %edx,(%esp)
085d959a +0x214:  call   085def34 <_ZN20CDeathMatchBattleMgr18IncreaseDeathCountEi>  ; CDeathMatchBattleMgr::IncreaseDeathCount(int)
085d959f +0x219:  mov    0x8(%ebp),%eax
085d95a2 +0x21c:  mov    %eax,(%esp)
085d95a5 +0x21f:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085d95aa +0x224:  mov    0x8(%ebp),%edx
085d95ad +0x227:  lea    0x69c(%edx),%ecx
085d95b3 +0x22d:  mov    -0x2c(%ebp),%edx
085d95b6 +0x230:  mov    %edx,0x8(%esp)
085d95ba +0x234:  mov    %eax,0x4(%esp)
085d95be +0x238:  mov    %ecx,(%esp)
085d95c1 +0x23b:  call   085def60 <_ZN20CDeathMatchBattleMgr30InsertTimerKilledUserForReviveEii>  ; CDeathMatchBattleMgr::InsertTimerKilledUserForRevive(int, int)
085d95c6 +0x240:  cmpl   $0x0,0x10(%ebp)
085d95ca +0x244:  je     085d9610 <+0x28a>
085d95cc +0x246:  movl   $0x8,0x4(%esp)
085d95d4 +0x24e:  mov    0x10(%ebp),%eax
085d95d7 +0x251:  mov    %eax,(%esp)
085d95da +0x254:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d95df +0x259:  mov    %eax,-0x24(%ebp)
085d95e2 +0x25c:  mov    0x8(%ebp),%eax
085d95e5 +0x25f:  mov    0x4(%eax),%eax
085d95e8 +0x262:  mov    %eax,0x4(%esp)
085d95ec +0x266:  lea    -0x57(%ebp),%eax
085d95ef +0x269:  mov    %eax,(%esp)
085d95f2 +0x26c:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085d95f7 +0x271:  lea    -0x57(%ebp),%eax
085d95fa +0x274:  mov    %eax,0x8(%esp)
085d95fe +0x278:  mov    0x10(%ebp),%eax
085d9601 +0x27b:  mov    %eax,0x4(%esp)
085d9605 +0x27f:  mov    -0x24(%ebp),%eax
085d9608 +0x282:  mov    %eax,(%esp)
085d960b +0x285:  call   085e58f4 <_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter>  ; CMissionList_Charac::Update_Kill_event(CUser&, MissionClearCondition_Parameter const&)
085d9610 +0x28a:  mov    0x8(%ebp),%eax
085d9613 +0x28d:  mov    %eax,(%esp)
085d9616 +0x290:  call   085d96ec <_ZN8PvP_Room12check_winnerEv>  ; PvP_Room::check_winner()
085d961b +0x295:  test   %al,%al
085d961d +0x297:  je     085d966d <+0x2e7>
085d961f +0x299:  mov    0x10(%ebp),%eax
085d9622 +0x29c:  mov    %eax,0x4(%esp)
085d9626 +0x2a0:  mov    0x8(%ebp),%eax
085d9629 +0x2a3:  mov    %eax,(%esp)
085d962c +0x2a6:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085d9631 +0x2ab:  mov    %eax,-0x20(%ebp)
085d9634 +0x2ae:  mov    0x8(%ebp),%eax
085d9637 +0x2b1:  lea    0x620(%eax),%edx
085d963d +0x2b7:  movl   $0x0,0xc(%esp)
085d9645 +0x2bf:  mov    -0x20(%ebp),%eax
085d9648 +0x2c2:  mov    %eax,0x8(%esp)
085d964c +0x2c6:  mov    -0x2c(%ebp),%eax
085d964f +0x2c9:  mov    %eax,0x4(%esp)
085d9653 +0x2cd:  mov    %edx,(%esp)
085d9656 +0x2d0:  call   085de38a <_ZN15CRelayBattleMgr11OnDiePlayerEiib>  ; CRelayBattleMgr::OnDiePlayer(int, int, bool)
085d965b +0x2d5:  mov    0x8(%ebp),%eax
085d965e +0x2d8:  mov    %eax,(%esp)
085d9661 +0x2db:  call   085dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>  ; PvP_Room::pvp_request_pvp_rank()
085d9666 +0x2e0:  mov    $0xffffffff,%ebx
085d966b +0x2e5:  jmp    085d96d6 <+0x350>
085d966d +0x2e7:  mov    0x10(%ebp),%eax
085d9670 +0x2ea:  mov    %eax,0x4(%esp)
085d9674 +0x2ee:  mov    0x8(%ebp),%eax
085d9677 +0x2f1:  mov    %eax,(%esp)
085d967a +0x2f4:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085d967f +0x2f9:  mov    %eax,-0x1c(%ebp)
085d9682 +0x2fc:  mov    0x8(%ebp),%eax
085d9685 +0x2ff:  mov    0x4(%eax),%eax
085d9688 +0x302:  cmp    $0x3,%eax
085d968b +0x305:  sete   %al
085d968e +0x308:  movzbl %al,%eax
085d9691 +0x30b:  mov    0x8(%ebp),%edx
085d9694 +0x30e:  add    $0x620,%edx
085d969a +0x314:  mov    %eax,0xc(%esp)
085d969e +0x318:  mov    -0x1c(%ebp),%eax
085d96a1 +0x31b:  mov    %eax,0x8(%esp)
085d96a5 +0x31f:  mov    -0x2c(%ebp),%eax
085d96a8 +0x322:  mov    %eax,0x4(%esp)
085d96ac +0x326:  mov    %edx,(%esp)
085d96af +0x329:  call   085de38a <_ZN15CRelayBattleMgr11OnDiePlayerEiib>  ; CRelayBattleMgr::OnDiePlayer(int, int, bool)
085d96b4 +0x32e:  mov    $0x0,%ebx
085d96b9 +0x333:  jmp    085d96d6 <+0x350>
085d96bb +0x335:  mov    %edx,%ebx
085d96bd +0x337:  mov    %eax,%esi
085d96bf +0x339:  lea    -0x48(%ebp),%eax
085d96c2 +0x33c:  mov    %eax,(%esp)
085d96c5 +0x33f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d96ca +0x344:  mov    %esi,%eax
085d96cc +0x346:  mov    %ebx,%edx
085d96ce +0x348:  mov    %eax,(%esp)
085d96d1 +0x34b:  call   08ae3750 <_Unwind_Resume>
085d96d6 +0x350:  lea    -0x48(%ebp),%eax
085d96d9 +0x353:  mov    %eax,(%esp)
085d96dc +0x356:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d96e1 +0x35b:  mov    %ebx,%eax
085d96e3 +0x35d:  add    $0x7c,%esp
085d96e6 +0x360:  pop    %ebx
085d96e7 +0x361:  pop    %esi
085d96e8 +0x362:  pop    %edi
085d96e9 +0x363:  pop    %ebp
085d96ea +0x364:  ret
085d96eb +0x365:  nop
```

## 反编译 C

```c
// PvP_Room::die_charac @ 0x85d9386

/* PvP_Room::die_charac(CUser*, CUser*) */

undefined4 __thiscall PvP_Room::die_charac(PvP_Room *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  MissionClearCondition_Parameter local_5b [15];
  PacketGuard local_4c [12];
  CSwitchLog local_40 [16];
  int local_30;
  int local_2c;
  CMissionList_Charac *local_28;
  int local_24;
  int local_20;
  
  uVar2 = get_pvp_battle_mode(this);
  uVar3 = get_index(this);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar5 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog(local_40,"int PvP_Room::die_charac(CUser*, CUser*)",0x9a1,0,0);
  CSwitchLog::operator()(local_40,"pvp@log %s,%s,%d,%d",uVar5,uVar4,uVar3,uVar2);
  if (*(int *)(this + 0xb8) == 2) {
    lock();
    local_30 = get_user_seat(this,param_1);
    if (local_30 < 0) {
      unlock();
      uVar2 = 0xffffffff;
    }
    else if (this[local_30 + 0x5c8] == (PvP_Room)0x1) {
      this[local_30 + 0x5c8] = (PvP_Room)0x0;
      unlock();
      PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 085d94cc to 085d96b3 has its CatchHandler @ 085d96bb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,local_30);
      if (param_2 == (CUser *)0x0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,-1);
      }
      else {
        iVar6 = get_user_seat(this,param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,iVar6);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
      send_to_pvp(this,local_4c);
      if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
        local_2c = get_user_seat(this,param_2);
        CDeathMatchBattleMgr::IncreaseKillCount((CDeathMatchBattleMgr *)(this + 0x69c),local_2c);
        CDeathMatchBattleMgr::IncreaseDeathCount((CDeathMatchBattleMgr *)(this + 0x69c),local_30);
        iVar6 = get_index(this);
        CDeathMatchBattleMgr::InsertTimerKilledUserForRevive
                  ((CDeathMatchBattleMgr *)(this + 0x69c),iVar6,local_30);
      }
      if (param_2 != (CUser *)0x0) {
        local_28 = (CMissionList_Charac *)CUser::GetCharacExpandData(param_2,8);
        MissionClearCondition_Parameter::MissionClearCondition_Parameter
                  (local_5b,*(undefined4 *)(this + 4));
        CMissionList_Charac::Update_Kill_event(local_28,param_2,local_5b);
      }
      cVar1 = check_winner(this);
      if (cVar1 == '\0') {
        local_20 = get_user_seat(this,param_2);
        CRelayBattleMgr::OnDiePlayer
                  ((CRelayBattleMgr *)(this + 0x620),local_30,local_20,*(int *)(this + 4) == 3);
        uVar2 = 0;
      }
      else {
        local_24 = get_user_seat(this,param_2);
        CRelayBattleMgr::OnDiePlayer((CRelayBattleMgr *)(this + 0x620),local_30,local_24,false);
        pvp_request_pvp_rank(this);
        uVar2 = 0xffffffff;
      }
      PacketGuard::~PacketGuard(local_4c);
    }
    else {
      unlock();
      uVar2 = 0x12;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
