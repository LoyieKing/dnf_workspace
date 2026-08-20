# insertItemIntoCreatureStackable

`_ZN10CInventory31insertItemIntoCreatureStackableE10Inven_Item14eItemAddReasonb`

`CInventory::insertItemIntoCreatureStackable(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a52c  _ZN10CInventory31insertItemIntoCreatureStackableE10Inven_Item14eItemAddReasonb
#           CInventory::insertItemIntoCreatureStackable(Inven_Item, eItemAddReason, bool)
# range [0x0850a52c, 0x0850a761]
0850a52c +0x000:  push   %ebp
0850a52d +0x001:  mov    %esp,%ebp
0850a52f +0x003:  push   %esi
0850a530 +0x004:  push   %ebx
0850a531 +0x005:  sub    $0x40,%esp
0850a534 +0x008:  mov    0x50(%ebp),%eax
0850a537 +0x00b:  mov    %al,-0x1c(%ebp)
0850a53a +0x00e:  mov    0xe(%ebp),%eax
0850a53d +0x011:  test   %eax,%eax
0850a53f +0x013:  jne    0850a54b <+0x1f>
0850a541 +0x015:  mov    $0xffffffff,%eax
0850a546 +0x01a:  jmp    0850a75b <+0x22f>
0850a54b +0x01f:  lea    0xc(%ebp),%eax
0850a54e +0x022:  mov    %eax,0x4(%esp)
0850a552 +0x026:  mov    0x8(%ebp),%eax
0850a555 +0x029:  mov    %eax,(%esp)
0850a558 +0x02c:  call   0850a3b6 <_ZNK10CInventory20GetExistCreatureSlotER10Inven_Item>  ; CInventory::GetExistCreatureSlot(Inven_Item&) const
0850a55d +0x031:  mov    %eax,-0xc(%ebp)
0850a560 +0x034:  cmpl   $0x0,-0xc(%ebp)
0850a564 +0x038:  js     0850a6b2 <+0x186>
0850a56a +0x03e:  lea    0xc(%ebp),%eax
0850a56d +0x041:  mov    %eax,(%esp)
0850a570 +0x044:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a575 +0x049:  mov    $0x7fffffff,%edx
0850a57a +0x04e:  mov    %edx,%ebx
0850a57c +0x050:  sub    %eax,%ebx
0850a57e +0x052:  mov    0x8(%ebp),%eax
0850a581 +0x055:  mov    0x6e4(%eax),%edx
0850a587 +0x05b:  mov    -0xc(%ebp),%eax
0850a58a +0x05e:  imul   $0x3d,%eax,%eax
0850a58d +0x061:  lea    (%edx,%eax,1),%eax
0850a590 +0x064:  mov    %eax,(%esp)
0850a593 +0x067:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a598 +0x06c:  cmp    %eax,%ebx
0850a59a +0x06e:  setle  %al
0850a59d +0x071:  test   %al,%al
0850a59f +0x073:  jne    0850a6b2 <+0x186>
0850a5a5 +0x079:  mov    0x8(%ebp),%eax
0850a5a8 +0x07c:  mov    0x6e4(%eax),%edx
0850a5ae +0x082:  mov    -0xc(%ebp),%eax
0850a5b1 +0x085:  imul   $0x3d,%eax,%eax
0850a5b4 +0x088:  lea    (%edx,%eax,1),%eax
0850a5b7 +0x08b:  mov    %eax,(%esp)
0850a5ba +0x08e:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a5bf +0x093:  mov    %eax,%ebx
0850a5c1 +0x095:  lea    0xc(%ebp),%eax
0850a5c4 +0x098:  mov    %eax,(%esp)
0850a5c7 +0x09b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a5cc +0x0a0:  lea    (%ebx,%eax,1),%edx
0850a5cf +0x0a3:  mov    0x8(%ebp),%eax
0850a5d2 +0x0a6:  mov    0x6e4(%eax),%ecx
0850a5d8 +0x0ac:  mov    -0xc(%ebp),%eax
0850a5db +0x0af:  imul   $0x3d,%eax,%eax
0850a5de +0x0b2:  lea    (%ecx,%eax,1),%eax
0850a5e1 +0x0b5:  mov    0x2(%eax),%eax
0850a5e4 +0x0b8:  mov    %edx,0x4(%esp)
0850a5e8 +0x0bc:  mov    %eax,(%esp)
0850a5eb +0x0bf:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
0850a5f0 +0x0c4:  xor    $0x1,%eax
0850a5f3 +0x0c7:  test   %al,%al
0850a5f5 +0x0c9:  je     0850a601 <+0xd5>
0850a5f7 +0x0cb:  mov    $0xfffffff6,%eax
0850a5fc +0x0d0:  jmp    0850a75b <+0x22f>
0850a601 +0x0d5:  mov    0x8(%ebp),%eax
0850a604 +0x0d8:  mov    0x6e4(%eax),%edx
0850a60a +0x0de:  mov    -0xc(%ebp),%eax
0850a60d +0x0e1:  imul   $0x3d,%eax,%eax
0850a610 +0x0e4:  lea    (%edx,%eax,1),%eax
0850a613 +0x0e7:  mov    %eax,(%esp)
0850a616 +0x0ea:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a61b +0x0ef:  mov    %eax,%ebx
0850a61d +0x0f1:  lea    0xc(%ebp),%eax
0850a620 +0x0f4:  mov    %eax,(%esp)
0850a623 +0x0f7:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a628 +0x0fc:  lea    (%ebx,%eax,1),%edx
0850a62b +0x0ff:  mov    0x8(%ebp),%eax
0850a62e +0x102:  mov    0x6e4(%eax),%ecx
0850a634 +0x108:  mov    -0xc(%ebp),%eax
0850a637 +0x10b:  imul   $0x3d,%eax,%eax
0850a63a +0x10e:  lea    (%ecx,%eax,1),%eax
0850a63d +0x111:  mov    %edx,0x4(%esp)
0850a641 +0x115:  mov    %eax,(%esp)
0850a644 +0x118:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0850a649 +0x11d:  cmpb   $0x0,-0x1c(%ebp)
0850a64d +0x121:  je     0850a6aa <+0x17e>
0850a64f +0x123:  movzbl 0xd(%ebp),%eax
0850a653 +0x127:  movzbl %al,%esi
0850a656 +0x12a:  lea    0xc(%ebp),%eax
0850a659 +0x12d:  mov    %eax,(%esp)
0850a65c +0x130:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a661 +0x135:  mov    %eax,%ebx
0850a663 +0x137:  mov    0x8(%ebp),%eax
0850a666 +0x13a:  mov    0x6e4(%eax),%edx
0850a66c +0x140:  mov    -0xc(%ebp),%eax
0850a66f +0x143:  imul   $0x3d,%eax,%eax
0850a672 +0x146:  lea    (%edx,%eax,1),%eax
0850a675 +0x149:  mov    %eax,(%esp)
0850a678 +0x14c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a67d +0x151:  mov    0xe(%ebp),%edx
0850a680 +0x154:  mov    0x4c(%ebp),%ecx
0850a683 +0x157:  mov    %ecx,0x18(%esp)
0850a687 +0x15b:  mov    %esi,0x14(%esp)
0850a68b +0x15f:  mov    %ebx,0x10(%esp)
0850a68f +0x163:  mov    %eax,0xc(%esp)
0850a693 +0x167:  mov    %edx,0x8(%esp)
0850a697 +0x16b:  movl   $0x1,0x4(%esp)
0850a69f +0x173:  mov    0x8(%ebp),%eax
0850a6a2 +0x176:  mov    %eax,(%esp)
0850a6a5 +0x179:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0850a6aa +0x17e:  mov    -0xc(%ebp),%eax
0850a6ad +0x181:  jmp    0850a75b <+0x22f>
0850a6b2 +0x186:  lea    0xc(%ebp),%eax
0850a6b5 +0x189:  mov    %eax,0x4(%esp)
0850a6b9 +0x18d:  mov    0x8(%ebp),%eax
0850a6bc +0x190:  mov    %eax,(%esp)
0850a6bf +0x193:  call   0850a436 <_ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item>  ; CInventory::GetEmptyCreatureSlot(Inven_Item&) const
0850a6c4 +0x198:  mov    %eax,-0xc(%ebp)
0850a6c7 +0x19b:  cmpl   $0x0,-0xc(%ebp)
0850a6cb +0x19f:  jns    0850a6d7 <+0x1ab>
0850a6cd +0x1a1:  mov    $0xffffffff,%eax
0850a6d2 +0x1a6:  jmp    0850a75b <+0x22f>
0850a6d7 +0x1ab:  mov    0x8(%ebp),%eax
0850a6da +0x1ae:  mov    0x6e4(%eax),%edx
0850a6e0 +0x1b4:  mov    -0xc(%ebp),%eax
0850a6e3 +0x1b7:  imul   $0x3d,%eax,%eax
0850a6e6 +0x1ba:  add    %eax,%edx
0850a6e8 +0x1bc:  lea    0xc(%ebp),%eax
0850a6eb +0x1bf:  mov    %eax,0x4(%esp)
0850a6ef +0x1c3:  mov    %edx,(%esp)
0850a6f2 +0x1c6:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0850a6f7 +0x1cb:  cmpb   $0x0,-0x1c(%ebp)
0850a6fb +0x1cf:  je     0850a758 <+0x22c>
0850a6fd +0x1d1:  movzbl 0xd(%ebp),%eax
0850a701 +0x1d5:  movzbl %al,%esi
0850a704 +0x1d8:  lea    0xc(%ebp),%eax
0850a707 +0x1db:  mov    %eax,(%esp)
0850a70a +0x1de:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a70f +0x1e3:  mov    %eax,%ebx
0850a711 +0x1e5:  mov    0x8(%ebp),%eax
0850a714 +0x1e8:  mov    0x6e4(%eax),%edx
0850a71a +0x1ee:  mov    -0xc(%ebp),%eax
0850a71d +0x1f1:  imul   $0x3d,%eax,%eax
0850a720 +0x1f4:  lea    (%edx,%eax,1),%eax
0850a723 +0x1f7:  mov    %eax,(%esp)
0850a726 +0x1fa:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850a72b +0x1ff:  mov    0xe(%ebp),%edx
0850a72e +0x202:  mov    0x4c(%ebp),%ecx
0850a731 +0x205:  mov    %ecx,0x18(%esp)
0850a735 +0x209:  mov    %esi,0x14(%esp)
0850a739 +0x20d:  mov    %ebx,0x10(%esp)
0850a73d +0x211:  mov    %eax,0xc(%esp)
0850a741 +0x215:  mov    %edx,0x8(%esp)
0850a745 +0x219:  movl   $0x3,0x4(%esp)
0850a74d +0x221:  mov    0x8(%ebp),%eax
0850a750 +0x224:  mov    %eax,(%esp)
0850a753 +0x227:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0850a758 +0x22c:  mov    -0xc(%ebp),%eax
0850a75b +0x22f:  add    $0x40,%esp
0850a75e +0x232:  pop    %ebx
0850a75f +0x233:  pop    %esi
0850a760 +0x234:  pop    %ebp
0850a761 +0x235:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
