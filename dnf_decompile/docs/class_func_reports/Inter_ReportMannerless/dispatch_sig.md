# dispatch_sig

`_ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci`

`Inter_ReportMannerless::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReportMannerless` | `0x084d24a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d24a2  _ZN22Inter_ReportMannerless12dispatch_sigEP5CUserPci
#           Inter_ReportMannerless::dispatch_sig(CUser*, char*, int)
# range [0x084d24a2, 0x084d271d]
084d24a2 +0x000:  push   %ebp
084d24a3 +0x001:  mov    %esp,%ebp
084d24a5 +0x003:  push   %esi
084d24a6 +0x004:  push   %ebx
084d24a7 +0x005:  sub    $0x30,%esp
084d24aa +0x008:  mov    0x10(%ebp),%eax
084d24ad +0x00b:  mov    %eax,-0x10(%ebp)
084d24b0 +0x00e:  cmpl   $0x0,-0x10(%ebp)
084d24b4 +0x012:  jne    084d24c0 <+0x1e>
084d24b6 +0x014:  mov    $0x0,%ebx
084d24bb +0x019:  jmp    084d2715 <+0x273>
084d24c0 +0x01e:  movl   $0x0,-0xc(%ebp)
084d24c7 +0x025:  cmpl   $0x0,0xc(%ebp)
084d24cb +0x029:  je     084d24f1 <+0x4f>
084d24cd +0x02b:  mov    -0x10(%ebp),%eax
084d24d0 +0x02e:  mov    0xe(%eax),%esi
084d24d3 +0x031:  movl   $0xffffffff,0x4(%esp)
084d24db +0x039:  mov    0xc(%ebp),%eax
084d24de +0x03c:  mov    %eax,(%esp)
084d24e1 +0x03f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d24e6 +0x044:  cmp    %eax,%esi
084d24e8 +0x046:  je     084d24f1 <+0x4f>
084d24ea +0x048:  mov    $0x1,%eax
084d24ef +0x04d:  jmp    084d24f6 <+0x54>
084d24f1 +0x04f:  mov    $0x0,%eax
084d24f6 +0x054:  test   %al,%al
084d24f8 +0x056:  je     084d2516 <+0x74>
084d24fa +0x058:  mov    -0x10(%ebp),%eax
084d24fd +0x05b:  mov    0x1e(%eax),%esi
084d2500 +0x05e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d2505 +0x063:  mov    %esi,0x4(%esp)
084d2509 +0x067:  mov    %eax,(%esp)
084d250c +0x06a:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084d2511 +0x06f:  mov    %eax,-0xc(%ebp)
084d2514 +0x072:  jmp    084d251c <+0x7a>
084d2516 +0x074:  mov    0xc(%ebp),%eax
084d2519 +0x077:  mov    %eax,-0xc(%ebp)
084d251c +0x07a:  mov    -0x10(%ebp),%eax
084d251f +0x07d:  movzbl 0x15e(%eax),%eax
084d2526 +0x084:  cmp    $0x6f,%al
084d2528 +0x086:  jne    084d255f <+0xbd>
084d252a +0x088:  cmpl   $0x0,-0xc(%ebp)
084d252e +0x08c:  jne    084d253a <+0x98>
084d2530 +0x08e:  mov    $0x0,%ebx
084d2535 +0x093:  jmp    084d2715 <+0x273>
084d253a +0x098:  movl   $0x62,0x8(%esp)
084d2542 +0x0a0:  movl   $0x8c,0x4(%esp)
084d254a +0x0a8:  mov    -0xc(%ebp),%eax
084d254d +0x0ab:  mov    %eax,(%esp)
084d2550 +0x0ae:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d2555 +0x0b3:  mov    $0x0,%ebx
084d255a +0x0b8:  jmp    084d2715 <+0x273>
084d255f +0x0bd:  mov    -0x10(%ebp),%eax
084d2562 +0x0c0:  movzbl 0x15e(%eax),%eax
084d2569 +0x0c7:  cmp    $0x63,%al
084d256b +0x0c9:  jne    084d25a2 <+0x100>
084d256d +0x0cb:  cmpl   $0x0,-0xc(%ebp)
084d2571 +0x0cf:  jne    084d257d <+0xdb>
084d2573 +0x0d1:  mov    $0x0,%ebx
084d2578 +0x0d6:  jmp    084d2715 <+0x273>
084d257d +0x0db:  movl   $0x5f,0x8(%esp)
084d2585 +0x0e3:  movl   $0x8c,0x4(%esp)
084d258d +0x0eb:  mov    -0xc(%ebp),%eax
084d2590 +0x0ee:  mov    %eax,(%esp)
084d2593 +0x0f1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d2598 +0x0f6:  mov    $0x0,%ebx
084d259d +0x0fb:  jmp    084d2715 <+0x273>
084d25a2 +0x100:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084d25a7 +0x105:  movl   $0x326d,0x8(%esp)
084d25af +0x10d:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d25b7 +0x115:  mov    %eax,(%esp)
084d25ba +0x118:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084d25bf +0x11d:  movl   $0x1,0x8(%esp)
084d25c7 +0x125:  mov    %eax,0x4(%esp)
084d25cb +0x129:  lea    -0x18(%ebp),%eax
084d25ce +0x12c:  mov    %eax,(%esp)
084d25d1 +0x12f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084d25d6 +0x134:  lea    -0x18(%ebp),%eax
084d25d9 +0x137:  mov    %eax,(%esp)
084d25dc +0x13a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084d25e1 +0x13f:  movl   $0xca,0x4(%esp)
084d25e9 +0x147:  mov    %eax,(%esp)
084d25ec +0x14a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084d25f1 +0x14f:  lea    -0x18(%ebp),%eax
084d25f4 +0x152:  mov    %eax,(%esp)
084d25f7 +0x155:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084d25fc +0x15a:  movl   $0xffffffff,0x4(%esp)
084d2604 +0x162:  mov    %eax,(%esp)
084d2607 +0x165:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084d260c +0x16a:  lea    -0x18(%ebp),%eax
084d260f +0x16d:  mov    %eax,(%esp)
084d2612 +0x170:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084d2617 +0x175:  movl   $0x15f,0x8(%esp)
084d261f +0x17d:  mov    -0x10(%ebp),%edx
084d2622 +0x180:  mov    %edx,0x4(%esp)
084d2626 +0x184:  mov    %eax,(%esp)
084d2629 +0x187:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084d262e +0x18c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084d2633 +0x191:  lea    -0x18(%ebp),%edx
084d2636 +0x194:  mov    %edx,0x8(%esp)
084d263a +0x198:  movl   $0x4,0x4(%esp)
084d2642 +0x1a0:  mov    %eax,(%esp)
084d2645 +0x1a3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084d264a +0x1a8:  cmpl   $0x0,-0xc(%ebp)
084d264e +0x1ac:  jne    084d265f <+0x1bd>
084d2650 +0x1ae:  mov    $0x0,%ebx
084d2655 +0x1b3:  mov    $0x0,%esi
084d265a +0x1b8:  jmp    084d2701 <+0x25f>
084d265f +0x1bd:  lea    -0x24(%ebp),%eax
084d2662 +0x1c0:  mov    %eax,(%esp)
084d2665 +0x1c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d266a +0x1c8:  movl   $0x8c,0x8(%esp)
084d2672 +0x1d0:  movl   $0x1,0x4(%esp)
084d267a +0x1d8:  lea    -0x24(%ebp),%eax
084d267d +0x1db:  mov    %eax,(%esp)
084d2680 +0x1de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d2685 +0x1e3:  movl   $0x1,0x4(%esp)
084d268d +0x1eb:  lea    -0x24(%ebp),%eax
084d2690 +0x1ee:  mov    %eax,(%esp)
084d2693 +0x1f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2698 +0x1f6:  movl   $0x1,0x4(%esp)
084d26a0 +0x1fe:  lea    -0x24(%ebp),%eax
084d26a3 +0x201:  mov    %eax,(%esp)
084d26a6 +0x204:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d26ab +0x209:  lea    -0x24(%ebp),%eax
084d26ae +0x20c:  mov    %eax,0x4(%esp)
084d26b2 +0x210:  mov    -0xc(%ebp),%eax
084d26b5 +0x213:  mov    %eax,(%esp)
084d26b8 +0x216:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d26bd +0x21b:  jmp    084d26d4 <+0x232>
084d26bf +0x21d:  mov    %edx,%ebx
084d26c1 +0x21f:  mov    %eax,%esi
084d26c3 +0x221:  lea    -0x24(%ebp),%eax
084d26c6 +0x224:  mov    %eax,(%esp)
084d26c9 +0x227:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d26ce +0x22c:  mov    %esi,%eax
084d26d0 +0x22e:  mov    %ebx,%edx
084d26d2 +0x230:  jmp    084d26e6 <+0x244>
084d26d4 +0x232:  lea    -0x24(%ebp),%eax
084d26d7 +0x235:  mov    %eax,(%esp)
084d26da +0x238:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d26df +0x23d:  mov    $0x1,%esi
084d26e4 +0x242:  jmp    084d2701 <+0x25f>
084d26e6 +0x244:  mov    %edx,%ebx
084d26e8 +0x246:  mov    %eax,%esi
084d26ea +0x248:  lea    -0x18(%ebp),%eax
084d26ed +0x24b:  mov    %eax,(%esp)
084d26f0 +0x24e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d26f5 +0x253:  mov    %esi,%eax
084d26f7 +0x255:  mov    %ebx,%edx
084d26f9 +0x257:  mov    %eax,(%esp)
084d26fc +0x25a:  call   08ae3750 <_Unwind_Resume>
084d2701 +0x25f:  lea    -0x18(%ebp),%eax
084d2704 +0x262:  mov    %eax,(%esp)
084d2707 +0x265:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d270c +0x26a:  test   %esi,%esi
084d270e +0x26c:  je     084d2715 <+0x273>
084d2710 +0x26e:  mov    $0x0,%ebx
084d2715 +0x273:  mov    %ebx,%eax
084d2717 +0x275:  add    $0x30,%esp
084d271a +0x278:  pop    %ebx
084d271b +0x279:  pop    %esi
084d271c +0x27a:  pop    %ebp
084d271d +0x27b:  ret
```

## 反编译 C

```c
// Inter_ReportMannerless::dispatch_sig @ 0x84d24a2

/* Inter_ReportMannerless::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReportMannerless::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CGameManager *this;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 unaff_EBX;
  bool bVar6;
  PacketGuard local_28 [12];
  CStreamGuard local_1c [8];
  void *local_14;
  CUser *local_10;
  
  local_14 = (void *)param_3;
  if (param_3 != 0) {
    local_10 = (CUser *)0x0;
    if ((param_2 == (char *)0x0) ||
       (iVar1 = *(int *)(param_3 + 0xe), iVar3 = CUser::get_charac_no((CUser *)param_2,-1),
       iVar1 == iVar3)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      uVar2 = *(uint *)((int)local_14 + 0x1e);
      this = (CGameManager *)G_CGameManager();
      local_10 = (CUser *)CGameManager::GetUserByAccId(this,uVar2);
    }
    else {
      local_10 = (CUser *)param_2;
    }
    if (*(char *)((int)local_14 + 0x15e) == 'o') {
      if (local_10 == (CUser *)0x0) {
        unaff_EBX = 0;
      }
      else {
        CUser::SendCmdErrorPacket(local_10,0x8c,0x62);
        unaff_EBX = 0;
      }
    }
    else if (*(char *)((int)local_14 + 0x15e) == 'c') {
      if (local_10 == (CUser *)0x0) {
        unaff_EBX = 0;
      }
      else {
        CUser::SendCmdErrorPacket(local_10,0x8c,0x5f);
        unaff_EBX = 0;
      }
    }
    else {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x326d)
      ;
      CStreamGuard::CStreamGuard(local_1c,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084d25ec to 084d2669 has its CatchHandler @ 084d26e6 */
      CStreamGuard::operator<<(pCVar5,0xca);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar5,-1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
      CStreamGuard::put_binary(pCVar5,local_14,0x15f);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
      bVar6 = local_10 != (CUser *)0x0;
      if (bVar6) {
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084d2680 to 084d26bc has its CatchHandler @ 084d26bf */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x8c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(local_10,local_28);
                    /* try { // try from 084d26da to 084d26de has its CatchHandler @ 084d26e6 */
        PacketGuard::~PacketGuard(local_28);
      }
      else {
        unaff_EBX = 0;
      }
      CStreamGuard::~CStreamGuard(local_1c);
      if (bVar6) {
        unaff_EBX = 0;
      }
    }
    return unaff_EBX;
  }
  return 0;
}
```
