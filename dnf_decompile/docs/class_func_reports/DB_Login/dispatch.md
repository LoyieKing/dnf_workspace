# dispatch

`_ZN8DB_Login8dispatchEiiP6Stream`

`DB_Login::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0840f51c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840f51c  _ZN8DB_Login8dispatchEiiP6Stream
#           DB_Login::dispatch(int, int, Stream*)
# range [0x0840f51c, 0x0840ffc9]
0840f51c +0x000:  push   %ebp
0840f51d +0x001:  mov    %esp,%ebp
0840f51f +0x003:  push   %esi
0840f520 +0x004:  push   %ebx
0840f521 +0x005:  sub    $0x40,%esp
0840f524 +0x008:  mov    0x8(%ebp),%eax
0840f527 +0x00b:  mov    0x14(%ebp),%edx
0840f52a +0x00e:  mov    %edx,0xc(%esp)
0840f52e +0x012:  mov    0x10(%ebp),%edx
0840f531 +0x015:  mov    %edx,0x8(%esp)
0840f535 +0x019:  mov    0xc(%ebp),%edx
0840f538 +0x01c:  mov    %edx,0x4(%esp)
0840f53c +0x020:  mov    %eax,(%esp)
0840f53f +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0840f544 +0x028:  xor    $0x1,%eax
0840f547 +0x02b:  test   %al,%al
0840f549 +0x02d:  je     0840f555 <+0x39>
0840f54b +0x02f:  mov    $0x0,%ebx
0840f550 +0x034:  jmp    0840ffc1 <+0xaa5>
0840f555 +0x039:  mov    0x14(%ebp),%eax
0840f558 +0x03c:  mov    %eax,(%esp)
0840f55b +0x03f:  call   0818fbb4 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0xb6>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0xb6
0840f560 +0x044:  mov    %eax,-0x1c(%ebp)
0840f563 +0x047:  cmpl   $0x0,-0x1c(%ebp)
0840f567 +0x04b:  jne    0840f573 <+0x57>
0840f569 +0x04d:  mov    $0x0,%ebx
0840f56e +0x052:  jmp    0840ffc1 <+0xaa5>
0840f573 +0x057:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0840f578 +0x05c:  mov    %eax,(%esp)
0840f57b +0x05f:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0840f580 +0x064:  test   %al,%al
0840f582 +0x066:  je     0840f59d <+0x81>
0840f584 +0x068:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0840f589 +0x06d:  mov    %eax,(%esp)
0840f58c +0x070:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0840f591 +0x075:  cmp    $0xe,%eax
0840f594 +0x078:  je     0840f59d <+0x81>
0840f596 +0x07a:  mov    $0x1,%eax
0840f59b +0x07f:  jmp    0840f5a2 <+0x86>
0840f59d +0x081:  mov    $0x0,%eax
0840f5a2 +0x086:  test   %al,%al
0840f5a4 +0x088:  je     0840f5f1 <+0xd5>
0840f5a6 +0x08a:  movl   $0x0,-0x34(%ebp)
0840f5ad +0x091:  movl   $0x0,-0x30(%ebp)
0840f5b4 +0x098:  mov    -0x1c(%ebp),%eax
0840f5b7 +0x09b:  movzwl 0x3a38(%eax),%eax
0840f5be +0x0a2:  cwtl
0840f5bf +0x0a3:  mov    %eax,-0x2c(%ebp)
0840f5c2 +0x0a6:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840f5c7 +0x0ab:  lea    -0x34(%ebp),%edx
0840f5ca +0x0ae:  mov    %edx,0x8(%esp)
0840f5ce +0x0b2:  mov    0x10(%ebp),%edx
0840f5d1 +0x0b5:  mov    %edx,0x4(%esp)
0840f5d5 +0x0b9:  mov    %eax,(%esp)
0840f5d8 +0x0bc:  call   083f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>  ; DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&)
0840f5dd +0x0c1:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840f5e2 +0x0c6:  mov    0x10(%ebp),%edx
0840f5e5 +0x0c9:  mov    %edx,0x4(%esp)
0840f5e9 +0x0cd:  mov    %eax,(%esp)
0840f5ec +0x0d0:  call   0818fb1a <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1c>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1c
0840f5f1 +0x0d5:  mov    -0x1c(%ebp),%eax
0840f5f4 +0x0d8:  mov    %eax,0x4(%esp)
0840f5f8 +0x0dc:  mov    0x8(%ebp),%eax
0840f5fb +0x0df:  mov    %eax,(%esp)
0840f5fe +0x0e2:  call   0841325e <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA>  ; DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)
0840f603 +0x0e7:  xor    $0x1,%eax
0840f606 +0x0ea:  test   %al,%al
0840f608 +0x0ec:  je     0840f63e <+0x122>
0840f60a +0x0ee:  mov    -0x1c(%ebp),%eax
0840f60d +0x0f1:  movl   $0x1,0xb8(%eax)
0840f617 +0x0fb:  mov    -0x1c(%ebp),%eax
0840f61a +0x0fe:  mov    %eax,0xc(%esp)
0840f61e +0x102:  mov    0x10(%ebp),%eax
0840f621 +0x105:  mov    %eax,0x8(%esp)
0840f625 +0x109:  mov    0xc(%ebp),%eax
0840f628 +0x10c:  mov    %eax,0x4(%esp)
0840f62c +0x110:  mov    0x8(%ebp),%eax
0840f62f +0x113:  mov    %eax,(%esp)
0840f632 +0x116:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840f637 +0x11b:  mov    %eax,%ebx
0840f639 +0x11d:  jmp    0840ffc1 <+0xaa5>
0840f63e +0x122:  mov    -0x1c(%ebp),%eax
0840f641 +0x125:  lea    0xa1(%eax),%ecx
0840f647 +0x12b:  mov    -0x1c(%ebp),%eax
0840f64a +0x12e:  mov    0x3a30(%eax),%eax
0840f650 +0x134:  mov    %eax,%edx
0840f652 +0x136:  mov    -0x1c(%ebp),%eax
0840f655 +0x139:  mov    0xc0(%eax),%eax
0840f65b +0x13f:  mov    %ecx,0xc(%esp)
0840f65f +0x143:  mov    %edx,0x8(%esp)
0840f663 +0x147:  mov    %eax,0x4(%esp)
0840f667 +0x14b:  mov    0x8(%ebp),%eax
0840f66a +0x14e:  mov    %eax,(%esp)
0840f66d +0x151:  call   084148a6 <_ZN8DB_Login13SaveLoginTimeEjiPc>  ; DB_Login::SaveLoginTime(unsigned int, int, char*)
0840f672 +0x156:  mov    -0x1c(%ebp),%eax
0840f675 +0x159:  movw   $0x0,0x38de(%eax)
0840f67e +0x162:  mov    -0x1c(%ebp),%eax
0840f681 +0x165:  mov    %eax,0x4(%esp)
0840f685 +0x169:  mov    0x8(%ebp),%eax
0840f688 +0x16c:  mov    %eax,(%esp)
0840f68b +0x16f:  call   08410cf6 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA>  ; DB_Login::GetPunishUserInfo(SIG_LOGIN_DATA*)
0840f690 +0x174:  xor    $0x1,%eax
0840f693 +0x177:  test   %al,%al
0840f695 +0x179:  je     0840f6cb <+0x1af>
0840f697 +0x17b:  mov    -0x1c(%ebp),%eax
0840f69a +0x17e:  movl   $0xf,0xb8(%eax)
0840f6a4 +0x188:  mov    -0x1c(%ebp),%eax
0840f6a7 +0x18b:  mov    %eax,0xc(%esp)
0840f6ab +0x18f:  mov    0x10(%ebp),%eax
0840f6ae +0x192:  mov    %eax,0x8(%esp)
0840f6b2 +0x196:  mov    0xc(%ebp),%eax
0840f6b5 +0x199:  mov    %eax,0x4(%esp)
0840f6b9 +0x19d:  mov    0x8(%ebp),%eax
0840f6bc +0x1a0:  mov    %eax,(%esp)
0840f6bf +0x1a3:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840f6c4 +0x1a8:  mov    %eax,%ebx
0840f6c6 +0x1aa:  jmp    0840ffc1 <+0xaa5>
0840f6cb +0x1af:  mov    -0x1c(%ebp),%eax
0840f6ce +0x1b2:  movb   $0x0,0x3f0c(%eax)
0840f6d5 +0x1b9:  mov    -0x1c(%ebp),%eax
0840f6d8 +0x1bc:  movl   $0x0,0x3a24(%eax)
0840f6e2 +0x1c6:  mov    -0x1c(%ebp),%eax
0840f6e5 +0x1c9:  movl   $0x0,0x3a28(%eax)
0840f6ef +0x1d3:  movl   $0x0,0x3a2c(%eax)
0840f6f9 +0x1dd:  mov    -0x1c(%ebp),%eax
0840f6fc +0x1e0:  mov    0x3a50(%eax),%eax
0840f702 +0x1e6:  test   %eax,%eax
0840f704 +0x1e8:  je     0840fb94 <+0x678>
0840f70a +0x1ee:  movl   $0x0,-0xc(%ebp)
0840f711 +0x1f5:  movl   $0x0,-0xc(%ebp)
0840f718 +0x1fc:  jmp    0840fb7d <+0x661>
0840f71d +0x201:  mov    -0xc(%ebp),%edx
0840f720 +0x204:  mov    -0x1c(%ebp),%ecx
0840f723 +0x207:  mov    %edx,%eax
0840f725 +0x209:  add    %eax,%eax
0840f727 +0x20b:  add    %edx,%eax
0840f729 +0x20d:  shl    $0x3,%eax
0840f72c +0x210:  lea    (%ecx,%eax,1),%eax
0840f72f +0x213:  add    $0x3a54,%eax
0840f734 +0x218:  mov    (%eax),%eax
0840f736 +0x21a:  cmp    $0x1,%eax
0840f739 +0x21d:  jne    0840f865 <+0x349>
0840f73f +0x223:  mov    -0xc(%ebp),%edx
0840f742 +0x226:  mov    -0x1c(%ebp),%ecx
0840f745 +0x229:  mov    %edx,%eax
0840f747 +0x22b:  add    %eax,%eax
0840f749 +0x22d:  add    %edx,%eax
0840f74b +0x22f:  shl    $0x3,%eax
0840f74e +0x232:  lea    (%ecx,%eax,1),%eax
0840f751 +0x235:  add    $0x3a68,%eax
0840f756 +0x23a:  mov    (%eax),%ebx
0840f758 +0x23c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0840f75f +0x243:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0840f764 +0x248:  cmp    %eax,%ebx
0840f766 +0x24a:  jge    0840f785 <+0x269>
0840f768 +0x24c:  mov    -0xc(%ebp),%edx
0840f76b +0x24f:  mov    -0x1c(%ebp),%ecx
0840f76e +0x252:  mov    %edx,%eax
0840f770 +0x254:  add    %eax,%eax
0840f772 +0x256:  add    %edx,%eax
0840f774 +0x258:  shl    $0x3,%eax
0840f777 +0x25b:  lea    (%ecx,%eax,1),%eax
0840f77a +0x25e:  add    $0x3a68,%eax
0840f77f +0x263:  mov    (%eax),%eax
0840f781 +0x265:  test   %eax,%eax
0840f783 +0x267:  jne    0840f78c <+0x270>
0840f785 +0x269:  mov    $0x1,%eax
0840f78a +0x26e:  jmp    0840f791 <+0x275>
0840f78c +0x270:  mov    $0x0,%eax
0840f791 +0x275:  test   %al,%al
0840f793 +0x277:  je     0840f865 <+0x349>
0840f799 +0x27d:  mov    -0xc(%ebp),%edx
0840f79c +0x280:  mov    -0x1c(%ebp),%ecx
0840f79f +0x283:  mov    %edx,%eax
0840f7a1 +0x285:  add    %eax,%eax
0840f7a3 +0x287:  add    %edx,%eax
0840f7a5 +0x289:  shl    $0x3,%eax
0840f7a8 +0x28c:  lea    (%ecx,%eax,1),%eax
0840f7ab +0x28f:  add    $0x3a68,%eax
0840f7b0 +0x294:  mov    (%eax),%eax
0840f7b2 +0x296:  test   %eax,%eax
0840f7b4 +0x298:  je     0840f7e6 <+0x2ca>
0840f7b6 +0x29a:  mov    -0xc(%ebp),%edx
0840f7b9 +0x29d:  mov    -0x1c(%ebp),%ecx
0840f7bc +0x2a0:  mov    %edx,%eax
0840f7be +0x2a2:  add    %eax,%eax
0840f7c0 +0x2a4:  add    %edx,%eax
0840f7c2 +0x2a6:  shl    $0x3,%eax
0840f7c5 +0x2a9:  lea    (%ecx,%eax,1),%eax
0840f7c8 +0x2ac:  add    $0x3a5c,%eax
0840f7cd +0x2b1:  mov    (%eax),%eax
0840f7cf +0x2b3:  cmp    $0x19,%eax
0840f7d2 +0x2b6:  jle    0840f7d9 <+0x2bd>
0840f7d4 +0x2b8:  mov    $0x19,%eax
0840f7d9 +0x2bd:  mov    %eax,%edx
0840f7db +0x2bf:  mov    -0x1c(%ebp),%eax
0840f7de +0x2c2:  mov    %edx,0xd8(%eax)
0840f7e4 +0x2c8:  jmp    0840f83e <+0x322>
0840f7e6 +0x2ca:  mov    -0xc(%ebp),%edx
0840f7e9 +0x2cd:  mov    -0x1c(%ebp),%ecx
0840f7ec +0x2d0:  mov    %edx,%eax
0840f7ee +0x2d2:  add    %eax,%eax
0840f7f0 +0x2d4:  add    %edx,%eax
0840f7f2 +0x2d6:  shl    $0x3,%eax
0840f7f5 +0x2d9:  lea    (%ecx,%eax,1),%eax
0840f7f8 +0x2dc:  add    $0x3a60,%eax
0840f7fd +0x2e1:  mov    (%eax),%eax
0840f7ff +0x2e3:  cmp    $0x1,%eax
0840f802 +0x2e6:  jne    0840f813 <+0x2f7>
0840f804 +0x2e8:  mov    -0x1c(%ebp),%eax
0840f807 +0x2eb:  movl   $0xa,0xb8(%eax)
0840f811 +0x2f5:  jmp    0840f83e <+0x322>
0840f813 +0x2f7:  mov    -0xc(%ebp),%edx
0840f816 +0x2fa:  mov    -0x1c(%ebp),%ecx
0840f819 +0x2fd:  mov    %edx,%eax
0840f81b +0x2ff:  add    %eax,%eax
0840f81d +0x301:  add    %edx,%eax
0840f81f +0x303:  shl    $0x3,%eax
0840f822 +0x306:  lea    (%ecx,%eax,1),%eax
0840f825 +0x309:  add    $0x3a60,%eax
0840f82a +0x30e:  mov    (%eax),%eax
0840f82c +0x310:  cmp    $0x2,%eax
0840f82f +0x313:  jne    0840f83e <+0x322>
0840f831 +0x315:  mov    -0x1c(%ebp),%eax
0840f834 +0x318:  movl   $0xb,0xb8(%eax)
0840f83e +0x322:  mov    -0x1c(%ebp),%eax
0840f841 +0x325:  mov    %eax,0xc(%esp)
0840f845 +0x329:  mov    0x10(%ebp),%eax
0840f848 +0x32c:  mov    %eax,0x8(%esp)
0840f84c +0x330:  mov    0xc(%ebp),%eax
0840f84f +0x333:  mov    %eax,0x4(%esp)
0840f853 +0x337:  mov    0x8(%ebp),%eax
0840f856 +0x33a:  mov    %eax,(%esp)
0840f859 +0x33d:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840f85e +0x342:  mov    %eax,%ebx
0840f860 +0x344:  jmp    0840ffc1 <+0xaa5>
0840f865 +0x349:  mov    -0xc(%ebp),%edx
0840f868 +0x34c:  mov    -0x1c(%ebp),%ecx
0840f86b +0x34f:  mov    %edx,%eax
0840f86d +0x351:  add    %eax,%eax
0840f86f +0x353:  add    %edx,%eax
0840f871 +0x355:  shl    $0x3,%eax
0840f874 +0x358:  lea    (%ecx,%eax,1),%eax
0840f877 +0x35b:  add    $0x3a54,%eax
0840f87c +0x360:  mov    (%eax),%eax
0840f87e +0x362:  cmp    $0x2,%eax
0840f881 +0x365:  je     0840f8a7 <+0x38b>
0840f883 +0x367:  mov    -0xc(%ebp),%edx
0840f886 +0x36a:  mov    -0x1c(%ebp),%ecx
0840f889 +0x36d:  mov    %edx,%eax
0840f88b +0x36f:  add    %eax,%eax
0840f88d +0x371:  add    %edx,%eax
0840f88f +0x373:  shl    $0x3,%eax
0840f892 +0x376:  lea    (%ecx,%eax,1),%eax
0840f895 +0x379:  add    $0x3a54,%eax
0840f89a +0x37e:  mov    (%eax),%eax
0840f89c +0x380:  cmp    $0x3ea,%eax
0840f8a1 +0x385:  jne    0840f9ce <+0x4b2>
0840f8a7 +0x38b:  mov    -0xc(%ebp),%edx
0840f8aa +0x38e:  mov    -0x1c(%ebp),%ecx
0840f8ad +0x391:  mov    %edx,%eax
0840f8af +0x393:  add    %eax,%eax
0840f8b1 +0x395:  add    %edx,%eax
0840f8b3 +0x397:  shl    $0x3,%eax
0840f8b6 +0x39a:  lea    (%ecx,%eax,1),%eax
0840f8b9 +0x39d:  add    $0x3a68,%eax
0840f8be +0x3a2:  mov    (%eax),%ebx
0840f8c0 +0x3a4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0840f8c7 +0x3ab:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0840f8cc +0x3b0:  cmp    %eax,%ebx
0840f8ce +0x3b2:  jge    0840f8ed <+0x3d1>
0840f8d0 +0x3b4:  mov    -0xc(%ebp),%edx
0840f8d3 +0x3b7:  mov    -0x1c(%ebp),%ecx
0840f8d6 +0x3ba:  mov    %edx,%eax
0840f8d8 +0x3bc:  add    %eax,%eax
0840f8da +0x3be:  add    %edx,%eax
0840f8dc +0x3c0:  shl    $0x3,%eax
0840f8df +0x3c3:  lea    (%ecx,%eax,1),%eax
0840f8e2 +0x3c6:  add    $0x3a68,%eax
0840f8e7 +0x3cb:  mov    (%eax),%eax
0840f8e9 +0x3cd:  test   %eax,%eax
0840f8eb +0x3cf:  jne    0840f8f4 <+0x3d8>
0840f8ed +0x3d1:  mov    $0x1,%eax
0840f8f2 +0x3d6:  jmp    0840f8f9 <+0x3dd>
0840f8f4 +0x3d8:  mov    $0x0,%eax
0840f8f9 +0x3dd:  test   %al,%al
0840f8fb +0x3df:  je     0840f9ce <+0x4b2>
0840f901 +0x3e5:  mov    -0xc(%ebp),%edx
0840f904 +0x3e8:  mov    -0x1c(%ebp),%ecx
0840f907 +0x3eb:  mov    %edx,%eax
0840f909 +0x3ed:  add    %eax,%eax
0840f90b +0x3ef:  add    %edx,%eax
0840f90d +0x3f1:  shl    $0x3,%eax
0840f910 +0x3f4:  lea    (%ecx,%eax,1),%eax
0840f913 +0x3f7:  add    $0x3a68,%eax
0840f918 +0x3fc:  mov    (%eax),%eax
0840f91a +0x3fe:  test   %eax,%eax
0840f91c +0x400:  je     0840f94f <+0x433>
0840f91e +0x402:  mov    -0xc(%ebp),%edx
0840f921 +0x405:  mov    -0x1c(%ebp),%ecx
0840f924 +0x408:  mov    %edx,%eax
0840f926 +0x40a:  add    %eax,%eax
0840f928 +0x40c:  add    %edx,%eax
0840f92a +0x40e:  shl    $0x3,%eax
0840f92d +0x411:  lea    (%ecx,%eax,1),%eax
0840f930 +0x414:  add    $0x3a5c,%eax
0840f935 +0x419:  mov    (%eax),%eax
0840f937 +0x41b:  cmp    $0x19,%eax
0840f93a +0x41e:  jle    0840f941 <+0x425>
0840f93c +0x420:  mov    $0x19,%eax
0840f941 +0x425:  lea    0xc(%eax),%edx
0840f944 +0x428:  mov    -0x1c(%ebp),%eax
0840f947 +0x42b:  mov    %edx,0xb8(%eax)
0840f94d +0x431:  jmp    0840f9a7 <+0x48b>
0840f94f +0x433:  mov    -0xc(%ebp),%edx
0840f952 +0x436:  mov    -0x1c(%ebp),%ecx
0840f955 +0x439:  mov    %edx,%eax
0840f957 +0x43b:  add    %eax,%eax
0840f959 +0x43d:  add    %edx,%eax
0840f95b +0x43f:  shl    $0x3,%eax
0840f95e +0x442:  lea    (%ecx,%eax,1),%eax
0840f961 +0x445:  add    $0x3a60,%eax
0840f966 +0x44a:  mov    (%eax),%eax
0840f968 +0x44c:  cmp    $0x1,%eax
0840f96b +0x44f:  jne    0840f97c <+0x460>
0840f96d +0x451:  mov    -0x1c(%ebp),%eax
0840f970 +0x454:  movl   $0xa,0xb8(%eax)
0840f97a +0x45e:  jmp    0840f9a7 <+0x48b>
0840f97c +0x460:  mov    -0xc(%ebp),%edx
0840f97f +0x463:  mov    -0x1c(%ebp),%ecx
0840f982 +0x466:  mov    %edx,%eax
0840f984 +0x468:  add    %eax,%eax
0840f986 +0x46a:  add    %edx,%eax
0840f988 +0x46c:  shl    $0x3,%eax
0840f98b +0x46f:  lea    (%ecx,%eax,1),%eax
0840f98e +0x472:  add    $0x3a60,%eax
0840f993 +0x477:  mov    (%eax),%eax
0840f995 +0x479:  cmp    $0x2,%eax
0840f998 +0x47c:  jne    0840f9a7 <+0x48b>
0840f99a +0x47e:  mov    -0x1c(%ebp),%eax
0840f99d +0x481:  movl   $0xb,0xb8(%eax)
0840f9a7 +0x48b:  mov    -0x1c(%ebp),%eax
0840f9aa +0x48e:  mov    %eax,0xc(%esp)
0840f9ae +0x492:  mov    0x10(%ebp),%eax
0840f9b1 +0x495:  mov    %eax,0x8(%esp)
0840f9b5 +0x499:  mov    0xc(%ebp),%eax
0840f9b8 +0x49c:  mov    %eax,0x4(%esp)
0840f9bc +0x4a0:  mov    0x8(%ebp),%eax
0840f9bf +0x4a3:  mov    %eax,(%esp)
0840f9c2 +0x4a6:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840f9c7 +0x4ab:  mov    %eax,%ebx
0840f9c9 +0x4ad:  jmp    0840ffc1 <+0xaa5>
0840f9ce +0x4b2:  mov    -0xc(%ebp),%edx
0840f9d1 +0x4b5:  mov    -0x1c(%ebp),%ecx
0840f9d4 +0x4b8:  mov    %edx,%eax
0840f9d6 +0x4ba:  add    %eax,%eax
0840f9d8 +0x4bc:  add    %edx,%eax
0840f9da +0x4be:  shl    $0x3,%eax
0840f9dd +0x4c1:  lea    (%ecx,%eax,1),%eax
0840f9e0 +0x4c4:  add    $0x3a54,%eax
0840f9e5 +0x4c9:  mov    (%eax),%eax
0840f9e7 +0x4cb:  cmp    $0x3,%eax
0840f9ea +0x4ce:  je     0840fa10 <+0x4f4>
0840f9ec +0x4d0:  mov    -0xc(%ebp),%edx
0840f9ef +0x4d3:  mov    -0x1c(%ebp),%ecx
0840f9f2 +0x4d6:  mov    %edx,%eax
0840f9f4 +0x4d8:  add    %eax,%eax
0840f9f6 +0x4da:  add    %edx,%eax
0840f9f8 +0x4dc:  shl    $0x3,%eax
0840f9fb +0x4df:  lea    (%ecx,%eax,1),%eax
0840f9fe +0x4e2:  add    $0x3a54,%eax
0840fa03 +0x4e7:  mov    (%eax),%eax
0840fa05 +0x4e9:  cmp    $0x3eb,%eax
0840fa0a +0x4ee:  jne    0840fadd <+0x5c1>
0840fa10 +0x4f4:  mov    -0xc(%ebp),%edx
0840fa13 +0x4f7:  mov    -0x1c(%ebp),%ecx
0840fa16 +0x4fa:  mov    %edx,%eax
0840fa18 +0x4fc:  add    %eax,%eax
0840fa1a +0x4fe:  add    %edx,%eax
0840fa1c +0x500:  shl    $0x3,%eax
0840fa1f +0x503:  lea    (%ecx,%eax,1),%eax
0840fa22 +0x506:  add    $0x3a68,%eax
0840fa27 +0x50b:  mov    (%eax),%eax
0840fa29 +0x50d:  test   %eax,%eax
0840fa2b +0x50f:  je     0840fa5e <+0x542>
0840fa2d +0x511:  mov    -0xc(%ebp),%edx
0840fa30 +0x514:  mov    -0x1c(%ebp),%ecx
0840fa33 +0x517:  mov    %edx,%eax
0840fa35 +0x519:  add    %eax,%eax
0840fa37 +0x51b:  add    %edx,%eax
0840fa39 +0x51d:  shl    $0x3,%eax
0840fa3c +0x520:  lea    (%ecx,%eax,1),%eax
0840fa3f +0x523:  add    $0x3a5c,%eax
0840fa44 +0x528:  mov    (%eax),%eax
0840fa46 +0x52a:  cmp    $0x19,%eax
0840fa49 +0x52d:  jle    0840fa50 <+0x534>
0840fa4b +0x52f:  mov    $0x19,%eax
0840fa50 +0x534:  lea    0xc(%eax),%edx
0840fa53 +0x537:  mov    -0x1c(%ebp),%eax
0840fa56 +0x53a:  mov    %edx,0xb8(%eax)
0840fa5c +0x540:  jmp    0840fab6 <+0x59a>
0840fa5e +0x542:  mov    -0xc(%ebp),%edx
0840fa61 +0x545:  mov    -0x1c(%ebp),%ecx
0840fa64 +0x548:  mov    %edx,%eax
0840fa66 +0x54a:  add    %eax,%eax
0840fa68 +0x54c:  add    %edx,%eax
0840fa6a +0x54e:  shl    $0x3,%eax
0840fa6d +0x551:  lea    (%ecx,%eax,1),%eax
0840fa70 +0x554:  add    $0x3a60,%eax
0840fa75 +0x559:  mov    (%eax),%eax
0840fa77 +0x55b:  cmp    $0x1,%eax
0840fa7a +0x55e:  jne    0840fa8b <+0x56f>
0840fa7c +0x560:  mov    -0x1c(%ebp),%eax
0840fa7f +0x563:  movl   $0xa,0xb8(%eax)
0840fa89 +0x56d:  jmp    0840fab6 <+0x59a>
0840fa8b +0x56f:  mov    -0xc(%ebp),%edx
0840fa8e +0x572:  mov    -0x1c(%ebp),%ecx
0840fa91 +0x575:  mov    %edx,%eax
0840fa93 +0x577:  add    %eax,%eax
0840fa95 +0x579:  add    %edx,%eax
0840fa97 +0x57b:  shl    $0x3,%eax
0840fa9a +0x57e:  lea    (%ecx,%eax,1),%eax
0840fa9d +0x581:  add    $0x3a60,%eax
0840faa2 +0x586:  mov    (%eax),%eax
0840faa4 +0x588:  cmp    $0x2,%eax
0840faa7 +0x58b:  jne    0840fab6 <+0x59a>
0840faa9 +0x58d:  mov    -0x1c(%ebp),%eax
0840faac +0x590:  movl   $0xb,0xb8(%eax)
0840fab6 +0x59a:  mov    -0x1c(%ebp),%eax
0840fab9 +0x59d:  mov    %eax,0xc(%esp)
0840fabd +0x5a1:  mov    0x10(%ebp),%eax
0840fac0 +0x5a4:  mov    %eax,0x8(%esp)
0840fac4 +0x5a8:  mov    0xc(%ebp),%eax
0840fac7 +0x5ab:  mov    %eax,0x4(%esp)
0840facb +0x5af:  mov    0x8(%ebp),%eax
0840face +0x5b2:  mov    %eax,(%esp)
0840fad1 +0x5b5:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840fad6 +0x5ba:  mov    %eax,%ebx
0840fad8 +0x5bc:  jmp    0840ffc1 <+0xaa5>
0840fadd +0x5c1:  mov    -0xc(%ebp),%edx
0840fae0 +0x5c4:  mov    -0x1c(%ebp),%ecx
0840fae3 +0x5c7:  mov    %edx,%eax
0840fae5 +0x5c9:  add    %eax,%eax
0840fae7 +0x5cb:  add    %edx,%eax
0840fae9 +0x5cd:  shl    $0x3,%eax
0840faec +0x5d0:  lea    (%ecx,%eax,1),%eax
0840faef +0x5d3:  add    $0x3a54,%eax
0840faf4 +0x5d8:  mov    (%eax),%eax
0840faf6 +0x5da:  cmp    $0x4,%eax
0840faf9 +0x5dd:  jne    0840fb51 <+0x635>
0840fafb +0x5df:  mov    -0xc(%ebp),%edx
0840fafe +0x5e2:  mov    -0x1c(%ebp),%ecx
0840fb01 +0x5e5:  mov    %edx,%eax
0840fb03 +0x5e7:  add    %eax,%eax
0840fb05 +0x5e9:  add    %edx,%eax
0840fb07 +0x5eb:  shl    $0x3,%eax
0840fb0a +0x5ee:  lea    (%ecx,%eax,1),%eax
0840fb0d +0x5f1:  add    $0x3a60,%eax
0840fb12 +0x5f6:  mov    (%eax),%eax
0840fb14 +0x5f8:  cmp    $0x1,%eax
0840fb17 +0x5fb:  jne    0840fb27 <+0x60b>
0840fb19 +0x5fd:  mov    -0x1c(%ebp),%eax
0840fb1c +0x600:  movw   $0xd,0x38de(%eax)
0840fb25 +0x609:  jmp    0840fb51 <+0x635>
0840fb27 +0x60b:  mov    -0xc(%ebp),%edx
0840fb2a +0x60e:  mov    -0x1c(%ebp),%ecx
0840fb2d +0x611:  mov    %edx,%eax
0840fb2f +0x613:  add    %eax,%eax
0840fb31 +0x615:  add    %edx,%eax
0840fb33 +0x617:  shl    $0x3,%eax
0840fb36 +0x61a:  lea    (%ecx,%eax,1),%eax
0840fb39 +0x61d:  add    $0x3a60,%eax
0840fb3e +0x622:  mov    (%eax),%eax
0840fb40 +0x624:  cmp    $0x2,%eax
0840fb43 +0x627:  jne    0840fb51 <+0x635>
0840fb45 +0x629:  mov    -0x1c(%ebp),%eax
0840fb48 +0x62c:  movw   $0xe,0x38de(%eax)
0840fb51 +0x635:  mov    -0xc(%ebp),%edx
0840fb54 +0x638:  mov    -0x1c(%ebp),%ecx
0840fb57 +0x63b:  mov    %edx,%eax
0840fb59 +0x63d:  add    %eax,%eax
0840fb5b +0x63f:  add    %edx,%eax
0840fb5d +0x641:  shl    $0x3,%eax
0840fb60 +0x644:  lea    (%ecx,%eax,1),%eax
0840fb63 +0x647:  add    $0x3a54,%eax
0840fb68 +0x64c:  mov    (%eax),%eax
0840fb6a +0x64e:  cmp    $0xa,%eax
0840fb6d +0x651:  jne    0840fb79 <+0x65d>
0840fb6f +0x653:  mov    -0x1c(%ebp),%eax
0840fb72 +0x656:  movb   $0x1,0x3f0c(%eax)
0840fb79 +0x65d:  addl   $0x1,-0xc(%ebp)
0840fb7d +0x661:  mov    -0x1c(%ebp),%eax
0840fb80 +0x664:  mov    0x3a50(%eax),%eax
0840fb86 +0x66a:  cmp    -0xc(%ebp),%eax
0840fb89 +0x66d:  setg   %al
0840fb8c +0x670:  test   %al,%al
0840fb8e +0x672:  jne    0840f71d <+0x201>
0840fb94 +0x678:  mov    -0x1c(%ebp),%eax
0840fb97 +0x67b:  mov    %eax,0x4(%esp)
0840fb9b +0x67f:  mov    0x8(%ebp),%eax
0840fb9e +0x682:  mov    %eax,(%esp)
0840fba1 +0x685:  call   084115f8 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA>  ; DB_Login::_getRewardInfo(SIG_LOGIN_DATA*)
0840fba6 +0x68a:  movl   $0x0,-0x18(%ebp)
0840fbad +0x691:  movl   $0x0,-0x14(%ebp)
0840fbb4 +0x698:  movl   $0x0,-0x10(%ebp)
0840fbbb +0x69f:  mov    -0x1c(%ebp),%eax
0840fbbe +0x6a2:  movzbl 0x38e0(%eax),%eax
0840fbc5 +0x6a9:  test   %al,%al
0840fbc7 +0x6ab:  je     0840fbef <+0x6d3>
0840fbc9 +0x6ad:  mov    -0x1c(%ebp),%eax
0840fbcc +0x6b0:  movzbl 0x390e(%eax),%eax
0840fbd3 +0x6b7:  xor    $0x1,%eax
0840fbd6 +0x6ba:  test   %al,%al
0840fbd8 +0x6bc:  je     0840fbef <+0x6d3>
0840fbda +0x6be:  mov    -0x1c(%ebp),%eax
0840fbdd +0x6c1:  mov    %eax,0x4(%esp)
0840fbe1 +0x6c5:  mov    0x8(%ebp),%eax
0840fbe4 +0x6c8:  mov    %eax,(%esp)
0840fbe7 +0x6cb:  call   08411af0 <_ZN8DB_Login19_convertPassPadInfoEP14SIG_LOGIN_DATA>  ; DB_Login::_convertPassPadInfo(SIG_LOGIN_DATA*)
0840fbec +0x6d0:  mov    %eax,-0x14(%ebp)
0840fbef +0x6d3:  cmpl   $0x0,-0x14(%ebp)
0840fbf3 +0x6d7:  je     0840fc56 <+0x73a>
0840fbf5 +0x6d9:  cmpl   $0x48,-0x14(%ebp)
0840fbf9 +0x6dd:  jne    0840fc0a <+0x6ee>
0840fbfb +0x6df:  mov    -0x1c(%ebp),%eax
0840fbfe +0x6e2:  movl   $0x5,0xb8(%eax)
0840fc08 +0x6ec:  jmp    0840fc2f <+0x713>
0840fc0a +0x6ee:  cmpl   $0xa6,-0x14(%ebp)
0840fc11 +0x6f5:  jne    0840fc22 <+0x706>
0840fc13 +0x6f7:  mov    -0x1c(%ebp),%eax
0840fc16 +0x6fa:  movl   $0x9,0xb8(%eax)
0840fc20 +0x704:  jmp    0840fc2f <+0x713>
0840fc22 +0x706:  mov    -0x1c(%ebp),%eax
0840fc25 +0x709:  movl   $0x6,0xb8(%eax)
0840fc2f +0x713:  mov    -0x1c(%ebp),%eax
0840fc32 +0x716:  mov    %eax,0xc(%esp)
0840fc36 +0x71a:  mov    0x10(%ebp),%eax
0840fc39 +0x71d:  mov    %eax,0x8(%esp)
0840fc3d +0x721:  mov    0xc(%ebp),%eax
0840fc40 +0x724:  mov    %eax,0x4(%esp)
0840fc44 +0x728:  mov    0x8(%ebp),%eax
0840fc47 +0x72b:  mov    %eax,(%esp)
0840fc4a +0x72e:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840fc4f +0x733:  mov    %eax,%ebx
0840fc51 +0x735:  jmp    0840ffc1 <+0xaa5>
0840fc56 +0x73a:  mov    -0x1c(%ebp),%eax
0840fc59 +0x73d:  movl   $0x0,0xb8(%eax)
0840fc63 +0x747:  lea    -0x28(%ebp),%eax
0840fc66 +0x74a:  mov    %eax,(%esp)
0840fc69 +0x74d:  call   0818fc08 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x10a>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x10a
0840fc6e +0x752:  mov    -0x1c(%ebp),%eax
0840fc71 +0x755:  mov    0xc0(%eax),%eax
0840fc77 +0x75b:  lea    -0x28(%ebp),%edx
0840fc7a +0x75e:  mov    %edx,0x8(%esp)
0840fc7e +0x762:  mov    %eax,0x4(%esp)
0840fc82 +0x766:  mov    0x8(%ebp),%eax
0840fc85 +0x769:  mov    %eax,(%esp)
0840fc88 +0x76c:  call   08411bda <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE>  ; DB_Login::_LoadDNFEventEntry(unsigned int, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
0840fc8d +0x771:  lea    -0x28(%ebp),%eax
0840fc90 +0x774:  mov    %eax,0xc(%esp)
0840fc94 +0x778:  mov    -0x1c(%ebp),%eax
0840fc97 +0x77b:  mov    %eax,0x8(%esp)
0840fc9b +0x77f:  mov    0x10(%ebp),%eax
0840fc9e +0x782:  mov    %eax,0x4(%esp)
0840fca2 +0x786:  mov    0x8(%ebp),%eax
0840fca5 +0x789:  mov    %eax,(%esp)
0840fca8 +0x78c:  call   08411ee8 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE>  ; DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
0840fcad +0x791:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0840fcb2 +0x796:  mov    %eax,(%esp)
0840fcb5 +0x799:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0840fcba +0x79e:  cmp    $0x7,%eax
0840fcbd +0x7a1:  sete   %al
0840fcc0 +0x7a4:  test   %al,%al
0840fcc2 +0x7a6:  je     0840fd12 <+0x7f6>
0840fcc4 +0x7a8:  mov    -0x1c(%ebp),%eax
0840fcc7 +0x7ab:  mov    0x39ac(%eax),%eax
0840fccd +0x7b1:  test   %eax,%eax
0840fccf +0x7b3:  je     0840fcde <+0x7c2>
0840fcd1 +0x7b5:  mov    -0x1c(%ebp),%eax
0840fcd4 +0x7b8:  mov    0x39a8(%eax),%eax
0840fcda +0x7be:  test   %eax,%eax
0840fcdc +0x7c0:  jne    0840fd12 <+0x7f6>
0840fcde +0x7c2:  mov    -0x1c(%ebp),%eax
0840fce1 +0x7c5:  movl   $0x8,0xb8(%eax)
0840fceb +0x7cf:  mov    -0x1c(%ebp),%eax
0840fcee +0x7d2:  mov    %eax,0xc(%esp)
0840fcf2 +0x7d6:  mov    0x10(%ebp),%eax
0840fcf5 +0x7d9:  mov    %eax,0x8(%esp)
0840fcf9 +0x7dd:  mov    0xc(%ebp),%eax
0840fcfc +0x7e0:  mov    %eax,0x4(%esp)
0840fd00 +0x7e4:  mov    0x8(%ebp),%eax
0840fd03 +0x7e7:  mov    %eax,(%esp)
0840fd06 +0x7ea:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840fd0b +0x7ef:  mov    %eax,%ebx
0840fd0d +0x7f1:  jmp    0840ffb6 <+0xa9a>
0840fd12 +0x7f6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0840fd17 +0x7fb:  mov    %eax,(%esp)
0840fd1a +0x7fe:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0840fd1f +0x803:  cmp    $0xe,%eax
0840fd22 +0x806:  sete   %al
0840fd25 +0x809:  test   %al,%al
0840fd27 +0x80b:  je     0840fda4 <+0x888>
0840fd29 +0x80d:  mov    -0x1c(%ebp),%eax
0840fd2c +0x810:  mov    0x39d4(%eax),%eax
0840fd32 +0x816:  test   %eax,%eax
0840fd34 +0x818:  je     0840fd60 <+0x844>
0840fd36 +0x81a:  mov    -0x1c(%ebp),%eax
0840fd39 +0x81d:  mov    0x39d0(%eax),%eax
0840fd3f +0x823:  test   %eax,%eax
0840fd41 +0x825:  je     0840fd60 <+0x844>
0840fd43 +0x827:  mov    -0x1c(%ebp),%eax
0840fd46 +0x82a:  mov    0x39d8(%eax),%ebx
0840fd4c +0x830:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0840fd51 +0x835:  mov    %eax,(%esp)
0840fd54 +0x838:  call   0844d4ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xc4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xc4
0840fd59 +0x83d:  and    %ebx,%eax
0840fd5b +0x83f:  cmp    $0x1,%eax
0840fd5e +0x842:  jne    0840fd67 <+0x84b>
0840fd60 +0x844:  mov    $0x1,%eax
0840fd65 +0x849:  jmp    0840fd6c <+0x850>
0840fd67 +0x84b:  mov    $0x0,%eax
0840fd6c +0x850:  test   %al,%al
0840fd6e +0x852:  je     0840fda4 <+0x888>
0840fd70 +0x854:  mov    -0x1c(%ebp),%eax
0840fd73 +0x857:  movl   $0x8,0xb8(%eax)
0840fd7d +0x861:  mov    -0x1c(%ebp),%eax
0840fd80 +0x864:  mov    %eax,0xc(%esp)
0840fd84 +0x868:  mov    0x10(%ebp),%eax
0840fd87 +0x86b:  mov    %eax,0x8(%esp)
0840fd8b +0x86f:  mov    0xc(%ebp),%eax
0840fd8e +0x872:  mov    %eax,0x4(%esp)
0840fd92 +0x876:  mov    0x8(%ebp),%eax
0840fd95 +0x879:  mov    %eax,(%esp)
0840fd98 +0x87c:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840fd9d +0x881:  mov    %eax,%ebx
0840fd9f +0x883:  jmp    0840ffb6 <+0xa9a>
0840fda4 +0x888:  mov    -0x1c(%ebp),%eax
0840fda7 +0x88b:  mov    %eax,0x4(%esp)
0840fdab +0x88f:  mov    0x8(%ebp),%eax
0840fdae +0x892:  mov    %eax,(%esp)
0840fdb1 +0x895:  call   08414772 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA>  ; DB_Login::GetGameDBInfo(SIG_LOGIN_DATA*)
0840fdb6 +0x89a:  cmp    $0x1,%eax
0840fdb9 +0x89d:  setne  %al
0840fdbc +0x8a0:  test   %al,%al
0840fdbe +0x8a2:  je     0840fddb <+0x8bf>
0840fdc0 +0x8a4:  mov    -0x1c(%ebp),%eax
0840fdc3 +0x8a7:  mov    %eax,0x8(%esp)
0840fdc7 +0x8ab:  mov    0x10(%ebp),%eax
0840fdca +0x8ae:  mov    %eax,0x4(%esp)
0840fdce +0x8b2:  mov    0x8(%ebp),%eax
0840fdd1 +0x8b5:  mov    %eax,(%esp)
0840fdd4 +0x8b8:  call   08414d50 <_ZN8DB_Login15UpdateLoginStatEiP14SIG_LOGIN_DATA>  ; DB_Login::UpdateLoginStat(int, SIG_LOGIN_DATA*)
0840fdd9 +0x8bd:  jmp    0840fde8 <+0x8cc>
0840fddb +0x8bf:  mov    -0x1c(%ebp),%eax
0840fdde +0x8c2:  movl   $0xf,0xb8(%eax)
0840fde8 +0x8cc:  mov    -0x1c(%ebp),%eax
0840fdeb +0x8cf:  movzbl 0x39e0(%eax),%eax
0840fdf2 +0x8d6:  test   %al,%al
0840fdf4 +0x8d8:  je     0840fe19 <+0x8fd>
0840fdf6 +0x8da:  mov    -0x1c(%ebp),%eax
0840fdf9 +0x8dd:  movzbl 0x39e1(%eax),%eax
0840fe00 +0x8e4:  xor    $0x1,%eax
0840fe03 +0x8e7:  test   %al,%al
0840fe05 +0x8e9:  je     0840fe19 <+0x8fd>
0840fe07 +0x8eb:  mov    -0x1c(%ebp),%eax
0840fe0a +0x8ee:  mov    %eax,0x4(%esp)
0840fe0e +0x8f2:  mov    0x8(%ebp),%eax
0840fe11 +0x8f5:  mov    %eax,(%esp)
0840fe14 +0x8f8:  call   084111e2 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA>  ; DB_Login::_getSecurityCardInfo(SIG_LOGIN_DATA*)
0840fe19 +0x8fd:  mov    -0x1c(%ebp),%eax
0840fe1c +0x900:  mov    %eax,0x4(%esp)
0840fe20 +0x904:  mov    0x8(%ebp),%eax
0840fe23 +0x907:  mov    %eax,(%esp)
0840fe26 +0x90a:  call   0840ffca <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA>  ; DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)
0840fe2b +0x90f:  mov    -0x1c(%ebp),%eax
0840fe2e +0x912:  mov    %eax,0x4(%esp)
0840fe32 +0x916:  mov    0x8(%ebp),%eax
0840fe35 +0x919:  mov    %eax,(%esp)
0840fe38 +0x91c:  call   084101ae <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA>  ; DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)
0840fe3d +0x921:  xor    $0x1,%eax
0840fe40 +0x924:  test   %al,%al
0840fe42 +0x926:  je     0840fe50 <+0x934>
0840fe44 +0x928:  mov    -0x1c(%ebp),%eax
0840fe47 +0x92b:  movb   $0x0,0x3f58(%eax)
0840fe4e +0x932:  jmp    0840fe5a <+0x93e>
0840fe50 +0x934:  mov    -0x1c(%ebp),%eax
0840fe53 +0x937:  movb   $0x1,0x3f58(%eax)
0840fe5a +0x93e:  mov    -0x1c(%ebp),%eax
0840fe5d +0x941:  mov    0xc0(%eax),%eax
0840fe63 +0x947:  mov    %eax,0x4(%esp)
0840fe67 +0x94b:  mov    0x8(%ebp),%eax
0840fe6a +0x94e:  mov    %eax,(%esp)
0840fe6d +0x951:  call   08410f74 <_ZN8DB_Login25_isJoinedSchoolPointEventEj>  ; DB_Login::_isJoinedSchoolPointEvent(unsigned int)
0840fe72 +0x956:  mov    -0x1c(%ebp),%edx
0840fe75 +0x959:  mov    %al,0x3a4a(%edx)
0840fe7b +0x95f:  mov    -0x1c(%ebp),%eax
0840fe7e +0x962:  mov    %eax,0x4(%esp)
0840fe82 +0x966:  mov    0x8(%ebp),%eax
0840fe85 +0x969:  mov    %eax,(%esp)
0840fe88 +0x96c:  call   08410c12 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA>  ; DB_Login::GetDailyCleanPadPoint(SIG_LOGIN_DATA*)
0840fe8d +0x971:  mov    -0x1c(%ebp),%eax
0840fe90 +0x974:  mov    %eax,0x4(%esp)
0840fe94 +0x978:  mov    0x8(%ebp),%eax
0840fe97 +0x97b:  mov    %eax,(%esp)
0840fe9a +0x97e:  call   0844b982 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA>  ; DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)
0840fe9f +0x983:  mov    -0x1c(%ebp),%eax
0840fea2 +0x986:  mov    %eax,0x4(%esp)
0840fea6 +0x98a:  mov    0x8(%ebp),%eax
0840fea9 +0x98d:  mov    %eax,(%esp)
0840feac +0x990:  call   08410ad8 <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA>  ; DB_Login::GetReturnUserInfo(SIG_LOGIN_DATA*)
0840feb1 +0x995:  mov    -0x1c(%ebp),%eax
0840feb4 +0x998:  mov    %eax,0x4(%esp)
0840feb8 +0x99c:  mov    0x8(%ebp),%eax
0840febb +0x99f:  mov    %eax,(%esp)
0840febe +0x9a2:  call   0841090c <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA>  ; DB_Login::GetLoginCommonData(SIG_LOGIN_DATA*)
0840fec3 +0x9a7:  mov    -0x1c(%ebp),%eax
0840fec6 +0x9aa:  mov    %eax,0x4(%esp)
0840feca +0x9ae:  mov    0x8(%ebp),%eax
0840fecd +0x9b1:  mov    %eax,(%esp)
0840fed0 +0x9b4:  call   08414e7a <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA>  ; DB_Login::GetCheckPickUpRandomOptionItem(SIG_LOGIN_DATA*)
0840fed5 +0x9b9:  mov    -0x1c(%ebp),%eax
0840fed8 +0x9bc:  mov    %eax,0x4(%esp)
0840fedc +0x9c0:  mov    0x8(%ebp),%eax
0840fedf +0x9c3:  mov    %eax,(%esp)
0840fee2 +0x9c6:  call   08414f5c <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA>  ; DB_Login::GetOntimeUserRecvIdx(SIG_LOGIN_DATA*)
0840fee7 +0x9cb:  mov    -0x1c(%ebp),%eax
0840feea +0x9ce:  mov    %eax,0x4(%esp)
0840feee +0x9d2:  mov    0x8(%ebp),%eax
0840fef1 +0x9d5:  mov    %eax,(%esp)
0840fef4 +0x9d8:  call   084150e8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA>  ; DB_Login::GetUserFatigueCount(SIG_LOGIN_DATA*)
0840fef9 +0x9dd:  mov    -0x1c(%ebp),%eax
0840fefc +0x9e0:  mov    %eax,0x4(%esp)
0840ff00 +0x9e4:  mov    0x8(%ebp),%eax
0840ff03 +0x9e7:  mov    %eax,(%esp)
0840ff06 +0x9ea:  call   084152b0 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA>  ; DB_Login::GetUserInGameEventHistory(SIG_LOGIN_DATA*)
0840ff0b +0x9ef:  mov    -0x1c(%ebp),%eax
0840ff0e +0x9f2:  mov    %eax,0x4(%esp)
0840ff12 +0x9f6:  mov    0x8(%ebp),%eax
0840ff15 +0x9f9:  mov    %eax,(%esp)
0840ff18 +0x9fc:  call   08415472 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA>  ; DB_Login::CheckLoginIP(SIG_LOGIN_DATA*)
0840ff1d +0xa01:  mov    -0x1c(%ebp),%eax
0840ff20 +0xa04:  mov    %eax,0x4(%esp)
0840ff24 +0xa08:  mov    0x8(%ebp),%eax
0840ff27 +0xa0b:  mov    %eax,(%esp)
0840ff2a +0xa0e:  call   08415618 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA>  ; DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)
0840ff2f +0xa13:  mov    -0x1c(%ebp),%eax
0840ff32 +0xa16:  mov    %eax,0x4(%esp)
0840ff36 +0xa1a:  mov    0x8(%ebp),%eax
0840ff39 +0xa1d:  mov    %eax,(%esp)
0840ff3c +0xa20:  call   08448bee <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA>  ; DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)
0840ff41 +0xa25:  mov    -0x1c(%ebp),%eax
0840ff44 +0xa28:  mov    %eax,0x4(%esp)
0840ff48 +0xa2c:  mov    0x8(%ebp),%eax
0840ff4b +0xa2f:  mov    %eax,(%esp)
0840ff4e +0xa32:  call   08447ea6 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA>  ; DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*)
0840ff53 +0xa37:  mov    -0x1c(%ebp),%eax
0840ff56 +0xa3a:  mov    %eax,0x4(%esp)
0840ff5a +0xa3e:  mov    0x8(%ebp),%eax
0840ff5d +0xa41:  mov    %eax,(%esp)
0840ff60 +0xa44:  call   08448102 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA>  ; DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*)
0840ff65 +0xa49:  mov    -0x1c(%ebp),%eax
0840ff68 +0xa4c:  mov    %eax,0x4(%esp)
0840ff6c +0xa50:  mov    0x8(%ebp),%eax
0840ff6f +0xa53:  mov    %eax,(%esp)
0840ff72 +0xa56:  call   0844834e <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA>  ; DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*)
0840ff77 +0xa5b:  mov    -0x1c(%ebp),%eax
0840ff7a +0xa5e:  mov    %eax,0xc(%esp)
0840ff7e +0xa62:  mov    0x10(%ebp),%eax
0840ff81 +0xa65:  mov    %eax,0x8(%esp)
0840ff85 +0xa69:  mov    0xc(%ebp),%eax
0840ff88 +0xa6c:  mov    %eax,0x4(%esp)
0840ff8c +0xa70:  mov    0x8(%ebp),%eax
0840ff8f +0xa73:  mov    %eax,(%esp)
0840ff92 +0xa76:  call   08414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>  ; DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
0840ff97 +0xa7b:  mov    %eax,%ebx
0840ff99 +0xa7d:  jmp    0840ffb6 <+0xa9a>
0840ff9b +0xa7f:  mov    %edx,%ebx
0840ff9d +0xa81:  mov    %eax,%esi
0840ff9f +0xa83:  lea    -0x28(%ebp),%eax
0840ffa2 +0xa86:  mov    %eax,(%esp)
0840ffa5 +0xa89:  call   0818fc1c <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x11e>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x11e
0840ffaa +0xa8e:  mov    %esi,%eax
0840ffac +0xa90:  mov    %ebx,%edx
0840ffae +0xa92:  mov    %eax,(%esp)
0840ffb1 +0xa95:  call   08ae3750 <_Unwind_Resume>
0840ffb6 +0xa9a:  lea    -0x28(%ebp),%eax
0840ffb9 +0xa9d:  mov    %eax,(%esp)
0840ffbc +0xaa0:  call   0818fc1c <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x11e>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x11e
0840ffc1 +0xaa5:  mov    %ebx,%eax
0840ffc3 +0xaa7:  add    $0x40,%esp
0840ffc6 +0xaaa:  pop    %ebx
0840ffc7 +0xaab:  pop    %esi
0840ffc8 +0xaac:  pop    %ebp
0840ffc9 +0xaad:  ret
```

## 反编译 C

```c
// DB_Login::dispatch @ 0x840f51c

/* DB_Login::dispatch(int, int, Stream*) */

undefined4 __thiscall DB_Login::dispatch(DB_Login *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  SIG_LOGIN_DATA SVar4;
  GameWorld *pGVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  CDataManager *this_00;
  uint uVar9;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> local_2c [12];
  SIG_LOGIN_DATA *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  cVar3 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar3 != '\x01') {
    return 0;
  }
  local_20 = Stream::GetOutBuffer<SIG_LOGIN_DATA>(param_3);
  if (local_20 == (SIG_LOGIN_DATA *)0x0) {
    return 0;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar3 == '\0') {
LAB_0840f59d:
    bVar2 = false;
  }
  else {
    pGVar5 = (GameWorld *)G_GameWorld();
    iVar6 = GameWorld::GetChannelType(pGVar5);
    if (iVar6 == 0xe) goto LAB_0840f59d;
    bVar2 = true;
  }
  if (bVar2) {
    local_38 = 0;
    local_34 = 0;
    local_30 = (int)*(short *)(local_20 + 0x3a38);
    DBMgr::addUserDBInfo(GlobalData::s_db_mgr,param_2,(stUserDBInfo_t *)&local_38);
    DBMgr::setUserIdx(GlobalData::s_db_mgr,param_2);
  }
  cVar3 = GetAccountInfo(this,local_20);
  if (cVar3 != '\x01') {
    *(undefined4 *)(local_20 + 0xb8) = 1;
    uVar7 = SendResult(this,param_1,param_2,local_20);
    return uVar7;
  }
  SaveLoginTime(this,*(uint *)(local_20 + 0xc0),*(int *)(local_20 + 0x3a30),
                (char *)(local_20 + 0xa1));
  *(undefined2 *)(local_20 + 0x38de) = 0;
  cVar3 = GetPunishUserInfo(this,local_20);
  if (cVar3 != '\x01') {
    *(undefined4 *)(local_20 + 0xb8) = 0xf;
    uVar7 = SendResult(this,param_1,param_2,local_20);
    return uVar7;
  }
  local_20[0x3f0c] = (SIG_LOGIN_DATA)0x0;
  *(undefined4 *)(local_20 + 0x3a24) = 0;
  *(undefined4 *)(local_20 + 0x3a28) = 0;
  *(undefined4 *)(local_20 + 0x3a2c) = 0;
  if (*(int *)(local_20 + 0x3a50) != 0) {
    for (local_10 = 0; local_10 < *(int *)(local_20 + 0x3a50); local_10 = local_10 + 1) {
      if (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 1) {
        iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a68);
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if ((iVar6 < iVar8) && (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) == 0) {
            if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
              *(undefined4 *)(local_20 + 0xb8) = 10;
            }
            else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
              *(undefined4 *)(local_20 + 0xb8) = 0xb;
            }
          }
          else {
            iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a5c);
            if (0x19 < iVar6) {
              iVar6 = 0x19;
            }
            *(int *)(local_20 + 0xd8) = iVar6;
          }
          uVar7 = SendResult(this,param_1,param_2,local_20);
          return uVar7;
        }
      }
      if ((*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 2) ||
         (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 0x3ea)) {
        iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a68);
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if ((iVar6 < iVar8) && (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) == 0) {
            if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
              *(undefined4 *)(local_20 + 0xb8) = 10;
            }
            else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
              *(undefined4 *)(local_20 + 0xb8) = 0xb;
            }
          }
          else {
            iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a5c);
            if (0x19 < iVar6) {
              iVar6 = 0x19;
            }
            *(int *)(local_20 + 0xb8) = iVar6 + 0xc;
          }
          uVar7 = SendResult(this,param_1,param_2,local_20);
          return uVar7;
        }
      }
      if ((*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 3) ||
         (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 0x3eb)) {
        if (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) == 0) {
          if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
            *(undefined4 *)(local_20 + 0xb8) = 10;
          }
          else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
            *(undefined4 *)(local_20 + 0xb8) = 0xb;
          }
        }
        else {
          iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a5c);
          if (0x19 < iVar6) {
            iVar6 = 0x19;
          }
          *(int *)(local_20 + 0xb8) = iVar6 + 0xc;
        }
        uVar7 = SendResult(this,param_1,param_2,local_20);
        return uVar7;
      }
      if (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 4) {
        if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
          *(undefined2 *)(local_20 + 0x38de) = 0xd;
        }
        else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
          *(undefined2 *)(local_20 + 0x38de) = 0xe;
        }
      }
      if (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 10) {
        local_20[0x3f0c] = (SIG_LOGIN_DATA)0x1;
      }
    }
  }
  _getRewardInfo(this,local_20);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((local_20[0x38e0] != (SIG_LOGIN_DATA)0x0) && (local_20[0x390e] != (SIG_LOGIN_DATA)0x1)) {
    local_18 = _convertPassPadInfo(this,local_20);
  }
  if (local_18 != 0) {
    if (local_18 == 0x48) {
      *(undefined4 *)(local_20 + 0xb8) = 5;
    }
    else if (local_18 == 0xa6) {
      *(undefined4 *)(local_20 + 0xb8) = 9;
    }
    else {
      *(undefined4 *)(local_20 + 0xb8) = 6;
    }
    uVar7 = SendResult(this,param_1,param_2,local_20);
    return uVar7;
  }
  *(undefined4 *)(local_20 + 0xb8) = 0;
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::vector
            (local_2c);
                    /* try { // try from 0840fc88 to 0840ff96 has its CatchHandler @ 0840ff9b */
  _LoadDNFEventEntry(this,*(uint *)(local_20 + 0xc0),(vector *)local_2c);
  GetPremiumInfo((int)this,(SIG_LOGIN_DATA *)param_2,(vector *)local_20);
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar5);
  if ((iVar6 == 7) && ((*(int *)(local_20 + 0x39ac) == 0 || (*(int *)(local_20 + 0x39a8) == 0)))) {
    *(undefined4 *)(local_20 + 0xb8) = 8;
    uVar7 = SendResult(this,param_1,param_2,local_20);
    goto LAB_0840ffb6;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar5);
  if (iVar6 == 0xe) {
    if ((*(int *)(local_20 + 0x39d4) == 0) || (*(int *)(local_20 + 0x39d0) == 0)) {
LAB_0840fd60:
      bVar2 = true;
    }
    else {
      uVar1 = *(uint *)(local_20 + 0x39d8);
      this_00 = (CDataManager *)G_CDataManager();
      uVar9 = CDataManager::GetPvPMode(this_00);
      if ((uVar9 & uVar1) == 1) goto LAB_0840fd60;
      bVar2 = false;
    }
    if (bVar2) {
      *(undefined4 *)(local_20 + 0xb8) = 8;
      uVar7 = SendResult(this,param_1,param_2,local_20);
      goto LAB_0840ffb6;
    }
  }
  iVar6 = GetGameDBInfo(this,local_20);
  if (iVar6 == 1) {
    *(undefined4 *)(local_20 + 0xb8) = 0xf;
  }
  else {
    UpdateLoginStat(this,param_2,local_20);
  }
  if ((local_20[0x39e0] != (SIG_LOGIN_DATA)0x0) && (local_20[0x39e1] != (SIG_LOGIN_DATA)0x1)) {
    _getSecurityCardInfo(this,local_20);
  }
  getCharacLinkSystemData(this,local_20);
  cVar3 = getBreakAwayMemberData(this,local_20);
  if (cVar3 == '\x01') {
    local_20[0x3f58] = (SIG_LOGIN_DATA)0x1;
  }
  else {
    local_20[0x3f58] = (SIG_LOGIN_DATA)0x0;
  }
  SVar4 = (SIG_LOGIN_DATA)_isJoinedSchoolPointEvent(this,*(uint *)(local_20 + 0xc0));
  local_20[0x3a4a] = SVar4;
  GetDailyCleanPadPoint(this,local_20);
  IsThisIPLoginPermissionGranted(this,local_20);
  GetReturnUserInfo(this,local_20);
  GetLoginCommonData(this,local_20);
  GetCheckPickUpRandomOptionItem(this,local_20);
  GetOntimeUserRecvIdx(this,local_20);
  GetUserFatigueCount(this,local_20);
  GetUserInGameEventHistory(this,local_20);
  CheckLoginIP(this,local_20);
  GetMercenarySystemInfo(this,local_20);
  GetBingoEvent(this,local_20);
  GetGrowthWeaponEvent(this,local_20);
  GetGrowthCreatureEvent(this,local_20);
  GetAccountCharacterLevelUpOnceGift(this,local_20);
  uVar7 = SendResult(this,param_1,param_2,local_20);
LAB_0840ffb6:
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::~vector
            (local_2c);
  return uVar7;
}
```
