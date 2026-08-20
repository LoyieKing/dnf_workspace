# GetSellItemPrice

`_ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_`

`Store::GetSellItemPrice(CUser*, char, short, short, bool, int&, int&)`

| 类 | 地址 |
|---|---|
| `Store` | `0x08619008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08619008  _ZN5Store16GetSellItemPriceEP5CUsercssbRiS2_
#           Store::GetSellItemPrice(CUser*, char, short, short, bool, int&, int&)
# range [0x08619008, 0x086193f7]
08619008 +0x000:  push   %ebp
08619009 +0x001:  mov    %esp,%ebp
0861900b +0x003:  push   %ebx
0861900c +0x004:  sub    $0xc4,%esp
08619012 +0x00a:  mov    0x10(%ebp),%ebx
08619015 +0x00d:  mov    0x14(%ebp),%ecx
08619018 +0x010:  mov    0x18(%ebp),%edx
0861901b +0x013:  mov    0x1c(%ebp),%eax
0861901e +0x016:  mov    %bl,-0x5c(%ebp)
08619021 +0x019:  mov    %cx,-0x60(%ebp)
08619025 +0x01d:  mov    %dx,-0x64(%ebp)
08619029 +0x021:  mov    %al,-0x68(%ebp)
0861902c +0x024:  lea    -0x49(%ebp),%eax
0861902f +0x027:  mov    %eax,(%esp)
08619032 +0x02a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08619037 +0x02f:  movsbl -0x5c(%ebp),%eax
0861903b +0x033:  cmp    $0x2,%eax
0861903e +0x036:  je     0861911d <+0x115>
08619044 +0x03c:  cmp    $0x2,%eax
08619047 +0x03f:  jg     08619052 <+0x4a>
08619049 +0x041:  test   %eax,%eax
0861904b +0x043:  je     08619069 <+0x61>
0861904d +0x045:  jmp    0861933e <+0x336>
08619052 +0x04a:  cmp    $0x3,%eax
08619055 +0x04d:  je     086191c9 <+0x1c1>
0861905b +0x053:  cmp    $0x7,%eax
0861905e +0x056:  je     0861927d <+0x275>
08619064 +0x05c:  jmp    0861933e <+0x336>
08619069 +0x061:  movswl -0x60(%ebp),%ebx
0861906d +0x065:  mov    0xc(%ebp),%eax
08619070 +0x068:  mov    %eax,(%esp)
08619073 +0x06b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08619078 +0x070:  lea    -0xa8(%ebp),%edx
0861907e +0x076:  mov    %ebx,0xc(%esp)
08619082 +0x07a:  movl   $0x1,0x8(%esp)
0861908a +0x082:  mov    %eax,0x4(%esp)
0861908e +0x086:  mov    %edx,(%esp)
08619091 +0x089:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08619096 +0x08e:  sub    $0x4,%esp
08619099 +0x091:  mov    -0xa8(%ebp),%eax
0861909f +0x097:  mov    %eax,-0x49(%ebp)
086190a2 +0x09a:  mov    -0xa4(%ebp),%eax
086190a8 +0x0a0:  mov    %eax,-0x45(%ebp)
086190ab +0x0a3:  mov    -0xa0(%ebp),%eax
086190b1 +0x0a9:  mov    %eax,-0x41(%ebp)
086190b4 +0x0ac:  mov    -0x9c(%ebp),%eax
086190ba +0x0b2:  mov    %eax,-0x3d(%ebp)
086190bd +0x0b5:  mov    -0x98(%ebp),%eax
086190c3 +0x0bb:  mov    %eax,-0x39(%ebp)
086190c6 +0x0be:  mov    -0x94(%ebp),%eax
086190cc +0x0c4:  mov    %eax,-0x35(%ebp)
086190cf +0x0c7:  mov    -0x90(%ebp),%eax
086190d5 +0x0cd:  mov    %eax,-0x31(%ebp)
086190d8 +0x0d0:  mov    -0x8c(%ebp),%eax
086190de +0x0d6:  mov    %eax,-0x2d(%ebp)
086190e1 +0x0d9:  mov    -0x88(%ebp),%eax
086190e7 +0x0df:  mov    %eax,-0x29(%ebp)
086190ea +0x0e2:  mov    -0x84(%ebp),%eax
086190f0 +0x0e8:  mov    %eax,-0x25(%ebp)
086190f3 +0x0eb:  mov    -0x80(%ebp),%eax
086190f6 +0x0ee:  mov    %eax,-0x21(%ebp)
086190f9 +0x0f1:  mov    -0x7c(%ebp),%eax
086190fc +0x0f4:  mov    %eax,-0x1d(%ebp)
086190ff +0x0f7:  mov    -0x78(%ebp),%eax
08619102 +0x0fa:  mov    %eax,-0x19(%ebp)
08619105 +0x0fd:  mov    -0x74(%ebp),%eax
08619108 +0x100:  mov    %eax,-0x15(%ebp)
0861910b +0x103:  mov    -0x70(%ebp),%eax
0861910e +0x106:  mov    %eax,-0x11(%ebp)
08619111 +0x109:  movzbl -0x6c(%ebp),%eax
08619115 +0x10d:  mov    %al,-0xd(%ebp)
08619118 +0x110:  jmp    08619349 <+0x341>
0861911d +0x115:  movswl -0x60(%ebp),%ebx
08619121 +0x119:  mov    0xc(%ebp),%eax
08619124 +0x11c:  mov    %eax,(%esp)
08619127 +0x11f:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0861912c +0x124:  lea    -0xa8(%ebp),%edx
08619132 +0x12a:  mov    %ebx,0x8(%esp)
08619136 +0x12e:  mov    %eax,0x4(%esp)
0861913a +0x132:  mov    %edx,(%esp)
0861913d +0x135:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
08619142 +0x13a:  sub    $0x4,%esp
08619145 +0x13d:  mov    -0xa8(%ebp),%eax
0861914b +0x143:  mov    %eax,-0x49(%ebp)
0861914e +0x146:  mov    -0xa4(%ebp),%eax
08619154 +0x14c:  mov    %eax,-0x45(%ebp)
08619157 +0x14f:  mov    -0xa0(%ebp),%eax
0861915d +0x155:  mov    %eax,-0x41(%ebp)
08619160 +0x158:  mov    -0x9c(%ebp),%eax
08619166 +0x15e:  mov    %eax,-0x3d(%ebp)
08619169 +0x161:  mov    -0x98(%ebp),%eax
0861916f +0x167:  mov    %eax,-0x39(%ebp)
08619172 +0x16a:  mov    -0x94(%ebp),%eax
08619178 +0x170:  mov    %eax,-0x35(%ebp)
0861917b +0x173:  mov    -0x90(%ebp),%eax
08619181 +0x179:  mov    %eax,-0x31(%ebp)
08619184 +0x17c:  mov    -0x8c(%ebp),%eax
0861918a +0x182:  mov    %eax,-0x2d(%ebp)
0861918d +0x185:  mov    -0x88(%ebp),%eax
08619193 +0x18b:  mov    %eax,-0x29(%ebp)
08619196 +0x18e:  mov    -0x84(%ebp),%eax
0861919c +0x194:  mov    %eax,-0x25(%ebp)
0861919f +0x197:  mov    -0x80(%ebp),%eax
086191a2 +0x19a:  mov    %eax,-0x21(%ebp)
086191a5 +0x19d:  mov    -0x7c(%ebp),%eax
086191a8 +0x1a0:  mov    %eax,-0x1d(%ebp)
086191ab +0x1a3:  mov    -0x78(%ebp),%eax
086191ae +0x1a6:  mov    %eax,-0x19(%ebp)
086191b1 +0x1a9:  mov    -0x74(%ebp),%eax
086191b4 +0x1ac:  mov    %eax,-0x15(%ebp)
086191b7 +0x1af:  mov    -0x70(%ebp),%eax
086191ba +0x1b2:  mov    %eax,-0x11(%ebp)
086191bd +0x1b5:  movzbl -0x6c(%ebp),%eax
086191c1 +0x1b9:  mov    %al,-0xd(%ebp)
086191c4 +0x1bc:  jmp    08619349 <+0x341>
086191c9 +0x1c1:  movswl -0x60(%ebp),%ebx
086191cd +0x1c5:  mov    0xc(%ebp),%eax
086191d0 +0x1c8:  mov    %eax,(%esp)
086191d3 +0x1cb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086191d8 +0x1d0:  lea    -0xa8(%ebp),%edx
086191de +0x1d6:  mov    %ebx,0xc(%esp)
086191e2 +0x1da:  movl   $0x0,0x8(%esp)
086191ea +0x1e2:  mov    %eax,0x4(%esp)
086191ee +0x1e6:  mov    %edx,(%esp)
086191f1 +0x1e9:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086191f6 +0x1ee:  sub    $0x4,%esp
086191f9 +0x1f1:  mov    -0xa8(%ebp),%eax
086191ff +0x1f7:  mov    %eax,-0x49(%ebp)
08619202 +0x1fa:  mov    -0xa4(%ebp),%eax
08619208 +0x200:  mov    %eax,-0x45(%ebp)
0861920b +0x203:  mov    -0xa0(%ebp),%eax
08619211 +0x209:  mov    %eax,-0x41(%ebp)
08619214 +0x20c:  mov    -0x9c(%ebp),%eax
0861921a +0x212:  mov    %eax,-0x3d(%ebp)
0861921d +0x215:  mov    -0x98(%ebp),%eax
08619223 +0x21b:  mov    %eax,-0x39(%ebp)
08619226 +0x21e:  mov    -0x94(%ebp),%eax
0861922c +0x224:  mov    %eax,-0x35(%ebp)
0861922f +0x227:  mov    -0x90(%ebp),%eax
08619235 +0x22d:  mov    %eax,-0x31(%ebp)
08619238 +0x230:  mov    -0x8c(%ebp),%eax
0861923e +0x236:  mov    %eax,-0x2d(%ebp)
08619241 +0x239:  mov    -0x88(%ebp),%eax
08619247 +0x23f:  mov    %eax,-0x29(%ebp)
0861924a +0x242:  mov    -0x84(%ebp),%eax
08619250 +0x248:  mov    %eax,-0x25(%ebp)
08619253 +0x24b:  mov    -0x80(%ebp),%eax
08619256 +0x24e:  mov    %eax,-0x21(%ebp)
08619259 +0x251:  mov    -0x7c(%ebp),%eax
0861925c +0x254:  mov    %eax,-0x1d(%ebp)
0861925f +0x257:  mov    -0x78(%ebp),%eax
08619262 +0x25a:  mov    %eax,-0x19(%ebp)
08619265 +0x25d:  mov    -0x74(%ebp),%eax
08619268 +0x260:  mov    %eax,-0x15(%ebp)
0861926b +0x263:  mov    -0x70(%ebp),%eax
0861926e +0x266:  mov    %eax,-0x11(%ebp)
08619271 +0x269:  movzbl -0x6c(%ebp),%eax
08619275 +0x26d:  mov    %al,-0xd(%ebp)
08619278 +0x270:  jmp    08619349 <+0x341>
0861927d +0x275:  movswl -0x60(%ebp),%ebx
08619281 +0x279:  mov    0xc(%ebp),%eax
08619284 +0x27c:  mov    %eax,(%esp)
08619287 +0x27f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0861928c +0x284:  lea    -0xa8(%ebp),%edx
08619292 +0x28a:  mov    %ebx,0xc(%esp)
08619296 +0x28e:  movl   $0x3,0x8(%esp)
0861929e +0x296:  mov    %eax,0x4(%esp)
086192a2 +0x29a:  mov    %edx,(%esp)
086192a5 +0x29d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086192aa +0x2a2:  sub    $0x4,%esp
086192ad +0x2a5:  mov    -0xa8(%ebp),%eax
086192b3 +0x2ab:  mov    %eax,-0x49(%ebp)
086192b6 +0x2ae:  mov    -0xa4(%ebp),%eax
086192bc +0x2b4:  mov    %eax,-0x45(%ebp)
086192bf +0x2b7:  mov    -0xa0(%ebp),%eax
086192c5 +0x2bd:  mov    %eax,-0x41(%ebp)
086192c8 +0x2c0:  mov    -0x9c(%ebp),%eax
086192ce +0x2c6:  mov    %eax,-0x3d(%ebp)
086192d1 +0x2c9:  mov    -0x98(%ebp),%eax
086192d7 +0x2cf:  mov    %eax,-0x39(%ebp)
086192da +0x2d2:  mov    -0x94(%ebp),%eax
086192e0 +0x2d8:  mov    %eax,-0x35(%ebp)
086192e3 +0x2db:  mov    -0x90(%ebp),%eax
086192e9 +0x2e1:  mov    %eax,-0x31(%ebp)
086192ec +0x2e4:  mov    -0x8c(%ebp),%eax
086192f2 +0x2ea:  mov    %eax,-0x2d(%ebp)
086192f5 +0x2ed:  mov    -0x88(%ebp),%eax
086192fb +0x2f3:  mov    %eax,-0x29(%ebp)
086192fe +0x2f6:  mov    -0x84(%ebp),%eax
08619304 +0x2fc:  mov    %eax,-0x25(%ebp)
08619307 +0x2ff:  mov    -0x80(%ebp),%eax
0861930a +0x302:  mov    %eax,-0x21(%ebp)
0861930d +0x305:  mov    -0x7c(%ebp),%eax
08619310 +0x308:  mov    %eax,-0x1d(%ebp)
08619313 +0x30b:  mov    -0x78(%ebp),%eax
08619316 +0x30e:  mov    %eax,-0x19(%ebp)
08619319 +0x311:  mov    -0x74(%ebp),%eax
0861931c +0x314:  mov    %eax,-0x15(%ebp)
0861931f +0x317:  mov    -0x70(%ebp),%eax
08619322 +0x31a:  mov    %eax,-0x11(%ebp)
08619325 +0x31d:  movzbl -0x6c(%ebp),%eax
08619329 +0x321:  mov    %al,-0xd(%ebp)
0861932c +0x324:  movzbl -0x48(%ebp),%eax
08619330 +0x328:  cmp    $0x5,%al
08619332 +0x32a:  jne    08619348 <+0x340>
08619334 +0x32c:  mov    $0x11,%eax
08619339 +0x331:  jmp    086193f2 <+0x3ea>
0861933e +0x336:  mov    $0x11,%eax
08619343 +0x33b:  jmp    086193f2 <+0x3ea>
08619348 +0x340:  nop
08619349 +0x341:  mov    -0x47(%ebp),%eax
0861934c +0x344:  test   %eax,%eax
0861934e +0x346:  jne    0861935a <+0x352>
08619350 +0x348:  mov    $0x11,%eax
08619355 +0x34d:  jmp    086193f2 <+0x3ea>
0861935a +0x352:  mov    -0x47(%ebp),%eax
0861935d +0x355:  mov    %eax,%ebx
0861935f +0x357:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08619364 +0x35c:  mov    %ebx,0x4(%esp)
08619368 +0x360:  mov    %eax,(%esp)
0861936b +0x363:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08619370 +0x368:  mov    %eax,-0xc(%ebp)
08619373 +0x36b:  cmpl   $0x0,-0xc(%ebp)
08619377 +0x36f:  jne    08619380 <+0x378>
08619379 +0x371:  mov    $0x11,%eax
0861937e +0x376:  jmp    086193f2 <+0x3ea>
08619380 +0x378:  mov    -0xc(%ebp),%eax
08619383 +0x37b:  mov    %eax,(%esp)
08619386 +0x37e:  call   0822c83e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ee8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ee8
0861938b +0x383:  test   %eax,%eax
0861938d +0x385:  setne  %al
08619390 +0x388:  test   %al,%al
08619392 +0x38a:  je     0861939b <+0x393>
08619394 +0x38c:  mov    $0x17,%eax
08619399 +0x391:  jmp    086193f2 <+0x3ea>
0861939b +0x393:  mov    -0xc(%ebp),%eax
0861939e +0x396:  mov    %eax,(%esp)
086193a1 +0x399:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
086193a6 +0x39e:  cmp    $0x2,%eax
086193a9 +0x3a1:  jne    086193b2 <+0x3aa>
086193ab +0x3a3:  mov    $0x17,%eax
086193b0 +0x3a8:  jmp    086193f2 <+0x3ea>
086193b2 +0x3aa:  mov    -0xc(%ebp),%eax
086193b5 +0x3ad:  mov    %eax,(%esp)
086193b8 +0x3b0:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
086193bd +0x3b5:  mov    0x20(%ebp),%edx
086193c0 +0x3b8:  mov    %eax,(%edx)
086193c2 +0x3ba:  movzbl -0x68(%ebp),%edx
086193c6 +0x3be:  movswl -0x64(%ebp),%eax
086193ca +0x3c2:  mov    0x24(%ebp),%ecx
086193cd +0x3c5:  mov    %ecx,0x14(%esp)
086193d1 +0x3c9:  mov    %edx,0x10(%esp)
086193d5 +0x3cd:  mov    %eax,0xc(%esp)
086193d9 +0x3d1:  mov    -0xc(%ebp),%eax
086193dc +0x3d4:  mov    %eax,0x8(%esp)
086193e0 +0x3d8:  lea    -0x49(%ebp),%eax
086193e3 +0x3db:  mov    %eax,0x4(%esp)
086193e7 +0x3df:  mov    0x8(%ebp),%eax
086193ea +0x3e2:  mov    %eax,(%esp)
086193ed +0x3e5:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
086193f2 +0x3ea:  mov    -0x4(%ebp),%ebx
086193f5 +0x3ed:  leave
086193f6 +0x3ee:  ret
086193f7 +0x3ef:  nop
```

## 反编译 C

```c
// Store::GetSellItemPrice @ 0x8619008

/* Store::GetSellItemPrice(CUser*, char, short, short, bool, int&, int&) */

undefined4 __thiscall
Store::GetSellItemPrice
          (Store *this,CUser *param_1,char param_2,short param_3,short param_4,bool param_5,
          int *param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  bool local_6c;
  short local_68;
  short local_64;
  char local_60;
  Inven_Item local_4d;
  char cStack_4c;
  undefined2 uStack_4b;
  undefined2 local_49;
  undefined2 uStack_47;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  CItem *local_10;
  
  local_60 = param_2;
  local_64 = param_3;
  local_68 = param_4;
  local_6c = param_5;
  Inven_Item::Inven_Item(&local_4d);
  if (local_60 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_ac);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else if (local_60 < '\x03') {
    if (local_60 != '\0') {
      return 0x11;
    }
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else if (local_60 == '\x03') {
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else {
    if (local_60 != '\a') {
      return 0x11;
    }
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = SUB41(local_ac._0_4_,0);
    cStack_4c = SUB41(local_ac._0_4_,1);
    uStack_4b = SUB42(local_ac._0_4_,2);
    local_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
    if (cStack_4c == '\x05') {
      return 0x11;
    }
  }
  if (CONCAT22(local_49,uStack_4b) == 0) {
    uVar2 = 0x11;
  }
  else {
    iVar1 = CONCAT22(local_49,uStack_4b);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
    if (local_10 == (CItem *)0x0) {
      uVar2 = 0x11;
    }
    else {
      iVar1 = CItem::GetFinishPointPrice(local_10);
      if (iVar1 == 0) {
        iVar1 = CItem::GetAttachType(local_10);
        if (iVar1 == 2) {
          uVar2 = 0x17;
        }
        else {
          iVar1 = CItem::get_index(local_10);
          *param_6 = iVar1;
          uVar2 = GetSellItemPrice(this,&local_4d,local_10,local_68,local_6c,param_7);
        }
      }
      else {
        uVar2 = 0x17;
      }
    }
  }
  return uVar2;
}
```
