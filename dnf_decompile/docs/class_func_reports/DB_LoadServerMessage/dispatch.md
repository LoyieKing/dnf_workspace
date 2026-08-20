# dispatch

`_ZN20DB_LoadServerMessage8dispatchEiiP6Stream`

`DB_LoadServerMessage::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadServerMessage` | `0x08435ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08435ecc  _ZN20DB_LoadServerMessage8dispatchEiiP6Stream
#           DB_LoadServerMessage::dispatch(int, int, Stream*)
# range [0x08435ecc, 0x0843630d]
08435ecc +0x000:  push   %ebp
08435ecd +0x001:  mov    %esp,%ebp
08435ecf +0x003:  push   %edi
08435ed0 +0x004:  push   %esi
08435ed1 +0x005:  push   %ebx
08435ed2 +0x006:  sub    $0x9c,%esp
08435ed8 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08435edd +0x011:  movl   $0x0,0x8(%esp)
08435ee5 +0x019:  movl   $0x6,0x4(%esp)
08435eed +0x021:  mov    %eax,(%esp)
08435ef0 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08435ef5 +0x029:  mov    %eax,-0x34(%ebp)
08435ef8 +0x02c:  mov    0x14(%ebp),%eax
08435efb +0x02f:  mov    %eax,(%esp)
08435efe +0x032:  call   08453270 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5e86>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5e86
08435f03 +0x037:  mov    %eax,-0x30(%ebp)
08435f06 +0x03a:  mov    -0x30(%ebp),%eax
08435f09 +0x03d:  movzwl 0x2(%eax),%eax
08435f0d +0x041:  movzwl %ax,%edx
08435f10 +0x044:  mov    -0x30(%ebp),%eax
08435f13 +0x047:  movzwl (%eax),%eax
08435f16 +0x04a:  movzwl %ax,%eax
08435f19 +0x04d:  mov    %edx,0xc(%esp)
08435f1d +0x051:  mov    %eax,0x8(%esp)
08435f21 +0x055:  movl   $"seLect kind, message_index, charac_name, message, unix_timestamp(update_time) from event_server_message where server_info=%d and (channel_no=%d or channel_no=0)",0x4(%esp)
08435f29 +0x05d:  mov    -0x34(%ebp),%eax
08435f2c +0x060:  mov    %eax,(%esp)
08435f2f +0x063:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435f34 +0x068:  movl   $0x1,0x4(%esp)
08435f3c +0x070:  mov    -0x34(%ebp),%eax
08435f3f +0x073:  mov    %eax,(%esp)
08435f42 +0x076:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435f47 +0x07b:  xor    $0x1,%eax
08435f4a +0x07e:  test   %al,%al
08435f4c +0x080:  je     08435f58 <+0x8c>
08435f4e +0x082:  mov    $0x0,%ebx
08435f53 +0x087:  jmp    08436300 <+0x434>
08435f58 +0x08c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08435f5d +0x091:  movl   $0x8131,0x8(%esp)
08435f65 +0x099:  movl   $"DBThread.cpp",0x4(%esp)
08435f6d +0x0a1:  mov    %eax,(%esp)
08435f70 +0x0a4:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08435f75 +0x0a9:  movl   $0x1,0x8(%esp)
08435f7d +0x0b1:  mov    %eax,0x4(%esp)
08435f81 +0x0b5:  lea    -0x3c(%ebp),%eax
08435f84 +0x0b8:  mov    %eax,(%esp)
08435f87 +0x0bb:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08435f8c +0x0c0:  lea    -0x3c(%ebp),%eax
08435f8f +0x0c3:  mov    %eax,(%esp)
08435f92 +0x0c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08435f97 +0x0cb:  mov    0xc(%ebp),%edx
08435f9a +0x0ce:  mov    %edx,0x4(%esp)
08435f9e +0x0d2:  mov    %eax,(%esp)
08435fa1 +0x0d5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08435fa6 +0x0da:  lea    -0x3c(%ebp),%eax
08435fa9 +0x0dd:  mov    %eax,(%esp)
08435fac +0x0e0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08435fb1 +0x0e5:  mov    0x10(%ebp),%edx
08435fb4 +0x0e8:  mov    %edx,0x4(%esp)
08435fb8 +0x0ec:  mov    %eax,(%esp)
08435fbb +0x0ef:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08435fc0 +0x0f4:  lea    -0x3c(%ebp),%eax
08435fc3 +0x0f7:  mov    %eax,(%esp)
08435fc6 +0x0fa:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08435fcb +0x0ff:  mov    %eax,(%esp)
08435fce +0x102:  call   084532c4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5eda>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5eda
08435fd3 +0x107:  mov    %eax,-0x2c(%ebp)
08435fd6 +0x10a:  movl   $0x1134,0x8(%esp)
08435fde +0x112:  movl   $0x0,0x4(%esp)
08435fe6 +0x11a:  mov    -0x2c(%ebp),%eax
08435fe9 +0x11d:  mov    %eax,(%esp)
08435fec +0x120:  call   0807dcc0 <_init+0x5b8>
08435ff1 +0x125:  mov    -0x34(%ebp),%eax
08435ff4 +0x128:  mov    %eax,(%esp)
08435ff7 +0x12b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08435ffc +0x130:  mov    %eax,-0x28(%ebp)
08435fff +0x133:  movb   $0x0,-0x21(%ebp)
08436003 +0x137:  movb   $0x0,-0x3d(%ebp)
08436007 +0x13b:  movb   $0x0,-0x3e(%ebp)
0843600b +0x13f:  lea    -0x8a(%ebp),%edx
08436011 +0x145:  mov    $0x32,%ebx
08436016 +0x14a:  mov    $0x0,%eax
0843601b +0x14f:  mov    %edx,%ecx
0843601d +0x151:  and    $0x2,%ecx
08436020 +0x154:  test   %ecx,%ecx
08436022 +0x156:  je     0843602d <+0x161>
08436024 +0x158:  mov    %ax,(%edx)
08436027 +0x15b:  add    $0x2,%edx
0843602a +0x15e:  sub    $0x2,%ebx
0843602d +0x161:  mov    %ebx,%ecx
0843602f +0x163:  shr    $0x2,%ecx
08436032 +0x166:  mov    %edx,%edi
08436034 +0x168:  rep stos %eax,%es:(%edi)
08436036 +0x16a:  mov    %edi,%edx
08436038 +0x16c:  mov    %ebx,%ecx
0843603a +0x16e:  and    $0x2,%ecx
0843603d +0x171:  test   %ecx,%ecx
0843603f +0x173:  je     08436047 <+0x17b>
08436041 +0x175:  mov    %ax,(%edx)
08436044 +0x178:  add    $0x2,%edx
08436047 +0x17b:  mov    %ebx,%ecx
08436049 +0x17d:  and    $0x1,%ecx
0843604c +0x180:  test   %ecx,%ecx
0843604e +0x182:  je     08436055 <+0x189>
08436050 +0x184:  mov    %al,(%edx)
08436052 +0x186:  add    $0x1,%edx
08436055 +0x189:  movl   $0x0,-0x52(%ebp)
0843605c +0x190:  movl   $0x0,-0x4e(%ebp)
08436063 +0x197:  movl   $0x0,-0x4a(%ebp)
0843606a +0x19e:  movl   $0x0,-0x46(%ebp)
08436071 +0x1a5:  movl   $0x0,-0x42(%ebp)
08436078 +0x1ac:  movl   $0x0,-0x58(%ebp)
0843607f +0x1b3:  movl   $0x0,-0x20(%ebp)
08436086 +0x1ba:  movl   $0x0,-0x1c(%ebp)
0843608d +0x1c1:  jmp    0843629c <+0x3d0>
08436092 +0x1c6:  mov    -0x34(%ebp),%eax
08436095 +0x1c9:  mov    %eax,(%esp)
08436098 +0x1cc:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843609d +0x1d1:  mov    %al,-0x21(%ebp)
084360a0 +0x1d4:  movzbl -0x21(%ebp),%eax
084360a4 +0x1d8:  xor    $0x1,%eax
084360a7 +0x1db:  test   %al,%al
084360a9 +0x1dd:  je     084360b5 <+0x1e9>
084360ab +0x1df:  mov    $0x0,%ebx
084360b0 +0x1e4:  jmp    084362f5 <+0x429>
084360b5 +0x1e9:  lea    -0x3d(%ebp),%eax
084360b8 +0x1ec:  mov    %eax,0x8(%esp)
084360bc +0x1f0:  movl   $0x0,0x4(%esp)
084360c4 +0x1f8:  mov    -0x34(%ebp),%eax
084360c7 +0x1fb:  mov    %eax,(%esp)
084360ca +0x1fe:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084360cf +0x203:  mov    %al,-0x21(%ebp)
084360d2 +0x206:  movzbl -0x21(%ebp),%eax
084360d6 +0x20a:  xor    $0x1,%eax
084360d9 +0x20d:  test   %al,%al
084360db +0x20f:  je     084360e7 <+0x21b>
084360dd +0x211:  mov    $0x0,%ebx
084360e2 +0x216:  jmp    084362f5 <+0x429>
084360e7 +0x21b:  lea    -0x3e(%ebp),%eax
084360ea +0x21e:  mov    %eax,0x8(%esp)
084360ee +0x222:  movl   $0x1,0x4(%esp)
084360f6 +0x22a:  mov    -0x34(%ebp),%eax
084360f9 +0x22d:  mov    %eax,(%esp)
084360fc +0x230:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08436101 +0x235:  mov    %al,-0x21(%ebp)
08436104 +0x238:  movzbl -0x21(%ebp),%eax
08436108 +0x23c:  xor    $0x1,%eax
0843610b +0x23f:  test   %al,%al
0843610d +0x241:  je     08436119 <+0x24d>
0843610f +0x243:  mov    $0x0,%ebx
08436114 +0x248:  jmp    084362f5 <+0x429>
08436119 +0x24d:  movl   $0x14,0xc(%esp)
08436121 +0x255:  lea    -0x52(%ebp),%eax
08436124 +0x258:  mov    %eax,0x8(%esp)
08436128 +0x25c:  movl   $0x2,0x4(%esp)
08436130 +0x264:  mov    -0x34(%ebp),%eax
08436133 +0x267:  mov    %eax,(%esp)
08436136 +0x26a:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0843613b +0x26f:  mov    %al,-0x21(%ebp)
0843613e +0x272:  movzbl -0x21(%ebp),%eax
08436142 +0x276:  xor    $0x1,%eax
08436145 +0x279:  test   %al,%al
08436147 +0x27b:  je     08436153 <+0x287>
08436149 +0x27d:  mov    $0x0,%ebx
0843614e +0x282:  jmp    084362f5 <+0x429>
08436153 +0x287:  movl   $0x32,0xc(%esp)
0843615b +0x28f:  lea    -0x8a(%ebp),%eax
08436161 +0x295:  mov    %eax,0x8(%esp)
08436165 +0x299:  movl   $0x3,0x4(%esp)
0843616d +0x2a1:  mov    -0x34(%ebp),%eax
08436170 +0x2a4:  mov    %eax,(%esp)
08436173 +0x2a7:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08436178 +0x2ac:  mov    %al,-0x21(%ebp)
0843617b +0x2af:  movzbl -0x21(%ebp),%eax
0843617f +0x2b3:  xor    $0x1,%eax
08436182 +0x2b6:  test   %al,%al
08436184 +0x2b8:  je     08436190 <+0x2c4>
08436186 +0x2ba:  mov    $0x0,%ebx
0843618b +0x2bf:  jmp    084362f5 <+0x429>
08436190 +0x2c4:  lea    -0x58(%ebp),%eax
08436193 +0x2c7:  mov    %eax,0x8(%esp)
08436197 +0x2cb:  movl   $0x4,0x4(%esp)
0843619f +0x2d3:  mov    -0x34(%ebp),%eax
084361a2 +0x2d6:  mov    %eax,(%esp)
084361a5 +0x2d9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084361aa +0x2de:  mov    %al,-0x21(%ebp)
084361ad +0x2e1:  movzbl -0x21(%ebp),%eax
084361b1 +0x2e5:  xor    $0x1,%eax
084361b4 +0x2e8:  test   %al,%al
084361b6 +0x2ea:  je     084361c2 <+0x2f6>
084361b8 +0x2ec:  mov    $0x0,%ebx
084361bd +0x2f1:  jmp    084362f5 <+0x429>
084361c2 +0x2f6:  mov    -0x20(%ebp),%edx
084361c5 +0x2f9:  movzbl -0x3d(%ebp),%eax
084361c9 +0x2fd:  mov    %eax,%ecx
084361cb +0x2ff:  mov    -0x2c(%ebp),%eax
084361ce +0x302:  imul   $0x58,%edx,%edx
084361d1 +0x305:  mov    %cl,0x4(%edx,%eax,1)
084361d5 +0x309:  mov    -0x20(%ebp),%edx
084361d8 +0x30c:  movzbl -0x3e(%ebp),%eax
084361dc +0x310:  mov    %eax,%ecx
084361de +0x312:  mov    -0x2c(%ebp),%eax
084361e1 +0x315:  imul   $0x58,%edx,%edx
084361e4 +0x318:  mov    %cl,0x5(%edx,%eax,1)
084361e8 +0x31c:  mov    -0x20(%ebp),%ebx
084361eb +0x31f:  lea    -0x8a(%ebp),%eax
084361f1 +0x325:  mov    %eax,(%esp)
084361f4 +0x328:  call   0807e3b0 <_init+0xca8>
084361f9 +0x32d:  mov    -0x2c(%ebp),%ecx
084361fc +0x330:  imul   $0x58,%ebx,%edx
084361ff +0x333:  lea    (%ecx,%edx,1),%edx
08436202 +0x336:  add    $0x8,%edx
08436205 +0x339:  mov    %eax,(%edx)
08436207 +0x33b:  lea    -0x8a(%ebp),%eax
0843620d +0x341:  mov    %eax,(%esp)
08436210 +0x344:  call   0807e3b0 <_init+0xca8>
08436215 +0x349:  mov    -0x20(%ebp),%edx
08436218 +0x34c:  imul   $0x58,%edx,%edx
0843621b +0x34f:  add    -0x2c(%ebp),%edx
0843621e +0x352:  add    $0xc,%edx
08436221 +0x355:  mov    %eax,0x8(%esp)
08436225 +0x359:  lea    -0x8a(%ebp),%eax
0843622b +0x35f:  mov    %eax,0x4(%esp)
0843622f +0x363:  mov    %edx,(%esp)
08436232 +0x366:  call   0807d8d0 <_init+0x1c8>
08436237 +0x36b:  mov    -0x20(%ebp),%ebx
0843623a +0x36e:  lea    -0x52(%ebp),%eax
0843623d +0x371:  mov    %eax,(%esp)
08436240 +0x374:  call   0807e3b0 <_init+0xca8>
08436245 +0x379:  mov    -0x2c(%ebp),%ecx
08436248 +0x37c:  imul   $0x58,%ebx,%edx
0843624b +0x37f:  lea    (%ecx,%edx,1),%edx
0843624e +0x382:  add    $0x40,%edx
08436251 +0x385:  mov    %eax,(%edx)
08436253 +0x387:  lea    -0x52(%ebp),%eax
08436256 +0x38a:  mov    %eax,(%esp)
08436259 +0x38d:  call   0807e3b0 <_init+0xca8>
0843625e +0x392:  mov    -0x20(%ebp),%edx
08436261 +0x395:  imul   $0x58,%edx,%edx
08436264 +0x398:  add    $0x40,%edx
08436267 +0x39b:  add    -0x2c(%ebp),%edx
0843626a +0x39e:  add    $0x4,%edx
0843626d +0x3a1:  mov    %eax,0x8(%esp)
08436271 +0x3a5:  lea    -0x52(%ebp),%eax
08436274 +0x3a8:  mov    %eax,0x4(%esp)
08436278 +0x3ac:  mov    %edx,(%esp)
0843627b +0x3af:  call   0807d8d0 <_init+0x1c8>
08436280 +0x3b4:  mov    -0x20(%ebp),%edx
08436283 +0x3b7:  mov    -0x58(%ebp),%eax
08436286 +0x3ba:  mov    -0x2c(%ebp),%ecx
08436289 +0x3bd:  imul   $0x58,%edx,%edx
0843628c +0x3c0:  lea    (%ecx,%edx,1),%edx
0843628f +0x3c3:  add    $0x58,%edx
08436292 +0x3c6:  mov    %eax,(%edx)
08436294 +0x3c8:  addl   $0x1,-0x20(%ebp)
08436298 +0x3cc:  addl   $0x1,-0x1c(%ebp)
0843629c +0x3d0:  mov    -0x1c(%ebp),%eax
0843629f +0x3d3:  cmp    -0x28(%ebp),%eax
084362a2 +0x3d6:  setl   %al
084362a5 +0x3d9:  test   %al,%al
084362a7 +0x3db:  jne    08436092 <+0x1c6>
084362ad +0x3e1:  mov    -0x28(%ebp),%eax
084362b0 +0x3e4:  mov    %eax,%edx
084362b2 +0x3e6:  mov    -0x2c(%ebp),%eax
084362b5 +0x3e9:  mov    %dl,(%eax)
084362b7 +0x3eb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084362bc +0x3f0:  lea    -0x3c(%ebp),%edx
084362bf +0x3f3:  mov    %edx,0x8(%esp)
084362c3 +0x3f7:  movl   $0x1,0x4(%esp)
084362cb +0x3ff:  mov    %eax,(%esp)
084362ce +0x402:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084362d3 +0x407:  mov    $0x1,%ebx
084362d8 +0x40c:  jmp    084362f5 <+0x429>
084362da +0x40e:  mov    %edx,%ebx
084362dc +0x410:  mov    %eax,%esi
084362de +0x412:  lea    -0x3c(%ebp),%eax
084362e1 +0x415:  mov    %eax,(%esp)
084362e4 +0x418:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084362e9 +0x41d:  mov    %esi,%eax
084362eb +0x41f:  mov    %ebx,%edx
084362ed +0x421:  mov    %eax,(%esp)
084362f0 +0x424:  call   08ae3750 <_Unwind_Resume>
084362f5 +0x429:  lea    -0x3c(%ebp),%eax
084362f8 +0x42c:  mov    %eax,(%esp)
084362fb +0x42f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08436300 +0x434:  mov    %ebx,%eax
08436302 +0x436:  add    $0x9c,%esp
08436308 +0x43c:  pop    %ebx
08436309 +0x43d:  pop    %esi
0843630a +0x43e:  pop    %edi
0843630b +0x43f:  pop    %ebp
0843630c +0x440:  ret
0843630d +0x441:  nop
```

## 反编译 C

```c
// DB_LoadServerMessage::dispatch @ 0x8435ecc

/* WARNING: Removing unreachable block (ram,0x08436050) */
/* DB_LoadServerMessage::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadServerMessage::dispatch(DB_LoadServerMessage *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  size_t sVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_8e [50];
  int local_5c;
  char local_56 [20];
  SIG_EVENT_SERVER_MESSAGE local_42;
  SIG_EVENT_SERVER_MESSAGE local_41;
  CStreamGuard local_40 [8];
  MySQL *local_38;
  SIG_SELECT_SERVER_MESSAGE *local_34;
  SIG_EVENT_SERVER_MESSAGE *local_30;
  int local_2c;
  char local_25;
  int local_24;
  int local_20;
  
  bVar10 = 0;
  local_38 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_34 = Stream::GetOutBuffer<SIG_SELECT_SERVER_MESSAGE>(param_3);
  MySQL::set_query(local_38,
                   "seLect kind, message_index, charac_name, message, unix_timestamp(update_time) from event_server_message where server_info=%d and (channel_no=%d or channel_no=0)"
                   ,(uint)*(ushort *)local_34,(uint)*(ushort *)(local_34 + 2));
  cVar2 = MySQL::exec(local_38,true);
  if (cVar2 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8131);
    CStreamGuard::CStreamGuard(local_40,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 08435fa1 to 084362d2 has its CatchHandler @ 084362da */
    CStreamGuard::operator<<(pCVar4,param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_40);
    local_30 = CStreamGuard::GetInBuffer<SIG_EVENT_SERVER_MESSAGE>(pCVar4);
    memset(local_30,0,0x1134);
    local_2c = MySQL::get_n_rows(local_38);
    local_25 = '\0';
    local_41 = (SIG_EVENT_SERVER_MESSAGE)0x0;
    local_42 = (SIG_EVENT_SERVER_MESSAGE)0x0;
    pcVar6 = local_8e;
    uVar8 = 0x32;
    bVar9 = ((uint)pcVar6 & 2) != 0;
    if (bVar9) {
      local_8e[0] = '\0';
      local_8e[1] = '\0';
      pcVar6 = local_8e + 2;
      uVar8 = 0x30;
    }
    for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
    }
    if (!bVar9) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
    }
    local_56[0] = '\0';
    local_56[1] = '\0';
    local_56[2] = '\0';
    local_56[3] = '\0';
    local_56[4] = '\0';
    local_56[5] = '\0';
    local_56[6] = '\0';
    local_56[7] = '\0';
    local_56[8] = '\0';
    local_56[9] = '\0';
    local_56[10] = '\0';
    local_56[0xb] = '\0';
    local_56[0xc] = '\0';
    local_56[0xd] = '\0';
    local_56[0xe] = '\0';
    local_56[0xf] = '\0';
    local_56[0x10] = '\0';
    local_56[0x11] = '\0';
    local_56[0x12] = '\0';
    local_56[0x13] = '\0';
    local_5c = 0;
    local_24 = 0;
    for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
      local_25 = MySQL::fetch(local_38);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_byte(local_38,0,(char *)&local_41);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_byte(local_38,1,(char *)&local_42);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_str(local_38,2,local_56,0x14);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_str(local_38,3,local_8e,0x32);
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_25 = MySQL::get_int(local_38,4,&local_5c);
      iVar1 = local_24;
      if (local_25 != '\x01') {
        uVar7 = 0;
        goto LAB_084362f5;
      }
      local_30[local_24 * 0x58 + 4] = local_41;
      local_30[local_24 * 0x58 + 5] = local_42;
      sVar5 = strlen(local_8e);
      *(size_t *)(local_30 + iVar1 * 0x58 + 8) = sVar5;
      sVar5 = strlen(local_8e);
      strncpy((char *)(local_30 + local_24 * 0x58 + 0xc),local_8e,sVar5);
      iVar1 = local_24;
      sVar5 = strlen(local_56);
      *(size_t *)(local_30 + iVar1 * 0x58 + 0x40) = sVar5;
      sVar5 = strlen(local_56);
      strncpy((char *)(local_30 + local_24 * 0x58 + 0x44),local_56,sVar5);
      *(int *)(local_30 + local_24 * 0x58 + 0x58) = local_5c;
      local_24 = local_24 + 1;
    }
    *local_30 = SUB41(local_2c,0);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
    uVar7 = 1;
LAB_084362f5:
    CStreamGuard::~CStreamGuard(local_40);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
