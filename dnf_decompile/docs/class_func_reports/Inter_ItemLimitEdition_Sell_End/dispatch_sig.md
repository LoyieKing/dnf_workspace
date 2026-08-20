# dispatch_sig

`_ZN31Inter_ItemLimitEdition_Sell_End12dispatch_sigEP5CUserPci`

`Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ItemLimitEdition_Sell_End` | `0x084dbbb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dbbb2  _ZN31Inter_ItemLimitEdition_Sell_End12dispatch_sigEP5CUserPci
#           Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser*, char*, int)
# range [0x084dbbb2, 0x084dbd11]
084dbbb2 +0x000:  push   %ebp
084dbbb3 +0x001:  mov    %esp,%ebp
084dbbb5 +0x003:  push   %esi
084dbbb6 +0x004:  push   %ebx
084dbbb7 +0x005:  sub    $0x40,%esp
084dbbba +0x008:  mov    0x10(%ebp),%eax
084dbbbd +0x00b:  mov    %eax,-0x10(%ebp)
084dbbc0 +0x00e:  lea    -0x2c(%ebp),%eax
084dbbc3 +0x011:  mov    %eax,(%esp)
084dbbc6 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dbbcb +0x019:  movl   $0xe1,0x8(%esp)
084dbbd3 +0x021:  movl   $0x0,0x4(%esp)
084dbbdb +0x029:  lea    -0x2c(%ebp),%eax
084dbbde +0x02c:  mov    %eax,(%esp)
084dbbe1 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dbbe6 +0x034:  movl   $0x1,0x4(%esp)
084dbbee +0x03c:  lea    -0x2c(%ebp),%eax
084dbbf1 +0x03f:  mov    %eax,(%esp)
084dbbf4 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dbbf9 +0x047:  mov    -0x10(%ebp),%eax
084dbbfc +0x04a:  mov    0xe(%eax),%eax
084dbbff +0x04d:  mov    %eax,0x4(%esp)
084dbc03 +0x051:  lea    -0x2c(%ebp),%eax
084dbc06 +0x054:  mov    %eax,(%esp)
084dbc09 +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dbc0e +0x05c:  movl   $0x0,-0xc(%ebp)
084dbc15 +0x063:  jmp    084dbca7 <+0xf5>
084dbc1a +0x068:  mov    -0xc(%ebp),%edx
084dbc1d +0x06b:  mov    -0x10(%ebp),%eax
084dbc20 +0x06e:  add    $0x4,%edx
084dbc23 +0x071:  mov    0x2(%eax,%edx,4),%ebx
084dbc27 +0x075:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084dbc2c +0x07a:  mov    %eax,(%esp)
084dbc2f +0x07d:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084dbc34 +0x082:  mov    %ebx,0x4(%esp)
084dbc38 +0x086:  mov    %eax,(%esp)
084dbc3b +0x089:  call   084e9876 <_GLOBAL__I__Z7getUserj+0x828>  ; global constructors keyed to getUser(unsigned int)+0x828
084dbc40 +0x08e:  mov    -0xc(%ebp),%edx
084dbc43 +0x091:  mov    -0x10(%ebp),%eax
084dbc46 +0x094:  add    $0x4,%edx
084dbc49 +0x097:  mov    0x2(%eax,%edx,4),%ebx
084dbc4d +0x09b:  movl   $0x0,0xc(%esp)
084dbc55 +0x0a3:  movl   $0x465a,0x8(%esp)
084dbc5d +0x0ab:  movl   $&_ZZN31Inter_ItemLimitEdition_Sell_End12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084dbc65 +0x0b3:  lea    -0x20(%ebp),%eax
084dbc68 +0x0b6:  mov    %eax,(%esp)
084dbc6b +0x0b9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084dbc70 +0x0be:  mov    %ebx,0x8(%esp)
084dbc74 +0x0c2:  movl   $"ipg: %d",0x4(%esp)
084dbc7c +0x0ca:  lea    -0x20(%ebp),%eax
084dbc7f +0x0cd:  mov    %eax,(%esp)
084dbc82 +0x0d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084dbc87 +0x0d5:  mov    -0xc(%ebp),%edx
084dbc8a +0x0d8:  mov    -0x10(%ebp),%eax
084dbc8d +0x0db:  add    $0x4,%edx
084dbc90 +0x0de:  mov    0x2(%eax,%edx,4),%eax
084dbc94 +0x0e2:  mov    %eax,0x4(%esp)
084dbc98 +0x0e6:  lea    -0x2c(%ebp),%eax
084dbc9b +0x0e9:  mov    %eax,(%esp)
084dbc9e +0x0ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084dbca3 +0x0f1:  addl   $0x1,-0xc(%ebp)
084dbca7 +0x0f5:  mov    -0x10(%ebp),%eax
084dbcaa +0x0f8:  mov    0xe(%eax),%eax
084dbcad +0x0fb:  cmp    -0xc(%ebp),%eax
084dbcb0 +0x0fe:  seta   %al
084dbcb3 +0x101:  test   %al,%al
084dbcb5 +0x103:  jne    084dbc1a <+0x68>
084dbcbb +0x109:  movl   $0x1,0x4(%esp)
084dbcc3 +0x111:  lea    -0x2c(%ebp),%eax
084dbcc6 +0x114:  mov    %eax,(%esp)
084dbcc9 +0x117:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dbcce +0x11c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dbcd3 +0x121:  lea    -0x2c(%ebp),%edx
084dbcd6 +0x124:  mov    %edx,0x4(%esp)
084dbcda +0x128:  mov    %eax,(%esp)
084dbcdd +0x12b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084dbce2 +0x130:  mov    $0x0,%ebx
084dbce7 +0x135:  lea    -0x2c(%ebp),%eax
084dbcea +0x138:  mov    %eax,(%esp)
084dbced +0x13b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dbcf2 +0x140:  mov    %ebx,%eax
084dbcf4 +0x142:  add    $0x40,%esp
084dbcf7 +0x145:  pop    %ebx
084dbcf8 +0x146:  pop    %esi
084dbcf9 +0x147:  pop    %ebp
084dbcfa +0x148:  ret
084dbcfb +0x149:  mov    %edx,%ebx
084dbcfd +0x14b:  mov    %eax,%esi
084dbcff +0x14d:  lea    -0x2c(%ebp),%eax
084dbd02 +0x150:  mov    %eax,(%esp)
084dbd05 +0x153:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dbd0a +0x158:  mov    %esi,%eax
084dbd0c +0x15a:  mov    %ebx,%edx
084dbd0e +0x15c:  mov    %eax,(%esp)
084dbd11 +0x15f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_ItemLimitEdition_Sell_End::dispatch_sig @ 0x84dbbb2

/* Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CDataManager *this;
  uint uVar2;
  GameWorld *this_00;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084dbbe1 to 084dbce1 has its CatchHandler @ 084dbcfb */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_14 + 0xe));
  for (local_10 = 0; local_10 < *(uint *)(local_14 + 0xe); local_10 = local_10 + 1) {
    this = (CDataManager *)G_CDataManager();
    uVar2 = CDataManager::getItemLimitEditionMgr(this);
    CItemLimitEditionMgr::removeItem(uVar2);
    uVar1 = *(undefined4 *)(local_14 + 2 + (local_10 + 4) * 4);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser*, char*, int)"
                       ,0x465a,0);
    cMyTrace::operator()(local_24,"ipg: %d",uVar1);
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_30,*(int *)(local_14 + 2 + (local_10 + 4) * 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_30);
  PacketGuard::~PacketGuard(local_30);
  return 0;
}
```
