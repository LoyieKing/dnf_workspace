# dispatch

`_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream`

`DB_LoadCerashopAddRestrictType::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCerashopAddRestrictType` | `0x080e1aca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e1aca  _ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream
#           DB_LoadCerashopAddRestrictType::dispatch(int, int, Stream*)
# range [0x080e1aca, 0x080e1ff5]
080e1aca +0x000:  push   %ebp
080e1acb +0x001:  mov    %esp,%ebp
080e1acd +0x003:  push   %esi
080e1ace +0x004:  push   %ebx
080e1acf +0x005:  sub    $0x50,%esp
080e1ad2 +0x008:  movl   $0x0,-0x30(%ebp)
080e1ad9 +0x00f:  movl   $0x0,-0x34(%ebp)
080e1ae0 +0x016:  lea    -0x30(%ebp),%eax
080e1ae3 +0x019:  mov    %eax,0x4(%esp)
080e1ae7 +0x01d:  mov    0x14(%ebp),%eax
080e1aea +0x020:  mov    %eax,(%esp)
080e1aed +0x023:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e1af2 +0x028:  lea    -0x34(%ebp),%eax
080e1af5 +0x02b:  mov    %eax,0x4(%esp)
080e1af9 +0x02f:  mov    0x14(%ebp),%eax
080e1afc +0x032:  mov    %eax,(%esp)
080e1aff +0x035:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e1b04 +0x03a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080e1b09 +0x03f:  movl   $0x0,0x8(%esp)
080e1b11 +0x047:  movl   $0x1,0x4(%esp)
080e1b19 +0x04f:  mov    %eax,(%esp)
080e1b1c +0x052:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
080e1b21 +0x057:  mov    %eax,-0x2c(%ebp)
080e1b24 +0x05a:  cmpl   $0x0,-0x2c(%ebp)
080e1b28 +0x05e:  jne    080e1b34 <+0x6a>
080e1b2a +0x060:  mov    $0x0,%ebx
080e1b2f +0x065:  jmp    080e1fed <+0x523>
080e1b34 +0x06a:  mov    -0x30(%ebp),%eax
080e1b37 +0x06d:  mov    %eax,0x8(%esp)
080e1b3b +0x071:  movl   $"seLect ipg_no, count, next_date from account_cerashop_restrict where m_id = %u and end_date > UNIX_TIMESTAMP() limit 10",0x4(%esp)
080e1b43 +0x079:  mov    -0x2c(%ebp),%eax
080e1b46 +0x07c:  mov    %eax,(%esp)
080e1b49 +0x07f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080e1b4e +0x084:  movl   $0x1,0x4(%esp)
080e1b56 +0x08c:  mov    -0x2c(%ebp),%eax
080e1b59 +0x08f:  mov    %eax,(%esp)
080e1b5c +0x092:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080e1b61 +0x097:  xor    $0x1,%eax
080e1b64 +0x09a:  test   %al,%al
080e1b66 +0x09c:  je     080e1b72 <+0xa8>
080e1b68 +0x09e:  mov    $0x0,%ebx
080e1b6d +0x0a3:  jmp    080e1fed <+0x523>
080e1b72 +0x0a8:  mov    -0x2c(%ebp),%eax
080e1b75 +0x0ab:  mov    %eax,(%esp)
080e1b78 +0x0ae:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
080e1b7d +0x0b3:  mov    %eax,-0x28(%ebp)
080e1b80 +0x0b6:  cmpl   $0x0,-0x28(%ebp)
080e1b84 +0x0ba:  jle    080e1d78 <+0x2ae>
080e1b8a +0x0c0:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080e1b8f +0x0c5:  movl   $0x1bc,0x8(%esp)
080e1b97 +0x0cd:  movl   $"CerashopAddRestrictType.cpp",0x4(%esp)
080e1b9f +0x0d5:  mov    %eax,(%esp)
080e1ba2 +0x0d8:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080e1ba7 +0x0dd:  movl   $0x1,0x8(%esp)
080e1baf +0x0e5:  mov    %eax,0x4(%esp)
080e1bb3 +0x0e9:  lea    -0x3c(%ebp),%eax
080e1bb6 +0x0ec:  mov    %eax,(%esp)
080e1bb9 +0x0ef:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080e1bbe +0x0f4:  lea    -0x3c(%ebp),%eax
080e1bc1 +0x0f7:  mov    %eax,(%esp)
080e1bc4 +0x0fa:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1bc9 +0x0ff:  movl   $0x341,0x4(%esp)
080e1bd1 +0x107:  mov    %eax,(%esp)
080e1bd4 +0x10a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e1bd9 +0x10f:  lea    -0x3c(%ebp),%eax
080e1bdc +0x112:  mov    %eax,(%esp)
080e1bdf +0x115:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1be4 +0x11a:  mov    0x10(%ebp),%edx
080e1be7 +0x11d:  mov    %edx,0x4(%esp)
080e1beb +0x121:  mov    %eax,(%esp)
080e1bee +0x124:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e1bf3 +0x129:  lea    -0x3c(%ebp),%eax
080e1bf6 +0x12c:  mov    %eax,(%esp)
080e1bf9 +0x12f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080e1bfe +0x134:  mov    %eax,(%esp)
080e1c01 +0x137:  call   080e2938 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6de>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6de
080e1c06 +0x13c:  mov    %eax,-0x20(%ebp)
080e1c09 +0x13f:  mov    -0x28(%ebp),%edx
080e1c0c +0x142:  mov    -0x20(%ebp),%eax
080e1c0f +0x145:  mov    %edx,(%eax)
080e1c11 +0x147:  mov    -0x20(%ebp),%eax
080e1c14 +0x14a:  movl   $0x0,0x4(%eax)
080e1c1b +0x151:  movl   $0x0,-0x1c(%ebp)
080e1c22 +0x158:  jmp    080e1d16 <+0x24c>
080e1c27 +0x15d:  mov    -0x2c(%ebp),%eax
080e1c2a +0x160:  mov    %eax,(%esp)
080e1c2d +0x163:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
080e1c32 +0x168:  xor    $0x1,%eax
080e1c35 +0x16b:  test   %al,%al
080e1c37 +0x16d:  je     080e1c48 <+0x17e>
080e1c39 +0x16f:  mov    $0x0,%ebx
080e1c3e +0x174:  mov    $0x0,%esi
080e1c43 +0x179:  jmp    080e1d65 <+0x29b>
080e1c48 +0x17e:  movl   $0x0,-0x18(%ebp)
080e1c4f +0x185:  mov    -0x1c(%ebp),%edx
080e1c52 +0x188:  mov    %edx,%eax
080e1c54 +0x18a:  add    %eax,%eax
080e1c56 +0x18c:  add    %edx,%eax
080e1c58 +0x18e:  shl    $0x2,%eax
080e1c5b +0x191:  add    -0x20(%ebp),%eax
080e1c5e +0x194:  lea    0x8(%eax),%edx
080e1c61 +0x197:  mov    -0x18(%ebp),%eax
080e1c64 +0x19a:  addl   $0x1,-0x18(%ebp)
080e1c68 +0x19e:  mov    %edx,0x8(%esp)
080e1c6c +0x1a2:  mov    %eax,0x4(%esp)
080e1c70 +0x1a6:  mov    -0x2c(%ebp),%eax
080e1c73 +0x1a9:  mov    %eax,(%esp)
080e1c76 +0x1ac:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080e1c7b +0x1b1:  xor    $0x1,%eax
080e1c7e +0x1b4:  test   %al,%al
080e1c80 +0x1b6:  je     080e1c91 <+0x1c7>
080e1c82 +0x1b8:  mov    $0x0,%ebx
080e1c87 +0x1bd:  mov    $0x0,%esi
080e1c8c +0x1c2:  jmp    080e1d65 <+0x29b>
080e1c91 +0x1c7:  mov    -0x1c(%ebp),%edx
080e1c94 +0x1ca:  mov    %edx,%eax
080e1c96 +0x1cc:  add    %eax,%eax
080e1c98 +0x1ce:  add    %edx,%eax
080e1c9a +0x1d0:  shl    $0x2,%eax
080e1c9d +0x1d3:  add    -0x20(%ebp),%eax
080e1ca0 +0x1d6:  lea    0xc(%eax),%edx
080e1ca3 +0x1d9:  mov    -0x18(%ebp),%eax
080e1ca6 +0x1dc:  addl   $0x1,-0x18(%ebp)
080e1caa +0x1e0:  mov    %edx,0x8(%esp)
080e1cae +0x1e4:  mov    %eax,0x4(%esp)
080e1cb2 +0x1e8:  mov    -0x2c(%ebp),%eax
080e1cb5 +0x1eb:  mov    %eax,(%esp)
080e1cb8 +0x1ee:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080e1cbd +0x1f3:  xor    $0x1,%eax
080e1cc0 +0x1f6:  test   %al,%al
080e1cc2 +0x1f8:  je     080e1cd3 <+0x209>
080e1cc4 +0x1fa:  mov    $0x0,%ebx
080e1cc9 +0x1ff:  mov    $0x0,%esi
080e1cce +0x204:  jmp    080e1d65 <+0x29b>
080e1cd3 +0x209:  mov    -0x1c(%ebp),%edx
080e1cd6 +0x20c:  mov    %edx,%eax
080e1cd8 +0x20e:  add    %eax,%eax
080e1cda +0x210:  add    %edx,%eax
080e1cdc +0x212:  shl    $0x2,%eax
080e1cdf +0x215:  add    -0x20(%ebp),%eax
080e1ce2 +0x218:  lea    0x10(%eax),%edx
080e1ce5 +0x21b:  mov    -0x18(%ebp),%eax
080e1ce8 +0x21e:  addl   $0x1,-0x18(%ebp)
080e1cec +0x222:  mov    %edx,0x8(%esp)
080e1cf0 +0x226:  mov    %eax,0x4(%esp)
080e1cf4 +0x22a:  mov    -0x2c(%ebp),%eax
080e1cf7 +0x22d:  mov    %eax,(%esp)
080e1cfa +0x230:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080e1cff +0x235:  xor    $0x1,%eax
080e1d02 +0x238:  test   %al,%al
080e1d04 +0x23a:  je     080e1d12 <+0x248>
080e1d06 +0x23c:  mov    $0x0,%ebx
080e1d0b +0x241:  mov    $0x0,%esi
080e1d10 +0x246:  jmp    080e1d65 <+0x29b>
080e1d12 +0x248:  addl   $0x1,-0x1c(%ebp)
080e1d16 +0x24c:  mov    -0x1c(%ebp),%eax
080e1d19 +0x24f:  cmp    -0x28(%ebp),%eax
080e1d1c +0x252:  setl   %al
080e1d1f +0x255:  test   %al,%al
080e1d21 +0x257:  jne    080e1c27 <+0x15d>
080e1d27 +0x25d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080e1d2c +0x262:  lea    -0x3c(%ebp),%edx
080e1d2f +0x265:  mov    %edx,0x8(%esp)
080e1d33 +0x269:  movl   $0x1,0x4(%esp)
080e1d3b +0x271:  mov    %eax,(%esp)
080e1d3e +0x274:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080e1d43 +0x279:  mov    $0x1,%esi
080e1d48 +0x27e:  jmp    080e1d65 <+0x29b>
080e1d4a +0x280:  mov    %edx,%ebx
080e1d4c +0x282:  mov    %eax,%esi
080e1d4e +0x284:  lea    -0x3c(%ebp),%eax
080e1d51 +0x287:  mov    %eax,(%esp)
080e1d54 +0x28a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1d59 +0x28f:  mov    %esi,%eax
080e1d5b +0x291:  mov    %ebx,%edx
080e1d5d +0x293:  mov    %eax,(%esp)
080e1d60 +0x296:  call   08ae3750 <_Unwind_Resume>
080e1d65 +0x29b:  lea    -0x3c(%ebp),%eax
080e1d68 +0x29e:  mov    %eax,(%esp)
080e1d6b +0x2a1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1d70 +0x2a6:  test   %esi,%esi
080e1d72 +0x2a8:  je     080e1fed <+0x523>
080e1d78 +0x2ae:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080e1d7d +0x2b3:  movl   $0x0,0x8(%esp)
080e1d85 +0x2bb:  movl   $0x2,0x4(%esp)
080e1d8d +0x2c3:  mov    %eax,(%esp)
080e1d90 +0x2c6:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
080e1d95 +0x2cb:  mov    %eax,-0x24(%ebp)
080e1d98 +0x2ce:  cmpl   $0x0,-0x24(%ebp)
080e1d9c +0x2d2:  jne    080e1da8 <+0x2de>
080e1d9e +0x2d4:  mov    $0x0,%ebx
080e1da3 +0x2d9:  jmp    080e1fed <+0x523>
080e1da8 +0x2de:  mov    -0x34(%ebp),%eax
080e1dab +0x2e1:  mov    %eax,0x8(%esp)
080e1daf +0x2e5:  movl   $"seLect ipg_no, count, next_date from charac_cerashop_restrict where charac_no = %u and end_date > UNIX_TIMESTAMP() limit 10",0x4(%esp)
080e1db7 +0x2ed:  mov    -0x24(%ebp),%eax
080e1dba +0x2f0:  mov    %eax,(%esp)
080e1dbd +0x2f3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080e1dc2 +0x2f8:  movl   $0x1,0x4(%esp)
080e1dca +0x300:  mov    -0x24(%ebp),%eax
080e1dcd +0x303:  mov    %eax,(%esp)
080e1dd0 +0x306:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080e1dd5 +0x30b:  xor    $0x1,%eax
080e1dd8 +0x30e:  test   %al,%al
080e1dda +0x310:  je     080e1de6 <+0x31c>
080e1ddc +0x312:  mov    $0x0,%ebx
080e1de1 +0x317:  jmp    080e1fed <+0x523>
080e1de6 +0x31c:  mov    -0x24(%ebp),%eax
080e1de9 +0x31f:  mov    %eax,(%esp)
080e1dec +0x322:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
080e1df1 +0x327:  mov    %eax,-0x28(%ebp)
080e1df4 +0x32a:  cmpl   $0x0,-0x28(%ebp)
080e1df8 +0x32e:  jle    080e1fe8 <+0x51e>
080e1dfe +0x334:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080e1e03 +0x339:  movl   $0x1da,0x8(%esp)
080e1e0b +0x341:  movl   $"CerashopAddRestrictType.cpp",0x4(%esp)
080e1e13 +0x349:  mov    %eax,(%esp)
080e1e16 +0x34c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080e1e1b +0x351:  movl   $0x1,0x8(%esp)
080e1e23 +0x359:  mov    %eax,0x4(%esp)
080e1e27 +0x35d:  lea    -0x44(%ebp),%eax
080e1e2a +0x360:  mov    %eax,(%esp)
080e1e2d +0x363:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080e1e32 +0x368:  lea    -0x44(%ebp),%eax
080e1e35 +0x36b:  mov    %eax,(%esp)
080e1e38 +0x36e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1e3d +0x373:  movl   $0x341,0x4(%esp)
080e1e45 +0x37b:  mov    %eax,(%esp)
080e1e48 +0x37e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e1e4d +0x383:  lea    -0x44(%ebp),%eax
080e1e50 +0x386:  mov    %eax,(%esp)
080e1e53 +0x389:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080e1e58 +0x38e:  mov    0x10(%ebp),%edx
080e1e5b +0x391:  mov    %edx,0x4(%esp)
080e1e5f +0x395:  mov    %eax,(%esp)
080e1e62 +0x398:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080e1e67 +0x39d:  lea    -0x44(%ebp),%eax
080e1e6a +0x3a0:  mov    %eax,(%esp)
080e1e6d +0x3a3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080e1e72 +0x3a8:  mov    %eax,(%esp)
080e1e75 +0x3ab:  call   080e2938 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6de>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6de
080e1e7a +0x3b0:  mov    %eax,-0x14(%ebp)
080e1e7d +0x3b3:  mov    -0x28(%ebp),%edx
080e1e80 +0x3b6:  mov    -0x14(%ebp),%eax
080e1e83 +0x3b9:  mov    %edx,(%eax)
080e1e85 +0x3bb:  mov    -0x14(%ebp),%eax
080e1e88 +0x3be:  movl   $0x1,0x4(%eax)
080e1e8f +0x3c5:  movl   $0x0,-0x10(%ebp)
080e1e96 +0x3cc:  jmp    080e1f8a <+0x4c0>
080e1e9b +0x3d1:  mov    -0x24(%ebp),%eax
080e1e9e +0x3d4:  mov    %eax,(%esp)
080e1ea1 +0x3d7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
080e1ea6 +0x3dc:  xor    $0x1,%eax
080e1ea9 +0x3df:  test   %al,%al
080e1eab +0x3e1:  je     080e1ebc <+0x3f2>
080e1ead +0x3e3:  mov    $0x0,%ebx
080e1eb2 +0x3e8:  mov    $0x0,%esi
080e1eb7 +0x3ed:  jmp    080e1fd9 <+0x50f>
080e1ebc +0x3f2:  movl   $0x0,-0xc(%ebp)
080e1ec3 +0x3f9:  mov    -0x10(%ebp),%edx
080e1ec6 +0x3fc:  mov    %edx,%eax
080e1ec8 +0x3fe:  add    %eax,%eax
080e1eca +0x400:  add    %edx,%eax
080e1ecc +0x402:  shl    $0x2,%eax
080e1ecf +0x405:  add    -0x14(%ebp),%eax
080e1ed2 +0x408:  lea    0x8(%eax),%edx
080e1ed5 +0x40b:  mov    -0xc(%ebp),%eax
080e1ed8 +0x40e:  addl   $0x1,-0xc(%ebp)
080e1edc +0x412:  mov    %edx,0x8(%esp)
080e1ee0 +0x416:  mov    %eax,0x4(%esp)
080e1ee4 +0x41a:  mov    -0x24(%ebp),%eax
080e1ee7 +0x41d:  mov    %eax,(%esp)
080e1eea +0x420:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080e1eef +0x425:  xor    $0x1,%eax
080e1ef2 +0x428:  test   %al,%al
080e1ef4 +0x42a:  je     080e1f05 <+0x43b>
080e1ef6 +0x42c:  mov    $0x0,%ebx
080e1efb +0x431:  mov    $0x0,%esi
080e1f00 +0x436:  jmp    080e1fd9 <+0x50f>
080e1f05 +0x43b:  mov    -0x10(%ebp),%edx
080e1f08 +0x43e:  mov    %edx,%eax
080e1f0a +0x440:  add    %eax,%eax
080e1f0c +0x442:  add    %edx,%eax
080e1f0e +0x444:  shl    $0x2,%eax
080e1f11 +0x447:  add    -0x14(%ebp),%eax
080e1f14 +0x44a:  lea    0xc(%eax),%edx
080e1f17 +0x44d:  mov    -0xc(%ebp),%eax
080e1f1a +0x450:  addl   $0x1,-0xc(%ebp)
080e1f1e +0x454:  mov    %edx,0x8(%esp)
080e1f22 +0x458:  mov    %eax,0x4(%esp)
080e1f26 +0x45c:  mov    -0x24(%ebp),%eax
080e1f29 +0x45f:  mov    %eax,(%esp)
080e1f2c +0x462:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080e1f31 +0x467:  xor    $0x1,%eax
080e1f34 +0x46a:  test   %al,%al
080e1f36 +0x46c:  je     080e1f47 <+0x47d>
080e1f38 +0x46e:  mov    $0x0,%ebx
080e1f3d +0x473:  mov    $0x0,%esi
080e1f42 +0x478:  jmp    080e1fd9 <+0x50f>
080e1f47 +0x47d:  mov    -0x10(%ebp),%edx
080e1f4a +0x480:  mov    %edx,%eax
080e1f4c +0x482:  add    %eax,%eax
080e1f4e +0x484:  add    %edx,%eax
080e1f50 +0x486:  shl    $0x2,%eax
080e1f53 +0x489:  add    -0x14(%ebp),%eax
080e1f56 +0x48c:  lea    0x10(%eax),%edx
080e1f59 +0x48f:  mov    -0xc(%ebp),%eax
080e1f5c +0x492:  addl   $0x1,-0xc(%ebp)
080e1f60 +0x496:  mov    %edx,0x8(%esp)
080e1f64 +0x49a:  mov    %eax,0x4(%esp)
080e1f68 +0x49e:  mov    -0x24(%ebp),%eax
080e1f6b +0x4a1:  mov    %eax,(%esp)
080e1f6e +0x4a4:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
080e1f73 +0x4a9:  xor    $0x1,%eax
080e1f76 +0x4ac:  test   %al,%al
080e1f78 +0x4ae:  je     080e1f86 <+0x4bc>
080e1f7a +0x4b0:  mov    $0x0,%ebx
080e1f7f +0x4b5:  mov    $0x0,%esi
080e1f84 +0x4ba:  jmp    080e1fd9 <+0x50f>
080e1f86 +0x4bc:  addl   $0x1,-0x10(%ebp)
080e1f8a +0x4c0:  mov    -0x10(%ebp),%eax
080e1f8d +0x4c3:  cmp    -0x28(%ebp),%eax
080e1f90 +0x4c6:  setl   %al
080e1f93 +0x4c9:  test   %al,%al
080e1f95 +0x4cb:  jne    080e1e9b <+0x3d1>
080e1f9b +0x4d1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080e1fa0 +0x4d6:  lea    -0x44(%ebp),%edx
080e1fa3 +0x4d9:  mov    %edx,0x8(%esp)
080e1fa7 +0x4dd:  movl   $0x1,0x4(%esp)
080e1faf +0x4e5:  mov    %eax,(%esp)
080e1fb2 +0x4e8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080e1fb7 +0x4ed:  mov    $0x1,%esi
080e1fbc +0x4f2:  jmp    080e1fd9 <+0x50f>
080e1fbe +0x4f4:  mov    %edx,%ebx
080e1fc0 +0x4f6:  mov    %eax,%esi
080e1fc2 +0x4f8:  lea    -0x44(%ebp),%eax
080e1fc5 +0x4fb:  mov    %eax,(%esp)
080e1fc8 +0x4fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1fcd +0x503:  mov    %esi,%eax
080e1fcf +0x505:  mov    %ebx,%edx
080e1fd1 +0x507:  mov    %eax,(%esp)
080e1fd4 +0x50a:  call   08ae3750 <_Unwind_Resume>
080e1fd9 +0x50f:  lea    -0x44(%ebp),%eax
080e1fdc +0x512:  mov    %eax,(%esp)
080e1fdf +0x515:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080e1fe4 +0x51a:  test   %esi,%esi
080e1fe6 +0x51c:  je     080e1fed <+0x523>
080e1fe8 +0x51e:  mov    $0x1,%ebx
080e1fed +0x523:  mov    %ebx,%eax
080e1fef +0x525:  add    $0x50,%esp
080e1ff2 +0x528:  pop    %ebx
080e1ff3 +0x529:  pop    %esi
080e1ff4 +0x52a:  pop    %ebp
080e1ff5 +0x52b:  ret
```

## 反编译 C

```c
// DB_LoadCerashopAddRestrictType::dispatch @ 0x80e1aca

/* DB_LoadCerashopAddRestrictType::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadCerashopAddRestrictType::dispatch
          (DB_LoadCerashopAddRestrictType *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  CStreamGuard local_48 [8];
  CStreamGuard local_40 [8];
  uint local_38;
  uint local_34;
  MySQL *local_30;
  int local_2c;
  MySQL *local_28;
  SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *local_24;
  int local_20;
  int local_1c;
  SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *local_18;
  int local_14;
  int local_10;
  
  local_34 = 0;
  local_38 = 0;
  Stream::operator>>(param_3,&local_34);
  Stream::operator>>(param_3,&local_38);
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_30 == (MySQL *)0x0) {
    uVar6 = 0;
  }
  else {
    MySQL::set_query(local_30,
                     "seLect ipg_no, count, next_date from account_cerashop_restrict where m_id = %u and end_date > UNIX_TIMESTAMP() limit 10"
                     ,local_34);
    cVar3 = MySQL::exec(local_30,true);
    if (cVar3 == '\x01') {
      local_2c = MySQL::get_n_rows(local_30);
      if (0 < local_2c) {
        pSVar4 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",0x1bc);
        CStreamGuard::CStreamGuard(local_40,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 080e1bd4 to 080e1d42 has its CatchHandler @ 080e1d4a */
        CStreamGuard::operator<<(pCVar5,0x341);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
        CStreamGuard::operator<<(pCVar5,param_2);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_40);
        local_24 = CStreamGuard::GetInBuffer<SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>(pCVar5);
        *(int *)local_24 = local_2c;
        *(undefined4 *)(local_24 + 4) = 0;
        for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
          cVar3 = MySQL::fetch(local_30);
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
          local_1c = 1;
          cVar3 = MySQL::get_int(local_30,0,(uint *)(local_24 + local_20 * 0xc + 8));
          iVar2 = local_1c;
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
          local_1c = local_1c + 1;
          cVar3 = MySQL::get_int(local_30,iVar2,(uint *)(local_24 + local_20 * 0xc + 0xc));
          iVar2 = local_1c;
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
          local_1c = local_1c + 1;
          cVar3 = MySQL::get_int(local_30,iVar2,(uint *)(local_24 + local_20 * 0xc + 0x10));
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
        bVar1 = true;
LAB_080e1d65:
        CStreamGuard::~CStreamGuard(local_40);
        if (!bVar1) {
          return unaff_EBX;
        }
      }
      local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
      if (local_28 == (MySQL *)0x0) {
        uVar6 = 0;
      }
      else {
        MySQL::set_query(local_28,
                         "seLect ipg_no, count, next_date from charac_cerashop_restrict where charac_no = %u and end_date > UNIX_TIMESTAMP() limit 10"
                         ,local_38);
        cVar3 = MySQL::exec(local_28,true);
        if (cVar3 == '\x01') {
          local_2c = MySQL::get_n_rows(local_28);
          if (0 < local_2c) {
            pSVar4 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",
                                         0x1da);
            CStreamGuard::CStreamGuard(local_48,pSVar4,true);
            pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
                    /* try { // try from 080e1e48 to 080e1fb6 has its CatchHandler @ 080e1fbe */
            CStreamGuard::operator<<(pCVar5,0x341);
            pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
            CStreamGuard::operator<<(pCVar5,param_2);
            pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_48);
            local_18 = CStreamGuard::GetInBuffer<SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>(pCVar5);
            *(int *)local_18 = local_2c;
            *(undefined4 *)(local_18 + 4) = 1;
            for (local_14 = 0; local_14 < local_2c; local_14 = local_14 + 1) {
              cVar3 = MySQL::fetch(local_28);
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
              local_10 = 1;
              cVar3 = MySQL::get_int(local_28,0,(uint *)(local_18 + local_14 * 0xc + 8));
              iVar2 = local_10;
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
              local_10 = local_10 + 1;
              cVar3 = MySQL::get_int(local_28,iVar2,(uint *)(local_18 + local_14 * 0xc + 0xc));
              iVar2 = local_10;
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
              local_10 = local_10 + 1;
              cVar3 = MySQL::get_int(local_28,iVar2,(uint *)(local_18 + local_14 * 0xc + 0x10));
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_48);
            bVar1 = true;
LAB_080e1fd9:
            CStreamGuard::~CStreamGuard(local_48);
            if (!bVar1) {
              return unaff_EBX;
            }
          }
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
