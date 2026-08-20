# Arad_DevMgr_Server_Proxy

`_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi`

`global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Arad_DevMgr_Server_Proxy` | `0x0818df44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818df44  _GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi
#           global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x0818df44, 0x0818e837]
0818df44 +0x000:  push   %ebp
0818df45 +0x001:  mov    %esp,%ebp
0818df47 +0x003:  sub    $0x18,%esp
0818df4a +0x006:  movl   $0xffff,0x4(%esp)
0818df52 +0x00e:  movl   $0x1,(%esp)
0818df59 +0x015:  call   0818df04 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0818df5e +0x01a:  leave
0818df5f +0x01b:  ret
0818df60 +0x01c:  push   %ebp
0818df61 +0x01d:  mov    %esp,%ebp
0818df63 +0x01f:  sub    $0x18,%esp
0818df66 +0x022:  mov    0x8(%ebp),%eax
0818df69 +0x025:  movl   $0xffffffff,(%eax)
0818df6f +0x02b:  mov    0x8(%ebp),%eax
0818df72 +0x02e:  movl   $0x0,0x10(%eax)
0818df79 +0x035:  mov    0x8(%ebp),%eax
0818df7c +0x038:  movb   $0x0,0x14(%eax)
0818df80 +0x03c:  mov    0x8(%ebp),%eax
0818df83 +0x03f:  movl   $0x0,0x18(%eax)
0818df8a +0x046:  mov    0x8(%ebp),%eax
0818df8d +0x049:  movb   $0x0,0x29(%eax)
0818df91 +0x04d:  mov    0x8(%ebp),%eax
0818df94 +0x050:  movl   $0x0,0x1830(%eax)
0818df9e +0x05a:  mov    0x8(%ebp),%eax
0818dfa1 +0x05d:  movb   $0x0,&_ZL14gUnicodeBuffer+0xf9ac(%eax)
0818dfa8 +0x064:  mov    0x8(%ebp),%eax
0818dfab +0x067:  movl   $0x0,&_ZL14gUnicodeBuffer+0xf9b0(%eax)
0818dfb5 +0x071:  mov    0x8(%ebp),%eax
0818dfb8 +0x074:  movw   $0x0,&_ZL14gUnicodeBuffer+0xf9c4(%eax)
0818dfc1 +0x07d:  mov    0x8(%ebp),%eax
0818dfc4 +0x080:  movl   $0x0,&_ZL14gUnicodeBuffer+0xf9cc(%eax)
0818dfce +0x08a:  mov    0x8(%ebp),%eax
0818dfd1 +0x08d:  add    $&_ZL14gUnicodeBuffer+0xfa14,%eax
0818dfd6 +0x092:  mov    %eax,(%esp)
0818dfd9 +0x095:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0818dfde +0x09a:  mov    0x8(%ebp),%eax
0818dfe1 +0x09d:  lea    0x30(%eax),%edx
0818dfe4 +0x0a0:  mov    0x8(%ebp),%eax
0818dfe7 +0x0a3:  mov    %edx,0x2c(%eax)
0818dfea +0x0a6:  mov    0x8(%ebp),%eax
0818dfed +0x0a9:  lea    0x1838(%eax),%edx
0818dff3 +0x0af:  mov    0x8(%ebp),%eax
0818dff6 +0x0b2:  mov    %edx,0x1834(%eax)
0818dffc +0x0b8:  leave
0818dffd +0x0b9:  ret
0818dffe +0x0ba:  push   %ebp
0818dfff +0x0bb:  mov    %esp,%ebp
0818e001 +0x0bd:  sub    $0x38,%esp
0818e004 +0x0c0:  movl   $0x0,-0xc(%ebp)
0818e00b +0x0c7:  movl   $0x0,0x8(%esp)
0818e013 +0x0cf:  movl   $0x1,0x4(%esp)
0818e01b +0x0d7:  movl   $0x2,(%esp)
0818e022 +0x0de:  call   0807dab0 <_init+0x3a8>
0818e027 +0x0e3:  mov    0x8(%ebp),%edx
0818e02a +0x0e6:  mov    %eax,(%edx)
0818e02c +0x0e8:  mov    0x8(%ebp),%eax
0818e02f +0x0eb:  mov    (%eax),%eax
0818e031 +0x0ed:  test   %eax,%eax
0818e033 +0x0ef:  jns    0818e03f <+0xfb>
0818e035 +0x0f1:  mov    $0x1,%eax
0818e03a +0x0f6:  jmp    0818e0fe <+0x1ba>
0818e03f +0x0fb:  mov    0x8(%ebp),%eax
0818e042 +0x0fe:  mov    (%eax),%eax
0818e044 +0x100:  mov    %eax,(%esp)
0818e047 +0x103:  call   0818e7ae <+0x86a>
0818e04c +0x108:  xor    $0x1,%eax
0818e04f +0x10b:  test   %al,%al
0818e051 +0x10d:  je     0818e05d <+0x119>
0818e053 +0x10f:  mov    $0x2,%eax
0818e058 +0x114:  jmp    0818e0fe <+0x1ba>
0818e05d +0x119:  movl   $0x10,0x8(%esp)
0818e065 +0x121:  movl   $0x0,0x4(%esp)
0818e06d +0x129:  lea    -0x1c(%ebp),%eax
0818e070 +0x12c:  mov    %eax,(%esp)
0818e073 +0x12f:  call   0807dcc0 <_init+0x5b8>
0818e078 +0x134:  movw   $0x2,-0x1c(%ebp)
0818e07e +0x13a:  mov    0xc(%ebp),%eax
0818e081 +0x13d:  mov    %eax,(%esp)
0818e084 +0x140:  call   0807e530 <_init+0xe28>
0818e089 +0x145:  mov    %eax,-0x18(%ebp)
0818e08c +0x148:  mov    0x10(%ebp),%eax
0818e08f +0x14b:  movzwl %ax,%eax
0818e092 +0x14e:  mov    %eax,(%esp)
0818e095 +0x151:  call   0807e680 <_init+0xf78>
0818e09a +0x156:  mov    %ax,-0x1a(%ebp)
0818e09e +0x15a:  lea    -0x1c(%ebp),%edx
0818e0a1 +0x15d:  mov    0x8(%ebp),%eax
0818e0a4 +0x160:  mov    (%eax),%eax
0818e0a6 +0x162:  movl   $0x10,0x8(%esp)
0818e0ae +0x16a:  mov    %edx,0x4(%esp)
0818e0b2 +0x16e:  mov    %eax,(%esp)
0818e0b5 +0x171:  call   0807e230 <_init+0xb28>
0818e0ba +0x176:  mov    %eax,-0xc(%ebp)
0818e0bd +0x179:  cmpl   $0x0,-0xc(%ebp)
0818e0c1 +0x17d:  jns    0818e0f9 <+0x1b5>
0818e0c3 +0x17f:  call   0807dd70 <_init+0x668>
0818e0c8 +0x184:  mov    (%eax),%eax
0818e0ca +0x186:  cmp    $0x73,%eax
0818e0cd +0x189:  je     0818e0f9 <+0x1b5>
0818e0cf +0x18b:  call   0807dd70 <_init+0x668>
0818e0d4 +0x190:  mov    (%eax),%eax
0818e0d6 +0x192:  cmp    $0xb,%eax
0818e0d9 +0x195:  je     0818e0f9 <+0x1b5>
0818e0db +0x197:  call   0807dd70 <_init+0x668>
0818e0e0 +0x19c:  mov    (%eax),%eax
0818e0e2 +0x19e:  cmp    $0x4,%eax
0818e0e5 +0x1a1:  je     0818e0f9 <+0x1b5>
0818e0e7 +0x1a3:  call   0807dd70 <_init+0x668>
0818e0ec +0x1a8:  mov    (%eax),%eax
0818e0ee +0x1aa:  test   %eax,%eax
0818e0f0 +0x1ac:  je     0818e0f9 <+0x1b5>
0818e0f2 +0x1ae:  mov    $0x3,%eax
0818e0f7 +0x1b3:  jmp    0818e0fe <+0x1ba>
0818e0f9 +0x1b5:  mov    $0x0,%eax
0818e0fe +0x1ba:  leave
0818e0ff +0x1bb:  ret
0818e100 +0x1bc:  push   %ebp
0818e101 +0x1bd:  mov    %esp,%ebp
0818e103 +0x1bf:  sub    $0x18,%esp
0818e106 +0x1c2:  mov    0x8(%ebp),%eax
0818e109 +0x1c5:  movl   $0x0,0x4(%eax)
0818e110 +0x1cc:  movl   $0x0,0x8(%eax)
0818e117 +0x1d3:  mov    0x8(%ebp),%eax
0818e11a +0x1d6:  mov    (%eax),%eax
0818e11c +0x1d8:  movl   $0x0,0x4(%esp)
0818e124 +0x1e0:  mov    %eax,(%esp)
0818e127 +0x1e3:  call   0807dd90 <_init+0x688>
0818e12c +0x1e8:  mov    0x8(%ebp),%eax
0818e12f +0x1eb:  mov    (%eax),%eax
0818e131 +0x1ed:  mov    %eax,(%esp)
0818e134 +0x1f0:  call   0807d860 <_init+0x158>
0818e139 +0x1f5:  mov    0x8(%ebp),%eax
0818e13c +0x1f8:  movl   $0xffffffff,(%eax)
0818e142 +0x1fe:  mov    0x8(%ebp),%eax
0818e145 +0x201:  movb   $0x0,&_ZL14gUnicodeBuffer+0xf9ac(%eax)
0818e14c +0x208:  mov    0x8(%ebp),%eax
0818e14f +0x20b:  movl   $0x0,&_ZL14gUnicodeBuffer+0xf9b0(%eax)
0818e159 +0x215:  mov    0x8(%ebp),%eax
0818e15c +0x218:  movw   $0x0,&_ZL14gUnicodeBuffer+0xf9c4(%eax)
0818e165 +0x221:  mov    0x8(%ebp),%eax
0818e168 +0x224:  movl   $0x0,&_ZL14gUnicodeBuffer+0xf9cc(%eax)
0818e172 +0x22e:  leave
0818e173 +0x22f:  ret
0818e174 +0x230:  push   %ebp
0818e175 +0x231:  mov    %esp,%ebp
0818e177 +0x233:  push   %edi
0818e178 +0x234:  push   %esi
0818e179 +0x235:  push   %ebx
0818e17a +0x236:  sub    $0x4c,%esp
0818e17d +0x239:  mov    0x8(%ebp),%eax
0818e180 +0x23c:  mov    (%eax),%eax
0818e182 +0x23e:  test   %eax,%eax
0818e184 +0x240:  jns    0818e190 <+0x24c>
0818e186 +0x242:  mov    $0x0,%eax
0818e18b +0x247:  jmp    0818e2c0 <+0x37c>
0818e190 +0x24c:  call   0807dd70 <_init+0x668>
0818e195 +0x251:  movl   $0x0,(%eax)
0818e19b +0x257:  mov    0x8(%ebp),%eax
0818e19e +0x25a:  mov    0x18(%eax),%eax
0818e1a1 +0x25d:  mov    $0x1800,%edx
0818e1a6 +0x262:  mov    %edx,%ecx
0818e1a8 +0x264:  sub    %eax,%ecx
0818e1aa +0x266:  mov    %ecx,%eax
0818e1ac +0x268:  mov    %eax,-0x20(%ebp)
0818e1af +0x26b:  cmpl   $0x0,-0x20(%ebp)
0818e1b3 +0x26f:  jne    0818e1d9 <+0x295>
0818e1b5 +0x271:  mov    0x8(%ebp),%eax
0818e1b8 +0x274:  lea    0x30(%eax),%edx
0818e1bb +0x277:  mov    0x8(%ebp),%eax
0818e1be +0x27a:  mov    %edx,0x2c(%eax)
0818e1c1 +0x27d:  mov    0x8(%ebp),%eax
0818e1c4 +0x280:  movl   $0x0,0x18(%eax)
0818e1cb +0x287:  movl   $0x1800,-0x20(%ebp)
0818e1d2 +0x28e:  mov    0x8(%ebp),%eax
0818e1d5 +0x291:  movb   $0x0,0x29(%eax)
0818e1d9 +0x295:  mov    -0x20(%ebp),%ecx
0818e1dc +0x298:  mov    0x8(%ebp),%eax
0818e1df +0x29b:  mov    0x2c(%eax),%edx
0818e1e2 +0x29e:  mov    0x8(%ebp),%eax
0818e1e5 +0x2a1:  mov    (%eax),%eax
0818e1e7 +0x2a3:  mov    %ecx,0x8(%esp)
0818e1eb +0x2a7:  mov    %edx,0x4(%esp)
0818e1ef +0x2ab:  mov    %eax,(%esp)
0818e1f2 +0x2ae:  call   0807de60 <_init+0x758>
0818e1f7 +0x2b3:  mov    %eax,-0x1c(%ebp)
0818e1fa +0x2b6:  mov    -0x1c(%ebp),%eax
0818e1fd +0x2b9:  shr    $0x1f,%eax
0818e200 +0x2bc:  test   %al,%al
0818e202 +0x2be:  je     0818e2b0 <+0x36c>
0818e208 +0x2c4:  call   0807dd70 <_init+0x668>
0818e20d +0x2c9:  mov    (%eax),%eax
0818e20f +0x2cb:  cmp    $0xb,%eax
0818e212 +0x2ce:  je     0818e243 <+0x2ff>
0818e214 +0x2d0:  call   0807dd70 <_init+0x668>
0818e219 +0x2d5:  mov    (%eax),%eax
0818e21b +0x2d7:  cmp    $0x4,%eax
0818e21e +0x2da:  je     0818e243 <+0x2ff>
0818e220 +0x2dc:  call   0807dd70 <_init+0x668>
0818e225 +0x2e1:  mov    (%eax),%eax
0818e227 +0x2e3:  cmp    $0xb,%eax
0818e22a +0x2e6:  je     0818e243 <+0x2ff>
0818e22c +0x2e8:  call   0807dd70 <_init+0x668>
0818e231 +0x2ed:  mov    (%eax),%eax
0818e233 +0x2ef:  test   %eax,%eax
0818e235 +0x2f1:  je     0818e243 <+0x2ff>
0818e237 +0x2f3:  call   0807dd70 <_init+0x668>
0818e23c +0x2f8:  mov    (%eax),%eax
0818e23e +0x2fa:  cmp    $0x73,%eax
0818e241 +0x2fd:  jne    0818e24a <+0x306>
0818e243 +0x2ff:  mov    $0x0,%eax
0818e248 +0x304:  jmp    0818e2c0 <+0x37c>
0818e24a +0x306:  call   0807dd70 <_init+0x668>
0818e24f +0x30b:  mov    (%eax),%eax
0818e251 +0x30d:  mov    %eax,(%esp)
0818e254 +0x310:  call   0807d730 <_init+0x28>
0818e259 +0x315:  mov    %eax,%ebx
0818e25b +0x317:  call   0807dd70 <_init+0x668>
0818e260 +0x31c:  mov    (%eax),%edi
0818e262 +0x31e:  mov    0x8(%ebp),%eax
0818e265 +0x321:  mov    (%eax),%esi
0818e267 +0x323:  movl   $0x0,0xc(%esp)
0818e26f +0x32b:  movl   $0x210,0x8(%esp)
0818e277 +0x333:  movl   $&_ZZN8CNetworkILi6144ELi100000EE11recv_packetEvE12__FUNCTION__,0x4(%esp)
0818e27f +0x33b:  lea    -0x30(%ebp),%eax
0818e282 +0x33e:  mov    %eax,(%esp)
0818e285 +0x341:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818e28a +0x346:  mov    %ebx,0x10(%esp)
0818e28e +0x34a:  mov    %edi,0xc(%esp)
0818e292 +0x34e:  mov    %esi,0x8(%esp)
0818e296 +0x352:  movl   $"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
0818e29e +0x35a:  lea    -0x30(%ebp),%eax
0818e2a1 +0x35d:  mov    %eax,(%esp)
0818e2a4 +0x360:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818e2a9 +0x365:  mov    $0xffffffff,%eax
0818e2ae +0x36a:  jmp    0818e2c0 <+0x37c>
0818e2b0 +0x36c:  cmpl   $0x0,-0x1c(%ebp)
0818e2b4 +0x370:  jne    0818e2bd <+0x379>
0818e2b6 +0x372:  mov    $0xffffffff,%eax
0818e2bb +0x377:  jmp    0818e2c0 <+0x37c>
0818e2bd +0x379:  mov    -0x1c(%ebp),%eax
0818e2c0 +0x37c:  add    $0x4c,%esp
0818e2c3 +0x37f:  pop    %ebx
0818e2c4 +0x380:  pop    %esi
0818e2c5 +0x381:  pop    %edi
0818e2c6 +0x382:  pop    %ebp
0818e2c7 +0x383:  ret
0818e2c8 +0x384:  push   %ebp
0818e2c9 +0x385:  mov    %esp,%ebp
0818e2cb +0x387:  push   %ebx
0818e2cc +0x388:  sub    $0x54,%esp
0818e2cf +0x38b:  movl   $0x0,0x8(%esp)
0818e2d7 +0x393:  movl   $0x0,0x4(%esp)
0818e2df +0x39b:  lea    -0x1e(%ebp),%eax
0818e2e2 +0x39e:  mov    %eax,(%esp)
0818e2e5 +0x3a1:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0818e2ea +0x3a6:  mov    0x8(%ebp),%eax
0818e2ed +0x3a9:  mov    0x18(%eax),%edx
0818e2f0 +0x3ac:  mov    0xc(%ebp),%eax
0818e2f3 +0x3af:  lea    (%edx,%eax,1),%eax
0818e2f6 +0x3b2:  mov    %eax,-0x14(%ebp)
0818e2f9 +0x3b5:  movl   $0xa,-0xc(%ebp)
0818e300 +0x3bc:  cmpl   $0x9,-0x14(%ebp)
0818e304 +0x3c0:  jg     0818e384 <+0x440>
0818e306 +0x3c2:  mov    0x8(%ebp),%eax
0818e309 +0x3c5:  mov    0x18(%eax),%edx
0818e30c +0x3c8:  mov    0xc(%ebp),%eax
0818e30f +0x3cb:  add    %eax,%edx
0818e311 +0x3cd:  mov    0x8(%ebp),%eax
0818e314 +0x3d0:  mov    %edx,0x18(%eax)
0818e317 +0x3d3:  mov    0x8(%ebp),%eax
0818e31a +0x3d6:  mov    0x2c(%eax),%edx
0818e31d +0x3d9:  mov    0xc(%ebp),%eax
0818e320 +0x3dc:  add    %eax,%edx
0818e322 +0x3de:  mov    0x8(%ebp),%eax
0818e325 +0x3e1:  mov    %edx,0x2c(%eax)
0818e328 +0x3e4:  mov    0x8(%ebp),%eax
0818e32b +0x3e7:  mov    0x18(%eax),%edx
0818e32e +0x3ea:  mov    0x8(%ebp),%eax
0818e331 +0x3ed:  lea    0x30(%eax),%ebx
0818e334 +0x3f0:  mov    0x8(%ebp),%eax
0818e337 +0x3f3:  mov    0x2c(%eax),%eax
0818e33a +0x3f6:  mov    0xc(%ebp),%ecx
0818e33d +0x3f9:  mov    %ecx,0x20(%esp)
0818e341 +0x3fd:  mov    %edx,0x1c(%esp)
0818e345 +0x401:  mov    %ebx,0x18(%esp)
0818e349 +0x405:  mov    %eax,0x14(%esp)
0818e34d +0x409:  movl   $"(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",0x10(%esp)
0818e355 +0x411:  movl   $0x31d,0xc(%esp)
0818e35d +0x419:  movl   $&_ZZN8CNetworkILi6144ELi100000EE20Parsing_ServerPacketEiE12__FUNCTION__,0x8(%esp)
0818e365 +0x421:  movl   $"localjapan/../Network.h",0x4(%esp)
0818e36d +0x429:  movl   $0x1,(%esp)
0818e374 +0x430:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818e379 +0x435:  mov    $0x1,%eax
0818e37e +0x43a:  jmp    0818e4ee <+0x5aa>
0818e383 +0x43f:  nop
0818e384 +0x440:  mov    0x8(%ebp),%eax
0818e387 +0x443:  mov    0x18(%eax),%eax
0818e38a +0x446:  test   %eax,%eax
0818e38c +0x448:  je     0818e3a4 <+0x460>
0818e38e +0x44a:  mov    0x8(%ebp),%eax
0818e391 +0x44d:  mov    0x2c(%eax),%edx
0818e394 +0x450:  mov    0x8(%ebp),%eax
0818e397 +0x453:  mov    0x18(%eax),%eax
0818e39a +0x456:  neg    %eax
0818e39c +0x458:  add    %eax,%edx
0818e39e +0x45a:  mov    0x8(%ebp),%eax
0818e3a1 +0x45d:  mov    %edx,0x2c(%eax)
0818e3a4 +0x460:  mov    0x8(%ebp),%eax
0818e3a7 +0x463:  mov    0x2c(%eax),%eax
0818e3aa +0x466:  movl   $0xa,0x8(%esp)
0818e3b2 +0x46e:  mov    %eax,0x4(%esp)
0818e3b6 +0x472:  lea    -0x1e(%ebp),%eax
0818e3b9 +0x475:  mov    %eax,(%esp)
0818e3bc +0x478:  call   0807d8a0 <_init+0x198>
0818e3c1 +0x47d:  movzwl -0x1c(%ebp),%eax
0818e3c5 +0x481:  movzwl %ax,%eax
0818e3c8 +0x484:  mov    %eax,-0x10(%ebp)
0818e3cb +0x487:  cmpl   $0x9,-0x10(%ebp)
0818e3cf +0x48b:  jbe    0818e3da <+0x496>
0818e3d1 +0x48d:  cmpl   $0x1800,-0x10(%ebp)
0818e3d8 +0x494:  jbe    0818e43e <+0x4fa>
0818e3da +0x496:  mov    0x8(%ebp),%eax
0818e3dd +0x499:  mov    0x2c(%eax),%eax
0818e3e0 +0x49c:  mov    %eax,0x1c(%esp)
0818e3e4 +0x4a0:  mov    -0x10(%ebp),%eax
0818e3e7 +0x4a3:  mov    %eax,0x18(%esp)
0818e3eb +0x4a7:  mov    0xc(%ebp),%eax
0818e3ee +0x4aa:  mov    %eax,0x14(%esp)
0818e3f2 +0x4ae:  movl   $"Recv Size[%d], Parsing Packet Size[%d], recvbuf_offset[%d] is Too Large",0x10(%esp)
0818e3fa +0x4b6:  movl   $0x32d,0xc(%esp)
0818e402 +0x4be:  movl   $&_ZZN8CNetworkILi6144ELi100000EE20Parsing_ServerPacketEiE12__FUNCTION__,0x8(%esp)
0818e40a +0x4c6:  movl   $"localjapan/../Network.h",0x4(%esp)
0818e412 +0x4ce:  movl   $0x1,(%esp)
0818e419 +0x4d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818e41e +0x4da:  mov    0x8(%ebp),%eax
0818e421 +0x4dd:  lea    0x30(%eax),%edx
0818e424 +0x4e0:  mov    0x8(%ebp),%eax
0818e427 +0x4e3:  mov    %edx,0x2c(%eax)
0818e42a +0x4e6:  mov    0x8(%ebp),%eax
0818e42d +0x4e9:  movl   $0x0,0x18(%eax)
0818e434 +0x4f0:  mov    $0x0,%eax
0818e439 +0x4f5:  jmp    0818e4ee <+0x5aa>
0818e43e +0x4fa:  mov    -0x14(%ebp),%eax
0818e441 +0x4fd:  cmp    -0x10(%ebp),%eax
0818e444 +0x500:  jb     0818e498 <+0x554>
0818e446 +0x502:  mov    0x8(%ebp),%eax
0818e449 +0x505:  mov    0x2c(%eax),%eax
0818e44c +0x508:  mov    %eax,(%esp)
0818e44f +0x50b:  call   08473660 <_ZN21CDispatchServerPacket14dispatchPacketEPc>  ; CDispatchServerPacket::dispatchPacket(char*)
0818e454 +0x510:  mov    -0x14(%ebp),%eax
0818e457 +0x513:  sub    -0x10(%ebp),%eax
0818e45a +0x516:  mov    %eax,-0x14(%ebp)
0818e45d +0x519:  mov    0x8(%ebp),%eax
0818e460 +0x51c:  mov    0x2c(%eax),%eax
0818e463 +0x51f:  mov    %eax,%edx
0818e465 +0x521:  add    -0x10(%ebp),%edx
0818e468 +0x524:  mov    0x8(%ebp),%eax
0818e46b +0x527:  mov    %edx,0x2c(%eax)
0818e46e +0x52a:  mov    0x8(%ebp),%eax
0818e471 +0x52d:  movl   $0x0,0x18(%eax)
0818e478 +0x534:  cmpl   $0x0,-0x14(%ebp)
0818e47c +0x538:  jne    0818e48c <+0x548>
0818e47e +0x53a:  mov    0x8(%ebp),%eax
0818e481 +0x53d:  lea    0x30(%eax),%edx
0818e484 +0x540:  mov    0x8(%ebp),%eax
0818e487 +0x543:  mov    %edx,0x2c(%eax)
0818e48a +0x546:  jmp    0818e499 <+0x555>
0818e48c +0x548:  cmpl   $0x9,-0x14(%ebp)
0818e490 +0x54c:  jg     0818e383 <+0x43f>
0818e496 +0x552:  jmp    0818e499 <+0x555>
0818e498 +0x554:  nop
0818e499 +0x555:  cmpl   $0x0,-0x14(%ebp)
0818e49d +0x559:  jle    0818e4e9 <+0x5a5>
0818e49f +0x55b:  mov    -0x14(%ebp),%eax
0818e4a2 +0x55e:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
0818e4a7 +0x563:  jbe    0818e4b0 <+0x56c>
0818e4a9 +0x565:  mov    $0x0,%eax
0818e4ae +0x56a:  jmp    0818e4ee <+0x5aa>
0818e4b0 +0x56c:  mov    -0x14(%ebp),%edx
0818e4b3 +0x56f:  mov    0x8(%ebp),%eax
0818e4b6 +0x572:  mov    0x2c(%eax),%eax
0818e4b9 +0x575:  mov    0x8(%ebp),%ecx
0818e4bc +0x578:  add    $0x30,%ecx
0818e4bf +0x57b:  mov    %edx,0x8(%esp)
0818e4c3 +0x57f:  mov    %eax,0x4(%esp)
0818e4c7 +0x583:  mov    %ecx,(%esp)
0818e4ca +0x586:  call   0807d880 <_init+0x178>
0818e4cf +0x58b:  mov    0x8(%ebp),%eax
0818e4d2 +0x58e:  lea    0x30(%eax),%edx
0818e4d5 +0x591:  mov    -0x14(%ebp),%eax
0818e4d8 +0x594:  add    %eax,%edx
0818e4da +0x596:  mov    0x8(%ebp),%eax
0818e4dd +0x599:  mov    %edx,0x2c(%eax)
0818e4e0 +0x59c:  mov    -0x14(%ebp),%edx
0818e4e3 +0x59f:  mov    0x8(%ebp),%eax
0818e4e6 +0x5a2:  mov    %edx,0x18(%eax)
0818e4e9 +0x5a5:  mov    $0x1,%eax
0818e4ee +0x5aa:  add    $0x54,%esp
0818e4f1 +0x5ad:  pop    %ebx
0818e4f2 +0x5ae:  pop    %ebp
0818e4f3 +0x5af:  ret
0818e4f4 +0x5b0:  push   %ebp
0818e4f5 +0x5b1:  mov    %esp,%ebp
0818e4f7 +0x5b3:  push   %edi
0818e4f8 +0x5b4:  push   %esi
0818e4f9 +0x5b5:  push   %ebx
0818e4fa +0x5b6:  sub    $0x4c,%esp
0818e4fd +0x5b9:  movl   $0x0,-0x1c(%ebp)
0818e504 +0x5c0:  mov    0x8(%ebp),%eax
0818e507 +0x5c3:  mov    0x1830(%eax),%eax
0818e50d +0x5c9:  test   %eax,%eax
0818e50f +0x5cb:  jne    0818e51b <+0x5d7>
0818e511 +0x5cd:  mov    $0x0,%eax
0818e516 +0x5d2:  jmp    0818e797 <+0x853>
0818e51b +0x5d7:  mov    0x8(%ebp),%eax
0818e51e +0x5da:  mov    %eax,(%esp)
0818e521 +0x5dd:  call   0818e806 <+0x8c2>
0818e526 +0x5e2:  mov    0x8(%ebp),%eax
0818e529 +0x5e5:  mov    0x1830(%eax),%edx
0818e52f +0x5eb:  mov    0x8(%ebp),%eax
0818e532 +0x5ee:  lea    0x1838(%eax),%ecx
0818e538 +0x5f4:  mov    0x8(%ebp),%eax
0818e53b +0x5f7:  mov    (%eax),%eax
0818e53d +0x5f9:  mov    %edx,0x8(%esp)
0818e541 +0x5fd:  mov    %ecx,0x4(%esp)
0818e545 +0x601:  mov    %eax,(%esp)
0818e548 +0x604:  call   0807e830 <_init+0x1128>
0818e54d +0x609:  mov    %eax,-0x1c(%ebp)
0818e550 +0x60c:  cmpl   $0x0,-0x1c(%ebp)
0818e554 +0x610:  setle  %al
0818e557 +0x613:  test   %al,%al
0818e559 +0x615:  je     0818e623 <+0x6df>
0818e55f +0x61b:  call   0807dd70 <_init+0x668>
0818e564 +0x620:  mov    (%eax),%eax
0818e566 +0x622:  cmp    $0xb,%eax
0818e569 +0x625:  je     0818e59a <+0x656>
0818e56b +0x627:  call   0807dd70 <_init+0x668>
0818e570 +0x62c:  mov    (%eax),%eax
0818e572 +0x62e:  cmp    $0x4,%eax
0818e575 +0x631:  je     0818e59a <+0x656>
0818e577 +0x633:  call   0807dd70 <_init+0x668>
0818e57c +0x638:  mov    (%eax),%eax
0818e57e +0x63a:  cmp    $0xb,%eax
0818e581 +0x63d:  je     0818e59a <+0x656>
0818e583 +0x63f:  call   0807dd70 <_init+0x668>
0818e588 +0x644:  mov    (%eax),%eax
0818e58a +0x646:  test   %eax,%eax
0818e58c +0x648:  je     0818e59a <+0x656>
0818e58e +0x64a:  call   0807dd70 <_init+0x668>
0818e593 +0x64f:  mov    (%eax),%eax
0818e595 +0x651:  cmp    $0x73,%eax
0818e598 +0x654:  jne    0818e5af <+0x66b>
0818e59a +0x656:  mov    0x8(%ebp),%eax
0818e59d +0x659:  mov    %eax,(%esp)
0818e5a0 +0x65c:  call   0818e81e <+0x8da>
0818e5a5 +0x661:  mov    $0x0,%eax
0818e5aa +0x666:  jmp    0818e797 <+0x853>
0818e5af +0x66b:  call   0807dd70 <_init+0x668>
0818e5b4 +0x670:  mov    (%eax),%eax
0818e5b6 +0x672:  mov    %eax,(%esp)
0818e5b9 +0x675:  call   0807d730 <_init+0x28>
0818e5be +0x67a:  mov    %eax,%ebx
0818e5c0 +0x67c:  call   0807dd70 <_init+0x668>
0818e5c5 +0x681:  mov    (%eax),%edi
0818e5c7 +0x683:  mov    0x8(%ebp),%eax
0818e5ca +0x686:  mov    (%eax),%esi
0818e5cc +0x688:  movl   $0x0,0xc(%esp)
0818e5d4 +0x690:  movl   $0x2af,0x8(%esp)
0818e5dc +0x698:  movl   $&_ZZN8CNetworkILi6144ELi100000EE11send_packetEvE12__FUNCTION__,0x4(%esp)
0818e5e4 +0x6a0:  lea    -0x2c(%ebp),%eax
0818e5e7 +0x6a3:  mov    %eax,(%esp)
0818e5ea +0x6a6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818e5ef +0x6ab:  mov    %ebx,0x10(%esp)
0818e5f3 +0x6af:  mov    %edi,0xc(%esp)
0818e5f7 +0x6b3:  mov    %esi,0x8(%esp)
0818e5fb +0x6b7:  movl   $"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
0818e603 +0x6bf:  lea    -0x2c(%ebp),%eax
0818e606 +0x6c2:  mov    %eax,(%esp)
0818e609 +0x6c5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818e60e +0x6ca:  mov    0x8(%ebp),%eax
0818e611 +0x6cd:  mov    %eax,(%esp)
0818e614 +0x6d0:  call   0818e81e <+0x8da>
0818e619 +0x6d5:  mov    $0xffffffff,%eax
0818e61e +0x6da:  jmp    0818e797 <+0x853>
0818e623 +0x6df:  cmpl   $0x0,-0x1c(%ebp)
0818e627 +0x6e3:  jle    0818e789 <+0x845>
0818e62d +0x6e9:  mov    0x8(%ebp),%eax
0818e630 +0x6ec:  mov    0x1830(%eax),%eax
0818e636 +0x6f2:  cmp    -0x1c(%ebp),%eax
0818e639 +0x6f5:  jle    0818e70a <+0x7c6>
0818e63f +0x6fb:  mov    0x8(%ebp),%eax
0818e642 +0x6fe:  lea    0x1838(%eax),%edx
0818e648 +0x704:  mov    -0x1c(%ebp),%eax
0818e64b +0x707:  add    %eax,%edx
0818e64d +0x709:  mov    0x8(%ebp),%eax
0818e650 +0x70c:  mov    %edx,0x1834(%eax)
0818e656 +0x712:  mov    0x8(%ebp),%eax
0818e659 +0x715:  mov    0x1830(%eax),%edx
0818e65f +0x71b:  mov    -0x1c(%ebp),%eax
0818e662 +0x71e:  sub    %eax,%edx
0818e664 +0x720:  mov    0x8(%ebp),%eax
0818e667 +0x723:  mov    %edx,0x1830(%eax)
0818e66d +0x729:  mov    0x8(%ebp),%eax
0818e670 +0x72c:  mov    0x1830(%eax),%eax
0818e676 +0x732:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
0818e67b +0x737:  jbe    0818e6c0 <+0x77c>
0818e67d +0x739:  mov    0x8(%ebp),%eax
0818e680 +0x73c:  mov    0x1830(%eax),%eax
0818e686 +0x742:  mov    %eax,0x14(%esp)
0818e68a +0x746:  movl   $"m_remain_sendlen < MAX_SEND_BUF :  m_remain_sendlen:%d]",0x10(%esp)
0818e692 +0x74e:  movl   $0x2d1,0xc(%esp)
0818e69a +0x756:  movl   $&_ZZN8CNetworkILi6144ELi100000EE11send_packetEvE12__FUNCTION__,0x8(%esp)
0818e6a2 +0x75e:  movl   $"localjapan/../Network.h",0x4(%esp)
0818e6aa +0x766:  movl   $0x1,(%esp)
0818e6b1 +0x76d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818e6b6 +0x772:  mov    $0xffffffff,%eax
0818e6bb +0x777:  jmp    0818e797 <+0x853>
0818e6c0 +0x77c:  mov    0x8(%ebp),%eax
0818e6c3 +0x77f:  mov    0x1830(%eax),%edx
0818e6c9 +0x785:  mov    0x8(%ebp),%eax
0818e6cc +0x788:  mov    0x1834(%eax),%eax
0818e6d2 +0x78e:  mov    0x8(%ebp),%ecx
0818e6d5 +0x791:  add    $0x1838,%ecx
0818e6db +0x797:  mov    %edx,0x8(%esp)
0818e6df +0x79b:  mov    %eax,0x4(%esp)
0818e6e3 +0x79f:  mov    %ecx,(%esp)
0818e6e6 +0x7a2:  call   0807d880 <_init+0x178>
0818e6eb +0x7a7:  mov    0x8(%ebp),%eax
0818e6ee +0x7aa:  lea    0x1838(%eax),%edx
0818e6f4 +0x7b0:  mov    0x8(%ebp),%eax
0818e6f7 +0x7b3:  mov    0x1830(%eax),%eax
0818e6fd +0x7b9:  add    %eax,%edx
0818e6ff +0x7bb:  mov    0x8(%ebp),%eax
0818e702 +0x7be:  mov    %edx,0x1834(%eax)
0818e708 +0x7c4:  jmp    0818e789 <+0x845>
0818e70a +0x7c6:  mov    0x8(%ebp),%eax
0818e70d +0x7c9:  mov    0x1830(%eax),%eax
0818e713 +0x7cf:  cmp    -0x1c(%ebp),%eax
0818e716 +0x7d2:  jge    0818e76a <+0x826>
0818e718 +0x7d4:  mov    0x8(%ebp),%eax
0818e71b +0x7d7:  mov    0x1830(%eax),%eax
0818e721 +0x7dd:  mov    -0x1c(%ebp),%edx
0818e724 +0x7e0:  mov    %edx,0x18(%esp)
0818e728 +0x7e4:  mov    %eax,0x14(%esp)
0818e72c +0x7e8:  movl   $"offset error[Remain_Data: %d Send:%d]",0x10(%esp)
0818e734 +0x7f0:  movl   $0x2db,0xc(%esp)
0818e73c +0x7f8:  movl   $&_ZZN8CNetworkILi6144ELi100000EE11send_packetEvE12__FUNCTION__,0x8(%esp)
0818e744 +0x800:  movl   $"localjapan/../Network.h",0x4(%esp)
0818e74c +0x808:  movl   $0x1,(%esp)
0818e753 +0x80f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818e758 +0x814:  mov    0x8(%ebp),%eax
0818e75b +0x817:  mov    %eax,(%esp)
0818e75e +0x81a:  call   0818e81e <+0x8da>
0818e763 +0x81f:  mov    $0xffffffff,%eax
0818e768 +0x824:  jmp    0818e797 <+0x853>
0818e76a +0x826:  mov    0x8(%ebp),%eax
0818e76d +0x829:  lea    0x1838(%eax),%edx
0818e773 +0x82f:  mov    0x8(%ebp),%eax
0818e776 +0x832:  mov    %edx,0x1834(%eax)
0818e77c +0x838:  mov    0x8(%ebp),%eax
0818e77f +0x83b:  movl   $0x0,0x1830(%eax)
0818e789 +0x845:  mov    0x8(%ebp),%eax
0818e78c +0x848:  mov    %eax,(%esp)
0818e78f +0x84b:  call   0818e81e <+0x8da>
0818e794 +0x850:  mov    -0x1c(%ebp),%eax
0818e797 +0x853:  add    $0x4c,%esp
0818e79a +0x856:  pop    %ebx
0818e79b +0x857:  pop    %esi
0818e79c +0x858:  pop    %edi
0818e79d +0x859:  pop    %ebp
0818e79e +0x85a:  ret
0818e79f +0x85b:  nop
0818e7a0 +0x85c:  push   %ebp
0818e7a1 +0x85d:  mov    %esp,%ebp
0818e7a3 +0x85f:  mov    0x8(%ebp),%eax
0818e7a6 +0x862:  mov    0x1830(%eax),%eax
0818e7ac +0x868:  pop    %ebp
0818e7ad +0x869:  ret
0818e7ae +0x86a:  push   %ebp
0818e7af +0x86b:  mov    %esp,%ebp
0818e7b1 +0x86d:  sub    $0x28,%esp
0818e7b4 +0x870:  movl   $0x0,0x8(%esp)
0818e7bc +0x878:  movl   $0x3,0x4(%esp)
0818e7c4 +0x880:  mov    0x8(%ebp),%eax
0818e7c7 +0x883:  mov    %eax,(%esp)
0818e7ca +0x886:  call   0807e470 <_init+0xd68>
0818e7cf +0x88b:  mov    %eax,-0x10(%ebp)
0818e7d2 +0x88e:  mov    -0x10(%ebp),%eax
0818e7d5 +0x891:  or     $0x8,%ah
0818e7d8 +0x894:  mov    %eax,0x8(%esp)
0818e7dc +0x898:  movl   $0x4,0x4(%esp)
0818e7e4 +0x8a0:  mov    0x8(%ebp),%eax
0818e7e7 +0x8a3:  mov    %eax,(%esp)
0818e7ea +0x8a6:  call   0807e470 <_init+0xd68>
0818e7ef +0x8ab:  mov    %eax,-0xc(%ebp)
0818e7f2 +0x8ae:  cmpl   $0x0,-0xc(%ebp)
0818e7f6 +0x8b2:  jns    0818e7ff <+0x8bb>
0818e7f8 +0x8b4:  mov    $0x0,%eax
0818e7fd +0x8b9:  jmp    0818e804 <+0x8c0>
0818e7ff +0x8bb:  mov    $0x1,%eax
0818e804 +0x8c0:  leave
0818e805 +0x8c1:  ret
0818e806 +0x8c2:  push   %ebp
0818e807 +0x8c3:  mov    %esp,%ebp
0818e809 +0x8c5:  sub    $0x18,%esp
0818e80c +0x8c8:  mov    0x8(%ebp),%eax
0818e80f +0x8cb:  add    $&_ZL14gUnicodeBuffer+0xfa14,%eax
0818e814 +0x8d0:  mov    %eax,(%esp)
0818e817 +0x8d3:  call   0810539e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x1d>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x1d
0818e81c +0x8d8:  leave
0818e81d +0x8d9:  ret
0818e81e +0x8da:  push   %ebp
0818e81f +0x8db:  mov    %esp,%ebp
0818e821 +0x8dd:  sub    $0x18,%esp
0818e824 +0x8e0:  mov    0x8(%ebp),%eax
0818e827 +0x8e3:  add    $&_ZL14gUnicodeBuffer+0xfa14,%eax
0818e82c +0x8e8:  mov    %eax,(%esp)
0818e82f +0x8eb:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
0818e834 +0x8f0:  leave
0818e835 +0x8f1:  ret
0818e836 +0x8f2:  nop
0818e837 +0x8f3:  nop
```

## 反编译 C

```c
// <global>::global @ 0x818df44

/* Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, int) */

void Arad_DevMgr_Server_Proxy::_GLOBAL__I_Arad_DevMgr_Server_Proxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
