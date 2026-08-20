# ClearMVPInfo

`_ZN13CPowerManager12ClearMVPInfoEv`

`CPowerManager::ClearMVPInfo()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f5de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f5de  _ZN13CPowerManager12ClearMVPInfoEv
#           CPowerManager::ClearMVPInfo()
# range [0x0847f5de, 0x0847f8dd]
0847f5de +0x000:  push   %ebp
0847f5df +0x001:  mov    %esp,%ebp
0847f5e1 +0x003:  push   %esi
0847f5e2 +0x004:  push   %ebx
0847f5e3 +0x005:  sub    $0x60,%esp
0847f5e6 +0x008:  movl   $0x0,0xc(%esp)
0847f5ee +0x010:  movl   $0x143,0x8(%esp)
0847f5f6 +0x018:  movl   $&_ZZN13CPowerManager12ClearMVPInfoEvE19__PRETTY_FUNCTION__,0x4(%esp)
0847f5fe +0x020:  lea    -0x38(%ebp),%eax
0847f601 +0x023:  mov    %eax,(%esp)
0847f604 +0x026:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847f609 +0x02b:  movl   $"CLEAR MVP INFO",0x4(%esp)
0847f611 +0x033:  lea    -0x38(%ebp),%eax
0847f614 +0x036:  mov    %eax,(%esp)
0847f617 +0x039:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847f61c +0x03e:  mov    0x8(%ebp),%eax
0847f61f +0x041:  add    $0x28,%eax
0847f622 +0x044:  movl   $0x18c,0x8(%esp)
0847f62a +0x04c:  movl   $0x0,0x4(%esp)
0847f632 +0x054:  mov    %eax,(%esp)
0847f635 +0x057:  call   0807dcc0 <_init+0x5b8>
0847f63a +0x05c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847f63f +0x061:  movl   $0x149,0x8(%esp)
0847f647 +0x069:  movl   $"DNF_PowerManager.cpp",0x4(%esp)
0847f64f +0x071:  mov    %eax,(%esp)
0847f652 +0x074:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847f657 +0x079:  movl   $0x1,0x8(%esp)
0847f65f +0x081:  mov    %eax,0x4(%esp)
0847f663 +0x085:  lea    -0x40(%ebp),%eax
0847f666 +0x088:  mov    %eax,(%esp)
0847f669 +0x08b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847f66e +0x090:  lea    -0x40(%ebp),%eax
0847f671 +0x093:  mov    %eax,(%esp)
0847f674 +0x096:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847f679 +0x09b:  movl   $0x1a5,0x4(%esp)
0847f681 +0x0a3:  mov    %eax,(%esp)
0847f684 +0x0a6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847f689 +0x0ab:  lea    -0x40(%ebp),%eax
0847f68c +0x0ae:  mov    %eax,(%esp)
0847f68f +0x0b1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847f694 +0x0b6:  movl   $0xffffffff,0x4(%esp)
0847f69c +0x0be:  mov    %eax,(%esp)
0847f69f +0x0c1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847f6a4 +0x0c6:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0847f6a9 +0x0cb:  mov    0x378(%eax),%ebx
0847f6af +0x0d1:  lea    -0x40(%ebp),%eax
0847f6b2 +0x0d4:  mov    %eax,(%esp)
0847f6b5 +0x0d7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847f6ba +0x0dc:  mov    %ebx,0x4(%esp)
0847f6be +0x0e0:  mov    %eax,(%esp)
0847f6c1 +0x0e3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847f6c6 +0x0e8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847f6cb +0x0ed:  lea    -0x40(%ebp),%edx
0847f6ce +0x0f0:  mov    %edx,0x8(%esp)
0847f6d2 +0x0f4:  movl   $0x2,0x4(%esp)
0847f6da +0x0fc:  mov    %eax,(%esp)
0847f6dd +0x0ff:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847f6e2 +0x104:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0847f6e7 +0x109:  mov    0x378(%eax),%ebx
0847f6ed +0x10f:  movl   $0x0,0xc(%esp)
0847f6f5 +0x117:  movl   $0x152,0x8(%esp)
0847f6fd +0x11f:  movl   $&_ZZN13CPowerManager12ClearMVPInfoEvE19__PRETTY_FUNCTION__,0x4(%esp)
0847f705 +0x127:  lea    -0x28(%ebp),%eax
0847f708 +0x12a:  mov    %eax,(%esp)
0847f70b +0x12d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847f710 +0x132:  mov    %ebx,0x8(%esp)
0847f714 +0x136:  movl   $"PUT DB MSG - E_DELETE_POWER_WAR_STATUE_MESSAGE / server_group : %d",0x4(%esp)
0847f71c +0x13e:  lea    -0x28(%ebp),%eax
0847f71f +0x141:  mov    %eax,(%esp)
0847f722 +0x144:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847f727 +0x149:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0847f72c +0x14e:  mov    %eax,(%esp)
0847f72f +0x151:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
0847f734 +0x156:  mov    %eax,-0x18(%ebp)
0847f737 +0x159:  cmpl   $0x0,-0x18(%ebp)
0847f73b +0x15d:  je     0847f8cc <+0x2ee>
0847f741 +0x163:  movl   $0x1,0x4(%esp)
0847f749 +0x16b:  mov    -0x18(%ebp),%eax
0847f74c +0x16e:  mov    %eax,(%esp)
0847f74f +0x171:  call   08600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>  ; CSharedServerMessageManager::DeleteSpecificMessage(int)
0847f754 +0x176:  movl   $0x2,0x4(%esp)
0847f75c +0x17e:  mov    -0x18(%ebp),%eax
0847f75f +0x181:  mov    %eax,(%esp)
0847f762 +0x184:  call   08600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>  ; CSharedServerMessageManager::DeleteSpecificMessage(int)
0847f767 +0x189:  movl   $0x3,0x4(%esp)
0847f76f +0x191:  mov    -0x18(%ebp),%eax
0847f772 +0x194:  mov    %eax,(%esp)
0847f775 +0x197:  call   08600d0c <_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi>  ; CSharedServerMessageManager::DeleteSpecificMessage(int)
0847f77a +0x19c:  lea    -0x4c(%ebp),%eax
0847f77d +0x19f:  mov    %eax,(%esp)
0847f780 +0x1a2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0847f785 +0x1a7:  movl   $0xc0,0x8(%esp)
0847f78d +0x1af:  movl   $0x0,0x4(%esp)
0847f795 +0x1b7:  lea    -0x4c(%ebp),%eax
0847f798 +0x1ba:  mov    %eax,(%esp)
0847f79b +0x1bd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0847f7a0 +0x1c2:  movl   $0x2,0x4(%esp)
0847f7a8 +0x1ca:  lea    -0x4c(%ebp),%eax
0847f7ab +0x1cd:  mov    %eax,(%esp)
0847f7ae +0x1d0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f7b3 +0x1d5:  movl   $0x3,0x4(%esp)
0847f7bb +0x1dd:  lea    -0x4c(%ebp),%eax
0847f7be +0x1e0:  mov    %eax,(%esp)
0847f7c1 +0x1e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f7c6 +0x1e8:  movl   $"null string",-0x14(%ebp)
0847f7cd +0x1ef:  mov    -0x14(%ebp),%eax
0847f7d0 +0x1f2:  mov    %eax,(%esp)
0847f7d3 +0x1f5:  call   0807e3b0 <_init+0xca8>
0847f7d8 +0x1fa:  mov    %eax,-0x10(%ebp)
0847f7db +0x1fd:  movl   $0x0,-0xc(%ebp)
0847f7e2 +0x204:  jmp    0847f853 <+0x275>
0847f7e4 +0x206:  mov    -0xc(%ebp),%eax
0847f7e7 +0x209:  add    $0x1,%eax
0847f7ea +0x20c:  mov    %eax,0x4(%esp)
0847f7ee +0x210:  lea    -0x4c(%ebp),%eax
0847f7f1 +0x213:  mov    %eax,(%esp)
0847f7f4 +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f7f9 +0x21b:  mov    -0x10(%ebp),%eax
0847f7fc +0x21e:  mov    %eax,0x4(%esp)
0847f800 +0x222:  lea    -0x4c(%ebp),%eax
0847f803 +0x225:  mov    %eax,(%esp)
0847f806 +0x228:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f80b +0x22d:  mov    -0x10(%ebp),%eax
0847f80e +0x230:  mov    %eax,0x8(%esp)
0847f812 +0x234:  mov    -0x14(%ebp),%eax
0847f815 +0x237:  mov    %eax,0x4(%esp)
0847f819 +0x23b:  lea    -0x4c(%ebp),%eax
0847f81c +0x23e:  mov    %eax,(%esp)
0847f81f +0x241:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0847f824 +0x246:  mov    -0x10(%ebp),%eax
0847f827 +0x249:  mov    %eax,0x4(%esp)
0847f82b +0x24d:  lea    -0x4c(%ebp),%eax
0847f82e +0x250:  mov    %eax,(%esp)
0847f831 +0x253:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f836 +0x258:  mov    -0x10(%ebp),%eax
0847f839 +0x25b:  mov    %eax,0x8(%esp)
0847f83d +0x25f:  mov    -0x14(%ebp),%eax
0847f840 +0x262:  mov    %eax,0x4(%esp)
0847f844 +0x266:  lea    -0x4c(%ebp),%eax
0847f847 +0x269:  mov    %eax,(%esp)
0847f84a +0x26c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0847f84f +0x271:  addl   $0x1,-0xc(%ebp)
0847f853 +0x275:  cmpl   $0x2,-0xc(%ebp)
0847f857 +0x279:  setle  %al
0847f85a +0x27c:  test   %al,%al
0847f85c +0x27e:  jne    0847f7e4 <+0x206>
0847f85e +0x280:  movl   $0x1,0x4(%esp)
0847f866 +0x288:  lea    -0x4c(%ebp),%eax
0847f869 +0x28b:  mov    %eax,(%esp)
0847f86c +0x28e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0847f871 +0x293:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0847f876 +0x298:  movl   $0x3,0x8(%esp)
0847f87e +0x2a0:  lea    -0x4c(%ebp),%edx
0847f881 +0x2a3:  mov    %edx,0x4(%esp)
0847f885 +0x2a7:  mov    %eax,(%esp)
0847f888 +0x2aa:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
0847f88d +0x2af:  jmp    0847f8a4 <+0x2c6>
0847f88f +0x2b1:  mov    %edx,%ebx
0847f891 +0x2b3:  mov    %eax,%esi
0847f893 +0x2b5:  lea    -0x4c(%ebp),%eax
0847f896 +0x2b8:  mov    %eax,(%esp)
0847f899 +0x2bb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0847f89e +0x2c0:  mov    %esi,%eax
0847f8a0 +0x2c2:  mov    %ebx,%edx
0847f8a2 +0x2c4:  jmp    0847f8b1 <+0x2d3>
0847f8a4 +0x2c6:  lea    -0x4c(%ebp),%eax
0847f8a7 +0x2c9:  mov    %eax,(%esp)
0847f8aa +0x2cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0847f8af +0x2d1:  jmp    0847f8cc <+0x2ee>
0847f8b1 +0x2d3:  mov    %edx,%ebx
0847f8b3 +0x2d5:  mov    %eax,%esi
0847f8b5 +0x2d7:  lea    -0x40(%ebp),%eax
0847f8b8 +0x2da:  mov    %eax,(%esp)
0847f8bb +0x2dd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847f8c0 +0x2e2:  mov    %esi,%eax
0847f8c2 +0x2e4:  mov    %ebx,%edx
0847f8c4 +0x2e6:  mov    %eax,(%esp)
0847f8c7 +0x2e9:  call   08ae3750 <_Unwind_Resume>
0847f8cc +0x2ee:  lea    -0x40(%ebp),%eax
0847f8cf +0x2f1:  mov    %eax,(%esp)
0847f8d2 +0x2f4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847f8d7 +0x2f9:  add    $0x60,%esp
0847f8da +0x2fc:  pop    %ebx
0847f8db +0x2fd:  pop    %esi
0847f8dc +0x2fe:  pop    %ebp
0847f8dd +0x2ff:  ret
```

## 反编译 C

```c
// CPowerManager::ClearMVPInfo @ 0x847f5de

/* CPowerManager::ClearMVPInfo() */

void __thiscall CPowerManager::ClearMVPInfo(CPowerManager *this)

{
  undefined4 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CGameManager *this_00;
  GameWorld *this_01;
  PacketGuard local_50 [12];
  CStreamGuard local_44 [8];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  CSharedServerMessageManager *local_1c;
  char *local_18;
  size_t local_14;
  int local_10;
  
  cMyTrace::cMyTrace(local_3c,"void CPowerManager::ClearMVPInfo()",0x143,0);
  cMyTrace::operator()(local_3c,"CLEAR MVP INFO");
  memset(this + 0x28,0,0x18c);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x149);
  CStreamGuard::CStreamGuard(local_44,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_44);
                    /* try { // try from 0847f684 to 0847f784 has its CatchHandler @ 0847f8b1 */
  CStreamGuard::operator<<(pCVar3,0x1a5);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_44);
  CStreamGuard::operator<<(pCVar3,-1);
  iVar4 = G_CEnvironment();
  iVar4 = *(int *)(iVar4 + 0x378);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_44);
  CStreamGuard::operator<<(pCVar3,iVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_44);
  iVar4 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar4 + 0x378);
  cMyTrace::cMyTrace(local_2c,"void CPowerManager::ClearMVPInfo()",0x152,0);
  cMyTrace::operator()
            (local_2c,"PUT DB MSG - E_DELETE_POWER_WAR_STATUE_MESSAGE / server_group : %d",uVar1);
  this_00 = (CGameManager *)G_CGameManager();
  local_1c = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this_00);
  if (local_1c != (CSharedServerMessageManager *)0x0) {
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,1);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,2);
    CSharedServerMessageManager::DeleteSpecificMessage(local_1c,3);
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0847f79b to 0847f88c has its CatchHandler @ 0847f88f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xc0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,3);
    local_18 = "null string";
    local_14 = strlen("null string");
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_10 + 1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_18,local_14);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_18,local_14);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    this_01 = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this_01,local_50,3);
                    /* try { // try from 0847f8aa to 0847f8ae has its CatchHandler @ 0847f8b1 */
    PacketGuard::~PacketGuard(local_50);
  }
  CStreamGuard::~CStreamGuard(local_44);
  return;
}
```
