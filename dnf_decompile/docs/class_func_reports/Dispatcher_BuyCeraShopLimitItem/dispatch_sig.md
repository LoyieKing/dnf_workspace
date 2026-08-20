# dispatch_sig

`_ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyCeraShopLimitItem` | `0x0821f9ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821f9ba  _ZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821f9ba, 0x08220483]
0821f9ba +0x000:  push   %ebp
0821f9bb +0x001:  mov    %esp,%ebp
0821f9bd +0x003:  push   %edi
0821f9be +0x004:  push   %esi
0821f9bf +0x005:  push   %ebx
0821f9c0 +0x006:  sub    $0x26c,%esp
0821f9c6 +0x00c:  mov    0xc(%ebp),%eax
0821f9c9 +0x00f:  mov    %eax,(%esp)
0821f9cc +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821f9d1 +0x017:  cmp    $0x2,%eax
0821f9d4 +0x01a:  setle  %al
0821f9d7 +0x01d:  test   %al,%al
0821f9d9 +0x01f:  je     0821fa06 <+0x4c>
0821f9db +0x021:  movl   $0x0,0xc(%esp)
0821f9e3 +0x029:  movl   $0x0,0x8(%esp)
0821f9eb +0x031:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f9f3 +0x039:  movl   $0xd887,(%esp)
0821f9fa +0x040:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f9ff +0x045:  mov    %eax,%ebx
0821fa01 +0x047:  jmp    08220476 <+0xabc>
0821fa06 +0x04c:  lea    -0x238(%ebp),%eax
0821fa0c +0x052:  mov    %eax,(%esp)
0821fa0f +0x055:  call   0822c064 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x170e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x170e
0821fa14 +0x05a:  lea    -0x238(%ebp),%eax
0821fa1a +0x060:  add    $0xe,%eax
0821fa1d +0x063:  mov    %eax,0x4(%esp)
0821fa21 +0x067:  mov    0x10(%ebp),%eax
0821fa24 +0x06a:  mov    %eax,(%esp)
0821fa27 +0x06d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0821fa2c +0x072:  xor    $0x1,%eax
0821fa2f +0x075:  test   %al,%al
0821fa31 +0x077:  je     0821fa5e <+0xa4>
0821fa33 +0x079:  movl   $0x0,0xc(%esp)
0821fa3b +0x081:  movl   $0x0,0x8(%esp)
0821fa43 +0x089:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fa4b +0x091:  movl   $0xd88c,(%esp)
0821fa52 +0x098:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fa57 +0x09d:  mov    %eax,%ebx
0821fa59 +0x09f:  jmp    08220476 <+0xabc>
0821fa5e +0x0a4:  lea    -0x238(%ebp),%eax
0821fa64 +0x0aa:  add    $0x12,%eax
0821fa67 +0x0ad:  mov    %eax,0x4(%esp)
0821fa6b +0x0b1:  mov    0x10(%ebp),%eax
0821fa6e +0x0b4:  mov    %eax,(%esp)
0821fa71 +0x0b7:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821fa76 +0x0bc:  xor    $0x1,%eax
0821fa79 +0x0bf:  test   %al,%al
0821fa7b +0x0c1:  je     0821faa8 <+0xee>
0821fa7d +0x0c3:  movl   $0x0,0xc(%esp)
0821fa85 +0x0cb:  movl   $0x0,0x8(%esp)
0821fa8d +0x0d3:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fa95 +0x0db:  movl   $0xd88d,(%esp)
0821fa9c +0x0e2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821faa1 +0x0e7:  mov    %eax,%ebx
0821faa3 +0x0e9:  jmp    08220476 <+0xabc>
0821faa8 +0x0ee:  lea    -0x238(%ebp),%eax
0821faae +0x0f4:  add    $0x13,%eax
0821fab1 +0x0f7:  mov    %eax,0x4(%esp)
0821fab5 +0x0fb:  mov    0x10(%ebp),%eax
0821fab8 +0x0fe:  mov    %eax,(%esp)
0821fabb +0x101:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821fac0 +0x106:  xor    $0x1,%eax
0821fac3 +0x109:  test   %al,%al
0821fac5 +0x10b:  jne    0821fad2 <+0x118>
0821fac7 +0x10d:  movzbl -0x225(%ebp),%eax
0821face +0x114:  cmp    $0x23,%al
0821fad0 +0x116:  jbe    0821fad9 <+0x11f>
0821fad2 +0x118:  mov    $0x1,%eax
0821fad7 +0x11d:  jmp    0821fade <+0x124>
0821fad9 +0x11f:  mov    $0x0,%eax
0821fade +0x124:  test   %al,%al
0821fae0 +0x126:  je     0821fb0d <+0x153>
0821fae2 +0x128:  movl   $0x0,0xc(%esp)
0821faea +0x130:  movl   $0x0,0x8(%esp)
0821faf2 +0x138:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fafa +0x140:  movl   $0xd890,(%esp)
0821fb01 +0x147:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fb06 +0x14c:  mov    %eax,%ebx
0821fb08 +0x14e:  jmp    08220476 <+0xabc>
0821fb0d +0x153:  movl   $0x0,-0x40(%ebp)
0821fb14 +0x15a:  jmp    0821fbd1 <+0x217>
0821fb19 +0x15f:  mov    -0x40(%ebp),%edx
0821fb1c +0x162:  lea    -0x238(%ebp),%ecx
0821fb22 +0x168:  mov    %edx,%eax
0821fb24 +0x16a:  shl    $0x2,%eax
0821fb27 +0x16d:  add    %edx,%eax
0821fb29 +0x16f:  add    $0x10,%eax
0821fb2c +0x172:  lea    (%ecx,%eax,1),%eax
0821fb2f +0x175:  add    $0x4,%eax
0821fb32 +0x178:  mov    %eax,0x4(%esp)
0821fb36 +0x17c:  mov    0x10(%ebp),%eax
0821fb39 +0x17f:  mov    %eax,(%esp)
0821fb3c +0x182:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
0821fb41 +0x187:  xor    $0x1,%eax
0821fb44 +0x18a:  test   %al,%al
0821fb46 +0x18c:  je     0821fb73 <+0x1b9>
0821fb48 +0x18e:  movl   $0x0,0xc(%esp)
0821fb50 +0x196:  movl   $0x0,0x8(%esp)
0821fb58 +0x19e:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fb60 +0x1a6:  movl   $0xd894,(%esp)
0821fb67 +0x1ad:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fb6c +0x1b2:  mov    %eax,%ebx
0821fb6e +0x1b4:  jmp    08220476 <+0xabc>
0821fb73 +0x1b9:  mov    -0x40(%ebp),%edx
0821fb76 +0x1bc:  lea    -0x238(%ebp),%ecx
0821fb7c +0x1c2:  mov    %edx,%eax
0821fb7e +0x1c4:  shl    $0x2,%eax
0821fb81 +0x1c7:  add    %edx,%eax
0821fb83 +0x1c9:  add    $0x10,%eax
0821fb86 +0x1cc:  lea    (%ecx,%eax,1),%eax
0821fb89 +0x1cf:  add    $0x8,%eax
0821fb8c +0x1d2:  mov    %eax,0x4(%esp)
0821fb90 +0x1d6:  mov    0x10(%ebp),%eax
0821fb93 +0x1d9:  mov    %eax,(%esp)
0821fb96 +0x1dc:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821fb9b +0x1e1:  xor    $0x1,%eax
0821fb9e +0x1e4:  test   %al,%al
0821fba0 +0x1e6:  je     0821fbcd <+0x213>
0821fba2 +0x1e8:  movl   $0x0,0xc(%esp)
0821fbaa +0x1f0:  movl   $0x0,0x8(%esp)
0821fbb2 +0x1f8:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fbba +0x200:  movl   $0xd895,(%esp)
0821fbc1 +0x207:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fbc6 +0x20c:  mov    %eax,%ebx
0821fbc8 +0x20e:  jmp    08220476 <+0xabc>
0821fbcd +0x213:  addl   $0x1,-0x40(%ebp)
0821fbd1 +0x217:  movzbl -0x225(%ebp),%eax
0821fbd8 +0x21e:  movzbl %al,%eax
0821fbdb +0x221:  cmp    -0x40(%ebp),%eax
0821fbde +0x224:  setg   %al
0821fbe1 +0x227:  test   %al,%al
0821fbe3 +0x229:  jne    0821fb19 <+0x15f>
0821fbe9 +0x22f:  lea    -0x238(%ebp),%eax
0821fbef +0x235:  add    $0xc3,%eax
0821fbf4 +0x23a:  mov    %eax,0x4(%esp)
0821fbf8 +0x23e:  mov    0x10(%ebp),%eax
0821fbfb +0x241:  mov    %eax,(%esp)
0821fbfe +0x244:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821fc03 +0x249:  xor    $0x1,%eax
0821fc06 +0x24c:  test   %al,%al
0821fc08 +0x24e:  jne    0821fc15 <+0x25b>
0821fc0a +0x250:  movzbl -0x175(%ebp),%eax
0821fc11 +0x257:  cmp    $0x23,%al
0821fc13 +0x259:  jbe    0821fc1c <+0x262>
0821fc15 +0x25b:  mov    $0x1,%eax
0821fc1a +0x260:  jmp    0821fc21 <+0x267>
0821fc1c +0x262:  mov    $0x0,%eax
0821fc21 +0x267:  test   %al,%al
0821fc23 +0x269:  je     0821fc50 <+0x296>
0821fc25 +0x26b:  movl   $0x0,0xc(%esp)
0821fc2d +0x273:  movl   $0x0,0x8(%esp)
0821fc35 +0x27b:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fc3d +0x283:  movl   $0xd89d,(%esp)
0821fc44 +0x28a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fc49 +0x28f:  mov    %eax,%ebx
0821fc4b +0x291:  jmp    08220476 <+0xabc>
0821fc50 +0x296:  movl   $0x0,-0x3c(%ebp)
0821fc57 +0x29d:  jmp    0821fd5f <+0x3a5>
0821fc5c +0x2a2:  mov    -0x3c(%ebp),%edx
0821fc5f +0x2a5:  lea    -0x238(%ebp),%eax
0821fc65 +0x2ab:  add    $0x18,%edx
0821fc68 +0x2ae:  shl    $0x3,%edx
0821fc6b +0x2b1:  add    %edx,%eax
0821fc6d +0x2b3:  add    $0x4,%eax
0821fc70 +0x2b6:  mov    %eax,0x4(%esp)
0821fc74 +0x2ba:  mov    0x10(%ebp),%eax
0821fc77 +0x2bd:  mov    %eax,(%esp)
0821fc7a +0x2c0:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
0821fc7f +0x2c5:  xor    $0x1,%eax
0821fc82 +0x2c8:  test   %al,%al
0821fc84 +0x2ca:  je     0821fcb1 <+0x2f7>
0821fc86 +0x2cc:  movl   $0x0,0xc(%esp)
0821fc8e +0x2d4:  movl   $0x0,0x8(%esp)
0821fc96 +0x2dc:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fc9e +0x2e4:  movl   $0xd8a1,(%esp)
0821fca5 +0x2eb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fcaa +0x2f0:  mov    %eax,%ebx
0821fcac +0x2f2:  jmp    08220476 <+0xabc>
0821fcb1 +0x2f7:  mov    -0x3c(%ebp),%edx
0821fcb4 +0x2fa:  lea    -0x238(%ebp),%eax
0821fcba +0x300:  add    $0x18,%edx
0821fcbd +0x303:  shl    $0x3,%edx
0821fcc0 +0x306:  add    %edx,%eax
0821fcc2 +0x308:  add    $0x8,%eax
0821fcc5 +0x30b:  mov    %eax,0x4(%esp)
0821fcc9 +0x30f:  mov    0x10(%ebp),%eax
0821fccc +0x312:  mov    %eax,(%esp)
0821fccf +0x315:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821fcd4 +0x31a:  xor    $0x1,%eax
0821fcd7 +0x31d:  test   %al,%al
0821fcd9 +0x31f:  je     0821fd06 <+0x34c>
0821fcdb +0x321:  movl   $0x0,0xc(%esp)
0821fce3 +0x329:  movl   $0x0,0x8(%esp)
0821fceb +0x331:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fcf3 +0x339:  movl   $0xd8a2,(%esp)
0821fcfa +0x340:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fcff +0x345:  mov    %eax,%ebx
0821fd01 +0x347:  jmp    08220476 <+0xabc>
0821fd06 +0x34c:  mov    -0x3c(%ebp),%edx
0821fd09 +0x34f:  lea    -0x238(%ebp),%eax
0821fd0f +0x355:  add    $0x18,%edx
0821fd12 +0x358:  shl    $0x3,%edx
0821fd15 +0x35b:  add    %edx,%eax
0821fd17 +0x35d:  add    $0xa,%eax
0821fd1a +0x360:  mov    %eax,0x4(%esp)
0821fd1e +0x364:  mov    0x10(%ebp),%eax
0821fd21 +0x367:  mov    %eax,(%esp)
0821fd24 +0x36a:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821fd29 +0x36f:  xor    $0x1,%eax
0821fd2c +0x372:  test   %al,%al
0821fd2e +0x374:  je     0821fd5b <+0x3a1>
0821fd30 +0x376:  movl   $0x0,0xc(%esp)
0821fd38 +0x37e:  movl   $0x0,0x8(%esp)
0821fd40 +0x386:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fd48 +0x38e:  movl   $0xd8a3,(%esp)
0821fd4f +0x395:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fd54 +0x39a:  mov    %eax,%ebx
0821fd56 +0x39c:  jmp    08220476 <+0xabc>
0821fd5b +0x3a1:  addl   $0x1,-0x3c(%ebp)
0821fd5f +0x3a5:  movzbl -0x175(%ebp),%eax
0821fd66 +0x3ac:  movzbl %al,%eax
0821fd69 +0x3af:  cmp    -0x3c(%ebp),%eax
0821fd6c +0x3b2:  setg   %al
0821fd6f +0x3b5:  test   %al,%al
0821fd71 +0x3b7:  jne    0821fc5c <+0x2a2>
0821fd77 +0x3bd:  movl   $0x0,-0x38(%ebp)
0821fd7e +0x3c4:  jmp    0821fe18 <+0x45e>
0821fd83 +0x3c9:  mov    -0x38(%ebp),%eax
0821fd86 +0x3cc:  add    $0x1,%eax
0821fd89 +0x3cf:  mov    %eax,-0x34(%ebp)
0821fd8c +0x3d2:  jmp    0821fdfc <+0x442>
0821fd8e +0x3d4:  mov    -0x38(%ebp),%eax
0821fd91 +0x3d7:  add    $0x18,%eax
0821fd94 +0x3da:  mov    -0x234(%ebp,%eax,8),%edx
0821fd9b +0x3e1:  mov    -0x34(%ebp),%eax
0821fd9e +0x3e4:  add    $0x18,%eax
0821fda1 +0x3e7:  mov    -0x234(%ebp,%eax,8),%eax
0821fda8 +0x3ee:  cmp    %eax,%edx
0821fdaa +0x3f0:  jne    0821fdf8 <+0x43e>
0821fdac +0x3f2:  mov    -0x38(%ebp),%eax
0821fdaf +0x3f5:  add    $0x18,%eax
0821fdb2 +0x3f8:  movzwl -0x230(%ebp,%eax,8),%edx
0821fdba +0x400:  mov    -0x34(%ebp),%eax
0821fdbd +0x403:  add    $0x18,%eax
0821fdc0 +0x406:  movzwl -0x230(%ebp,%eax,8),%eax
0821fdc8 +0x40e:  cmp    %ax,%dx
0821fdcb +0x411:  jne    0821fdf8 <+0x43e>
0821fdcd +0x413:  movl   $0x0,0xc(%esp)
0821fdd5 +0x41b:  movl   $0x0,0x8(%esp)
0821fddd +0x423:  movl   $&_ZZN31Dispatcher_BuyCeraShopLimitItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821fde5 +0x42b:  movl   $0xd8ac,(%esp)
0821fdec +0x432:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821fdf1 +0x437:  mov    %eax,%ebx
0821fdf3 +0x439:  jmp    08220476 <+0xabc>
0821fdf8 +0x43e:  addl   $0x1,-0x34(%ebp)
0821fdfc +0x442:  movzbl -0x175(%ebp),%eax
0821fe03 +0x449:  movzbl %al,%eax
0821fe06 +0x44c:  cmp    -0x34(%ebp),%eax
0821fe09 +0x44f:  setg   %al
0821fe0c +0x452:  test   %al,%al
0821fe0e +0x454:  jne    0821fd8e <+0x3d4>
0821fe14 +0x45a:  addl   $0x1,-0x38(%ebp)
0821fe18 +0x45e:  movzbl -0x175(%ebp),%eax
0821fe1f +0x465:  movzbl %al,%eax
0821fe22 +0x468:  cmp    -0x38(%ebp),%eax
0821fe25 +0x46b:  setg   %al
0821fe28 +0x46e:  test   %al,%al
0821fe2a +0x470:  jne    0821fd83 <+0x3c9>
0821fe30 +0x476:  movl   $0x0,-0x48(%ebp)
0821fe37 +0x47d:  movl   $0x0,-0x44(%ebp)
0821fe3e +0x484:  mov    0xc(%ebp),%eax
0821fe41 +0x487:  mov    %eax,0x4(%esp)
0821fe45 +0x48b:  mov    0x8(%ebp),%eax
0821fe48 +0x48e:  mov    %eax,(%esp)
0821fe4b +0x491:  call   0821f72a <_ZNK31Dispatcher_BuyCeraShopLimitItem15_checkUserStateEP5CUser>  ; Dispatcher_BuyCeraShopLimitItem::_checkUserState(CUser*) const
0821fe50 +0x496:  mov    %eax,-0x30(%ebp)
0821fe53 +0x499:  cmpl   $0x0,-0x30(%ebp)
0821fe57 +0x49d:  je     0821fe84 <+0x4ca>
0821fe59 +0x49f:  movl   $0x4,(%esp)
0821fe60 +0x4a6:  call   08725800 <__cxa_allocate_exception>
0821fe65 +0x4ab:  mov    %eax,%edx
0821fe67 +0x4ad:  mov    -0x30(%ebp),%ecx
0821fe6a +0x4b0:  mov    %ecx,(%edx)
0821fe6c +0x4b2:  movl   $0x0,0x8(%esp)
0821fe74 +0x4ba:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821fe7c +0x4c2:  mov    %eax,(%esp)
0821fe7f +0x4c5:  call   08724c50 <__cxa_throw>
0821fe84 +0x4ca:  mov    -0x22a(%ebp),%ebx
0821fe8a +0x4d0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821fe8f +0x4d5:  mov    %eax,(%esp)
0821fe92 +0x4d8:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
0821fe97 +0x4dd:  mov    %ebx,0x4(%esp)
0821fe9b +0x4e1:  mov    %eax,(%esp)
0821fe9e +0x4e4:  call   0817a0a8 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x126>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x126
0821fea3 +0x4e9:  mov    %eax,-0x48(%ebp)
0821fea6 +0x4ec:  cmpl   $0x0,-0x48(%ebp)
0821feaa +0x4f0:  sete   %al
0821fead +0x4f3:  test   %al,%al
0821feaf +0x4f5:  je     0821fedd <+0x523>
0821feb1 +0x4f7:  movl   $0x4,(%esp)
0821feb8 +0x4fe:  call   08725800 <__cxa_allocate_exception>
0821febd +0x503:  mov    %eax,%edx
0821febf +0x505:  movl   $0x16,(%edx)
0821fec5 +0x50b:  movl   $0x0,0x8(%esp)
0821fecd +0x513:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821fed5 +0x51b:  mov    %eax,(%esp)
0821fed8 +0x51e:  call   08724c50 <__cxa_throw>
0821fedd +0x523:  mov    -0x48(%ebp),%eax
0821fee0 +0x526:  mov    %eax,(%esp)
0821fee3 +0x529:  call   0822cac8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2172>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2172
0821fee8 +0x52e:  test   %al,%al
0821feea +0x530:  je     0821ff18 <+0x55e>
0821feec +0x532:  movl   $0x4,(%esp)
0821fef3 +0x539:  call   08725800 <__cxa_allocate_exception>
0821fef8 +0x53e:  mov    %eax,%edx
0821fefa +0x540:  movl   $0x5f,(%edx)
0821ff00 +0x546:  movl   $0x0,0x8(%esp)
0821ff08 +0x54e:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821ff10 +0x556:  mov    %eax,(%esp)
0821ff13 +0x559:  call   08724c50 <__cxa_throw>
0821ff18 +0x55e:  mov    -0x48(%ebp),%eax
0821ff1b +0x561:  mov    %eax,(%esp)
0821ff1e +0x564:  call   0822caa4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x214e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x214e
0821ff23 +0x569:  mov    %eax,%ebx
0821ff25 +0x56b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0821ff2c +0x572:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0821ff31 +0x577:  cmp    %eax,%ebx
0821ff33 +0x579:  setl   %al
0821ff36 +0x57c:  test   %al,%al
0821ff38 +0x57e:  je     0821ff66 <+0x5ac>
0821ff3a +0x580:  movl   $0x4,(%esp)
0821ff41 +0x587:  call   08725800 <__cxa_allocate_exception>
0821ff46 +0x58c:  mov    %eax,%edx
0821ff48 +0x58e:  movl   $0x16,(%edx)
0821ff4e +0x594:  movl   $0x0,0x8(%esp)
0821ff56 +0x59c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821ff5e +0x5a4:  mov    %eax,(%esp)
0821ff61 +0x5a7:  call   08724c50 <__cxa_throw>
0821ff66 +0x5ac:  mov    -0x48(%ebp),%eax
0821ff69 +0x5af:  mov    %eax,(%esp)
0821ff6c +0x5b2:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
0821ff71 +0x5b7:  cmp    $0x1,%eax
0821ff74 +0x5ba:  je     0821ffce <+0x614>
0821ff76 +0x5bc:  mov    -0x48(%ebp),%eax
0821ff79 +0x5bf:  mov    %eax,(%esp)
0821ff7c +0x5c2:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
0821ff81 +0x5c7:  mov    %eax,%ebx
0821ff83 +0x5c9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821ff88 +0x5ce:  mov    %ebx,0x4(%esp)
0821ff8c +0x5d2:  mov    %eax,(%esp)
0821ff8f +0x5d5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0821ff94 +0x5da:  mov    %eax,-0x44(%ebp)
0821ff97 +0x5dd:  cmpl   $0x0,-0x44(%ebp)
0821ff9b +0x5e1:  sete   %al
0821ff9e +0x5e4:  test   %al,%al
0821ffa0 +0x5e6:  je     0821ffcf <+0x615>
0821ffa2 +0x5e8:  movl   $0x4,(%esp)
0821ffa9 +0x5ef:  call   08725800 <__cxa_allocate_exception>
0821ffae +0x5f4:  mov    %eax,%edx
0821ffb0 +0x5f6:  movl   $0x16,(%edx)
0821ffb6 +0x5fc:  movl   $0x0,0x8(%esp)
0821ffbe +0x604:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821ffc6 +0x60c:  mov    %eax,(%esp)
0821ffc9 +0x60f:  call   08724c50 <__cxa_throw>
0821ffce +0x614:  nop
0821ffcf +0x615:  mov    0xc(%ebp),%eax
0821ffd2 +0x618:  mov    %eax,(%esp)
0821ffd5 +0x61b:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
0821ffda +0x620:  mov    %eax,%ebx
0821ffdc +0x622:  mov    -0x48(%ebp),%eax
0821ffdf +0x625:  mov    %eax,(%esp)
0821ffe2 +0x628:  call   0822cafa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21a4
0821ffe7 +0x62d:  cmp    %eax,%ebx
0821ffe9 +0x62f:  setb   %al
0821ffec +0x632:  test   %al,%al
0821ffee +0x634:  je     0822001c <+0x662>
0821fff0 +0x636:  movl   $0x4,(%esp)
0821fff7 +0x63d:  call   08725800 <__cxa_allocate_exception>
0821fffc +0x642:  mov    %eax,%edx
0821fffe +0x644:  movl   $0xb,(%edx)
08220004 +0x64a:  movl   $0x0,0x8(%esp)
0822000c +0x652:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220014 +0x65a:  mov    %eax,(%esp)
08220017 +0x65d:  call   08724c50 <__cxa_throw>
0822001c +0x662:  mov    0xc(%ebp),%eax
0822001f +0x665:  mov    %eax,(%esp)
08220022 +0x668:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08220027 +0x66d:  mov    %eax,(%esp)
0822002a +0x670:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0822002f +0x675:  mov    %eax,%ebx
08220031 +0x677:  mov    -0x48(%ebp),%eax
08220034 +0x67a:  mov    %eax,(%esp)
08220037 +0x67d:  call   0822cb06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21b0
0822003c +0x682:  cmp    %eax,%ebx
0822003e +0x684:  setl   %al
08220041 +0x687:  test   %al,%al
08220043 +0x689:  je     08220071 <+0x6b7>
08220045 +0x68b:  movl   $0x4,(%esp)
0822004c +0x692:  call   08725800 <__cxa_allocate_exception>
08220051 +0x697:  mov    %eax,%edx
08220053 +0x699:  movl   $0xa,(%edx)
08220059 +0x69f:  movl   $0x0,0x8(%esp)
08220061 +0x6a7:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220069 +0x6af:  mov    %eax,(%esp)
0822006c +0x6b2:  call   08724c50 <__cxa_throw>
08220071 +0x6b7:  mov    0xc(%ebp),%eax
08220074 +0x6ba:  mov    %eax,(%esp)
08220077 +0x6bd:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
0822007c +0x6c2:  mov    %eax,%ebx
0822007e +0x6c4:  mov    -0x48(%ebp),%eax
08220081 +0x6c7:  mov    %eax,(%esp)
08220084 +0x6ca:  call   0822cb12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21bc
08220089 +0x6cf:  cmp    %eax,%ebx
0822008b +0x6d1:  setb   %al
0822008e +0x6d4:  test   %al,%al
08220090 +0x6d6:  je     082200be <+0x704>
08220092 +0x6d8:  movl   $0x4,(%esp)
08220099 +0x6df:  call   08725800 <__cxa_allocate_exception>
0822009e +0x6e4:  mov    %eax,%edx
082200a0 +0x6e6:  movl   $0xc,(%edx)
082200a6 +0x6ec:  movl   $0x0,0x8(%esp)
082200ae +0x6f4:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082200b6 +0x6fc:  mov    %eax,(%esp)
082200b9 +0x6ff:  call   08724c50 <__cxa_throw>
082200be +0x704:  movl   $0x0,-0x30(%ebp)
082200c5 +0x70b:  mov    -0x48(%ebp),%eax
082200c8 +0x70e:  mov    %eax,0x8(%esp)
082200cc +0x712:  mov    0xc(%ebp),%eax
082200cf +0x715:  mov    %eax,0x4(%esp)
082200d3 +0x719:  mov    0x8(%ebp),%eax
082200d6 +0x71c:  mov    %eax,(%esp)
082200d9 +0x71f:  call   0821f7cc <_ZNK31Dispatcher_BuyCeraShopLimitItem18_checkBuyConditionEP5CUserPK17CItemLimitEdition>  ; Dispatcher_BuyCeraShopLimitItem::_checkBuyCondition(CUser*, CItemLimitEdition const*) const
082200de +0x724:  mov    %eax,-0x30(%ebp)
082200e1 +0x727:  cmpl   $0x0,-0x30(%ebp)
082200e5 +0x72b:  setne  %al
082200e8 +0x72e:  test   %al,%al
082200ea +0x730:  je     08220117 <+0x75d>
082200ec +0x732:  movl   $0x4,(%esp)
082200f3 +0x739:  call   08725800 <__cxa_allocate_exception>
082200f8 +0x73e:  mov    %eax,%edx
082200fa +0x740:  mov    -0x30(%ebp),%ecx
082200fd +0x743:  mov    %ecx,(%edx)
082200ff +0x745:  movl   $0x0,0x8(%esp)
08220107 +0x74d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0822010f +0x755:  mov    %eax,(%esp)
08220112 +0x758:  call   08724c50 <__cxa_throw>
08220117 +0x75d:  mov    -0x48(%ebp),%eax
0822011a +0x760:  mov    %eax,(%esp)
0822011d +0x763:  call   0822cab0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x215a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x215a
08220122 +0x768:  cbtw
08220124 +0x76a:  mov    %ax,-0x2a(%ebp)
08220128 +0x76e:  cmpl   $0x0,-0x44(%ebp)
0822012c +0x772:  je     08220215 <+0x85b>
08220132 +0x778:  mov    -0x44(%ebp),%eax
08220135 +0x77b:  mov    (%eax),%eax
08220137 +0x77d:  add    $0x10,%eax
0822013a +0x780:  mov    (%eax),%edx
0822013c +0x782:  mov    -0x44(%ebp),%eax
0822013f +0x785:  mov    %eax,(%esp)
08220142 +0x788:  call   *%edx
08220144 +0x78a:  test   %al,%al
08220146 +0x78c:  je     08220215 <+0x85b>
0822014c +0x792:  mov    -0x44(%ebp),%eax
0822014f +0x795:  test   %eax,%eax
08220151 +0x797:  jne    0822015a <+0x7a0>
08220153 +0x799:  mov    $0x0,%eax
08220158 +0x79e:  jmp    0822017a <+0x7c0>
0822015a +0x7a0:  movl   $0x0,0xc(%esp)
08220162 +0x7a8:  movl   $&_ZTI10CEquipItem,0x8(%esp)
0822016a +0x7b0:  movl   $&_ZTI5CItem,0x4(%esp)
08220172 +0x7b8:  mov    %eax,(%esp)
08220175 +0x7bb:  call   08725d90 <__dynamic_cast>
0822017a +0x7c0:  mov    %eax,-0x24(%ebp)
0822017d +0x7c3:  cmpl   $0x0,-0x24(%ebp)
08220181 +0x7c7:  je     08220215 <+0x85b>
08220187 +0x7cd:  mov    -0x48(%ebp),%eax
0822018a +0x7d0:  mov    %eax,(%esp)
0822018d +0x7d3:  call   0822cab0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x215a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x215a
08220192 +0x7d8:  cmp    $0xff,%al
08220194 +0x7da:  sete   %al
08220197 +0x7dd:  test   %al,%al
08220199 +0x7df:  je     08220215 <+0x85b>
0822019b +0x7e1:  mov    -0x24(%ebp),%eax
0822019e +0x7e4:  mov    %eax,(%esp)
082201a1 +0x7e7:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
082201a6 +0x7ec:  mov    %eax,-0x20(%ebp)
082201a9 +0x7ef:  lea    -0x58(%ebp),%eax
082201ac +0x7f2:  mov    -0x20(%ebp),%edx
082201af +0x7f5:  mov    %edx,0x4(%esp)
082201b3 +0x7f9:  mov    %eax,(%esp)
082201b6 +0x7fc:  call   081521fa <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1b2f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1b2f
082201bb +0x801:  sub    $0x4,%esp
082201be +0x804:  lea    -0x5c(%ebp),%eax
082201c1 +0x807:  mov    -0x20(%ebp),%edx
082201c4 +0x80a:  mov    %edx,0x4(%esp)
082201c8 +0x80e:  mov    %eax,(%esp)
082201cb +0x811:  call   08152226 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1b5b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1b5b
082201d0 +0x816:  sub    $0x4,%esp
082201d3 +0x819:  jmp    082201fc <+0x842>
082201d5 +0x81b:  addw   $0x1,-0x2a(%ebp)
082201da +0x820:  lea    -0x58(%ebp),%eax
082201dd +0x823:  mov    %eax,(%esp)
082201e0 +0x826:  call   08152294 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1bc9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1bc9
082201e5 +0x82b:  mov    0x10(%eax),%eax
082201e8 +0x82e:  test   %eax,%eax
082201ea +0x830:  setg   %al
082201ed +0x833:  test   %al,%al
082201ef +0x835:  jne    08220214 <+0x85a>
082201f1 +0x837:  lea    -0x58(%ebp),%eax
082201f4 +0x83a:  mov    %eax,(%esp)
082201f7 +0x83d:  call   0815227e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1bb3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1bb3
082201fc +0x842:  lea    -0x5c(%ebp),%eax
082201ff +0x845:  mov    %eax,0x4(%esp)
08220203 +0x849:  lea    -0x58(%ebp),%eax
08220206 +0x84c:  mov    %eax,(%esp)
08220209 +0x84f:  call   08152252 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1b87>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1b87
0822020e +0x854:  test   %al,%al
08220210 +0x856:  jne    082201d5 <+0x81b>
08220212 +0x858:  jmp    08220215 <+0x85b>
08220214 +0x85a:  nop
08220215 +0x85b:  movzwl -0x2a(%ebp),%eax
08220219 +0x85f:  movzwl %ax,%eax
0822021c +0x862:  mov    %eax,-0x23c(%ebp)
08220222 +0x868:  movzbl -0x226(%ebp),%eax
08220229 +0x86f:  movzbl %al,%edi
0822022c +0x872:  movzwl -0x2a(%ebp),%eax
08220230 +0x876:  movzwl %ax,%esi
08220233 +0x879:  mov    -0x48(%ebp),%eax
08220236 +0x87c:  mov    %eax,(%esp)
08220239 +0x87f:  call   0822ca98 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2142>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2142
0822023e +0x884:  mov    %eax,%ebx
08220240 +0x886:  mov    -0x48(%ebp),%eax
08220243 +0x889:  mov    %eax,(%esp)
08220246 +0x88c:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
0822024b +0x891:  mov    %eax,-0x24c(%ebp)
08220251 +0x897:  mov    -0x22a(%ebp),%ecx
08220257 +0x89d:  mov    &_ZN10GlobalData11s_pCeraShopE,%edx
0822025d +0x8a3:  mov    -0x23c(%ebp),%eax
08220263 +0x8a9:  mov    %eax,0x1c(%esp)
08220267 +0x8ad:  mov    %edi,0x18(%esp)
0822026b +0x8b1:  mov    %esi,0x14(%esp)
0822026f +0x8b5:  mov    %ebx,0x10(%esp)
08220273 +0x8b9:  mov    -0x24c(%ebp),%eax
08220279 +0x8bf:  mov    %eax,0xc(%esp)
0822027d +0x8c3:  mov    %ecx,0x8(%esp)
08220281 +0x8c7:  mov    0xc(%ebp),%eax
08220284 +0x8ca:  mov    %eax,0x4(%esp)
08220288 +0x8ce:  mov    %edx,(%esp)
0822028b +0x8d1:  call   08323f2a <_ZN8WongWork9CCeraShop20checkBuyingConditionEP5CUserjmjtht>  ; WongWork::CCeraShop::checkBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)
08220290 +0x8d6:  xor    $0x1,%eax
08220293 +0x8d9:  test   %al,%al
08220295 +0x8db:  je     082202c3 <+0x909>
08220297 +0x8dd:  movl   $0x4,(%esp)
0822029e +0x8e4:  call   08725800 <__cxa_allocate_exception>
082202a3 +0x8e9:  mov    %eax,%edx
082202a5 +0x8eb:  movl   $0x7,(%edx)
082202ab +0x8f1:  movl   $0x0,0x8(%esp)
082202b3 +0x8f9:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082202bb +0x901:  mov    %eax,(%esp)
082202be +0x904:  call   08724c50 <__cxa_throw>
082202c3 +0x909:  movb   $0x0,-0x49(%ebp)
082202c7 +0x90d:  movl   $0x0,-0x50(%ebp)
082202ce +0x914:  movl   $0x0,-0x54(%ebp)
082202d5 +0x91b:  mov    -0x48(%ebp),%eax
082202d8 +0x91e:  mov    %eax,(%esp)
082202db +0x921:  call   0817a09c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x11a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x11a
082202e0 +0x926:  mov    %eax,-0x28(%ebp)
082202e3 +0x929:  cmpl   $0x0,-0x28(%ebp)
082202e7 +0x92d:  jne    08220327 <+0x96d>
082202e9 +0x92f:  mov    -0x48(%ebp),%eax
082202ec +0x932:  mov    %eax,(%esp)
082202ef +0x935:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
082202f4 +0x93a:  mov    %eax,%edx
082202f6 +0x93c:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
082202fb +0x941:  lea    -0x49(%ebp),%ecx
082202fe +0x944:  mov    %ecx,0x10(%esp)
08220302 +0x948:  lea    -0x54(%ebp),%ecx
08220305 +0x94b:  mov    %ecx,0xc(%esp)
08220309 +0x94f:  lea    -0x50(%ebp),%ecx
0822030c +0x952:  mov    %ecx,0x8(%esp)
08220310 +0x956:  mov    %edx,0x4(%esp)
08220314 +0x95a:  mov    %eax,(%esp)
08220317 +0x95d:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
0822031c +0x962:  test   %al,%al
0822031e +0x964:  je     08220327 <+0x96d>
08220320 +0x966:  mov    $0x1,%eax
08220325 +0x96b:  jmp    0822032c <+0x972>
08220327 +0x96d:  mov    $0x0,%eax
0822032c +0x972:  test   %al,%al
0822032e +0x974:  je     08220354 <+0x99a>
08220330 +0x976:  mov    -0x48(%ebp),%eax
08220333 +0x979:  mov    %eax,(%esp)
08220336 +0x97c:  call   0817a090 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x10e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x10e
0822033b +0x981:  mov    %eax,%ebx
0822033d +0x983:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08220342 +0x988:  mov    0xc(%eax),%eax
08220345 +0x98b:  mov    %ebx,0x4(%esp)
08220349 +0x98f:  mov    %eax,(%esp)
0822034c +0x992:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08220351 +0x997:  mov    %eax,-0x28(%ebp)
08220354 +0x99a:  cmpl   $0x0,-0x28(%ebp)
08220358 +0x99e:  je     082203ae <+0x9f4>
0822035a +0x9a0:  mov    -0x28(%ebp),%eax
0822035d +0x9a3:  mov    %eax,0x4(%esp)
08220361 +0x9a7:  mov    0xc(%ebp),%eax
08220364 +0x9aa:  mov    %eax,(%esp)
08220367 +0x9ad:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
0822036c +0x9b2:  test   %al,%al
0822036e +0x9b4:  je     0822039c <+0x9e2>
08220370 +0x9b6:  movl   $0x4,(%esp)
08220377 +0x9bd:  call   08725800 <__cxa_allocate_exception>
0822037c +0x9c2:  mov    %eax,%edx
0822037e +0x9c4:  movl   $0x12,(%edx)
08220384 +0x9ca:  movl   $0x0,0x8(%esp)
0822038c +0x9d2:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08220394 +0x9da:  mov    %eax,(%esp)
08220397 +0x9dd:  call   08724c50 <__cxa_throw>
0822039c +0x9e2:  mov    -0x28(%ebp),%eax
0822039f +0x9e5:  mov    %eax,0x4(%esp)
082203a3 +0x9e9:  mov    0xc(%ebp),%eax
082203a6 +0x9ec:  mov    %eax,(%esp)
082203a9 +0x9ef:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
082203ae +0x9f4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082203b5 +0x9fb:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082203ba +0xa00:  mov    0xc(%ebp),%edx
082203bd +0xa03:  mov    %eax,0x4(%esp)
082203c1 +0xa07:  mov    %edx,(%esp)
082203c4 +0xa0a:  call   0822f9ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5096>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5096
082203c9 +0xa0f:  mov    0xc(%ebp),%eax
082203cc +0xa12:  mov    %eax,(%esp)
082203cf +0xa15:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082203d4 +0xa1a:  mov    %eax,-0x22e(%ebp)
082203da +0xa20:  movzwl -0x236(%ebp),%eax
082203e1 +0xa27:  movzwl %ax,%esi
082203e4 +0xa2a:  lea    -0x238(%ebp),%ebx
082203ea +0xa30:  mov    0xc(%ebp),%eax
082203ed +0xa33:  mov    %eax,(%esp)
082203f0 +0xa36:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082203f5 +0xa3b:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
082203fb +0xa41:  mov    %eax,0x4(%esp)
082203ff +0xa45:  mov    %edx,(%esp)
08220402 +0xa48:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08220407 +0xa4d:  mov    %esi,0x8(%esp)
0822040b +0xa51:  mov    %ebx,0x4(%esp)
0822040f +0xa55:  mov    %eax,(%esp)
08220412 +0xa58:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08220417 +0xa5d:  mov    $0x0,%ebx
0822041c +0xa62:  jmp    08220476 <+0xabc>
0822041e +0xa64:  cmp    $0x1,%edx
08220421 +0xa67:  je     0822042b <+0xa71>
08220423 +0xa69:  mov    %eax,(%esp)
08220426 +0xa6c:  call   08ae3750 <_Unwind_Resume>
0822042b +0xa71:  mov    %eax,(%esp)
0822042e +0xa74:  call   08725ce0 <__cxa_begin_catch>
08220433 +0xa79:  mov    (%eax),%eax
08220435 +0xa7b:  mov    %eax,-0x1c(%ebp)
08220438 +0xa7e:  mov    -0x1c(%ebp),%eax
0822043b +0xa81:  movzbl %al,%eax
0822043e +0xa84:  mov    %eax,0x8(%esp)
08220442 +0xa88:  movl   $0x100,0x4(%esp)
0822044a +0xa90:  mov    0xc(%ebp),%eax
0822044d +0xa93:  mov    %eax,(%esp)
08220450 +0xa96:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08220455 +0xa9b:  mov    $0x0,%ebx
0822045a +0xaa0:  call   08725c30 <__cxa_end_catch>
0822045f +0xaa5:  jmp    08220476 <+0xabc>
08220461 +0xaa7:  mov    %edx,%ebx
08220463 +0xaa9:  mov    %eax,%esi
08220465 +0xaab:  call   08725c30 <__cxa_end_catch>
0822046a +0xab0:  mov    %esi,%eax
0822046c +0xab2:  mov    %ebx,%edx
0822046e +0xab4:  mov    %eax,(%esp)
08220471 +0xab7:  call   08ae3750 <_Unwind_Resume>
08220476 +0xabc:  mov    %ebx,%eax
08220478 +0xabe:  lea    -0xc(%ebp),%esp
0822047b +0xac1:  add    $0x0,%esp
0822047e +0xac4:  pop    %ebx
0822047f +0xac5:  pop    %esi
08220480 +0xac6:  pop    %edi
08220481 +0xac7:  pop    %ebp
08220482 +0xac8:  ret
08220483 +0xac9:  nop
```

## 反编译 C

```c
// Dispatcher_BuyCeraShopLimitItem::dispatch_sig @ 0x821f9ba

/* Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyCeraShopLimitItem::dispatch_sig
          (Dispatcher_BuyCeraShopLimitItem *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  CDataManager *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  CInventory *this_00;
  ulong uVar12;
  long lVar13;
  CMonitorServerProxy *this_01;
  Packet_Item_Limit_Edition_Buyable_Query local_23c [2];
  ushort local_23a;
  ulong uStack_238;
  ushort uStack_234;
  undefined4 local_232;
  uint local_22e;
  uchar local_22a;
  byte local_229;
  ulong uStack_228;
  uchar auStack_224 [171];
  byte local_179;
  ulong uStack_178;
  ushort auStack_174 [138];
  __normal_iterator local_60 [4];
  __normal_iterator<stAvatarTypeSelect_t_const*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
  local_5c [4];
  int local_58 [2];
  bool local_4d;
  CItemLimitEdition *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort local_2e;
  int local_2c;
  CEquipItem *local_28;
  undefined4 local_24;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 < 3) {
    uVar5 = LineFunc(0xd887,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  Packet_Item_Limit_Edition_Buyable_Query::Packet_Item_Limit_Edition_Buyable_Query(local_23c);
  cVar2 = PacketBuf::get_int(param_2,&local_22e);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xd88c,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_22a);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xd88d,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_229);
  if ((cVar2 == '\x01') && (local_229 < 0x24)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = LineFunc(0xd890,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  for (local_44 = 0; local_44 < (int)(uint)local_229; local_44 = local_44 + 1) {
    cVar2 = PacketBuf::get_item_idx(param_2,(ulong *)((int)&uStack_228 + local_44 * 5));
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd894,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar2 = PacketBuf::get_byte(param_2,auStack_224 + local_44 * 5);
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd895,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_179);
  if ((cVar2 == '\x01') && (local_179 < 0x24)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = LineFunc(0xd89d,
                     "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  for (local_40 = 0; local_40 < (int)(uint)local_179; local_40 = local_40 + 1) {
    cVar2 = PacketBuf::get_item_idx(param_2,&uStack_238 + (local_40 + 0x18) * 2);
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd8a1,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_234 + (local_40 + 0x18) * 4);
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd8a2,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar2 = PacketBuf::get_short(param_2,(ushort *)(&local_232 + (local_40 + 0x18) * 2));
    if (cVar2 != '\x01') {
      uVar5 = LineFunc(0xd8a3,
                       "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
  }
  for (local_3c = 0; local_3c < (int)(uint)local_179; local_3c = local_3c + 1) {
    for (local_38 = local_3c + 1; local_38 < (int)(uint)local_179; local_38 = local_38 + 1) {
      if (((&uStack_238)[(local_3c + 0x18) * 2] == (&uStack_238)[(local_38 + 0x18) * 2]) &&
         ((&uStack_234)[(local_3c + 0x18) * 4] == (&uStack_234)[(local_38 + 0x18) * 4])) {
        uVar5 = LineFunc(0xd8ac,
                         "virtual int Dispatcher_BuyCeraShopLimitItem::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
    }
  }
  local_4c = (CItemLimitEdition *)0x0;
  local_48 = (int *)0x0;
                    /* try { // try from 0821fe4b to 082203ad has its CatchHandler @ 0822041e */
  local_34 = _checkUserState(this,param_1);
  uVar11 = local_22e;
  if (local_34 != 0) {
    piVar6 = (int *)__cxa_allocate_exception(4);
    *piVar6 = local_34;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar6,&ENUM_ERROR::typeinfo,0);
  }
  pCVar7 = (CDataManager *)G_CDataManager();
  uVar8 = CDataManager::getItemLimitEditionMgr(pCVar7);
  local_4c = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar8);
  if (local_4c == (CItemLimitEdition *)0x0) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar11);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CItemLimitEdition::isSellComplete(local_4c);
  if (cVar2 != '\0') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar11);
    *puVar9 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItemLimitEdition::getSellEndTime(local_4c);
  iVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar4 < iVar10) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar11);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItemLimitEdition::getRelateditem(local_4c);
  if (iVar4 != 1) {
    iVar4 = CItemLimitEdition::getRelateditem(local_4c);
    pCVar7 = (CDataManager *)G_CDataManager();
    local_48 = (int *)CDataManager::find_item(pCVar7,iVar4);
    if (local_48 == (int *)0x0) {
      puVar9 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
    }
  }
  uVar11 = CUser::GetCera(param_1);
  uVar8 = CItemLimitEdition::getPriceCera(local_4c);
  if (uVar11 < uVar8) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xb;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar4 = CInventory::get_money(this_00);
  iVar10 = CItemLimitEdition::getPriceGold(local_4c);
  if (iVar4 < iVar10) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  uVar11 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
  uVar8 = CItemLimitEdition::getPriceWinPoint();
  if (uVar11 < uVar8) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xc;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  local_34 = 0;
  local_34 = _checkBuyCondition(this,param_1,local_4c);
  if (local_34 != 0) {
    piVar6 = (int *)__cxa_allocate_exception(4);
    *piVar6 = local_34;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CItemLimitEdition::getAvatarTypeSelect(local_4c);
  local_2e = (ushort)cVar2;
  if ((local_48 != (int *)0x0) && (cVar2 = (**(code **)(*local_48 + 0x10))(local_48), cVar2 != '\0')
     ) {
    if (local_48 == (int *)0x0) {
      local_28 = (CEquipItem *)0x0;
    }
    else {
      local_28 = (CEquipItem *)__dynamic_cast(local_48,&CItem::typeinfo,&CEquipItem::typeinfo,0);
    }
    if ((local_28 != (CEquipItem *)0x0) &&
       (cVar2 = CItemLimitEdition::getAvatarTypeSelect(local_4c), cVar2 == -1)) {
      local_24 = CEquipItem::getAvatarTypeSelect(local_28);
      std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::begin();
      std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::end();
      while (bVar3 = __gnu_cxx::operator!=(local_5c,local_60), bVar3) {
        local_2e = local_2e + 1;
        iVar4 = __gnu_cxx::
                __normal_iterator<stAvatarTypeSelect_t_const*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
                ::operator->(local_5c);
        if (0 < *(int *)(iVar4 + 0x10)) break;
        __gnu_cxx::
        __normal_iterator<stAvatarTypeSelect_t_const*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
        ::operator++(local_5c);
      }
    }
  }
  uVar1 = local_2e;
  uVar11 = CItemLimitEdition::getRelatedItemCnt(local_4c);
  uVar12 = CItemLimitEdition::getRelateditem(local_4c);
  cVar2 = WongWork::CCeraShop::checkBuyingCondition
                    (GlobalData::s_pCeraShop,param_1,local_22e,uVar12,uVar11,uVar1,local_22a,uVar1);
  if (cVar2 != '\x01') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  local_4d = false;
  local_58[1] = 0;
  local_58[0] = 0;
  local_2c = CItemLimitEdition::getFeaturedIdx(local_4c);
  if (local_2c == 0) {
    iVar4 = CItemLimitEdition::getRelateditem(local_4c);
    cVar2 = WongWork::CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,iVar4,local_58 + 1,local_58,&local_4d);
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_0822032c;
    }
  }
  bVar3 = false;
LAB_0822032c:
  if (bVar3) {
    iVar4 = CItemLimitEdition::getRelateditem(local_4c);
    iVar10 = G_CDataManager();
    local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar10 + 0xc),iVar4);
  }
  if (local_2c != 0) {
    cVar2 = CUser::IsRestrictedGoods(param_1,local_2c);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar9 = 0x12;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
    }
    CUser::SetRestrictedGoods(param_1,local_2c);
  }
  lVar13 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::updateLastItemLimitEditionBuyTime((CUserCharacInfo *)param_1,lVar13);
  local_232 = CUser::GetUID(param_1);
  uVar5 = CUser::GetServerGroup(param_1);
  this_01 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar5);
  CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_23c,(uint)local_23a);
  return 0;
}
```
