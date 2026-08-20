# dispatch

`_ZN16DB_ReqBlackCount8dispatchEiiP6Stream`

`DB_ReqBlackCount::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqBlackCount` | `0x08424ce6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08424ce6  _ZN16DB_ReqBlackCount8dispatchEiiP6Stream
#           DB_ReqBlackCount::dispatch(int, int, Stream*)
# range [0x08424ce6, 0x08425279]
08424ce6 +0x000:  push   %ebp
08424ce7 +0x001:  mov    %esp,%ebp
08424ce9 +0x003:  push   %edi
08424cea +0x004:  push   %esi
08424ceb +0x005:  push   %ebx
08424cec +0x006:  sub    $0xbc,%esp
08424cf2 +0x00c:  mov    0x14(%ebp),%eax
08424cf5 +0x00f:  mov    %eax,(%esp)
08424cf8 +0x012:  call   08451eee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4b04>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4b04
08424cfd +0x017:  mov    %eax,-0x34(%ebp)
08424d00 +0x01a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08424d05 +0x01f:  movl   $0x0,0x8(%esp)
08424d0d +0x027:  movl   $0x3,0x4(%esp)
08424d15 +0x02f:  mov    %eax,(%esp)
08424d18 +0x032:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08424d1d +0x037:  mov    %eax,-0x30(%ebp)
08424d20 +0x03a:  movl   $0x0,-0x2c(%ebp)
08424d27 +0x041:  mov    -0x34(%ebp),%eax
08424d2a +0x044:  mov    (%eax),%eax
08424d2c +0x046:  mov    %eax,0x8(%esp)
08424d30 +0x04a:  movl   $"seLect black_point,offset_point,unix_timestamp(problem_child_time) from charac_black_info where charac_no=%d",0x4(%esp)
08424d38 +0x052:  mov    -0x30(%ebp),%eax
08424d3b +0x055:  mov    %eax,(%esp)
08424d3e +0x058:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424d43 +0x05d:  movl   $0x1,0x4(%esp)
08424d4b +0x065:  mov    -0x30(%ebp),%eax
08424d4e +0x068:  mov    %eax,(%esp)
08424d51 +0x06b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08424d56 +0x070:  xor    $0x1,%eax
08424d59 +0x073:  test   %al,%al
08424d5b +0x075:  je     08424d67 <+0x81>
08424d5d +0x077:  mov    $0x0,%ebx
08424d62 +0x07c:  jmp    0842526d <+0x587>
08424d67 +0x081:  mov    -0x30(%ebp),%eax
08424d6a +0x084:  mov    %eax,(%esp)
08424d6d +0x087:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08424d72 +0x08c:  mov    %eax,-0x28(%ebp)
08424d75 +0x08f:  cmpl   $0x1,-0x28(%ebp)
08424d79 +0x093:  jle    08424db0 <+0xca>
08424d7b +0x095:  mov    -0x28(%ebp),%eax
08424d7e +0x098:  mov    %eax,0x14(%esp)
08424d82 +0x09c:  movl   $"DB_ReqBlackCount::dispatch error! data(%d)",0x10(%esp)
08424d8a +0x0a4:  movl   $0x622c,0xc(%esp)
08424d92 +0x0ac:  movl   $&_ZZN16DB_ReqBlackCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08424d9a +0x0b4:  movl   $"DBThread.cpp",0x4(%esp)
08424da2 +0x0bc:  movl   $0x1,(%esp)
08424da9 +0x0c3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08424dae +0x0c8:  jmp    08424dbd <+0xd7>
08424db0 +0x0ca:  cmpl   $0x0,-0x28(%ebp)
08424db4 +0x0ce:  jne    08424dbd <+0xd7>
08424db6 +0x0d0:  movl   $0x1,-0x2c(%ebp)
08424dbd +0x0d7:  mov    -0x30(%ebp),%eax
08424dc0 +0x0da:  mov    %eax,(%esp)
08424dc3 +0x0dd:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08424dc8 +0x0e2:  xor    $0x1,%eax
08424dcb +0x0e5:  test   %al,%al
08424dcd +0x0e7:  je     08424dd6 <+0xf0>
08424dcf +0x0e9:  movl   $0x2,-0x2c(%ebp)
08424dd6 +0x0f0:  movl   $0x0,-0x68(%ebp)
08424ddd +0x0f7:  movl   $0x0,-0x6c(%ebp)
08424de4 +0x0fe:  lea    -0x68(%ebp),%eax
08424de7 +0x101:  mov    %eax,0x8(%esp)
08424deb +0x105:  movl   $0x0,0x4(%esp)
08424df3 +0x10d:  mov    -0x30(%ebp),%eax
08424df6 +0x110:  mov    %eax,(%esp)
08424df9 +0x113:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08424dfe +0x118:  xor    $0x1,%eax
08424e01 +0x11b:  test   %al,%al
08424e03 +0x11d:  je     08424e0c <+0x126>
08424e05 +0x11f:  movl   $0x3,-0x2c(%ebp)
08424e0c +0x126:  lea    -0x6c(%ebp),%eax
08424e0f +0x129:  mov    %eax,0x8(%esp)
08424e13 +0x12d:  movl   $0x1,0x4(%esp)
08424e1b +0x135:  mov    -0x30(%ebp),%eax
08424e1e +0x138:  mov    %eax,(%esp)
08424e21 +0x13b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08424e26 +0x140:  xor    $0x1,%eax
08424e29 +0x143:  test   %al,%al
08424e2b +0x145:  je     08424e34 <+0x14e>
08424e2d +0x147:  movl   $0x3,-0x2c(%ebp)
08424e34 +0x14e:  movl   $0x0,-0x70(%ebp)
08424e3b +0x155:  lea    -0x70(%ebp),%eax
08424e3e +0x158:  mov    %eax,0x8(%esp)
08424e42 +0x15c:  movl   $0x2,0x4(%esp)
08424e4a +0x164:  mov    -0x30(%ebp),%eax
08424e4d +0x167:  mov    %eax,(%esp)
08424e50 +0x16a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08424e55 +0x16f:  xor    $0x1,%eax
08424e58 +0x172:  test   %al,%al
08424e5a +0x174:  je     08424e63 <+0x17d>
08424e5c +0x176:  movl   $0x3,-0x2c(%ebp)
08424e63 +0x17d:  mov    -0x70(%ebp),%eax
08424e66 +0x180:  test   %eax,%eax
08424e68 +0x182:  je     0842513f <+0x459>
08424e6e +0x188:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08424e73 +0x18d:  mov    0x3b4(%eax),%eax
08424e79 +0x193:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08424e7f +0x199:  mov    %eax,-0x24(%ebp)
08424e82 +0x19c:  cmpl   $0x0,-0x24(%ebp)
08424e86 +0x1a0:  je     08424ea8 <+0x1c2>
08424e88 +0x1a2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08424e8f +0x1a9:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08424e94 +0x1ae:  mov    -0x70(%ebp),%ecx
08424e97 +0x1b1:  mov    -0x24(%ebp),%edx
08424e9a +0x1b4:  lea    (%ecx,%edx,1),%edx
08424e9d +0x1b7:  cmp    %edx,%eax
08424e9f +0x1b9:  jle    08424ea8 <+0x1c2>
08424ea1 +0x1bb:  mov    $0x1,%eax
08424ea6 +0x1c0:  jmp    08424ead <+0x1c7>
08424ea8 +0x1c2:  mov    $0x0,%eax
08424ead +0x1c7:  test   %al,%al
08424eaf +0x1c9:  je     0842513f <+0x459>
08424eb5 +0x1cf:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08424ebc +0x1d6:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08424ec1 +0x1db:  mov    %eax,%edx
08424ec3 +0x1dd:  mov    -0x70(%ebp),%eax
08424ec6 +0x1e0:  mov    %edx,%ecx
08424ec8 +0x1e2:  sub    %eax,%ecx
08424eca +0x1e4:  mov    %ecx,%eax
08424ecc +0x1e6:  mov    -0x24(%ebp),%edx
08424ecf +0x1e9:  mov    %edx,-0x8c(%ebp)
08424ed5 +0x1ef:  mov    $0x0,%edx
08424eda +0x1f4:  divl   -0x8c(%ebp)
08424ee0 +0x1fa:  mov    %eax,-0x20(%ebp)
08424ee3 +0x1fd:  mov    -0x68(%ebp),%edx
08424ee6 +0x200:  mov    -0x6c(%ebp),%eax
08424ee9 +0x203:  mov    %edx,%ecx
08424eeb +0x205:  sub    %eax,%ecx
08424eed +0x207:  mov    %ecx,%eax
08424eef +0x209:  test   %eax,%eax
08424ef1 +0x20b:  jle    0842513f <+0x459>
08424ef7 +0x211:  mov    -0x68(%ebp),%edx
08424efa +0x214:  mov    -0x6c(%ebp),%eax
08424efd +0x217:  mov    %edx,%ebx
08424eff +0x219:  sub    %eax,%ebx
08424f01 +0x21b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08424f06 +0x220:  mov    0x3b8(%eax),%eax
08424f0c +0x226:  imul   -0x20(%ebp),%eax
08424f10 +0x22a:  mov    %ebx,%edx
08424f12 +0x22c:  sub    %eax,%edx
08424f14 +0x22e:  mov    %edx,%eax
08424f16 +0x230:  mov    %eax,-0x1c(%ebp)
08424f19 +0x233:  mov    -0x70(%ebp),%ecx
08424f1c +0x236:  mov    %ecx,-0x84(%ebp)
08424f22 +0x23c:  mov    -0x68(%ebp),%edi
08424f25 +0x23f:  mov    -0x6c(%ebp),%esi
08424f28 +0x242:  mov    -0x34(%ebp),%eax
08424f2b +0x245:  mov    (%eax),%ebx
08424f2d +0x247:  movl   $0x0,0xc(%esp)
08424f35 +0x24f:  movl   $0x6259,0x8(%esp)
08424f3d +0x257:  movl   $&_ZZN16DB_ReqBlackCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08424f45 +0x25f:  lea    -0x64(%ebp),%eax
08424f48 +0x262:  mov    %eax,(%esp)
08424f4b +0x265:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08424f50 +0x26a:  mov    -0x1c(%ebp),%eax
08424f53 +0x26d:  mov    %eax,0x1c(%esp)
08424f57 +0x271:  mov    -0x84(%ebp),%eax
08424f5d +0x277:  mov    %eax,0x18(%esp)
08424f61 +0x27b:  mov    %edi,0x14(%esp)
08424f65 +0x27f:  mov    %esi,0x10(%esp)
08424f69 +0x283:  mov    -0x20(%ebp),%eax
08424f6c +0x286:  mov    %eax,0xc(%esp)
08424f70 +0x28a:  mov    %ebx,0x8(%esp)
08424f74 +0x28e:  movl   $"BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d) iComputedBlackPoint(%d)",0x4(%esp)
08424f7c +0x296:  lea    -0x64(%ebp),%eax
08424f7f +0x299:  mov    %eax,(%esp)
08424f82 +0x29c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08424f87 +0x2a1:  cmpl   $0x0,-0x1c(%ebp)
08424f8b +0x2a5:  jle    08425053 <+0x36d>
08424f91 +0x2ab:  mov    -0x34(%ebp),%eax
08424f94 +0x2ae:  mov    (%eax),%ebx
08424f96 +0x2b0:  mov    -0x24(%ebp),%eax
08424f99 +0x2b3:  imul   -0x20(%ebp),%eax
08424f9d +0x2b7:  mov    %eax,%edx
08424f9f +0x2b9:  mov    -0x70(%ebp),%eax
08424fa2 +0x2bc:  lea    (%edx,%eax,1),%esi
08424fa5 +0x2bf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08424faa +0x2c4:  mov    0x3b8(%eax),%eax
08424fb0 +0x2ca:  imul   -0x20(%ebp),%eax
08424fb4 +0x2ce:  mov    %ebx,0x10(%esp)
08424fb8 +0x2d2:  mov    %esi,0xc(%esp)
08424fbc +0x2d6:  mov    %eax,0x8(%esp)
08424fc0 +0x2da:  movl   $"upDate charac_black_info set offset_point = offset_point  + %d, problem_child_time = from_unixtime(%d) where charac_no=%d",0x4(%esp)
08424fc8 +0x2e2:  mov    -0x30(%ebp),%eax
08424fcb +0x2e5:  mov    %eax,(%esp)
08424fce +0x2e8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424fd3 +0x2ed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08424fd8 +0x2f2:  mov    0x3b8(%eax),%eax
08424fde +0x2f8:  mov    %eax,%edx
08424fe0 +0x2fa:  imul   -0x20(%ebp),%edx
08424fe4 +0x2fe:  mov    -0x6c(%ebp),%eax
08424fe7 +0x301:  lea    (%edx,%eax,1),%eax
08424fea +0x304:  mov    %eax,-0x6c(%ebp)
08424fed +0x307:  mov    -0x70(%ebp),%edx
08424ff0 +0x30a:  mov    %edx,-0x80(%ebp)
08424ff3 +0x30d:  mov    -0x68(%ebp),%edi
08424ff6 +0x310:  mov    -0x6c(%ebp),%esi
08424ff9 +0x313:  mov    -0x34(%ebp),%eax
08424ffc +0x316:  mov    (%eax),%ebx
08424ffe +0x318:  movl   $0x0,0xc(%esp)
08425006 +0x320:  movl   $0x6262,0x8(%esp)
0842500e +0x328:  movl   $&_ZZN16DB_ReqBlackCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08425016 +0x330:  lea    -0x54(%ebp),%eax
08425019 +0x333:  mov    %eax,(%esp)
0842501c +0x336:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08425021 +0x33b:  mov    -0x80(%ebp),%ecx
08425024 +0x33e:  mov    %ecx,0x18(%esp)
08425028 +0x342:  mov    %edi,0x14(%esp)
0842502c +0x346:  mov    %esi,0x10(%esp)
08425030 +0x34a:  mov    -0x20(%ebp),%eax
08425033 +0x34d:  mov    %eax,0xc(%esp)
08425037 +0x351:  mov    %ebx,0x8(%esp)
0842503b +0x355:  movl   $"BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)",0x4(%esp)
08425043 +0x35d:  lea    -0x54(%ebp),%eax
08425046 +0x360:  mov    %eax,(%esp)
08425049 +0x363:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842504e +0x368:  jmp    084250dd <+0x3f7>
08425053 +0x36d:  mov    -0x34(%ebp),%eax
08425056 +0x370:  mov    (%eax),%eax
08425058 +0x372:  mov    %eax,0x8(%esp)
0842505c +0x376:  movl   $"upDate charac_black_info set offset_point = black_point , problem_child_time = 0 where charac_no=%d",0x4(%esp)
08425064 +0x37e:  mov    -0x30(%ebp),%eax
08425067 +0x381:  mov    %eax,(%esp)
0842506a +0x384:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842506f +0x389:  mov    -0x68(%ebp),%eax
08425072 +0x38c:  mov    %eax,-0x6c(%ebp)
08425075 +0x38f:  movl   $0x0,-0x70(%ebp)
0842507c +0x396:  mov    -0x70(%ebp),%eax
0842507f +0x399:  mov    %eax,-0x7c(%ebp)
08425082 +0x39c:  mov    -0x68(%ebp),%edi
08425085 +0x39f:  mov    -0x6c(%ebp),%esi
08425088 +0x3a2:  mov    -0x34(%ebp),%eax
0842508b +0x3a5:  mov    (%eax),%ebx
0842508d +0x3a7:  movl   $0x0,0xc(%esp)
08425095 +0x3af:  movl   $0x6269,0x8(%esp)
0842509d +0x3b7:  movl   $&_ZZN16DB_ReqBlackCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084250a5 +0x3bf:  lea    -0x44(%ebp),%eax
084250a8 +0x3c2:  mov    %eax,(%esp)
084250ab +0x3c5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084250b0 +0x3ca:  mov    -0x7c(%ebp),%edx
084250b3 +0x3cd:  mov    %edx,0x18(%esp)
084250b7 +0x3d1:  mov    %edi,0x14(%esp)
084250bb +0x3d5:  mov    %esi,0x10(%esp)
084250bf +0x3d9:  mov    -0x20(%ebp),%eax
084250c2 +0x3dc:  mov    %eax,0xc(%esp)
084250c6 +0x3e0:  mov    %ebx,0x8(%esp)
084250ca +0x3e4:  movl   $"BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)",0x4(%esp)
084250d2 +0x3ec:  lea    -0x44(%ebp),%eax
084250d5 +0x3ef:  mov    %eax,(%esp)
084250d8 +0x3f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084250dd +0x3f7:  movl   $0x1,0x4(%esp)
084250e5 +0x3ff:  mov    -0x30(%ebp),%eax
084250e8 +0x402:  mov    %eax,(%esp)
084250eb +0x405:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084250f0 +0x40a:  xor    $0x1,%eax
084250f3 +0x40d:  test   %al,%al
084250f5 +0x40f:  je     0842513f <+0x459>
084250f7 +0x411:  mov    -0x70(%ebp),%ecx
084250fa +0x414:  mov    -0x68(%ebp),%edx
084250fd +0x417:  mov    -0x6c(%ebp),%eax
08425100 +0x41a:  mov    %ecx,0x20(%esp)
08425104 +0x41e:  mov    %edx,0x1c(%esp)
08425108 +0x422:  mov    %eax,0x18(%esp)
0842510c +0x426:  mov    -0x20(%ebp),%eax
0842510f +0x429:  mov    %eax,0x14(%esp)
08425113 +0x42d:  movl   $"BlackList Modify db exec error: iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)",0x10(%esp)
0842511b +0x435:  movl   $0x626c,0xc(%esp)
08425123 +0x43d:  movl   $&_ZZN16DB_ReqBlackCount8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0842512b +0x445:  movl   $"DBThread.cpp",0x4(%esp)
08425133 +0x44d:  movl   $0x1,(%esp)
0842513a +0x454:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0842513f +0x459:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08425144 +0x45e:  movl   $0x6271,0x8(%esp)
0842514c +0x466:  movl   $"DBThread.cpp",0x4(%esp)
08425154 +0x46e:  mov    %eax,(%esp)
08425157 +0x471:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842515c +0x476:  movl   $0x1,0x8(%esp)
08425164 +0x47e:  mov    %eax,0x4(%esp)
08425168 +0x482:  lea    -0x78(%ebp),%eax
0842516b +0x485:  mov    %eax,(%esp)
0842516e +0x488:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08425173 +0x48d:  lea    -0x78(%ebp),%eax
08425176 +0x490:  mov    %eax,(%esp)
08425179 +0x493:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842517e +0x498:  movl   $0xb3,0x4(%esp)
08425186 +0x4a0:  mov    %eax,(%esp)
08425189 +0x4a3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842518e +0x4a8:  lea    -0x78(%ebp),%eax
08425191 +0x4ab:  mov    %eax,(%esp)
08425194 +0x4ae:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425199 +0x4b3:  mov    0x10(%ebp),%edx
0842519c +0x4b6:  mov    %edx,0x4(%esp)
084251a0 +0x4ba:  mov    %eax,(%esp)
084251a3 +0x4bd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084251a8 +0x4c2:  mov    -0x34(%ebp),%eax
084251ab +0x4c5:  mov    (%eax),%eax
084251ad +0x4c7:  mov    %eax,%ebx
084251af +0x4c9:  lea    -0x78(%ebp),%eax
084251b2 +0x4cc:  mov    %eax,(%esp)
084251b5 +0x4cf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084251ba +0x4d4:  mov    %ebx,0x4(%esp)
084251be +0x4d8:  mov    %eax,(%esp)
084251c1 +0x4db:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084251c6 +0x4e0:  lea    -0x78(%ebp),%eax
084251c9 +0x4e3:  mov    %eax,(%esp)
084251cc +0x4e6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084251d1 +0x4eb:  mov    -0x2c(%ebp),%edx
084251d4 +0x4ee:  mov    %edx,0x4(%esp)
084251d8 +0x4f2:  mov    %eax,(%esp)
084251db +0x4f5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084251e0 +0x4fa:  mov    -0x68(%ebp),%edx
084251e3 +0x4fd:  mov    -0x6c(%ebp),%eax
084251e6 +0x500:  sub    %eax,%edx
084251e8 +0x502:  mov    %edx,%eax
084251ea +0x504:  sar    $0x1f,%eax
084251ed +0x507:  not    %eax
084251ef +0x509:  mov    %edx,%ebx
084251f1 +0x50b:  and    %eax,%ebx
084251f3 +0x50d:  lea    -0x78(%ebp),%eax
084251f6 +0x510:  mov    %eax,(%esp)
084251f9 +0x513:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084251fe +0x518:  mov    %ebx,0x4(%esp)
08425202 +0x51c:  mov    %eax,(%esp)
08425205 +0x51f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842520a +0x524:  mov    -0x70(%ebp),%ebx
0842520d +0x527:  lea    -0x78(%ebp),%eax
08425210 +0x52a:  mov    %eax,(%esp)
08425213 +0x52d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425218 +0x532:  mov    %ebx,0x4(%esp)
0842521c +0x536:  mov    %eax,(%esp)
0842521f +0x539:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425224 +0x53e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08425229 +0x543:  lea    -0x78(%ebp),%edx
0842522c +0x546:  mov    %edx,0x8(%esp)
08425230 +0x54a:  movl   $0x1,0x4(%esp)
08425238 +0x552:  mov    %eax,(%esp)
0842523b +0x555:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08425240 +0x55a:  mov    $0x1,%ebx
08425245 +0x55f:  lea    -0x78(%ebp),%eax
08425248 +0x562:  mov    %eax,(%esp)
0842524b +0x565:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08425250 +0x56a:  jmp    0842526d <+0x587>
08425252 +0x56c:  mov    %edx,%ebx
08425254 +0x56e:  mov    %eax,%esi
08425256 +0x570:  lea    -0x78(%ebp),%eax
08425259 +0x573:  mov    %eax,(%esp)
0842525c +0x576:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08425261 +0x57b:  mov    %esi,%eax
08425263 +0x57d:  mov    %ebx,%edx
08425265 +0x57f:  mov    %eax,(%esp)
08425268 +0x582:  call   08ae3750 <_Unwind_Resume>
0842526d +0x587:  mov    %ebx,%eax
0842526f +0x589:  add    $0xbc,%esp
08425275 +0x58f:  pop    %ebx
08425276 +0x590:  pop    %esi
08425277 +0x591:  pop    %edi
08425278 +0x592:  pop    %ebp
08425279 +0x593:  ret
```

## 反编译 C

```c
// DB_ReqBlackCount::dispatch @ 0x8424ce6

/* DB_ReqBlackCount::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqBlackCount::dispatch(DB_ReqBlackCount *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  uint uVar8;
  int iVar9;
  CStreamGuard local_7c [8];
  uint local_74;
  int local_70;
  int local_6c;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  SIG_REQ_BLACK_COUNT *local_38;
  MySQL *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  
  local_38 = Stream::GetOutBuffer<SIG_REQ_BLACK_COUNT>(param_3);
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_30 = 0;
  MySQL::set_query(local_34,
                   "seLect black_point,offset_point,unix_timestamp(problem_child_time) from charac_black_info where charac_no=%d"
                   ,*(int *)local_38);
  cVar3 = MySQL::exec(local_34,true);
  if (cVar3 == '\x01') {
    local_2c = MySQL::get_n_rows(local_34);
    if (local_2c < 2) {
      if (local_2c == 0) {
        local_30 = 1;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)",
                 0x622c,"DB_ReqBlackCount::dispatch error! data(%d)",local_2c);
    }
    cVar3 = MySQL::fetch(local_34);
    if (cVar3 != '\x01') {
      local_30 = 2;
    }
    local_6c = 0;
    local_70 = 0;
    cVar3 = MySQL::get_int(local_34,0,&local_6c);
    if (cVar3 != '\x01') {
      local_30 = 3;
    }
    cVar3 = MySQL::get_int(local_34,1,&local_70);
    if (cVar3 != '\x01') {
      local_30 = 3;
    }
    local_74 = 0;
    cVar3 = MySQL::get_uint(local_34,2,&local_74);
    if (cVar3 != '\x01') {
      local_30 = 3;
    }
    if (local_74 != 0) {
      iVar4 = G_CDataManager();
      local_28 = *(int *)(iVar4 + 0x3b4) * 0x15180;
      if ((local_28 == 0) ||
         (iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         iVar4 <= (int)(local_74 + local_28))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_24 = (iVar4 - local_74) / local_28;
        if (local_6c != local_70 && -1 < local_6c - local_70) {
          iVar9 = local_6c - local_70;
          iVar4 = G_CDataManager();
          iVar5 = local_6c;
          iVar1 = local_70;
          uVar8 = local_74;
          local_20 = iVar9 - *(int *)(iVar4 + 0x3b8) * local_24;
          iVar4 = *(int *)local_38;
          cMyTrace::cMyTrace(local_68,"virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)",
                             0x6259,0);
          iVar9 = local_20;
          cMyTrace::operator()
                    (local_68,
                     "BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d) iComputedBlackPoint(%d)"
                     ,iVar4,local_24,iVar1,iVar5,uVar8,local_20);
          if (local_20 < 1) {
            MySQL::set_query(local_34,
                             "upDate charac_black_info set offset_point = black_point , problem_child_time = 0 where charac_no=%d"
                             ,*(int *)local_38);
            iVar1 = local_6c;
            local_70 = local_6c;
            local_74 = 0;
            iVar4 = *(int *)local_38;
            cMyTrace::cMyTrace(local_48,"virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)"
                               ,0x6269,0);
            cMyTrace::operator()
                      (local_48,
                       "BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)"
                       ,iVar4,local_24,iVar1,iVar1,0,iVar9);
          }
          else {
            iVar1 = *(int *)local_38;
            iVar4 = local_28 * local_24 + local_74;
            iVar5 = G_CDataManager();
            MySQL::set_query(local_34,
                             "upDate charac_black_info set offset_point = offset_point  + %d, problem_child_time = from_unixtime(%d) where charac_no=%d"
                             ,*(int *)(iVar5 + 0x3b8) * local_24,iVar4,iVar1);
            iVar4 = G_CDataManager();
            iVar5 = local_6c;
            uVar8 = local_74;
            iVar4 = *(int *)(iVar4 + 0x3b8) * local_24 + local_70;
            iVar1 = *(int *)local_38;
            local_70 = iVar4;
            cMyTrace::cMyTrace(local_58,"virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)"
                               ,0x6262,0);
            cMyTrace::operator()
                      (local_58,
                       "BlackList Modify : c(%d) iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)"
                       ,iVar1,local_24,iVar4,iVar5,uVar8);
          }
          cVar3 = MySQL::exec(local_34,true);
          if (cVar3 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp","virtual bool DB_ReqBlackCount::dispatch(int, int, Stream*)"
                       ,0x626c,
                       "BlackList Modify db exec error: iPassCnt(%d) iOffsetPoint(%d) iBlackPoint(%d) uProblemChildTime(%d)"
                       ,local_24,local_70,local_6c,local_74);
          }
        }
      }
    }
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6271);
    CStreamGuard::CStreamGuard(local_7c,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
                    /* try { // try from 08425189 to 0842523f has its CatchHandler @ 08425252 */
    CStreamGuard::operator<<(pCVar7,0xb3);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,param_2);
    iVar4 = *(int *)local_38;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,iVar4);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,local_30);
    uVar8 = local_6c - local_70;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,uVar8 & ~((int)uVar8 >> 0x1f));
    uVar8 = local_74;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_7c);
    CStreamGuard::operator<<(pCVar7,uVar8);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_7c);
    CStreamGuard::~CStreamGuard(local_7c);
    return 1;
  }
  return 0;
}
```
