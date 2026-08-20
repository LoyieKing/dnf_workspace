# get_multibox_lottery_item

`_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE`

`CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850edda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850edda  _ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE
#           CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
# range [0x0850edda, 0x0850f135]
0850edda +0x000:  push   %ebp
0850eddb +0x001:  mov    %esp,%ebp
0850eddd +0x003:  push   %esi
0850edde +0x004:  push   %ebx
0850eddf +0x005:  sub    $0xf0,%esp
0850ede5 +0x00b:  cmpl   $0x0,0xc(%ebp)
0850ede9 +0x00f:  je     0850f12a <+0x350>
0850edef +0x015:  movl   $0x0,-0x20(%ebp)
0850edf6 +0x01c:  movl   $0x0,-0x1c(%ebp)
0850edfd +0x023:  movl   $0x0,-0x18(%ebp)
0850ee04 +0x02a:  movl   $0x0,-0x14(%ebp)
0850ee0b +0x031:  movb   $0x0,-0xd(%ebp)
0850ee0f +0x035:  mov    0x8(%ebp),%eax
0850ee12 +0x038:  lea    0x1f4(%eax),%edx
0850ee18 +0x03e:  lea    -0x38(%ebp),%eax
0850ee1b +0x041:  mov    %edx,0x4(%esp)
0850ee1f +0x045:  mov    %eax,(%esp)
0850ee22 +0x048:  call   085176da <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d0f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d0f
0850ee27 +0x04d:  sub    $0x4,%esp
0850ee2a +0x050:  jmp    0850f0f3 <+0x319>
0850ee2f +0x055:  lea    -0x38(%ebp),%eax
0850ee32 +0x058:  mov    %eax,(%esp)
0850ee35 +0x05b:  call   08517750 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d85>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d85
0850ee3a +0x060:  mov    %eax,0x4(%esp)
0850ee3e +0x064:  lea    -0x68(%ebp),%eax
0850ee41 +0x067:  mov    %eax,(%esp)
0850ee44 +0x06a:  call   085151a8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x17dd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x17dd
0850ee49 +0x06f:  movl   $0x0,-0xc(%ebp)
0850ee50 +0x076:  jmp    0850f09d <+0x2c3>
0850ee55 +0x07b:  lea    -0x3c(%ebp),%eax
0850ee58 +0x07e:  lea    -0x68(%ebp),%edx
0850ee5b +0x081:  add    $0x10,%edx
0850ee5e +0x084:  mov    %edx,0x4(%esp)
0850ee62 +0x088:  mov    %eax,(%esp)
0850ee65 +0x08b:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0850ee6a +0x090:  sub    $0x4,%esp
0850ee6d +0x093:  lea    -0x40(%ebp),%eax
0850ee70 +0x096:  lea    -0x68(%ebp),%edx
0850ee73 +0x099:  add    $0x1c,%edx
0850ee76 +0x09c:  mov    %edx,0x4(%esp)
0850ee7a +0x0a0:  mov    %eax,(%esp)
0850ee7d +0x0a3:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0850ee82 +0x0a8:  sub    $0x4,%esp
0850ee85 +0x0ab:  movl   $0xf4240,(%esp)
0850ee8c +0x0b2:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0850ee91 +0x0b7:  mov    %eax,-0x20(%ebp)
0850ee94 +0x0ba:  movl   $0x0,-0x1c(%ebp)
0850ee9b +0x0c1:  movl   $0x0,-0x18(%ebp)
0850eea2 +0x0c8:  jmp    0850ef32 <+0x158>
0850eea7 +0x0cd:  lea    -0x3c(%ebp),%eax
0850eeaa +0x0d0:  mov    %eax,(%esp)
0850eead +0x0d3:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0850eeb2 +0x0d8:  mov    0x4(%eax),%eax
0850eeb5 +0x0db:  add    %eax,-0x1c(%ebp)
0850eeb8 +0x0de:  mov    -0x1c(%ebp),%eax
0850eebb +0x0e1:  cmp    -0x20(%ebp),%eax
0850eebe +0x0e4:  jle    0850eef8 <+0x11e>
0850eec0 +0x0e6:  lea    -0x3c(%ebp),%eax
0850eec3 +0x0e9:  mov    %eax,(%esp)
0850eec6 +0x0ec:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0850eecb +0x0f1:  mov    (%eax),%eax
0850eecd +0x0f3:  mov    %eax,-0x18(%ebp)
0850eed0 +0x0f6:  lea    -0x40(%ebp),%eax
0850eed3 +0x0f9:  mov    %eax,(%esp)
0850eed6 +0x0fc:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0850eedb +0x101:  mov    (%eax),%eax
0850eedd +0x103:  mov    %eax,-0x14(%ebp)
0850eee0 +0x106:  lea    -0x40(%ebp),%eax
0850eee3 +0x109:  mov    %eax,(%esp)
0850eee6 +0x10c:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0850eeeb +0x111:  mov    0x4(%eax),%eax
0850eeee +0x114:  test   %eax,%eax
0850eef0 +0x116:  setne  %al
0850eef3 +0x119:  mov    %al,-0xd(%ebp)
0850eef6 +0x11c:  jmp    0850ef64 <+0x18a>
0850eef8 +0x11e:  lea    -0x2c(%ebp),%eax
0850eefb +0x121:  movl   $0x0,0x8(%esp)
0850ef03 +0x129:  lea    -0x3c(%ebp),%edx
0850ef06 +0x12c:  mov    %edx,0x4(%esp)
0850ef0a +0x130:  mov    %eax,(%esp)
0850ef0d +0x133:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0850ef12 +0x138:  sub    $0x4,%esp
0850ef15 +0x13b:  lea    -0x28(%ebp),%eax
0850ef18 +0x13e:  movl   $0x0,0x8(%esp)
0850ef20 +0x146:  lea    -0x40(%ebp),%edx
0850ef23 +0x149:  mov    %edx,0x4(%esp)
0850ef27 +0x14d:  mov    %eax,(%esp)
0850ef2a +0x150:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
0850ef2f +0x155:  sub    $0x4,%esp
0850ef32 +0x158:  lea    -0x30(%ebp),%eax
0850ef35 +0x15b:  lea    -0x68(%ebp),%edx
0850ef38 +0x15e:  add    $0x10,%edx
0850ef3b +0x161:  mov    %edx,0x4(%esp)
0850ef3f +0x165:  mov    %eax,(%esp)
0850ef42 +0x168:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0850ef47 +0x16d:  sub    $0x4,%esp
0850ef4a +0x170:  lea    -0x30(%ebp),%eax
0850ef4d +0x173:  mov    %eax,0x4(%esp)
0850ef51 +0x177:  lea    -0x3c(%ebp),%eax
0850ef54 +0x17a:  mov    %eax,(%esp)
0850ef57 +0x17d:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0850ef5c +0x182:  test   %al,%al
0850ef5e +0x184:  jne    0850eea7 <+0xcd>
0850ef64 +0x18a:  cmpl   $0x0,-0x18(%ebp)
0850ef68 +0x18e:  jne    0850ef7d <+0x1a3>
0850ef6a +0x190:  mov    -0x64(%ebp),%eax
0850ef6d +0x193:  mov    %eax,-0x18(%ebp)
0850ef70 +0x196:  mov    -0x60(%ebp),%eax
0850ef73 +0x199:  mov    %eax,-0x14(%ebp)
0850ef76 +0x19c:  movzbl -0x5c(%ebp),%eax
0850ef7a +0x1a0:  mov    %al,-0xd(%ebp)
0850ef7d +0x1a3:  lea    -0xa5(%ebp),%eax
0850ef83 +0x1a9:  mov    %eax,(%esp)
0850ef86 +0x1ac:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0850ef8b +0x1b1:  mov    -0x18(%ebp),%eax
0850ef8e +0x1b4:  mov    %eax,-0xa3(%ebp)
0850ef94 +0x1ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850ef99 +0x1bf:  mov    0xc(%eax),%eax
0850ef9c +0x1c2:  mov    -0x14(%ebp),%edx
0850ef9f +0x1c5:  mov    %edx,0xc(%esp)
0850efa3 +0x1c9:  lea    -0xa5(%ebp),%edx
0850efa9 +0x1cf:  mov    %edx,0x8(%esp)
0850efad +0x1d3:  movl   $0x2,0x4(%esp)
0850efb5 +0x1db:  mov    %eax,(%esp)
0850efb8 +0x1de:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0850efbd +0x1e3:  lea    -0xe3(%ebp),%eax
0850efc3 +0x1e9:  mov    %eax,(%esp)
0850efc6 +0x1ec:  call   0851775a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d8f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d8f
0850efcb +0x1f1:  mov    -0xa5(%ebp),%eax
0850efd1 +0x1f7:  mov    %eax,-0xe3(%ebp)
0850efd7 +0x1fd:  mov    -0xa1(%ebp),%eax
0850efdd +0x203:  mov    %eax,-0xdf(%ebp)
0850efe3 +0x209:  mov    -0x9d(%ebp),%eax
0850efe9 +0x20f:  mov    %eax,-0xdb(%ebp)
0850efef +0x215:  mov    -0x99(%ebp),%eax
0850eff5 +0x21b:  mov    %eax,-0xd7(%ebp)
0850effb +0x221:  mov    -0x95(%ebp),%eax
0850f001 +0x227:  mov    %eax,-0xd3(%ebp)
0850f007 +0x22d:  mov    -0x91(%ebp),%eax
0850f00d +0x233:  mov    %eax,-0xcf(%ebp)
0850f013 +0x239:  mov    -0x8d(%ebp),%eax
0850f019 +0x23f:  mov    %eax,-0xcb(%ebp)
0850f01f +0x245:  mov    -0x89(%ebp),%eax
0850f025 +0x24b:  mov    %eax,-0xc7(%ebp)
0850f02b +0x251:  mov    -0x85(%ebp),%eax
0850f031 +0x257:  mov    %eax,-0xc3(%ebp)
0850f037 +0x25d:  mov    -0x81(%ebp),%eax
0850f03d +0x263:  mov    %eax,-0xbf(%ebp)
0850f043 +0x269:  mov    -0x7d(%ebp),%eax
0850f046 +0x26c:  mov    %eax,-0xbb(%ebp)
0850f04c +0x272:  mov    -0x79(%ebp),%eax
0850f04f +0x275:  mov    %eax,-0xb7(%ebp)
0850f055 +0x27b:  mov    -0x75(%ebp),%eax
0850f058 +0x27e:  mov    %eax,-0xb3(%ebp)
0850f05e +0x284:  mov    -0x71(%ebp),%eax
0850f061 +0x287:  mov    %eax,-0xaf(%ebp)
0850f067 +0x28d:  mov    -0x6d(%ebp),%eax
0850f06a +0x290:  mov    %eax,-0xab(%ebp)
0850f070 +0x296:  movzbl -0x69(%ebp),%eax
0850f074 +0x29a:  mov    %al,-0xa7(%ebp)
0850f07a +0x2a0:  movzbl -0xd(%ebp),%eax
0850f07e +0x2a4:  mov    %al,-0xa6(%ebp)
0850f084 +0x2aa:  lea    -0xe3(%ebp),%eax
0850f08a +0x2b0:  mov    %eax,0x4(%esp)
0850f08e +0x2b4:  mov    0xc(%ebp),%eax
0850f091 +0x2b7:  mov    %eax,(%esp)
0850f094 +0x2ba:  call   08517774 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3da9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3da9
0850f099 +0x2bf:  addl   $0x1,-0xc(%ebp)
0850f09d +0x2c3:  mov    -0x68(%ebp),%eax
0850f0a0 +0x2c6:  cmp    -0xc(%ebp),%eax
0850f0a3 +0x2c9:  setg   %al
0850f0a6 +0x2cc:  test   %al,%al
0850f0a8 +0x2ce:  jne    0850ee55 <+0x7b>
0850f0ae +0x2d4:  lea    -0x24(%ebp),%eax
0850f0b1 +0x2d7:  movl   $0x0,0x8(%esp)
0850f0b9 +0x2df:  lea    -0x38(%ebp),%edx
0850f0bc +0x2e2:  mov    %edx,0x4(%esp)
0850f0c0 +0x2e6:  mov    %eax,(%esp)
0850f0c3 +0x2e9:  call   085177e8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3e1d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3e1d
0850f0c8 +0x2ee:  sub    $0x4,%esp
0850f0cb +0x2f1:  lea    -0x68(%ebp),%eax
0850f0ce +0x2f4:  mov    %eax,(%esp)
0850f0d1 +0x2f7:  call   08515236 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x186b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x186b
0850f0d6 +0x2fc:  jmp    0850f0f3 <+0x319>
0850f0d8 +0x2fe:  mov    %edx,%ebx
0850f0da +0x300:  mov    %eax,%esi
0850f0dc +0x302:  lea    -0x68(%ebp),%eax
0850f0df +0x305:  mov    %eax,(%esp)
0850f0e2 +0x308:  call   08515236 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x186b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x186b
0850f0e7 +0x30d:  mov    %esi,%eax
0850f0e9 +0x30f:  mov    %ebx,%edx
0850f0eb +0x311:  mov    %eax,(%esp)
0850f0ee +0x314:  call   08ae3750 <_Unwind_Resume>
0850f0f3 +0x319:  mov    0x8(%ebp),%eax
0850f0f6 +0x31c:  lea    0x1f4(%eax),%edx
0850f0fc +0x322:  lea    -0x34(%ebp),%eax
0850f0ff +0x325:  mov    %edx,0x4(%esp)
0850f103 +0x329:  mov    %eax,(%esp)
0850f106 +0x32c:  call   085176fe <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d33>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d33
0850f10b +0x331:  sub    $0x4,%esp
0850f10e +0x334:  lea    -0x34(%ebp),%eax
0850f111 +0x337:  mov    %eax,0x4(%esp)
0850f115 +0x33b:  lea    -0x38(%ebp),%eax
0850f118 +0x33e:  mov    %eax,(%esp)
0850f11b +0x341:  call   08517724 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d59>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d59
0850f120 +0x346:  test   %al,%al
0850f122 +0x348:  jne    0850ee2f <+0x55>
0850f128 +0x34e:  jmp    0850f12b <+0x351>
0850f12a +0x350:  nop
0850f12b +0x351:  lea    -0x8(%ebp),%esp
0850f12e +0x354:  add    $0x0,%esp
0850f131 +0x357:  pop    %ebx
0850f132 +0x358:  pop    %esi
0850f133 +0x359:  pop    %ebp
0850f134 +0x35a:  ret
0850f135 +0x35b:  nop
```

## 反编译 C

```c
// CStackableItem::get_multibox_lottery_item @ 0x850edda

/* CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >*) */

void __thiscall CStackableItem::get_multibox_lottery_item(CStackableItem *this,vector *param_1)

{
  bool bVar1;
  LotteryUnit *pLVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_af;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined2 uStack_a5;
  undefined2 uStack_a3;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined1 local_6d;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 local_60;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_44 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
  local_3c [4];
  __normal_iterator local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
  local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_11;
  int local_10;
  
  if (param_1 != (vector *)0x0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_11 = 0;
    std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>::
    begin();
    while( true ) {
      std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>
      ::end();
      bVar1 = __gnu_cxx::operator!=(local_3c,local_38);
      if (!bVar1) break;
      pLVar2 = (LotteryUnit *)
               __gnu_cxx::
               __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
               ::operator*(local_3c);
      MultiBoxLotteryInfo::LotteryUnit::LotteryUnit((LotteryUnit *)&local_6c,pLVar2);
      for (local_10 = 0; local_10 < local_6c; local_10 = local_10 + 1) {
                    /* try { // try from 0850ee65 to 0850f0c7 has its CatchHandler @ 0850f0d8 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        local_24 = get_rand_int(1000000);
        local_20 = 0;
        local_1c = 0;
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar1 = __gnu_cxx::operator!=(local_40,local_34);
          if (!bVar1) break;
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator*(local_40);
          local_20 = local_20 + *(int *)(iVar5 + 4);
          if (local_24 < local_20) {
            piVar3 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator*(local_40);
            local_1c = *piVar3;
            puVar4 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                     ::operator*(local_44);
            local_18 = *puVar4;
            iVar5 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_44);
            local_11 = *(int *)(iVar5 + 4) != 0;
            break;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_30,(int)local_40);
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_2c,(int)local_44);
        }
        if (local_1c == 0) {
          local_1c = local_68;
          local_18 = local_64;
          local_11 = local_60;
        }
        Inven_Item::Inven_Item((Inven_Item *)&local_a9);
        uStack_a7 = (undefined2)local_1c;
        uStack_a5 = (undefined2)((uint)local_1c >> 0x10);
        iVar5 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar5 + 0xc),2,&local_a9,local_18);
        std::pair<Inven_Item,bool>::pair((pair<Inven_Item,bool> *)&local_e7);
        local_e7 = CONCAT22(uStack_a7,local_a9);
        local_e3 = CONCAT22(uStack_a3,uStack_a5);
        local_df = local_a1;
        local_db = local_9d;
        local_d7 = local_99;
        local_d3 = local_95;
        local_cf = local_91;
        local_cb = local_8d;
        local_c7 = local_89;
        local_c3 = local_85;
        local_bf = local_81;
        local_bb = local_7d;
        local_b7 = local_79;
        local_b3 = local_75;
        local_af = local_71;
        local_ab = local_6d;
        local_aa = local_11;
        std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
        push_back((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                  param_1,(pair *)&local_e7);
      }
      __gnu_cxx::
      __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
      ::operator++(local_28,(int)local_3c);
      MultiBoxLotteryInfo::LotteryUnit::~LotteryUnit((LotteryUnit *)&local_6c);
    }
  }
  return;
}
```
