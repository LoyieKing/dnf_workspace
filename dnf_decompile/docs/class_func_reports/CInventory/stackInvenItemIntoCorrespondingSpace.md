# stackInvenItemIntoCorrespondingSpace

`_ZN10CInventory36stackInvenItemIntoCorrespondingSpaceE10Inven_Item14eItemAddReasonb`

`CInventory::stackInvenItemIntoCorrespondingSpace(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08502a7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08502a7e  _ZN10CInventory36stackInvenItemIntoCorrespondingSpaceE10Inven_Item14eItemAddReasonb
#           CInventory::stackInvenItemIntoCorrespondingSpace(Inven_Item, eItemAddReason, bool)
# range [0x08502a7e, 0x08502d85]
08502a7e +0x000:  push   %ebp
08502a7f +0x001:  mov    %esp,%ebp
08502a81 +0x003:  push   %edi
08502a82 +0x004:  push   %esi
08502a83 +0x005:  push   %ebx
08502a84 +0x006:  sub    $0x5c,%esp
08502a87 +0x009:  mov    0x50(%ebp),%eax
08502a8a +0x00c:  mov    %al,-0x3c(%ebp)
08502a8d +0x00f:  movzbl 0xd(%ebp),%eax
08502a91 +0x013:  cmp    $0x1,%al
08502a93 +0x015:  jne    08502a9f <+0x21>
08502a95 +0x017:  mov    $0xffffffff,%eax
08502a9a +0x01c:  jmp    08502d7e <+0x300>
08502a9f +0x021:  movl   $0x0,-0x30(%ebp)
08502aa6 +0x028:  movl   $0x0,-0x34(%ebp)
08502aad +0x02f:  movzbl 0xd(%ebp),%eax
08502ab1 +0x033:  movzbl %al,%eax
08502ab4 +0x036:  lea    -0x34(%ebp),%edx
08502ab7 +0x039:  mov    %edx,0xc(%esp)
08502abb +0x03d:  lea    -0x30(%ebp),%edx
08502abe +0x040:  mov    %edx,0x8(%esp)
08502ac2 +0x044:  mov    %eax,0x4(%esp)
08502ac6 +0x048:  mov    0x8(%ebp),%eax
08502ac9 +0x04b:  mov    %eax,(%esp)
08502acc +0x04e:  call   0850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08502ad1 +0x053:  mov    -0x30(%ebp),%eax
08502ad4 +0x056:  mov    %eax,-0x1c(%ebp)
08502ad7 +0x059:  jmp    08502d68 <+0x2ea>
08502adc +0x05e:  mov    0x8(%ebp),%eax
08502adf +0x061:  mov    0x650(%eax),%edx
08502ae5 +0x067:  mov    -0x1c(%ebp),%eax
08502ae8 +0x06a:  imul   $0x3d,%eax,%eax
08502aeb +0x06d:  lea    (%edx,%eax,1),%eax
08502aee +0x070:  mov    0x2(%eax),%edx
08502af1 +0x073:  mov    0xe(%ebp),%eax
08502af4 +0x076:  cmp    %eax,%edx
08502af6 +0x078:  je     08502b01 <+0x83>
08502af8 +0x07a:  addl   $0x1,-0x1c(%ebp)
08502afc +0x07e:  jmp    08502d68 <+0x2ea>
08502b01 +0x083:  lea    0xc(%ebp),%eax
08502b04 +0x086:  mov    %eax,(%esp)
08502b07 +0x089:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502b0c +0x08e:  mov    $0x7fffffff,%edx
08502b11 +0x093:  mov    %edx,%ebx
08502b13 +0x095:  sub    %eax,%ebx
08502b15 +0x097:  mov    0x8(%ebp),%eax
08502b18 +0x09a:  mov    0x650(%eax),%edx
08502b1e +0x0a0:  mov    -0x1c(%ebp),%eax
08502b21 +0x0a3:  imul   $0x3d,%eax,%eax
08502b24 +0x0a6:  lea    (%edx,%eax,1),%eax
08502b27 +0x0a9:  mov    %eax,(%esp)
08502b2a +0x0ac:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502b2f +0x0b1:  cmp    %eax,%ebx
08502b31 +0x0b3:  setle  %al
08502b34 +0x0b6:  test   %al,%al
08502b36 +0x0b8:  je     08502c30 <+0x1b2>
08502b3c +0x0be:  cmpb   $0x0,-0x3c(%ebp)
08502b40 +0x0c2:  je     08502c09 <+0x18b>
08502b46 +0x0c8:  mov    0x8(%ebp),%eax
08502b49 +0x0cb:  mov    (%eax),%eax
08502b4b +0x0cd:  test   %eax,%eax
08502b4d +0x0cf:  je     08502c09 <+0x18b>
08502b53 +0x0d5:  mov    0xe(%ebp),%eax
08502b56 +0x0d8:  mov    %eax,-0x44(%ebp)
08502b59 +0x0db:  lea    0xc(%ebp),%eax
08502b5c +0x0de:  mov    %eax,(%esp)
08502b5f +0x0e1:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502b64 +0x0e6:  mov    %eax,-0x40(%ebp)
08502b67 +0x0e9:  mov    0x8(%ebp),%eax
08502b6a +0x0ec:  mov    0x650(%eax),%edx
08502b70 +0x0f2:  mov    -0x1c(%ebp),%eax
08502b73 +0x0f5:  imul   $0x3d,%eax,%eax
08502b76 +0x0f8:  lea    (%edx,%eax,1),%eax
08502b79 +0x0fb:  mov    %eax,(%esp)
08502b7c +0x0fe:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502b81 +0x103:  mov    %eax,%edi
08502b83 +0x105:  mov    0x8(%ebp),%eax
08502b86 +0x108:  mov    (%eax),%eax
08502b88 +0x10a:  movl   $0xffffffff,0x4(%esp)
08502b90 +0x112:  mov    %eax,(%esp)
08502b93 +0x115:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08502b98 +0x11a:  mov    %eax,%esi
08502b9a +0x11c:  mov    0x8(%ebp),%eax
08502b9d +0x11f:  mov    (%eax),%eax
08502b9f +0x121:  mov    %eax,(%esp)
08502ba2 +0x124:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08502ba7 +0x129:  movl   $0x0,0x4(%esp)
08502baf +0x131:  mov    %eax,(%esp)
08502bb2 +0x134:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08502bb7 +0x139:  mov    %eax,%ebx
08502bb9 +0x13b:  movl   $0x4,0xc(%esp)
08502bc1 +0x143:  movl   $0x15b7,0x8(%esp)
08502bc9 +0x14b:  movl   $&_ZZN10CInventory36stackInvenItemIntoCorrespondingSpaceE10Inven_Item14eItemAddReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
08502bd1 +0x153:  lea    -0x2c(%ebp),%eax
08502bd4 +0x156:  mov    %eax,(%esp)
08502bd7 +0x159:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08502bdc +0x15e:  mov    -0x44(%ebp),%eax
08502bdf +0x161:  mov    %eax,0x18(%esp)
08502be3 +0x165:  mov    -0x40(%ebp),%eax
08502be6 +0x168:  mov    %eax,0x14(%esp)
08502bea +0x16c:  mov    %edi,0x10(%esp)
08502bee +0x170:  mov    %esi,0xc(%esp)
08502bf2 +0x174:  mov    %ebx,0x8(%esp)
08502bf6 +0x178:  movl   $"INVEN INT_MAX setting 2 : m_id(%s),charac_id(%d) inven(%d)+add(%d) item_id(%d)",0x4(%esp)
08502bfe +0x180:  lea    -0x2c(%ebp),%eax
08502c01 +0x183:  mov    %eax,(%esp)
08502c04 +0x186:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08502c09 +0x18b:  mov    0x8(%ebp),%eax
08502c0c +0x18e:  mov    0x650(%eax),%edx
08502c12 +0x194:  mov    -0x1c(%ebp),%eax
08502c15 +0x197:  imul   $0x3d,%eax,%eax
08502c18 +0x19a:  lea    (%edx,%eax,1),%eax
08502c1b +0x19d:  movl   $0x0,0x4(%esp)
08502c23 +0x1a5:  mov    %eax,(%esp)
08502c26 +0x1a8:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08502c2b +0x1ad:  jmp    08502d63 <+0x2e5>
08502c30 +0x1b2:  mov    0x8(%ebp),%eax
08502c33 +0x1b5:  mov    0x650(%eax),%edx
08502c39 +0x1bb:  mov    -0x1c(%ebp),%eax
08502c3c +0x1be:  imul   $0x3d,%eax,%eax
08502c3f +0x1c1:  lea    (%edx,%eax,1),%eax
08502c42 +0x1c4:  mov    %eax,(%esp)
08502c45 +0x1c7:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502c4a +0x1cc:  mov    0x13(%ebp),%edx
08502c4d +0x1cf:  lea    (%eax,%edx,1),%edx
08502c50 +0x1d2:  mov    0x8(%ebp),%eax
08502c53 +0x1d5:  mov    0x650(%eax),%ecx
08502c59 +0x1db:  mov    -0x1c(%ebp),%eax
08502c5c +0x1de:  imul   $0x3d,%eax,%eax
08502c5f +0x1e1:  lea    (%ecx,%eax,1),%eax
08502c62 +0x1e4:  mov    0x2(%eax),%eax
08502c65 +0x1e7:  mov    %edx,0x4(%esp)
08502c69 +0x1eb:  mov    %eax,(%esp)
08502c6c +0x1ee:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08502c71 +0x1f3:  xor    $0x1,%eax
08502c74 +0x1f6:  test   %al,%al
08502c76 +0x1f8:  je     08502c82 <+0x204>
08502c78 +0x1fa:  mov    $0xfffffff6,%eax
08502c7d +0x1ff:  jmp    08502d7e <+0x300>
08502c82 +0x204:  mov    0x8(%ebp),%eax
08502c85 +0x207:  mov    0x650(%eax),%edx
08502c8b +0x20d:  mov    -0x1c(%ebp),%eax
08502c8e +0x210:  imul   $0x3d,%eax,%eax
08502c91 +0x213:  lea    (%edx,%eax,1),%eax
08502c94 +0x216:  mov    %eax,(%esp)
08502c97 +0x219:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502c9c +0x21e:  mov    %eax,%ebx
08502c9e +0x220:  lea    0xc(%ebp),%eax
08502ca1 +0x223:  mov    %eax,(%esp)
08502ca4 +0x226:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502ca9 +0x22b:  lea    (%ebx,%eax,1),%edx
08502cac +0x22e:  mov    0x8(%ebp),%eax
08502caf +0x231:  mov    0x650(%eax),%ecx
08502cb5 +0x237:  mov    -0x1c(%ebp),%eax
08502cb8 +0x23a:  imul   $0x3d,%eax,%eax
08502cbb +0x23d:  lea    (%ecx,%eax,1),%eax
08502cbe +0x240:  mov    %edx,0x4(%esp)
08502cc2 +0x244:  mov    %eax,(%esp)
08502cc5 +0x247:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08502cca +0x24c:  cmpb   $0x0,-0x3c(%ebp)
08502cce +0x250:  je     08502d63 <+0x2e5>
08502cd4 +0x256:  mov    0x8(%ebp),%eax
08502cd7 +0x259:  mov    (%eax),%eax
08502cd9 +0x25b:  test   %eax,%eax
08502cdb +0x25d:  je     08502d37 <+0x2b9>
08502cdd +0x25f:  lea    0xc(%ebp),%eax
08502ce0 +0x262:  mov    %eax,(%esp)
08502ce3 +0x265:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502ce8 +0x26a:  mov    %eax,%ebx
08502cea +0x26c:  mov    0x8(%ebp),%eax
08502ced +0x26f:  mov    0x650(%eax),%edx
08502cf3 +0x275:  mov    -0x1c(%ebp),%eax
08502cf6 +0x278:  imul   $0x3d,%eax,%eax
08502cf9 +0x27b:  lea    (%edx,%eax,1),%eax
08502cfc +0x27e:  mov    %eax,(%esp)
08502cff +0x281:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08502d04 +0x286:  mov    0x8(%ebp),%edx
08502d07 +0x289:  mov    (%edx),%edx
08502d09 +0x28b:  lea    0x79700(%edx),%ecx
08502d0f +0x291:  mov    0x4c(%ebp),%edx
08502d12 +0x294:  mov    %edx,0x14(%esp)
08502d16 +0x298:  lea    0xc(%ebp),%edx
08502d19 +0x29b:  mov    %edx,0x10(%esp)
08502d1d +0x29f:  mov    %ebx,0xc(%esp)
08502d21 +0x2a3:  mov    %eax,0x8(%esp)
08502d25 +0x2a7:  movl   $0x1,0x4(%esp)
08502d2d +0x2af:  mov    %ecx,(%esp)
08502d30 +0x2b2:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08502d35 +0x2b7:  jmp    08502d63 <+0x2e5>
08502d37 +0x2b9:  movl   $"History ERROR, m_pParent NULL, ItemAdd ",0x10(%esp)
08502d3f +0x2c1:  movl   $0x15d2,0xc(%esp)
08502d47 +0x2c9:  movl   $&_ZZN10CInventory36stackInvenItemIntoCorrespondingSpaceE10Inven_Item14eItemAddReasonbE19__PRETTY_FUNCTION__,0x8(%esp)
08502d4f +0x2d1:  movl   $"inventory.cpp",0x4(%esp)
08502d57 +0x2d9:  movl   $0x1,(%esp)
08502d5e +0x2e0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08502d63 +0x2e5:  mov    -0x1c(%ebp),%eax
08502d66 +0x2e8:  jmp    08502d7e <+0x300>
08502d68 +0x2ea:  mov    -0x34(%ebp),%eax
08502d6b +0x2ed:  cmp    %eax,-0x1c(%ebp)
08502d6e +0x2f0:  setle  %al
08502d71 +0x2f3:  test   %al,%al
08502d73 +0x2f5:  jne    08502adc <+0x5e>
08502d79 +0x2fb:  mov    $0xfffffffe,%eax
08502d7e +0x300:  add    $0x5c,%esp
08502d81 +0x303:  pop    %ebx
08502d82 +0x304:  pop    %esi
08502d83 +0x305:  pop    %edi
08502d84 +0x306:  pop    %ebp
08502d85 +0x307:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
