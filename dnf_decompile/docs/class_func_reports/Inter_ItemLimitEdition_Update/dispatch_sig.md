# dispatch_sig

`_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci`

`Inter_ItemLimitEdition_Update::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ItemLimitEdition_Update` | `0x084dbd16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dbd16  _ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci
#           Inter_ItemLimitEdition_Update::dispatch_sig(CUser*, char*, int)
# range [0x084dbd16, 0x084dbeef]
084dbd16 +0x000:  push   %ebp
084dbd17 +0x001:  mov    %esp,%ebp
084dbd19 +0x003:  push   %esi
084dbd1a +0x004:  push   %ebx
084dbd1b +0x005:  sub    $0x30,%esp
084dbd1e +0x008:  mov    0x10(%ebp),%eax
084dbd21 +0x00b:  mov    %eax,-0x18(%ebp)
084dbd24 +0x00e:  lea    -0x24(%ebp),%eax
084dbd27 +0x011:  mov    %eax,(%esp)
084dbd2a +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dbd2f +0x019:  movl   $0xe1,0x8(%esp)
084dbd37 +0x021:  movl   $0x0,0x4(%esp)
084dbd3f +0x029:  lea    -0x24(%ebp),%eax
084dbd42 +0x02c:  mov    %eax,(%esp)
084dbd45 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dbd4a +0x034:  movl   $0x0,0x4(%esp)
084dbd52 +0x03c:  lea    -0x24(%ebp),%eax
084dbd55 +0x03f:  mov    %eax,(%esp)
084dbd58 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dbd5d +0x047:  lea    -0x24(%ebp),%eax
084dbd60 +0x04a:  mov    %eax,(%esp)
084dbd63 +0x04d:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084dbd68 +0x052:  mov    %eax,-0x28(%ebp)
084dbd6b +0x055:  movl   $0x0,-0x14(%ebp)
084dbd72 +0x05c:  movl   $0x0,0x4(%esp)
084dbd7a +0x064:  lea    -0x24(%ebp),%eax
084dbd7d +0x067:  mov    %eax,(%esp)
084dbd80 +0x06a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dbd85 +0x06f:  movl   $0x0,-0x10(%ebp)
084dbd8c +0x076:  jmp    084dbe58 <+0x142>
084dbd91 +0x07b:  mov    -0x10(%ebp),%edx
084dbd94 +0x07e:  mov    -0x18(%ebp),%ecx
084dbd97 +0x081:  mov    %edx,%eax
084dbd99 +0x083:  shl    $0x3,%eax
084dbd9c +0x086:  add    %edx,%eax
084dbd9e +0x088:  lea    (%ecx,%eax,1),%eax
084dbda1 +0x08b:  add    $0x10,%eax
084dbda4 +0x08e:  mov    0x2(%eax),%ebx
084dbda7 +0x091:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dbdac +0x096:  mov    %eax,(%esp)
084dbdaf +0x099:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dbdb4 +0x09e:  mov    %ebx,0x4(%esp)
084dbdb8 +0x0a2:  mov    %eax,(%esp)
084dbdbb +0x0a5:  call   0817a0a8 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x126>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x126
084dbdc0 +0x0aa:  mov    %eax,-0xc(%ebp)
084dbdc3 +0x0ad:  cmpl   $0x0,-0xc(%ebp)
084dbdc7 +0x0b1:  je     084dbdd8 <+0xc2>
084dbdc9 +0x0b3:  mov    -0xc(%ebp),%eax
084dbdcc +0x0b6:  mov    %eax,(%esp)
084dbdcf +0x0b9:  call   0822cac8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2172>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2172
084dbdd4 +0x0be:  test   %al,%al
084dbdd6 +0x0c0:  je     084dbddf <+0xc9>
084dbdd8 +0x0c2:  mov    $0x1,%eax
084dbddd +0x0c7:  jmp    084dbde4 <+0xce>
084dbddf +0x0c9:  mov    $0x0,%eax
084dbde4 +0x0ce:  test   %al,%al
084dbde6 +0x0d0:  jne    084dbe50 <+0x13a>
084dbde8 +0x0d2:  mov    -0x10(%ebp),%edx
084dbdeb +0x0d5:  mov    -0x18(%ebp),%ecx
084dbdee +0x0d8:  mov    %edx,%eax
084dbdf0 +0x0da:  shl    $0x3,%eax
084dbdf3 +0x0dd:  add    %edx,%eax
084dbdf5 +0x0df:  lea    (%ecx,%eax,1),%eax
084dbdf8 +0x0e2:  add    $0x10,%eax
084dbdfb +0x0e5:  mov    0x6(%eax),%esi
084dbdfe +0x0e8:  mov    -0x10(%ebp),%edx
084dbe01 +0x0eb:  mov    -0x18(%ebp),%ecx
084dbe04 +0x0ee:  mov    %edx,%eax
084dbe06 +0x0f0:  shl    $0x3,%eax
084dbe09 +0x0f3:  add    %edx,%eax
084dbe0b +0x0f5:  lea    (%ecx,%eax,1),%eax
084dbe0e +0x0f8:  add    $0x10,%eax
084dbe11 +0x0fb:  mov    0x2(%eax),%ebx
084dbe14 +0x0fe:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dbe19 +0x103:  mov    %eax,(%esp)
084dbe1c +0x106:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dbe21 +0x10b:  mov    %esi,0x8(%esp)
084dbe25 +0x10f:  mov    %ebx,0x4(%esp)
084dbe29 +0x113:  mov    %eax,(%esp)
084dbe2c +0x116:  call   084e9904 <_GLOBAL__I__Z7getUserj+0x8b6>  ; global constructors keyed to getUser(unsigned int)+0x8b6
084dbe31 +0x11b:  xor    $0x1,%eax
084dbe34 +0x11e:  test   %al,%al
084dbe36 +0x120:  jne    084dbe53 <+0x13d>
084dbe38 +0x122:  lea    -0x24(%ebp),%eax
084dbe3b +0x125:  mov    %eax,0x4(%esp)
084dbe3f +0x129:  mov    -0xc(%ebp),%eax
084dbe42 +0x12c:  mov    %eax,(%esp)
084dbe45 +0x12f:  call   085130e8 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard>  ; CItemLimitEdition::makeInfoPacket(PacketGuard&) const
084dbe4a +0x134:  addl   $0x1,-0x14(%ebp)
084dbe4e +0x138:  jmp    084dbe54 <+0x13e>
084dbe50 +0x13a:  nop
084dbe51 +0x13b:  jmp    084dbe54 <+0x13e>
084dbe53 +0x13d:  nop
084dbe54 +0x13e:  addl   $0x1,-0x10(%ebp)
084dbe58 +0x142:  mov    -0x18(%ebp),%eax
084dbe5b +0x145:  mov    0xe(%eax),%eax
084dbe5e +0x148:  cmp    -0x10(%ebp),%eax
084dbe61 +0x14b:  seta   %al
084dbe64 +0x14e:  test   %al,%al
084dbe66 +0x150:  jne    084dbd91 <+0x7b>
084dbe6c +0x156:  cmpl   $0x0,-0x14(%ebp)
084dbe70 +0x15a:  jne    084dbe79 <+0x163>
084dbe72 +0x15c:  mov    $0x0,%ebx
084dbe77 +0x161:  jmp    084dbedb <+0x1c5>
084dbe79 +0x163:  mov    -0x14(%ebp),%eax
084dbe7c +0x166:  mov    %eax,0x8(%esp)
084dbe80 +0x16a:  lea    -0x28(%ebp),%eax
084dbe83 +0x16d:  mov    %eax,0x4(%esp)
084dbe87 +0x171:  lea    -0x24(%ebp),%eax
084dbe8a +0x174:  mov    %eax,(%esp)
084dbe8d +0x177:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084dbe92 +0x17c:  movl   $0x1,0x4(%esp)
084dbe9a +0x184:  lea    -0x24(%ebp),%eax
084dbe9d +0x187:  mov    %eax,(%esp)
084dbea0 +0x18a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dbea5 +0x18f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dbeaa +0x194:  lea    -0x24(%ebp),%edx
084dbead +0x197:  mov    %edx,0x4(%esp)
084dbeb1 +0x19b:  mov    %eax,(%esp)
084dbeb4 +0x19e:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084dbeb9 +0x1a3:  mov    $0x0,%ebx
084dbebe +0x1a8:  jmp    084dbedb <+0x1c5>
084dbec0 +0x1aa:  mov    %edx,%ebx
084dbec2 +0x1ac:  mov    %eax,%esi
084dbec4 +0x1ae:  lea    -0x24(%ebp),%eax
084dbec7 +0x1b1:  mov    %eax,(%esp)
084dbeca +0x1b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dbecf +0x1b9:  mov    %esi,%eax
084dbed1 +0x1bb:  mov    %ebx,%edx
084dbed3 +0x1bd:  mov    %eax,(%esp)
084dbed6 +0x1c0:  call   08ae3750 <_Unwind_Resume>
084dbedb +0x1c5:  lea    -0x24(%ebp),%eax
084dbede +0x1c8:  mov    %eax,(%esp)
084dbee1 +0x1cb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dbee6 +0x1d0:  mov    %ebx,%eax
084dbee8 +0x1d2:  add    $0x30,%esp
084dbeeb +0x1d5:  pop    %ebx
084dbeec +0x1d6:  pop    %esi
084dbeed +0x1d7:  pop    %ebp
084dbeee +0x1d8:  ret
084dbeef +0x1d9:  nop
```

## 反编译 C

```c
// Inter_ItemLimitEdition_Update::dispatch_sig @ 0x84dbd16

/* Inter_ItemLimitEdition_Update::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Update::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *pCVar4;
  uint uVar5;
  CItemLimitEditionMgr *this;
  GameWorld *this_00;
  int local_2c;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  uint local_14;
  CItemLimitEdition *local_10;
  
  local_1c = param_3;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dbd45 to 084dbeb8 has its CatchHandler @ 084dbec0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xe1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
  local_18 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  for (local_14 = 0; local_14 < *(uint *)(local_1c + 0xe); local_14 = local_14 + 1) {
    pCVar4 = (CDataManager *)G_CDataManager();
    uVar5 = CDataManager::getItemLimitEditionMgr(pCVar4);
    local_10 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar5);
    if ((local_10 == (CItemLimitEdition *)0x0) ||
       (cVar3 = CItemLimitEdition::isSellComplete(local_10), cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      uVar5 = *(uint *)(local_1c + local_14 * 9 + 0x16);
      uVar1 = *(uint *)(local_1c + local_14 * 9 + 0x12);
      pCVar4 = (CDataManager *)G_CDataManager();
      this = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar4);
      cVar3 = CItemLimitEditionMgr::updateItem(this,uVar1,uVar5);
      if (cVar3 == '\x01') {
        CItemLimitEdition::makeInfoPacket(local_10,local_28);
        local_18 = local_18 + 1;
      }
    }
  }
  if (local_18 != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_18);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
  return 0;
}
```
