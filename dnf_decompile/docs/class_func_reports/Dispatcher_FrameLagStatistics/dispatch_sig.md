# dispatch_sig

`_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FrameLagStatistics` | `0x08217046` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08217046  _ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)
# range [0x08217046, 0x082177ad]
08217046 +0x000:  push   %ebp
08217047 +0x001:  mov    %esp,%ebp
08217049 +0x003:  push   %ebx
0821704a +0x004:  sub    $0x1b4,%esp
08217050 +0x00a:  lea    -0x19b(%ebp),%eax
08217056 +0x010:  mov    %eax,(%esp)
08217059 +0x013:  call   0822bcf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x139e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x139e
0821705e +0x018:  lea    -0x19b(%ebp),%eax
08217064 +0x01e:  add    $0xa,%eax
08217067 +0x021:  mov    %eax,0x4(%esp)
0821706b +0x025:  mov    0x10(%ebp),%eax
0821706e +0x028:  mov    %eax,(%esp)
08217071 +0x02b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08217076 +0x030:  xor    $0x1,%eax
08217079 +0x033:  test   %al,%al
0821707b +0x035:  je     082170a6 <+0x60>
0821707d +0x037:  movl   $0x0,0xc(%esp)
08217085 +0x03f:  movl   $0x0,0x8(%esp)
0821708d +0x047:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217095 +0x04f:  movl   $0xc8fd,(%esp)
0821709c +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082170a1 +0x05b:  jmp    082177a4 <+0x75e>
082170a6 +0x060:  lea    -0x19b(%ebp),%eax
082170ac +0x066:  add    $0xe,%eax
082170af +0x069:  mov    %eax,0x4(%esp)
082170b3 +0x06d:  mov    0x10(%ebp),%eax
082170b6 +0x070:  mov    %eax,(%esp)
082170b9 +0x073:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082170be +0x078:  xor    $0x1,%eax
082170c1 +0x07b:  test   %al,%al
082170c3 +0x07d:  je     082170ee <+0xa8>
082170c5 +0x07f:  movl   $0x0,0xc(%esp)
082170cd +0x087:  movl   $0x0,0x8(%esp)
082170d5 +0x08f:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082170dd +0x097:  movl   $0xc8fe,(%esp)
082170e4 +0x09e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082170e9 +0x0a3:  jmp    082177a4 <+0x75e>
082170ee +0x0a8:  lea    -0x19b(%ebp),%eax
082170f4 +0x0ae:  add    $0xf,%eax
082170f7 +0x0b1:  mov    %eax,0x4(%esp)
082170fb +0x0b5:  mov    0x10(%ebp),%eax
082170fe +0x0b8:  mov    %eax,(%esp)
08217101 +0x0bb:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08217106 +0x0c0:  xor    $0x1,%eax
08217109 +0x0c3:  test   %al,%al
0821710b +0x0c5:  je     08217136 <+0xf0>
0821710d +0x0c7:  movl   $0x0,0xc(%esp)
08217115 +0x0cf:  movl   $0x0,0x8(%esp)
0821711d +0x0d7:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217125 +0x0df:  movl   $0xc8ff,(%esp)
0821712c +0x0e6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217131 +0x0eb:  jmp    082177a4 <+0x75e>
08217136 +0x0f0:  lea    -0x19b(%ebp),%eax
0821713c +0x0f6:  add    $0x12,%eax
0821713f +0x0f9:  mov    %eax,0x4(%esp)
08217143 +0x0fd:  mov    0x10(%ebp),%eax
08217146 +0x100:  mov    %eax,(%esp)
08217149 +0x103:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821714e +0x108:  xor    $0x1,%eax
08217151 +0x10b:  test   %al,%al
08217153 +0x10d:  je     0821717e <+0x138>
08217155 +0x10f:  movl   $0x0,0xc(%esp)
0821715d +0x117:  movl   $0x0,0x8(%esp)
08217165 +0x11f:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821716d +0x127:  movl   $0xc901,(%esp)
08217174 +0x12e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217179 +0x133:  jmp    082177a4 <+0x75e>
0821717e +0x138:  lea    -0x19b(%ebp),%eax
08217184 +0x13e:  add    $0x14,%eax
08217187 +0x141:  mov    %eax,0x4(%esp)
0821718b +0x145:  mov    0x10(%ebp),%eax
0821718e +0x148:  mov    %eax,(%esp)
08217191 +0x14b:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08217196 +0x150:  xor    $0x1,%eax
08217199 +0x153:  test   %al,%al
0821719b +0x155:  je     082171c6 <+0x180>
0821719d +0x157:  movl   $0x0,0xc(%esp)
082171a5 +0x15f:  movl   $0x0,0x8(%esp)
082171ad +0x167:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082171b5 +0x16f:  movl   $0xc902,(%esp)
082171bc +0x176:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082171c1 +0x17b:  jmp    082177a4 <+0x75e>
082171c6 +0x180:  lea    -0x19b(%ebp),%eax
082171cc +0x186:  add    $0x16,%eax
082171cf +0x189:  mov    %eax,0x4(%esp)
082171d3 +0x18d:  mov    0x10(%ebp),%eax
082171d6 +0x190:  mov    %eax,(%esp)
082171d9 +0x193:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082171de +0x198:  xor    $0x1,%eax
082171e1 +0x19b:  test   %al,%al
082171e3 +0x19d:  je     0821720e <+0x1c8>
082171e5 +0x19f:  movl   $0x0,0xc(%esp)
082171ed +0x1a7:  movl   $0x0,0x8(%esp)
082171f5 +0x1af:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082171fd +0x1b7:  movl   $0xc903,(%esp)
08217204 +0x1be:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217209 +0x1c3:  jmp    082177a4 <+0x75e>
0821720e +0x1c8:  lea    -0x19b(%ebp),%eax
08217214 +0x1ce:  add    $0x18,%eax
08217217 +0x1d1:  mov    %eax,0x4(%esp)
0821721b +0x1d5:  mov    0x10(%ebp),%eax
0821721e +0x1d8:  mov    %eax,(%esp)
08217221 +0x1db:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08217226 +0x1e0:  xor    $0x1,%eax
08217229 +0x1e3:  test   %al,%al
0821722b +0x1e5:  je     08217256 <+0x210>
0821722d +0x1e7:  movl   $0x0,0xc(%esp)
08217235 +0x1ef:  movl   $0x0,0x8(%esp)
0821723d +0x1f7:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217245 +0x1ff:  movl   $0xc905,(%esp)
0821724c +0x206:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217251 +0x20b:  jmp    082177a4 <+0x75e>
08217256 +0x210:  lea    -0x19b(%ebp),%eax
0821725c +0x216:  add    $0x1a,%eax
0821725f +0x219:  mov    %eax,0x4(%esp)
08217263 +0x21d:  mov    0x10(%ebp),%eax
08217266 +0x220:  mov    %eax,(%esp)
08217269 +0x223:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0821726e +0x228:  xor    $0x1,%eax
08217271 +0x22b:  test   %al,%al
08217273 +0x22d:  je     0821729e <+0x258>
08217275 +0x22f:  movl   $0x0,0xc(%esp)
0821727d +0x237:  movl   $0x0,0x8(%esp)
08217285 +0x23f:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821728d +0x247:  movl   $0xc906,(%esp)
08217294 +0x24e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217299 +0x253:  jmp    082177a4 <+0x75e>
0821729e +0x258:  lea    -0x19b(%ebp),%eax
082172a4 +0x25e:  add    $0x1b,%eax
082172a7 +0x261:  mov    %eax,0x4(%esp)
082172ab +0x265:  mov    0x10(%ebp),%eax
082172ae +0x268:  mov    %eax,(%esp)
082172b1 +0x26b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082172b6 +0x270:  xor    $0x1,%eax
082172b9 +0x273:  test   %al,%al
082172bb +0x275:  je     082172e6 <+0x2a0>
082172bd +0x277:  movl   $0x0,0xc(%esp)
082172c5 +0x27f:  movl   $0x0,0x8(%esp)
082172cd +0x287:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082172d5 +0x28f:  movl   $0xc907,(%esp)
082172dc +0x296:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082172e1 +0x29b:  jmp    082177a4 <+0x75e>
082172e6 +0x2a0:  lea    -0x19b(%ebp),%eax
082172ec +0x2a6:  add    $0x1f,%eax
082172ef +0x2a9:  mov    %eax,0x4(%esp)
082172f3 +0x2ad:  mov    0x10(%ebp),%eax
082172f6 +0x2b0:  mov    %eax,(%esp)
082172f9 +0x2b3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082172fe +0x2b8:  xor    $0x1,%eax
08217301 +0x2bb:  test   %al,%al
08217303 +0x2bd:  je     0821732e <+0x2e8>
08217305 +0x2bf:  movl   $0x0,0xc(%esp)
0821730d +0x2c7:  movl   $0x0,0x8(%esp)
08217315 +0x2cf:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821731d +0x2d7:  movl   $0xc909,(%esp)
08217324 +0x2de:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217329 +0x2e3:  jmp    082177a4 <+0x75e>
0821732e +0x2e8:  lea    -0x19b(%ebp),%eax
08217334 +0x2ee:  add    $0x20,%eax
08217337 +0x2f1:  mov    %eax,0x4(%esp)
0821733b +0x2f5:  mov    0x10(%ebp),%eax
0821733e +0x2f8:  mov    %eax,(%esp)
08217341 +0x2fb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08217346 +0x300:  xor    $0x1,%eax
08217349 +0x303:  test   %al,%al
0821734b +0x305:  je     08217376 <+0x330>
0821734d +0x307:  movl   $0x0,0xc(%esp)
08217355 +0x30f:  movl   $0x0,0x8(%esp)
0821735d +0x317:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217365 +0x31f:  movl   $0xc90a,(%esp)
0821736c +0x326:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217371 +0x32b:  jmp    082177a4 <+0x75e>
08217376 +0x330:  lea    -0x19b(%ebp),%eax
0821737c +0x336:  add    $0x22,%eax
0821737f +0x339:  mov    %eax,0x4(%esp)
08217383 +0x33d:  mov    0x10(%ebp),%eax
08217386 +0x340:  mov    %eax,(%esp)
08217389 +0x343:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821738e +0x348:  xor    $0x1,%eax
08217391 +0x34b:  test   %al,%al
08217393 +0x34d:  je     082173be <+0x378>
08217395 +0x34f:  movl   $0x0,0xc(%esp)
0821739d +0x357:  movl   $0x0,0x8(%esp)
082173a5 +0x35f:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082173ad +0x367:  movl   $0xc90b,(%esp)
082173b4 +0x36e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082173b9 +0x373:  jmp    082177a4 <+0x75e>
082173be +0x378:  movl   $0x0,-0x14(%ebp)
082173c5 +0x37f:  jmp    08217629 <+0x5e3>
082173ca +0x384:  mov    -0x14(%ebp),%eax
082173cd +0x387:  lea    -0x19b(%ebp),%ecx
082173d3 +0x38d:  shl    $0x3,%eax
082173d6 +0x390:  lea    0x0(,%eax,8),%edx
082173dd +0x397:  sub    %eax,%edx
082173df +0x399:  lea    0x20(%edx),%eax
082173e2 +0x39c:  lea    (%ecx,%eax,1),%eax
082173e5 +0x39f:  add    $0x4,%eax
082173e8 +0x3a2:  mov    %eax,0x4(%esp)
082173ec +0x3a6:  mov    0x10(%ebp),%eax
082173ef +0x3a9:  mov    %eax,(%esp)
082173f2 +0x3ac:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082173f7 +0x3b1:  xor    $0x1,%eax
082173fa +0x3b4:  test   %al,%al
082173fc +0x3b6:  je     08217427 <+0x3e1>
082173fe +0x3b8:  movl   $0x0,0xc(%esp)
08217406 +0x3c0:  movl   $0x0,0x8(%esp)
0821740e +0x3c8:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217416 +0x3d0:  movl   $0xc914,(%esp)
0821741d +0x3d7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217422 +0x3dc:  jmp    082177a4 <+0x75e>
08217427 +0x3e1:  mov    -0x14(%ebp),%eax
0821742a +0x3e4:  lea    -0x19b(%ebp),%ecx
08217430 +0x3ea:  shl    $0x3,%eax
08217433 +0x3ed:  lea    0x0(,%eax,8),%edx
0821743a +0x3f4:  sub    %eax,%edx
0821743c +0x3f6:  lea    0x20(%edx),%eax
0821743f +0x3f9:  lea    (%ecx,%eax,1),%eax
08217442 +0x3fc:  add    $0x6,%eax
08217445 +0x3ff:  mov    %eax,0x4(%esp)
08217449 +0x403:  mov    0x10(%ebp),%eax
0821744c +0x406:  mov    %eax,(%esp)
0821744f +0x409:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08217454 +0x40e:  xor    $0x1,%eax
08217457 +0x411:  test   %al,%al
08217459 +0x413:  je     08217484 <+0x43e>
0821745b +0x415:  movl   $0x0,0xc(%esp)
08217463 +0x41d:  movl   $0x0,0x8(%esp)
0821746b +0x425:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217473 +0x42d:  movl   $0xc915,(%esp)
0821747a +0x434:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821747f +0x439:  jmp    082177a4 <+0x75e>
08217484 +0x43e:  mov    -0x14(%ebp),%eax
08217487 +0x441:  lea    -0x19b(%ebp),%ecx
0821748d +0x447:  shl    $0x3,%eax
08217490 +0x44a:  lea    0x0(,%eax,8),%edx
08217497 +0x451:  sub    %eax,%edx
08217499 +0x453:  lea    0x20(%edx),%eax
0821749c +0x456:  lea    (%ecx,%eax,1),%eax
0821749f +0x459:  add    $0x8,%eax
082174a2 +0x45c:  mov    %eax,0x4(%esp)
082174a6 +0x460:  mov    0x10(%ebp),%eax
082174a9 +0x463:  mov    %eax,(%esp)
082174ac +0x466:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082174b1 +0x46b:  xor    $0x1,%eax
082174b4 +0x46e:  test   %al,%al
082174b6 +0x470:  je     082174e1 <+0x49b>
082174b8 +0x472:  movl   $0x0,0xc(%esp)
082174c0 +0x47a:  movl   $0x0,0x8(%esp)
082174c8 +0x482:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082174d0 +0x48a:  movl   $0xc916,(%esp)
082174d7 +0x491:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082174dc +0x496:  jmp    082177a4 <+0x75e>
082174e1 +0x49b:  mov    -0x14(%ebp),%eax
082174e4 +0x49e:  lea    -0x19b(%ebp),%ecx
082174ea +0x4a4:  shl    $0x3,%eax
082174ed +0x4a7:  lea    0x0(,%eax,8),%edx
082174f4 +0x4ae:  sub    %eax,%edx
082174f6 +0x4b0:  lea    0x20(%edx),%eax
082174f9 +0x4b3:  lea    (%ecx,%eax,1),%eax
082174fc +0x4b6:  add    $0xa,%eax
082174ff +0x4b9:  mov    %eax,0x4(%esp)
08217503 +0x4bd:  mov    0x10(%ebp),%eax
08217506 +0x4c0:  mov    %eax,(%esp)
08217509 +0x4c3:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821750e +0x4c8:  xor    $0x1,%eax
08217511 +0x4cb:  test   %al,%al
08217513 +0x4cd:  je     0821753e <+0x4f8>
08217515 +0x4cf:  movl   $0x0,0xc(%esp)
0821751d +0x4d7:  movl   $0x0,0x8(%esp)
08217525 +0x4df:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821752d +0x4e7:  movl   $0xc917,(%esp)
08217534 +0x4ee:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217539 +0x4f3:  jmp    082177a4 <+0x75e>
0821753e +0x4f8:  movl   $0x0,-0x10(%ebp)
08217545 +0x4ff:  jmp    08217616 <+0x5d0>
0821754a +0x504:  mov    -0x14(%ebp),%edx
0821754d +0x507:  mov    -0x10(%ebp),%ebx
08217550 +0x50a:  lea    -0x19b(%ebp),%ecx
08217556 +0x510:  mov    %edx,%eax
08217558 +0x512:  shl    $0x3,%eax
0821755b +0x515:  sub    %edx,%eax
0821755d +0x517:  add    %ebx,%eax
0821755f +0x519:  add    $0x4,%eax
08217562 +0x51c:  shl    $0x3,%eax
08217565 +0x51f:  lea    (%ecx,%eax,1),%eax
08217568 +0x522:  add    $0xc,%eax
0821756b +0x525:  mov    %eax,0x4(%esp)
0821756f +0x529:  mov    0x10(%ebp),%eax
08217572 +0x52c:  mov    %eax,(%esp)
08217575 +0x52f:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821757a +0x534:  xor    $0x1,%eax
0821757d +0x537:  test   %al,%al
0821757f +0x539:  je     082175aa <+0x564>
08217581 +0x53b:  movl   $0x0,0xc(%esp)
08217589 +0x543:  movl   $0x0,0x8(%esp)
08217591 +0x54b:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217599 +0x553:  movl   $0xc91f,(%esp)
082175a0 +0x55a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082175a5 +0x55f:  jmp    082177a4 <+0x75e>
082175aa +0x564:  mov    -0x14(%ebp),%edx
082175ad +0x567:  mov    -0x10(%ebp),%ebx
082175b0 +0x56a:  lea    -0x19b(%ebp),%ecx
082175b6 +0x570:  mov    %edx,%eax
082175b8 +0x572:  shl    $0x3,%eax
082175bb +0x575:  sub    %edx,%eax
082175bd +0x577:  add    %ebx,%eax
082175bf +0x579:  add    $0x4,%eax
082175c2 +0x57c:  shl    $0x3,%eax
082175c5 +0x57f:  lea    (%ecx,%eax,1),%eax
082175c8 +0x582:  add    $0x10,%eax
082175cb +0x585:  movl   $0x4,0x8(%esp)
082175d3 +0x58d:  mov    %eax,0x4(%esp)
082175d7 +0x591:  mov    0x10(%ebp),%eax
082175da +0x594:  mov    %eax,(%esp)
082175dd +0x597:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
082175e2 +0x59c:  xor    $0x1,%eax
082175e5 +0x59f:  test   %al,%al
082175e7 +0x5a1:  je     08217612 <+0x5cc>
082175e9 +0x5a3:  movl   $0x0,0xc(%esp)
082175f1 +0x5ab:  movl   $0x0,0x8(%esp)
082175f9 +0x5b3:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217601 +0x5bb:  movl   $0xc920,(%esp)
08217608 +0x5c2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821760d +0x5c7:  jmp    082177a4 <+0x75e>
08217612 +0x5cc:  addl   $0x1,-0x10(%ebp)
08217616 +0x5d0:  cmpl   $0x5,-0x10(%ebp)
0821761a +0x5d4:  setle  %al
0821761d +0x5d7:  test   %al,%al
0821761f +0x5d9:  jne    0821754a <+0x504>
08217625 +0x5df:  addl   $0x1,-0x14(%ebp)
08217629 +0x5e3:  cmpl   $0x5,-0x14(%ebp)
0821762d +0x5e7:  setle  %al
08217630 +0x5ea:  test   %al,%al
08217632 +0x5ec:  jne    082173ca <+0x384>
08217638 +0x5f2:  lea    -0x15(%ebp),%eax
0821763b +0x5f5:  mov    %eax,0x4(%esp)
0821763f +0x5f9:  mov    0x10(%ebp),%eax
08217642 +0x5fc:  mov    %eax,(%esp)
08217645 +0x5ff:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0821764a +0x604:  xor    $0x1,%eax
0821764d +0x607:  test   %al,%al
0821764f +0x609:  je     0821767a <+0x634>
08217651 +0x60b:  movl   $0x0,0xc(%esp)
08217659 +0x613:  movl   $0x0,0x8(%esp)
08217661 +0x61b:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217669 +0x623:  movl   $0xc925,(%esp)
08217670 +0x62a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217675 +0x62f:  jmp    082177a4 <+0x75e>
0821767a +0x634:  movl   $0x0,-0xc(%ebp)
08217681 +0x63b:  jmp    08217759 <+0x713>
08217686 +0x640:  movzbl -0x15(%ebp),%eax
0821768a +0x644:  movsbl %al,%eax
0821768d +0x647:  cmp    -0xc(%ebp),%eax
08217690 +0x64a:  jle    0821773b <+0x6f5>
08217696 +0x650:  mov    -0xc(%ebp),%edx
08217699 +0x653:  lea    -0x19b(%ebp),%eax
0821769f +0x659:  add    $0x170,%edx
082176a5 +0x65f:  add    %edx,%eax
082176a7 +0x661:  add    $0x4,%eax
082176aa +0x664:  mov    %eax,0x4(%esp)
082176ae +0x668:  mov    0x10(%ebp),%eax
082176b1 +0x66b:  mov    %eax,(%esp)
082176b4 +0x66e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082176b9 +0x673:  xor    $0x1,%eax
082176bc +0x676:  test   %al,%al
082176be +0x678:  je     082176e9 <+0x6a3>
082176c0 +0x67a:  movl   $0x0,0xc(%esp)
082176c8 +0x682:  movl   $0x0,0x8(%esp)
082176d0 +0x68a:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082176d8 +0x692:  movl   $0xc92a,(%esp)
082176df +0x699:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082176e4 +0x69e:  jmp    082177a4 <+0x75e>
082176e9 +0x6a3:  mov    -0xc(%ebp),%edx
082176ec +0x6a6:  lea    -0x19b(%ebp),%eax
082176f2 +0x6ac:  add    $0xb8,%edx
082176f8 +0x6b2:  add    %edx,%edx
082176fa +0x6b4:  add    %edx,%eax
082176fc +0x6b6:  add    $0xa,%eax
082176ff +0x6b9:  mov    %eax,0x4(%esp)
08217703 +0x6bd:  mov    0x10(%ebp),%eax
08217706 +0x6c0:  mov    %eax,(%esp)
08217709 +0x6c3:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821770e +0x6c8:  xor    $0x1,%eax
08217711 +0x6cb:  test   %al,%al
08217713 +0x6cd:  je     08217755 <+0x70f>
08217715 +0x6cf:  movl   $0x0,0xc(%esp)
0821771d +0x6d7:  movl   $0x0,0x8(%esp)
08217725 +0x6df:  movl   $&_ZZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821772d +0x6e7:  movl   $0xc92b,(%esp)
08217734 +0x6ee:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217739 +0x6f3:  jmp    082177a4 <+0x75e>
0821773b +0x6f5:  mov    -0xc(%ebp),%eax
0821773e +0x6f8:  movb   $0x0,-0x27(%ebp,%eax,1)
08217743 +0x6fd:  mov    -0xc(%ebp),%eax
08217746 +0x700:  add    $0xb8,%eax
0821774b +0x705:  movw   $0x0,-0x191(%ebp,%eax,2)
08217755 +0x70f:  addl   $0x1,-0xc(%ebp)
08217759 +0x713:  cmpl   $0x5,-0xc(%ebp)
0821775d +0x717:  setle  %al
08217760 +0x71a:  test   %al,%al
08217762 +0x71c:  jne    08217686 <+0x640>
08217768 +0x722:  lea    -0x19b(%ebp),%ebx
0821776e +0x728:  mov    0xc(%ebp),%eax
08217771 +0x72b:  mov    %eax,(%esp)
08217774 +0x72e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08217779 +0x733:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821777f +0x739:  mov    %eax,0x4(%esp)
08217783 +0x73d:  mov    %edx,(%esp)
08217786 +0x740:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821778b +0x745:  movl   $0x186,0x8(%esp)
08217793 +0x74d:  mov    %ebx,0x4(%esp)
08217797 +0x751:  mov    %eax,(%esp)
0821779a +0x754:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821779f +0x759:  mov    $0x0,%eax
082177a4 +0x75e:  add    $0x1b4,%esp
082177aa +0x764:  pop    %ebx
082177ab +0x765:  pop    %ebp
082177ac +0x766:  ret
082177ad +0x767:  nop
```

## 反编译 C

```c
// Dispatcher_FrameLagStatistics::dispatch_sig @ 0x8217046

/* Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_FrameLagStatistics::dispatch_sig
          (Dispatcher_FrameLagStatistics *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Frame_Lag_Statistic_Add local_19f [10];
  undefined1 auStack_195 [4];
  char cStack_191;
  char cStack_190;
  char acStack_18f [2];
  ushort uStack_18d;
  ushort uStack_18b;
  short sStack_189;
  short sStack_187;
  char cStack_185;
  int iStack_184;
  char cStack_180;
  short sStack_17f;
  short sStack_17d;
  short asStack_17b [168];
  char acStack_2b [18];
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  
  Packet_Frame_Lag_Statistic_Add::Packet_Frame_Lag_Statistic_Add(local_19f);
  cVar1 = PacketBuf::get_int(param_2,(int *)auStack_195);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_2,auStack_195 + 4);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_2,auStack_195 + 5);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_2,(ushort *)(acStack_18f + 2));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&uStack_18b);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&sStack_189);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&sStack_187);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_byte(param_2,&cStack_185);
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_int(param_2,&iStack_184);
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_byte(param_2,&cStack_180);
                    if (cVar1 == '\x01') {
                      cVar1 = PacketBuf::get_short(param_2,&sStack_17f);
                      if (cVar1 == '\x01') {
                        cVar1 = PacketBuf::get_short(param_2,&sStack_17d);
                        if (cVar1 == '\x01') {
                          for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc914,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c + 1);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc915,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c + 2);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc916,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c + 3);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc917,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
                              cVar1 = PacketBuf::get_int(param_2,(int *)(auStack_195 +
                                                                        (local_18 * 7 + local_14 + 4
                                                                        ) * 8 + 2));
                              if (cVar1 != '\x01') {
                                uVar2 = LineFunc(0xc91f,
                                                 "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                 ,0,0);
                                return uVar2;
                              }
                              cVar1 = PacketBuf::get_binary
                                                (param_2,acStack_18f +
                                                         (local_18 * 7 + local_14 + 4) * 8,4);
                              if (cVar1 != '\x01') {
                                uVar2 = LineFunc(0xc920,
                                                 "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                 ,0,0);
                                return uVar2;
                              }
                            }
                          }
                          cVar1 = PacketBuf::get_byte(param_2,&local_19);
                          if (cVar1 == '\x01') {
                            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
                              if (local_10 < local_19) {
                                cVar1 = PacketBuf::get_byte(param_2,acStack_2b + local_10);
                                if (cVar1 != '\x01') {
                                  uVar2 = LineFunc(0xc92a,
                                                  "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                  return uVar2;
                                }
                                cVar1 = PacketBuf::get_short
                                                  (param_2,(short *)(auStack_195 +
                                                                    (local_10 + 0xb8) * 2));
                                if (cVar1 != '\x01') {
                                  uVar2 = LineFunc(0xc92b,
                                                  "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                  return uVar2;
                                }
                              }
                              else {
                                acStack_2b[local_10] = '\0';
                                *(undefined2 *)(auStack_195 + (local_10 + 0xb8) * 2) = 0;
                              }
                            }
                            uVar2 = CUser::GetServerGroup(param_1);
                            this_00 = (CStatisticServerProxy *)
                                      CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                                                (GlobalData::s_statistic_proxy_mgr,uVar2);
                            CStatisticServerProxy::SendPacket(this_00,(char *)local_19f,0x186);
                            uVar2 = 0;
                          }
                          else {
                            uVar2 = LineFunc(0xc925,
                                             "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                             ,0,0);
                          }
                        }
                        else {
                          uVar2 = LineFunc(0xc90b,
                                           "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                           ,0,0);
                        }
                      }
                      else {
                        uVar2 = LineFunc(0xc90a,
                                         "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar2 = LineFunc(0xc909,
                                       "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar2 = LineFunc(0xc907,
                                     "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0xc906,
                                   "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0xc905,
                                 "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0xc903,
                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0xc902,
                             "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0xc901,
                           "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0xc8ff,
                         "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xc8fe,
                       "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xc8fd,
                     "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
  }
  return uVar2;
}
```
