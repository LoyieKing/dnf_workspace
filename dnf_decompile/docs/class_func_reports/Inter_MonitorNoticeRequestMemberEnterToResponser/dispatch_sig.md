# dispatch_sig

`_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeRequestMemberEnterToResponser` | `0x084ccd54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ccd54  _ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig(CUser*, char*, int)
# range [0x084ccd54, 0x084ccfd9]
084ccd54 +0x000:  push   %ebp
084ccd55 +0x001:  mov    %esp,%ebp
084ccd57 +0x003:  push   %esi
084ccd58 +0x004:  push   %ebx
084ccd59 +0x005:  sub    $0x60,%esp
084ccd5c +0x008:  mov    0xc(%ebp),%eax
084ccd5f +0x00b:  mov    %eax,(%esp)
084ccd62 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ccd67 +0x013:  test   %eax,%eax
084ccd69 +0x015:  sete   %al
084ccd6c +0x018:  test   %al,%al
084ccd6e +0x01a:  je     084ccd7a <+0x26>
084ccd70 +0x01c:  mov    $0x0,%ebx
084ccd75 +0x021:  jmp    084ccfd0 <+0x27c>
084ccd7a +0x026:  mov    0x10(%ebp),%eax
084ccd7d +0x029:  mov    %eax,-0x10(%ebp)
084ccd80 +0x02c:  movl   $0xffffffff,0x4(%esp)
084ccd88 +0x034:  mov    0xc(%ebp),%eax
084ccd8b +0x037:  mov    %eax,(%esp)
084ccd8e +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ccd93 +0x03f:  mov    %eax,%edx
084ccd95 +0x041:  mov    -0x10(%ebp),%eax
084ccd98 +0x044:  mov    0xe(%eax),%eax
084ccd9b +0x047:  cmp    %eax,%edx
084ccd9d +0x049:  setne  %al
084ccda0 +0x04c:  test   %al,%al
084ccda2 +0x04e:  je     084ccdfb <+0xa7>
084ccda4 +0x050:  mov    -0x10(%ebp),%eax
084ccda7 +0x053:  mov    0xe(%eax),%ebx
084ccdaa +0x056:  movl   $0xffffffff,0x4(%esp)
084ccdb2 +0x05e:  mov    0xc(%ebp),%eax
084ccdb5 +0x061:  mov    %eax,(%esp)
084ccdb8 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ccdbd +0x069:  mov    %ebx,0x18(%esp)
084ccdc1 +0x06d:  mov    %eax,0x14(%esp)
084ccdc5 +0x071:  movl   $"MEMBER : Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ccdcd +0x079:  movl   $0x280c,0xc(%esp)
084ccdd5 +0x081:  movl   $&_ZZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ccddd +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ccde5 +0x091:  movl   $0x1,(%esp)
084ccdec +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ccdf1 +0x09d:  mov    $0x0,%ebx
084ccdf6 +0x0a2:  jmp    084ccfd0 <+0x27c>
084ccdfb +0x0a7:  mov    0xc(%ebp),%eax
084ccdfe +0x0aa:  mov    %eax,(%esp)
084cce01 +0x0ad:  call   0868dc7a <_ZN5CUser14alonePlay_ModeEv>  ; CUser::alonePlay_Mode()
084cce06 +0x0b2:  test   %al,%al
084cce08 +0x0b4:  je     084cce73 <+0x11f>
084cce0a +0x0b6:  lea    -0x2f(%ebp),%eax
084cce0d +0x0b9:  mov    %eax,(%esp)
084cce10 +0x0bc:  call   0822ba10 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x10ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x10ba
084cce15 +0x0c1:  mov    0xc(%ebp),%eax
084cce18 +0x0c4:  mov    %eax,(%esp)
084cce1b +0x0c7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084cce20 +0x0cc:  mov    %eax,-0x25(%ebp)
084cce23 +0x0cf:  mov    0xc(%ebp),%eax
084cce26 +0x0d2:  mov    %eax,(%esp)
084cce29 +0x0d5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084cce2e +0x0da:  mov    %eax,-0x21(%ebp)
084cce31 +0x0dd:  movb   $0x3,-0x1d(%ebp)
084cce35 +0x0e1:  lea    -0x2f(%ebp),%ebx
084cce38 +0x0e4:  mov    0xc(%ebp),%eax
084cce3b +0x0e7:  mov    %eax,(%esp)
084cce3e +0x0ea:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084cce43 +0x0ef:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084cce49 +0x0f5:  mov    %eax,0x4(%esp)
084cce4d +0x0f9:  mov    %edx,(%esp)
084cce50 +0x0fc:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084cce55 +0x101:  movl   $0x13,0x8(%esp)
084cce5d +0x109:  mov    %ebx,0x4(%esp)
084cce61 +0x10d:  mov    %eax,(%esp)
084cce64 +0x110:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084cce69 +0x115:  mov    $0x0,%ebx
084cce6e +0x11a:  jmp    084ccfd0 <+0x27c>
084cce73 +0x11f:  mov    0xc(%ebp),%eax
084cce76 +0x122:  mov    %eax,(%esp)
084cce79 +0x125:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
084cce7e +0x12a:  movl   $0x1d,0x4(%esp)
084cce86 +0x132:  mov    %eax,(%esp)
084cce89 +0x135:  call   084b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>  ; CGameOption::get_etc_option(ENUM_OPTION_ETC)
084cce8e +0x13a:  cmp    $0x1,%ax
084cce92 +0x13e:  sete   %al
084cce95 +0x141:  test   %al,%al
084cce97 +0x143:  je     084ccf02 <+0x1ae>
084cce99 +0x145:  lea    -0x42(%ebp),%eax
084cce9c +0x148:  mov    %eax,(%esp)
084cce9f +0x14b:  call   0822ba10 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x10ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x10ba
084ccea4 +0x150:  mov    0xc(%ebp),%eax
084ccea7 +0x153:  mov    %eax,(%esp)
084cceaa +0x156:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084cceaf +0x15b:  mov    %eax,-0x38(%ebp)
084cceb2 +0x15e:  mov    0xc(%ebp),%eax
084cceb5 +0x161:  mov    %eax,(%esp)
084cceb8 +0x164:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084ccebd +0x169:  mov    %eax,-0x34(%ebp)
084ccec0 +0x16c:  movb   $0x4,-0x30(%ebp)
084ccec4 +0x170:  lea    -0x42(%ebp),%ebx
084ccec7 +0x173:  mov    0xc(%ebp),%eax
084cceca +0x176:  mov    %eax,(%esp)
084ccecd +0x179:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084cced2 +0x17e:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084cced8 +0x184:  mov    %eax,0x4(%esp)
084ccedc +0x188:  mov    %edx,(%esp)
084ccedf +0x18b:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084ccee4 +0x190:  movl   $0x13,0x8(%esp)
084cceec +0x198:  mov    %ebx,0x4(%esp)
084ccef0 +0x19c:  mov    %eax,(%esp)
084ccef3 +0x19f:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084ccef8 +0x1a4:  mov    $0x0,%ebx
084ccefd +0x1a9:  jmp    084ccfd0 <+0x27c>
084ccf02 +0x1ae:  lea    -0x1c(%ebp),%eax
084ccf05 +0x1b1:  mov    %eax,(%esp)
084ccf08 +0x1b4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ccf0d +0x1b9:  movl   $0x49,0x8(%esp)
084ccf15 +0x1c1:  movl   $0x0,0x4(%esp)
084ccf1d +0x1c9:  lea    -0x1c(%ebp),%eax
084ccf20 +0x1cc:  mov    %eax,(%esp)
084ccf23 +0x1cf:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ccf28 +0x1d4:  mov    -0x10(%ebp),%eax
084ccf2b +0x1d7:  movzwl 0x12(%eax),%eax
084ccf2f +0x1db:  cwtl
084ccf30 +0x1dc:  mov    %eax,0x4(%esp)
084ccf34 +0x1e0:  lea    -0x1c(%ebp),%eax
084ccf37 +0x1e3:  mov    %eax,(%esp)
084ccf3a +0x1e6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084ccf3f +0x1eb:  mov    -0x10(%ebp),%eax
084ccf42 +0x1ee:  add    $0x14,%eax
084ccf45 +0x1f1:  mov    %eax,(%esp)
084ccf48 +0x1f4:  call   0807e3b0 <_init+0xca8>
084ccf4d +0x1f9:  mov    %eax,-0xc(%ebp)
084ccf50 +0x1fc:  mov    -0xc(%ebp),%eax
084ccf53 +0x1ff:  mov    %eax,0x4(%esp)
084ccf57 +0x203:  lea    -0x1c(%ebp),%eax
084ccf5a +0x206:  mov    %eax,(%esp)
084ccf5d +0x209:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ccf62 +0x20e:  mov    -0x10(%ebp),%eax
084ccf65 +0x211:  lea    0x14(%eax),%edx
084ccf68 +0x214:  mov    -0xc(%ebp),%eax
084ccf6b +0x217:  mov    %eax,0x8(%esp)
084ccf6f +0x21b:  mov    %edx,0x4(%esp)
084ccf73 +0x21f:  lea    -0x1c(%ebp),%eax
084ccf76 +0x222:  mov    %eax,(%esp)
084ccf79 +0x225:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ccf7e +0x22a:  movl   $0x1,0x4(%esp)
084ccf86 +0x232:  lea    -0x1c(%ebp),%eax
084ccf89 +0x235:  mov    %eax,(%esp)
084ccf8c +0x238:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ccf91 +0x23d:  lea    -0x1c(%ebp),%eax
084ccf94 +0x240:  mov    %eax,0x4(%esp)
084ccf98 +0x244:  mov    0xc(%ebp),%eax
084ccf9b +0x247:  mov    %eax,(%esp)
084ccf9e +0x24a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ccfa3 +0x24f:  mov    $0x0,%ebx
084ccfa8 +0x254:  lea    -0x1c(%ebp),%eax
084ccfab +0x257:  mov    %eax,(%esp)
084ccfae +0x25a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ccfb3 +0x25f:  jmp    084ccfd0 <+0x27c>
084ccfb5 +0x261:  mov    %edx,%ebx
084ccfb7 +0x263:  mov    %eax,%esi
084ccfb9 +0x265:  lea    -0x1c(%ebp),%eax
084ccfbc +0x268:  mov    %eax,(%esp)
084ccfbf +0x26b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ccfc4 +0x270:  mov    %esi,%eax
084ccfc6 +0x272:  mov    %ebx,%edx
084ccfc8 +0x274:  mov    %eax,(%esp)
084ccfcb +0x277:  call   08ae3750 <_Unwind_Resume>
084ccfd0 +0x27c:  mov    %ebx,%eax
084ccfd2 +0x27e:  add    $0x60,%esp
084ccfd5 +0x281:  pop    %ebx
084ccfd6 +0x282:  pop    %esi
084ccfd7 +0x283:  pop    %ebp
084ccfd8 +0x284:  ret
084ccfd9 +0x285:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig @ 0x84ccd54

/* Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CMonitorServerProxy *pCVar6;
  CGameOption *pCVar7;
  Packet_Monitor_Member_Enter_Reply local_46 [10];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  Packet_Monitor_Member_Enter_Reply local_33 [10];
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 0) {
    local_14 = param_3;
    iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar3 == *(int *)(local_14 + 0xe)) {
      cVar1 = CUser::alonePlay_Mode((CUser *)param_2);
      if (cVar1 == '\0') {
        pCVar7 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
        sVar2 = CGameOption::get_etc_option(pCVar7,0x1d);
        if (sVar2 == 1) {
          Packet_Monitor_Member_Enter_Reply::Packet_Monitor_Member_Enter_Reply(local_46);
          local_3c = CUser::GetUID((CUser *)param_2);
          local_38 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          local_34 = 4;
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          pCVar6 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                             (GlobalData::s_monitor_proxy_mgr,uVar5);
          CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_46,0x13);
        }
        else {
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ccf23 to 084ccfa2 has its CatchHandler @ 084ccfb5 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x49);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_20,(int)*(short *)(local_14 + 0x12));
          local_10 = strlen((char *)(local_14 + 0x14));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x14),local_10);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
          CUser::Send((CUser *)param_2,local_20);
          PacketGuard::~PacketGuard(local_20);
        }
      }
      else {
        Packet_Monitor_Member_Enter_Reply::Packet_Monitor_Member_Enter_Reply(local_33);
        local_29 = CUser::GetUID((CUser *)param_2);
        local_25 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        local_21 = 3;
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        pCVar6 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,uVar5);
        CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_33,0x13);
      }
    }
    else {
      uVar5 = *(undefined4 *)(local_14 + 0xe);
      uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig(CUser*, char*, int)"
                 ,0x280c,
                 "MEMBER : Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar4,uVar5);
    }
  }
  return 0;
}
```
