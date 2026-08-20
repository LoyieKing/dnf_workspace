# makeMasterSecret

`_ZN5yaSSL3SSL16makeMasterSecretEv`

`yaSSL::SSL::makeMasterSecret()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x087501c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087501c0  _ZN5yaSSL3SSL16makeMasterSecretEv
#           yaSSL::SSL::makeMasterSecret()
# range [0x087501c0, 0x08750709]
087501c0 +0x000:  push   %ebp
087501c1 +0x001:  mov    %esp,%ebp
087501c3 +0x003:  push   %edi
087501c4 +0x004:  push   %esi
087501c5 +0x005:  push   %ebx
087501c6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087501cb +0x00b:  add    $0xc1c9cd,%ebx
087501d1 +0x011:  sub    $0x7c,%esp
087501d4 +0x014:  mov    0x8(%ebp),%eax
087501d7 +0x017:  mov    %eax,(%esp)
087501da +0x01a:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
087501df +0x01f:  test   %al,%al
087501e1 +0x021:  je     08750210 <+0x50>
087501e3 +0x023:  mov    0x8(%ebp),%edx
087501e6 +0x026:  mov    %edx,(%esp)
087501e9 +0x029:  call   0874fd20 <_ZN5yaSSL3SSL19makeTLSMasterSecretEv>  ; yaSSL::SSL::makeTLSMasterSecret()
087501ee +0x02e:  mov    0x8(%ebp),%eax
087501f1 +0x031:  lea    0x68(%eax),%edi
087501f4 +0x034:  mov    %edi,(%esp)
087501f7 +0x037:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
087501fc +0x03c:  mov    %eax,(%esp)
087501ff +0x03f:  call   0874bb40 <_ZN5yaSSL10Connection14CleanPreMasterEv>  ; yaSSL::Connection::CleanPreMaster()
08750204 +0x044:  add    $0x7c,%esp
08750207 +0x047:  pop    %ebx
08750208 +0x048:  pop    %esi
08750209 +0x049:  pop    %edi
0875020a +0x04a:  pop    %ebp
0875020b +0x04b:  ret
0875020c +0x04c:  lea    0x0(%esi,%eiz,1),%esi
08750210 +0x050:  mov    0x8(%ebp),%edi
08750213 +0x053:  lea    -0x44(%ebp),%esi
08750216 +0x056:  add    $0x68,%edi
08750219 +0x059:  mov    %edi,(%esp)
0875021c +0x05c:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
08750221 +0x061:  mov    %eax,-0x60(%ebp)
08750224 +0x064:  mov    0x124(%eax),%eax
0875022a +0x06a:  add    $0x14,%eax
0875022d +0x06d:  mov    %eax,0x4(%esp)
08750231 +0x071:  lea    -0x38(%ebp),%eax
08750234 +0x074:  mov    %eax,-0x5c(%ebp)
08750237 +0x077:  mov    %eax,(%esp)
0875023a +0x07a:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0875023f +0x07f:  mov    -0x60(%ebp),%edx
08750242 +0x082:  mov    0x124(%edx),%eax
08750248 +0x088:  mov    %esi,(%esp)
0875024b +0x08b:  add    $0x43,%eax
0875024e +0x08e:  mov    %eax,0x4(%esp)
08750252 +0x092:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
08750257 +0x097:  lea    -0x24(%ebp),%eax
0875025a +0x09a:  mov    %eax,-0x6c(%ebp)
0875025d +0x09d:  mov    %eax,(%esp)
08750260 +0x0a0:  call   0879a110 <_ZN5yaSSL3MD5C1Ev>  ; yaSSL::MD5::MD5()
08750265 +0x0a5:  lea    -0x2c(%ebp),%edx
08750268 +0x0a8:  mov    %edx,-0x70(%ebp)
0875026b +0x0ab:  mov    %edx,(%esp)
0875026e +0x0ae:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08750273 +0x0b3:  mov    -0x60(%ebp),%eax
08750276 +0x0b6:  mov    0x124(%eax),%edx
0875027c +0x0bc:  mov    %edi,(%esp)
0875027f +0x0bf:  mov    %edx,-0x74(%ebp)
08750282 +0x0c2:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
08750287 +0x0c7:  mov    -0x74(%ebp),%edx
0875028a +0x0ca:  mov    %edx,0x8(%esp)
0875028e +0x0ce:  mov    -0x5c(%ebp),%edx
08750291 +0x0d1:  mov    (%eax),%eax
08750293 +0x0d3:  mov    %edx,(%esp)
08750296 +0x0d6:  mov    %eax,0x4(%esp)
0875029a +0x0da:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0875029f +0x0df:  lea    -0x1b(%ebp),%eax
087502a2 +0x0e2:  xor    %edx,%edx
087502a4 +0x0e4:  mov    %eax,-0x64(%ebp)
087502a7 +0x0e7:  call   0874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>  ; yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int)
087502ac +0x0ec:  test   %al,%al
087502ae +0x0ee:  je     087506c0 <+0x500>
087502b4 +0x0f4:  movl   $0x0,0x4(%esp)
087502bc +0x0fc:  mov    %esi,(%esp)
087502bf +0x0ff:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
087502c4 +0x104:  mov    -0x64(%ebp),%edx
087502c7 +0x107:  movl   $0x1,0x8(%esp)
087502cf +0x10f:  mov    %esi,(%esp)
087502d2 +0x112:  mov    %edx,0x4(%esp)
087502d6 +0x116:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087502db +0x11b:  mov    -0x60(%ebp),%eax
087502de +0x11e:  mov    0x124(%eax),%edx
087502e4 +0x124:  mov    %edi,(%esp)
087502e7 +0x127:  mov    %edx,-0x74(%ebp)
087502ea +0x12a:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087502ef +0x12f:  mov    -0x74(%ebp),%edx
087502f2 +0x132:  mov    %edx,0x8(%esp)
087502f6 +0x136:  mov    (%eax),%eax
087502f8 +0x138:  mov    %esi,(%esp)
087502fb +0x13b:  mov    %eax,0x4(%esp)
087502ff +0x13f:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750304 +0x144:  mov    %edi,(%esp)
08750307 +0x147:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875030c +0x14c:  movl   $0x20,0x8(%esp)
08750314 +0x154:  mov    %esi,(%esp)
08750317 +0x157:  add    $0x34,%eax
0875031a +0x15a:  mov    %eax,0x4(%esp)
0875031e +0x15e:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750323 +0x163:  mov    %edi,(%esp)
08750326 +0x166:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875032b +0x16b:  movl   $0x20,0x8(%esp)
08750333 +0x173:  mov    %esi,(%esp)
08750336 +0x176:  add    $0x54,%eax
08750339 +0x179:  mov    %eax,0x4(%esp)
0875033d +0x17d:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750342 +0x182:  mov    %esi,(%esp)
08750345 +0x185:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0875034a +0x18a:  mov    %esi,(%esp)
0875034d +0x18d:  mov    %eax,-0x74(%ebp)
08750350 +0x190:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
08750355 +0x195:  mov    -0x74(%ebp),%edx
08750358 +0x198:  mov    %edx,0xc(%esp)
0875035c +0x19c:  lea    -0x58(%ebp),%edx
0875035f +0x19f:  mov    %edx,-0x68(%ebp)
08750362 +0x1a2:  mov    %eax,0x8(%esp)
08750366 +0x1a6:  mov    -0x70(%ebp),%eax
08750369 +0x1a9:  mov    %edx,0x4(%esp)
0875036d +0x1ad:  mov    %eax,(%esp)
08750370 +0x1b0:  call   087999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>  ; yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)
08750375 +0x1b5:  mov    -0x60(%ebp),%edx
08750378 +0x1b8:  mov    0x124(%edx),%eax
0875037e +0x1be:  mov    %eax,0x4(%esp)
08750382 +0x1c2:  mov    -0x5c(%ebp),%eax
08750385 +0x1c5:  mov    %eax,(%esp)
08750388 +0x1c8:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
0875038d +0x1cd:  mov    -0x68(%ebp),%edx
08750390 +0x1d0:  mov    -0x5c(%ebp),%eax
08750393 +0x1d3:  movl   $0x14,0x8(%esp)
0875039b +0x1db:  mov    %edx,0x4(%esp)
0875039f +0x1df:  mov    %eax,(%esp)
087503a2 +0x1e2:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087503a7 +0x1e7:  mov    -0x5c(%ebp),%edx
087503aa +0x1ea:  mov    %edx,(%esp)
087503ad +0x1ed:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087503b2 +0x1f2:  mov    %eax,%edx
087503b4 +0x1f4:  mov    -0x5c(%ebp),%eax
087503b7 +0x1f7:  mov    %edx,-0x74(%ebp)
087503ba +0x1fa:  mov    %eax,(%esp)
087503bd +0x1fd:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087503c2 +0x202:  mov    %edi,(%esp)
087503c5 +0x205:  mov    %eax,-0x78(%ebp)
087503c8 +0x208:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
087503cd +0x20d:  mov    -0x74(%ebp),%edx
087503d0 +0x210:  mov    -0x78(%ebp),%ecx
087503d3 +0x213:  mov    %edx,0xc(%esp)
087503d7 +0x217:  mov    -0x6c(%ebp),%edx
087503da +0x21a:  mov    %ecx,0x8(%esp)
087503de +0x21e:  add    $0x4,%eax
087503e1 +0x221:  mov    %eax,0x4(%esp)
087503e5 +0x225:  mov    %edx,(%esp)
087503e8 +0x228:  call   08799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>  ; yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)
087503ed +0x22d:  mov    -0x64(%ebp),%eax
087503f0 +0x230:  mov    $0x1,%edx
087503f5 +0x235:  call   0874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>  ; yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int)
087503fa +0x23a:  test   %al,%al
087503fc +0x23c:  je     087506c0 <+0x500>
08750402 +0x242:  movl   $0x0,0x4(%esp)
0875040a +0x24a:  mov    %esi,(%esp)
0875040d +0x24d:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
08750412 +0x252:  mov    -0x64(%ebp),%eax
08750415 +0x255:  movl   $0x2,0x8(%esp)
0875041d +0x25d:  mov    %esi,(%esp)
08750420 +0x260:  mov    %eax,0x4(%esp)
08750424 +0x264:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750429 +0x269:  mov    -0x60(%ebp),%eax
0875042c +0x26c:  mov    0x124(%eax),%edx
08750432 +0x272:  mov    %edi,(%esp)
08750435 +0x275:  mov    %edx,-0x74(%ebp)
08750438 +0x278:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875043d +0x27d:  mov    -0x74(%ebp),%edx
08750440 +0x280:  mov    %edx,0x8(%esp)
08750444 +0x284:  mov    (%eax),%eax
08750446 +0x286:  mov    %esi,(%esp)
08750449 +0x289:  mov    %eax,0x4(%esp)
0875044d +0x28d:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750452 +0x292:  mov    %edi,(%esp)
08750455 +0x295:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875045a +0x29a:  movl   $0x20,0x8(%esp)
08750462 +0x2a2:  mov    %esi,(%esp)
08750465 +0x2a5:  add    $0x34,%eax
08750468 +0x2a8:  mov    %eax,0x4(%esp)
0875046c +0x2ac:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750471 +0x2b1:  mov    %edi,(%esp)
08750474 +0x2b4:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
08750479 +0x2b9:  movl   $0x20,0x8(%esp)
08750481 +0x2c1:  mov    %esi,(%esp)
08750484 +0x2c4:  add    $0x54,%eax
08750487 +0x2c7:  mov    %eax,0x4(%esp)
0875048b +0x2cb:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750490 +0x2d0:  mov    %esi,(%esp)
08750493 +0x2d3:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
08750498 +0x2d8:  mov    %esi,(%esp)
0875049b +0x2db:  mov    %eax,-0x74(%ebp)
0875049e +0x2de:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087504a3 +0x2e3:  mov    -0x74(%ebp),%edx
087504a6 +0x2e6:  mov    %edx,0xc(%esp)
087504aa +0x2ea:  mov    -0x68(%ebp),%edx
087504ad +0x2ed:  mov    %eax,0x8(%esp)
087504b1 +0x2f1:  mov    -0x70(%ebp),%eax
087504b4 +0x2f4:  mov    %edx,0x4(%esp)
087504b8 +0x2f8:  mov    %eax,(%esp)
087504bb +0x2fb:  call   087999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>  ; yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)
087504c0 +0x300:  mov    -0x60(%ebp),%edx
087504c3 +0x303:  mov    0x124(%edx),%eax
087504c9 +0x309:  mov    %eax,0x4(%esp)
087504cd +0x30d:  mov    -0x5c(%ebp),%eax
087504d0 +0x310:  mov    %eax,(%esp)
087504d3 +0x313:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
087504d8 +0x318:  mov    -0x68(%ebp),%edx
087504db +0x31b:  mov    -0x5c(%ebp),%eax
087504de +0x31e:  movl   $0x14,0x8(%esp)
087504e6 +0x326:  mov    %edx,0x4(%esp)
087504ea +0x32a:  mov    %eax,(%esp)
087504ed +0x32d:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087504f2 +0x332:  mov    -0x5c(%ebp),%edx
087504f5 +0x335:  mov    %edx,(%esp)
087504f8 +0x338:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087504fd +0x33d:  mov    %eax,%edx
087504ff +0x33f:  mov    -0x5c(%ebp),%eax
08750502 +0x342:  mov    %edx,-0x74(%ebp)
08750505 +0x345:  mov    %eax,(%esp)
08750508 +0x348:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0875050d +0x34d:  mov    %edi,(%esp)
08750510 +0x350:  mov    %eax,-0x78(%ebp)
08750513 +0x353:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08750518 +0x358:  mov    -0x74(%ebp),%edx
0875051b +0x35b:  mov    -0x78(%ebp),%ecx
0875051e +0x35e:  mov    %edx,0xc(%esp)
08750522 +0x362:  mov    -0x6c(%ebp),%edx
08750525 +0x365:  mov    %ecx,0x8(%esp)
08750529 +0x369:  add    $0x14,%eax
0875052c +0x36c:  mov    %eax,0x4(%esp)
08750530 +0x370:  mov    %edx,(%esp)
08750533 +0x373:  call   08799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>  ; yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)
08750538 +0x378:  mov    -0x64(%ebp),%eax
0875053b +0x37b:  mov    $0x2,%edx
08750540 +0x380:  call   0874f210 <_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi>  ; yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int)
08750545 +0x385:  test   %al,%al
08750547 +0x387:  je     087506c0 <+0x500>
0875054d +0x38d:  movl   $0x0,0x4(%esp)
08750555 +0x395:  mov    %esi,(%esp)
08750558 +0x398:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
0875055d +0x39d:  mov    -0x64(%ebp),%eax
08750560 +0x3a0:  movl   $0x3,0x8(%esp)
08750568 +0x3a8:  mov    %esi,(%esp)
0875056b +0x3ab:  mov    %eax,0x4(%esp)
0875056f +0x3af:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08750574 +0x3b4:  mov    -0x60(%ebp),%eax
08750577 +0x3b7:  mov    0x124(%eax),%edx
0875057d +0x3bd:  mov    %edi,(%esp)
08750580 +0x3c0:  mov    %edx,-0x74(%ebp)
08750583 +0x3c3:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
08750588 +0x3c8:  mov    -0x74(%ebp),%edx
0875058b +0x3cb:  mov    %edx,0x8(%esp)
0875058f +0x3cf:  mov    (%eax),%eax
08750591 +0x3d1:  mov    %esi,(%esp)
08750594 +0x3d4:  mov    %eax,0x4(%esp)
08750598 +0x3d8:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0875059d +0x3dd:  mov    %edi,(%esp)
087505a0 +0x3e0:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087505a5 +0x3e5:  movl   $0x20,0x8(%esp)
087505ad +0x3ed:  mov    %esi,(%esp)
087505b0 +0x3f0:  add    $0x34,%eax
087505b3 +0x3f3:  mov    %eax,0x4(%esp)
087505b7 +0x3f7:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087505bc +0x3fc:  mov    %edi,(%esp)
087505bf +0x3ff:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087505c4 +0x404:  movl   $0x20,0x8(%esp)
087505cc +0x40c:  mov    %esi,(%esp)
087505cf +0x40f:  add    $0x54,%eax
087505d2 +0x412:  mov    %eax,0x4(%esp)
087505d6 +0x416:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087505db +0x41b:  mov    %esi,(%esp)
087505de +0x41e:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087505e3 +0x423:  mov    %esi,(%esp)
087505e6 +0x426:  mov    %eax,-0x74(%ebp)
087505e9 +0x429:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087505ee +0x42e:  mov    -0x74(%ebp),%edx
087505f1 +0x431:  mov    %edx,0xc(%esp)
087505f5 +0x435:  mov    -0x68(%ebp),%edx
087505f8 +0x438:  mov    %eax,0x8(%esp)
087505fc +0x43c:  mov    -0x70(%ebp),%eax
087505ff +0x43f:  mov    %edx,0x4(%esp)
08750603 +0x443:  mov    %eax,(%esp)
08750606 +0x446:  call   087999c0 <_ZN5yaSSL3SHA10get_digestEPhPKhj>  ; yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)
0875060b +0x44b:  mov    -0x60(%ebp),%edx
0875060e +0x44e:  mov    0x124(%edx),%eax
08750614 +0x454:  mov    %eax,0x4(%esp)
08750618 +0x458:  mov    -0x5c(%ebp),%eax
0875061b +0x45b:  mov    %eax,(%esp)
0875061e +0x45e:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
08750623 +0x463:  mov    -0x68(%ebp),%edx
08750626 +0x466:  mov    -0x5c(%ebp),%eax
08750629 +0x469:  movl   $0x14,0x8(%esp)
08750631 +0x471:  mov    %edx,0x4(%esp)
08750635 +0x475:  mov    %eax,(%esp)
08750638 +0x478:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0875063d +0x47d:  mov    -0x5c(%ebp),%edx
08750640 +0x480:  mov    %edx,(%esp)
08750643 +0x483:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
08750648 +0x488:  mov    %eax,%edx
0875064a +0x48a:  mov    -0x5c(%ebp),%eax
0875064d +0x48d:  mov    %edx,-0x74(%ebp)
08750650 +0x490:  mov    %eax,(%esp)
08750653 +0x493:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
08750658 +0x498:  mov    %edi,(%esp)
0875065b +0x49b:  mov    %eax,-0x78(%ebp)
0875065e +0x49e:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08750663 +0x4a3:  mov    -0x74(%ebp),%edx
08750666 +0x4a6:  mov    -0x78(%ebp),%ecx
08750669 +0x4a9:  mov    %edx,0xc(%esp)
0875066d +0x4ad:  mov    -0x6c(%ebp),%edx
08750670 +0x4b0:  mov    %ecx,0x8(%esp)
08750674 +0x4b4:  add    $0x24,%eax
08750677 +0x4b7:  mov    %eax,0x4(%esp)
0875067b +0x4bb:  mov    %edx,(%esp)
0875067e +0x4be:  call   08799c90 <_ZN5yaSSL3MD510get_digestEPhPKhj>  ; yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)
08750683 +0x4c3:  mov    0x8(%ebp),%eax
08750686 +0x4c6:  mov    %eax,(%esp)
08750689 +0x4c9:  call   0874fe30 <_ZN5yaSSL3SSL10deriveKeysEv>  ; yaSSL::SSL::deriveKeys()
0875068e +0x4ce:  mov    -0x70(%ebp),%edx
08750691 +0x4d1:  mov    %edx,(%esp)
08750694 +0x4d4:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
08750699 +0x4d9:  mov    -0x6c(%ebp),%eax
0875069c +0x4dc:  mov    %eax,(%esp)
0875069f +0x4df:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
087506a4 +0x4e4:  mov    %esi,(%esp)
087506a7 +0x4e7:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087506ac +0x4ec:  mov    -0x5c(%ebp),%edx
087506af +0x4ef:  mov    %edx,(%esp)
087506b2 +0x4f2:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087506b7 +0x4f7:  jmp    087501f4 <+0x34>
087506bc +0x4fc:  lea    0x0(%esi,%eiz,1),%esi
087506c0 +0x500:  mov    0x8(%ebp),%eax
087506c3 +0x503:  movl   $0x69,0x4(%esp)
087506cb +0x50b:  mov    %eax,(%esp)
087506ce +0x50e:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
087506d3 +0x513:  mov    -0x70(%ebp),%edx
087506d6 +0x516:  mov    %edx,(%esp)
087506d9 +0x519:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
087506de +0x51e:  mov    -0x6c(%ebp),%eax
087506e1 +0x521:  mov    %eax,(%esp)
087506e4 +0x524:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
087506e9 +0x529:  mov    %esi,(%esp)
087506ec +0x52c:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087506f1 +0x531:  mov    -0x5c(%ebp),%edx
087506f4 +0x534:  mov    %edx,(%esp)
087506f7 +0x537:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087506fc +0x53c:  jmp    08750204 <+0x44>
08750701 +0x541:  nop
08750702 +0x542:  lea    0x0(%esi,%eiz,1),%esi
08750709 +0x549:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::makeMasterSecret @ 0x87501c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::makeMasterSecret() */

void __thiscall yaSSL::SSL::makeMasterSecret(SSL *this)

{
  char cVar1;
  Connection *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  Security *this_01;
  uchar local_5c [20];
  output_buffer local_48 [12];
  output_buffer local_3c [12];
  SHA local_30 [8];
  MD5 local_28 [9];
  uchar local_1f [11];
  undefined4 uStack_14;
  
  uStack_14 = 0x87501cb;
  cVar1 = isTLS(this);
  if (cVar1 == '\0') {
    this_01 = (Security *)(this + 0x68);
    iVar2 = Security::get_connection(this_01);
    output_buffer::output_buffer(local_3c,*(int *)(iVar2 + 0x124) + 0x14);
    output_buffer::output_buffer(local_48,*(int *)(iVar2 + 0x124) + 0x43);
    MD5::MD5(local_28);
    SHA::SHA(local_30);
    uVar5 = *(uint *)(iVar2 + 0x124);
    puVar3 = (undefined4 *)Security::get_connection(this_01);
    output_buffer::write(local_3c,(uchar *)*puVar3,uVar5);
    cVar1 = (anonymous_namespace)::setPrefix(local_1f,0);
    if (cVar1 != '\0') {
      output_buffer::set_current(local_48,0);
      output_buffer::write(local_48,local_1f,1);
      uVar5 = *(uint *)(iVar2 + 0x124);
      puVar3 = (undefined4 *)Security::get_connection(this_01);
      output_buffer::write(local_48,(uchar *)*puVar3,uVar5);
      iVar4 = Security::get_connection(this_01);
      output_buffer::write(local_48,(uchar *)(iVar4 + 0x34),0x20);
      iVar4 = Security::get_connection(this_01);
      output_buffer::write(local_48,(uchar *)(iVar4 + 0x54),0x20);
      uVar5 = output_buffer::get_size(local_48);
      puVar6 = (uchar *)output_buffer::get_buffer(local_48);
      SHA::get_digest(local_30,local_5c,puVar6,uVar5);
      output_buffer::set_current(local_3c,*(uint *)(iVar2 + 0x124));
      output_buffer::write(local_3c,local_5c,0x14);
      uVar5 = output_buffer::get_size(local_3c);
      puVar6 = (uchar *)output_buffer::get_buffer(local_3c);
      iVar4 = Security::use_connection(this_01);
      MD5::get_digest(local_28,(uchar *)(iVar4 + 4),puVar6,uVar5);
      cVar1 = (anonymous_namespace)::setPrefix(local_1f,1);
      if (cVar1 != '\0') {
        output_buffer::set_current(local_48,0);
        output_buffer::write(local_48,local_1f,2);
        uVar5 = *(uint *)(iVar2 + 0x124);
        puVar3 = (undefined4 *)Security::get_connection(this_01);
        output_buffer::write(local_48,(uchar *)*puVar3,uVar5);
        iVar4 = Security::get_connection(this_01);
        output_buffer::write(local_48,(uchar *)(iVar4 + 0x34),0x20);
        iVar4 = Security::get_connection(this_01);
        output_buffer::write(local_48,(uchar *)(iVar4 + 0x54),0x20);
        uVar5 = output_buffer::get_size(local_48);
        puVar6 = (uchar *)output_buffer::get_buffer(local_48);
        SHA::get_digest(local_30,local_5c,puVar6,uVar5);
        output_buffer::set_current(local_3c,*(uint *)(iVar2 + 0x124));
        output_buffer::write(local_3c,local_5c,0x14);
        uVar5 = output_buffer::get_size(local_3c);
        puVar6 = (uchar *)output_buffer::get_buffer(local_3c);
        iVar4 = Security::use_connection(this_01);
        MD5::get_digest(local_28,(uchar *)(iVar4 + 0x14),puVar6,uVar5);
        cVar1 = (anonymous_namespace)::setPrefix(local_1f,2);
        if (cVar1 != '\0') {
          output_buffer::set_current(local_48,0);
          output_buffer::write(local_48,local_1f,3);
          uVar5 = *(uint *)(iVar2 + 0x124);
          puVar3 = (undefined4 *)Security::get_connection(this_01);
          output_buffer::write(local_48,(uchar *)*puVar3,uVar5);
          iVar4 = Security::get_connection(this_01);
          output_buffer::write(local_48,(uchar *)(iVar4 + 0x34),0x20);
          iVar4 = Security::get_connection(this_01);
          output_buffer::write(local_48,(uchar *)(iVar4 + 0x54),0x20);
          uVar5 = output_buffer::get_size(local_48);
          puVar6 = (uchar *)output_buffer::get_buffer(local_48);
          SHA::get_digest(local_30,local_5c,puVar6,uVar5);
          output_buffer::set_current(local_3c,*(uint *)(iVar2 + 0x124));
          output_buffer::write(local_3c,local_5c,0x14);
          uVar5 = output_buffer::get_size(local_3c);
          puVar6 = (uchar *)output_buffer::get_buffer(local_3c);
          iVar2 = Security::use_connection(this_01);
          MD5::get_digest(local_28,(uchar *)(iVar2 + 0x24),puVar6,uVar5);
          deriveKeys(this);
          SHA::~SHA(local_30);
          MD5::~MD5(local_28);
          output_buffer::~output_buffer(local_48);
          output_buffer::~output_buffer(local_3c);
          goto LAB_087501f4;
        }
      }
    }
    SetError(this,0x69);
    SHA::~SHA(local_30);
    MD5::~MD5(local_28);
    output_buffer::~output_buffer(local_48);
    output_buffer::~output_buffer(local_3c);
  }
  else {
    makeTLSMasterSecret(this);
LAB_087501f4:
    this_00 = (Connection *)Security::use_connection((Security *)(this + 0x68));
    Connection::CleanPreMaster(this_00);
  }
  return;
}
```
