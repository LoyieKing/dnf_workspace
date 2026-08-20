# execute

`_ZN11game_master12CDeleteGuild7executeEv`

`game_master::CDeleteGuild::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CDeleteGuild` | `0x084ab29c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab29c  _ZN11game_master12CDeleteGuild7executeEv
#           game_master::CDeleteGuild::execute()
# range [0x084ab29c, 0x084ab4f1]
084ab29c +0x000:  push   %ebp
084ab29d +0x001:  mov    %esp,%ebp
084ab29f +0x003:  push   %esi
084ab2a0 +0x004:  push   %ebx
084ab2a1 +0x005:  sub    $0x40,%esp
084ab2a4 +0x008:  mov    0x8(%ebp),%eax
084ab2a7 +0x00b:  mov    %eax,(%esp)
084ab2aa +0x00e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab2af +0x013:  mov    %eax,-0x10(%ebp)
084ab2b2 +0x016:  mov    -0x10(%ebp),%eax
084ab2b5 +0x019:  mov    %eax,(%esp)
084ab2b8 +0x01c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
084ab2bd +0x021:  xor    $0x1,%eax
084ab2c0 +0x024:  test   %al,%al
084ab2c2 +0x026:  jne    084ab4e3 <+0x247>
084ab2c8 +0x02c:  mov    -0x10(%ebp),%eax
084ab2cb +0x02f:  mov    %eax,(%esp)
084ab2ce +0x032:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ab2d3 +0x037:  cmp    $0x3,%eax
084ab2d6 +0x03a:  setne  %al
084ab2d9 +0x03d:  test   %al,%al
084ab2db +0x03f:  jne    084ab4e6 <+0x24a>
084ab2e1 +0x045:  mov    -0x10(%ebp),%eax
084ab2e4 +0x048:  mov    %eax,(%esp)
084ab2e7 +0x04b:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ab2ec +0x050:  test   %eax,%eax
084ab2ee +0x052:  sete   %al
084ab2f1 +0x055:  test   %al,%al
084ab2f3 +0x057:  jne    084ab4e9 <+0x24d>
084ab2f9 +0x05d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084ab2fe +0x062:  movl   $0x68d,0x8(%esp)
084ab306 +0x06a:  movl   $"GameMaster.cpp",0x4(%esp)
084ab30e +0x072:  mov    %eax,(%esp)
084ab311 +0x075:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084ab316 +0x07a:  movl   $0x1,0x8(%esp)
084ab31e +0x082:  mov    %eax,0x4(%esp)
084ab322 +0x086:  lea    -0x18(%ebp),%eax
084ab325 +0x089:  mov    %eax,(%esp)
084ab328 +0x08c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084ab32d +0x091:  mov    -0x10(%ebp),%eax
084ab330 +0x094:  mov    %eax,(%esp)
084ab333 +0x097:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ab338 +0x09c:  mov    %eax,-0xc(%ebp)
084ab33b +0x09f:  lea    -0x18(%ebp),%eax
084ab33e +0x0a2:  mov    %eax,(%esp)
084ab341 +0x0a5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ab346 +0x0aa:  movl   $0x1df,0x4(%esp)
084ab34e +0x0b2:  mov    %eax,(%esp)
084ab351 +0x0b5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084ab356 +0x0ba:  mov    -0x10(%ebp),%eax
084ab359 +0x0bd:  mov    %eax,(%esp)
084ab35c +0x0c0:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084ab361 +0x0c5:  mov    %eax,%ebx
084ab363 +0x0c7:  lea    -0x18(%ebp),%eax
084ab366 +0x0ca:  mov    %eax,(%esp)
084ab369 +0x0cd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ab36e +0x0d2:  mov    %ebx,0x4(%esp)
084ab372 +0x0d6:  mov    %eax,(%esp)
084ab375 +0x0d9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084ab37a +0x0de:  mov    -0x10(%ebp),%eax
084ab37d +0x0e1:  mov    %eax,(%esp)
084ab380 +0x0e4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084ab385 +0x0e9:  mov    %eax,%ebx
084ab387 +0x0eb:  lea    -0x18(%ebp),%eax
084ab38a +0x0ee:  mov    %eax,(%esp)
084ab38d +0x0f1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ab392 +0x0f6:  mov    %ebx,0x4(%esp)
084ab396 +0x0fa:  mov    %eax,(%esp)
084ab399 +0x0fd:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084ab39e +0x102:  mov    -0x10(%ebp),%eax
084ab3a1 +0x105:  mov    %eax,(%esp)
084ab3a4 +0x108:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ab3a9 +0x10d:  mov    %eax,%ebx
084ab3ab +0x10f:  lea    -0x18(%ebp),%eax
084ab3ae +0x112:  mov    %eax,(%esp)
084ab3b1 +0x115:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084ab3b6 +0x11a:  mov    %ebx,0x4(%esp)
084ab3ba +0x11e:  mov    %eax,(%esp)
084ab3bd +0x121:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084ab3c2 +0x126:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084ab3c7 +0x12b:  lea    -0x18(%ebp),%edx
084ab3ca +0x12e:  mov    %edx,0x8(%esp)
084ab3ce +0x132:  movl   $0x2,0x4(%esp)
084ab3d6 +0x13a:  mov    %eax,(%esp)
084ab3d9 +0x13d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084ab3de +0x142:  mov    -0x10(%ebp),%eax
084ab3e1 +0x145:  movl   $0x0,0x4(%esp)
084ab3e9 +0x14d:  mov    %eax,(%esp)
084ab3ec +0x150:  call   0822f590 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c3a
084ab3f1 +0x155:  mov    -0x10(%ebp),%eax
084ab3f4 +0x158:  movl   $0x0,0x4(%esp)
084ab3fc +0x160:  mov    %eax,(%esp)
084ab3ff +0x163:  call   082a671e <_GLOBAL__I__ZN4CLog5this_E+0x2b45>  ; global constructors keyed to CLog::this_+0x2b45
084ab404 +0x168:  lea    -0x24(%ebp),%eax
084ab407 +0x16b:  mov    %eax,(%esp)
084ab40a +0x16e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ab40f +0x173:  movl   $0x3d,0x8(%esp)
084ab417 +0x17b:  movl   $0x0,0x4(%esp)
084ab41f +0x183:  lea    -0x24(%ebp),%eax
084ab422 +0x186:  mov    %eax,(%esp)
084ab425 +0x189:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ab42a +0x18e:  movl   $0x1,0x4(%esp)
084ab432 +0x196:  lea    -0x24(%ebp),%eax
084ab435 +0x199:  mov    %eax,(%esp)
084ab438 +0x19c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ab43d +0x1a1:  lea    -0x24(%ebp),%eax
084ab440 +0x1a4:  mov    %eax,0x4(%esp)
084ab444 +0x1a8:  mov    -0x10(%ebp),%eax
084ab447 +0x1ab:  mov    %eax,(%esp)
084ab44a +0x1ae:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ab44f +0x1b3:  lea    -0x32(%ebp),%eax
084ab452 +0x1b6:  mov    %eax,(%esp)
084ab455 +0x1b9:  call   084b4156 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x209>  ; global constructors keyed to game_master::CMacro::Reset()+0x209
084ab45a +0x1be:  mov    -0xc(%ebp),%eax
084ab45d +0x1c1:  mov    %eax,-0x28(%ebp)
084ab460 +0x1c4:  movzwl -0x30(%ebp),%eax
084ab464 +0x1c8:  movzwl %ax,%esi
084ab467 +0x1cb:  lea    -0x32(%ebp),%ebx
084ab46a +0x1ce:  mov    -0x10(%ebp),%eax
084ab46d +0x1d1:  mov    %eax,(%esp)
084ab470 +0x1d4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ab475 +0x1d9:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084ab47b +0x1df:  mov    %eax,0x4(%esp)
084ab47f +0x1e3:  mov    %edx,(%esp)
084ab482 +0x1e6:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084ab487 +0x1eb:  mov    %esi,0x8(%esp)
084ab48b +0x1ef:  mov    %ebx,0x4(%esp)
084ab48f +0x1f3:  mov    %eax,(%esp)
084ab492 +0x1f6:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
084ab497 +0x1fb:  jmp    084ab4ae <+0x212>
084ab499 +0x1fd:  mov    %edx,%ebx
084ab49b +0x1ff:  mov    %eax,%esi
084ab49d +0x201:  lea    -0x24(%ebp),%eax
084ab4a0 +0x204:  mov    %eax,(%esp)
084ab4a3 +0x207:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ab4a8 +0x20c:  mov    %esi,%eax
084ab4aa +0x20e:  mov    %ebx,%edx
084ab4ac +0x210:  jmp    084ab4bb <+0x21f>
084ab4ae +0x212:  lea    -0x24(%ebp),%eax
084ab4b1 +0x215:  mov    %eax,(%esp)
084ab4b4 +0x218:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ab4b9 +0x21d:  jmp    084ab4d6 <+0x23a>
084ab4bb +0x21f:  mov    %edx,%ebx
084ab4bd +0x221:  mov    %eax,%esi
084ab4bf +0x223:  lea    -0x18(%ebp),%eax
084ab4c2 +0x226:  mov    %eax,(%esp)
084ab4c5 +0x229:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084ab4ca +0x22e:  mov    %esi,%eax
084ab4cc +0x230:  mov    %ebx,%edx
084ab4ce +0x232:  mov    %eax,(%esp)
084ab4d1 +0x235:  call   08ae3750 <_Unwind_Resume>
084ab4d6 +0x23a:  lea    -0x18(%ebp),%eax
084ab4d9 +0x23d:  mov    %eax,(%esp)
084ab4dc +0x240:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084ab4e1 +0x245:  jmp    084ab4ea <+0x24e>
084ab4e3 +0x247:  nop
084ab4e4 +0x248:  jmp    084ab4ea <+0x24e>
084ab4e6 +0x24a:  nop
084ab4e7 +0x24b:  jmp    084ab4ea <+0x24e>
084ab4e9 +0x24d:  nop
084ab4ea +0x24e:  add    $0x40,%esp
084ab4ed +0x251:  pop    %ebx
084ab4ee +0x252:  pop    %esi
084ab4ef +0x253:  pop    %ebp
084ab4f0 +0x254:  ret
084ab4f1 +0x255:  nop
```

## 反编译 C

```c
// game_master::CDeleteGuild::execute @ 0x84ab29c

/* game_master::CDeleteGuild::execute() */

void __thiscall game_master::CDeleteGuild::execute(CDeleteGuild *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  undefined4 uVar6;
  CGuildServerProxy *this_00;
  Packet_Monitor_Notice_Guild_Dismiss local_36 [2];
  ushort local_34;
  undefined4 local_2c;
  PacketGuard local_28 [12];
  CStreamGuard local_1c [8];
  CUser *local_14;
  undefined4 local_10;
  
  local_14 = (CUser *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUser::isGMUser(local_14);
  if (((cVar1 == '\x01') && (iVar2 = CUser::get_state(local_14), iVar2 == 3)) &&
     (iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_14), iVar2 != 0)) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"GameMaster.cpp",0x68d);
    CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
    local_10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084ab351 to 084ab40e has its CatchHandler @ 084ab4bb */
    CStreamGuard::operator<<(pCVar4,0x1df);
    iVar2 = CUser::GetUID(local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,iVar2);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar5);
    uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar5);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CUserCharacInfo::set_guild_create_right((CUserCharacInfo *)local_14,'\0');
    CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)local_14,0);
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084ab425 to 084ab496 has its CatchHandler @ 084ab499 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x3d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(local_14,local_28);
    Packet_Monitor_Notice_Guild_Dismiss::Packet_Monitor_Notice_Guild_Dismiss(local_36);
    local_2c = local_10;
    uVar6 = CUser::GetServerGroup(local_14);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar6);
    CGuildServerProxy::SendPacket(this_00,(char *)local_36,(uint)local_34);
                    /* try { // try from 084ab4b4 to 084ab4b8 has its CatchHandler @ 084ab4bb */
    PacketGuard::~PacketGuard(local_28);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}
```
