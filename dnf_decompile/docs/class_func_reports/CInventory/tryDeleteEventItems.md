# tryDeleteEventItems

`_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE`

`CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085058da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085058da  _ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE
#           CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x085058da, 0x08505db3]
085058da +0x000:  push   %ebp
085058db +0x001:  mov    %esp,%ebp
085058dd +0x003:  sub    $0x78,%esp
085058e0 +0x006:  mov    0x8(%ebp),%eax
085058e3 +0x009:  mov    (%eax),%eax
085058e5 +0x00b:  mov    %eax,(%esp)
085058e8 +0x00e:  call   0850d522 <_GLOBAL__I_g_emptySlot+0x457>  ; global constructors keyed to g_emptySlot+0x457
085058ed +0x013:  test   %al,%al
085058ef +0x015:  je     085058fb <+0x21>
085058f1 +0x017:  mov    $0x1,%eax
085058f6 +0x01c:  jmp    08505db1 <+0x4d7>
085058fb +0x021:  movl   $0x0,-0x10(%ebp)
08505902 +0x028:  mov    0xc(%ebp),%eax
08505905 +0x02b:  mov    %eax,(%esp)
08505908 +0x02e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0850590d +0x033:  test   %eax,%eax
0850590f +0x035:  sete   %al
08505912 +0x038:  test   %al,%al
08505914 +0x03a:  je     08505920 <+0x46>
08505916 +0x03c:  mov    $0x0,%eax
0850591b +0x041:  jmp    08505db1 <+0x4d7>
08505920 +0x046:  lea    -0x4c(%ebp),%eax
08505923 +0x049:  mov    %eax,(%esp)
08505926 +0x04c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0850592b +0x051:  lea    -0x50(%ebp),%eax
0850592e +0x054:  mov    %eax,(%esp)
08505931 +0x057:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
08505936 +0x05c:  lea    -0x5c(%ebp),%eax
08505939 +0x05f:  mov    0xc(%ebp),%edx
0850593c +0x062:  mov    %edx,0x4(%esp)
08505940 +0x066:  mov    %eax,(%esp)
08505943 +0x069:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08505948 +0x06e:  sub    $0x4,%esp
0850594b +0x071:  mov    -0x5c(%ebp),%eax
0850594e +0x074:  mov    %eax,-0x50(%ebp)
08505951 +0x077:  jmp    08505d5f <+0x485>
08505956 +0x07c:  movb   $0x0,-0x21(%ebp)
0850595a +0x080:  lea    -0x50(%ebp),%eax
0850595d +0x083:  mov    %eax,(%esp)
08505960 +0x086:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08505965 +0x08b:  mov    0x4(%eax),%edx
08505968 +0x08e:  mov    (%eax),%eax
0850596a +0x090:  mov    %eax,-0x38(%ebp)
0850596d +0x093:  mov    %edx,-0x34(%ebp)
08505970 +0x096:  lea    -0x38(%ebp),%eax
08505973 +0x099:  mov    %eax,0x4(%esp)
08505977 +0x09d:  lea    -0x4c(%ebp),%eax
0850597a +0x0a0:  mov    %eax,(%esp)
0850597d +0x0a3:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08505982 +0x0a8:  mov    -0x4c(%ebp),%eax
08505985 +0x0ab:  mov    %eax,-0x20(%ebp)
08505988 +0x0ae:  mov    -0x48(%ebp),%eax
0850598b +0x0b1:  mov    %eax,-0x18(%ebp)
0850598e +0x0b4:  cmpl   $0x0,-0x20(%ebp)
08505992 +0x0b8:  jne    085059e0 <+0x106>
08505994 +0x0ba:  movl   $0x0,0xc(%esp)
0850599c +0x0c2:  movl   $0x4,0x8(%esp)
085059a4 +0x0ca:  mov    -0x18(%ebp),%eax
085059a7 +0x0cd:  mov    %eax,0x4(%esp)
085059ab +0x0d1:  mov    0x8(%ebp),%eax
085059ae +0x0d4:  mov    %eax,(%esp)
085059b1 +0x0d7:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085059b6 +0x0dc:  test   %al,%al
085059b8 +0x0de:  je     085059be <+0xe4>
085059ba +0x0e0:  addl   $0x1,-0x10(%ebp)
085059be +0x0e4:  lea    -0x30(%ebp),%eax
085059c1 +0x0e7:  movl   $0x0,0x8(%esp)
085059c9 +0x0ef:  lea    -0x50(%ebp),%edx
085059cc +0x0f2:  mov    %edx,0x4(%esp)
085059d0 +0x0f6:  mov    %eax,(%esp)
085059d3 +0x0f9:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
085059d8 +0x0fe:  sub    $0x4,%esp
085059db +0x101:  jmp    08505d5f <+0x485>
085059e0 +0x106:  cmpl   $0x2,-0x20(%ebp)
085059e4 +0x10a:  jne    08505a25 <+0x14b>
085059e6 +0x10c:  mov    0x8(%ebp),%eax
085059e9 +0x10f:  mov    (%eax),%eax
085059eb +0x111:  mov    %eax,(%esp)
085059ee +0x114:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
085059f3 +0x119:  mov    -0x18(%ebp),%edx
085059f6 +0x11c:  cmp    %edx,%eax
085059f8 +0x11e:  setae  %al
085059fb +0x121:  test   %al,%al
085059fd +0x123:  je     08505a03 <+0x129>
085059ff +0x125:  addl   $0x1,-0x10(%ebp)
08505a03 +0x129:  lea    -0x2c(%ebp),%eax
08505a06 +0x12c:  movl   $0x0,0x8(%esp)
08505a0e +0x134:  lea    -0x50(%ebp),%edx
08505a11 +0x137:  mov    %edx,0x4(%esp)
08505a15 +0x13b:  mov    %eax,(%esp)
08505a18 +0x13e:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08505a1d +0x143:  sub    $0x4,%esp
08505a20 +0x146:  jmp    08505d5f <+0x485>
08505a25 +0x14b:  mov    -0x20(%ebp),%eax
08505a28 +0x14e:  mov    %eax,0x4(%esp)
08505a2c +0x152:  mov    0x8(%ebp),%eax
08505a2f +0x155:  mov    %eax,(%esp)
08505a32 +0x158:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08505a37 +0x15d:  mov    %eax,-0x14(%ebp)
08505a3a +0x160:  cmpl   $0x0,-0x14(%ebp)
08505a3e +0x164:  je     08505d5e <+0x484>
08505a44 +0x16a:  lea    -0x44(%ebp),%eax
08505a47 +0x16d:  mov    %eax,0xc(%esp)
08505a4b +0x171:  lea    -0x40(%ebp),%eax
08505a4e +0x174:  mov    %eax,0x8(%esp)
08505a52 +0x178:  mov    -0x14(%ebp),%eax
08505a55 +0x17b:  mov    %eax,0x4(%esp)
08505a59 +0x17f:  mov    0x8(%ebp),%eax
08505a5c +0x182:  mov    %eax,(%esp)
08505a5f +0x185:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08505a64 +0x18a:  cmpl   $0x1,-0x14(%ebp)
08505a68 +0x18e:  jne    08505ba5 <+0x2cb>
08505a6e +0x194:  mov    -0x40(%ebp),%eax
08505a71 +0x197:  mov    %eax,-0x1c(%ebp)
08505a74 +0x19a:  jmp    08505abe <+0x1e4>
08505a76 +0x19c:  mov    0x8(%ebp),%eax
08505a79 +0x19f:  mov    0x650(%eax),%edx
08505a7f +0x1a5:  mov    -0x1c(%ebp),%eax
08505a82 +0x1a8:  imul   $0x3d,%eax,%eax
08505a85 +0x1ab:  lea    (%edx,%eax,1),%eax
08505a88 +0x1ae:  mov    0x2(%eax),%edx
08505a8b +0x1b1:  mov    -0x20(%ebp),%eax
08505a8e +0x1b4:  cmp    %eax,%edx
08505a90 +0x1b6:  jne    08505aba <+0x1e0>
08505a92 +0x1b8:  addl   $0x1,-0x10(%ebp)
08505a96 +0x1bc:  mov    0x8(%ebp),%eax
08505a99 +0x1bf:  mov    0x650(%eax),%edx
08505a9f +0x1c5:  mov    -0x1c(%ebp),%eax
08505aa2 +0x1c8:  imul   $0x3d,%eax,%eax
08505aa5 +0x1cb:  lea    (%edx,%eax,1),%eax
08505aa8 +0x1ce:  mov    %eax,(%esp)
08505aab +0x1d1:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08505ab0 +0x1d6:  subl   $0x1,-0x18(%ebp)
08505ab4 +0x1da:  cmpl   $0x0,-0x18(%ebp)
08505ab8 +0x1de:  je     08505acd <+0x1f3>
08505aba +0x1e0:  addl   $0x1,-0x1c(%ebp)
08505abe +0x1e4:  mov    -0x44(%ebp),%eax
08505ac1 +0x1e7:  cmp    %eax,-0x1c(%ebp)
08505ac4 +0x1ea:  setle  %al
08505ac7 +0x1ed:  test   %al,%al
08505ac9 +0x1ef:  jne    08505a76 <+0x19c>
08505acb +0x1f1:  jmp    08505ace <+0x1f4>
08505acd +0x1f3:  nop
08505ace +0x1f4:  cmpl   $0x0,-0x18(%ebp)
08505ad2 +0x1f8:  jle    08505b33 <+0x259>
08505ad4 +0x1fa:  movl   $0x3,-0x1c(%ebp)
08505adb +0x201:  jmp    08505b25 <+0x24b>
08505add +0x203:  mov    0x8(%ebp),%eax
08505ae0 +0x206:  mov    0x650(%eax),%edx
08505ae6 +0x20c:  mov    -0x1c(%ebp),%eax
08505ae9 +0x20f:  imul   $0x3d,%eax,%eax
08505aec +0x212:  lea    (%edx,%eax,1),%eax
08505aef +0x215:  mov    0x2(%eax),%edx
08505af2 +0x218:  mov    -0x20(%ebp),%eax
08505af5 +0x21b:  cmp    %eax,%edx
08505af7 +0x21d:  jne    08505b21 <+0x247>
08505af9 +0x21f:  addl   $0x1,-0x10(%ebp)
08505afd +0x223:  mov    0x8(%ebp),%eax
08505b00 +0x226:  mov    0x650(%eax),%edx
08505b06 +0x22c:  mov    -0x1c(%ebp),%eax
08505b09 +0x22f:  imul   $0x3d,%eax,%eax
08505b0c +0x232:  lea    (%edx,%eax,1),%eax
08505b0f +0x235:  mov    %eax,(%esp)
08505b12 +0x238:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08505b17 +0x23d:  subl   $0x1,-0x18(%ebp)
08505b1b +0x241:  cmpl   $0x0,-0x18(%ebp)
08505b1f +0x245:  je     08505b32 <+0x258>
08505b21 +0x247:  addl   $0x1,-0x1c(%ebp)
08505b25 +0x24b:  cmpl   $0x8,-0x1c(%ebp)
08505b29 +0x24f:  setle  %al
08505b2c +0x252:  test   %al,%al
08505b2e +0x254:  jne    08505add <+0x203>
08505b30 +0x256:  jmp    08505b33 <+0x259>
08505b32 +0x258:  nop
08505b33 +0x259:  cmpl   $0x0,-0x18(%ebp)
08505b37 +0x25d:  jle    08505b92 <+0x2b8>
08505b39 +0x25f:  movl   $0x0,-0xc(%ebp)
08505b40 +0x266:  jmp    08505b84 <+0x2aa>
08505b42 +0x268:  mov    -0xc(%ebp),%eax
08505b45 +0x26b:  mov    0x8(%ebp),%edx
08505b48 +0x26e:  imul   $0x3d,%eax,%eax
08505b4b +0x271:  lea    (%edx,%eax,1),%eax
08505b4e +0x274:  add    $0x10,%eax
08505b51 +0x277:  mov    0xe(%eax),%edx
08505b54 +0x27a:  mov    -0x20(%ebp),%eax
08505b57 +0x27d:  cmp    %eax,%edx
08505b59 +0x27f:  jne    08505b80 <+0x2a6>
08505b5b +0x281:  addl   $0x1,-0x10(%ebp)
08505b5f +0x285:  mov    -0xc(%ebp),%eax
08505b62 +0x288:  imul   $0x3d,%eax,%eax
08505b65 +0x28b:  add    $0x10,%eax
08505b68 +0x28e:  add    0x8(%ebp),%eax
08505b6b +0x291:  add    $0xc,%eax
08505b6e +0x294:  mov    %eax,(%esp)
08505b71 +0x297:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08505b76 +0x29c:  subl   $0x1,-0x18(%ebp)
08505b7a +0x2a0:  cmpl   $0x0,-0x18(%ebp)
08505b7e +0x2a4:  je     08505b91 <+0x2b7>
08505b80 +0x2a6:  addl   $0x1,-0xc(%ebp)
08505b84 +0x2aa:  cmpl   $0x19,-0xc(%ebp)
08505b88 +0x2ae:  setle  %al
08505b8b +0x2b1:  test   %al,%al
08505b8d +0x2b3:  jne    08505b42 <+0x268>
08505b8f +0x2b5:  jmp    08505b92 <+0x2b8>
08505b91 +0x2b7:  nop
08505b92 +0x2b8:  cmpl   $0x0,-0x18(%ebp)
08505b96 +0x2bc:  jne    08505d3f <+0x465>
08505b9c +0x2c2:  movb   $0x1,-0x21(%ebp)
08505ba0 +0x2c6:  jmp    08505d3f <+0x465>
08505ba5 +0x2cb:  movl   $0x3,-0x1c(%ebp)
08505bac +0x2d2:  jmp    08505c5b <+0x381>
08505bb1 +0x2d7:  mov    0x8(%ebp),%eax
08505bb4 +0x2da:  mov    0x650(%eax),%edx
08505bba +0x2e0:  mov    -0x1c(%ebp),%eax
08505bbd +0x2e3:  imul   $0x3d,%eax,%eax
08505bc0 +0x2e6:  lea    (%edx,%eax,1),%eax
08505bc3 +0x2e9:  mov    0x2(%eax),%edx
08505bc6 +0x2ec:  mov    -0x20(%ebp),%eax
08505bc9 +0x2ef:  cmp    %eax,%edx
08505bcb +0x2f1:  jne    08505c57 <+0x37d>
08505bd1 +0x2f7:  mov    0x8(%ebp),%eax
08505bd4 +0x2fa:  mov    0x650(%eax),%edx
08505bda +0x300:  mov    -0x1c(%ebp),%eax
08505bdd +0x303:  imul   $0x3d,%eax,%eax
08505be0 +0x306:  lea    (%edx,%eax,1),%eax
08505be3 +0x309:  mov    0x7(%eax),%eax
08505be6 +0x30c:  cmp    -0x18(%ebp),%eax
08505be9 +0x30f:  jl     08505c57 <+0x37d>
08505beb +0x311:  mov    0x8(%ebp),%eax
08505bee +0x314:  mov    0x650(%eax),%edx
08505bf4 +0x31a:  mov    -0x1c(%ebp),%eax
08505bf7 +0x31d:  imul   $0x3d,%eax,%eax
08505bfa +0x320:  lea    (%edx,%eax,1),%eax
08505bfd +0x323:  mov    0x7(%eax),%eax
08505c00 +0x326:  cmp    -0x18(%ebp),%eax
08505c03 +0x329:  jne    08505c21 <+0x347>
08505c05 +0x32b:  mov    0x8(%ebp),%eax
08505c08 +0x32e:  mov    0x650(%eax),%edx
08505c0e +0x334:  mov    -0x1c(%ebp),%eax
08505c11 +0x337:  imul   $0x3d,%eax,%eax
08505c14 +0x33a:  lea    (%edx,%eax,1),%eax
08505c17 +0x33d:  mov    %eax,(%esp)
08505c1a +0x340:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08505c1f +0x345:  jmp    08505c4d <+0x373>
08505c21 +0x347:  mov    0x8(%ebp),%eax
08505c24 +0x34a:  mov    0x650(%eax),%edx
08505c2a +0x350:  mov    -0x1c(%ebp),%eax
08505c2d +0x353:  imul   $0x3d,%eax,%eax
08505c30 +0x356:  add    %eax,%edx
08505c32 +0x358:  mov    0x8(%ebp),%eax
08505c35 +0x35b:  mov    0x650(%eax),%ecx
08505c3b +0x361:  mov    -0x1c(%ebp),%eax
08505c3e +0x364:  imul   $0x3d,%eax,%eax
08505c41 +0x367:  lea    (%ecx,%eax,1),%eax
08505c44 +0x36a:  mov    0x7(%eax),%eax
08505c47 +0x36d:  sub    -0x18(%ebp),%eax
08505c4a +0x370:  mov    %eax,0x7(%edx)
08505c4d +0x373:  movb   $0x1,-0x21(%ebp)
08505c51 +0x377:  addl   $0x1,-0x10(%ebp)
08505c55 +0x37b:  jmp    08505c6a <+0x390>
08505c57 +0x37d:  addl   $0x1,-0x1c(%ebp)
08505c5b +0x381:  cmpl   $0x8,-0x1c(%ebp)
08505c5f +0x385:  setle  %al
08505c62 +0x388:  test   %al,%al
08505c64 +0x38a:  jne    08505bb1 <+0x2d7>
08505c6a +0x390:  movzbl -0x21(%ebp),%eax
08505c6e +0x394:  xor    $0x1,%eax
08505c71 +0x397:  test   %al,%al
08505c73 +0x399:  je     08505d3f <+0x465>
08505c79 +0x39f:  mov    -0x40(%ebp),%eax
08505c7c +0x3a2:  mov    %eax,-0x1c(%ebp)
08505c7f +0x3a5:  jmp    08505d2e <+0x454>
08505c84 +0x3aa:  mov    0x8(%ebp),%eax
08505c87 +0x3ad:  mov    0x650(%eax),%edx
08505c8d +0x3b3:  mov    -0x1c(%ebp),%eax
08505c90 +0x3b6:  imul   $0x3d,%eax,%eax
08505c93 +0x3b9:  lea    (%edx,%eax,1),%eax
08505c96 +0x3bc:  mov    0x2(%eax),%edx
08505c99 +0x3bf:  mov    -0x20(%ebp),%eax
08505c9c +0x3c2:  cmp    %eax,%edx
08505c9e +0x3c4:  jne    08505d2a <+0x450>
08505ca4 +0x3ca:  mov    0x8(%ebp),%eax
08505ca7 +0x3cd:  mov    0x650(%eax),%edx
08505cad +0x3d3:  mov    -0x1c(%ebp),%eax
08505cb0 +0x3d6:  imul   $0x3d,%eax,%eax
08505cb3 +0x3d9:  lea    (%edx,%eax,1),%eax
08505cb6 +0x3dc:  mov    0x7(%eax),%eax
08505cb9 +0x3df:  cmp    -0x18(%ebp),%eax
08505cbc +0x3e2:  jl     08505d2a <+0x450>
08505cbe +0x3e4:  mov    0x8(%ebp),%eax
08505cc1 +0x3e7:  mov    0x650(%eax),%edx
08505cc7 +0x3ed:  mov    -0x1c(%ebp),%eax
08505cca +0x3f0:  imul   $0x3d,%eax,%eax
08505ccd +0x3f3:  lea    (%edx,%eax,1),%eax
08505cd0 +0x3f6:  mov    0x7(%eax),%eax
08505cd3 +0x3f9:  cmp    -0x18(%ebp),%eax
08505cd6 +0x3fc:  jne    08505cf4 <+0x41a>
08505cd8 +0x3fe:  mov    0x8(%ebp),%eax
08505cdb +0x401:  mov    0x650(%eax),%edx
08505ce1 +0x407:  mov    -0x1c(%ebp),%eax
08505ce4 +0x40a:  imul   $0x3d,%eax,%eax
08505ce7 +0x40d:  lea    (%edx,%eax,1),%eax
08505cea +0x410:  mov    %eax,(%esp)
08505ced +0x413:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08505cf2 +0x418:  jmp    08505d20 <+0x446>
08505cf4 +0x41a:  mov    0x8(%ebp),%eax
08505cf7 +0x41d:  mov    0x650(%eax),%edx
08505cfd +0x423:  mov    -0x1c(%ebp),%eax
08505d00 +0x426:  imul   $0x3d,%eax,%eax
08505d03 +0x429:  add    %eax,%edx
08505d05 +0x42b:  mov    0x8(%ebp),%eax
08505d08 +0x42e:  mov    0x650(%eax),%ecx
08505d0e +0x434:  mov    -0x1c(%ebp),%eax
08505d11 +0x437:  imul   $0x3d,%eax,%eax
08505d14 +0x43a:  lea    (%ecx,%eax,1),%eax
08505d17 +0x43d:  mov    0x7(%eax),%eax
08505d1a +0x440:  sub    -0x18(%ebp),%eax
08505d1d +0x443:  mov    %eax,0x7(%edx)
08505d20 +0x446:  movb   $0x1,-0x21(%ebp)
08505d24 +0x44a:  addl   $0x1,-0x10(%ebp)
08505d28 +0x44e:  jmp    08505d3f <+0x465>
08505d2a +0x450:  addl   $0x1,-0x1c(%ebp)
08505d2e +0x454:  mov    -0x44(%ebp),%eax
08505d31 +0x457:  cmp    %eax,-0x1c(%ebp)
08505d34 +0x45a:  setle  %al
08505d37 +0x45d:  test   %al,%al
08505d39 +0x45f:  jne    08505c84 <+0x3aa>
08505d3f +0x465:  lea    -0x28(%ebp),%eax
08505d42 +0x468:  movl   $0x0,0x8(%esp)
08505d4a +0x470:  lea    -0x50(%ebp),%edx
08505d4d +0x473:  mov    %edx,0x4(%esp)
08505d51 +0x477:  mov    %eax,(%esp)
08505d54 +0x47a:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08505d59 +0x47f:  sub    $0x4,%esp
08505d5c +0x482:  jmp    08505d5f <+0x485>
08505d5e +0x484:  nop
08505d5f +0x485:  lea    -0x3c(%ebp),%eax
08505d62 +0x488:  mov    0xc(%ebp),%edx
08505d65 +0x48b:  mov    %edx,0x4(%esp)
08505d69 +0x48f:  mov    %eax,(%esp)
08505d6c +0x492:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08505d71 +0x497:  sub    $0x4,%esp
08505d74 +0x49a:  lea    -0x3c(%ebp),%eax
08505d77 +0x49d:  mov    %eax,0x4(%esp)
08505d7b +0x4a1:  lea    -0x50(%ebp),%eax
08505d7e +0x4a4:  mov    %eax,(%esp)
08505d81 +0x4a7:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08505d86 +0x4ac:  test   %al,%al
08505d88 +0x4ae:  jne    08505956 <+0x7c>
08505d8e +0x4b4:  mov    0xc(%ebp),%eax
08505d91 +0x4b7:  mov    %eax,(%esp)
08505d94 +0x4ba:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08505d99 +0x4bf:  mov    -0x10(%ebp),%edx
08505d9c +0x4c2:  cmp    %edx,%eax
08505d9e +0x4c4:  setne  %al
08505da1 +0x4c7:  test   %al,%al
08505da3 +0x4c9:  je     08505dac <+0x4d2>
08505da5 +0x4cb:  mov    $0x0,%eax
08505daa +0x4d0:  jmp    08505db1 <+0x4d7>
08505dac +0x4d2:  mov    $0x1,%eax
08505db1 +0x4d7:  leave
08505db2 +0x4d8:  ret
08505db3 +0x4d9:  nop
```

## 反编译 C

```c
// CInventory::tryDeleteEventItems @ 0x85058da

/* CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

undefined4 __thiscall CInventory::tryDeleteEventItems(CInventory *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_54 [4];
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  __normal_iterator local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_34 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [7];
  char local_25;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = CUser::getGmQuestFlag(*(CUser **)this);
  if (cVar1 == '\0') {
    local_14 = 0;
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      std::pair<int,int>::pair((pair<int,int> *)&local_50);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::__normal_iterator(local_54);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar2 = __gnu_cxx::operator!=(local_54,local_40);
        if (!bVar2) break;
        local_25 = '\0';
        puVar5 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                 ::operator*(local_54);
        local_38 = puVar5[1];
        local_3c = *puVar5;
        std::pair<int,int>::operator=((pair<int,int> *)&local_50,(pair *)&local_3c);
        local_24 = local_50;
        local_1c = local_4c;
        if (local_50 == 0) {
          cVar1 = use_money(this,local_4c,4,0);
          if (cVar1 != '\0') {
            local_14 = local_14 + 1;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_34,(int)local_54);
        }
        else if (local_50 == 2) {
          uVar6 = CUserCharacInfo::GetWinPoint(*(CUserCharacInfo **)this);
          if (local_1c <= uVar6) {
            local_14 = local_14 + 1;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_30,(int)local_54);
        }
        else {
          local_18 = GetItemType(this,local_50);
          if (local_18 != 0) {
            StartEndPos(this,local_18,&local_44,&local_48);
            if (local_18 == 1) {
              for (local_20 = local_44; local_20 <= local_48; local_20 = local_20 + 1) {
                if (*(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 2) == local_24) {
                  local_14 = local_14 + 1;
                  Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + local_20 * 0x3d));
                  local_1c = local_1c - 1;
                  if (local_1c == 0) break;
                }
              }
              if (0 < (int)local_1c) {
                for (local_20 = 3; local_20 < 9; local_20 = local_20 + 1) {
                  if (*(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 2) == local_24) {
                    local_14 = local_14 + 1;
                    Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + local_20 * 0x3d));
                    local_1c = local_1c - 1;
                    if (local_1c == 0) break;
                  }
                }
              }
              if (0 < (int)local_1c) {
                for (local_10 = 0; local_10 < 0x1a; local_10 = local_10 + 1) {
                  if (*(int *)(this + local_10 * 0x3d + 0x1e) == local_24) {
                    local_14 = local_14 + 1;
                    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0x1c));
                    local_1c = local_1c - 1;
                    if (local_1c == 0) break;
                  }
                }
              }
              if (local_1c == 0) {
                local_25 = '\x01';
              }
            }
            else {
              for (local_20 = 3; local_20 < 9; local_20 = local_20 + 1) {
                if ((*(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 2) == local_24) &&
                   ((int)local_1c <= *(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7))) {
                  if (*(uint *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7) == local_1c) {
                    Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + local_20 * 0x3d));
                  }
                  else {
                    *(uint *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7) =
                         *(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7) - local_1c;
                  }
                  local_25 = '\x01';
                  local_14 = local_14 + 1;
                  break;
                }
              }
              if (local_25 != '\x01') {
                for (local_20 = local_44; local_20 <= local_48; local_20 = local_20 + 1) {
                  if ((*(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 2) == local_24) &&
                     ((int)local_1c <= *(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7))) {
                    if (*(uint *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7) == local_1c) {
                      Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + local_20 * 0x3d));
                    }
                    else {
                      *(uint *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7) =
                           *(int *)(*(int *)(this + 0x650) + local_20 * 0x3d + 7) - local_1c;
                    }
                    local_25 = '\x01';
                    local_14 = local_14 + 1;
                    break;
                  }
                }
              }
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_2c,(int)local_54);
          }
        }
      }
      iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
      if (iVar4 == local_14) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
