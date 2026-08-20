# dispatch_sig

`_ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompoundEmblem` | `0x08220bb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08220bb2  _ZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08220bb2, 0x08221ddd]
08220bb2 +0x0000:  push   %ebp
08220bb3 +0x0001:  mov    %esp,%ebp
08220bb5 +0x0003:  push   %esi
08220bb6 +0x0004:  push   %ebx
08220bb7 +0x0005:  sub    $0x1e0,%esp
08220bbd +0x000b:  mov    0xc(%ebp),%eax
08220bc0 +0x000e:  mov    %eax,(%esp)
08220bc3 +0x0011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08220bc8 +0x0016:  cmp    $0x3,%eax
08220bcb +0x0019:  setne  %al
08220bce +0x001c:  test   %al,%al
08220bd0 +0x001e:  je     08220bdc <+0x2a>
08220bd2 +0x0020:  mov    $0x0,%ebx
08220bd7 +0x0025:  jmp    08221dd2 <+0x1220>
08220bdc +0x002a:  lea    -0x5c(%ebp),%eax
08220bdf +0x002d:  mov    %eax,0x4(%esp)
08220be3 +0x0031:  mov    0x10(%ebp),%eax
08220be6 +0x0034:  mov    %eax,(%esp)
08220be9 +0x0037:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
08220bee +0x003c:  xor    $0x1,%eax
08220bf1 +0x003f:  test   %al,%al
08220bf3 +0x0041:  je     08220c20 <+0x6e>
08220bf5 +0x0043:  movl   $0x0,0xc(%esp)
08220bfd +0x004b:  movl   $0x0,0x8(%esp)
08220c05 +0x0053:  movl   $&_ZZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08220c0d +0x005b:  movl   $0xda8f,(%esp)
08220c14 +0x0062:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220c19 +0x0067:  mov    %eax,%ebx
08220c1b +0x0069:  jmp    08221dd2 <+0x1220>
08220c20 +0x006e:  lea    -0x62(%ebp),%eax
08220c23 +0x0071:  mov    %eax,0x4(%esp)
08220c27 +0x0075:  mov    0x10(%ebp),%eax
08220c2a +0x0078:  mov    %eax,(%esp)
08220c2d +0x007b:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08220c32 +0x0080:  xor    $0x1,%eax
08220c35 +0x0083:  test   %al,%al
08220c37 +0x0085:  je     08220c64 <+0xb2>
08220c39 +0x0087:  movl   $0x0,0xc(%esp)
08220c41 +0x008f:  movl   $0x0,0x8(%esp)
08220c49 +0x0097:  movl   $&_ZZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08220c51 +0x009f:  movl   $0xda90,(%esp)
08220c58 +0x00a6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220c5d +0x00ab:  mov    %eax,%ebx
08220c5f +0x00ad:  jmp    08221dd2 <+0x1220>
08220c64 +0x00b2:  lea    -0x60(%ebp),%eax
08220c67 +0x00b5:  mov    %eax,0x4(%esp)
08220c6b +0x00b9:  mov    0x10(%ebp),%eax
08220c6e +0x00bc:  mov    %eax,(%esp)
08220c71 +0x00bf:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
08220c76 +0x00c4:  xor    $0x1,%eax
08220c79 +0x00c7:  test   %al,%al
08220c7b +0x00c9:  je     08220ca8 <+0xf6>
08220c7d +0x00cb:  movl   $0x0,0xc(%esp)
08220c85 +0x00d3:  movl   $0x0,0x8(%esp)
08220c8d +0x00db:  movl   $&_ZZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08220c95 +0x00e3:  movl   $0xda91,(%esp)
08220c9c +0x00ea:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220ca1 +0x00ef:  mov    %eax,%ebx
08220ca3 +0x00f1:  jmp    08221dd2 <+0x1220>
08220ca8 +0x00f6:  lea    -0x64(%ebp),%eax
08220cab +0x00f9:  mov    %eax,0x4(%esp)
08220caf +0x00fd:  mov    0x10(%ebp),%eax
08220cb2 +0x0100:  mov    %eax,(%esp)
08220cb5 +0x0103:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08220cba +0x0108:  xor    $0x1,%eax
08220cbd +0x010b:  test   %al,%al
08220cbf +0x010d:  je     08220cec <+0x13a>
08220cc1 +0x010f:  movl   $0x0,0xc(%esp)
08220cc9 +0x0117:  movl   $0x0,0x8(%esp)
08220cd1 +0x011f:  movl   $&_ZZN25Dispatcher_CompoundEmblem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08220cd9 +0x0127:  movl   $0xda92,(%esp)
08220ce0 +0x012e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220ce5 +0x0133:  mov    %eax,%ebx
08220ce7 +0x0135:  jmp    08221dd2 <+0x1220>
08220cec +0x013a:  lea    -0xd9(%ebp),%eax
08220cf2 +0x0140:  mov    %eax,(%esp)
08220cf5 +0x0143:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08220cfa +0x0148:  lea    -0x116(%ebp),%eax
08220d00 +0x014e:  mov    %eax,(%esp)
08220d03 +0x0151:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08220d08 +0x0156:  mov    -0x5c(%ebp),%eax
08220d0b +0x0159:  mov    %eax,%ebx
08220d0d +0x015b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08220d12 +0x0160:  mov    %ebx,0x4(%esp)
08220d16 +0x0164:  mov    %eax,(%esp)
08220d19 +0x0167:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08220d1e +0x016c:  mov    %eax,-0x38(%ebp)
08220d21 +0x016f:  mov    -0x60(%ebp),%eax
08220d24 +0x0172:  mov    %eax,%ebx
08220d26 +0x0174:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08220d2b +0x0179:  mov    %ebx,0x4(%esp)
08220d2f +0x017d:  mov    %eax,(%esp)
08220d32 +0x0180:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08220d37 +0x0185:  mov    %eax,-0x34(%ebp)
08220d3a +0x0188:  movl   $0xffffffff,-0x30(%ebp)
08220d41 +0x018f:  mov    0xc(%ebp),%eax
08220d44 +0x0192:  mov    %eax,(%esp)
08220d47 +0x0195:  call   086810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>  ; CUser::isEnableAvatarSocketAction()
08220d4c +0x019a:  mov    %eax,-0x28(%ebp)
08220d4f +0x019d:  cmpl   $0x0,-0x28(%ebp)
08220d53 +0x01a1:  je     08220d80 <+0x1ce>
08220d55 +0x01a3:  movl   $0x4,(%esp)
08220d5c +0x01aa:  call   08725800 <__cxa_allocate_exception>
08220d61 +0x01af:  mov    %eax,%edx
08220d63 +0x01b1:  mov    -0x28(%ebp),%ecx
08220d66 +0x01b4:  mov    %ecx,(%edx)
08220d68 +0x01b6:  movl   $0x0,0x8(%esp)
08220d70 +0x01be:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220d78 +0x01c6:  mov    %eax,(%esp)
08220d7b +0x01c9:  call   08724c50 <__cxa_throw>
08220d80 +0x01ce:  cmpl   $0x0,-0x38(%ebp)
08220d84 +0x01d2:  je     08220d8c <+0x1da>
08220d86 +0x01d4:  cmpl   $0x0,-0x34(%ebp)
08220d8a +0x01d8:  jne    08220db8 <+0x206>
08220d8c +0x01da:  movl   $0x4,(%esp)
08220d93 +0x01e1:  call   08725800 <__cxa_allocate_exception>
08220d98 +0x01e6:  mov    %eax,%edx
08220d9a +0x01e8:  movl   $0x11,(%edx)
08220da0 +0x01ee:  movl   $0x0,0x8(%esp)
08220da8 +0x01f6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220db0 +0x01fe:  mov    %eax,(%esp)
08220db3 +0x0201:  call   08724c50 <__cxa_throw>
08220db8 +0x0206:  mov    -0x38(%ebp),%eax
08220dbb +0x0209:  mov    (%eax),%eax
08220dbd +0x020b:  add    $0xc,%eax
08220dc0 +0x020e:  mov    (%eax),%edx
08220dc2 +0x0210:  mov    -0x38(%ebp),%eax
08220dc5 +0x0213:  mov    %eax,(%esp)
08220dc8 +0x0216:  call   *%edx
08220dca +0x0218:  cmp    $0x14,%eax
08220dcd +0x021b:  jne    08220de6 <+0x234>
08220dcf +0x021d:  mov    -0x34(%ebp),%eax
08220dd2 +0x0220:  mov    (%eax),%eax
08220dd4 +0x0222:  add    $0xc,%eax
08220dd7 +0x0225:  mov    (%eax),%edx
08220dd9 +0x0227:  mov    -0x34(%ebp),%eax
08220ddc +0x022a:  mov    %eax,(%esp)
08220ddf +0x022d:  call   *%edx
08220de1 +0x022f:  cmp    $0x14,%eax
08220de4 +0x0232:  je     08220ded <+0x23b>
08220de6 +0x0234:  mov    $0x1,%eax
08220deb +0x0239:  jmp    08220df2 <+0x240>
08220ded +0x023b:  mov    $0x0,%eax
08220df2 +0x0240:  test   %al,%al
08220df4 +0x0242:  je     08220e22 <+0x270>
08220df6 +0x0244:  movl   $0x4,(%esp)
08220dfd +0x024b:  call   08725800 <__cxa_allocate_exception>
08220e02 +0x0250:  mov    %eax,%edx
08220e04 +0x0252:  movl   $0x17,(%edx)
08220e0a +0x0258:  movl   $0x0,0x8(%esp)
08220e12 +0x0260:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220e1a +0x0268:  mov    %eax,(%esp)
08220e1d +0x026b:  call   08724c50 <__cxa_throw>
08220e22 +0x0270:  movzwl -0x62(%ebp),%eax
08220e26 +0x0274:  movzwl %ax,%ebx
08220e29 +0x0277:  mov    0xc(%ebp),%eax
08220e2c +0x027a:  mov    %eax,(%esp)
08220e2f +0x027d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08220e34 +0x0282:  lea    -0x198(%ebp),%edx
08220e3a +0x0288:  mov    %ebx,0xc(%esp)
08220e3e +0x028c:  movl   $0x1,0x8(%esp)
08220e46 +0x0294:  mov    %eax,0x4(%esp)
08220e4a +0x0298:  mov    %edx,(%esp)
08220e4d +0x029b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08220e52 +0x02a0:  sub    $0x4,%esp
08220e55 +0x02a3:  mov    -0x198(%ebp),%eax
08220e5b +0x02a9:  mov    %eax,-0xd9(%ebp)
08220e61 +0x02af:  mov    -0x194(%ebp),%eax
08220e67 +0x02b5:  mov    %eax,-0xd5(%ebp)
08220e6d +0x02bb:  mov    -0x190(%ebp),%eax
08220e73 +0x02c1:  mov    %eax,-0xd1(%ebp)
08220e79 +0x02c7:  mov    -0x18c(%ebp),%eax
08220e7f +0x02cd:  mov    %eax,-0xcd(%ebp)
08220e85 +0x02d3:  mov    -0x188(%ebp),%eax
08220e8b +0x02d9:  mov    %eax,-0xc9(%ebp)
08220e91 +0x02df:  mov    -0x184(%ebp),%eax
08220e97 +0x02e5:  mov    %eax,-0xc5(%ebp)
08220e9d +0x02eb:  mov    -0x180(%ebp),%eax
08220ea3 +0x02f1:  mov    %eax,-0xc1(%ebp)
08220ea9 +0x02f7:  mov    -0x17c(%ebp),%eax
08220eaf +0x02fd:  mov    %eax,-0xbd(%ebp)
08220eb5 +0x0303:  mov    -0x178(%ebp),%eax
08220ebb +0x0309:  mov    %eax,-0xb9(%ebp)
08220ec1 +0x030f:  mov    -0x174(%ebp),%eax
08220ec7 +0x0315:  mov    %eax,-0xb5(%ebp)
08220ecd +0x031b:  mov    -0x170(%ebp),%eax
08220ed3 +0x0321:  mov    %eax,-0xb1(%ebp)
08220ed9 +0x0327:  mov    -0x16c(%ebp),%eax
08220edf +0x032d:  mov    %eax,-0xad(%ebp)
08220ee5 +0x0333:  mov    -0x168(%ebp),%eax
08220eeb +0x0339:  mov    %eax,-0xa9(%ebp)
08220ef1 +0x033f:  mov    -0x164(%ebp),%eax
08220ef7 +0x0345:  mov    %eax,-0xa5(%ebp)
08220efd +0x034b:  mov    -0x160(%ebp),%eax
08220f03 +0x0351:  mov    %eax,-0xa1(%ebp)
08220f09 +0x0357:  movzbl -0x15c(%ebp),%eax
08220f10 +0x035e:  mov    %al,-0x9d(%ebp)
08220f16 +0x0364:  lea    -0xd9(%ebp),%eax
08220f1c +0x036a:  mov    %eax,(%esp)
08220f1f +0x036d:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08220f24 +0x0372:  test   %al,%al
08220f26 +0x0374:  je     08220f54 <+0x3a2>
08220f28 +0x0376:  movl   $0x4,(%esp)
08220f2f +0x037d:  call   08725800 <__cxa_allocate_exception>
08220f34 +0x0382:  mov    %eax,%edx
08220f36 +0x0384:  movl   $0x11,(%edx)
08220f3c +0x038a:  movl   $0x0,0x8(%esp)
08220f44 +0x0392:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220f4c +0x039a:  mov    %eax,(%esp)
08220f4f +0x039d:  call   08724c50 <__cxa_throw>
08220f54 +0x03a2:  mov    -0xd7(%ebp),%edx
08220f5a +0x03a8:  mov    -0x5c(%ebp),%eax
08220f5d +0x03ab:  cmp    %eax,%edx
08220f5f +0x03ad:  je     08220f8d <+0x3db>
08220f61 +0x03af:  movl   $0x4,(%esp)
08220f68 +0x03b6:  call   08725800 <__cxa_allocate_exception>
08220f6d +0x03bb:  mov    %eax,%edx
08220f6f +0x03bd:  movl   $0x11,(%edx)
08220f75 +0x03c3:  movl   $0x0,0x8(%esp)
08220f7d +0x03cb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220f85 +0x03d3:  mov    %eax,(%esp)
08220f88 +0x03d6:  call   08724c50 <__cxa_throw>
08220f8d +0x03db:  movzwl -0x64(%ebp),%eax
08220f91 +0x03df:  movzwl %ax,%ebx
08220f94 +0x03e2:  mov    0xc(%ebp),%eax
08220f97 +0x03e5:  mov    %eax,(%esp)
08220f9a +0x03e8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08220f9f +0x03ed:  lea    -0x198(%ebp),%edx
08220fa5 +0x03f3:  mov    %ebx,0xc(%esp)
08220fa9 +0x03f7:  movl   $0x1,0x8(%esp)
08220fb1 +0x03ff:  mov    %eax,0x4(%esp)
08220fb5 +0x0403:  mov    %edx,(%esp)
08220fb8 +0x0406:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08220fbd +0x040b:  sub    $0x4,%esp
08220fc0 +0x040e:  mov    -0x198(%ebp),%eax
08220fc6 +0x0414:  mov    %eax,-0x116(%ebp)
08220fcc +0x041a:  mov    -0x194(%ebp),%eax
08220fd2 +0x0420:  mov    %eax,-0x112(%ebp)
08220fd8 +0x0426:  mov    -0x190(%ebp),%eax
08220fde +0x042c:  mov    %eax,-0x10e(%ebp)
08220fe4 +0x0432:  mov    -0x18c(%ebp),%eax
08220fea +0x0438:  mov    %eax,-0x10a(%ebp)
08220ff0 +0x043e:  mov    -0x188(%ebp),%eax
08220ff6 +0x0444:  mov    %eax,-0x106(%ebp)
08220ffc +0x044a:  mov    -0x184(%ebp),%eax
08221002 +0x0450:  mov    %eax,-0x102(%ebp)
08221008 +0x0456:  mov    -0x180(%ebp),%eax
0822100e +0x045c:  mov    %eax,-0xfe(%ebp)
08221014 +0x0462:  mov    -0x17c(%ebp),%eax
0822101a +0x0468:  mov    %eax,-0xfa(%ebp)
08221020 +0x046e:  mov    -0x178(%ebp),%eax
08221026 +0x0474:  mov    %eax,-0xf6(%ebp)
0822102c +0x047a:  mov    -0x174(%ebp),%eax
08221032 +0x0480:  mov    %eax,-0xf2(%ebp)
08221038 +0x0486:  mov    -0x170(%ebp),%eax
0822103e +0x048c:  mov    %eax,-0xee(%ebp)
08221044 +0x0492:  mov    -0x16c(%ebp),%eax
0822104a +0x0498:  mov    %eax,-0xea(%ebp)
08221050 +0x049e:  mov    -0x168(%ebp),%eax
08221056 +0x04a4:  mov    %eax,-0xe6(%ebp)
0822105c +0x04aa:  mov    -0x164(%ebp),%eax
08221062 +0x04b0:  mov    %eax,-0xe2(%ebp)
08221068 +0x04b6:  mov    -0x160(%ebp),%eax
0822106e +0x04bc:  mov    %eax,-0xde(%ebp)
08221074 +0x04c2:  movzbl -0x15c(%ebp),%eax
0822107b +0x04c9:  mov    %al,-0xda(%ebp)
08221081 +0x04cf:  lea    -0x116(%ebp),%eax
08221087 +0x04d5:  mov    %eax,(%esp)
0822108a +0x04d8:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0822108f +0x04dd:  test   %al,%al
08221091 +0x04df:  je     082210bf <+0x50d>
08221093 +0x04e1:  movl   $0x4,(%esp)
0822109a +0x04e8:  call   08725800 <__cxa_allocate_exception>
0822109f +0x04ed:  mov    %eax,%edx
082210a1 +0x04ef:  movl   $0x11,(%edx)
082210a7 +0x04f5:  movl   $0x0,0x8(%esp)
082210af +0x04fd:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082210b7 +0x0505:  mov    %eax,(%esp)
082210ba +0x0508:  call   08724c50 <__cxa_throw>
082210bf +0x050d:  mov    -0x114(%ebp),%edx
082210c5 +0x0513:  mov    -0x60(%ebp),%eax
082210c8 +0x0516:  cmp    %eax,%edx
082210ca +0x0518:  je     082210f8 <+0x546>
082210cc +0x051a:  movl   $0x4,(%esp)
082210d3 +0x0521:  call   08725800 <__cxa_allocate_exception>
082210d8 +0x0526:  mov    %eax,%edx
082210da +0x0528:  movl   $0x11,(%edx)
082210e0 +0x052e:  movl   $0x0,0x8(%esp)
082210e8 +0x0536:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082210f0 +0x053e:  mov    %eax,(%esp)
082210f3 +0x0541:  call   08724c50 <__cxa_throw>
082210f8 +0x0546:  movzwl -0x62(%ebp),%edx
082210fc +0x054a:  movzwl -0x64(%ebp),%eax
08221100 +0x054e:  cmp    %ax,%dx
08221103 +0x0551:  jne    0822112f <+0x57d>
08221105 +0x0553:  mov    -0xd7(%ebp),%edx
0822110b +0x0559:  mov    -0x114(%ebp),%eax
08221111 +0x055f:  cmp    %eax,%edx
08221113 +0x0561:  jne    0822112f <+0x57d>
08221115 +0x0563:  lea    -0xd9(%ebp),%eax
0822111b +0x0569:  mov    %eax,(%esp)
0822111e +0x056c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08221123 +0x0571:  cmp    $0x1,%eax
08221126 +0x0574:  jg     0822112f <+0x57d>
08221128 +0x0576:  mov    $0x1,%eax
0822112d +0x057b:  jmp    08221134 <+0x582>
0822112f +0x057d:  mov    $0x0,%eax
08221134 +0x0582:  test   %al,%al
08221136 +0x0584:  je     08221164 <+0x5b2>
08221138 +0x0586:  movl   $0x4,(%esp)
0822113f +0x058d:  call   08725800 <__cxa_allocate_exception>
08221144 +0x0592:  mov    %eax,%edx
08221146 +0x0594:  movl   $0x11,(%edx)
0822114c +0x059a:  movl   $0x0,0x8(%esp)
08221154 +0x05a2:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0822115c +0x05aa:  mov    %eax,(%esp)
0822115f +0x05ad:  call   08724c50 <__cxa_throw>
08221164 +0x05b2:  movzwl -0x62(%ebp),%eax
08221168 +0x05b6:  movzwl %ax,%eax
0822116b +0x05b9:  mov    %eax,0x8(%esp)
0822116f +0x05bd:  movl   $0x1,0x4(%esp)
08221177 +0x05c5:  mov    0xc(%ebp),%eax
0822117a +0x05c8:  mov    %eax,(%esp)
0822117d +0x05cb:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08221182 +0x05d0:  test   %al,%al
08221184 +0x05d2:  je     082211b2 <+0x600>
08221186 +0x05d4:  movl   $0x4,(%esp)
0822118d +0x05db:  call   08725800 <__cxa_allocate_exception>
08221192 +0x05e0:  mov    %eax,%edx
08221194 +0x05e2:  movl   $0xd5,(%edx)
0822119a +0x05e8:  movl   $0x0,0x8(%esp)
082211a2 +0x05f0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082211aa +0x05f8:  mov    %eax,(%esp)
082211ad +0x05fb:  call   08724c50 <__cxa_throw>
082211b2 +0x0600:  movzwl -0x64(%ebp),%eax
082211b6 +0x0604:  movzwl %ax,%eax
082211b9 +0x0607:  mov    %eax,0x8(%esp)
082211bd +0x060b:  movl   $0x1,0x4(%esp)
082211c5 +0x0613:  mov    0xc(%ebp),%eax
082211c8 +0x0616:  mov    %eax,(%esp)
082211cb +0x0619:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
082211d0 +0x061e:  test   %al,%al
082211d2 +0x0620:  je     08221200 <+0x64e>
082211d4 +0x0622:  movl   $0x4,(%esp)
082211db +0x0629:  call   08725800 <__cxa_allocate_exception>
082211e0 +0x062e:  mov    %eax,%edx
082211e2 +0x0630:  movl   $0xd5,(%edx)
082211e8 +0x0636:  movl   $0x0,0x8(%esp)
082211f0 +0x063e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082211f8 +0x0646:  mov    %eax,(%esp)
082211fb +0x0649:  call   08724c50 <__cxa_throw>
08221200 +0x064e:  mov    -0x38(%ebp),%eax
08221203 +0x0651:  mov    %eax,(%esp)
08221206 +0x0654:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0822120b +0x0659:  mov    %eax,%ebx
0822120d +0x065b:  mov    -0x34(%ebp),%eax
08221210 +0x065e:  mov    %eax,(%esp)
08221213 +0x0661:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221218 +0x0666:  cmp    %eax,%ebx
0822121a +0x0668:  setne  %al
0822121d +0x066b:  test   %al,%al
0822121f +0x066d:  je     0822124d <+0x69b>
08221221 +0x066f:  movl   $0x4,(%esp)
08221228 +0x0676:  call   08725800 <__cxa_allocate_exception>
0822122d +0x067b:  mov    %eax,%edx
0822122f +0x067d:  movl   $0xd8,(%edx)
08221235 +0x0683:  movl   $0x0,0x8(%esp)
0822123d +0x068b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08221245 +0x0693:  mov    %eax,(%esp)
08221248 +0x0696:  call   08724c50 <__cxa_throw>
0822124d +0x069b:  mov    -0x38(%ebp),%eax
08221250 +0x069e:  mov    %eax,(%esp)
08221253 +0x06a1:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221258 +0x06a6:  test   %eax,%eax
0822125a +0x06a8:  js     0822126c <+0x6ba>
0822125c +0x06aa:  mov    -0x38(%ebp),%eax
0822125f +0x06ad:  mov    %eax,(%esp)
08221262 +0x06b0:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221267 +0x06b5:  cmp    $0x6,%eax
0822126a +0x06b8:  jle    08221273 <+0x6c1>
0822126c +0x06ba:  mov    $0x1,%eax
08221271 +0x06bf:  jmp    08221278 <+0x6c6>
08221273 +0x06c1:  mov    $0x0,%eax
08221278 +0x06c6:  test   %al,%al
0822127a +0x06c8:  je     082212a8 <+0x6f6>
0822127c +0x06ca:  movl   $0x4,(%esp)
08221283 +0x06d1:  call   08725800 <__cxa_allocate_exception>
08221288 +0x06d6:  mov    %eax,%edx
0822128a +0x06d8:  movl   $0x11,(%edx)
08221290 +0x06de:  movl   $0x0,0x8(%esp)
08221298 +0x06e6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082212a0 +0x06ee:  mov    %eax,(%esp)
082212a3 +0x06f1:  call   08724c50 <__cxa_throw>
082212a8 +0x06f6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082212ad +0x06fb:  mov    %eax,%ebx
082212af +0x06fd:  mov    -0x38(%ebp),%eax
082212b2 +0x0700:  mov    %eax,(%esp)
082212b5 +0x0703:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
082212ba +0x0708:  mov    %eax,%edx
082212bc +0x070a:  mov    %edx,%eax
082212be +0x070c:  add    %eax,%eax
082212c0 +0x070e:  add    %edx,%eax
082212c2 +0x0710:  shl    $0x3,%eax
082212c5 +0x0713:  lea    (%ebx,%eax,1),%eax
082212c8 +0x0716:  add    $0x828,%eax
082212cd +0x071b:  mov    (%eax),%eax
082212cf +0x071d:  cmp    $0xffffffff,%eax
082212d2 +0x0720:  sete   %al
082212d5 +0x0723:  test   %al,%al
082212d7 +0x0725:  je     08221305 <+0x753>
082212d9 +0x0727:  movl   $0x4,(%esp)
082212e0 +0x072e:  call   08725800 <__cxa_allocate_exception>
082212e5 +0x0733:  mov    %eax,%edx
082212e7 +0x0735:  movl   $0x7,(%edx)
082212ed +0x073b:  movl   $0x0,0x8(%esp)
082212f5 +0x0743:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082212fd +0x074b:  mov    %eax,(%esp)
08221300 +0x074e:  call   08724c50 <__cxa_throw>
08221305 +0x0753:  mov    -0x34(%ebp),%eax
08221308 +0x0756:  mov    %eax,(%esp)
0822130b +0x0759:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221310 +0x075e:  test   %eax,%eax
08221312 +0x0760:  js     08221324 <+0x772>
08221314 +0x0762:  mov    -0x34(%ebp),%eax
08221317 +0x0765:  mov    %eax,(%esp)
0822131a +0x0768:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0822131f +0x076d:  cmp    $0x6,%eax
08221322 +0x0770:  jle    0822132b <+0x779>
08221324 +0x0772:  mov    $0x1,%eax
08221329 +0x0777:  jmp    08221330 <+0x77e>
0822132b +0x0779:  mov    $0x0,%eax
08221330 +0x077e:  test   %al,%al
08221332 +0x0780:  je     08221360 <+0x7ae>
08221334 +0x0782:  movl   $0x4,(%esp)
0822133b +0x0789:  call   08725800 <__cxa_allocate_exception>
08221340 +0x078e:  mov    %eax,%edx
08221342 +0x0790:  movl   $0x11,(%edx)
08221348 +0x0796:  movl   $0x0,0x8(%esp)
08221350 +0x079e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08221358 +0x07a6:  mov    %eax,(%esp)
0822135b +0x07a9:  call   08724c50 <__cxa_throw>
08221360 +0x07ae:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08221365 +0x07b3:  mov    %eax,%ebx
08221367 +0x07b5:  mov    -0x34(%ebp),%eax
0822136a +0x07b8:  mov    %eax,(%esp)
0822136d +0x07bb:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221372 +0x07c0:  mov    %eax,%edx
08221374 +0x07c2:  mov    %edx,%eax
08221376 +0x07c4:  add    %eax,%eax
08221378 +0x07c6:  add    %edx,%eax
0822137a +0x07c8:  shl    $0x3,%eax
0822137d +0x07cb:  lea    (%ebx,%eax,1),%eax
08221380 +0x07ce:  add    $0x828,%eax
08221385 +0x07d3:  mov    (%eax),%eax
08221387 +0x07d5:  cmp    $0xffffffff,%eax
0822138a +0x07d8:  sete   %al
0822138d +0x07db:  test   %al,%al
0822138f +0x07dd:  je     082213bd <+0x80b>
08221391 +0x07df:  movl   $0x4,(%esp)
08221398 +0x07e6:  call   08725800 <__cxa_allocate_exception>
0822139d +0x07eb:  mov    %eax,%edx
0822139f +0x07ed:  movl   $0x7,(%edx)
082213a5 +0x07f3:  movl   $0x0,0x8(%esp)
082213ad +0x07fb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082213b5 +0x0803:  mov    %eax,(%esp)
082213b8 +0x0806:  call   08724c50 <__cxa_throw>
082213bd +0x080b:  movl   $0x2,-0x24(%ebp)
082213c4 +0x0812:  mov    -0x38(%ebp),%eax
082213c7 +0x0815:  mov    %eax,(%esp)
082213ca +0x0818:  call   0822ca28 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20d2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20d2
082213cf +0x081d:  mov    %ax,-0x8c(%ebp)
082213d6 +0x0824:  mov    -0x34(%ebp),%eax
082213d9 +0x0827:  mov    %eax,(%esp)
082213dc +0x082a:  call   0822ca28 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20d2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20d2
082213e1 +0x082f:  mov    %ax,-0x8a(%ebp)
082213e8 +0x0836:  lea    -0x8c(%ebp),%eax
082213ee +0x083c:  mov    %eax,0x8(%esp)
082213f2 +0x0840:  movl   $0x2,0x4(%esp)
082213fa +0x0848:  mov    0x8(%ebp),%eax
082213fd +0x084b:  mov    %eax,(%esp)
08221400 +0x084e:  call   08220a60 <_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt>  ; Dispatcher_CompoundEmblem::_selectJewelTypeIndex(unsigned int, unsigned short const*) const
08221405 +0x0853:  mov    %eax,-0x30(%ebp)
08221408 +0x0856:  cmpl   $0xffffffff,-0x30(%ebp)
0822140c +0x085a:  sete   %al
0822140f +0x085d:  test   %al,%al
08221411 +0x085f:  je     0822143f <+0x88d>
08221413 +0x0861:  movl   $0x4,(%esp)
0822141a +0x0868:  call   08725800 <__cxa_allocate_exception>
0822141f +0x086d:  mov    %eax,%edx
08221421 +0x086f:  movl   $0x17,(%edx)
08221427 +0x0875:  movl   $0x0,0x8(%esp)
0822142f +0x087d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08221437 +0x0885:  mov    %eax,(%esp)
0822143a +0x0888:  call   08724c50 <__cxa_throw>
0822143f +0x088d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08221444 +0x0892:  mov    %eax,%ebx
08221446 +0x0894:  mov    -0x38(%ebp),%eax
08221449 +0x0897:  mov    %eax,(%esp)
0822144c +0x089a:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221451 +0x089f:  mov    %eax,%edx
08221453 +0x08a1:  mov    -0x30(%ebp),%ecx
08221456 +0x08a4:  mov    %edx,%eax
08221458 +0x08a6:  add    %eax,%eax
0822145a +0x08a8:  add    %edx,%eax
0822145c +0x08aa:  add    %eax,%eax
0822145e +0x08ac:  add    %ecx,%eax
08221460 +0x08ae:  add    $0x208,%eax
08221465 +0x08b3:  mov    0xc(%ebx,%eax,4),%eax
08221469 +0x08b7:  mov    %eax,-0x20(%ebp)
0822146c +0x08ba:  mov    -0x20(%ebp),%ebx
0822146f +0x08bd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08221474 +0x08c2:  mov    %ebx,0x4(%esp)
08221478 +0x08c6:  mov    %eax,(%esp)
0822147b +0x08c9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08221480 +0x08ce:  mov    %eax,-0x2c(%ebp)
08221483 +0x08d1:  cmpl   $0x0,-0x2c(%ebp)
08221487 +0x08d5:  je     082214a0 <+0x8ee>
08221489 +0x08d7:  mov    -0x2c(%ebp),%eax
0822148c +0x08da:  mov    (%eax),%eax
0822148e +0x08dc:  add    $0xc,%eax
08221491 +0x08df:  mov    (%eax),%edx
08221493 +0x08e1:  mov    -0x2c(%ebp),%eax
08221496 +0x08e4:  mov    %eax,(%esp)
08221499 +0x08e7:  call   *%edx
0822149b +0x08e9:  cmp    $0x10,%eax
0822149e +0x08ec:  je     082214a7 <+0x8f5>
082214a0 +0x08ee:  mov    $0x1,%eax
082214a5 +0x08f3:  jmp    082214ac <+0x8fa>
082214a7 +0x08f5:  mov    $0x0,%eax
082214ac +0x08fa:  test   %al,%al
082214ae +0x08fc:  je     082214dc <+0x92a>
082214b0 +0x08fe:  movl   $0x4,(%esp)
082214b7 +0x0905:  call   08725800 <__cxa_allocate_exception>
082214bc +0x090a:  mov    %eax,%edx
082214be +0x090c:  movl   $0x16,(%edx)
082214c4 +0x0912:  movl   $0x0,0x8(%esp)
082214cc +0x091a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082214d4 +0x0922:  mov    %eax,(%esp)
082214d7 +0x0925:  call   08724c50 <__cxa_throw>
082214dc +0x092a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082214e1 +0x092f:  mov    %eax,%ebx
082214e3 +0x0931:  mov    -0x38(%ebp),%eax
082214e6 +0x0934:  mov    %eax,(%esp)
082214e9 +0x0937:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
082214ee +0x093c:  mov    %eax,%edx
082214f0 +0x093e:  mov    %edx,%eax
082214f2 +0x0940:  add    %eax,%eax
082214f4 +0x0942:  add    %edx,%eax
082214f6 +0x0944:  shl    $0x3,%eax
082214f9 +0x0947:  lea    (%ebx,%eax,1),%eax
082214fc +0x094a:  add    $0x828,%eax
08221501 +0x094f:  mov    (%eax),%ebx
08221503 +0x0951:  mov    0xc(%ebp),%eax
08221506 +0x0954:  mov    %eax,(%esp)
08221509 +0x0957:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822150e +0x095c:  movl   $0x1,0xc(%esp)
08221516 +0x0964:  movl   $0x23,0x8(%esp)
0822151e +0x096c:  mov    %ebx,0x4(%esp)
08221522 +0x0970:  mov    %eax,(%esp)
08221525 +0x0973:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0822152a +0x0978:  xor    $0x1,%eax
0822152d +0x097b:  test   %al,%al
0822152f +0x097d:  je     0822155d <+0x9ab>
08221531 +0x097f:  movl   $0x4,(%esp)
08221538 +0x0986:  call   08725800 <__cxa_allocate_exception>
0822153d +0x098b:  mov    %eax,%edx
0822153f +0x098d:  movl   $0xa,(%edx)
08221545 +0x0993:  movl   $0x0,0x8(%esp)
0822154d +0x099b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08221555 +0x09a3:  mov    %eax,(%esp)
08221558 +0x09a6:  call   08724c50 <__cxa_throw>
0822155d +0x09ab:  movzwl -0x62(%ebp),%eax
08221561 +0x09af:  movzwl %ax,%ebx
08221564 +0x09b2:  mov    0xc(%ebp),%eax
08221567 +0x09b5:  mov    %eax,(%esp)
0822156a +0x09b8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822156f +0x09bd:  movl   $0x1,0x14(%esp)
08221577 +0x09c5:  movl   $0x8,0x10(%esp)
0822157f +0x09cd:  movl   $0x1,0xc(%esp)
08221587 +0x09d5:  mov    %ebx,0x8(%esp)
0822158b +0x09d9:  movl   $0x1,0x4(%esp)
08221593 +0x09e1:  mov    %eax,(%esp)
08221596 +0x09e4:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0822159b +0x09e9:  xor    $0x1,%eax
0822159e +0x09ec:  test   %al,%al
082215a0 +0x09ee:  je     082215ce <+0xa1c>
082215a2 +0x09f0:  movl   $0x4,(%esp)
082215a9 +0x09f7:  call   08725800 <__cxa_allocate_exception>
082215ae +0x09fc:  mov    %eax,%edx
082215b0 +0x09fe:  movl   $0x1,(%edx)
082215b6 +0x0a04:  movl   $0x0,0x8(%esp)
082215be +0x0a0c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082215c6 +0x0a14:  mov    %eax,(%esp)
082215c9 +0x0a17:  call   08724c50 <__cxa_throw>
082215ce +0x0a1c:  movzwl -0x64(%ebp),%eax
082215d2 +0x0a20:  movzwl %ax,%ebx
082215d5 +0x0a23:  mov    0xc(%ebp),%eax
082215d8 +0x0a26:  mov    %eax,(%esp)
082215db +0x0a29:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082215e0 +0x0a2e:  movl   $0x1,0x14(%esp)
082215e8 +0x0a36:  movl   $0x8,0x10(%esp)
082215f0 +0x0a3e:  movl   $0x1,0xc(%esp)
082215f8 +0x0a46:  mov    %ebx,0x8(%esp)
082215fc +0x0a4a:  movl   $0x1,0x4(%esp)
08221604 +0x0a52:  mov    %eax,(%esp)
08221607 +0x0a55:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0822160c +0x0a5a:  xor    $0x1,%eax
0822160f +0x0a5d:  test   %al,%al
08221611 +0x0a5f:  je     0822163f <+0xa8d>
08221613 +0x0a61:  movl   $0x4,(%esp)
0822161a +0x0a68:  call   08725800 <__cxa_allocate_exception>
0822161f +0x0a6d:  mov    %eax,%edx
08221621 +0x0a6f:  movl   $0x1,(%edx)
08221627 +0x0a75:  movl   $0x0,0x8(%esp)
0822162f +0x0a7d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08221637 +0x0a85:  mov    %eax,(%esp)
0822163a +0x0a88:  call   08724c50 <__cxa_throw>
0822163f +0x0a8d:  movzwl -0x62(%ebp),%eax
08221643 +0x0a91:  movzwl %ax,%ebx
08221646 +0x0a94:  mov    0xc(%ebp),%eax
08221649 +0x0a97:  mov    %eax,(%esp)
0822164c +0x0a9a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08221651 +0x0a9f:  lea    -0x198(%ebp),%edx
08221657 +0x0aa5:  mov    %ebx,0xc(%esp)
0822165b +0x0aa9:  movl   $0x1,0x8(%esp)
08221663 +0x0ab1:  mov    %eax,0x4(%esp)
08221667 +0x0ab5:  mov    %edx,(%esp)
0822166a +0x0ab8:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822166f +0x0abd:  sub    $0x4,%esp
08221672 +0x0ac0:  mov    -0x198(%ebp),%eax
08221678 +0x0ac6:  mov    %eax,-0xd9(%ebp)
0822167e +0x0acc:  mov    -0x194(%ebp),%eax
08221684 +0x0ad2:  mov    %eax,-0xd5(%ebp)
0822168a +0x0ad8:  mov    -0x190(%ebp),%eax
08221690 +0x0ade:  mov    %eax,-0xd1(%ebp)
08221696 +0x0ae4:  mov    -0x18c(%ebp),%eax
0822169c +0x0aea:  mov    %eax,-0xcd(%ebp)
082216a2 +0x0af0:  mov    -0x188(%ebp),%eax
082216a8 +0x0af6:  mov    %eax,-0xc9(%ebp)
082216ae +0x0afc:  mov    -0x184(%ebp),%eax
082216b4 +0x0b02:  mov    %eax,-0xc5(%ebp)
082216ba +0x0b08:  mov    -0x180(%ebp),%eax
082216c0 +0x0b0e:  mov    %eax,-0xc1(%ebp)
082216c6 +0x0b14:  mov    -0x17c(%ebp),%eax
082216cc +0x0b1a:  mov    %eax,-0xbd(%ebp)
082216d2 +0x0b20:  mov    -0x178(%ebp),%eax
082216d8 +0x0b26:  mov    %eax,-0xb9(%ebp)
082216de +0x0b2c:  mov    -0x174(%ebp),%eax
082216e4 +0x0b32:  mov    %eax,-0xb5(%ebp)
082216ea +0x0b38:  mov    -0x170(%ebp),%eax
082216f0 +0x0b3e:  mov    %eax,-0xb1(%ebp)
082216f6 +0x0b44:  mov    -0x16c(%ebp),%eax
082216fc +0x0b4a:  mov    %eax,-0xad(%ebp)
08221702 +0x0b50:  mov    -0x168(%ebp),%eax
08221708 +0x0b56:  mov    %eax,-0xa9(%ebp)
0822170e +0x0b5c:  mov    -0x164(%ebp),%eax
08221714 +0x0b62:  mov    %eax,-0xa5(%ebp)
0822171a +0x0b68:  mov    -0x160(%ebp),%eax
08221720 +0x0b6e:  mov    %eax,-0xa1(%ebp)
08221726 +0x0b74:  movzbl -0x15c(%ebp),%eax
0822172d +0x0b7b:  mov    %al,-0x9d(%ebp)
08221733 +0x0b81:  movzwl -0x64(%ebp),%eax
08221737 +0x0b85:  movzwl %ax,%ebx
0822173a +0x0b88:  mov    0xc(%ebp),%eax
0822173d +0x0b8b:  mov    %eax,(%esp)
08221740 +0x0b8e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08221745 +0x0b93:  lea    -0x198(%ebp),%edx
0822174b +0x0b99:  mov    %ebx,0xc(%esp)
0822174f +0x0b9d:  movl   $0x1,0x8(%esp)
08221757 +0x0ba5:  mov    %eax,0x4(%esp)
0822175b +0x0ba9:  mov    %edx,(%esp)
0822175e +0x0bac:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08221763 +0x0bb1:  sub    $0x4,%esp
08221766 +0x0bb4:  mov    -0x198(%ebp),%eax
0822176c +0x0bba:  mov    %eax,-0x116(%ebp)
08221772 +0x0bc0:  mov    -0x194(%ebp),%eax
08221778 +0x0bc6:  mov    %eax,-0x112(%ebp)
0822177e +0x0bcc:  mov    -0x190(%ebp),%eax
08221784 +0x0bd2:  mov    %eax,-0x10e(%ebp)
0822178a +0x0bd8:  mov    -0x18c(%ebp),%eax
08221790 +0x0bde:  mov    %eax,-0x10a(%ebp)
08221796 +0x0be4:  mov    -0x188(%ebp),%eax
0822179c +0x0bea:  mov    %eax,-0x106(%ebp)
082217a2 +0x0bf0:  mov    -0x184(%ebp),%eax
082217a8 +0x0bf6:  mov    %eax,-0x102(%ebp)
082217ae +0x0bfc:  mov    -0x180(%ebp),%eax
082217b4 +0x0c02:  mov    %eax,-0xfe(%ebp)
082217ba +0x0c08:  mov    -0x17c(%ebp),%eax
082217c0 +0x0c0e:  mov    %eax,-0xfa(%ebp)
082217c6 +0x0c14:  mov    -0x178(%ebp),%eax
082217cc +0x0c1a:  mov    %eax,-0xf6(%ebp)
082217d2 +0x0c20:  mov    -0x174(%ebp),%eax
082217d8 +0x0c26:  mov    %eax,-0xf2(%ebp)
082217de +0x0c2c:  mov    -0x170(%ebp),%eax
082217e4 +0x0c32:  mov    %eax,-0xee(%ebp)
082217ea +0x0c38:  mov    -0x16c(%ebp),%eax
082217f0 +0x0c3e:  mov    %eax,-0xea(%ebp)
082217f6 +0x0c44:  mov    -0x168(%ebp),%eax
082217fc +0x0c4a:  mov    %eax,-0xe6(%ebp)
08221802 +0x0c50:  mov    -0x164(%ebp),%eax
08221808 +0x0c56:  mov    %eax,-0xe2(%ebp)
0822180e +0x0c5c:  mov    -0x160(%ebp),%eax
08221814 +0x0c62:  mov    %eax,-0xde(%ebp)
0822181a +0x0c68:  movzbl -0x15c(%ebp),%eax
08221821 +0x0c6f:  mov    %al,-0xda(%ebp)
08221827 +0x0c75:  lea    -0x70(%ebp),%eax
0822182a +0x0c78:  mov    %eax,(%esp)
0822182d +0x0c7b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08221832 +0x0c80:  movl   $0x104,0x8(%esp)
0822183a +0x0c88:  movl   $0x1,0x4(%esp)
08221842 +0x0c90:  lea    -0x70(%ebp),%eax
08221845 +0x0c93:  mov    %eax,(%esp)
08221848 +0x0c96:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822184d +0x0c9b:  jmp    082218aa <+0xcf8>
0822184f +0x0c9d:  cmp    $0x1,%edx
08221852 +0x0ca0:  je     0822185c <+0xcaa>
08221854 +0x0ca2:  mov    %eax,(%esp)
08221857 +0x0ca5:  call   08ae3750 <_Unwind_Resume>
0822185c +0x0caa:  mov    %eax,(%esp)
0822185f +0x0cad:  call   08725ce0 <__cxa_begin_catch>
08221864 +0x0cb2:  mov    (%eax),%eax
08221866 +0x0cb4:  mov    %eax,-0x1c(%ebp)
08221869 +0x0cb7:  mov    -0x1c(%ebp),%eax
0822186c +0x0cba:  movzbl %al,%eax
0822186f +0x0cbd:  mov    %eax,0x8(%esp)
08221873 +0x0cc1:  movl   $0x104,0x4(%esp)
0822187b +0x0cc9:  mov    0xc(%ebp),%eax
0822187e +0x0ccc:  mov    %eax,(%esp)
08221881 +0x0ccf:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08221886 +0x0cd4:  mov    $0x0,%ebx
0822188b +0x0cd9:  call   08725c30 <__cxa_end_catch>
08221890 +0x0cde:  jmp    08221dd2 <+0x1220>
08221895 +0x0ce3:  mov    %edx,%ebx
08221897 +0x0ce5:  mov    %eax,%esi
08221899 +0x0ce7:  call   08725c30 <__cxa_end_catch>
0822189e +0x0cec:  mov    %esi,%eax
082218a0 +0x0cee:  mov    %ebx,%edx
082218a2 +0x0cf0:  mov    %eax,(%esp)
082218a5 +0x0cf3:  call   08ae3750 <_Unwind_Resume>
082218aa +0x0cf8:  movl   $0x1,0x4(%esp)
082218b2 +0x0d00:  lea    -0x70(%ebp),%eax
082218b5 +0x0d03:  mov    %eax,(%esp)
082218b8 +0x0d06:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082218bd +0x0d0b:  lea    -0x7c(%ebp),%eax
082218c0 +0x0d0e:  mov    %eax,(%esp)
082218c3 +0x0d11:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
082218c8 +0x0d16:  mov    -0x2c(%ebp),%eax
082218cb +0x0d19:  lea    -0x7c(%ebp),%edx
082218ce +0x0d1c:  mov    %edx,0x4(%esp)
082218d2 +0x0d20:  mov    %eax,(%esp)
082218d5 +0x0d23:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
082218da +0x0d28:  lea    -0x7c(%ebp),%eax
082218dd +0x0d2b:  mov    %eax,(%esp)
082218e0 +0x0d2e:  call   08237a6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd114>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd114
082218e5 +0x0d33:  mov    %eax,0x4(%esp)
082218e9 +0x0d37:  lea    -0x70(%ebp),%eax
082218ec +0x0d3a:  mov    %eax,(%esp)
082218ef +0x0d3d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082218f4 +0x0d42:  lea    -0x58(%ebp),%eax
082218f7 +0x0d45:  lea    -0x7c(%ebp),%edx
082218fa +0x0d48:  mov    %edx,0x4(%esp)
082218fe +0x0d4c:  mov    %eax,(%esp)
08221901 +0x0d4f:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
08221906 +0x0d54:  sub    $0x4,%esp
08221909 +0x0d57:  lea    -0x58(%ebp),%eax
0822190c +0x0d5a:  mov    %eax,0x4(%esp)
08221910 +0x0d5e:  lea    -0x90(%ebp),%eax
08221916 +0x0d64:  mov    %eax,(%esp)
08221919 +0x0d67:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
0822191e +0x0d6c:  lea    -0x54(%ebp),%eax
08221921 +0x0d6f:  lea    -0x7c(%ebp),%edx
08221924 +0x0d72:  mov    %edx,0x4(%esp)
08221928 +0x0d76:  mov    %eax,(%esp)
0822192b +0x0d79:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
08221930 +0x0d7e:  sub    $0x4,%esp
08221933 +0x0d81:  lea    -0x54(%ebp),%eax
08221936 +0x0d84:  mov    %eax,0x4(%esp)
0822193a +0x0d88:  lea    -0x94(%ebp),%eax
08221940 +0x0d8e:  mov    %eax,(%esp)
08221943 +0x0d91:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
08221948 +0x0d96:  jmp    0822199b <+0xde9>
0822194a +0x0d98:  lea    -0x90(%ebp),%eax
08221950 +0x0d9e:  mov    %eax,(%esp)
08221953 +0x0da1:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221958 +0x0da6:  mov    (%eax),%eax
0822195a +0x0da8:  mov    %eax,0x4(%esp)
0822195e +0x0dac:  lea    -0x70(%ebp),%eax
08221961 +0x0daf:  mov    %eax,(%esp)
08221964 +0x0db2:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
08221969 +0x0db7:  lea    -0x90(%ebp),%eax
0822196f +0x0dbd:  mov    %eax,(%esp)
08221972 +0x0dc0:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221977 +0x0dc5:  movzwl 0x8(%eax),%eax
0822197b +0x0dc9:  movzwl %ax,%eax
0822197e +0x0dcc:  mov    %eax,0x4(%esp)
08221982 +0x0dd0:  lea    -0x70(%ebp),%eax
08221985 +0x0dd3:  mov    %eax,(%esp)
08221988 +0x0dd6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0822198d +0x0ddb:  lea    -0x90(%ebp),%eax
08221993 +0x0de1:  mov    %eax,(%esp)
08221996 +0x0de4:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
0822199b +0x0de9:  lea    -0x94(%ebp),%eax
082219a1 +0x0def:  mov    %eax,0x4(%esp)
082219a5 +0x0df3:  lea    -0x90(%ebp),%eax
082219ab +0x0df9:  mov    %eax,(%esp)
082219ae +0x0dfc:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
082219b3 +0x0e01:  test   %al,%al
082219b5 +0x0e03:  jne    0822194a <+0xd98>
082219b7 +0x0e05:  movl   $0x1,0x4(%esp)
082219bf +0x0e0d:  lea    -0x70(%ebp),%eax
082219c2 +0x0e10:  mov    %eax,(%esp)
082219c5 +0x0e13:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082219ca +0x0e18:  lea    -0x70(%ebp),%eax
082219cd +0x0e1b:  mov    %eax,0x4(%esp)
082219d1 +0x0e1f:  mov    0xc(%ebp),%eax
082219d4 +0x0e22:  mov    %eax,(%esp)
082219d7 +0x0e25:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082219dc +0x0e2a:  lea    -0x88(%ebp),%eax
082219e2 +0x0e30:  mov    %eax,(%esp)
082219e5 +0x0e33:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
082219ea +0x0e38:  lea    -0x50(%ebp),%eax
082219ed +0x0e3b:  lea    -0x7c(%ebp),%edx
082219f0 +0x0e3e:  mov    %edx,0x4(%esp)
082219f4 +0x0e42:  mov    %eax,(%esp)
082219f7 +0x0e45:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
082219fc +0x0e4a:  sub    $0x4,%esp
082219ff +0x0e4d:  lea    -0x50(%ebp),%eax
08221a02 +0x0e50:  mov    %eax,0x4(%esp)
08221a06 +0x0e54:  lea    -0x98(%ebp),%eax
08221a0c +0x0e5a:  mov    %eax,(%esp)
08221a0f +0x0e5d:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
08221a14 +0x0e62:  lea    -0x4c(%ebp),%eax
08221a17 +0x0e65:  lea    -0x7c(%ebp),%edx
08221a1a +0x0e68:  mov    %edx,0x4(%esp)
08221a1e +0x0e6c:  mov    %eax,(%esp)
08221a21 +0x0e6f:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
08221a26 +0x0e74:  sub    $0x4,%esp
08221a29 +0x0e77:  lea    -0x4c(%ebp),%eax
08221a2c +0x0e7a:  mov    %eax,0x4(%esp)
08221a30 +0x0e7e:  lea    -0x9c(%ebp),%eax
08221a36 +0x0e84:  mov    %eax,(%esp)
08221a39 +0x0e87:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
08221a3e +0x0e8c:  jmp    08221d0a <+0x1158>
08221a43 +0x0e91:  lea    -0x98(%ebp),%eax
08221a49 +0x0e97:  mov    %eax,(%esp)
08221a4c +0x0e9a:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221a51 +0x0e9f:  mov    (%eax),%eax
08221a53 +0x0ea1:  mov    %eax,%ebx
08221a55 +0x0ea3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08221a5a +0x0ea8:  mov    %ebx,0x4(%esp)
08221a5e +0x0eac:  mov    %eax,(%esp)
08221a61 +0x0eaf:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08221a66 +0x0eb4:  mov    %eax,-0x18(%ebp)
08221a69 +0x0eb7:  cmpl   $0x0,-0x18(%ebp)
08221a6d +0x0ebb:  je     08221cfb <+0x1149>
08221a73 +0x0ec1:  lea    -0x153(%ebp),%eax
08221a79 +0x0ec7:  mov    %eax,(%esp)
08221a7c +0x0eca:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08221a81 +0x0ecf:  lea    -0x98(%ebp),%eax
08221a87 +0x0ed5:  mov    %eax,(%esp)
08221a8a +0x0ed8:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221a8f +0x0edd:  mov    (%eax),%eax
08221a91 +0x0edf:  mov    %eax,-0x151(%ebp)
08221a97 +0x0ee5:  mov    -0x18(%ebp),%eax
08221a9a +0x0ee8:  mov    (%eax),%eax
08221a9c +0x0eea:  add    $0x8,%eax
08221a9f +0x0eed:  mov    (%eax),%edx
08221aa1 +0x0eef:  lea    -0x153(%ebp),%eax
08221aa7 +0x0ef5:  mov    %eax,0x4(%esp)
08221aab +0x0ef9:  mov    -0x18(%ebp),%eax
08221aae +0x0efc:  mov    %eax,(%esp)
08221ab1 +0x0eff:  call   *%edx
08221ab3 +0x0f01:  lea    -0x98(%ebp),%eax
08221ab9 +0x0f07:  mov    %eax,(%esp)
08221abc +0x0f0a:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221ac1 +0x0f0f:  movzwl 0x8(%eax),%eax
08221ac5 +0x0f13:  movzwl %ax,%eax
08221ac8 +0x0f16:  mov    %eax,0x4(%esp)
08221acc +0x0f1a:  lea    -0x153(%ebp),%eax
08221ad2 +0x0f20:  mov    %eax,(%esp)
08221ad5 +0x0f23:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08221ada +0x0f28:  mov    0xc(%ebp),%eax
08221add +0x0f2b:  mov    %eax,(%esp)
08221ae0 +0x0f2e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08221ae5 +0x0f33:  movl   $0x1,0x4c(%esp)
08221aed +0x0f3b:  movl   $0x1,0x48(%esp)
08221af5 +0x0f43:  movl   $0x9,0x44(%esp)
08221afd +0x0f4b:  mov    -0x153(%ebp),%edx
08221b03 +0x0f51:  mov    %edx,0x4(%esp)
08221b07 +0x0f55:  mov    -0x14f(%ebp),%edx
08221b0d +0x0f5b:  mov    %edx,0x8(%esp)
08221b11 +0x0f5f:  mov    -0x14b(%ebp),%edx
08221b17 +0x0f65:  mov    %edx,0xc(%esp)
08221b1b +0x0f69:  mov    -0x147(%ebp),%edx
08221b21 +0x0f6f:  mov    %edx,0x10(%esp)
08221b25 +0x0f73:  mov    -0x143(%ebp),%edx
08221b2b +0x0f79:  mov    %edx,0x14(%esp)
08221b2f +0x0f7d:  mov    -0x13f(%ebp),%edx
08221b35 +0x0f83:  mov    %edx,0x18(%esp)
08221b39 +0x0f87:  mov    -0x13b(%ebp),%edx
08221b3f +0x0f8d:  mov    %edx,0x1c(%esp)
08221b43 +0x0f91:  mov    -0x137(%ebp),%edx
08221b49 +0x0f97:  mov    %edx,0x20(%esp)
08221b4d +0x0f9b:  mov    -0x133(%ebp),%edx
08221b53 +0x0fa1:  mov    %edx,0x24(%esp)
08221b57 +0x0fa5:  mov    -0x12f(%ebp),%edx
08221b5d +0x0fab:  mov    %edx,0x28(%esp)
08221b61 +0x0faf:  mov    -0x12b(%ebp),%edx
08221b67 +0x0fb5:  mov    %edx,0x2c(%esp)
08221b6b +0x0fb9:  mov    -0x127(%ebp),%edx
08221b71 +0x0fbf:  mov    %edx,0x30(%esp)
08221b75 +0x0fc3:  mov    -0x123(%ebp),%edx
08221b7b +0x0fc9:  mov    %edx,0x34(%esp)
08221b7f +0x0fcd:  mov    -0x11f(%ebp),%edx
08221b85 +0x0fd3:  mov    %edx,0x38(%esp)
08221b89 +0x0fd7:  mov    -0x11b(%ebp),%edx
08221b8f +0x0fdd:  mov    %edx,0x3c(%esp)
08221b93 +0x0fe1:  movzbl -0x117(%ebp),%edx
08221b9a +0x0fe8:  mov    %dl,0x40(%esp)
08221b9e +0x0fec:  mov    %eax,(%esp)
08221ba1 +0x0fef:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08221ba6 +0x0ff4:  mov    %ax,-0x12(%ebp)
08221baa +0x0ff8:  movzwl -0x12(%ebp),%eax
08221bae +0x0ffc:  not    %eax
08221bb0 +0x0ffe:  shr    $0xf,%ax
08221bb4 +0x1002:  test   %al,%al
08221bb6 +0x1004:  je     08221be0 <+0x102e>
08221bb8 +0x1006:  movswl -0x12(%ebp),%eax
08221bbc +0x100a:  mov    %eax,0xc(%esp)
08221bc0 +0x100e:  movl   $0x0,0x8(%esp)
08221bc8 +0x1016:  movl   $0x1,0x4(%esp)
08221bd0 +0x101e:  mov    0xc(%ebp),%eax
08221bd3 +0x1021:  mov    %eax,(%esp)
08221bd6 +0x1024:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08221bdb +0x1029:  jmp    08221c9b <+0x10e9>
08221be0 +0x102e:  movl   $0x0,0xc(%esp)
08221be8 +0x1036:  movl   $"game_server_msg_122",0x8(%esp)
08221bf0 +0x103e:  movl   $0x4,0x4(%esp)
08221bf8 +0x1046:  movl   $&g_scriptStringManager_,(%esp)
08221bff +0x104d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08221c04 +0x1052:  mov    %eax,-0x10(%ebp)
08221c07 +0x1055:  movl   $0x0,0xc(%esp)
08221c0f +0x105d:  movl   $"game_server_msg_123",0x8(%esp)
08221c17 +0x1065:  movl   $0x4,0x4(%esp)
08221c1f +0x106d:  movl   $&g_scriptStringManager_,(%esp)
08221c26 +0x1074:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08221c2b +0x1079:  mov    %eax,-0xc(%ebp)
08221c2e +0x107c:  mov    0xc(%ebp),%eax
08221c31 +0x107f:  mov    %eax,(%esp)
08221c34 +0x1082:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08221c39 +0x1087:  mov    %eax,%ebx
08221c3b +0x1089:  mov    -0xc(%ebp),%eax
08221c3e +0x108c:  mov    %eax,(%esp)
08221c41 +0x108f:  call   0807e3b0 <_init+0xca8>
08221c46 +0x1094:  mov    %eax,%esi
08221c48 +0x1096:  mov    0xc(%ebp),%eax
08221c4b +0x1099:  mov    %eax,(%esp)
08221c4e +0x109c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08221c53 +0x10a1:  movl   $0x0,0x24(%esp)
08221c5b +0x10a9:  movl   $0x0,0x20(%esp)
08221c63 +0x10b1:  mov    %ebx,0x1c(%esp)
08221c67 +0x10b5:  movl   $0x0,0x18(%esp)
08221c6f +0x10bd:  mov    %esi,0x14(%esp)
08221c73 +0x10c1:  mov    -0xc(%ebp),%edx
08221c76 +0x10c4:  mov    %edx,0x10(%esp)
08221c7a +0x10c8:  mov    %eax,0xc(%esp)
08221c7e +0x10cc:  movl   $0x0,0x8(%esp)
08221c86 +0x10d4:  lea    -0x153(%ebp),%eax
08221c8c +0x10da:  mov    %eax,0x4(%esp)
08221c90 +0x10de:  mov    -0x10(%ebp),%eax
08221c93 +0x10e1:  mov    %eax,(%esp)
08221c96 +0x10e4:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08221c9b +0x10e9:  lea    -0x98(%ebp),%eax
08221ca1 +0x10ef:  mov    %eax,(%esp)
08221ca4 +0x10f2:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221ca9 +0x10f7:  lea    0x8(%eax),%ebx
08221cac +0x10fa:  lea    -0x98(%ebp),%eax
08221cb2 +0x1100:  mov    %eax,(%esp)
08221cb5 +0x1103:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08221cba +0x1108:  mov    %eax,%edx
08221cbc +0x110a:  lea    -0x40(%ebp),%eax
08221cbf +0x110d:  mov    %ebx,0x8(%esp)
08221cc3 +0x1111:  mov    %edx,0x4(%esp)
08221cc7 +0x1115:  mov    %eax,(%esp)
08221cca +0x1118:  call   08111bca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10dc
08221ccf +0x111d:  sub    $0x4,%esp
08221cd2 +0x1120:  lea    -0x40(%ebp),%eax
08221cd5 +0x1123:  mov    %eax,0x4(%esp)
08221cd9 +0x1127:  lea    -0x48(%ebp),%eax
08221cdc +0x112a:  mov    %eax,(%esp)
08221cdf +0x112d:  call   08111c08 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x111a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x111a
08221ce4 +0x1132:  lea    -0x48(%ebp),%eax
08221ce7 +0x1135:  mov    %eax,0x4(%esp)
08221ceb +0x1139:  lea    -0x88(%ebp),%eax
08221cf1 +0x113f:  mov    %eax,(%esp)
08221cf4 +0x1142:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08221cf9 +0x1147:  jmp    08221cfc <+0x114a>
08221cfb +0x1149:  nop
08221cfc +0x114a:  lea    -0x98(%ebp),%eax
08221d02 +0x1150:  mov    %eax,(%esp)
08221d05 +0x1153:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
08221d0a +0x1158:  lea    -0x9c(%ebp),%eax
08221d10 +0x115e:  mov    %eax,0x4(%esp)
08221d14 +0x1162:  lea    -0x98(%ebp),%eax
08221d1a +0x1168:  mov    %eax,(%esp)
08221d1d +0x116b:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
08221d22 +0x1170:  test   %al,%al
08221d24 +0x1172:  jne    08221a43 <+0xe91>
08221d2a +0x1178:  mov    -0x38(%ebp),%eax
08221d2d +0x117b:  mov    %eax,(%esp)
08221d30 +0x117e:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08221d35 +0x1183:  mov    %eax,%ebx
08221d37 +0x1185:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
08221d3c +0x118a:  mov    %ebx,0x4(%esp)
08221d40 +0x118e:  mov    %eax,(%esp)
08221d43 +0x1191:  call   081933b4 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x1c>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x1c
08221d48 +0x1196:  lea    -0x88(%ebp),%eax
08221d4e +0x119c:  mov    %eax,0x4(%esp)
08221d52 +0x11a0:  mov    0x8(%ebp),%eax
08221d55 +0x11a3:  mov    %eax,(%esp)
08221d58 +0x11a6:  call   08221dde <_ZN25Dispatcher_CompoundEmblem20SendCreateEmblemInfoERKSt6vectorISt4pairIiiESaIS2_EE>  ; Dispatcher_CompoundEmblem::SendCreateEmblemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08221d5d +0x11ab:  mov    $0x0,%ebx
08221d62 +0x11b0:  lea    -0x88(%ebp),%eax
08221d68 +0x11b6:  mov    %eax,(%esp)
08221d6b +0x11b9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08221d70 +0x11be:  jmp    08221d9f <+0x11ed>
08221d72 +0x11c0:  mov    %edx,%ebx
08221d74 +0x11c2:  mov    %eax,%esi
08221d76 +0x11c4:  lea    -0x88(%ebp),%eax
08221d7c +0x11ca:  mov    %eax,(%esp)
08221d7f +0x11cd:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08221d84 +0x11d2:  mov    %esi,%eax
08221d86 +0x11d4:  mov    %ebx,%edx
08221d88 +0x11d6:  jmp    08221d8a <+0x11d8>
08221d8a +0x11d8:  mov    %edx,%ebx
08221d8c +0x11da:  mov    %eax,%esi
08221d8e +0x11dc:  lea    -0x7c(%ebp),%eax
08221d91 +0x11df:  mov    %eax,(%esp)
08221d94 +0x11e2:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08221d99 +0x11e7:  mov    %esi,%eax
08221d9b +0x11e9:  mov    %ebx,%edx
08221d9d +0x11eb:  jmp    08221dac <+0x11fa>
08221d9f +0x11ed:  lea    -0x7c(%ebp),%eax
08221da2 +0x11f0:  mov    %eax,(%esp)
08221da5 +0x11f3:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08221daa +0x11f8:  jmp    08221dc7 <+0x1215>
08221dac +0x11fa:  mov    %edx,%ebx
08221dae +0x11fc:  mov    %eax,%esi
08221db0 +0x11fe:  lea    -0x70(%ebp),%eax
08221db3 +0x1201:  mov    %eax,(%esp)
08221db6 +0x1204:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08221dbb +0x1209:  mov    %esi,%eax
08221dbd +0x120b:  mov    %ebx,%edx
08221dbf +0x120d:  mov    %eax,(%esp)
08221dc2 +0x1210:  call   08ae3750 <_Unwind_Resume>
08221dc7 +0x1215:  lea    -0x70(%ebp),%eax
08221dca +0x1218:  mov    %eax,(%esp)
08221dcd +0x121b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08221dd2 +0x1220:  mov    %ebx,%eax
08221dd4 +0x1222:  lea    -0x8(%ebp),%esp
08221dd7 +0x1225:  add    $0x0,%esp
08221dda +0x1228:  pop    %ebx
08221ddb +0x1229:  pop    %esi
08221ddc +0x122a:  pop    %ebp
08221ddd +0x122b:  ret
```

## 反编译 C

```c
// Dispatcher_CompoundEmblem::dispatch_sig @ 0x8220bb2

/* Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CompoundEmblem::dispatch_sig
          (Dispatcher_CompoundEmblem *this,CUser *param_1,PacketBuf *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  CInventory *pCVar10;
  ulong *puVar11;
  size_t sVar12;
  undefined4 uVar13;
  ushort *puVar14;
  CCompoundEmblemStatistic *this_00;
  uint uVar15;
  undefined1 local_19c [8];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined2 local_157;
  undefined2 uStack_155;
  undefined2 uStack_153;
  undefined2 uStack_151;
  undefined4 local_14f;
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined4 local_137;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined4 local_123;
  undefined4 local_11f;
  undefined1 local_11b;
  undefined2 local_11a;
  undefined2 uStack_118;
  undefined2 local_116;
  undefined2 uStack_114;
  undefined4 local_112;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined1 local_de;
  undefined2 local_dd;
  undefined2 uStack_db;
  undefined2 local_d9;
  undefined2 uStack_d7;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_a0 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_9c [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_98 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_94 [4];
  ushort local_90;
  undefined2 local_8e;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_8c [12];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_80 [12];
  PacketGuard local_74 [12];
  ushort local_68;
  ushort local_66;
  ulong local_64;
  ulong local_60;
  __normal_iterator local_5c [4];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  pair<int,int> local_4c [8];
  uint local_44 [2];
  CItem *local_3c;
  CItem *local_38;
  int local_34;
  CStackableItem *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_1c;
  short local_16;
  undefined4 local_14;
  char *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    return 0;
  }
  cVar2 = PacketBuf::get_item_idx(param_2,&local_60);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda8f,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_66);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda90,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_item_idx(param_2,&local_64);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda91,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_68);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xda92,
                     "virtual int Dispatcher_CompoundEmblem::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_dd);
  Inven_Item::Inven_Item((Inven_Item *)&local_11a);
  uVar1 = local_60;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(pCVar6,uVar1);
  uVar1 = local_64;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_38 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
  local_34 = 0xffffffff;
                    /* try { // try from 08220d47 to 08221762 has its CatchHandler @ 0822184f */
  local_2c = CUser::isEnableAvatarSocketAction(param_1);
  if (local_2c != 0) {
    piVar7 = (int *)__cxa_allocate_exception(4);
    *piVar7 = local_2c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar7,&ENUM_ERROR::typeinfo,0);
  }
  if ((local_3c == (CItem *)0x0) || (local_38 == (CItem *)0x0)) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = (**(code **)(*(int *)local_3c + 0xc))(local_3c);
  if ((iVar4 == 0x14) && (iVar4 = (**(code **)(*(int *)local_38 + 0xc))(local_38), iVar4 == 0x14)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_66;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_19c,iVar4);
  local_dd = (undefined2)local_19c._0_4_;
  uStack_db = SUB42(local_19c._0_4_,2);
  local_d9 = (undefined2)local_19c._4_4_;
  uStack_d7 = SUB42(local_19c._4_4_,2);
  local_d5 = local_194;
  local_d1 = local_190;
  local_cd = local_18c;
  local_c9 = local_188;
  local_c5 = local_184;
  local_c1 = local_180;
  local_bd = local_17c;
  local_b9 = local_178;
  local_b5 = local_174;
  local_b1 = local_170;
  local_ad = local_16c;
  local_a9 = local_168;
  local_a5 = local_164;
  local_a1 = local_160;
  cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_dd);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  if (CONCAT22(local_d9,uStack_db) != local_60) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_68;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_19c,iVar4);
  local_11a = (undefined2)local_19c._0_4_;
  uStack_118 = SUB42(local_19c._0_4_,2);
  local_116 = (undefined2)local_19c._4_4_;
  uStack_114 = SUB42(local_19c._4_4_,2);
  local_112 = local_194;
  local_10e = local_190;
  local_10a = local_18c;
  local_106 = local_188;
  local_102 = local_184;
  local_fe = local_180;
  local_fa = local_17c;
  local_f6 = local_178;
  local_f2 = local_174;
  local_ee = local_170;
  local_ea = local_16c;
  local_e6 = local_168;
  local_e2 = local_164;
  local_de = local_160;
  cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_11a);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  if (CONCAT22(local_116,uStack_118) != local_64) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  if (((local_66 == local_68) && (CONCAT22(local_d9,uStack_db) == CONCAT22(local_116,uStack_118)))
     && (iVar9 = Inven_Item::get_add_info((Inven_Item *)&local_dd), iVar9 < 2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUser::CheckItemLock(param_1,1,(uint)local_66);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0xd5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CUser::CheckItemLock(param_1,1,(uint)local_68);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0xd5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItem::get_grade(local_3c);
  iVar9 = CItem::get_grade(local_38);
  if (iVar4 != iVar9) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0xd8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItem::get_grade(local_3c);
  if ((iVar4 < 0) || (iVar4 = CItem::get_grade(local_3c), 6 < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = G_CDataManager();
  iVar9 = CItem::get_grade(local_3c);
  if (*(int *)(iVar4 + iVar9 * 0x18 + 0x828) == -1) {
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItem::get_grade(local_38);
  if ((iVar4 < 0) || (iVar4 = CItem::get_grade(local_38), 6 < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    iVar4 = G_CDataManager();
    iVar9 = CItem::get_grade(local_38);
    if (*(int *)(iVar4 + iVar9 * 0x18 + 0x828) == -1) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    local_28 = 2;
    local_90 = CStackableItem::getJewelTargetSocket((CStackableItem *)local_3c);
    local_8e = CStackableItem::getJewelTargetSocket((CStackableItem *)local_38);
    local_34 = _selectJewelTypeIndex(this,2,&local_90);
    if (local_34 == -1) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 0x17;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = G_CDataManager();
    iVar9 = CItem::get_grade(local_3c);
    iVar4 = *(int *)(iVar4 + (iVar9 * 6 + local_34) * 4 + 0x82c);
    local_24 = iVar4;
    pCVar6 = (CDataManager *)G_CDataManager();
    local_30 = (CStackableItem *)CDataManager::find_item(pCVar6,iVar4);
    if ((local_30 == (CStackableItem *)0x0) ||
       (iVar4 = (**(code **)(*(int *)local_30 + 0xc))(local_30), iVar4 != 0x10)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = G_CDataManager();
    iVar9 = CItem::get_grade(local_3c);
    uVar5 = *(undefined4 *)(iVar4 + iVar9 * 0x18 + 0x828);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::use_money(pCVar10,uVar5,0x23,1);
    if (cVar2 != '\x01') {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar10,1,local_66,1,8,1);
    if (cVar2 == '\x01') {
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar2 = CInventory::delete_item(pCVar10,1,local_68,1,8,1);
      if (cVar2 == '\x01') {
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_19c,iVar4);
        local_dd = (undefined2)local_19c._0_4_;
        uStack_db = SUB42(local_19c._0_4_,2);
        local_d9 = (undefined2)local_19c._4_4_;
        uStack_d7 = SUB42(local_19c._4_4_,2);
        local_d5 = local_194;
        local_d1 = local_190;
        local_cd = local_18c;
        local_c9 = local_188;
        local_c5 = local_184;
        local_c1 = local_180;
        local_bd = local_17c;
        local_b9 = local_178;
        local_b5 = local_174;
        local_b1 = local_170;
        local_ad = local_16c;
        local_a9 = local_168;
        local_a5 = local_164;
        local_a1 = local_160;
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_19c,iVar4);
        local_11a = (undefined2)local_19c._0_4_;
        uStack_118 = SUB42(local_19c._0_4_,2);
        local_116 = (undefined2)local_19c._4_4_;
        uStack_114 = SUB42(local_19c._4_4_,2);
        local_112 = local_194;
        local_10e = local_190;
        local_10a = local_18c;
        local_106 = local_188;
        local_102 = local_184;
        local_fe = local_180;
        local_fa = local_17c;
        local_f6 = local_178;
        local_f2 = local_174;
        local_ee = local_170;
        local_ea = local_16c;
        local_e6 = local_168;
        local_e2 = local_164;
        local_de = local_160;
        PacketGuard::PacketGuard(local_74);
                    /* try { // try from 08221848 to 0822184c has its CatchHandler @ 08221dac */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_74,1,0x104);
                    /* try { // try from 082218b8 to 082218c7 has its CatchHandler @ 08221dac */
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,1);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        vector(local_80);
                    /* try { // try from 082218d5 to 082219e9 has its CatchHandler @ 08221d8a */
        CStackableItem::getBoosterItem(local_30,(vector *)local_80);
        iVar4 = std::
                vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
                size(local_80);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,iVar4);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        begin();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_94,local_5c);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end
                  ();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_98,local_58);
        while (bVar3 = __gnu_cxx::operator!=(local_94,local_98), bVar3) {
          puVar11 = (ulong *)__gnu_cxx::
                             __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                             ::operator->(local_94);
          InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)local_74,*puVar11);
          iVar4 = __gnu_cxx::
                  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                  ::operator->(local_94);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,(uint)*(ushort *)(iVar4 + 8));
          __gnu_cxx::
          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
          ::operator++(local_94);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_74,true);
        CUser::Send(param_1,local_74);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_8c);
                    /* try { // try from 082219f7 to 08221d5c has its CatchHandler @ 08221d72 */
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        begin();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_9c,local_54);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end
                  ();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_a0,local_50);
        while (bVar3 = __gnu_cxx::operator!=(local_9c,local_a0), bVar3) {
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                          ::operator->(local_9c);
          iVar4 = *piVar7;
          pCVar6 = (CDataManager *)G_CDataManager();
          local_1c = (int *)CDataManager::find_item(pCVar6,iVar4);
          if (local_1c != (int *)0x0) {
            Inven_Item::Inven_Item((Inven_Item *)&local_157);
            puVar8 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                     ::operator->(local_9c);
            uStack_155 = (undefined2)*puVar8;
            uStack_153 = (undefined2)((uint)*puVar8 >> 0x10);
            (**(code **)(*local_1c + 8))(local_1c,&local_157);
            iVar4 = __gnu_cxx::
                    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                    ::operator->(local_9c);
            Inven_Item::set_add_info((Inven_Item *)&local_157,(uint)*(ushort *)(iVar4 + 8));
            uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_16 = CInventory::insertItemIntoInventory
                                 (uVar5,CONCAT22(uStack_155,local_157),
                                  CONCAT22(uStack_151,uStack_153),local_14f,local_14b,local_147,
                                  local_143,local_13f,local_13b,local_137,local_133,local_12f,
                                  local_12b,local_127,local_123,local_11f,local_11b,9,1,1);
            if (local_16 < 0) {
              local_14 = RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_122",(bool *)0x0);
              local_10 = (char *)RDARScriptStringManager::findString
                                           ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                            "game_server_msg_123",(bool *)0x0);
              uVar5 = CUser::GetServerGroup(param_1);
              sVar12 = strlen(local_10);
              uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (local_14,&local_157,0,uVar13,local_10,sVar12,0,uVar5,0,0);
            }
            else {
              CUser::SendUpdateItem(param_1,1,0,(int)local_16);
            }
            __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_9c);
            puVar14 = (ushort *)
                      __gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_9c);
            std::make_pair<unsigned_int_const&,unsigned_short_const&>(local_44,puVar14);
            std::pair<int,int>::pair<unsigned_int,unsigned_short>(local_4c,(pair *)local_44);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_8c,local_4c);
          }
          __gnu_cxx::
          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
          ::operator++(local_9c);
        }
        iVar4 = CItem::get_grade(local_3c);
        this_00 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
        CCompoundEmblemStatistic::increaseCount(this_00,iVar4);
        SendCreateEmblemInfo(this,(vector *)local_8c);
                    /* try { // try from 08221d6b to 08221d6f has its CatchHandler @ 08221d8a */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_8c);
                    /* try { // try from 08221da5 to 08221da9 has its CatchHandler @ 08221dac */
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        ~vector(local_80);
        PacketGuard::~PacketGuard(local_74);
        return 0;
      }
      puVar8 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar8 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    puVar8 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar8 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
  }
  puVar8 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
}
```
