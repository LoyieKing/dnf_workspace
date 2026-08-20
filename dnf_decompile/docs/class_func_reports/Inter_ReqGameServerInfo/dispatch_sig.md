# dispatch_sig

`_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci`

`Inter_ReqGameServerInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReqGameServerInfo` | `0x084e2b94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e2b94  _ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci
#           Inter_ReqGameServerInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e2b94, 0x084e2ded]
084e2b94 +0x000:  push   %ebp
084e2b95 +0x001:  mov    %esp,%ebp
084e2b97 +0x003:  push   %edi
084e2b98 +0x004:  push   %esi
084e2b99 +0x005:  push   %ebx
084e2b9a +0x006:  sub    $0x4c,%esp
084e2b9d +0x009:  mov    0x10(%ebp),%eax
084e2ba0 +0x00c:  mov    %eax,-0x1c(%ebp)
084e2ba3 +0x00f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e2ba8 +0x014:  mov    %eax,(%esp)
084e2bab +0x017:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084e2bb0 +0x01c:  cmp    $0x7,%eax
084e2bb3 +0x01f:  sete   %al
084e2bb6 +0x022:  test   %al,%al
084e2bb8 +0x024:  jne    084e2de0 <+0x24c>
084e2bbe +0x02a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e2bc3 +0x02f:  mov    %eax,(%esp)
084e2bc6 +0x032:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084e2bcb +0x037:  test   %al,%al
084e2bcd +0x039:  je     084e2ce6 <+0x152>
084e2bd3 +0x03f:  mov    -0x1c(%ebp),%eax
084e2bd6 +0x042:  movzbl 0xa(%eax),%eax
084e2bda +0x046:  movzbl %al,%eax
084e2bdd +0x049:  test   %eax,%eax
084e2bdf +0x04b:  je     084e2bef <+0x5b>
084e2be1 +0x04d:  cmp    $0x1,%eax
084e2be4 +0x050:  je     084e2c6b <+0xd7>
084e2bea +0x056:  jmp    084e2de0 <+0x24c>
084e2bef +0x05b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2bf4 +0x060:  mov    %eax,(%esp)
084e2bf7 +0x063:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084e2bfc +0x068:  movzbl %al,%eax
084e2bff +0x06b:  mov    %eax,-0x38(%ebp)
084e2c02 +0x06e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2c07 +0x073:  mov    0x378(%eax),%eax
084e2c0d +0x079:  movzbl %al,%edi
084e2c10 +0x07c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2c15 +0x081:  mov    %eax,(%esp)
084e2c18 +0x084:  call   082a6d6a <_GLOBAL__I__ZN4CLog5this_E+0x3191>  ; global constructors keyed to CLog::this_+0x3191
084e2c1d +0x089:  movzwl %ax,%esi
084e2c20 +0x08c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2c25 +0x091:  mov    %eax,(%esp)
084e2c28 +0x094:  call   084ed1dc <_GLOBAL__I__Z7getUserj+0x418e>  ; global constructors keyed to getUser(unsigned int)+0x418e
084e2c2d +0x099:  mov    %eax,%ebx
084e2c2f +0x09b:  mov    -0x1c(%ebp),%eax
084e2c32 +0x09e:  movzbl 0xb(%eax),%eax
084e2c36 +0x0a2:  movzbl %al,%edx
084e2c39 +0x0a5:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084e2c3e +0x0aa:  mov    %edx,0x4(%esp)
084e2c42 +0x0ae:  mov    %eax,(%esp)
084e2c45 +0x0b1:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e2c4a +0x0b6:  mov    -0x38(%ebp),%edx
084e2c4d +0x0b9:  mov    %edx,0x10(%esp)
084e2c51 +0x0bd:  mov    %edi,0xc(%esp)
084e2c55 +0x0c1:  mov    %esi,0x8(%esp)
084e2c59 +0x0c5:  mov    %ebx,0x4(%esp)
084e2c5d +0x0c9:  mov    %eax,(%esp)
084e2c60 +0x0cc:  call   084714ec <_ZN19CMonitorServerProxy18SendGameServerInfoEPcthh>  ; CMonitorServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)
084e2c65 +0x0d1:  nop
084e2c66 +0x0d2:  jmp    084e2de0 <+0x24c>
084e2c6b +0x0d7:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2c70 +0x0dc:  mov    %eax,(%esp)
084e2c73 +0x0df:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084e2c78 +0x0e4:  movzbl %al,%eax
084e2c7b +0x0e7:  mov    %eax,-0x34(%ebp)
084e2c7e +0x0ea:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2c83 +0x0ef:  mov    0x378(%eax),%eax
084e2c89 +0x0f5:  movzbl %al,%edi
084e2c8c +0x0f8:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2c91 +0x0fd:  mov    %eax,(%esp)
084e2c94 +0x100:  call   082a6d6a <_GLOBAL__I__ZN4CLog5this_E+0x3191>  ; global constructors keyed to CLog::this_+0x3191
084e2c99 +0x105:  movzwl %ax,%esi
084e2c9c +0x108:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2ca1 +0x10d:  mov    %eax,(%esp)
084e2ca4 +0x110:  call   084ed1dc <_GLOBAL__I__Z7getUserj+0x418e>  ; global constructors keyed to getUser(unsigned int)+0x418e
084e2ca9 +0x115:  mov    %eax,%ebx
084e2cab +0x117:  mov    -0x1c(%ebp),%eax
084e2cae +0x11a:  movzbl 0xb(%eax),%eax
084e2cb2 +0x11e:  movzbl %al,%edx
084e2cb5 +0x121:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084e2cba +0x126:  mov    %edx,0x4(%esp)
084e2cbe +0x12a:  mov    %eax,(%esp)
084e2cc1 +0x12d:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084e2cc6 +0x132:  mov    -0x34(%ebp),%edx
084e2cc9 +0x135:  mov    %edx,0x10(%esp)
084e2ccd +0x139:  mov    %edi,0xc(%esp)
084e2cd1 +0x13d:  mov    %esi,0x8(%esp)
084e2cd5 +0x141:  mov    %ebx,0x4(%esp)
084e2cd9 +0x145:  mov    %eax,(%esp)
084e2cdc +0x148:  call   0846f0f2 <_ZN17CGuildServerProxy18SendGameServerInfoEPcthh>  ; CGuildServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)
084e2ce1 +0x14d:  jmp    084e2de0 <+0x24c>
084e2ce6 +0x152:  mov    -0x1c(%ebp),%eax
084e2ce9 +0x155:  movzbl 0xa(%eax),%eax
084e2ced +0x159:  movzbl %al,%eax
084e2cf0 +0x15c:  test   %eax,%eax
084e2cf2 +0x15e:  je     084e2cfe <+0x16a>
084e2cf4 +0x160:  cmp    $0x1,%eax
084e2cf7 +0x163:  je     084e2d70 <+0x1dc>
084e2cf9 +0x165:  jmp    084e2de0 <+0x24c>
084e2cfe +0x16a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d03 +0x16f:  mov    %eax,(%esp)
084e2d06 +0x172:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084e2d0b +0x177:  movzbl %al,%eax
084e2d0e +0x17a:  mov    %eax,-0x30(%ebp)
084e2d11 +0x17d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d16 +0x182:  mov    0x378(%eax),%eax
084e2d1c +0x188:  movzbl %al,%edi
084e2d1f +0x18b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d24 +0x190:  mov    %eax,(%esp)
084e2d27 +0x193:  call   082a6d6a <_GLOBAL__I__ZN4CLog5this_E+0x3191>  ; global constructors keyed to CLog::this_+0x3191
084e2d2c +0x198:  movzwl %ax,%esi
084e2d2f +0x19b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d34 +0x1a0:  mov    %eax,(%esp)
084e2d37 +0x1a3:  call   084ed1dc <_GLOBAL__I__Z7getUserj+0x418e>  ; global constructors keyed to getUser(unsigned int)+0x418e
084e2d3c +0x1a8:  mov    %eax,%ebx
084e2d3e +0x1aa:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084e2d43 +0x1af:  movl   $0x0,0x4(%esp)
084e2d4b +0x1b7:  mov    %eax,(%esp)
084e2d4e +0x1ba:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e2d53 +0x1bf:  mov    -0x30(%ebp),%edx
084e2d56 +0x1c2:  mov    %edx,0x10(%esp)
084e2d5a +0x1c6:  mov    %edi,0xc(%esp)
084e2d5e +0x1ca:  mov    %esi,0x8(%esp)
084e2d62 +0x1ce:  mov    %ebx,0x4(%esp)
084e2d66 +0x1d2:  mov    %eax,(%esp)
084e2d69 +0x1d5:  call   084714ec <_ZN19CMonitorServerProxy18SendGameServerInfoEPcthh>  ; CMonitorServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)
084e2d6e +0x1da:  jmp    084e2de0 <+0x24c>
084e2d70 +0x1dc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d75 +0x1e1:  mov    %eax,(%esp)
084e2d78 +0x1e4:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084e2d7d +0x1e9:  movzbl %al,%eax
084e2d80 +0x1ec:  mov    %eax,-0x2c(%ebp)
084e2d83 +0x1ef:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d88 +0x1f4:  mov    0x378(%eax),%eax
084e2d8e +0x1fa:  movzbl %al,%edi
084e2d91 +0x1fd:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2d96 +0x202:  mov    %eax,(%esp)
084e2d99 +0x205:  call   082a6d6a <_GLOBAL__I__ZN4CLog5this_E+0x3191>  ; global constructors keyed to CLog::this_+0x3191
084e2d9e +0x20a:  movzwl %ax,%esi
084e2da1 +0x20d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e2da6 +0x212:  mov    %eax,(%esp)
084e2da9 +0x215:  call   084ed1dc <_GLOBAL__I__Z7getUserj+0x418e>  ; global constructors keyed to getUser(unsigned int)+0x418e
084e2dae +0x21a:  mov    %eax,%ebx
084e2db0 +0x21c:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084e2db5 +0x221:  movl   $0x0,0x4(%esp)
084e2dbd +0x229:  mov    %eax,(%esp)
084e2dc0 +0x22c:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084e2dc5 +0x231:  mov    -0x2c(%ebp),%edx
084e2dc8 +0x234:  mov    %edx,0x10(%esp)
084e2dcc +0x238:  mov    %edi,0xc(%esp)
084e2dd0 +0x23c:  mov    %esi,0x8(%esp)
084e2dd4 +0x240:  mov    %ebx,0x4(%esp)
084e2dd8 +0x244:  mov    %eax,(%esp)
084e2ddb +0x247:  call   0846f0f2 <_ZN17CGuildServerProxy18SendGameServerInfoEPcthh>  ; CGuildServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char)
084e2de0 +0x24c:  mov    $0x0,%eax
084e2de5 +0x251:  add    $0x4c,%esp
084e2de8 +0x254:  pop    %ebx
084e2de9 +0x255:  pop    %esi
084e2dea +0x256:  pop    %edi
084e2deb +0x257:  pop    %ebp
084e2dec +0x258:  ret
084e2ded +0x259:  nop
```

## 反编译 C

```c
// Inter_ReqGameServerInfo::dispatch_sig @ 0x84e2b94

/* Inter_ReqGameServerInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqGameServerInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  uchar uVar3;
  ushort uVar4;
  GameWorld *pGVar5;
  int iVar6;
  CMonitorServerProxy *pCVar7;
  CEnvironment *pCVar8;
  char *pcVar9;
  CGuildServerProxy *pCVar10;
  
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar5);
  if (iVar6 != 7) {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
    if (cVar2 == '\0') {
      if (*(char *)(param_3 + 10) == '\0') {
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar3 = CEnvironment::get_channel_no(pCVar8);
        iVar6 = G_CEnvironment();
        uVar1 = *(undefined4 *)(iVar6 + 0x378);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar4 = CEnvironment::get_udp_port(pCVar8);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
        pCVar7 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,0);
        CMonitorServerProxy::SendGameServerInfo(pCVar7,pcVar9,uVar4,(uchar)uVar1,uVar3);
      }
      else if (*(char *)(param_3 + 10) == '\x01') {
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar3 = CEnvironment::get_channel_no(pCVar8);
        iVar6 = G_CEnvironment();
        uVar1 = *(undefined4 *)(iVar6 + 0x378);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar4 = CEnvironment::get_udp_port(pCVar8);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
        pCVar10 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,0);
        CGuildServerProxy::SendGameServerInfo(pCVar10,pcVar9,uVar4,(uchar)uVar1,uVar3);
      }
    }
    else if (*(char *)(param_3 + 10) == '\0') {
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_channel_no(pCVar8);
      iVar6 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar6 + 0x378);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_udp_port(pCVar8);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
      pCVar7 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,*(undefined1 *)(param_3 + 0xb));
      CMonitorServerProxy::SendGameServerInfo(pCVar7,pcVar9,uVar4,(uchar)uVar1,uVar3);
    }
    else if (*(char *)(param_3 + 10) == '\x01') {
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_channel_no(pCVar8);
      iVar6 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar6 + 0x378);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_udp_port(pCVar8);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
      pCVar10 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,*(undefined1 *)(param_3 + 0xb));
      CGuildServerProxy::SendGameServerInfo(pCVar10,pcVar9,uVar4,(uchar)uVar1,uVar3);
    }
  }
  return 0;
}
```
