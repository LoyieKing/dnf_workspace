# dispatch_sig

`_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_NotifyMessageToGuild` | `0x08207ffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08207ffe  _ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)
# range [0x08207ffe, 0x082082d5]
08207ffe +0x000:  push   %ebp
08207fff +0x001:  mov    %esp,%ebp
08208001 +0x003:  push   %esi
08208002 +0x004:  push   %ebx
08208003 +0x005:  sub    $0x90,%esp
08208009 +0x00b:  mov    0xc(%ebp),%eax
0820800c +0x00e:  mov    %eax,(%esp)
0820800f +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08208014 +0x016:  cmp    $0x2,%eax
08208017 +0x019:  jle    08208028 <+0x2a>
08208019 +0x01b:  mov    0xc(%ebp),%eax
0820801c +0x01e:  mov    %eax,(%esp)
0820801f +0x021:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08208024 +0x026:  test   %eax,%eax
08208026 +0x028:  jne    0820802f <+0x31>
08208028 +0x02a:  mov    $0x1,%eax
0820802d +0x02f:  jmp    08208034 <+0x36>
0820802f +0x031:  mov    $0x0,%eax
08208034 +0x036:  test   %al,%al
08208036 +0x038:  je     08208063 <+0x65>
08208038 +0x03a:  movl   $0x0,0xc(%esp)
08208040 +0x042:  movl   $0x0,0x8(%esp)
08208048 +0x04a:  movl   $&_ZZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208050 +0x052:  movl   $0xa2f4,(%esp)
08208057 +0x059:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820805c +0x05e:  mov    %eax,%ebx
0820805e +0x060:  jmp    082082c9 <+0x2cb>
08208063 +0x065:  mov    0xc(%ebp),%eax
08208066 +0x068:  mov    %eax,(%esp)
08208069 +0x06b:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0820806e +0x070:  mov    %eax,-0xc(%ebp)
08208071 +0x073:  cmpl   $0x0,-0xc(%ebp)
08208075 +0x077:  jne    0820809c <+0x9e>
08208077 +0x079:  movl   $0x22,0x8(%esp)
0820807f +0x081:  movl   $0x9d,0x4(%esp)
08208087 +0x089:  mov    0xc(%ebp),%eax
0820808a +0x08c:  mov    %eax,(%esp)
0820808d +0x08f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208092 +0x094:  mov    $0x0,%ebx
08208097 +0x099:  jmp    082082c9 <+0x2cb>
0820809c +0x09e:  mov    0xc(%ebp),%eax
0820809f +0x0a1:  mov    %eax,(%esp)
082080a2 +0x0a4:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
082080a7 +0x0a9:  xor    $0x1,%eax
082080aa +0x0ac:  test   %al,%al
082080ac +0x0ae:  je     082080c7 <+0xc9>
082080ae +0x0b0:  mov    0xc(%ebp),%eax
082080b1 +0x0b3:  mov    %eax,(%esp)
082080b4 +0x0b6:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
082080b9 +0x0bb:  xor    $0x1,%eax
082080bc +0x0be:  test   %al,%al
082080be +0x0c0:  je     082080c7 <+0xc9>
082080c0 +0x0c2:  mov    $0x1,%eax
082080c5 +0x0c7:  jmp    082080cc <+0xce>
082080c7 +0x0c9:  mov    $0x0,%eax
082080cc +0x0ce:  test   %al,%al
082080ce +0x0d0:  je     082080f5 <+0xf7>
082080d0 +0x0d2:  movl   $0x24,0x8(%esp)
082080d8 +0x0da:  movl   $0x9d,0x4(%esp)
082080e0 +0x0e2:  mov    0xc(%ebp),%eax
082080e3 +0x0e5:  mov    %eax,(%esp)
082080e6 +0x0e8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082080eb +0x0ed:  mov    $0x0,%ebx
082080f0 +0x0f2:  jmp    082082c9 <+0x2cb>
082080f5 +0x0f7:  movl   $0x0,-0x10(%ebp)
082080fc +0x0fe:  lea    -0x10(%ebp),%eax
082080ff +0x101:  mov    %eax,0x4(%esp)
08208103 +0x105:  mov    0x10(%ebp),%eax
08208106 +0x108:  mov    %eax,(%esp)
08208109 +0x10b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820810e +0x110:  xor    $0x1,%eax
08208111 +0x113:  test   %al,%al
08208113 +0x115:  je     08208140 <+0x142>
08208115 +0x117:  movl   $0x0,0xc(%esp)
0820811d +0x11f:  movl   $0x0,0x8(%esp)
08208125 +0x127:  movl   $&_ZZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820812d +0x12f:  movl   $0xa309,(%esp)
08208134 +0x136:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208139 +0x13b:  mov    %eax,%ebx
0820813b +0x13d:  jmp    082082c9 <+0x2cb>
08208140 +0x142:  mov    -0x10(%ebp),%eax
08208143 +0x145:  mov    %eax,0xc(%esp)
08208147 +0x149:  movl   $0x65,0x8(%esp)
0820814f +0x151:  lea    -0x81(%ebp),%eax
08208155 +0x157:  mov    %eax,0x4(%esp)
08208159 +0x15b:  mov    0x10(%ebp),%eax
0820815c +0x15e:  mov    %eax,(%esp)
0820815f +0x161:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08208164 +0x166:  xor    $0x1,%eax
08208167 +0x169:  test   %al,%al
08208169 +0x16b:  je     08208196 <+0x198>
0820816b +0x16d:  movl   $0x0,0xc(%esp)
08208173 +0x175:  movl   $0x0,0x8(%esp)
0820817b +0x17d:  movl   $&_ZZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208183 +0x185:  movl   $0xa30c,(%esp)
0820818a +0x18c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820818f +0x191:  mov    %eax,%ebx
08208191 +0x193:  jmp    082082c9 <+0x2cb>
08208196 +0x198:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0820819b +0x19d:  lea    -0x81(%ebp),%edx
082081a1 +0x1a3:  mov    %edx,0x4(%esp)
082081a5 +0x1a7:  mov    %eax,(%esp)
082081a8 +0x1aa:  call   08363472 <_ZN12CDataManager16hasPreventStringEPKc>  ; CDataManager::hasPreventString(char const*)
082081ad +0x1af:  test   %al,%al
082081af +0x1b1:  jne    082081cc <+0x1ce>
082081b1 +0x1b3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082081b6 +0x1b8:  lea    -0x81(%ebp),%edx
082081bc +0x1be:  mov    %edx,0x4(%esp)
082081c0 +0x1c2:  mov    %eax,(%esp)
082081c3 +0x1c5:  call   08362e0e <_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc>  ; CDataManager::hasSpecialCharacterExceptSpace(char const*)
082081c8 +0x1ca:  test   %al,%al
082081ca +0x1cc:  je     082081d3 <+0x1d5>
082081cc +0x1ce:  mov    $0x1,%eax
082081d1 +0x1d3:  jmp    082081d8 <+0x1da>
082081d3 +0x1d5:  mov    $0x0,%eax
082081d8 +0x1da:  test   %al,%al
082081da +0x1dc:  je     08208201 <+0x203>
082081dc +0x1de:  movl   $0x6c,0x8(%esp)
082081e4 +0x1e6:  movl   $0x9d,0x4(%esp)
082081ec +0x1ee:  mov    0xc(%ebp),%eax
082081ef +0x1f1:  mov    %eax,(%esp)
082081f2 +0x1f4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082081f7 +0x1f9:  mov    $0x0,%ebx
082081fc +0x1fe:  jmp    082082c9 <+0x2cb>
08208201 +0x203:  mov    -0x10(%ebp),%ebx
08208204 +0x206:  mov    0xc(%ebp),%eax
08208207 +0x209:  mov    %eax,(%esp)
0820820a +0x20c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0820820f +0x211:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08208215 +0x217:  mov    %eax,0x4(%esp)
08208219 +0x21b:  mov    %edx,(%esp)
0820821c +0x21e:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08208221 +0x223:  lea    -0x81(%ebp),%edx
08208227 +0x229:  mov    %edx,0xc(%esp)
0820822b +0x22d:  mov    %ebx,0x8(%esp)
0820822f +0x231:  mov    -0xc(%ebp),%edx
08208232 +0x234:  mov    %edx,0x4(%esp)
08208236 +0x238:  mov    %eax,(%esp)
08208239 +0x23b:  call   0846e1f4 <_ZN17CGuildServerProxy18SendMessageToGuildEjiPc>  ; CGuildServerProxy::SendMessageToGuild(unsigned int, int, char*)
0820823e +0x240:  lea    -0x1c(%ebp),%eax
08208241 +0x243:  mov    %eax,(%esp)
08208244 +0x246:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08208249 +0x24b:  movl   $0x9d,0x8(%esp)
08208251 +0x253:  movl   $0x1,0x4(%esp)
08208259 +0x25b:  lea    -0x1c(%ebp),%eax
0820825c +0x25e:  mov    %eax,(%esp)
0820825f +0x261:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08208264 +0x266:  movl   $0x1,0x4(%esp)
0820826c +0x26e:  lea    -0x1c(%ebp),%eax
0820826f +0x271:  mov    %eax,(%esp)
08208272 +0x274:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08208277 +0x279:  movl   $0x1,0x4(%esp)
0820827f +0x281:  lea    -0x1c(%ebp),%eax
08208282 +0x284:  mov    %eax,(%esp)
08208285 +0x287:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820828a +0x28c:  lea    -0x1c(%ebp),%eax
0820828d +0x28f:  mov    %eax,0x4(%esp)
08208291 +0x293:  mov    0xc(%ebp),%eax
08208294 +0x296:  mov    %eax,(%esp)
08208297 +0x299:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820829c +0x29e:  mov    $0x0,%ebx
082082a1 +0x2a3:  lea    -0x1c(%ebp),%eax
082082a4 +0x2a6:  mov    %eax,(%esp)
082082a7 +0x2a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082082ac +0x2ae:  jmp    082082c9 <+0x2cb>
082082ae +0x2b0:  mov    %edx,%ebx
082082b0 +0x2b2:  mov    %eax,%esi
082082b2 +0x2b4:  lea    -0x1c(%ebp),%eax
082082b5 +0x2b7:  mov    %eax,(%esp)
082082b8 +0x2ba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082082bd +0x2bf:  mov    %esi,%eax
082082bf +0x2c1:  mov    %ebx,%edx
082082c1 +0x2c3:  mov    %eax,(%esp)
082082c4 +0x2c6:  call   08ae3750 <_Unwind_Resume>
082082c9 +0x2cb:  mov    %ebx,%eax
082082cb +0x2cd:  add    $0x90,%esp
082082d1 +0x2d3:  pop    %ebx
082082d2 +0x2d4:  pop    %esi
082082d3 +0x2d5:  pop    %ebp
082082d4 +0x2d6:  ret
082082d5 +0x2d7:  nop
```

## 反编译 C

```c
// Dispatcher_NotifyMessageToGuild::dispatch_sig @ 0x8207ffe

/* Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_NotifyMessageToGuild::dispatch_sig
          (Dispatcher_NotifyMessageToGuild *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  CGuildServerProxy *this_00;
  char local_85 [101];
  PacketGuard local_20 [12];
  int local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xa2f4,
                     "virtual int Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  local_10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (local_10 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x9d,0x22);
    return 0;
  }
  cVar2 = CUser::IsSubGuildMaster(param_1);
  if ((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x9d,0x24);
    return 0;
  }
  local_14 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_14);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xa309,
                     "virtual int Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_str(param_2,local_85,0x65,local_14);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xa30c,
                     "virtual int Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar5,local_85);
  if (cVar2 == '\0') {
    pCVar5 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacterExceptSpace(pCVar5,local_85);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_082081d8;
    }
  }
  bVar1 = true;
LAB_082081d8:
  iVar3 = local_14;
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x9d,0x6c);
  }
  else {
    uVar4 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendMessageToGuild(this_00,local_10,iVar3,local_85);
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0820825f to 0820829b has its CatchHandler @ 082082ae */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x9d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(param_1,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
