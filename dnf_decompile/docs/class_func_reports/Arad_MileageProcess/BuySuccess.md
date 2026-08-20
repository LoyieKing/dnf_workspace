# BuySuccess

`_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE`

`Arad_MileageProcess::BuySuccess(CUser*, int, int, int, int, int, int, std::vector<Inven_Item, std::allocator<Inven_Item> >&)`

| 类 | 地址 |
|---|---|
| `Arad_MileageProcess` | `0x0819e220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e220  _ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE
#           Arad_MileageProcess::BuySuccess(CUser*, int, int, int, int, int, int, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
# range [0x0819e220, 0x0819e50d]
0819e220 +0x000:  push   %ebp
0819e221 +0x001:  mov    %esp,%ebp
0819e223 +0x003:  push   %esi
0819e224 +0x004:  push   %ebx
0819e225 +0x005:  sub    $0x40,%esp
0819e228 +0x008:  mov    0x1c(%ebp),%eax
0819e22b +0x00b:  mov    %eax,0x4(%esp)
0819e22f +0x00f:  mov    0xc(%ebp),%eax
0819e232 +0x012:  mov    %eax,(%esp)
0819e235 +0x015:  call   08650a10 <_ZN5CUser10UseMileageEi>  ; CUser::UseMileage(int)
0819e23a +0x01a:  movl   $0xb,-0x10(%ebp)
0819e241 +0x021:  movb   $0x0,-0x9(%ebp)
0819e245 +0x025:  lea    -0x24(%ebp),%eax
0819e248 +0x028:  mov    %eax,(%esp)
0819e24b +0x02b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0819e250 +0x030:  movl   $0x43,0x8(%esp)
0819e258 +0x038:  movl   $0x1,0x4(%esp)
0819e260 +0x040:  lea    -0x24(%ebp),%eax
0819e263 +0x043:  mov    %eax,(%esp)
0819e266 +0x046:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819e26b +0x04b:  movl   $0x1,0x4(%esp)
0819e273 +0x053:  lea    -0x24(%ebp),%eax
0819e276 +0x056:  mov    %eax,(%esp)
0819e279 +0x059:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819e27e +0x05e:  movsbl -0x9(%ebp),%eax
0819e282 +0x062:  mov    %eax,0x4(%esp)
0819e286 +0x066:  lea    -0x24(%ebp),%eax
0819e289 +0x069:  mov    %eax,(%esp)
0819e28c +0x06c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819e291 +0x071:  mov    -0x10(%ebp),%eax
0819e294 +0x074:  mov    %eax,0x4(%esp)
0819e298 +0x078:  lea    -0x24(%ebp),%eax
0819e29b +0x07b:  mov    %eax,(%esp)
0819e29e +0x07e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e2a3 +0x083:  mov    0x10(%ebp),%eax
0819e2a6 +0x086:  mov    %eax,0x4(%esp)
0819e2aa +0x08a:  lea    -0x24(%ebp),%eax
0819e2ad +0x08d:  mov    %eax,(%esp)
0819e2b0 +0x090:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e2b5 +0x095:  mov    0x14(%ebp),%eax
0819e2b8 +0x098:  mov    %eax,0x4(%esp)
0819e2bc +0x09c:  lea    -0x24(%ebp),%eax
0819e2bf +0x09f:  mov    %eax,(%esp)
0819e2c2 +0x0a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e2c7 +0x0a7:  mov    0x20(%ebp),%eax
0819e2ca +0x0aa:  mov    %eax,0x4(%esp)
0819e2ce +0x0ae:  lea    -0x24(%ebp),%eax
0819e2d1 +0x0b1:  mov    %eax,(%esp)
0819e2d4 +0x0b4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e2d9 +0x0b9:  mov    0x18(%ebp),%eax
0819e2dc +0x0bc:  mov    %eax,0x4(%esp)
0819e2e0 +0x0c0:  lea    -0x24(%ebp),%eax
0819e2e3 +0x0c3:  mov    %eax,(%esp)
0819e2e6 +0x0c6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e2eb +0x0cb:  mov    0x28(%ebp),%eax
0819e2ee +0x0ce:  mov    %eax,(%esp)
0819e2f1 +0x0d1:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
0819e2f6 +0x0d6:  mov    %eax,0x4(%esp)
0819e2fa +0x0da:  lea    -0x24(%ebp),%eax
0819e2fd +0x0dd:  mov    %eax,(%esp)
0819e300 +0x0e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0819e305 +0x0e5:  lea    -0x18(%ebp),%eax
0819e308 +0x0e8:  mov    0x28(%ebp),%edx
0819e30b +0x0eb:  mov    %edx,0x4(%esp)
0819e30f +0x0ef:  mov    %eax,(%esp)
0819e312 +0x0f2:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
0819e317 +0x0f7:  sub    $0x4,%esp
0819e31a +0x0fa:  lea    -0x18(%ebp),%eax
0819e31d +0x0fd:  mov    %eax,0x4(%esp)
0819e321 +0x101:  lea    -0x28(%ebp),%eax
0819e324 +0x104:  mov    %eax,(%esp)
0819e327 +0x107:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
0819e32c +0x10c:  lea    -0x14(%ebp),%eax
0819e32f +0x10f:  mov    0x28(%ebp),%edx
0819e332 +0x112:  mov    %edx,0x4(%esp)
0819e336 +0x116:  mov    %eax,(%esp)
0819e339 +0x119:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0819e33e +0x11e:  sub    $0x4,%esp
0819e341 +0x121:  lea    -0x14(%ebp),%eax
0819e344 +0x124:  mov    %eax,0x4(%esp)
0819e348 +0x128:  lea    -0x2c(%ebp),%eax
0819e34b +0x12b:  mov    %eax,(%esp)
0819e34e +0x12e:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
0819e353 +0x133:  jmp    0819e39a <+0x17a>
0819e355 +0x135:  lea    -0x28(%ebp),%eax
0819e358 +0x138:  mov    %eax,(%esp)
0819e35b +0x13b:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
0819e360 +0x140:  mov    0x2(%eax),%eax
0819e363 +0x143:  mov    %eax,0x4(%esp)
0819e367 +0x147:  lea    -0x24(%ebp),%eax
0819e36a +0x14a:  mov    %eax,(%esp)
0819e36d +0x14d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e372 +0x152:  lea    -0x28(%ebp),%eax
0819e375 +0x155:  mov    %eax,(%esp)
0819e378 +0x158:  call   0817a67c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6fa
0819e37d +0x15d:  mov    0x7(%eax),%eax
0819e380 +0x160:  mov    %eax,0x4(%esp)
0819e384 +0x164:  lea    -0x24(%ebp),%eax
0819e387 +0x167:  mov    %eax,(%esp)
0819e38a +0x16a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e38f +0x16f:  lea    -0x28(%ebp),%eax
0819e392 +0x172:  mov    %eax,(%esp)
0819e395 +0x175:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
0819e39a +0x17a:  lea    -0x2c(%ebp),%eax
0819e39d +0x17d:  mov    %eax,0x4(%esp)
0819e3a1 +0x181:  lea    -0x28(%ebp),%eax
0819e3a4 +0x184:  mov    %eax,(%esp)
0819e3a7 +0x187:  call   08152b06 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x243b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x243b
0819e3ac +0x18c:  test   %al,%al
0819e3ae +0x18e:  jne    0819e355 <+0x135>
0819e3b0 +0x190:  mov    0x20(%ebp),%eax
0819e3b3 +0x193:  cmp    0x24(%ebp),%eax
0819e3b6 +0x196:  jne    0819e4b6 <+0x296>
0819e3bc +0x19c:  movl   $0x0,0x4(%esp)
0819e3c4 +0x1a4:  mov    0xc(%ebp),%eax
0819e3c7 +0x1a7:  mov    %eax,(%esp)
0819e3ca +0x1aa:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
0819e3cf +0x1af:  lea    -0x38(%ebp),%eax
0819e3d2 +0x1b2:  mov    %eax,(%esp)
0819e3d5 +0x1b5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0819e3da +0x1ba:  movl   $0xe,0x8(%esp)
0819e3e2 +0x1c2:  movl   $0x0,0x4(%esp)
0819e3ea +0x1ca:  lea    -0x38(%ebp),%eax
0819e3ed +0x1cd:  mov    %eax,(%esp)
0819e3f0 +0x1d0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819e3f5 +0x1d5:  movl   $0x0,0x4(%esp)
0819e3fd +0x1dd:  lea    -0x38(%ebp),%eax
0819e400 +0x1e0:  mov    %eax,(%esp)
0819e403 +0x1e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819e408 +0x1e8:  movl   $0x2,0x4(%esp)
0819e410 +0x1f0:  lea    -0x38(%ebp),%eax
0819e413 +0x1f3:  mov    %eax,(%esp)
0819e416 +0x1f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0819e41b +0x1fb:  mov    0xc(%ebp),%eax
0819e41e +0x1fe:  mov    %eax,(%esp)
0819e421 +0x201:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0819e426 +0x206:  lea    -0x38(%ebp),%edx
0819e429 +0x209:  mov    %edx,0xc(%esp)
0819e42d +0x20d:  movl   $0x0,0x8(%esp)
0819e435 +0x215:  movl   $0x1,0x4(%esp)
0819e43d +0x21d:  mov    %eax,(%esp)
0819e440 +0x220:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0819e445 +0x225:  mov    0xc(%ebp),%eax
0819e448 +0x228:  mov    %eax,(%esp)
0819e44b +0x22b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0819e450 +0x230:  lea    -0x38(%ebp),%edx
0819e453 +0x233:  mov    %edx,0xc(%esp)
0819e457 +0x237:  movl   $0x2,0x8(%esp)
0819e45f +0x23f:  movl   $0x1,0x4(%esp)
0819e467 +0x247:  mov    %eax,(%esp)
0819e46a +0x24a:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0819e46f +0x24f:  movl   $0x1,0x4(%esp)
0819e477 +0x257:  lea    -0x38(%ebp),%eax
0819e47a +0x25a:  mov    %eax,(%esp)
0819e47d +0x25d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0819e482 +0x262:  lea    -0x38(%ebp),%eax
0819e485 +0x265:  mov    %eax,0x4(%esp)
0819e489 +0x269:  mov    0xc(%ebp),%eax
0819e48c +0x26c:  mov    %eax,(%esp)
0819e48f +0x26f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0819e494 +0x274:  jmp    0819e4ab <+0x28b>
0819e496 +0x276:  mov    %edx,%ebx
0819e498 +0x278:  mov    %eax,%esi
0819e49a +0x27a:  lea    -0x38(%ebp),%eax
0819e49d +0x27d:  mov    %eax,(%esp)
0819e4a0 +0x280:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819e4a5 +0x285:  mov    %esi,%eax
0819e4a7 +0x287:  mov    %ebx,%edx
0819e4a9 +0x289:  jmp    0819e4dd <+0x2bd>
0819e4ab +0x28b:  lea    -0x38(%ebp),%eax
0819e4ae +0x28e:  mov    %eax,(%esp)
0819e4b1 +0x291:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819e4b6 +0x296:  movl   $0x1,0x4(%esp)
0819e4be +0x29e:  lea    -0x24(%ebp),%eax
0819e4c1 +0x2a1:  mov    %eax,(%esp)
0819e4c4 +0x2a4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0819e4c9 +0x2a9:  lea    -0x24(%ebp),%eax
0819e4cc +0x2ac:  mov    %eax,0x4(%esp)
0819e4d0 +0x2b0:  mov    0xc(%ebp),%eax
0819e4d3 +0x2b3:  mov    %eax,(%esp)
0819e4d6 +0x2b6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0819e4db +0x2bb:  jmp    0819e4f8 <+0x2d8>
0819e4dd +0x2bd:  mov    %edx,%ebx
0819e4df +0x2bf:  mov    %eax,%esi
0819e4e1 +0x2c1:  lea    -0x24(%ebp),%eax
0819e4e4 +0x2c4:  mov    %eax,(%esp)
0819e4e7 +0x2c7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819e4ec +0x2cc:  mov    %esi,%eax
0819e4ee +0x2ce:  mov    %ebx,%edx
0819e4f0 +0x2d0:  mov    %eax,(%esp)
0819e4f3 +0x2d3:  call   08ae3750 <_Unwind_Resume>
0819e4f8 +0x2d8:  lea    -0x24(%ebp),%eax
0819e4fb +0x2db:  mov    %eax,(%esp)
0819e4fe +0x2de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819e503 +0x2e3:  lea    -0x8(%ebp),%esp
0819e506 +0x2e6:  add    $0x0,%esp
0819e509 +0x2e9:  pop    %ebx
0819e50a +0x2ea:  pop    %esi
0819e50b +0x2eb:  pop    %ebp
0819e50c +0x2ec:  ret
0819e50d +0x2ed:  nop
```

## 反编译 C

```c
// Arad_MileageProcess::BuySuccess @ 0x819e220

/* Arad_MileageProcess::BuySuccess(CUser*, int, int, int, int, int, int, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) */

void __thiscall
Arad_MileageProcess::BuySuccess
          (Arad_MileageProcess *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,vector *param_8)

{
  bool bVar1;
  int iVar2;
  CInventory *pCVar3;
  PacketGuard local_3c [12];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_30 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_2c [4];
  PacketGuard local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  char local_d;
  
  CUser::UseMileage(param_1,param_5);
  local_14 = 0xb;
  local_d = '\0';
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0819e266 to 0819e3d9 has its CatchHandler @ 0819e4dd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x43);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)local_d);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_6);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_4);
  iVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar2);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_2c,local_1c);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_30,local_18);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_2c,local_30);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
            ::operator->(local_2c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(iVar2 + 2));
    iVar2 = __gnu_cxx::
            __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
            ::operator->(local_2c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(iVar2 + 7));
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_2c);
  }
  if (param_6 == param_7) {
    CUser::SendCashData(param_1,false);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0819e3f0 to 0819e493 has its CatchHandler @ 0819e496 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,2);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar3,1,0,local_3c);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar3,1,2,local_3c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
                    /* try { // try from 0819e4b1 to 0819e4da has its CatchHandler @ 0819e4dd */
    PacketGuard::~PacketGuard(local_3c);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
