# dispatch

`_ZN16DB_LoadDimension8dispatchEiiP6Stream`

`DB_LoadDimension::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDimension` | `0x08431ece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08431ece  _ZN16DB_LoadDimension8dispatchEiiP6Stream
#           DB_LoadDimension::dispatch(int, int, Stream*)
# range [0x08431ece, 0x08432309]
08431ece +0x000:  push   %ebp
08431ecf +0x001:  mov    %esp,%ebp
08431ed1 +0x003:  push   %edi
08431ed2 +0x004:  push   %esi
08431ed3 +0x005:  push   %ebx
08431ed4 +0x006:  sub    $0x7c,%esp
08431ed7 +0x009:  mov    0x8(%ebp),%eax
08431eda +0x00c:  mov    0x14(%ebp),%edx
08431edd +0x00f:  mov    %edx,0xc(%esp)
08431ee1 +0x013:  mov    0x10(%ebp),%edx
08431ee4 +0x016:  mov    %edx,0x8(%esp)
08431ee8 +0x01a:  mov    0xc(%ebp),%edx
08431eeb +0x01d:  mov    %edx,0x4(%esp)
08431eef +0x021:  mov    %eax,(%esp)
08431ef2 +0x024:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08431ef7 +0x029:  xor    $0x1,%eax
08431efa +0x02c:  test   %al,%al
08431efc +0x02e:  je     08431f08 <+0x3a>
08431efe +0x030:  mov    $0x0,%ebx
08431f03 +0x035:  jmp    08432300 <+0x432>
08431f08 +0x03a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08431f0d +0x03f:  movl   $0x0,0x8(%esp)
08431f15 +0x047:  movl   $0x2,0x4(%esp)
08431f1d +0x04f:  mov    %eax,(%esp)
08431f20 +0x052:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08431f25 +0x057:  mov    %eax,-0x24(%ebp)
08431f28 +0x05a:  mov    0x14(%ebp),%eax
08431f2b +0x05d:  mov    %eax,(%esp)
08431f2e +0x060:  call   08452ef8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5b0e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5b0e
08431f33 +0x065:  mov    %eax,-0x20(%ebp)
08431f36 +0x068:  mov    -0x20(%ebp),%eax
08431f39 +0x06b:  mov    (%eax),%eax
08431f3b +0x06d:  mov    %eax,0x8(%esp)
08431f3f +0x071:  movl   $"seLect dungeon1, dungeon2, dungeon3, dungeon4, dungeon5, dungeon6 from charac_dimension_inout where charac_no=%u",0x4(%esp)
08431f47 +0x079:  mov    -0x24(%ebp),%eax
08431f4a +0x07c:  mov    %eax,(%esp)
08431f4d +0x07f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08431f52 +0x084:  movl   $0x1,0x4(%esp)
08431f5a +0x08c:  mov    -0x24(%ebp),%eax
08431f5d +0x08f:  mov    %eax,(%esp)
08431f60 +0x092:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08431f65 +0x097:  xor    $0x1,%eax
08431f68 +0x09a:  test   %al,%al
08431f6a +0x09c:  jne    08431f7e <+0xb0>
08431f6c +0x09e:  mov    -0x24(%ebp),%eax
08431f6f +0x0a1:  mov    %eax,(%esp)
08431f72 +0x0a4:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08431f77 +0x0a9:  xor    $0x1,%eax
08431f7a +0x0ac:  test   %al,%al
08431f7c +0x0ae:  je     08431f85 <+0xb7>
08431f7e +0x0b0:  mov    $0x1,%eax
08431f83 +0x0b5:  jmp    08431f8a <+0xbc>
08431f85 +0x0b7:  mov    $0x0,%eax
08431f8a +0x0bc:  test   %al,%al
08431f8c +0x0be:  je     08432036 <+0x168>
08431f92 +0x0c4:  mov    -0x20(%ebp),%eax
08431f95 +0x0c7:  movzbl 0x9(%eax),%eax
08431f99 +0x0cb:  movsbl %al,%eax
08431f9c +0x0ce:  mov    %eax,-0x3c(%ebp)
08431f9f +0x0d1:  mov    -0x20(%ebp),%eax
08431fa2 +0x0d4:  movzbl 0x8(%eax),%eax
08431fa6 +0x0d8:  movsbl %al,%edi
08431fa9 +0x0db:  mov    -0x20(%ebp),%eax
08431fac +0x0de:  movzbl 0x7(%eax),%eax
08431fb0 +0x0e2:  movsbl %al,%esi
08431fb3 +0x0e5:  mov    -0x20(%ebp),%eax
08431fb6 +0x0e8:  movzbl 0x6(%eax),%eax
08431fba +0x0ec:  movsbl %al,%ebx
08431fbd +0x0ef:  mov    -0x20(%ebp),%eax
08431fc0 +0x0f2:  movzbl 0x5(%eax),%eax
08431fc4 +0x0f6:  movsbl %al,%ecx
08431fc7 +0x0f9:  mov    -0x20(%ebp),%eax
08431fca +0x0fc:  movzbl 0x4(%eax),%eax
08431fce +0x100:  movsbl %al,%edx
08431fd1 +0x103:  mov    -0x20(%ebp),%eax
08431fd4 +0x106:  mov    (%eax),%eax
08431fd6 +0x108:  mov    %eax,-0x4c(%ebp)
08431fd9 +0x10b:  mov    -0x3c(%ebp),%eax
08431fdc +0x10e:  mov    %eax,0x20(%esp)
08431fe0 +0x112:  mov    %edi,0x1c(%esp)
08431fe4 +0x116:  mov    %esi,0x18(%esp)
08431fe8 +0x11a:  mov    %ebx,0x14(%esp)
08431fec +0x11e:  mov    %ecx,0x10(%esp)
08431ff0 +0x122:  mov    %edx,0xc(%esp)
08431ff4 +0x126:  mov    -0x4c(%ebp),%eax
08431ff7 +0x129:  mov    %eax,0x8(%esp)
08431ffb +0x12d:  movl   $"inSert into charac_dimension_inout(charac_no,dungeon1,dungeon2,dungeon3,dungeon4,dungeon5,dungeon6) values(%u,%d,%d,%d,%d,%d,%d)",0x4(%esp)
08432003 +0x135:  mov    -0x24(%ebp),%eax
08432006 +0x138:  mov    %eax,(%esp)
08432009 +0x13b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843200e +0x140:  movl   $0x1,0x4(%esp)
08432016 +0x148:  mov    -0x24(%ebp),%eax
08432019 +0x14b:  mov    %eax,(%esp)
0843201c +0x14e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08432021 +0x153:  xor    $0x1,%eax
08432024 +0x156:  test   %al,%al
08432026 +0x158:  je     0843214a <+0x27c>
0843202c +0x15e:  mov    $0x0,%ebx
08432031 +0x163:  jmp    08432300 <+0x432>
08432036 +0x168:  mov    -0x20(%ebp),%eax
08432039 +0x16b:  add    $0x4,%eax
0843203c +0x16e:  mov    %eax,0x8(%esp)
08432040 +0x172:  movl   $0x0,0x4(%esp)
08432048 +0x17a:  mov    -0x24(%ebp),%eax
0843204b +0x17d:  mov    %eax,(%esp)
0843204e +0x180:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08432053 +0x185:  xor    $0x1,%eax
08432056 +0x188:  test   %al,%al
08432058 +0x18a:  je     08432064 <+0x196>
0843205a +0x18c:  mov    $0x0,%ebx
0843205f +0x191:  jmp    08432300 <+0x432>
08432064 +0x196:  mov    -0x20(%ebp),%eax
08432067 +0x199:  add    $0x5,%eax
0843206a +0x19c:  mov    %eax,0x8(%esp)
0843206e +0x1a0:  movl   $0x1,0x4(%esp)
08432076 +0x1a8:  mov    -0x24(%ebp),%eax
08432079 +0x1ab:  mov    %eax,(%esp)
0843207c +0x1ae:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08432081 +0x1b3:  xor    $0x1,%eax
08432084 +0x1b6:  test   %al,%al
08432086 +0x1b8:  je     08432092 <+0x1c4>
08432088 +0x1ba:  mov    $0x0,%ebx
0843208d +0x1bf:  jmp    08432300 <+0x432>
08432092 +0x1c4:  mov    -0x20(%ebp),%eax
08432095 +0x1c7:  add    $0x6,%eax
08432098 +0x1ca:  mov    %eax,0x8(%esp)
0843209c +0x1ce:  movl   $0x2,0x4(%esp)
084320a4 +0x1d6:  mov    -0x24(%ebp),%eax
084320a7 +0x1d9:  mov    %eax,(%esp)
084320aa +0x1dc:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084320af +0x1e1:  xor    $0x1,%eax
084320b2 +0x1e4:  test   %al,%al
084320b4 +0x1e6:  je     084320c0 <+0x1f2>
084320b6 +0x1e8:  mov    $0x0,%ebx
084320bb +0x1ed:  jmp    08432300 <+0x432>
084320c0 +0x1f2:  mov    -0x20(%ebp),%eax
084320c3 +0x1f5:  add    $0x7,%eax
084320c6 +0x1f8:  mov    %eax,0x8(%esp)
084320ca +0x1fc:  movl   $0x3,0x4(%esp)
084320d2 +0x204:  mov    -0x24(%ebp),%eax
084320d5 +0x207:  mov    %eax,(%esp)
084320d8 +0x20a:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084320dd +0x20f:  xor    $0x1,%eax
084320e0 +0x212:  test   %al,%al
084320e2 +0x214:  je     084320ee <+0x220>
084320e4 +0x216:  mov    $0x0,%ebx
084320e9 +0x21b:  jmp    08432300 <+0x432>
084320ee +0x220:  mov    -0x20(%ebp),%eax
084320f1 +0x223:  add    $0x8,%eax
084320f4 +0x226:  mov    %eax,0x8(%esp)
084320f8 +0x22a:  movl   $0x4,0x4(%esp)
08432100 +0x232:  mov    -0x24(%ebp),%eax
08432103 +0x235:  mov    %eax,(%esp)
08432106 +0x238:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843210b +0x23d:  xor    $0x1,%eax
0843210e +0x240:  test   %al,%al
08432110 +0x242:  je     0843211c <+0x24e>
08432112 +0x244:  mov    $0x0,%ebx
08432117 +0x249:  jmp    08432300 <+0x432>
0843211c +0x24e:  mov    -0x20(%ebp),%eax
0843211f +0x251:  add    $0x9,%eax
08432122 +0x254:  mov    %eax,0x8(%esp)
08432126 +0x258:  movl   $0x5,0x4(%esp)
0843212e +0x260:  mov    -0x24(%ebp),%eax
08432131 +0x263:  mov    %eax,(%esp)
08432134 +0x266:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08432139 +0x26b:  xor    $0x1,%eax
0843213c +0x26e:  test   %al,%al
0843213e +0x270:  je     0843214a <+0x27c>
08432140 +0x272:  mov    $0x0,%ebx
08432145 +0x277:  jmp    08432300 <+0x432>
0843214a +0x27c:  mov    -0x20(%ebp),%eax
0843214d +0x27f:  mov    (%eax),%eax
0843214f +0x281:  mov    %eax,0x8(%esp)
08432153 +0x285:  movl   $"seLect dungeon1 from charac_blood_inout where charac_no=%u",0x4(%esp)
0843215b +0x28d:  mov    -0x24(%ebp),%eax
0843215e +0x290:  mov    %eax,(%esp)
08432161 +0x293:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08432166 +0x298:  movl   $0x1,0x4(%esp)
0843216e +0x2a0:  mov    -0x24(%ebp),%eax
08432171 +0x2a3:  mov    %eax,(%esp)
08432174 +0x2a6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08432179 +0x2ab:  xor    $0x1,%eax
0843217c +0x2ae:  test   %al,%al
0843217e +0x2b0:  jne    08432192 <+0x2c4>
08432180 +0x2b2:  mov    -0x24(%ebp),%eax
08432183 +0x2b5:  mov    %eax,(%esp)
08432186 +0x2b8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843218b +0x2bd:  xor    $0x1,%eax
0843218e +0x2c0:  test   %al,%al
08432190 +0x2c2:  je     08432199 <+0x2cb>
08432192 +0x2c4:  mov    $0x1,%eax
08432197 +0x2c9:  jmp    0843219e <+0x2d0>
08432199 +0x2cb:  mov    $0x0,%eax
0843219e +0x2d0:  test   %al,%al
084321a0 +0x2d2:  je     084321f0 <+0x322>
084321a2 +0x2d4:  mov    -0x20(%ebp),%eax
084321a5 +0x2d7:  movzbl 0xc(%eax),%eax
084321a9 +0x2db:  movsbl %al,%edx
084321ac +0x2de:  mov    -0x20(%ebp),%eax
084321af +0x2e1:  mov    (%eax),%eax
084321b1 +0x2e3:  mov    %edx,0xc(%esp)
084321b5 +0x2e7:  mov    %eax,0x8(%esp)
084321b9 +0x2eb:  movl   $"inSert into charac_blood_inout(charac_no,dungeon1) values(%u,%d)",0x4(%esp)
084321c1 +0x2f3:  mov    -0x24(%ebp),%eax
084321c4 +0x2f6:  mov    %eax,(%esp)
084321c7 +0x2f9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084321cc +0x2fe:  movl   $0x1,0x4(%esp)
084321d4 +0x306:  mov    -0x24(%ebp),%eax
084321d7 +0x309:  mov    %eax,(%esp)
084321da +0x30c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084321df +0x311:  xor    $0x1,%eax
084321e2 +0x314:  test   %al,%al
084321e4 +0x316:  je     0843221e <+0x350>
084321e6 +0x318:  mov    $0x0,%ebx
084321eb +0x31d:  jmp    08432300 <+0x432>
084321f0 +0x322:  mov    -0x20(%ebp),%eax
084321f3 +0x325:  add    $0xc,%eax
084321f6 +0x328:  mov    %eax,0x8(%esp)
084321fa +0x32c:  movl   $0x0,0x4(%esp)
08432202 +0x334:  mov    -0x24(%ebp),%eax
08432205 +0x337:  mov    %eax,(%esp)
08432208 +0x33a:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0843220d +0x33f:  xor    $0x1,%eax
08432210 +0x342:  test   %al,%al
08432212 +0x344:  je     0843221e <+0x350>
08432214 +0x346:  mov    $0x0,%ebx
08432219 +0x34b:  jmp    08432300 <+0x432>
0843221e +0x350:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08432223 +0x355:  movl   $0x7955,0x8(%esp)
0843222b +0x35d:  movl   $"DBThread.cpp",0x4(%esp)
08432233 +0x365:  mov    %eax,(%esp)
08432236 +0x368:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843223b +0x36d:  movl   $0x1,0x8(%esp)
08432243 +0x375:  mov    %eax,0x4(%esp)
08432247 +0x379:  lea    -0x2c(%ebp),%eax
0843224a +0x37c:  mov    %eax,(%esp)
0843224d +0x37f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08432252 +0x384:  lea    -0x2c(%ebp),%eax
08432255 +0x387:  mov    %eax,(%esp)
08432258 +0x38a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843225d +0x38f:  movl   $0x14e,0x4(%esp)
08432265 +0x397:  mov    %eax,(%esp)
08432268 +0x39a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843226d +0x39f:  lea    -0x2c(%ebp),%eax
08432270 +0x3a2:  mov    %eax,(%esp)
08432273 +0x3a5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08432278 +0x3aa:  mov    0x10(%ebp),%edx
0843227b +0x3ad:  mov    %edx,0x4(%esp)
0843227f +0x3b1:  mov    %eax,(%esp)
08432282 +0x3b4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08432287 +0x3b9:  lea    -0x2c(%ebp),%eax
0843228a +0x3bc:  mov    %eax,(%esp)
0843228d +0x3bf:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08432292 +0x3c4:  mov    %eax,(%esp)
08432295 +0x3c7:  call   08452ee2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5af8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5af8
0843229a +0x3cc:  mov    %eax,-0x1c(%ebp)
0843229d +0x3cf:  movl   $0x10,0x8(%esp)
084322a5 +0x3d7:  mov    -0x20(%ebp),%eax
084322a8 +0x3da:  mov    %eax,0x4(%esp)
084322ac +0x3de:  mov    -0x1c(%ebp),%eax
084322af +0x3e1:  mov    %eax,(%esp)
084322b2 +0x3e4:  call   0807d8a0 <_init+0x198>
084322b7 +0x3e9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084322bc +0x3ee:  lea    -0x2c(%ebp),%edx
084322bf +0x3f1:  mov    %edx,0x8(%esp)
084322c3 +0x3f5:  movl   $0x1,0x4(%esp)
084322cb +0x3fd:  mov    %eax,(%esp)
084322ce +0x400:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084322d3 +0x405:  mov    $0x1,%ebx
084322d8 +0x40a:  lea    -0x2c(%ebp),%eax
084322db +0x40d:  mov    %eax,(%esp)
084322de +0x410:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084322e3 +0x415:  jmp    08432300 <+0x432>
084322e5 +0x417:  mov    %edx,%ebx
084322e7 +0x419:  mov    %eax,%esi
084322e9 +0x41b:  lea    -0x2c(%ebp),%eax
084322ec +0x41e:  mov    %eax,(%esp)
084322ef +0x421:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084322f4 +0x426:  mov    %esi,%eax
084322f6 +0x428:  mov    %ebx,%edx
084322f8 +0x42a:  mov    %eax,(%esp)
084322fb +0x42d:  call   08ae3750 <_Unwind_Resume>
08432300 +0x432:  mov    %ebx,%eax
08432302 +0x434:  add    $0x7c,%esp
08432305 +0x437:  pop    %ebx
08432306 +0x438:  pop    %esi
08432307 +0x439:  pop    %edi
08432308 +0x43a:  pop    %ebp
08432309 +0x43b:  ret
```

## 反编译 C

```c
// DB_LoadDimension::dispatch @ 0x8431ece

/* DB_LoadDimension::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadDimension::dispatch(DB_LoadDimension *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  CStreamGuard *pCVar3;
  Stream *pSVar4;
  CStreamGuard local_30 [8];
  MySQL *local_28;
  SIG_LOAD_DIMENSION *local_24;
  SIG_LOAD_DIMENSION *local_20;
  
  pSVar4 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar4);
  local_24 = Stream::GetOutBuffer<SIG_LOAD_DIMENSION>(param_3);
  MySQL::set_query(local_28,
                   "seLect dungeon1, dungeon2, dungeon3, dungeon4, dungeon5, dungeon6 from charac_dimension_inout where charac_no=%u"
                   ,*(undefined4 *)local_24);
  cVar2 = MySQL::exec(local_28,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(local_28), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    pSVar4 = (Stream *)(int)(char)local_24[4];
    MySQL::set_query(local_28,
                     "inSert into charac_dimension_inout(charac_no,dungeon1,dungeon2,dungeon3,dungeon4,dungeon5,dungeon6) values(%u,%d,%d,%d,%d,%d,%d)"
                     ,*(undefined4 *)local_24,pSVar4,(int)(char)local_24[5],(int)(char)local_24[6],
                     (int)(char)local_24[7],(int)(char)local_24[8],(int)(char)local_24[9]);
    cVar2 = MySQL::exec(local_28,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    cVar2 = MySQL::get_byte(local_28,0,(char *)(local_24 + 4));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,1,(char *)(local_24 + 5));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,2,(char *)(local_24 + 6));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,3,(char *)(local_24 + 7));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,4,(char *)(local_24 + 8));
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_28,5,(char *)(local_24 + 9));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  MySQL::set_query(local_28,"seLect dungeon1 from charac_blood_inout where charac_no=%u",
                   *(undefined4 *)local_24,pSVar4);
  cVar2 = MySQL::exec(local_28,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(local_28), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(local_28,"inSert into charac_blood_inout(charac_no,dungeon1) values(%u,%d)",
                     *(undefined4 *)local_24,(int)(char)local_24[0xc]);
    cVar2 = MySQL::exec(local_28,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    cVar2 = MySQL::get_byte(local_28,0,(char *)(local_24 + 0xc));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7955);
  CStreamGuard::CStreamGuard(local_30,pSVar4,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 08432268 to 084322d2 has its CatchHandler @ 084322e5 */
  CStreamGuard::operator<<(pCVar3,0x14e);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
  local_20 = CStreamGuard::GetInBuffer<SIG_LOAD_DIMENSION>(pCVar3);
  memcpy(local_20,local_24,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
  CStreamGuard::~CStreamGuard(local_30);
  return 1;
}
```
