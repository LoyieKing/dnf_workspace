# dispatch

`_ZN18DB_UpdatePvPResult8dispatchEiiP6Stream`

`DB_UpdatePvPResult::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdatePvPResult` | `0x0843097e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843097e  _ZN18DB_UpdatePvPResult8dispatchEiiP6Stream
#           DB_UpdatePvPResult::dispatch(int, int, Stream*)
# range [0x0843097e, 0x084317b1]
0843097e +0x000:  push   %ebp
0843097f +0x001:  mov    %esp,%ebp
08430981 +0x003:  push   %edi
08430982 +0x004:  push   %esi
08430983 +0x005:  push   %ebx
08430984 +0x006:  sub    $0x17c,%esp
0843098a +0x00c:  lea    -0x94(%ebp),%eax
08430990 +0x012:  mov    %eax,(%esp)
08430993 +0x015:  call   0843091e <_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamEN11school_infoC1Ev>  ; DB_UpdatePvPResult::dispatch(int, int, Stream*)::school_info::school_info()
08430998 +0x01a:  lea    -0x108(%ebp),%eax
0843099e +0x020:  mov    %eax,%ebx
084309a0 +0x022:  mov    $0x1,%esi
084309a5 +0x027:  jmp    084309b5 <+0x37>
084309a7 +0x029:  mov    %ebx,(%esp)
084309aa +0x02c:  call   0843091e <_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamEN11school_infoC1Ev>  ; DB_UpdatePvPResult::dispatch(int, int, Stream*)::school_info::school_info()
084309af +0x031:  add    $0x24,%ebx
084309b2 +0x034:  sub    $0x1,%esi
084309b5 +0x037:  cmp    $0xffffffff,%esi
084309b8 +0x03a:  setne  %al
084309bb +0x03d:  test   %al,%al
084309bd +0x03f:  jne    084309a7 <+0x29>
084309bf +0x041:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084309c6 +0x048:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084309cb +0x04d:  mov    %eax,-0x70(%ebp)
084309ce +0x050:  lea    -0xc0(%ebp),%eax
084309d4 +0x056:  mov    %eax,0x4(%esp)
084309d8 +0x05a:  lea    -0x70(%ebp),%eax
084309db +0x05d:  mov    %eax,(%esp)
084309de +0x060:  call   0807e360 <_init+0xc58>
084309e3 +0x065:  mov    %eax,-0x4c(%ebp)
084309e6 +0x068:  mov    -0x4c(%ebp),%eax
084309e9 +0x06b:  mov    0x18(%eax),%eax
084309ec +0x06e:  mov    %eax,-0x48(%ebp)
084309ef +0x071:  mov    -0x4c(%ebp),%eax
084309f2 +0x074:  mov    0xc(%eax),%eax
084309f5 +0x077:  mov    %eax,-0x44(%ebp)
084309f8 +0x07a:  mov    -0x4c(%ebp),%eax
084309fb +0x07d:  movl   $0x6,0x8(%eax)
08430a02 +0x084:  mov    -0x4c(%ebp),%eax
08430a05 +0x087:  movl   $0x0,0x4(%eax)
08430a0c +0x08e:  mov    -0x4c(%ebp),%eax
08430a0f +0x091:  movl   $0x0,(%eax)
08430a15 +0x097:  mov    -0x4c(%ebp),%eax
08430a18 +0x09a:  mov    %eax,(%esp)
08430a1b +0x09d:  call   0807e820 <_init+0x1118>
08430a20 +0x0a2:  mov    %eax,-0x40(%ebp)
08430a23 +0x0a5:  mov    -0x70(%ebp),%eax
08430a26 +0x0a8:  cmp    %eax,-0x40(%ebp)
08430a29 +0x0ab:  jle    08430a32 <+0xb4>
08430a2b +0x0ad:  subl   $&_ZL14gUnicodeBuffer+0xac54,-0x40(%ebp)
08430a32 +0x0b4:  mov    -0x40(%ebp),%eax
08430a35 +0x0b7:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
08430a3a +0x0bc:  mov    %eax,-0x3c(%ebp)
08430a3d +0x0bf:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08430a42 +0x0c4:  movl   $0x0,0x8(%esp)
08430a4a +0x0cc:  movl   $0x10,0x4(%esp)
08430a52 +0x0d4:  mov    %eax,(%esp)
08430a55 +0x0d7:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08430a5a +0x0dc:  mov    %eax,-0x38(%ebp)
08430a5d +0x0df:  mov    0x14(%ebp),%eax
08430a60 +0x0e2:  mov    %eax,(%esp)
08430a63 +0x0e5:  call   08452e24 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5a3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5a3a
08430a68 +0x0ea:  mov    %eax,-0x34(%ebp)
08430a6b +0x0ed:  movl   $0x0,-0x30(%ebp)
08430a72 +0x0f4:  jmp    084312df <+0x961>
08430a77 +0x0f9:  mov    -0x30(%ebp),%edx
08430a7a +0x0fc:  mov    -0x34(%ebp),%eax
08430a7d +0x0ff:  add    $0x16,%edx
08430a80 +0x102:  mov    0x8(%eax,%edx,4),%edx
08430a84 +0x106:  mov    -0x30(%ebp),%ecx
08430a87 +0x109:  mov    -0x34(%ebp),%eax
08430a8a +0x10c:  add    $0x8,%ecx
08430a8d +0x10f:  mov    0x8(%eax,%ecx,4),%eax
08430a91 +0x113:  mov    %edx,0xc(%esp)
08430a95 +0x117:  mov    %eax,0x8(%esp)
08430a99 +0x11b:  movl   $"seLect school_id, rating, fight_cnt, unix_timestamp(last_update_time), school_point, school_point_prev, fight_cnt_prev from school_info where school_id in (%d,%d)",0x4(%esp)
08430aa1 +0x123:  mov    -0x38(%ebp),%eax
08430aa4 +0x126:  mov    %eax,(%esp)
08430aa7 +0x129:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430aac +0x12e:  movl   $0x1,0x4(%esp)
08430ab4 +0x136:  mov    -0x38(%ebp),%eax
08430ab7 +0x139:  mov    %eax,(%esp)
08430aba +0x13c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430abf +0x141:  xor    $0x1,%eax
08430ac2 +0x144:  test   %al,%al
08430ac4 +0x146:  je     08430ad0 <+0x152>
08430ac6 +0x148:  mov    $0x0,%eax
08430acb +0x14d:  jmp    084317a7 <+0xe29>
08430ad0 +0x152:  mov    -0x38(%ebp),%eax
08430ad3 +0x155:  mov    %eax,(%esp)
08430ad6 +0x158:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08430adb +0x15d:  mov    %eax,-0x2c(%ebp)
08430ade +0x160:  cmpl   $0x2,-0x2c(%ebp)
08430ae2 +0x164:  je     08430aee <+0x170>
08430ae4 +0x166:  mov    $0x0,%eax
08430ae9 +0x16b:  jmp    084317a7 <+0xe29>
08430aee +0x170:  movl   $0x0,-0x28(%ebp)
08430af5 +0x177:  jmp    08430d6d <+0x3ef>
08430afa +0x17c:  mov    -0x38(%ebp),%eax
08430afd +0x17f:  mov    %eax,(%esp)
08430b00 +0x182:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08430b05 +0x187:  xor    $0x1,%eax
08430b08 +0x18a:  test   %al,%al
08430b0a +0x18c:  jne    08430d80 <+0x402>
08430b10 +0x192:  lea    -0x94(%ebp),%eax
08430b16 +0x198:  mov    %eax,0x8(%esp)
08430b1a +0x19c:  movl   $0x0,0x4(%esp)
08430b22 +0x1a4:  mov    -0x38(%ebp),%eax
08430b25 +0x1a7:  mov    %eax,(%esp)
08430b28 +0x1aa:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08430b2d +0x1af:  xor    $0x1,%eax
08430b30 +0x1b2:  test   %al,%al
08430b32 +0x1b4:  je     08430b3e <+0x1c0>
08430b34 +0x1b6:  mov    $0x0,%eax
08430b39 +0x1bb:  jmp    084317a7 <+0xe29>
08430b3e +0x1c0:  lea    -0x94(%ebp),%eax
08430b44 +0x1c6:  add    $0x1c,%eax
08430b47 +0x1c9:  mov    %eax,0x8(%esp)
08430b4b +0x1cd:  movl   $0x1,0x4(%esp)
08430b53 +0x1d5:  mov    -0x38(%ebp),%eax
08430b56 +0x1d8:  mov    %eax,(%esp)
08430b59 +0x1db:  call   0844d6d0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e6
08430b5e +0x1e0:  xor    $0x1,%eax
08430b61 +0x1e3:  test   %al,%al
08430b63 +0x1e5:  je     08430b6f <+0x1f1>
08430b65 +0x1e7:  mov    $0x0,%eax
08430b6a +0x1ec:  jmp    084317a7 <+0xe29>
08430b6f +0x1f1:  lea    -0x94(%ebp),%eax
08430b75 +0x1f7:  add    $0x4,%eax
08430b78 +0x1fa:  mov    %eax,0x8(%esp)
08430b7c +0x1fe:  movl   $0x2,0x4(%esp)
08430b84 +0x206:  mov    -0x38(%ebp),%eax
08430b87 +0x209:  mov    %eax,(%esp)
08430b8a +0x20c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08430b8f +0x211:  xor    $0x1,%eax
08430b92 +0x214:  test   %al,%al
08430b94 +0x216:  je     08430ba0 <+0x222>
08430b96 +0x218:  mov    $0x0,%eax
08430b9b +0x21d:  jmp    084317a7 <+0xe29>
08430ba0 +0x222:  lea    -0x94(%ebp),%eax
08430ba6 +0x228:  add    $0x8,%eax
08430ba9 +0x22b:  mov    %eax,0x8(%esp)
08430bad +0x22f:  movl   $0x3,0x4(%esp)
08430bb5 +0x237:  mov    -0x38(%ebp),%eax
08430bb8 +0x23a:  mov    %eax,(%esp)
08430bbb +0x23d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08430bc0 +0x242:  xor    $0x1,%eax
08430bc3 +0x245:  test   %al,%al
08430bc5 +0x247:  je     08430bd1 <+0x253>
08430bc7 +0x249:  mov    $0x0,%eax
08430bcc +0x24e:  jmp    084317a7 <+0xe29>
08430bd1 +0x253:  lea    -0x94(%ebp),%eax
08430bd7 +0x259:  add    $0x10,%eax
08430bda +0x25c:  mov    %eax,0x8(%esp)
08430bde +0x260:  movl   $0x4,0x4(%esp)
08430be6 +0x268:  mov    -0x38(%ebp),%eax
08430be9 +0x26b:  mov    %eax,(%esp)
08430bec +0x26e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08430bf1 +0x273:  xor    $0x1,%eax
08430bf4 +0x276:  test   %al,%al
08430bf6 +0x278:  je     08430c02 <+0x284>
08430bf8 +0x27a:  mov    $0x0,%eax
08430bfd +0x27f:  jmp    084317a7 <+0xe29>
08430c02 +0x284:  lea    -0x94(%ebp),%eax
08430c08 +0x28a:  add    $0x14,%eax
08430c0b +0x28d:  mov    %eax,0x8(%esp)
08430c0f +0x291:  movl   $0x5,0x4(%esp)
08430c17 +0x299:  mov    -0x38(%ebp),%eax
08430c1a +0x29c:  mov    %eax,(%esp)
08430c1d +0x29f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08430c22 +0x2a4:  xor    $0x1,%eax
08430c25 +0x2a7:  test   %al,%al
08430c27 +0x2a9:  je     08430c33 <+0x2b5>
08430c29 +0x2ab:  mov    $0x0,%eax
08430c2e +0x2b0:  jmp    084317a7 <+0xe29>
08430c33 +0x2b5:  lea    -0x94(%ebp),%eax
08430c39 +0x2bb:  add    $0x18,%eax
08430c3c +0x2be:  mov    %eax,0x8(%esp)
08430c40 +0x2c2:  movl   $0x6,0x4(%esp)
08430c48 +0x2ca:  mov    -0x38(%ebp),%eax
08430c4b +0x2cd:  mov    %eax,(%esp)
08430c4e +0x2d0:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08430c53 +0x2d5:  xor    $0x1,%eax
08430c56 +0x2d8:  test   %al,%al
08430c58 +0x2da:  je     08430c64 <+0x2e6>
08430c5a +0x2dc:  mov    $0x0,%eax
08430c5f +0x2e1:  jmp    084317a7 <+0xe29>
08430c64 +0x2e6:  mov    -0x78(%ebp),%eax
08430c67 +0x2e9:  mov    %eax,-0x74(%ebp)
08430c6a +0x2ec:  mov    -0x30(%ebp),%edx
08430c6d +0x2ef:  mov    -0x34(%ebp),%eax
08430c70 +0x2f2:  add    $0x8,%edx
08430c73 +0x2f5:  mov    0x8(%eax,%edx,4),%edx
08430c77 +0x2f9:  mov    -0x94(%ebp),%eax
08430c7d +0x2ff:  cmp    %eax,%edx
08430c7f +0x301:  jne    08430ce6 <+0x368>
08430c81 +0x303:  mov    -0x94(%ebp),%eax
08430c87 +0x309:  mov    %eax,-0x108(%ebp)
08430c8d +0x30f:  mov    -0x90(%ebp),%eax
08430c93 +0x315:  mov    %eax,-0x104(%ebp)
08430c99 +0x31b:  mov    -0x8c(%ebp),%eax
08430c9f +0x321:  mov    %eax,-0x100(%ebp)
08430ca5 +0x327:  mov    -0x88(%ebp),%eax
08430cab +0x32d:  mov    %eax,-0xfc(%ebp)
08430cb1 +0x333:  mov    -0x84(%ebp),%eax
08430cb7 +0x339:  mov    %eax,-0xf8(%ebp)
08430cbd +0x33f:  mov    -0x80(%ebp),%eax
08430cc0 +0x342:  mov    %eax,-0xf4(%ebp)
08430cc6 +0x348:  mov    -0x7c(%ebp),%eax
08430cc9 +0x34b:  mov    %eax,-0xf0(%ebp)
08430ccf +0x351:  mov    -0x78(%ebp),%eax
08430cd2 +0x354:  mov    %eax,-0xec(%ebp)
08430cd8 +0x35a:  mov    -0x74(%ebp),%eax
08430cdb +0x35d:  mov    %eax,-0xe8(%ebp)
08430ce1 +0x363:  jmp    08430d69 <+0x3eb>
08430ce6 +0x368:  mov    -0x30(%ebp),%edx
08430ce9 +0x36b:  mov    -0x34(%ebp),%eax
08430cec +0x36e:  add    $0x16,%edx
08430cef +0x371:  mov    0x8(%eax,%edx,4),%edx
08430cf3 +0x375:  mov    -0x94(%ebp),%eax
08430cf9 +0x37b:  cmp    %eax,%edx
08430cfb +0x37d:  jne    08430d5f <+0x3e1>
08430cfd +0x37f:  mov    -0x94(%ebp),%eax
08430d03 +0x385:  mov    %eax,-0xe4(%ebp)
08430d09 +0x38b:  mov    -0x90(%ebp),%eax
08430d0f +0x391:  mov    %eax,-0xe0(%ebp)
08430d15 +0x397:  mov    -0x8c(%ebp),%eax
08430d1b +0x39d:  mov    %eax,-0xdc(%ebp)
08430d21 +0x3a3:  mov    -0x88(%ebp),%eax
08430d27 +0x3a9:  mov    %eax,-0xd8(%ebp)
08430d2d +0x3af:  mov    -0x84(%ebp),%eax
08430d33 +0x3b5:  mov    %eax,-0xd4(%ebp)
08430d39 +0x3bb:  mov    -0x80(%ebp),%eax
08430d3c +0x3be:  mov    %eax,-0xd0(%ebp)
08430d42 +0x3c4:  mov    -0x7c(%ebp),%eax
08430d45 +0x3c7:  mov    %eax,-0xcc(%ebp)
08430d4b +0x3cd:  mov    -0x78(%ebp),%eax
08430d4e +0x3d0:  mov    %eax,-0xc8(%ebp)
08430d54 +0x3d6:  mov    -0x74(%ebp),%eax
08430d57 +0x3d9:  mov    %eax,-0xc4(%ebp)
08430d5d +0x3df:  jmp    08430d69 <+0x3eb>
08430d5f +0x3e1:  mov    $0x0,%eax
08430d64 +0x3e6:  jmp    084317a7 <+0xe29>
08430d69 +0x3eb:  addl   $0x1,-0x28(%ebp)
08430d6d +0x3ef:  mov    -0x28(%ebp),%eax
08430d70 +0x3f2:  cmp    -0x2c(%ebp),%eax
08430d73 +0x3f5:  setl   %al
08430d76 +0x3f8:  test   %al,%al
08430d78 +0x3fa:  jne    08430afa <+0x17c>
08430d7e +0x400:  jmp    08430d81 <+0x403>
08430d80 +0x402:  nop
08430d81 +0x403:  mov    -0x34(%ebp),%eax
08430d84 +0x406:  mov    0xa(%eax),%edx
08430d87 +0x409:  mov    -0x34(%ebp),%eax
08430d8a +0x40c:  movzbl 0xe(%eax),%eax
08430d8e +0x410:  movzbl %al,%eax
08430d91 +0x413:  mov    %edx,0xc(%esp)
08430d95 +0x417:  mov    %eax,0x8(%esp)
08430d99 +0x41b:  lea    -0x108(%ebp),%eax
08430d9f +0x421:  add    $0x40,%eax
08430da2 +0x424:  mov    %eax,0x4(%esp)
08430da6 +0x428:  lea    -0x108(%ebp),%eax
08430dac +0x42e:  add    $0x1c,%eax
08430daf +0x431:  mov    %eax,(%esp)
08430db2 +0x434:  call   0844dca1 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8b7>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8b7
08430db7 +0x439:  movl   $0x0,-0x24(%ebp)
08430dbe +0x440:  jmp    084312cc <+0x94e>
08430dc3 +0x445:  mov    -0x24(%ebp),%edx
08430dc6 +0x448:  mov    -0x24(%ebp),%ecx
08430dc9 +0x44b:  mov    %ecx,%eax
08430dcb +0x44d:  shl    $0x3,%eax
08430dce +0x450:  add    %ecx,%eax
08430dd0 +0x452:  shl    $0x2,%eax
08430dd3 +0x455:  lea    -0x18(%ebp),%ecx
08430dd6 +0x458:  lea    (%ecx,%eax,1),%eax
08430dd9 +0x45b:  sub    $0xd4,%eax
08430dde +0x460:  flds   (%eax)
08430de0 +0x462:  mov    -0x24(%ebp),%ecx
08430de3 +0x465:  mov    %ecx,%eax
08430de5 +0x467:  shl    $0x3,%eax
08430de8 +0x46a:  add    %ecx,%eax
08430dea +0x46c:  shl    $0x2,%eax
08430ded +0x46f:  lea    -0x18(%ebp),%ecx
08430df0 +0x472:  lea    (%ecx,%eax,1),%eax
08430df3 +0x475:  sub    $0xd0,%eax
08430df8 +0x47a:  flds   (%eax)
08430dfa +0x47c:  fsubrp %st,%st(1)
08430dfc +0x47e:  fnstcw -0x10a(%ebp)
08430e02 +0x484:  movzwl -0x10a(%ebp),%eax
08430e09 +0x48b:  mov    $0xc,%ah
08430e0b +0x48d:  mov    %ax,-0x10c(%ebp)
08430e12 +0x494:  fldcw  -0x10c(%ebp)
08430e18 +0x49a:  fistpl -0x110(%ebp)
08430e1e +0x4a0:  fldcw  -0x10a(%ebp)
08430e24 +0x4a6:  mov    -0x110(%ebp),%ecx
08430e2a +0x4ac:  mov    %edx,%eax
08430e2c +0x4ae:  shl    $0x3,%eax
08430e2f +0x4b1:  add    %edx,%eax
08430e31 +0x4b3:  shl    $0x2,%eax
08430e34 +0x4b6:  lea    -0x18(%ebp),%edx
08430e37 +0x4b9:  lea    (%edx,%eax,1),%eax
08430e3a +0x4bc:  sub    $0xe4,%eax
08430e3f +0x4c1:  mov    %ecx,(%eax)
08430e41 +0x4c3:  mov    -0x24(%ebp),%edx
08430e44 +0x4c6:  mov    %edx,%eax
08430e46 +0x4c8:  shl    $0x3,%eax
08430e49 +0x4cb:  add    %edx,%eax
08430e4b +0x4cd:  shl    $0x2,%eax
08430e4e +0x4d0:  lea    -0x18(%ebp),%ecx
08430e51 +0x4d3:  lea    (%ecx,%eax,1),%eax
08430e54 +0x4d6:  sub    $0xe8,%eax
08430e59 +0x4db:  mov    (%eax),%eax
08430e5b +0x4dd:  sub    -0x40(%ebp),%eax
08430e5e +0x4e0:  test   %eax,%eax
08430e60 +0x4e2:  jg     08430fa9 <+0x62b>
08430e66 +0x4e8:  mov    -0x24(%ebp),%edx
08430e69 +0x4eb:  mov    %edx,%eax
08430e6b +0x4ed:  shl    $0x3,%eax
08430e6e +0x4f0:  add    %edx,%eax
08430e70 +0x4f2:  shl    $0x2,%eax
08430e73 +0x4f5:  lea    -0x18(%ebp),%edx
08430e76 +0x4f8:  lea    (%edx,%eax,1),%eax
08430e79 +0x4fb:  sub    $0xe8,%eax
08430e7e +0x500:  mov    (%eax),%eax
08430e80 +0x502:  sub    -0x3c(%ebp),%eax
08430e83 +0x505:  test   %eax,%eax
08430e85 +0x507:  jle    08430f31 <+0x5b3>
08430e8b +0x50d:  mov    -0x24(%ebp),%edx
08430e8e +0x510:  mov    -0x24(%ebp),%ecx
08430e91 +0x513:  mov    %ecx,%eax
08430e93 +0x515:  shl    $0x3,%eax
08430e96 +0x518:  add    %ecx,%eax
08430e98 +0x51a:  shl    $0x2,%eax
08430e9b +0x51d:  lea    -0x18(%ebp),%ecx
08430e9e +0x520:  lea    (%ecx,%eax,1),%eax
08430ea1 +0x523:  sub    $0xec,%eax
08430ea6 +0x528:  mov    (%eax),%ecx
08430ea8 +0x52a:  mov    %edx,%eax
08430eaa +0x52c:  shl    $0x3,%eax
08430ead +0x52f:  add    %edx,%eax
08430eaf +0x531:  shl    $0x2,%eax
08430eb2 +0x534:  lea    -0x18(%ebp),%edx
08430eb5 +0x537:  lea    (%edx,%eax,1),%eax
08430eb8 +0x53a:  sub    $0xd8,%eax
08430ebd +0x53f:  mov    %ecx,(%eax)
08430ebf +0x541:  mov    -0x24(%ebp),%edx
08430ec2 +0x544:  mov    -0x24(%ebp),%ecx
08430ec5 +0x547:  mov    %ecx,%eax
08430ec7 +0x549:  shl    $0x3,%eax
08430eca +0x54c:  add    %ecx,%eax
08430ecc +0x54e:  shl    $0x2,%eax
08430ecf +0x551:  lea    -0x18(%ebp),%ecx
08430ed2 +0x554:  lea    (%ecx,%eax,1),%eax
08430ed5 +0x557:  sub    $0xe0,%eax
08430eda +0x55c:  mov    (%eax),%ecx
08430edc +0x55e:  mov    %edx,%eax
08430ede +0x560:  shl    $0x3,%eax
08430ee1 +0x563:  add    %edx,%eax
08430ee3 +0x565:  shl    $0x2,%eax
08430ee6 +0x568:  lea    -0x18(%ebp),%edx
08430ee9 +0x56b:  lea    (%edx,%eax,1),%eax
08430eec +0x56e:  sub    $0xdc,%eax
08430ef1 +0x573:  mov    %ecx,(%eax)
08430ef3 +0x575:  mov    -0x24(%ebp),%edx
08430ef6 +0x578:  mov    %edx,%eax
08430ef8 +0x57a:  shl    $0x3,%eax
08430efb +0x57d:  add    %edx,%eax
08430efd +0x57f:  shl    $0x2,%eax
08430f00 +0x582:  lea    -0x18(%ebp),%ecx
08430f03 +0x585:  lea    (%ecx,%eax,1),%eax
08430f06 +0x588:  sub    $0xec,%eax
08430f0b +0x58d:  movl   $0x0,(%eax)
08430f11 +0x593:  mov    -0x24(%ebp),%edx
08430f14 +0x596:  mov    %edx,%eax
08430f16 +0x598:  shl    $0x3,%eax
08430f19 +0x59b:  add    %edx,%eax
08430f1b +0x59d:  shl    $0x2,%eax
08430f1e +0x5a0:  lea    -0x18(%ebp),%edx
08430f21 +0x5a3:  lea    (%edx,%eax,1),%eax
08430f24 +0x5a6:  sub    $0xe0,%eax
08430f29 +0x5ab:  movl   $0x0,(%eax)
08430f2f +0x5b1:  jmp    08430fa9 <+0x62b>
08430f31 +0x5b3:  mov    -0x24(%ebp),%edx
08430f34 +0x5b6:  mov    %edx,%eax
08430f36 +0x5b8:  shl    $0x3,%eax
08430f39 +0x5bb:  add    %edx,%eax
08430f3b +0x5bd:  shl    $0x2,%eax
08430f3e +0x5c0:  lea    -0x18(%ebp),%ecx
08430f41 +0x5c3:  lea    (%ecx,%eax,1),%eax
08430f44 +0x5c6:  sub    $0xd8,%eax
08430f49 +0x5cb:  movl   $0x0,(%eax)
08430f4f +0x5d1:  mov    -0x24(%ebp),%edx
08430f52 +0x5d4:  mov    %edx,%eax
08430f54 +0x5d6:  shl    $0x3,%eax
08430f57 +0x5d9:  add    %edx,%eax
08430f59 +0x5db:  shl    $0x2,%eax
08430f5c +0x5de:  lea    -0x18(%ebp),%edx
08430f5f +0x5e1:  lea    (%edx,%eax,1),%eax
08430f62 +0x5e4:  sub    $0xdc,%eax
08430f67 +0x5e9:  movl   $0x0,(%eax)
08430f6d +0x5ef:  mov    -0x24(%ebp),%edx
08430f70 +0x5f2:  mov    %edx,%eax
08430f72 +0x5f4:  shl    $0x3,%eax
08430f75 +0x5f7:  add    %edx,%eax
08430f77 +0x5f9:  shl    $0x2,%eax
08430f7a +0x5fc:  lea    -0x18(%ebp),%ecx
08430f7d +0x5ff:  lea    (%ecx,%eax,1),%eax
08430f80 +0x602:  sub    $0xec,%eax
08430f85 +0x607:  movl   $0x0,(%eax)
08430f8b +0x60d:  mov    -0x24(%ebp),%edx
08430f8e +0x610:  mov    %edx,%eax
08430f90 +0x612:  shl    $0x3,%eax
08430f93 +0x615:  add    %edx,%eax
08430f95 +0x617:  shl    $0x2,%eax
08430f98 +0x61a:  lea    -0x18(%ebp),%edx
08430f9b +0x61d:  lea    (%edx,%eax,1),%eax
08430f9e +0x620:  sub    $0xe0,%eax
08430fa3 +0x625:  movl   $0x0,(%eax)
08430fa9 +0x62b:  mov    -0x24(%ebp),%edx
08430fac +0x62e:  mov    %edx,%eax
08430fae +0x630:  shl    $0x3,%eax
08430fb1 +0x633:  add    %edx,%eax
08430fb3 +0x635:  shl    $0x2,%eax
08430fb6 +0x638:  lea    -0x18(%ebp),%ecx
08430fb9 +0x63b:  lea    (%ecx,%eax,1),%eax
08430fbc +0x63e:  sub    $0xec,%eax
08430fc1 +0x643:  mov    (%eax),%eax
08430fc3 +0x645:  lea    0x1(%eax),%ecx
08430fc6 +0x648:  mov    %edx,%eax
08430fc8 +0x64a:  shl    $0x3,%eax
08430fcb +0x64d:  add    %edx,%eax
08430fcd +0x64f:  shl    $0x2,%eax
08430fd0 +0x652:  lea    -0x18(%ebp),%edx
08430fd3 +0x655:  lea    (%edx,%eax,1),%eax
08430fd6 +0x658:  sub    $0xec,%eax
08430fdb +0x65d:  mov    %ecx,(%eax)
08430fdd +0x65f:  mov    -0x24(%ebp),%edx
08430fe0 +0x662:  mov    %edx,%eax
08430fe2 +0x664:  shl    $0x3,%eax
08430fe5 +0x667:  add    %edx,%eax
08430fe7 +0x669:  shl    $0x2,%eax
08430fea +0x66c:  lea    -0x18(%ebp),%ecx
08430fed +0x66f:  lea    (%ecx,%eax,1),%eax
08430ff0 +0x672:  sub    $0xec,%eax
08430ff5 +0x677:  mov    (%eax),%edx
08430ff7 +0x679:  mov    &_ZN28PvPGlobalEnvironmentVariable40school_match_fight_count_for_gain_point_E,%eax
08430ffc +0x67e:  cmp    %eax,%edx
08430ffe +0x680:  jne    08431022 <+0x6a4>
08431000 +0x682:  mov    -0x24(%ebp),%edx
08431003 +0x685:  mov    &_ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E,%ecx
08431009 +0x68b:  mov    %edx,%eax
0843100b +0x68d:  shl    $0x3,%eax
0843100e +0x690:  add    %edx,%eax
08431010 +0x692:  shl    $0x2,%eax
08431013 +0x695:  lea    -0x18(%ebp),%edx
08431016 +0x698:  lea    (%edx,%eax,1),%eax
08431019 +0x69b:  sub    $0xe0,%eax
0843101e +0x6a0:  mov    %ecx,(%eax)
08431020 +0x6a2:  jmp    084310a1 <+0x723>
08431022 +0x6a4:  mov    -0x24(%ebp),%edx
08431025 +0x6a7:  mov    %edx,%eax
08431027 +0x6a9:  shl    $0x3,%eax
0843102a +0x6ac:  add    %edx,%eax
0843102c +0x6ae:  shl    $0x2,%eax
0843102f +0x6b1:  lea    -0x18(%ebp),%ecx
08431032 +0x6b4:  lea    (%ecx,%eax,1),%eax
08431035 +0x6b7:  sub    $0xec,%eax
0843103a +0x6bc:  mov    (%eax),%eax
0843103c +0x6be:  cmp    $0xf,%eax
0843103f +0x6c1:  jne    084310a1 <+0x723>
08431041 +0x6c3:  cmpl   $0x0,-0x48(%ebp)
08431045 +0x6c7:  je     0843104d <+0x6cf>
08431047 +0x6c9:  cmpl   $0x6,-0x48(%ebp)
0843104b +0x6cd:  jne    0843106d <+0x6ef>
0843104d +0x6cf:  mov    -0x24(%ebp),%edx
08431050 +0x6d2:  mov    &_ZN28PvPGlobalEnvironmentVariable34school_match_daily_point_weekends_E,%ecx
08431056 +0x6d8:  mov    %edx,%eax
08431058 +0x6da:  shl    $0x3,%eax
0843105b +0x6dd:  add    %edx,%eax
0843105d +0x6df:  shl    $0x2,%eax
08431060 +0x6e2:  lea    -0x18(%ebp),%edx
08431063 +0x6e5:  lea    (%edx,%eax,1),%eax
08431066 +0x6e8:  sub    $0xe0,%eax
0843106b +0x6ed:  mov    %ecx,(%eax)
0843106d +0x6ef:  mov    -0x70(%ebp),%eax
08431070 +0x6f2:  cmp    $0x48f26550,%eax
08431075 +0x6f7:  jle    084310a1 <+0x723>
08431077 +0x6f9:  mov    -0x70(%ebp),%eax
0843107a +0x6fc:  cmp    $0x48f8fccf,%eax
0843107f +0x701:  jg     084310a1 <+0x723>
08431081 +0x703:  mov    -0x24(%ebp),%edx
08431084 +0x706:  mov    &_ZN28PvPGlobalEnvironmentVariable34school_match_daily_point_weekends_E,%ecx
0843108a +0x70c:  mov    %edx,%eax
0843108c +0x70e:  shl    $0x3,%eax
0843108f +0x711:  add    %edx,%eax
08431091 +0x713:  shl    $0x2,%eax
08431094 +0x716:  lea    -0x18(%ebp),%edx
08431097 +0x719:  lea    (%edx,%eax,1),%eax
0843109a +0x71c:  sub    $0xe0,%eax
0843109f +0x721:  mov    %ecx,(%eax)
084310a1 +0x723:  mov    -0x24(%ebp),%eax
084310a4 +0x726:  mov    -0x30(%ebp),%ebx
084310a7 +0x729:  mov    -0x34(%ebp),%ecx
084310aa +0x72c:  add    %eax,%eax
084310ac +0x72e:  lea    0x0(,%eax,8),%edx
084310b3 +0x735:  sub    %eax,%edx
084310b5 +0x737:  lea    (%edx,%ebx,1),%eax
084310b8 +0x73a:  add    $0x8,%eax
084310bb +0x73d:  mov    0x8(%ecx,%eax,4),%eax
084310bf +0x741:  mov    %eax,-0x14c(%ebp)
084310c5 +0x747:  mov    -0x70(%ebp),%edi
084310c8 +0x74a:  mov    -0x24(%ebp),%edx
084310cb +0x74d:  mov    %edx,%eax
084310cd +0x74f:  shl    $0x3,%eax
084310d0 +0x752:  add    %edx,%eax
084310d2 +0x754:  shl    $0x2,%eax
084310d5 +0x757:  lea    -0x18(%ebp),%ecx
084310d8 +0x75a:  lea    (%ecx,%eax,1),%eax
084310db +0x75d:  sub    $0xd4,%eax
084310e0 +0x762:  flds   (%eax)
084310e2 +0x764:  mov    -0x24(%ebp),%edx
084310e5 +0x767:  mov    %edx,%eax
084310e7 +0x769:  shl    $0x3,%eax
084310ea +0x76c:  add    %edx,%eax
084310ec +0x76e:  shl    $0x2,%eax
084310ef +0x771:  lea    -0x18(%ebp),%edx
084310f2 +0x774:  lea    (%edx,%eax,1),%eax
084310f5 +0x777:  sub    $0xdc,%eax
084310fa +0x77c:  mov    (%eax),%esi
084310fc +0x77e:  mov    -0x24(%ebp),%edx
084310ff +0x781:  mov    %edx,%eax
08431101 +0x783:  shl    $0x3,%eax
08431104 +0x786:  add    %edx,%eax
08431106 +0x788:  shl    $0x2,%eax
08431109 +0x78b:  lea    -0x18(%ebp),%ecx
0843110c +0x78e:  lea    (%ecx,%eax,1),%eax
0843110f +0x791:  sub    $0xd8,%eax
08431114 +0x796:  mov    (%eax),%ebx
08431116 +0x798:  mov    -0x24(%ebp),%edx
08431119 +0x79b:  mov    %edx,%eax
0843111b +0x79d:  shl    $0x3,%eax
0843111e +0x7a0:  add    %edx,%eax
08431120 +0x7a2:  shl    $0x2,%eax
08431123 +0x7a5:  lea    -0x18(%ebp),%edx
08431126 +0x7a8:  lea    (%edx,%eax,1),%eax
08431129 +0x7ab:  sub    $0xe0,%eax
0843112e +0x7b0:  mov    (%eax),%ecx
08431130 +0x7b2:  mov    -0x24(%ebp),%edx
08431133 +0x7b5:  mov    %edx,%eax
08431135 +0x7b7:  shl    $0x3,%eax
08431138 +0x7ba:  add    %edx,%eax
0843113a +0x7bc:  shl    $0x2,%eax
0843113d +0x7bf:  lea    -0x18(%ebp),%edx
08431140 +0x7c2:  lea    (%edx,%eax,1),%eax
08431143 +0x7c5:  sub    $0xec,%eax
08431148 +0x7ca:  mov    (%eax),%eax
0843114a +0x7cc:  mov    -0x14c(%ebp),%edx
08431150 +0x7d2:  mov    %edx,0x24(%esp)
08431154 +0x7d6:  mov    %edi,0x20(%esp)
08431158 +0x7da:  fstpl  0x18(%esp)
0843115c +0x7de:  mov    %esi,0x14(%esp)
08431160 +0x7e2:  mov    %ebx,0x10(%esp)
08431164 +0x7e6:  mov    %ecx,0xc(%esp)
08431168 +0x7ea:  mov    %eax,0x8(%esp)
0843116c +0x7ee:  movl   $"upDate school_info set fight_cnt=%d,school_point=%d, fight_cnt_prev=%d, school_point_prev=%d, rating=%f, last_update_time=from_unixtime(%d) where school_id=%d",0x4(%esp)
08431174 +0x7f6:  mov    -0x38(%ebp),%eax
08431177 +0x7f9:  mov    %eax,(%esp)
0843117a +0x7fc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843117f +0x801:  movl   $0x1,0x4(%esp)
08431187 +0x809:  mov    -0x38(%ebp),%eax
0843118a +0x80c:  mov    %eax,(%esp)
0843118d +0x80f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08431192 +0x814:  xor    $0x1,%eax
08431195 +0x817:  test   %al,%al
08431197 +0x819:  je     084311a3 <+0x825>
08431199 +0x81b:  mov    $0x0,%eax
0843119e +0x820:  jmp    084317a7 <+0xe29>
084311a3 +0x825:  mov    -0x24(%ebp),%eax
084311a6 +0x828:  mov    -0x30(%ebp),%ebx
084311a9 +0x82b:  mov    -0x34(%ebp),%ecx
084311ac +0x82e:  add    %eax,%eax
084311ae +0x830:  lea    0x0(,%eax,8),%edx
084311b5 +0x837:  sub    %eax,%edx
084311b7 +0x839:  lea    (%edx,%ebx,1),%eax
084311ba +0x83c:  add    $0x8,%eax
084311bd +0x83f:  mov    0x8(%ecx,%eax,4),%eax
084311c1 +0x843:  mov    %eax,-0x148(%ebp)
084311c7 +0x849:  mov    -0x70(%ebp),%ecx
084311ca +0x84c:  mov    %ecx,-0x144(%ebp)
084311d0 +0x852:  mov    -0x24(%ebp),%edx
084311d3 +0x855:  mov    %edx,%eax
084311d5 +0x857:  shl    $0x3,%eax
084311d8 +0x85a:  add    %edx,%eax
084311da +0x85c:  shl    $0x2,%eax
084311dd +0x85f:  lea    -0x18(%ebp),%edx
084311e0 +0x862:  lea    (%edx,%eax,1),%eax
084311e3 +0x865:  sub    $0xd4,%eax
084311e8 +0x86a:  flds   (%eax)
084311ea +0x86c:  fstpl  -0x140(%ebp)
084311f0 +0x872:  mov    -0x24(%ebp),%edx
084311f3 +0x875:  mov    %edx,%eax
084311f5 +0x877:  shl    $0x3,%eax
084311f8 +0x87a:  add    %edx,%eax
084311fa +0x87c:  shl    $0x2,%eax
084311fd +0x87f:  lea    -0x18(%ebp),%ecx
08431200 +0x882:  lea    (%ecx,%eax,1),%eax
08431203 +0x885:  sub    $0xdc,%eax
08431208 +0x88a:  mov    (%eax),%eax
0843120a +0x88c:  mov    %eax,-0x138(%ebp)
08431210 +0x892:  mov    -0x24(%ebp),%edx
08431213 +0x895:  mov    %edx,%eax
08431215 +0x897:  shl    $0x3,%eax
08431218 +0x89a:  add    %edx,%eax
0843121a +0x89c:  shl    $0x2,%eax
0843121d +0x89f:  lea    -0x18(%ebp),%edx
08431220 +0x8a2:  lea    (%edx,%eax,1),%eax
08431223 +0x8a5:  sub    $0xd8,%eax
08431228 +0x8aa:  mov    (%eax),%edi
0843122a +0x8ac:  mov    -0x24(%ebp),%edx
0843122d +0x8af:  mov    %edx,%eax
0843122f +0x8b1:  shl    $0x3,%eax
08431232 +0x8b4:  add    %edx,%eax
08431234 +0x8b6:  shl    $0x2,%eax
08431237 +0x8b9:  lea    -0x18(%ebp),%ecx
0843123a +0x8bc:  lea    (%ecx,%eax,1),%eax
0843123d +0x8bf:  sub    $0xe0,%eax
08431242 +0x8c4:  mov    (%eax),%esi
08431244 +0x8c6:  mov    -0x24(%ebp),%edx
08431247 +0x8c9:  mov    %edx,%eax
08431249 +0x8cb:  shl    $0x3,%eax
0843124c +0x8ce:  add    %edx,%eax
0843124e +0x8d0:  shl    $0x2,%eax
08431251 +0x8d3:  lea    -0x18(%ebp),%edx
08431254 +0x8d6:  lea    (%edx,%eax,1),%eax
08431257 +0x8d9:  sub    $0xec,%eax
0843125c +0x8de:  mov    (%eax),%ebx
0843125e +0x8e0:  movl   $0x5,0xc(%esp)
08431266 +0x8e8:  movl   $0x7867,0x8(%esp)
0843126e +0x8f0:  movl   $&_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08431276 +0x8f8:  lea    -0x6c(%ebp),%eax
08431279 +0x8fb:  mov    %eax,(%esp)
0843127c +0x8fe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08431281 +0x903:  mov    -0x148(%ebp),%ecx
08431287 +0x909:  mov    %ecx,0x24(%esp)
0843128b +0x90d:  mov    -0x144(%ebp),%eax
08431291 +0x913:  mov    %eax,0x20(%esp)
08431295 +0x917:  fldl   -0x140(%ebp)
0843129b +0x91d:  fstpl  0x18(%esp)
0843129f +0x921:  mov    -0x138(%ebp),%eax
084312a5 +0x927:  mov    %eax,0x14(%esp)
084312a9 +0x92b:  mov    %edi,0x10(%esp)
084312ad +0x92f:  mov    %esi,0xc(%esp)
084312b1 +0x933:  mov    %ebx,0x8(%esp)
084312b5 +0x937:  movl   $"fight_cnt=%d,school_point=%d, fight_cnt_prev=%d, school_point_prev=%d, rating=%f, last_update_time=%d, school_id=%d",0x4(%esp)
084312bd +0x93f:  lea    -0x6c(%ebp),%eax
084312c0 +0x942:  mov    %eax,(%esp)
084312c3 +0x945:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084312c8 +0x94a:  addl   $0x1,-0x24(%ebp)
084312cc +0x94e:  cmpl   $0x1,-0x24(%ebp)
084312d0 +0x952:  setle  %al
084312d3 +0x955:  test   %al,%al
084312d5 +0x957:  jne    08430dc3 <+0x445>
084312db +0x95d:  addl   $0x1,-0x30(%ebp)
084312df +0x961:  mov    -0x34(%ebp),%eax
084312e2 +0x964:  movzbl 0xf(%eax),%eax
084312e6 +0x968:  movzbl %al,%eax
084312e9 +0x96b:  cmp    -0x30(%ebp),%eax
084312ec +0x96e:  setg   %al
084312ef +0x971:  test   %al,%al
084312f1 +0x973:  jne    08430a77 <+0xf9>
084312f7 +0x979:  movl   $0x0,-0x20(%ebp)
084312fe +0x980:  jmp    0843178a <+0xe0c>
08431303 +0x985:  movl   $0x0,-0x1c(%ebp)
0843130a +0x98c:  jmp    08431777 <+0xdf9>
0843130f +0x991:  mov    -0x1c(%ebp),%ecx
08431312 +0x994:  mov    -0x20(%ebp),%edx
08431315 +0x997:  mov    -0x34(%ebp),%ebx
08431318 +0x99a:  mov    %edx,%eax
0843131a +0x99c:  add    %eax,%eax
0843131c +0x99e:  add    %edx,%eax
0843131e +0x9a0:  mov    %ecx,%edx
08431320 +0x9a2:  shl    $0x3,%edx
08431323 +0x9a5:  lea    0x0(,%edx,8),%ecx
0843132a +0x9ac:  sub    %edx,%ecx
0843132c +0x9ae:  add    %ecx,%eax
0843132e +0x9b0:  lea    (%ebx,%eax,1),%eax
08431331 +0x9b3:  add    $0x1d,%eax
08431334 +0x9b6:  movzbl (%eax),%eax
08431337 +0x9b9:  test   %al,%al
08431339 +0x9bb:  jne    08431367 <+0x9e9>
0843133b +0x9bd:  mov    -0x1c(%ebp),%ecx
0843133e +0x9c0:  mov    -0x20(%ebp),%edx
08431341 +0x9c3:  mov    -0x34(%ebp),%ebx
08431344 +0x9c6:  mov    %edx,%eax
08431346 +0x9c8:  add    %eax,%eax
08431348 +0x9ca:  add    %edx,%eax
0843134a +0x9cc:  mov    %ecx,%edx
0843134c +0x9ce:  shl    $0x3,%edx
0843134f +0x9d1:  lea    0x0(,%edx,8),%ecx
08431356 +0x9d8:  sub    %edx,%ecx
08431358 +0x9da:  add    %ecx,%eax
0843135a +0x9dc:  lea    (%ebx,%eax,1),%eax
0843135d +0x9df:  add    $0x1e,%eax
08431360 +0x9e2:  movzbl (%eax),%eax
08431363 +0x9e5:  test   %al,%al
08431365 +0x9e7:  je     084313b3 <+0xa35>
08431367 +0x9e9:  mov    -0x1c(%ebp),%esi
0843136a +0x9ec:  mov    -0x20(%ebp),%ecx
0843136d +0x9ef:  mov    -0x34(%ebp),%edi
08431370 +0x9f2:  mov    %ecx,%eax
08431372 +0x9f4:  add    %eax,%eax
08431374 +0x9f6:  add    %ecx,%eax
08431376 +0x9f8:  mov    %esi,%edx
08431378 +0x9fa:  shl    $0x3,%edx
0843137b +0x9fd:  lea    0x0(,%edx,8),%ebx
08431382 +0xa04:  sub    %edx,%ebx
08431384 +0xa06:  add    %ebx,%eax
08431386 +0xa08:  lea    (%edi,%eax,1),%eax
08431389 +0xa0b:  add    $0x1c,%eax
0843138c +0xa0e:  movzbl (%eax),%eax
0843138f +0xa11:  lea    0x1(%eax),%ebx
08431392 +0xa14:  mov    -0x34(%ebp),%edi
08431395 +0xa17:  mov    %ecx,%eax
08431397 +0xa19:  add    %eax,%eax
08431399 +0xa1b:  add    %ecx,%eax
0843139b +0xa1d:  mov    %esi,%edx
0843139d +0xa1f:  shl    $0x3,%edx
084313a0 +0xa22:  lea    0x0(,%edx,8),%ecx
084313a7 +0xa29:  sub    %edx,%ecx
084313a9 +0xa2b:  add    %ecx,%eax
084313ab +0xa2d:  lea    (%edi,%eax,1),%eax
084313ae +0xa30:  add    $0x1c,%eax
084313b1 +0xa33:  mov    %bl,(%eax)
084313b3 +0xa35:  mov    -0x1c(%ebp),%ecx
084313b6 +0xa38:  mov    -0x20(%ebp),%edx
084313b9 +0xa3b:  mov    -0x34(%ebp),%ebx
084313bc +0xa3e:  mov    %edx,%eax
084313be +0xa40:  add    %eax,%eax
084313c0 +0xa42:  add    %edx,%eax
084313c2 +0xa44:  mov    %ecx,%edx
084313c4 +0xa46:  shl    $0x3,%edx
084313c7 +0xa49:  lea    0x0(,%edx,8),%ecx
084313ce +0xa50:  sub    %edx,%ecx
084313d0 +0xa52:  add    %ecx,%eax
084313d2 +0xa54:  lea    (%ebx,%eax,1),%eax
084313d5 +0xa57:  add    $0x12,%eax
084313d8 +0xa5a:  movzbl (%eax),%eax
084313db +0xa5d:  movzbl %al,%eax
084313de +0xa60:  mov    %eax,-0x134(%ebp)
084313e4 +0xa66:  mov    -0x1c(%ebp),%ecx
084313e7 +0xa69:  mov    -0x20(%ebp),%edx
084313ea +0xa6c:  mov    -0x34(%ebp),%ebx
084313ed +0xa6f:  mov    %edx,%eax
084313ef +0xa71:  add    %eax,%eax
084313f1 +0xa73:  add    %edx,%eax
084313f3 +0xa75:  mov    %ecx,%edx
084313f5 +0xa77:  shl    $0x3,%edx
084313f8 +0xa7a:  lea    0x0(,%edx,8),%ecx
084313ff +0xa81:  sub    %edx,%ecx
08431401 +0xa83:  add    %ecx,%eax
08431403 +0xa85:  lea    (%ebx,%eax,1),%eax
08431406 +0xa88:  add    $0x11,%eax
08431409 +0xa8b:  movzbl (%eax),%eax
0843140c +0xa8e:  movzbl %al,%eax
0843140f +0xa91:  mov    %eax,-0x130(%ebp)
08431415 +0xa97:  mov    -0x1c(%ebp),%ecx
08431418 +0xa9a:  mov    -0x20(%ebp),%edx
0843141b +0xa9d:  mov    -0x34(%ebp),%ebx
0843141e +0xaa0:  mov    %edx,%eax
08431420 +0xaa2:  add    %eax,%eax
08431422 +0xaa4:  add    %edx,%eax
08431424 +0xaa6:  mov    %ecx,%edx
08431426 +0xaa8:  shl    $0x3,%edx
08431429 +0xaab:  lea    0x0(,%edx,8),%ecx
08431430 +0xab2:  sub    %edx,%ecx
08431432 +0xab4:  add    %ecx,%eax
08431434 +0xab6:  lea    (%ebx,%eax,1),%eax
08431437 +0xab9:  add    $0x10,%eax
0843143a +0xabc:  movzbl (%eax),%eax
0843143d +0xabf:  movzbl %al,%eax
08431440 +0xac2:  mov    %eax,-0x12c(%ebp)
08431446 +0xac8:  mov    -0x1c(%ebp),%edx
08431449 +0xacb:  mov    -0x20(%ebp),%eax
0843144c +0xace:  mov    -0x34(%ebp),%ebx
0843144f +0xad1:  mov    %eax,%ecx
08431451 +0xad3:  add    %ecx,%ecx
08431453 +0xad5:  add    %eax,%ecx
08431455 +0xad7:  mov    %edx,%eax
08431457 +0xad9:  shl    $0x3,%eax
0843145a +0xadc:  lea    0x0(,%eax,8),%edx
08431461 +0xae3:  sub    %eax,%edx
08431463 +0xae5:  lea    (%ecx,%edx,1),%eax
08431466 +0xae8:  lea    (%ebx,%eax,1),%eax
08431469 +0xaeb:  add    $0x1e,%eax
0843146c +0xaee:  movzbl (%eax),%eax
0843146f +0xaf1:  movzbl %al,%eax
08431472 +0xaf4:  mov    %eax,-0x128(%ebp)
08431478 +0xafa:  mov    -0x1c(%ebp),%edx
0843147b +0xafd:  mov    -0x20(%ebp),%eax
0843147e +0xb00:  mov    -0x34(%ebp),%ebx
08431481 +0xb03:  mov    %eax,%ecx
08431483 +0xb05:  add    %ecx,%ecx
08431485 +0xb07:  add    %eax,%ecx
08431487 +0xb09:  lea    0x0(,%edx,8),%eax
0843148e +0xb10:  mov    %eax,%edx
08431490 +0xb12:  lea    0x0(,%edx,8),%eax
08431497 +0xb19:  sub    %edx,%eax
08431499 +0xb1b:  lea    (%ecx,%eax,1),%eax
0843149c +0xb1e:  lea    (%ebx,%eax,1),%eax
0843149f +0xb21:  add    $0x1d,%eax
084314a2 +0xb24:  movzbl (%eax),%eax
084314a5 +0xb27:  movzbl %al,%edi
084314a8 +0xb2a:  mov    -0x1c(%ebp),%edx
084314ab +0xb2d:  mov    -0x20(%ebp),%eax
084314ae +0xb30:  mov    -0x34(%ebp),%ebx
084314b1 +0xb33:  mov    %eax,%ecx
084314b3 +0xb35:  add    %ecx,%ecx
084314b5 +0xb37:  add    %eax,%ecx
084314b7 +0xb39:  mov    %edx,%eax
084314b9 +0xb3b:  shl    $0x3,%eax
084314bc +0xb3e:  lea    0x0(,%eax,8),%edx
084314c3 +0xb45:  sub    %eax,%edx
084314c5 +0xb47:  lea    (%ecx,%edx,1),%eax
084314c8 +0xb4a:  lea    (%ebx,%eax,1),%eax
084314cb +0xb4d:  add    $0x1c,%eax
084314ce +0xb50:  movzbl (%eax),%eax
084314d1 +0xb53:  movzbl %al,%esi
084314d4 +0xb56:  mov    -0x1c(%ebp),%eax
084314d7 +0xb59:  mov    -0x20(%ebp),%ebx
084314da +0xb5c:  mov    -0x34(%ebp),%ecx
084314dd +0xb5f:  add    %eax,%eax
084314df +0xb61:  lea    0x0(,%eax,8),%edx
084314e6 +0xb68:  sub    %eax,%edx
084314e8 +0xb6a:  lea    (%edx,%ebx,1),%eax
084314eb +0xb6d:  add    $0xc,%eax
084314ee +0xb70:  mov    0x8(%ecx,%eax,4),%eax
084314f2 +0xb74:  movl   $0x0,0x4(%esp)
084314fa +0xb7c:  mov    %eax,(%esp)
084314fd +0xb7f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08431502 +0xb84:  mov    %eax,%ebx
08431504 +0xb86:  movl   $0x0,0xc(%esp)
0843150c +0xb8e:  movl   $0x7881,0x8(%esp)
08431514 +0xb96:  movl   $&_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0843151c +0xb9e:  lea    -0x5c(%ebp),%eax
0843151f +0xba1:  mov    %eax,(%esp)
08431522 +0xba4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08431527 +0xba9:  mov    -0x134(%ebp),%edx
0843152d +0xbaf:  mov    %edx,0x20(%esp)
08431531 +0xbb3:  mov    -0x130(%ebp),%ecx
08431537 +0xbb9:  mov    %ecx,0x1c(%esp)
0843153b +0xbbd:  mov    -0x12c(%ebp),%eax
08431541 +0xbc3:  mov    %eax,0x18(%esp)
08431545 +0xbc7:  mov    -0x128(%ebp),%edx
0843154b +0xbcd:  mov    %edx,0x14(%esp)
0843154f +0xbd1:  mov    %edi,0x10(%esp)
08431553 +0xbd5:  mov    %esi,0xc(%esp)
08431557 +0xbd9:  mov    %ebx,0x8(%esp)
0843155b +0xbdd:  movl   $"BADGE_COUNT m_id(%s) badge green(%d), red(%d), blue(%d), daily badge green(%d), red(%d), blue(%d)",0x4(%esp)
08431563 +0xbe5:  lea    -0x5c(%ebp),%eax
08431566 +0xbe8:  mov    %eax,(%esp)
08431569 +0xbeb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843156e +0xbf0:  mov    -0x1c(%ebp),%eax
08431571 +0xbf3:  mov    -0x20(%ebp),%ebx
08431574 +0xbf6:  mov    -0x34(%ebp),%ecx
08431577 +0xbf9:  add    %eax,%eax
08431579 +0xbfb:  lea    0x0(,%eax,8),%edx
08431580 +0xc02:  sub    %eax,%edx
08431582 +0xc04:  lea    (%edx,%ebx,1),%eax
08431585 +0xc07:  add    $0x8,%eax
08431588 +0xc0a:  mov    0x8(%ecx,%eax,4),%eax
0843158c +0xc0e:  mov    %eax,-0x124(%ebp)
08431592 +0xc14:  mov    -0x1c(%ebp),%eax
08431595 +0xc17:  mov    -0x20(%ebp),%ebx
08431598 +0xc1a:  mov    -0x34(%ebp),%ecx
0843159b +0xc1d:  add    %eax,%eax
0843159d +0xc1f:  lea    0x0(,%eax,8),%edx
084315a4 +0xc26:  sub    %eax,%edx
084315a6 +0xc28:  lea    (%edx,%ebx,1),%eax
084315a9 +0xc2b:  add    $0xc,%eax
084315ac +0xc2e:  mov    0x8(%ecx,%eax,4),%eax
084315b0 +0xc32:  movl   $0x0,0x4(%esp)
084315b8 +0xc3a:  mov    %eax,(%esp)
084315bb +0xc3d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084315c0 +0xc42:  mov    %eax,-0x120(%ebp)
084315c6 +0xc48:  mov    -0x1c(%ebp),%ecx
084315c9 +0xc4b:  mov    -0x20(%ebp),%edx
084315cc +0xc4e:  mov    -0x34(%ebp),%ebx
084315cf +0xc51:  mov    %edx,%eax
084315d1 +0xc53:  add    %eax,%eax
084315d3 +0xc55:  add    %edx,%eax
084315d5 +0xc57:  mov    %ecx,%edx
084315d7 +0xc59:  shl    $0x3,%edx
084315da +0xc5c:  lea    0x0(,%edx,8),%ecx
084315e1 +0xc63:  sub    %edx,%ecx
084315e3 +0xc65:  add    %ecx,%eax
084315e5 +0xc67:  lea    (%ebx,%eax,1),%eax
084315e8 +0xc6a:  add    $0x12,%eax
084315eb +0xc6d:  movzbl (%eax),%eax
084315ee +0xc70:  movzbl %al,%eax
084315f1 +0xc73:  mov    %eax,-0x11c(%ebp)
084315f7 +0xc79:  mov    -0x1c(%ebp),%edx
084315fa +0xc7c:  mov    -0x20(%ebp),%eax
084315fd +0xc7f:  mov    -0x34(%ebp),%ebx
08431600 +0xc82:  mov    %eax,%ecx
08431602 +0xc84:  add    %ecx,%ecx
08431604 +0xc86:  add    %eax,%ecx
08431606 +0xc88:  mov    %edx,%eax
08431608 +0xc8a:  shl    $0x3,%eax
0843160b +0xc8d:  lea    0x0(,%eax,8),%edx
08431612 +0xc94:  sub    %eax,%edx
08431614 +0xc96:  lea    (%ecx,%edx,1),%eax
08431617 +0xc99:  lea    (%ebx,%eax,1),%eax
0843161a +0xc9c:  add    $0x11,%eax
0843161d +0xc9f:  movzbl (%eax),%eax
08431620 +0xca2:  movzbl %al,%eax
08431623 +0xca5:  mov    %eax,-0x118(%ebp)
08431629 +0xcab:  mov    -0x1c(%ebp),%edx
0843162c +0xcae:  mov    -0x20(%ebp),%eax
0843162f +0xcb1:  mov    -0x34(%ebp),%ebx
08431632 +0xcb4:  mov    %eax,%ecx
08431634 +0xcb6:  add    %ecx,%ecx
08431636 +0xcb8:  add    %eax,%ecx
08431638 +0xcba:  lea    0x0(,%edx,8),%eax
0843163f +0xcc1:  mov    %eax,%edx
08431641 +0xcc3:  lea    0x0(,%edx,8),%eax
08431648 +0xcca:  sub    %edx,%eax
0843164a +0xccc:  lea    (%ecx,%eax,1),%eax
0843164d +0xccf:  lea    (%ebx,%eax,1),%eax
08431650 +0xcd2:  add    $0x10,%eax
08431653 +0xcd5:  movzbl (%eax),%eax
08431656 +0xcd8:  movzbl %al,%eax
08431659 +0xcdb:  mov    %eax,-0x114(%ebp)
0843165f +0xce1:  mov    -0x1c(%ebp),%edx
08431662 +0xce4:  mov    -0x20(%ebp),%eax
08431665 +0xce7:  mov    -0x34(%ebp),%ebx
08431668 +0xcea:  mov    %eax,%ecx
0843166a +0xcec:  add    %ecx,%ecx
0843166c +0xcee:  add    %eax,%ecx
0843166e +0xcf0:  mov    %edx,%eax
08431670 +0xcf2:  shl    $0x3,%eax
08431673 +0xcf5:  lea    0x0(,%eax,8),%edx
0843167a +0xcfc:  sub    %eax,%edx
0843167c +0xcfe:  lea    (%ecx,%edx,1),%eax
0843167f +0xd01:  lea    (%ebx,%eax,1),%eax
08431682 +0xd04:  add    $0x1e,%eax
08431685 +0xd07:  movzbl (%eax),%eax
08431688 +0xd0a:  movzbl %al,%edi
0843168b +0xd0d:  mov    -0x1c(%ebp),%edx
0843168e +0xd10:  mov    -0x20(%ebp),%eax
08431691 +0xd13:  mov    -0x34(%ebp),%ebx
08431694 +0xd16:  mov    %eax,%ecx
08431696 +0xd18:  add    %ecx,%ecx
08431698 +0xd1a:  add    %eax,%ecx
0843169a +0xd1c:  mov    %edx,%eax
0843169c +0xd1e:  shl    $0x3,%eax
0843169f +0xd21:  lea    0x0(,%eax,8),%edx
084316a6 +0xd28:  sub    %eax,%edx
084316a8 +0xd2a:  lea    (%ecx,%edx,1),%eax
084316ab +0xd2d:  lea    (%ebx,%eax,1),%eax
084316ae +0xd30:  add    $0x1d,%eax
084316b1 +0xd33:  movzbl (%eax),%eax
084316b4 +0xd36:  movzbl %al,%esi
084316b7 +0xd39:  mov    -0x1c(%ebp),%edx
084316ba +0xd3c:  mov    -0x20(%ebp),%eax
084316bd +0xd3f:  mov    -0x34(%ebp),%ebx
084316c0 +0xd42:  mov    %eax,%ecx
084316c2 +0xd44:  add    %ecx,%ecx
084316c4 +0xd46:  add    %eax,%ecx
084316c6 +0xd48:  mov    %edx,%eax
084316c8 +0xd4a:  shl    $0x3,%eax
084316cb +0xd4d:  lea    0x0(,%eax,8),%edx
084316d2 +0xd54:  sub    %eax,%edx
084316d4 +0xd56:  lea    (%ecx,%edx,1),%eax
084316d7 +0xd59:  lea    (%ebx,%eax,1),%eax
084316da +0xd5c:  add    $0x1c,%eax
084316dd +0xd5f:  movzbl (%eax),%eax
084316e0 +0xd62:  movzbl %al,%ecx
084316e3 +0xd65:  mov    -0x1c(%ebp),%edx
084316e6 +0xd68:  mov    %edx,%eax
084316e8 +0xd6a:  shl    $0x3,%eax
084316eb +0xd6d:  add    %edx,%eax
084316ed +0xd6f:  shl    $0x2,%eax
084316f0 +0xd72:  lea    -0x18(%ebp),%edx
084316f3 +0xd75:  lea    (%edx,%eax,1),%eax
084316f6 +0xd78:  sub    $0xe4,%eax
084316fb +0xd7d:  mov    (%eax),%eax
084316fd +0xd7f:  mov    -0x124(%ebp),%edx
08431703 +0xd85:  mov    %edx,0x28(%esp)
08431707 +0xd89:  mov    -0x120(%ebp),%edx
0843170d +0xd8f:  mov    %edx,0x24(%esp)
08431711 +0xd93:  mov    -0x11c(%ebp),%edx
08431717 +0xd99:  mov    %edx,0x20(%esp)
0843171b +0xd9d:  mov    -0x118(%ebp),%edx
08431721 +0xda3:  mov    %edx,0x1c(%esp)
08431725 +0xda7:  mov    -0x114(%ebp),%edx
0843172b +0xdad:  mov    %edx,0x18(%esp)
0843172f +0xdb1:  mov    %edi,0x14(%esp)
08431733 +0xdb5:  mov    %esi,0x10(%esp)
08431737 +0xdb9:  mov    %ecx,0xc(%esp)
0843173b +0xdbd:  mov    %eax,0x8(%esp)
0843173f +0xdc1:  movl   $"upDate school_member set contribute=contribute+%d, last_play_time=NOW(), green_badge=green_badge+%d, red_badge=red_badge+%d, blue_badge=blue_badge+%d, daily_green_badge=%d, daily_red_badge=%d, daily_blue_badge=%d  where m_id=%s and school_id=%d",0x4(%esp)
08431747 +0xdc9:  mov    -0x38(%ebp),%eax
0843174a +0xdcc:  mov    %eax,(%esp)
0843174d +0xdcf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08431752 +0xdd4:  movl   $0x1,0x4(%esp)
0843175a +0xddc:  mov    -0x38(%ebp),%eax
0843175d +0xddf:  mov    %eax,(%esp)
08431760 +0xde2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08431765 +0xde7:  xor    $0x1,%eax
08431768 +0xdea:  test   %al,%al
0843176a +0xdec:  je     08431773 <+0xdf5>
0843176c +0xdee:  mov    $0x0,%eax
08431771 +0xdf3:  jmp    084317a7 <+0xe29>
08431773 +0xdf5:  addl   $0x1,-0x1c(%ebp)
08431777 +0xdf9:  cmpl   $0x1,-0x1c(%ebp)
0843177b +0xdfd:  setle  %al
0843177e +0xe00:  test   %al,%al
08431780 +0xe02:  jne    0843130f <+0x991>
08431786 +0xe08:  addl   $0x1,-0x20(%ebp)
0843178a +0xe0c:  mov    -0x34(%ebp),%eax
0843178d +0xe0f:  movzbl 0xf(%eax),%eax
08431791 +0xe13:  movzbl %al,%eax
08431794 +0xe16:  cmp    -0x20(%ebp),%eax
08431797 +0xe19:  setg   %al
0843179a +0xe1c:  test   %al,%al
0843179c +0xe1e:  jne    08431303 <+0x985>
084317a2 +0xe24:  mov    $0x1,%eax
084317a7 +0xe29:  add    $0x17c,%esp
084317ad +0xe2f:  pop    %ebx
084317ae +0xe30:  pop    %esi
084317af +0xe31:  pop    %edi
084317b0 +0xe32:  pop    %ebp
084317b1 +0xe33:  ret
```

## 反编译 C

```c
// DB_UpdatePvPResult::dispatch @ 0x843097e

/* DB_UpdatePvPResult::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPResult::dispatch(int param_1,int param_2,Stream *param_3)

{
  float fVar1;
  Packet_PvPResult PVar2;
  Packet_PvPResult PVar3;
  Packet_PvPResult PVar4;
  Packet_PvPResult PVar5;
  Packet_PvPResult PVar6;
  Packet_PvPResult PVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  school_info *this;
  int iVar15;
  Stream *in_stack_00000010;
  int local_10c;
  float local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  float local_f0 [2];
  int local_e8;
  float local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  tm local_c4;
  int local_98;
  float local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  int local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  tm *local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  MySQL *local_3c;
  Packet_PvPResult *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  dispatch(int,int,Stream*)::school_info::school_info((school_info *)&local_98);
  this = (school_info *)&local_10c;
  for (iVar15 = 1; iVar15 != -1; iVar15 = iVar15 + -1) {
    dispatch(int,int,Stream*)::school_info::school_info(this);
    this = this + 0x24;
  }
  local_74 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_50 = localtime_r(&local_74,&local_c4);
  local_4c = local_50->tm_wday;
  local_48 = local_50->tm_mday;
  local_50->tm_hour = 6;
  local_50->tm_min = 0;
  local_50->tm_sec = 0;
  local_44 = (float)mktime(local_50);
  if (local_74 < (int)local_44) {
    local_44 = (float)((int)local_44 + -0x15180);
  }
  local_40 = (float)((int)local_44 + -0x15180);
  local_3c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  local_38 = Stream::GetOutBuffer<Packet_PvPResult>(in_stack_00000010);
  local_34 = 0;
  do {
    if ((int)(uint)(byte)local_38[0xf] <= local_34) {
      local_24 = 0;
      do {
        if ((int)(uint)(byte)local_38[0xf] <= local_24) {
          return 1;
        }
        for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
          if ((local_38[local_24 * 3 + local_20 * 0x38 + 0x1d] != (Packet_PvPResult)0x0) ||
             (local_38[local_24 * 3 + local_20 * 0x38 + 0x1e] != (Packet_PvPResult)0x0)) {
            local_38[local_24 * 3 + local_20 * 0x38 + 0x1c] =
                 (Packet_PvPResult)((char)local_38[local_24 * 3 + local_20 * 0x38 + 0x1c] + '\x01');
          }
          PVar2 = local_38[local_24 * 3 + local_20 * 0x38 + 0x12];
          PVar3 = local_38[local_24 * 3 + local_20 * 0x38 + 0x11];
          PVar4 = local_38[local_24 * 3 + local_20 * 0x38 + 0x10];
          PVar5 = local_38[local_24 * 3 + local_20 * 0x38 + 0x1e];
          PVar6 = local_38[local_24 * 3 + local_20 * 0x38 + 0x1d];
          PVar7 = local_38[local_24 * 3 + local_20 * 0x38 + 0x1c];
          uVar13 = NumberToString(*(uint *)(local_38 + (local_20 * 0xe + local_24 + 0xc) * 4 + 8),0)
          ;
          cMyTrace::cMyTrace(local_60,"virtual bool DB_UpdatePvPResult::dispatch(int, int, Stream*)"
                             ,0x7881,0);
          cMyTrace::operator()
                    (local_60,
                     "BADGE_COUNT m_id(%s) badge green(%d), red(%d), blue(%d), daily badge green(%d), red(%d), blue(%d)"
                     ,uVar13,(uint)(byte)PVar7,(uint)(byte)PVar6,(uint)(byte)PVar5,(uint)(byte)PVar4
                     ,(uint)(byte)PVar3,(uint)(byte)PVar2);
          uVar13 = *(undefined4 *)(local_38 + (local_20 * 0xe + local_24 + 8) * 4 + 8);
          uVar14 = NumberToString(*(uint *)(local_38 + (local_20 * 0xe + local_24 + 0xc) * 4 + 8),0)
          ;
          MySQL::set_query(local_3c,
                           "upDate school_member set contribute=contribute+%d, last_play_time=NOW(), green_badge=green_badge+%d, red_badge=red_badge+%d, blue_badge=blue_badge+%d, daily_green_badge=%d, daily_red_badge=%d, daily_blue_badge=%d  where m_id=%s and school_id=%d"
                           ,(&local_108)[local_20 * 9 + 2],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x1c],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x1d],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x1e],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x10],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x11],
                           (uint)(byte)local_38[local_24 * 3 + local_20 * 0x38 + 0x12],uVar14,uVar13
                          );
          cVar12 = MySQL::exec(local_3c,true);
          if (cVar12 != '\x01') {
            return 0;
          }
        }
        local_24 = local_24 + 1;
      } while( true );
    }
    MySQL::set_query(local_3c,
                     "seLect school_id, rating, fight_cnt, unix_timestamp(last_update_time), school_point, school_point_prev, fight_cnt_prev from school_info where school_id in (%d,%d)"
                     ,*(undefined4 *)(local_38 + (local_34 + 8) * 4 + 8),
                     *(undefined4 *)(local_38 + (local_34 + 0x16) * 4 + 8));
    cVar12 = MySQL::exec(local_3c,true);
    if (cVar12 != '\x01') {
      return 0;
    }
    iVar15 = MySQL::get_n_rows(local_3c);
    if (iVar15 != 2) {
      return 0;
    }
    local_2c = 0;
    local_30 = 2;
    while ((local_2c < local_30 && (cVar12 = MySQL::fetch(local_3c), cVar12 == '\x01'))) {
      cVar12 = MySQL::get_int(local_3c,0,&local_98);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_float(local_3c,1,&local_7c);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,2,(int *)&local_94);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,3,&local_90);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,4,&local_88);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,5,&local_84);
      if (cVar12 != '\x01') {
        return 0;
      }
      cVar12 = MySQL::get_int(local_3c,6,&local_80);
      if (cVar12 != '\x01') {
        return 0;
      }
      local_78 = local_7c;
      if (*(int *)(local_38 + (local_34 + 8) * 4 + 8) == local_98) {
        local_10c = local_98;
        local_108 = local_94;
        local_104 = local_90;
        local_100 = local_8c;
        local_fc = local_88;
        local_f8 = local_84;
        local_f4 = local_80;
        local_f0[0] = local_7c;
        local_f0[1] = local_7c;
      }
      else {
        if (*(int *)(local_38 + (local_34 + 0x16) * 4 + 8) != local_98) {
          return 0;
        }
        local_e8 = local_98;
        local_e4 = local_94;
        local_e0 = local_90;
        local_dc = local_8c;
        local_d8 = local_88;
        local_d4 = local_84;
        local_d0 = local_80;
        local_cc = local_7c;
        local_c8 = local_7c;
      }
      local_2c = local_2c + 1;
    }
    CEloRating::calc(local_f0,&local_cc,local_38[0xe],*(undefined4 *)(local_38 + 10));
    for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
      (&local_108)[local_28 * 9 + 2] =
           (float)(int)ROUND(local_f0[local_28 * 9] - local_f0[local_28 * 9 + 1]);
      if ((&local_108)[local_28 * 9 + 1] == local_44 ||
          (int)(&local_108)[local_28 * 9 + 1] - (int)local_44 < 0) {
        if ((&local_108)[local_28 * 9 + 1] == local_40 ||
            (int)(&local_108)[local_28 * 9 + 1] - (int)local_40 < 0) {
          local_f0[local_28 * 9 + -1] = 0.0;
          local_f0[local_28 * 9 + -2] = 0.0;
          (&local_108)[local_28 * 9] = 0.0;
          (&local_108)[local_28 * 9 + 3] = 0.0;
        }
        else {
          local_f0[local_28 * 9 + -1] = (&local_108)[local_28 * 9];
          local_f0[local_28 * 9 + -2] = (&local_108)[local_28 * 9 + 3];
          (&local_108)[local_28 * 9] = 0.0;
          (&local_108)[local_28 * 9 + 3] = 0.0;
        }
      }
      (&local_108)[local_28 * 9] = (float)((int)(&local_108)[local_28 * 9] + 1);
      if ((&local_108)[local_28 * 9] ==
          PvPGlobalEnvironmentVariable::school_match_fight_count_for_gain_point_) {
        (&local_108)[local_28 * 9 + 3] = PvPGlobalEnvironmentVariable::school_match_daily_point_;
      }
      else if ((&local_108)[local_28 * 9] == 2.10195e-44) {
        if ((local_4c == 0) || (local_4c == 6)) {
          (&local_108)[local_28 * 9 + 3] =
               PvPGlobalEnvironmentVariable::school_match_daily_point_weekends_;
        }
        if ((0x48f26550 < local_74) && (local_74 < 0x48f8fcd0)) {
          (&local_108)[local_28 * 9 + 3] =
               PvPGlobalEnvironmentVariable::school_match_daily_point_weekends_;
        }
      }
      MySQL::set_query(local_3c,
                       "upDate school_info set fight_cnt=%d,school_point=%d, fight_cnt_prev=%d, school_point_prev=%d, rating=%f, last_update_time=from_unixtime(%d) where school_id=%d"
                       ,(&local_108)[local_28 * 9],(&local_108)[local_28 * 9 + 3],
                       local_f0[local_28 * 9 + -1],local_f0[local_28 * 9 + -2],
                       (double)local_f0[local_28 * 9],local_74,
                       *(undefined4 *)(local_38 + (local_28 * 0xe + local_34 + 8) * 4 + 8));
      cVar12 = MySQL::exec(local_3c,true);
      iVar15 = local_74;
      if (cVar12 != '\x01') {
        return 0;
      }
      uVar13 = *(undefined4 *)(local_38 + (local_28 * 0xe + local_34 + 8) * 4 + 8);
      fVar1 = local_f0[local_28 * 9];
      fVar8 = local_f0[local_28 * 9 + -2];
      fVar9 = local_f0[local_28 * 9 + -1];
      fVar10 = (&local_108)[local_28 * 9 + 3];
      fVar11 = (&local_108)[local_28 * 9];
      cMyTrace::cMyTrace(local_70,"virtual bool DB_UpdatePvPResult::dispatch(int, int, Stream*)",
                         0x7867,5);
      cMyTrace::operator()
                (local_70,
                 "fight_cnt=%d,school_point=%d, fight_cnt_prev=%d, school_point_prev=%d, rating=%f, last_update_time=%d, school_id=%d"
                 ,fVar11,fVar10,fVar9,fVar8,(double)fVar1,iVar15,uVar13);
    }
    local_34 = local_34 + 1;
  } while( true );
}
```
