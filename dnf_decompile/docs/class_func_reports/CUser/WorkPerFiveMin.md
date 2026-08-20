# WorkPerFiveMin

`_ZN5CUser14WorkPerFiveMinEv`

`CUser::WorkPerFiveMin()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652f0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652f0c  _ZN5CUser14WorkPerFiveMinEv
#           CUser::WorkPerFiveMin()
# range [0x08652f0c, 0x08653195]
08652f0c +0x000:  push   %ebp
08652f0d +0x001:  mov    %esp,%ebp
08652f0f +0x003:  push   %edi
08652f10 +0x004:  push   %esi
08652f11 +0x005:  push   %ebx
08652f12 +0x006:  sub    $0x7c,%esp
08652f15 +0x009:  mov    0x8(%ebp),%eax
08652f18 +0x00c:  mov    0x8cfc4(%eax),%eax
08652f1e +0x012:  cmp    $0x2,%eax
08652f21 +0x015:  jle    0865318d <+0x281>
08652f27 +0x01b:  mov    0x8(%ebp),%eax
08652f2a +0x01e:  mov    %eax,(%esp)
08652f2d +0x021:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08652f32 +0x026:  test   %eax,%eax
08652f34 +0x028:  sete   %al
08652f37 +0x02b:  test   %al,%al
08652f39 +0x02d:  je     08652f97 <+0x8b>
08652f3b +0x02f:  mov    0x8(%ebp),%eax
08652f3e +0x032:  mov    %eax,(%esp)
08652f41 +0x035:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08652f46 +0x03a:  movl   $0x0,0x4(%esp)
08652f4e +0x042:  mov    %eax,(%esp)
08652f51 +0x045:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08652f56 +0x04a:  mov    %eax,%ebx
08652f58 +0x04c:  movl   $0x5,0xc(%esp)
08652f60 +0x054:  movl   $0x1d24,0x8(%esp)
08652f68 +0x05c:  movl   $&_ZZN5CUser14WorkPerFiveMinEvE19__PRETTY_FUNCTION__,0x4(%esp)
08652f70 +0x064:  lea    -0x28(%ebp),%eax
08652f73 +0x067:  mov    %eax,(%esp)
08652f76 +0x06a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08652f7b +0x06f:  mov    %ebx,0x8(%esp)
08652f7f +0x073:  movl   $"CUser::WorkPerFiveMin() m_id(%s) character - m_selected is null",0x4(%esp)
08652f87 +0x07b:  lea    -0x28(%ebp),%eax
08652f8a +0x07e:  mov    %eax,(%esp)
08652f8d +0x081:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08652f92 +0x086:  jmp    0865318e <+0x282>
08652f97 +0x08b:  mov    0x8(%ebp),%eax
08652f9a +0x08e:  mov    %eax,(%esp)
08652f9d +0x091:  call   082a673c <_GLOBAL__I__ZN4CLog5this_E+0x2b63>  ; global constructors keyed to CLog::this_+0x2b63
08652fa2 +0x096:  test   %eax,%eax
08652fa4 +0x098:  setne  %al
08652fa7 +0x09b:  test   %al,%al
08652fa9 +0x09d:  je     08653091 <+0x185>
08652faf +0x0a3:  lea    -0x44(%ebp),%eax
08652fb2 +0x0a6:  mov    %eax,(%esp)
08652fb5 +0x0a9:  call   0846f376 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x146>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x146
08652fba +0x0ae:  mov    0x8(%ebp),%eax
08652fbd +0x0b1:  mov    %eax,(%esp)
08652fc0 +0x0b4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08652fc5 +0x0b9:  mov    %eax,-0x3a(%ebp)
08652fc8 +0x0bc:  mov    0x8(%ebp),%eax
08652fcb +0x0bf:  mov    %eax,(%esp)
08652fce +0x0c2:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08652fd3 +0x0c7:  mov    %eax,-0x36(%ebp)
08652fd6 +0x0ca:  mov    0x8(%ebp),%eax
08652fd9 +0x0cd:  mov    %eax,(%esp)
08652fdc +0x0d0:  call   082a673c <_GLOBAL__I__ZN4CLog5this_E+0x2b63>  ; global constructors keyed to CLog::this_+0x2b63
08652fe1 +0x0d5:  mov    %eax,-0x32(%ebp)
08652fe4 +0x0d8:  movb   $0x0,-0x2d(%ebp)
08652fe8 +0x0dc:  mov    0x8(%ebp),%eax
08652feb +0x0df:  movzbl 0x796d9(%eax),%eax
08652ff2 +0x0e6:  mov    %al,-0x2e(%ebp)
08652ff5 +0x0e9:  mov    0x8(%ebp),%eax
08652ff8 +0x0ec:  mov    %eax,(%esp)
08652ffb +0x0ef:  call   082a673c <_GLOBAL__I__ZN4CLog5this_E+0x2b63>  ; global constructors keyed to CLog::this_+0x2b63
08653000 +0x0f4:  mov    %eax,%edi
08653002 +0x0f6:  mov    0x8(%ebp),%eax
08653005 +0x0f9:  mov    %eax,(%esp)
08653008 +0x0fc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865300d +0x101:  mov    %eax,%ebx
0865300f +0x103:  mov    0x8(%ebp),%eax
08653012 +0x106:  mov    %eax,(%esp)
08653015 +0x109:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0865301a +0x10e:  mov    %eax,%esi
0865301c +0x110:  mov    0x8(%ebp),%eax
0865301f +0x113:  mov    %eax,(%esp)
08653022 +0x116:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08653027 +0x11b:  mov    0x8(%ebp),%edx
0865302a +0x11e:  add    $0x79700,%edx
08653030 +0x124:  mov    %edi,0x10(%esp)
08653034 +0x128:  mov    %ebx,0xc(%esp)
08653038 +0x12c:  mov    %esi,0x8(%esp)
0865303c +0x130:  mov    %eax,0x4(%esp)
08653040 +0x134:  mov    %edx,(%esp)
08653043 +0x137:  call   08685bb8 <_ZN15cUserHistoryLog11GuildAddExpEjPKcji>  ; cUserHistoryLog::GuildAddExp(unsigned int, char const*, unsigned int, int)
08653048 +0x13c:  lea    -0x44(%ebp),%ebx
0865304b +0x13f:  mov    0x8(%ebp),%eax
0865304e +0x142:  mov    %eax,(%esp)
08653051 +0x145:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08653056 +0x14a:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0865305c +0x150:  mov    %eax,0x4(%esp)
08653060 +0x154:  mov    %edx,(%esp)
08653063 +0x157:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08653068 +0x15c:  movl   $0x1c,0x8(%esp)
08653070 +0x164:  mov    %ebx,0x4(%esp)
08653074 +0x168:  mov    %eax,(%esp)
08653077 +0x16b:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0865307c +0x170:  mov    0x8(%ebp),%eax
0865307f +0x173:  movb   $0x0,0x796d9(%eax)
08653086 +0x17a:  mov    0x8(%ebp),%eax
08653089 +0x17d:  mov    %eax,(%esp)
0865308c +0x180:  call   08645cb4 <_ZN15CUserCharacInfo15reset_guild_expEv>  ; CUserCharacInfo::reset_guild_exp()
08653091 +0x185:  mov    0x8(%ebp),%eax
08653094 +0x188:  mov    %eax,(%esp)
08653097 +0x18b:  call   08696844 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3099>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3099
0865309c +0x190:  test   %eax,%eax
0865309e +0x192:  setne  %al
086530a1 +0x195:  test   %al,%al
086530a3 +0x197:  je     0865318e <+0x282>
086530a9 +0x19d:  lea    -0x60(%ebp),%eax
086530ac +0x1a0:  mov    %eax,(%esp)
086530af +0x1a3:  call   0846f376 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x146>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x146
086530b4 +0x1a8:  mov    0x8(%ebp),%eax
086530b7 +0x1ab:  mov    %eax,(%esp)
086530ba +0x1ae:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086530bf +0x1b3:  mov    %eax,-0x56(%ebp)
086530c2 +0x1b6:  mov    0x8(%ebp),%eax
086530c5 +0x1b9:  mov    %eax,(%esp)
086530c8 +0x1bc:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086530cd +0x1c1:  mov    %eax,-0x52(%ebp)
086530d0 +0x1c4:  mov    0x8(%ebp),%eax
086530d3 +0x1c7:  mov    %eax,(%esp)
086530d6 +0x1ca:  call   08696844 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3099>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3099
086530db +0x1cf:  mov    %eax,-0x4e(%ebp)
086530de +0x1d2:  movb   $0x2,-0x49(%ebp)
086530e2 +0x1d6:  mov    0x8(%ebp),%eax
086530e5 +0x1d9:  movzbl 0x796d9(%eax),%eax
086530ec +0x1e0:  mov    %al,-0x4a(%ebp)
086530ef +0x1e3:  mov    0x8(%ebp),%eax
086530f2 +0x1e6:  mov    %eax,(%esp)
086530f5 +0x1e9:  call   08696844 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3099>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3099
086530fa +0x1ee:  mov    %eax,%edi
086530fc +0x1f0:  mov    0x8(%ebp),%eax
086530ff +0x1f3:  mov    %eax,(%esp)
08653102 +0x1f6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08653107 +0x1fb:  mov    %eax,%ebx
08653109 +0x1fd:  mov    0x8(%ebp),%eax
0865310c +0x200:  mov    %eax,(%esp)
0865310f +0x203:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
08653114 +0x208:  mov    %eax,%esi
08653116 +0x20a:  mov    0x8(%ebp),%eax
08653119 +0x20d:  mov    %eax,(%esp)
0865311c +0x210:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08653121 +0x215:  mov    0x8(%ebp),%edx
08653124 +0x218:  add    $0x79700,%edx
0865312a +0x21e:  mov    %edi,0x10(%esp)
0865312e +0x222:  mov    %ebx,0xc(%esp)
08653132 +0x226:  mov    %esi,0x8(%esp)
08653136 +0x22a:  mov    %eax,0x4(%esp)
0865313a +0x22e:  mov    %edx,(%esp)
0865313d +0x231:  call   08685bb8 <_ZN15cUserHistoryLog11GuildAddExpEjPKcji>  ; cUserHistoryLog::GuildAddExp(unsigned int, char const*, unsigned int, int)
08653142 +0x236:  lea    -0x60(%ebp),%ebx
08653145 +0x239:  mov    0x8(%ebp),%eax
08653148 +0x23c:  mov    %eax,(%esp)
0865314b +0x23f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08653150 +0x244:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08653156 +0x24a:  mov    %eax,0x4(%esp)
0865315a +0x24e:  mov    %edx,(%esp)
0865315d +0x251:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08653162 +0x256:  movl   $0x1c,0x8(%esp)
0865316a +0x25e:  mov    %ebx,0x4(%esp)
0865316e +0x262:  mov    %eax,(%esp)
08653171 +0x265:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
08653176 +0x26a:  mov    0x8(%ebp),%eax
08653179 +0x26d:  movb   $0x0,0x796d9(%eax)
08653180 +0x274:  mov    0x8(%ebp),%eax
08653183 +0x277:  mov    %eax,(%esp)
08653186 +0x27a:  call   08645d22 <_ZN15CUserCharacInfo21reset_guild_today_expEv>  ; CUserCharacInfo::reset_guild_today_exp()
0865318b +0x27f:  jmp    0865318e <+0x282>
0865318d +0x281:  nop
0865318e +0x282:  add    $0x7c,%esp
08653191 +0x285:  pop    %ebx
08653192 +0x286:  pop    %esi
08653193 +0x287:  pop    %edi
08653194 +0x288:  pop    %ebp
08653195 +0x289:  ret
```

## 反编译 C

```c
// CUser::WorkPerFiveMin @ 0x8652f0c

/* CUser::WorkPerFiveMin() */

void __thiscall CUser::WorkPerFiveMin(CUser *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  CGuildServerProxy *pCVar6;
  Packet_Monitor_Increase_Guild_Exp local_64 [10];
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  CUser local_4e;
  undefined1 local_4d;
  Packet_Monitor_Increase_Guild_Exp local_48 [10];
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  CUser local_32;
  undefined1 local_31;
  cMyTrace local_2c [28];
  
  if (2 < *(int *)(this + 0x8cfc4)) {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar1 == 0) {
      uVar2 = get_acc_id(this);
      uVar3 = NumberToString(uVar2,0);
      cMyTrace::cMyTrace(local_2c,"void CUser::WorkPerFiveMin()",0x1d24,5);
      cMyTrace::operator()
                (local_2c,"CUser::WorkPerFiveMin() m_id(%s) character - m_selected is null",uVar3);
    }
    else {
      iVar1 = CUserCharacInfo::get_guild_exp((CUserCharacInfo *)this);
      if (iVar1 != 0) {
        Packet_Monitor_Increase_Guild_Exp::Packet_Monitor_Increase_Guild_Exp(local_48);
        local_3e = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        local_3a = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        local_36 = CUserCharacInfo::get_guild_exp((CUserCharacInfo *)this);
        local_31 = 0;
        local_32 = this[0x796d9];
        iVar1 = CUserCharacInfo::get_guild_exp((CUserCharacInfo *)this);
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        pcVar4 = (char *)GetGuildDBInfo(this);
        uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        cUserHistoryLog::GuildAddExp((cUserHistoryLog *)(this + 0x79700),uVar5,pcVar4,uVar2,iVar1);
        uVar3 = GetServerGroup(this);
        pCVar6 = (CGuildServerProxy *)
                 CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                           (GlobalData::s_guild_proxy_mgr,uVar3);
        CGuildServerProxy::SendPacket(pCVar6,(char *)local_48,0x1c);
        this[0x796d9] = (CUser)0x0;
        CUserCharacInfo::reset_guild_exp((CUserCharacInfo *)this);
      }
      iVar1 = CUserCharacInfo::get_guild_today_exp((CUserCharacInfo *)this);
      if (iVar1 != 0) {
        Packet_Monitor_Increase_Guild_Exp::Packet_Monitor_Increase_Guild_Exp(local_64);
        local_5a = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        local_56 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        local_52 = CUserCharacInfo::get_guild_today_exp((CUserCharacInfo *)this);
        local_4d = 2;
        local_4e = this[0x796d9];
        iVar1 = CUserCharacInfo::get_guild_today_exp((CUserCharacInfo *)this);
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        pcVar4 = (char *)GetGuildDBInfo(this);
        uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
        cUserHistoryLog::GuildAddExp((cUserHistoryLog *)(this + 0x79700),uVar5,pcVar4,uVar2,iVar1);
        uVar3 = GetServerGroup(this);
        pCVar6 = (CGuildServerProxy *)
                 CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                           (GlobalData::s_guild_proxy_mgr,uVar3);
        CGuildServerProxy::SendPacket(pCVar6,(char *)local_64,0x1c);
        this[0x796d9] = (CUser)0x0;
        CUserCharacInfo::reset_guild_today_exp((CUserCharacInfo *)this);
      }
    }
  }
  return;
}
```
