# dispatch_sig

`_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPlayResult` | `0x081f4ce6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f4ce6  _ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f4ce6, 0x081f5db5]
081f4ce6 +0x0000:  push   %ebp
081f4ce7 +0x0001:  mov    %esp,%ebp
081f4ce9 +0x0003:  push   %edi
081f4cea +0x0004:  push   %esi
081f4ceb +0x0005:  push   %ebx
081f4cec +0x0006:  sub    $0x1d0c,%esp
081f4cf2 +0x000c:  mov    0xc(%ebp),%eax
081f4cf5 +0x000f:  mov    %eax,(%esp)
081f4cf8 +0x0012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f4cfd +0x0017:  cmp    $0x5,%eax
081f4d00 +0x001a:  setne  %al
081f4d03 +0x001d:  test   %al,%al
081f4d05 +0x001f:  je     081f4d11 <+0x2b>
081f4d07 +0x0021:  mov    $0x0,%eax
081f4d0c +0x0026:  jmp    081f5daa <+0x10c4>
081f4d11 +0x002b:  mov    0xc(%ebp),%eax
081f4d14 +0x002e:  mov    %eax,(%esp)
081f4d17 +0x0031:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081f4d1c +0x0036:  movswl %ax,%ebx
081f4d1f +0x0039:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f4d24 +0x003e:  mov    %ebx,0x4(%esp)
081f4d28 +0x0042:  mov    %eax,(%esp)
081f4d2b +0x0045:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081f4d30 +0x004a:  mov    %eax,-0x48(%ebp)
081f4d33 +0x004d:  cmpl   $0x0,-0x48(%ebp)
081f4d37 +0x0051:  sete   %al
081f4d3a +0x0054:  test   %al,%al
081f4d3c +0x0056:  je     081f4d67 <+0x81>
081f4d3e +0x0058:  movl   $0x0,0xc(%esp)
081f4d46 +0x0060:  movl   $0x0,0x8(%esp)
081f4d4e +0x0068:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4d56 +0x0070:  movl   $0x8155,(%esp)
081f4d5d +0x0077:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4d62 +0x007c:  jmp    081f5daa <+0x10c4>
081f4d67 +0x0081:  mov    -0x48(%ebp),%eax
081f4d6a +0x0084:  mov    0xcd8(%eax),%eax
081f4d70 +0x008a:  cmp    $0x1,%eax
081f4d73 +0x008d:  jne    081f4d7f <+0x99>
081f4d75 +0x008f:  mov    $0x0,%eax
081f4d7a +0x0094:  jmp    081f5daa <+0x10c4>
081f4d7f +0x0099:  cmpl   $0x0,-0x48(%ebp)
081f4d83 +0x009d:  je     081f4daf <+0xc9>
081f4d85 +0x009f:  mov    -0x48(%ebp),%eax
081f4d88 +0x00a2:  mov    0xcac(%eax),%eax
081f4d8e +0x00a8:  mov    %eax,-0x3c(%ebp)
081f4d91 +0x00ab:  cmpl   $0x0,-0x3c(%ebp)
081f4d95 +0x00af:  je     081f4daf <+0xc9>
081f4d97 +0x00b1:  mov    -0x3c(%ebp),%eax
081f4d9a +0x00b4:  movzbl 0x89f(%eax),%eax
081f4da1 +0x00bb:  test   %al,%al
081f4da3 +0x00bd:  jle    081f4daf <+0xc9>
081f4da5 +0x00bf:  mov    $0x0,%eax
081f4daa +0x00c4:  jmp    081f5daa <+0x10c4>
081f4daf +0x00c9:  mov    -0x48(%ebp),%eax
081f4db2 +0x00cc:  add    $0x17f4,%eax
081f4db7 +0x00d1:  mov    %eax,(%esp)
081f4dba +0x00d4:  call   084b7442 <_ZN14GameResultType5ClearEv>  ; GameResultType::Clear()
081f4dbf +0x00d9:  mov    -0x48(%ebp),%eax
081f4dc2 +0x00dc:  add    $0x17fd,%eax
081f4dc7 +0x00e1:  mov    %eax,0x4(%esp)
081f4dcb +0x00e5:  mov    0x10(%ebp),%eax
081f4dce +0x00e8:  mov    %eax,(%esp)
081f4dd1 +0x00eb:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f4dd6 +0x00f0:  xor    $0x1,%eax
081f4dd9 +0x00f3:  test   %al,%al
081f4ddb +0x00f5:  je     081f4e06 <+0x120>
081f4ddd +0x00f7:  movl   $0x0,0xc(%esp)
081f4de5 +0x00ff:  movl   $0x0,0x8(%esp)
081f4ded +0x0107:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4df5 +0x010f:  movl   $0x816d,(%esp)
081f4dfc +0x0116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4e01 +0x011b:  jmp    081f5daa <+0x10c4>
081f4e06 +0x0120:  mov    -0x48(%ebp),%eax
081f4e09 +0x0123:  add    $0x17fe,%eax
081f4e0e +0x0128:  mov    %eax,0x4(%esp)
081f4e12 +0x012c:  mov    0x10(%ebp),%eax
081f4e15 +0x012f:  mov    %eax,(%esp)
081f4e18 +0x0132:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f4e1d +0x0137:  xor    $0x1,%eax
081f4e20 +0x013a:  test   %al,%al
081f4e22 +0x013c:  je     081f4e4d <+0x167>
081f4e24 +0x013e:  movl   $0x0,0xc(%esp)
081f4e2c +0x0146:  movl   $0x0,0x8(%esp)
081f4e34 +0x014e:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4e3c +0x0156:  movl   $0x8172,(%esp)
081f4e43 +0x015d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4e48 +0x0162:  jmp    081f5daa <+0x10c4>
081f4e4d +0x0167:  mov    -0x48(%ebp),%eax
081f4e50 +0x016a:  add    $0x183e,%eax
081f4e55 +0x016f:  mov    %eax,0x4(%esp)
081f4e59 +0x0173:  mov    0x10(%ebp),%eax
081f4e5c +0x0176:  mov    %eax,(%esp)
081f4e5f +0x0179:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081f4e64 +0x017e:  xor    $0x1,%eax
081f4e67 +0x0181:  test   %al,%al
081f4e69 +0x0183:  je     081f4e94 <+0x1ae>
081f4e6b +0x0185:  movl   $0x0,0xc(%esp)
081f4e73 +0x018d:  movl   $0x0,0x8(%esp)
081f4e7b +0x0195:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4e83 +0x019d:  movl   $0x8174,(%esp)
081f4e8a +0x01a4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4e8f +0x01a9:  jmp    081f5daa <+0x10c4>
081f4e94 +0x01ae:  movb   $0x0,-0xe9f(%ebp)
081f4e9b +0x01b5:  lea    -0xe9f(%ebp),%eax
081f4ea1 +0x01bb:  mov    %eax,0x4(%esp)
081f4ea5 +0x01bf:  mov    0x10(%ebp),%eax
081f4ea8 +0x01c2:  mov    %eax,(%esp)
081f4eab +0x01c5:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f4eb0 +0x01ca:  xor    $0x1,%eax
081f4eb3 +0x01cd:  test   %al,%al
081f4eb5 +0x01cf:  je     081f4ee0 <+0x1fa>
081f4eb7 +0x01d1:  movl   $0x0,0xc(%esp)
081f4ebf +0x01d9:  movl   $0x0,0x8(%esp)
081f4ec7 +0x01e1:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4ecf +0x01e9:  movl   $0x8179,(%esp)
081f4ed6 +0x01f0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4edb +0x01f5:  jmp    081f5daa <+0x10c4>
081f4ee0 +0x01fa:  movl   $0x0,-0x38(%ebp)
081f4ee7 +0x0201:  jmp    081f4f90 <+0x2aa>
081f4eec +0x0206:  mov    -0x38(%ebp),%eax
081f4eef +0x0209:  add    $0x300,%eax
081f4ef4 +0x020e:  shl    $0x3,%eax
081f4ef7 +0x0211:  add    -0x48(%ebp),%eax
081f4efa +0x0214:  add    $0x8,%eax
081f4efd +0x0217:  mov    %eax,0x4(%esp)
081f4f01 +0x021b:  mov    0x10(%ebp),%eax
081f4f04 +0x021e:  mov    %eax,(%esp)
081f4f07 +0x0221:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081f4f0c +0x0226:  xor    $0x1,%eax
081f4f0f +0x0229:  test   %al,%al
081f4f11 +0x022b:  je     081f4f3c <+0x256>
081f4f13 +0x022d:  movl   $0x0,0xc(%esp)
081f4f1b +0x0235:  movl   $0x0,0x8(%esp)
081f4f23 +0x023d:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4f2b +0x0245:  movl   $0x817e,(%esp)
081f4f32 +0x024c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4f37 +0x0251:  jmp    081f5daa <+0x10c4>
081f4f3c +0x0256:  mov    -0x38(%ebp),%eax
081f4f3f +0x0259:  add    $0x300,%eax
081f4f44 +0x025e:  shl    $0x3,%eax
081f4f47 +0x0261:  add    -0x48(%ebp),%eax
081f4f4a +0x0264:  add    $0xc,%eax
081f4f4d +0x0267:  mov    %eax,0x4(%esp)
081f4f51 +0x026b:  mov    0x10(%ebp),%eax
081f4f54 +0x026e:  mov    %eax,(%esp)
081f4f57 +0x0271:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f4f5c +0x0276:  xor    $0x1,%eax
081f4f5f +0x0279:  test   %al,%al
081f4f61 +0x027b:  je     081f4f8c <+0x2a6>
081f4f63 +0x027d:  movl   $0x0,0xc(%esp)
081f4f6b +0x0285:  movl   $0x0,0x8(%esp)
081f4f73 +0x028d:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4f7b +0x0295:  movl   $0x8181,(%esp)
081f4f82 +0x029c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4f87 +0x02a1:  jmp    081f5daa <+0x10c4>
081f4f8c +0x02a6:  addl   $0x1,-0x38(%ebp)
081f4f90 +0x02aa:  movzbl -0xe9f(%ebp),%eax
081f4f97 +0x02b1:  movsbl %al,%eax
081f4f9a +0x02b4:  cmp    -0x38(%ebp),%eax
081f4f9d +0x02b7:  jle    081f4fac <+0x2c6>
081f4f9f +0x02b9:  cmpl   $0x3,-0x38(%ebp)
081f4fa3 +0x02bd:  jg     081f4fac <+0x2c6>
081f4fa5 +0x02bf:  mov    $0x1,%eax
081f4faa +0x02c4:  jmp    081f4fb1 <+0x2cb>
081f4fac +0x02c6:  mov    $0x0,%eax
081f4fb1 +0x02cb:  test   %al,%al
081f4fb3 +0x02cd:  jne    081f4eec <+0x206>
081f4fb9 +0x02d3:  mov    -0x48(%ebp),%eax
081f4fbc +0x02d6:  mov    %eax,(%esp)
081f4fbf +0x02d9:  call   085b6768 <_ZN6CParty17GetMapPlayingTimeEv>  ; CParty::GetMapPlayingTime()
081f4fc4 +0x02de:  mov    %eax,-0x1cec(%ebp)
081f4fca +0x02e4:  mov    $0x10624dd3,%edx
081f4fcf +0x02e9:  mov    -0x1cec(%ebp),%eax
081f4fd5 +0x02ef:  mul    %edx
081f4fd7 +0x02f1:  mov    %edx,%eax
081f4fd9 +0x02f3:  shr    $0x6,%eax
081f4fdc +0x02f6:  mov    %eax,%edx
081f4fde +0x02f8:  mov    -0x48(%ebp),%eax
081f4fe1 +0x02fb:  movzwl 0x183e(%eax),%eax
081f4fe8 +0x0302:  movzwl %ax,%eax
081f4feb +0x0305:  mov    0xc(%ebp),%ecx
081f4fee +0x0308:  add    $0x79700,%ecx
081f4ff4 +0x030e:  movl   $0x0,0xc(%esp)
081f4ffc +0x0316:  mov    %edx,0x8(%esp)
081f5000 +0x031a:  mov    %eax,0x4(%esp)
081f5004 +0x031e:  mov    %ecx,(%esp)
081f5007 +0x0321:  call   08684b22 <_ZN15cUserHistoryLog8MapClearEtii>  ; cUserHistoryLog::MapClear(unsigned short, int, int)
081f500c +0x0326:  movl   $0x0,-0xea4(%ebp)
081f5016 +0x0330:  lea    -0xea4(%ebp),%eax
081f501c +0x0336:  mov    %eax,0x4(%esp)
081f5020 +0x033a:  mov    0x10(%ebp),%eax
081f5023 +0x033d:  mov    %eax,(%esp)
081f5026 +0x0340:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f502b +0x0345:  xor    $0x1,%eax
081f502e +0x0348:  test   %al,%al
081f5030 +0x034a:  je     081f505b <+0x375>
081f5032 +0x034c:  movl   $0x0,0xc(%esp)
081f503a +0x0354:  movl   $0x0,0x8(%esp)
081f5042 +0x035c:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f504a +0x0364:  movl   $0x818b,(%esp)
081f5051 +0x036b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5056 +0x0370:  jmp    081f5daa <+0x10c4>
081f505b +0x0375:  cmpl   $0x0,-0x48(%ebp)
081f505f +0x0379:  je     081f50cb <+0x3e5>
081f5061 +0x037b:  mov    -0x48(%ebp),%eax
081f5064 +0x037e:  mov    %eax,(%esp)
081f5067 +0x0381:  call   0822d8f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fa0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fa0
081f506c +0x0386:  xor    $0x1,%eax
081f506f +0x0389:  test   %al,%al
081f5071 +0x038b:  je     081f5084 <+0x39e>
081f5073 +0x038d:  mov    -0xea4(%ebp),%eax
081f5079 +0x0393:  test   %eax,%eax
081f507b +0x0395:  je     081f5084 <+0x39e>
081f507d +0x0397:  mov    $0x1,%eax
081f5082 +0x039c:  jmp    081f5089 <+0x3a3>
081f5084 +0x039e:  mov    $0x0,%eax
081f5089 +0x03a3:  test   %al,%al
081f508b +0x03a5:  je     081f50cb <+0x3e5>
081f508d +0x03a7:  mov    -0xea4(%ebp),%eax
081f5093 +0x03ad:  mov    %eax,%ebx
081f5095 +0x03af:  mov    0xc(%ebp),%eax
081f5098 +0x03b2:  mov    %eax,(%esp)
081f509b +0x03b5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f50a0 +0x03ba:  movl   $0x0,0x14(%esp)
081f50a8 +0x03c2:  movl   $0x0,0x10(%esp)
081f50b0 +0x03ca:  mov    %ebx,0xc(%esp)
081f50b4 +0x03ce:  movl   $0x1fb,0x8(%esp)
081f50bc +0x03d6:  mov    0xc(%ebp),%edx
081f50bf +0x03d9:  mov    %edx,0x4(%esp)
081f50c3 +0x03dd:  mov    %eax,(%esp)
081f50c6 +0x03e0:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f50cb +0x03e5:  mov    -0x48(%ebp),%eax
081f50ce +0x03e8:  add    $0x1840,%eax
081f50d3 +0x03ed:  mov    %eax,0x4(%esp)
081f50d7 +0x03f1:  mov    0x10(%ebp),%eax
081f50da +0x03f4:  mov    %eax,(%esp)
081f50dd +0x03f7:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f50e2 +0x03fc:  xor    $0x1,%eax
081f50e5 +0x03ff:  test   %al,%al
081f50e7 +0x0401:  je     081f5112 <+0x42c>
081f50e9 +0x0403:  movl   $0x0,0xc(%esp)
081f50f1 +0x040b:  movl   $0x0,0x8(%esp)
081f50f9 +0x0413:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5101 +0x041b:  movl   $0x8195,(%esp)
081f5108 +0x0422:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f510d +0x0427:  jmp    081f5daa <+0x10c4>
081f5112 +0x042c:  mov    -0x48(%ebp),%eax
081f5115 +0x042f:  mov    0x1840(%eax),%eax
081f511b +0x0435:  cmp    $0x2710,%eax
081f5120 +0x043a:  jbe    081f51c3 <+0x4dd>
081f5126 +0x0440:  movl   $0x0,-0x34(%ebp)
081f512d +0x0447:  movl   $0x0,-0x30(%ebp)
081f5134 +0x044e:  mov    -0x48(%ebp),%eax
081f5137 +0x0451:  mov    0x1840(%eax),%eax
081f513d +0x0457:  mov    %eax,-0x1cec(%ebp)
081f5143 +0x045d:  mov    $0xd1b71759,%edx
081f5148 +0x0462:  mov    -0x1cec(%ebp),%eax
081f514e +0x0468:  mul    %edx
081f5150 +0x046a:  mov    %edx,%eax
081f5152 +0x046c:  shr    $0xd,%eax
081f5155 +0x046f:  mov    %eax,-0x34(%ebp)
081f5158 +0x0472:  mov    -0x48(%ebp),%eax
081f515b +0x0475:  mov    0x1840(%eax),%ecx
081f5161 +0x047b:  mov    $0xd1b71759,%edx
081f5166 +0x0480:  mov    %ecx,%eax
081f5168 +0x0482:  mul    %edx
081f516a +0x0484:  mov    %edx,%eax
081f516c +0x0486:  shr    $0xd,%eax
081f516f +0x0489:  imul   $0x2710,%eax,%eax
081f5175 +0x048f:  mov    %ecx,%edx
081f5177 +0x0491:  sub    %eax,%edx
081f5179 +0x0493:  mov    %edx,%eax
081f517b +0x0495:  mov    %eax,-0x30(%ebp)
081f517e +0x0498:  mov    -0x34(%ebp),%ebx
081f5181 +0x049b:  mov    0xc(%ebp),%eax
081f5184 +0x049e:  mov    %eax,(%esp)
081f5187 +0x04a1:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f518c +0x04a6:  movl   $0x0,0x14(%esp)
081f5194 +0x04ae:  mov    %ebx,0x10(%esp)
081f5198 +0x04b2:  movl   $0x1,0xc(%esp)
081f51a0 +0x04ba:  movl   $0x78,0x8(%esp)
081f51a8 +0x04c2:  mov    0xc(%ebp),%edx
081f51ab +0x04c5:  mov    %edx,0x4(%esp)
081f51af +0x04c9:  mov    %eax,(%esp)
081f51b2 +0x04cc:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f51b7 +0x04d1:  mov    -0x30(%ebp),%edx
081f51ba +0x04d4:  mov    -0x48(%ebp),%eax
081f51bd +0x04d7:  mov    %edx,0x1840(%eax)
081f51c3 +0x04dd:  mov    0xc(%ebp),%eax
081f51c6 +0x04e0:  mov    %eax,(%esp)
081f51c9 +0x04e3:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081f51ce +0x04e8:  cmp    $0x3,%eax
081f51d1 +0x04eb:  je     081f51f2 <+0x50c>
081f51d3 +0x04ed:  mov    0xc(%ebp),%eax
081f51d6 +0x04f0:  mov    %eax,(%esp)
081f51d9 +0x04f3:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081f51de +0x04f8:  cmp    $0x4,%eax
081f51e1 +0x04fb:  jne    081f51f9 <+0x513>
081f51e3 +0x04fd:  mov    0xc(%ebp),%eax
081f51e6 +0x0500:  mov    %eax,(%esp)
081f51e9 +0x0503:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081f51ee +0x0508:  cmp    $0x2,%al
081f51f0 +0x050a:  jne    081f51f9 <+0x513>
081f51f2 +0x050c:  mov    $0x1,%eax
081f51f7 +0x0511:  jmp    081f51fe <+0x518>
081f51f9 +0x0513:  mov    $0x0,%eax
081f51fe +0x0518:  test   %al,%al
081f5200 +0x051a:  je     081f526b <+0x585>
081f5202 +0x051c:  mov    -0x48(%ebp),%eax
081f5205 +0x051f:  mov    0x1840(%eax),%eax
081f520b +0x0525:  mov    $0x0,%edx
081f5210 +0x052a:  mov    %eax,-0x1cd8(%ebp)
081f5216 +0x0530:  mov    %edx,-0x1cd4(%ebp)
081f521c +0x0536:  fildll -0x1cd8(%ebp)
081f5222 +0x053c:  fldl   &data#78e7013f(.rodata)
081f5228 +0x0542:  fmulp  %st,%st(1)
081f522a +0x0544:  fnstcw -0x1cda(%ebp)
081f5230 +0x054a:  movzwl -0x1cda(%ebp),%eax
081f5237 +0x0551:  mov    $0xc,%ah
081f5239 +0x0553:  mov    %ax,-0x1cdc(%ebp)
081f5240 +0x055a:  fldcw  -0x1cdc(%ebp)
081f5246 +0x0560:  fistpll -0x1cd8(%ebp)
081f524c +0x0566:  fldcw  -0x1cda(%ebp)
081f5252 +0x056c:  mov    -0x1cd8(%ebp),%eax
081f5258 +0x0572:  mov    -0x1cd4(%ebp),%edx
081f525e +0x0578:  mov    %eax,%edx
081f5260 +0x057a:  mov    -0x48(%ebp),%eax
081f5263 +0x057d:  mov    %edx,0x1840(%eax)
081f5269 +0x0583:  jmp    081f52d2 <+0x5ec>
081f526b +0x0585:  mov    -0x48(%ebp),%eax
081f526e +0x0588:  mov    0x1840(%eax),%eax
081f5274 +0x058e:  mov    $0x0,%edx
081f5279 +0x0593:  mov    %eax,-0x1cd8(%ebp)
081f527f +0x0599:  mov    %edx,-0x1cd4(%ebp)
081f5285 +0x059f:  fildll -0x1cd8(%ebp)
081f528b +0x05a5:  fldl   &data#7055a9cf(.rodata)
081f5291 +0x05ab:  fmulp  %st,%st(1)
081f5293 +0x05ad:  fnstcw -0x1cda(%ebp)
081f5299 +0x05b3:  movzwl -0x1cda(%ebp),%eax
081f52a0 +0x05ba:  mov    $0xc,%ah
081f52a2 +0x05bc:  mov    %ax,-0x1cdc(%ebp)
081f52a9 +0x05c3:  fldcw  -0x1cdc(%ebp)
081f52af +0x05c9:  fistpll -0x1cd8(%ebp)
081f52b5 +0x05cf:  fldcw  -0x1cda(%ebp)
081f52bb +0x05d5:  mov    -0x1cd8(%ebp),%eax
081f52c1 +0x05db:  mov    -0x1cd4(%ebp),%edx
081f52c7 +0x05e1:  mov    %eax,%edx
081f52c9 +0x05e3:  mov    -0x48(%ebp),%eax
081f52cc +0x05e6:  mov    %edx,0x1840(%eax)
081f52d2 +0x05ec:  mov    -0x48(%ebp),%eax
081f52d5 +0x05ef:  mov    0x1840(%eax),%ebx
081f52db +0x05f5:  mov    -0x48(%ebp),%eax
081f52de +0x05f8:  mov    %eax,(%esp)
081f52e1 +0x05fb:  call   085b6768 <_ZN6CParty17GetMapPlayingTimeEv>  ; CParty::GetMapPlayingTime()
081f52e6 +0x0600:  mov    %eax,-0x1cec(%ebp)
081f52ec +0x0606:  mov    $0x10624dd3,%edx
081f52f1 +0x060b:  mov    -0x1cec(%ebp),%eax
081f52f7 +0x0611:  mul    %edx
081f52f9 +0x0613:  mov    %edx,%eax
081f52fb +0x0615:  shr    $0x6,%eax
081f52fe +0x0618:  cmp    %eax,%ebx
081f5300 +0x061a:  seta   %al
081f5303 +0x061d:  test   %al,%al
081f5305 +0x061f:  je     081f5346 <+0x660>
081f5307 +0x0621:  mov    -0x48(%ebp),%eax
081f530a +0x0624:  mov    0x1840(%eax),%ebx
081f5310 +0x062a:  mov    0xc(%ebp),%eax
081f5313 +0x062d:  mov    %eax,(%esp)
081f5316 +0x0630:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f531b +0x0635:  movl   $0x0,0x14(%esp)
081f5323 +0x063d:  mov    %ebx,0x10(%esp)
081f5327 +0x0641:  movl   $0x1,0xc(%esp)
081f532f +0x0649:  movl   $0x75,0x8(%esp)
081f5337 +0x0651:  mov    0xc(%ebp),%edx
081f533a +0x0654:  mov    %edx,0x4(%esp)
081f533e +0x0658:  mov    %eax,(%esp)
081f5341 +0x065b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f5346 +0x0660:  mov    -0x48(%ebp),%eax
081f5349 +0x0663:  add    $0xb24,%eax
081f534e +0x0668:  mov    %eax,(%esp)
081f5351 +0x066b:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
081f5356 +0x0670:  mov    -0x48(%ebp),%edx
081f5359 +0x0673:  mov    %eax,0x17f8(%edx)
081f535f +0x0679:  mov    -0x48(%ebp),%eax
081f5362 +0x067c:  add    $0xb24,%eax
081f5367 +0x0681:  mov    %eax,(%esp)
081f536a +0x0684:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
081f536f +0x0689:  mov    %eax,%edx
081f5371 +0x068b:  mov    -0x48(%ebp),%eax
081f5374 +0x068e:  mov    %dl,0x17fc(%eax)
081f537a +0x0694:  mov    0xc(%ebp),%eax
081f537d +0x0697:  mov    %eax,0x4(%esp)
081f5381 +0x069b:  mov    -0x48(%ebp),%eax
081f5384 +0x069e:  mov    %eax,(%esp)
081f5387 +0x06a1:  call   085b22e2 <_ZN6CParty26IncreaseSetPlayResultCountEP5CUser>  ; CParty::IncreaseSetPlayResultCount(CUser*)
081f538c +0x06a6:  mov    -0x48(%ebp),%eax
081f538f +0x06a9:  mov    %eax,(%esp)
081f5392 +0x06ac:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
081f5397 +0x06b1:  test   %al,%al
081f5399 +0x06b3:  sete   %al
081f539c +0x06b6:  test   %al,%al
081f539e +0x06b8:  je     081f5469 <+0x783>
081f53a4 +0x06be:  mov    -0x48(%ebp),%eax
081f53a7 +0x06c1:  add    $0xb24,%eax
081f53ac +0x06c6:  mov    %eax,(%esp)
081f53af +0x06c9:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
081f53b4 +0x06ce:  xor    $0x1,%eax
081f53b7 +0x06d1:  test   %al,%al
081f53b9 +0x06d3:  je     081f53ff <+0x719>
081f53bb +0x06d5:  mov    0xc(%ebp),%eax
081f53be +0x06d8:  mov    %eax,(%esp)
081f53c1 +0x06db:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f53c6 +0x06e0:  movl   $0x0,0x14(%esp)
081f53ce +0x06e8:  movl   $0x0,0x10(%esp)
081f53d6 +0x06f0:  movl   $0x1,0xc(%esp)
081f53de +0x06f8:  movl   $0x196,0x8(%esp)
081f53e6 +0x0700:  mov    0xc(%ebp),%edx
081f53e9 +0x0703:  mov    %edx,0x4(%esp)
081f53ed +0x0707:  mov    %eax,(%esp)
081f53f0 +0x070a:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f53f5 +0x070f:  mov    $0x0,%eax
081f53fa +0x0714:  jmp    081f5daa <+0x10c4>
081f53ff +0x0719:  movl   $0x29,0x4(%esp)
081f5407 +0x0721:  mov    -0x48(%ebp),%eax
081f540a +0x0724:  mov    %eax,(%esp)
081f540d +0x0727:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
081f5412 +0x072c:  mov    %eax,%esi
081f5414 +0x072e:  mov    -0x48(%ebp),%eax
081f5417 +0x0731:  mov    %eax,(%esp)
081f541a +0x0734:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
081f541f +0x0739:  mov    %eax,%ebx
081f5421 +0x073b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
081f5426 +0x0740:  movl   $0x0,0x18(%esp)
081f542e +0x0748:  mov    %esi,0x14(%esp)
081f5432 +0x074c:  movl   $0xf,0x10(%esp)
081f543a +0x0754:  movl   $0x29,0xc(%esp)
081f5442 +0x075c:  mov    %ebx,0x8(%esp)
081f5446 +0x0760:  movl   $0x1,0x4(%esp)
081f544e +0x0768:  mov    %eax,(%esp)
081f5451 +0x076b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
081f5456 +0x0770:  movl   $0x1,0x4(%esp)
081f545e +0x0778:  mov    -0x48(%ebp),%eax
081f5461 +0x077b:  mov    %eax,(%esp)
081f5464 +0x077e:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
081f5469 +0x0783:  mov    -0x48(%ebp),%eax
081f546c +0x0786:  add    $0xb24,%eax
081f5471 +0x078b:  mov    %eax,(%esp)
081f5474 +0x078e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
081f5479 +0x0793:  mov    0x4c(%eax),%eax
081f547c +0x0796:  test   %eax,%eax
081f547e +0x0798:  sete   %al
081f5481 +0x079b:  test   %al,%al
081f5483 +0x079d:  je     081f564c <+0x966>
081f5489 +0x07a3:  lea    -0xe9e(%ebp),%eax
081f548f +0x07a9:  mov    %eax,(%esp)
081f5492 +0x07ac:  call   0822ec4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42f6
081f5497 +0x07b1:  lea    -0x828(%ebp),%eax
081f549d +0x07b7:  mov    %eax,(%esp)
081f54a0 +0x07ba:  call   0822edae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4458>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4458
081f54a5 +0x07bf:  lea    -0x15bb(%ebp),%edx
081f54ab +0x07c5:  mov    $0x703,%ebx
081f54b0 +0x07ca:  mov    $0x0,%eax
081f54b5 +0x07cf:  mov    %edx,%ecx
081f54b7 +0x07d1:  and    $0x1,%ecx
081f54ba +0x07d4:  test   %ecx,%ecx
081f54bc +0x07d6:  je     081f54c6 <+0x7e0>
081f54be +0x07d8:  mov    %al,(%edx)
081f54c0 +0x07da:  add    $0x1,%edx
081f54c3 +0x07dd:  sub    $0x1,%ebx
081f54c6 +0x07e0:  mov    %edx,%ecx
081f54c8 +0x07e2:  and    $0x2,%ecx
081f54cb +0x07e5:  test   %ecx,%ecx
081f54cd +0x07e7:  je     081f54d8 <+0x7f2>
081f54cf +0x07e9:  mov    %ax,(%edx)
081f54d2 +0x07ec:  add    $0x2,%edx
081f54d5 +0x07ef:  sub    $0x2,%ebx
081f54d8 +0x07f2:  mov    %ebx,%ecx
081f54da +0x07f4:  shr    $0x2,%ecx
081f54dd +0x07f7:  mov    %edx,%edi
081f54df +0x07f9:  rep stos %eax,%es:(%edi)
081f54e1 +0x07fb:  mov    %edi,%edx
081f54e3 +0x07fd:  mov    %ebx,%ecx
081f54e5 +0x07ff:  and    $0x2,%ecx
081f54e8 +0x0802:  test   %ecx,%ecx
081f54ea +0x0804:  je     081f54f2 <+0x80c>
081f54ec +0x0806:  mov    %ax,(%edx)
081f54ef +0x0809:  add    $0x2,%edx
081f54f2 +0x080c:  mov    %ebx,%ecx
081f54f4 +0x080e:  and    $0x1,%ecx
081f54f7 +0x0811:  test   %ecx,%ecx
081f54f9 +0x0813:  je     081f5500 <+0x81a>
081f54fb +0x0815:  mov    %al,(%edx)
081f54fd +0x0817:  add    $0x1,%edx
081f5500 +0x081a:  lea    -0x15af(%ebp),%eax
081f5506 +0x0820:  lea    -0xe9e(%ebp),%edx
081f550c +0x0826:  mov    $0x676,%ebx
081f5511 +0x082b:  mov    %eax,%ecx
081f5513 +0x082d:  and    $0x1,%ecx
081f5516 +0x0830:  test   %ecx,%ecx
081f5518 +0x0832:  je     081f5528 <+0x842>
081f551a +0x0834:  movzbl (%edx),%ecx
081f551d +0x0837:  mov    %cl,(%eax)
081f551f +0x0839:  add    $0x1,%eax
081f5522 +0x083c:  add    $0x1,%edx
081f5525 +0x083f:  sub    $0x1,%ebx
081f5528 +0x0842:  mov    %eax,%ecx
081f552a +0x0844:  and    $0x2,%ecx
081f552d +0x0847:  test   %ecx,%ecx
081f552f +0x0849:  je     081f5540 <+0x85a>
081f5531 +0x084b:  movzwl (%edx),%ecx
081f5534 +0x084e:  mov    %cx,(%eax)
081f5537 +0x0851:  add    $0x2,%eax
081f553a +0x0854:  add    $0x2,%edx
081f553d +0x0857:  sub    $0x2,%ebx
081f5540 +0x085a:  mov    %ebx,%ecx
081f5542 +0x085c:  shr    $0x2,%ecx
081f5545 +0x085f:  mov    %eax,%edi
081f5547 +0x0861:  mov    %edx,%esi
081f5549 +0x0863:  rep movsl %ds:(%esi),%es:(%edi)
081f554b +0x0865:  mov    %esi,%edx
081f554d +0x0867:  mov    %edi,%eax
081f554f +0x0869:  mov    $0x0,%ecx
081f5554 +0x086e:  mov    %ebx,%esi
081f5556 +0x0870:  and    $0x2,%esi
081f5559 +0x0873:  test   %esi,%esi
081f555b +0x0875:  je     081f5568 <+0x882>
081f555d +0x0877:  movzwl (%edx,%ecx,1),%esi
081f5561 +0x087b:  mov    %si,(%eax,%ecx,1)
081f5565 +0x087f:  add    $0x2,%ecx
081f5568 +0x0882:  and    $0x1,%ebx
081f556b +0x0885:  test   %ebx,%ebx
081f556d +0x0887:  je     081f5576 <+0x890>
081f556f +0x0889:  movzbl (%edx,%ecx,1),%edx
081f5573 +0x088d:  mov    %dl,(%eax,%ecx,1)
081f5576 +0x0890:  lea    -0xf30(%ebp),%eax
081f557c +0x0896:  lea    -0x828(%ebp),%edx
081f5582 +0x089c:  mov    $0x78,%ebx
081f5587 +0x08a1:  mov    %eax,%ecx
081f5589 +0x08a3:  and    $0x1,%ecx
081f558c +0x08a6:  test   %ecx,%ecx
081f558e +0x08a8:  je     081f559e <+0x8b8>
081f5590 +0x08aa:  movzbl (%edx),%ecx
081f5593 +0x08ad:  mov    %cl,(%eax)
081f5595 +0x08af:  add    $0x1,%eax
081f5598 +0x08b2:  add    $0x1,%edx
081f559b +0x08b5:  sub    $0x1,%ebx
081f559e +0x08b8:  mov    %eax,%ecx
081f55a0 +0x08ba:  and    $0x2,%ecx
081f55a3 +0x08bd:  test   %ecx,%ecx
081f55a5 +0x08bf:  je     081f55b6 <+0x8d0>
081f55a7 +0x08c1:  movzwl (%edx),%ecx
081f55aa +0x08c4:  mov    %cx,(%eax)
081f55ad +0x08c7:  add    $0x2,%eax
081f55b0 +0x08ca:  add    $0x2,%edx
081f55b3 +0x08cd:  sub    $0x2,%ebx
081f55b6 +0x08d0:  mov    %ebx,%ecx
081f55b8 +0x08d2:  shr    $0x2,%ecx
081f55bb +0x08d5:  mov    %eax,%edi
081f55bd +0x08d7:  mov    %edx,%esi
081f55bf +0x08d9:  rep movsl %ds:(%esi),%es:(%edi)
081f55c1 +0x08db:  mov    %esi,%edx
081f55c3 +0x08dd:  mov    %edi,%eax
081f55c5 +0x08df:  mov    $0x0,%ecx
081f55ca +0x08e4:  mov    %ebx,%esi
081f55cc +0x08e6:  and    $0x2,%esi
081f55cf +0x08e9:  test   %esi,%esi
081f55d1 +0x08eb:  je     081f55de <+0x8f8>
081f55d3 +0x08ed:  movzwl (%edx,%ecx,1),%esi
081f55d7 +0x08f1:  mov    %si,(%eax,%ecx,1)
081f55db +0x08f5:  add    $0x2,%ecx
081f55de +0x08f8:  and    $0x1,%ebx
081f55e1 +0x08fb:  test   %ebx,%ebx
081f55e3 +0x08fd:  je     081f55ec <+0x906>
081f55e5 +0x08ff:  movzbl (%edx,%ecx,1),%edx
081f55e9 +0x0903:  mov    %dl,(%eax,%ecx,1)
081f55ec +0x0906:  lea    -0x15bb(%ebp),%eax
081f55f2 +0x090c:  mov    %eax,0x4(%esp)
081f55f6 +0x0910:  mov    0xc(%ebp),%eax
081f55f9 +0x0913:  mov    %eax,(%esp)
081f55fc +0x0916:  call   0864bc04 <_ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC>  ; CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const
081f5601 +0x091b:  test   %al,%al
081f5603 +0x091d:  je     081f564c <+0x966>
081f5605 +0x091f:  movzwl -0x158a(%ebp),%eax
081f560c +0x0926:  cmp    $0x1d,%ax
081f5610 +0x092a:  jle    081f564c <+0x966>
081f5612 +0x092c:  mov    0xc(%ebp),%eax
081f5615 +0x092f:  mov    %eax,(%esp)
081f5618 +0x0932:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f561d +0x0937:  movl   $0x0,0x14(%esp)
081f5625 +0x093f:  movl   $0x0,0x10(%esp)
081f562d +0x0947:  movl   $0x1,0xc(%esp)
081f5635 +0x094f:  movl   $0xe2,0x8(%esp)
081f563d +0x0957:  mov    0xc(%ebp),%edx
081f5640 +0x095a:  mov    %edx,0x4(%esp)
081f5644 +0x095e:  mov    %eax,(%esp)
081f5647 +0x0961:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f564c +0x0966:  mov    -0x48(%ebp),%eax
081f564f +0x0969:  add    $0xb24,%eax
081f5654 +0x096e:  mov    %eax,(%esp)
081f5657 +0x0971:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
081f565c +0x0976:  add    $0x4c,%eax
081f565f +0x0979:  mov    %eax,(%esp)
081f5662 +0x097c:  call   0822cb86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2230>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2230
081f5667 +0x0981:  mov    %eax,-0x44(%ebp)
081f566a +0x0984:  mov    -0x48(%ebp),%eax
081f566d +0x0987:  mov    %eax,(%esp)
081f5670 +0x098a:  call   085b6768 <_ZN6CParty17GetMapPlayingTimeEv>  ; CParty::GetMapPlayingTime()
081f5675 +0x098f:  mov    %eax,-0x2c(%ebp)
081f5678 +0x0992:  movl   $0x0,-0x28(%ebp)
081f567f +0x0999:  mov    -0x2c(%ebp),%eax
081f5682 +0x099c:  mov    %eax,-0x1cec(%ebp)
081f5688 +0x09a2:  mov    $0x10624dd3,%edx
081f568d +0x09a7:  mov    -0x1cec(%ebp),%eax
081f5693 +0x09ad:  mul    %edx
081f5695 +0x09af:  mov    %edx,%eax
081f5697 +0x09b1:  shr    $0x6,%eax
081f569a +0x09b4:  mov    %eax,-0x2c(%ebp)
081f569d +0x09b7:  mov    -0x2c(%ebp),%edx
081f56a0 +0x09ba:  mov    %edx,-0x1cec(%ebp)
081f56a6 +0x09c0:  mov    $0xcccccccd,%edx
081f56ab +0x09c5:  mov    -0x1cec(%ebp),%eax
081f56b1 +0x09cb:  mul    %edx
081f56b3 +0x09cd:  mov    %edx,%eax
081f56b5 +0x09cf:  shr    $0x3,%eax
081f56b8 +0x09d2:  mov    %eax,-0x28(%ebp)
081f56bb +0x09d5:  mov    -0x2c(%ebp),%ecx
081f56be +0x09d8:  mov    $0xcccccccd,%edx
081f56c3 +0x09dd:  mov    %ecx,%eax
081f56c5 +0x09df:  mul    %edx
081f56c7 +0x09e1:  shr    $0x3,%edx
081f56ca +0x09e4:  mov    %edx,%eax
081f56cc +0x09e6:  shl    $0x2,%eax
081f56cf +0x09e9:  add    %edx,%eax
081f56d1 +0x09eb:  add    %eax,%eax
081f56d3 +0x09ed:  mov    %ecx,%edx
081f56d5 +0x09ef:  sub    %eax,%edx
081f56d7 +0x09f1:  test   %edx,%edx
081f56d9 +0x09f3:  je     081f56df <+0x9f9>
081f56db +0x09f5:  addl   $0x1,-0x28(%ebp)
081f56df +0x09f9:  mov    -0x44(%ebp),%eax
081f56e2 +0x09fc:  cmp    -0x28(%ebp),%eax
081f56e5 +0x09ff:  jae    081f5886 <+0xba0>
081f56eb +0x0a05:  lea    -0x7b0(%ebp),%eax
081f56f1 +0x0a0b:  mov    %eax,(%esp)
081f56f4 +0x0a0e:  call   0822ec4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42f6
081f56f9 +0x0a13:  lea    -0x13a(%ebp),%eax
081f56ff +0x0a19:  mov    %eax,(%esp)
081f5702 +0x0a1c:  call   0822edae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4458>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4458
081f5707 +0x0a21:  lea    -0x1cbe(%ebp),%edx
081f570d +0x0a27:  mov    $0x703,%ebx
081f5712 +0x0a2c:  mov    $0x0,%eax
081f5717 +0x0a31:  mov    %edx,%ecx
081f5719 +0x0a33:  and    $0x2,%ecx
081f571c +0x0a36:  test   %ecx,%ecx
081f571e +0x0a38:  je     081f5729 <+0xa43>
081f5720 +0x0a3a:  mov    %ax,(%edx)
081f5723 +0x0a3d:  add    $0x2,%edx
081f5726 +0x0a40:  sub    $0x2,%ebx
081f5729 +0x0a43:  mov    %ebx,%ecx
081f572b +0x0a45:  shr    $0x2,%ecx
081f572e +0x0a48:  mov    %edx,%edi
081f5730 +0x0a4a:  rep stos %eax,%es:(%edi)
081f5732 +0x0a4c:  mov    %edi,%edx
081f5734 +0x0a4e:  mov    %ebx,%ecx
081f5736 +0x0a50:  and    $0x2,%ecx
081f5739 +0x0a53:  test   %ecx,%ecx
081f573b +0x0a55:  je     081f5743 <+0xa5d>
081f573d +0x0a57:  mov    %ax,(%edx)
081f5740 +0x0a5a:  add    $0x2,%edx
081f5743 +0x0a5d:  mov    %ebx,%ecx
081f5745 +0x0a5f:  and    $0x1,%ecx
081f5748 +0x0a62:  test   %ecx,%ecx
081f574a +0x0a64:  je     081f5751 <+0xa6b>
081f574c +0x0a66:  mov    %al,(%edx)
081f574e +0x0a68:  add    $0x1,%edx
081f5751 +0x0a6b:  lea    -0x1cb2(%ebp),%eax
081f5757 +0x0a71:  lea    -0x7b0(%ebp),%edx
081f575d +0x0a77:  mov    $0x676,%ebx
081f5762 +0x0a7c:  mov    %eax,%ecx
081f5764 +0x0a7e:  and    $0x2,%ecx
081f5767 +0x0a81:  test   %ecx,%ecx
081f5769 +0x0a83:  je     081f577a <+0xa94>
081f576b +0x0a85:  movzwl (%edx),%ecx
081f576e +0x0a88:  mov    %cx,(%eax)
081f5771 +0x0a8b:  add    $0x2,%eax
081f5774 +0x0a8e:  add    $0x2,%edx
081f5777 +0x0a91:  sub    $0x2,%ebx
081f577a +0x0a94:  mov    %ebx,%ecx
081f577c +0x0a96:  shr    $0x2,%ecx
081f577f +0x0a99:  mov    %eax,%edi
081f5781 +0x0a9b:  mov    %edx,%esi
081f5783 +0x0a9d:  rep movsl %ds:(%esi),%es:(%edi)
081f5785 +0x0a9f:  mov    %esi,%edx
081f5787 +0x0aa1:  mov    %edi,%eax
081f5789 +0x0aa3:  mov    $0x0,%ecx
081f578e +0x0aa8:  mov    %ebx,%esi
081f5790 +0x0aaa:  and    $0x2,%esi
081f5793 +0x0aad:  test   %esi,%esi
081f5795 +0x0aaf:  je     081f57a2 <+0xabc>
081f5797 +0x0ab1:  movzwl (%edx,%ecx,1),%esi
081f579b +0x0ab5:  mov    %si,(%eax,%ecx,1)
081f579f +0x0ab9:  add    $0x2,%ecx
081f57a2 +0x0abc:  and    $0x1,%ebx
081f57a5 +0x0abf:  test   %ebx,%ebx
081f57a7 +0x0ac1:  je     081f57b0 <+0xaca>
081f57a9 +0x0ac3:  movzbl (%edx,%ecx,1),%edx
081f57ad +0x0ac7:  mov    %dl,(%eax,%ecx,1)
081f57b0 +0x0aca:  lea    -0x1633(%ebp),%eax
081f57b6 +0x0ad0:  lea    -0x13a(%ebp),%edx
081f57bc +0x0ad6:  mov    $0x78,%ebx
081f57c1 +0x0adb:  mov    %eax,%ecx
081f57c3 +0x0add:  and    $0x1,%ecx
081f57c6 +0x0ae0:  test   %ecx,%ecx
081f57c8 +0x0ae2:  je     081f57d8 <+0xaf2>
081f57ca +0x0ae4:  movzbl (%edx),%ecx
081f57cd +0x0ae7:  mov    %cl,(%eax)
081f57cf +0x0ae9:  add    $0x1,%eax
081f57d2 +0x0aec:  add    $0x1,%edx
081f57d5 +0x0aef:  sub    $0x1,%ebx
081f57d8 +0x0af2:  mov    %eax,%ecx
081f57da +0x0af4:  and    $0x2,%ecx
081f57dd +0x0af7:  test   %ecx,%ecx
081f57df +0x0af9:  je     081f57f0 <+0xb0a>
081f57e1 +0x0afb:  movzwl (%edx),%ecx
081f57e4 +0x0afe:  mov    %cx,(%eax)
081f57e7 +0x0b01:  add    $0x2,%eax
081f57ea +0x0b04:  add    $0x2,%edx
081f57ed +0x0b07:  sub    $0x2,%ebx
081f57f0 +0x0b0a:  mov    %ebx,%ecx
081f57f2 +0x0b0c:  shr    $0x2,%ecx
081f57f5 +0x0b0f:  mov    %eax,%edi
081f57f7 +0x0b11:  mov    %edx,%esi
081f57f9 +0x0b13:  rep movsl %ds:(%esi),%es:(%edi)
081f57fb +0x0b15:  mov    %esi,%edx
081f57fd +0x0b17:  mov    %edi,%eax
081f57ff +0x0b19:  mov    $0x0,%ecx
081f5804 +0x0b1e:  mov    %ebx,%esi
081f5806 +0x0b20:  and    $0x2,%esi
081f5809 +0x0b23:  test   %esi,%esi
081f580b +0x0b25:  je     081f5818 <+0xb32>
081f580d +0x0b27:  movzwl (%edx,%ecx,1),%esi
081f5811 +0x0b2b:  mov    %si,(%eax,%ecx,1)
081f5815 +0x0b2f:  add    $0x2,%ecx
081f5818 +0x0b32:  and    $0x1,%ebx
081f581b +0x0b35:  test   %ebx,%ebx
081f581d +0x0b37:  je     081f5826 <+0xb40>
081f581f +0x0b39:  movzbl (%edx,%ecx,1),%edx
081f5823 +0x0b3d:  mov    %dl,(%eax,%ecx,1)
081f5826 +0x0b40:  lea    -0x1cbe(%ebp),%eax
081f582c +0x0b46:  mov    %eax,0x4(%esp)
081f5830 +0x0b4a:  mov    0xc(%ebp),%eax
081f5833 +0x0b4d:  mov    %eax,(%esp)
081f5836 +0x0b50:  call   0864bc04 <_ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC>  ; CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const
081f583b +0x0b55:  test   %al,%al
081f583d +0x0b57:  je     081f5886 <+0xba0>
081f583f +0x0b59:  movzwl -0x1c8d(%ebp),%eax
081f5846 +0x0b60:  cmp    $0x1d,%ax
081f584a +0x0b64:  jle    081f5886 <+0xba0>
081f584c +0x0b66:  mov    0xc(%ebp),%eax
081f584f +0x0b69:  mov    %eax,(%esp)
081f5852 +0x0b6c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f5857 +0x0b71:  movl   $0x0,0x14(%esp)
081f585f +0x0b79:  movl   $0x0,0x10(%esp)
081f5867 +0x0b81:  movl   $0x1,0xc(%esp)
081f586f +0x0b89:  movl   $0xe3,0x8(%esp)
081f5877 +0x0b91:  mov    0xc(%ebp),%edx
081f587a +0x0b94:  mov    %edx,0x4(%esp)
081f587e +0x0b98:  mov    %eax,(%esp)
081f5881 +0x0b9b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f5886 +0x0ba0:  mov    -0x48(%ebp),%eax
081f5889 +0x0ba3:  mov    %eax,(%esp)
081f588c +0x0ba6:  call   085b6768 <_ZN6CParty17GetMapPlayingTimeEv>  ; CParty::GetMapPlayingTime()
081f5891 +0x0bab:  mov    %eax,-0x40(%ebp)
081f5894 +0x0bae:  cmpl   $0x270f,-0x40(%ebp)
081f589b +0x0bb5:  ja     081f58b4 <+0xbce>
081f589d +0x0bb7:  mov    0xc(%ebp),%eax
081f58a0 +0x0bba:  mov    %eax,(%esp)
081f58a3 +0x0bbd:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081f58a8 +0x0bc2:  cmp    $0xa,%eax
081f58ab +0x0bc5:  jle    081f58b4 <+0xbce>
081f58ad +0x0bc7:  mov    $0x1,%eax
081f58b2 +0x0bcc:  jmp    081f58b9 <+0xbd3>
081f58b4 +0x0bce:  mov    $0x0,%eax
081f58b9 +0x0bd3:  test   %al,%al
081f58bb +0x0bd5:  je     081f5927 <+0xc41>
081f58bd +0x0bd7:  movl   $0x1,-0x24(%ebp)
081f58c4 +0x0bde:  mov    -0x24(%ebp),%ecx
081f58c7 +0x0be1:  mov    -0x40(%ebp),%eax
081f58ca +0x0be4:  mov    %eax,-0x1cec(%ebp)
081f58d0 +0x0bea:  mov    $0x10624dd3,%edx
081f58d5 +0x0bef:  mov    -0x1cec(%ebp),%eax
081f58db +0x0bf5:  mul    %edx
081f58dd +0x0bf7:  mov    %edx,%eax
081f58df +0x0bf9:  shr    $0x6,%eax
081f58e2 +0x0bfc:  mov    %ecx,%edx
081f58e4 +0x0bfe:  sub    %eax,%edx
081f58e6 +0x0c00:  mov    %edx,%eax
081f58e8 +0x0c02:  add    $0xa,%eax
081f58eb +0x0c05:  mov    %eax,-0x24(%ebp)
081f58ee +0x0c08:  mov    -0x24(%ebp),%ebx
081f58f1 +0x0c0b:  mov    0xc(%ebp),%eax
081f58f4 +0x0c0e:  mov    %eax,(%esp)
081f58f7 +0x0c11:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f58fc +0x0c16:  movl   $0x0,0x14(%esp)
081f5904 +0x0c1e:  movl   $0x0,0x10(%esp)
081f590c +0x0c26:  mov    %ebx,0xc(%esp)
081f5910 +0x0c2a:  movl   $0xe5,0x8(%esp)
081f5918 +0x0c32:  mov    0xc(%ebp),%edx
081f591b +0x0c35:  mov    %edx,0x4(%esp)
081f591f +0x0c39:  mov    %eax,(%esp)
081f5922 +0x0c3c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f5927 +0x0c41:  cmpl   $0x4e1f,-0x40(%ebp)
081f592e +0x0c48:  ja     081f5947 <+0xc61>
081f5930 +0x0c4a:  mov    0xc(%ebp),%eax
081f5933 +0x0c4d:  mov    %eax,(%esp)
081f5936 +0x0c50:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081f593b +0x0c55:  cmp    $0xa,%eax
081f593e +0x0c58:  jle    081f5947 <+0xc61>
081f5940 +0x0c5a:  mov    $0x1,%eax
081f5945 +0x0c5f:  jmp    081f594c <+0xc66>
081f5947 +0x0c61:  mov    $0x0,%eax
081f594c +0x0c66:  test   %al,%al
081f594e +0x0c68:  je     081f598a <+0xca4>
081f5950 +0x0c6a:  mov    0xc(%ebp),%eax
081f5953 +0x0c6d:  mov    %eax,(%esp)
081f5956 +0x0c70:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f595b +0x0c75:  movl   $0x0,0x14(%esp)
081f5963 +0x0c7d:  movl   $0x0,0x10(%esp)
081f596b +0x0c85:  movl   $0x1,0xc(%esp)
081f5973 +0x0c8d:  movl   $0xe4,0x8(%esp)
081f597b +0x0c95:  mov    0xc(%ebp),%edx
081f597e +0x0c98:  mov    %edx,0x4(%esp)
081f5982 +0x0c9c:  mov    %eax,(%esp)
081f5985 +0x0c9f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f598a +0x0ca4:  movl   $0x0,-0xea8(%ebp)
081f5994 +0x0cae:  movl   $0x0,-0xeac(%ebp)
081f599e +0x0cb8:  movl   $0x0,-0xeb0(%ebp)
081f59a8 +0x0cc2:  movl   $0x0,-0xeb4(%ebp)
081f59b2 +0x0ccc:  movl   $0x0,-0xeb8(%ebp)
081f59bc +0x0cd6:  lea    -0xeb8(%ebp),%eax
081f59c2 +0x0cdc:  mov    %eax,0x4(%esp)
081f59c6 +0x0ce0:  mov    0x10(%ebp),%eax
081f59c9 +0x0ce3:  mov    %eax,(%esp)
081f59cc +0x0ce6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f59d1 +0x0ceb:  xor    $0x1,%eax
081f59d4 +0x0cee:  test   %al,%al
081f59d6 +0x0cf0:  je     081f5a01 <+0xd1b>
081f59d8 +0x0cf2:  movl   $0x0,0xc(%esp)
081f59e0 +0x0cfa:  movl   $0x0,0x8(%esp)
081f59e8 +0x0d02:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f59f0 +0x0d0a:  movl   $0x820e,(%esp)
081f59f7 +0x0d11:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f59fc +0x0d16:  jmp    081f5daa <+0x10c4>
081f5a01 +0x0d1b:  lea    -0xea8(%ebp),%eax
081f5a07 +0x0d21:  mov    %eax,0x4(%esp)
081f5a0b +0x0d25:  mov    0x10(%ebp),%eax
081f5a0e +0x0d28:  mov    %eax,(%esp)
081f5a11 +0x0d2b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f5a16 +0x0d30:  xor    $0x1,%eax
081f5a19 +0x0d33:  test   %al,%al
081f5a1b +0x0d35:  je     081f5a46 <+0xd60>
081f5a1d +0x0d37:  movl   $0x0,0xc(%esp)
081f5a25 +0x0d3f:  movl   $0x0,0x8(%esp)
081f5a2d +0x0d47:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5a35 +0x0d4f:  movl   $0x820f,(%esp)
081f5a3c +0x0d56:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5a41 +0x0d5b:  jmp    081f5daa <+0x10c4>
081f5a46 +0x0d60:  lea    -0xeac(%ebp),%eax
081f5a4c +0x0d66:  mov    %eax,0x4(%esp)
081f5a50 +0x0d6a:  mov    0x10(%ebp),%eax
081f5a53 +0x0d6d:  mov    %eax,(%esp)
081f5a56 +0x0d70:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f5a5b +0x0d75:  xor    $0x1,%eax
081f5a5e +0x0d78:  test   %al,%al
081f5a60 +0x0d7a:  je     081f5a8b <+0xda5>
081f5a62 +0x0d7c:  movl   $0x0,0xc(%esp)
081f5a6a +0x0d84:  movl   $0x0,0x8(%esp)
081f5a72 +0x0d8c:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5a7a +0x0d94:  movl   $0x8210,(%esp)
081f5a81 +0x0d9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5a86 +0x0da0:  jmp    081f5daa <+0x10c4>
081f5a8b +0x0da5:  lea    -0xeb0(%ebp),%eax
081f5a91 +0x0dab:  mov    %eax,0x4(%esp)
081f5a95 +0x0daf:  mov    0x10(%ebp),%eax
081f5a98 +0x0db2:  mov    %eax,(%esp)
081f5a9b +0x0db5:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f5aa0 +0x0dba:  xor    $0x1,%eax
081f5aa3 +0x0dbd:  test   %al,%al
081f5aa5 +0x0dbf:  je     081f5ad0 <+0xdea>
081f5aa7 +0x0dc1:  movl   $0x0,0xc(%esp)
081f5aaf +0x0dc9:  movl   $0x0,0x8(%esp)
081f5ab7 +0x0dd1:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5abf +0x0dd9:  movl   $0x8211,(%esp)
081f5ac6 +0x0de0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5acb +0x0de5:  jmp    081f5daa <+0x10c4>
081f5ad0 +0x0dea:  lea    -0xeb4(%ebp),%eax
081f5ad6 +0x0df0:  mov    %eax,0x4(%esp)
081f5ada +0x0df4:  mov    0x10(%ebp),%eax
081f5add +0x0df7:  mov    %eax,(%esp)
081f5ae0 +0x0dfa:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f5ae5 +0x0dff:  xor    $0x1,%eax
081f5ae8 +0x0e02:  test   %al,%al
081f5aea +0x0e04:  je     081f5b15 <+0xe2f>
081f5aec +0x0e06:  movl   $0x0,0xc(%esp)
081f5af4 +0x0e0e:  movl   $0x0,0x8(%esp)
081f5afc +0x0e16:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5b04 +0x0e1e:  movl   $0x8212,(%esp)
081f5b0b +0x0e25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5b10 +0x0e2a:  jmp    081f5daa <+0x10c4>
081f5b15 +0x0e2f:  mov    -0xeb8(%ebp),%eax
081f5b1b +0x0e35:  test   %eax,%eax
081f5b1d +0x0e37:  jne    081f5bf1 <+0xf0b>
081f5b23 +0x0e3d:  mov    -0x48(%ebp),%eax
081f5b26 +0x0e40:  mov    %eax,(%esp)
081f5b29 +0x0e43:  call   0822d8e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f92
081f5b2e +0x0e48:  test   %eax,%eax
081f5b30 +0x0e4a:  jne    081f5bf1 <+0xf0b>
081f5b36 +0x0e50:  mov    -0x48(%ebp),%eax
081f5b39 +0x0e53:  add    $0xb24,%eax
081f5b3e +0x0e58:  mov    %eax,(%esp)
081f5b41 +0x0e5b:  call   0830de1c <_ZN13CBattle_Field21GetTotalSkillMaterialEv>  ; CBattle_Field::GetTotalSkillMaterial()
081f5b46 +0x0e60:  test   %eax,%eax
081f5b48 +0x0e62:  jne    081f5bf1 <+0xf0b>
081f5b4e +0x0e68:  mov    -0xeb0(%ebp),%eax
081f5b54 +0x0e6e:  test   %eax,%eax
081f5b56 +0x0e70:  je     081f5bf1 <+0xf0b>
081f5b5c +0x0e76:  mov    -0xea8(%ebp),%eax
081f5b62 +0x0e7c:  mov    %eax,-0x1ccc(%ebp)
081f5b68 +0x0e82:  fildl  -0x1ccc(%ebp)
081f5b6e +0x0e88:  mov    -0xeb0(%ebp),%eax
081f5b74 +0x0e8e:  mov    %eax,-0x1ccc(%ebp)
081f5b7a +0x0e94:  fildl  -0x1ccc(%ebp)
081f5b80 +0x0e9a:  fdivrp %st,%st(1)
081f5b82 +0x0e9c:  flds   &data#0dd50509(.rodata)
081f5b88 +0x0ea2:  fmulp  %st,%st(1)
081f5b8a +0x0ea4:  flds   "守�B"
081f5b90 +0x0eaa:  fxch   %st(1)
081f5b92 +0x0eac:  fucompp
081f5b94 +0x0eae:  fnstsw %ax
081f5b96 +0x0eb0:  sahf
081f5b97 +0x0eb1:  setae  %al
081f5b9a +0x0eb4:  test   %al,%al
081f5b9c +0x0eb6:  je     081f5bf1 <+0xf0b>
081f5b9e +0x0eb8:  mov    -0xeb4(%ebp),%eax
081f5ba4 +0x0ebe:  test   %eax,%eax
081f5ba6 +0x0ec0:  je     081f5bf1 <+0xf0b>
081f5ba8 +0x0ec2:  mov    -0xeac(%ebp),%eax
081f5bae +0x0ec8:  mov    %eax,-0x1ccc(%ebp)
081f5bb4 +0x0ece:  fildl  -0x1ccc(%ebp)
081f5bba +0x0ed4:  mov    -0xeb4(%ebp),%eax
081f5bc0 +0x0eda:  mov    %eax,-0x1ccc(%ebp)
081f5bc6 +0x0ee0:  fildl  -0x1ccc(%ebp)
081f5bcc +0x0ee6:  fdivrp %st,%st(1)
081f5bce +0x0ee8:  flds   &data#0dd50509(.rodata)
081f5bd4 +0x0eee:  fmulp  %st,%st(1)
081f5bd6 +0x0ef0:  flds   "守�B"
081f5bdc +0x0ef6:  fxch   %st(1)
081f5bde +0x0ef8:  fucompp
081f5be0 +0x0efa:  fnstsw %ax
081f5be2 +0x0efc:  sahf
081f5be3 +0x0efd:  setae  %al
081f5be6 +0x0f00:  test   %al,%al
081f5be8 +0x0f02:  je     081f5bf1 <+0xf0b>
081f5bea +0x0f04:  mov    $0x1,%eax
081f5bef +0x0f09:  jmp    081f5bf6 <+0xf10>
081f5bf1 +0x0f0b:  mov    $0x0,%eax
081f5bf6 +0x0f10:  test   %al,%al
081f5bf8 +0x0f12:  je     081f5d46 <+0x1060>
081f5bfe +0x0f18:  movb   $0x0,-0x1d(%ebp)
081f5c02 +0x0f1c:  movl   $0x0,-0x1c(%ebp)
081f5c09 +0x0f23:  jmp    081f5cf2 <+0x100c>
081f5c0e +0x0f28:  mov    -0x1c(%ebp),%eax
081f5c11 +0x0f2b:  mov    %eax,0x4(%esp)
081f5c15 +0x0f2f:  mov    -0x48(%ebp),%eax
081f5c18 +0x0f32:  mov    %eax,(%esp)
081f5c1b +0x0f35:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081f5c20 +0x0f3a:  test   %al,%al
081f5c22 +0x0f3c:  je     081f5cee <+0x1008>
081f5c28 +0x0f42:  mov    -0x48(%ebp),%eax
081f5c2b +0x0f45:  mov    %eax,(%esp)
081f5c2e +0x0f48:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
081f5c33 +0x0f4d:  mov    %eax,%ecx
081f5c35 +0x0f4f:  mov    -0x1c(%ebp),%edx
081f5c38 +0x0f52:  mov    %edx,%eax
081f5c3a +0x0f54:  add    %eax,%eax
081f5c3c +0x0f56:  add    %edx,%eax
081f5c3e +0x0f58:  shl    $0x3,%eax
081f5c41 +0x0f5b:  lea    (%ecx,%eax,1),%eax
081f5c44 +0x0f5e:  mov    (%eax),%eax
081f5c46 +0x0f60:  mov    %eax,(%esp)
081f5c49 +0x0f63:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f5c4e +0x0f68:  lea    -0xc2(%ebp),%edx
081f5c54 +0x0f6e:  movl   $0xc,0xc(%esp)
081f5c5c +0x0f76:  movl   $0x0,0x8(%esp)
081f5c64 +0x0f7e:  mov    %eax,0x4(%esp)
081f5c68 +0x0f82:  mov    %edx,(%esp)
081f5c6b +0x0f85:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081f5c70 +0x0f8a:  sub    $0x4,%esp
081f5c73 +0x0f8d:  mov    -0xc0(%ebp),%eax
081f5c79 +0x0f93:  cmp    $0x2ad4,%eax
081f5c7e +0x0f98:  je     081f5cd8 <+0xff2>
081f5c80 +0x0f9a:  mov    -0x48(%ebp),%eax
081f5c83 +0x0f9d:  mov    %eax,(%esp)
081f5c86 +0x0fa0:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
081f5c8b +0x0fa5:  mov    %eax,%ecx
081f5c8d +0x0fa7:  mov    -0x1c(%ebp),%edx
081f5c90 +0x0faa:  mov    %edx,%eax
081f5c92 +0x0fac:  add    %eax,%eax
081f5c94 +0x0fae:  add    %edx,%eax
081f5c96 +0x0fb0:  shl    $0x3,%eax
081f5c99 +0x0fb3:  lea    (%ecx,%eax,1),%eax
081f5c9c +0x0fb6:  mov    (%eax),%eax
081f5c9e +0x0fb8:  mov    %eax,(%esp)
081f5ca1 +0x0fbb:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081f5ca6 +0x0fc0:  lea    -0x85(%ebp),%edx
081f5cac +0x0fc6:  movl   $0xe,0xc(%esp)
081f5cb4 +0x0fce:  movl   $0x0,0x8(%esp)
081f5cbc +0x0fd6:  mov    %eax,0x4(%esp)
081f5cc0 +0x0fda:  mov    %edx,(%esp)
081f5cc3 +0x0fdd:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081f5cc8 +0x0fe2:  sub    $0x4,%esp
081f5ccb +0x0fe5:  mov    -0x83(%ebp),%eax
081f5cd1 +0x0feb:  cmp    $0x329e,%eax
081f5cd6 +0x0ff0:  jne    081f5cdf <+0xff9>
081f5cd8 +0x0ff2:  mov    $0x1,%eax
081f5cdd +0x0ff7:  jmp    081f5ce4 <+0xffe>
081f5cdf +0x0ff9:  mov    $0x0,%eax
081f5ce4 +0x0ffe:  test   %al,%al
081f5ce6 +0x1000:  je     081f5cee <+0x1008>
081f5ce8 +0x1002:  movb   $0x1,-0x1d(%ebp)
081f5cec +0x1006:  jmp    081f5d01 <+0x101b>
081f5cee +0x1008:  addl   $0x1,-0x1c(%ebp)
081f5cf2 +0x100c:  cmpl   $0x3,-0x1c(%ebp)
081f5cf6 +0x1010:  setle  %al
081f5cf9 +0x1013:  test   %al,%al
081f5cfb +0x1015:  jne    081f5c0e <+0xf28>
081f5d01 +0x101b:  movzbl -0x1d(%ebp),%eax
081f5d05 +0x101f:  xor    $0x1,%eax
081f5d08 +0x1022:  test   %al,%al
081f5d0a +0x1024:  je     081f5d46 <+0x1060>
081f5d0c +0x1026:  mov    0xc(%ebp),%eax
081f5d0f +0x1029:  mov    %eax,(%esp)
081f5d12 +0x102c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f5d17 +0x1031:  movl   $0x0,0x14(%esp)
081f5d1f +0x1039:  movl   $0x0,0x10(%esp)
081f5d27 +0x1041:  movl   $0x1,0xc(%esp)
081f5d2f +0x1049:  movl   $0x1a2,0x8(%esp)
081f5d37 +0x1051:  mov    0xc(%ebp),%edx
081f5d3a +0x1054:  mov    %edx,0x4(%esp)
081f5d3e +0x1058:  mov    %eax,(%esp)
081f5d41 +0x105b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f5d46 +0x1060:  mov    0xc(%ebp),%eax
081f5d49 +0x1063:  mov    %eax,0x4(%esp)
081f5d4d +0x1067:  mov    -0x48(%ebp),%eax
081f5d50 +0x106a:  mov    %eax,(%esp)
081f5d53 +0x106d:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
081f5d58 +0x1072:  xor    $0x1,%eax
081f5d5b +0x1075:  test   %al,%al
081f5d5d +0x1077:  je     081f5d66 <+0x1080>
081f5d5f +0x1079:  mov    $0x0,%eax
081f5d64 +0x107e:  jmp    081f5daa <+0x10c4>
081f5d66 +0x1080:  mov    0xc(%ebp),%eax
081f5d69 +0x1083:  mov    %eax,0x4(%esp)
081f5d6d +0x1087:  mov    -0x48(%ebp),%eax
081f5d70 +0x108a:  mov    %eax,(%esp)
081f5d73 +0x108d:  call   085b2412 <_ZN6CParty13SetPlayResultEP5CUser>  ; CParty::SetPlayResult(CUser*)
081f5d78 +0x1092:  xor    $0x1,%eax
081f5d7b +0x1095:  test   %al,%al
081f5d7d +0x1097:  je     081f5da5 <+0x10bf>
081f5d7f +0x1099:  movl   $0x0,0xc(%esp)
081f5d87 +0x10a1:  movl   $0x0,0x8(%esp)
081f5d8f +0x10a9:  movl   $&_ZZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5d97 +0x10b1:  movl   $0x8235,(%esp)
081f5d9e +0x10b8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5da3 +0x10bd:  jmp    081f5daa <+0x10c4>
081f5da5 +0x10bf:  mov    $0x0,%eax
081f5daa +0x10c4:  lea    -0xc(%ebp),%esp
081f5dad +0x10c7:  add    $0x0,%esp
081f5db0 +0x10ca:  pop    %ebx
081f5db1 +0x10cb:  pop    %esi
081f5db2 +0x10cc:  pop    %edi
081f5db3 +0x10cd:  pop    %ebp
081f5db4 +0x10ce:  ret
081f5db5 +0x10cf:  nop
```

## 反编译 C

```c
// DisPatcher_SetPlayResult::dispatch_sig @ 0x81f4ce6

/* WARNING: Removing unreachable block (ram,0x081f55e5) */
/* WARNING: Removing unreachable block (ram,0x081f5590) */
/* WARNING: Removing unreachable block (ram,0x081f57a9) */
/* WARNING: Removing unreachable block (ram,0x081f55a7) */
/* WARNING: Removing unreachable block (ram,0x081f55d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPlayResult::dispatch_sig
          (DisPatcher_SetPlayResult *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  CParty CVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  uint uVar7;
  undefined4 uVar8;
  TimerQueue *pTVar9;
  CHARAC_DATA *pCVar10;
  TAG_CHARAC_DATA *pTVar11;
  SIG_LOAD_CHARAC *pSVar12;
  CHARAC_DATA *pCVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  TAG_CHARAC_DATA *pTVar16;
  bool bVar17;
  byte bVar18;
  undefined1 auStackY_2caa [3982];
  ulonglong local_1cdc;
  undefined1 local_1cc2 [12];
  undefined2 local_1cb6;
  undefined4 auStack_1cb4 [8];
  short local_1c91;
  TAG_CHARAC_DATA local_1637;
  TAG_CHARAC_DATA local_1636 [119];
  SIG_LOAD_CHARAC local_15bf;
  SIG_LOAD_CHARAC local_15be [11];
  CHARAC_DATA local_15b3;
  CHARAC_DATA local_15b2 [36];
  short local_158e;
  undefined4 local_f34 [30];
  int local_ebc;
  int local_eb8;
  int local_eb4;
  int local_eb0;
  int local_eac;
  int local_ea8;
  char local_ea3;
  CHARAC_DATA local_ea2;
  CHARAC_DATA local_ea1 [1653];
  TAG_CHARAC_DATA local_82c [120];
  undefined1 local_7b4 [1654];
  TAG_CHARAC_DATA local_13e;
  TAG_CHARAC_DATA local_13d [119];
  undefined1 local_c6 [2];
  int local_c4;
  undefined1 local_89 [2];
  int local_87;
  CParty *local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  char local_21;
  int local_20;
  
  bVar18 = 0;
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 5) {
    CUser::GetPartyIndex(param_1);
    iVar3 = G_CGameManager();
    local_4c = (CParty *)CGameManager::GetParty(iVar3);
    if (local_4c == (CParty *)0x0) {
      uVar4 = LineFunc(0x8155,
                       "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
    else if (*(int *)(local_4c + 0xcd8) == 1) {
      uVar4 = 0;
    }
    else if (((local_4c == (CParty *)0x0) || (local_40 = *(int *)(local_4c + 0xcac), local_40 == 0))
            || (*(char *)(local_40 + 0x89f) < '\x01')) {
      GameResultType::Clear((GameResultType *)(local_4c + 0x17f4));
      cVar1 = PacketBuf::get_byte(param_2,(char *)(local_4c + 0x17fd));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,(char *)(local_4c + 0x17fe));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,(ushort *)(local_4c + 0x183e));
          if (cVar1 == '\x01') {
            local_ea3 = '\0';
            cVar1 = PacketBuf::get_byte(param_2,&local_ea3);
            if (cVar1 == '\x01') {
              local_3c = 0;
              while( true ) {
                if ((local_3c < local_ea3) && (local_3c < 4)) {
                  bVar17 = true;
                }
                else {
                  bVar17 = false;
                }
                if (!bVar17) break;
                cVar1 = PacketBuf::get_short
                                  (param_2,(ushort *)(local_4c + (local_3c + 0x300) * 8 + 8));
                if (cVar1 != '\x01') {
                  uVar4 = LineFunc(0x817e,
                                   "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar4;
                }
                cVar1 = PacketBuf::get_int(param_2,(int *)(local_4c + (local_3c + 0x300) * 8 + 0xc))
                ;
                if (cVar1 != '\x01') {
                  uVar4 = LineFunc(0x8181,
                                   "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar4;
                }
                local_3c = local_3c + 1;
              }
              uVar5 = CParty::GetMapPlayingTime(local_4c);
              cUserHistoryLog::MapClear
                        ((cUserHistoryLog *)(param_1 + 0x79700),*(ushort *)(local_4c + 0x183e),
                         uVar5 / 1000,0);
              local_ea8 = 0;
              cVar1 = PacketBuf::get_int(param_2,&local_ea8);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x818b,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              if (local_4c != (CParty *)0x0) {
                cVar1 = CParty::checkBossRoom(local_4c);
                iVar3 = local_ea8;
                if ((cVar1 == '\x01') || (local_ea8 == 0)) {
                  bVar17 = false;
                }
                else {
                  bVar17 = true;
                }
                if (bVar17) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x1fb,iVar3,0,0);
                }
              }
              cVar1 = PacketBuf::get_int(param_2,(uint *)(local_4c + 0x1840));
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8195,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              if (10000 < *(uint *)(local_4c + 0x1840)) {
                uVar5 = *(uint *)(local_4c + 0x1840);
                local_34 = *(uint *)(local_4c + 0x1840) % 10000;
                local_38 = uVar5 / 10000;
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x78,1,uVar5 / 10000,0);
                *(uint *)(local_4c + 0x1840) = local_34;
              }
              iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
              if ((iVar3 == 3) ||
                 ((iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1), iVar3 == 4
                  && (cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
                     cVar1 == '\x02')))) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                local_1cdc = (ulonglong)*(uint *)(local_4c + 0x1840);
                local_1cdc._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6320 * (double)local_1cdc);
                *(undefined4 *)(local_4c + 0x1840) = (undefined4)local_1cdc;
              }
              else {
                local_1cdc = (ulonglong)*(uint *)(local_4c + 0x1840);
                local_1cdc._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6328 * (double)local_1cdc);
                *(undefined4 *)(local_4c + 0x1840) = (undefined4)local_1cdc;
              }
              uVar5 = *(uint *)(local_4c + 0x1840);
              uVar7 = CParty::GetMapPlayingTime(local_4c);
              if (uVar7 / 1000 < uVar5) {
                uVar4 = *(undefined4 *)(local_4c + 0x1840);
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x75,1,uVar4,0);
              }
              uVar4 = CBattle_Field::get_dungeon_index((CBattle_Field *)(local_4c + 0xb24));
              *(undefined4 *)(local_4c + 0x17f8) = uVar4;
              CVar2 = (CParty)CBattle_Field::get_dungeon_diff((CBattle_Field *)(local_4c + 0xb24));
              local_4c[0x17fc] = CVar2;
              CParty::IncreaseSetPlayResultCount(local_4c,param_1);
              cVar1 = CParty::get_dungeon_clear_state(local_4c);
              if (cVar1 == '\0') {
                cVar1 = CBattle_Field::IsClearDungeon((CBattle_Field *)(local_4c + 0xb24));
                if (cVar1 != '\x01') {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x196,1,0,0);
                  return 0;
                }
                uVar4 = CParty::gen_timer_key(local_4c,0x29);
                uVar8 = CParty::GetPartyIndex(local_4c);
                pTVar9 = (TimerQueue *)G_TimerQueue();
                TimerQueue::InsertTimer(pTVar9,1,uVar8,0x29,0xf,uVar4,0);
                CParty::set_dungeon_clear_state(local_4c,'\x01');
              }
              iVar3 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(local_4c + 0xb24));
              if (*(int *)(iVar3 + 0x4c) == 0) {
                CHARAC_DATA::CHARAC_DATA(&local_ea2);
                TAG_CHARAC_DATA::TAG_CHARAC_DATA(local_82c);
                pSVar12 = &local_15bf;
                uVar5 = 0x703;
                bVar17 = ((uint)pSVar12 & 1) != 0;
                if (bVar17) {
                  local_15bf = (SIG_LOAD_CHARAC)0x0;
                  pSVar12 = local_15be;
                  uVar5 = 0x702;
                }
                if (((uint)pSVar12 & 2) != 0) {
                  *(undefined2 *)pSVar12 = 0;
                  pSVar12 = pSVar12 + 2;
                  uVar5 = uVar5 - 2;
                }
                for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pSVar12 = 0;
                  pSVar12 = pSVar12 + ((uint)bVar18 * -2 + 1) * 4;
                }
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)pSVar12 = 0;
                  pSVar12 = pSVar12 + 2;
                }
                if (!bVar17) {
                  *pSVar12 = (SIG_LOAD_CHARAC)0x0;
                }
                pCVar10 = &local_15b3;
                pCVar13 = &local_ea2;
                uVar5 = 0x676;
                bVar17 = ((uint)pCVar10 & 1) != 0;
                if (bVar17) {
                  local_15b3 = local_ea2;
                  pCVar10 = local_15b2;
                  pCVar13 = local_ea1;
                  uVar5 = 0x675;
                }
                if (((uint)pCVar10 & 2) != 0) {
                  *(undefined2 *)pCVar10 = *(undefined2 *)pCVar13;
                  pCVar10 = pCVar10 + 2;
                  pCVar13 = pCVar13 + 2;
                  uVar5 = uVar5 - 2;
                }
                for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pCVar10 = *(undefined4 *)pCVar13;
                  pCVar13 = pCVar13 + ((uint)bVar18 * -2 + 1) * 4;
                  pCVar10 = pCVar10 + ((uint)bVar18 * -2 + 1) * 4;
                }
                iVar3 = 0;
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)pCVar10 = *(undefined2 *)pCVar13;
                  iVar3 = 2;
                }
                if (bVar17) {
                  pCVar10[iVar3] = pCVar13[iVar3];
                }
                pTVar11 = local_82c;
                puVar14 = local_f34;
                for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar14 = *(undefined4 *)pTVar11;
                  pTVar11 = pTVar11 + ((uint)bVar18 * -2 + 1) * 4;
                  puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                }
                cVar1 = CUser::GetCharacInfo(param_1,&local_15bf);
                if ((cVar1 != '\0') && (0x1d < local_158e)) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe2,1,0,0);
                }
              }
              iVar3 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(local_4c + 0xb24));
              local_48 = stMapMonsterKillChecker_t::getUseSkillMaterialCount
                                   ((stMapMonsterKillChecker_t *)(iVar3 + 0x4c));
              local_30 = CParty::GetMapPlayingTime(local_4c);
              local_30 = local_30 / 1000;
              local_2c = local_30 / 10;
              if (local_30 % 10 != 0) {
                local_2c = local_2c + 1;
              }
              if (local_48 < local_2c) {
                CHARAC_DATA::CHARAC_DATA((CHARAC_DATA *)local_7b4);
                TAG_CHARAC_DATA::TAG_CHARAC_DATA(&local_13e);
                puVar14 = (undefined4 *)local_1cc2;
                uVar5 = 0x703;
                bVar17 = ((uint)puVar14 & 2) != 0;
                if (bVar17) {
                  local_1cc2._0_2_ = 0;
                  puVar14 = (undefined4 *)(local_1cc2 + 2);
                  uVar5 = 0x701;
                }
                for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar14 = 0;
                  puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                }
                if (!bVar17) {
                  *(undefined2 *)puVar14 = 0;
                  puVar14 = (undefined4 *)((int)puVar14 + 2);
                }
                *(undefined1 *)puVar14 = 0;
                puVar14 = (undefined4 *)&local_1cb6;
                puVar15 = (undefined4 *)local_7b4;
                uVar5 = 0x676;
                bVar17 = ((uint)puVar14 & 2) != 0;
                if (bVar17) {
                  local_1cb6 = local_7b4._0_2_;
                  puVar14 = auStack_1cb4;
                  puVar15 = (undefined4 *)(local_7b4 + 2);
                  uVar5 = 0x674;
                }
                for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar14 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
                  puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                }
                if (!bVar17) {
                  *(undefined2 *)puVar14 = *(undefined2 *)puVar15;
                }
                pTVar11 = &local_1637;
                pTVar16 = &local_13e;
                uVar5 = 0x78;
                bVar17 = ((uint)pTVar11 & 1) != 0;
                if (bVar17) {
                  local_1637 = local_13e;
                  pTVar11 = local_1636;
                  pTVar16 = local_13d;
                  uVar5 = 0x77;
                }
                if (((uint)pTVar11 & 2) != 0) {
                  *(undefined2 *)pTVar11 = *(undefined2 *)pTVar16;
                  pTVar11 = pTVar11 + 2;
                  pTVar16 = pTVar16 + 2;
                  uVar5 = uVar5 - 2;
                }
                for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pTVar11 = *(undefined4 *)pTVar16;
                  pTVar16 = pTVar16 + ((uint)bVar18 * -2 + 1) * 4;
                  pTVar11 = pTVar11 + ((uint)bVar18 * -2 + 1) * 4;
                }
                iVar3 = 0;
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)pTVar11 = *(undefined2 *)pTVar16;
                  iVar3 = 2;
                }
                if (bVar17) {
                  pTVar11[iVar3] = pTVar16[iVar3];
                }
                cVar1 = CUser::GetCharacInfo(param_1,(SIG_LOAD_CHARAC *)local_1cc2);
                if ((cVar1 != '\0') && (0x1d < local_1c91)) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe3,1,0,0);
                }
              }
              local_44 = CParty::GetMapPlayingTime(local_4c);
              if ((local_44 < 10000) &&
                 (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), 10 < iVar3)
                 ) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                iVar3 = 0xb - local_44 / 1000;
                local_28 = iVar3;
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe5,iVar3,0,0);
              }
              if ((local_44 < 20000) &&
                 (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), 10 < iVar3)
                 ) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe4,1,0,0);
              }
              local_eac = 0;
              local_eb0 = 0;
              local_eb4 = 0;
              local_eb8 = 0;
              local_ebc = 0;
              cVar1 = PacketBuf::get_int(param_2,&local_ebc);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x820e,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eac);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x820f,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eb0);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8210,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eb4);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8211,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eb8);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8212,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              if (((((local_ebc != 0) || (iVar3 = CParty::GetUsedCoinCount(local_4c), iVar3 != 0))
                   || (iVar3 = CBattle_Field::GetTotalSkillMaterial(), iVar3 != 0)) ||
                  ((local_eb4 == 0 ||
                   (_DAT_08bd6354 * ((float)local_eac / (float)local_eb4) < _DAT_08bd6358)))) ||
                 ((local_eb8 == 0 ||
                  (_DAT_08bd6354 * ((float)local_eb0 / (float)local_eb8) < _DAT_08bd6358)))) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if (bVar17) {
                local_21 = '\0';
                for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
                  cVar1 = CParty::checkValidUser(local_4c,local_20);
                  if (cVar1 != '\0') {
                    iVar3 = CParty::GetMember(local_4c);
                    iVar3 = CUserCharacInfo::getCurCharacInvenR
                                      (*(CUserCharacInfo **)(iVar3 + local_20 * 0x18));
                    CInventory::GetInvenSlot((int)local_c6,iVar3);
                    if (local_c4 == 0x2ad4) {
LAB_081f5cd8:
                      bVar17 = true;
                    }
                    else {
                      iVar3 = CParty::GetMember(local_4c);
                      iVar3 = CUserCharacInfo::getCurCharacInvenR
                                        (*(CUserCharacInfo **)(iVar3 + local_20 * 0x18));
                      CInventory::GetInvenSlot((int)local_89,iVar3);
                      if (local_87 == 0x329e) goto LAB_081f5cd8;
                      bVar17 = false;
                    }
                    if (bVar17) {
                      local_21 = '\x01';
                      break;
                    }
                  }
                }
                if (local_21 != '\x01') {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x1a2,1,0,0);
                }
              }
              cVar1 = CParty::CheckRecvFromAllMember(local_4c,param_1);
              if (cVar1 != '\x01') {
                return 0;
              }
              cVar1 = CParty::SetPlayResult(local_4c,param_1);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8235,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              return 0;
            }
            uVar4 = LineFunc(0x8179,
                             "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
          else {
            uVar4 = LineFunc(0x8174,
                             "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0x8172,
                           "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)",
                           0,0);
        }
      }
      else {
        uVar4 = LineFunc(0x816d,
                         "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
