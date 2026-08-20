# dispatch_sig

`_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Lag_Statistics` | `0x08223de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08223de0  _ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)
# range [0x08223de0, 0x08224499]
08223de0 +0x000:  push   %ebp
08223de1 +0x001:  mov    %esp,%ebp
08223de3 +0x003:  push   %esi
08223de4 +0x004:  push   %ebx
08223de5 +0x005:  sub    $0x170,%esp
08223deb +0x00b:  lea    -0x15d(%ebp),%eax
08223df1 +0x011:  mov    %eax,(%esp)
08223df4 +0x014:  call   0822c144 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x17ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x17ee
08223df9 +0x019:  movb   $0x0,-0x11(%ebp)
08223dfd +0x01d:  lea    -0x15d(%ebp),%eax
08223e03 +0x023:  add    $0xa,%eax
08223e06 +0x026:  mov    %eax,0x4(%esp)
08223e0a +0x02a:  mov    0x10(%ebp),%eax
08223e0d +0x02d:  mov    %eax,(%esp)
08223e10 +0x030:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08223e15 +0x035:  xor    $0x1,%eax
08223e18 +0x038:  test   %al,%al
08223e1a +0x03a:  je     08223e47 <+0x67>
08223e1c +0x03c:  movl   $0x0,0xc(%esp)
08223e24 +0x044:  movl   $0x0,0x8(%esp)
08223e2c +0x04c:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223e34 +0x054:  movl   $0xde9f,(%esp)
08223e3b +0x05b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223e40 +0x060:  mov    %eax,%ebx
08223e42 +0x062:  jmp    0822447f <+0x69f>
08223e47 +0x067:  movzbl -0x153(%ebp),%eax
08223e4e +0x06e:  cmp    $0x7,%al
08223e50 +0x070:  jbe    08223e7d <+0x9d>
08223e52 +0x072:  movl   $0x0,0xc(%esp)
08223e5a +0x07a:  movl   $0x0,0x8(%esp)
08223e62 +0x082:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223e6a +0x08a:  movl   $0xdea1,(%esp)
08223e71 +0x091:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223e76 +0x096:  mov    %eax,%ebx
08223e78 +0x098:  jmp    0822447f <+0x69f>
08223e7d +0x09d:  movl   $0x0,-0x10(%ebp)
08223e84 +0x0a4:  jmp    0822440b <+0x62b>
08223e89 +0x0a9:  lea    -0x11(%ebp),%eax
08223e8c +0x0ac:  mov    %eax,0x4(%esp)
08223e90 +0x0b0:  mov    0x10(%ebp),%eax
08223e93 +0x0b3:  mov    %eax,(%esp)
08223e96 +0x0b6:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08223e9b +0x0bb:  xor    $0x1,%eax
08223e9e +0x0be:  test   %al,%al
08223ea0 +0x0c0:  je     08223ecd <+0xed>
08223ea2 +0x0c2:  movl   $0x0,0xc(%esp)
08223eaa +0x0ca:  movl   $0x0,0x8(%esp)
08223eb2 +0x0d2:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223eba +0x0da:  movl   $0xdea7,(%esp)
08223ec1 +0x0e1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223ec6 +0x0e6:  mov    %eax,%ebx
08223ec8 +0x0e8:  jmp    0822447f <+0x69f>
08223ecd +0x0ed:  movzbl -0x11(%ebp),%eax
08223ed1 +0x0f1:  cmp    $0x7,%al
08223ed3 +0x0f3:  jbe    08223f00 <+0x120>
08223ed5 +0x0f5:  movl   $0x0,0xc(%esp)
08223edd +0x0fd:  movl   $0x0,0x8(%esp)
08223ee5 +0x105:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223eed +0x10d:  movl   $0xdeab,(%esp)
08223ef4 +0x114:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223ef9 +0x119:  mov    %eax,%ebx
08223efb +0x11b:  jmp    0822447f <+0x69f>
08223f00 +0x120:  movzbl -0x11(%ebp),%eax
08223f04 +0x124:  movzbl %al,%edx
08223f07 +0x127:  lea    -0x15d(%ebp),%ecx
08223f0d +0x12d:  mov    %edx,%eax
08223f0f +0x12f:  shl    $0x2,%eax
08223f12 +0x132:  add    %edx,%eax
08223f14 +0x134:  add    %eax,%eax
08223f16 +0x136:  lea    (%ecx,%eax,1),%eax
08223f19 +0x139:  add    $0xb,%eax
08223f1c +0x13c:  mov    %eax,0x4(%esp)
08223f20 +0x140:  mov    0x10(%ebp),%eax
08223f23 +0x143:  mov    %eax,(%esp)
08223f26 +0x146:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08223f2b +0x14b:  xor    $0x1,%eax
08223f2e +0x14e:  test   %al,%al
08223f30 +0x150:  je     08223f5d <+0x17d>
08223f32 +0x152:  movl   $0x0,0xc(%esp)
08223f3a +0x15a:  movl   $0x0,0x8(%esp)
08223f42 +0x162:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223f4a +0x16a:  movl   $0xdead,(%esp)
08223f51 +0x171:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223f56 +0x176:  mov    %eax,%ebx
08223f58 +0x178:  jmp    0822447f <+0x69f>
08223f5d +0x17d:  movzbl -0x11(%ebp),%eax
08223f61 +0x181:  movzbl %al,%edx
08223f64 +0x184:  lea    -0x15d(%ebp),%ecx
08223f6a +0x18a:  mov    %edx,%eax
08223f6c +0x18c:  shl    $0x2,%eax
08223f6f +0x18f:  add    %edx,%eax
08223f71 +0x191:  add    %eax,%eax
08223f73 +0x193:  lea    (%ecx,%eax,1),%eax
08223f76 +0x196:  add    $0xf,%eax
08223f79 +0x199:  mov    %eax,0x4(%esp)
08223f7d +0x19d:  mov    0x10(%ebp),%eax
08223f80 +0x1a0:  mov    %eax,(%esp)
08223f83 +0x1a3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08223f88 +0x1a8:  xor    $0x1,%eax
08223f8b +0x1ab:  test   %al,%al
08223f8d +0x1ad:  je     08223fba <+0x1da>
08223f8f +0x1af:  movl   $0x0,0xc(%esp)
08223f97 +0x1b7:  movl   $0x0,0x8(%esp)
08223f9f +0x1bf:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223fa7 +0x1c7:  movl   $0xdeae,(%esp)
08223fae +0x1ce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223fb3 +0x1d3:  mov    %eax,%ebx
08223fb5 +0x1d5:  jmp    0822447f <+0x69f>
08223fba +0x1da:  movzbl -0x11(%ebp),%eax
08223fbe +0x1de:  movzbl %al,%edx
08223fc1 +0x1e1:  lea    -0x15d(%ebp),%ecx
08223fc7 +0x1e7:  mov    %edx,%eax
08223fc9 +0x1e9:  shl    $0x2,%eax
08223fcc +0x1ec:  add    %edx,%eax
08223fce +0x1ee:  add    %eax,%eax
08223fd0 +0x1f0:  lea    (%ecx,%eax,1),%eax
08223fd3 +0x1f3:  add    $0x13,%eax
08223fd6 +0x1f6:  mov    %eax,0x4(%esp)
08223fda +0x1fa:  mov    0x10(%ebp),%eax
08223fdd +0x1fd:  mov    %eax,(%esp)
08223fe0 +0x200:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08223fe5 +0x205:  xor    $0x1,%eax
08223fe8 +0x208:  test   %al,%al
08223fea +0x20a:  je     08224017 <+0x237>
08223fec +0x20c:  movl   $0x0,0xc(%esp)
08223ff4 +0x214:  movl   $0x0,0x8(%esp)
08223ffc +0x21c:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224004 +0x224:  movl   $0xdeaf,(%esp)
0822400b +0x22b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224010 +0x230:  mov    %eax,%ebx
08224012 +0x232:  jmp    0822447f <+0x69f>
08224017 +0x237:  movzbl -0x11(%ebp),%eax
0822401b +0x23b:  cmp    $0x1,%al
0822401d +0x23d:  jne    08224407 <+0x627>
08224023 +0x243:  lea    -0x15d(%ebp),%eax
08224029 +0x249:  add    $0x5b,%eax
0822402c +0x24c:  mov    %eax,0x4(%esp)
08224030 +0x250:  mov    0x10(%ebp),%eax
08224033 +0x253:  mov    %eax,(%esp)
08224036 +0x256:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0822403b +0x25b:  xor    $0x1,%eax
0822403e +0x25e:  test   %al,%al
08224040 +0x260:  je     0822406d <+0x28d>
08224042 +0x262:  movl   $0x0,0xc(%esp)
0822404a +0x26a:  movl   $0x0,0x8(%esp)
08224052 +0x272:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822405a +0x27a:  movl   $0xdeb4,(%esp)
08224061 +0x281:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224066 +0x286:  mov    %eax,%ebx
08224068 +0x288:  jmp    0822447f <+0x69f>
0822406d +0x28d:  movzbl -0x102(%ebp),%eax
08224074 +0x294:  cmp    $0xa,%al
08224076 +0x296:  jbe    082240a3 <+0x2c3>
08224078 +0x298:  movl   $0x0,0xc(%esp)
08224080 +0x2a0:  movl   $0x0,0x8(%esp)
08224088 +0x2a8:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224090 +0x2b0:  movl   $0xdeb6,(%esp)
08224097 +0x2b7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822409c +0x2bc:  mov    %eax,%ebx
0822409e +0x2be:  jmp    0822447f <+0x69f>
082240a3 +0x2c3:  movl   $0x0,-0xc(%ebp)
082240aa +0x2ca:  jmp    082243ef <+0x60f>
082240af +0x2cf:  mov    -0xc(%ebp),%edx
082240b2 +0x2d2:  lea    -0x15d(%ebp),%ecx
082240b8 +0x2d8:  mov    %edx,%eax
082240ba +0x2da:  add    %eax,%eax
082240bc +0x2dc:  add    %edx,%eax
082240be +0x2de:  shl    $0x3,%eax
082240c1 +0x2e1:  add    $0x50,%eax
082240c4 +0x2e4:  lea    (%ecx,%eax,1),%eax
082240c7 +0x2e7:  add    $0xc,%eax
082240ca +0x2ea:  mov    %eax,0x4(%esp)
082240ce +0x2ee:  mov    0x10(%ebp),%eax
082240d1 +0x2f1:  mov    %eax,(%esp)
082240d4 +0x2f4:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082240d9 +0x2f9:  xor    $0x1,%eax
082240dc +0x2fc:  test   %al,%al
082240de +0x2fe:  je     0822410b <+0x32b>
082240e0 +0x300:  movl   $0x0,0xc(%esp)
082240e8 +0x308:  movl   $0x0,0x8(%esp)
082240f0 +0x310:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082240f8 +0x318:  movl   $0xdebc,(%esp)
082240ff +0x31f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224104 +0x324:  mov    %eax,%ebx
08224106 +0x326:  jmp    0822447f <+0x69f>
0822410b +0x32b:  mov    -0xc(%ebp),%edx
0822410e +0x32e:  lea    -0x15d(%ebp),%ecx
08224114 +0x334:  mov    %edx,%eax
08224116 +0x336:  add    %eax,%eax
08224118 +0x338:  add    %edx,%eax
0822411a +0x33a:  shl    $0x3,%eax
0822411d +0x33d:  add    $0x50,%eax
08224120 +0x340:  lea    (%ecx,%eax,1),%eax
08224123 +0x343:  add    $0xe,%eax
08224126 +0x346:  mov    %eax,0x4(%esp)
0822412a +0x34a:  mov    0x10(%ebp),%eax
0822412d +0x34d:  mov    %eax,(%esp)
08224130 +0x350:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08224135 +0x355:  xor    $0x1,%eax
08224138 +0x358:  test   %al,%al
0822413a +0x35a:  je     08224167 <+0x387>
0822413c +0x35c:  movl   $0x0,0xc(%esp)
08224144 +0x364:  movl   $0x0,0x8(%esp)
0822414c +0x36c:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224154 +0x374:  movl   $0xdebd,(%esp)
0822415b +0x37b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224160 +0x380:  mov    %eax,%ebx
08224162 +0x382:  jmp    0822447f <+0x69f>
08224167 +0x387:  mov    -0xc(%ebp),%edx
0822416a +0x38a:  lea    -0x15d(%ebp),%ecx
08224170 +0x390:  mov    %edx,%eax
08224172 +0x392:  add    %eax,%eax
08224174 +0x394:  add    %edx,%eax
08224176 +0x396:  shl    $0x3,%eax
08224179 +0x399:  add    $0x50,%eax
0822417c +0x39c:  lea    (%ecx,%eax,1),%eax
0822417f +0x39f:  add    $0xf,%eax
08224182 +0x3a2:  mov    %eax,0x4(%esp)
08224186 +0x3a6:  mov    0x10(%ebp),%eax
08224189 +0x3a9:  mov    %eax,(%esp)
0822418c +0x3ac:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08224191 +0x3b1:  xor    $0x1,%eax
08224194 +0x3b4:  test   %al,%al
08224196 +0x3b6:  je     082241c3 <+0x3e3>
08224198 +0x3b8:  movl   $0x0,0xc(%esp)
082241a0 +0x3c0:  movl   $0x0,0x8(%esp)
082241a8 +0x3c8:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082241b0 +0x3d0:  movl   $0xdebe,(%esp)
082241b7 +0x3d7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082241bc +0x3dc:  mov    %eax,%ebx
082241be +0x3de:  jmp    0822447f <+0x69f>
082241c3 +0x3e3:  mov    -0xc(%ebp),%edx
082241c6 +0x3e6:  lea    -0x15d(%ebp),%ecx
082241cc +0x3ec:  mov    %edx,%eax
082241ce +0x3ee:  add    %eax,%eax
082241d0 +0x3f0:  add    %edx,%eax
082241d2 +0x3f2:  shl    $0x3,%eax
082241d5 +0x3f5:  add    $0x50,%eax
082241d8 +0x3f8:  lea    (%ecx,%eax,1),%eax
082241db +0x3fb:  add    $0x13,%eax
082241de +0x3fe:  mov    %eax,0x4(%esp)
082241e2 +0x402:  mov    0x10(%ebp),%eax
082241e5 +0x405:  mov    %eax,(%esp)
082241e8 +0x408:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082241ed +0x40d:  xor    $0x1,%eax
082241f0 +0x410:  test   %al,%al
082241f2 +0x412:  je     0822421f <+0x43f>
082241f4 +0x414:  movl   $0x0,0xc(%esp)
082241fc +0x41c:  movl   $0x0,0x8(%esp)
08224204 +0x424:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822420c +0x42c:  movl   $0xdebf,(%esp)
08224213 +0x433:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224218 +0x438:  mov    %eax,%ebx
0822421a +0x43a:  jmp    0822447f <+0x69f>
0822421f +0x43f:  mov    -0xc(%ebp),%edx
08224222 +0x442:  lea    -0x15d(%ebp),%ecx
08224228 +0x448:  mov    %edx,%eax
0822422a +0x44a:  add    %eax,%eax
0822422c +0x44c:  add    %edx,%eax
0822422e +0x44e:  shl    $0x3,%eax
08224231 +0x451:  add    $0x50,%eax
08224234 +0x454:  lea    (%ecx,%eax,1),%eax
08224237 +0x457:  add    $0x17,%eax
0822423a +0x45a:  mov    %eax,0x4(%esp)
0822423e +0x45e:  mov    0x10(%ebp),%eax
08224241 +0x461:  mov    %eax,(%esp)
08224244 +0x464:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08224249 +0x469:  xor    $0x1,%eax
0822424c +0x46c:  test   %al,%al
0822424e +0x46e:  je     0822427b <+0x49b>
08224250 +0x470:  movl   $0x0,0xc(%esp)
08224258 +0x478:  movl   $0x0,0x8(%esp)
08224260 +0x480:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224268 +0x488:  movl   $0xdec0,(%esp)
0822426f +0x48f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224274 +0x494:  mov    %eax,%ebx
08224276 +0x496:  jmp    0822447f <+0x69f>
0822427b +0x49b:  mov    -0xc(%ebp),%edx
0822427e +0x49e:  lea    -0x15d(%ebp),%ecx
08224284 +0x4a4:  mov    %edx,%eax
08224286 +0x4a6:  add    %eax,%eax
08224288 +0x4a8:  add    %edx,%eax
0822428a +0x4aa:  shl    $0x3,%eax
0822428d +0x4ad:  add    $0x50,%eax
08224290 +0x4b0:  lea    (%ecx,%eax,1),%eax
08224293 +0x4b3:  add    $0x19,%eax
08224296 +0x4b6:  mov    %eax,0x4(%esp)
0822429a +0x4ba:  mov    0x10(%ebp),%eax
0822429d +0x4bd:  mov    %eax,(%esp)
082242a0 +0x4c0:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082242a5 +0x4c5:  xor    $0x1,%eax
082242a8 +0x4c8:  test   %al,%al
082242aa +0x4ca:  je     082242d7 <+0x4f7>
082242ac +0x4cc:  movl   $0x0,0xc(%esp)
082242b4 +0x4d4:  movl   $0x0,0x8(%esp)
082242bc +0x4dc:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082242c4 +0x4e4:  movl   $0xdec1,(%esp)
082242cb +0x4eb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082242d0 +0x4f0:  mov    %eax,%ebx
082242d2 +0x4f2:  jmp    0822447f <+0x69f>
082242d7 +0x4f7:  mov    -0xc(%ebp),%edx
082242da +0x4fa:  lea    -0x15d(%ebp),%ecx
082242e0 +0x500:  mov    %edx,%eax
082242e2 +0x502:  add    %eax,%eax
082242e4 +0x504:  add    %edx,%eax
082242e6 +0x506:  shl    $0x3,%eax
082242e9 +0x509:  add    $0x50,%eax
082242ec +0x50c:  lea    (%ecx,%eax,1),%eax
082242ef +0x50f:  add    $0x1a,%eax
082242f2 +0x512:  mov    %eax,0x4(%esp)
082242f6 +0x516:  mov    0x10(%ebp),%eax
082242f9 +0x519:  mov    %eax,(%esp)
082242fc +0x51c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08224301 +0x521:  xor    $0x1,%eax
08224304 +0x524:  test   %al,%al
08224306 +0x526:  je     08224333 <+0x553>
08224308 +0x528:  movl   $0x0,0xc(%esp)
08224310 +0x530:  movl   $0x0,0x8(%esp)
08224318 +0x538:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224320 +0x540:  movl   $0xdec2,(%esp)
08224327 +0x547:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822432c +0x54c:  mov    %eax,%ebx
0822432e +0x54e:  jmp    0822447f <+0x69f>
08224333 +0x553:  mov    -0xc(%ebp),%edx
08224336 +0x556:  lea    -0x15d(%ebp),%ecx
0822433c +0x55c:  mov    %edx,%eax
0822433e +0x55e:  add    %eax,%eax
08224340 +0x560:  add    %edx,%eax
08224342 +0x562:  shl    $0x3,%eax
08224345 +0x565:  add    $0x60,%eax
08224348 +0x568:  lea    (%ecx,%eax,1),%eax
0822434b +0x56b:  add    $0xe,%eax
0822434e +0x56e:  mov    %eax,0x4(%esp)
08224352 +0x572:  mov    0x10(%ebp),%eax
08224355 +0x575:  mov    %eax,(%esp)
08224358 +0x578:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0822435d +0x57d:  xor    $0x1,%eax
08224360 +0x580:  test   %al,%al
08224362 +0x582:  je     0822438f <+0x5af>
08224364 +0x584:  movl   $0x0,0xc(%esp)
0822436c +0x58c:  movl   $0x0,0x8(%esp)
08224374 +0x594:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822437c +0x59c:  movl   $0xdec3,(%esp)
08224383 +0x5a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224388 +0x5a8:  mov    %eax,%ebx
0822438a +0x5aa:  jmp    0822447f <+0x69f>
0822438f +0x5af:  mov    -0xc(%ebp),%edx
08224392 +0x5b2:  lea    -0x15d(%ebp),%ecx
08224398 +0x5b8:  mov    %edx,%eax
0822439a +0x5ba:  add    %eax,%eax
0822439c +0x5bc:  add    %edx,%eax
0822439e +0x5be:  shl    $0x3,%eax
082243a1 +0x5c1:  add    $0x60,%eax
082243a4 +0x5c4:  lea    (%ecx,%eax,1),%eax
082243a7 +0x5c7:  add    $0x12,%eax
082243aa +0x5ca:  mov    %eax,0x4(%esp)
082243ae +0x5ce:  mov    0x10(%ebp),%eax
082243b1 +0x5d1:  mov    %eax,(%esp)
082243b4 +0x5d4:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082243b9 +0x5d9:  xor    $0x1,%eax
082243bc +0x5dc:  test   %al,%al
082243be +0x5de:  je     082243eb <+0x60b>
082243c0 +0x5e0:  movl   $0x0,0xc(%esp)
082243c8 +0x5e8:  movl   $0x0,0x8(%esp)
082243d0 +0x5f0:  movl   $&_ZZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082243d8 +0x5f8:  movl   $0xdec4,(%esp)
082243df +0x5ff:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082243e4 +0x604:  mov    %eax,%ebx
082243e6 +0x606:  jmp    0822447f <+0x69f>
082243eb +0x60b:  addl   $0x1,-0xc(%ebp)
082243ef +0x60f:  movzbl -0x102(%ebp),%eax
082243f6 +0x616:  movzbl %al,%eax
082243f9 +0x619:  cmp    -0xc(%ebp),%eax
082243fc +0x61c:  setg   %al
082243ff +0x61f:  test   %al,%al
08224401 +0x621:  jne    082240af <+0x2cf>
08224407 +0x627:  addl   $0x1,-0x10(%ebp)
0822440b +0x62b:  movzbl -0x153(%ebp),%eax
08224412 +0x632:  movzbl %al,%eax
08224415 +0x635:  cmp    -0x10(%ebp),%eax
08224418 +0x638:  setg   %al
0822441b +0x63b:  test   %al,%al
0822441d +0x63d:  jne    08223e89 <+0xa9>
08224423 +0x643:  lea    -0x15d(%ebp),%ebx
08224429 +0x649:  mov    0xc(%ebp),%eax
0822442c +0x64c:  mov    %eax,(%esp)
0822442f +0x64f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08224434 +0x654:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0822443a +0x65a:  mov    %eax,0x4(%esp)
0822443e +0x65e:  mov    %edx,(%esp)
08224441 +0x661:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08224446 +0x666:  movl   $0x14c,0x8(%esp)
0822444e +0x66e:  mov    %ebx,0x4(%esp)
08224452 +0x672:  mov    %eax,(%esp)
08224455 +0x675:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0822445a +0x67a:  mov    $0x0,%ebx
0822445f +0x67f:  jmp    0822447f <+0x69f>
08224461 +0x681:  mov    %edx,%ebx
08224463 +0x683:  mov    %eax,%esi
08224465 +0x685:  lea    -0x15d(%ebp),%eax
0822446b +0x68b:  mov    %eax,(%esp)
0822446e +0x68e:  call   082354ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xab96>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xab96
08224473 +0x693:  mov    %esi,%eax
08224475 +0x695:  mov    %ebx,%edx
08224477 +0x697:  mov    %eax,(%esp)
0822447a +0x69a:  call   08ae3750 <_Unwind_Resume>
0822447f +0x69f:  lea    -0x15d(%ebp),%eax
08224485 +0x6a5:  mov    %eax,(%esp)
08224488 +0x6a8:  call   082354ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xab96>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xab96
0822448d +0x6ad:  mov    %ebx,%eax
0822448f +0x6af:  add    $0x170,%esp
08224495 +0x6b5:  pop    %ebx
08224496 +0x6b6:  pop    %esi
08224497 +0x6b7:  pop    %ebp
08224498 +0x6b8:  ret
08224499 +0x6b9:  nop
```

## 反编译 C

```c
// Dispatcher_Lag_Statistics::dispatch_sig @ 0x8223de0

/* Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Lag_Statistics::dispatch_sig
          (Dispatcher_Lag_Statistics *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Stat_Lag_Statistics local_161 [10];
  byte local_157;
  int aiStack_156 [2];
  ushort auStack_14e [36];
  byte local_106;
  ushort uStack_105;
  uchar uStack_103;
  int aiStack_102 [2];
  ushort uStack_fa;
  uchar uStack_f8;
  int aiStack_f7 [2];
  ushort auStack_ef [109];
  byte local_15;
  int local_14;
  int local_10;
  
  Packet_Stat_Lag_Statistics::Packet_Stat_Lag_Statistics(local_161);
  local_15 = 0;
                    /* try { // try from 08223e10 to 08224459 has its CatchHandler @ 08224461 */
  cVar1 = PacketBuf::get_byte(param_2,&local_157);
  if (cVar1 == '\x01') {
    if (local_157 < 8) {
      for (local_14 = 0; local_14 < (int)(uint)local_157; local_14 = local_14 + 1) {
        cVar1 = PacketBuf::get_byte(param_2,&local_15);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(56999,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        if (7 < local_15) {
          uVar2 = LineFunc(0xdeab,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        cVar1 = PacketBuf::get_int(param_2,(int *)((int)aiStack_156 + (uint)local_15 * 10));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xdead,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        cVar1 = PacketBuf::get_int(param_2,(int *)((int)aiStack_156 + (uint)local_15 * 10 + 4));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xdeae,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        cVar1 = PacketBuf::get_short(param_2,auStack_14e + (uint)local_15 * 5);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xdeaf,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        if (local_15 == 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_106);
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xdeb4,
                             "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            goto LAB_0822447f;
          }
          if (10 < local_106) {
            uVar2 = LineFunc(0xdeb6,
                             "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            goto LAB_0822447f;
          }
          for (local_10 = 0; local_10 < (int)(uint)local_106; local_10 = local_10 + 1) {
            cVar1 = PacketBuf::get_short(param_2,&uStack_105 + local_10 * 0xc);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebc,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)aiStack_102 + local_10 * 0x18 + -1));
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebd,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_102 + local_10 * 6);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebe,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_102 + local_10 * 6 + 1);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebf,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_short(param_2,&uStack_fa + local_10 * 0xc);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec0,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)aiStack_f7 + local_10 * 0x18 + -1));
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec1,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_f7 + local_10 * 6);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec2,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_f7 + local_10 * 6 + 1);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec3,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_short(param_2,auStack_ef + local_10 * 0xc);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec4,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
          }
        }
      }
      uVar2 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar2);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_161,0x14c);
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xdea1,
                       "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0xde9f,
                     "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
LAB_0822447f:
  Packet_Stat_Lag_Statistics::~Packet_Stat_Lag_Statistics(local_161);
  return uVar2;
}
```
