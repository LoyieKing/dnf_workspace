# dispatch_sig

`_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AuctionBuyItemApiece` | `0x08214e44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08214e44  _ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)
# range [0x08214e44, 0x082151b7]
08214e44 +0x000:  push   %ebp
08214e45 +0x001:  mov    %esp,%ebp
08214e47 +0x003:  push   %esi
08214e48 +0x004:  push   %ebx
08214e49 +0x005:  sub    $0x60,%esp
08214e4c +0x008:  movl   $0x0,0x8(%esp)
08214e54 +0x010:  movl   $0x14f,0x4(%esp)
08214e5c +0x018:  mov    0xc(%ebp),%eax
08214e5f +0x01b:  mov    %eax,(%esp)
08214e62 +0x01e:  call   08680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>  ; CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE)
08214e67 +0x023:  mov    %eax,-0x14(%ebp)
08214e6a +0x026:  cmpl   $0x0,-0x14(%ebp)
08214e6e +0x02a:  js     08214e78 <+0x34>
08214e70 +0x02c:  mov    -0x14(%ebp),%eax
08214e73 +0x02f:  jmp    082151b1 <+0x36d>
08214e78 +0x034:  lea    -0x56(%ebp),%eax
08214e7b +0x037:  mov    %eax,(%esp)
08214e7e +0x03a:  call   0822e8e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3f8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3f8e
08214e83 +0x03f:  mov    0xc(%ebp),%eax
08214e86 +0x042:  mov    %eax,(%esp)
08214e89 +0x045:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08214e8e +0x04a:  mov    %eax,-0x44(%ebp)
08214e91 +0x04d:  mov    0xc(%ebp),%eax
08214e94 +0x050:  mov    %eax,(%esp)
08214e97 +0x053:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08214e9c +0x058:  mov    %eax,-0x40(%ebp)
08214e9f +0x05b:  lea    -0x56(%ebp),%eax
08214ea2 +0x05e:  add    $0x1a,%eax
08214ea5 +0x061:  mov    %eax,0x4(%esp)
08214ea9 +0x065:  mov    0x10(%ebp),%eax
08214eac +0x068:  mov    %eax,(%esp)
08214eaf +0x06b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08214eb4 +0x070:  xor    $0x1,%eax
08214eb7 +0x073:  test   %al,%al
08214eb9 +0x075:  je     08214ee4 <+0xa0>
08214ebb +0x077:  movl   $0x0,0xc(%esp)
08214ec3 +0x07f:  movl   $0x0,0x8(%esp)
08214ecb +0x087:  movl   $&_ZZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214ed3 +0x08f:  movl   $0xc501,(%esp)
08214eda +0x096:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214edf +0x09b:  jmp    082151b1 <+0x36d>
08214ee4 +0x0a0:  lea    -0x56(%ebp),%eax
08214ee7 +0x0a3:  add    $0x26,%eax
08214eea +0x0a6:  mov    %eax,0x4(%esp)
08214eee +0x0aa:  mov    0x10(%ebp),%eax
08214ef1 +0x0ad:  mov    %eax,(%esp)
08214ef4 +0x0b0:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08214ef9 +0x0b5:  xor    $0x1,%eax
08214efc +0x0b8:  test   %al,%al
08214efe +0x0ba:  je     08214f29 <+0xe5>
08214f00 +0x0bc:  movl   $0x0,0xc(%esp)
08214f08 +0x0c4:  movl   $0x0,0x8(%esp)
08214f10 +0x0cc:  movl   $&_ZZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214f18 +0x0d4:  movl   $0xc502,(%esp)
08214f1f +0x0db:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214f24 +0x0e0:  jmp    082151b1 <+0x36d>
08214f29 +0x0e5:  lea    -0x56(%ebp),%eax
08214f2c +0x0e8:  add    $0x1e,%eax
08214f2f +0x0eb:  movl   $0x8,0x8(%esp)
08214f37 +0x0f3:  mov    %eax,0x4(%esp)
08214f3b +0x0f7:  mov    0x10(%ebp),%eax
08214f3e +0x0fa:  mov    %eax,(%esp)
08214f41 +0x0fd:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08214f46 +0x102:  xor    $0x1,%eax
08214f49 +0x105:  test   %al,%al
08214f4b +0x107:  je     08214f76 <+0x132>
08214f4d +0x109:  movl   $0x0,0xc(%esp)
08214f55 +0x111:  movl   $0x0,0x8(%esp)
08214f5d +0x119:  movl   $&_ZZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214f65 +0x121:  movl   $0xc503,(%esp)
08214f6c +0x128:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214f71 +0x12d:  jmp    082151b1 <+0x36d>
08214f76 +0x132:  movl   $0x0,-0x21(%ebp)
08214f7d +0x139:  movl   $0x0,-0x1d(%ebp)
08214f84 +0x140:  movl   $0x0,-0x19(%ebp)
08214f8b +0x147:  movb   $0x0,-0x15(%ebp)
08214f8f +0x14b:  movl   $0xd,0x8(%esp)
08214f97 +0x153:  lea    -0x21(%ebp),%eax
08214f9a +0x156:  mov    %eax,0x4(%esp)
08214f9e +0x15a:  mov    0x10(%ebp),%eax
08214fa1 +0x15d:  mov    %eax,(%esp)
08214fa4 +0x160:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08214fa9 +0x165:  xor    $0x1,%eax
08214fac +0x168:  test   %al,%al
08214fae +0x16a:  je     08214fd9 <+0x195>
08214fb0 +0x16c:  movl   $0x0,0xc(%esp)
08214fb8 +0x174:  movl   $0x0,0x8(%esp)
08214fc0 +0x17c:  movl   $&_ZZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08214fc8 +0x184:  movl   $0xc508,(%esp)
08214fcf +0x18b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08214fd4 +0x190:  jmp    082151b1 <+0x36d>
08214fd9 +0x195:  mov    0xc(%ebp),%eax
08214fdc +0x198:  mov    %eax,(%esp)
08214fdf +0x19b:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08214fe4 +0x1a0:  mov    -0x3c(%ebp),%edx
08214fe7 +0x1a3:  cmp    %edx,%eax
08214fe9 +0x1a5:  setl   %al
08214fec +0x1a8:  test   %al,%al
08214fee +0x1aa:  je     08215015 <+0x1d1>
08214ff0 +0x1ac:  movl   $0x90,0x8(%esp)
08214ff8 +0x1b4:  movl   $0xbc,0x4(%esp)
08215000 +0x1bc:  mov    0xc(%ebp),%eax
08215003 +0x1bf:  mov    %eax,(%esp)
08215006 +0x1c2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821500b +0x1c7:  mov    $0x0,%eax
08215010 +0x1cc:  jmp    082151b1 <+0x36d>
08215015 +0x1d1:  mov    0xc(%ebp),%eax
08215018 +0x1d4:  mov    %eax,(%esp)
0821501b +0x1d7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08215020 +0x1dc:  mov    %eax,-0x10(%ebp)
08215023 +0x1df:  mov    -0x3c(%ebp),%eax
08215026 +0x1e2:  movl   $0x1,0xc(%esp)
0821502e +0x1ea:  movl   $0x1a,0x8(%esp)
08215036 +0x1f2:  mov    %eax,0x4(%esp)
0821503a +0x1f6:  mov    -0x10(%ebp),%eax
0821503d +0x1f9:  mov    %eax,(%esp)
08215040 +0x1fc:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08215045 +0x201:  xor    $0x1,%eax
08215048 +0x204:  test   %al,%al
0821504a +0x206:  je     08215071 <+0x22d>
0821504c +0x208:  movl   $0x93,0x8(%esp)
08215054 +0x210:  movl   $0xbc,0x4(%esp)
0821505c +0x218:  mov    0xc(%ebp),%eax
0821505f +0x21b:  mov    %eax,(%esp)
08215062 +0x21e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08215067 +0x223:  mov    $0x0,%eax
0821506c +0x228:  jmp    082151b1 <+0x36d>
08215071 +0x22d:  mov    0xc(%ebp),%eax
08215074 +0x230:  mov    %eax,(%esp)
08215077 +0x233:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
0821507c +0x238:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08215081 +0x23d:  lea    -0x56(%ebp),%edx
08215084 +0x240:  mov    %edx,0x4(%esp)
08215088 +0x244:  mov    %eax,(%esp)
0821508b +0x247:  call   082f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
08215090 +0x24c:  mov    -0x3c(%ebp),%eax
08215093 +0x24f:  cmp    $0x1387,%eax
08215098 +0x254:  jle    082151ac <+0x368>
0821509e +0x25a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082150a3 +0x25f:  movl   $0xc529,0x8(%esp)
082150ab +0x267:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
082150b3 +0x26f:  mov    %eax,(%esp)
082150b6 +0x272:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082150bb +0x277:  movl   $0x1,0x8(%esp)
082150c3 +0x27f:  mov    %eax,0x4(%esp)
082150c7 +0x283:  lea    -0x2c(%ebp),%eax
082150ca +0x286:  mov    %eax,(%esp)
082150cd +0x289:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
082150d2 +0x28e:  lea    -0x2c(%ebp),%eax
082150d5 +0x291:  mov    %eax,(%esp)
082150d8 +0x294:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082150dd +0x299:  movl   $0x309,0x4(%esp)
082150e5 +0x2a1:  mov    %eax,(%esp)
082150e8 +0x2a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082150ed +0x2a9:  mov    0xc(%ebp),%eax
082150f0 +0x2ac:  mov    %eax,(%esp)
082150f3 +0x2af:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082150f8 +0x2b4:  mov    %eax,%ebx
082150fa +0x2b6:  lea    -0x2c(%ebp),%eax
082150fd +0x2b9:  mov    %eax,(%esp)
08215100 +0x2bc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08215105 +0x2c1:  mov    %ebx,0x4(%esp)
08215109 +0x2c5:  mov    %eax,(%esp)
0821510c +0x2c8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08215111 +0x2cd:  lea    -0x2c(%ebp),%eax
08215114 +0x2d0:  mov    %eax,(%esp)
08215117 +0x2d3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0821511c +0x2d8:  mov    %eax,(%esp)
0821511f +0x2db:  call   08237b96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd240
08215124 +0x2e0:  mov    %eax,-0xc(%ebp)
08215127 +0x2e3:  movl   $0x28,0x8(%esp)
0821512f +0x2eb:  movl   $0x0,0x4(%esp)
08215137 +0x2f3:  mov    -0xc(%ebp),%eax
0821513a +0x2f6:  mov    %eax,(%esp)
0821513d +0x2f9:  call   0807dcc0 <_init+0x5b8>
08215142 +0x2fe:  mov    -0x3c(%ebp),%edx
08215145 +0x301:  mov    -0xc(%ebp),%eax
08215148 +0x304:  mov    %edx,0x4(%eax)
0821514b +0x307:  mov    -0xc(%ebp),%eax
0821514e +0x30a:  lea    0x8(%eax),%edx
08215151 +0x30d:  movl   $0xd,0x8(%esp)
08215159 +0x315:  lea    -0x21(%ebp),%eax
0821515c +0x318:  mov    %eax,0x4(%esp)
08215160 +0x31c:  mov    %edx,(%esp)
08215163 +0x31f:  call   0807d8d0 <_init+0x1c8>
08215168 +0x324:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0821516d +0x329:  lea    -0x2c(%ebp),%edx
08215170 +0x32c:  mov    %edx,0x8(%esp)
08215174 +0x330:  movl   $0x2,0x4(%esp)
0821517c +0x338:  mov    %eax,(%esp)
0821517f +0x33b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08215184 +0x340:  jmp    082151a1 <+0x35d>
08215186 +0x342:  mov    %edx,%ebx
08215188 +0x344:  mov    %eax,%esi
0821518a +0x346:  lea    -0x2c(%ebp),%eax
0821518d +0x349:  mov    %eax,(%esp)
08215190 +0x34c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08215195 +0x351:  mov    %esi,%eax
08215197 +0x353:  mov    %ebx,%edx
08215199 +0x355:  mov    %eax,(%esp)
0821519c +0x358:  call   08ae3750 <_Unwind_Resume>
082151a1 +0x35d:  lea    -0x2c(%ebp),%eax
082151a4 +0x360:  mov    %eax,(%esp)
082151a7 +0x363:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082151ac +0x368:  mov    $0x0,%eax
082151b1 +0x36d:  add    $0x60,%esp
082151b4 +0x370:  pop    %ebx
082151b5 +0x371:  pop    %esi
082151b6 +0x372:  pop    %ebp
082151b7 +0x373:  ret
```

## 反编译 C

```c
// Dispatcher_AuctionBuyItemApiece::dispatch_sig @ 0x8214e44

/* Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionBuyItemApiece::dispatch_sig
          (Dispatcher_AuctionBuyItemApiece *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  PCK_AUCTION_BUY_ITEM_APIECE_GA local_5a [18];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  char acStack_3c [8];
  int iStack_34;
  CStreamGuard local_30 [11];
  char local_25 [13];
  int local_18;
  CInventory *local_14;
  SIG_AUCTION_MONEY_SUB *local_10;
  
  local_18 = CUser::AuctionPreCheck(param_1,0x14f,0);
  if (local_18 < 0) {
    PCK_AUCTION_BUY_ITEM_APIECE_GA::PCK_AUCTION_BUY_ITEM_APIECE_GA(local_5a);
    local_48 = CUser::GetUID(param_1);
    local_44 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar1 = PacketBuf::get_int(param_2,&local_40);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&iStack_34);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_binary(param_2,acStack_3c,8);
        if (cVar1 == '\x01') {
          local_25[0] = '\0';
          local_25[1] = '\0';
          local_25[2] = '\0';
          local_25[3] = '\0';
          local_25[4] = '\0';
          local_25[5] = '\0';
          local_25[6] = '\0';
          local_25[7] = '\0';
          local_25[8] = '\0';
          local_25[9] = '\0';
          local_25[10] = '\0';
          local_25[0xb] = '\0';
          local_25[0xc] = 0;
          cVar1 = PacketBuf::get_binary(param_2,local_25,0xd);
          if (cVar1 == '\x01') {
            iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
            if (iVar2 < local_40) {
              CUser::SendCmdErrorPacket(param_1,0xbc,0x90);
              local_18 = 0;
            }
            else {
              local_14 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              cVar1 = CInventory::use_money(local_14,local_40,0x1a,1);
              if (cVar1 == '\x01') {
                CUser::SaveMoneyCoin(param_1);
                CAuctionServerProxy::SendPacket
                          (GlobalData::s_auction_proxy,(PACKET_HEADER *)local_5a);
                if (4999 < local_40) {
                  pSVar3 = (Stream *)
                           StreamPool::Acquire(GlobalData::s_stream_pool,
                                               "PacketDispatcher_Impl_1.cpp",0xc529);
                  CStreamGuard::CStreamGuard(local_30,pSVar3,true);
                  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 082150e8 to 08215183 has its CatchHandler @ 08215186 */
                  CStreamGuard::operator<<(pCVar4,0x309);
                  iVar2 = CUser::GetUID(param_1);
                  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                  CStreamGuard::operator<<(pCVar4,iVar2);
                  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_30);
                  local_10 = CStreamGuard::GetInBuffer<SIG_AUCTION_MONEY_SUB>(pCVar4);
                  memset(local_10,0,0x28);
                  *(int *)(local_10 + 4) = local_40;
                  strncpy((char *)(local_10 + 8),local_25,0xd);
                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
                  CStreamGuard::~CStreamGuard(local_30);
                }
                local_18 = 0;
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0xbc,0x93);
                local_18 = 0;
              }
            }
          }
          else {
            local_18 = LineFunc(0xc508,
                                "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                                ,0,0);
          }
        }
        else {
          local_18 = LineFunc(0xc503,
                              "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                              ,0,0);
        }
      }
      else {
        local_18 = LineFunc(0xc502,
                            "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                            ,0,0);
      }
    }
    else {
      local_18 = LineFunc(0xc501,
                          "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
    }
  }
  return local_18;
}
```
