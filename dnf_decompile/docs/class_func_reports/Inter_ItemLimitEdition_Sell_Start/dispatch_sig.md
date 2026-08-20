# dispatch_sig

`_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci`

`Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ItemLimitEdition_Sell_Start` | `0x084db878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084db878  _ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci
#           Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser*, char*, int)
# range [0x084db878, 0x084dbbb1]
084db878 +0x000:  push   %ebp
084db879 +0x001:  mov    %esp,%ebp
084db87b +0x003:  push   %edi
084db87c +0x004:  push   %esi
084db87d +0x005:  push   %ebx
084db87e +0x006:  sub    $0x7c,%esp
084db881 +0x009:  mov    0x10(%ebp),%eax
084db884 +0x00c:  mov    %eax,-0x24(%ebp)
084db887 +0x00f:  mov    -0x24(%ebp),%eax
084db88a +0x012:  movzbl 0xa(%eax),%eax
084db88e +0x016:  test   %al,%al
084db890 +0x018:  je     084db96f <+0xf7>
084db896 +0x01e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db89b +0x023:  mov    %eax,(%esp)
084db89e +0x026:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084db8a3 +0x02b:  mov    %eax,(%esp)
084db8a6 +0x02e:  call   084e997c <_GLOBAL__I__Z7getUserj+0x92e>  ; global constructors keyed to getUser(unsigned int)+0x92e
084db8ab +0x033:  xor    $0x1,%eax
084db8ae +0x036:  test   %al,%al
084db8b0 +0x038:  je     084db95a <+0xe2>
084db8b6 +0x03e:  lea    -0x40(%ebp),%eax
084db8b9 +0x041:  mov    %eax,(%esp)
084db8bc +0x044:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084db8c1 +0x049:  movl   $0xe1,0x8(%esp)
084db8c9 +0x051:  movl   $0x0,0x4(%esp)
084db8d1 +0x059:  lea    -0x40(%ebp),%eax
084db8d4 +0x05c:  mov    %eax,(%esp)
084db8d7 +0x05f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084db8dc +0x064:  movl   $0x1,0x4(%esp)
084db8e4 +0x06c:  lea    -0x40(%ebp),%eax
084db8e7 +0x06f:  mov    %eax,(%esp)
084db8ea +0x072:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084db8ef +0x077:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db8f4 +0x07c:  mov    %eax,(%esp)
084db8f7 +0x07f:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084db8fc +0x084:  lea    -0x40(%ebp),%edx
084db8ff +0x087:  mov    %edx,0x4(%esp)
084db903 +0x08b:  mov    %eax,(%esp)
084db906 +0x08e:  call   08513382 <_ZNK20CItemLimitEditionMgr30makeItemLimitEditionRemoveInfoER11PacketGuard>  ; CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(PacketGuard&) const
084db90b +0x093:  movl   $0x1,0x4(%esp)
084db913 +0x09b:  lea    -0x40(%ebp),%eax
084db916 +0x09e:  mov    %eax,(%esp)
084db919 +0x0a1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084db91e +0x0a6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084db923 +0x0ab:  lea    -0x40(%ebp),%edx
084db926 +0x0ae:  mov    %edx,0x4(%esp)
084db92a +0x0b2:  mov    %eax,(%esp)
084db92d +0x0b5:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084db932 +0x0ba:  jmp    084db94f <+0xd7>
084db934 +0x0bc:  mov    %edx,%ebx
084db936 +0x0be:  mov    %eax,%esi
084db938 +0x0c0:  lea    -0x40(%ebp),%eax
084db93b +0x0c3:  mov    %eax,(%esp)
084db93e +0x0c6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db943 +0x0cb:  mov    %esi,%eax
084db945 +0x0cd:  mov    %ebx,%edx
084db947 +0x0cf:  mov    %eax,(%esp)
084db94a +0x0d2:  call   08ae3750 <_Unwind_Resume>
084db94f +0x0d7:  lea    -0x40(%ebp),%eax
084db952 +0x0da:  mov    %eax,(%esp)
084db955 +0x0dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db95a +0x0e2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db95f +0x0e7:  mov    %eax,(%esp)
084db962 +0x0ea:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084db967 +0x0ef:  mov    %eax,(%esp)
084db96a +0x0f2:  call   08374d4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xed1a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xed1a
084db96f +0x0f7:  movl   $0x0,-0x20(%ebp)
084db976 +0x0fe:  jmp    084dbadf <+0x267>
084db97b +0x103:  mov    -0x20(%ebp),%edx
084db97e +0x106:  mov    -0x24(%ebp),%ecx
084db981 +0x109:  mov    %edx,%eax
084db983 +0x10b:  shl    $0x3,%eax
084db986 +0x10e:  add    %edx,%eax
084db988 +0x110:  shl    $0x3,%eax
084db98b +0x113:  mov    0x13(%eax,%ecx,1),%eax
084db98f +0x117:  mov    %eax,%ebx
084db991 +0x119:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db996 +0x11e:  mov    %ebx,0x4(%esp)
084db99a +0x122:  mov    %eax,(%esp)
084db99d +0x125:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084db9a2 +0x12a:  mov    %eax,-0x1c(%ebp)
084db9a5 +0x12d:  cmpl   $0x0,-0x1c(%ebp)
084db9a9 +0x131:  jne    084db9c9 <+0x151>
084db9ab +0x133:  mov    -0x20(%ebp),%edx
084db9ae +0x136:  mov    -0x24(%ebp),%ecx
084db9b1 +0x139:  mov    %edx,%eax
084db9b3 +0x13b:  shl    $0x3,%eax
084db9b6 +0x13e:  add    %edx,%eax
084db9b8 +0x140:  shl    $0x3,%eax
084db9bb +0x143:  mov    0x13(%eax,%ecx,1),%eax
084db9bf +0x147:  cmp    $0x1,%eax
084db9c2 +0x14a:  je     084db9e3 <+0x16b>
084db9c4 +0x14c:  jmp    084dbadb <+0x263>
084db9c9 +0x151:  mov    -0x1c(%ebp),%eax
084db9cc +0x154:  mov    (%eax),%eax
084db9ce +0x156:  add    $0x10,%eax
084db9d1 +0x159:  mov    (%eax),%edx
084db9d3 +0x15b:  mov    -0x1c(%ebp),%eax
084db9d6 +0x15e:  mov    %eax,(%esp)
084db9d9 +0x161:  call   *%edx
084db9db +0x163:  test   %al,%al
084db9dd +0x165:  jne    084dbada <+0x262>
084db9e3 +0x16b:  mov    -0x20(%ebp),%edx
084db9e6 +0x16e:  mov    %edx,%eax
084db9e8 +0x170:  shl    $0x3,%eax
084db9eb +0x173:  add    %edx,%eax
084db9ed +0x175:  shl    $0x3,%eax
084db9f0 +0x178:  add    -0x24(%ebp),%eax
084db9f3 +0x17b:  lea    0xf(%eax),%ebx
084db9f6 +0x17e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db9fb +0x183:  mov    %eax,(%esp)
084db9fe +0x186:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dba03 +0x18b:  mov    %ebx,0x4(%esp)
084dba07 +0x18f:  mov    %eax,(%esp)
084dba0a +0x192:  call   084e975e <_GLOBAL__I__Z7getUserj+0x710>  ; global constructors keyed to getUser(unsigned int)+0x710
084dba0f +0x197:  mov    -0x20(%ebp),%edx
084dba12 +0x19a:  mov    -0x24(%ebp),%ecx
084dba15 +0x19d:  mov    %edx,%eax
084dba17 +0x19f:  shl    $0x3,%eax
084dba1a +0x1a2:  add    %edx,%eax
084dba1c +0x1a4:  shl    $0x3,%eax
084dba1f +0x1a7:  lea    (%ecx,%eax,1),%eax
084dba22 +0x1aa:  add    $0x20,%eax
084dba25 +0x1ad:  mov    0x17(%eax),%eax
084dba28 +0x1b0:  mov    %eax,-0x60(%ebp)
084dba2b +0x1b3:  mov    -0x20(%ebp),%edx
084dba2e +0x1b6:  mov    -0x24(%ebp),%ecx
084dba31 +0x1b9:  mov    %edx,%eax
084dba33 +0x1bb:  shl    $0x3,%eax
084dba36 +0x1be:  add    %edx,%eax
084dba38 +0x1c0:  shl    $0x3,%eax
084dba3b +0x1c3:  lea    (%ecx,%eax,1),%eax
084dba3e +0x1c6:  add    $0x10,%eax
084dba41 +0x1c9:  mov    0x1b(%eax),%eax
084dba44 +0x1cc:  mov    %eax,-0x5c(%ebp)
084dba47 +0x1cf:  mov    -0x20(%ebp),%edx
084dba4a +0x1d2:  mov    -0x24(%ebp),%ecx
084dba4d +0x1d5:  mov    %edx,%eax
084dba4f +0x1d7:  shl    $0x3,%eax
084dba52 +0x1da:  add    %edx,%eax
084dba54 +0x1dc:  shl    $0x3,%eax
084dba57 +0x1df:  lea    (%ecx,%eax,1),%eax
084dba5a +0x1e2:  add    $0x10,%eax
084dba5d +0x1e5:  mov    0x17(%eax),%edi
084dba60 +0x1e8:  mov    -0x20(%ebp),%edx
084dba63 +0x1eb:  mov    -0x24(%ebp),%ecx
084dba66 +0x1ee:  mov    %edx,%eax
084dba68 +0x1f0:  shl    $0x3,%eax
084dba6b +0x1f3:  add    %edx,%eax
084dba6d +0x1f5:  shl    $0x3,%eax
084dba70 +0x1f8:  mov    0x13(%eax,%ecx,1),%esi
084dba74 +0x1fc:  mov    -0x20(%ebp),%edx
084dba77 +0x1ff:  mov    -0x24(%ebp),%ecx
084dba7a +0x202:  mov    %edx,%eax
084dba7c +0x204:  shl    $0x3,%eax
084dba7f +0x207:  add    %edx,%eax
084dba81 +0x209:  shl    $0x3,%eax
084dba84 +0x20c:  mov    0xf(%eax,%ecx,1),%ebx
084dba88 +0x210:  movl   $0x0,0xc(%esp)
084dba90 +0x218:  movl   $0x4638,0x8(%esp)
084dba98 +0x220:  movl   $&_ZZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084dbaa0 +0x228:  lea    -0x34(%ebp),%eax
084dbaa3 +0x22b:  mov    %eax,(%esp)
084dbaa6 +0x22e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084dbaab +0x233:  mov    -0x60(%ebp),%eax
084dbaae +0x236:  mov    %eax,0x18(%esp)
084dbab2 +0x23a:  mov    -0x5c(%ebp),%eax
084dbab5 +0x23d:  mov    %eax,0x14(%esp)
084dbab9 +0x241:  mov    %edi,0x10(%esp)
084dbabd +0x245:  mov    %esi,0xc(%esp)
084dbac1 +0x249:  mov    %ebx,0x8(%esp)
084dbac5 +0x24d:  movl   $"ipg: %d, itemIdx: %d, totalCnt: %d/%d, sellEndTime: %d",0x4(%esp)
084dbacd +0x255:  lea    -0x34(%ebp),%eax
084dbad0 +0x258:  mov    %eax,(%esp)
084dbad3 +0x25b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084dbad8 +0x260:  jmp    084dbadb <+0x263>
084dbada +0x262:  nop
084dbadb +0x263:  addl   $0x1,-0x20(%ebp)
084dbadf +0x267:  mov    -0x24(%ebp),%eax
084dbae2 +0x26a:  mov    0xb(%eax),%eax
084dbae5 +0x26d:  cmp    -0x20(%ebp),%eax
084dbae8 +0x270:  seta   %al
084dbaeb +0x273:  test   %al,%al
084dbaed +0x275:  jne    084db97b <+0x103>
084dbaf3 +0x27b:  mov    -0x24(%ebp),%eax
084dbaf6 +0x27e:  mov    0xb(%eax),%eax
084dbaf9 +0x281:  test   %eax,%eax
084dbafb +0x283:  je     084dbba5 <+0x32d>
084dbb01 +0x289:  lea    -0x4c(%ebp),%eax
084dbb04 +0x28c:  mov    %eax,(%esp)
084dbb07 +0x28f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dbb0c +0x294:  movl   $0xe1,0x8(%esp)
084dbb14 +0x29c:  movl   $0x0,0x4(%esp)
084dbb1c +0x2a4:  lea    -0x4c(%ebp),%eax
084dbb1f +0x2a7:  mov    %eax,(%esp)
084dbb22 +0x2aa:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dbb27 +0x2af:  movl   $0x0,0x4(%esp)
084dbb2f +0x2b7:  lea    -0x4c(%ebp),%eax
084dbb32 +0x2ba:  mov    %eax,(%esp)
084dbb35 +0x2bd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dbb3a +0x2c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dbb3f +0x2c7:  mov    %eax,(%esp)
084dbb42 +0x2ca:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dbb47 +0x2cf:  lea    -0x4c(%ebp),%edx
084dbb4a +0x2d2:  mov    %edx,0x4(%esp)
084dbb4e +0x2d6:  mov    %eax,(%esp)
084dbb51 +0x2d9:  call   085132ca <_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard>  ; CItemLimitEditionMgr::makeItemLimitEditionInfo(PacketGuard&) const
084dbb56 +0x2de:  movl   $0x1,0x4(%esp)
084dbb5e +0x2e6:  lea    -0x4c(%ebp),%eax
084dbb61 +0x2e9:  mov    %eax,(%esp)
084dbb64 +0x2ec:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dbb69 +0x2f1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dbb6e +0x2f6:  lea    -0x4c(%ebp),%edx
084dbb71 +0x2f9:  mov    %edx,0x4(%esp)
084dbb75 +0x2fd:  mov    %eax,(%esp)
084dbb78 +0x300:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084dbb7d +0x305:  jmp    084dbb9a <+0x322>
084dbb7f +0x307:  mov    %edx,%ebx
084dbb81 +0x309:  mov    %eax,%esi
084dbb83 +0x30b:  lea    -0x4c(%ebp),%eax
084dbb86 +0x30e:  mov    %eax,(%esp)
084dbb89 +0x311:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dbb8e +0x316:  mov    %esi,%eax
084dbb90 +0x318:  mov    %ebx,%edx
084dbb92 +0x31a:  mov    %eax,(%esp)
084dbb95 +0x31d:  call   08ae3750 <_Unwind_Resume>
084dbb9a +0x322:  lea    -0x4c(%ebp),%eax
084dbb9d +0x325:  mov    %eax,(%esp)
084dbba0 +0x328:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dbba5 +0x32d:  mov    $0x0,%eax
084dbbaa +0x332:  add    $0x7c,%esp
084dbbad +0x335:  pop    %ebx
084dbbae +0x336:  pop    %esi
084dbbaf +0x337:  pop    %edi
084dbbb0 +0x338:  pop    %ebp
084dbbb1 +0x339:  ret
```

## 反编译 C

```c
// Inter_ItemLimitEdition_Sell_Start::dispatch_sig @ 0x84db878

/* Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  CDataManager *pCVar7;
  CItemLimitEditionMgr *pCVar8;
  GameWorld *pGVar9;
  int iVar10;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  cMyTrace local_38 [16];
  int local_28;
  uint local_24;
  int *local_20;
  
  local_28 = param_3;
  if (*(char *)(param_3 + 10) != '\0') {
    pCVar7 = (CDataManager *)G_CDataManager();
    pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
    cVar6 = CItemLimitEditionMgr::empty(pCVar8);
    if (cVar6 != '\x01') {
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 084db8d7 to 084db931 has its CatchHandler @ 084db934 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0xe1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
      pCVar7 = (CDataManager *)G_CDataManager();
      pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
      CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(pCVar8,local_44);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      pGVar9 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar9,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    pCVar7 = (CDataManager *)G_CDataManager();
    pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
    CItemLimitEditionMgr::clear(pCVar8);
  }
  local_24 = 0;
  do {
    if (*(uint *)(local_28 + 0xb) <= local_24) {
      if (*(int *)(local_28 + 0xb) != 0) {
        PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084dbb22 to 084dbb7c has its CatchHandler @ 084dbb7f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        pCVar7 = (CDataManager *)G_CDataManager();
        pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
        CItemLimitEditionMgr::makeItemLimitEditionInfo(pCVar8,local_50);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        pGVar9 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar9,local_50);
        PacketGuard::~PacketGuard(local_50);
      }
      return 0;
    }
    iVar10 = *(int *)(local_24 * 0x48 + 0x13 + local_28);
    pCVar7 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar7,iVar10);
    if (local_20 == (int *)0x0) {
      if (*(int *)(local_24 * 0x48 + 0x13 + local_28) == 1) {
LAB_084db9e3:
        iVar10 = local_24 * 0x48 + local_28;
        pCVar7 = (CDataManager *)G_CDataManager();
        pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
        CItemLimitEditionMgr::registItem(pCVar8,(stItemLimitEditionItemInfo_t *)(iVar10 + 0xf));
        uVar1 = *(undefined4 *)(local_28 + local_24 * 0x48 + 0x37);
        uVar2 = *(undefined4 *)(local_28 + local_24 * 0x48 + 0x2b);
        uVar3 = *(undefined4 *)(local_28 + local_24 * 0x48 + 0x27);
        uVar4 = *(undefined4 *)(local_24 * 0x48 + 0x13 + local_28);
        uVar5 = *(undefined4 *)(local_24 * 0x48 + 0xf + local_28);
        cMyTrace::cMyTrace(local_38,
                           "virtual int Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser*, char*, int)"
                           ,0x4638,0);
        cMyTrace::operator()
                  (local_38,"ipg: %d, itemIdx: %d, totalCnt: %d/%d, sellEndTime: %d",uVar5,uVar4,
                   uVar3,uVar2,uVar1);
      }
    }
    else {
      cVar6 = (**(code **)(*local_20 + 0x10))(local_20);
      if (cVar6 == '\0') goto LAB_084db9e3;
    }
    local_24 = local_24 + 1;
  } while( true );
}
```
