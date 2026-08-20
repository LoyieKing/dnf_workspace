# stackInvenItemIntoQuickSlot

`_ZN10CInventory27stackInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb`

`CInventory::stackInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085027b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085027b2  _ZN10CInventory27stackInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonb
#           CInventory::stackInvenItemIntoQuickSlot(Inven_Item, eItemAddReason, bool)
# range [0x085027b2, 0x08502a7d]
085027b2 +0x000:  push   %ebp
085027b3 +0x001:  mov    %esp,%ebp
085027b5 +0x003:  push   %edi
085027b6 +0x004:  push   %esi
085027b7 +0x005:  push   %ebx
085027b8 +0x006:  sub    $0x5c,%esp
085027bb +0x009:  mov    0x50(%ebp),%eax
085027be +0x00c:  mov    %al,-0x3c(%ebp)
085027c1 +0x00f:  movzbl 0xd(%ebp),%eax
085027c5 +0x013:  cmp    $0x1,%al
085027c7 +0x015:  jne    085027d3 <+0x21>
085027c9 +0x017:  mov    $0xffffffff,%eax
085027ce +0x01c:  jmp    08502a75 <+0x2c3>
085027d3 +0x021:  movl   $0x3,-0x1c(%ebp)
085027da +0x028:  jmp    08502a61 <+0x2af>
085027df +0x02d:  mov    0x8(%ebp),%eax
085027e2 +0x030:  mov    0x650(%eax),%edx
085027e8 +0x036:  mov    -0x1c(%ebp),%eax
085027eb +0x039:  imul   $0x3d,%eax,%eax
085027ee +0x03c:  lea    (%edx,%eax,1),%eax
085027f1 +0x03f:  mov    0x2(%eax),%edx
085027f4 +0x042:  mov    0xe(%ebp),%eax
085027f7 +0x045:  cmp    %eax,%edx
085027f9 +0x047:  je     08502804 <+0x52>
085027fb +0x049:  addl   $0x1,-0x1c(%ebp)
085027ff +0x04d:  jmp    08502a61 <+0x2af>
08502804 +0x052:  lea    0xc(%ebp),%eax
08502807 +0x055:  mov    %eax,(%esp)
0850280a +0x058:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850280f +0x05d:  mov    $0x7fffffff,%edx
08502814 +0x062:  mov    %edx,%ebx
08502816 +0x064:  sub    %eax,%ebx
08502818 +0x066:  mov    0x8(%ebp),%eax
0850281b +0x069:  mov    0x650(%eax),%edx
08502821 +0x06f:  mov    -0x1c(%ebp),%eax
08502824 +0x072:  imul   $0x3d,%eax,%eax
08502827 +0x075:  lea    (%edx,%eax,1),%eax
0850282a +0x078:  mov    %eax,(%esp)
0850282d +0x07b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502832 +0x080:  cmp    %eax,%ebx
08502834 +0x082:  setle  %al
08502837 +0x085:  test   %al,%al
08502839 +0x087:  je     08502933 <+0x181>
0850283f +0x08d:  cmpb   $0x0,-0x3c(%ebp)
08502843 +0x091:  je     0850290c <+0x15a>
08502849 +0x097:  mov    0x8(%ebp),%eax
0850284c +0x09a:  mov    (%eax),%eax
0850284e +0x09c:  test   %eax,%eax
08502850 +0x09e:  je     0850290c <+0x15a>
08502856 +0x0a4:  mov    0xe(%ebp),%eax
08502859 +0x0a7:  mov    %eax,-0x44(%ebp)
0850285c +0x0aa:  lea    0xc(%ebp),%eax
0850285f +0x0ad:  mov    %eax,(%esp)
08502862 +0x0b0:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502867 +0x0b5:  mov    %eax,-0x40(%ebp)
0850286a +0x0b8:  mov    0x8(%ebp),%eax
0850286d +0x0bb:  mov    0x650(%eax),%edx
08502873 +0x0c1:  mov    -0x1c(%ebp),%eax
08502876 +0x0c4:  imul   $0x3d,%eax,%eax
08502879 +0x0c7:  lea    (%edx,%eax,1),%eax
0850287c +0x0ca:  mov    %eax,(%esp)
0850287f +0x0cd:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502884 +0x0d2:  mov    %eax,%edi
08502886 +0x0d4:  mov    0x8(%ebp),%eax
08502889 +0x0d7:  mov    (%eax),%eax
0850288b +0x0d9:  movl   $0xffffffff,0x4(%esp)
08502893 +0x0e1:  mov    %eax,(%esp)
08502896 +0x0e4:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0850289b +0x0e9:  mov    %eax,%esi
0850289d +0x0eb:  mov    0x8(%ebp),%eax
085028a0 +0x0ee:  mov    (%eax),%eax
085028a2 +0x0f0:  mov    %eax,(%esp)
085028a5 +0x0f3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085028aa +0x0f8:  movl   $0x0,0x4(%esp)
085028b2 +0x100:  mov    %eax,(%esp)
085028b5 +0x103:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085028ba +0x108:  mov    %eax,%ebx
085028bc +0x10a:  movl   $0x4,0xc(%esp)
085028c4 +0x112:  movl   $0x157c,0x8(%esp)
085028cc +0x11a:  movl   $&_ZZN10CInventory27stackInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
085028d4 +0x122:  lea    -0x2c(%ebp),%eax
085028d7 +0x125:  mov    %eax,(%esp)
085028da +0x128:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085028df +0x12d:  mov    -0x44(%ebp),%eax
085028e2 +0x130:  mov    %eax,0x18(%esp)
085028e6 +0x134:  mov    -0x40(%ebp),%eax
085028e9 +0x137:  mov    %eax,0x14(%esp)
085028ed +0x13b:  mov    %edi,0x10(%esp)
085028f1 +0x13f:  mov    %esi,0xc(%esp)
085028f5 +0x143:  mov    %ebx,0x8(%esp)
085028f9 +0x147:  movl   $"INVEN INT_MAX setting 1 : m_id(%s),charac_id(%d) inven(%d)+add(%d) item_id(%d)",0x4(%esp)
08502901 +0x14f:  lea    -0x2c(%ebp),%eax
08502904 +0x152:  mov    %eax,(%esp)
08502907 +0x155:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850290c +0x15a:  mov    0x8(%ebp),%eax
0850290f +0x15d:  mov    0x650(%eax),%edx
08502915 +0x163:  mov    -0x1c(%ebp),%eax
08502918 +0x166:  imul   $0x3d,%eax,%eax
0850291b +0x169:  lea    (%edx,%eax,1),%eax
0850291e +0x16c:  movl   $0x0,0x4(%esp)
08502926 +0x174:  mov    %eax,(%esp)
08502929 +0x177:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0850292e +0x17c:  jmp    08502a5c <+0x2aa>
08502933 +0x181:  mov    0x8(%ebp),%eax
08502936 +0x184:  mov    0x650(%eax),%edx
0850293c +0x18a:  mov    -0x1c(%ebp),%eax
0850293f +0x18d:  imul   $0x3d,%eax,%eax
08502942 +0x190:  lea    (%edx,%eax,1),%eax
08502945 +0x193:  mov    %eax,(%esp)
08502948 +0x196:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850294d +0x19b:  mov    0x13(%ebp),%edx
08502950 +0x19e:  lea    (%eax,%edx,1),%edx
08502953 +0x1a1:  mov    0x8(%ebp),%eax
08502956 +0x1a4:  mov    0x650(%eax),%ecx
0850295c +0x1aa:  mov    -0x1c(%ebp),%eax
0850295f +0x1ad:  imul   $0x3d,%eax,%eax
08502962 +0x1b0:  lea    (%ecx,%eax,1),%eax
08502965 +0x1b3:  mov    0x2(%eax),%eax
08502968 +0x1b6:  mov    %edx,0x4(%esp)
0850296c +0x1ba:  mov    %eax,(%esp)
0850296f +0x1bd:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08502974 +0x1c2:  xor    $0x1,%eax
08502977 +0x1c5:  test   %al,%al
08502979 +0x1c7:  je     08502985 <+0x1d3>
0850297b +0x1c9:  mov    $0xfffffff6,%eax
08502980 +0x1ce:  jmp    08502a75 <+0x2c3>
08502985 +0x1d3:  mov    0x8(%ebp),%eax
08502988 +0x1d6:  mov    0x650(%eax),%edx
0850298e +0x1dc:  mov    -0x1c(%ebp),%eax
08502991 +0x1df:  imul   $0x3d,%eax,%eax
08502994 +0x1e2:  lea    (%edx,%eax,1),%eax
08502997 +0x1e5:  mov    %eax,(%esp)
0850299a +0x1e8:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850299f +0x1ed:  mov    0x13(%ebp),%edx
085029a2 +0x1f0:  lea    (%eax,%edx,1),%edx
085029a5 +0x1f3:  mov    0x8(%ebp),%eax
085029a8 +0x1f6:  mov    0x650(%eax),%ecx
085029ae +0x1fc:  mov    -0x1c(%ebp),%eax
085029b1 +0x1ff:  imul   $0x3d,%eax,%eax
085029b4 +0x202:  lea    (%ecx,%eax,1),%eax
085029b7 +0x205:  mov    %edx,0x4(%esp)
085029bb +0x209:  mov    %eax,(%esp)
085029be +0x20c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085029c3 +0x211:  cmpb   $0x0,-0x3c(%ebp)
085029c7 +0x215:  je     08502a5c <+0x2aa>
085029cd +0x21b:  mov    0x8(%ebp),%eax
085029d0 +0x21e:  mov    (%eax),%eax
085029d2 +0x220:  test   %eax,%eax
085029d4 +0x222:  je     08502a30 <+0x27e>
085029d6 +0x224:  lea    0xc(%ebp),%eax
085029d9 +0x227:  mov    %eax,(%esp)
085029dc +0x22a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085029e1 +0x22f:  mov    %eax,%ebx
085029e3 +0x231:  mov    0x8(%ebp),%eax
085029e6 +0x234:  mov    0x650(%eax),%edx
085029ec +0x23a:  mov    -0x1c(%ebp),%eax
085029ef +0x23d:  imul   $0x3d,%eax,%eax
085029f2 +0x240:  lea    (%edx,%eax,1),%eax
085029f5 +0x243:  mov    %eax,(%esp)
085029f8 +0x246:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085029fd +0x24b:  mov    0x8(%ebp),%edx
08502a00 +0x24e:  mov    (%edx),%edx
08502a02 +0x250:  lea    0x79700(%edx),%ecx
08502a08 +0x256:  mov    0x4c(%ebp),%edx
08502a0b +0x259:  mov    %edx,0x14(%esp)
08502a0f +0x25d:  lea    0xc(%ebp),%edx
08502a12 +0x260:  mov    %edx,0x10(%esp)
08502a16 +0x264:  mov    %ebx,0xc(%esp)
08502a1a +0x268:  mov    %eax,0x8(%esp)
08502a1e +0x26c:  movl   $0x1,0x4(%esp)
08502a26 +0x274:  mov    %ecx,(%esp)
08502a29 +0x277:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08502a2e +0x27c:  jmp    08502a5c <+0x2aa>
08502a30 +0x27e:  movl   $"History ERROR, m_pParent NULL, ItemAdd ",0x10(%esp)
08502a38 +0x286:  movl   $0x1597,0xc(%esp)
08502a40 +0x28e:  movl   $&_ZZN10CInventory27stackInvenItemIntoQuickSlotE10Inven_Item14eItemAddReasonbE19__PRETTY_FUNCTION__,0x8(%esp)
08502a48 +0x296:  movl   $"inventory.cpp",0x4(%esp)
08502a50 +0x29e:  movl   $0x1,(%esp)
08502a57 +0x2a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08502a5c +0x2aa:  mov    -0x1c(%ebp),%eax
08502a5f +0x2ad:  jmp    08502a75 <+0x2c3>
08502a61 +0x2af:  cmpl   $0x8,-0x1c(%ebp)
08502a65 +0x2b3:  setle  %al
08502a68 +0x2b6:  test   %al,%al
08502a6a +0x2b8:  jne    085027df <+0x2d>
08502a70 +0x2be:  mov    $0xfffffffe,%eax
08502a75 +0x2c3:  add    $0x5c,%esp
08502a78 +0x2c6:  pop    %ebx
08502a79 +0x2c7:  pop    %esi
08502a7a +0x2c8:  pop    %edi
08502a7b +0x2c9:  pop    %ebp
08502a7c +0x2ca:  ret
08502a7d +0x2cb:  nop
```

## 反编译 C

> （该函数反编译 C 未生成）
