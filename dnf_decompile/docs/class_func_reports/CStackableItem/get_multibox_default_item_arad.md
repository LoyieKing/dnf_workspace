# get_multibox_default_item_arad

`_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE`

`CStackableItem::get_multibox_default_item_arad(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850f38a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850f38a  _ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE
#           CStackableItem::get_multibox_default_item_arad(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
# range [0x0850f38a, 0x0850f731]
0850f38a +0x000:  push   %ebp
0850f38b +0x001:  mov    %esp,%ebp
0850f38d +0x003:  push   %edi
0850f38e +0x004:  push   %esi
0850f38f +0x005:  push   %ebx
0850f390 +0x006:  sub    $0xec,%esp
0850f396 +0x00c:  cmpl   $0x0,0x8(%ebp)
0850f39a +0x010:  je     0850f725 <+0x39b>
0850f3a0 +0x016:  mov    $&_ZGVZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,%eax
0850f3a5 +0x01b:  movzbl (%eax),%eax
0850f3a8 +0x01e:  test   %al,%al
0850f3aa +0x020:  jne    0850f41d <+0x93>
0850f3ac +0x022:  movl   $&_ZGVZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f3b3 +0x029:  call   08725330 <__cxa_guard_acquire>
0850f3b8 +0x02e:  test   %eax,%eax
0850f3ba +0x030:  setne  %al
0850f3bd +0x033:  test   %al,%al
0850f3bf +0x035:  je     0850f41d <+0x93>
0850f3c1 +0x037:  mov    $0x0,%ebx
0850f3c6 +0x03c:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f3cd +0x043:  call   085178d0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3f05>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3f05
0850f3d2 +0x048:  movl   $&_ZGVZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f3d9 +0x04f:  call   08725250 <__cxa_guard_release>
0850f3de +0x054:  mov    $&_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EED1Ev,%eax
0850f3e3 +0x059:  movl   $&__dso_handle,0x8(%esp)
0850f3eb +0x061:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,0x4(%esp)
0850f3f3 +0x069:  mov    %eax,(%esp)
0850f3f6 +0x06c:  call   0807ddd0 <_init+0x6c8>
0850f3fb +0x071:  jmp    0850f41d <+0x93>
0850f3fd +0x073:  mov    %edx,%esi
0850f3ff +0x075:  mov    %eax,%edi
0850f401 +0x077:  test   %bl,%bl
0850f403 +0x079:  jne    0850f411 <+0x87>
0850f405 +0x07b:  movl   $&_ZGVZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f40c +0x082:  call   087252c0 <__cxa_guard_abort>
0850f411 +0x087:  mov    %edi,%eax
0850f413 +0x089:  mov    %esi,%edx
0850f415 +0x08b:  mov    %eax,(%esp)
0850f418 +0x08e:  call   08ae3750 <_Unwind_Resume>
0850f41d +0x093:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f424 +0x09a:  call   08517942 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3f77>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3f77
0850f429 +0x09f:  test   %al,%al
0850f42b +0x0a1:  je     0850f509 <+0x17f>
0850f431 +0x0a7:  movl   $0xc350,0xc(%esp)
0850f439 +0x0af:  movl   $0xa,0x8(%esp)
0850f441 +0x0b7:  movl   $0x28be16,0x4(%esp)
0850f449 +0x0bf:  lea    -0x64(%ebp),%eax
0850f44c +0x0c2:  mov    %eax,(%esp)
0850f44f +0x0c5:  call   08513e30 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x465>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x465
0850f454 +0x0ca:  lea    -0x64(%ebp),%eax
0850f457 +0x0cd:  mov    %eax,0x4(%esp)
0850f45b +0x0d1:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f462 +0x0d8:  call   08517986 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3fbb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3fbb
0850f467 +0x0dd:  movl   $0x61a8,0xc(%esp)
0850f46f +0x0e5:  movl   $0x32,0x8(%esp)
0850f477 +0x0ed:  movl   $0x28be16,0x4(%esp)
0850f47f +0x0f5:  lea    -0x58(%ebp),%eax
0850f482 +0x0f8:  mov    %eax,(%esp)
0850f485 +0x0fb:  call   08513e30 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x465>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x465
0850f48a +0x100:  lea    -0x58(%ebp),%eax
0850f48d +0x103:  mov    %eax,0x4(%esp)
0850f491 +0x107:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f498 +0x10e:  call   08517986 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3fbb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3fbb
0850f49d +0x113:  movl   $0x1388,0xc(%esp)
0850f4a5 +0x11b:  movl   $0x64,0x8(%esp)
0850f4ad +0x123:  movl   $0x28be16,0x4(%esp)
0850f4b5 +0x12b:  lea    -0x4c(%ebp),%eax
0850f4b8 +0x12e:  mov    %eax,(%esp)
0850f4bb +0x131:  call   08513e30 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x465>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x465
0850f4c0 +0x136:  lea    -0x4c(%ebp),%eax
0850f4c3 +0x139:  mov    %eax,0x4(%esp)
0850f4c7 +0x13d:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f4ce +0x144:  call   08517986 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3fbb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3fbb
0850f4d3 +0x149:  movl   $0x2710,0xc(%esp)
0850f4db +0x151:  movl   $0x1,0x8(%esp)
0850f4e3 +0x159:  movl   $0x28d150,0x4(%esp)
0850f4eb +0x161:  lea    -0x40(%ebp),%eax
0850f4ee +0x164:  mov    %eax,(%esp)
0850f4f1 +0x167:  call   08513e30 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x465>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x465
0850f4f6 +0x16c:  lea    -0x40(%ebp),%eax
0850f4f9 +0x16f:  mov    %eax,0x4(%esp)
0850f4fd +0x173:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f504 +0x17a:  call   08517986 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3fbb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3fbb
0850f509 +0x17f:  movl   $0x0,-0x2c(%ebp)
0850f510 +0x186:  movl   $0x0,-0x28(%ebp)
0850f517 +0x18d:  movl   $0x0,-0x24(%ebp)
0850f51e +0x194:  movl   $0x0,-0x20(%ebp)
0850f525 +0x19b:  movl   $0x0,-0x1c(%ebp)
0850f52c +0x1a2:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,(%esp)
0850f533 +0x1a9:  call   085179a8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3fdd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3fdd
0850f538 +0x1ae:  cmp    -0x1c(%ebp),%eax
0850f53b +0x1b1:  seta   %al
0850f53e +0x1b4:  test   %al,%al
0850f540 +0x1b6:  je     0850f726 <+0x39c>
0850f546 +0x1bc:  movl   $&_ZL14gUnicodeBuffer+0xe174,(%esp)
0850f54d +0x1c3:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0850f552 +0x1c8:  mov    %eax,-0x2c(%ebp)
0850f555 +0x1cb:  movl   $0x0,-0x28(%ebp)
0850f55c +0x1d2:  movl   $0x0,-0x24(%ebp)
0850f563 +0x1d9:  lea    -0x68(%ebp),%eax
0850f566 +0x1dc:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,0x4(%esp)
0850f56e +0x1e4:  mov    %eax,(%esp)
0850f571 +0x1e7:  call   085179ca <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3fff>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3fff
0850f576 +0x1ec:  sub    $0x4,%esp
0850f579 +0x1ef:  jmp    0850f5da <+0x250>
0850f57b +0x1f1:  lea    -0x68(%ebp),%eax
0850f57e +0x1f4:  mov    %eax,(%esp)
0850f581 +0x1f7:  call   08517a40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4075>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4075
0850f586 +0x1fc:  mov    0x8(%eax),%edx
0850f589 +0x1ff:  mov    -0x28(%ebp),%eax
0850f58c +0x202:  lea    (%edx,%eax,1),%eax
0850f58f +0x205:  mov    %eax,-0x28(%ebp)
0850f592 +0x208:  mov    -0x28(%ebp),%eax
0850f595 +0x20b:  cmp    -0x2c(%ebp),%eax
0850f598 +0x20e:  jl     0850f5bd <+0x233>
0850f59a +0x210:  lea    -0x68(%ebp),%eax
0850f59d +0x213:  mov    %eax,(%esp)
0850f5a0 +0x216:  call   08517a40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4075>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4075
0850f5a5 +0x21b:  mov    (%eax),%eax
0850f5a7 +0x21d:  mov    %eax,-0x24(%ebp)
0850f5aa +0x220:  lea    -0x68(%ebp),%eax
0850f5ad +0x223:  mov    %eax,(%esp)
0850f5b0 +0x226:  call   08517a40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4075>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4075
0850f5b5 +0x22b:  mov    0x4(%eax),%eax
0850f5b8 +0x22e:  mov    %eax,-0x20(%ebp)
0850f5bb +0x231:  jmp    0850f60a <+0x280>
0850f5bd +0x233:  lea    -0x30(%ebp),%eax
0850f5c0 +0x236:  movl   $0x0,0x8(%esp)
0850f5c8 +0x23e:  lea    -0x68(%ebp),%edx
0850f5cb +0x241:  mov    %edx,0x4(%esp)
0850f5cf +0x245:  mov    %eax,(%esp)
0850f5d2 +0x248:  call   08517a4a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x407f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x407f
0850f5d7 +0x24d:  sub    $0x4,%esp
0850f5da +0x250:  lea    -0x34(%ebp),%eax
0850f5dd +0x253:  movl   $&_ZZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EEE19defaultItemListArad,0x4(%esp)
0850f5e5 +0x25b:  mov    %eax,(%esp)
0850f5e8 +0x25e:  call   085179ee <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4023>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4023
0850f5ed +0x263:  sub    $0x4,%esp
0850f5f0 +0x266:  lea    -0x34(%ebp),%eax
0850f5f3 +0x269:  mov    %eax,0x4(%esp)
0850f5f7 +0x26d:  lea    -0x68(%ebp),%eax
0850f5fa +0x270:  mov    %eax,(%esp)
0850f5fd +0x273:  call   08517a14 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4049>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4049
0850f602 +0x278:  test   %al,%al
0850f604 +0x27a:  jne    0850f57b <+0x1f1>
0850f60a +0x280:  lea    -0xa5(%ebp),%eax
0850f610 +0x286:  mov    %eax,(%esp)
0850f613 +0x289:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0850f618 +0x28e:  mov    -0x24(%ebp),%eax
0850f61b +0x291:  mov    %eax,-0xa3(%ebp)
0850f621 +0x297:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850f626 +0x29c:  mov    0xc(%eax),%eax
0850f629 +0x29f:  mov    -0x20(%ebp),%edx
0850f62c +0x2a2:  mov    %edx,0xc(%esp)
0850f630 +0x2a6:  lea    -0xa5(%ebp),%edx
0850f636 +0x2ac:  mov    %edx,0x8(%esp)
0850f63a +0x2b0:  movl   $0x2,0x4(%esp)
0850f642 +0x2b8:  mov    %eax,(%esp)
0850f645 +0x2bb:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0850f64a +0x2c0:  lea    -0xe3(%ebp),%eax
0850f650 +0x2c6:  mov    %eax,(%esp)
0850f653 +0x2c9:  call   0851775a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d8f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d8f
0850f658 +0x2ce:  mov    -0xa5(%ebp),%eax
0850f65e +0x2d4:  mov    %eax,-0xe3(%ebp)
0850f664 +0x2da:  mov    -0xa1(%ebp),%eax
0850f66a +0x2e0:  mov    %eax,-0xdf(%ebp)
0850f670 +0x2e6:  mov    -0x9d(%ebp),%eax
0850f676 +0x2ec:  mov    %eax,-0xdb(%ebp)
0850f67c +0x2f2:  mov    -0x99(%ebp),%eax
0850f682 +0x2f8:  mov    %eax,-0xd7(%ebp)
0850f688 +0x2fe:  mov    -0x95(%ebp),%eax
0850f68e +0x304:  mov    %eax,-0xd3(%ebp)
0850f694 +0x30a:  mov    -0x91(%ebp),%eax
0850f69a +0x310:  mov    %eax,-0xcf(%ebp)
0850f6a0 +0x316:  mov    -0x8d(%ebp),%eax
0850f6a6 +0x31c:  mov    %eax,-0xcb(%ebp)
0850f6ac +0x322:  mov    -0x89(%ebp),%eax
0850f6b2 +0x328:  mov    %eax,-0xc7(%ebp)
0850f6b8 +0x32e:  mov    -0x85(%ebp),%eax
0850f6be +0x334:  mov    %eax,-0xc3(%ebp)
0850f6c4 +0x33a:  mov    -0x81(%ebp),%eax
0850f6ca +0x340:  mov    %eax,-0xbf(%ebp)
0850f6d0 +0x346:  mov    -0x7d(%ebp),%eax
0850f6d3 +0x349:  mov    %eax,-0xbb(%ebp)
0850f6d9 +0x34f:  mov    -0x79(%ebp),%eax
0850f6dc +0x352:  mov    %eax,-0xb7(%ebp)
0850f6e2 +0x358:  mov    -0x75(%ebp),%eax
0850f6e5 +0x35b:  mov    %eax,-0xb3(%ebp)
0850f6eb +0x361:  mov    -0x71(%ebp),%eax
0850f6ee +0x364:  mov    %eax,-0xaf(%ebp)
0850f6f4 +0x36a:  mov    -0x6d(%ebp),%eax
0850f6f7 +0x36d:  mov    %eax,-0xab(%ebp)
0850f6fd +0x373:  movzbl -0x69(%ebp),%eax
0850f701 +0x377:  mov    %al,-0xa7(%ebp)
0850f707 +0x37d:  movb   $0x0,-0xa6(%ebp)
0850f70e +0x384:  lea    -0xe3(%ebp),%eax
0850f714 +0x38a:  mov    %eax,0x4(%esp)
0850f718 +0x38e:  mov    0x8(%ebp),%eax
0850f71b +0x391:  mov    %eax,(%esp)
0850f71e +0x394:  call   08517774 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3da9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3da9
0850f723 +0x399:  jmp    0850f726 <+0x39c>
0850f725 +0x39b:  nop
0850f726 +0x39c:  lea    -0xc(%ebp),%esp
0850f729 +0x39f:  add    $0x0,%esp
0850f72c +0x3a2:  pop    %ebx
0850f72d +0x3a3:  pop    %esi
0850f72e +0x3a4:  pop    %edi
0850f72f +0x3a5:  pop    %ebp
0850f730 +0x3a6:  ret
0850f731 +0x3a7:  nop
```

## 反编译 C

```c
// CStackableItem::get_multibox_default_item_arad @ 0x850f38a

/* CStackableItem::get_multibox_default_item_arad(std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >*) */

void CStackableItem::get_multibox_default_item_arad(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
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
  __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
  local_6c [4];
  LotteryDefaultArad local_68 [12];
  LotteryDefaultArad local_5c [12];
  LotteryDefaultArad local_50 [12];
  LotteryDefaultArad local_44 [12];
  __normal_iterator local_38 [4];
  __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
  local_34 [4];
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  
  if (param_1 != (vector *)0x0) {
    if (get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
        ::defaultItemListArad == '\0') {
      iVar3 = __cxa_guard_acquire(&get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                                   ::defaultItemListArad);
      if (iVar3 != 0) {
                    /* try { // try from 0850f3cd to 0850f3d1 has its CatchHandler @ 0850f3fd */
        std::
        vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
        ::vector((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                  *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                    ::defaultItemListArad);
        __cxa_guard_release(&get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                             ::defaultItemListArad);
        __cxa_atexit(std::
                     vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                     ::~vector,
                     get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,&__dso_handle);
      }
    }
    cVar1 = std::
            vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
            ::empty();
    if (cVar1 != '\0') {
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_68,0x28be16,10,50000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_68);
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_5c,0x28be16,0x32,25000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_5c);
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_50,0x28be16,100,5000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_50);
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_44,0x28d150,1,10000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_44);
    }
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar4 = std::
            vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
            ::size((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                    *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                      ::defaultItemListArad);
    if (local_20 < uVar4) {
      local_30 = get_rand_int(100000);
      local_2c = 0;
      local_28 = 0;
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::begin();
      while( true ) {
        std::
        vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
        ::end();
        bVar2 = __gnu_cxx::operator!=(local_6c,local_38);
        if (!bVar2) break;
        iVar3 = __gnu_cxx::
                __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
                ::operator*(local_6c);
        local_2c = *(int *)(iVar3 + 8) + local_2c;
        if (local_30 <= local_2c) {
          puVar5 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
                   ::operator*(local_6c);
          local_28 = *puVar5;
          iVar3 = __gnu_cxx::
                  __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
                  ::operator*(local_6c);
          local_24 = *(undefined4 *)(iVar3 + 4);
          break;
        }
        __gnu_cxx::
        __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
        ::operator++(local_34,(int)local_6c);
      }
      Inven_Item::Inven_Item((Inven_Item *)&local_a9);
      uStack_a7 = (undefined2)local_28;
      uStack_a5 = (undefined2)((uint)local_28 >> 0x10);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),2,&local_a9,local_24);
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
      local_aa = 0;
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::push_back
                ((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                 param_1,(pair *)&local_e7);
    }
  }
  return;
}
```
