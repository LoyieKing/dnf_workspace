# dispatch_sig

`_ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci`

`Inter_CallGuildInviteToInvited::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CallGuildInviteToInvited` | `0x084d2b96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d2b96  _ZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPci
#           Inter_CallGuildInviteToInvited::dispatch_sig(CUser*, char*, int)
# range [0x084d2b96, 0x084d2dfd]
084d2b96 +0x000:  push   %ebp
084d2b97 +0x001:  mov    %esp,%ebp
084d2b99 +0x003:  push   %esi
084d2b9a +0x004:  push   %ebx
084d2b9b +0x005:  sub    $0x40,%esp
084d2b9e +0x008:  mov    0xc(%ebp),%eax
084d2ba1 +0x00b:  mov    %eax,(%esp)
084d2ba4 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d2ba9 +0x013:  test   %eax,%eax
084d2bab +0x015:  sete   %al
084d2bae +0x018:  test   %al,%al
084d2bb0 +0x01a:  je     084d2bbc <+0x26>
084d2bb2 +0x01c:  mov    $0x0,%ebx
084d2bb7 +0x021:  jmp    084d2df5 <+0x25f>
084d2bbc +0x026:  mov    0x10(%ebp),%eax
084d2bbf +0x029:  mov    %eax,-0x14(%ebp)
084d2bc2 +0x02c:  movl   $0xffffffff,0x4(%esp)
084d2bca +0x034:  mov    0xc(%ebp),%eax
084d2bcd +0x037:  mov    %eax,(%esp)
084d2bd0 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2bd5 +0x03f:  mov    %eax,%edx
084d2bd7 +0x041:  mov    -0x14(%ebp),%eax
084d2bda +0x044:  mov    0xa(%eax),%eax
084d2bdd +0x047:  cmp    %eax,%edx
084d2bdf +0x049:  setne  %al
084d2be2 +0x04c:  test   %al,%al
084d2be4 +0x04e:  je     084d2c3d <+0xa7>
084d2be6 +0x050:  mov    -0x14(%ebp),%eax
084d2be9 +0x053:  mov    0xa(%eax),%ebx
084d2bec +0x056:  movl   $0xffffffff,0x4(%esp)
084d2bf4 +0x05e:  mov    0xc(%ebp),%eax
084d2bf7 +0x061:  mov    %eax,(%esp)
084d2bfa +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d2bff +0x069:  mov    %ebx,0x18(%esp)
084d2c03 +0x06d:  mov    %eax,0x14(%esp)
084d2c07 +0x071:  movl   $"MEMBER : Inter_CallGuildInviteToInvited::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d2c0f +0x079:  movl   $0x337b,0xc(%esp)
084d2c17 +0x081:  movl   $&_ZZN30Inter_CallGuildInviteToInvited12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d2c1f +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d2c27 +0x091:  movl   $0x1,(%esp)
084d2c2e +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d2c33 +0x09d:  mov    $0x0,%ebx
084d2c38 +0x0a2:  jmp    084d2df5 <+0x25f>
084d2c3d +0x0a7:  mov    0xc(%ebp),%eax
084d2c40 +0x0aa:  mov    %eax,(%esp)
084d2c43 +0x0ad:  call   0868dc7a <_ZN5CUser14alonePlay_ModeEv>  ; CUser::alonePlay_Mode()
084d2c48 +0x0b2:  test   %al,%al
084d2c4a +0x0b4:  je     084d2c98 <+0x102>
084d2c4c +0x0b6:  movb   $0x2,-0xa(%ebp)
084d2c50 +0x0ba:  movzbl -0xa(%ebp),%esi
084d2c54 +0x0be:  mov    0xc(%ebp),%eax
084d2c57 +0x0c1:  mov    %eax,(%esp)
084d2c5a +0x0c4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d2c5f +0x0c9:  mov    %eax,%ebx
084d2c61 +0x0cb:  mov    0xc(%ebp),%eax
084d2c64 +0x0ce:  mov    %eax,(%esp)
084d2c67 +0x0d1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d2c6c +0x0d6:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d2c72 +0x0dc:  mov    %eax,0x4(%esp)
084d2c76 +0x0e0:  mov    %edx,(%esp)
084d2c79 +0x0e3:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d2c7e +0x0e8:  mov    %esi,0x8(%esp)
084d2c82 +0x0ec:  mov    %ebx,0x4(%esp)
084d2c86 +0x0f0:  mov    %eax,(%esp)
084d2c89 +0x0f3:  call   0846e14c <_ZN17CGuildServerProxy20SendReplyGuildInviteEjh>  ; CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char)
084d2c8e +0x0f8:  mov    $0x0,%ebx
084d2c93 +0x0fd:  jmp    084d2df5 <+0x25f>
084d2c98 +0x102:  mov    0xc(%ebp),%eax
084d2c9b +0x105:  mov    %eax,(%esp)
084d2c9e +0x108:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
084d2ca3 +0x10d:  movl   $0x1e,0x4(%esp)
084d2cab +0x115:  mov    %eax,(%esp)
084d2cae +0x118:  call   084b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>  ; CGameOption::get_etc_option(ENUM_OPTION_ETC)
084d2cb3 +0x11d:  test   %ax,%ax
084d2cb6 +0x120:  setne  %al
084d2cb9 +0x123:  test   %al,%al
084d2cbb +0x125:  je     084d2cff <+0x169>
084d2cbd +0x127:  movb   $0x3,-0x9(%ebp)
084d2cc1 +0x12b:  movzbl -0x9(%ebp),%esi
084d2cc5 +0x12f:  mov    0xc(%ebp),%eax
084d2cc8 +0x132:  mov    %eax,(%esp)
084d2ccb +0x135:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d2cd0 +0x13a:  mov    %eax,%ebx
084d2cd2 +0x13c:  mov    0xc(%ebp),%eax
084d2cd5 +0x13f:  mov    %eax,(%esp)
084d2cd8 +0x142:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d2cdd +0x147:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d2ce3 +0x14d:  mov    %eax,0x4(%esp)
084d2ce7 +0x151:  mov    %edx,(%esp)
084d2cea +0x154:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d2cef +0x159:  mov    %esi,0x8(%esp)
084d2cf3 +0x15d:  mov    %ebx,0x4(%esp)
084d2cf7 +0x161:  mov    %eax,(%esp)
084d2cfa +0x164:  call   0846e14c <_ZN17CGuildServerProxy20SendReplyGuildInviteEjh>  ; CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char)
084d2cff +0x169:  lea    -0x20(%ebp),%eax
084d2d02 +0x16c:  mov    %eax,(%esp)
084d2d05 +0x16f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d2d0a +0x174:  movl   $0x93,0x8(%esp)
084d2d12 +0x17c:  movl   $0x0,0x4(%esp)
084d2d1a +0x184:  lea    -0x20(%ebp),%eax
084d2d1d +0x187:  mov    %eax,(%esp)
084d2d20 +0x18a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d2d25 +0x18f:  mov    -0x14(%ebp),%eax
084d2d28 +0x192:  add    $0x30,%eax
084d2d2b +0x195:  mov    %eax,(%esp)
084d2d2e +0x198:  call   0807e3b0 <_init+0xca8>
084d2d33 +0x19d:  mov    %eax,-0x10(%ebp)
084d2d36 +0x1a0:  mov    -0x10(%ebp),%eax
084d2d39 +0x1a3:  mov    %eax,0x4(%esp)
084d2d3d +0x1a7:  lea    -0x20(%ebp),%eax
084d2d40 +0x1aa:  mov    %eax,(%esp)
084d2d43 +0x1ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d2d48 +0x1b2:  mov    -0x14(%ebp),%eax
084d2d4b +0x1b5:  lea    0x30(%eax),%edx
084d2d4e +0x1b8:  mov    -0x10(%ebp),%eax
084d2d51 +0x1bb:  mov    %eax,0x8(%esp)
084d2d55 +0x1bf:  mov    %edx,0x4(%esp)
084d2d59 +0x1c3:  lea    -0x20(%ebp),%eax
084d2d5c +0x1c6:  mov    %eax,(%esp)
084d2d5f +0x1c9:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d2d64 +0x1ce:  mov    -0x14(%ebp),%eax
084d2d67 +0x1d1:  add    $0x12,%eax
084d2d6a +0x1d4:  mov    %eax,(%esp)
084d2d6d +0x1d7:  call   0807e3b0 <_init+0xca8>
084d2d72 +0x1dc:  mov    %eax,-0x10(%ebp)
084d2d75 +0x1df:  mov    -0x10(%ebp),%eax
084d2d78 +0x1e2:  mov    %eax,0x4(%esp)
084d2d7c +0x1e6:  lea    -0x20(%ebp),%eax
084d2d7f +0x1e9:  mov    %eax,(%esp)
084d2d82 +0x1ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d2d87 +0x1f1:  mov    -0x14(%ebp),%eax
084d2d8a +0x1f4:  lea    0x12(%eax),%edx
084d2d8d +0x1f7:  mov    -0x10(%ebp),%eax
084d2d90 +0x1fa:  mov    %eax,0x8(%esp)
084d2d94 +0x1fe:  mov    %edx,0x4(%esp)
084d2d98 +0x202:  lea    -0x20(%ebp),%eax
084d2d9b +0x205:  mov    %eax,(%esp)
084d2d9e +0x208:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d2da3 +0x20d:  movl   $0x1,0x4(%esp)
084d2dab +0x215:  lea    -0x20(%ebp),%eax
084d2dae +0x218:  mov    %eax,(%esp)
084d2db1 +0x21b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d2db6 +0x220:  lea    -0x20(%ebp),%eax
084d2db9 +0x223:  mov    %eax,0x4(%esp)
084d2dbd +0x227:  mov    0xc(%ebp),%eax
084d2dc0 +0x22a:  mov    %eax,(%esp)
084d2dc3 +0x22d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d2dc8 +0x232:  mov    $0x0,%ebx
084d2dcd +0x237:  lea    -0x20(%ebp),%eax
084d2dd0 +0x23a:  mov    %eax,(%esp)
084d2dd3 +0x23d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2dd8 +0x242:  jmp    084d2df5 <+0x25f>
084d2dda +0x244:  mov    %edx,%ebx
084d2ddc +0x246:  mov    %eax,%esi
084d2dde +0x248:  lea    -0x20(%ebp),%eax
084d2de1 +0x24b:  mov    %eax,(%esp)
084d2de4 +0x24e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2de9 +0x253:  mov    %esi,%eax
084d2deb +0x255:  mov    %ebx,%edx
084d2ded +0x257:  mov    %eax,(%esp)
084d2df0 +0x25a:  call   08ae3750 <_Unwind_Resume>
084d2df5 +0x25f:  mov    %ebx,%eax
084d2df7 +0x261:  add    $0x40,%esp
084d2dfa +0x264:  pop    %ebx
084d2dfb +0x265:  pop    %esi
084d2dfc +0x266:  pop    %ebp
084d2dfd +0x267:  ret
```

## 反编译 C

```c
// Inter_CallGuildInviteToInvited::dispatch_sig @ 0x84d2b96

/* Inter_CallGuildInviteToInvited::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CallGuildInviteToInvited::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  CGuildServerProxy *pCVar7;
  CGameOption *pCVar8;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  undefined1 local_e;
  undefined1 local_d;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 0) {
    local_18 = param_3;
    iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar3 == *(int *)(local_18 + 10)) {
      cVar1 = CUser::alonePlay_Mode((CUser *)param_2);
      if (cVar1 == '\0') {
        pCVar8 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
        sVar2 = CGameOption::get_etc_option(pCVar8,0x1e);
        if (sVar2 != 0) {
          local_d = 3;
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          uVar6 = CUser::GetServerGroup((CUser *)param_2);
          pCVar7 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar6);
          CGuildServerProxy::SendReplyGuildInvite(pCVar7,uVar5,'\x03');
        }
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084d2d20 to 084d2dc7 has its CatchHandler @ 084d2dda */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x93);
        local_14 = strlen((char *)(local_18 + 0x30));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x30),local_14);
        local_14 = strlen((char *)(local_18 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x12),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        local_e = 2;
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        uVar6 = CUser::GetServerGroup((CUser *)param_2);
        pCVar7 = (CGuildServerProxy *)
                 CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                           (GlobalData::s_guild_proxy_mgr,uVar6);
        CGuildServerProxy::SendReplyGuildInvite(pCVar7,uVar5,'\x02');
      }
    }
    else {
      uVar6 = *(undefined4 *)(local_18 + 10);
      uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_CallGuildInviteToInvited::dispatch_sig(CUser*, char*, int)",
                 0x337b,
                 "MEMBER : Inter_CallGuildInviteToInvited::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar4,uVar6);
    }
  }
  return 0;
}
```
