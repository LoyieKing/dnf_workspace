# dispatch_sig

`_ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_WriteGuildMemberMemo` | `0x0821e748` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e748  _ZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821e748, 0x0821ea31]
0821e748 +0x000:  push   %ebp
0821e749 +0x001:  mov    %esp,%ebp
0821e74b +0x003:  push   %esi
0821e74c +0x004:  push   %ebx
0821e74d +0x005:  sub    $0x50,%esp
0821e750 +0x008:  mov    0xc(%ebp),%eax
0821e753 +0x00b:  mov    %eax,(%esp)
0821e756 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821e75b +0x013:  cmp    $0x2,%eax
0821e75e +0x016:  jle    0821e76f <+0x27>
0821e760 +0x018:  mov    0xc(%ebp),%eax
0821e763 +0x01b:  mov    %eax,(%esp)
0821e766 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821e76b +0x023:  test   %eax,%eax
0821e76d +0x025:  jne    0821e776 <+0x2e>
0821e76f +0x027:  mov    $0x1,%eax
0821e774 +0x02c:  jmp    0821e77b <+0x33>
0821e776 +0x02e:  mov    $0x0,%eax
0821e77b +0x033:  test   %al,%al
0821e77d +0x035:  je     0821e7aa <+0x62>
0821e77f +0x037:  movl   $0x0,0xc(%esp)
0821e787 +0x03f:  movl   $0x0,0x8(%esp)
0821e78f +0x047:  movl   $&_ZZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e797 +0x04f:  movl   $0xd55c,(%esp)
0821e79e +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e7a3 +0x05b:  mov    %eax,%ebx
0821e7a5 +0x05d:  jmp    0821ea29 <+0x2e1>
0821e7aa +0x062:  mov    0xc(%ebp),%eax
0821e7ad +0x065:  mov    %eax,(%esp)
0821e7b0 +0x068:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0821e7b5 +0x06d:  mov    %eax,-0x10(%ebp)
0821e7b8 +0x070:  cmpl   $0x0,-0x10(%ebp)
0821e7bc +0x074:  jne    0821e7e3 <+0x9b>
0821e7be +0x076:  movl   $0x22,0x8(%esp)
0821e7c6 +0x07e:  movl   $0xe3,0x4(%esp)
0821e7ce +0x086:  mov    0xc(%ebp),%eax
0821e7d1 +0x089:  mov    %eax,(%esp)
0821e7d4 +0x08c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821e7d9 +0x091:  mov    $0x0,%ebx
0821e7de +0x096:  jmp    0821ea29 <+0x2e1>
0821e7e3 +0x09b:  lea    -0x25(%ebp),%eax
0821e7e6 +0x09e:  mov    $0x15,%edx
0821e7eb +0x0a3:  mov    $0x0,%ecx
0821e7f0 +0x0a8:  mov    %eax,%ebx
0821e7f2 +0x0aa:  and    $0x1,%ebx
0821e7f5 +0x0ad:  test   %ebx,%ebx
0821e7f7 +0x0af:  je     0821e801 <+0xb9>
0821e7f9 +0x0b1:  mov    %cl,(%eax)
0821e7fb +0x0b3:  add    $0x1,%eax
0821e7fe +0x0b6:  sub    $0x1,%edx
0821e801 +0x0b9:  mov    %eax,%ebx
0821e803 +0x0bb:  and    $0x2,%ebx
0821e806 +0x0be:  test   %ebx,%ebx
0821e808 +0x0c0:  je     0821e813 <+0xcb>
0821e80a +0x0c2:  mov    %cx,(%eax)
0821e80d +0x0c5:  add    $0x2,%eax
0821e810 +0x0c8:  sub    $0x2,%edx
0821e813 +0x0cb:  mov    %edx,%esi
0821e815 +0x0cd:  and    $0xfffffffc,%esi
0821e818 +0x0d0:  mov    $0x0,%ebx
0821e81d +0x0d5:  mov    %ecx,(%eax,%ebx,1)
0821e820 +0x0d8:  add    $0x4,%ebx
0821e823 +0x0db:  cmp    %esi,%ebx
0821e825 +0x0dd:  jb     0821e81d <+0xd5>
0821e827 +0x0df:  add    %ebx,%eax
0821e829 +0x0e1:  mov    %edx,%ebx
0821e82b +0x0e3:  and    $0x2,%ebx
0821e82e +0x0e6:  test   %ebx,%ebx
0821e830 +0x0e8:  je     0821e838 <+0xf0>
0821e832 +0x0ea:  mov    %cx,(%eax)
0821e835 +0x0ed:  add    $0x2,%eax
0821e838 +0x0f0:  and    $0x1,%edx
0821e83b +0x0f3:  test   %edx,%edx
0821e83d +0x0f5:  je     0821e844 <+0xfc>
0821e83f +0x0f7:  mov    %cl,(%eax)
0821e841 +0x0f9:  add    $0x1,%eax
0821e844 +0x0fc:  movl   $0x0,-0x2c(%ebp)
0821e84b +0x103:  lea    -0x2c(%ebp),%eax
0821e84e +0x106:  mov    %eax,0x4(%esp)
0821e852 +0x10a:  mov    0x10(%ebp),%eax
0821e855 +0x10d:  mov    %eax,(%esp)
0821e858 +0x110:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821e85d +0x115:  xor    $0x1,%eax
0821e860 +0x118:  test   %al,%al
0821e862 +0x11a:  je     0821e88f <+0x147>
0821e864 +0x11c:  movl   $0x0,0xc(%esp)
0821e86c +0x124:  movl   $0x0,0x8(%esp)
0821e874 +0x12c:  movl   $&_ZZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e87c +0x134:  movl   $0xd56a,(%esp)
0821e883 +0x13b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e888 +0x140:  mov    %eax,%ebx
0821e88a +0x142:  jmp    0821ea29 <+0x2e1>
0821e88f +0x147:  mov    -0x2c(%ebp),%eax
0821e892 +0x14a:  mov    %eax,0xc(%esp)
0821e896 +0x14e:  movl   $0x15,0x8(%esp)
0821e89e +0x156:  lea    -0x25(%ebp),%eax
0821e8a1 +0x159:  mov    %eax,0x4(%esp)
0821e8a5 +0x15d:  mov    0x10(%ebp),%eax
0821e8a8 +0x160:  mov    %eax,(%esp)
0821e8ab +0x163:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0821e8b0 +0x168:  xor    $0x1,%eax
0821e8b3 +0x16b:  test   %al,%al
0821e8b5 +0x16d:  je     0821e8e2 <+0x19a>
0821e8b7 +0x16f:  movl   $0x0,0xc(%esp)
0821e8bf +0x177:  movl   $0x0,0x8(%esp)
0821e8c7 +0x17f:  movl   $&_ZZN31Dispatcher_WriteGuildMemberMemo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e8cf +0x187:  movl   $0xd56d,(%esp)
0821e8d6 +0x18e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e8db +0x193:  mov    %eax,%ebx
0821e8dd +0x195:  jmp    0821ea29 <+0x2e1>
0821e8e2 +0x19a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821e8e7 +0x19f:  lea    -0x25(%ebp),%edx
0821e8ea +0x1a2:  mov    %edx,0x4(%esp)
0821e8ee +0x1a6:  mov    %eax,(%esp)
0821e8f1 +0x1a9:  call   08363472 <_ZN12CDataManager16hasPreventStringEPKc>  ; CDataManager::hasPreventString(char const*)
0821e8f6 +0x1ae:  test   %al,%al
0821e8f8 +0x1b0:  jne    0821e912 <+0x1ca>
0821e8fa +0x1b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821e8ff +0x1b7:  lea    -0x25(%ebp),%edx
0821e902 +0x1ba:  mov    %edx,0x4(%esp)
0821e906 +0x1be:  mov    %eax,(%esp)
0821e909 +0x1c1:  call   08362e0e <_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc>  ; CDataManager::hasSpecialCharacterExceptSpace(char const*)
0821e90e +0x1c6:  test   %al,%al
0821e910 +0x1c8:  je     0821e919 <+0x1d1>
0821e912 +0x1ca:  mov    $0x1,%eax
0821e917 +0x1cf:  jmp    0821e91e <+0x1d6>
0821e919 +0x1d1:  mov    $0x0,%eax
0821e91e +0x1d6:  test   %al,%al
0821e920 +0x1d8:  je     0821e947 <+0x1ff>
0821e922 +0x1da:  movl   $0x6c,0x8(%esp)
0821e92a +0x1e2:  movl   $0xe3,0x4(%esp)
0821e932 +0x1ea:  mov    0xc(%ebp),%eax
0821e935 +0x1ed:  mov    %eax,(%esp)
0821e938 +0x1f0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821e93d +0x1f5:  mov    $0x0,%ebx
0821e942 +0x1fa:  jmp    0821ea29 <+0x2e1>
0821e947 +0x1ff:  movl   $0xffffffff,0x4(%esp)
0821e94f +0x207:  mov    0xc(%ebp),%eax
0821e952 +0x20a:  mov    %eax,(%esp)
0821e955 +0x20d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0821e95a +0x212:  mov    %eax,-0xc(%ebp)
0821e95d +0x215:  mov    -0x2c(%ebp),%ebx
0821e960 +0x218:  mov    0xc(%ebp),%eax
0821e963 +0x21b:  mov    %eax,(%esp)
0821e966 +0x21e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821e96b +0x223:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0821e971 +0x229:  mov    %eax,0x4(%esp)
0821e975 +0x22d:  mov    %edx,(%esp)
0821e978 +0x230:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0821e97d +0x235:  lea    -0x25(%ebp),%edx
0821e980 +0x238:  mov    %edx,0x10(%esp)
0821e984 +0x23c:  mov    %ebx,0xc(%esp)
0821e988 +0x240:  mov    -0xc(%ebp),%edx
0821e98b +0x243:  mov    %edx,0x8(%esp)
0821e98f +0x247:  mov    -0x10(%ebp),%edx
0821e992 +0x24a:  mov    %edx,0x4(%esp)
0821e996 +0x24e:  mov    %eax,(%esp)
0821e999 +0x251:  call   0846e254 <_ZN17CGuildServerProxy15SendMemoToGuildEjiiPc>  ; CGuildServerProxy::SendMemoToGuild(unsigned int, int, int, char*)
0821e99e +0x256:  lea    -0x38(%ebp),%eax
0821e9a1 +0x259:  mov    %eax,(%esp)
0821e9a4 +0x25c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821e9a9 +0x261:  movl   $0xe3,0x8(%esp)
0821e9b1 +0x269:  movl   $0x1,0x4(%esp)
0821e9b9 +0x271:  lea    -0x38(%ebp),%eax
0821e9bc +0x274:  mov    %eax,(%esp)
0821e9bf +0x277:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821e9c4 +0x27c:  movl   $0x1,0x4(%esp)
0821e9cc +0x284:  lea    -0x38(%ebp),%eax
0821e9cf +0x287:  mov    %eax,(%esp)
0821e9d2 +0x28a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e9d7 +0x28f:  movl   $0x1,0x4(%esp)
0821e9df +0x297:  lea    -0x38(%ebp),%eax
0821e9e2 +0x29a:  mov    %eax,(%esp)
0821e9e5 +0x29d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821e9ea +0x2a2:  lea    -0x38(%ebp),%eax
0821e9ed +0x2a5:  mov    %eax,0x4(%esp)
0821e9f1 +0x2a9:  mov    0xc(%ebp),%eax
0821e9f4 +0x2ac:  mov    %eax,(%esp)
0821e9f7 +0x2af:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821e9fc +0x2b4:  mov    $0x0,%ebx
0821ea01 +0x2b9:  lea    -0x38(%ebp),%eax
0821ea04 +0x2bc:  mov    %eax,(%esp)
0821ea07 +0x2bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821ea0c +0x2c4:  jmp    0821ea29 <+0x2e1>
0821ea0e +0x2c6:  mov    %edx,%ebx
0821ea10 +0x2c8:  mov    %eax,%esi
0821ea12 +0x2ca:  lea    -0x38(%ebp),%eax
0821ea15 +0x2cd:  mov    %eax,(%esp)
0821ea18 +0x2d0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821ea1d +0x2d5:  mov    %esi,%eax
0821ea1f +0x2d7:  mov    %ebx,%edx
0821ea21 +0x2d9:  mov    %eax,(%esp)
0821ea24 +0x2dc:  call   08ae3750 <_Unwind_Resume>
0821ea29 +0x2e1:  mov    %ebx,%eax
0821ea2b +0x2e3:  add    $0x50,%esp
0821ea2e +0x2e6:  pop    %ebx
0821ea2f +0x2e7:  pop    %esi
0821ea30 +0x2e8:  pop    %ebp
0821ea31 +0x2e9:  ret
```

## 反编译 C

```c
// Dispatcher_WriteGuildMemberMemo::dispatch_sig @ 0x821e748

/* Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_WriteGuildMemberMemo::dispatch_sig
          (Dispatcher_WriteGuildMemberMemo *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CDataManager *pCVar6;
  CGuildServerProxy *this_00;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  PacketGuard local_3c [12];
  int local_30;
  char local_29;
  char local_28 [20];
  uint local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    uVar4 = LineFunc(0xd55c,
                     "virtual int Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  local_14 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (local_14 == 0) {
    CUser::SendCmdErrorPacket(param_1,0xe3,0x22);
    return 0;
  }
  pcVar5 = &local_29;
  uVar7 = 0x15;
  bVar9 = ((uint)pcVar5 & 1) != 0;
  if (bVar9) {
    local_29 = '\0';
    pcVar5 = local_28;
    uVar7 = 0x14;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar7 = uVar7 - 2;
  }
  uVar8 = 0;
  do {
    pcVar1 = pcVar5 + uVar8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar8 = uVar8 + 4;
  } while (uVar8 < (uVar7 & 0xfffffffc));
  pcVar5 = pcVar5 + uVar8;
  if ((uVar7 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar9) {
    *pcVar5 = '\0';
  }
  local_30 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_30);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xd56a,
                     "virtual int Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_str(param_2,&local_29,0x15,local_30);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xd56d,
                     "virtual int Dispatcher_WriteGuildMemberMemo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar6,&local_29);
  if (cVar2 == '\0') {
    pCVar6 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacterExceptSpace(pCVar6,&local_29);
    if (cVar2 == '\0') {
      bVar9 = false;
      goto LAB_0821e91e;
    }
  }
  bVar9 = true;
LAB_0821e91e:
  if (bVar9) {
    CUser::SendCmdErrorPacket(param_1,0xe3,0x6c);
  }
  else {
    local_10 = CUser::get_charac_no(param_1,-1);
    iVar3 = local_30;
    uVar4 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendMemoToGuild(this_00,local_14,local_10,iVar3,&local_29);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0821e9bf to 0821e9fb has its CatchHandler @ 0821ea0e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0xe3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
    PacketGuard::~PacketGuard(local_3c);
  }
  return 0;
}
```
