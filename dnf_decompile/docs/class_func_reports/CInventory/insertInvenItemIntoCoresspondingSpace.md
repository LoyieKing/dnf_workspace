# insertInvenItemIntoCoresspondingSpace

`_ZN10CInventory37insertInvenItemIntoCoresspondingSpaceE10Inven_Item14eItemAddReasonb`

`CInventory::insertInvenItemIntoCoresspondingSpace(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085025f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085025f8  _ZN10CInventory37insertInvenItemIntoCoresspondingSpaceE10Inven_Item14eItemAddReasonb
#           CInventory::insertInvenItemIntoCoresspondingSpace(Inven_Item, eItemAddReason, bool)
# range [0x085025f8, 0x085027b1]
085025f8 +0x000:  push   %ebp
085025f9 +0x001:  mov    %esp,%ebp
085025fb +0x003:  push   %ebx
085025fc +0x004:  sub    $0x44,%esp
085025ff +0x007:  mov    0x50(%ebp),%eax
08502602 +0x00a:  mov    %al,-0x1c(%ebp)
08502605 +0x00d:  movl   $0x0,-0x10(%ebp)
0850260c +0x014:  movl   $0x0,-0x14(%ebp)
08502613 +0x01b:  movzbl 0xd(%ebp),%eax
08502617 +0x01f:  movzbl %al,%eax
0850261a +0x022:  lea    -0x14(%ebp),%edx
0850261d +0x025:  mov    %edx,0xc(%esp)
08502621 +0x029:  lea    -0x10(%ebp),%edx
08502624 +0x02c:  mov    %edx,0x8(%esp)
08502628 +0x030:  mov    %eax,0x4(%esp)
0850262c +0x034:  mov    0x8(%ebp),%eax
0850262f +0x037:  mov    %eax,(%esp)
08502632 +0x03a:  call   0850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08502637 +0x03f:  mov    -0x10(%ebp),%eax
0850263a +0x042:  mov    %eax,-0xc(%ebp)
0850263d +0x045:  jmp    08502796 <+0x19e>
08502642 +0x04a:  mov    0x8(%ebp),%eax
08502645 +0x04d:  mov    0x650(%eax),%edx
0850264b +0x053:  mov    -0xc(%ebp),%eax
0850264e +0x056:  imul   $0x3d,%eax,%eax
08502651 +0x059:  lea    (%edx,%eax,1),%eax
08502654 +0x05c:  mov    0x2(%eax),%eax
08502657 +0x05f:  test   %eax,%eax
08502659 +0x061:  jne    08502792 <+0x19a>
0850265f +0x067:  movzbl 0xd(%ebp),%eax
08502663 +0x06b:  cmp    $0x1,%al
08502665 +0x06d:  je     0850268a <+0x92>
08502667 +0x06f:  mov    0x13(%ebp),%edx
0850266a +0x072:  mov    0xe(%ebp),%eax
0850266d +0x075:  mov    %edx,0x4(%esp)
08502671 +0x079:  mov    %eax,(%esp)
08502674 +0x07c:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08502679 +0x081:  xor    $0x1,%eax
0850267c +0x084:  test   %al,%al
0850267e +0x086:  je     0850268a <+0x92>
08502680 +0x088:  mov    $0xfffffff6,%eax
08502685 +0x08d:  jmp    085027ac <+0x1b4>
0850268a +0x092:  mov    0x8(%ebp),%eax
0850268d +0x095:  mov    0x650(%eax),%edx
08502693 +0x09b:  mov    -0xc(%ebp),%eax
08502696 +0x09e:  imul   $0x3d,%eax,%eax
08502699 +0x0a1:  add    %eax,%edx
0850269b +0x0a3:  lea    0xc(%ebp),%eax
0850269e +0x0a6:  mov    %eax,0x4(%esp)
085026a2 +0x0aa:  mov    %edx,(%esp)
085026a5 +0x0ad:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085026aa +0x0b2:  cmpb   $0x0,-0x1c(%ebp)
085026ae +0x0b6:  je     0850278d <+0x195>
085026b4 +0x0bc:  mov    0x8(%ebp),%eax
085026b7 +0x0bf:  mov    (%eax),%eax
085026b9 +0x0c1:  test   %eax,%eax
085026bb +0x0c3:  je     08502761 <+0x169>
085026c1 +0x0c9:  movzbl 0xd(%ebp),%eax
085026c5 +0x0cd:  cmp    $0x1,%al
085026c7 +0x0cf:  jne    08502707 <+0x10f>
085026c9 +0x0d1:  mov    0x8(%ebp),%eax
085026cc +0x0d4:  mov    (%eax),%eax
085026ce +0x0d6:  lea    0x79700(%eax),%edx
085026d4 +0x0dc:  mov    0x4c(%ebp),%eax
085026d7 +0x0df:  mov    %eax,0x14(%esp)
085026db +0x0e3:  lea    0xc(%ebp),%eax
085026de +0x0e6:  mov    %eax,0x10(%esp)
085026e2 +0x0ea:  movl   $0x1,0xc(%esp)
085026ea +0x0f2:  movl   $0x1,0x8(%esp)
085026f2 +0x0fa:  movl   $0x1,0x4(%esp)
085026fa +0x102:  mov    %edx,(%esp)
085026fd +0x105:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08502702 +0x10a:  jmp    0850278d <+0x195>
08502707 +0x10f:  lea    0xc(%ebp),%eax
0850270a +0x112:  mov    %eax,(%esp)
0850270d +0x115:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502712 +0x11a:  mov    %eax,%ebx
08502714 +0x11c:  mov    0x8(%ebp),%eax
08502717 +0x11f:  mov    0x650(%eax),%edx
0850271d +0x125:  mov    -0xc(%ebp),%eax
08502720 +0x128:  imul   $0x3d,%eax,%eax
08502723 +0x12b:  lea    (%edx,%eax,1),%eax
08502726 +0x12e:  mov    %eax,(%esp)
08502729 +0x131:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850272e +0x136:  mov    0x8(%ebp),%edx
08502731 +0x139:  mov    (%edx),%edx
08502733 +0x13b:  lea    0x79700(%edx),%ecx
08502739 +0x141:  mov    0x4c(%ebp),%edx
0850273c +0x144:  mov    %edx,0x14(%esp)
08502740 +0x148:  lea    0xc(%ebp),%edx
08502743 +0x14b:  mov    %edx,0x10(%esp)
08502747 +0x14f:  mov    %ebx,0xc(%esp)
0850274b +0x153:  mov    %eax,0x8(%esp)
0850274f +0x157:  movl   $0x1,0x4(%esp)
08502757 +0x15f:  mov    %ecx,(%esp)
0850275a +0x162:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
0850275f +0x167:  jmp    0850278d <+0x195>
08502761 +0x169:  movl   $"History ERROR, m_pParent NULL, ItemAdd ",0x10(%esp)
08502769 +0x171:  movl   $0x155c,0xc(%esp)
08502771 +0x179:  movl   $&_ZZN10CInventory37insertInvenItemIntoCoresspondingSpaceE10Inven_Item14eItemAddReasonbE19__PRETTY_FUNCTION__,0x8(%esp)
08502779 +0x181:  movl   $"inventory.cpp",0x4(%esp)
08502781 +0x189:  movl   $0x1,(%esp)
08502788 +0x190:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850278d +0x195:  mov    -0xc(%ebp),%eax
08502790 +0x198:  jmp    085027ac <+0x1b4>
08502792 +0x19a:  addl   $0x1,-0xc(%ebp)
08502796 +0x19e:  mov    -0x14(%ebp),%eax
08502799 +0x1a1:  cmp    %eax,-0xc(%ebp)
0850279c +0x1a4:  setle  %al
0850279f +0x1a7:  test   %al,%al
085027a1 +0x1a9:  jne    08502642 <+0x4a>
085027a7 +0x1af:  mov    $0xfffffffe,%eax
085027ac +0x1b4:  add    $0x44,%esp
085027af +0x1b7:  pop    %ebx
085027b0 +0x1b8:  pop    %ebp
085027b1 +0x1b9:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
