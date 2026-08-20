# insertInvenItemIntoQuickSlot

`_ZN10CInventory28insertInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb`

`CInventory::insertInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08502470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08502470  _ZN10CInventory28insertInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb
#           CInventory::insertInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)
# range [0x08502470, 0x085025f7]
08502470 +0x000:  push   %ebp
08502471 +0x001:  mov    %esp,%ebp
08502473 +0x003:  push   %ebx
08502474 +0x004:  sub    $0x44,%esp
08502477 +0x007:  mov    0x50(%ebp),%eax
0850247a +0x00a:  mov    %al,-0x1c(%ebp)
0850247d +0x00d:  movl   $0x3,-0xc(%ebp)
08502484 +0x014:  jmp    085025dd <+0x16d>
08502489 +0x019:  mov    0x8(%ebp),%eax
0850248c +0x01c:  mov    0x650(%eax),%edx
08502492 +0x022:  mov    -0xc(%ebp),%eax
08502495 +0x025:  imul   $0x3d,%eax,%eax
08502498 +0x028:  lea    (%edx,%eax,1),%eax
0850249b +0x02b:  mov    0x2(%eax),%eax
0850249e +0x02e:  test   %eax,%eax
085024a0 +0x030:  jne    085025d9 <+0x169>
085024a6 +0x036:  movzbl 0xd(%ebp),%eax
085024aa +0x03a:  cmp    $0x1,%al
085024ac +0x03c:  je     085024d1 <+0x61>
085024ae +0x03e:  mov    0x13(%ebp),%edx
085024b1 +0x041:  mov    0xe(%ebp),%eax
085024b4 +0x044:  mov    %edx,0x4(%esp)
085024b8 +0x048:  mov    %eax,(%esp)
085024bb +0x04b:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
085024c0 +0x050:  xor    $0x1,%eax
085024c3 +0x053:  test   %al,%al
085024c5 +0x055:  je     085024d1 <+0x61>
085024c7 +0x057:  mov    $0xfffffff6,%eax
085024cc +0x05c:  jmp    085025f1 <+0x181>
085024d1 +0x061:  mov    0x8(%ebp),%eax
085024d4 +0x064:  mov    0x650(%eax),%edx
085024da +0x06a:  mov    -0xc(%ebp),%eax
085024dd +0x06d:  imul   $0x3d,%eax,%eax
085024e0 +0x070:  add    %eax,%edx
085024e2 +0x072:  lea    0xc(%ebp),%eax
085024e5 +0x075:  mov    %eax,0x4(%esp)
085024e9 +0x079:  mov    %edx,(%esp)
085024ec +0x07c:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085024f1 +0x081:  cmpb   $0x0,-0x1c(%ebp)
085024f5 +0x085:  je     085025d4 <+0x164>
085024fb +0x08b:  mov    0x8(%ebp),%eax
085024fe +0x08e:  mov    (%eax),%eax
08502500 +0x090:  test   %eax,%eax
08502502 +0x092:  je     085025a8 <+0x138>
08502508 +0x098:  movzbl 0xd(%ebp),%eax
0850250c +0x09c:  cmp    $0x1,%al
0850250e +0x09e:  jne    0850254e <+0xde>
08502510 +0x0a0:  mov    0x8(%ebp),%eax
08502513 +0x0a3:  mov    (%eax),%eax
08502515 +0x0a5:  lea    0x79700(%eax),%edx
0850251b +0x0ab:  mov    0x4c(%ebp),%eax
0850251e +0x0ae:  mov    %eax,0x14(%esp)
08502522 +0x0b2:  lea    0xc(%ebp),%eax
08502525 +0x0b5:  mov    %eax,0x10(%esp)
08502529 +0x0b9:  movl   $0x1,0xc(%esp)
08502531 +0x0c1:  movl   $0x1,0x8(%esp)
08502539 +0x0c9:  movl   $0x1,0x4(%esp)
08502541 +0x0d1:  mov    %edx,(%esp)
08502544 +0x0d4:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08502549 +0x0d9:  jmp    085025d4 <+0x164>
0850254e +0x0de:  lea    0xc(%ebp),%eax
08502551 +0x0e1:  mov    %eax,(%esp)
08502554 +0x0e4:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502559 +0x0e9:  mov    %eax,%ebx
0850255b +0x0eb:  mov    0x8(%ebp),%eax
0850255e +0x0ee:  mov    0x650(%eax),%edx
08502564 +0x0f4:  mov    -0xc(%ebp),%eax
08502567 +0x0f7:  imul   $0x3d,%eax,%eax
0850256a +0x0fa:  lea    (%edx,%eax,1),%eax
0850256d +0x0fd:  mov    %eax,(%esp)
08502570 +0x100:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502575 +0x105:  mov    0x8(%ebp),%edx
08502578 +0x108:  mov    (%edx),%edx
0850257a +0x10a:  lea    0x79700(%edx),%ecx
08502580 +0x110:  mov    0x4c(%ebp),%edx
08502583 +0x113:  mov    %edx,0x14(%esp)
08502587 +0x117:  lea    0xc(%ebp),%edx
0850258a +0x11a:  mov    %edx,0x10(%esp)
0850258e +0x11e:  mov    %ebx,0xc(%esp)
08502592 +0x122:  mov    %eax,0x8(%esp)
08502596 +0x126:  movl   $0x1,0x4(%esp)
0850259e +0x12e:  mov    %ecx,(%esp)
085025a1 +0x131:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
085025a6 +0x136:  jmp    085025d4 <+0x164>
085025a8 +0x138:  movl   $"History ERROR, m_pParent NULL, ItemAdd ",0x10(%esp)
085025b0 +0x140:  movl   $0x1528,0xc(%esp)
085025b8 +0x148:  movl   $&_ZZN10CInventory28insertInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonbE19__PRETTY_FUNCTION__,0x8(%esp)
085025c0 +0x150:  movl   $"inventory.cpp",0x4(%esp)
085025c8 +0x158:  movl   $0x1,(%esp)
085025cf +0x15f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085025d4 +0x164:  mov    -0xc(%ebp),%eax
085025d7 +0x167:  jmp    085025f1 <+0x181>
085025d9 +0x169:  addl   $0x1,-0xc(%ebp)
085025dd +0x16d:  cmpl   $0x8,-0xc(%ebp)
085025e1 +0x171:  setle  %al
085025e4 +0x174:  test   %al,%al
085025e6 +0x176:  jne    08502489 <+0x19>
085025ec +0x17c:  mov    $0xfffffffe,%eax
085025f1 +0x181:  add    $0x44,%esp
085025f4 +0x184:  pop    %ebx
085025f5 +0x185:  pop    %ebp
085025f6 +0x186:  ret
085025f7 +0x187:  nop
```

## 反编译 C

> （该函数反编译 C 未生成）
