# dispatch_sig

`_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CranePickUp` | `0x0821d508` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821d508  _ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821d508, 0x0821d7f9]
0821d508 +0x000:  push   %ebp
0821d509 +0x001:  mov    %esp,%ebp
0821d50b +0x003:  push   %esi
0821d50c +0x004:  push   %ebx
0821d50d +0x005:  sub    $0x40,%esp
0821d510 +0x008:  mov    0xc(%ebp),%eax
0821d513 +0x00b:  mov    %eax,(%esp)
0821d516 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d51b +0x013:  cmp    $0x3,%eax
0821d51e +0x016:  setne  %al
0821d521 +0x019:  test   %al,%al
0821d523 +0x01b:  je     0821d54a <+0x42>
0821d525 +0x01d:  movl   $0x13,0x8(%esp)
0821d52d +0x025:  movl   $0x1e7,0x4(%esp)
0821d535 +0x02d:  mov    0xc(%ebp),%eax
0821d538 +0x030:  mov    %eax,(%esp)
0821d53b +0x033:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821d540 +0x038:  mov    $0x0,%eax
0821d545 +0x03d:  jmp    0821d7f3 <+0x2eb>
0821d54a +0x042:  mov    0xc(%ebp),%eax
0821d54d +0x045:  mov    %eax,(%esp)
0821d550 +0x048:  call   0868dd34 <_ZNK5CUser15isUseCraneStartEv>  ; CUser::isUseCraneStart() const
0821d555 +0x04d:  xor    $0x1,%eax
0821d558 +0x050:  test   %al,%al
0821d55a +0x052:  je     0821d581 <+0x79>
0821d55c +0x054:  movl   $0x11,0x8(%esp)
0821d564 +0x05c:  movl   $0x1e7,0x4(%esp)
0821d56c +0x064:  mov    0xc(%ebp),%eax
0821d56f +0x067:  mov    %eax,(%esp)
0821d572 +0x06a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821d577 +0x06f:  mov    $0x0,%eax
0821d57c +0x074:  jmp    0821d7f3 <+0x2eb>
0821d581 +0x079:  movl   $0x0,0x4(%esp)
0821d589 +0x081:  mov    0xc(%ebp),%eax
0821d58c +0x084:  mov    %eax,(%esp)
0821d58f +0x087:  call   0868dd18 <_ZN5CUser16setUseCraneStartEb>  ; CUser::setUseCraneStart(bool)
0821d594 +0x08c:  movl   $0x0,-0x10(%ebp)
0821d59b +0x093:  movl   $0xffffffff,-0x24(%ebp)
0821d5a2 +0x09a:  movw   $0xffff,-0x26(%ebp)
0821d5a8 +0x0a0:  lea    -0x26(%ebp),%eax
0821d5ab +0x0a3:  mov    %eax,0x4(%esp)
0821d5af +0x0a7:  mov    0x10(%ebp),%eax
0821d5b2 +0x0aa:  mov    %eax,(%esp)
0821d5b5 +0x0ad:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821d5ba +0x0b2:  xor    $0x1,%eax
0821d5bd +0x0b5:  test   %al,%al
0821d5bf +0x0b7:  je     0821d5ea <+0xe2>
0821d5c1 +0x0b9:  movl   $0x0,0xc(%esp)
0821d5c9 +0x0c1:  movl   $0x0,0x8(%esp)
0821d5d1 +0x0c9:  movl   $&_ZZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d5d9 +0x0d1:  movl   $0xd122,(%esp)
0821d5e0 +0x0d8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821d5e5 +0x0dd:  jmp    0821d7f3 <+0x2eb>
0821d5ea +0x0e2:  lea    -0x24(%ebp),%eax
0821d5ed +0x0e5:  mov    %eax,0x4(%esp)
0821d5f1 +0x0e9:  mov    0x10(%ebp),%eax
0821d5f4 +0x0ec:  mov    %eax,(%esp)
0821d5f7 +0x0ef:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821d5fc +0x0f4:  xor    $0x1,%eax
0821d5ff +0x0f7:  test   %al,%al
0821d601 +0x0f9:  je     0821d62c <+0x124>
0821d603 +0x0fb:  movl   $0x0,0xc(%esp)
0821d60b +0x103:  movl   $0x0,0x8(%esp)
0821d613 +0x10b:  movl   $&_ZZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d61b +0x113:  movl   $0xd123,(%esp)
0821d622 +0x11a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821d627 +0x11f:  jmp    0821d7f3 <+0x2eb>
0821d62c +0x124:  movb   $0x0,-0x9(%ebp)
0821d630 +0x128:  mov    -0x24(%ebp),%esi
0821d633 +0x12b:  movzwl -0x26(%ebp),%eax
0821d637 +0x12f:  movswl %ax,%ebx
0821d63a +0x132:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821d63f +0x137:  mov    %eax,(%esp)
0821d642 +0x13a:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
0821d647 +0x13f:  mov    %esi,0x8(%esp)
0821d64b +0x143:  mov    %ebx,0x4(%esp)
0821d64f +0x147:  mov    %eax,(%esp)
0821d652 +0x14a:  call   080ebce0 <_ZN20CraneMinigameManager13isPickSuccessEsi>  ; CraneMinigameManager::isPickSuccess(short, int)
0821d657 +0x14f:  test   %al,%al
0821d659 +0x151:  je     0821d691 <+0x189>
0821d65b +0x153:  movzwl -0x26(%ebp),%eax
0821d65f +0x157:  movswl %ax,%ebx
0821d662 +0x15a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821d667 +0x15f:  mov    %eax,(%esp)
0821d66a +0x162:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
0821d66f +0x167:  mov    %ebx,0x8(%esp)
0821d673 +0x16b:  mov    0xc(%ebp),%edx
0821d676 +0x16e:  mov    %edx,0x4(%esp)
0821d67a +0x172:  mov    %eax,(%esp)
0821d67d +0x175:  call   080ebd7a <_ZN20CraneMinigameManager8sendItemEP5CUseri>  ; CraneMinigameManager::sendItem(CUser*, int)
0821d682 +0x17a:  mov    %eax,-0x10(%ebp)
0821d685 +0x17d:  cmpl   $0x0,-0x10(%ebp)
0821d689 +0x181:  sete   %al
0821d68c +0x184:  mov    %al,-0x9(%ebp)
0821d68f +0x187:  jmp    0821d698 <+0x190>
0821d691 +0x189:  movl   $0xbe,-0x10(%ebp)
0821d698 +0x190:  movzbl -0x9(%ebp),%eax
0821d69c +0x194:  xor    $0x1,%eax
0821d69f +0x197:  test   %al,%al
0821d6a1 +0x199:  je     0821d727 <+0x21f>
0821d6a7 +0x19f:  mov    -0x10(%ebp),%esi
0821d6aa +0x1a2:  mov    0xc(%ebp),%eax
0821d6ad +0x1a5:  mov    %eax,(%esp)
0821d6b0 +0x1a8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821d6b5 +0x1ad:  movl   $0x0,0x4(%esp)
0821d6bd +0x1b5:  mov    %eax,(%esp)
0821d6c0 +0x1b8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0821d6c5 +0x1bd:  mov    %eax,%ebx
0821d6c7 +0x1bf:  movl   $0x0,0xc(%esp)
0821d6cf +0x1c7:  movl   $0xd135,0x8(%esp)
0821d6d7 +0x1cf:  movl   $&_ZZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d6df +0x1d7:  lea    -0x20(%ebp),%eax
0821d6e2 +0x1da:  mov    %eax,(%esp)
0821d6e5 +0x1dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0821d6ea +0x1e2:  mov    %esi,0xc(%esp)
0821d6ee +0x1e6:  mov    %ebx,0x8(%esp)
0821d6f2 +0x1ea:  movl   $"ServerMessage : Dispatcher_CranePickUp failed : m_id : %s error %d",0x4(%esp)
0821d6fa +0x1f2:  lea    -0x20(%ebp),%eax
0821d6fd +0x1f5:  mov    %eax,(%esp)
0821d700 +0x1f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821d705 +0x1fd:  mov    -0x10(%ebp),%eax
0821d708 +0x200:  movzbl %al,%eax
0821d70b +0x203:  mov    %eax,0x8(%esp)
0821d70f +0x207:  movl   $0x1e7,0x4(%esp)
0821d717 +0x20f:  mov    0xc(%ebp),%eax
0821d71a +0x212:  mov    %eax,(%esp)
0821d71d +0x215:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821d722 +0x21a:  jmp    0821d7ee <+0x2e6>
0821d727 +0x21f:  lea    -0x34(%ebp),%eax
0821d72a +0x222:  mov    %eax,(%esp)
0821d72d +0x225:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821d732 +0x22a:  movl   $0x1e7,0x8(%esp)
0821d73a +0x232:  movl   $0x1,0x4(%esp)
0821d742 +0x23a:  lea    -0x34(%ebp),%eax
0821d745 +0x23d:  mov    %eax,(%esp)
0821d748 +0x240:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821d74d +0x245:  movl   $0x1,0x4(%esp)
0821d755 +0x24d:  lea    -0x34(%ebp),%eax
0821d758 +0x250:  mov    %eax,(%esp)
0821d75b +0x253:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821d760 +0x258:  mov    -0x24(%ebp),%eax
0821d763 +0x25b:  mov    %eax,0x4(%esp)
0821d767 +0x25f:  lea    -0x34(%ebp),%eax
0821d76a +0x262:  mov    %eax,(%esp)
0821d76d +0x265:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821d772 +0x26a:  movzwl -0x26(%ebp),%eax
0821d776 +0x26e:  movswl %ax,%ebx
0821d779 +0x271:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821d77e +0x276:  mov    %eax,(%esp)
0821d781 +0x279:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
0821d786 +0x27e:  mov    %ebx,0x4(%esp)
0821d78a +0x282:  mov    %eax,(%esp)
0821d78d +0x285:  call   080ebd44 <_ZN20CraneMinigameManager10getItemCntEi>  ; CraneMinigameManager::getItemCnt(int)
0821d792 +0x28a:  mov    %eax,0x4(%esp)
0821d796 +0x28e:  lea    -0x34(%ebp),%eax
0821d799 +0x291:  mov    %eax,(%esp)
0821d79c +0x294:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821d7a1 +0x299:  movl   $0x1,0x4(%esp)
0821d7a9 +0x2a1:  lea    -0x34(%ebp),%eax
0821d7ac +0x2a4:  mov    %eax,(%esp)
0821d7af +0x2a7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821d7b4 +0x2ac:  lea    -0x34(%ebp),%eax
0821d7b7 +0x2af:  mov    %eax,0x4(%esp)
0821d7bb +0x2b3:  mov    0xc(%ebp),%eax
0821d7be +0x2b6:  mov    %eax,(%esp)
0821d7c1 +0x2b9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821d7c6 +0x2be:  jmp    0821d7e3 <+0x2db>
0821d7c8 +0x2c0:  mov    %edx,%ebx
0821d7ca +0x2c2:  mov    %eax,%esi
0821d7cc +0x2c4:  lea    -0x34(%ebp),%eax
0821d7cf +0x2c7:  mov    %eax,(%esp)
0821d7d2 +0x2ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821d7d7 +0x2cf:  mov    %esi,%eax
0821d7d9 +0x2d1:  mov    %ebx,%edx
0821d7db +0x2d3:  mov    %eax,(%esp)
0821d7de +0x2d6:  call   08ae3750 <_Unwind_Resume>
0821d7e3 +0x2db:  lea    -0x34(%ebp),%eax
0821d7e6 +0x2de:  mov    %eax,(%esp)
0821d7e9 +0x2e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821d7ee +0x2e6:  mov    $0x0,%eax
0821d7f3 +0x2eb:  add    $0x40,%esp
0821d7f6 +0x2ee:  pop    %ebx
0821d7f7 +0x2ef:  pop    %esi
0821d7f8 +0x2f0:  pop    %ebp
0821d7f9 +0x2f1:  ret
```

## 反编译 C

```c
// Dispatcher_CranePickUp::dispatch_sig @ 0x821d508

/* Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CranePickUp::dispatch_sig(Dispatcher_CranePickUp *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CGameManager *pCVar6;
  CraneMinigameManager *pCVar7;
  uint uVar8;
  PacketGuard local_38 [14];
  short local_2a;
  int local_28;
  cMyTrace local_24 [16];
  uint local_14;
  char local_d;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    cVar3 = CUser::isUseCraneStart(param_1);
    if (cVar3 == '\x01') {
      CUser::setUseCraneStart(param_1,false);
      local_14 = 0;
      local_28 = -1;
      local_2a = -1;
      cVar3 = PacketBuf::get_short(param_2,&local_2a);
      if (cVar3 == '\x01') {
        cVar3 = PacketBuf::get_int(param_2,&local_28);
        iVar4 = local_28;
        sVar1 = local_2a;
        if (cVar3 == '\x01') {
          local_d = '\0';
          pCVar6 = (CGameManager *)G_CGameManager();
          pCVar7 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar6);
          cVar3 = CraneMinigameManager::isPickSuccess(pCVar7,sVar1,iVar4);
          if (cVar3 == '\0') {
            local_14 = 0xbe;
          }
          else {
            iVar4 = (int)local_2a;
            pCVar6 = (CGameManager *)G_CGameManager();
            pCVar7 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar6);
            local_14 = CraneMinigameManager::sendItem(pCVar7,param_1,iVar4);
            local_d = local_14 == 0;
          }
          uVar2 = local_14;
          if (local_d == '\x01') {
            PacketGuard::PacketGuard(local_38);
                    /* try { // try from 0821d748 to 0821d7c5 has its CatchHandler @ 0821d7c8 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x1e7);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_28);
            iVar4 = (int)local_2a;
            pCVar6 = (CGameManager *)G_CGameManager();
            pCVar7 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar6);
            iVar4 = CraneMinigameManager::getItemCnt(pCVar7,iVar4);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,iVar4);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
            CUser::Send(param_1,local_38);
            PacketGuard::~PacketGuard(local_38);
          }
          else {
            uVar8 = CUser::get_acc_id(param_1);
            uVar5 = NumberToString(uVar8,0);
            cMyTrace::cMyTrace(local_24,
                               "virtual int Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)"
                               ,0xd135,0);
            cMyTrace::operator()
                      (local_24,"ServerMessage : Dispatcher_CranePickUp failed : m_id : %s error %d"
                       ,uVar5,uVar2);
            CUser::SendCmdErrorPacket(param_1,0x1e7,local_14 & 0xff);
          }
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xd123,
                           "virtual int Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)",0,
                           0);
        }
      }
      else {
        uVar5 = LineFunc(0xd122,
                         "virtual int Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1e7,0x11);
      uVar5 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1e7,0x13);
    uVar5 = 0;
  }
  return uVar5;
}
```
