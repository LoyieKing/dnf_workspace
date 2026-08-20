# _MakeCompoundInfo

`_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR`

`WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser const*, MSG_COMPOUND_AVATAR const*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08331efe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08331efe  _ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR
#           WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser const*, MSG_COMPOUND_AVATAR const*) const
# range [0x08331efe, 0x0833260b]
08331efe +0x000:  push   %ebp
08331eff +0x001:  mov    %esp,%ebp
08331f01 +0x003:  push   %edi
08331f02 +0x004:  push   %esi
08331f03 +0x005:  push   %ebx
08331f04 +0x006:  sub    $0x8c,%esp
08331f0a +0x00c:  mov    0x8(%ebp),%ebx
08331f0d +0x00f:  mov    %ebx,%eax
08331f0f +0x011:  mov    %eax,(%esp)
08331f12 +0x014:  call   08334344 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x142>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x142
08331f17 +0x019:  mov    %ebx,%eax
08331f19 +0x01b:  mov    %eax,(%esp)
08331f1c +0x01e:  call   0833424a <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x48>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x48
08331f21 +0x023:  mov    %ebx,%eax
08331f23 +0x025:  mov    0x14(%ebp),%edx
08331f26 +0x028:  movzbl 0x21(%edx),%edx
08331f2a +0x02c:  cmp    $0x1,%dl
08331f2d +0x02f:  sete   %dl
08331f30 +0x032:  mov    %dl,0xd6(%eax)
08331f36 +0x038:  mov    %ebx,%eax
08331f38 +0x03a:  mov    0x14(%ebp),%edx
08331f3b +0x03d:  mov    0x1b(%edx),%edx
08331f3e +0x040:  mov    %edx,0xd0(%eax)
08331f44 +0x046:  mov    %ebx,%eax
08331f46 +0x048:  mov    0x14(%ebp),%edx
08331f49 +0x04b:  movzwl 0x1f(%edx),%edx
08331f4d +0x04f:  mov    %dx,0xd4(%eax)
08331f54 +0x056:  mov    %ebx,%eax
08331f56 +0x058:  mov    0x14(%ebp),%edx
08331f59 +0x05b:  movzwl 0xd(%edx),%edx
08331f5d +0x05f:  mov    %dx,0x90(%eax)
08331f64 +0x066:  mov    %ebx,%esi
08331f66 +0x068:  mov    0x14(%ebp),%eax
08331f69 +0x06b:  movzwl 0xd(%eax),%eax
08331f6d +0x06f:  movswl %ax,%edi
08331f70 +0x072:  mov    0x10(%ebp),%eax
08331f73 +0x075:  mov    %eax,(%esp)
08331f76 +0x078:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08331f7b +0x07d:  lea    -0x88(%ebp),%edx
08331f81 +0x083:  mov    %edi,0xc(%esp)
08331f85 +0x087:  movl   $0x1,0x8(%esp)
08331f8d +0x08f:  mov    %eax,0x4(%esp)
08331f91 +0x093:  mov    %edx,(%esp)
08331f94 +0x096:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08331f99 +0x09b:  sub    $0x4,%esp
08331f9c +0x09e:  mov    -0x88(%ebp),%eax
08331fa2 +0x0a4:  mov    %eax,0x92(%esi)
08331fa8 +0x0aa:  mov    -0x84(%ebp),%eax
08331fae +0x0b0:  mov    %eax,0x96(%esi)
08331fb4 +0x0b6:  mov    -0x80(%ebp),%eax
08331fb7 +0x0b9:  mov    %eax,0x9a(%esi)
08331fbd +0x0bf:  mov    -0x7c(%ebp),%eax
08331fc0 +0x0c2:  mov    %eax,0x9e(%esi)
08331fc6 +0x0c8:  mov    -0x78(%ebp),%eax
08331fc9 +0x0cb:  mov    %eax,0xa2(%esi)
08331fcf +0x0d1:  mov    -0x74(%ebp),%eax
08331fd2 +0x0d4:  mov    %eax,0xa6(%esi)
08331fd8 +0x0da:  mov    -0x70(%ebp),%eax
08331fdb +0x0dd:  mov    %eax,0xaa(%esi)
08331fe1 +0x0e3:  mov    -0x6c(%ebp),%eax
08331fe4 +0x0e6:  mov    %eax,0xae(%esi)
08331fea +0x0ec:  mov    -0x68(%ebp),%eax
08331fed +0x0ef:  mov    %eax,0xb2(%esi)
08331ff3 +0x0f5:  mov    -0x64(%ebp),%eax
08331ff6 +0x0f8:  mov    %eax,0xb6(%esi)
08331ffc +0x0fe:  mov    -0x60(%ebp),%eax
08331fff +0x101:  mov    %eax,0xba(%esi)
08332005 +0x107:  mov    -0x5c(%ebp),%eax
08332008 +0x10a:  mov    %eax,0xbe(%esi)
0833200e +0x110:  mov    -0x58(%ebp),%eax
08332011 +0x113:  mov    %eax,0xc2(%esi)
08332017 +0x119:  mov    -0x54(%ebp),%eax
0833201a +0x11c:  mov    %eax,0xc6(%esi)
08332020 +0x122:  mov    -0x50(%ebp),%eax
08332023 +0x125:  mov    %eax,0xca(%esi)
08332029 +0x12b:  movzbl -0x4c(%ebp),%eax
0833202d +0x12f:  mov    %al,0xce(%esi)
08332033 +0x135:  mov    %ebx,%eax
08332035 +0x137:  mov    0x14(%ebp),%edx
08332038 +0x13a:  movzwl 0xf(%edx),%edx
0833203c +0x13e:  mov    %dx,0x8(%eax)
08332040 +0x142:  mov    %ebx,%esi
08332042 +0x144:  mov    0x14(%ebp),%eax
08332045 +0x147:  movzwl 0xf(%eax),%eax
08332049 +0x14b:  movswl %ax,%edi
0833204c +0x14e:  mov    0x10(%ebp),%eax
0833204f +0x151:  mov    %eax,(%esp)
08332052 +0x154:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332057 +0x159:  lea    -0x88(%ebp),%edx
0833205d +0x15f:  mov    %edi,0xc(%esp)
08332061 +0x163:  movl   $0x2,0x8(%esp)
08332069 +0x16b:  mov    %eax,0x4(%esp)
0833206d +0x16f:  mov    %edx,(%esp)
08332070 +0x172:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08332075 +0x177:  sub    $0x4,%esp
08332078 +0x17a:  mov    -0x88(%ebp),%eax
0833207e +0x180:  mov    %eax,0xa(%esi)
08332081 +0x183:  mov    -0x84(%ebp),%eax
08332087 +0x189:  mov    %eax,0xe(%esi)
0833208a +0x18c:  mov    -0x80(%ebp),%eax
0833208d +0x18f:  mov    %eax,0x12(%esi)
08332090 +0x192:  mov    -0x7c(%ebp),%eax
08332093 +0x195:  mov    %eax,0x16(%esi)
08332096 +0x198:  mov    -0x78(%ebp),%eax
08332099 +0x19b:  mov    %eax,0x1a(%esi)
0833209c +0x19e:  mov    -0x74(%ebp),%eax
0833209f +0x1a1:  mov    %eax,0x1e(%esi)
083320a2 +0x1a4:  mov    -0x70(%ebp),%eax
083320a5 +0x1a7:  mov    %eax,0x22(%esi)
083320a8 +0x1aa:  mov    -0x6c(%ebp),%eax
083320ab +0x1ad:  mov    %eax,0x26(%esi)
083320ae +0x1b0:  mov    -0x68(%ebp),%eax
083320b1 +0x1b3:  mov    %eax,0x2a(%esi)
083320b4 +0x1b6:  mov    -0x64(%ebp),%eax
083320b7 +0x1b9:  mov    %eax,0x2e(%esi)
083320ba +0x1bc:  mov    -0x60(%ebp),%eax
083320bd +0x1bf:  mov    %eax,0x32(%esi)
083320c0 +0x1c2:  mov    -0x5c(%ebp),%eax
083320c3 +0x1c5:  mov    %eax,0x36(%esi)
083320c6 +0x1c8:  mov    -0x58(%ebp),%eax
083320c9 +0x1cb:  mov    %eax,0x3a(%esi)
083320cc +0x1ce:  mov    -0x54(%ebp),%eax
083320cf +0x1d1:  mov    %eax,0x3e(%esi)
083320d2 +0x1d4:  mov    -0x50(%ebp),%eax
083320d5 +0x1d7:  mov    %eax,0x42(%esi)
083320d8 +0x1da:  movzbl -0x4c(%ebp),%eax
083320dc +0x1de:  mov    %al,0x46(%esi)
083320df +0x1e1:  mov    %ebx,%eax
083320e1 +0x1e3:  mov    0x14(%ebp),%edx
083320e4 +0x1e6:  movzwl 0x15(%edx),%edx
083320e8 +0x1ea:  mov    %dx,0x48(%eax)
083320ec +0x1ee:  mov    %ebx,%esi
083320ee +0x1f0:  mov    0x14(%ebp),%eax
083320f1 +0x1f3:  movzwl 0x15(%eax),%eax
083320f5 +0x1f7:  movswl %ax,%edi
083320f8 +0x1fa:  mov    0x10(%ebp),%eax
083320fb +0x1fd:  mov    %eax,(%esp)
083320fe +0x200:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08332103 +0x205:  lea    -0x88(%ebp),%edx
08332109 +0x20b:  mov    %edi,0xc(%esp)
0833210d +0x20f:  movl   $0x2,0x8(%esp)
08332115 +0x217:  mov    %eax,0x4(%esp)
08332119 +0x21b:  mov    %edx,(%esp)
0833211c +0x21e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08332121 +0x223:  sub    $0x4,%esp
08332124 +0x226:  mov    -0x88(%ebp),%eax
0833212a +0x22c:  mov    %eax,0x4a(%esi)
0833212d +0x22f:  mov    -0x84(%ebp),%eax
08332133 +0x235:  mov    %eax,0x4e(%esi)
08332136 +0x238:  mov    -0x80(%ebp),%eax
08332139 +0x23b:  mov    %eax,0x52(%esi)
0833213c +0x23e:  mov    -0x7c(%ebp),%eax
0833213f +0x241:  mov    %eax,0x56(%esi)
08332142 +0x244:  mov    -0x78(%ebp),%eax
08332145 +0x247:  mov    %eax,0x5a(%esi)
08332148 +0x24a:  mov    -0x74(%ebp),%eax
0833214b +0x24d:  mov    %eax,0x5e(%esi)
0833214e +0x250:  mov    -0x70(%ebp),%eax
08332151 +0x253:  mov    %eax,0x62(%esi)
08332154 +0x256:  mov    -0x6c(%ebp),%eax
08332157 +0x259:  mov    %eax,0x66(%esi)
0833215a +0x25c:  mov    -0x68(%ebp),%eax
0833215d +0x25f:  mov    %eax,0x6a(%esi)
08332160 +0x262:  mov    -0x64(%ebp),%eax
08332163 +0x265:  mov    %eax,0x6e(%esi)
08332166 +0x268:  mov    -0x60(%ebp),%eax
08332169 +0x26b:  mov    %eax,0x72(%esi)
0833216c +0x26e:  mov    -0x5c(%ebp),%eax
0833216f +0x271:  mov    %eax,0x76(%esi)
08332172 +0x274:  mov    -0x58(%ebp),%eax
08332175 +0x277:  mov    %eax,0x7a(%esi)
08332178 +0x27a:  mov    -0x54(%ebp),%eax
0833217b +0x27d:  mov    %eax,0x7e(%esi)
0833217e +0x280:  mov    -0x50(%ebp),%eax
08332181 +0x283:  mov    %eax,0x82(%esi)
08332187 +0x289:  movzbl -0x4c(%ebp),%eax
0833218b +0x28d:  mov    %al,0x86(%esi)
08332191 +0x293:  mov    %ebx,%esi
08332193 +0x295:  mov    0x14(%ebp),%eax
08332196 +0x298:  mov    0x11(%eax),%eax
08332199 +0x29b:  mov    %eax,%edi
0833219b +0x29d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083321a0 +0x2a2:  mov    %edi,0x4(%esp)
083321a4 +0x2a6:  mov    %eax,(%esp)
083321a7 +0x2a9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083321ac +0x2ae:  mov    %eax,0x88(%esi)
083321b2 +0x2b4:  mov    %ebx,%esi
083321b4 +0x2b6:  mov    0x14(%ebp),%eax
083321b7 +0x2b9:  mov    0x17(%eax),%eax
083321ba +0x2bc:  mov    %eax,%edi
083321bc +0x2be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083321c1 +0x2c3:  mov    %edi,0x4(%esp)
083321c5 +0x2c7:  mov    %eax,(%esp)
083321c8 +0x2ca:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083321cd +0x2cf:  mov    %eax,0x8c(%esi)
083321d3 +0x2d5:  mov    %ebx,%eax
083321d5 +0x2d7:  mov    0x88(%eax),%eax
083321db +0x2dd:  test   %eax,%eax
083321dd +0x2df:  je     083321eb <+0x2ed>
083321df +0x2e1:  mov    %ebx,%eax
083321e1 +0x2e3:  mov    0x8c(%eax),%eax
083321e7 +0x2e9:  test   %eax,%eax
083321e9 +0x2eb:  jne    083321f9 <+0x2fb>
083321eb +0x2ed:  mov    %ebx,%eax
083321ed +0x2ef:  movb   $0x1,0xd7(%eax)
083321f4 +0x2f6:  jmp    083325fa <+0x6fc>
083321f9 +0x2fb:  mov    0x14(%ebp),%eax
083321fc +0x2fe:  mov    0x11(%eax),%edx
083321ff +0x301:  mov    %ebx,%eax
08332201 +0x303:  mov    0xc(%eax),%eax
08332204 +0x306:  cmp    %eax,%edx
08332206 +0x308:  jne    08332217 <+0x319>
08332208 +0x30a:  mov    0x14(%ebp),%eax
0833220b +0x30d:  mov    0x17(%eax),%edx
0833220e +0x310:  mov    %ebx,%eax
08332210 +0x312:  mov    0x4c(%eax),%eax
08332213 +0x315:  cmp    %eax,%edx
08332215 +0x317:  je     08332225 <+0x327>
08332217 +0x319:  mov    %ebx,%eax
08332219 +0x31b:  movb   $0x1,0xd7(%eax)
08332220 +0x322:  jmp    083325fa <+0x6fc>
08332225 +0x327:  movl   $0x0,-0x24(%ebp)
0833222c +0x32e:  jmp    083322cc <+0x3ce>
08332231 +0x333:  mov    -0x24(%ebp),%eax
08332234 +0x336:  movsbl %al,%edx
08332237 +0x339:  mov    %ebx,%eax
08332239 +0x33b:  mov    0x88(%eax),%eax
0833223f +0x341:  mov    %edx,0x4(%esp)
08332243 +0x345:  mov    %eax,(%esp)
08332246 +0x348:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
0833224b +0x34d:  mov    %eax,%esi
0833224d +0x34f:  mov    -0x24(%ebp),%eax
08332250 +0x352:  movsbl %al,%edx
08332253 +0x355:  mov    %ebx,%eax
08332255 +0x357:  mov    0x8c(%eax),%eax
0833225b +0x35d:  mov    %edx,0x4(%esp)
0833225f +0x361:  mov    %eax,(%esp)
08332262 +0x364:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
08332267 +0x369:  mov    %esi,%edx
08332269 +0x36b:  cmp    %al,%dl
0833226b +0x36d:  setne  %al
0833226e +0x370:  test   %al,%al
08332270 +0x372:  jne    083322c7 <+0x3c9>
08332272 +0x374:  mov    -0x24(%ebp),%eax
08332275 +0x377:  movsbl %al,%edx
08332278 +0x37a:  mov    %ebx,%eax
0833227a +0x37c:  mov    0x88(%eax),%eax
08332280 +0x382:  mov    %edx,0x4(%esp)
08332284 +0x386:  mov    %eax,(%esp)
08332287 +0x389:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
0833228c +0x38e:  test   %al,%al
0833228e +0x390:  je     083322b5 <+0x3b7>
08332290 +0x392:  mov    -0x24(%ebp),%eax
08332293 +0x395:  movsbl %al,%edx
08332296 +0x398:  mov    %ebx,%eax
08332298 +0x39a:  mov    0x8c(%eax),%eax
0833229e +0x3a0:  mov    %edx,0x4(%esp)
083322a2 +0x3a4:  mov    %eax,(%esp)
083322a5 +0x3a7:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
083322aa +0x3ac:  test   %al,%al
083322ac +0x3ae:  je     083322b5 <+0x3b7>
083322ae +0x3b0:  mov    $0x1,%eax
083322b3 +0x3b5:  jmp    083322ba <+0x3bc>
083322b5 +0x3b7:  mov    $0x0,%eax
083322ba +0x3bc:  test   %al,%al
083322bc +0x3be:  je     083322c8 <+0x3ca>
083322be +0x3c0:  mov    %ebx,%eax
083322c0 +0x3c2:  mov    -0x24(%ebp),%edx
083322c3 +0x3c5:  mov    %edx,(%eax)
083322c5 +0x3c7:  jmp    083322db <+0x3dd>
083322c7 +0x3c9:  nop
083322c8 +0x3ca:  addl   $0x1,-0x24(%ebp)
083322cc +0x3ce:  cmpl   $0xa,-0x24(%ebp)
083322d0 +0x3d2:  setle  %al
083322d3 +0x3d5:  test   %al,%al
083322d5 +0x3d7:  jne    08332231 <+0x333>
083322db +0x3dd:  mov    %ebx,%eax
083322dd +0x3df:  mov    (%eax),%eax
083322df +0x3e1:  cmp    $0xb,%eax
083322e2 +0x3e4:  je     083325f9 <+0x6fb>
083322e8 +0x3ea:  movl   $0x0,-0x28(%ebp)
083322ef +0x3f1:  movl   $0x1,-0x20(%ebp)
083322f6 +0x3f8:  jmp    0833259b <+0x69d>
083322fb +0x3fd:  mov    -0x20(%ebp),%ecx
083322fe +0x400:  mov    %ebx,%eax
08332300 +0x402:  mov    (%eax),%eax
08332302 +0x404:  mov    %eax,%edx
08332304 +0x406:  mov    %edx,%eax
08332306 +0x408:  add    %eax,%eax
08332308 +0x40a:  add    %edx,%eax
0833230a +0x40c:  shl    $0x2,%eax
0833230d +0x40f:  add    0xc(%ebp),%eax
08332310 +0x412:  mov    %ecx,0x4(%esp)
08332314 +0x416:  mov    %eax,(%esp)
08332317 +0x419:  call   08903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>  ; tagCompoundAvatarTable::getCompoundAvatarInfo(int) const
0833231c +0x41e:  mov    %eax,-0x1c(%ebp)
0833231f +0x421:  cmpl   $0x0,-0x1c(%ebp)
08332323 +0x425:  je     08332596 <+0x698>
08332329 +0x42b:  mov    0x14(%ebp),%eax
0833232c +0x42e:  movzbl 0x22(%eax),%eax
08332330 +0x432:  test   %al,%al
08332332 +0x434:  jne    083323c6 <+0x4c8>
08332338 +0x43a:  mov    -0x1c(%ebp),%eax
0833233b +0x43d:  lea    0x2b8(%eax),%edx
08332341 +0x443:  lea    -0x2c(%ebp),%eax
08332344 +0x446:  mov    %edx,0x4(%esp)
08332348 +0x44a:  mov    %eax,(%esp)
0833234b +0x44d:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08332350 +0x452:  sub    $0x4,%esp
08332353 +0x455:  mov    -0x1c(%ebp),%eax
08332356 +0x458:  lea    0x2b8(%eax),%edx
0833235c +0x45e:  lea    -0x30(%ebp),%eax
0833235f +0x461:  mov    %edx,0x4(%esp)
08332363 +0x465:  mov    %eax,(%esp)
08332366 +0x468:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0833236b +0x46d:  sub    $0x4,%esp
0833236e +0x470:  jmp    083323a1 <+0x4a3>
08332370 +0x472:  mov    %ebx,%eax
08332372 +0x474:  mov    0x94(%eax),%esi
08332378 +0x47a:  lea    -0x2c(%ebp),%eax
0833237b +0x47d:  mov    %eax,(%esp)
0833237e +0x480:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08332383 +0x485:  mov    (%eax),%eax
08332385 +0x487:  cmp    %eax,%esi
08332387 +0x489:  sete   %al
0833238a +0x48c:  test   %al,%al
0833238c +0x48e:  je     08332396 <+0x498>
0833238e +0x490:  mov    -0x20(%ebp),%eax
08332391 +0x493:  mov    %eax,-0x28(%ebp)
08332394 +0x496:  jmp    083323b7 <+0x4b9>
08332396 +0x498:  lea    -0x2c(%ebp),%eax
08332399 +0x49b:  mov    %eax,(%esp)
0833239c +0x49e:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
083323a1 +0x4a3:  lea    -0x30(%ebp),%eax
083323a4 +0x4a6:  mov    %eax,0x4(%esp)
083323a8 +0x4aa:  lea    -0x2c(%ebp),%eax
083323ab +0x4ad:  mov    %eax,(%esp)
083323ae +0x4b0:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
083323b3 +0x4b5:  test   %al,%al
083323b5 +0x4b7:  jne    08332370 <+0x472>
083323b7 +0x4b9:  cmpl   $0x0,-0x28(%ebp)
083323bb +0x4bd:  je     08332597 <+0x699>
083323c1 +0x4c3:  jmp    083325c6 <+0x6c8>
083323c6 +0x4c8:  mov    0x14(%ebp),%eax
083323c9 +0x4cb:  movzbl 0x22(%eax),%eax
083323cd +0x4cf:  cmp    $0x1,%al
083323cf +0x4d1:  jne    08332463 <+0x565>
083323d5 +0x4d7:  mov    -0x1c(%ebp),%eax
083323d8 +0x4da:  lea    0x2c4(%eax),%edx
083323de +0x4e0:  lea    -0x34(%ebp),%eax
083323e1 +0x4e3:  mov    %edx,0x4(%esp)
083323e5 +0x4e7:  mov    %eax,(%esp)
083323e8 +0x4ea:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
083323ed +0x4ef:  sub    $0x4,%esp
083323f0 +0x4f2:  mov    -0x1c(%ebp),%eax
083323f3 +0x4f5:  lea    0x2c4(%eax),%edx
083323f9 +0x4fb:  lea    -0x38(%ebp),%eax
083323fc +0x4fe:  mov    %edx,0x4(%esp)
08332400 +0x502:  mov    %eax,(%esp)
08332403 +0x505:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08332408 +0x50a:  sub    $0x4,%esp
0833240b +0x50d:  jmp    0833243e <+0x540>
0833240d +0x50f:  mov    %ebx,%eax
0833240f +0x511:  mov    0x94(%eax),%esi
08332415 +0x517:  lea    -0x34(%ebp),%eax
08332418 +0x51a:  mov    %eax,(%esp)
0833241b +0x51d:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08332420 +0x522:  mov    (%eax),%eax
08332422 +0x524:  cmp    %eax,%esi
08332424 +0x526:  sete   %al
08332427 +0x529:  test   %al,%al
08332429 +0x52b:  je     08332433 <+0x535>
0833242b +0x52d:  mov    -0x20(%ebp),%eax
0833242e +0x530:  mov    %eax,-0x28(%ebp)
08332431 +0x533:  jmp    08332454 <+0x556>
08332433 +0x535:  lea    -0x34(%ebp),%eax
08332436 +0x538:  mov    %eax,(%esp)
08332439 +0x53b:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0833243e +0x540:  lea    -0x38(%ebp),%eax
08332441 +0x543:  mov    %eax,0x4(%esp)
08332445 +0x547:  lea    -0x34(%ebp),%eax
08332448 +0x54a:  mov    %eax,(%esp)
0833244b +0x54d:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08332450 +0x552:  test   %al,%al
08332452 +0x554:  jne    0833240d <+0x50f>
08332454 +0x556:  cmpl   $0x0,-0x28(%ebp)
08332458 +0x55a:  je     08332597 <+0x699>
0833245e +0x560:  jmp    083325c6 <+0x6c8>
08332463 +0x565:  mov    0x14(%ebp),%eax
08332466 +0x568:  movzbl 0x22(%eax),%eax
0833246a +0x56c:  cmp    $0x3,%al
0833246c +0x56e:  jne    08332500 <+0x602>
08332472 +0x574:  mov    -0x1c(%ebp),%eax
08332475 +0x577:  lea    0x2d0(%eax),%edx
0833247b +0x57d:  lea    -0x3c(%ebp),%eax
0833247e +0x580:  mov    %edx,0x4(%esp)
08332482 +0x584:  mov    %eax,(%esp)
08332485 +0x587:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0833248a +0x58c:  sub    $0x4,%esp
0833248d +0x58f:  mov    -0x1c(%ebp),%eax
08332490 +0x592:  lea    0x2d0(%eax),%edx
08332496 +0x598:  lea    -0x40(%ebp),%eax
08332499 +0x59b:  mov    %edx,0x4(%esp)
0833249d +0x59f:  mov    %eax,(%esp)
083324a0 +0x5a2:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
083324a5 +0x5a7:  sub    $0x4,%esp
083324a8 +0x5aa:  jmp    083324db <+0x5dd>
083324aa +0x5ac:  mov    %ebx,%eax
083324ac +0x5ae:  mov    0x94(%eax),%esi
083324b2 +0x5b4:  lea    -0x3c(%ebp),%eax
083324b5 +0x5b7:  mov    %eax,(%esp)
083324b8 +0x5ba:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
083324bd +0x5bf:  mov    (%eax),%eax
083324bf +0x5c1:  cmp    %eax,%esi
083324c1 +0x5c3:  sete   %al
083324c4 +0x5c6:  test   %al,%al
083324c6 +0x5c8:  je     083324d0 <+0x5d2>
083324c8 +0x5ca:  mov    -0x20(%ebp),%eax
083324cb +0x5cd:  mov    %eax,-0x28(%ebp)
083324ce +0x5d0:  jmp    083324f1 <+0x5f3>
083324d0 +0x5d2:  lea    -0x3c(%ebp),%eax
083324d3 +0x5d5:  mov    %eax,(%esp)
083324d6 +0x5d8:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
083324db +0x5dd:  lea    -0x40(%ebp),%eax
083324de +0x5e0:  mov    %eax,0x4(%esp)
083324e2 +0x5e4:  lea    -0x3c(%ebp),%eax
083324e5 +0x5e7:  mov    %eax,(%esp)
083324e8 +0x5ea:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
083324ed +0x5ef:  test   %al,%al
083324ef +0x5f1:  jne    083324aa <+0x5ac>
083324f1 +0x5f3:  cmpl   $0x0,-0x28(%ebp)
083324f5 +0x5f7:  je     08332597 <+0x699>
083324fb +0x5fd:  jmp    083325c6 <+0x6c8>
08332500 +0x602:  mov    0x14(%ebp),%eax
08332503 +0x605:  movzbl 0x22(%eax),%eax
08332507 +0x609:  cmp    $0x4,%al
08332509 +0x60b:  jne    08332597 <+0x699>
0833250f +0x611:  mov    -0x1c(%ebp),%eax
08332512 +0x614:  lea    0x20c(%eax),%edx
08332518 +0x61a:  lea    -0x44(%ebp),%eax
0833251b +0x61d:  mov    %edx,0x4(%esp)
0833251f +0x621:  mov    %eax,(%esp)
08332522 +0x624:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08332527 +0x629:  sub    $0x4,%esp
0833252a +0x62c:  mov    -0x1c(%ebp),%eax
0833252d +0x62f:  lea    0x20c(%eax),%edx
08332533 +0x635:  lea    -0x48(%ebp),%eax
08332536 +0x638:  mov    %edx,0x4(%esp)
0833253a +0x63c:  mov    %eax,(%esp)
0833253d +0x63f:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08332542 +0x644:  sub    $0x4,%esp
08332545 +0x647:  jmp    08332578 <+0x67a>
08332547 +0x649:  mov    %ebx,%eax
08332549 +0x64b:  mov    0x94(%eax),%esi
0833254f +0x651:  lea    -0x44(%ebp),%eax
08332552 +0x654:  mov    %eax,(%esp)
08332555 +0x657:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0833255a +0x65c:  mov    (%eax),%eax
0833255c +0x65e:  cmp    %eax,%esi
0833255e +0x660:  sete   %al
08332561 +0x663:  test   %al,%al
08332563 +0x665:  je     0833256d <+0x66f>
08332565 +0x667:  mov    -0x20(%ebp),%eax
08332568 +0x66a:  mov    %eax,-0x28(%ebp)
0833256b +0x66d:  jmp    0833258e <+0x690>
0833256d +0x66f:  lea    -0x44(%ebp),%eax
08332570 +0x672:  mov    %eax,(%esp)
08332573 +0x675:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08332578 +0x67a:  lea    -0x48(%ebp),%eax
0833257b +0x67d:  mov    %eax,0x4(%esp)
0833257f +0x681:  lea    -0x44(%ebp),%eax
08332582 +0x684:  mov    %eax,(%esp)
08332585 +0x687:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0833258a +0x68c:  test   %al,%al
0833258c +0x68e:  jne    08332547 <+0x649>
0833258e +0x690:  cmpl   $0x0,-0x28(%ebp)
08332592 +0x694:  jne    083325c5 <+0x6c7>
08332594 +0x696:  jmp    08332597 <+0x699>
08332596 +0x698:  nop
08332597 +0x699:  addl   $0x1,-0x20(%ebp)
0833259b +0x69d:  mov    %ebx,%eax
0833259d +0x69f:  mov    (%eax),%eax
0833259f +0x6a1:  mov    %eax,%edx
083325a1 +0x6a3:  mov    %edx,%eax
083325a3 +0x6a5:  add    %eax,%eax
083325a5 +0x6a7:  add    %edx,%eax
083325a7 +0x6a9:  shl    $0x2,%eax
083325aa +0x6ac:  add    0xc(%ebp),%eax
083325ad +0x6af:  mov    %eax,(%esp)
083325b0 +0x6b2:  call   08334412 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x210>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x210
083325b5 +0x6b7:  cmp    -0x20(%ebp),%eax
083325b8 +0x6ba:  seta   %al
083325bb +0x6bd:  test   %al,%al
083325bd +0x6bf:  jne    083322fb <+0x3fd>
083325c3 +0x6c5:  jmp    083325c6 <+0x6c8>
083325c5 +0x6c7:  nop
083325c6 +0x6c8:  mov    %ebx,%eax
083325c8 +0x6ca:  mov    -0x28(%ebp),%edx
083325cb +0x6cd:  mov    %edx,0x4(%eax)
083325ce +0x6d0:  mov    %ebx,%eax
083325d0 +0x6d2:  mov    0x14(%ebp),%edx
083325d3 +0x6d5:  movzbl 0x22(%edx),%edx
083325d7 +0x6d9:  mov    %dl,0xe8(%eax)
083325dd +0x6df:  jmp    083325fa <+0x6fc>
083325df +0x6e1:  mov    %edx,%esi
083325e1 +0x6e3:  mov    %eax,%edi
083325e3 +0x6e5:  mov    %ebx,%eax
083325e5 +0x6e7:  mov    %eax,(%esp)
083325e8 +0x6ea:  call   08334388 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x186>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x186
083325ed +0x6ef:  mov    %edi,%eax
083325ef +0x6f1:  mov    %esi,%edx
083325f1 +0x6f3:  mov    %eax,(%esp)
083325f4 +0x6f6:  call   08ae3750 <_Unwind_Resume>
083325f9 +0x6fb:  nop
083325fa +0x6fc:  mov    %ebx,%eax
083325fc +0x6fe:  mov    %ebx,%eax
083325fe +0x700:  lea    -0xc(%ebp),%esp
08332601 +0x703:  add    $0x0,%esp
08332604 +0x706:  pop    %ebx
08332605 +0x707:  pop    %esi
08332606 +0x708:  pop    %edi
08332607 +0x709:  pop    %ebp
08332608 +0x70a:  ret    $0x4
0833260b +0x70d:  nop
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_MakeCompoundInfo @ 0x8331efe

/* WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser const*, MSG_COMPOUND_AVATAR const*) const */

CUser * WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser *param_1,MSG_COMPOUND_AVATAR *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  CUserCharacInfo *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CUser local_50;
  __normal_iterator local_4c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  __normal_iterator local_44 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  tagCompoundInfo::tagCompoundInfo((tagCompoundInfo *)param_1);
                    /* try { // try from 08331f1c to 08332589 has its CatchHandler @ 083325df */
  tagCompoundInfo::clear((tagCompoundInfo *)param_1);
  param_1[0xd6] = (CUser)(*(char *)(in_stack_00000010 + 0x21) == '\x01');
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(in_stack_00000010 + 0x1b);
  *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)(in_stack_00000010 + 0x1f);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(in_stack_00000010 + 0xd);
  iVar4 = CUserCharacInfo::getCurCharacInvenR(in_stack_0000000c);
  CInventory::GetInvenSlot((int)&local_8c,iVar4);
  *(undefined4 *)(param_1 + 0x92) = local_8c;
  *(undefined4 *)(param_1 + 0x96) = local_88;
  *(undefined4 *)(param_1 + 0x9a) = local_84;
  *(undefined4 *)(param_1 + 0x9e) = local_80;
  *(undefined4 *)(param_1 + 0xa2) = local_7c;
  *(undefined4 *)(param_1 + 0xa6) = local_78;
  *(undefined4 *)(param_1 + 0xaa) = local_74;
  *(undefined4 *)(param_1 + 0xae) = local_70;
  *(undefined4 *)(param_1 + 0xb2) = local_6c;
  *(undefined4 *)(param_1 + 0xb6) = local_68;
  *(undefined4 *)(param_1 + 0xba) = local_64;
  *(undefined4 *)(param_1 + 0xbe) = local_60;
  *(undefined4 *)(param_1 + 0xc2) = local_5c;
  *(undefined4 *)(param_1 + 0xc6) = local_58;
  *(undefined4 *)(param_1 + 0xca) = local_54;
  param_1[0xce] = local_50;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(in_stack_00000010 + 0xf);
  iVar4 = CUserCharacInfo::getCurCharacInvenR(in_stack_0000000c);
  CInventory::GetInvenSlot((int)&local_8c,iVar4);
  *(undefined4 *)(param_1 + 10) = local_8c;
  *(undefined4 *)(param_1 + 0xe) = local_88;
  *(undefined4 *)(param_1 + 0x12) = local_84;
  *(undefined4 *)(param_1 + 0x16) = local_80;
  *(undefined4 *)(param_1 + 0x1a) = local_7c;
  *(undefined4 *)(param_1 + 0x1e) = local_78;
  *(undefined4 *)(param_1 + 0x22) = local_74;
  *(undefined4 *)(param_1 + 0x26) = local_70;
  *(undefined4 *)(param_1 + 0x2a) = local_6c;
  *(undefined4 *)(param_1 + 0x2e) = local_68;
  *(undefined4 *)(param_1 + 0x32) = local_64;
  *(undefined4 *)(param_1 + 0x36) = local_60;
  *(undefined4 *)(param_1 + 0x3a) = local_5c;
  *(undefined4 *)(param_1 + 0x3e) = local_58;
  *(undefined4 *)(param_1 + 0x42) = local_54;
  param_1[0x46] = local_50;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(in_stack_00000010 + 0x15);
  iVar4 = CUserCharacInfo::getCurCharacInvenR(in_stack_0000000c);
  CInventory::GetInvenSlot((int)&local_8c,iVar4);
  *(undefined4 *)(param_1 + 0x4a) = local_8c;
  *(undefined4 *)(param_1 + 0x4e) = local_88;
  *(undefined4 *)(param_1 + 0x52) = local_84;
  *(undefined4 *)(param_1 + 0x56) = local_80;
  *(undefined4 *)(param_1 + 0x5a) = local_7c;
  *(undefined4 *)(param_1 + 0x5e) = local_78;
  *(undefined4 *)(param_1 + 0x62) = local_74;
  *(undefined4 *)(param_1 + 0x66) = local_70;
  *(undefined4 *)(param_1 + 0x6a) = local_6c;
  *(undefined4 *)(param_1 + 0x6e) = local_68;
  *(undefined4 *)(param_1 + 0x72) = local_64;
  *(undefined4 *)(param_1 + 0x76) = local_60;
  *(undefined4 *)(param_1 + 0x7a) = local_5c;
  *(undefined4 *)(param_1 + 0x7e) = local_58;
  *(undefined4 *)(param_1 + 0x82) = local_54;
  param_1[0x86] = local_50;
  iVar4 = *(int *)(in_stack_00000010 + 0x11);
  pCVar5 = (CDataManager *)G_CDataManager();
  uVar6 = CDataManager::find_item(pCVar5,iVar4);
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  iVar4 = *(int *)(in_stack_00000010 + 0x17);
  pCVar5 = (CDataManager *)G_CDataManager();
  uVar6 = CDataManager::find_item(pCVar5,iVar4);
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  if ((*(int *)(param_1 + 0x88) == 0) || (*(int *)(param_1 + 0x8c) == 0)) {
    param_1[0xd7] = (CUser)0x1;
  }
  else if ((*(int *)(in_stack_00000010 + 0x11) == *(int *)(param_1 + 0xc)) &&
          (*(int *)(in_stack_00000010 + 0x17) == *(int *)(param_1 + 0x4c))) {
    for (local_28 = 0; local_28 < 0xb; local_28 = local_28 + 1) {
      cVar1 = CItem::check_job_type(*(CItem **)(param_1 + 0x88),(char)local_28);
      cVar2 = CItem::check_job_type(*(CItem **)(param_1 + 0x8c),(char)local_28);
      if (cVar1 == cVar2) {
        cVar1 = CItem::check_job_type(*(CItem **)(param_1 + 0x88),(char)local_28);
        if ((cVar1 == '\0') ||
           (cVar1 = CItem::check_job_type(*(CItem **)(param_1 + 0x8c),(char)local_28), cVar1 == '\0'
           )) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(int *)param_1 = local_28;
          break;
        }
      }
    }
    if (*(int *)param_1 != 0xb) {
      local_2c = 0;
      local_24 = 1;
      while (uVar8 = std::vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>>::size
                               ((vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>> *)
                                (param_2 + *(int *)param_1 * 0xc)), local_24 < uVar8) {
        local_20 = tagCompoundAvatarTable::getCompoundAvatarInfo
                             ((tagCompoundAvatarTable *)(param_2 + *(int *)param_1 * 0xc),local_24);
        if (local_20 != 0) {
          if (*(char *)(in_stack_00000010 + 0x22) == '\0') {
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            while ((bVar3 = __gnu_cxx::operator!=(local_30,local_34), uVar8 = local_2c, bVar3 &&
                   (iVar4 = *(int *)(param_1 + 0x94),
                   piVar7 = (int *)__gnu_cxx::
                                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                   ::operator->(local_30), uVar8 = local_24, iVar4 != *piVar7))) {
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator++(local_30);
            }
          }
          else {
            if (*(char *)(in_stack_00000010 + 0x22) != '\x01') {
              if (*(char *)(in_stack_00000010 + 0x22) == '\x03') {
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                while ((bVar3 = __gnu_cxx::operator!=(local_40,local_44), uVar8 = local_2c, bVar3 &&
                       (iVar4 = *(int *)(param_1 + 0x94),
                       piVar7 = (int *)__gnu_cxx::
                                       __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                       ::operator->(local_40), uVar8 = local_24, iVar4 != *piVar7)))
                {
                  __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator++(local_40);
                }
              }
              else {
                if (*(char *)(in_stack_00000010 + 0x22) != '\x04') goto LAB_08332597;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                while ((bVar3 = __gnu_cxx::operator!=(local_48,local_4c), uVar8 = local_2c, bVar3 &&
                       (iVar4 = *(int *)(param_1 + 0x94),
                       piVar7 = (int *)__gnu_cxx::
                                       __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                       ::operator->(local_48), uVar8 = local_24, iVar4 != *piVar7)))
                {
                  __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator++(local_48);
                }
              }
              local_2c = uVar8;
              if (local_2c == 0) goto LAB_08332597;
              break;
            }
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
            while ((bVar3 = __gnu_cxx::operator!=(local_38,local_3c), uVar8 = local_2c, bVar3 &&
                   (iVar4 = *(int *)(param_1 + 0x94),
                   piVar7 = (int *)__gnu_cxx::
                                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                   ::operator->(local_38), uVar8 = local_24, iVar4 != *piVar7))) {
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator++(local_38);
            }
          }
          local_2c = uVar8;
          if (local_2c != 0) break;
        }
LAB_08332597:
        local_24 = local_24 + 1;
      }
      *(uint *)(param_1 + 4) = local_2c;
      param_1[0xe8] = *(CUser *)(in_stack_00000010 + 0x22);
    }
  }
  else {
    param_1[0xd7] = (CUser)0x1;
  }
  return param_1;
}
```
