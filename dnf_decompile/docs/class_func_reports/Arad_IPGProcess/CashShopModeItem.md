# CashShopModeItem

`_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic`

`Arad_IPGProcess::CashShopModeItem(CUser*, unsigned long, unsigned short, int, long, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, unsigned int, int, char)`

| 类 | 地址 |
|---|---|
| `Arad_IPGProcess` | `0x0819c4a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819c4a0  _ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic
#           Arad_IPGProcess::CashShopModeItem(CUser*, unsigned long, unsigned short, int, long, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, unsigned int, int, char)
# range [0x0819c4a0, 0x0819c66f]
0819c4a0 +0x000:  push   %ebp
0819c4a1 +0x001:  mov    %esp,%ebp
0819c4a3 +0x003:  push   %ebx
0819c4a4 +0x004:  sub    $0xd4,%esp
0819c4aa +0x00a:  mov    0x14(%ebp),%edx
0819c4ad +0x00d:  mov    0x34(%ebp),%eax
0819c4b0 +0x010:  mov    %dx,-0x5c(%ebp)
0819c4b4 +0x014:  mov    %al,-0x60(%ebp)
0819c4b7 +0x017:  mov    0x10(%ebp),%ebx
0819c4ba +0x01a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819c4bf +0x01f:  mov    %ebx,0x4(%esp)
0819c4c3 +0x023:  mov    %eax,(%esp)
0819c4c6 +0x026:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0819c4cb +0x02b:  mov    %eax,-0xc(%ebp)
0819c4ce +0x02e:  cmpl   $0x0,-0xc(%ebp)
0819c4d2 +0x032:  je     0819c665 <+0x1c5>
0819c4d8 +0x038:  lea    -0x49(%ebp),%eax
0819c4db +0x03b:  mov    %eax,(%esp)
0819c4de +0x03e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0819c4e3 +0x043:  mov    -0xc(%ebp),%eax
0819c4e6 +0x046:  mov    (%eax),%eax
0819c4e8 +0x048:  add    $0x8,%eax
0819c4eb +0x04b:  mov    (%eax),%edx
0819c4ed +0x04d:  lea    -0x49(%ebp),%eax
0819c4f0 +0x050:  mov    %eax,0x4(%esp)
0819c4f4 +0x054:  mov    -0xc(%ebp),%eax
0819c4f7 +0x057:  mov    %eax,(%esp)
0819c4fa +0x05a:  call   *%edx
0819c4fc +0x05c:  mov    0x10(%ebp),%eax
0819c4ff +0x05f:  mov    %eax,-0x47(%ebp)
0819c502 +0x062:  movzwl -0x5c(%ebp),%eax
0819c506 +0x066:  mov    %eax,-0x42(%ebp)
0819c509 +0x069:  cmpb   $0x1,-0x60(%ebp)
0819c50d +0x06d:  jne    0819c5ab <+0x10b>
0819c513 +0x073:  mov    0x8(%ebp),%eax
0819c516 +0x076:  mov    (%eax),%eax
0819c518 +0x078:  mov    0x30(%ebp),%edx
0819c51b +0x07b:  mov    %edx,0x4c(%esp)
0819c51f +0x07f:  mov    0x2c(%ebp),%edx
0819c522 +0x082:  mov    %edx,0x48(%esp)
0819c526 +0x086:  mov    -0x49(%ebp),%edx
0819c529 +0x089:  mov    %edx,0x8(%esp)
0819c52d +0x08d:  mov    -0x45(%ebp),%edx
0819c530 +0x090:  mov    %edx,0xc(%esp)
0819c534 +0x094:  mov    -0x41(%ebp),%edx
0819c537 +0x097:  mov    %edx,0x10(%esp)
0819c53b +0x09b:  mov    -0x3d(%ebp),%edx
0819c53e +0x09e:  mov    %edx,0x14(%esp)
0819c542 +0x0a2:  mov    -0x39(%ebp),%edx
0819c545 +0x0a5:  mov    %edx,0x18(%esp)
0819c549 +0x0a9:  mov    -0x35(%ebp),%edx
0819c54c +0x0ac:  mov    %edx,0x1c(%esp)
0819c550 +0x0b0:  mov    -0x31(%ebp),%edx
0819c553 +0x0b3:  mov    %edx,0x20(%esp)
0819c557 +0x0b7:  mov    -0x2d(%ebp),%edx
0819c55a +0x0ba:  mov    %edx,0x24(%esp)
0819c55e +0x0be:  mov    -0x29(%ebp),%edx
0819c561 +0x0c1:  mov    %edx,0x28(%esp)
0819c565 +0x0c5:  mov    -0x25(%ebp),%edx
0819c568 +0x0c8:  mov    %edx,0x2c(%esp)
0819c56c +0x0cc:  mov    -0x21(%ebp),%edx
0819c56f +0x0cf:  mov    %edx,0x30(%esp)
0819c573 +0x0d3:  mov    -0x1d(%ebp),%edx
0819c576 +0x0d6:  mov    %edx,0x34(%esp)
0819c57a +0x0da:  mov    -0x19(%ebp),%edx
0819c57d +0x0dd:  mov    %edx,0x38(%esp)
0819c581 +0x0e1:  mov    -0x15(%ebp),%edx
0819c584 +0x0e4:  mov    %edx,0x3c(%esp)
0819c588 +0x0e8:  mov    -0x11(%ebp),%edx
0819c58b +0x0eb:  mov    %edx,0x40(%esp)
0819c58f +0x0ef:  movzbl -0xd(%ebp),%edx
0819c593 +0x0f3:  mov    %dl,0x44(%esp)
0819c597 +0x0f7:  mov    0xc(%ebp),%edx
0819c59a +0x0fa:  mov    %edx,0x4(%esp)
0819c59e +0x0fe:  mov    %eax,(%esp)
0819c5a1 +0x101:  call   083264d6 <_ZN8WongWork9CCeraShop16_processItemGiftEP5CUser10Inven_Itemji>  ; WongWork::CCeraShop::_processItemGift(CUser*, Inven_Item, unsigned int, int)
0819c5a6 +0x106:  jmp    0819c666 <+0x1c6>
0819c5ab +0x10b:  mov    0x8(%ebp),%eax
0819c5ae +0x10e:  mov    (%eax),%eax
0819c5b0 +0x110:  mov    0x24(%ebp),%edx
0819c5b3 +0x113:  mov    %edx,0x60(%esp)
0819c5b7 +0x117:  mov    0x20(%ebp),%edx
0819c5ba +0x11a:  mov    %edx,0x5c(%esp)
0819c5be +0x11e:  movl   $0x1,0x58(%esp)
0819c5c6 +0x126:  movl   $0x0,0x54(%esp)
0819c5ce +0x12e:  mov    0x1c(%ebp),%edx
0819c5d1 +0x131:  mov    %edx,0x50(%esp)
0819c5d5 +0x135:  mov    0x28(%ebp),%edx
0819c5d8 +0x138:  mov    %edx,0x4c(%esp)
0819c5dc +0x13c:  mov    0x18(%ebp),%edx
0819c5df +0x13f:  mov    %edx,0x48(%esp)
0819c5e3 +0x143:  mov    -0x49(%ebp),%edx
0819c5e6 +0x146:  mov    %edx,0x8(%esp)
0819c5ea +0x14a:  mov    -0x45(%ebp),%edx
0819c5ed +0x14d:  mov    %edx,0xc(%esp)
0819c5f1 +0x151:  mov    -0x41(%ebp),%edx
0819c5f4 +0x154:  mov    %edx,0x10(%esp)
0819c5f8 +0x158:  mov    -0x3d(%ebp),%edx
0819c5fb +0x15b:  mov    %edx,0x14(%esp)
0819c5ff +0x15f:  mov    -0x39(%ebp),%edx
0819c602 +0x162:  mov    %edx,0x18(%esp)
0819c606 +0x166:  mov    -0x35(%ebp),%edx
0819c609 +0x169:  mov    %edx,0x1c(%esp)
0819c60d +0x16d:  mov    -0x31(%ebp),%edx
0819c610 +0x170:  mov    %edx,0x20(%esp)
0819c614 +0x174:  mov    -0x2d(%ebp),%edx
0819c617 +0x177:  mov    %edx,0x24(%esp)
0819c61b +0x17b:  mov    -0x29(%ebp),%edx
0819c61e +0x17e:  mov    %edx,0x28(%esp)
0819c622 +0x182:  mov    -0x25(%ebp),%edx
0819c625 +0x185:  mov    %edx,0x2c(%esp)
0819c629 +0x189:  mov    -0x21(%ebp),%edx
0819c62c +0x18c:  mov    %edx,0x30(%esp)
0819c630 +0x190:  mov    -0x1d(%ebp),%edx
0819c633 +0x193:  mov    %edx,0x34(%esp)
0819c637 +0x197:  mov    -0x19(%ebp),%edx
0819c63a +0x19a:  mov    %edx,0x38(%esp)
0819c63e +0x19e:  mov    -0x15(%ebp),%edx
0819c641 +0x1a1:  mov    %edx,0x3c(%esp)
0819c645 +0x1a5:  mov    -0x11(%ebp),%edx
0819c648 +0x1a8:  mov    %edx,0x40(%esp)
0819c64c +0x1ac:  movzbl -0xd(%ebp),%edx
0819c650 +0x1b0:  mov    %dl,0x44(%esp)
0819c654 +0x1b4:  mov    0xc(%ebp),%edx
0819c657 +0x1b7:  mov    %edx,0x4(%esp)
0819c65b +0x1bb:  mov    %eax,(%esp)
0819c65e +0x1be:  call   08325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>  ; WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)
0819c663 +0x1c3:  jmp    0819c666 <+0x1c6>
0819c665 +0x1c5:  nop
0819c666 +0x1c6:  add    $0xd4,%esp
0819c66c +0x1cc:  pop    %ebx
0819c66d +0x1cd:  pop    %ebp
0819c66e +0x1ce:  ret
0819c66f +0x1cf:  nop
```

## 反编译 C

```c
// Arad_IPGProcess::CashShopModeItem @ 0x819c4a0

/* Arad_IPGProcess::CashShopModeItem(CUser*, unsigned long, unsigned short, int, long,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, int&, unsigned int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeItem
          (Arad_IPGProcess *this,CUser *param_1,ulong param_2,ushort param_3,int param_4,
          long param_5,vector *param_6,stCeraShopItemParam_t *param_7,int *param_8,uint param_9,
          int param_10,char param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  undefined2 local_4d;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  uint uStack_46;
  undefined1 uStack_42;
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
  int *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this_00,param_2);
  if (local_10 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_4d);
    (**(code **)(*local_10 + 8))(local_10,&local_4d);
    uStack_4b._0_2_ = (undefined2)param_2;
    uStack_4b._2_2_ = (undefined2)(param_2 >> 0x10);
    uStack_46._0_1_ = (undefined1)param_3;
    uStack_46._1_3_ = (uint3)(byte)(param_3 >> 8);
    uStack_46 = (uint)param_3;
    uStack_4b = param_2;
    if (param_11 == '\x01') {
      uVar1 = CONCAT22((undefined2)uStack_4b,local_4d);
      uVar2 = CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_));
      uVar3 = CONCAT13(uStack_42,uStack_46._1_3_);
      WongWork::CCeraShop::_processItemGift
                (*(undefined4 *)this,param_1,uVar1,uVar2,uVar3,local_41,local_3d,local_39,local_35,
                 local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,
                 param_9,param_10);
    }
    else {
      uVar1 = CONCAT22((undefined2)uStack_4b,local_4d);
      uVar2 = CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_));
      uVar3 = CONCAT13(uStack_42,uStack_46._1_3_);
      WongWork::CCeraShop::_processItem
                (*(undefined4 *)this,param_1,uVar1,uVar2,uVar3,local_41,local_3d,local_39,local_35,
                 local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,
                 param_4,param_8,param_5,0,1,param_6,param_7);
    }
  }
  return;
}
```
