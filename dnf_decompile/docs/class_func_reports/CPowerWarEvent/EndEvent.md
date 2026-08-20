# EndEvent

`_ZN14CPowerWarEvent8EndEventEv`

`CPowerWarEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x082681e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082681e2  _ZN14CPowerWarEvent8EndEventEv
#           CPowerWarEvent::EndEvent()
# range [0x082681e2, 0x08268491]
082681e2 +0x000:  push   %ebp
082681e3 +0x001:  mov    %esp,%ebp
082681e5 +0x003:  push   %esi
082681e6 +0x004:  push   %ebx
082681e7 +0x005:  sub    $0x60,%esp
082681ea +0x008:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082681ef +0x00d:  mov    0x1a8(%eax),%eax
082681f5 +0x013:  cmp    $0x1,%eax
082681f8 +0x016:  je     0826820a <+0x28>
082681fa +0x018:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082681ff +0x01d:  mov    0x1a8(%eax),%eax
08268205 +0x023:  cmp    $0x2,%eax
08268208 +0x026:  jne    08268211 <+0x2f>
0826820a +0x028:  mov    $0x1,%eax
0826820f +0x02d:  jmp    08268216 <+0x34>
08268211 +0x02f:  mov    $0x0,%eax
08268216 +0x034:  test   %al,%al
08268218 +0x036:  jne    08268489 <+0x2a7>
0826821e +0x03c:  mov    0x8(%ebp),%eax
08268221 +0x03f:  mov    (%eax),%eax
08268223 +0x041:  add    $0x34,%eax
08268226 +0x044:  mov    (%eax),%edx
08268228 +0x046:  mov    0x8(%ebp),%eax
0826822b +0x049:  movl   $0x0,0x4(%esp)
08268233 +0x051:  mov    %eax,(%esp)
08268236 +0x054:  call   *%edx
08268238 +0x056:  test   %al,%al
0826823a +0x058:  je     0826848a <+0x2a8>
08268240 +0x05e:  mov    0x8(%ebp),%eax
08268243 +0x061:  movl   $0x0,0x4(%esp)
0826824b +0x069:  mov    %eax,(%esp)
0826824e +0x06c:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268253 +0x071:  mov    0x8(%ebp),%eax
08268256 +0x074:  movw   $0x0,0xa(%eax)
0826825c +0x07a:  mov    0x8(%ebp),%eax
0826825f +0x07d:  movw   $0x0,0xc(%eax)
08268265 +0x083:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826826a +0x088:  add    $0x68,%eax
0826826d +0x08b:  movl   $0x2aff,0x4(%esp)
08268275 +0x093:  mov    %eax,(%esp)
08268278 +0x096:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
0826827d +0x09b:  xor    $0x1,%eax
08268280 +0x09e:  test   %al,%al
08268282 +0x0a0:  je     08268345 <+0x163>
08268288 +0x0a6:  movl   $0x2aff,(%esp)
0826828f +0x0ad:  call   08639a12 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi>  ; Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int)
08268294 +0x0b2:  test   %al,%al
08268296 +0x0b4:  je     0826830d <+0x12b>
08268298 +0x0b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826829d +0x0bb:  add    $0x68,%eax
082682a0 +0x0be:  movl   $0x1,0x8(%esp)
082682a8 +0x0c6:  movl   $0x2aff,0x4(%esp)
082682b0 +0x0ce:  mov    %eax,(%esp)
082682b3 +0x0d1:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
082682b8 +0x0d6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082682bd +0x0db:  movl   $0x1,0x8(%esp)
082682c5 +0x0e3:  movl   $0x2aff,0x4(%esp)
082682cd +0x0eb:  mov    %eax,(%esp)
082682d0 +0x0ee:  call   086c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>  ; GameWorld::send_all_dungeon_inout_message(int, bool)
082682d5 +0x0f3:  movl   $0x0,0xc(%esp)
082682dd +0x0fb:  movl   $0xde,0x8(%esp)
082682e5 +0x103:  movl   $&_ZZN14CPowerWarEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
082682ed +0x10b:  lea    -0x48(%ebp),%eax
082682f0 +0x10e:  mov    %eax,(%esp)
082682f3 +0x111:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082682f8 +0x116:  movl   $"ULTIMATE_LOG : POWER WAR EVENT END!! ULTIMATE DUNGEON OPEN!!",0x4(%esp)
08268300 +0x11e:  lea    -0x48(%ebp),%eax
08268303 +0x121:  mov    %eax,(%esp)
08268306 +0x124:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826830b +0x129:  jmp    0826837b <+0x199>
0826830d +0x12b:  movl   $0x0,0xc(%esp)
08268315 +0x133:  movl   $0xe1,0x8(%esp)
0826831d +0x13b:  movl   $&_ZZN14CPowerWarEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08268325 +0x143:  lea    -0x38(%ebp),%eax
08268328 +0x146:  mov    %eax,(%esp)
0826832b +0x149:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268330 +0x14e:  movl   $"ULTIMATE_LOG : NOT UTIMATE DUNGEON OPEN TIME!!",0x4(%esp)
08268338 +0x156:  lea    -0x38(%ebp),%eax
0826833b +0x159:  mov    %eax,(%esp)
0826833e +0x15c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268343 +0x161:  jmp    0826837b <+0x199>
08268345 +0x163:  movl   $0x0,0xc(%esp)
0826834d +0x16b:  movl   $0xe4,0x8(%esp)
08268355 +0x173:  movl   $&_ZZN14CPowerWarEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0826835d +0x17b:  lea    -0x28(%ebp),%eax
08268360 +0x17e:  mov    %eax,(%esp)
08268363 +0x181:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268368 +0x186:  movl   $"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON OPEN!!",0x4(%esp)
08268370 +0x18e:  lea    -0x28(%ebp),%eax
08268373 +0x191:  mov    %eax,(%esp)
08268376 +0x194:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826837b +0x199:  lea    -0x54(%ebp),%eax
0826837e +0x19c:  mov    %eax,(%esp)
08268381 +0x19f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08268386 +0x1a4:  movl   $0xa0,0x8(%esp)
0826838e +0x1ac:  movl   $0x0,0x4(%esp)
08268396 +0x1b4:  lea    -0x54(%ebp),%eax
08268399 +0x1b7:  mov    %eax,(%esp)
0826839c +0x1ba:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082683a1 +0x1bf:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082683a6 +0x1c4:  lea    -0x54(%ebp),%edx
082683a9 +0x1c7:  mov    %edx,0x4(%esp)
082683ad +0x1cb:  mov    %eax,(%esp)
082683b0 +0x1ce:  call   086ceda0 <_ZN9GameWorld13OnEndPowerWarER11PacketGuard>  ; GameWorld::OnEndPowerWar(PacketGuard&)
082683b5 +0x1d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082683ba +0x1d8:  mov    %eax,(%esp)
082683bd +0x1db:  call   086cf356 <_ZN9GameWorld13CancelPowerUpEv>  ; GameWorld::CancelPowerUp()
082683c2 +0x1e0:  movl   $0x1,0x4(%esp)
082683ca +0x1e8:  lea    -0x54(%ebp),%eax
082683cd +0x1eb:  mov    %eax,(%esp)
082683d0 +0x1ee:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082683d5 +0x1f3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082683da +0x1f8:  lea    -0x54(%ebp),%edx
082683dd +0x1fb:  mov    %edx,0x4(%esp)
082683e1 +0x1ff:  mov    %eax,(%esp)
082683e4 +0x202:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082683e9 +0x207:  mov    0x8(%ebp),%eax
082683ec +0x20a:  mov    %eax,(%esp)
082683ef +0x20d:  call   08268492 <_ZN14CPowerWarEvent28CleanupPowerWarServerMessageEv>  ; CPowerWarEvent::CleanupPowerWarServerMessage()
082683f4 +0x212:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
082683f9 +0x217:  mov    %eax,(%esp)
082683fc +0x21a:  call   082ed5f4 <_ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv>  ; pvp_assault::CAssaultMgr::FrocedCloseAssaults()
08268401 +0x21f:  movw   $0x0,-0x58(%ebp)
08268407 +0x225:  movw   $0x0,-0x56(%ebp)
0826840d +0x22b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08268412 +0x230:  mov    -0x58(%ebp),%edx
08268415 +0x233:  mov    %edx,0x8(%esp)
08268419 +0x237:  movl   $0x35,0x4(%esp)
08268421 +0x23f:  mov    %eax,(%esp)
08268424 +0x242:  call   08115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>  ; CEventManager::TriggerEventStart(int, Word_Param)
08268429 +0x247:  movl   $0x0,0xc(%esp)
08268431 +0x24f:  movl   $0x110,0x8(%esp)
08268439 +0x257:  movl   $&_ZZN14CPowerWarEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08268441 +0x25f:  lea    -0x18(%ebp),%eax
08268444 +0x262:  mov    %eax,(%esp)
08268447 +0x265:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826844c +0x26a:  movl   $"Power War Event End",0x4(%esp)
08268454 +0x272:  lea    -0x18(%ebp),%eax
08268457 +0x275:  mov    %eax,(%esp)
0826845a +0x278:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826845f +0x27d:  jmp    0826847c <+0x29a>
08268461 +0x27f:  mov    %edx,%ebx
08268463 +0x281:  mov    %eax,%esi
08268465 +0x283:  lea    -0x54(%ebp),%eax
08268468 +0x286:  mov    %eax,(%esp)
0826846b +0x289:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08268470 +0x28e:  mov    %esi,%eax
08268472 +0x290:  mov    %ebx,%edx
08268474 +0x292:  mov    %eax,(%esp)
08268477 +0x295:  call   08ae3750 <_Unwind_Resume>
0826847c +0x29a:  lea    -0x54(%ebp),%eax
0826847f +0x29d:  mov    %eax,(%esp)
08268482 +0x2a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08268487 +0x2a5:  jmp    0826848a <+0x2a8>
08268489 +0x2a7:  nop
0826848a +0x2a8:  add    $0x60,%esp
0826848d +0x2ab:  pop    %ebx
0826848e +0x2ac:  pop    %esi
0826848f +0x2ad:  pop    %ebp
08268490 +0x2ae:  ret
08268491 +0x2af:  nop
```

## 反编译 C

```c
// CPowerWarEvent::EndEvent @ 0x82681e2

/* CPowerWarEvent::EndEvent() */

void __thiscall CPowerWarEvent::EndEvent(CPowerWarEvent *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  PacketGuard local_58 [12];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  iVar3 = G_CEnvironment();
  if (*(int *)(iVar3 + 0x1a8) != 1) {
    iVar3 = G_CEnvironment();
    if (*(int *)(iVar3 + 0x1a8) != 2) {
      bVar1 = false;
      goto LAB_08268216;
    }
  }
  bVar1 = true;
LAB_08268216:
  if (!bVar1) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar2 != '\0') {
      CEventBase::SetEventFlag((CEventBase *)this,false);
      *(undefined2 *)(this + 10) = 0;
      *(undefined2 *)(this + 0xc) = 0;
      iVar3 = G_CDataManager();
      cVar2 = ServerParameterScript::isDungeonOpen(iVar3 + 0x68);
      if (cVar2 == '\x01') {
        cMyTrace::cMyTrace(local_2c,"virtual void CPowerWarEvent::EndEvent()",0xe4,0);
        cMyTrace::operator()(local_2c,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON OPEN!!");
      }
      else {
        cVar2 = Timer_DungeonInoutOpenTime::checkDungeonInoutTime(0x2aff);
        if (cVar2 == '\0') {
          cMyTrace::cMyTrace(local_3c,"virtual void CPowerWarEvent::EndEvent()",0xe1,0);
          cMyTrace::operator()(local_3c,"ULTIMATE_LOG : NOT UTIMATE DUNGEON OPEN TIME!!");
        }
        else {
          iVar3 = G_CDataManager();
          ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar3 + 0x68),0x2aff,true)
          ;
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::send_all_dungeon_inout_message(pGVar4,0x2aff,true);
          cMyTrace::cMyTrace(local_4c,"virtual void CPowerWarEvent::EndEvent()",0xde,0);
          cMyTrace::operator()
                    (local_4c,"ULTIMATE_LOG : POWER WAR EVENT END!! ULTIMATE DUNGEON OPEN!!");
        }
      }
      PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0826839c to 0826845e has its CatchHandler @ 08268461 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,0xa0);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::OnEndPowerWar(pGVar4,local_58);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::CancelPowerUp(pGVar4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar4,local_58);
      CleanupPowerWarServerMessage();
      pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::FrocedCloseAssaults();
      CEventManager::TriggerEventStart(GlobalData::s_event_manager,0x35,0);
      cMyTrace::cMyTrace(local_1c,"virtual void CPowerWarEvent::EndEvent()",0x110,0);
      cMyTrace::operator()(local_1c,"Power War Event End");
      PacketGuard::~PacketGuard(local_58);
    }
  }
  return;
}
```
