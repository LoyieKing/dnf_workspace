# dispatch

`_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream`

`DB_ReloadAutoPunishRuleHackType::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReloadAutoPunishRuleHackType` | `0x0842d16c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842d16c  _ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream
#           DB_ReloadAutoPunishRuleHackType::dispatch(int, int, Stream*)
# range [0x0842d16c, 0x0842d60f]
0842d16c +0x000:  push   %ebp
0842d16d +0x001:  mov    %esp,%ebp
0842d16f +0x003:  push   %esi
0842d170 +0x004:  push   %ebx
0842d171 +0x005:  sub    $0x50,%esp
0842d174 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842d179 +0x00d:  movl   $0x0,0x8(%esp)
0842d181 +0x015:  movl   $0x6,0x4(%esp)
0842d189 +0x01d:  mov    %eax,(%esp)
0842d18c +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842d191 +0x025:  mov    %eax,-0x14(%ebp)
0842d194 +0x028:  movl   $"seLect hack_type,cnt,etc,hack_sub_type,hack_sub_cnt,apply_flag, ip_cnt from auto_punish_hack_info where apply_flag > 0",0x4(%esp)
0842d19c +0x030:  mov    -0x14(%ebp),%eax
0842d19f +0x033:  mov    %eax,(%esp)
0842d1a2 +0x036:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842d1a7 +0x03b:  movl   $0x1,0x4(%esp)
0842d1af +0x043:  mov    -0x14(%ebp),%eax
0842d1b2 +0x046:  mov    %eax,(%esp)
0842d1b5 +0x049:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842d1ba +0x04e:  xor    $0x1,%eax
0842d1bd +0x051:  test   %al,%al
0842d1bf +0x053:  je     0842d1cb <+0x5f>
0842d1c1 +0x055:  mov    $0x0,%ebx
0842d1c6 +0x05a:  jmp    0842d606 <+0x49a>
0842d1cb +0x05f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842d1d0 +0x064:  movl   $0x7094,0x8(%esp)
0842d1d8 +0x06c:  movl   $"DBThread.cpp",0x4(%esp)
0842d1e0 +0x074:  mov    %eax,(%esp)
0842d1e3 +0x077:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842d1e8 +0x07c:  movl   $0x1,0x8(%esp)
0842d1f0 +0x084:  mov    %eax,0x4(%esp)
0842d1f4 +0x088:  lea    -0x24(%ebp),%eax
0842d1f7 +0x08b:  mov    %eax,(%esp)
0842d1fa +0x08e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842d1ff +0x093:  lea    -0x24(%ebp),%eax
0842d202 +0x096:  mov    %eax,(%esp)
0842d205 +0x099:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842d20a +0x09e:  movl   $0x109,0x4(%esp)
0842d212 +0x0a6:  mov    %eax,(%esp)
0842d215 +0x0a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842d21a +0x0ae:  lea    -0x24(%ebp),%eax
0842d21d +0x0b1:  mov    %eax,(%esp)
0842d220 +0x0b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842d225 +0x0b9:  movl   $0xffffffff,0x4(%esp)
0842d22d +0x0c1:  mov    %eax,(%esp)
0842d230 +0x0c4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842d235 +0x0c9:  lea    -0x24(%ebp),%eax
0842d238 +0x0cc:  mov    %eax,(%esp)
0842d23b +0x0cf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842d240 +0x0d4:  mov    %eax,(%esp)
0842d243 +0x0d7:  call   084527dc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x53f2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x53f2
0842d248 +0x0dc:  mov    %eax,-0x10(%ebp)
0842d24b +0x0df:  movl   $0x2720,0x8(%esp)
0842d253 +0x0e7:  movl   $0x0,0x4(%esp)
0842d25b +0x0ef:  mov    -0x10(%ebp),%eax
0842d25e +0x0f2:  mov    %eax,(%esp)
0842d261 +0x0f5:  call   0807dcc0 <_init+0x5b8>
0842d266 +0x0fa:  movl   $0x0,-0xc(%ebp)
0842d26d +0x101:  jmp    0842d586 <+0x41a>
0842d272 +0x106:  mov    -0x14(%ebp),%eax
0842d275 +0x109:  mov    %eax,(%esp)
0842d278 +0x10c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842d27d +0x111:  xor    $0x1,%eax
0842d280 +0x114:  test   %al,%al
0842d282 +0x116:  je     0842d28e <+0x122>
0842d284 +0x118:  mov    $0x0,%ebx
0842d289 +0x11d:  jmp    0842d5fb <+0x48f>
0842d28e +0x122:  movl   $0x0,-0x28(%ebp)
0842d295 +0x129:  movl   $0x0,-0x2c(%ebp)
0842d29c +0x130:  movl   $0x0,-0x30(%ebp)
0842d2a3 +0x137:  movl   $0x0,-0x34(%ebp)
0842d2aa +0x13e:  movl   $0x0,-0x38(%ebp)
0842d2b1 +0x145:  movl   $0x0,-0x40(%ebp)
0842d2b8 +0x14c:  movl   $0x0,-0x3c(%ebp)
0842d2bf +0x153:  lea    -0x28(%ebp),%eax
0842d2c2 +0x156:  mov    %eax,0x8(%esp)
0842d2c6 +0x15a:  movl   $0x0,0x4(%esp)
0842d2ce +0x162:  mov    -0x14(%ebp),%eax
0842d2d1 +0x165:  mov    %eax,(%esp)
0842d2d4 +0x168:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842d2d9 +0x16d:  xor    $0x1,%eax
0842d2dc +0x170:  test   %al,%al
0842d2de +0x172:  je     0842d2ea <+0x17e>
0842d2e0 +0x174:  mov    $0x0,%ebx
0842d2e5 +0x179:  jmp    0842d5fb <+0x48f>
0842d2ea +0x17e:  lea    -0x2c(%ebp),%eax
0842d2ed +0x181:  mov    %eax,0x8(%esp)
0842d2f1 +0x185:  movl   $0x1,0x4(%esp)
0842d2f9 +0x18d:  mov    -0x14(%ebp),%eax
0842d2fc +0x190:  mov    %eax,(%esp)
0842d2ff +0x193:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842d304 +0x198:  xor    $0x1,%eax
0842d307 +0x19b:  test   %al,%al
0842d309 +0x19d:  je     0842d315 <+0x1a9>
0842d30b +0x19f:  mov    $0x0,%ebx
0842d310 +0x1a4:  jmp    0842d5fb <+0x48f>
0842d315 +0x1a9:  lea    -0x40(%ebp),%eax
0842d318 +0x1ac:  mov    %eax,0x8(%esp)
0842d31c +0x1b0:  movl   $0x2,0x4(%esp)
0842d324 +0x1b8:  mov    -0x14(%ebp),%eax
0842d327 +0x1bb:  mov    %eax,(%esp)
0842d32a +0x1be:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
0842d32f +0x1c3:  xor    $0x1,%eax
0842d332 +0x1c6:  test   %al,%al
0842d334 +0x1c8:  je     0842d340 <+0x1d4>
0842d336 +0x1ca:  mov    $0x0,%ebx
0842d33b +0x1cf:  jmp    0842d5fb <+0x48f>
0842d340 +0x1d4:  lea    -0x30(%ebp),%eax
0842d343 +0x1d7:  mov    %eax,0x8(%esp)
0842d347 +0x1db:  movl   $0x3,0x4(%esp)
0842d34f +0x1e3:  mov    -0x14(%ebp),%eax
0842d352 +0x1e6:  mov    %eax,(%esp)
0842d355 +0x1e9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842d35a +0x1ee:  xor    $0x1,%eax
0842d35d +0x1f1:  test   %al,%al
0842d35f +0x1f3:  je     0842d36b <+0x1ff>
0842d361 +0x1f5:  mov    $0x0,%ebx
0842d366 +0x1fa:  jmp    0842d5fb <+0x48f>
0842d36b +0x1ff:  lea    -0x34(%ebp),%eax
0842d36e +0x202:  mov    %eax,0x8(%esp)
0842d372 +0x206:  movl   $0x4,0x4(%esp)
0842d37a +0x20e:  mov    -0x14(%ebp),%eax
0842d37d +0x211:  mov    %eax,(%esp)
0842d380 +0x214:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842d385 +0x219:  xor    $0x1,%eax
0842d388 +0x21c:  test   %al,%al
0842d38a +0x21e:  je     0842d396 <+0x22a>
0842d38c +0x220:  mov    $0x0,%ebx
0842d391 +0x225:  jmp    0842d5fb <+0x48f>
0842d396 +0x22a:  lea    -0x38(%ebp),%eax
0842d399 +0x22d:  mov    %eax,0x8(%esp)
0842d39d +0x231:  movl   $0x5,0x4(%esp)
0842d3a5 +0x239:  mov    -0x14(%ebp),%eax
0842d3a8 +0x23c:  mov    %eax,(%esp)
0842d3ab +0x23f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842d3b0 +0x244:  xor    $0x1,%eax
0842d3b3 +0x247:  test   %al,%al
0842d3b5 +0x249:  je     0842d3c1 <+0x255>
0842d3b7 +0x24b:  mov    $0x0,%ebx
0842d3bc +0x250:  jmp    0842d5fb <+0x48f>
0842d3c1 +0x255:  movl   $0x0,-0x44(%ebp)
0842d3c8 +0x25c:  lea    -0x44(%ebp),%eax
0842d3cb +0x25f:  mov    %eax,0x8(%esp)
0842d3cf +0x263:  movl   $0x6,0x4(%esp)
0842d3d7 +0x26b:  mov    -0x14(%ebp),%eax
0842d3da +0x26e:  mov    %eax,(%esp)
0842d3dd +0x271:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842d3e2 +0x276:  xor    $0x1,%eax
0842d3e5 +0x279:  test   %al,%al
0842d3e7 +0x27b:  je     0842d3f3 <+0x287>
0842d3e9 +0x27d:  mov    $0x0,%ebx
0842d3ee +0x282:  jmp    0842d5fb <+0x48f>
0842d3f3 +0x287:  mov    -0x28(%ebp),%eax
0842d3f6 +0x28a:  test   %eax,%eax
0842d3f8 +0x28c:  jne    0842d416 <+0x2aa>
0842d3fa +0x28e:  mov    -0x2c(%ebp),%edx
0842d3fd +0x291:  mov    -0x10(%ebp),%eax
0842d400 +0x294:  mov    %edx,(%eax)
0842d402 +0x296:  mov    -0x40(%ebp),%eax
0842d405 +0x299:  mov    -0x3c(%ebp),%edx
0842d408 +0x29c:  mov    -0x10(%ebp),%ecx
0842d40b +0x29f:  mov    %eax,0x4(%ecx)
0842d40e +0x2a2:  mov    %edx,0x8(%ecx)
0842d411 +0x2a5:  jmp    0842d582 <+0x416>
0842d416 +0x2aa:  mov    -0x28(%ebp),%eax
0842d419 +0x2ad:  cmp    $0x64,%eax
0842d41c +0x2b0:  jbe    0842d578 <+0x40c>
0842d422 +0x2b6:  mov    -0x28(%ebp),%eax
0842d425 +0x2b9:  cmp    $0xfa0,%eax
0842d42a +0x2be:  ja     0842d57b <+0x40f>
0842d430 +0x2c4:  mov    -0x30(%ebp),%eax
0842d433 +0x2c7:  test   %eax,%eax
0842d435 +0x2c9:  je     0842d451 <+0x2e5>
0842d437 +0x2cb:  mov    -0x30(%ebp),%eax
0842d43a +0x2ce:  cmp    $0x64,%eax
0842d43d +0x2d1:  jbe    0842d57e <+0x412>
0842d443 +0x2d7:  mov    -0x30(%ebp),%eax
0842d446 +0x2da:  cmp    $0xfa0,%eax
0842d44b +0x2df:  ja     0842d581 <+0x415>
0842d451 +0x2e5:  mov    -0x30(%ebp),%eax
0842d454 +0x2e8:  test   %eax,%eax
0842d456 +0x2ea:  jne    0842d45f <+0x2f3>
0842d458 +0x2ec:  movl   $0x0,-0x34(%ebp)
0842d45f +0x2f3:  mov    -0x10(%ebp),%eax
0842d462 +0x2f6:  movzwl 0xc(%eax),%eax
0842d466 +0x2fa:  movzwl %ax,%edx
0842d469 +0x2fd:  mov    -0x28(%ebp),%eax
0842d46c +0x300:  mov    %eax,%ecx
0842d46e +0x302:  mov    -0x10(%ebp),%ebx
0842d471 +0x305:  mov    %edx,%eax
0842d473 +0x307:  shl    $0x2,%eax
0842d476 +0x30a:  add    %edx,%eax
0842d478 +0x30c:  shl    $0x2,%eax
0842d47b +0x30f:  lea    (%ebx,%eax,1),%eax
0842d47e +0x312:  add    $0x10,%eax
0842d481 +0x315:  mov    %cx,(%eax)
0842d484 +0x318:  mov    -0x10(%ebp),%eax
0842d487 +0x31b:  movzwl 0xc(%eax),%eax
0842d48b +0x31f:  movzwl %ax,%edx
0842d48e +0x322:  mov    -0x2c(%ebp),%eax
0842d491 +0x325:  mov    %eax,%ecx
0842d493 +0x327:  mov    -0x10(%ebp),%ebx
0842d496 +0x32a:  mov    %edx,%eax
0842d498 +0x32c:  shl    $0x2,%eax
0842d49b +0x32f:  add    %edx,%eax
0842d49d +0x331:  shl    $0x2,%eax
0842d4a0 +0x334:  lea    (%ebx,%eax,1),%eax
0842d4a3 +0x337:  add    $0x10,%eax
0842d4a6 +0x33a:  mov    %cx,0x2(%eax)
0842d4aa +0x33e:  mov    -0x10(%ebp),%eax
0842d4ad +0x341:  movzwl 0xc(%eax),%eax
0842d4b1 +0x345:  movzwl %ax,%edx
0842d4b4 +0x348:  mov    -0x30(%ebp),%eax
0842d4b7 +0x34b:  mov    %eax,%ecx
0842d4b9 +0x34d:  mov    -0x10(%ebp),%ebx
0842d4bc +0x350:  mov    %edx,%eax
0842d4be +0x352:  shl    $0x2,%eax
0842d4c1 +0x355:  add    %edx,%eax
0842d4c3 +0x357:  shl    $0x2,%eax
0842d4c6 +0x35a:  lea    (%ebx,%eax,1),%eax
0842d4c9 +0x35d:  add    $0x10,%eax
0842d4cc +0x360:  mov    %cx,0x4(%eax)
0842d4d0 +0x364:  mov    -0x10(%ebp),%eax
0842d4d3 +0x367:  movzwl 0xc(%eax),%eax
0842d4d7 +0x36b:  movzwl %ax,%edx
0842d4da +0x36e:  mov    -0x34(%ebp),%eax
0842d4dd +0x371:  mov    %eax,%ecx
0842d4df +0x373:  mov    -0x10(%ebp),%ebx
0842d4e2 +0x376:  mov    %edx,%eax
0842d4e4 +0x378:  shl    $0x2,%eax
0842d4e7 +0x37b:  add    %edx,%eax
0842d4e9 +0x37d:  shl    $0x2,%eax
0842d4ec +0x380:  lea    (%ebx,%eax,1),%eax
0842d4ef +0x383:  add    $0x10,%eax
0842d4f2 +0x386:  mov    %cx,0x6(%eax)
0842d4f6 +0x38a:  mov    -0x10(%ebp),%eax
0842d4f9 +0x38d:  movzwl 0xc(%eax),%eax
0842d4fd +0x391:  movzwl %ax,%edx
0842d500 +0x394:  mov    -0x44(%ebp),%ecx
0842d503 +0x397:  mov    -0x10(%ebp),%ebx
0842d506 +0x39a:  mov    %edx,%eax
0842d508 +0x39c:  shl    $0x2,%eax
0842d50b +0x39f:  add    %edx,%eax
0842d50d +0x3a1:  shl    $0x2,%eax
0842d510 +0x3a4:  lea    (%ebx,%eax,1),%eax
0842d513 +0x3a7:  add    $0x1c,%eax
0842d516 +0x3aa:  mov    %ecx,(%eax)
0842d518 +0x3ac:  mov    -0x10(%ebp),%eax
0842d51b +0x3af:  movzwl 0xc(%eax),%eax
0842d51f +0x3b3:  movzwl %ax,%edx
0842d522 +0x3b6:  mov    -0x38(%ebp),%eax
0842d525 +0x3b9:  mov    %eax,%ecx
0842d527 +0x3bb:  mov    -0x10(%ebp),%ebx
0842d52a +0x3be:  mov    %edx,%eax
0842d52c +0x3c0:  shl    $0x2,%eax
0842d52f +0x3c3:  add    %edx,%eax
0842d531 +0x3c5:  shl    $0x2,%eax
0842d534 +0x3c8:  lea    (%ebx,%eax,1),%eax
0842d537 +0x3cb:  add    $0x10,%eax
0842d53a +0x3ce:  mov    %cx,0x8(%eax)
0842d53e +0x3d2:  mov    -0x10(%ebp),%eax
0842d541 +0x3d5:  movzwl 0xc(%eax),%eax
0842d545 +0x3d9:  movzwl %ax,%ecx
0842d548 +0x3dc:  mov    -0x40(%ebp),%eax
0842d54b +0x3df:  mov    -0x3c(%ebp),%edx
0842d54e +0x3e2:  mov    %eax,%edx
0842d550 +0x3e4:  mov    -0x10(%ebp),%ebx
0842d553 +0x3e7:  mov    %ecx,%eax
0842d555 +0x3e9:  shl    $0x2,%eax
0842d558 +0x3ec:  add    %ecx,%eax
0842d55a +0x3ee:  shl    $0x2,%eax
0842d55d +0x3f1:  lea    (%ebx,%eax,1),%eax
0842d560 +0x3f4:  add    $0x20,%eax
0842d563 +0x3f7:  mov    %edx,(%eax)
0842d565 +0x3f9:  mov    -0x10(%ebp),%eax
0842d568 +0x3fc:  movzwl 0xc(%eax),%eax
0842d56c +0x400:  lea    0x1(%eax),%edx
0842d56f +0x403:  mov    -0x10(%ebp),%eax
0842d572 +0x406:  mov    %dx,0xc(%eax)
0842d576 +0x40a:  jmp    0842d582 <+0x416>
0842d578 +0x40c:  nop
0842d579 +0x40d:  jmp    0842d582 <+0x416>
0842d57b +0x40f:  nop
0842d57c +0x410:  jmp    0842d582 <+0x416>
0842d57e +0x412:  nop
0842d57f +0x413:  jmp    0842d582 <+0x416>
0842d581 +0x415:  nop
0842d582 +0x416:  addl   $0x1,-0xc(%ebp)
0842d586 +0x41a:  movl   $0x1f4,-0x1c(%ebp)
0842d58d +0x421:  mov    -0x14(%ebp),%eax
0842d590 +0x424:  mov    %eax,(%esp)
0842d593 +0x427:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842d598 +0x42c:  mov    %eax,-0x18(%ebp)
0842d59b +0x42f:  lea    -0x1c(%ebp),%eax
0842d59e +0x432:  mov    %eax,0x4(%esp)
0842d5a2 +0x436:  lea    -0x18(%ebp),%eax
0842d5a5 +0x439:  mov    %eax,(%esp)
0842d5a8 +0x43c:  call   08236091 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb73b>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb73b
0842d5ad +0x441:  mov    (%eax),%eax
0842d5af +0x443:  cmp    -0xc(%ebp),%eax
0842d5b2 +0x446:  seta   %al
0842d5b5 +0x449:  test   %al,%al
0842d5b7 +0x44b:  jne    0842d272 <+0x106>
0842d5bd +0x451:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842d5c2 +0x456:  lea    -0x24(%ebp),%edx
0842d5c5 +0x459:  mov    %edx,0x8(%esp)
0842d5c9 +0x45d:  movl   $0x1,0x4(%esp)
0842d5d1 +0x465:  mov    %eax,(%esp)
0842d5d4 +0x468:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842d5d9 +0x46d:  mov    $0x1,%ebx
0842d5de +0x472:  jmp    0842d5fb <+0x48f>
0842d5e0 +0x474:  mov    %edx,%ebx
0842d5e2 +0x476:  mov    %eax,%esi
0842d5e4 +0x478:  lea    -0x24(%ebp),%eax
0842d5e7 +0x47b:  mov    %eax,(%esp)
0842d5ea +0x47e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d5ef +0x483:  mov    %esi,%eax
0842d5f1 +0x485:  mov    %ebx,%edx
0842d5f3 +0x487:  mov    %eax,(%esp)
0842d5f6 +0x48a:  call   08ae3750 <_Unwind_Resume>
0842d5fb +0x48f:  lea    -0x24(%ebp),%eax
0842d5fe +0x492:  mov    %eax,(%esp)
0842d601 +0x495:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d606 +0x49a:  mov    %ebx,%eax
0842d608 +0x49c:  add    $0x50,%esp
0842d60b +0x49f:  pop    %ebx
0842d60c +0x4a0:  pop    %esi
0842d60d +0x4a1:  pop    %ebp
0842d60e +0x4a2:  ret
0842d60f +0x4a3:  nop
```

## 反编译 C

```c
// DB_ReloadAutoPunishRuleHackType::dispatch @ 0x842d16c

/* DB_ReloadAutoPunishRuleHackType::dispatch(int, int, Stream*) */

undefined4 DB_ReloadAutoPunishRuleHackType::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c [5];
  CStreamGuard local_28 [8];
  uint local_20;
  uint local_1c;
  MySQL *local_18;
  SIG_AUTO_PUNISH_RULE_HACK_TYPE *local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_18,
                   "seLect hack_type,cnt,etc,hack_sub_type,hack_sub_cnt,apply_flag, ip_cnt from auto_punish_hack_info where apply_flag > 0"
                  );
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7094);
    CStreamGuard::CStreamGuard(local_28,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0842d215 to 0842d5d8 has its CatchHandler @ 0842d5e0 */
    CStreamGuard::operator<<(pCVar3,0x109);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_14 = CStreamGuard::GetInBuffer<SIG_AUTO_PUNISH_RULE_HACK_TYPE>(pCVar3);
    memset(local_14,0,0x2720);
    local_10 = 0;
    while( true ) {
      local_20 = 500;
      local_1c = MySQL::get_n_rows(local_18);
      puVar4 = std::min<unsigned_int>(&local_1c,&local_20);
      if (*puVar4 <= local_10) break;
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      local_3c[4] = 0;
      local_3c[3] = 0;
      local_3c[2] = 0;
      local_3c[1] = 0;
      local_3c[0] = 0;
      local_44 = 0;
      local_40 = 0;
      cVar1 = MySQL::get_uint(local_18,0,local_3c + 4);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,1,local_3c + 3);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_ulonglong(local_18,2,(ulonglong *)&local_44);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,3,local_3c + 2);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,4,local_3c + 1);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,5,local_3c);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      local_48 = 0;
      cVar1 = MySQL::get_uint(local_18,6,&local_48);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      if (local_3c[4] == 0) {
        *(uint *)local_14 = local_3c[3];
        *(undefined4 *)(local_14 + 4) = local_44;
        *(undefined4 *)(local_14 + 8) = local_40;
      }
      else if (((100 < local_3c[4]) && (local_3c[4] < 0xfa1)) &&
              ((local_3c[2] == 0 || ((100 < local_3c[2] && (local_3c[2] < 0xfa1)))))) {
        if (local_3c[2] == 0) {
          local_3c[1] = 0;
        }
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x10) = (short)local_3c[4];
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x12) = (short)local_3c[3];
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x14) = (short)local_3c[2];
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x16) = (short)local_3c[1];
        *(uint *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x1c) = local_48;
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x18) = (short)local_3c[0];
        *(undefined4 *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x20) = local_44;
        *(short *)(local_14 + 0xc) = *(short *)(local_14 + 0xc) + 1;
      }
      local_10 = local_10 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
    uVar5 = 1;
LAB_0842d5fb:
    CStreamGuard::~CStreamGuard(local_28);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
