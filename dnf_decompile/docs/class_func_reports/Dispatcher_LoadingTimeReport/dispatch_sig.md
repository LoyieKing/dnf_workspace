# dispatch_sig

`_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LoadingTimeReport` | `0x0821efec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821efec  _ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821efec, 0x0821f611]
0821efec +0x000:  push   %ebp
0821efed +0x001:  mov    %esp,%ebp
0821efef +0x003:  push   %ebx
0821eff0 +0x004:  sub    $0x834,%esp
0821eff6 +0x00a:  lea    -0x820(%ebp),%eax
0821effc +0x010:  mov    %eax,(%esp)
0821efff +0x013:  call   0822c040 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x16ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x16ea
0821f004 +0x018:  movw   $0x0,-0x16(%ebp)
0821f00a +0x01e:  movl   $0x0,-0x14(%ebp)
0821f011 +0x025:  jmp    0821f5bd <+0x5d1>
0821f016 +0x02a:  lea    -0x16(%ebp),%eax
0821f019 +0x02d:  mov    %eax,0x4(%esp)
0821f01d +0x031:  mov    0x10(%ebp),%eax
0821f020 +0x034:  mov    %eax,(%esp)
0821f023 +0x037:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f028 +0x03c:  xor    $0x1,%eax
0821f02b +0x03f:  test   %al,%al
0821f02d +0x041:  je     0821f058 <+0x6c>
0821f02f +0x043:  movl   $0x0,0xc(%esp)
0821f037 +0x04b:  movl   $0x0,0x8(%esp)
0821f03f +0x053:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f047 +0x05b:  movl   $0xd7fe,(%esp)
0821f04e +0x062:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f053 +0x067:  jmp    0821f608 <+0x61c>
0821f058 +0x06c:  movzwl -0x16(%ebp),%eax
0821f05c +0x070:  cmp    $0x8,%ax
0821f060 +0x074:  jbe    0821f08b <+0x9f>
0821f062 +0x076:  movl   $0x0,0xc(%esp)
0821f06a +0x07e:  movl   $0x0,0x8(%esp)
0821f072 +0x086:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f07a +0x08e:  movl   $0xd800,(%esp)
0821f081 +0x095:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f086 +0x09a:  jmp    0821f608 <+0x61c>
0821f08b +0x09f:  movzwl -0x16(%ebp),%eax
0821f08f +0x0a3:  cmp    $0x6,%ax
0821f093 +0x0a7:  ja     0821f0e9 <+0xfd>
0821f095 +0x0a9:  movzwl -0x16(%ebp),%eax
0821f099 +0x0ad:  movzwl %ax,%edx
0821f09c +0x0b0:  lea    -0x820(%ebp),%eax
0821f0a2 +0x0b6:  shl    $0x2,%edx
0821f0a5 +0x0b9:  add    %edx,%eax
0821f0a7 +0x0bb:  add    $0xa,%eax
0821f0aa +0x0be:  mov    %eax,0x4(%esp)
0821f0ae +0x0c2:  mov    0x10(%ebp),%eax
0821f0b1 +0x0c5:  mov    %eax,(%esp)
0821f0b4 +0x0c8:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0821f0b9 +0x0cd:  xor    $0x1,%eax
0821f0bc +0x0d0:  test   %al,%al
0821f0be +0x0d2:  je     0821f0e9 <+0xfd>
0821f0c0 +0x0d4:  movl   $0x0,0xc(%esp)
0821f0c8 +0x0dc:  movl   $0x0,0x8(%esp)
0821f0d0 +0x0e4:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f0d8 +0x0ec:  movl   $0xd806,(%esp)
0821f0df +0x0f3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f0e4 +0x0f8:  jmp    0821f608 <+0x61c>
0821f0e9 +0x0fd:  mov    0xc(%ebp),%eax
0821f0ec +0x100:  mov    %eax,(%esp)
0821f0ef +0x103:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821f0f4 +0x108:  mov    %eax,-0x7f2(%ebp)
0821f0fa +0x10e:  movzwl -0x16(%ebp),%eax
0821f0fe +0x112:  cmp    $0x7,%ax
0821f102 +0x116:  jne    0821f37b <+0x38f>
0821f108 +0x11c:  movw   $0x0,-0x18(%ebp)
0821f10e +0x122:  lea    -0x18(%ebp),%eax
0821f111 +0x125:  mov    %eax,0x4(%esp)
0821f115 +0x129:  mov    0x10(%ebp),%eax
0821f118 +0x12c:  mov    %eax,(%esp)
0821f11b +0x12f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821f120 +0x134:  xor    $0x1,%eax
0821f123 +0x137:  test   %al,%al
0821f125 +0x139:  je     0821f150 <+0x164>
0821f127 +0x13b:  movl   $0x0,0xc(%esp)
0821f12f +0x143:  movl   $0x0,0x8(%esp)
0821f137 +0x14b:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f13f +0x153:  movl   $0xd80c,(%esp)
0821f146 +0x15a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f14b +0x15f:  jmp    0821f608 <+0x61c>
0821f150 +0x164:  movzwl -0x18(%ebp),%eax
0821f154 +0x168:  cmp    $0x63,%ax
0821f158 +0x16c:  jle    0821f183 <+0x197>
0821f15a +0x16e:  movl   $0x0,0xc(%esp)
0821f162 +0x176:  movl   $0x0,0x8(%esp)
0821f16a +0x17e:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f172 +0x186:  movl   $0xd80d,(%esp)
0821f179 +0x18d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f17e +0x192:  jmp    0821f608 <+0x61c>
0821f183 +0x197:  movzwl -0x18(%ebp),%eax
0821f187 +0x19b:  mov    %ax,-0x7ee(%ebp)
0821f18e +0x1a2:  movl   $0x0,-0x10(%ebp)
0821f195 +0x1a9:  jmp    0821f356 <+0x36a>
0821f19a +0x1ae:  mov    -0x10(%ebp),%edx
0821f19d +0x1b1:  lea    -0x820(%ebp),%ecx
0821f1a3 +0x1b7:  mov    %edx,%eax
0821f1a5 +0x1b9:  shl    $0x3,%eax
0821f1a8 +0x1bc:  add    %edx,%eax
0821f1aa +0x1be:  add    $0x30,%eax
0821f1ad +0x1c1:  lea    (%ecx,%eax,1),%eax
0821f1b0 +0x1c4:  add    $0x4,%eax
0821f1b3 +0x1c7:  mov    %eax,0x4(%esp)
0821f1b7 +0x1cb:  mov    0x10(%ebp),%eax
0821f1ba +0x1ce:  mov    %eax,(%esp)
0821f1bd +0x1d1:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f1c2 +0x1d6:  xor    $0x1,%eax
0821f1c5 +0x1d9:  test   %al,%al
0821f1c7 +0x1db:  je     0821f1f2 <+0x206>
0821f1c9 +0x1dd:  movl   $0x0,0xc(%esp)
0821f1d1 +0x1e5:  movl   $0x0,0x8(%esp)
0821f1d9 +0x1ed:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f1e1 +0x1f5:  movl   $0xd811,(%esp)
0821f1e8 +0x1fc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f1ed +0x201:  jmp    0821f608 <+0x61c>
0821f1f2 +0x206:  mov    -0x10(%ebp),%edx
0821f1f5 +0x209:  lea    -0x820(%ebp),%ecx
0821f1fb +0x20f:  mov    %edx,%eax
0821f1fd +0x211:  shl    $0x3,%eax
0821f200 +0x214:  add    %edx,%eax
0821f202 +0x216:  add    $0x30,%eax
0821f205 +0x219:  lea    (%ecx,%eax,1),%eax
0821f208 +0x21c:  add    $0x6,%eax
0821f20b +0x21f:  mov    %eax,0x4(%esp)
0821f20f +0x223:  mov    0x10(%ebp),%eax
0821f212 +0x226:  mov    %eax,(%esp)
0821f215 +0x229:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821f21a +0x22e:  xor    $0x1,%eax
0821f21d +0x231:  test   %al,%al
0821f21f +0x233:  je     0821f24a <+0x25e>
0821f221 +0x235:  movl   $0x0,0xc(%esp)
0821f229 +0x23d:  movl   $0x0,0x8(%esp)
0821f231 +0x245:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f239 +0x24d:  movl   $0xd812,(%esp)
0821f240 +0x254:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f245 +0x259:  jmp    0821f608 <+0x61c>
0821f24a +0x25e:  mov    -0x10(%ebp),%edx
0821f24d +0x261:  lea    -0x820(%ebp),%ecx
0821f253 +0x267:  mov    %edx,%eax
0821f255 +0x269:  shl    $0x3,%eax
0821f258 +0x26c:  add    %edx,%eax
0821f25a +0x26e:  add    $0x30,%eax
0821f25d +0x271:  lea    (%ecx,%eax,1),%eax
0821f260 +0x274:  add    $0x7,%eax
0821f263 +0x277:  mov    %eax,0x4(%esp)
0821f267 +0x27b:  mov    0x10(%ebp),%eax
0821f26a +0x27e:  mov    %eax,(%esp)
0821f26d +0x281:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f272 +0x286:  xor    $0x1,%eax
0821f275 +0x289:  test   %al,%al
0821f277 +0x28b:  je     0821f2a2 <+0x2b6>
0821f279 +0x28d:  movl   $0x0,0xc(%esp)
0821f281 +0x295:  movl   $0x0,0x8(%esp)
0821f289 +0x29d:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f291 +0x2a5:  movl   $0xd813,(%esp)
0821f298 +0x2ac:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f29d +0x2b1:  jmp    0821f608 <+0x61c>
0821f2a2 +0x2b6:  mov    -0x10(%ebp),%edx
0821f2a5 +0x2b9:  lea    -0x820(%ebp),%ecx
0821f2ab +0x2bf:  mov    %edx,%eax
0821f2ad +0x2c1:  shl    $0x3,%eax
0821f2b0 +0x2c4:  add    %edx,%eax
0821f2b2 +0x2c6:  add    $0x30,%eax
0821f2b5 +0x2c9:  lea    (%ecx,%eax,1),%eax
0821f2b8 +0x2cc:  add    $0x9,%eax
0821f2bb +0x2cf:  mov    %eax,0x4(%esp)
0821f2bf +0x2d3:  mov    0x10(%ebp),%eax
0821f2c2 +0x2d6:  mov    %eax,(%esp)
0821f2c5 +0x2d9:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f2ca +0x2de:  xor    $0x1,%eax
0821f2cd +0x2e1:  test   %al,%al
0821f2cf +0x2e3:  je     0821f2fa <+0x30e>
0821f2d1 +0x2e5:  movl   $0x0,0xc(%esp)
0821f2d9 +0x2ed:  movl   $0x0,0x8(%esp)
0821f2e1 +0x2f5:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f2e9 +0x2fd:  movl   $0xd814,(%esp)
0821f2f0 +0x304:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f2f5 +0x309:  jmp    0821f608 <+0x61c>
0821f2fa +0x30e:  mov    -0x10(%ebp),%edx
0821f2fd +0x311:  lea    -0x820(%ebp),%ecx
0821f303 +0x317:  mov    %edx,%eax
0821f305 +0x319:  shl    $0x3,%eax
0821f308 +0x31c:  add    %edx,%eax
0821f30a +0x31e:  add    $0x30,%eax
0821f30d +0x321:  lea    (%ecx,%eax,1),%eax
0821f310 +0x324:  add    $0xb,%eax
0821f313 +0x327:  mov    %eax,0x4(%esp)
0821f317 +0x32b:  mov    0x10(%ebp),%eax
0821f31a +0x32e:  mov    %eax,(%esp)
0821f31d +0x331:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f322 +0x336:  xor    $0x1,%eax
0821f325 +0x339:  test   %al,%al
0821f327 +0x33b:  je     0821f352 <+0x366>
0821f329 +0x33d:  movl   $0x0,0xc(%esp)
0821f331 +0x345:  movl   $0x0,0x8(%esp)
0821f339 +0x34d:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f341 +0x355:  movl   $0xd815,(%esp)
0821f348 +0x35c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f34d +0x361:  jmp    0821f608 <+0x61c>
0821f352 +0x366:  addl   $0x1,-0x10(%ebp)
0821f356 +0x36a:  movzwl -0x18(%ebp),%eax
0821f35a +0x36e:  cwtl
0821f35b +0x36f:  cmp    -0x10(%ebp),%eax
0821f35e +0x372:  setg   %al
0821f361 +0x375:  test   %al,%al
0821f363 +0x377:  jne    0821f19a <+0x1ae>
0821f369 +0x37d:  movzwl -0x16(%ebp),%eax
0821f36d +0x381:  movzwl %ax,%eax
0821f370 +0x384:  movl   $0x0,-0x816(%ebp,%eax,4)
0821f37b +0x38f:  movzwl -0x16(%ebp),%eax
0821f37f +0x393:  cmp    $0x8,%ax
0821f383 +0x397:  jne    0821f5b9 <+0x5cd>
0821f389 +0x39d:  movw   $0x0,-0x1a(%ebp)
0821f38f +0x3a3:  lea    -0x1a(%ebp),%eax
0821f392 +0x3a6:  mov    %eax,0x4(%esp)
0821f396 +0x3aa:  mov    0x10(%ebp),%eax
0821f399 +0x3ad:  mov    %eax,(%esp)
0821f39c +0x3b0:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821f3a1 +0x3b5:  xor    $0x1,%eax
0821f3a4 +0x3b8:  test   %al,%al
0821f3a6 +0x3ba:  je     0821f3d1 <+0x3e5>
0821f3a8 +0x3bc:  movl   $0x0,0xc(%esp)
0821f3b0 +0x3c4:  movl   $0x0,0x8(%esp)
0821f3b8 +0x3cc:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f3c0 +0x3d4:  movl   $0xd81c,(%esp)
0821f3c7 +0x3db:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f3cc +0x3e0:  jmp    0821f608 <+0x61c>
0821f3d1 +0x3e5:  movzwl -0x1a(%ebp),%eax
0821f3d5 +0x3e9:  cmp    $0x63,%ax
0821f3d9 +0x3ed:  jle    0821f404 <+0x418>
0821f3db +0x3ef:  movl   $0x0,0xc(%esp)
0821f3e3 +0x3f7:  movl   $0x0,0x8(%esp)
0821f3eb +0x3ff:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f3f3 +0x407:  movl   $0xd81d,(%esp)
0821f3fa +0x40e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f3ff +0x413:  jmp    0821f608 <+0x61c>
0821f404 +0x418:  movzwl -0x1a(%ebp),%eax
0821f408 +0x41c:  mov    %ax,-0x468(%ebp)
0821f40f +0x423:  movl   $0x0,-0xc(%ebp)
0821f416 +0x42a:  jmp    0821f594 <+0x5a8>
0821f41b +0x42f:  mov    -0xc(%ebp),%edx
0821f41e +0x432:  lea    -0x820(%ebp),%ecx
0821f424 +0x438:  mov    %edx,%eax
0821f426 +0x43a:  shl    $0x2,%eax
0821f429 +0x43d:  add    %edx,%eax
0821f42b +0x43f:  add    %eax,%eax
0821f42d +0x441:  add    %edx,%eax
0821f42f +0x443:  add    $0x3b0,%eax
0821f434 +0x448:  lea    (%ecx,%eax,1),%eax
0821f437 +0x44b:  add    $0xa,%eax
0821f43a +0x44e:  mov    %eax,0x4(%esp)
0821f43e +0x452:  mov    0x10(%ebp),%eax
0821f441 +0x455:  mov    %eax,(%esp)
0821f444 +0x458:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821f449 +0x45d:  xor    $0x1,%eax
0821f44c +0x460:  test   %al,%al
0821f44e +0x462:  je     0821f479 <+0x48d>
0821f450 +0x464:  movl   $0x0,0xc(%esp)
0821f458 +0x46c:  movl   $0x0,0x8(%esp)
0821f460 +0x474:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f468 +0x47c:  movl   $0xd821,(%esp)
0821f46f +0x483:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f474 +0x488:  jmp    0821f608 <+0x61c>
0821f479 +0x48d:  mov    -0xc(%ebp),%edx
0821f47c +0x490:  lea    -0x820(%ebp),%ecx
0821f482 +0x496:  mov    %edx,%eax
0821f484 +0x498:  shl    $0x2,%eax
0821f487 +0x49b:  add    %edx,%eax
0821f489 +0x49d:  add    %eax,%eax
0821f48b +0x49f:  add    %edx,%eax
0821f48d +0x4a1:  add    $0x3b0,%eax
0821f492 +0x4a6:  lea    (%ecx,%eax,1),%eax
0821f495 +0x4a9:  add    $0xc,%eax
0821f498 +0x4ac:  mov    %eax,0x4(%esp)
0821f49c +0x4b0:  mov    0x10(%ebp),%eax
0821f49f +0x4b3:  mov    %eax,(%esp)
0821f4a2 +0x4b6:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821f4a7 +0x4bb:  xor    $0x1,%eax
0821f4aa +0x4be:  test   %al,%al
0821f4ac +0x4c0:  je     0821f4d7 <+0x4eb>
0821f4ae +0x4c2:  movl   $0x0,0xc(%esp)
0821f4b6 +0x4ca:  movl   $0x0,0x8(%esp)
0821f4be +0x4d2:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f4c6 +0x4da:  movl   $0xd822,(%esp)
0821f4cd +0x4e1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f4d2 +0x4e6:  jmp    0821f608 <+0x61c>
0821f4d7 +0x4eb:  mov    -0xc(%ebp),%edx
0821f4da +0x4ee:  lea    -0x820(%ebp),%ecx
0821f4e0 +0x4f4:  mov    %edx,%eax
0821f4e2 +0x4f6:  shl    $0x2,%eax
0821f4e5 +0x4f9:  add    %edx,%eax
0821f4e7 +0x4fb:  add    %eax,%eax
0821f4e9 +0x4fd:  add    %edx,%eax
0821f4eb +0x4ff:  add    $0x3b0,%eax
0821f4f0 +0x504:  lea    (%ecx,%eax,1),%eax
0821f4f3 +0x507:  add    $0xd,%eax
0821f4f6 +0x50a:  mov    %eax,0x4(%esp)
0821f4fa +0x50e:  mov    0x10(%ebp),%eax
0821f4fd +0x511:  mov    %eax,(%esp)
0821f500 +0x514:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0821f505 +0x519:  xor    $0x1,%eax
0821f508 +0x51c:  test   %al,%al
0821f50a +0x51e:  je     0821f535 <+0x549>
0821f50c +0x520:  movl   $0x0,0xc(%esp)
0821f514 +0x528:  movl   $0x0,0x8(%esp)
0821f51c +0x530:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f524 +0x538:  movl   $0xd823,(%esp)
0821f52b +0x53f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f530 +0x544:  jmp    0821f608 <+0x61c>
0821f535 +0x549:  mov    -0xc(%ebp),%edx
0821f538 +0x54c:  lea    -0x820(%ebp),%ecx
0821f53e +0x552:  mov    %edx,%eax
0821f540 +0x554:  shl    $0x2,%eax
0821f543 +0x557:  add    %edx,%eax
0821f545 +0x559:  add    %eax,%eax
0821f547 +0x55b:  add    %edx,%eax
0821f549 +0x55d:  add    $0x3b0,%eax
0821f54e +0x562:  lea    (%ecx,%eax,1),%eax
0821f551 +0x565:  add    $0x11,%eax
0821f554 +0x568:  mov    %eax,0x4(%esp)
0821f558 +0x56c:  mov    0x10(%ebp),%eax
0821f55b +0x56f:  mov    %eax,(%esp)
0821f55e +0x572:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0821f563 +0x577:  xor    $0x1,%eax
0821f566 +0x57a:  test   %al,%al
0821f568 +0x57c:  je     0821f590 <+0x5a4>
0821f56a +0x57e:  movl   $0x0,0xc(%esp)
0821f572 +0x586:  movl   $0x0,0x8(%esp)
0821f57a +0x58e:  movl   $&_ZZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821f582 +0x596:  movl   $0xd824,(%esp)
0821f589 +0x59d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821f58e +0x5a2:  jmp    0821f608 <+0x61c>
0821f590 +0x5a4:  addl   $0x1,-0xc(%ebp)
0821f594 +0x5a8:  movzwl -0x1a(%ebp),%eax
0821f598 +0x5ac:  cwtl
0821f599 +0x5ad:  cmp    -0xc(%ebp),%eax
0821f59c +0x5b0:  setg   %al
0821f59f +0x5b3:  test   %al,%al
0821f5a1 +0x5b5:  jne    0821f41b <+0x42f>
0821f5a7 +0x5bb:  movzwl -0x16(%ebp),%eax
0821f5ab +0x5bf:  movzwl %ax,%eax
0821f5ae +0x5c2:  movl   $0x0,-0x816(%ebp,%eax,4)
0821f5b9 +0x5cd:  addl   $0x1,-0x14(%ebp)
0821f5bd +0x5d1:  cmpl   $0x8,-0x14(%ebp)
0821f5c1 +0x5d5:  setle  %al
0821f5c4 +0x5d8:  test   %al,%al
0821f5c6 +0x5da:  jne    0821f016 <+0x2a>
0821f5cc +0x5e0:  lea    -0x820(%ebp),%ebx
0821f5d2 +0x5e6:  mov    0xc(%ebp),%eax
0821f5d5 +0x5e9:  mov    %eax,(%esp)
0821f5d8 +0x5ec:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821f5dd +0x5f1:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821f5e3 +0x5f7:  mov    %eax,0x4(%esp)
0821f5e7 +0x5fb:  mov    %edx,(%esp)
0821f5ea +0x5fe:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821f5ef +0x603:  movl   $0x806,0x8(%esp)
0821f5f7 +0x60b:  mov    %ebx,0x4(%esp)
0821f5fb +0x60f:  mov    %eax,(%esp)
0821f5fe +0x612:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821f603 +0x617:  mov    $0x0,%eax
0821f608 +0x61c:  add    $0x834,%esp
0821f60e +0x622:  pop    %ebx
0821f60f +0x623:  pop    %ebp
0821f610 +0x624:  ret
0821f611 +0x625:  nop
```

## 反编译 C

```c
// Dispatcher_LoadingTimeReport::dispatch_sig @ 0x821efec

/* Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_LoadingTimeReport::dispatch_sig
          (Dispatcher_LoadingTimeReport *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Loading_Time_Report_Statistics local_824 [10];
  uint auStack_81a [9];
  undefined4 local_7f6;
  short local_7f2;
  ushort uStack_7f0;
  uchar uStack_7ee;
  ushort auStack_7ed [448];
  short local_46c;
  ushort uStack_46a;
  uchar uStack_468;
  uint auStack_467 [274];
  short local_1e;
  short local_1c;
  ushort local_1a;
  int local_18;
  int local_14;
  int local_10;
  
  Packet_Loading_Time_Report_Statistics::Packet_Loading_Time_Report_Statistics(local_824);
  local_1a = 0;
  local_18 = 0;
  do {
    if (8 < local_18) {
      uVar2 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar2);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_824,0x806);
      return 0;
    }
    cVar1 = PacketBuf::get_short(param_2,&local_1a);
    if (cVar1 != '\x01') {
      uVar2 = LineFunc(0xd7fe,
                       "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    if (8 < local_1a) {
      uVar2 = LineFunc(0xd800,
                       "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    if ((local_1a < 7) &&
       (cVar1 = PacketBuf::get_int(param_2,auStack_81a + local_1a), cVar1 != '\x01')) {
      uVar2 = LineFunc(0xd806,
                       "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    local_7f6 = CUser::get_acc_id(param_1);
    if (local_1a == 7) {
      local_1c = 0;
      cVar1 = PacketBuf::get_short(param_2,&local_1c);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0xd80c,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      if (99 < local_1c) {
        uVar2 = LineFunc(0xd80d,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_7f2 = local_1c;
      for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)&uStack_7f0 + local_14 * 9));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd811,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)auStack_7ed + local_14 * 9 + -1));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd812,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_7ed + local_14 * 9));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd813,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_7ed + local_14 * 9 + 2));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd814,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_7ed + local_14 * 9 + 4));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd815,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
      }
      auStack_81a[local_1a] = 0;
    }
    if (local_1a == 8) {
      local_1e = 0;
      cVar1 = PacketBuf::get_short(param_2,&local_1e);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0xd81c,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      if (99 < local_1e) {
        uVar2 = LineFunc(0xd81d,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_46c = local_1e;
      for (local_10 = 0; local_10 < local_1e; local_10 = local_10 + 1) {
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)&uStack_46a + local_10 * 0xb));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd821,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)auStack_467 + local_10 * 0xb + -1));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd822,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_467 + local_10 * 0xb));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd823,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_467 + local_10 * 0xb + 4));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd824,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
      }
      auStack_81a[local_1a] = 0;
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
