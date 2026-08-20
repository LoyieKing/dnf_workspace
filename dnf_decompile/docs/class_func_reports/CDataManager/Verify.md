# Verify

`_ZNK12CDataManager6VerifyEv`

`CDataManager::Verify() const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360d94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360d94  _ZNK12CDataManager6VerifyEv
#           CDataManager::Verify() const
# range [0x08360d94, 0x083620ed]
08360d94 +0x0000:  push   %ebp
08360d95 +0x0001:  mov    %esp,%ebp
08360d97 +0x0003:  push   %edi
08360d98 +0x0004:  push   %esi
08360d99 +0x0005:  push   %ebx
08360d9a +0x0006:  sub    $0x1abc,%esp
08360da0 +0x000c:  movl   $0x1,-0x5c(%ebp)
08360da7 +0x0013:  jmp    08360dad <+0x19>
08360da9 +0x0015:  addl   $0x1,-0x5c(%ebp)
08360dad +0x0019:  cmpl   $0xc5,-0x5c(%ebp)
08360db4 +0x0020:  setle  %al
08360db7 +0x0023:  test   %al,%al
08360db9 +0x0025:  jne    08360da9 <+0x15>
08360dbb +0x0027:  movl   $0x0,-0x58(%ebp)
08360dc2 +0x002e:  jmp    08360e59 <+0xc5>
08360dc7 +0x0033:  mov    -0x58(%ebp),%eax
08360dca +0x0036:  lea    0x1(%eax),%edx
08360dcd +0x0039:  mov    0x8(%ebp),%eax
08360dd0 +0x003c:  add    $0x2b68,%edx
08360dd6 +0x0042:  mov    0x4(%eax,%edx,4),%edx
08360dda +0x0046:  mov    -0x58(%ebp),%ecx
08360ddd +0x0049:  mov    0x8(%ebp),%eax
08360de0 +0x004c:  add    $0x2b68,%ecx
08360de6 +0x0052:  mov    0x4(%eax,%ecx,4),%eax
08360dea +0x0056:  cmp    %eax,%edx
08360dec +0x0058:  ja     08360e55 <+0xc1>
08360dee +0x005a:  mov    -0x58(%ebp),%edx
08360df1 +0x005d:  mov    0x8(%ebp),%eax
08360df4 +0x0060:  add    $0x2b68,%edx
08360dfa +0x0066:  mov    0x4(%eax,%edx,4),%ebx
08360dfe +0x006a:  movl   $0x1,0x14(%esp)
08360e06 +0x0072:  movl   $0x1,0x10(%esp)
08360e0e +0x007a:  movl   $0x9,0xc(%esp)
08360e16 +0x0082:  movl   $0x2723,0x8(%esp)
08360e1e +0x008a:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08360e26 +0x0092:  lea    -0x1ec(%ebp),%eax
08360e2c +0x0098:  mov    %eax,(%esp)
08360e2f +0x009b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08360e34 +0x00a0:  mov    -0x58(%ebp),%eax
08360e37 +0x00a3:  mov    %eax,0xc(%esp)
08360e3b +0x00a7:  mov    %ebx,0x8(%esp)
08360e3f +0x00ab:  movl   $"Warning: Unusual mob reward(%d) on mob grade(%d)",0x4(%esp)
08360e47 +0x00b3:  lea    -0x1ec(%ebp),%eax
08360e4d +0x00b9:  mov    %eax,(%esp)
08360e50 +0x00bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08360e55 +0x00c1:  addl   $0x1,-0x58(%ebp)
08360e59 +0x00c5:  cmpl   $0xc7,-0x58(%ebp)
08360e60 +0x00cc:  setle  %al
08360e63 +0x00cf:  test   %al,%al
08360e65 +0x00d1:  jne    08360dc7 <+0x33>
08360e6b +0x00d7:  movb   $0x0,-0x6a(%ebp)
08360e6f +0x00db:  movl   $0x0,-0x54(%ebp)
08360e76 +0x00e2:  jmp    08360fcc <+0x238>
08360e7b +0x00e7:  mov    0x8(%ebp),%eax
08360e7e +0x00ea:  mov    0x10(%eax),%eax
08360e81 +0x00ed:  mov    -0x54(%ebp),%edx
08360e84 +0x00f0:  mov    %edx,0x4(%esp)
08360e88 +0x00f4:  mov    %eax,(%esp)
08360e8b +0x00f7:  call   08374c58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec24
08360e90 +0x00fc:  lea    -0x1dc(%ebp),%edx
08360e96 +0x0102:  mov    %eax,0x4(%esp)
08360e9a +0x0106:  mov    %edx,(%esp)
08360e9d +0x0109:  call   0838f6d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f178>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f178
08360ea2 +0x010e:  sub    $0x4,%esp
08360ea5 +0x0111:  lea    -0x1dc(%ebp),%eax
08360eab +0x0117:  mov    %eax,0x4(%esp)
08360eaf +0x011b:  lea    -0x20c(%ebp),%eax
08360eb5 +0x0121:  mov    %eax,(%esp)
08360eb8 +0x0124:  call   083944ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f6e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f6e
08360ebd +0x0129:  mov    0x8(%ebp),%eax
08360ec0 +0x012c:  mov    0x10(%eax),%eax
08360ec3 +0x012f:  mov    -0x54(%ebp),%edx
08360ec6 +0x0132:  mov    %edx,0x4(%esp)
08360eca +0x0136:  mov    %eax,(%esp)
08360ecd +0x0139:  call   08374c58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec24
08360ed2 +0x013e:  lea    -0x1d4(%ebp),%edx
08360ed8 +0x0144:  mov    %eax,0x4(%esp)
08360edc +0x0148:  mov    %edx,(%esp)
08360edf +0x014b:  call   0838f6fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f19e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f19e
08360ee4 +0x0150:  sub    $0x4,%esp
08360ee7 +0x0153:  lea    -0x1d4(%ebp),%eax
08360eed +0x0159:  mov    %eax,0x4(%esp)
08360ef1 +0x015d:  lea    -0x214(%ebp),%eax
08360ef7 +0x0163:  mov    %eax,(%esp)
08360efa +0x0166:  call   083944ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f6e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f6e
08360eff +0x016b:  jmp    08360fa8 <+0x214>
08360f04 +0x0170:  lea    -0x20c(%ebp),%eax
08360f0a +0x0176:  mov    %eax,(%esp)
08360f0d +0x0179:  call   08394596 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24036>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24036
08360f12 +0x017e:  mov    0x4(%eax),%eax
08360f15 +0x0181:  mov    0xc8(%eax),%eax
08360f1b +0x0187:  test   %eax,%eax
08360f1d +0x0189:  sete   %al
08360f20 +0x018c:  test   %al,%al
08360f22 +0x018e:  je     08360f9a <+0x206>
08360f24 +0x0190:  lea    -0x20c(%ebp),%eax
08360f2a +0x0196:  mov    %eax,(%esp)
08360f2d +0x0199:  call   08394596 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24036>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24036
08360f32 +0x019e:  mov    0x4(%eax),%eax
08360f35 +0x01a1:  mov    %eax,(%esp)
08360f38 +0x01a4:  call   08374b7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb46>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb46
08360f3d +0x01a9:  mov    %eax,%ebx
08360f3f +0x01ab:  movl   $0x1,0x14(%esp)
08360f47 +0x01b3:  movl   $0x1,0x10(%esp)
08360f4f +0x01bb:  movl   $0x9,0xc(%esp)
08360f57 +0x01c3:  movl   $0x272e,0x8(%esp)
08360f5f +0x01cb:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08360f67 +0x01d3:  lea    -0x1cc(%ebp),%eax
08360f6d +0x01d9:  mov    %eax,(%esp)
08360f70 +0x01dc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08360f75 +0x01e1:  mov    %ebx,0xc(%esp)
08360f79 +0x01e5:  mov    -0x54(%ebp),%eax
08360f7c +0x01e8:  mov    %eax,0x8(%esp)
08360f80 +0x01ec:  movl   $"Skill [required level range] tag value error (Job: %d)(Skill: %d)",0x4(%esp)
08360f88 +0x01f4:  lea    -0x1cc(%ebp),%eax
08360f8e +0x01fa:  mov    %eax,(%esp)
08360f91 +0x01fd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08360f96 +0x0202:  movb   $0x1,-0x6a(%ebp)
08360f9a +0x0206:  lea    -0x20c(%ebp),%eax
08360fa0 +0x020c:  mov    %eax,(%esp)
08360fa3 +0x020f:  call   083944fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f9e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f9e
08360fa8 +0x0214:  lea    -0x214(%ebp),%eax
08360fae +0x021a:  mov    %eax,0x4(%esp)
08360fb2 +0x021e:  lea    -0x20c(%ebp),%eax
08360fb8 +0x0224:  mov    %eax,(%esp)
08360fbb +0x0227:  call   083944ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23f8a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23f8a
08360fc0 +0x022c:  test   %al,%al
08360fc2 +0x022e:  jne    08360f04 <+0x170>
08360fc8 +0x0234:  addl   $0x1,-0x54(%ebp)
08360fcc +0x0238:  cmpl   $0xa,-0x54(%ebp)
08360fd0 +0x023c:  setle  %al
08360fd3 +0x023f:  test   %al,%al
08360fd5 +0x0241:  jne    08360e7b <+0xe7>
08360fdb +0x0247:  cmpb   $0x0,-0x6a(%ebp)
08360fdf +0x024b:  je     08361037 <+0x2a3>
08360fe1 +0x024d:  movl   $0x1,0x14(%esp)
08360fe9 +0x0255:  movl   $0x1,0x10(%esp)
08360ff1 +0x025d:  movl   $0x9,0xc(%esp)
08360ff9 +0x0265:  movl   $0x2735,0x8(%esp)
08361001 +0x026d:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361009 +0x0275:  lea    -0x1bc(%ebp),%eax
0836100f +0x027b:  mov    %eax,(%esp)
08361012 +0x027e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08361017 +0x0283:  movl   $"Verifying Skills fail",0x4(%esp)
0836101f +0x028b:  lea    -0x1bc(%ebp),%eax
08361025 +0x0291:  mov    %eax,(%esp)
08361028 +0x0294:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0836102d +0x0299:  mov    $0x0,%ebx
08361032 +0x029e:  jmp    083620e0 <+0x134c>
08361037 +0x02a3:  movb   $0x0,-0x69(%ebp)
0836103b +0x02a7:  mov    0x8(%ebp),%eax
0836103e +0x02aa:  mov    0x4(%eax),%eax
08361041 +0x02ad:  mov    %eax,-0x68(%ebp)
08361044 +0x02b0:  lea    -0x21c(%ebp),%eax
0836104a +0x02b6:  mov    -0x68(%ebp),%edx
0836104d +0x02b9:  mov    %edx,0x4(%esp)
08361051 +0x02bd:  mov    %eax,(%esp)
08361054 +0x02c0:  call   0838a30c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19dac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19dac
08361059 +0x02c5:  sub    $0x4,%esp
0836105c +0x02c8:  jmp    083610af <+0x31b>
0836105e +0x02ca:  lea    -0x21c(%ebp),%eax
08361064 +0x02d0:  mov    %eax,(%esp)
08361067 +0x02d3:  call   0838a3a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e42
0836106c +0x02d8:  mov    0x4(%eax),%eax
0836106f +0x02db:  movl   $0xffffffff,0x8(%esp)
08361077 +0x02e3:  mov    %eax,0x4(%esp)
0836107b +0x02e7:  mov    0x8(%ebp),%eax
0836107e +0x02ea:  mov    %eax,(%esp)
08361081 +0x02ed:  call   083620ee <_ZNK12CDataManager9VerifyMapERK4CMapi>  ; CDataManager::VerifyMap(CMap const&, int) const
08361086 +0x02f2:  xor    $0x1,%eax
08361089 +0x02f5:  mov    %al,-0x69(%ebp)
0836108c +0x02f8:  lea    -0x1a4(%ebp),%eax
08361092 +0x02fe:  movl   $0x0,0x8(%esp)
0836109a +0x0306:  lea    -0x21c(%ebp),%edx
083610a0 +0x030c:  mov    %edx,0x4(%esp)
083610a4 +0x0310:  mov    %eax,(%esp)
083610a7 +0x0313:  call   0838a332 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19dd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19dd2
083610ac +0x0318:  sub    $0x4,%esp
083610af +0x031b:  lea    -0x1ac(%ebp),%eax
083610b5 +0x0321:  mov    -0x68(%ebp),%edx
083610b8 +0x0324:  mov    %edx,0x4(%esp)
083610bc +0x0328:  mov    %eax,(%esp)
083610bf +0x032b:  call   0838a368 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e08>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e08
083610c4 +0x0330:  sub    $0x4,%esp
083610c7 +0x0333:  lea    -0x1ac(%ebp),%eax
083610cd +0x0339:  mov    %eax,0x4(%esp)
083610d1 +0x033d:  lea    -0x21c(%ebp),%eax
083610d7 +0x0343:  mov    %eax,(%esp)
083610da +0x0346:  call   083945aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2404a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2404a
083610df +0x034b:  test   %al,%al
083610e1 +0x034d:  jne    0836105e <+0x2ca>
083610e7 +0x0353:  cmpb   $0x0,-0x69(%ebp)
083610eb +0x0357:  je     083610f7 <+0x363>
083610ed +0x0359:  mov    $0x0,%ebx
083610f2 +0x035e:  jmp    083620e0 <+0x134c>
083610f7 +0x0363:  mov    0x8(%ebp),%eax
083610fa +0x0366:  mov    (%eax),%eax
083610fc +0x0368:  mov    %eax,%edx
083610fe +0x036a:  lea    -0x19c(%ebp),%eax
08361104 +0x0370:  mov    %edx,0x4(%esp)
08361108 +0x0374:  mov    %eax,(%esp)
0836110b +0x0377:  call   0838a74a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1ea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1ea
08361110 +0x037c:  sub    $0x4,%esp
08361113 +0x037f:  lea    -0x19c(%ebp),%eax
08361119 +0x0385:  mov    %eax,0x4(%esp)
0836111d +0x0389:  lea    -0x224(%ebp),%eax
08361123 +0x038f:  mov    %eax,(%esp)
08361126 +0x0392:  call   083945be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2405e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2405e
0836112b +0x0397:  jmp    08361170 <+0x3dc>
0836112d +0x0399:  lea    -0x224(%ebp),%eax
08361133 +0x039f:  mov    %eax,(%esp)
08361136 +0x03a2:  call   0838a90e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3ae
0836113b +0x03a7:  mov    0x4(%eax),%eax
0836113e +0x03aa:  mov    %eax,0x4(%esp)
08361142 +0x03ae:  mov    0x8(%ebp),%eax
08361145 +0x03b1:  mov    %eax,(%esp)
08361148 +0x03b4:  call   08362b44 <_ZNK12CDataManager13VerifyDungeonERK8CDungeon>  ; CDataManager::VerifyDungeon(CDungeon const&) const
0836114d +0x03b9:  lea    -0x184(%ebp),%eax
08361153 +0x03bf:  movl   $0x0,0x8(%esp)
0836115b +0x03c7:  lea    -0x224(%ebp),%edx
08361161 +0x03cd:  mov    %edx,0x4(%esp)
08361165 +0x03d1:  mov    %eax,(%esp)
08361168 +0x03d4:  call   0838a95c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3fc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3fc
0836116d +0x03d9:  sub    $0x4,%esp
08361170 +0x03dc:  mov    0x8(%ebp),%eax
08361173 +0x03df:  mov    (%eax),%eax
08361175 +0x03e1:  mov    %eax,%edx
08361177 +0x03e3:  lea    -0x18c(%ebp),%eax
0836117d +0x03e9:  mov    %edx,0x4(%esp)
08361181 +0x03ed:  mov    %eax,(%esp)
08361184 +0x03f0:  call   0838a770 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a210>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a210
08361189 +0x03f5:  sub    $0x4,%esp
0836118c +0x03f8:  lea    -0x18c(%ebp),%eax
08361192 +0x03fe:  mov    %eax,0x4(%esp)
08361196 +0x0402:  lea    -0x194(%ebp),%eax
0836119c +0x0408:  mov    %eax,(%esp)
0836119f +0x040b:  call   083945be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2405e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2405e
083611a4 +0x0410:  lea    -0x194(%ebp),%eax
083611aa +0x0416:  mov    %eax,0x4(%esp)
083611ae +0x041a:  lea    -0x224(%ebp),%eax
083611b4 +0x0420:  mov    %eax,(%esp)
083611b7 +0x0423:  call   0838a948 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3e8
083611bc +0x0428:  test   %al,%al
083611be +0x042a:  jne    0836112d <+0x399>
083611c4 +0x0430:  movb   $0x0,-0x61(%ebp)
083611c8 +0x0434:  mov    0x8(%ebp),%eax
083611cb +0x0437:  mov    0xc(%eax),%eax
083611ce +0x043a:  lea    0x4(%eax),%edx
083611d1 +0x043d:  lea    -0x17c(%ebp),%eax
083611d7 +0x0443:  mov    %edx,0x4(%esp)
083611db +0x0447:  mov    %eax,(%esp)
083611de +0x044a:  call   083945da <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2407a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2407a
083611e3 +0x044f:  sub    $0x4,%esp
083611e6 +0x0452:  lea    -0x17c(%ebp),%eax
083611ec +0x0458:  mov    %eax,0x4(%esp)
083611f0 +0x045c:  lea    -0x22c(%ebp),%eax
083611f6 +0x0462:  mov    %eax,(%esp)
083611f9 +0x0465:  call   08394600 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240a0
083611fe +0x046a:  jmp    083617e3 <+0xa4f>
08361203 +0x046f:  lea    -0x22c(%ebp),%eax
08361209 +0x0475:  mov    %eax,(%esp)
0836120c +0x0478:  call   083946ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2418e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2418e
08361211 +0x047d:  mov    0x4(%eax),%eax
08361214 +0x0480:  mov    %eax,-0x50(%ebp)
08361217 +0x0483:  mov    -0x50(%ebp),%eax
0836121a +0x0486:  mov    %eax,(%esp)
0836121d +0x0489:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08361222 +0x048e:  test   %al,%al
08361224 +0x0490:  je     083617d5 <+0xa41>
0836122a +0x0496:  mov    -0x50(%ebp),%eax
0836122d +0x0499:  mov    %eax,-0x4c(%ebp)
08361230 +0x049c:  mov    -0x50(%ebp),%eax
08361233 +0x049f:  mov    (%eax),%eax
08361235 +0x04a1:  add    $0xc,%eax
08361238 +0x04a4:  mov    (%eax),%edx
0836123a +0x04a6:  mov    -0x50(%ebp),%eax
0836123d +0x04a9:  mov    %eax,(%esp)
08361240 +0x04ac:  call   *%edx
08361242 +0x04ae:  cmp    $0xf,%eax
08361245 +0x04b1:  je     0836125e <+0x4ca>
08361247 +0x04b3:  mov    -0x50(%ebp),%eax
0836124a +0x04b6:  mov    (%eax),%eax
0836124c +0x04b8:  add    $0xc,%eax
0836124f +0x04bb:  mov    (%eax),%edx
08361251 +0x04bd:  mov    -0x50(%ebp),%eax
08361254 +0x04c0:  mov    %eax,(%esp)
08361257 +0x04c3:  call   *%edx
08361259 +0x04c5:  cmp    $0x10,%eax
0836125c +0x04c8:  jne    08361265 <+0x4d1>
0836125e +0x04ca:  mov    $0x1,%eax
08361263 +0x04cf:  jmp    0836126a <+0x4d6>
08361265 +0x04d1:  mov    $0x0,%eax
0836126a +0x04d6:  test   %al,%al
0836126c +0x04d8:  je     08361457 <+0x6c3>
08361272 +0x04de:  mov    -0x4c(%ebp),%eax
08361275 +0x04e1:  lea    0x240(%eax),%edx
0836127b +0x04e7:  lea    -0x164(%ebp),%eax
08361281 +0x04ed:  mov    %edx,0x4(%esp)
08361285 +0x04f1:  mov    %eax,(%esp)
08361288 +0x04f4:  call   08394702 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x241a2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x241a2
0836128d +0x04f9:  sub    $0x4,%esp
08361290 +0x04fc:  lea    -0x164(%ebp),%eax
08361296 +0x0502:  mov    %eax,0x4(%esp)
0836129a +0x0506:  lea    -0x230(%ebp),%eax
083612a0 +0x050c:  mov    %eax,(%esp)
083612a3 +0x050f:  call   08394726 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x241c6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x241c6
083612a8 +0x0514:  mov    -0x4c(%ebp),%eax
083612ab +0x0517:  lea    0x240(%eax),%edx
083612b1 +0x051d:  lea    -0x160(%ebp),%eax
083612b7 +0x0523:  mov    %edx,0x4(%esp)
083612bb +0x0527:  mov    %eax,(%esp)
083612be +0x052a:  call   08394740 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x241e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x241e0
083612c3 +0x052f:  sub    $0x4,%esp
083612c6 +0x0532:  lea    -0x160(%ebp),%eax
083612cc +0x0538:  mov    %eax,0x4(%esp)
083612d0 +0x053c:  lea    -0x234(%ebp),%eax
083612d6 +0x0542:  mov    %eax,(%esp)
083612d9 +0x0545:  call   08394726 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x241c6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x241c6
083612de +0x054a:  jmp    08361432 <+0x69e>
083612e3 +0x054f:  lea    -0x230(%ebp),%eax
083612e9 +0x0555:  mov    %eax,(%esp)
083612ec +0x0558:  call   083947a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24248>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24248
083612f1 +0x055d:  lea    0xc(%eax),%edx
083612f4 +0x0560:  lea    -0x238(%ebp),%eax
083612fa +0x0566:  mov    %edx,0x4(%esp)
083612fe +0x056a:  mov    %eax,(%esp)
08361301 +0x056d:  call   0823b26e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x63ec>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x63ec
08361306 +0x0572:  sub    $0x4,%esp
08361309 +0x0575:  lea    -0x230(%ebp),%eax
0836130f +0x057b:  mov    %eax,(%esp)
08361312 +0x057e:  call   083947a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24248>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24248
08361317 +0x0583:  lea    0xc(%eax),%edx
0836131a +0x0586:  lea    -0x23c(%ebp),%eax
08361320 +0x058c:  mov    %edx,0x4(%esp)
08361324 +0x0590:  mov    %eax,(%esp)
08361327 +0x0593:  call   0823b242 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x63c0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x63c0
0836132c +0x0598:  sub    $0x4,%esp
0836132f +0x059b:  jmp    08361404 <+0x670>
08361334 +0x05a0:  lea    -0x238(%ebp),%eax
0836133a +0x05a6:  mov    %eax,(%esp)
0836133d +0x05a9:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08361342 +0x05ae:  mov    (%eax),%eax
08361344 +0x05b0:  cmp    $0x1,%eax
08361347 +0x05b3:  sete   %al
0836134a +0x05b6:  test   %al,%al
0836134c +0x05b8:  jne    083613f5 <+0x661>
08361352 +0x05be:  lea    -0x238(%ebp),%eax
08361358 +0x05c4:  mov    %eax,(%esp)
0836135b +0x05c7:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
08361360 +0x05cc:  mov    (%eax),%eax
08361362 +0x05ce:  mov    %eax,%ebx
08361364 +0x05d0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08361369 +0x05d5:  mov    %ebx,0x4(%esp)
0836136d +0x05d9:  mov    %eax,(%esp)
08361370 +0x05dc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08361375 +0x05e1:  mov    %eax,-0x48(%ebp)
08361378 +0x05e4:  cmpl   $0x0,-0x48(%ebp)
0836137c +0x05e8:  jne    083613f6 <+0x662>
0836137e +0x05ea:  lea    -0x238(%ebp),%eax
08361384 +0x05f0:  mov    %eax,(%esp)
08361387 +0x05f3:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0836138c +0x05f8:  mov    (%eax),%esi
0836138e +0x05fa:  mov    -0x50(%ebp),%eax
08361391 +0x05fd:  mov    %eax,(%esp)
08361394 +0x0600:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08361399 +0x0605:  mov    %eax,%ebx
0836139b +0x0607:  movl   $0x1,0x14(%esp)
083613a3 +0x060f:  movl   $0x1,0x10(%esp)
083613ab +0x0617:  movl   $0x9,0xc(%esp)
083613b3 +0x061f:  movl   $0x275a,0x8(%esp)
083613bb +0x0627:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
083613c3 +0x062f:  lea    -0x15c(%ebp),%eax
083613c9 +0x0635:  mov    %eax,(%esp)
083613cc +0x0638:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083613d1 +0x063d:  mov    %esi,0xc(%esp)
083613d5 +0x0641:  mov    %ebx,0x8(%esp)
083613d9 +0x0645:  movl   $"Booster item element not found (%d)->(%d)",0x4(%esp)
083613e1 +0x064d:  lea    -0x15c(%ebp),%eax
083613e7 +0x0653:  mov    %eax,(%esp)
083613ea +0x0656:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083613ef +0x065b:  movb   $0x1,-0x61(%ebp)
083613f3 +0x065f:  jmp    083613f6 <+0x662>
083613f5 +0x0661:  nop
083613f6 +0x0662:  lea    -0x238(%ebp),%eax
083613fc +0x0668:  mov    %eax,(%esp)
083613ff +0x066b:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
08361404 +0x0670:  lea    -0x23c(%ebp),%eax
0836140a +0x0676:  mov    %eax,0x4(%esp)
0836140e +0x067a:  lea    -0x238(%ebp),%eax
08361414 +0x0680:  mov    %eax,(%esp)
08361417 +0x0683:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
0836141c +0x0688:  test   %al,%al
0836141e +0x068a:  jne    08361334 <+0x5a0>
08361424 +0x0690:  lea    -0x230(%ebp),%eax
0836142a +0x0696:  mov    %eax,(%esp)
0836142d +0x0699:  call   08394792 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24232>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24232
08361432 +0x069e:  lea    -0x234(%ebp),%eax
08361438 +0x06a4:  mov    %eax,0x4(%esp)
0836143c +0x06a8:  lea    -0x230(%ebp),%eax
08361442 +0x06ae:  mov    %eax,(%esp)
08361445 +0x06b1:  call   08394766 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24206>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24206
0836144a +0x06b6:  test   %al,%al
0836144c +0x06b8:  jne    083612e3 <+0x54f>
08361452 +0x06be:  jmp    083617d5 <+0xa41>
08361457 +0x06c3:  mov    -0x50(%ebp),%eax
0836145a +0x06c6:  mov    (%eax),%eax
0836145c +0x06c8:  add    $0xc,%eax
0836145f +0x06cb:  mov    (%eax),%edx
08361461 +0x06cd:  mov    -0x50(%ebp),%eax
08361464 +0x06d0:  mov    %eax,(%esp)
08361467 +0x06d3:  call   *%edx
08361469 +0x06d5:  cmp    $0xe,%eax
0836146c +0x06d8:  sete   %al
0836146f +0x06db:  test   %al,%al
08361471 +0x06dd:  je     083617c0 <+0xa2c>
08361477 +0x06e3:  mov    -0x4c(%ebp),%eax
0836147a +0x06e6:  add    $0x21c,%eax
0836147f +0x06eb:  mov    %eax,-0x44(%ebp)
08361482 +0x06ee:  lea    -0x240(%ebp),%eax
08361488 +0x06f4:  mov    -0x44(%ebp),%edx
0836148b +0x06f7:  mov    %edx,0x4(%esp)
0836148f +0x06fb:  mov    %eax,(%esp)
08361492 +0x06fe:  call   0827e5fc <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x71e>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x71e
08361497 +0x0703:  sub    $0x4,%esp
0836149a +0x0706:  lea    -0x244(%ebp),%eax
083614a0 +0x070c:  mov    -0x44(%ebp),%edx
083614a3 +0x070f:  mov    %edx,0x4(%esp)
083614a7 +0x0713:  mov    %eax,(%esp)
083614aa +0x0716:  call   0827e628 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x74a>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x74a
083614af +0x071b:  sub    $0x4,%esp
083614b2 +0x071e:  jmp    08361587 <+0x7f3>
083614b7 +0x0723:  lea    -0x240(%ebp),%eax
083614bd +0x0729:  mov    %eax,(%esp)
083614c0 +0x072c:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
083614c5 +0x0731:  mov    (%eax),%eax
083614c7 +0x0733:  cmp    $0x1,%eax
083614ca +0x0736:  sete   %al
083614cd +0x0739:  test   %al,%al
083614cf +0x073b:  jne    08361578 <+0x7e4>
083614d5 +0x0741:  lea    -0x240(%ebp),%eax
083614db +0x0747:  mov    %eax,(%esp)
083614de +0x074a:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
083614e3 +0x074f:  mov    (%eax),%eax
083614e5 +0x0751:  mov    %eax,%ebx
083614e7 +0x0753:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083614ec +0x0758:  mov    %ebx,0x4(%esp)
083614f0 +0x075c:  mov    %eax,(%esp)
083614f3 +0x075f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083614f8 +0x0764:  mov    %eax,-0x3c(%ebp)
083614fb +0x0767:  cmpl   $0x0,-0x3c(%ebp)
083614ff +0x076b:  jne    08361579 <+0x7e5>
08361501 +0x076d:  lea    -0x240(%ebp),%eax
08361507 +0x0773:  mov    %eax,(%esp)
0836150a +0x0776:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0836150f +0x077b:  mov    (%eax),%esi
08361511 +0x077d:  mov    -0x50(%ebp),%eax
08361514 +0x0780:  mov    %eax,(%esp)
08361517 +0x0783:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0836151c +0x0788:  mov    %eax,%ebx
0836151e +0x078a:  movl   $0x1,0x14(%esp)
08361526 +0x0792:  movl   $0x1,0x10(%esp)
0836152e +0x079a:  movl   $0x9,0xc(%esp)
08361536 +0x07a2:  movl   $0x276b,0x8(%esp)
0836153e +0x07aa:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361546 +0x07b2:  lea    -0x14c(%ebp),%eax
0836154c +0x07b8:  mov    %eax,(%esp)
0836154f +0x07bb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08361554 +0x07c0:  mov    %esi,0xc(%esp)
08361558 +0x07c4:  mov    %ebx,0x8(%esp)
0836155c +0x07c8:  movl   $"Package item element not found (%d)->(%d)",0x4(%esp)
08361564 +0x07d0:  lea    -0x14c(%ebp),%eax
0836156a +0x07d6:  mov    %eax,(%esp)
0836156d +0x07d9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08361572 +0x07de:  movb   $0x1,-0x61(%ebp)
08361576 +0x07e2:  jmp    08361579 <+0x7e5>
08361578 +0x07e4:  nop
08361579 +0x07e5:  lea    -0x240(%ebp),%eax
0836157f +0x07eb:  mov    %eax,(%esp)
08361582 +0x07ee:  call   0827e300 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x422>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x422
08361587 +0x07f3:  lea    -0x244(%ebp),%eax
0836158d +0x07f9:  mov    %eax,0x4(%esp)
08361591 +0x07fd:  lea    -0x240(%ebp),%eax
08361597 +0x0803:  mov    %eax,(%esp)
0836159a +0x0806:  call   0827e2d4 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3f6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3f6
0836159f +0x080b:  test   %al,%al
083615a1 +0x080d:  jne    083614b7 <+0x723>
083615a7 +0x0813:  mov    -0x4c(%ebp),%eax
083615aa +0x0816:  add    $0x234,%eax
083615af +0x081b:  mov    %eax,-0x40(%ebp)
083615b2 +0x081e:  lea    -0x248(%ebp),%eax
083615b8 +0x0824:  mov    -0x40(%ebp),%edx
083615bb +0x0827:  mov    %edx,0x4(%esp)
083615bf +0x082b:  mov    %eax,(%esp)
083615c2 +0x082e:  call   08237176 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc820>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc820
083615c7 +0x0833:  sub    $0x4,%esp
083615ca +0x0836:  lea    -0x24c(%ebp),%eax
083615d0 +0x083c:  mov    -0x40(%ebp),%edx
083615d3 +0x083f:  mov    %edx,0x4(%esp)
083615d7 +0x0843:  mov    %eax,(%esp)
083615da +0x0846:  call   082371a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc84c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc84c
083615df +0x084b:  sub    $0x4,%esp
083615e2 +0x084e:  jmp    0836179e <+0xa0a>
083615e7 +0x0853:  lea    -0x248(%ebp),%eax
083615ed +0x0859:  mov    %eax,(%esp)
083615f0 +0x085c:  call   083947b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24252>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24252
083615f5 +0x0861:  mov    %eax,0x4(%esp)
083615f9 +0x0865:  lea    -0x258(%ebp),%eax
083615ff +0x086b:  mov    %eax,(%esp)
08361602 +0x086e:  call   0827dfb8 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0xda>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0xda
08361607 +0x0873:  lea    -0x13c(%ebp),%eax
0836160d +0x0879:  lea    -0x258(%ebp),%edx
08361613 +0x087f:  mov    %edx,0x4(%esp)
08361617 +0x0883:  mov    %eax,(%esp)
0836161a +0x0886:  call   0827e270 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x392>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x392
0836161f +0x088b:  sub    $0x4,%esp
08361622 +0x088e:  lea    -0x13c(%ebp),%eax
08361628 +0x0894:  mov    %eax,0x4(%esp)
0836162c +0x0898:  lea    -0x25c(%ebp),%eax
08361632 +0x089e:  mov    %eax,(%esp)
08361635 +0x08a1:  call   0827e294 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3b6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3b6
0836163a +0x08a6:  lea    -0x138(%ebp),%eax
08361640 +0x08ac:  lea    -0x258(%ebp),%edx
08361646 +0x08b2:  mov    %edx,0x4(%esp)
0836164a +0x08b6:  mov    %eax,(%esp)
0836164d +0x08b9:  call   0827e2ae <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3d0>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3d0
08361652 +0x08be:  sub    $0x4,%esp
08361655 +0x08c1:  lea    -0x138(%ebp),%eax
0836165b +0x08c7:  mov    %eax,0x4(%esp)
0836165f +0x08cb:  lea    -0x260(%ebp),%eax
08361665 +0x08d1:  mov    %eax,(%esp)
08361668 +0x08d4:  call   0827e294 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3b6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3b6
0836166d +0x08d9:  jmp    08361742 <+0x9ae>
08361672 +0x08de:  lea    -0x25c(%ebp),%eax
08361678 +0x08e4:  mov    %eax,(%esp)
0836167b +0x08e7:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
08361680 +0x08ec:  mov    (%eax),%eax
08361682 +0x08ee:  cmp    $0x1,%eax
08361685 +0x08f1:  sete   %al
08361688 +0x08f4:  test   %al,%al
0836168a +0x08f6:  jne    08361733 <+0x99f>
08361690 +0x08fc:  lea    -0x25c(%ebp),%eax
08361696 +0x0902:  mov    %eax,(%esp)
08361699 +0x0905:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
0836169e +0x090a:  mov    (%eax),%eax
083616a0 +0x090c:  mov    %eax,%ebx
083616a2 +0x090e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083616a7 +0x0913:  mov    %ebx,0x4(%esp)
083616ab +0x0917:  mov    %eax,(%esp)
083616ae +0x091a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083616b3 +0x091f:  mov    %eax,-0x38(%ebp)
083616b6 +0x0922:  cmpl   $0x0,-0x38(%ebp)
083616ba +0x0926:  jne    08361734 <+0x9a0>
083616bc +0x0928:  lea    -0x25c(%ebp),%eax
083616c2 +0x092e:  mov    %eax,(%esp)
083616c5 +0x0931:  call   0827e316 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x438>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x438
083616ca +0x0936:  mov    (%eax),%esi
083616cc +0x0938:  mov    -0x50(%ebp),%eax
083616cf +0x093b:  mov    %eax,(%esp)
083616d2 +0x093e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
083616d7 +0x0943:  mov    %eax,%ebx
083616d9 +0x0945:  movl   $0x1,0x14(%esp)
083616e1 +0x094d:  movl   $0x1,0x10(%esp)
083616e9 +0x0955:  movl   $0x9,0xc(%esp)
083616f1 +0x095d:  movl   $0x277b,0x8(%esp)
083616f9 +0x0965:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361701 +0x096d:  lea    -0x134(%ebp),%eax
08361707 +0x0973:  mov    %eax,(%esp)
0836170a +0x0976:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0836170f +0x097b:  mov    %esi,0xc(%esp)
08361713 +0x097f:  mov    %ebx,0x8(%esp)
08361717 +0x0983:  movl   $"Package item selection element not found (%d)->(%d)",0x4(%esp)
0836171f +0x098b:  lea    -0x134(%ebp),%eax
08361725 +0x0991:  mov    %eax,(%esp)
08361728 +0x0994:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0836172d +0x0999:  movb   $0x1,-0x61(%ebp)
08361731 +0x099d:  jmp    08361734 <+0x9a0>
08361733 +0x099f:  nop
08361734 +0x09a0:  lea    -0x25c(%ebp),%eax
0836173a +0x09a6:  mov    %eax,(%esp)
0836173d +0x09a9:  call   0827e300 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x422>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x422
08361742 +0x09ae:  lea    -0x260(%ebp),%eax
08361748 +0x09b4:  mov    %eax,0x4(%esp)
0836174c +0x09b8:  lea    -0x25c(%ebp),%eax
08361752 +0x09be:  mov    %eax,(%esp)
08361755 +0x09c1:  call   0827e2d4 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x3f6>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x3f6
0836175a +0x09c6:  test   %al,%al
0836175c +0x09c8:  jne    08361672 <+0x8de>
08361762 +0x09ce:  jmp    08361782 <+0x9ee>
08361764 +0x09d0:  mov    %edx,%ebx
08361766 +0x09d2:  mov    %eax,%esi
08361768 +0x09d4:  lea    -0x258(%ebp),%eax
0836176e +0x09da:  mov    %eax,(%esp)
08361771 +0x09dd:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
08361776 +0x09e2:  mov    %esi,%eax
08361778 +0x09e4:  mov    %ebx,%edx
0836177a +0x09e6:  mov    %eax,(%esp)
0836177d +0x09e9:  call   08ae3750 <_Unwind_Resume>
08361782 +0x09ee:  lea    -0x258(%ebp),%eax
08361788 +0x09f4:  mov    %eax,(%esp)
0836178b +0x09f7:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
08361790 +0x09fc:  lea    -0x248(%ebp),%eax
08361796 +0x0a02:  mov    %eax,(%esp)
08361799 +0x0a05:  call   082371fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8a4
0836179e +0x0a0a:  lea    -0x24c(%ebp),%eax
083617a4 +0x0a10:  mov    %eax,0x4(%esp)
083617a8 +0x0a14:  lea    -0x248(%ebp),%eax
083617ae +0x0a1a:  mov    %eax,(%esp)
083617b1 +0x0a1d:  call   082371ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc878>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc878
083617b6 +0x0a22:  test   %al,%al
083617b8 +0x0a24:  jne    083615e7 <+0x853>
083617be +0x0a2a:  jmp    083617d5 <+0xa41>
083617c0 +0x0a2c:  mov    -0x50(%ebp),%eax
083617c3 +0x0a2f:  mov    (%eax),%eax
083617c5 +0x0a31:  add    $0xc,%eax
083617c8 +0x0a34:  mov    (%eax),%edx
083617ca +0x0a36:  mov    -0x50(%ebp),%eax
083617cd +0x0a39:  mov    %eax,(%esp)
083617d0 +0x0a3c:  call   *%edx
083617d2 +0x0a3e:  cmp    $0x22,%eax
083617d5 +0x0a41:  lea    -0x22c(%ebp),%eax
083617db +0x0a47:  mov    %eax,(%esp)
083617de +0x0a4a:  call   08394656 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240f6
083617e3 +0x0a4f:  mov    0x8(%ebp),%eax
083617e6 +0x0a52:  mov    0xc(%eax),%eax
083617e9 +0x0a55:  lea    0x4(%eax),%edx
083617ec +0x0a58:  lea    -0x16c(%ebp),%eax
083617f2 +0x0a5e:  mov    %edx,0x4(%esp)
083617f6 +0x0a62:  mov    %eax,(%esp)
083617f9 +0x0a65:  call   0839461c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240bc
083617fe +0x0a6a:  sub    $0x4,%esp
08361801 +0x0a6d:  lea    -0x16c(%ebp),%eax
08361807 +0x0a73:  mov    %eax,0x4(%esp)
0836180b +0x0a77:  lea    -0x174(%ebp),%eax
08361811 +0x0a7d:  mov    %eax,(%esp)
08361814 +0x0a80:  call   08394600 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240a0
08361819 +0x0a85:  lea    -0x174(%ebp),%eax
0836181f +0x0a8b:  mov    %eax,0x4(%esp)
08361823 +0x0a8f:  lea    -0x22c(%ebp),%eax
08361829 +0x0a95:  mov    %eax,(%esp)
0836182c +0x0a98:  call   08394642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240e2
08361831 +0x0a9d:  test   %al,%al
08361833 +0x0a9f:  jne    08361203 <+0x46f>
08361839 +0x0aa5:  cmpb   $0x0,-0x61(%ebp)
0836183d +0x0aa9:  je     08361849 <+0xab5>
0836183f +0x0aab:  mov    $0x0,%ebx
08361844 +0x0ab0:  jmp    083620e0 <+0x134c>
08361849 +0x0ab5:  movb   $0x0,-0x61(%ebp)
0836184d +0x0ab9:  mov    0x8(%ebp),%eax
08361850 +0x0abc:  mov    0x18(%eax),%eax
08361853 +0x0abf:  mov    %eax,(%esp)
08361856 +0x0ac2:  call   08374c7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec46>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec46
0836185b +0x0ac7:  mov    %eax,-0x60(%ebp)
0836185e +0x0aca:  lea    -0x268(%ebp),%eax
08361864 +0x0ad0:  mov    -0x60(%ebp),%edx
08361867 +0x0ad3:  mov    %edx,0x4(%esp)
0836186b +0x0ad7:  mov    %eax,(%esp)
0836186e +0x0ada:  call   083947bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2425c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2425c
08361873 +0x0adf:  sub    $0x4,%esp
08361876 +0x0ae2:  lea    -0x270(%ebp),%eax
0836187c +0x0ae8:  mov    -0x60(%ebp),%edx
0836187f +0x0aeb:  mov    %edx,0x4(%esp)
08361883 +0x0aef:  mov    %eax,(%esp)
08361886 +0x0af2:  call   083947e2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24282>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24282
0836188b +0x0af7:  sub    $0x4,%esp
0836188e +0x0afa:  jmp    08361dbf <+0x102b>
08361893 +0x0aff:  lea    -0x268(%ebp),%eax
08361899 +0x0b05:  mov    %eax,(%esp)
0836189c +0x0b08:  call   083948b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24354>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24354
083618a1 +0x0b0d:  mov    0x4(%eax),%eax
083618a4 +0x0b10:  mov    %eax,-0x34(%ebp)
083618a7 +0x0b13:  mov    -0x34(%ebp),%eax
083618aa +0x0b16:  mov    0xb8(%eax),%eax
083618b0 +0x0b1c:  test   %eax,%eax
083618b2 +0x0b1e:  je     083618c6 <+0xb32>
083618b4 +0x0b20:  mov    -0x34(%ebp),%eax
083618b7 +0x0b23:  mov    0xb8(%eax),%eax
083618bd +0x0b29:  cmp    $0x19,%eax
083618c0 +0x0b2c:  jne    08361db1 <+0x101d>
083618c6 +0x0b32:  mov    -0x34(%ebp),%eax
083618c9 +0x0b35:  lea    0xc4(%eax),%edx
083618cf +0x0b3b:  lea    -0x124(%ebp),%eax
083618d5 +0x0b41:  mov    %edx,0x4(%esp)
083618d9 +0x0b45:  mov    %eax,(%esp)
083618dc +0x0b48:  call   083948c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24368>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24368
083618e1 +0x0b4d:  sub    $0x4,%esp
083618e4 +0x0b50:  lea    -0x124(%ebp),%eax
083618ea +0x0b56:  mov    %eax,0x4(%esp)
083618ee +0x0b5a:  lea    -0x274(%ebp),%eax
083618f4 +0x0b60:  mov    %eax,(%esp)
083618f7 +0x0b63:  call   083948ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2438c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2438c
083618fc +0x0b68:  jmp    083619d2 <+0xc3e>
08361901 +0x0b6d:  lea    -0x274(%ebp),%eax
08361907 +0x0b73:  mov    %eax,(%esp)
0836190a +0x0b76:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0836190f +0x0b7b:  mov    (%eax),%eax
08361911 +0x0b7d:  mov    %eax,-0x30(%ebp)
08361914 +0x0b80:  cmpl   $0x0,-0x30(%ebp)
08361918 +0x0b84:  je     083619ba <+0xc26>
0836191e +0x0b8a:  cmpl   $0x1,-0x30(%ebp)
08361922 +0x0b8e:  je     083619bd <+0xc29>
08361928 +0x0b94:  cmpl   $0x2,-0x30(%ebp)
0836192c +0x0b98:  je     083619c0 <+0xc2c>
08361932 +0x0b9e:  cmpl   $0x3e7,-0x30(%ebp)
08361939 +0x0ba5:  je     083619c3 <+0xc2f>
0836193f +0x0bab:  mov    -0x30(%ebp),%eax
08361942 +0x0bae:  mov    %eax,0x4(%esp)
08361946 +0x0bb2:  mov    0x8(%ebp),%eax
08361949 +0x0bb5:  mov    %eax,(%esp)
0836194c +0x0bb8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08361951 +0x0bbd:  test   %eax,%eax
08361953 +0x0bbf:  sete   %al
08361956 +0x0bc2:  test   %al,%al
08361958 +0x0bc4:  je     083619c4 <+0xc30>
0836195a +0x0bc6:  lea    -0x274(%ebp),%eax
08361960 +0x0bcc:  mov    %eax,(%esp)
08361963 +0x0bcf:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08361968 +0x0bd4:  mov    (%eax),%esi
0836196a +0x0bd6:  mov    -0x34(%ebp),%eax
0836196d +0x0bd9:  mov    0x4(%eax),%ebx
08361970 +0x0bdc:  movl   $0x5,0xc(%esp)
08361978 +0x0be4:  movl   $0x27a1,0x8(%esp)
08361980 +0x0bec:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361988 +0x0bf4:  lea    -0x11c(%ebp),%eax
0836198e +0x0bfa:  mov    %eax,(%esp)
08361991 +0x0bfd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08361996 +0x0c02:  mov    %esi,0xc(%esp)
0836199a +0x0c06:  mov    %ebx,0x8(%esp)
0836199e +0x0c0a:  movl   $"Quest reward item element not found (quest: %d)(item: %d)",0x4(%esp)
083619a6 +0x0c12:  lea    -0x11c(%ebp),%eax
083619ac +0x0c18:  mov    %eax,(%esp)
083619af +0x0c1b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083619b4 +0x0c20:  movb   $0x0,-0x61(%ebp)
083619b8 +0x0c24:  jmp    083619c4 <+0xc30>
083619ba +0x0c26:  nop
083619bb +0x0c27:  jmp    083619c4 <+0xc30>
083619bd +0x0c29:  nop
083619be +0x0c2a:  jmp    083619c4 <+0xc30>
083619c0 +0x0c2c:  nop
083619c1 +0x0c2d:  jmp    083619c4 <+0xc30>
083619c3 +0x0c2f:  nop
083619c4 +0x0c30:  lea    -0x274(%ebp),%eax
083619ca +0x0c36:  mov    %eax,(%esp)
083619cd +0x0c39:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
083619d2 +0x0c3e:  mov    -0x34(%ebp),%eax
083619d5 +0x0c41:  lea    0xc4(%eax),%edx
083619db +0x0c47:  lea    -0x120(%ebp),%eax
083619e1 +0x0c4d:  mov    %edx,0x4(%esp)
083619e5 +0x0c51:  mov    %eax,(%esp)
083619e8 +0x0c54:  call   08394906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243a6
083619ed +0x0c59:  sub    $0x4,%esp
083619f0 +0x0c5c:  lea    -0x120(%ebp),%eax
083619f6 +0x0c62:  mov    %eax,0x4(%esp)
083619fa +0x0c66:  lea    -0x274(%ebp),%eax
08361a00 +0x0c6c:  mov    %eax,(%esp)
08361a03 +0x0c6f:  call   0839492c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243cc
08361a08 +0x0c74:  test   %al,%al
08361a0a +0x0c76:  jne    08361901 <+0xb6d>
08361a10 +0x0c7c:  mov    -0x34(%ebp),%eax
08361a13 +0x0c7f:  lea    0xd0(%eax),%edx
08361a19 +0x0c85:  lea    -0x10c(%ebp),%eax
08361a1f +0x0c8b:  mov    %edx,0x4(%esp)
08361a23 +0x0c8f:  mov    %eax,(%esp)
08361a26 +0x0c92:  call   083948c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24368>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24368
08361a2b +0x0c97:  sub    $0x4,%esp
08361a2e +0x0c9a:  lea    -0x10c(%ebp),%eax
08361a34 +0x0ca0:  mov    %eax,0x4(%esp)
08361a38 +0x0ca4:  lea    -0x278(%ebp),%eax
08361a3e +0x0caa:  mov    %eax,(%esp)
08361a41 +0x0cad:  call   083948ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2438c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2438c
08361a46 +0x0cb2:  jmp    08361b1c <+0xd88>
08361a4b +0x0cb7:  lea    -0x278(%ebp),%eax
08361a51 +0x0cbd:  mov    %eax,(%esp)
08361a54 +0x0cc0:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08361a59 +0x0cc5:  mov    (%eax),%eax
08361a5b +0x0cc7:  mov    %eax,-0x2c(%ebp)
08361a5e +0x0cca:  cmpl   $0x0,-0x2c(%ebp)
08361a62 +0x0cce:  je     08361b04 <+0xd70>
08361a68 +0x0cd4:  cmpl   $0x1,-0x2c(%ebp)
08361a6c +0x0cd8:  je     08361b07 <+0xd73>
08361a72 +0x0cde:  cmpl   $0x2,-0x2c(%ebp)
08361a76 +0x0ce2:  je     08361b0a <+0xd76>
08361a7c +0x0ce8:  cmpl   $0x3e7,-0x2c(%ebp)
08361a83 +0x0cef:  je     08361b0d <+0xd79>
08361a89 +0x0cf5:  mov    -0x2c(%ebp),%eax
08361a8c +0x0cf8:  mov    %eax,0x4(%esp)
08361a90 +0x0cfc:  mov    0x8(%ebp),%eax
08361a93 +0x0cff:  mov    %eax,(%esp)
08361a96 +0x0d02:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08361a9b +0x0d07:  test   %eax,%eax
08361a9d +0x0d09:  sete   %al
08361aa0 +0x0d0c:  test   %al,%al
08361aa2 +0x0d0e:  je     08361b0e <+0xd7a>
08361aa4 +0x0d10:  lea    -0x278(%ebp),%eax
08361aaa +0x0d16:  mov    %eax,(%esp)
08361aad +0x0d19:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
08361ab2 +0x0d1e:  mov    (%eax),%esi
08361ab4 +0x0d20:  mov    -0x34(%ebp),%eax
08361ab7 +0x0d23:  mov    0x4(%eax),%ebx
08361aba +0x0d26:  movl   $0x5,0xc(%esp)
08361ac2 +0x0d2e:  movl   $0x27ac,0x8(%esp)
08361aca +0x0d36:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361ad2 +0x0d3e:  lea    -0x104(%ebp),%eax
08361ad8 +0x0d44:  mov    %eax,(%esp)
08361adb +0x0d47:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08361ae0 +0x0d4c:  mov    %esi,0xc(%esp)
08361ae4 +0x0d50:  mov    %ebx,0x8(%esp)
08361ae8 +0x0d54:  movl   $"Quest reward select item element not found (quest: %d)(item: %d)",0x4(%esp)
08361af0 +0x0d5c:  lea    -0x104(%ebp),%eax
08361af6 +0x0d62:  mov    %eax,(%esp)
08361af9 +0x0d65:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08361afe +0x0d6a:  movb   $0x0,-0x61(%ebp)
08361b02 +0x0d6e:  jmp    08361b0e <+0xd7a>
08361b04 +0x0d70:  nop
08361b05 +0x0d71:  jmp    08361b0e <+0xd7a>
08361b07 +0x0d73:  nop
08361b08 +0x0d74:  jmp    08361b0e <+0xd7a>
08361b0a +0x0d76:  nop
08361b0b +0x0d77:  jmp    08361b0e <+0xd7a>
08361b0d +0x0d79:  nop
08361b0e +0x0d7a:  lea    -0x278(%ebp),%eax
08361b14 +0x0d80:  mov    %eax,(%esp)
08361b17 +0x0d83:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
08361b1c +0x0d88:  mov    -0x34(%ebp),%eax
08361b1f +0x0d8b:  lea    0xd0(%eax),%edx
08361b25 +0x0d91:  lea    -0x108(%ebp),%eax
08361b2b +0x0d97:  mov    %edx,0x4(%esp)
08361b2f +0x0d9b:  mov    %eax,(%esp)
08361b32 +0x0d9e:  call   08394906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243a6
08361b37 +0x0da3:  sub    $0x4,%esp
08361b3a +0x0da6:  lea    -0x108(%ebp),%eax
08361b40 +0x0dac:  mov    %eax,0x4(%esp)
08361b44 +0x0db0:  lea    -0x278(%ebp),%eax
08361b4a +0x0db6:  mov    %eax,(%esp)
08361b4d +0x0db9:  call   0839492c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243cc
08361b52 +0x0dbe:  test   %al,%al
08361b54 +0x0dc0:  jne    08361a4b <+0xcb7>
08361b5a +0x0dc6:  mov    -0x34(%ebp),%eax
08361b5d +0x0dc9:  lea    0xdc(%eax),%edx
08361b63 +0x0dcf:  lea    -0xf4(%ebp),%eax
08361b69 +0x0dd5:  mov    %edx,0x4(%esp)
08361b6d +0x0dd9:  mov    %eax,(%esp)
08361b70 +0x0ddc:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08361b75 +0x0de1:  sub    $0x4,%esp
08361b78 +0x0de4:  lea    -0xf4(%ebp),%eax
08361b7e +0x0dea:  mov    %eax,0x4(%esp)
08361b82 +0x0dee:  lea    -0x27c(%ebp),%eax
08361b88 +0x0df4:  mov    %eax,(%esp)
08361b8b +0x0df7:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08361b90 +0x0dfc:  jmp    08361c29 <+0xe95>
08361b95 +0x0e01:  lea    -0x27c(%ebp),%eax
08361b9b +0x0e07:  mov    %eax,(%esp)
08361b9e +0x0e0a:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08361ba3 +0x0e0f:  mov    (%eax),%eax
08361ba5 +0x0e11:  mov    %eax,0x4(%esp)
08361ba9 +0x0e15:  mov    0x8(%ebp),%eax
08361bac +0x0e18:  mov    %eax,(%esp)
08361baf +0x0e1b:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
08361bb4 +0x0e20:  mov    %eax,-0x28(%ebp)
08361bb7 +0x0e23:  cmpl   $0x0,-0x28(%ebp)
08361bbb +0x0e27:  jne    08361c1b <+0xe87>
08361bbd +0x0e29:  lea    -0x27c(%ebp),%eax
08361bc3 +0x0e2f:  mov    %eax,(%esp)
08361bc6 +0x0e32:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08361bcb +0x0e37:  mov    (%eax),%esi
08361bcd +0x0e39:  mov    -0x34(%ebp),%eax
08361bd0 +0x0e3c:  mov    0x4(%eax),%ebx
08361bd3 +0x0e3f:  movl   $0x5,0xc(%esp)
08361bdb +0x0e47:  movl   $0x27cd,0x8(%esp)
08361be3 +0x0e4f:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361beb +0x0e57:  lea    -0xec(%ebp),%eax
08361bf1 +0x0e5d:  mov    %eax,(%esp)
08361bf4 +0x0e60:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08361bf9 +0x0e65:  mov    %esi,0xc(%esp)
08361bfd +0x0e69:  mov    %ebx,0x8(%esp)
08361c01 +0x0e6d:  movl   $"Quest reward collision quest element now found (quest: %d)(collision quest: %d)",0x4(%esp)
08361c09 +0x0e75:  lea    -0xec(%ebp),%eax
08361c0f +0x0e7b:  mov    %eax,(%esp)
08361c12 +0x0e7e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08361c17 +0x0e83:  movb   $0x0,-0x61(%ebp)
08361c1b +0x0e87:  lea    -0x27c(%ebp),%eax
08361c21 +0x0e8d:  mov    %eax,(%esp)
08361c24 +0x0e90:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08361c29 +0x0e95:  mov    -0x34(%ebp),%eax
08361c2c +0x0e98:  lea    0xdc(%eax),%edx
08361c32 +0x0e9e:  lea    -0xf0(%ebp),%eax
08361c38 +0x0ea4:  mov    %edx,0x4(%esp)
08361c3c +0x0ea8:  mov    %eax,(%esp)
08361c3f +0x0eab:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08361c44 +0x0eb0:  sub    $0x4,%esp
08361c47 +0x0eb3:  lea    -0xf0(%ebp),%eax
08361c4d +0x0eb9:  mov    %eax,0x4(%esp)
08361c51 +0x0ebd:  lea    -0x27c(%ebp),%eax
08361c57 +0x0ec3:  mov    %eax,(%esp)
08361c5a +0x0ec6:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
08361c5f +0x0ecb:  test   %al,%al
08361c61 +0x0ecd:  jne    08361b95 <+0xe01>
08361c67 +0x0ed3:  mov    -0x34(%ebp),%eax
08361c6a +0x0ed6:  lea    0xec(%eax),%edx
08361c70 +0x0edc:  lea    -0xdc(%ebp),%eax
08361c76 +0x0ee2:  mov    %edx,0x4(%esp)
08361c7a +0x0ee6:  mov    %eax,(%esp)
08361c7d +0x0ee9:  call   083948c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24368>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24368
08361c82 +0x0eee:  sub    $0x4,%esp
08361c85 +0x0ef1:  lea    -0xdc(%ebp),%eax
08361c8b +0x0ef7:  mov    %eax,0x4(%esp)
08361c8f +0x0efb:  lea    -0x280(%ebp),%eax
08361c95 +0x0f01:  mov    %eax,(%esp)
08361c98 +0x0f04:  call   083948ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2438c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2438c
08361c9d +0x0f09:  jmp    08361d73 <+0xfdf>
08361ca2 +0x0f0e:  lea    -0x280(%ebp),%eax
08361ca8 +0x0f14:  mov    %eax,(%esp)
08361cab +0x0f17:  call   08394978 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24418>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24418
08361cb0 +0x0f1c:  mov    (%eax),%eax
08361cb2 +0x0f1e:  mov    %eax,-0x24(%ebp)
08361cb5 +0x0f21:  cmpl   $0x0,-0x24(%ebp)
08361cb9 +0x0f25:  je     08361d5b <+0xfc7>
08361cbf +0x0f2b:  cmpl   $0x1,-0x24(%ebp)
08361cc3 +0x0f2f:  je     08361d5e <+0xfca>
08361cc9 +0x0f35:  cmpl   $0x2,-0x24(%ebp)
08361ccd +0x0f39:  je     08361d61 <+0xfcd>
08361cd3 +0x0f3f:  cmpl   $0x3e7,-0x24(%ebp)
08361cda +0x0f46:  je     08361d64 <+0xfd0>
08361ce0 +0x0f4c:  mov    -0x24(%ebp),%eax
08361ce3 +0x0f4f:  mov    %eax,0x4(%esp)
08361ce7 +0x0f53:  mov    0x8(%ebp),%eax
08361cea +0x0f56:  mov    %eax,(%esp)
08361ced +0x0f59:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08361cf2 +0x0f5e:  test   %eax,%eax
08361cf4 +0x0f60:  sete   %al
08361cf7 +0x0f63:  test   %al,%al
08361cf9 +0x0f65:  je     08361d65 <+0xfd1>
08361cfb +0x0f67:  lea    -0x280(%ebp),%eax
08361d01 +0x0f6d:  mov    %eax,(%esp)
08361d04 +0x0f70:  call   08394978 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24418>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24418
08361d09 +0x0f75:  mov    (%eax),%esi
08361d0b +0x0f77:  mov    -0x34(%ebp),%eax
08361d0e +0x0f7a:  mov    0x4(%eax),%ebx
08361d11 +0x0f7d:  movl   $0x5,0xc(%esp)
08361d19 +0x0f85:  movl   $0x27da,0x8(%esp)
08361d21 +0x0f8d:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361d29 +0x0f95:  lea    -0xd4(%ebp),%eax
08361d2f +0x0f9b:  mov    %eax,(%esp)
08361d32 +0x0f9e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08361d37 +0x0fa3:  mov    %esi,0xc(%esp)
08361d3b +0x0fa7:  mov    %ebx,0x8(%esp)
08361d3f +0x0fab:  movl   $"Quest reward collision item element not found (quest: %d)(item: %d)",0x4(%esp)
08361d47 +0x0fb3:  lea    -0xd4(%ebp),%eax
08361d4d +0x0fb9:  mov    %eax,(%esp)
08361d50 +0x0fbc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08361d55 +0x0fc1:  movb   $0x0,-0x61(%ebp)
08361d59 +0x0fc5:  jmp    08361d65 <+0xfd1>
08361d5b +0x0fc7:  nop
08361d5c +0x0fc8:  jmp    08361d65 <+0xfd1>
08361d5e +0x0fca:  nop
08361d5f +0x0fcb:  jmp    08361d65 <+0xfd1>
08361d61 +0x0fcd:  nop
08361d62 +0x0fce:  jmp    08361d65 <+0xfd1>
08361d64 +0x0fd0:  nop
08361d65 +0x0fd1:  lea    -0x280(%ebp),%eax
08361d6b +0x0fd7:  mov    %eax,(%esp)
08361d6e +0x0fda:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
08361d73 +0x0fdf:  mov    -0x34(%ebp),%eax
08361d76 +0x0fe2:  lea    0xec(%eax),%edx
08361d7c +0x0fe8:  lea    -0xd8(%ebp),%eax
08361d82 +0x0fee:  mov    %edx,0x4(%esp)
08361d86 +0x0ff2:  mov    %eax,(%esp)
08361d89 +0x0ff5:  call   08394906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243a6
08361d8e +0x0ffa:  sub    $0x4,%esp
08361d91 +0x0ffd:  lea    -0xd8(%ebp),%eax
08361d97 +0x1003:  mov    %eax,0x4(%esp)
08361d9b +0x1007:  lea    -0x280(%ebp),%eax
08361da1 +0x100d:  mov    %eax,(%esp)
08361da4 +0x1010:  call   0839492c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243cc
08361da9 +0x1015:  test   %al,%al
08361dab +0x1017:  jne    08361ca2 <+0xf0e>
08361db1 +0x101d:  lea    -0x268(%ebp),%eax
08361db7 +0x1023:  mov    %eax,(%esp)
08361dba +0x1026:  call   0839481c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x242bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x242bc
08361dbf +0x102b:  lea    -0x270(%ebp),%eax
08361dc5 +0x1031:  mov    %eax,0x4(%esp)
08361dc9 +0x1035:  lea    -0x268(%ebp),%eax
08361dcf +0x103b:  mov    %eax,(%esp)
08361dd2 +0x103e:  call   08394808 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x242a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x242a8
08361dd7 +0x1043:  test   %al,%al
08361dd9 +0x1045:  jne    08361893 <+0xaff>
08361ddf +0x104b:  cmpb   $0x0,-0x61(%ebp)
08361de3 +0x104f:  je     08361def <+0x105b>
08361de5 +0x1051:  mov    $0x0,%ebx
08361dea +0x1056:  jmp    083620e0 <+0x134c>
08361def +0x105b:  mov    0x8(%ebp),%eax
08361df2 +0x105e:  mov    0x8(%eax),%eax
08361df5 +0x1061:  lea    0x18(%eax),%edx
08361df8 +0x1064:  lea    -0xc4(%ebp),%eax
08361dfe +0x106a:  mov    %edx,0x4(%esp)
08361e02 +0x106e:  mov    %eax,(%esp)
08361e05 +0x1071:  call   0838f262 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed02
08361e0a +0x1076:  sub    $0x4,%esp
08361e0d +0x1079:  lea    -0xc4(%ebp),%eax
08361e13 +0x107f:  mov    %eax,0x4(%esp)
08361e17 +0x1083:  lea    -0x288(%ebp),%eax
08361e1d +0x1089:  mov    %eax,(%esp)
08361e20 +0x108c:  call   08394982 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24422>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24422
08361e25 +0x1091:  jmp    08361f00 <+0x116c>
08361e2a +0x1096:  lea    -0x288(%ebp),%eax
08361e30 +0x109c:  mov    %eax,(%esp)
08361e33 +0x109f:  call   083949e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24488>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24488
08361e38 +0x10a4:  mov    0x4(%eax),%eax
08361e3b +0x10a7:  mov    %eax,-0x20(%ebp)
08361e3e +0x10aa:  mov    -0x20(%ebp),%eax
08361e41 +0x10ad:  mov    0x58(%eax),%eax
08361e44 +0x10b0:  test   %eax,%eax
08361e46 +0x10b2:  jle    08361e6c <+0x10d8>
08361e48 +0x10b4:  mov    -0x20(%ebp),%eax
08361e4b +0x10b7:  mov    0x58(%eax),%eax
08361e4e +0x10ba:  cmp    $0xc8,%eax
08361e53 +0x10bf:  jg     08361e6c <+0x10d8>
08361e55 +0x10c1:  mov    -0x20(%ebp),%eax
08361e58 +0x10c4:  mov    0x5c(%eax),%eax
08361e5b +0x10c7:  test   %eax,%eax
08361e5d +0x10c9:  jle    08361e6c <+0x10d8>
08361e5f +0x10cb:  mov    -0x20(%ebp),%eax
08361e62 +0x10ce:  mov    0x5c(%eax),%eax
08361e65 +0x10d1:  cmp    $0xc8,%eax
08361e6a +0x10d6:  jle    08361edd <+0x1149>
08361e6c +0x10d8:  mov    -0x20(%ebp),%eax
08361e6f +0x10db:  mov    0x5c(%eax),%edi
08361e72 +0x10de:  mov    -0x20(%ebp),%eax
08361e75 +0x10e1:  mov    0x58(%eax),%esi
08361e78 +0x10e4:  mov    -0x20(%ebp),%eax
08361e7b +0x10e7:  mov    %eax,(%esp)
08361e7e +0x10ea:  call   083748ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe89a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe89a
08361e83 +0x10ef:  mov    %eax,%ebx
08361e85 +0x10f1:  movl   $0x1,0x14(%esp)
08361e8d +0x10f9:  movl   $0x1,0x10(%esp)
08361e95 +0x1101:  movl   $0x9,0xc(%esp)
08361e9d +0x1109:  movl   $0x2808,0x8(%esp)
08361ea5 +0x1111:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08361ead +0x1119:  lea    -0xac(%ebp),%eax
08361eb3 +0x111f:  mov    %eax,(%esp)
08361eb6 +0x1122:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08361ebb +0x1127:  mov    %edi,0x10(%esp)
08361ebf +0x112b:  mov    %esi,0xc(%esp)
08361ec3 +0x112f:  mov    %ebx,0x8(%esp)
08361ec7 +0x1133:  movl   $"Error: Invalid monster(%d) level(%d-%d)",0x4(%esp)
08361ecf +0x113b:  lea    -0xac(%ebp),%eax
08361ed5 +0x1141:  mov    %eax,(%esp)
08361ed8 +0x1144:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08361edd +0x1149:  lea    -0x9c(%ebp),%eax
08361ee3 +0x114f:  movl   $0x0,0x8(%esp)
08361eeb +0x1157:  lea    -0x288(%ebp),%edx
08361ef1 +0x115d:  mov    %edx,0x4(%esp)
08361ef5 +0x1161:  mov    %eax,(%esp)
08361ef8 +0x1164:  call   083949b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24452>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24452
08361efd +0x1169:  sub    $0x4,%esp
08361f00 +0x116c:  mov    0x8(%ebp),%eax
08361f03 +0x116f:  mov    0x8(%eax),%eax
08361f06 +0x1172:  lea    0x18(%eax),%edx
08361f09 +0x1175:  lea    -0xb4(%ebp),%eax
08361f0f +0x117b:  mov    %edx,0x4(%esp)
08361f13 +0x117f:  mov    %eax,(%esp)
08361f16 +0x1182:  call   0838f288 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed28
08361f1b +0x1187:  sub    $0x4,%esp
08361f1e +0x118a:  lea    -0xb4(%ebp),%eax
08361f24 +0x1190:  mov    %eax,0x4(%esp)
08361f28 +0x1194:  lea    -0xbc(%ebp),%eax
08361f2e +0x119a:  mov    %eax,(%esp)
08361f31 +0x119d:  call   08394982 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24422>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24422
08361f36 +0x11a2:  lea    -0xbc(%ebp),%eax
08361f3c +0x11a8:  mov    %eax,0x4(%esp)
08361f40 +0x11ac:  lea    -0x288(%ebp),%eax
08361f46 +0x11b2:  mov    %eax,(%esp)
08361f49 +0x11b5:  call   0839499e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2443e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2443e
08361f4e +0x11ba:  test   %al,%al
08361f50 +0x11bc:  jne    08361e2a <+0x1096>
08361f56 +0x11c2:  lea    -0x204(%ebp),%eax
08361f5c +0x11c8:  mov    %eax,(%esp)
08361f5f +0x11cb:  call   08374ff2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefbe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefbe
08361f64 +0x11d0:  mov    0x8(%ebp),%eax
08361f67 +0x11d3:  mov    (%eax),%eax
08361f69 +0x11d5:  mov    %eax,%edx
08361f6b +0x11d7:  lea    -0x94(%ebp),%eax
08361f71 +0x11dd:  mov    %edx,0x4(%esp)
08361f75 +0x11e1:  mov    %eax,(%esp)
08361f78 +0x11e4:  call   0838a74a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1ea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1ea
08361f7d +0x11e9:  sub    $0x4,%esp
08361f80 +0x11ec:  lea    -0x94(%ebp),%eax
08361f86 +0x11f2:  mov    %eax,0x4(%esp)
08361f8a +0x11f6:  lea    -0x290(%ebp),%eax
08361f90 +0x11fc:  mov    %eax,(%esp)
08361f93 +0x11ff:  call   083945be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2405e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2405e
08361f98 +0x1204:  jmp    08361fe2 <+0x124e>
08361f9a +0x1206:  lea    -0x290(%ebp),%eax
08361fa0 +0x120c:  mov    %eax,(%esp)
08361fa3 +0x120f:  call   0838a90e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3ae
08361fa8 +0x1214:  mov    0x4(%eax),%eax
08361fab +0x1217:  mov    %eax,-0x1c(%ebp)
08361fae +0x121a:  mov    -0x1c(%ebp),%eax
08361fb1 +0x121d:  mov    %eax,(%esp)
08361fb4 +0x1220:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08361fb9 +0x1225:  cwtl
08361fba +0x1226:  movl   $0x4,0x8(%esp)
08361fc2 +0x122e:  mov    %eax,0x4(%esp)
08361fc6 +0x1232:  lea    -0x204(%ebp),%eax
08361fcc +0x1238:  mov    %eax,(%esp)
08361fcf +0x123b:  call   08374f24 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeef0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeef0
08361fd4 +0x1240:  lea    -0x290(%ebp),%eax
08361fda +0x1246:  mov    %eax,(%esp)
08361fdd +0x1249:  call   083949fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2449c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2449c
08361fe2 +0x124e:  mov    0x8(%ebp),%eax
08361fe5 +0x1251:  mov    (%eax),%eax
08361fe7 +0x1253:  mov    %eax,%edx
08361fe9 +0x1255:  lea    -0x84(%ebp),%eax
08361fef +0x125b:  mov    %edx,0x4(%esp)
08361ff3 +0x125f:  mov    %eax,(%esp)
08361ff6 +0x1262:  call   0838a770 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a210>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a210
08361ffb +0x1267:  sub    $0x4,%esp
08361ffe +0x126a:  lea    -0x84(%ebp),%eax
08362004 +0x1270:  mov    %eax,0x4(%esp)
08362008 +0x1274:  lea    -0x8c(%ebp),%eax
0836200e +0x127a:  mov    %eax,(%esp)
08362011 +0x127d:  call   083945be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2405e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2405e
08362016 +0x1282:  lea    -0x8c(%ebp),%eax
0836201c +0x1288:  mov    %eax,0x4(%esp)
08362020 +0x128c:  lea    -0x290(%ebp),%eax
08362026 +0x1292:  mov    %eax,(%esp)
08362029 +0x1295:  call   0838a948 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3e8
0836202e +0x129a:  test   %al,%al
08362030 +0x129c:  jne    08361f9a <+0x1206>
08362036 +0x12a2:  movl   $0x1800,0x8(%esp)
0836203e +0x12aa:  lea    -0x1a9c(%ebp),%eax
08362044 +0x12b0:  add    $0xc,%eax
08362047 +0x12b3:  mov    %eax,0x4(%esp)
0836204b +0x12b7:  lea    -0x204(%ebp),%eax
08362051 +0x12bd:  mov    %eax,(%esp)
08362054 +0x12c0:  call   0848441c <_ZNK8WongWork13CDungeonClear8toStringEPcj>  ; WongWork::CDungeonClear::toString(char*, unsigned int) const
08362059 +0x12c5:  shr    $0x1f,%eax
0836205c +0x12c8:  test   %al,%al
0836205e +0x12ca:  je     083620ad <+0x1319>
08362060 +0x12cc:  movl   $0x1,0x14(%esp)
08362068 +0x12d4:  movl   $0x1,0x10(%esp)
08362070 +0x12dc:  movl   $0x9,0xc(%esp)
08362078 +0x12e4:  movl   $0x2815,0x8(%esp)
08362080 +0x12ec:  movl   $&_ZZNK12CDataManager6VerifyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08362088 +0x12f4:  lea    -0x7c(%ebp),%eax
0836208b +0x12f7:  mov    %eax,(%esp)
0836208e +0x12fa:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08362093 +0x12ff:  movl   $"Simulate dungeon clear data fail!!!!",0x4(%esp)
0836209b +0x1307:  lea    -0x7c(%ebp),%eax
0836209e +0x130a:  mov    %eax,(%esp)
083620a1 +0x130d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083620a6 +0x1312:  mov    $0x0,%ebx
083620ab +0x1317:  jmp    083620d2 <+0x133e>
083620ad +0x1319:  mov    $0x1,%ebx
083620b2 +0x131e:  jmp    083620d2 <+0x133e>
083620b4 +0x1320:  mov    %edx,%ebx
083620b6 +0x1322:  mov    %eax,%esi
083620b8 +0x1324:  lea    -0x204(%ebp),%eax
083620be +0x132a:  mov    %eax,(%esp)
083620c1 +0x132d:  call   08375006 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefd2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefd2
083620c6 +0x1332:  mov    %esi,%eax
083620c8 +0x1334:  mov    %ebx,%edx
083620ca +0x1336:  mov    %eax,(%esp)
083620cd +0x1339:  call   08ae3750 <_Unwind_Resume>
083620d2 +0x133e:  lea    -0x204(%ebp),%eax
083620d8 +0x1344:  mov    %eax,(%esp)
083620db +0x1347:  call   08375006 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefd2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefd2
083620e0 +0x134c:  mov    %ebx,%eax
083620e2 +0x134e:  lea    -0xc(%ebp),%esp
083620e5 +0x1351:  add    $0x0,%esp
083620e8 +0x1354:  pop    %ebx
083620e9 +0x1355:  pop    %esi
083620ea +0x1356:  pop    %edi
083620eb +0x1357:  pop    %ebp
083620ec +0x1358:  ret
083620ed +0x1359:  nop
```

## 反编译 C

```c
// CDataManager::Verify @ 0x8360d94

/* CDataManager::Verify() const */

bool __thiscall CDataManager::Verify(CDataManager *this)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  vector *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  char acStack_1a94 [6144];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_294 [8];
  _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  local_28c [8];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_284 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_280 [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_27c [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_278 [4];
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_274 [8];
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_26c [8];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_264 [4];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_260 [4];
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> local_25c [12];
  __normal_iterator local_250 [4];
  __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
  local_24c [4];
  __normal_iterator local_248 [4];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_244 [4];
  __normal_iterator local_240 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_23c [4];
  __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
  local_238 [4];
  __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
  local_234 [4];
  _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
  local_230 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_228 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_220 [8];
  _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
  local_218 [8];
  _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
  local_210 [8];
  CDungeonClear local_208 [24];
  cMyTrace local_1f0 [16];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
  local_1e0 [8];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
  local_1d8 [8];
  cMyTrace local_1d0 [16];
  cMyTrace local_1c0 [16];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_1b0 [8];
  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
  local_1a8 [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_1a0 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_198 [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_190 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_188 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_180 [8];
  _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
  local_178 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_170 [8];
  __normal_iterator local_168 [4];
  __normal_iterator local_164 [4];
  cMyTrace local_160 [16];
  cMyTrace local_150 [16];
  __normal_iterator local_140 [4];
  __normal_iterator local_13c [4];
  cMyTrace local_138 [16];
  __normal_iterator local_128 [4];
  __normal_iterator local_124 [4];
  cMyTrace local_120 [16];
  __normal_iterator local_110 [4];
  __normal_iterator local_10c [4];
  cMyTrace local_108 [16];
  __normal_iterator local_f8 [4];
  __normal_iterator local_f4 [4];
  cMyTrace local_f0 [16];
  __normal_iterator local_e0 [4];
  __normal_iterator local_dc [4];
  cMyTrace local_d8 [16];
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_c8 [8];
  _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  local_c0 [8];
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_b8 [8];
  cMyTrace local_b0 [16];
  _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  local_a0 [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_98 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_90 [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_88 [8];
  cMyTrace local_80 [18];
  char local_6e;
  byte local_6d;
  undefined4 local_6c;
  char local_65;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  CItem *local_54;
  CItem *local_50;
  int local_4c;
  CItem *local_48;
  CItem *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CMonster *local_24;
  CDungeon *local_20;
  
  for (local_60 = 1; local_60 < 0xc6; local_60 = local_60 + 1) {
  }
  for (local_5c = 0; local_5c < 200; local_5c = local_5c + 1) {
    if (*(uint *)(this + (local_5c + 0x2b69) * 4 + 4) <=
        *(uint *)(this + (local_5c + 0x2b68) * 4 + 4)) {
      uVar3 = *(undefined4 *)(this + (local_5c + 0x2b68) * 4 + 4);
      cMyTrace::cMyTrace(local_1f0,"bool CDataManager::Verify() const",0x2723,9,true,true);
      cMyTrace::operator()
                (local_1f0,"Warning: Unusual mob reward(%d) on mob grade(%d)",uVar3,local_5c);
    }
  }
  local_6e = '\0';
  for (local_58 = 0; local_58 < 0xb; local_58 = local_58 + 1) {
    CSkillList::getSkillList(*(CSkillList **)(this + 0x10),local_58);
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::begin(local_1e0);
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
    ::_Hashtable_const_iterator(local_210,(_Hashtable_iterator *)local_1e0);
    CSkillList::getSkillList(*(CSkillList **)(this + 0x10),local_58);
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_1d8);
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
    ::_Hashtable_const_iterator(local_218,(_Hashtable_iterator *)local_1d8);
    while (cVar1 = __gnu_cxx::
                   _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                   ::operator!=(local_210,(_Hashtable_const_iterator *)local_218), cVar1 != '\0') {
      iVar10 = __gnu_cxx::
               _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
               ::operator->(local_210);
      if (*(int *)(*(int *)(iVar10 + 4) + 200) == 0) {
        iVar10 = __gnu_cxx::
                 _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                 ::operator->(local_210);
        uVar3 = CSkill::get_index(*(CSkill **)(iVar10 + 4));
        cMyTrace::cMyTrace(local_1d0,"bool CDataManager::Verify() const",0x272e,9,true,true);
        cMyTrace::operator()
                  (local_1d0,"Skill [required level range] tag value error (Job: %d)(Skill: %d)",
                   local_58,uVar3);
        local_6e = '\x01';
      }
      __gnu_cxx::
      _Hashtable_const_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
      ::operator++(local_210);
    }
  }
  if (local_6e == '\0') {
    local_6d = 0;
    local_6c = *(undefined4 *)(this + 4);
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    begin(local_220);
    while( true ) {
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      end(local_1b0);
      cVar1 = __gnu_cxx::
              _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
              ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                            *)local_220,(_Hashtable_const_iterator *)local_1b0);
      if (cVar1 == '\0') break;
      iVar10 = __gnu_cxx::
               _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
               ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                             *)local_220);
      local_6d = VerifyMap(this,*(CMap **)(iVar10 + 4),-1);
      local_6d = local_6d ^ 1;
      __gnu_cxx::
      _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
      ::operator++(local_1a8,(int)local_220);
    }
    if (local_6d == 0) {
      __gnu_cxx::
      hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
      begin(local_1a0);
      __gnu_cxx::
      _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
      ::_Hashtable_const_iterator(local_228,(_Hashtable_iterator *)local_1a0);
      while( true ) {
        __gnu_cxx::
        hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
        end(local_190);
        __gnu_cxx::
        _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
        ::_Hashtable_const_iterator(local_198,(_Hashtable_iterator *)local_190);
        cVar1 = __gnu_cxx::
                _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                ::operator!=(local_228,(_Hashtable_const_iterator *)local_198);
        if (cVar1 == '\0') break;
        iVar10 = __gnu_cxx::
                 _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                 ::operator->(local_228);
        VerifyDungeon(this,*(CDungeon **)(iVar10 + 4));
        __gnu_cxx::
        _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
        ::operator++(local_188,(int)local_228);
      }
      local_65 = '\0';
      __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
      ::begin(local_180);
      __gnu_cxx::
      _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
      ::_Hashtable_const_iterator(local_230,(_Hashtable_iterator *)local_180);
      while( true ) {
        __gnu_cxx::
        hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::end
                  (local_170);
        __gnu_cxx::
        _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
        ::_Hashtable_const_iterator(local_178,(_Hashtable_iterator *)local_170);
        cVar1 = __gnu_cxx::
                _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                ::operator!=(local_230,(_Hashtable_const_iterator *)local_178);
        if (cVar1 == '\0') break;
        iVar10 = __gnu_cxx::
                 _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                 ::operator->(local_230);
        local_54 = *(CItem **)(iVar10 + 4);
        cVar1 = CItem::is_stackable(local_54);
        if (cVar1 != '\0') {
          local_50 = local_54;
          iVar10 = (**(code **)(*(int *)local_54 + 0xc))(local_54);
          if ((iVar10 == 0xf) ||
             (iVar10 = (**(code **)(*(int *)local_54 + 0xc))(local_54), iVar10 == 0x10)) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>::
            begin();
            __gnu_cxx::
            __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
            ::__normal_iterator<stStackableBoosterElement_t*>(local_234,local_168);
            std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>::
            end();
            __gnu_cxx::
            __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
            ::__normal_iterator<stStackableBoosterElement_t*>(local_238,local_164);
            while (bVar11 = __gnu_cxx::operator!=(local_234,local_238), bVar11) {
              __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator->(local_234);
              std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
              ::begin();
              __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator->(local_234);
              std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
              ::end();
              while (bVar11 = __gnu_cxx::operator!=(local_23c,local_240), bVar11) {
                piVar7 = (int *)__gnu_cxx::
                                __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                                ::operator->(local_23c);
                if (*piVar7 != 1) {
                  piVar7 = (int *)__gnu_cxx::
                                  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                                  ::operator->(local_23c);
                  iVar10 = *piVar7;
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_4c = find_item(pCVar4,iVar10);
                  if (local_4c == 0) {
                    puVar8 = (undefined4 *)
                             __gnu_cxx::
                             __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                             ::operator->(local_23c);
                    uVar3 = *puVar8;
                    uVar5 = CItem::get_index(local_54);
                    cMyTrace::cMyTrace(local_160,"bool CDataManager::Verify() const",0x275a,9,true,
                                       true);
                    cMyTrace::operator()
                              (local_160,"Booster item element not found (%d)->(%d)",uVar5,uVar3);
                    local_65 = '\x01';
                  }
                }
                __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator++(local_23c);
              }
              __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator++(local_234);
            }
          }
          else {
            iVar10 = (**(code **)(*(int *)local_54 + 0xc))(local_54);
            if (iVar10 == 0xe) {
              local_48 = local_50 + 0x21c;
              std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::begin();
              std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::end();
              while (bVar11 = __gnu_cxx::operator!=(local_244,local_248), bVar11) {
                piVar7 = (int *)__gnu_cxx::
                                __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                                ::operator->(local_244);
                if (*piVar7 != 1) {
                  piVar7 = (int *)__gnu_cxx::
                                  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                                  ::operator->(local_244);
                  iVar10 = *piVar7;
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_40 = find_item(pCVar4,iVar10);
                  if (local_40 == 0) {
                    puVar8 = (undefined4 *)
                             __gnu_cxx::
                             __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                             ::operator->(local_244);
                    uVar3 = *puVar8;
                    uVar5 = CItem::get_index(local_54);
                    cMyTrace::cMyTrace(local_150,"bool CDataManager::Verify() const",0x276b,9,true,
                                       true);
                    cMyTrace::operator()
                              (local_150,"Package item element not found (%d)->(%d)",uVar5,uVar3);
                    local_65 = '\x01';
                  }
                }
                __gnu_cxx::
                __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                ::operator++(local_244);
              }
              local_44 = local_50 + 0x234;
              std::
              vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
              ::begin();
              std::
              vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
              ::end();
              while (bVar11 = __gnu_cxx::operator!=(local_24c,local_250), bVar11) {
                pvVar6 = (vector *)
                         __gnu_cxx::
                         __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                         ::operator*(local_24c);
                std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
                          (local_25c,pvVar6);
                    /* try { // try from 0836161a to 08361759 has its CatchHandler @ 08361764 */
                std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::begin();
                __gnu_cxx::
                __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                ::__normal_iterator<STStackablePackageData*>(local_260,local_140);
                std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::end();
                __gnu_cxx::
                __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                ::__normal_iterator<STStackablePackageData*>(local_264,local_13c);
                while (bVar11 = __gnu_cxx::operator!=(local_260,local_264), bVar11) {
                  piVar7 = (int *)__gnu_cxx::
                                  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                                  ::operator->(local_260);
                  if (*piVar7 != 1) {
                    piVar7 = (int *)__gnu_cxx::
                                    __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                                    ::operator->(local_260);
                    iVar10 = *piVar7;
                    pCVar4 = (CDataManager *)G_CDataManager();
                    local_3c = find_item(pCVar4,iVar10);
                    if (local_3c == 0) {
                      puVar8 = (undefined4 *)
                               __gnu_cxx::
                               __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                               ::operator->(local_260);
                      uVar3 = *puVar8;
                      uVar5 = CItem::get_index(local_54);
                      cMyTrace::cMyTrace(local_138,"bool CDataManager::Verify() const",0x277b,9,true
                                         ,true);
                      cMyTrace::operator()
                                (local_138,"Package item selection element not found (%d)->(%d)",
                                 uVar5,uVar3);
                      local_65 = '\x01';
                    }
                  }
                  __gnu_cxx::
                  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                  ::operator++(local_260);
                }
                std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector
                          (local_25c);
                __gnu_cxx::
                __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                ::operator++(local_24c);
              }
            }
            else {
              (**(code **)(*(int *)local_54 + 0xc))(local_54);
            }
          }
        }
        __gnu_cxx::
        _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
        ::operator++(local_230);
      }
      if (local_65 == '\0') {
        local_65 = '\0';
        local_64 = QuestList::getQuestList(*(QuestList **)(this + 0x18));
        __gnu_cxx::
        hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::begin
                  (local_26c);
        __gnu_cxx::
        hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::end
                  (local_274);
        while (cVar1 = __gnu_cxx::
                       _Hashtable_const_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                       ::operator!=((_Hashtable_const_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                                     *)local_26c,(_Hashtable_const_iterator *)local_274),
              cVar1 != '\0') {
          iVar10 = __gnu_cxx::
                   _Hashtable_const_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                   ::operator->((_Hashtable_const_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                                 *)local_26c);
          local_38 = *(int *)(iVar10 + 4);
          if ((*(int *)(local_38 + 0xb8) == 0) || (*(int *)(local_38 + 0xb8) == 0x19)) {
            std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
            __gnu_cxx::
            __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
            ::__normal_iterator<RewardItemInfo*>(local_278,local_128);
            while( true ) {
              std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
              bVar11 = __gnu_cxx::operator!=(local_278,local_124);
              if (!bVar11) break;
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                              ::operator->(local_278);
              local_34 = *piVar7;
              if (((local_34 != 0) && (local_34 != 1)) &&
                 ((local_34 != 2 &&
                  ((local_34 != 999 && (iVar10 = find_item(this,local_34), iVar10 == 0)))))) {
                puVar8 = (undefined4 *)
                         __gnu_cxx::
                         __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                         ::operator->(local_278);
                uVar3 = *puVar8;
                uVar5 = *(undefined4 *)(local_38 + 4);
                cMyTrace::cMyTrace(local_120,"bool CDataManager::Verify() const",0x27a1,5);
                cMyTrace::operator()
                          (local_120,"Quest reward item element not found (quest: %d)(item: %d)",
                           uVar5,uVar3);
                local_65 = '\0';
              }
              __gnu_cxx::
              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
              ::operator++(local_278);
            }
            std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
            __gnu_cxx::
            __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
            ::__normal_iterator<RewardItemInfo*>(local_27c,local_110);
            while( true ) {
              std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
              bVar11 = __gnu_cxx::operator!=(local_27c,local_10c);
              if (!bVar11) break;
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                              ::operator->(local_27c);
              local_30 = *piVar7;
              if ((((local_30 != 0) && (local_30 != 1)) && (local_30 != 2)) &&
                 ((local_30 != 999 && (iVar10 = find_item(this,local_30), iVar10 == 0)))) {
                puVar8 = (undefined4 *)
                         __gnu_cxx::
                         __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                         ::operator->(local_27c);
                uVar3 = *puVar8;
                uVar5 = *(undefined4 *)(local_38 + 4);
                cMyTrace::cMyTrace(local_108,"bool CDataManager::Verify() const",0x27ac,5);
                cMyTrace::operator()
                          (local_108,
                           "Quest reward select item element not found (quest: %d)(item: %d)",uVar5,
                           uVar3);
                local_65 = '\0';
              }
              __gnu_cxx::
              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
              ::operator++(local_27c);
            }
            std::vector<int,std::allocator<int>>::begin();
            __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
            __normal_iterator<int*>(local_280,local_f8);
            while( true ) {
              std::vector<int,std::allocator<int>>::end();
              bVar11 = __gnu_cxx::operator!=(local_280,local_f4);
              if (!bVar11) break;
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              operator*(local_280);
              local_2c = find_quest((int)this);
              if (local_2c == 0) {
                puVar8 = (undefined4 *)
                         __gnu_cxx::
                         __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                         operator*(local_280);
                uVar3 = *puVar8;
                uVar5 = *(undefined4 *)(local_38 + 4);
                cMyTrace::cMyTrace(local_f0,"bool CDataManager::Verify() const",0x27cd,5);
                cMyTrace::operator()
                          (local_f0,
                           "Quest reward collision quest element now found (quest: %d)(collision quest: %d)"
                           ,uVar5,uVar3);
                local_65 = '\0';
              }
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              operator++(local_280);
            }
            std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
            __gnu_cxx::
            __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
            ::__normal_iterator<RewardItemInfo*>(local_284,local_e0);
            while( true ) {
              std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
              bVar11 = __gnu_cxx::operator!=(local_284,local_dc);
              if (!bVar11) break;
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                              ::operator*(local_284);
              local_28 = *piVar7;
              if (((local_28 != 0) && (local_28 != 1)) &&
                 ((local_28 != 2 &&
                  ((local_28 != 999 && (iVar10 = find_item(this,local_28), iVar10 == 0)))))) {
                puVar8 = (undefined4 *)
                         __gnu_cxx::
                         __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                         ::operator*(local_284);
                uVar3 = *puVar8;
                uVar5 = *(undefined4 *)(local_38 + 4);
                cMyTrace::cMyTrace(local_d8,"bool CDataManager::Verify() const",0x27da,5);
                cMyTrace::operator()
                          (local_d8,
                           "Quest reward collision item element not found (quest: %d)(item: %d)",
                           uVar5,uVar3);
                local_65 = '\0';
              }
              __gnu_cxx::
              __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
              ::operator++(local_284);
            }
          }
          __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
          ::operator++((_Hashtable_const_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                        *)local_26c);
        }
        if (local_65 == '\0') {
          __gnu_cxx::
          hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
          ::begin(local_c8);
          __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
          ::_Hashtable_const_iterator(local_28c,(_Hashtable_iterator *)local_c8);
          while( true ) {
            __gnu_cxx::
            hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
            ::end(local_b8);
            __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::_Hashtable_const_iterator(local_c0,(_Hashtable_iterator *)local_b8);
            cVar1 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                    ::operator!=(local_28c,(_Hashtable_const_iterator *)local_c0);
            if (cVar1 == '\0') break;
            iVar10 = __gnu_cxx::
                     _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                     ::operator->(local_28c);
            local_24 = *(CMonster **)(iVar10 + 4);
            if ((((*(int *)(local_24 + 0x58) < 1) || (200 < *(int *)(local_24 + 0x58))) ||
                (*(int *)(local_24 + 0x5c) < 1)) || (200 < *(int *)(local_24 + 0x5c))) {
              uVar3 = *(undefined4 *)(local_24 + 0x5c);
              uVar5 = *(undefined4 *)(local_24 + 0x58);
              uVar9 = CMonster::get_index(local_24);
              cMyTrace::cMyTrace(local_b0,"bool CDataManager::Verify() const",0x2808,9,true,true);
              cMyTrace::operator()
                        (local_b0,"Error: Invalid monster(%d) level(%d-%d)",uVar9,uVar5,uVar3);
            }
            __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator++(local_a0,(int)local_28c);
          }
          WongWork::CDungeonClear::CDungeonClear(local_208);
                    /* try { // try from 08361f78 to 083620a5 has its CatchHandler @ 083620b4 */
          __gnu_cxx::
          hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::begin(local_98);
          __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::_Hashtable_const_iterator(local_294,(_Hashtable_iterator *)local_98);
          while( true ) {
            __gnu_cxx::
            hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::end(local_88);
            __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::_Hashtable_const_iterator(local_90,(_Hashtable_iterator *)local_88);
            cVar1 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                    ::operator!=(local_294,(_Hashtable_const_iterator *)local_90);
            if (cVar1 == '\0') break;
            iVar10 = __gnu_cxx::
                     _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                     ::operator->(local_294);
            local_20 = *(CDungeon **)(iVar10 + 4);
            sVar2 = CDungeon::get_index(local_20);
            WongWork::CDungeonClear::addClearedDungeon(local_208,sVar2,'\x04');
            __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator++(local_294);
          }
          iVar10 = WongWork::CDungeonClear::toString(local_208,acStack_1a94,0x1800);
          bVar11 = -1 < iVar10;
          if (!bVar11) {
            cMyTrace::cMyTrace(local_80,"bool CDataManager::Verify() const",0x2815,9,true,true);
            cMyTrace::operator()(local_80,"Simulate dungeon clear data fail!!!!");
          }
          WongWork::CDungeonClear::~CDungeonClear(local_208);
        }
        else {
          bVar11 = false;
        }
      }
      else {
        bVar11 = false;
      }
    }
    else {
      bVar11 = false;
    }
  }
  else {
    cMyTrace::cMyTrace(local_1c0,"bool CDataManager::Verify() const",0x2735,9,true,true);
    cMyTrace::operator()(local_1c0,"Verifying Skills fail");
    bVar11 = false;
  }
  return bVar11;
}
```
