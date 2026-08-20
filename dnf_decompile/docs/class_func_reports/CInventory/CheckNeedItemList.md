# CheckNeedItemList

`_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE`

`CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08507acc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08507acc  _ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE
#           CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
# range [0x08507acc, 0x08507f19]
08507acc +0x000:  push   %ebp
08507acd +0x001:  mov    %esp,%ebp
08507acf +0x003:  sub    $0x68,%esp
08507ad2 +0x006:  mov    0x8(%ebp),%eax
08507ad5 +0x009:  mov    (%eax),%eax
08507ad7 +0x00b:  mov    %eax,(%esp)
08507ada +0x00e:  call   0850d522 <_GLOBAL__I_g_emptySlot+0x457>  ; global constructors keyed to g_emptySlot+0x457
08507adf +0x013:  test   %al,%al
08507ae1 +0x015:  je     08507aed <+0x21>
08507ae3 +0x017:  mov    $0x1,%eax
08507ae8 +0x01c:  jmp    08507f18 <+0x44c>
08507aed +0x021:  mov    0xc(%ebp),%eax
08507af0 +0x024:  mov    %eax,(%esp)
08507af3 +0x027:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08507af8 +0x02c:  test   %eax,%eax
08507afa +0x02e:  sete   %al
08507afd +0x031:  test   %al,%al
08507aff +0x033:  je     08507b0b <+0x3f>
08507b01 +0x035:  mov    $0x1,%eax
08507b06 +0x03a:  jmp    08507f18 <+0x44c>
08507b0b +0x03f:  lea    -0x40(%ebp),%eax
08507b0e +0x042:  mov    0xc(%ebp),%edx
08507b11 +0x045:  mov    %edx,0x4(%esp)
08507b15 +0x049:  mov    %eax,(%esp)
08507b18 +0x04c:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08507b1d +0x051:  sub    $0x4,%esp
08507b20 +0x054:  lea    -0x48(%ebp),%eax
08507b23 +0x057:  mov    %eax,(%esp)
08507b26 +0x05a:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08507b2b +0x05f:  movb   $0x0,-0x1d(%ebp)
08507b2f +0x063:  movl   $0x0,-0x1c(%ebp)
08507b36 +0x06a:  movl   $0x0,-0x4c(%ebp)
08507b3d +0x071:  movl   $0x0,-0x50(%ebp)
08507b44 +0x078:  movl   $0x0,-0x18(%ebp)
08507b4b +0x07f:  movl   $0x0,-0x14(%ebp)
08507b52 +0x086:  movl   $0x0,-0x10(%ebp)
08507b59 +0x08d:  movl   $0xb,-0xc(%ebp)
08507b60 +0x094:  jmp    08507ee4 <+0x418>
08507b65 +0x099:  movb   $0x0,-0x1d(%ebp)
08507b69 +0x09d:  lea    -0x40(%ebp),%eax
08507b6c +0x0a0:  mov    %eax,(%esp)
08507b6f +0x0a3:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08507b74 +0x0a8:  mov    0x4(%eax),%edx
08507b77 +0x0ab:  mov    (%eax),%eax
08507b79 +0x0ad:  mov    %eax,-0x38(%ebp)
08507b7c +0x0b0:  mov    %edx,-0x34(%ebp)
08507b7f +0x0b3:  lea    -0x38(%ebp),%eax
08507b82 +0x0b6:  mov    %eax,0x4(%esp)
08507b86 +0x0ba:  lea    -0x48(%ebp),%eax
08507b89 +0x0bd:  mov    %eax,(%esp)
08507b8c +0x0c0:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08507b91 +0x0c5:  mov    -0x48(%ebp),%eax
08507b94 +0x0c8:  mov    %eax,-0x1c(%ebp)
08507b97 +0x0cb:  mov    -0x44(%ebp),%eax
08507b9a +0x0ce:  mov    %eax,-0x14(%ebp)
08507b9d +0x0d1:  cmpl   $0x0,-0x1c(%ebp)
08507ba1 +0x0d5:  jne    08507bda <+0x10e>
08507ba3 +0x0d7:  mov    0x8(%ebp),%eax
08507ba6 +0x0da:  mov    0x4(%eax),%eax
08507ba9 +0x0dd:  cmp    -0x14(%ebp),%eax
08507bac +0x0e0:  jl     08507bd0 <+0x104>
08507bae +0x0e2:  lea    -0x30(%ebp),%eax
08507bb1 +0x0e5:  movl   $0x0,0x8(%esp)
08507bb9 +0x0ed:  lea    -0x40(%ebp),%edx
08507bbc +0x0f0:  mov    %edx,0x4(%esp)
08507bc0 +0x0f4:  mov    %eax,(%esp)
08507bc3 +0x0f7:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08507bc8 +0x0fc:  sub    $0x4,%esp
08507bcb +0x0ff:  jmp    08507ee4 <+0x418>
08507bd0 +0x104:  mov    $0x0,%eax
08507bd5 +0x109:  jmp    08507f18 <+0x44c>
08507bda +0x10e:  cmpl   $0x2,-0x1c(%ebp)
08507bde +0x112:  jne    08507c26 <+0x15a>
08507be0 +0x114:  mov    0x8(%ebp),%eax
08507be3 +0x117:  mov    (%eax),%eax
08507be5 +0x119:  mov    %eax,(%esp)
08507be8 +0x11c:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
08507bed +0x121:  mov    0x58(%eax),%eax
08507bf0 +0x124:  cmp    -0x14(%ebp),%eax
08507bf3 +0x127:  setge  %al
08507bf6 +0x12a:  test   %al,%al
08507bf8 +0x12c:  je     08507c1c <+0x150>
08507bfa +0x12e:  lea    -0x2c(%ebp),%eax
08507bfd +0x131:  movl   $0x0,0x8(%esp)
08507c05 +0x139:  lea    -0x40(%ebp),%edx
08507c08 +0x13c:  mov    %edx,0x4(%esp)
08507c0c +0x140:  mov    %eax,(%esp)
08507c0f +0x143:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08507c14 +0x148:  sub    $0x4,%esp
08507c17 +0x14b:  jmp    08507ee4 <+0x418>
08507c1c +0x150:  mov    $0x0,%eax
08507c21 +0x155:  jmp    08507f18 <+0x44c>
08507c26 +0x15a:  mov    -0x1c(%ebp),%eax
08507c29 +0x15d:  mov    %eax,0x4(%esp)
08507c2d +0x161:  mov    0x8(%ebp),%eax
08507c30 +0x164:  mov    %eax,(%esp)
08507c33 +0x167:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08507c38 +0x16c:  mov    %eax,-0xc(%ebp)
08507c3b +0x16f:  cmpl   $0x0,-0xc(%ebp)
08507c3f +0x173:  jne    08507c63 <+0x197>
08507c41 +0x175:  lea    -0x28(%ebp),%eax
08507c44 +0x178:  movl   $0x0,0x8(%esp)
08507c4c +0x180:  lea    -0x40(%ebp),%edx
08507c4f +0x183:  mov    %edx,0x4(%esp)
08507c53 +0x187:  mov    %eax,(%esp)
08507c56 +0x18a:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08507c5b +0x18f:  sub    $0x4,%esp
08507c5e +0x192:  jmp    08507ee4 <+0x418>
08507c63 +0x197:  lea    -0x50(%ebp),%eax
08507c66 +0x19a:  mov    %eax,0xc(%esp)
08507c6a +0x19e:  lea    -0x4c(%ebp),%eax
08507c6d +0x1a1:  mov    %eax,0x8(%esp)
08507c71 +0x1a5:  mov    -0xc(%ebp),%eax
08507c74 +0x1a8:  mov    %eax,0x4(%esp)
08507c78 +0x1ac:  mov    0x8(%ebp),%eax
08507c7b +0x1af:  mov    %eax,(%esp)
08507c7e +0x1b2:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08507c83 +0x1b7:  cmpl   $0x1,-0xc(%ebp)
08507c87 +0x1bb:  jne    08507d81 <+0x2b5>
08507c8d +0x1c1:  movl   $0x0,-0x10(%ebp)
08507c94 +0x1c8:  mov    -0x4c(%ebp),%eax
08507c97 +0x1cb:  mov    %eax,-0x18(%ebp)
08507c9a +0x1ce:  jmp    08507cc8 <+0x1fc>
08507c9c +0x1d0:  mov    0x8(%ebp),%eax
08507c9f +0x1d3:  mov    0x650(%eax),%edx
08507ca5 +0x1d9:  mov    -0x18(%ebp),%eax
08507ca8 +0x1dc:  imul   $0x3d,%eax,%eax
08507cab +0x1df:  lea    (%edx,%eax,1),%eax
08507cae +0x1e2:  mov    0x2(%eax),%edx
08507cb1 +0x1e5:  mov    -0x1c(%ebp),%eax
08507cb4 +0x1e8:  cmp    %eax,%edx
08507cb6 +0x1ea:  jne    08507cc4 <+0x1f8>
08507cb8 +0x1ec:  addl   $0x1,-0x10(%ebp)
08507cbc +0x1f0:  mov    -0x10(%ebp),%eax
08507cbf +0x1f3:  cmp    -0x14(%ebp),%eax
08507cc2 +0x1f6:  je     08507cd7 <+0x20b>
08507cc4 +0x1f8:  addl   $0x1,-0x18(%ebp)
08507cc8 +0x1fc:  mov    -0x50(%ebp),%eax
08507ccb +0x1ff:  cmp    %eax,-0x18(%ebp)
08507cce +0x202:  setle  %al
08507cd1 +0x205:  test   %al,%al
08507cd3 +0x207:  jne    08507c9c <+0x1d0>
08507cd5 +0x209:  jmp    08507cd8 <+0x20c>
08507cd7 +0x20b:  nop
08507cd8 +0x20c:  mov    -0x10(%ebp),%eax
08507cdb +0x20f:  cmp    -0x14(%ebp),%eax
08507cde +0x212:  jge    08507d23 <+0x257>
08507ce0 +0x214:  movl   $0x3,-0x18(%ebp)
08507ce7 +0x21b:  jmp    08507d15 <+0x249>
08507ce9 +0x21d:  mov    0x8(%ebp),%eax
08507cec +0x220:  mov    0x650(%eax),%edx
08507cf2 +0x226:  mov    -0x18(%ebp),%eax
08507cf5 +0x229:  imul   $0x3d,%eax,%eax
08507cf8 +0x22c:  lea    (%edx,%eax,1),%eax
08507cfb +0x22f:  mov    0x2(%eax),%edx
08507cfe +0x232:  mov    -0x1c(%ebp),%eax
08507d01 +0x235:  cmp    %eax,%edx
08507d03 +0x237:  jne    08507d11 <+0x245>
08507d05 +0x239:  addl   $0x1,-0x10(%ebp)
08507d09 +0x23d:  mov    -0x10(%ebp),%eax
08507d0c +0x240:  cmp    -0x14(%ebp),%eax
08507d0f +0x243:  je     08507d22 <+0x256>
08507d11 +0x245:  addl   $0x1,-0x18(%ebp)
08507d15 +0x249:  cmpl   $0x8,-0x18(%ebp)
08507d19 +0x24d:  setle  %al
08507d1c +0x250:  test   %al,%al
08507d1e +0x252:  jne    08507ce9 <+0x21d>
08507d20 +0x254:  jmp    08507d23 <+0x257>
08507d22 +0x256:  nop
08507d23 +0x257:  mov    -0x10(%ebp),%eax
08507d26 +0x25a:  cmp    -0x14(%ebp),%eax
08507d29 +0x25d:  jge    08507d6b <+0x29f>
08507d2b +0x25f:  movl   $0x0,-0x18(%ebp)
08507d32 +0x266:  jmp    08507d5d <+0x291>
08507d34 +0x268:  mov    -0x18(%ebp),%eax
08507d37 +0x26b:  mov    0x8(%ebp),%edx
08507d3a +0x26e:  imul   $0x3d,%eax,%eax
08507d3d +0x271:  lea    (%edx,%eax,1),%eax
08507d40 +0x274:  add    $0x10,%eax
08507d43 +0x277:  mov    0xe(%eax),%edx
08507d46 +0x27a:  mov    -0x1c(%ebp),%eax
08507d49 +0x27d:  cmp    %eax,%edx
08507d4b +0x27f:  jne    08507d59 <+0x28d>
08507d4d +0x281:  addl   $0x1,-0x10(%ebp)
08507d51 +0x285:  mov    -0x10(%ebp),%eax
08507d54 +0x288:  cmp    -0x14(%ebp),%eax
08507d57 +0x28b:  je     08507d6a <+0x29e>
08507d59 +0x28d:  addl   $0x1,-0x18(%ebp)
08507d5d +0x291:  cmpl   $0x19,-0x18(%ebp)
08507d61 +0x295:  setle  %al
08507d64 +0x298:  test   %al,%al
08507d66 +0x29a:  jne    08507d34 <+0x268>
08507d68 +0x29c:  jmp    08507d6b <+0x29f>
08507d6a +0x29e:  nop
08507d6b +0x29f:  mov    -0x10(%ebp),%eax
08507d6e +0x2a2:  cmp    -0x14(%ebp),%eax
08507d71 +0x2a5:  jge    08507ec7 <+0x3fb>
08507d77 +0x2ab:  mov    $0x0,%eax
08507d7c +0x2b0:  jmp    08507f18 <+0x44c>
08507d81 +0x2b5:  cmpl   $0x5,-0xc(%ebp)
08507d85 +0x2b9:  jne    08507dec <+0x320>
08507d87 +0x2bb:  mov    0x8(%ebp),%eax
08507d8a +0x2be:  mov    0x55c(%eax),%edx
08507d90 +0x2c4:  mov    -0x1c(%ebp),%eax
08507d93 +0x2c7:  cmp    %eax,%edx
08507d95 +0x2c9:  jne    08507da1 <+0x2d5>
08507d97 +0x2cb:  mov    $0x1,%eax
08507d9c +0x2d0:  jmp    08507f18 <+0x44c>
08507da1 +0x2d5:  mov    -0x4c(%ebp),%eax
08507da4 +0x2d8:  mov    %eax,-0x18(%ebp)
08507da7 +0x2db:  jmp    08507dd5 <+0x309>
08507da9 +0x2dd:  mov    0x8(%ebp),%eax
08507dac +0x2e0:  mov    0x6e4(%eax),%edx
08507db2 +0x2e6:  mov    -0x18(%ebp),%eax
08507db5 +0x2e9:  imul   $0x3d,%eax,%eax
08507db8 +0x2ec:  lea    (%edx,%eax,1),%eax
08507dbb +0x2ef:  mov    0x2(%eax),%edx
08507dbe +0x2f2:  mov    -0x1c(%ebp),%eax
08507dc1 +0x2f5:  cmp    %eax,%edx
08507dc3 +0x2f7:  je     08507dcb <+0x2ff>
08507dc5 +0x2f9:  addl   $0x1,-0x18(%ebp)
08507dc9 +0x2fd:  jmp    08507dd5 <+0x309>
08507dcb +0x2ff:  mov    $0x1,%eax
08507dd0 +0x304:  jmp    08507f18 <+0x44c>
08507dd5 +0x309:  mov    -0x50(%ebp),%eax
08507dd8 +0x30c:  cmp    %eax,-0x18(%ebp)
08507ddb +0x30f:  setle  %al
08507dde +0x312:  test   %al,%al
08507de0 +0x314:  jne    08507da9 <+0x2dd>
08507de2 +0x316:  mov    $0x0,%eax
08507de7 +0x31b:  jmp    08507f18 <+0x44c>
08507dec +0x320:  mov    -0x4c(%ebp),%eax
08507def +0x323:  mov    %eax,-0x18(%ebp)
08507df2 +0x326:  jmp    08507e40 <+0x374>
08507df4 +0x328:  mov    0x8(%ebp),%eax
08507df7 +0x32b:  mov    0x650(%eax),%edx
08507dfd +0x331:  mov    -0x18(%ebp),%eax
08507e00 +0x334:  imul   $0x3d,%eax,%eax
08507e03 +0x337:  lea    (%edx,%eax,1),%eax
08507e06 +0x33a:  mov    0x2(%eax),%edx
08507e09 +0x33d:  mov    -0x1c(%ebp),%eax
08507e0c +0x340:  cmp    %eax,%edx
08507e0e +0x342:  je     08507e16 <+0x34a>
08507e10 +0x344:  addl   $0x1,-0x18(%ebp)
08507e14 +0x348:  jmp    08507e40 <+0x374>
08507e16 +0x34a:  mov    0x8(%ebp),%eax
08507e19 +0x34d:  mov    0x650(%eax),%edx
08507e1f +0x353:  mov    -0x18(%ebp),%eax
08507e22 +0x356:  imul   $0x3d,%eax,%eax
08507e25 +0x359:  lea    (%edx,%eax,1),%eax
08507e28 +0x35c:  mov    0x7(%eax),%eax
08507e2b +0x35f:  cmp    -0x14(%ebp),%eax
08507e2e +0x362:  jl     08507e36 <+0x36a>
08507e30 +0x364:  movb   $0x1,-0x1d(%ebp)
08507e34 +0x368:  jmp    08507e4d <+0x381>
08507e36 +0x36a:  mov    $0x0,%eax
08507e3b +0x36f:  jmp    08507f18 <+0x44c>
08507e40 +0x374:  mov    -0x50(%ebp),%eax
08507e43 +0x377:  cmp    %eax,-0x18(%ebp)
08507e46 +0x37a:  setle  %al
08507e49 +0x37d:  test   %al,%al
08507e4b +0x37f:  jne    08507df4 <+0x328>
08507e4d +0x381:  movzbl -0x1d(%ebp),%eax
08507e51 +0x385:  xor    $0x1,%eax
08507e54 +0x388:  test   %al,%al
08507e56 +0x38a:  je     08507ec7 <+0x3fb>
08507e58 +0x38c:  movl   $0x3,-0x18(%ebp)
08507e5f +0x393:  jmp    08507eaa <+0x3de>
08507e61 +0x395:  mov    0x8(%ebp),%eax
08507e64 +0x398:  mov    0x650(%eax),%edx
08507e6a +0x39e:  mov    -0x18(%ebp),%eax
08507e6d +0x3a1:  imul   $0x3d,%eax,%eax
08507e70 +0x3a4:  lea    (%edx,%eax,1),%eax
08507e73 +0x3a7:  mov    0x2(%eax),%edx
08507e76 +0x3aa:  mov    -0x1c(%ebp),%eax
08507e79 +0x3ad:  cmp    %eax,%edx
08507e7b +0x3af:  je     08507e83 <+0x3b7>
08507e7d +0x3b1:  addl   $0x1,-0x18(%ebp)
08507e81 +0x3b5:  jmp    08507eaa <+0x3de>
08507e83 +0x3b7:  mov    0x8(%ebp),%eax
08507e86 +0x3ba:  mov    0x650(%eax),%edx
08507e8c +0x3c0:  mov    -0x18(%ebp),%eax
08507e8f +0x3c3:  imul   $0x3d,%eax,%eax
08507e92 +0x3c6:  lea    (%edx,%eax,1),%eax
08507e95 +0x3c9:  mov    0x7(%eax),%eax
08507e98 +0x3cc:  cmp    -0x14(%ebp),%eax
08507e9b +0x3cf:  jl     08507ea3 <+0x3d7>
08507e9d +0x3d1:  movb   $0x1,-0x1d(%ebp)
08507ea1 +0x3d5:  jmp    08507eb5 <+0x3e9>
08507ea3 +0x3d7:  mov    $0x0,%eax
08507ea8 +0x3dc:  jmp    08507f18 <+0x44c>
08507eaa +0x3de:  cmpl   $0x8,-0x18(%ebp)
08507eae +0x3e2:  setle  %al
08507eb1 +0x3e5:  test   %al,%al
08507eb3 +0x3e7:  jne    08507e61 <+0x395>
08507eb5 +0x3e9:  movzbl -0x1d(%ebp),%eax
08507eb9 +0x3ed:  xor    $0x1,%eax
08507ebc +0x3f0:  test   %al,%al
08507ebe +0x3f2:  je     08507ec7 <+0x3fb>
08507ec0 +0x3f4:  mov    $0x0,%eax
08507ec5 +0x3f9:  jmp    08507f18 <+0x44c>
08507ec7 +0x3fb:  lea    -0x24(%ebp),%eax
08507eca +0x3fe:  movl   $0x0,0x8(%esp)
08507ed2 +0x406:  lea    -0x40(%ebp),%edx
08507ed5 +0x409:  mov    %edx,0x4(%esp)
08507ed9 +0x40d:  mov    %eax,(%esp)
08507edc +0x410:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08507ee1 +0x415:  sub    $0x4,%esp
08507ee4 +0x418:  lea    -0x3c(%ebp),%eax
08507ee7 +0x41b:  mov    0xc(%ebp),%edx
08507eea +0x41e:  mov    %edx,0x4(%esp)
08507eee +0x422:  mov    %eax,(%esp)
08507ef1 +0x425:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08507ef6 +0x42a:  sub    $0x4,%esp
08507ef9 +0x42d:  lea    -0x3c(%ebp),%eax
08507efc +0x430:  mov    %eax,0x4(%esp)
08507f00 +0x434:  lea    -0x40(%ebp),%eax
08507f03 +0x437:  mov    %eax,(%esp)
08507f06 +0x43a:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08507f0b +0x43f:  test   %al,%al
08507f0d +0x441:  jne    08507b65 <+0x99>
08507f13 +0x447:  mov    $0x1,%eax
08507f18 +0x44c:  leave
08507f19 +0x44d:  ret
```

## 反编译 C

```c
// CInventory::CheckNeedItemList @ 0x8507acc

/* CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int>
   > > const&) const */

undefined4 __thiscall CInventory::CheckNeedItemList(CInventory *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_44 [4];
  __normal_iterator local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_34 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [7];
  char local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = CUser::getGmQuestFlag(*(CUser **)this);
  if ((cVar1 == '\0') &&
     (iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1),
     iVar3 != 0)) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_4c);
    local_21 = '\0';
    local_20 = 0;
    local_50 = 0;
    local_54 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0xb;
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_44,local_40);
      if (!bVar2) break;
      local_21 = '\0';
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_44);
      local_38 = puVar4[1];
      local_3c = *puVar4;
      std::pair<int,int>::operator=((pair<int,int> *)&local_4c,(pair *)&local_3c);
      local_20 = local_4c;
      local_18 = local_48;
      if (local_4c == 0) {
        if (*(int *)(this + 4) < local_48) {
          return 0;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_34,(int)local_44);
      }
      else if (local_4c == 2) {
        iVar3 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)this);
        if (*(int *)(iVar3 + 0x58) < local_18) {
          return 0;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_30,(int)local_44);
      }
      else {
        local_10 = GetItemType(this,local_4c);
        if (local_10 == 0) {
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_2c,(int)local_44);
        }
        else {
          StartEndPos(this,local_10,&local_50,&local_54);
          if (local_10 == 1) {
            local_14 = 0;
            local_1c = local_50;
            while ((local_1c <= local_54 &&
                   ((*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) != local_20 ||
                    (local_14 = local_14 + 1, local_14 != local_18))))) {
              local_1c = local_1c + 1;
            }
            if (local_14 < local_18) {
              local_1c = 3;
              while ((local_1c < 9 &&
                     ((*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) != local_20 ||
                      (local_14 = local_14 + 1, local_14 != local_18))))) {
                local_1c = local_1c + 1;
              }
            }
            if (local_14 < local_18) {
              local_1c = 0;
              while ((local_1c < 0x1a &&
                     ((*(int *)(this + local_1c * 0x3d + 0x1e) != local_20 ||
                      (local_14 = local_14 + 1, local_14 != local_18))))) {
                local_1c = local_1c + 1;
              }
            }
            if (local_14 < local_18) {
              return 0;
            }
          }
          else {
            if (local_10 == 5) {
              if (*(int *)(this + 0x55c) == local_20) {
                return 1;
              }
              local_1c = local_50;
              while( true ) {
                if (local_54 < local_1c) {
                  return 0;
                }
                if (*(int *)(*(int *)(this + 0x6e4) + local_1c * 0x3d + 2) == local_20) break;
                local_1c = local_1c + 1;
              }
              return 1;
            }
            for (local_1c = local_50; local_1c <= local_54; local_1c = local_1c + 1) {
              if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) {
                if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 7) < local_18) {
                  return 0;
                }
                local_21 = '\x01';
                break;
              }
            }
            if (local_21 != '\x01') {
              for (local_1c = 3; local_1c < 9; local_1c = local_1c + 1) {
                if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) {
                  if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 7) < local_18) {
                    return 0;
                  }
                  local_21 = '\x01';
                  break;
                }
              }
              if (local_21 != '\x01') {
                return 0;
              }
            }
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_28,(int)local_44);
        }
      }
    }
  }
  return 1;
}
```
