# _ProcCompoundCore

`_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable`

`WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo&, tagCompoundAvatarTable*)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08332ee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08332ee8  _ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable
#           WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo&, tagCompoundAvatarTable*)
# range [0x08332ee8, 0x083338c1]
08332ee8 +0x000:  push   %ebp
08332ee9 +0x001:  mov    %esp,%ebp
08332eeb +0x003:  push   %edi
08332eec +0x004:  push   %esi
08332eed +0x005:  push   %ebx
08332eee +0x006:  sub    $0xcc,%esp
08332ef4 +0x00c:  mov    0xc(%ebp),%eax
08332ef7 +0x00f:  mov    %eax,(%esp)
08332efa +0x012:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08332eff +0x017:  mov    %eax,-0x54(%ebp)
08332f02 +0x01a:  mov    0x10(%ebp),%eax
08332f05 +0x01d:  mov    0x4(%eax),%eax
08332f08 +0x020:  mov    %eax,0x4(%esp)
08332f0c +0x024:  mov    0x14(%ebp),%eax
08332f0f +0x027:  mov    %eax,(%esp)
08332f12 +0x02a:  call   08903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>  ; tagCompoundAvatarTable::getCompoundAvatarInfo(int) const
08332f17 +0x02f:  mov    %eax,-0x50(%ebp)
08332f1a +0x032:  mov    0x10(%ebp),%eax
08332f1d +0x035:  mov    0x88(%eax),%eax
08332f23 +0x03b:  mov    (%eax),%eax
08332f25 +0x03d:  add    $0xc,%eax
08332f28 +0x040:  mov    (%eax),%edx
08332f2a +0x042:  mov    0x10(%ebp),%eax
08332f2d +0x045:  mov    0x88(%eax),%eax
08332f33 +0x04b:  mov    %eax,(%esp)
08332f36 +0x04e:  call   *%edx
08332f38 +0x050:  mov    %eax,-0x4c(%ebp)
08332f3b +0x053:  movl   $0x0,-0x48(%ebp)
08332f42 +0x05a:  mov    0x10(%ebp),%eax
08332f45 +0x05d:  movzbl 0xd6(%eax),%eax
08332f4c +0x064:  test   %al,%al
08332f4e +0x066:  je     0833321c <+0x334>
08332f54 +0x06c:  mov    0x10(%ebp),%eax
08332f57 +0x06f:  movzbl 0xe8(%eax),%eax
08332f5e +0x076:  cmp    $0x4,%al
08332f60 +0x078:  je     0833321c <+0x334>
08332f66 +0x07e:  mov    -0x4c(%ebp),%edx
08332f69 +0x081:  mov    -0x50(%ebp),%eax
08332f6c +0x084:  add    $0x8,%edx
08332f6f +0x087:  mov    0xc(%eax,%edx,4),%eax
08332f73 +0x08b:  test   %eax,%eax
08332f75 +0x08d:  je     08332f98 <+0xb0>
08332f77 +0x08f:  mov    -0x4c(%ebp),%edx
08332f7a +0x092:  mov    %edx,%eax
08332f7c +0x094:  add    %eax,%eax
08332f7e +0x096:  add    %edx,%eax
08332f80 +0x098:  shl    $0x2,%eax
08332f83 +0x09b:  add    $0x70,%eax
08332f86 +0x09e:  add    -0x50(%ebp),%eax
08332f89 +0x0a1:  add    $0xc,%eax
08332f8c +0x0a4:  mov    %eax,(%esp)
08332f8f +0x0a7:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
08332f94 +0x0ac:  test   %al,%al
08332f96 +0x0ae:  je     08332f9f <+0xb7>
08332f98 +0x0b0:  mov    $0x1,%eax
08332f9d +0x0b5:  jmp    08332fa4 <+0xbc>
08332f9f +0x0b7:  mov    $0x0,%eax
08332fa4 +0x0bc:  test   %al,%al
08332fa6 +0x0be:  je     08332fb2 <+0xca>
08332fa8 +0x0c0:  mov    $0x1,%eax
08332fad +0x0c5:  jmp    083338b7 <+0x9cf>
08332fb2 +0x0ca:  movl   $0x0,-0x38(%ebp)
08332fb9 +0x0d1:  mov    0x10(%ebp),%eax
08332fbc +0x0d4:  mov    0x88(%eax),%eax
08332fc2 +0x0da:  mov    %eax,(%esp)
08332fc5 +0x0dd:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08332fca +0x0e2:  cmp    $0x1,%eax
08332fcd +0x0e5:  jne    08332fec <+0x104>
08332fcf +0x0e7:  mov    0x10(%ebp),%eax
08332fd2 +0x0ea:  mov    0x8c(%eax),%eax
08332fd8 +0x0f0:  mov    %eax,(%esp)
08332fdb +0x0f3:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08332fe0 +0x0f8:  cmp    $0x1,%eax
08332fe3 +0x0fb:  jne    08332fec <+0x104>
08332fe5 +0x0fd:  mov    $0x1,%eax
08332fea +0x102:  jmp    08332ff1 <+0x109>
08332fec +0x104:  mov    $0x0,%eax
08332ff1 +0x109:  test   %al,%al
08332ff3 +0x10b:  je     08333141 <+0x259>
08332ff9 +0x111:  mov    -0x4c(%ebp),%edx
08332ffc +0x114:  mov    -0x50(%ebp),%eax
08332fff +0x117:  add    $0x58,%edx
08333002 +0x11a:  mov    0xc(%eax,%edx,4),%eax
08333006 +0x11e:  mov    %eax,-0x34(%ebp)
08333009 +0x121:  movl   $0x2710,-0x88(%ebp)
08333013 +0x12b:  mov    0x8(%ebp),%eax
08333016 +0x12e:  mov    0x84(%eax),%eax
0833301c +0x134:  lea    -0x88(%ebp),%edx
08333022 +0x13a:  mov    %edx,0x4(%esp)
08333026 +0x13e:  mov    %eax,(%esp)
08333029 +0x141:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0833302e +0x146:  cmp    $0x1387,%eax
08333033 +0x14b:  setbe  %al
08333036 +0x14e:  test   %al,%al
08333038 +0x150:  je     08333086 <+0x19e>
0833303a +0x152:  mov    -0x34(%ebp),%eax
0833303d +0x155:  mov    %eax,-0x84(%ebp)
08333043 +0x15b:  mov    0x8(%ebp),%eax
08333046 +0x15e:  mov    0x84(%eax),%eax
0833304c +0x164:  lea    -0x84(%ebp),%edx
08333052 +0x16a:  mov    %edx,0x4(%esp)
08333056 +0x16e:  mov    %eax,(%esp)
08333059 +0x171:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0833305e +0x176:  mov    %eax,%ecx
08333060 +0x178:  mov    -0x4c(%ebp),%edx
08333063 +0x17b:  mov    %edx,%eax
08333065 +0x17d:  add    %eax,%eax
08333067 +0x17f:  add    %edx,%eax
08333069 +0x181:  shl    $0x2,%eax
0833306c +0x184:  add    $0x190,%eax
08333071 +0x189:  add    -0x50(%ebp),%eax
08333074 +0x18c:  add    $0x4,%eax
08333077 +0x18f:  mov    %ecx,0x4(%esp)
0833307b +0x193:  mov    %eax,(%esp)
0833307e +0x196:  call   08332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>  ; getItemIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int)
08333083 +0x19b:  mov    %eax,-0x48(%ebp)
08333086 +0x19e:  cmpl   $0x0,-0x48(%ebp)
0833308a +0x1a2:  jg     0833309e <+0x1b6>
0833308c +0x1a4:  mov    -0x4c(%ebp),%edx
0833308f +0x1a7:  mov    -0x50(%ebp),%eax
08333092 +0x1aa:  mov    0x4(%eax,%edx,4),%eax
08333096 +0x1ae:  mov    %eax,-0x38(%ebp)
08333099 +0x1b1:  jmp    08333153 <+0x26b>
0833309e +0x1b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083330a3 +0x1bb:  mov    -0x48(%ebp),%edx
083330a6 +0x1be:  mov    %edx,0x4(%esp)
083330aa +0x1c2:  mov    %eax,(%esp)
083330ad +0x1c5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083330b2 +0x1ca:  mov    %eax,-0x30(%ebp)
083330b5 +0x1cd:  cmpl   $0x0,-0x30(%ebp)
083330b9 +0x1d1:  je     083330d4 <+0x1ec>
083330bb +0x1d3:  mov    -0x30(%ebp),%eax
083330be +0x1d6:  mov    (%eax),%eax
083330c0 +0x1d8:  add    $0x10,%eax
083330c3 +0x1db:  mov    (%eax),%edx
083330c5 +0x1dd:  mov    -0x30(%ebp),%eax
083330c8 +0x1e0:  mov    %eax,(%esp)
083330cb +0x1e3:  call   *%edx
083330cd +0x1e5:  xor    $0x1,%eax
083330d0 +0x1e8:  test   %al,%al
083330d2 +0x1ea:  je     083330db <+0x1f3>
083330d4 +0x1ec:  mov    $0x1,%eax
083330d9 +0x1f1:  jmp    083330e0 <+0x1f8>
083330db +0x1f3:  mov    $0x0,%eax
083330e0 +0x1f8:  test   %al,%al
083330e2 +0x1fa:  je     083330ee <+0x206>
083330e4 +0x1fc:  mov    $0x1,%eax
083330e9 +0x201:  jmp    083338b7 <+0x9cf>
083330ee +0x206:  mov    -0x30(%ebp),%eax
083330f1 +0x209:  mov    %eax,-0x2c(%ebp)
083330f4 +0x20c:  cmpl   $0x0,-0x2c(%ebp)
083330f8 +0x210:  jne    08333104 <+0x21c>
083330fa +0x212:  mov    $0x1,%eax
083330ff +0x217:  jmp    083338b7 <+0x9cf>
08333104 +0x21c:  mov    -0x2c(%ebp),%eax
08333107 +0x21f:  mov    %eax,(%esp)
0833310a +0x222:  call   081803bc <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x53>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x53
0833310f +0x227:  mov    %eax,(%esp)
08333112 +0x22a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08333117 +0x22f:  mov    %eax,%edx
08333119 +0x231:  mov    0x10(%ebp),%eax
0833311c +0x234:  mov    %dx,0xd4(%eax)
08333123 +0x23b:  mov    0x10(%ebp),%eax
08333126 +0x23e:  movzwl 0xd4(%eax),%eax
0833312d +0x245:  cmp    $0x63,%ax
08333131 +0x249:  jbe    08333153 <+0x26b>
08333133 +0x24b:  mov    0x10(%ebp),%eax
08333136 +0x24e:  movw   $0x0,0xd4(%eax)
0833313f +0x257:  jmp    08333153 <+0x26b>
08333141 +0x259:  mov    -0x4c(%ebp),%edx
08333144 +0x25c:  mov    -0x50(%ebp),%eax
08333147 +0x25f:  add    $0xb8,%edx
0833314d +0x265:  mov    (%eax,%edx,4),%eax
08333150 +0x268:  mov    %eax,-0x38(%ebp)
08333153 +0x26b:  cmpl   $0x0,-0x48(%ebp)
08333157 +0x26f:  jg     08333277 <+0x38f>
0833315d +0x275:  mov    0x10(%ebp),%eax
08333160 +0x278:  movzbl 0xe8(%eax),%eax
08333167 +0x27f:  cmp    $0x1,%al
08333169 +0x281:  jne    08333179 <+0x291>
0833316b +0x283:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08333170 +0x288:  mov    0x4a54(%eax),%eax
08333176 +0x28e:  add    %eax,-0x38(%ebp)
08333179 +0x291:  mov    0x10(%ebp),%eax
0833317c +0x294:  movzbl 0xe8(%eax),%eax
08333183 +0x29b:  cmp    $0x3,%al
08333185 +0x29d:  jne    083331b2 <+0x2ca>
08333187 +0x29f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833318c +0x2a4:  mov    0x4a58(%eax),%eax
08333192 +0x2aa:  mov    %eax,%ecx
08333194 +0x2ac:  imul   -0x38(%ebp),%ecx
08333198 +0x2b0:  mov    $0x68db8bad,%edx
0833319d +0x2b5:  mov    %ecx,%eax
0833319f +0x2b7:  imul   %edx
083331a1 +0x2b9:  sar    $0xc,%edx
083331a4 +0x2bc:  mov    %ecx,%eax
083331a6 +0x2be:  sar    $0x1f,%eax
083331a9 +0x2c1:  mov    %edx,%ecx
083331ab +0x2c3:  sub    %eax,%ecx
083331ad +0x2c5:  mov    %ecx,%eax
083331af +0x2c7:  sub    %eax,-0x38(%ebp)
083331b2 +0x2ca:  movl   $0x2710,-0x80(%ebp)
083331b9 +0x2d1:  mov    0x8(%ebp),%eax
083331bc +0x2d4:  mov    0x84(%eax),%eax
083331c2 +0x2da:  lea    -0x80(%ebp),%edx
083331c5 +0x2dd:  mov    %edx,0x4(%esp)
083331c9 +0x2e1:  mov    %eax,(%esp)
083331cc +0x2e4:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
083331d1 +0x2e9:  cmp    -0x38(%ebp),%eax
083331d4 +0x2ec:  setl   %al
083331d7 +0x2ef:  test   %al,%al
083331d9 +0x2f1:  je     0833327a <+0x392>
083331df +0x2f7:  mov    -0x4c(%ebp),%edx
083331e2 +0x2fa:  mov    -0x50(%ebp),%eax
083331e5 +0x2fd:  add    $0x8,%edx
083331e8 +0x300:  mov    0xc(%eax,%edx,4),%eax
083331ec +0x304:  mov    %eax,(%esp)
083331ef +0x307:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083331f4 +0x30c:  mov    %eax,%ecx
083331f6 +0x30e:  mov    -0x4c(%ebp),%edx
083331f9 +0x311:  mov    %edx,%eax
083331fb +0x313:  add    %eax,%eax
083331fd +0x315:  add    %edx,%eax
083331ff +0x317:  shl    $0x2,%eax
08333202 +0x31a:  add    $0x70,%eax
08333205 +0x31d:  add    -0x50(%ebp),%eax
08333208 +0x320:  add    $0xc,%eax
0833320b +0x323:  mov    %ecx,0x4(%esp)
0833320f +0x327:  mov    %eax,(%esp)
08333212 +0x32a:  call   08332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>  ; getItemIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int)
08333217 +0x32f:  mov    %eax,-0x48(%ebp)
0833321a +0x332:  jmp    0833327b <+0x393>
0833321c +0x334:  mov    0x10(%ebp),%eax
0833321f +0x337:  movzbl 0xe8(%eax),%eax
08333226 +0x33e:  cmp    $0x4,%al
08333228 +0x340:  jne    08333269 <+0x381>
0833322a +0x342:  mov    -0x4c(%ebp),%edx
0833322d +0x345:  mov    -0x50(%ebp),%eax
08333230 +0x348:  sub    $0xffffff80,%edx
08333233 +0x34b:  mov    0x18(%eax,%edx,4),%eax
08333237 +0x34f:  mov    %eax,(%esp)
0833323a +0x352:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0833323f +0x357:  mov    %eax,%ecx
08333241 +0x359:  mov    -0x4c(%ebp),%edx
08333244 +0x35c:  mov    %edx,%eax
08333246 +0x35e:  add    %eax,%eax
08333248 +0x360:  add    %edx,%eax
0833324a +0x362:  shl    $0x2,%eax
0833324d +0x365:  add    $0x230,%eax
08333252 +0x36a:  add    -0x50(%ebp),%eax
08333255 +0x36d:  add    $0x10,%eax
08333258 +0x370:  mov    %ecx,0x4(%esp)
0833325c +0x374:  mov    %eax,(%esp)
0833325f +0x377:  call   08332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>  ; getItemIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int)
08333264 +0x37c:  mov    %eax,-0x48(%ebp)
08333267 +0x37f:  jmp    0833327b <+0x393>
08333269 +0x381:  mov    0x10(%ebp),%eax
0833326c +0x384:  mov    0xd0(%eax),%eax
08333272 +0x38a:  mov    %eax,-0x48(%ebp)
08333275 +0x38d:  jmp    0833327b <+0x393>
08333277 +0x38f:  nop
08333278 +0x390:  jmp    0833327b <+0x393>
0833327a +0x392:  nop
0833327b +0x393:  cmpl   $0x0,-0x48(%ebp)
0833327f +0x397:  jne    083332be <+0x3d6>
08333281 +0x399:  mov    -0x4c(%ebp),%edx
08333284 +0x39c:  mov    -0x50(%ebp),%eax
08333287 +0x39f:  add    $0x14,%edx
0833328a +0x3a2:  mov    0x4(%eax,%edx,4),%eax
0833328e +0x3a6:  mov    %eax,(%esp)
08333291 +0x3a9:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08333296 +0x3ae:  mov    %eax,%ecx
08333298 +0x3b0:  mov    -0x4c(%ebp),%edx
0833329b +0x3b3:  mov    %edx,%eax
0833329d +0x3b5:  add    %eax,%eax
0833329f +0x3b7:  add    %edx,%eax
083332a1 +0x3b9:  shl    $0x2,%eax
083332a4 +0x3bc:  add    $0xf0,%eax
083332a9 +0x3c1:  add    -0x50(%ebp),%eax
083332ac +0x3c4:  add    $0x4,%eax
083332af +0x3c7:  mov    %ecx,0x4(%esp)
083332b3 +0x3cb:  mov    %eax,(%esp)
083332b6 +0x3ce:  call   08332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>  ; getItemIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int)
083332bb +0x3d3:  mov    %eax,-0x48(%ebp)
083332be +0x3d6:  cmpl   $0x0,-0x48(%ebp)
083332c2 +0x3da:  je     083332dc <+0x3f4>
083332c4 +0x3dc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083332c9 +0x3e1:  mov    -0x48(%ebp),%edx
083332cc +0x3e4:  mov    %edx,0x4(%esp)
083332d0 +0x3e8:  mov    %eax,(%esp)
083332d3 +0x3eb:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083332d8 +0x3f0:  test   %eax,%eax
083332da +0x3f2:  jne    083332e3 <+0x3fb>
083332dc +0x3f4:  mov    $0x1,%eax
083332e1 +0x3f9:  jmp    083332e8 <+0x400>
083332e3 +0x3fb:  mov    $0x0,%eax
083332e8 +0x400:  test   %al,%al
083332ea +0x402:  je     083332f6 <+0x40e>
083332ec +0x404:  mov    $0x1,%eax
083332f1 +0x409:  jmp    083338b7 <+0x9cf>
083332f6 +0x40e:  mov    0x10(%ebp),%eax
083332f9 +0x411:  movzwl 0x8(%eax),%eax
083332fd +0x415:  cwtl
083332fe +0x416:  movl   $0x1,0x14(%esp)
08333306 +0x41e:  movl   $0x3,0x10(%esp)
0833330e +0x426:  movl   $0x1,0xc(%esp)
08333316 +0x42e:  mov    %eax,0x8(%esp)
0833331a +0x432:  movl   $0x2,0x4(%esp)
08333322 +0x43a:  mov    -0x54(%ebp),%eax
08333325 +0x43d:  mov    %eax,(%esp)
08333328 +0x440:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0833332d +0x445:  xor    $0x1,%eax
08333330 +0x448:  test   %al,%al
08333332 +0x44a:  je     0833333e <+0x456>
08333334 +0x44c:  mov    $0x16,%eax
08333339 +0x451:  jmp    083338b7 <+0x9cf>
0833333e +0x456:  mov    0x10(%ebp),%eax
08333341 +0x459:  movzwl 0x48(%eax),%eax
08333345 +0x45d:  cwtl
08333346 +0x45e:  movl   $0x1,0x14(%esp)
0833334e +0x466:  movl   $0x3,0x10(%esp)
08333356 +0x46e:  movl   $0x1,0xc(%esp)
0833335e +0x476:  mov    %eax,0x8(%esp)
08333362 +0x47a:  movl   $0x2,0x4(%esp)
0833336a +0x482:  mov    -0x54(%ebp),%eax
0833336d +0x485:  mov    %eax,(%esp)
08333370 +0x488:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08333375 +0x48d:  xor    $0x1,%eax
08333378 +0x490:  test   %al,%al
0833337a +0x492:  je     08333386 <+0x49e>
0833337c +0x494:  mov    $0x16,%eax
08333381 +0x499:  jmp    083338b7 <+0x9cf>
08333386 +0x49e:  movb   $0x0,-0x89(%ebp)
0833338d +0x4a5:  mov    0x10(%ebp),%eax
08333390 +0x4a8:  movzbl 0xe8(%eax),%eax
08333397 +0x4af:  test   %al,%al
08333399 +0x4b1:  jne    0833340f <+0x527>
0833339b +0x4b3:  mov    0x10(%ebp),%eax
0833339e +0x4b6:  lea    0xdc(%eax),%ecx
083333a4 +0x4bc:  mov    -0x50(%ebp),%eax
083333a7 +0x4bf:  lea    0x2b8(%eax),%edx
083333ad +0x4c5:  movl   $0x0,0x18(%esp)
083333b5 +0x4cd:  movl   $0x12,0x14(%esp)
083333bd +0x4d5:  movl   $0x12,0x10(%esp)
083333c5 +0x4dd:  lea    -0x89(%ebp),%eax
083333cb +0x4e3:  mov    %eax,0xc(%esp)
083333cf +0x4e7:  mov    %ecx,0x8(%esp)
083333d3 +0x4eb:  mov    %edx,0x4(%esp)
083333d7 +0x4ef:  mov    -0x54(%ebp),%eax
083333da +0x4f2:  mov    %eax,(%esp)
083333dd +0x4f5:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
083333e2 +0x4fa:  mov    %eax,-0x28(%ebp)
083333e5 +0x4fd:  mov    -0x28(%ebp),%ebx
083333e8 +0x500:  mov    -0x50(%ebp),%eax
083333eb +0x503:  add    $0x2b8,%eax
083333f0 +0x508:  mov    %eax,(%esp)
083333f3 +0x50b:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
083333f8 +0x510:  cmp    %eax,%ebx
083333fa +0x512:  setne  %al
083333fd +0x515:  test   %al,%al
083333ff +0x517:  je     08333591 <+0x6a9>
08333405 +0x51d:  mov    $0x16,%eax
0833340a +0x522:  jmp    083338b7 <+0x9cf>
0833340f +0x527:  mov    0x10(%ebp),%eax
08333412 +0x52a:  movzbl 0xe8(%eax),%eax
08333419 +0x531:  cmp    $0x1,%al
0833341b +0x533:  jne    08333491 <+0x5a9>
0833341d +0x535:  mov    0x10(%ebp),%eax
08333420 +0x538:  lea    0xdc(%eax),%ecx
08333426 +0x53e:  mov    -0x50(%ebp),%eax
08333429 +0x541:  lea    0x2c4(%eax),%edx
0833342f +0x547:  movl   $0x0,0x18(%esp)
08333437 +0x54f:  movl   $0x12,0x14(%esp)
0833343f +0x557:  movl   $0x12,0x10(%esp)
08333447 +0x55f:  lea    -0x89(%ebp),%eax
0833344d +0x565:  mov    %eax,0xc(%esp)
08333451 +0x569:  mov    %ecx,0x8(%esp)
08333455 +0x56d:  mov    %edx,0x4(%esp)
08333459 +0x571:  mov    -0x54(%ebp),%eax
0833345c +0x574:  mov    %eax,(%esp)
0833345f +0x577:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
08333464 +0x57c:  mov    %eax,-0x24(%ebp)
08333467 +0x57f:  mov    -0x24(%ebp),%ebx
0833346a +0x582:  mov    -0x50(%ebp),%eax
0833346d +0x585:  add    $0x2c4,%eax
08333472 +0x58a:  mov    %eax,(%esp)
08333475 +0x58d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0833347a +0x592:  cmp    %eax,%ebx
0833347c +0x594:  setne  %al
0833347f +0x597:  test   %al,%al
08333481 +0x599:  je     08333591 <+0x6a9>
08333487 +0x59f:  mov    $0x16,%eax
0833348c +0x5a4:  jmp    083338b7 <+0x9cf>
08333491 +0x5a9:  mov    0x10(%ebp),%eax
08333494 +0x5ac:  movzbl 0xe8(%eax),%eax
0833349b +0x5b3:  cmp    $0x3,%al
0833349d +0x5b5:  jne    08333513 <+0x62b>
0833349f +0x5b7:  mov    0x10(%ebp),%eax
083334a2 +0x5ba:  lea    0xdc(%eax),%ecx
083334a8 +0x5c0:  mov    -0x50(%ebp),%eax
083334ab +0x5c3:  lea    0x2d0(%eax),%edx
083334b1 +0x5c9:  movl   $0x0,0x18(%esp)
083334b9 +0x5d1:  movl   $0x12,0x14(%esp)
083334c1 +0x5d9:  movl   $0x12,0x10(%esp)
083334c9 +0x5e1:  lea    -0x89(%ebp),%eax
083334cf +0x5e7:  mov    %eax,0xc(%esp)
083334d3 +0x5eb:  mov    %ecx,0x8(%esp)
083334d7 +0x5ef:  mov    %edx,0x4(%esp)
083334db +0x5f3:  mov    -0x54(%ebp),%eax
083334de +0x5f6:  mov    %eax,(%esp)
083334e1 +0x5f9:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
083334e6 +0x5fe:  mov    %eax,-0x20(%ebp)
083334e9 +0x601:  mov    -0x20(%ebp),%ebx
083334ec +0x604:  mov    -0x50(%ebp),%eax
083334ef +0x607:  add    $0x2d0,%eax
083334f4 +0x60c:  mov    %eax,(%esp)
083334f7 +0x60f:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
083334fc +0x614:  cmp    %eax,%ebx
083334fe +0x616:  setne  %al
08333501 +0x619:  test   %al,%al
08333503 +0x61b:  je     08333591 <+0x6a9>
08333509 +0x621:  mov    $0x16,%eax
0833350e +0x626:  jmp    083338b7 <+0x9cf>
08333513 +0x62b:  mov    0x10(%ebp),%eax
08333516 +0x62e:  movzbl 0xe8(%eax),%eax
0833351d +0x635:  cmp    $0x4,%al
0833351f +0x637:  jne    08333591 <+0x6a9>
08333521 +0x639:  mov    0x10(%ebp),%eax
08333524 +0x63c:  lea    0xdc(%eax),%ecx
0833352a +0x642:  mov    -0x50(%ebp),%eax
0833352d +0x645:  lea    0x20c(%eax),%edx
08333533 +0x64b:  movl   $0x0,0x18(%esp)
0833353b +0x653:  movl   $0x12,0x14(%esp)
08333543 +0x65b:  movl   $0x12,0x10(%esp)
0833354b +0x663:  lea    -0x89(%ebp),%eax
08333551 +0x669:  mov    %eax,0xc(%esp)
08333555 +0x66d:  mov    %ecx,0x8(%esp)
08333559 +0x671:  mov    %edx,0x4(%esp)
0833355d +0x675:  mov    -0x54(%ebp),%eax
08333560 +0x678:  mov    %eax,(%esp)
08333563 +0x67b:  call   08505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>  ; CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
08333568 +0x680:  mov    %eax,-0x1c(%ebp)
0833356b +0x683:  mov    -0x1c(%ebp),%ebx
0833356e +0x686:  mov    -0x50(%ebp),%eax
08333571 +0x689:  add    $0x2d0,%eax
08333576 +0x68e:  mov    %eax,(%esp)
08333579 +0x691:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0833357e +0x696:  cmp    %eax,%ebx
08333580 +0x698:  setne  %al
08333583 +0x69b:  test   %al,%al
08333585 +0x69d:  je     08333591 <+0x6a9>
08333587 +0x69f:  mov    $0x16,%eax
0833358c +0x6a4:  jmp    083338b7 <+0x9cf>
08333591 +0x6a9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08333598 +0x6b0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0833359d +0x6b5:  mov    %eax,-0x44(%ebp)
083335a0 +0x6b8:  mov    0x10(%ebp),%eax
083335a3 +0x6bb:  mov    0x11(%eax),%ebx
083335a6 +0x6be:  mov    0xc(%ebp),%eax
083335a9 +0x6c1:  mov    %eax,(%esp)
083335ac +0x6c4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083335b1 +0x6c9:  mov    %eax,(%esp)
083335b4 +0x6cc:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
083335b9 +0x6d1:  mov    -0x44(%ebp),%edx
083335bc +0x6d4:  mov    %edx,0x8(%esp)
083335c0 +0x6d8:  mov    %ebx,0x4(%esp)
083335c4 +0x6dc:  mov    %eax,(%esp)
083335c7 +0x6df:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
083335cc +0x6e4:  mov    %eax,-0x40(%ebp)
083335cf +0x6e7:  mov    0x10(%ebp),%eax
083335d2 +0x6ea:  mov    0x51(%eax),%ebx
083335d5 +0x6ed:  mov    0xc(%ebp),%eax
083335d8 +0x6f0:  mov    %eax,(%esp)
083335db +0x6f3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083335e0 +0x6f8:  mov    %eax,(%esp)
083335e3 +0x6fb:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
083335e8 +0x700:  mov    -0x44(%ebp),%edx
083335eb +0x703:  mov    %edx,0x8(%esp)
083335ef +0x707:  mov    %ebx,0x4(%esp)
083335f3 +0x70b:  mov    %eax,(%esp)
083335f6 +0x70e:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
083335fb +0x713:  mov    %eax,-0x3c(%ebp)
083335fe +0x716:  mov    0x10(%ebp),%eax
08333601 +0x719:  mov    0x11(%eax),%ebx
08333604 +0x71c:  mov    -0x54(%ebp),%eax
08333607 +0x71f:  mov    %eax,(%esp)
0833360a +0x722:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0833360f +0x727:  mov    %ebx,0x4(%esp)
08333613 +0x72b:  mov    %eax,(%esp)
08333616 +0x72e:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
0833361b +0x733:  mov    0x10(%ebp),%eax
0833361e +0x736:  movzwl 0x8(%eax),%eax
08333622 +0x73a:  cwtl
08333623 +0x73b:  lea    0xa(%eax),%edx
08333626 +0x73e:  mov    0x10(%ebp),%eax
08333629 +0x741:  mov    0x11(%eax),%eax
0833362c +0x744:  movl   $0x0,0x14(%esp)
08333634 +0x74c:  mov    %edx,0x10(%esp)
08333638 +0x750:  movl   $0x1,0xc(%esp)
08333640 +0x758:  mov    %eax,0x8(%esp)
08333644 +0x75c:  movl   $0x36,0x4(%esp)
0833364c +0x764:  mov    -0x54(%ebp),%eax
0833364f +0x767:  mov    %eax,(%esp)
08333652 +0x76a:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
08333657 +0x76f:  movl   $0x1,-0x7c(%ebp)
0833365e +0x776:  mov    0x10(%ebp),%eax
08333661 +0x779:  lea    0xdc(%eax),%edx
08333667 +0x77f:  lea    -0x7c(%ebp),%eax
0833366a +0x782:  mov    %eax,0x4(%esp)
0833366e +0x786:  mov    %edx,(%esp)
08333671 +0x789:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08333676 +0x78e:  mov    0x10(%ebp),%eax
08333679 +0x791:  movzwl 0x8(%eax),%eax
0833367d +0x795:  cwtl
0833367e +0x796:  mov    %eax,-0x78(%ebp)
08333681 +0x799:  mov    0x10(%ebp),%eax
08333684 +0x79c:  lea    0xdc(%eax),%edx
0833368a +0x7a2:  lea    -0x78(%ebp),%eax
0833368d +0x7a5:  mov    %eax,0x4(%esp)
08333691 +0x7a9:  mov    %edx,(%esp)
08333694 +0x7ac:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08333699 +0x7b1:  movl   $0x1,-0x74(%ebp)
083336a0 +0x7b8:  mov    0x10(%ebp),%eax
083336a3 +0x7bb:  lea    0xdc(%eax),%edx
083336a9 +0x7c1:  lea    -0x74(%ebp),%eax
083336ac +0x7c4:  mov    %eax,0x4(%esp)
083336b0 +0x7c8:  mov    %edx,(%esp)
083336b3 +0x7cb:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
083336b8 +0x7d0:  mov    0x10(%ebp),%eax
083336bb +0x7d3:  mov    0x51(%eax),%ebx
083336be +0x7d6:  mov    -0x54(%ebp),%eax
083336c1 +0x7d9:  mov    %eax,(%esp)
083336c4 +0x7dc:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
083336c9 +0x7e1:  mov    %ebx,0x4(%esp)
083336cd +0x7e5:  mov    %eax,(%esp)
083336d0 +0x7e8:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
083336d5 +0x7ed:  mov    0x10(%ebp),%eax
083336d8 +0x7f0:  movzwl 0x48(%eax),%eax
083336dc +0x7f4:  cwtl
083336dd +0x7f5:  lea    0xa(%eax),%edx
083336e0 +0x7f8:  mov    0x10(%ebp),%eax
083336e3 +0x7fb:  mov    0x51(%eax),%eax
083336e6 +0x7fe:  movl   $0x0,0x14(%esp)
083336ee +0x806:  mov    %edx,0x10(%esp)
083336f2 +0x80a:  movl   $0x1,0xc(%esp)
083336fa +0x812:  mov    %eax,0x8(%esp)
083336fe +0x816:  movl   $0x36,0x4(%esp)
08333706 +0x81e:  mov    -0x54(%ebp),%eax
08333709 +0x821:  mov    %eax,(%esp)
0833370c +0x824:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
08333711 +0x829:  movl   $0x1,-0x70(%ebp)
08333718 +0x830:  mov    0x10(%ebp),%eax
0833371b +0x833:  lea    0xdc(%eax),%edx
08333721 +0x839:  lea    -0x70(%ebp),%eax
08333724 +0x83c:  mov    %eax,0x4(%esp)
08333728 +0x840:  mov    %edx,(%esp)
0833372b +0x843:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08333730 +0x848:  mov    0x10(%ebp),%eax
08333733 +0x84b:  movzwl 0x48(%eax),%eax
08333737 +0x84f:  cwtl
08333738 +0x850:  mov    %eax,-0x6c(%ebp)
0833373b +0x853:  mov    0x10(%ebp),%eax
0833373e +0x856:  lea    0xdc(%eax),%edx
08333744 +0x85c:  lea    -0x6c(%ebp),%eax
08333747 +0x85f:  mov    %eax,0x4(%esp)
0833374b +0x863:  mov    %edx,(%esp)
0833374e +0x866:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08333753 +0x86b:  movl   $0x1,-0x68(%ebp)
0833375a +0x872:  mov    0x10(%ebp),%eax
0833375d +0x875:  lea    0xdc(%eax),%edx
08333763 +0x87b:  lea    -0x68(%ebp),%eax
08333766 +0x87e:  mov    %eax,0x4(%esp)
0833376a +0x882:  mov    %edx,(%esp)
0833376d +0x885:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08333772 +0x88a:  lea    -0xa1(%ebp),%eax
08333778 +0x890:  mov    %eax,0xc(%esp)
0833377c +0x894:  mov    -0x44(%ebp),%eax
0833377f +0x897:  mov    %eax,0x8(%esp)
08333783 +0x89b:  mov    0xc(%ebp),%eax
08333786 +0x89e:  mov    %eax,0x4(%esp)
0833378a +0x8a2:  mov    0x8(%ebp),%eax
0833378d +0x8a5:  mov    %eax,(%esp)
08333790 +0x8a8:  call   08333df6 <_ZNK8WongWork15CCompoundAvatar14_generateIPGNoEPK5CUserlPc>  ; WongWork::CCompoundAvatar::_generateIPGNo(CUser const*, long, char*) const
08333795 +0x8ad:  mov    %eax,%ebx
08333797 +0x8af:  mov    0x10(%ebp),%eax
0833379a +0x8b2:  movzwl 0xd4(%eax),%eax
083337a1 +0x8b9:  movsbl %al,%esi
083337a4 +0x8bc:  mov    -0x3c(%ebp),%eax
083337a7 +0x8bf:  mov    -0x40(%ebp),%edx
083337aa +0x8c2:  lea    (%edx,%eax,1),%edi
083337ad +0x8c5:  mov    0xc(%ebp),%eax
083337b0 +0x8c8:  mov    %eax,(%esp)
083337b3 +0x8cb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
083337b8 +0x8d0:  movl   $0x0,0x24(%esp)
083337c0 +0x8d8:  movl   $0x1,0x20(%esp)
083337c8 +0x8e0:  movl   $0x6,0x1c(%esp)
083337d0 +0x8e8:  mov    %ebx,0x18(%esp)
083337d4 +0x8ec:  movl   $0xffffffff,0x14(%esp)
083337dc +0x8f4:  mov    %esi,0x10(%esp)
083337e0 +0x8f8:  movl   $0x0,0xc(%esp)
083337e8 +0x900:  mov    %edi,0x8(%esp)
083337ec +0x904:  mov    -0x48(%ebp),%edx
083337ef +0x907:  mov    %edx,0x4(%esp)
083337f3 +0x90b:  mov    %eax,(%esp)
083337f6 +0x90e:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
083337fb +0x913:  mov    %eax,%edx
083337fd +0x915:  mov    0x10(%ebp),%eax
08333800 +0x918:  mov    %dx,0xd8(%eax)
08333807 +0x91f:  mov    0x10(%ebp),%eax
0833380a +0x922:  movzwl 0xd8(%eax),%eax
08333811 +0x929:  cmp    $0xffff,%ax
08333815 +0x92d:  jne    08333864 <+0x97c>
08333817 +0x92f:  movl   $0x5,0xc(%esp)
0833381f +0x937:  movl   $0x361,0x8(%esp)
08333827 +0x93f:  movl   $&_ZZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTableE19__PRETTY_FUNCTION__,0x4(%esp)
0833382f +0x947:  lea    -0x64(%ebp),%eax
08333832 +0x94a:  mov    %eax,(%esp)
08333835 +0x94d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833383a +0x952:  movl   $0x361,0xc(%esp)
08333842 +0x95a:  movl   $&_ZZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTableE19__PRETTY_FUNCTION__,0x8(%esp)
0833384a +0x962:  movl   $"[%s][%d] AddAvatarItem Fail",0x4(%esp)
08333852 +0x96a:  lea    -0x64(%ebp),%eax
08333855 +0x96d:  mov    %eax,(%esp)
08333858 +0x970:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833385d +0x975:  mov    $0x11,%eax
08333862 +0x97a:  jmp    083338b7 <+0x9cf>
08333864 +0x97c:  mov    0x10(%ebp),%eax
08333867 +0x97f:  mov    0x11(%eax),%ebx
0833386a +0x982:  mov    0xc(%ebp),%eax
0833386d +0x985:  mov    %eax,(%esp)
08333870 +0x988:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08333875 +0x98d:  lea    -0xa1(%ebp),%edx
0833387b +0x993:  mov    %edx,0x8(%esp)
0833387f +0x997:  mov    %ebx,0x4(%esp)
08333883 +0x99b:  mov    %eax,(%esp)
08333886 +0x99e:  call   0844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>  ; DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)
0833388b +0x9a3:  mov    0x10(%ebp),%eax
0833388e +0x9a6:  mov    0x51(%eax),%ebx
08333891 +0x9a9:  mov    0xc(%ebp),%eax
08333894 +0x9ac:  mov    %eax,(%esp)
08333897 +0x9af:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833389c +0x9b4:  lea    -0xa1(%ebp),%edx
083338a2 +0x9ba:  mov    %edx,0x8(%esp)
083338a6 +0x9be:  mov    %ebx,0x4(%esp)
083338aa +0x9c2:  mov    %eax,(%esp)
083338ad +0x9c5:  call   0844536a <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc>  ; DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*)
083338b2 +0x9ca:  mov    $0x0,%eax
083338b7 +0x9cf:  add    $0xcc,%esp
083338bd +0x9d5:  pop    %ebx
083338be +0x9d6:  pop    %esi
083338bf +0x9d7:  pop    %edi
083338c0 +0x9d8:  pop    %ebp
083338c1 +0x9d9:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_ProcCompoundCore @ 0x8332ee8

/* WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo&,
   tagCompoundAvatarTable*) */

undefined4 __thiscall
WongWork::CCompoundAvatar::_ProcCompoundCore
          (CCompoundAvatar *this,CUser *param_1,tagCompoundInfo *param_2,
          tagCompoundAvatarTable *param_3)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  CDataManager *pCVar6;
  undefined4 uVar7;
  int iVar8;
  CInventory *pCVar9;
  CAvatarItemMgr *pCVar10;
  char local_a5 [24];
  undefined1 local_8d;
  ulong local_8c;
  ulong local_88 [4];
  int local_78 [3];
  int local_6c;
  cMyTrace local_68 [16];
  CInventory *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulong local_38;
  CEquipItem *local_34;
  CEquipItem *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_58 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_54 = tagCompoundAvatarTable::getCompoundAvatarInfo(param_3,*(int *)(param_2 + 4));
  local_50 = (**(code **)(**(int **)(param_2 + 0x88) + 0xc))(*(undefined4 *)(param_2 + 0x88));
  local_4c = 0;
  if ((param_2[0xd6] == (tagCompoundInfo)0x0) || (param_2[0xe8] == (tagCompoundInfo)0x4)) {
    if (param_2[0xe8] == (tagCompoundInfo)0x4) {
      iVar4 = get_rand_int(*(int *)(local_54 + 0x18 + (local_50 + 0x80) * 4));
      local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0x240),iVar4);
    }
    else {
      local_4c = *(int *)(param_2 + 0xd0);
    }
  }
  else {
    if ((*(int *)(local_54 + 0xc + (local_50 + 8) * 4) == 0) ||
       (cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty(),
       cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    local_3c = 0;
    iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x88));
    if ((iVar4 == 1) && (iVar4 = CItem::get_grade(*(CItem **)(param_2 + 0x8c)), iVar4 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_38 = *(ulong *)(local_54 + 0xc + (local_50 + 0x58) * 4);
      local_8c = 10000;
      uVar5 = CMTRand::randInt(*(CMTRand **)(this + 0x84),&local_8c);
      if (uVar5 < 5000) {
        local_88[0] = local_38;
        iVar4 = CMTRand::randInt(*(CMTRand **)(this + 0x84),local_88);
        local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0x194),iVar4);
      }
      if (local_4c < 1) {
        local_3c = *(int *)(local_54 + 4 + local_50 * 4);
      }
      else {
        pCVar6 = (CDataManager *)G_CDataManager();
        local_34 = (CEquipItem *)CDataManager::find_item(pCVar6,local_4c);
        if ((local_34 == (CEquipItem *)0x0) ||
           (cVar2 = (**(code **)(*(int *)local_34 + 0x10))(local_34), cVar2 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 1;
        }
        local_30 = local_34;
        if (local_34 == (CEquipItem *)0x0) {
          return 1;
        }
        iVar4 = CEquipItem::getAvatarOptionSize(local_34);
        uVar3 = get_rand_int(iVar4);
        *(undefined2 *)(param_2 + 0xd4) = uVar3;
        if (99 < *(ushort *)(param_2 + 0xd4)) {
          *(undefined2 *)(param_2 + 0xd4) = 0;
        }
      }
    }
    else {
      local_3c = *(int *)(local_54 + (local_50 + 0xb8) * 4);
    }
    if (local_4c < 1) {
      if (param_2[0xe8] == (tagCompoundInfo)0x1) {
        iVar4 = G_CDataManager();
        local_3c = local_3c + *(int *)(iVar4 + 0x4a54);
      }
      if (param_2[0xe8] == (tagCompoundInfo)0x3) {
        iVar4 = G_CDataManager();
        local_3c = local_3c - (*(int *)(iVar4 + 0x4a58) * local_3c) / 10000;
      }
      local_88[1] = 10000;
      iVar4 = CMTRand::randInt(*(CMTRand **)(this + 0x84),local_88 + 1);
      if (iVar4 < local_3c) {
        iVar4 = get_rand_int(*(int *)(local_54 + 0xc + (local_50 + 8) * 4));
        local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0x7c),iVar4);
      }
    }
  }
  if (local_4c == 0) {
    iVar4 = get_rand_int(*(int *)(local_54 + 4 + (local_50 + 0x14) * 4));
    local_4c = getItemIndex((vector *)(local_50 * 0xc + local_54 + 0xf4),iVar4);
  }
  if (local_4c != 0) {
    pCVar6 = (CDataManager *)G_CDataManager();
    iVar4 = CDataManager::find_item(pCVar6,local_4c);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_083332e8;
    }
  }
  bVar1 = true;
LAB_083332e8:
  if (bVar1) {
    uVar7 = 1;
  }
  else {
    cVar2 = CInventory::delete_item(local_58,2,(int)*(short *)(param_2 + 8),1,3,1);
    if (cVar2 == '\x01') {
      cVar2 = CInventory::delete_item(local_58,2,(int)*(short *)(param_2 + 0x48),1,3,1);
      if (cVar2 == '\x01') {
        local_8d = 0;
        if (param_2[0xe8] == (tagCompoundInfo)0x0) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x2b8,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_2c = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2b8));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        else if (param_2[0xe8] == (tagCompoundInfo)0x1) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x2c4,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_28 = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2c4));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        else if (param_2[0xe8] == (tagCompoundInfo)0x3) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x2d0,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_24 = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2d0));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        else if (param_2[0xe8] == (tagCompoundInfo)0x4) {
          iVar4 = CInventory::delete_event_items
                            (local_58,local_54 + 0x20c,param_2 + 0xdc,&local_8d,0x12,0x12,0);
          local_20 = iVar4;
          iVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_54 + 0x2d0));
          if (iVar4 != iVar8) {
            return 0x16;
          }
        }
        local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar4 = *(int *)(param_2 + 0x11);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
        local_44 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_48);
        iVar4 = *(int *)(param_2 + 0x51);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
        local_40 = CAvatarItemMgr::GetRemainDate(pCVar10,iVar4,local_48);
        iVar4 = CInventory::GetAvatarItemMgrW(local_58);
        CAvatarItemMgr::UnRegistItem(iVar4);
        CInventory::SendAvatarEvent
                  (local_58,0x36,*(int *)(param_2 + 0x11),1,*(short *)(param_2 + 8) + 10,0);
        local_88[2] = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),(int *)(local_88 + 2));
        local_88[3] = (ulong)*(short *)(param_2 + 8);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),(int *)(local_88 + 3));
        local_78[0] = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),local_78);
        iVar4 = CInventory::GetAvatarItemMgrW(local_58);
        CAvatarItemMgr::UnRegistItem(iVar4);
        CInventory::SendAvatarEvent
                  (local_58,0x36,*(int *)(param_2 + 0x51),1,*(short *)(param_2 + 0x48) + 10,0);
        local_78[1] = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),local_78 + 1);
        local_78[2] = (int)*(short *)(param_2 + 0x48);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),local_78 + 2);
        local_6c = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(param_2 + 0xdc),&local_6c);
        uVar7 = _generateIPGNo(this,param_1,local_48,local_a5);
        uVar3 = *(undefined2 *)(param_2 + 0xd4);
        iVar4 = local_44 + local_40;
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        uVar3 = CInventory::AddAvatarItem
                          (pCVar9,local_4c,iVar4,0,(int)(char)uVar3,0xffffffff,uVar7,6,1,0);
        *(undefined2 *)(param_2 + 0xd8) = uVar3;
        if (*(short *)(param_2 + 0xd8) == -1) {
          cMyTrace::cMyTrace(local_68,
                             "ENUM_ERROR WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::stCompoundAvatarInfo&, stCompoundAvatarTable*)"
                             ,0x361,5);
          cMyTrace::operator()
                    (local_68,"[%s][%d] AddAvatarItem Fail",
                     "ENUM_ERROR WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::stCompoundAvatarInfo&, stCompoundAvatarTable*)"
                     ,0x361);
          uVar7 = 0x11;
        }
        else {
          iVar4 = *(int *)(param_2 + 0x11);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          DB_UpdateAvatarHistory::makeRequest(uVar5,iVar4,local_a5);
          iVar4 = *(int *)(param_2 + 0x51);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          DB_UpdateAvatarHistory::makeRequest(uVar5,iVar4,local_a5);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0x16;
      }
    }
    else {
      uVar7 = 0x16;
    }
  }
  return uVar7;
}
```
