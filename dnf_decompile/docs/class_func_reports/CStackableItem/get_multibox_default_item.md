# get_multibox_default_item

`_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE`

`CStackableItem::get_multibox_default_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850f136` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850f136  _ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE
#           CStackableItem::get_multibox_default_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
# range [0x0850f136, 0x0850f389]
0850f136 +0x000:  push   %ebp
0850f137 +0x001:  mov    %esp,%ebp
0850f139 +0x003:  sub    $0xb8,%esp
0850f13f +0x009:  cmpl   $0x0,0xc(%ebp)
0850f143 +0x00d:  je     0850f387 <+0x251>
0850f149 +0x013:  movl   $0x0,-0x20(%ebp)
0850f150 +0x01a:  movl   $0x0,-0x1c(%ebp)
0850f157 +0x021:  movl   $0x0,-0x18(%ebp)
0850f15e +0x028:  movl   $0x0,-0x14(%ebp)
0850f165 +0x02f:  movb   $0x0,-0xd(%ebp)
0850f169 +0x033:  movl   $0x0,-0xc(%ebp)
0850f170 +0x03a:  jmp    0850f36e <+0x238>
0850f175 +0x03f:  mov    0x8(%ebp),%eax
0850f178 +0x042:  lea    0x210(%eax),%edx
0850f17e +0x048:  lea    -0x2c(%ebp),%eax
0850f181 +0x04b:  mov    %edx,0x4(%esp)
0850f185 +0x04f:  mov    %eax,(%esp)
0850f188 +0x052:  call   0851781c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3e51>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3e51
0850f18d +0x057:  sub    $0x4,%esp
0850f190 +0x05a:  movl   $0xf4240,(%esp)
0850f197 +0x061:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0850f19c +0x066:  mov    %eax,-0x20(%ebp)
0850f19f +0x069:  movl   $0x0,-0x1c(%ebp)
0850f1a6 +0x070:  movl   $0x0,-0x18(%ebp)
0850f1ad +0x077:  jmp    0850f225 <+0xef>
0850f1af +0x079:  lea    -0x2c(%ebp),%eax
0850f1b2 +0x07c:  mov    %eax,(%esp)
0850f1b5 +0x07f:  call   08517892 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3ec7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3ec7
0850f1ba +0x084:  mov    0x8(%eax),%edx
0850f1bd +0x087:  mov    -0x1c(%ebp),%eax
0850f1c0 +0x08a:  lea    (%edx,%eax,1),%eax
0850f1c3 +0x08d:  mov    %eax,-0x1c(%ebp)
0850f1c6 +0x090:  mov    -0x1c(%ebp),%eax
0850f1c9 +0x093:  cmp    -0x20(%ebp),%eax
0850f1cc +0x096:  jle    0850f208 <+0xd2>
0850f1ce +0x098:  lea    -0x2c(%ebp),%eax
0850f1d1 +0x09b:  mov    %eax,(%esp)
0850f1d4 +0x09e:  call   08517892 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3ec7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3ec7
0850f1d9 +0x0a3:  mov    (%eax),%eax
0850f1db +0x0a5:  mov    %eax,-0x18(%ebp)
0850f1de +0x0a8:  lea    -0x2c(%ebp),%eax
0850f1e1 +0x0ab:  mov    %eax,(%esp)
0850f1e4 +0x0ae:  call   08517892 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3ec7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3ec7
0850f1e9 +0x0b3:  mov    0x4(%eax),%eax
0850f1ec +0x0b6:  mov    %eax,-0x14(%ebp)
0850f1ef +0x0b9:  lea    -0x2c(%ebp),%eax
0850f1f2 +0x0bc:  mov    %eax,(%esp)
0850f1f5 +0x0bf:  call   08517892 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3ec7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3ec7
0850f1fa +0x0c4:  movzbl 0xc(%eax),%eax
0850f1fe +0x0c8:  test   %al,%al
0850f200 +0x0ca:  setne  %al
0850f203 +0x0cd:  mov    %al,-0xd(%ebp)
0850f206 +0x0d0:  jmp    0850f25a <+0x124>
0850f208 +0x0d2:  lea    -0x24(%ebp),%eax
0850f20b +0x0d5:  movl   $0x0,0x8(%esp)
0850f213 +0x0dd:  lea    -0x2c(%ebp),%edx
0850f216 +0x0e0:  mov    %edx,0x4(%esp)
0850f21a +0x0e4:  mov    %eax,(%esp)
0850f21d +0x0e7:  call   0851789c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3ed1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3ed1
0850f222 +0x0ec:  sub    $0x4,%esp
0850f225 +0x0ef:  mov    0x8(%ebp),%eax
0850f228 +0x0f2:  lea    0x210(%eax),%edx
0850f22e +0x0f8:  lea    -0x28(%ebp),%eax
0850f231 +0x0fb:  mov    %edx,0x4(%esp)
0850f235 +0x0ff:  mov    %eax,(%esp)
0850f238 +0x102:  call   08517840 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3e75>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3e75
0850f23d +0x107:  sub    $0x4,%esp
0850f240 +0x10a:  lea    -0x28(%ebp),%eax
0850f243 +0x10d:  mov    %eax,0x4(%esp)
0850f247 +0x111:  lea    -0x2c(%ebp),%eax
0850f24a +0x114:  mov    %eax,(%esp)
0850f24d +0x117:  call   08517866 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3e9b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3e9b
0850f252 +0x11c:  test   %al,%al
0850f254 +0x11e:  jne    0850f1af <+0x79>
0850f25a +0x124:  cmpl   $0x0,-0x18(%ebp)
0850f25e +0x128:  jne    0850f28a <+0x154>
0850f260 +0x12a:  mov    0x8(%ebp),%eax
0850f263 +0x12d:  mov    0x204(%eax),%eax
0850f269 +0x133:  mov    %eax,-0x18(%ebp)
0850f26c +0x136:  mov    0x8(%ebp),%eax
0850f26f +0x139:  mov    0x208(%eax),%eax
0850f275 +0x13f:  mov    %eax,-0x14(%ebp)
0850f278 +0x142:  mov    0x8(%ebp),%eax
0850f27b +0x145:  movzbl 0x20c(%eax),%eax
0850f282 +0x14c:  test   %al,%al
0850f284 +0x14e:  setne  %al
0850f287 +0x151:  mov    %al,-0xd(%ebp)
0850f28a +0x154:  lea    -0x69(%ebp),%eax
0850f28d +0x157:  mov    %eax,(%esp)
0850f290 +0x15a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0850f295 +0x15f:  mov    -0x18(%ebp),%eax
0850f298 +0x162:  mov    %eax,-0x67(%ebp)
0850f29b +0x165:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850f2a0 +0x16a:  mov    0xc(%eax),%eax
0850f2a3 +0x16d:  mov    -0x14(%ebp),%edx
0850f2a6 +0x170:  mov    %edx,0xc(%esp)
0850f2aa +0x174:  lea    -0x69(%ebp),%edx
0850f2ad +0x177:  mov    %edx,0x8(%esp)
0850f2b1 +0x17b:  movl   $0x2,0x4(%esp)
0850f2b9 +0x183:  mov    %eax,(%esp)
0850f2bc +0x186:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0850f2c1 +0x18b:  lea    -0xa7(%ebp),%eax
0850f2c7 +0x191:  mov    %eax,(%esp)
0850f2ca +0x194:  call   0851775a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d8f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d8f
0850f2cf +0x199:  mov    -0x69(%ebp),%eax
0850f2d2 +0x19c:  mov    %eax,-0xa7(%ebp)
0850f2d8 +0x1a2:  mov    -0x65(%ebp),%eax
0850f2db +0x1a5:  mov    %eax,-0xa3(%ebp)
0850f2e1 +0x1ab:  mov    -0x61(%ebp),%eax
0850f2e4 +0x1ae:  mov    %eax,-0x9f(%ebp)
0850f2ea +0x1b4:  mov    -0x5d(%ebp),%eax
0850f2ed +0x1b7:  mov    %eax,-0x9b(%ebp)
0850f2f3 +0x1bd:  mov    -0x59(%ebp),%eax
0850f2f6 +0x1c0:  mov    %eax,-0x97(%ebp)
0850f2fc +0x1c6:  mov    -0x55(%ebp),%eax
0850f2ff +0x1c9:  mov    %eax,-0x93(%ebp)
0850f305 +0x1cf:  mov    -0x51(%ebp),%eax
0850f308 +0x1d2:  mov    %eax,-0x8f(%ebp)
0850f30e +0x1d8:  mov    -0x4d(%ebp),%eax
0850f311 +0x1db:  mov    %eax,-0x8b(%ebp)
0850f317 +0x1e1:  mov    -0x49(%ebp),%eax
0850f31a +0x1e4:  mov    %eax,-0x87(%ebp)
0850f320 +0x1ea:  mov    -0x45(%ebp),%eax
0850f323 +0x1ed:  mov    %eax,-0x83(%ebp)
0850f329 +0x1f3:  mov    -0x41(%ebp),%eax
0850f32c +0x1f6:  mov    %eax,-0x7f(%ebp)
0850f32f +0x1f9:  mov    -0x3d(%ebp),%eax
0850f332 +0x1fc:  mov    %eax,-0x7b(%ebp)
0850f335 +0x1ff:  mov    -0x39(%ebp),%eax
0850f338 +0x202:  mov    %eax,-0x77(%ebp)
0850f33b +0x205:  mov    -0x35(%ebp),%eax
0850f33e +0x208:  mov    %eax,-0x73(%ebp)
0850f341 +0x20b:  mov    -0x31(%ebp),%eax
0850f344 +0x20e:  mov    %eax,-0x6f(%ebp)
0850f347 +0x211:  movzbl -0x2d(%ebp),%eax
0850f34b +0x215:  mov    %al,-0x6b(%ebp)
0850f34e +0x218:  movzbl -0xd(%ebp),%eax
0850f352 +0x21c:  mov    %al,-0x6a(%ebp)
0850f355 +0x21f:  lea    -0xa7(%ebp),%eax
0850f35b +0x225:  mov    %eax,0x4(%esp)
0850f35f +0x229:  mov    0xc(%ebp),%eax
0850f362 +0x22c:  mov    %eax,(%esp)
0850f365 +0x22f:  call   08517774 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3da9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3da9
0850f36a +0x234:  addl   $0x1,-0xc(%ebp)
0850f36e +0x238:  mov    0x8(%ebp),%eax
0850f371 +0x23b:  mov    0x200(%eax),%eax
0850f377 +0x241:  cmp    -0xc(%ebp),%eax
0850f37a +0x244:  seta   %al
0850f37d +0x247:  test   %al,%al
0850f37f +0x249:  jne    0850f175 <+0x3f>
0850f385 +0x24f:  jmp    0850f388 <+0x252>
0850f387 +0x251:  nop
0850f388 +0x252:  leave
0850f389 +0x253:  ret
```

## 反编译 C

```c
// CStackableItem::get_multibox_default_item @ 0x850f136

/* CStackableItem::get_multibox_default_item(std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >*) */

void __thiscall CStackableItem::get_multibox_default_item(CStackableItem *this,vector *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_ab;
  undefined4 local_a7;
  undefined4 local_a3;
  undefined4 local_9f;
  undefined4 local_9b;
  undefined4 local_97;
  undefined4 local_93;
  undefined4 local_8f;
  undefined4 local_8b;
  undefined4 local_87;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined2 local_6d;
  undefined2 uStack_6b;
  undefined2 uStack_69;
  undefined2 uStack_67;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined1 local_31;
  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
  local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_11;
  uint local_10;
  
  if (param_1 != (vector *)0x0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_11 = 0;
    for (local_10 = 0; local_10 < *(uint *)(this + 0x200); local_10 = local_10 + 1) {
      std::
      vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>
      ::begin();
      local_24 = get_rand_int(1000000);
      local_20 = 0;
      local_1c = 0;
      while( true ) {
        std::
        vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>
        ::end();
        bVar1 = __gnu_cxx::operator!=(local_30,local_2c);
        if (!bVar1) break;
        iVar3 = __gnu_cxx::
                __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                ::operator*(local_30);
        local_20 = *(int *)(iVar3 + 8) + local_20;
        if (local_24 < local_20) {
          piVar2 = (int *)__gnu_cxx::
                          __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                          ::operator*(local_30);
          local_1c = *piVar2;
          iVar3 = __gnu_cxx::
                  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                  ::operator*(local_30);
          local_18 = *(undefined4 *)(iVar3 + 4);
          iVar3 = __gnu_cxx::
                  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                  ::operator*(local_30);
          local_11 = *(char *)(iVar3 + 0xc) != '\0';
          break;
        }
        __gnu_cxx::
        __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
        ::operator++(local_28,(int)local_30);
      }
      if (local_1c == 0) {
        local_1c = *(int *)(this + 0x204);
        local_18 = *(undefined4 *)(this + 0x208);
        local_11 = this[0x20c] != (CStackableItem)0x0;
      }
      Inven_Item::Inven_Item((Inven_Item *)&local_6d);
      uStack_6b = (undefined2)local_1c;
      uStack_69 = (undefined2)((uint)local_1c >> 0x10);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),2,&local_6d,local_18);
      std::pair<Inven_Item,bool>::pair((pair<Inven_Item,bool> *)&local_ab);
      local_ab = CONCAT22(uStack_6b,local_6d);
      local_a7 = CONCAT22(uStack_67,uStack_69);
      local_a3 = local_65;
      local_9f = local_61;
      local_9b = local_5d;
      local_97 = local_59;
      local_93 = local_55;
      local_8f = local_51;
      local_8b = local_4d;
      local_87 = local_49;
      local_83 = local_45;
      local_7f = local_41;
      local_7b = local_3d;
      local_77 = local_39;
      local_73 = local_35;
      local_6f = local_31;
      local_6e = local_11;
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::push_back
                ((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                 param_1,(pair *)&local_ab);
    }
  }
  return;
}
```
