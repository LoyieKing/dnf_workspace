# dispatch_sig

`_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_PvPChannelInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvPChannelInfo` | `0x082178c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082178c0  _ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_PvPChannelInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x082178c0, 0x08217acf]
082178c0 +0x000:  push   %ebp
082178c1 +0x001:  mov    %esp,%ebp
082178c3 +0x003:  push   %esi
082178c4 +0x004:  push   %ebx
082178c5 +0x005:  sub    $0x1820,%esp
082178cb +0x00b:  mov    0xc(%ebp),%eax
082178ce +0x00e:  mov    %eax,(%esp)
082178d1 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082178d6 +0x016:  cmp    $0x2,%eax
082178d9 +0x019:  setle  %al
082178dc +0x01c:  test   %al,%al
082178de +0x01e:  je     082178ea <+0x2a>
082178e0 +0x020:  mov    $0x0,%ebx
082178e5 +0x025:  jmp    08217ac3 <+0x203>
082178ea +0x02a:  mov    0xc(%ebp),%eax
082178ed +0x02d:  mov    %eax,(%esp)
082178f0 +0x030:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082178f5 +0x035:  test   %eax,%eax
082178f7 +0x037:  setne  %al
082178fa +0x03a:  test   %al,%al
082178fc +0x03c:  je     08217930 <+0x70>
082178fe +0x03e:  mov    0xc(%ebp),%eax
08217901 +0x041:  mov    %eax,(%esp)
08217904 +0x044:  call   0822f8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fa0
08217909 +0x049:  test   %al,%al
0821790b +0x04b:  je     08217930 <+0x70>
0821790d +0x04d:  mov    0xc(%ebp),%eax
08217910 +0x050:  movl   $0x0,0xc(%esp)
08217918 +0x058:  movl   $0x0,0x8(%esp)
08217920 +0x060:  movl   $0x0,0x4(%esp)
08217928 +0x068:  mov    %eax,(%esp)
0821792b +0x06b:  call   0822f91a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4fc4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4fc4
08217930 +0x070:  mov    0xc(%ebp),%eax
08217933 +0x073:  mov    %eax,(%esp)
08217936 +0x076:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
0821793b +0x07b:  test   %al,%al
0821793d +0x07d:  je     08217964 <+0xa4>
0821793f +0x07f:  movl   $0x15,0x8(%esp)
08217947 +0x087:  movl   $0xc6,0x4(%esp)
0821794f +0x08f:  mov    0xc(%ebp),%eax
08217952 +0x092:  mov    %eax,(%esp)
08217955 +0x095:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821795a +0x09a:  mov    $0x0,%ebx
0821795f +0x09f:  jmp    08217ac3 <+0x203>
08217964 +0x0a4:  mov    0xc(%ebp),%eax
08217967 +0x0a7:  mov    %eax,(%esp)
0821796a +0x0aa:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0821796f +0x0af:  test   %eax,%eax
08217971 +0x0b1:  sete   %al
08217974 +0x0b4:  test   %al,%al
08217976 +0x0b6:  je     08217a30 <+0x170>
0821797c +0x0bc:  lea    -0x14(%ebp),%eax
0821797f +0x0bf:  mov    %eax,(%esp)
08217982 +0x0c2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08217987 +0x0c7:  movl   $0xc6,0x8(%esp)
0821798f +0x0cf:  movl   $0x1,0x4(%esp)
08217997 +0x0d7:  lea    -0x14(%ebp),%eax
0821799a +0x0da:  mov    %eax,(%esp)
0821799d +0x0dd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082179a2 +0x0e2:  movl   $0x1,0x4(%esp)
082179aa +0x0ea:  lea    -0x14(%ebp),%eax
082179ad +0x0ed:  mov    %eax,(%esp)
082179b0 +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082179b5 +0x0f5:  movl   $0x0,0x4(%esp)
082179bd +0x0fd:  lea    -0x14(%ebp),%eax
082179c0 +0x100:  mov    %eax,(%esp)
082179c3 +0x103:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082179c8 +0x108:  movl   $0x0,0x4(%esp)
082179d0 +0x110:  lea    -0x14(%ebp),%eax
082179d3 +0x113:  mov    %eax,(%esp)
082179d6 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082179db +0x11b:  movl   $0x1,0x4(%esp)
082179e3 +0x123:  lea    -0x14(%ebp),%eax
082179e6 +0x126:  mov    %eax,(%esp)
082179e9 +0x129:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082179ee +0x12e:  lea    -0x14(%ebp),%eax
082179f1 +0x131:  mov    %eax,0x4(%esp)
082179f5 +0x135:  mov    0xc(%ebp),%eax
082179f8 +0x138:  mov    %eax,(%esp)
082179fb +0x13b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08217a00 +0x140:  mov    $0x0,%ebx
08217a05 +0x145:  lea    -0x14(%ebp),%eax
08217a08 +0x148:  mov    %eax,(%esp)
08217a0b +0x14b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08217a10 +0x150:  jmp    08217ac3 <+0x203>
08217a15 +0x155:  mov    %edx,%ebx
08217a17 +0x157:  mov    %eax,%esi
08217a19 +0x159:  lea    -0x14(%ebp),%eax
08217a1c +0x15c:  mov    %eax,(%esp)
08217a1f +0x15f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08217a24 +0x164:  mov    %esi,%eax
08217a26 +0x166:  mov    %ebx,%edx
08217a28 +0x168:  mov    %eax,(%esp)
08217a2b +0x16b:  call   08ae3750 <_Unwind_Resume>
08217a30 +0x170:  lea    -0x180c(%ebp),%eax
08217a36 +0x176:  mov    %eax,(%esp)
08217a39 +0x179:  call   0822bd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x13e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x13e6
08217a3e +0x17e:  mov    0xc(%ebp),%eax
08217a41 +0x181:  mov    %eax,(%esp)
08217a44 +0x184:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08217a49 +0x189:  mov    %eax,-0x17fe(%ebp)
08217a4f +0x18f:  mov    0xc(%ebp),%eax
08217a52 +0x192:  mov    %eax,(%esp)
08217a55 +0x195:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08217a5a +0x19a:  mov    %eax,-0x1802(%ebp)
08217a60 +0x1a0:  movb   $0x9,-0x17f6(%ebp)
08217a67 +0x1a7:  mov    0xc(%ebp),%eax
08217a6a +0x1aa:  mov    %eax,(%esp)
08217a6d +0x1ad:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
08217a72 +0x1b2:  mov    %eax,-0x17fa(%ebp)
08217a78 +0x1b8:  movw   $0x18,-0x180a(%ebp)
08217a81 +0x1c1:  movzwl -0x180a(%ebp),%eax
08217a88 +0x1c8:  movzwl %ax,%esi
08217a8b +0x1cb:  lea    -0x180c(%ebp),%ebx
08217a91 +0x1d1:  mov    0xc(%ebp),%eax
08217a94 +0x1d4:  mov    %eax,(%esp)
08217a97 +0x1d7:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08217a9c +0x1dc:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08217aa2 +0x1e2:  mov    %eax,0x4(%esp)
08217aa6 +0x1e6:  mov    %edx,(%esp)
08217aa9 +0x1e9:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08217aae +0x1ee:  mov    %esi,0x8(%esp)
08217ab2 +0x1f2:  mov    %ebx,0x4(%esp)
08217ab6 +0x1f6:  mov    %eax,(%esp)
08217ab9 +0x1f9:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08217abe +0x1fe:  mov    $0x0,%ebx
08217ac3 +0x203:  mov    %ebx,%eax
08217ac5 +0x205:  add    $0x1820,%esp
08217acb +0x20b:  pop    %ebx
08217acc +0x20c:  pop    %esi
08217acd +0x20d:  pop    %ebp
08217ace +0x20e:  ret
08217acf +0x20f:  nop
```

## 反编译 C

```c
// Dispatcher_PvPChannelInfo::dispatch_sig @ 0x82178c0

/* Dispatcher_PvPChannelInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PvPChannelInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CMonitorServerProxy *this;
  Packet_PvPChannelInfo local_1810 [2];
  undefined2 local_180e;
  undefined4 local_1806;
  undefined4 local_1802;
  undefined4 local_17fe;
  undefined1 local_17fa;
  PacketGuard local_18 [12];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if ((iVar2 != 0) &&
       (cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_2), cVar1 != '\0')) {
      CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_2,false,'\0',0);
    }
    cVar1 = CUser::isCompetitionMercenary((CUser *)param_2);
    if (cVar1 == '\0') {
      iVar2 = CUser::GetSchoolNo((CUser *)param_2);
      if (iVar2 == 0) {
        PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821799d to 082179ff has its CatchHandler @ 08217a15 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xc6);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
        CUser::Send((CUser *)param_2,local_18);
        PacketGuard::~PacketGuard(local_18);
      }
      else {
        Packet_PvPChannelInfo::Packet_PvPChannelInfo(local_1810);
        local_1802 = CUser::GetUID((CUser *)param_2);
        local_1806 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        local_17fa = 9;
        local_17fe = CUser::GetSchoolNo((CUser *)param_2);
        local_180e = 0x18;
        uVar3 = CUser::GetServerGroup((CUser *)param_2);
        this = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar3);
        CMonitorServerProxy::SendTcpPacket(this,(char *)local_1810,0x18);
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xc6,0x15);
    }
  }
  return 0;
}
```
