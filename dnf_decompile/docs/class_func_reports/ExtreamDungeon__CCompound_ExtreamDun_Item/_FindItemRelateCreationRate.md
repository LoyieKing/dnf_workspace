# _FindItemRelateCreationRate

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate(__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >, __gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832d4b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832d4b4  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate(__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >, __gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >) const
# range [0x0832d4b4, 0x0832d783]
0832d4b4 +0x000:  push   %ebp
0832d4b5 +0x001:  mov    %esp,%ebp
0832d4b7 +0x003:  push   %esi
0832d4b8 +0x004:  push   %ebx
0832d4b9 +0x005:  sub    $0x70,%esp
0832d4bc +0x008:  lea    0x10(%ebp),%eax
0832d4bf +0x00b:  mov    %eax,0x4(%esp)
0832d4c3 +0x00f:  lea    0xc(%ebp),%eax
0832d4c6 +0x012:  mov    %eax,(%esp)
0832d4c9 +0x015:  call   0832e76e <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x7cc>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x7cc
0832d4ce +0x01a:  test   %al,%al
0832d4d0 +0x01c:  je     0832d4dc <+0x28>
0832d4d2 +0x01e:  mov    $0x0,%ebx
0832d4d7 +0x023:  jmp    0832d778 <+0x2c4>
0832d4dc +0x028:  lea    -0x40(%ebp),%eax
0832d4df +0x02b:  mov    %eax,(%esp)
0832d4e2 +0x02e:  call   0832e7c6 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x824>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x824
0832d4e7 +0x033:  movl   $0x0,-0x1c(%ebp)
0832d4ee +0x03a:  mov    0xc(%ebp),%eax
0832d4f1 +0x03d:  mov    %eax,-0x44(%ebp)
0832d4f4 +0x040:  jmp    0832d648 <+0x194>
0832d4f9 +0x045:  lea    -0x44(%ebp),%eax
0832d4fc +0x048:  mov    %eax,(%esp)
0832d4ff +0x04b:  call   0832e84e <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8ac>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8ac
0832d504 +0x050:  mov    0x4(%eax),%ebx
0832d507 +0x053:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0832d50c +0x058:  mov    %ebx,0x4(%esp)
0832d510 +0x05c:  mov    %eax,(%esp)
0832d513 +0x05f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0832d518 +0x064:  mov    %eax,-0x10(%ebp)
0832d51b +0x067:  cmpl   $0x0,-0x10(%ebp)
0832d51f +0x06b:  je     0832d63c <+0x188>
0832d525 +0x071:  lea    -0x48(%ebp),%eax
0832d528 +0x074:  mov    %eax,(%esp)
0832d52b +0x077:  call   0832e858 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8b6>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8b6
0832d530 +0x07c:  mov    0x8(%ebp),%eax
0832d533 +0x07f:  lea    0xb74(%eax),%edx
0832d539 +0x085:  lea    -0x34(%ebp),%eax
0832d53c +0x088:  mov    %edx,0x4(%esp)
0832d540 +0x08c:  mov    %eax,(%esp)
0832d543 +0x08f:  call   0832e892 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8f0>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8f0
0832d548 +0x094:  sub    $0x4,%esp
0832d54b +0x097:  lea    -0x44(%ebp),%eax
0832d54e +0x09a:  mov    %eax,(%esp)
0832d551 +0x09d:  call   0832e84e <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8ac>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8ac
0832d556 +0x0a2:  lea    0x4(%eax),%ecx
0832d559 +0x0a5:  mov    0x8(%ebp),%eax
0832d55c +0x0a8:  lea    0xb74(%eax),%edx
0832d562 +0x0ae:  lea    -0x4c(%ebp),%eax
0832d565 +0x0b1:  mov    %ecx,0x8(%esp)
0832d569 +0x0b5:  mov    %edx,0x4(%esp)
0832d56d +0x0b9:  mov    %eax,(%esp)
0832d570 +0x0bc:  call   0832e866 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8c4>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8c4
0832d575 +0x0c1:  sub    $0x4,%esp
0832d578 +0x0c4:  mov    -0x4c(%ebp),%eax
0832d57b +0x0c7:  mov    %eax,-0x48(%ebp)
0832d57e +0x0ca:  lea    -0x34(%ebp),%eax
0832d581 +0x0cd:  mov    %eax,0x4(%esp)
0832d585 +0x0d1:  lea    -0x48(%ebp),%eax
0832d588 +0x0d4:  mov    %eax,(%esp)
0832d58b +0x0d7:  call   0832e8b8 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x916>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x916
0832d590 +0x0dc:  test   %al,%al
0832d592 +0x0de:  je     0832d5e8 <+0x134>
0832d594 +0x0e0:  lea    -0x44(%ebp),%eax
0832d597 +0x0e3:  mov    %eax,(%esp)
0832d59a +0x0e6:  call   0832e84e <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8ac>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8ac
0832d59f +0x0eb:  lea    0x4(%eax),%ebx
0832d5a2 +0x0ee:  lea    -0x48(%ebp),%eax
0832d5a5 +0x0f1:  mov    %eax,(%esp)
0832d5a8 +0x0f4:  call   0832e8cc <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x92a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x92a
0832d5ad +0x0f9:  add    $0x8,%eax
0832d5b0 +0x0fc:  mov    %ebx,0x8(%esp)
0832d5b4 +0x100:  mov    %eax,0x4(%esp)
0832d5b8 +0x104:  lea    -0x30(%ebp),%eax
0832d5bb +0x107:  mov    %eax,(%esp)
0832d5be +0x10a:  call   0832e8da <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x938>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x938
0832d5c3 +0x10f:  lea    -0x30(%ebp),%eax
0832d5c6 +0x112:  mov    %eax,0x4(%esp)
0832d5ca +0x116:  lea    -0x40(%ebp),%eax
0832d5cd +0x119:  mov    %eax,(%esp)
0832d5d0 +0x11c:  call   0832e90a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x968>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x968
0832d5d5 +0x121:  lea    -0x48(%ebp),%eax
0832d5d8 +0x124:  mov    %eax,(%esp)
0832d5db +0x127:  call   0832e8cc <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x92a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x92a
0832d5e0 +0x12c:  mov    0x8(%eax),%eax
0832d5e3 +0x12f:  add    %eax,-0x1c(%ebp)
0832d5e6 +0x132:  jmp    0832d63d <+0x189>
0832d5e8 +0x134:  lea    -0x44(%ebp),%eax
0832d5eb +0x137:  mov    %eax,(%esp)
0832d5ee +0x13a:  call   0832e84e <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x8ac>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x8ac
0832d5f3 +0x13f:  lea    0x4(%eax),%ebx
0832d5f6 +0x142:  mov    -0x10(%ebp),%eax
0832d5f9 +0x145:  mov    %eax,(%esp)
0832d5fc +0x148:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
0832d601 +0x14d:  mov    %eax,-0x20(%ebp)
0832d604 +0x150:  mov    %ebx,0x8(%esp)
0832d608 +0x154:  lea    -0x20(%ebp),%eax
0832d60b +0x157:  mov    %eax,0x4(%esp)
0832d60f +0x15b:  lea    -0x28(%ebp),%eax
0832d612 +0x15e:  mov    %eax,(%esp)
0832d615 +0x161:  call   0832e92c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x98a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x98a
0832d61a +0x166:  lea    -0x28(%ebp),%eax
0832d61d +0x169:  mov    %eax,0x4(%esp)
0832d621 +0x16d:  lea    -0x40(%ebp),%eax
0832d624 +0x170:  mov    %eax,(%esp)
0832d627 +0x173:  call   0832e90a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x968>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x968
0832d62c +0x178:  mov    -0x10(%ebp),%eax
0832d62f +0x17b:  mov    %eax,(%esp)
0832d632 +0x17e:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
0832d637 +0x183:  add    %eax,-0x1c(%ebp)
0832d63a +0x186:  jmp    0832d63d <+0x189>
0832d63c +0x188:  nop
0832d63d +0x189:  lea    -0x44(%ebp),%eax
0832d640 +0x18c:  mov    %eax,(%esp)
0832d643 +0x18f:  call   0832e838 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x896>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x896
0832d648 +0x194:  lea    0x10(%ebp),%eax
0832d64b +0x197:  mov    %eax,0x4(%esp)
0832d64f +0x19b:  lea    -0x44(%ebp),%eax
0832d652 +0x19e:  mov    %eax,(%esp)
0832d655 +0x1a1:  call   0832e79a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x7f8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x7f8
0832d65a +0x1a6:  test   %al,%al
0832d65c +0x1a8:  jne    0832d4f9 <+0x45>
0832d662 +0x1ae:  movl   $0x0,-0x18(%ebp)
0832d669 +0x1b5:  cmpl   $0x0,-0x1c(%ebp)
0832d66d +0x1b9:  jne    0832d6cf <+0x21b>
0832d66f +0x1bb:  lea    -0x40(%ebp),%eax
0832d672 +0x1be:  mov    %eax,(%esp)
0832d675 +0x1c1:  call   0832e95c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9ba>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9ba
0832d67a +0x1c6:  test   %eax,%eax
0832d67c +0x1c8:  setne  %al
0832d67f +0x1cb:  test   %al,%al
0832d681 +0x1cd:  je     0832d6c5 <+0x211>
0832d683 +0x1cf:  mov    0x8(%ebp),%eax
0832d686 +0x1d2:  mov    (%eax),%eax
0832d688 +0x1d4:  mov    %eax,(%esp)
0832d68b +0x1d7:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
0832d690 +0x1dc:  mov    %eax,%ebx
0832d692 +0x1de:  lea    -0x40(%ebp),%eax
0832d695 +0x1e1:  mov    %eax,(%esp)
0832d698 +0x1e4:  call   0832e95c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9ba>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9ba
0832d69d +0x1e9:  mov    %eax,-0x5c(%ebp)
0832d6a0 +0x1ec:  mov    %ebx,%eax
0832d6a2 +0x1ee:  mov    $0x0,%edx
0832d6a7 +0x1f3:  divl   -0x5c(%ebp)
0832d6aa +0x1f6:  mov    %edx,%ecx
0832d6ac +0x1f8:  mov    %ecx,%eax
0832d6ae +0x1fa:  mov    %eax,0x4(%esp)
0832d6b2 +0x1fe:  lea    -0x40(%ebp),%eax
0832d6b5 +0x201:  mov    %eax,(%esp)
0832d6b8 +0x204:  call   0832e978 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9d6>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9d6
0832d6bd +0x209:  mov    0x4(%eax),%ebx
0832d6c0 +0x20c:  jmp    0832d76d <+0x2b9>
0832d6c5 +0x211:  mov    $0x0,%ebx
0832d6ca +0x216:  jmp    0832d76d <+0x2b9>
0832d6cf +0x21b:  mov    0x8(%ebp),%eax
0832d6d2 +0x21e:  mov    (%eax),%eax
0832d6d4 +0x220:  mov    %eax,(%esp)
0832d6d7 +0x223:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
0832d6dc +0x228:  mov    $0x0,%edx
0832d6e1 +0x22d:  divl   -0x1c(%ebp)
0832d6e4 +0x230:  mov    %edx,%eax
0832d6e6 +0x232:  add    $0x1,%eax
0832d6e9 +0x235:  mov    %eax,-0x18(%ebp)
0832d6ec +0x238:  movl   $0x0,-0x14(%ebp)
0832d6f3 +0x23f:  movl   $0x0,-0xc(%ebp)
0832d6fa +0x246:  jmp    0832d736 <+0x282>
0832d6fc +0x248:  mov    -0xc(%ebp),%eax
0832d6ff +0x24b:  mov    %eax,0x4(%esp)
0832d703 +0x24f:  lea    -0x40(%ebp),%eax
0832d706 +0x252:  mov    %eax,(%esp)
0832d709 +0x255:  call   0832e978 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9d6>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9d6
0832d70e +0x25a:  mov    (%eax),%eax
0832d710 +0x25c:  add    %eax,-0x14(%ebp)
0832d713 +0x25f:  mov    -0x18(%ebp),%eax
0832d716 +0x262:  cmp    -0x14(%ebp),%eax
0832d719 +0x265:  ja     0832d732 <+0x27e>
0832d71b +0x267:  mov    -0xc(%ebp),%eax
0832d71e +0x26a:  mov    %eax,0x4(%esp)
0832d722 +0x26e:  lea    -0x40(%ebp),%eax
0832d725 +0x271:  mov    %eax,(%esp)
0832d728 +0x274:  call   0832e978 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9d6>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9d6
0832d72d +0x279:  mov    0x4(%eax),%ebx
0832d730 +0x27c:  jmp    0832d76d <+0x2b9>
0832d732 +0x27e:  addl   $0x1,-0xc(%ebp)
0832d736 +0x282:  lea    -0x40(%ebp),%eax
0832d739 +0x285:  mov    %eax,(%esp)
0832d73c +0x288:  call   0832e95c <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9ba>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9ba
0832d741 +0x28d:  cmp    -0xc(%ebp),%eax
0832d744 +0x290:  seta   %al
0832d747 +0x293:  test   %al,%al
0832d749 +0x295:  jne    0832d6fc <+0x248>
0832d74b +0x297:  mov    $0x0,%ebx
0832d750 +0x29c:  jmp    0832d76d <+0x2b9>
0832d752 +0x29e:  mov    %edx,%ebx
0832d754 +0x2a0:  mov    %eax,%esi
0832d756 +0x2a2:  lea    -0x40(%ebp),%eax
0832d759 +0x2a5:  mov    %eax,(%esp)
0832d75c +0x2a8:  call   0832e7da <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x838>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x838
0832d761 +0x2ad:  mov    %esi,%eax
0832d763 +0x2af:  mov    %ebx,%edx
0832d765 +0x2b1:  mov    %eax,(%esp)
0832d768 +0x2b4:  call   08ae3750 <_Unwind_Resume>
0832d76d +0x2b9:  lea    -0x40(%ebp),%eax
0832d770 +0x2bc:  mov    %eax,(%esp)
0832d773 +0x2bf:  call   0832e7da <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x838>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x838
0832d778 +0x2c4:  mov    %ebx,%eax
0832d77a +0x2c6:  lea    -0x8(%ebp),%esp
0832d77d +0x2c9:  add    $0x0,%esp
0832d780 +0x2cc:  pop    %ebx
0832d781 +0x2cd:  pop    %esi
0832d782 +0x2ce:  pop    %ebp
0832d783 +0x2cf:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate @ 0x832d4b4

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate(__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR
   const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,
   std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >,
   __gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*,
   std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >)
   const */

undefined4
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate
          (undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *this;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_50;
  int local_4c;
  undefined4 local_48;
  vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>> local_44 [12];
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  local_38 [4];
  pair<int,unsigned_int> local_34 [8];
  pair<int,unsigned_int> local_2c [8];
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  CItem *local_14;
  uint local_10;
  
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&param_2,&stack0x0000000c);
  if (bVar1) {
    uVar8 = 0;
  }
  else {
    std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::vector
              (local_44);
    local_20 = 0;
    local_48 = param_2;
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,&stack0x0000000c);
      if (!bVar1) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
              ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                            *)&local_48);
      iVar4 = *(int *)(iVar4 + 4);
                    /* try { // try from 0832d507 to 0832d659 has its CatchHandler @ 0832d752 */
      this = (CDataManager *)G_CDataManager();
      local_14 = (CItem *)CDataManager::find_item(this,iVar4);
      if (local_14 != (CItem *)0x0) {
        std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
        _Rb_tree_const_iterator
                  ((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                    *)&local_4c);
        std::
        map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
        ::end(local_38);
        __gnu_cxx::
        __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
        ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                      *)&local_48);
        std::
        map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
        ::find(&local_50);
        local_4c = local_50;
        cVar2 = std::
                _Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
                operator!=((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                            *)&local_4c,(_Rb_tree_const_iterator *)local_38);
        if (cVar2 == '\0') {
          iVar4 = __gnu_cxx::
                  __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                  ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                                *)&local_48);
          local_24 = CItem::get_gen_rate(local_14);
          std::pair<int,unsigned_int>::pair<int,int_const&>(local_2c,&local_24,(int *)(iVar4 + 4));
          std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
          push_back(local_44,local_2c);
          iVar4 = CItem::get_gen_rate(local_14);
          local_20 = local_20 + iVar4;
        }
        else {
          iVar4 = __gnu_cxx::
                  __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                  ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                                *)&local_48);
          iVar3 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                                *)&local_4c);
          std::pair<int,unsigned_int>::pair<int_const&,int_const&>
                    (local_34,(int *)(iVar3 + 8),(int *)(iVar4 + 4));
          std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
          push_back(local_44,local_34);
          iVar4 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                                *)&local_4c);
          local_20 = local_20 + *(int *)(iVar4 + 8);
        }
      }
      __gnu_cxx::
      __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
      ::operator++((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                    *)&local_48);
    }
    local_1c = 0;
    if (local_20 == 0) {
      iVar4 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
              size(local_44);
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      else {
        uVar5 = CMTRand::randInt((CMTRand *)*param_1);
        uVar6 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                ::size(local_44);
        iVar4 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                ::operator[](local_44,uVar5 % uVar6);
        uVar8 = *(undefined4 *)(iVar4 + 4);
      }
    }
    else {
      uVar5 = CMTRand::randInt((CMTRand *)*param_1);
      local_1c = uVar5 % local_20 + 1;
      local_18 = 0;
      local_10 = 0;
      while( true ) {
        uVar5 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                ::size(local_44);
        if (uVar5 <= local_10) break;
        piVar7 = (int *)std::
                        vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                        ::operator[](local_44,local_10);
        local_18 = local_18 + *piVar7;
        if (local_1c <= local_18) {
          iVar4 = std::
                  vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
                  operator[](local_44,local_10);
          uVar8 = *(undefined4 *)(iVar4 + 4);
          goto LAB_0832d76d;
        }
        local_10 = local_10 + 1;
      }
      uVar8 = 0;
    }
LAB_0832d76d:
    std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::~vector
              (local_44);
  }
  return uVar8;
}
```
