# dispatch_sig

`_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf`

`DIspatcher_OneDayLetheTicket::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DIspatcher_OneDayLetheTicket` | `0x0821b106` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b106  _ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf
#           DIspatcher_OneDayLetheTicket::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821b106, 0x0821b255]
0821b106 +0x000:  push   %ebp
0821b107 +0x001:  mov    %esp,%ebp
0821b109 +0x003:  sub    $0x38,%esp
0821b10c +0x006:  movl   $0x0,0xc(%esp)
0821b114 +0x00e:  movl   $0xceaa,0x8(%esp)
0821b11c +0x016:  movl   $&_ZZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821b124 +0x01e:  lea    -0x1c(%ebp),%eax
0821b127 +0x021:  mov    %eax,(%esp)
0821b12a +0x024:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0821b12f +0x029:  movl   $"ONE_DAY_LETHE : SKILL_INIT_PACKET",0x4(%esp)
0821b137 +0x031:  lea    -0x1c(%ebp),%eax
0821b13a +0x034:  mov    %eax,(%esp)
0821b13d +0x037:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821b142 +0x03c:  cmpl   $0x0,0xc(%ebp)
0821b146 +0x040:  jne    0821b152 <+0x4c>
0821b148 +0x042:  mov    $0x0,%eax
0821b14d +0x047:  jmp    0821b254 <+0x14e>
0821b152 +0x04c:  mov    0xc(%ebp),%eax
0821b155 +0x04f:  mov    %eax,(%esp)
0821b158 +0x052:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821b15d +0x057:  cmp    $0x3,%eax
0821b160 +0x05a:  setne  %al
0821b163 +0x05d:  test   %al,%al
0821b165 +0x05f:  je     0821b18c <+0x86>
0821b167 +0x061:  movl   $0x1,0x8(%esp)
0821b16f +0x069:  movl   $0xd5,0x4(%esp)
0821b177 +0x071:  mov    0xc(%ebp),%eax
0821b17a +0x074:  mov    %eax,(%esp)
0821b17d +0x077:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821b182 +0x07c:  mov    $0x0,%eax
0821b187 +0x081:  jmp    0821b254 <+0x14e>
0821b18c +0x086:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0821b191 +0x08b:  mov    %eax,(%esp)
0821b194 +0x08e:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0821b199 +0x093:  test   %al,%al
0821b19b +0x095:  je     0821b1b8 <+0xb2>
0821b19d +0x097:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0821b1a2 +0x09c:  mov    %eax,(%esp)
0821b1a5 +0x09f:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
0821b1aa +0x0a4:  xor    $0x1,%eax
0821b1ad +0x0a7:  test   %al,%al
0821b1af +0x0a9:  je     0821b1b8 <+0xb2>
0821b1b1 +0x0ab:  mov    $0x1,%eax
0821b1b6 +0x0b0:  jmp    0821b1bd <+0xb7>
0821b1b8 +0x0b2:  mov    $0x0,%eax
0821b1bd +0x0b7:  test   %al,%al
0821b1bf +0x0b9:  je     0821b1e3 <+0xdd>
0821b1c1 +0x0bb:  movl   $0x1,0x8(%esp)
0821b1c9 +0x0c3:  movl   $0xd5,0x4(%esp)
0821b1d1 +0x0cb:  mov    0xc(%ebp),%eax
0821b1d4 +0x0ce:  mov    %eax,(%esp)
0821b1d7 +0x0d1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821b1dc +0x0d6:  mov    $0x0,%eax
0821b1e1 +0x0db:  jmp    0821b254 <+0x14e>
0821b1e3 +0x0dd:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821b1e8 +0x0e2:  mov    %eax,(%esp)
0821b1eb +0x0e5:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
0821b1f0 +0x0ea:  mov    %eax,-0xc(%ebp)
0821b1f3 +0x0ed:  cmpl   $0x0,-0xc(%ebp)
0821b1f7 +0x0f1:  jne    0821b21b <+0x115>
0821b1f9 +0x0f3:  movl   $0x1,0x8(%esp)
0821b201 +0x0fb:  movl   $0xd5,0x4(%esp)
0821b209 +0x103:  mov    0xc(%ebp),%eax
0821b20c +0x106:  mov    %eax,(%esp)
0821b20f +0x109:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821b214 +0x10e:  mov    $0x0,%eax
0821b219 +0x113:  jmp    0821b254 <+0x14e>
0821b21b +0x115:  mov    0xc(%ebp),%eax
0821b21e +0x118:  mov    %eax,0x4(%esp)
0821b222 +0x11c:  mov    -0xc(%ebp),%eax
0821b225 +0x11f:  mov    %eax,(%esp)
0821b228 +0x122:  call   085c3d14 <_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser>  ; CPremiumLetheManager::ResetSkillReq(CUser*)
0821b22d +0x127:  xor    $0x1,%eax
0821b230 +0x12a:  test   %al,%al
0821b232 +0x12c:  je     0821b24f <+0x149>
0821b234 +0x12e:  movl   $0x1,0x8(%esp)
0821b23c +0x136:  movl   $0xd5,0x4(%esp)
0821b244 +0x13e:  mov    0xc(%ebp),%eax
0821b247 +0x141:  mov    %eax,(%esp)
0821b24a +0x144:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821b24f +0x149:  mov    $0x0,%eax
0821b254 +0x14e:  leave
0821b255 +0x14f:  ret
```

## 反编译 C

```c
// DIspatcher_OneDayLetheTicket::dispatch_sig @ 0x821b106

/* DIspatcher_OneDayLetheTicket::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DIspatcher_OneDayLetheTicket::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  CGameManager *this;
  cMyTrace local_20 [16];
  CPremiumLetheManager *local_10;
  
  cMyTrace::cMyTrace(local_20,
                     "virtual int DIspatcher_OneDayLetheTicket::dispatch_sig(CUser*, PacketBuf&)",
                     0xceaa,0);
  cMyTrace::operator()(local_20,"ONE_DAY_LETHE : SKILL_INIT_PACKET");
  if (param_2 == (PacketBuf *)0x0) {
    return 0;
  }
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 3) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 != '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(pGVar4);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0821b1bd;
    }
  }
  bVar1 = false;
LAB_0821b1bd:
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
  }
  else {
    this = (CGameManager *)G_CGameManager();
    local_10 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
    if (local_10 == (CPremiumLetheManager *)0x0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
    }
    else {
      cVar2 = CPremiumLetheManager::ResetSkillReq(local_10,(CUser *)param_2);
      if (cVar2 != '\x01') {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
      }
    }
  }
  return 0;
}
```
