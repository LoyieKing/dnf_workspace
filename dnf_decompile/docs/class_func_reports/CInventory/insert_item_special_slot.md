# insert_item_special_slot

`_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason`

`CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085039e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085039e8  _ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason
#           CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)
# range [0x085039e8, 0x0850400b]
085039e8 +0x000:  push   %ebp
085039e9 +0x001:  mov    %esp,%ebp
085039eb +0x003:  push   %edi
085039ec +0x004:  push   %esi
085039ed +0x005:  push   %ebx
085039ee +0x006:  sub    $0x7c,%esp
085039f1 +0x009:  mov    0xe(%ebp),%eax
085039f4 +0x00c:  test   %eax,%eax
085039f6 +0x00e:  jne    08503a85 <+0x9d>
085039fc +0x014:  cmpl   $0x0,0x4c(%ebp)
08503a00 +0x018:  jns    08503a52 <+0x6a>
08503a02 +0x01a:  movl   $0x5,0xc(%esp)
08503a0a +0x022:  movl   $0x1742,0x8(%esp)
08503a12 +0x02a:  movl   $&_ZZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReasonE19__PRETTY_FUNCTION__,0x4(%esp)
08503a1a +0x032:  lea    -0x4c(%ebp),%eax
08503a1d +0x035:  mov    %eax,(%esp)
08503a20 +0x038:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08503a25 +0x03d:  movl   $0x1742,0xc(%esp)
08503a2d +0x045:  movl   $&_ZZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReasonE19__PRETTY_FUNCTION__,0x8(%esp)
08503a35 +0x04d:  movl   $"[%s][%d]",0x4(%esp)
08503a3d +0x055:  lea    -0x4c(%ebp),%eax
08503a40 +0x058:  mov    %eax,(%esp)
08503a43 +0x05b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08503a48 +0x060:  mov    $0xfffffffe,%eax
08503a4d +0x065:  jmp    08504004 <+0x61c>
08503a52 +0x06a:  movl   $0x0,0x10(%esp)
08503a5a +0x072:  movl   $0x1,0xc(%esp)
08503a62 +0x07a:  mov    0x54(%ebp),%eax
08503a65 +0x07d:  mov    %eax,0x8(%esp)
08503a69 +0x081:  mov    0x4c(%ebp),%eax
08503a6c +0x084:  mov    %eax,0x4(%esp)
08503a70 +0x088:  mov    0x8(%ebp),%eax
08503a73 +0x08b:  mov    %eax,(%esp)
08503a76 +0x08e:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08503a7b +0x093:  mov    $0x0,%eax
08503a80 +0x098:  jmp    08504004 <+0x61c>
08503a85 +0x09d:  movzbl 0xd(%ebp),%eax
08503a89 +0x0a1:  cmp    $0x1,%al
08503a8b +0x0a3:  jne    08503b6a <+0x182>
08503a91 +0x0a9:  mov    0x8(%ebp),%eax
08503a94 +0x0ac:  mov    0x650(%eax),%edx
08503a9a +0x0b2:  mov    0x50(%ebp),%eax
08503a9d +0x0b5:  imul   $0x3d,%eax,%eax
08503aa0 +0x0b8:  lea    (%edx,%eax,1),%eax
08503aa3 +0x0bb:  mov    0x2(%eax),%eax
08503aa6 +0x0be:  test   %eax,%eax
08503aa8 +0x0c0:  jne    08503fff <+0x617>
08503aae +0x0c6:  mov    0x8(%ebp),%eax
08503ab1 +0x0c9:  mov    0x650(%eax),%edx
08503ab7 +0x0cf:  mov    0x50(%ebp),%eax
08503aba +0x0d2:  imul   $0x3d,%eax,%eax
08503abd +0x0d5:  lea    (%edx,%eax,1),%eax
08503ac0 +0x0d8:  mov    0xc(%ebp),%edx
08503ac3 +0x0db:  mov    %edx,(%eax)
08503ac5 +0x0dd:  mov    0x10(%ebp),%edx
08503ac8 +0x0e0:  mov    %edx,0x4(%eax)
08503acb +0x0e3:  mov    0x14(%ebp),%edx
08503ace +0x0e6:  mov    %edx,0x8(%eax)
08503ad1 +0x0e9:  mov    0x18(%ebp),%edx
08503ad4 +0x0ec:  mov    %edx,0xc(%eax)
08503ad7 +0x0ef:  mov    0x1c(%ebp),%edx
08503ada +0x0f2:  mov    %edx,0x10(%eax)
08503add +0x0f5:  mov    0x20(%ebp),%edx
08503ae0 +0x0f8:  mov    %edx,0x14(%eax)
08503ae3 +0x0fb:  mov    0x24(%ebp),%edx
08503ae6 +0x0fe:  mov    %edx,0x18(%eax)
08503ae9 +0x101:  mov    0x28(%ebp),%edx
08503aec +0x104:  mov    %edx,0x1c(%eax)
08503aef +0x107:  mov    0x2c(%ebp),%edx
08503af2 +0x10a:  mov    %edx,0x20(%eax)
08503af5 +0x10d:  mov    0x30(%ebp),%edx
08503af8 +0x110:  mov    %edx,0x24(%eax)
08503afb +0x113:  mov    0x34(%ebp),%edx
08503afe +0x116:  mov    %edx,0x28(%eax)
08503b01 +0x119:  mov    0x38(%ebp),%edx
08503b04 +0x11c:  mov    %edx,0x2c(%eax)
08503b07 +0x11f:  mov    0x3c(%ebp),%edx
08503b0a +0x122:  mov    %edx,0x30(%eax)
08503b0d +0x125:  mov    0x40(%ebp),%edx
08503b10 +0x128:  mov    %edx,0x34(%eax)
08503b13 +0x12b:  mov    0x44(%ebp),%edx
08503b16 +0x12e:  mov    %edx,0x38(%eax)
08503b19 +0x131:  movzbl 0x48(%ebp),%edx
08503b1d +0x135:  mov    %dl,0x3c(%eax)
08503b20 +0x138:  mov    0x8(%ebp),%eax
08503b23 +0x13b:  mov    (%eax),%eax
08503b25 +0x13d:  test   %eax,%eax
08503b27 +0x13f:  je     08503b62 <+0x17a>
08503b29 +0x141:  mov    0x8(%ebp),%eax
08503b2c +0x144:  mov    (%eax),%eax
08503b2e +0x146:  lea    0x79700(%eax),%edx
08503b34 +0x14c:  mov    0x58(%ebp),%eax
08503b37 +0x14f:  mov    %eax,0x14(%esp)
08503b3b +0x153:  lea    0xc(%ebp),%eax
08503b3e +0x156:  mov    %eax,0x10(%esp)
08503b42 +0x15a:  movl   $0x1,0xc(%esp)
08503b4a +0x162:  movl   $0x1,0x8(%esp)
08503b52 +0x16a:  movl   $0x1,0x4(%esp)
08503b5a +0x172:  mov    %edx,(%esp)
08503b5d +0x175:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08503b62 +0x17a:  mov    0x50(%ebp),%eax
08503b65 +0x17d:  jmp    08504004 <+0x61c>
08503b6a +0x182:  movl   $0x3,-0x1c(%ebp)
08503b71 +0x189:  jmp    08503d1f <+0x337>
08503b76 +0x18e:  mov    0x8(%ebp),%eax
08503b79 +0x191:  mov    0x650(%eax),%edx
08503b7f +0x197:  mov    -0x1c(%ebp),%eax
08503b82 +0x19a:  imul   $0x3d,%eax,%eax
08503b85 +0x19d:  lea    (%edx,%eax,1),%eax
08503b88 +0x1a0:  mov    0x2(%eax),%edx
08503b8b +0x1a3:  mov    0xe(%ebp),%eax
08503b8e +0x1a6:  cmp    %eax,%edx
08503b90 +0x1a8:  jne    08503d1b <+0x333>
08503b96 +0x1ae:  mov    $0x7fffffff,%eax
08503b9b +0x1b3:  mov    %eax,%edx
08503b9d +0x1b5:  sub    0x4c(%ebp),%edx
08503ba0 +0x1b8:  mov    0x8(%ebp),%eax
08503ba3 +0x1bb:  mov    0x650(%eax),%ecx
08503ba9 +0x1c1:  mov    -0x1c(%ebp),%eax
08503bac +0x1c4:  imul   $0x3d,%eax,%eax
08503baf +0x1c7:  lea    (%ecx,%eax,1),%eax
08503bb2 +0x1ca:  mov    0x7(%eax),%eax
08503bb5 +0x1cd:  cmp    %eax,%edx
08503bb7 +0x1cf:  jge    08503c86 <+0x29e>
08503bbd +0x1d5:  mov    0x8(%ebp),%eax
08503bc0 +0x1d8:  mov    (%eax),%eax
08503bc2 +0x1da:  test   %eax,%eax
08503bc4 +0x1dc:  je     08503c6b <+0x283>
08503bca +0x1e2:  mov    0xe(%ebp),%eax
08503bcd +0x1e5:  mov    %eax,-0x5c(%ebp)
08503bd0 +0x1e8:  mov    0x8(%ebp),%eax
08503bd3 +0x1eb:  mov    0x650(%eax),%edx
08503bd9 +0x1f1:  mov    -0x1c(%ebp),%eax
08503bdc +0x1f4:  imul   $0x3d,%eax,%eax
08503bdf +0x1f7:  lea    (%edx,%eax,1),%eax
08503be2 +0x1fa:  mov    0x7(%eax),%edi
08503be5 +0x1fd:  mov    0x8(%ebp),%eax
08503be8 +0x200:  mov    (%eax),%eax
08503bea +0x202:  movl   $0xffffffff,0x4(%esp)
08503bf2 +0x20a:  mov    %eax,(%esp)
08503bf5 +0x20d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08503bfa +0x212:  mov    %eax,%esi
08503bfc +0x214:  mov    0x8(%ebp),%eax
08503bff +0x217:  mov    (%eax),%eax
08503c01 +0x219:  mov    %eax,(%esp)
08503c04 +0x21c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08503c09 +0x221:  movl   $0x0,0x4(%esp)
08503c11 +0x229:  mov    %eax,(%esp)
08503c14 +0x22c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08503c19 +0x231:  mov    %eax,%ebx
08503c1b +0x233:  movl   $0x4,0xc(%esp)
08503c23 +0x23b:  movl   $0x177c,0x8(%esp)
08503c2b +0x243:  movl   $&_ZZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReasonE19__PRETTY_FUNCTION__,0x4(%esp)
08503c33 +0x24b:  lea    -0x3c(%ebp),%eax
08503c36 +0x24e:  mov    %eax,(%esp)
08503c39 +0x251:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08503c3e +0x256:  mov    -0x5c(%ebp),%eax
08503c41 +0x259:  mov    %eax,0x18(%esp)
08503c45 +0x25d:  mov    0x4c(%ebp),%eax
08503c48 +0x260:  mov    %eax,0x14(%esp)
08503c4c +0x264:  mov    %edi,0x10(%esp)
08503c50 +0x268:  mov    %esi,0xc(%esp)
08503c54 +0x26c:  mov    %ebx,0x8(%esp)
08503c58 +0x270:  movl   $"INVEN INT_MAX setting 3 : mid(%d),characNo(%d),inven(%d)+add(%d) item_id(%d)",0x4(%esp)
08503c60 +0x278:  lea    -0x3c(%ebp),%eax
08503c63 +0x27b:  mov    %eax,(%esp)
08503c66 +0x27e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08503c6b +0x283:  mov    0x8(%ebp),%eax
08503c6e +0x286:  mov    0x650(%eax),%edx
08503c74 +0x28c:  mov    -0x1c(%ebp),%eax
08503c77 +0x28f:  imul   $0x3d,%eax,%eax
08503c7a +0x292:  lea    (%edx,%eax,1),%eax
08503c7d +0x295:  movl   $0x7fffffff,0x7(%eax)
08503c84 +0x29c:  jmp    08503cb2 <+0x2ca>
08503c86 +0x29e:  mov    0x8(%ebp),%eax
08503c89 +0x2a1:  mov    0x650(%eax),%edx
08503c8f +0x2a7:  mov    -0x1c(%ebp),%eax
08503c92 +0x2aa:  imul   $0x3d,%eax,%eax
08503c95 +0x2ad:  add    %eax,%edx
08503c97 +0x2af:  mov    0x8(%ebp),%eax
08503c9a +0x2b2:  mov    0x650(%eax),%ecx
08503ca0 +0x2b8:  mov    -0x1c(%ebp),%eax
08503ca3 +0x2bb:  imul   $0x3d,%eax,%eax
08503ca6 +0x2be:  lea    (%ecx,%eax,1),%eax
08503ca9 +0x2c1:  mov    0x7(%eax),%eax
08503cac +0x2c4:  add    0x4c(%ebp),%eax
08503caf +0x2c7:  mov    %eax,0x7(%edx)
08503cb2 +0x2ca:  mov    0x8(%ebp),%eax
08503cb5 +0x2cd:  mov    (%eax),%eax
08503cb7 +0x2cf:  test   %eax,%eax
08503cb9 +0x2d1:  je     08503d13 <+0x32b>
08503cbb +0x2d3:  lea    0xc(%ebp),%eax
08503cbe +0x2d6:  mov    %eax,(%esp)
08503cc1 +0x2d9:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503cc6 +0x2de:  mov    %eax,%ebx
08503cc8 +0x2e0:  mov    0x8(%ebp),%eax
08503ccb +0x2e3:  mov    0x650(%eax),%edx
08503cd1 +0x2e9:  mov    -0x1c(%ebp),%eax
08503cd4 +0x2ec:  imul   $0x3d,%eax,%eax
08503cd7 +0x2ef:  lea    (%edx,%eax,1),%eax
08503cda +0x2f2:  mov    %eax,(%esp)
08503cdd +0x2f5:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503ce2 +0x2fa:  mov    0x8(%ebp),%edx
08503ce5 +0x2fd:  mov    (%edx),%edx
08503ce7 +0x2ff:  lea    0x79700(%edx),%ecx
08503ced +0x305:  mov    0x58(%ebp),%edx
08503cf0 +0x308:  mov    %edx,0x14(%esp)
08503cf4 +0x30c:  lea    0xc(%ebp),%edx
08503cf7 +0x30f:  mov    %edx,0x10(%esp)
08503cfb +0x313:  mov    %ebx,0xc(%esp)
08503cff +0x317:  mov    %eax,0x8(%esp)
08503d03 +0x31b:  movl   $0x1,0x4(%esp)
08503d0b +0x323:  mov    %ecx,(%esp)
08503d0e +0x326:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08503d13 +0x32b:  mov    -0x1c(%ebp),%eax
08503d16 +0x32e:  jmp    08504004 <+0x61c>
08503d1b +0x333:  addl   $0x1,-0x1c(%ebp)
08503d1f +0x337:  cmpl   $0x8,-0x1c(%ebp)
08503d23 +0x33b:  setle  %al
08503d26 +0x33e:  test   %al,%al
08503d28 +0x340:  jne    08503b76 <+0x18e>
08503d2e +0x346:  movzbl 0xd(%ebp),%eax
08503d32 +0x34a:  movzbl %al,%eax
08503d35 +0x34d:  lea    -0x54(%ebp),%edx
08503d38 +0x350:  mov    %edx,0xc(%esp)
08503d3c +0x354:  lea    -0x50(%ebp),%edx
08503d3f +0x357:  mov    %edx,0x8(%esp)
08503d43 +0x35b:  mov    %eax,0x4(%esp)
08503d47 +0x35f:  mov    0x8(%ebp),%eax
08503d4a +0x362:  mov    %eax,(%esp)
08503d4d +0x365:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08503d52 +0x36a:  mov    -0x50(%ebp),%eax
08503d55 +0x36d:  mov    %eax,-0x1c(%ebp)
08503d58 +0x370:  jmp    08503ef9 <+0x511>
08503d5d +0x375:  mov    0x8(%ebp),%eax
08503d60 +0x378:  mov    0x650(%eax),%edx
08503d66 +0x37e:  mov    -0x1c(%ebp),%eax
08503d69 +0x381:  imul   $0x3d,%eax,%eax
08503d6c +0x384:  lea    (%edx,%eax,1),%eax
08503d6f +0x387:  mov    0x2(%eax),%edx
08503d72 +0x38a:  mov    0xe(%ebp),%eax
08503d75 +0x38d:  cmp    %eax,%edx
08503d77 +0x38f:  jne    08503ef5 <+0x50d>
08503d7d +0x395:  mov    $0x7fffffff,%eax
08503d82 +0x39a:  mov    %eax,%edx
08503d84 +0x39c:  sub    0x4c(%ebp),%edx
08503d87 +0x39f:  mov    0x8(%ebp),%eax
08503d8a +0x3a2:  mov    0x650(%eax),%ecx
08503d90 +0x3a8:  mov    -0x1c(%ebp),%eax
08503d93 +0x3ab:  imul   $0x3d,%eax,%eax
08503d96 +0x3ae:  lea    (%ecx,%eax,1),%eax
08503d99 +0x3b1:  mov    0x7(%eax),%eax
08503d9c +0x3b4:  cmp    %eax,%edx
08503d9e +0x3b6:  jge    08503e60 <+0x478>
08503da4 +0x3bc:  mov    0x8(%ebp),%eax
08503da7 +0x3bf:  mov    0x650(%eax),%edx
08503dad +0x3c5:  mov    -0x1c(%ebp),%eax
08503db0 +0x3c8:  imul   $0x3d,%eax,%eax
08503db3 +0x3cb:  lea    (%edx,%eax,1),%eax
08503db6 +0x3ce:  movl   $0x7fffffff,0x7(%eax)
08503dbd +0x3d5:  mov    0x8(%ebp),%eax
08503dc0 +0x3d8:  mov    (%eax),%eax
08503dc2 +0x3da:  test   %eax,%eax
08503dc4 +0x3dc:  je     08503e8c <+0x4a4>
08503dca +0x3e2:  mov    0x8(%ebp),%eax
08503dcd +0x3e5:  mov    0x650(%eax),%edx
08503dd3 +0x3eb:  mov    -0x1c(%ebp),%eax
08503dd6 +0x3ee:  imul   $0x3d,%eax,%eax
08503dd9 +0x3f1:  lea    (%edx,%eax,1),%eax
08503ddc +0x3f4:  mov    0x7(%eax),%edi
08503ddf +0x3f7:  mov    0x8(%ebp),%eax
08503de2 +0x3fa:  mov    (%eax),%eax
08503de4 +0x3fc:  movl   $0xffffffff,0x4(%esp)
08503dec +0x404:  mov    %eax,(%esp)
08503def +0x407:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08503df4 +0x40c:  mov    %eax,%esi
08503df6 +0x40e:  mov    0x8(%ebp),%eax
08503df9 +0x411:  mov    (%eax),%eax
08503dfb +0x413:  mov    %eax,(%esp)
08503dfe +0x416:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08503e03 +0x41b:  movl   $0x0,0x4(%esp)
08503e0b +0x423:  mov    %eax,(%esp)
08503e0e +0x426:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08503e13 +0x42b:  mov    %eax,%ebx
08503e15 +0x42d:  movl   $0x4,0xc(%esp)
08503e1d +0x435:  movl   $0x179f,0x8(%esp)
08503e25 +0x43d:  movl   $&_ZZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReasonE19__PRETTY_FUNCTION__,0x4(%esp)
08503e2d +0x445:  lea    -0x2c(%ebp),%eax
08503e30 +0x448:  mov    %eax,(%esp)
08503e33 +0x44b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08503e38 +0x450:  mov    0x4c(%ebp),%eax
08503e3b +0x453:  mov    %eax,0x14(%esp)
08503e3f +0x457:  mov    %edi,0x10(%esp)
08503e43 +0x45b:  mov    %esi,0xc(%esp)
08503e47 +0x45f:  mov    %ebx,0x8(%esp)
08503e4b +0x463:  movl   $"INT_MAX setting 3 : mid(%d),characNo(%d), inven(%d)+add(%d)",0x4(%esp)
08503e53 +0x46b:  lea    -0x2c(%ebp),%eax
08503e56 +0x46e:  mov    %eax,(%esp)
08503e59 +0x471:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08503e5e +0x476:  jmp    08503e8c <+0x4a4>
08503e60 +0x478:  mov    0x8(%ebp),%eax
08503e63 +0x47b:  mov    0x650(%eax),%edx
08503e69 +0x481:  mov    -0x1c(%ebp),%eax
08503e6c +0x484:  imul   $0x3d,%eax,%eax
08503e6f +0x487:  add    %eax,%edx
08503e71 +0x489:  mov    0x8(%ebp),%eax
08503e74 +0x48c:  mov    0x650(%eax),%ecx
08503e7a +0x492:  mov    -0x1c(%ebp),%eax
08503e7d +0x495:  imul   $0x3d,%eax,%eax
08503e80 +0x498:  lea    (%ecx,%eax,1),%eax
08503e83 +0x49b:  mov    0x7(%eax),%eax
08503e86 +0x49e:  add    0x4c(%ebp),%eax
08503e89 +0x4a1:  mov    %eax,0x7(%edx)
08503e8c +0x4a4:  mov    0x8(%ebp),%eax
08503e8f +0x4a7:  mov    (%eax),%eax
08503e91 +0x4a9:  test   %eax,%eax
08503e93 +0x4ab:  je     08503eed <+0x505>
08503e95 +0x4ad:  lea    0xc(%ebp),%eax
08503e98 +0x4b0:  mov    %eax,(%esp)
08503e9b +0x4b3:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503ea0 +0x4b8:  mov    %eax,%ebx
08503ea2 +0x4ba:  mov    0x8(%ebp),%eax
08503ea5 +0x4bd:  mov    0x650(%eax),%edx
08503eab +0x4c3:  mov    -0x1c(%ebp),%eax
08503eae +0x4c6:  imul   $0x3d,%eax,%eax
08503eb1 +0x4c9:  lea    (%edx,%eax,1),%eax
08503eb4 +0x4cc:  mov    %eax,(%esp)
08503eb7 +0x4cf:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503ebc +0x4d4:  mov    0x8(%ebp),%edx
08503ebf +0x4d7:  mov    (%edx),%edx
08503ec1 +0x4d9:  lea    0x79700(%edx),%ecx
08503ec7 +0x4df:  mov    0x58(%ebp),%edx
08503eca +0x4e2:  mov    %edx,0x14(%esp)
08503ece +0x4e6:  lea    0xc(%ebp),%edx
08503ed1 +0x4e9:  mov    %edx,0x10(%esp)
08503ed5 +0x4ed:  mov    %ebx,0xc(%esp)
08503ed9 +0x4f1:  mov    %eax,0x8(%esp)
08503edd +0x4f5:  movl   $0x1,0x4(%esp)
08503ee5 +0x4fd:  mov    %ecx,(%esp)
08503ee8 +0x500:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08503eed +0x505:  mov    -0x1c(%ebp),%eax
08503ef0 +0x508:  jmp    08504004 <+0x61c>
08503ef5 +0x50d:  addl   $0x1,-0x1c(%ebp)
08503ef9 +0x511:  mov    -0x54(%ebp),%eax
08503efc +0x514:  cmp    %eax,-0x1c(%ebp)
08503eff +0x517:  setle  %al
08503f02 +0x51a:  test   %al,%al
08503f04 +0x51c:  jne    08503d5d <+0x375>
08503f0a +0x522:  mov    0x8(%ebp),%eax
08503f0d +0x525:  mov    0x650(%eax),%edx
08503f13 +0x52b:  mov    0x50(%ebp),%eax
08503f16 +0x52e:  imul   $0x3d,%eax,%eax
08503f19 +0x531:  lea    (%edx,%eax,1),%eax
08503f1c +0x534:  mov    0x2(%eax),%eax
08503f1f +0x537:  test   %eax,%eax
08503f21 +0x539:  jne    08503fff <+0x617>
08503f27 +0x53f:  mov    0x8(%ebp),%eax
08503f2a +0x542:  mov    0x650(%eax),%edx
08503f30 +0x548:  mov    0x50(%ebp),%eax
08503f33 +0x54b:  imul   $0x3d,%eax,%eax
08503f36 +0x54e:  lea    (%edx,%eax,1),%eax
08503f39 +0x551:  mov    0xc(%ebp),%edx
08503f3c +0x554:  mov    %edx,(%eax)
08503f3e +0x556:  mov    0x10(%ebp),%edx
08503f41 +0x559:  mov    %edx,0x4(%eax)
08503f44 +0x55c:  mov    0x14(%ebp),%edx
08503f47 +0x55f:  mov    %edx,0x8(%eax)
08503f4a +0x562:  mov    0x18(%ebp),%edx
08503f4d +0x565:  mov    %edx,0xc(%eax)
08503f50 +0x568:  mov    0x1c(%ebp),%edx
08503f53 +0x56b:  mov    %edx,0x10(%eax)
08503f56 +0x56e:  mov    0x20(%ebp),%edx
08503f59 +0x571:  mov    %edx,0x14(%eax)
08503f5c +0x574:  mov    0x24(%ebp),%edx
08503f5f +0x577:  mov    %edx,0x18(%eax)
08503f62 +0x57a:  mov    0x28(%ebp),%edx
08503f65 +0x57d:  mov    %edx,0x1c(%eax)
08503f68 +0x580:  mov    0x2c(%ebp),%edx
08503f6b +0x583:  mov    %edx,0x20(%eax)
08503f6e +0x586:  mov    0x30(%ebp),%edx
08503f71 +0x589:  mov    %edx,0x24(%eax)
08503f74 +0x58c:  mov    0x34(%ebp),%edx
08503f77 +0x58f:  mov    %edx,0x28(%eax)
08503f7a +0x592:  mov    0x38(%ebp),%edx
08503f7d +0x595:  mov    %edx,0x2c(%eax)
08503f80 +0x598:  mov    0x3c(%ebp),%edx
08503f83 +0x59b:  mov    %edx,0x30(%eax)
08503f86 +0x59e:  mov    0x40(%ebp),%edx
08503f89 +0x5a1:  mov    %edx,0x34(%eax)
08503f8c +0x5a4:  mov    0x44(%ebp),%edx
08503f8f +0x5a7:  mov    %edx,0x38(%eax)
08503f92 +0x5aa:  movzbl 0x48(%ebp),%edx
08503f96 +0x5ae:  mov    %dl,0x3c(%eax)
08503f99 +0x5b1:  mov    0x8(%ebp),%eax
08503f9c +0x5b4:  mov    (%eax),%eax
08503f9e +0x5b6:  test   %eax,%eax
08503fa0 +0x5b8:  je     08503ffa <+0x612>
08503fa2 +0x5ba:  lea    0xc(%ebp),%eax
08503fa5 +0x5bd:  mov    %eax,(%esp)
08503fa8 +0x5c0:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503fad +0x5c5:  mov    %eax,%ebx
08503faf +0x5c7:  mov    0x8(%ebp),%eax
08503fb2 +0x5ca:  mov    0x650(%eax),%edx
08503fb8 +0x5d0:  mov    -0x1c(%ebp),%eax
08503fbb +0x5d3:  imul   $0x3d,%eax,%eax
08503fbe +0x5d6:  lea    (%edx,%eax,1),%eax
08503fc1 +0x5d9:  mov    %eax,(%esp)
08503fc4 +0x5dc:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503fc9 +0x5e1:  mov    0x8(%ebp),%edx
08503fcc +0x5e4:  mov    (%edx),%edx
08503fce +0x5e6:  lea    0x79700(%edx),%ecx
08503fd4 +0x5ec:  mov    0x58(%ebp),%edx
08503fd7 +0x5ef:  mov    %edx,0x14(%esp)
08503fdb +0x5f3:  lea    0xc(%ebp),%edx
08503fde +0x5f6:  mov    %edx,0x10(%esp)
08503fe2 +0x5fa:  mov    %ebx,0xc(%esp)
08503fe6 +0x5fe:  mov    %eax,0x8(%esp)
08503fea +0x602:  movl   $0x1,0x4(%esp)
08503ff2 +0x60a:  mov    %ecx,(%esp)
08503ff5 +0x60d:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08503ffa +0x612:  mov    0x50(%ebp),%eax
08503ffd +0x615:  jmp    08504004 <+0x61c>
08503fff +0x617:  mov    $0xffffffff,%eax
08504004 +0x61c:  add    $0x7c,%esp
08504007 +0x61f:  pop    %ebx
08504008 +0x620:  pop    %esi
08504009 +0x621:  pop    %edi
0850400a +0x622:  pop    %ebp
0850400b +0x623:  ret
```

## 反编译 C

```c
// CInventory::insert_item_special_slot @ 0x85039e8

/* CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason) */

int CInventory::insert_item_special_slot
              (CInventory *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined1 param_17,int param_18,int param_19,undefined4 param_20,undefined4 param_21)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_58;
  int local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  if (CONCAT22((undefined2)param_3,param_2._2_2_) == 0) {
    if (param_18 < 0) {
      cMyTrace::cMyTrace(local_50,
                         "int CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)"
                         ,0x1742,5);
      cMyTrace::operator()
                (local_50,"[%s][%d]",
                 "int CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)"
                 ,0x1742);
      iVar2 = -2;
    }
    else {
      gain_money(param_1,param_18,param_20,1,0);
      iVar2 = 0;
    }
  }
  else {
    if (param_2._1_1_ == '\x01') {
      if (*(int *)(*(int *)(param_1 + 0x650) + param_19 * 0x3d + 2) == 0) {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x650) + param_19 * 0x3d);
        *puVar1 = CONCAT22(param_2._2_2_,CONCAT11(1,param_2._0_1_));
        puVar1[1] = param_3;
        puVar1[2] = param_4;
        puVar1[3] = param_5;
        puVar1[4] = param_6;
        puVar1[5] = param_7;
        puVar1[6] = param_8;
        puVar1[7] = param_9;
        puVar1[8] = param_10;
        puVar1[9] = param_11;
        puVar1[10] = param_12;
        puVar1[0xb] = param_13;
        puVar1[0xc] = param_14;
        puVar1[0xd] = param_15;
        puVar1[0xe] = param_16;
        *(undefined1 *)(puVar1 + 0xf) = param_17;
        if (*(int *)param_1 == 0) {
          return param_19;
        }
        cUserHistoryLog::ItemAdd
                  ((cUserHistoryLog *)(*(int *)param_1 + 0x79700),1,1,1,&param_2,param_21);
        return param_19;
      }
    }
    else {
      for (local_20 = 3; local_20 < 9; local_20 = local_20 + 1) {
        if (*(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 2) ==
            CONCAT22((undefined2)param_3,param_2._2_2_)) {
          if (0x7fffffff - param_18 < *(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7)) {
            if (*(int *)param_1 != 0) {
              uVar7 = CONCAT22((undefined2)param_3,param_2._2_2_);
              uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7);
              uVar5 = CUser::get_charac_no(*(CUser **)param_1,-1);
              uVar4 = CUser::get_acc_id(*(CUser **)param_1);
              uVar3 = NumberToString(uVar4,0);
              cMyTrace::cMyTrace(local_40,
                                 "int CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)"
                                 ,0x177c,4);
              cMyTrace::operator()
                        (local_40,
                         "INVEN INT_MAX setting 3 : mid(%d),characNo(%d),inven(%d)+add(%d) item_id(%d)"
                         ,uVar3,uVar5,uVar6,param_18,uVar7);
            }
            *(undefined4 *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7) = 0x7fffffff;
          }
          else {
            *(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7) =
                 *(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7) + param_18;
          }
          if (*(int *)param_1 == 0) {
            return local_20;
          }
          uVar6 = Inven_Item::get_add_info((Inven_Item *)&param_2);
          uVar7 = Inven_Item::get_add_info
                            ((Inven_Item *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d));
          cUserHistoryLog::ItemAdd
                    ((cUserHistoryLog *)(*(int *)param_1 + 0x79700),1,uVar7,uVar6,&param_2,param_21)
          ;
          return local_20;
        }
      }
      StartEndPos(param_1,param_2._1_1_,&local_54,&local_58);
      for (local_20 = local_54; local_20 <= local_58; local_20 = local_20 + 1) {
        if (*(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 2) ==
            CONCAT22((undefined2)param_3,param_2._2_2_)) {
          if (0x7fffffff - param_18 < *(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7)) {
            *(undefined4 *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7) = 0x7fffffff;
            if (*(int *)param_1 != 0) {
              uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7);
              uVar7 = CUser::get_charac_no(*(CUser **)param_1,-1);
              uVar4 = CUser::get_acc_id(*(CUser **)param_1);
              uVar5 = NumberToString(uVar4,0);
              cMyTrace::cMyTrace(local_30,
                                 "int CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)"
                                 ,0x179f,4);
              cMyTrace::operator()
                        (local_30,"INT_MAX setting 3 : mid(%d),characNo(%d), inven(%d)+add(%d)",
                         uVar5,uVar7,uVar6,param_18);
            }
          }
          else {
            *(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7) =
                 *(int *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d + 7) + param_18;
          }
          if (*(int *)param_1 == 0) {
            return local_20;
          }
          uVar6 = Inven_Item::get_add_info((Inven_Item *)&param_2);
          uVar7 = Inven_Item::get_add_info
                            ((Inven_Item *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d));
          cUserHistoryLog::ItemAdd
                    ((cUserHistoryLog *)(*(int *)param_1 + 0x79700),1,uVar7,uVar6,&param_2,param_21)
          ;
          return local_20;
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x650) + param_19 * 0x3d + 2) == 0) {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x650) + param_19 * 0x3d);
        *puVar1 = CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_));
        puVar1[1] = CONCAT22(param_3._2_2_,(undefined2)param_3);
        puVar1[2] = param_4;
        puVar1[3] = param_5;
        puVar1[4] = param_6;
        puVar1[5] = param_7;
        puVar1[6] = param_8;
        puVar1[7] = param_9;
        puVar1[8] = param_10;
        puVar1[9] = param_11;
        puVar1[10] = param_12;
        puVar1[0xb] = param_13;
        puVar1[0xc] = param_14;
        puVar1[0xd] = param_15;
        puVar1[0xe] = param_16;
        *(undefined1 *)(puVar1 + 0xf) = param_17;
        if (*(int *)param_1 == 0) {
          return param_19;
        }
        uVar6 = Inven_Item::get_add_info((Inven_Item *)&param_2);
        uVar7 = Inven_Item::get_add_info
                          ((Inven_Item *)(*(int *)(param_1 + 0x650) + local_20 * 0x3d));
        cUserHistoryLog::ItemAdd
                  ((cUserHistoryLog *)(*(int *)param_1 + 0x79700),1,uVar7,uVar6,&param_2,param_21);
        return param_19;
      }
    }
    iVar2 = -1;
  }
  return iVar2;
}
```
