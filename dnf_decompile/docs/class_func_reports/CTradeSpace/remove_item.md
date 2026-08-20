# remove_item

`_ZN11CTradeSpace11remove_itemEP5CUseriiii`

`CTradeSpace::remove_item(CUser*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852bfcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852bfcc  _ZN11CTradeSpace11remove_itemEP5CUseriiii
#           CTradeSpace::remove_item(CUser*, int, int, int, int)
# range [0x0852bfcc, 0x0852dbb7]
0852bfcc +0x0000:  push   %ebp
0852bfcd +0x0001:  mov    %esp,%ebp
0852bfcf +0x0003:  push   %edi
0852bfd0 +0x0004:  push   %esi
0852bfd1 +0x0005:  push   %ebx
0852bfd2 +0x0006:  sub    $0x23c,%esp
0852bfd8 +0x000c:  mov    0x8(%ebp),%eax
0852bfdb +0x000f:  mov    %eax,(%esp)
0852bfde +0x0012:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
0852bfe3 +0x0017:  test   %al,%al
0852bfe5 +0x0019:  je     0852bff1 <+0x25>
0852bfe7 +0x001b:  mov    $0xffffffff,%ebx
0852bfec +0x0020:  jmp    0852dbab <+0x1bdf>
0852bff1 +0x0025:  cmpl   $0x0,0x1c(%ebp)
0852bff5 +0x0029:  jg     0852c001 <+0x35>
0852bff7 +0x002b:  mov    $0xffffff9e,%ebx
0852bffc +0x0030:  jmp    0852dbab <+0x1bdf>
0852c001 +0x0035:  lea    -0x80(%ebp),%eax
0852c004 +0x0038:  mov    %eax,(%esp)
0852c007 +0x003b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0852c00c +0x0040:  movl   $0x0,-0x44(%ebp)
0852c013 +0x0047:  mov    0x8(%ebp),%eax
0852c016 +0x004a:  mov    0x20(%eax),%eax
0852c019 +0x004d:  cmp    0xc(%ebp),%eax
0852c01c +0x0050:  jne    0852c037 <+0x6b>
0852c01e +0x0052:  mov    0x8(%ebp),%eax
0852c021 +0x0055:  mov    0x24(%eax),%eax
0852c024 +0x0058:  mov    %eax,-0x44(%ebp)
0852c027 +0x005b:  movl   $0x1,-0x40(%ebp)
0852c02e +0x0062:  movl   $0x0,-0x3c(%ebp)
0852c035 +0x0069:  jmp    0852c04e <+0x82>
0852c037 +0x006b:  mov    0x8(%ebp),%eax
0852c03a +0x006e:  mov    0x20(%eax),%eax
0852c03d +0x0071:  mov    %eax,-0x44(%ebp)
0852c040 +0x0074:  movl   $0x0,-0x40(%ebp)
0852c047 +0x007b:  movl   $0x1,-0x3c(%ebp)
0852c04e +0x0082:  mov    -0x3c(%ebp),%edx
0852c051 +0x0085:  mov    0x8(%ebp),%eax
0852c054 +0x0088:  add    $0x8,%edx
0852c057 +0x008b:  movl   $0x0,0x8(%eax,%edx,4)
0852c05f +0x0093:  mov    -0x40(%ebp),%edx
0852c062 +0x0096:  mov    0x8(%ebp),%eax
0852c065 +0x0099:  add    $0x8,%edx
0852c068 +0x009c:  movl   $0x0,0x8(%eax,%edx,4)
0852c070 +0x00a4:  cmpl   $0x0,-0x44(%ebp)
0852c074 +0x00a8:  je     0852c07c <+0xb0>
0852c076 +0x00aa:  cmpl   $0x1a,0x10(%ebp)
0852c07a +0x00ae:  jle    0852c086 <+0xba>
0852c07c +0x00b0:  mov    $0xffffffff,%ebx
0852c081 +0x00b5:  jmp    0852dba0 <+0x1bd4>
0852c086 +0x00ba:  mov    -0x3c(%ebp),%edx
0852c089 +0x00bd:  mov    0x8(%ebp),%eax
0852c08c +0x00c0:  add    $0x8,%edx
0852c08f +0x00c3:  mov    (%eax,%edx,4),%eax
0852c092 +0x00c6:  mov    %eax,(%esp)
0852c095 +0x00c9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852c09a +0x00ce:  test   %eax,%eax
0852c09c +0x00d0:  je     0852c0ad <+0xe1>
0852c09e +0x00d2:  mov    0xc(%ebp),%eax
0852c0a1 +0x00d5:  mov    %eax,(%esp)
0852c0a4 +0x00d8:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852c0a9 +0x00dd:  test   %eax,%eax
0852c0ab +0x00df:  jne    0852c0b4 <+0xe8>
0852c0ad +0x00e1:  mov    $0x1,%eax
0852c0b2 +0x00e6:  jmp    0852c0b9 <+0xed>
0852c0b4 +0x00e8:  mov    $0x0,%eax
0852c0b9 +0x00ed:  test   %al,%al
0852c0bb +0x00ef:  je     0852c128 <+0x15c>
0852c0bd +0x00f1:  mov    0xc(%ebp),%eax
0852c0c0 +0x00f4:  mov    %eax,(%esp)
0852c0c3 +0x00f7:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852c0c8 +0x00fc:  mov    %eax,%esi
0852c0ca +0x00fe:  mov    -0x3c(%ebp),%edx
0852c0cd +0x0101:  mov    0x8(%ebp),%eax
0852c0d0 +0x0104:  add    $0x8,%edx
0852c0d3 +0x0107:  mov    (%eax,%edx,4),%eax
0852c0d6 +0x010a:  mov    %eax,(%esp)
0852c0d9 +0x010d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0852c0de +0x0112:  mov    %eax,%ebx
0852c0e0 +0x0114:  movl   $0x5,0xc(%esp)
0852c0e8 +0x011c:  movl   $0x45a,0x8(%esp)
0852c0f0 +0x0124:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852c0f8 +0x012c:  lea    -0x74(%ebp),%eax
0852c0fb +0x012f:  mov    %eax,(%esp)
0852c0fe +0x0132:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852c103 +0x0137:  mov    %esi,0xc(%esp)
0852c107 +0x013b:  mov    %ebx,0x8(%esp)
0852c10b +0x013f:  movl   $"CTradeSpace::remove_item()\t0 == m_pTraders[owner_index]->getCurCharacR() %x || 0 == owner->getCurCharacR() %x",0x4(%esp)
0852c113 +0x0147:  lea    -0x74(%ebp),%eax
0852c116 +0x014a:  mov    %eax,(%esp)
0852c119 +0x014d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852c11e +0x0152:  mov    $0xffffffff,%ebx
0852c123 +0x0157:  jmp    0852dba0 <+0x1bd4>
0852c128 +0x015c:  mov    -0x3c(%ebp),%ebx
0852c12b +0x015f:  mov    0x10(%ebp),%edx
0852c12e +0x0162:  mov    0x8(%ebp),%ecx
0852c131 +0x0165:  mov    %edx,%eax
0852c133 +0x0167:  shl    $0x3,%eax
0852c136 +0x016a:  add    %edx,%eax
0852c138 +0x016c:  shl    $0x3,%eax
0852c13b +0x016f:  imul   $0x798,%ebx,%edx
0852c141 +0x0175:  add    %edx,%eax
0852c143 +0x0177:  lea    (%ecx,%eax,1),%eax
0852c146 +0x017a:  add    $0x30,%eax
0852c149 +0x017d:  movzbl 0x8(%eax),%eax
0852c14d +0x0181:  movsbl %al,%eax
0852c150 +0x0184:  cmp    0x14(%ebp),%eax
0852c153 +0x0187:  je     0852c15f <+0x193>
0852c155 +0x0189:  mov    $0xffffffff,%ebx
0852c15a +0x018e:  jmp    0852dba0 <+0x1bd4>
0852c15f +0x0193:  mov    0x14(%ebp),%eax
0852c162 +0x0196:  cmp    $0x1,%eax
0852c165 +0x0199:  je     0852d587 <+0x15bb>
0852c16b +0x019f:  cmp    $0x1,%eax
0852c16e +0x01a2:  jg     0852c179 <+0x1ad>
0852c170 +0x01a4:  test   %eax,%eax
0852c172 +0x01a6:  je     0852c190 <+0x1c4>
0852c174 +0x01a8:  jmp    0852db7e <+0x1bb2>
0852c179 +0x01ad:  cmp    $0x3,%eax
0852c17c +0x01b0:  je     0852cef3 <+0xf27>
0852c182 +0x01b6:  cmp    $0x7,%eax
0852c185 +0x01b9:  je     0852d83a <+0x186e>
0852c18b +0x01bf:  jmp    0852db7e <+0x1bb2>
0852c190 +0x01c4:  cmpl   $0x0,0x10(%ebp)
0852c194 +0x01c8:  jne    0852c367 <+0x39b>
0852c19a +0x01ce:  mov    -0x3c(%ebp),%edx
0852c19d +0x01d1:  mov    0x8(%ebp),%eax
0852c1a0 +0x01d4:  add    $0x3d8,%edx
0852c1a6 +0x01da:  mov    (%eax,%edx,4),%eax
0852c1a9 +0x01dd:  sub    0x1c(%ebp),%eax
0852c1ac +0x01e0:  test   %eax,%eax
0852c1ae +0x01e2:  js     0852c35d <+0x391>
0852c1b4 +0x01e8:  mov    0xc(%ebp),%eax
0852c1b7 +0x01eb:  mov    %eax,(%esp)
0852c1ba +0x01ee:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852c1bf +0x01f3:  movl   $0x0,0x10(%esp)
0852c1c7 +0x01fb:  movl   $0x1,0xc(%esp)
0852c1cf +0x0203:  movl   $0x1,0x8(%esp)
0852c1d7 +0x020b:  mov    0x1c(%ebp),%edx
0852c1da +0x020e:  mov    %edx,0x4(%esp)
0852c1de +0x0212:  mov    %eax,(%esp)
0852c1e1 +0x0215:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0852c1e6 +0x021a:  mov    -0x3c(%ebp),%ecx
0852c1e9 +0x021d:  mov    -0x3c(%ebp),%edx
0852c1ec +0x0220:  mov    0x8(%ebp),%eax
0852c1ef +0x0223:  add    $0x3d8,%edx
0852c1f5 +0x0229:  mov    (%eax,%edx,4),%eax
0852c1f8 +0x022c:  mov    %eax,%edx
0852c1fa +0x022e:  sub    0x1c(%ebp),%edx
0852c1fd +0x0231:  mov    0x8(%ebp),%eax
0852c200 +0x0234:  add    $0x3d8,%ecx
0852c206 +0x023a:  mov    %edx,(%eax,%ecx,4)
0852c209 +0x023d:  lea    -0x80(%ebp),%eax
0852c20c +0x0240:  mov    %eax,(%esp)
0852c20f +0x0243:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852c214 +0x0248:  movl   $0xf,0x8(%esp)
0852c21c +0x0250:  movl   $0x0,0x4(%esp)
0852c224 +0x0258:  lea    -0x80(%ebp),%eax
0852c227 +0x025b:  mov    %eax,(%esp)
0852c22a +0x025e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852c22f +0x0263:  mov    0x10(%ebp),%eax
0852c232 +0x0266:  mov    %eax,0x4(%esp)
0852c236 +0x026a:  lea    -0x80(%ebp),%eax
0852c239 +0x026d:  mov    %eax,(%esp)
0852c23c +0x0270:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852c241 +0x0275:  mov    -0x3c(%ebp),%edx
0852c244 +0x0278:  mov    0x8(%ebp),%eax
0852c247 +0x027b:  add    $0x3d8,%edx
0852c24d +0x0281:  mov    (%eax,%edx,4),%eax
0852c250 +0x0284:  test   %eax,%eax
0852c252 +0x0286:  jle    0852c269 <+0x29d>
0852c254 +0x0288:  movl   $0x0,0x4(%esp)
0852c25c +0x0290:  lea    -0x80(%ebp),%eax
0852c25f +0x0293:  mov    %eax,(%esp)
0852c262 +0x0296:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852c267 +0x029b:  jmp    0852c27c <+0x2b0>
0852c269 +0x029d:  movl   $0xffffffff,0x4(%esp)
0852c271 +0x02a5:  lea    -0x80(%ebp),%eax
0852c274 +0x02a8:  mov    %eax,(%esp)
0852c277 +0x02ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852c27c +0x02b0:  mov    -0x3c(%ebp),%edx
0852c27f +0x02b3:  mov    0x8(%ebp),%eax
0852c282 +0x02b6:  add    $0x3d8,%edx
0852c288 +0x02bc:  mov    (%eax,%edx,4),%eax
0852c28b +0x02bf:  mov    %eax,0x4(%esp)
0852c28f +0x02c3:  lea    -0x80(%ebp),%eax
0852c292 +0x02c6:  mov    %eax,(%esp)
0852c295 +0x02c9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852c29a +0x02ce:  movl   $0x0,0x4(%esp)
0852c2a2 +0x02d6:  lea    -0x80(%ebp),%eax
0852c2a5 +0x02d9:  mov    %eax,(%esp)
0852c2a8 +0x02dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852c2ad +0x02e1:  movl   $0x0,0x4(%esp)
0852c2b5 +0x02e9:  lea    -0x80(%ebp),%eax
0852c2b8 +0x02ec:  mov    %eax,(%esp)
0852c2bb +0x02ef:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852c2c0 +0x02f4:  movl   $0x0,0x4(%esp)
0852c2c8 +0x02fc:  lea    -0x80(%ebp),%eax
0852c2cb +0x02ff:  mov    %eax,(%esp)
0852c2ce +0x0302:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852c2d3 +0x0307:  movl   $0x0,0x4(%esp)
0852c2db +0x030f:  lea    -0x80(%ebp),%eax
0852c2de +0x0312:  mov    %eax,(%esp)
0852c2e1 +0x0315:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852c2e6 +0x031a:  movl   $0x0,0x4(%esp)
0852c2ee +0x0322:  lea    -0x80(%ebp),%eax
0852c2f1 +0x0325:  mov    %eax,(%esp)
0852c2f4 +0x0328:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852c2f9 +0x032d:  movl   $&g_emptySlot,0x4(%esp)
0852c301 +0x0335:  lea    -0x80(%ebp),%eax
0852c304 +0x0338:  mov    %eax,(%esp)
0852c307 +0x033b:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852c30c +0x0340:  movl   $0x1,0x4(%esp)
0852c314 +0x0348:  lea    -0x80(%ebp),%eax
0852c317 +0x034b:  mov    %eax,(%esp)
0852c31a +0x034e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852c31f +0x0353:  lea    -0x80(%ebp),%eax
0852c322 +0x0356:  mov    %eax,0x4(%esp)
0852c326 +0x035a:  mov    -0x44(%ebp),%eax
0852c329 +0x035d:  mov    %eax,(%esp)
0852c32c +0x0360:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852c331 +0x0365:  mov    -0x3c(%ebp),%edx
0852c334 +0x0368:  mov    0x8(%ebp),%eax
0852c337 +0x036b:  add    $0x8,%edx
0852c33a +0x036e:  movl   $0x0,0x8(%eax,%edx,4)
0852c342 +0x0376:  mov    -0x40(%ebp),%edx
0852c345 +0x0379:  mov    0x8(%ebp),%eax
0852c348 +0x037c:  add    $0x8,%edx
0852c34b +0x037f:  movl   $0x0,0x8(%eax,%edx,4)
0852c353 +0x0387:  mov    $0x0,%ebx
0852c358 +0x038c:  jmp    0852dba0 <+0x1bd4>
0852c35d +0x0391:  mov    $0xffffffff,%ebx
0852c362 +0x0396:  jmp    0852dba0 <+0x1bd4>
0852c367 +0x039b:  mov    -0x3c(%ebp),%ebx
0852c36a +0x039e:  mov    0x10(%ebp),%edx
0852c36d +0x03a1:  mov    0x8(%ebp),%ecx
0852c370 +0x03a4:  mov    %edx,%eax
0852c372 +0x03a6:  shl    $0x3,%eax
0852c375 +0x03a9:  add    %edx,%eax
0852c377 +0x03ab:  shl    $0x3,%eax
0852c37a +0x03ae:  imul   $0x798,%ebx,%edx
0852c380 +0x03b4:  add    %edx,%eax
0852c382 +0x03b6:  lea    (%ecx,%eax,1),%eax
0852c385 +0x03b9:  add    $0x30,%eax
0852c388 +0x03bc:  lea    -0x108(%ebp),%edx
0852c38e +0x03c2:  mov    $0x11,%ecx
0852c393 +0x03c7:  mov    %edx,%edi
0852c395 +0x03c9:  mov    %eax,%esi
0852c397 +0x03cb:  rep movsl %ds:(%esi),%es:(%edi)
0852c399 +0x03cd:  mov    %esi,%eax
0852c39b +0x03cf:  mov    %edi,%edx
0852c39d +0x03d1:  movzwl (%eax),%ecx
0852c3a0 +0x03d4:  mov    %cx,(%edx)
0852c3a3 +0x03d7:  add    $0x2,%edx
0852c3a6 +0x03da:  add    $0x2,%eax
0852c3a9 +0x03dd:  movl   $0xffffffff,-0x38(%ebp)
0852c3b0 +0x03e4:  mov    -0x3c(%ebp),%edx
0852c3b3 +0x03e7:  mov    0x8(%ebp),%eax
0852c3b6 +0x03ea:  add    $0x8,%edx
0852c3b9 +0x03ed:  mov    (%eax,%edx,4),%eax
0852c3bc +0x03f0:  mov    %eax,(%esp)
0852c3bf +0x03f3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852c3c4 +0x03f8:  mov    0x18(%ebp),%edx
0852c3c7 +0x03fb:  mov    %edx,0x4(%esp)
0852c3cb +0x03ff:  mov    %eax,(%esp)
0852c3ce +0x0402:  call   08500384 <_ZNK10CInventory15GetSlotItemTypeEi>  ; CInventory::GetSlotItemType(int) const
0852c3d3 +0x0407:  mov    %eax,-0x34(%ebp)
0852c3d6 +0x040a:  cmpl   $0x0,-0x34(%ebp)
0852c3da +0x040e:  je     0852c3f7 <+0x42b>
0852c3dc +0x0410:  mov    -0x34(%ebp),%edx
0852c3df +0x0413:  movzbl -0xfe(%ebp),%eax
0852c3e6 +0x041a:  movzbl %al,%eax
0852c3e9 +0x041d:  cmp    %eax,%edx
0852c3eb +0x041f:  je     0852c3f7 <+0x42b>
0852c3ed +0x0421:  mov    $0xffffffff,%ebx
0852c3f2 +0x0426:  jmp    0852dba0 <+0x1bd4>
0852c3f7 +0x042b:  movzbl -0xfe(%ebp),%eax
0852c3fe +0x0432:  cmp    $0x1,%al
0852c400 +0x0434:  jne    0852c5e0 <+0x614>
0852c406 +0x043a:  movzbl -0x100(%ebp),%eax
0852c40d +0x0441:  test   %al,%al
0852c40f +0x0443:  je     0852c41b <+0x44f>
0852c411 +0x0445:  mov    $0xffffffff,%ebx
0852c416 +0x044a:  jmp    0852dba0 <+0x1bd4>
0852c41b +0x044f:  movzbl -0xfe(%ebp),%eax
0852c422 +0x0456:  movzbl %al,%ebx
0852c425 +0x0459:  mov    -0x3c(%ebp),%edx
0852c428 +0x045c:  mov    0x8(%ebp),%eax
0852c42b +0x045f:  add    $0x8,%edx
0852c42e +0x0462:  mov    (%eax,%edx,4),%eax
0852c431 +0x0465:  mov    %eax,(%esp)
0852c434 +0x0468:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852c439 +0x046d:  movl   $0x1,0x8(%esp)
0852c441 +0x0475:  mov    %ebx,0x4(%esp)
0852c445 +0x0479:  mov    %eax,(%esp)
0852c448 +0x047c:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0852c44d +0x0481:  test   %al,%al
0852c44f +0x0483:  je     0852c591 <+0x5c5>
0852c455 +0x0489:  mov    -0x3c(%ebp),%edx
0852c458 +0x048c:  mov    0x8(%ebp),%eax
0852c45b +0x048f:  add    $0x8,%edx
0852c45e +0x0492:  mov    (%eax,%edx,4),%eax
0852c461 +0x0495:  mov    %eax,(%esp)
0852c464 +0x0498:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852c469 +0x049d:  movl   $0x10,0x50(%esp)
0852c471 +0x04a5:  movl   $0x9,0x4c(%esp)
0852c479 +0x04ad:  mov    0x18(%ebp),%edx
0852c47c +0x04b0:  mov    %edx,0x48(%esp)
0852c480 +0x04b4:  mov    0x1c(%ebp),%edx
0852c483 +0x04b7:  mov    %edx,0x44(%esp)
0852c487 +0x04bb:  mov    -0xff(%ebp),%edx
0852c48d +0x04c1:  mov    %edx,0x4(%esp)
0852c491 +0x04c5:  mov    -0xfb(%ebp),%edx
0852c497 +0x04cb:  mov    %edx,0x8(%esp)
0852c49b +0x04cf:  mov    -0xf7(%ebp),%edx
0852c4a1 +0x04d5:  mov    %edx,0xc(%esp)
0852c4a5 +0x04d9:  mov    -0xf3(%ebp),%edx
0852c4ab +0x04df:  mov    %edx,0x10(%esp)
0852c4af +0x04e3:  mov    -0xef(%ebp),%edx
0852c4b5 +0x04e9:  mov    %edx,0x14(%esp)
0852c4b9 +0x04ed:  mov    -0xeb(%ebp),%edx
0852c4bf +0x04f3:  mov    %edx,0x18(%esp)
0852c4c3 +0x04f7:  mov    -0xe7(%ebp),%edx
0852c4c9 +0x04fd:  mov    %edx,0x1c(%esp)
0852c4cd +0x0501:  mov    -0xe3(%ebp),%edx
0852c4d3 +0x0507:  mov    %edx,0x20(%esp)
0852c4d7 +0x050b:  mov    -0xdf(%ebp),%edx
0852c4dd +0x0511:  mov    %edx,0x24(%esp)
0852c4e1 +0x0515:  mov    -0xdb(%ebp),%edx
0852c4e7 +0x051b:  mov    %edx,0x28(%esp)
0852c4eb +0x051f:  mov    -0xd7(%ebp),%edx
0852c4f1 +0x0525:  mov    %edx,0x2c(%esp)
0852c4f5 +0x0529:  mov    -0xd3(%ebp),%edx
0852c4fb +0x052f:  mov    %edx,0x30(%esp)
0852c4ff +0x0533:  mov    -0xcf(%ebp),%edx
0852c505 +0x0539:  mov    %edx,0x34(%esp)
0852c509 +0x053d:  mov    -0xcb(%ebp),%edx
0852c50f +0x0543:  mov    %edx,0x38(%esp)
0852c513 +0x0547:  mov    -0xc7(%ebp),%edx
0852c519 +0x054d:  mov    %edx,0x3c(%esp)
0852c51d +0x0551:  movzbl -0xc3(%ebp),%edx
0852c524 +0x0558:  mov    %dl,0x40(%esp)
0852c528 +0x055c:  mov    %eax,(%esp)
0852c52b +0x055f:  call   085039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>  ; CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)
0852c530 +0x0564:  mov    %eax,-0x38(%ebp)
0852c533 +0x0567:  cmpl   $0x0,-0x38(%ebp)
0852c537 +0x056b:  jns    0852c946 <+0x97a>
0852c53d +0x0571:  mov    -0xfd(%ebp),%ebx
0852c543 +0x0577:  mov    0xc(%ebp),%eax
0852c546 +0x057a:  mov    %eax,(%esp)
0852c549 +0x057d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0852c54e +0x0582:  mov    0x18(%ebp),%edx
0852c551 +0x0585:  mov    %edx,0x1c(%esp)
0852c555 +0x0589:  mov    %ebx,0x18(%esp)
0852c559 +0x058d:  mov    %eax,0x14(%esp)
0852c55d +0x0591:  movl   $"FATAL_ERROR USER[%s] ITEMID[%d] -> SLOT[%d]",0x10(%esp)
0852c565 +0x0599:  movl   $0x4a5,0xc(%esp)
0852c56d +0x05a1:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852c575 +0x05a9:  movl   $"item_trade.cpp",0x4(%esp)
0852c57d +0x05b1:  movl   $0x1,(%esp)
0852c584 +0x05b8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852c589 +0x05bd:  mov    -0x38(%ebp),%ebx
0852c58c +0x05c0:  jmp    0852dba0 <+0x1bd4>
0852c591 +0x05c5:  mov    -0xfd(%ebp),%ebx
0852c597 +0x05cb:  mov    0xc(%ebp),%eax
0852c59a +0x05ce:  mov    %eax,(%esp)
0852c59d +0x05d1:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0852c5a2 +0x05d6:  mov    %ebx,0x18(%esp)
0852c5a6 +0x05da:  mov    %eax,0x14(%esp)
0852c5aa +0x05de:  movl   $"[TRADE]FATAL_ERROR USER[%s] ITEMID[%d]",0x10(%esp)
0852c5b2 +0x05e6:  movl   $0x4ac,0xc(%esp)
0852c5ba +0x05ee:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852c5c2 +0x05f6:  movl   $"item_trade.cpp",0x4(%esp)
0852c5ca +0x05fe:  movl   $0x1,(%esp)
0852c5d1 +0x0605:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852c5d6 +0x060a:  mov    $0xffffffff,%ebx
0852c5db +0x060f:  jmp    0852dba0 <+0x1bd4>
0852c5e0 +0x0614:  lea    -0x108(%ebp),%eax
0852c5e6 +0x061a:  add    $0x9,%eax
0852c5e9 +0x061d:  mov    %eax,(%esp)
0852c5ec +0x0620:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852c5f1 +0x0625:  cmp    0x1c(%ebp),%eax
0852c5f4 +0x0628:  setl   %al
0852c5f7 +0x062b:  test   %al,%al
0852c5f9 +0x062d:  je     0852c605 <+0x639>
0852c5fb +0x062f:  mov    $0xffffffff,%ebx
0852c600 +0x0634:  jmp    0852dba0 <+0x1bd4>
0852c605 +0x0639:  mov    0x1c(%ebp),%eax
0852c608 +0x063c:  mov    %eax,0x4(%esp)
0852c60c +0x0640:  lea    -0x108(%ebp),%eax
0852c612 +0x0646:  add    $0x9,%eax
0852c615 +0x0649:  mov    %eax,(%esp)
0852c618 +0x064c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0852c61d +0x0651:  cmpl   $0x3e7,0x1c(%ebp)
0852c624 +0x0658:  jle    0852c66d <+0x6a1>
0852c626 +0x065a:  mov    -0xfd(%ebp),%ebx
0852c62c +0x0660:  movl   $0x5,0xc(%esp)
0852c634 +0x0668:  movl   $0x4b8,0x8(%esp)
0852c63c +0x0670:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852c644 +0x0678:  lea    -0x64(%ebp),%eax
0852c647 +0x067b:  mov    %eax,(%esp)
0852c64a +0x067e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852c64f +0x0683:  mov    0x1c(%ebp),%eax
0852c652 +0x0686:  mov    %eax,0xc(%esp)
0852c656 +0x068a:  mov    %ebx,0x8(%esp)
0852c65a +0x068e:  movl   $"CTradeSpace::remove_item, moveitem.item.set_add_info , ITEM #%d, %d",0x4(%esp)
0852c662 +0x0696:  lea    -0x64(%ebp),%eax
0852c665 +0x0699:  mov    %eax,(%esp)
0852c668 +0x069c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852c66d +0x06a1:  mov    -0xfd(%ebp),%eax
0852c673 +0x06a7:  mov    %eax,%ebx
0852c675 +0x06a9:  mov    -0x3c(%ebp),%edx
0852c678 +0x06ac:  mov    0x8(%ebp),%eax
0852c67b +0x06af:  add    $0x8,%edx
0852c67e +0x06b2:  mov    (%eax,%edx,4),%eax
0852c681 +0x06b5:  mov    %eax,(%esp)
0852c684 +0x06b8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852c689 +0x06bd:  mov    %ebx,0x4(%esp)
0852c68d +0x06c1:  mov    %eax,(%esp)
0852c690 +0x06c4:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0852c695 +0x06c9:  mov    %eax,-0x30(%ebp)
0852c698 +0x06cc:  cmpl   $0xffffffff,-0x30(%ebp)
0852c69c +0x06d0:  je     0852c7d1 <+0x805>
0852c6a2 +0x06d6:  mov    -0x3c(%ebp),%edx
0852c6a5 +0x06d9:  mov    0x8(%ebp),%eax
0852c6a8 +0x06dc:  add    $0x8,%edx
0852c6ab +0x06df:  mov    (%eax,%edx,4),%eax
0852c6ae +0x06e2:  mov    %eax,(%esp)
0852c6b1 +0x06e5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852c6b6 +0x06ea:  movl   $0x1,0x4c(%esp)
0852c6be +0x06f2:  movl   $0x1,0x48(%esp)
0852c6c6 +0x06fa:  movl   $0x10,0x44(%esp)
0852c6ce +0x0702:  mov    -0xff(%ebp),%edx
0852c6d4 +0x0708:  mov    %edx,0x4(%esp)
0852c6d8 +0x070c:  mov    -0xfb(%ebp),%edx
0852c6de +0x0712:  mov    %edx,0x8(%esp)
0852c6e2 +0x0716:  mov    -0xf7(%ebp),%edx
0852c6e8 +0x071c:  mov    %edx,0xc(%esp)
0852c6ec +0x0720:  mov    -0xf3(%ebp),%edx
0852c6f2 +0x0726:  mov    %edx,0x10(%esp)
0852c6f6 +0x072a:  mov    -0xef(%ebp),%edx
0852c6fc +0x0730:  mov    %edx,0x14(%esp)
0852c700 +0x0734:  mov    -0xeb(%ebp),%edx
0852c706 +0x073a:  mov    %edx,0x18(%esp)
0852c70a +0x073e:  mov    -0xe7(%ebp),%edx
0852c710 +0x0744:  mov    %edx,0x1c(%esp)
0852c714 +0x0748:  mov    -0xe3(%ebp),%edx
0852c71a +0x074e:  mov    %edx,0x20(%esp)
0852c71e +0x0752:  mov    -0xdf(%ebp),%edx
0852c724 +0x0758:  mov    %edx,0x24(%esp)
0852c728 +0x075c:  mov    -0xdb(%ebp),%edx
0852c72e +0x0762:  mov    %edx,0x28(%esp)
0852c732 +0x0766:  mov    -0xd7(%ebp),%edx
0852c738 +0x076c:  mov    %edx,0x2c(%esp)
0852c73c +0x0770:  mov    -0xd3(%ebp),%edx
0852c742 +0x0776:  mov    %edx,0x30(%esp)
0852c746 +0x077a:  mov    -0xcf(%ebp),%edx
0852c74c +0x0780:  mov    %edx,0x34(%esp)
0852c750 +0x0784:  mov    -0xcb(%ebp),%edx
0852c756 +0x078a:  mov    %edx,0x38(%esp)
0852c75a +0x078e:  mov    -0xc7(%ebp),%edx
0852c760 +0x0794:  mov    %edx,0x3c(%esp)
0852c764 +0x0798:  movzbl -0xc3(%ebp),%edx
0852c76b +0x079f:  mov    %dl,0x40(%esp)
0852c76f +0x07a3:  mov    %eax,(%esp)
0852c772 +0x07a6:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0852c777 +0x07ab:  mov    %eax,-0x38(%ebp)
0852c77a +0x07ae:  cmpl   $0x0,-0x38(%ebp)
0852c77e +0x07b2:  jns    0852c946 <+0x97a>
0852c784 +0x07b8:  mov    -0xfd(%ebp),%ebx
0852c78a +0x07be:  mov    0xc(%ebp),%eax
0852c78d +0x07c1:  mov    %eax,(%esp)
0852c790 +0x07c4:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0852c795 +0x07c9:  mov    %ebx,0x18(%esp)
0852c799 +0x07cd:  mov    %eax,0x14(%esp)
0852c79d +0x07d1:  movl   $"[TRADE]FATAL_ERROR USER[%s] ITEMID[%d]",0x10(%esp)
0852c7a5 +0x07d9:  movl   $0x4cc,0xc(%esp)
0852c7ad +0x07e1:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852c7b5 +0x07e9:  movl   $"item_trade.cpp",0x4(%esp)
0852c7bd +0x07f1:  movl   $0x1,(%esp)
0852c7c4 +0x07f8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852c7c9 +0x07fd:  mov    -0x38(%ebp),%ebx
0852c7cc +0x0800:  jmp    0852dba0 <+0x1bd4>
0852c7d1 +0x0805:  movzbl -0xfe(%ebp),%eax
0852c7d8 +0x080c:  movzbl %al,%ebx
0852c7db +0x080f:  mov    -0x3c(%ebp),%edx
0852c7de +0x0812:  mov    0x8(%ebp),%eax
0852c7e1 +0x0815:  add    $0x8,%edx
0852c7e4 +0x0818:  mov    (%eax,%edx,4),%eax
0852c7e7 +0x081b:  mov    %eax,(%esp)
0852c7ea +0x081e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852c7ef +0x0823:  movl   $0x1,0x8(%esp)
0852c7f7 +0x082b:  mov    %ebx,0x4(%esp)
0852c7fb +0x082f:  mov    %eax,(%esp)
0852c7fe +0x0832:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0852c803 +0x0837:  test   %al,%al
0852c805 +0x0839:  je     0852c8f7 <+0x92b>
0852c80b +0x083f:  mov    -0x3c(%ebp),%edx
0852c80e +0x0842:  mov    0x8(%ebp),%eax
0852c811 +0x0845:  add    $0x8,%edx
0852c814 +0x0848:  mov    (%eax,%edx,4),%eax
0852c817 +0x084b:  mov    %eax,(%esp)
0852c81a +0x084e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852c81f +0x0853:  movl   $0x10,0x50(%esp)
0852c827 +0x085b:  movl   $0x9,0x4c(%esp)
0852c82f +0x0863:  mov    0x18(%ebp),%edx
0852c832 +0x0866:  mov    %edx,0x48(%esp)
0852c836 +0x086a:  mov    0x1c(%ebp),%edx
0852c839 +0x086d:  mov    %edx,0x44(%esp)
0852c83d +0x0871:  mov    -0xff(%ebp),%edx
0852c843 +0x0877:  mov    %edx,0x4(%esp)
0852c847 +0x087b:  mov    -0xfb(%ebp),%edx
0852c84d +0x0881:  mov    %edx,0x8(%esp)
0852c851 +0x0885:  mov    -0xf7(%ebp),%edx
0852c857 +0x088b:  mov    %edx,0xc(%esp)
0852c85b +0x088f:  mov    -0xf3(%ebp),%edx
0852c861 +0x0895:  mov    %edx,0x10(%esp)
0852c865 +0x0899:  mov    -0xef(%ebp),%edx
0852c86b +0x089f:  mov    %edx,0x14(%esp)
0852c86f +0x08a3:  mov    -0xeb(%ebp),%edx
0852c875 +0x08a9:  mov    %edx,0x18(%esp)
0852c879 +0x08ad:  mov    -0xe7(%ebp),%edx
0852c87f +0x08b3:  mov    %edx,0x1c(%esp)
0852c883 +0x08b7:  mov    -0xe3(%ebp),%edx
0852c889 +0x08bd:  mov    %edx,0x20(%esp)
0852c88d +0x08c1:  mov    -0xdf(%ebp),%edx
0852c893 +0x08c7:  mov    %edx,0x24(%esp)
0852c897 +0x08cb:  mov    -0xdb(%ebp),%edx
0852c89d +0x08d1:  mov    %edx,0x28(%esp)
0852c8a1 +0x08d5:  mov    -0xd7(%ebp),%edx
0852c8a7 +0x08db:  mov    %edx,0x2c(%esp)
0852c8ab +0x08df:  mov    -0xd3(%ebp),%edx
0852c8b1 +0x08e5:  mov    %edx,0x30(%esp)
0852c8b5 +0x08e9:  mov    -0xcf(%ebp),%edx
0852c8bb +0x08ef:  mov    %edx,0x34(%esp)
0852c8bf +0x08f3:  mov    -0xcb(%ebp),%edx
0852c8c5 +0x08f9:  mov    %edx,0x38(%esp)
0852c8c9 +0x08fd:  mov    -0xc7(%ebp),%edx
0852c8cf +0x0903:  mov    %edx,0x3c(%esp)
0852c8d3 +0x0907:  movzbl -0xc3(%ebp),%edx
0852c8da +0x090e:  mov    %dl,0x40(%esp)
0852c8de +0x0912:  mov    %eax,(%esp)
0852c8e1 +0x0915:  call   085039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>  ; CInventory::insert_item_special_slot(Inven_Item, int, int, eMoneyAddReason, eItemAddReason)
0852c8e6 +0x091a:  mov    %eax,-0x38(%ebp)
0852c8e9 +0x091d:  cmpl   $0x0,-0x38(%ebp)
0852c8ed +0x0921:  jns    0852c946 <+0x97a>
0852c8ef +0x0923:  mov    -0x38(%ebp),%ebx
0852c8f2 +0x0926:  jmp    0852dba0 <+0x1bd4>
0852c8f7 +0x092b:  mov    -0xfd(%ebp),%ebx
0852c8fd +0x0931:  mov    0xc(%ebp),%eax
0852c900 +0x0934:  mov    %eax,(%esp)
0852c903 +0x0937:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0852c908 +0x093c:  mov    %ebx,0x18(%esp)
0852c90c +0x0940:  mov    %eax,0x14(%esp)
0852c910 +0x0944:  movl   $"FATAL_ERROR USER[%s] ITEMID[%d]",0x10(%esp)
0852c918 +0x094c:  movl   $0x4db,0xc(%esp)
0852c920 +0x0954:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852c928 +0x095c:  movl   $"item_trade.cpp",0x4(%esp)
0852c930 +0x0964:  movl   $0x1,(%esp)
0852c937 +0x096b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852c93c +0x0970:  mov    $0xffffffff,%ebx
0852c941 +0x0975:  jmp    0852dba0 <+0x1bd4>
0852c946 +0x097a:  mov    -0x3c(%ebp),%edx
0852c949 +0x097d:  mov    0x8(%ebp),%eax
0852c94c +0x0980:  add    $0x8,%edx
0852c94f +0x0983:  movl   $0x0,0x8(%eax,%edx,4)
0852c957 +0x098b:  mov    -0x40(%ebp),%edx
0852c95a +0x098e:  mov    0x8(%ebp),%eax
0852c95d +0x0991:  add    $0x8,%edx
0852c960 +0x0994:  movl   $0x0,0x8(%eax,%edx,4)
0852c968 +0x099c:  cmpl   $0xffffffff,-0x38(%ebp)
0852c96c +0x09a0:  je     0852ceeb <+0xf1f>
0852c972 +0x09a6:  lea    -0x80(%ebp),%eax
0852c975 +0x09a9:  mov    %eax,(%esp)
0852c978 +0x09ac:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852c97d +0x09b1:  movl   $0xf,0x8(%esp)
0852c985 +0x09b9:  movl   $0x0,0x4(%esp)
0852c98d +0x09c1:  lea    -0x80(%ebp),%eax
0852c990 +0x09c4:  mov    %eax,(%esp)
0852c993 +0x09c7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852c998 +0x09cc:  mov    0x10(%ebp),%eax
0852c99b +0x09cf:  mov    %eax,0x4(%esp)
0852c99f +0x09d3:  lea    -0x80(%ebp),%eax
0852c9a2 +0x09d6:  mov    %eax,(%esp)
0852c9a5 +0x09d9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852c9aa +0x09de:  mov    -0x3c(%ebp),%ebx
0852c9ad +0x09e1:  mov    0x10(%ebp),%edx
0852c9b0 +0x09e4:  mov    0x8(%ebp),%ecx
0852c9b3 +0x09e7:  mov    %edx,%eax
0852c9b5 +0x09e9:  shl    $0x3,%eax
0852c9b8 +0x09ec:  add    %edx,%eax
0852c9ba +0x09ee:  shl    $0x3,%eax
0852c9bd +0x09f1:  imul   $0x798,%ebx,%edx
0852c9c3 +0x09f7:  add    %edx,%eax
0852c9c5 +0x09f9:  lea    (%ecx,%eax,1),%eax
0852c9c8 +0x09fc:  add    $0x30,%eax
0852c9cb +0x09ff:  movzbl 0xa(%eax),%eax
0852c9cf +0x0a03:  cmp    $0x1,%al
0852c9d1 +0x0a05:  jne    0852cb6b <+0xb9f>
0852c9d7 +0x0a0b:  movl   $0xffffffff,0x4(%esp)
0852c9df +0x0a13:  lea    -0x80(%ebp),%eax
0852c9e2 +0x0a16:  mov    %eax,(%esp)
0852c9e5 +0x0a19:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852c9ea +0x0a1e:  movl   $0x0,0x4(%esp)
0852c9f2 +0x0a26:  lea    -0x80(%ebp),%eax
0852c9f5 +0x0a29:  mov    %eax,(%esp)
0852c9f8 +0x0a2c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852c9fd +0x0a31:  mov    -0x3c(%ebp),%ebx
0852ca00 +0x0a34:  mov    0x10(%ebp),%edx
0852ca03 +0x0a37:  mov    0x8(%ebp),%ecx
0852ca06 +0x0a3a:  mov    %edx,%eax
0852ca08 +0x0a3c:  shl    $0x3,%eax
0852ca0b +0x0a3f:  add    %edx,%eax
0852ca0d +0x0a41:  shl    $0x3,%eax
0852ca10 +0x0a44:  imul   $0x798,%ebx,%edx
0852ca16 +0x0a4a:  add    %edx,%eax
0852ca18 +0x0a4c:  lea    (%ecx,%eax,1),%eax
0852ca1b +0x0a4f:  add    $0x30,%eax
0852ca1e +0x0a52:  movl   $0x0,(%eax)
0852ca24 +0x0a58:  mov    -0x3c(%ebp),%ebx
0852ca27 +0x0a5b:  mov    0x10(%ebp),%edx
0852ca2a +0x0a5e:  mov    0x8(%ebp),%ecx
0852ca2d +0x0a61:  mov    %edx,%eax
0852ca2f +0x0a63:  shl    $0x3,%eax
0852ca32 +0x0a66:  add    %edx,%eax
0852ca34 +0x0a68:  shl    $0x3,%eax
0852ca37 +0x0a6b:  imul   $0x798,%ebx,%edx
0852ca3d +0x0a71:  add    %edx,%eax
0852ca3f +0x0a73:  lea    (%ecx,%eax,1),%eax
0852ca42 +0x0a76:  add    $0x34,%eax
0852ca45 +0x0a79:  movl   $0x0,(%eax)
0852ca4b +0x0a7f:  mov    -0x3c(%ebp),%ebx
0852ca4e +0x0a82:  mov    0x10(%ebp),%edx
0852ca51 +0x0a85:  mov    0x8(%ebp),%ecx
0852ca54 +0x0a88:  mov    %edx,%eax
0852ca56 +0x0a8a:  shl    $0x3,%eax
0852ca59 +0x0a8d:  add    %edx,%eax
0852ca5b +0x0a8f:  shl    $0x3,%eax
0852ca5e +0x0a92:  imul   $0x798,%ebx,%edx
0852ca64 +0x0a98:  add    %edx,%eax
0852ca66 +0x0a9a:  lea    (%ecx,%eax,1),%eax
0852ca69 +0x0a9d:  add    $0x30,%eax
0852ca6c +0x0aa0:  movb   $0x0,0x8(%eax)
0852ca70 +0x0aa4:  mov    -0x3c(%ebp),%ebx
0852ca73 +0x0aa7:  mov    0x10(%ebp),%edx
0852ca76 +0x0aaa:  mov    0x8(%ebp),%ecx
0852ca79 +0x0aad:  mov    %edx,%eax
0852ca7b +0x0aaf:  shl    $0x3,%eax
0852ca7e +0x0ab2:  add    %edx,%eax
0852ca80 +0x0ab4:  shl    $0x3,%eax
0852ca83 +0x0ab7:  imul   $0x798,%ebx,%edx
0852ca89 +0x0abd:  add    %edx,%eax
0852ca8b +0x0abf:  lea    (%ecx,%eax,1),%eax
0852ca8e +0x0ac2:  add    $0x30,%eax
0852ca91 +0x0ac5:  movb   $0x0,0xa(%eax)
0852ca95 +0x0ac9:  mov    -0x3c(%ebp),%ebx
0852ca98 +0x0acc:  mov    0x10(%ebp),%edx
0852ca9b +0x0acf:  mov    0x8(%ebp),%ecx
0852ca9e +0x0ad2:  mov    %edx,%eax
0852caa0 +0x0ad4:  shl    $0x3,%eax
0852caa3 +0x0ad7:  add    %edx,%eax
0852caa5 +0x0ad9:  shl    $0x3,%eax
0852caa8 +0x0adc:  imul   $0x798,%ebx,%edx
0852caae +0x0ae2:  add    %edx,%eax
0852cab0 +0x0ae4:  lea    (%ecx,%eax,1),%eax
0852cab3 +0x0ae7:  add    $0x30,%eax
0852cab6 +0x0aea:  movl   $0x0,0xb(%eax)
0852cabd +0x0af1:  mov    -0x3c(%ebp),%ecx
0852cac0 +0x0af4:  mov    0x10(%ebp),%edx
0852cac3 +0x0af7:  mov    %edx,%eax
0852cac5 +0x0af9:  shl    $0x3,%eax
0852cac8 +0x0afc:  add    %edx,%eax
0852caca +0x0afe:  shl    $0x3,%eax
0852cacd +0x0b01:  imul   $0x798,%ecx,%edx
0852cad3 +0x0b07:  add    %edx,%eax
0852cad5 +0x0b09:  add    $0x30,%eax
0852cad8 +0x0b0c:  add    0x8(%ebp),%eax
0852cadb +0x0b0f:  add    $0x9,%eax
0852cade +0x0b12:  movl   $0x0,0x4(%esp)
0852cae6 +0x0b1a:  mov    %eax,(%esp)
0852cae9 +0x0b1d:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0852caee +0x0b22:  mov    -0x3c(%ebp),%ecx
0852caf1 +0x0b25:  mov    0x10(%ebp),%edx
0852caf4 +0x0b28:  mov    %edx,%eax
0852caf6 +0x0b2a:  shl    $0x3,%eax
0852caf9 +0x0b2d:  add    %edx,%eax
0852cafb +0x0b2f:  shl    $0x3,%eax
0852cafe +0x0b32:  imul   $0x798,%ecx,%edx
0852cb04 +0x0b38:  add    %edx,%eax
0852cb06 +0x0b3a:  add    $0x30,%eax
0852cb09 +0x0b3d:  add    0x8(%ebp),%eax
0852cb0c +0x0b40:  add    $0x9,%eax
0852cb0f +0x0b43:  mov    %eax,(%esp)
0852cb12 +0x0b46:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0852cb17 +0x0b4b:  mov    -0x3c(%ebp),%ebx
0852cb1a +0x0b4e:  mov    0x10(%ebp),%edx
0852cb1d +0x0b51:  mov    0x8(%ebp),%ecx
0852cb20 +0x0b54:  mov    %edx,%eax
0852cb22 +0x0b56:  shl    $0x3,%eax
0852cb25 +0x0b59:  add    %edx,%eax
0852cb27 +0x0b5b:  shl    $0x3,%eax
0852cb2a +0x0b5e:  imul   $0x798,%ebx,%edx
0852cb30 +0x0b64:  add    %edx,%eax
0852cb32 +0x0b66:  lea    (%ecx,%eax,1),%eax
0852cb35 +0x0b69:  add    $0x30,%eax
0852cb38 +0x0b6c:  movw   $0x0,0x14(%eax)
0852cb3e +0x0b72:  mov    -0x3c(%ebp),%ebx
0852cb41 +0x0b75:  mov    0x10(%ebp),%edx
0852cb44 +0x0b78:  mov    0x8(%ebp),%ecx
0852cb47 +0x0b7b:  mov    %edx,%eax
0852cb49 +0x0b7d:  shl    $0x3,%eax
0852cb4c +0x0b80:  add    %edx,%eax
0852cb4e +0x0b82:  shl    $0x3,%eax
0852cb51 +0x0b85:  imul   $0x798,%ebx,%edx
0852cb57 +0x0b8b:  add    %edx,%eax
0852cb59 +0x0b8d:  lea    (%ecx,%eax,1),%eax
0852cb5c +0x0b90:  add    $0x30,%eax
0852cb5f +0x0b93:  movl   $0x0,0x16(%eax)
0852cb66 +0x0b9a:  jmp    0852ce54 <+0xe88>
0852cb6b +0x0b9f:  mov    -0x3c(%ebp),%ecx
0852cb6e +0x0ba2:  mov    0x10(%ebp),%edx
0852cb71 +0x0ba5:  mov    %edx,%eax
0852cb73 +0x0ba7:  shl    $0x3,%eax
0852cb76 +0x0baa:  add    %edx,%eax
0852cb78 +0x0bac:  shl    $0x3,%eax
0852cb7b +0x0baf:  imul   $0x798,%ecx,%edx
0852cb81 +0x0bb5:  add    %edx,%eax
0852cb83 +0x0bb7:  add    $0x30,%eax
0852cb86 +0x0bba:  add    0x8(%ebp),%eax
0852cb89 +0x0bbd:  add    $0x9,%eax
0852cb8c +0x0bc0:  mov    %eax,(%esp)
0852cb8f +0x0bc3:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852cb94 +0x0bc8:  cmp    0x1c(%ebp),%eax
0852cb97 +0x0bcb:  setg   %al
0852cb9a +0x0bce:  test   %al,%al
0852cb9c +0x0bd0:  je     0852ccc5 <+0xcf9>
0852cba2 +0x0bd6:  mov    -0xfd(%ebp),%eax
0852cba8 +0x0bdc:  mov    %eax,0x4(%esp)
0852cbac +0x0be0:  lea    -0x80(%ebp),%eax
0852cbaf +0x0be3:  mov    %eax,(%esp)
0852cbb2 +0x0be6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852cbb7 +0x0beb:  mov    -0x3c(%ebp),%ecx
0852cbba +0x0bee:  mov    0x10(%ebp),%edx
0852cbbd +0x0bf1:  mov    %edx,%eax
0852cbbf +0x0bf3:  shl    $0x3,%eax
0852cbc2 +0x0bf6:  add    %edx,%eax
0852cbc4 +0x0bf8:  shl    $0x3,%eax
0852cbc7 +0x0bfb:  imul   $0x798,%ecx,%edx
0852cbcd +0x0c01:  add    %edx,%eax
0852cbcf +0x0c03:  add    $0x30,%eax
0852cbd2 +0x0c06:  add    0x8(%ebp),%eax
0852cbd5 +0x0c09:  add    $0x9,%eax
0852cbd8 +0x0c0c:  mov    %eax,(%esp)
0852cbdb +0x0c0f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0852cbe0 +0x0c14:  sub    0x1c(%ebp),%eax
0852cbe3 +0x0c17:  mov    %eax,0x4(%esp)
0852cbe7 +0x0c1b:  lea    -0x80(%ebp),%eax
0852cbea +0x0c1e:  mov    %eax,(%esp)
0852cbed +0x0c21:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852cbf2 +0x0c26:  mov    -0x3c(%ebp),%ebx
0852cbf5 +0x0c29:  mov    0x10(%ebp),%edx
0852cbf8 +0x0c2c:  mov    0x8(%ebp),%ecx
0852cbfb +0x0c2f:  mov    %edx,%eax
0852cbfd +0x0c31:  shl    $0x3,%eax
0852cc00 +0x0c34:  add    %edx,%eax
0852cc02 +0x0c36:  shl    $0x3,%eax
0852cc05 +0x0c39:  imul   $0x798,%ebx,%edx
0852cc0b +0x0c3f:  add    %edx,%eax
0852cc0d +0x0c41:  lea    (%ecx,%eax,1),%eax
0852cc10 +0x0c44:  add    $0x40,%eax
0852cc13 +0x0c47:  mov    (%eax),%eax
0852cc15 +0x0c49:  mov    %eax,-0x2c(%ebp)
0852cc18 +0x0c4c:  mov    0x1c(%ebp),%eax
0852cc1b +0x0c4f:  sub    %eax,-0x2c(%ebp)
0852cc1e +0x0c52:  mov    -0x3c(%ebp),%ecx
0852cc21 +0x0c55:  mov    0x10(%ebp),%edx
0852cc24 +0x0c58:  mov    %edx,%eax
0852cc26 +0x0c5a:  shl    $0x3,%eax
0852cc29 +0x0c5d:  add    %edx,%eax
0852cc2b +0x0c5f:  shl    $0x3,%eax
0852cc2e +0x0c62:  imul   $0x798,%ecx,%edx
0852cc34 +0x0c68:  add    %edx,%eax
0852cc36 +0x0c6a:  add    $0x30,%eax
0852cc39 +0x0c6d:  add    0x8(%ebp),%eax
0852cc3c +0x0c70:  lea    0x9(%eax),%edx
0852cc3f +0x0c73:  mov    -0x2c(%ebp),%eax
0852cc42 +0x0c76:  mov    %eax,0x4(%esp)
0852cc46 +0x0c7a:  mov    %edx,(%esp)
0852cc49 +0x0c7d:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0852cc4e +0x0c82:  cmpl   $0x3e7,-0x2c(%ebp)
0852cc55 +0x0c89:  jle    0852ce54 <+0xe88>
0852cc5b +0x0c8f:  mov    -0x3c(%ebp),%ebx
0852cc5e +0x0c92:  mov    0x10(%ebp),%edx
0852cc61 +0x0c95:  mov    0x8(%ebp),%ecx
0852cc64 +0x0c98:  mov    %edx,%eax
0852cc66 +0x0c9a:  shl    $0x3,%eax
0852cc69 +0x0c9d:  add    %edx,%eax
0852cc6b +0x0c9f:  shl    $0x3,%eax
0852cc6e +0x0ca2:  imul   $0x798,%ebx,%edx
0852cc74 +0x0ca8:  add    %edx,%eax
0852cc76 +0x0caa:  lea    (%ecx,%eax,1),%eax
0852cc79 +0x0cad:  add    $0x30,%eax
0852cc7c +0x0cb0:  mov    0xb(%eax),%ebx
0852cc7f +0x0cb3:  movl   $0x5,0xc(%esp)
0852cc87 +0x0cbb:  movl   $0x503,0x8(%esp)
0852cc8f +0x0cc3:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0852cc97 +0x0ccb:  lea    -0x54(%ebp),%eax
0852cc9a +0x0cce:  mov    %eax,(%esp)
0852cc9d +0x0cd1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0852cca2 +0x0cd6:  mov    -0x2c(%ebp),%eax
0852cca5 +0x0cd9:  mov    %eax,0xc(%esp)
0852cca9 +0x0cdd:  mov    %ebx,0x8(%esp)
0852ccad +0x0ce1:  movl   $"CTradeSpace::remove_item, m_ItemSlot[owner_index][trade_slot_no].item.set_add_info 2 , ITEM #%d, %d",0x4(%esp)
0852ccb5 +0x0ce9:  lea    -0x54(%ebp),%eax
0852ccb8 +0x0cec:  mov    %eax,(%esp)
0852ccbb +0x0cef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0852ccc0 +0x0cf4:  jmp    0852ce54 <+0xe88>
0852ccc5 +0x0cf9:  movl   $0xffffffff,0x4(%esp)
0852cccd +0x0d01:  lea    -0x80(%ebp),%eax
0852ccd0 +0x0d04:  mov    %eax,(%esp)
0852ccd3 +0x0d07:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852ccd8 +0x0d0c:  movl   $0x0,0x4(%esp)
0852cce0 +0x0d14:  lea    -0x80(%ebp),%eax
0852cce3 +0x0d17:  mov    %eax,(%esp)
0852cce6 +0x0d1a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852cceb +0x0d1f:  mov    -0x3c(%ebp),%ebx
0852ccee +0x0d22:  mov    0x10(%ebp),%edx
0852ccf1 +0x0d25:  mov    0x8(%ebp),%ecx
0852ccf4 +0x0d28:  mov    %edx,%eax
0852ccf6 +0x0d2a:  shl    $0x3,%eax
0852ccf9 +0x0d2d:  add    %edx,%eax
0852ccfb +0x0d2f:  shl    $0x3,%eax
0852ccfe +0x0d32:  imul   $0x798,%ebx,%edx
0852cd04 +0x0d38:  add    %edx,%eax
0852cd06 +0x0d3a:  lea    (%ecx,%eax,1),%eax
0852cd09 +0x0d3d:  add    $0x30,%eax
0852cd0c +0x0d40:  movl   $0x0,(%eax)
0852cd12 +0x0d46:  mov    -0x3c(%ebp),%ebx
0852cd15 +0x0d49:  mov    0x10(%ebp),%edx
0852cd18 +0x0d4c:  mov    0x8(%ebp),%ecx
0852cd1b +0x0d4f:  mov    %edx,%eax
0852cd1d +0x0d51:  shl    $0x3,%eax
0852cd20 +0x0d54:  add    %edx,%eax
0852cd22 +0x0d56:  shl    $0x3,%eax
0852cd25 +0x0d59:  imul   $0x798,%ebx,%edx
0852cd2b +0x0d5f:  add    %edx,%eax
0852cd2d +0x0d61:  lea    (%ecx,%eax,1),%eax
0852cd30 +0x0d64:  add    $0x34,%eax
0852cd33 +0x0d67:  movl   $0x0,(%eax)
0852cd39 +0x0d6d:  mov    -0x3c(%ebp),%ebx
0852cd3c +0x0d70:  mov    0x10(%ebp),%edx
0852cd3f +0x0d73:  mov    0x8(%ebp),%ecx
0852cd42 +0x0d76:  mov    %edx,%eax
0852cd44 +0x0d78:  shl    $0x3,%eax
0852cd47 +0x0d7b:  add    %edx,%eax
0852cd49 +0x0d7d:  shl    $0x3,%eax
0852cd4c +0x0d80:  imul   $0x798,%ebx,%edx
0852cd52 +0x0d86:  add    %edx,%eax
0852cd54 +0x0d88:  lea    (%ecx,%eax,1),%eax
0852cd57 +0x0d8b:  add    $0x30,%eax
0852cd5a +0x0d8e:  movb   $0x0,0x8(%eax)
0852cd5e +0x0d92:  mov    -0x3c(%ebp),%ebx
0852cd61 +0x0d95:  mov    0x10(%ebp),%edx
0852cd64 +0x0d98:  mov    0x8(%ebp),%ecx
0852cd67 +0x0d9b:  mov    %edx,%eax
0852cd69 +0x0d9d:  shl    $0x3,%eax
0852cd6c +0x0da0:  add    %edx,%eax
0852cd6e +0x0da2:  shl    $0x3,%eax
0852cd71 +0x0da5:  imul   $0x798,%ebx,%edx
0852cd77 +0x0dab:  add    %edx,%eax
0852cd79 +0x0dad:  lea    (%ecx,%eax,1),%eax
0852cd7c +0x0db0:  add    $0x30,%eax
0852cd7f +0x0db3:  movb   $0x0,0xa(%eax)
0852cd83 +0x0db7:  mov    -0x3c(%ebp),%ebx
0852cd86 +0x0dba:  mov    0x10(%ebp),%edx
0852cd89 +0x0dbd:  mov    0x8(%ebp),%ecx
0852cd8c +0x0dc0:  mov    %edx,%eax
0852cd8e +0x0dc2:  shl    $0x3,%eax
0852cd91 +0x0dc5:  add    %edx,%eax
0852cd93 +0x0dc7:  shl    $0x3,%eax
0852cd96 +0x0dca:  imul   $0x798,%ebx,%edx
0852cd9c +0x0dd0:  add    %edx,%eax
0852cd9e +0x0dd2:  lea    (%ecx,%eax,1),%eax
0852cda1 +0x0dd5:  add    $0x30,%eax
0852cda4 +0x0dd8:  movl   $0x0,0xb(%eax)
0852cdab +0x0ddf:  mov    -0x3c(%ebp),%ecx
0852cdae +0x0de2:  mov    0x10(%ebp),%edx
0852cdb1 +0x0de5:  mov    %edx,%eax
0852cdb3 +0x0de7:  shl    $0x3,%eax
0852cdb6 +0x0dea:  add    %edx,%eax
0852cdb8 +0x0dec:  shl    $0x3,%eax
0852cdbb +0x0def:  imul   $0x798,%ecx,%edx
0852cdc1 +0x0df5:  add    %edx,%eax
0852cdc3 +0x0df7:  add    $0x30,%eax
0852cdc6 +0x0dfa:  add    0x8(%ebp),%eax
0852cdc9 +0x0dfd:  add    $0x9,%eax
0852cdcc +0x0e00:  movl   $0x0,0x4(%esp)
0852cdd4 +0x0e08:  mov    %eax,(%esp)
0852cdd7 +0x0e0b:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0852cddc +0x0e10:  mov    -0x3c(%ebp),%ecx
0852cddf +0x0e13:  mov    0x10(%ebp),%edx
0852cde2 +0x0e16:  mov    %edx,%eax
0852cde4 +0x0e18:  shl    $0x3,%eax
0852cde7 +0x0e1b:  add    %edx,%eax
0852cde9 +0x0e1d:  shl    $0x3,%eax
0852cdec +0x0e20:  imul   $0x798,%ecx,%edx
0852cdf2 +0x0e26:  add    %edx,%eax
0852cdf4 +0x0e28:  add    $0x30,%eax
0852cdf7 +0x0e2b:  add    0x8(%ebp),%eax
0852cdfa +0x0e2e:  add    $0x9,%eax
0852cdfd +0x0e31:  mov    %eax,(%esp)
0852ce00 +0x0e34:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0852ce05 +0x0e39:  mov    -0x3c(%ebp),%ebx
0852ce08 +0x0e3c:  mov    0x10(%ebp),%edx
0852ce0b +0x0e3f:  mov    0x8(%ebp),%ecx
0852ce0e +0x0e42:  mov    %edx,%eax
0852ce10 +0x0e44:  shl    $0x3,%eax
0852ce13 +0x0e47:  add    %edx,%eax
0852ce15 +0x0e49:  shl    $0x3,%eax
0852ce18 +0x0e4c:  imul   $0x798,%ebx,%edx
0852ce1e +0x0e52:  add    %edx,%eax
0852ce20 +0x0e54:  lea    (%ecx,%eax,1),%eax
0852ce23 +0x0e57:  add    $0x30,%eax
0852ce26 +0x0e5a:  movw   $0x0,0x14(%eax)
0852ce2c +0x0e60:  mov    -0x3c(%ebp),%ebx
0852ce2f +0x0e63:  mov    0x10(%ebp),%edx
0852ce32 +0x0e66:  mov    0x8(%ebp),%ecx
0852ce35 +0x0e69:  mov    %edx,%eax
0852ce37 +0x0e6b:  shl    $0x3,%eax
0852ce3a +0x0e6e:  add    %edx,%eax
0852ce3c +0x0e70:  shl    $0x3,%eax
0852ce3f +0x0e73:  imul   $0x798,%ebx,%edx
0852ce45 +0x0e79:  add    %edx,%eax
0852ce47 +0x0e7b:  lea    (%ecx,%eax,1),%eax
0852ce4a +0x0e7e:  add    $0x30,%eax
0852ce4d +0x0e81:  movl   $0x0,0x16(%eax)
0852ce54 +0x0e88:  movl   $0x0,0x4(%esp)
0852ce5c +0x0e90:  lea    -0x80(%ebp),%eax
0852ce5f +0x0e93:  mov    %eax,(%esp)
0852ce62 +0x0e96:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852ce67 +0x0e9b:  movl   $0x0,0x4(%esp)
0852ce6f +0x0ea3:  lea    -0x80(%ebp),%eax
0852ce72 +0x0ea6:  mov    %eax,(%esp)
0852ce75 +0x0ea9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852ce7a +0x0eae:  movl   $0x0,0x4(%esp)
0852ce82 +0x0eb6:  lea    -0x80(%ebp),%eax
0852ce85 +0x0eb9:  mov    %eax,(%esp)
0852ce88 +0x0ebc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852ce8d +0x0ec1:  movl   $0x0,0x4(%esp)
0852ce95 +0x0ec9:  lea    -0x80(%ebp),%eax
0852ce98 +0x0ecc:  mov    %eax,(%esp)
0852ce9b +0x0ecf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852cea0 +0x0ed4:  movl   $0x0,0x4(%esp)
0852cea8 +0x0edc:  lea    -0x80(%ebp),%eax
0852ceab +0x0edf:  mov    %eax,(%esp)
0852ceae +0x0ee2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852ceb3 +0x0ee7:  movl   $&g_emptySlot,0x4(%esp)
0852cebb +0x0eef:  lea    -0x80(%ebp),%eax
0852cebe +0x0ef2:  mov    %eax,(%esp)
0852cec1 +0x0ef5:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852cec6 +0x0efa:  movl   $0x1,0x4(%esp)
0852cece +0x0f02:  lea    -0x80(%ebp),%eax
0852ced1 +0x0f05:  mov    %eax,(%esp)
0852ced4 +0x0f08:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852ced9 +0x0f0d:  lea    -0x80(%ebp),%eax
0852cedc +0x0f10:  mov    %eax,0x4(%esp)
0852cee0 +0x0f14:  mov    -0x44(%ebp),%eax
0852cee3 +0x0f17:  mov    %eax,(%esp)
0852cee6 +0x0f1a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852ceeb +0x0f1f:  mov    -0x38(%ebp),%ebx
0852ceee +0x0f22:  jmp    0852dba0 <+0x1bd4>
0852cef3 +0x0f27:  cmpl   $0x0,0x10(%ebp)
0852cef7 +0x0f2b:  jne    0852cf2f <+0xf63>
0852cef9 +0x0f2d:  movl   $"trade_slot_no == 0",0x10(%esp)
0852cf01 +0x0f35:  movl   $0x59a,0xc(%esp)
0852cf09 +0x0f3d:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852cf11 +0x0f45:  movl   $"item_trade.cpp",0x4(%esp)
0852cf19 +0x0f4d:  movl   $0x1,(%esp)
0852cf20 +0x0f54:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852cf25 +0x0f59:  mov    $0xffffffff,%ebx
0852cf2a +0x0f5e:  jmp    0852dba0 <+0x1bd4>
0852cf2f +0x0f63:  mov    -0x3c(%ebp),%ebx
0852cf32 +0x0f66:  mov    0x10(%ebp),%edx
0852cf35 +0x0f69:  mov    0x8(%ebp),%ecx
0852cf38 +0x0f6c:  mov    %edx,%eax
0852cf3a +0x0f6e:  shl    $0x3,%eax
0852cf3d +0x0f71:  add    %edx,%eax
0852cf3f +0x0f73:  shl    $0x3,%eax
0852cf42 +0x0f76:  imul   $0x798,%ebx,%edx
0852cf48 +0x0f7c:  add    %edx,%eax
0852cf4a +0x0f7e:  lea    (%ecx,%eax,1),%eax
0852cf4d +0x0f81:  add    $0x30,%eax
0852cf50 +0x0f84:  lea    -0x150(%ebp),%edx
0852cf56 +0x0f8a:  mov    $0x11,%ecx
0852cf5b +0x0f8f:  mov    %edx,%edi
0852cf5d +0x0f91:  mov    %eax,%esi
0852cf5f +0x0f93:  rep movsl %ds:(%esi),%es:(%edi)
0852cf61 +0x0f95:  mov    %esi,%eax
0852cf63 +0x0f97:  mov    %edi,%edx
0852cf65 +0x0f99:  movzwl (%eax),%ecx
0852cf68 +0x0f9c:  mov    %cx,(%edx)
0852cf6b +0x0f9f:  add    $0x2,%edx
0852cf6e +0x0fa2:  add    $0x2,%eax
0852cf71 +0x0fa5:  movzbl -0x148(%ebp),%eax
0852cf78 +0x0fac:  cmp    $0x3,%al
0852cf7a +0x0fae:  je     0852cfb2 <+0xfe6>
0852cf7c +0x0fb0:  movl   $"moveitem.item_space != ENUM_ITEMSPACE_EQUIPPED",0x10(%esp)
0852cf84 +0x0fb8:  movl   $0x5a2,0xc(%esp)
0852cf8c +0x0fc0:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852cf94 +0x0fc8:  movl   $"item_trade.cpp",0x4(%esp)
0852cf9c +0x0fd0:  movl   $0x1,(%esp)
0852cfa3 +0x0fd7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852cfa8 +0x0fdc:  mov    $0xffffffff,%ebx
0852cfad +0x0fe1:  jmp    0852dba0 <+0x1bd4>
0852cfb2 +0x0fe6:  mov    -0x145(%ebp),%eax
0852cfb8 +0x0fec:  test   %eax,%eax
0852cfba +0x0fee:  jne    0852cff2 <+0x1026>
0852cfbc +0x0ff0:  movl   $"moveitem.item.item_id == 0",0x10(%esp)
0852cfc4 +0x0ff8:  movl   $0x5a8,0xc(%esp)
0852cfcc +0x1000:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852cfd4 +0x1008:  movl   $"item_trade.cpp",0x4(%esp)
0852cfdc +0x1010:  movl   $0x1,(%esp)
0852cfe3 +0x1017:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852cfe8 +0x101c:  mov    $0xffffffff,%ebx
0852cfed +0x1021:  jmp    0852dba0 <+0x1bd4>
0852cff2 +0x1026:  mov    -0x3c(%ebp),%ebx
0852cff5 +0x1029:  mov    0x10(%ebp),%edx
0852cff8 +0x102c:  mov    0x8(%ebp),%ecx
0852cffb +0x102f:  mov    %edx,%eax
0852cffd +0x1031:  shl    $0x3,%eax
0852d000 +0x1034:  add    %edx,%eax
0852d002 +0x1036:  shl    $0x3,%eax
0852d005 +0x1039:  imul   $0x798,%ebx,%edx
0852d00b +0x103f:  add    %edx,%eax
0852d00d +0x1041:  lea    (%ecx,%eax,1),%eax
0852d010 +0x1044:  add    $0x30,%eax
0852d013 +0x1047:  movzbl 0xa(%eax),%eax
0852d017 +0x104b:  cmp    $0x8,%al
0852d019 +0x104d:  jne    0852d02b <+0x105f>
0852d01b +0x104f:  cmpl   $0x9,0x18(%ebp)
0852d01f +0x1053:  jle    0852d041 <+0x1075>
0852d021 +0x1055:  mov    $0xffffffff,%ebx
0852d026 +0x105a:  jmp    0852dba0 <+0x1bd4>
0852d02b +0x105f:  cmpl   $0x9,0x18(%ebp)
0852d02f +0x1063:  jle    0852d037 <+0x106b>
0852d031 +0x1065:  cmpl   $0x15,0x18(%ebp)
0852d035 +0x1069:  jle    0852d041 <+0x1075>
0852d037 +0x106b:  mov    $0xffffffff,%ebx
0852d03c +0x1070:  jmp    0852dba0 <+0x1bd4>
0852d041 +0x1075:  mov    0xc(%ebp),%eax
0852d044 +0x1078:  mov    %eax,(%esp)
0852d047 +0x107b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0852d04c +0x1080:  lea    -0xbd(%ebp),%edx
0852d052 +0x1086:  mov    0x18(%ebp),%ecx
0852d055 +0x1089:  mov    %ecx,0xc(%esp)
0852d059 +0x108d:  movl   $0x0,0x8(%esp)
0852d061 +0x1095:  mov    %eax,0x4(%esp)
0852d065 +0x1099:  mov    %edx,(%esp)
0852d068 +0x109c:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0852d06d +0x10a1:  sub    $0x4,%esp
0852d070 +0x10a4:  mov    -0xbb(%ebp),%eax
0852d076 +0x10aa:  test   %eax,%eax
0852d078 +0x10ac:  je     0852d0b0 <+0x10e4>
0852d07a +0x10ae:  movl   $"moveitem.item.item_id == 0",0x10(%esp)
0852d082 +0x10b6:  movl   $0x5bb,0xc(%esp)
0852d08a +0x10be:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852d092 +0x10c6:  movl   $"item_trade.cpp",0x4(%esp)
0852d09a +0x10ce:  movl   $0x1,(%esp)
0852d0a1 +0x10d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852d0a6 +0x10da:  mov    $0xffffffff,%ebx
0852d0ab +0x10df:  jmp    0852dba0 <+0x1bd4>
0852d0b0 +0x10e4:  mov    -0x145(%ebp),%eax
0852d0b6 +0x10ea:  mov    %eax,%ebx
0852d0b8 +0x10ec:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0852d0bd +0x10f1:  mov    %ebx,0x4(%esp)
0852d0c1 +0x10f5:  mov    %eax,(%esp)
0852d0c4 +0x10f8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0852d0c9 +0x10fd:  mov    %eax,-0x28(%ebp)
0852d0cc +0x1100:  cmpl   $0x0,-0x28(%ebp)
0852d0d0 +0x1104:  jne    0852d108 <+0x113c>
0852d0d2 +0x1106:  movl   $"equip_ref == NULL",0x10(%esp)
0852d0da +0x110e:  movl   $0x5c3,0xc(%esp)
0852d0e2 +0x1116:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852d0ea +0x111e:  movl   $"item_trade.cpp",0x4(%esp)
0852d0f2 +0x1126:  movl   $0x1,(%esp)
0852d0f9 +0x112d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852d0fe +0x1132:  mov    $0xffffffff,%ebx
0852d103 +0x1137:  jmp    0852dba0 <+0x1bd4>
0852d108 +0x113c:  mov    0xc(%ebp),%eax
0852d10b +0x113f:  mov    %eax,(%esp)
0852d10e +0x1142:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0852d113 +0x1147:  mov    %eax,%ebx
0852d115 +0x1149:  mov    0xc(%ebp),%eax
0852d118 +0x114c:  mov    %eax,(%esp)
0852d11b +0x114f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0852d120 +0x1154:  mov    0x18(%ebp),%edx
0852d123 +0x1157:  movsbl %dl,%edx
0852d126 +0x115a:  mov    %ebx,0xc(%esp)
0852d12a +0x115e:  mov    %eax,0x8(%esp)
0852d12e +0x1162:  mov    %edx,0x4(%esp)
0852d132 +0x1166:  mov    -0x28(%ebp),%eax
0852d135 +0x1169:  mov    %eax,(%esp)
0852d138 +0x116c:  call   085108fc <_ZN10CEquipItem19check_able_To_equipEcii>  ; CEquipItem::check_able_To_equip(char, int, int)
0852d13d +0x1171:  mov    %eax,-0x24(%ebp)
0852d140 +0x1174:  cmpl   $0x0,-0x24(%ebp)
0852d144 +0x1178:  je     0852d183 <+0x11b7>
0852d146 +0x117a:  mov    -0x24(%ebp),%eax
0852d149 +0x117d:  mov    %eax,0x14(%esp)
0852d14d +0x1181:  movl   $"equip_ref->check_able_To_equip return false res(%d)",0x10(%esp)
0852d155 +0x1189:  movl   $0x5ca,0xc(%esp)
0852d15d +0x1191:  movl   $&_ZZN11CTradeSpace11remove_itemEP5CUseriiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0852d165 +0x1199:  movl   $"item_trade.cpp",0x4(%esp)
0852d16d +0x11a1:  movl   $0x1,(%esp)
0852d174 +0x11a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0852d179 +0x11ad:  mov    $0xffffffff,%ebx
0852d17e +0x11b2:  jmp    0852dba0 <+0x1bd4>
0852d183 +0x11b7:  mov    0xc(%ebp),%eax
0852d186 +0x11ba:  mov    %eax,(%esp)
0852d189 +0x11bd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852d18e +0x11c2:  mov    %eax,%edx
0852d190 +0x11c4:  mov    0x18(%ebp),%eax
0852d193 +0x11c7:  imul   $0x3d,%eax,%eax
0852d196 +0x11ca:  lea    (%edx,%eax,1),%eax
0852d199 +0x11cd:  add    $0x10,%eax
0852d19c +0x11d0:  mov    -0x147(%ebp),%edx
0852d1a2 +0x11d6:  mov    %edx,0xc(%eax)
0852d1a5 +0x11d9:  mov    -0x143(%ebp),%edx
0852d1ab +0x11df:  mov    %edx,0x10(%eax)
0852d1ae +0x11e2:  mov    -0x13f(%ebp),%edx
0852d1b4 +0x11e8:  mov    %edx,0x14(%eax)
0852d1b7 +0x11eb:  mov    -0x13b(%ebp),%edx
0852d1bd +0x11f1:  mov    %edx,0x18(%eax)
0852d1c0 +0x11f4:  mov    -0x137(%ebp),%edx
0852d1c6 +0x11fa:  mov    %edx,0x1c(%eax)
0852d1c9 +0x11fd:  mov    -0x133(%ebp),%edx
0852d1cf +0x1203:  mov    %edx,0x20(%eax)
0852d1d2 +0x1206:  mov    -0x12f(%ebp),%edx
0852d1d8 +0x120c:  mov    %edx,0x24(%eax)
0852d1db +0x120f:  mov    -0x12b(%ebp),%edx
0852d1e1 +0x1215:  mov    %edx,0x28(%eax)
0852d1e4 +0x1218:  mov    -0x127(%ebp),%edx
0852d1ea +0x121e:  mov    %edx,0x2c(%eax)
0852d1ed +0x1221:  mov    -0x123(%ebp),%edx
0852d1f3 +0x1227:  mov    %edx,0x30(%eax)
0852d1f6 +0x122a:  mov    -0x11f(%ebp),%edx
0852d1fc +0x1230:  mov    %edx,0x34(%eax)
0852d1ff +0x1233:  mov    -0x11b(%ebp),%edx
0852d205 +0x1239:  mov    %edx,0x38(%eax)
0852d208 +0x123c:  mov    -0x117(%ebp),%edx
0852d20e +0x1242:  mov    %edx,0x3c(%eax)
0852d211 +0x1245:  mov    -0x113(%ebp),%edx
0852d217 +0x124b:  mov    %edx,0x40(%eax)
0852d21a +0x124e:  mov    -0x10f(%ebp),%edx
0852d220 +0x1254:  mov    %edx,0x44(%eax)
0852d223 +0x1257:  movzbl -0x10b(%ebp),%edx
0852d22a +0x125e:  mov    %dl,0x48(%eax)
0852d22d +0x1261:  lea    -0x80(%ebp),%eax
0852d230 +0x1264:  mov    %eax,(%esp)
0852d233 +0x1267:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852d238 +0x126c:  movl   $0xf,0x8(%esp)
0852d240 +0x1274:  movl   $0x0,0x4(%esp)
0852d248 +0x127c:  lea    -0x80(%ebp),%eax
0852d24b +0x127f:  mov    %eax,(%esp)
0852d24e +0x1282:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852d253 +0x1287:  mov    0x10(%ebp),%eax
0852d256 +0x128a:  mov    %eax,0x4(%esp)
0852d25a +0x128e:  lea    -0x80(%ebp),%eax
0852d25d +0x1291:  mov    %eax,(%esp)
0852d260 +0x1294:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d265 +0x1299:  movl   $0xffffffff,0x4(%esp)
0852d26d +0x12a1:  lea    -0x80(%ebp),%eax
0852d270 +0x12a4:  mov    %eax,(%esp)
0852d273 +0x12a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852d278 +0x12ac:  movl   $0x0,0x4(%esp)
0852d280 +0x12b4:  lea    -0x80(%ebp),%eax
0852d283 +0x12b7:  mov    %eax,(%esp)
0852d286 +0x12ba:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852d28b +0x12bf:  movl   $0x0,0x4(%esp)
0852d293 +0x12c7:  lea    -0x80(%ebp),%eax
0852d296 +0x12ca:  mov    %eax,(%esp)
0852d299 +0x12cd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852d29e +0x12d2:  movl   $0x0,0x4(%esp)
0852d2a6 +0x12da:  lea    -0x80(%ebp),%eax
0852d2a9 +0x12dd:  mov    %eax,(%esp)
0852d2ac +0x12e0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d2b1 +0x12e5:  movl   $0x0,0x4(%esp)
0852d2b9 +0x12ed:  lea    -0x80(%ebp),%eax
0852d2bc +0x12f0:  mov    %eax,(%esp)
0852d2bf +0x12f3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852d2c4 +0x12f8:  movl   $0x0,0x4(%esp)
0852d2cc +0x1300:  lea    -0x80(%ebp),%eax
0852d2cf +0x1303:  mov    %eax,(%esp)
0852d2d2 +0x1306:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852d2d7 +0x130b:  movl   $0x0,0x4(%esp)
0852d2df +0x1313:  lea    -0x80(%ebp),%eax
0852d2e2 +0x1316:  mov    %eax,(%esp)
0852d2e5 +0x1319:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d2ea +0x131e:  movl   $&g_emptySlot,0x4(%esp)
0852d2f2 +0x1326:  lea    -0x80(%ebp),%eax
0852d2f5 +0x1329:  mov    %eax,(%esp)
0852d2f8 +0x132c:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852d2fd +0x1331:  movl   $0x1,0x4(%esp)
0852d305 +0x1339:  lea    -0x80(%ebp),%eax
0852d308 +0x133c:  mov    %eax,(%esp)
0852d30b +0x133f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852d310 +0x1344:  lea    -0x80(%ebp),%eax
0852d313 +0x1347:  mov    %eax,0x4(%esp)
0852d317 +0x134b:  mov    -0x44(%ebp),%eax
0852d31a +0x134e:  mov    %eax,(%esp)
0852d31d +0x1351:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852d322 +0x1356:  mov    -0x3c(%ebp),%ebx
0852d325 +0x1359:  mov    0x10(%ebp),%edx
0852d328 +0x135c:  mov    0x8(%ebp),%ecx
0852d32b +0x135f:  mov    %edx,%eax
0852d32d +0x1361:  shl    $0x3,%eax
0852d330 +0x1364:  add    %edx,%eax
0852d332 +0x1366:  shl    $0x3,%eax
0852d335 +0x1369:  imul   $0x798,%ebx,%edx
0852d33b +0x136f:  add    %edx,%eax
0852d33d +0x1371:  lea    (%ecx,%eax,1),%eax
0852d340 +0x1374:  add    $0x30,%eax
0852d343 +0x1377:  movl   $0x0,(%eax)
0852d349 +0x137d:  mov    -0x3c(%ebp),%ebx
0852d34c +0x1380:  mov    0x10(%ebp),%edx
0852d34f +0x1383:  mov    0x8(%ebp),%ecx
0852d352 +0x1386:  mov    %edx,%eax
0852d354 +0x1388:  shl    $0x3,%eax
0852d357 +0x138b:  add    %edx,%eax
0852d359 +0x138d:  shl    $0x3,%eax
0852d35c +0x1390:  imul   $0x798,%ebx,%edx
0852d362 +0x1396:  add    %edx,%eax
0852d364 +0x1398:  lea    (%ecx,%eax,1),%eax
0852d367 +0x139b:  add    $0x34,%eax
0852d36a +0x139e:  movl   $0x0,(%eax)
0852d370 +0x13a4:  mov    -0x3c(%ebp),%ebx
0852d373 +0x13a7:  mov    0x10(%ebp),%edx
0852d376 +0x13aa:  mov    0x8(%ebp),%ecx
0852d379 +0x13ad:  mov    %edx,%eax
0852d37b +0x13af:  shl    $0x3,%eax
0852d37e +0x13b2:  add    %edx,%eax
0852d380 +0x13b4:  shl    $0x3,%eax
0852d383 +0x13b7:  imul   $0x798,%ebx,%edx
0852d389 +0x13bd:  add    %edx,%eax
0852d38b +0x13bf:  lea    (%ecx,%eax,1),%eax
0852d38e +0x13c2:  add    $0x30,%eax
0852d391 +0x13c5:  movb   $0x0,0x8(%eax)
0852d395 +0x13c9:  mov    -0x3c(%ebp),%ebx
0852d398 +0x13cc:  mov    0x10(%ebp),%edx
0852d39b +0x13cf:  mov    0x8(%ebp),%ecx
0852d39e +0x13d2:  mov    %edx,%eax
0852d3a0 +0x13d4:  shl    $0x3,%eax
0852d3a3 +0x13d7:  add    %edx,%eax
0852d3a5 +0x13d9:  shl    $0x3,%eax
0852d3a8 +0x13dc:  imul   $0x798,%ebx,%edx
0852d3ae +0x13e2:  add    %edx,%eax
0852d3b0 +0x13e4:  lea    (%ecx,%eax,1),%eax
0852d3b3 +0x13e7:  add    $0x30,%eax
0852d3b6 +0x13ea:  movb   $0x0,0xa(%eax)
0852d3ba +0x13ee:  mov    -0x3c(%ebp),%ebx
0852d3bd +0x13f1:  mov    0x10(%ebp),%edx
0852d3c0 +0x13f4:  mov    0x8(%ebp),%ecx
0852d3c3 +0x13f7:  mov    %edx,%eax
0852d3c5 +0x13f9:  shl    $0x3,%eax
0852d3c8 +0x13fc:  add    %edx,%eax
0852d3ca +0x13fe:  shl    $0x3,%eax
0852d3cd +0x1401:  imul   $0x798,%ebx,%edx
0852d3d3 +0x1407:  add    %edx,%eax
0852d3d5 +0x1409:  lea    (%ecx,%eax,1),%eax
0852d3d8 +0x140c:  add    $0x30,%eax
0852d3db +0x140f:  movl   $0x0,0xb(%eax)
0852d3e2 +0x1416:  mov    -0x3c(%ebp),%ecx
0852d3e5 +0x1419:  mov    0x10(%ebp),%edx
0852d3e8 +0x141c:  mov    %edx,%eax
0852d3ea +0x141e:  shl    $0x3,%eax
0852d3ed +0x1421:  add    %edx,%eax
0852d3ef +0x1423:  shl    $0x3,%eax
0852d3f2 +0x1426:  imul   $0x798,%ecx,%edx
0852d3f8 +0x142c:  add    %edx,%eax
0852d3fa +0x142e:  add    $0x30,%eax
0852d3fd +0x1431:  add    0x8(%ebp),%eax
0852d400 +0x1434:  add    $0x9,%eax
0852d403 +0x1437:  movl   $0x0,0x4(%esp)
0852d40b +0x143f:  mov    %eax,(%esp)
0852d40e +0x1442:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0852d413 +0x1447:  mov    -0x3c(%ebp),%ecx
0852d416 +0x144a:  mov    0x10(%ebp),%edx
0852d419 +0x144d:  mov    %edx,%eax
0852d41b +0x144f:  shl    $0x3,%eax
0852d41e +0x1452:  add    %edx,%eax
0852d420 +0x1454:  shl    $0x3,%eax
0852d423 +0x1457:  imul   $0x798,%ecx,%edx
0852d429 +0x145d:  add    %edx,%eax
0852d42b +0x145f:  add    $0x30,%eax
0852d42e +0x1462:  add    0x8(%ebp),%eax
0852d431 +0x1465:  add    $0x9,%eax
0852d434 +0x1468:  mov    %eax,(%esp)
0852d437 +0x146b:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0852d43c +0x1470:  mov    -0x3c(%ebp),%ebx
0852d43f +0x1473:  mov    0x10(%ebp),%edx
0852d442 +0x1476:  mov    0x8(%ebp),%ecx
0852d445 +0x1479:  mov    %edx,%eax
0852d447 +0x147b:  shl    $0x3,%eax
0852d44a +0x147e:  add    %edx,%eax
0852d44c +0x1480:  shl    $0x3,%eax
0852d44f +0x1483:  imul   $0x798,%ebx,%edx
0852d455 +0x1489:  add    %edx,%eax
0852d457 +0x148b:  lea    (%ecx,%eax,1),%eax
0852d45a +0x148e:  add    $0x30,%eax
0852d45d +0x1491:  movw   $0x0,0x14(%eax)
0852d463 +0x1497:  mov    -0x3c(%ebp),%ebx
0852d466 +0x149a:  mov    0x10(%ebp),%edx
0852d469 +0x149d:  mov    0x8(%ebp),%ecx
0852d46c +0x14a0:  mov    %edx,%eax
0852d46e +0x14a2:  shl    $0x3,%eax
0852d471 +0x14a5:  add    %edx,%eax
0852d473 +0x14a7:  shl    $0x3,%eax
0852d476 +0x14aa:  imul   $0x798,%ebx,%edx
0852d47c +0x14b0:  add    %edx,%eax
0852d47e +0x14b2:  lea    (%ecx,%eax,1),%eax
0852d481 +0x14b5:  add    $0x30,%eax
0852d484 +0x14b8:  movl   $0x0,0x16(%eax)
0852d48b +0x14bf:  mov    -0x3c(%ebp),%edx
0852d48e +0x14c2:  mov    0x8(%ebp),%eax
0852d491 +0x14c5:  add    $0x8,%edx
0852d494 +0x14c8:  movl   $0x0,0x8(%eax,%edx,4)
0852d49c +0x14d0:  mov    -0x40(%ebp),%edx
0852d49f +0x14d3:  mov    0x8(%ebp),%eax
0852d4a2 +0x14d6:  add    $0x8,%edx
0852d4a5 +0x14d9:  movl   $0x0,0x8(%eax,%edx,4)
0852d4ad +0x14e1:  cmpl   $0xb,0x10(%ebp)
0852d4b1 +0x14e5:  jg     0852d57f <+0x15b3>
0852d4b7 +0x14eb:  mov    0xc(%ebp),%eax
0852d4ba +0x14ee:  mov    %eax,(%esp)
0852d4bd +0x14f1:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0852d4c2 +0x14f6:  cmp    $0x5,%eax
0852d4c5 +0x14f9:  je     0852d4de <+0x1512>
0852d4c7 +0x14fb:  mov    0xc(%ebp),%eax
0852d4ca +0x14fe:  mov    %eax,(%esp)
0852d4cd +0x1501:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0852d4d2 +0x1506:  cmp    $0x8,%eax
0852d4d5 +0x1509:  je     0852d4de <+0x1512>
0852d4d7 +0x150b:  mov    $0x1,%eax
0852d4dc +0x1510:  jmp    0852d4e3 <+0x1517>
0852d4de +0x1512:  mov    $0x0,%eax
0852d4e3 +0x1517:  test   %al,%al
0852d4e5 +0x1519:  je     0852d57f <+0x15b3>
0852d4eb +0x151f:  lea    -0x80(%ebp),%eax
0852d4ee +0x1522:  mov    %eax,(%esp)
0852d4f1 +0x1525:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852d4f6 +0x152a:  movl   $0x2,0x8(%esp)
0852d4fe +0x1532:  movl   $0x0,0x4(%esp)
0852d506 +0x153a:  lea    -0x80(%ebp),%eax
0852d509 +0x153d:  mov    %eax,(%esp)
0852d50c +0x1540:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852d511 +0x1545:  movl   $0x0,0x4(%esp)
0852d519 +0x154d:  lea    -0x80(%ebp),%eax
0852d51c +0x1550:  mov    %eax,(%esp)
0852d51f +0x1553:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852d524 +0x1558:  movl   $0x1,0x4(%esp)
0852d52c +0x1560:  lea    -0x80(%ebp),%eax
0852d52f +0x1563:  mov    %eax,(%esp)
0852d532 +0x1566:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d537 +0x156b:  lea    -0x80(%ebp),%eax
0852d53a +0x156e:  movl   $0x0,0x8(%esp)
0852d542 +0x1576:  mov    %eax,0x4(%esp)
0852d546 +0x157a:  mov    0xc(%ebp),%eax
0852d549 +0x157d:  mov    %eax,(%esp)
0852d54c +0x1580:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0852d551 +0x1585:  movl   $0x1,0x4(%esp)
0852d559 +0x158d:  lea    -0x80(%ebp),%eax
0852d55c +0x1590:  mov    %eax,(%esp)
0852d55f +0x1593:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852d564 +0x1598:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0852d569 +0x159d:  mov    0xc(%ebp),%edx
0852d56c +0x15a0:  mov    %edx,0x8(%esp)
0852d570 +0x15a4:  lea    -0x80(%ebp),%edx
0852d573 +0x15a7:  mov    %edx,0x4(%esp)
0852d577 +0x15ab:  mov    %eax,(%esp)
0852d57a +0x15ae:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0852d57f +0x15b3:  mov    0x18(%ebp),%ebx
0852d582 +0x15b6:  jmp    0852dba0 <+0x1bd4>
0852d587 +0x15bb:  mov    -0x3c(%ebp),%ebx
0852d58a +0x15be:  mov    0x10(%ebp),%edx
0852d58d +0x15c1:  mov    0x8(%ebp),%ecx
0852d590 +0x15c4:  mov    %edx,%eax
0852d592 +0x15c6:  shl    $0x3,%eax
0852d595 +0x15c9:  add    %edx,%eax
0852d597 +0x15cb:  shl    $0x3,%eax
0852d59a +0x15ce:  imul   $0x798,%ebx,%edx
0852d5a0 +0x15d4:  add    %edx,%eax
0852d5a2 +0x15d6:  lea    (%ecx,%eax,1),%eax
0852d5a5 +0x15d9:  add    $0x30,%eax
0852d5a8 +0x15dc:  lea    -0x198(%ebp),%edx
0852d5ae +0x15e2:  mov    $0x11,%ecx
0852d5b3 +0x15e7:  mov    %edx,%edi
0852d5b5 +0x15e9:  mov    %eax,%esi
0852d5b7 +0x15eb:  rep movsl %ds:(%esi),%es:(%edi)
0852d5b9 +0x15ed:  mov    %esi,%eax
0852d5bb +0x15ef:  mov    %edi,%edx
0852d5bd +0x15f1:  movzwl (%eax),%ecx
0852d5c0 +0x15f4:  mov    %cx,(%edx)
0852d5c3 +0x15f7:  add    $0x2,%edx
0852d5c6 +0x15fa:  add    $0x2,%eax
0852d5c9 +0x15fd:  movzbl -0x190(%ebp),%eax
0852d5d0 +0x1604:  cmp    $0x1,%al
0852d5d2 +0x1606:  je     0852d5de <+0x1612>
0852d5d4 +0x1608:  mov    $0xffffffff,%ebx
0852d5d9 +0x160d:  jmp    0852dba0 <+0x1bd4>
0852d5de +0x1612:  mov    -0x3c(%ebp),%edx
0852d5e1 +0x1615:  mov    0x8(%ebp),%eax
0852d5e4 +0x1618:  add    $0x8,%edx
0852d5e7 +0x161b:  mov    (%eax,%edx,4),%eax
0852d5ea +0x161e:  mov    %eax,(%esp)
0852d5ed +0x1621:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852d5f2 +0x1626:  movl   $0x1,0x4c(%esp)
0852d5fa +0x162e:  movl   $0x4,0x48(%esp)
0852d602 +0x1636:  mov    0x18(%ebp),%edx
0852d605 +0x1639:  mov    %edx,0x44(%esp)
0852d609 +0x163d:  mov    -0x18f(%ebp),%edx
0852d60f +0x1643:  mov    %edx,0x4(%esp)
0852d613 +0x1647:  mov    -0x18b(%ebp),%edx
0852d619 +0x164d:  mov    %edx,0x8(%esp)
0852d61d +0x1651:  mov    -0x187(%ebp),%edx
0852d623 +0x1657:  mov    %edx,0xc(%esp)
0852d627 +0x165b:  mov    -0x183(%ebp),%edx
0852d62d +0x1661:  mov    %edx,0x10(%esp)
0852d631 +0x1665:  mov    -0x17f(%ebp),%edx
0852d637 +0x166b:  mov    %edx,0x14(%esp)
0852d63b +0x166f:  mov    -0x17b(%ebp),%edx
0852d641 +0x1675:  mov    %edx,0x18(%esp)
0852d645 +0x1679:  mov    -0x177(%ebp),%edx
0852d64b +0x167f:  mov    %edx,0x1c(%esp)
0852d64f +0x1683:  mov    -0x173(%ebp),%edx
0852d655 +0x1689:  mov    %edx,0x20(%esp)
0852d659 +0x168d:  mov    -0x16f(%ebp),%edx
0852d65f +0x1693:  mov    %edx,0x24(%esp)
0852d663 +0x1697:  mov    -0x16b(%ebp),%edx
0852d669 +0x169d:  mov    %edx,0x28(%esp)
0852d66d +0x16a1:  mov    -0x167(%ebp),%edx
0852d673 +0x16a7:  mov    %edx,0x2c(%esp)
0852d677 +0x16ab:  mov    -0x163(%ebp),%edx
0852d67d +0x16b1:  mov    %edx,0x30(%esp)
0852d681 +0x16b5:  mov    -0x15f(%ebp),%edx
0852d687 +0x16bb:  mov    %edx,0x34(%esp)
0852d68b +0x16bf:  mov    -0x15b(%ebp),%edx
0852d691 +0x16c5:  mov    %edx,0x38(%esp)
0852d695 +0x16c9:  mov    -0x157(%ebp),%edx
0852d69b +0x16cf:  mov    %edx,0x3c(%esp)
0852d69f +0x16d3:  movzbl -0x153(%ebp),%edx
0852d6a6 +0x16da:  mov    %dl,0x40(%esp)
0852d6aa +0x16de:  mov    %eax,(%esp)
0852d6ad +0x16e1:  call   085037d8 <_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoSpecificSlot(Inven_Item, int, eAvatarItemAddReason, bool)
0852d6b2 +0x16e6:  mov    %eax,-0x20(%ebp)
0852d6b5 +0x16e9:  cmpl   $0x0,-0x20(%ebp)
0852d6b9 +0x16ed:  js     0852d832 <+0x1866>
0852d6bf +0x16f3:  mov    -0x3c(%ebp),%ecx
0852d6c2 +0x16f6:  mov    0x10(%ebp),%edx
0852d6c5 +0x16f9:  mov    %edx,%eax
0852d6c7 +0x16fb:  shl    $0x3,%eax
0852d6ca +0x16fe:  add    %edx,%eax
0852d6cc +0x1700:  shl    $0x3,%eax
0852d6cf +0x1703:  imul   $0x798,%ecx,%edx
0852d6d5 +0x1709:  add    %edx,%eax
0852d6d7 +0x170b:  add    $0x30,%eax
0852d6da +0x170e:  add    0x8(%ebp),%eax
0852d6dd +0x1711:  mov    %eax,(%esp)
0852d6e0 +0x1714:  call   082a413c <_GLOBAL__I__ZN4CLog5this_E+0x563>  ; global constructors keyed to CLog::this_+0x563
0852d6e5 +0x1719:  mov    -0x198(%ebp),%eax
0852d6eb +0x171f:  cmp    -0x20(%ebp),%eax
0852d6ee +0x1722:  je     0852d73d <+0x1771>
0852d6f0 +0x1724:  mov    -0x188(%ebp),%ebx
0852d6f6 +0x172a:  mov    -0x20(%ebp),%eax
0852d6f9 +0x172d:  lea    0xa(%eax),%edi
0852d6fc +0x1730:  mov    -0x198(%ebp),%eax
0852d702 +0x1736:  lea    0xa(%eax),%esi
0852d705 +0x1739:  mov    -0x3c(%ebp),%edx
0852d708 +0x173c:  mov    0x8(%ebp),%eax
0852d70b +0x173f:  add    $0x8,%edx
0852d70e +0x1742:  mov    (%eax,%edx,4),%eax
0852d711 +0x1745:  mov    %eax,(%esp)
0852d714 +0x1748:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852d719 +0x174d:  movl   $0x0,0x14(%esp)
0852d721 +0x1755:  mov    %ebx,0x10(%esp)
0852d725 +0x1759:  mov    %edi,0xc(%esp)
0852d729 +0x175d:  mov    %esi,0x8(%esp)
0852d72d +0x1761:  movl   $0x32,0x4(%esp)
0852d735 +0x1769:  mov    %eax,(%esp)
0852d738 +0x176c:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
0852d73d +0x1771:  lea    -0x80(%ebp),%eax
0852d740 +0x1774:  mov    %eax,(%esp)
0852d743 +0x1777:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852d748 +0x177c:  movl   $0xf,0x8(%esp)
0852d750 +0x1784:  movl   $0x0,0x4(%esp)
0852d758 +0x178c:  lea    -0x80(%ebp),%eax
0852d75b +0x178f:  mov    %eax,(%esp)
0852d75e +0x1792:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852d763 +0x1797:  mov    0x10(%ebp),%eax
0852d766 +0x179a:  mov    %eax,0x4(%esp)
0852d76a +0x179e:  lea    -0x80(%ebp),%eax
0852d76d +0x17a1:  mov    %eax,(%esp)
0852d770 +0x17a4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d775 +0x17a9:  movl   $0xffffffff,0x4(%esp)
0852d77d +0x17b1:  lea    -0x80(%ebp),%eax
0852d780 +0x17b4:  mov    %eax,(%esp)
0852d783 +0x17b7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852d788 +0x17bc:  movl   $0x0,0x4(%esp)
0852d790 +0x17c4:  lea    -0x80(%ebp),%eax
0852d793 +0x17c7:  mov    %eax,(%esp)
0852d796 +0x17ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852d79b +0x17cf:  movl   $0x0,0x4(%esp)
0852d7a3 +0x17d7:  lea    -0x80(%ebp),%eax
0852d7a6 +0x17da:  mov    %eax,(%esp)
0852d7a9 +0x17dd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852d7ae +0x17e2:  movl   $0x0,0x4(%esp)
0852d7b6 +0x17ea:  lea    -0x80(%ebp),%eax
0852d7b9 +0x17ed:  mov    %eax,(%esp)
0852d7bc +0x17f0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d7c1 +0x17f5:  movl   $0x0,0x4(%esp)
0852d7c9 +0x17fd:  lea    -0x80(%ebp),%eax
0852d7cc +0x1800:  mov    %eax,(%esp)
0852d7cf +0x1803:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852d7d4 +0x1808:  movl   $0x0,0x4(%esp)
0852d7dc +0x1810:  lea    -0x80(%ebp),%eax
0852d7df +0x1813:  mov    %eax,(%esp)
0852d7e2 +0x1816:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852d7e7 +0x181b:  movl   $0x0,0x4(%esp)
0852d7ef +0x1823:  lea    -0x80(%ebp),%eax
0852d7f2 +0x1826:  mov    %eax,(%esp)
0852d7f5 +0x1829:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852d7fa +0x182e:  movl   $&g_emptySlot,0x4(%esp)
0852d802 +0x1836:  lea    -0x80(%ebp),%eax
0852d805 +0x1839:  mov    %eax,(%esp)
0852d808 +0x183c:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852d80d +0x1841:  movl   $0x1,0x4(%esp)
0852d815 +0x1849:  lea    -0x80(%ebp),%eax
0852d818 +0x184c:  mov    %eax,(%esp)
0852d81b +0x184f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852d820 +0x1854:  lea    -0x80(%ebp),%eax
0852d823 +0x1857:  mov    %eax,0x4(%esp)
0852d827 +0x185b:  mov    -0x44(%ebp),%eax
0852d82a +0x185e:  mov    %eax,(%esp)
0852d82d +0x1861:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852d832 +0x1866:  mov    -0x20(%ebp),%ebx
0852d835 +0x1869:  jmp    0852dba0 <+0x1bd4>
0852d83a +0x186e:  mov    -0x3c(%ebp),%ebx
0852d83d +0x1871:  mov    0x10(%ebp),%edx
0852d840 +0x1874:  mov    0x8(%ebp),%ecx
0852d843 +0x1877:  mov    %edx,%eax
0852d845 +0x1879:  shl    $0x3,%eax
0852d848 +0x187c:  add    %edx,%eax
0852d84a +0x187e:  shl    $0x3,%eax
0852d84d +0x1881:  imul   $0x798,%ebx,%edx
0852d853 +0x1887:  add    %edx,%eax
0852d855 +0x1889:  lea    (%ecx,%eax,1),%eax
0852d858 +0x188c:  add    $0x30,%eax
0852d85b +0x188f:  lea    -0x1e0(%ebp),%edx
0852d861 +0x1895:  mov    $0x11,%ecx
0852d866 +0x189a:  mov    %edx,%edi
0852d868 +0x189c:  mov    %eax,%esi
0852d86a +0x189e:  rep movsl %ds:(%esi),%es:(%edi)
0852d86c +0x18a0:  mov    %esi,%eax
0852d86e +0x18a2:  mov    %edi,%edx
0852d870 +0x18a4:  movzwl (%eax),%ecx
0852d873 +0x18a7:  mov    %cx,(%edx)
0852d876 +0x18aa:  add    $0x2,%edx
0852d879 +0x18ad:  add    $0x2,%eax
0852d87c +0x18b0:  movzbl -0x1d8(%ebp),%eax
0852d883 +0x18b7:  cmp    $0x7,%al
0852d885 +0x18b9:  je     0852d891 <+0x18c5>
0852d887 +0x18bb:  mov    $0xffffffff,%ebx
0852d88c +0x18c0:  jmp    0852dba0 <+0x1bd4>
0852d891 +0x18c5:  movzbl -0x1d6(%ebp),%eax
0852d898 +0x18cc:  cmp    $0x5,%al
0852d89a +0x18ce:  jne    0852d8d8 <+0x190c>
0852d89c +0x18d0:  mov    -0x3c(%ebp),%edx
0852d89f +0x18d3:  mov    0x8(%ebp),%eax
0852d8a2 +0x18d6:  add    $0x8,%edx
0852d8a5 +0x18d9:  mov    (%eax,%edx,4),%eax
0852d8a8 +0x18dc:  mov    %eax,(%esp)
0852d8ab +0x18df:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852d8b0 +0x18e4:  mov    %eax,(%esp)
0852d8b3 +0x18e7:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0852d8b8 +0x18ec:  mov    0x18(%ebp),%edx
0852d8bb +0x18ef:  mov    %edx,0x4(%esp)
0852d8bf +0x18f3:  mov    %eax,(%esp)
0852d8c2 +0x18f6:  call   0833926c <_ZN13user_creature12CCreatureMgr24IsCreatureEquipmentScopeEi>  ; user_creature::CCreatureMgr::IsCreatureEquipmentScope(int)
0852d8c7 +0x18fb:  xor    $0x1,%eax
0852d8ca +0x18fe:  test   %al,%al
0852d8cc +0x1900:  je     0852d8d8 <+0x190c>
0852d8ce +0x1902:  mov    $0xffffffff,%ebx
0852d8d3 +0x1907:  jmp    0852dba0 <+0x1bd4>
0852d8d8 +0x190c:  mov    -0x3c(%ebp),%edx
0852d8db +0x190f:  mov    0x8(%ebp),%eax
0852d8de +0x1912:  add    $0x8,%edx
0852d8e1 +0x1915:  mov    (%eax,%edx,4),%eax
0852d8e4 +0x1918:  mov    %eax,(%esp)
0852d8e7 +0x191b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852d8ec +0x1920:  movl   $0x1,0x4c(%esp)
0852d8f4 +0x1928:  movl   $0x1d,0x48(%esp)
0852d8fc +0x1930:  mov    0x18(%ebp),%edx
0852d8ff +0x1933:  mov    %edx,0x44(%esp)
0852d903 +0x1937:  mov    -0x1d7(%ebp),%edx
0852d909 +0x193d:  mov    %edx,0x4(%esp)
0852d90d +0x1941:  mov    -0x1d3(%ebp),%edx
0852d913 +0x1947:  mov    %edx,0x8(%esp)
0852d917 +0x194b:  mov    -0x1cf(%ebp),%edx
0852d91d +0x1951:  mov    %edx,0xc(%esp)
0852d921 +0x1955:  mov    -0x1cb(%ebp),%edx
0852d927 +0x195b:  mov    %edx,0x10(%esp)
0852d92b +0x195f:  mov    -0x1c7(%ebp),%edx
0852d931 +0x1965:  mov    %edx,0x14(%esp)
0852d935 +0x1969:  mov    -0x1c3(%ebp),%edx
0852d93b +0x196f:  mov    %edx,0x18(%esp)
0852d93f +0x1973:  mov    -0x1bf(%ebp),%edx
0852d945 +0x1979:  mov    %edx,0x1c(%esp)
0852d949 +0x197d:  mov    -0x1bb(%ebp),%edx
0852d94f +0x1983:  mov    %edx,0x20(%esp)
0852d953 +0x1987:  mov    -0x1b7(%ebp),%edx
0852d959 +0x198d:  mov    %edx,0x24(%esp)
0852d95d +0x1991:  mov    -0x1b3(%ebp),%edx
0852d963 +0x1997:  mov    %edx,0x28(%esp)
0852d967 +0x199b:  mov    -0x1af(%ebp),%edx
0852d96d +0x19a1:  mov    %edx,0x2c(%esp)
0852d971 +0x19a5:  mov    -0x1ab(%ebp),%edx
0852d977 +0x19ab:  mov    %edx,0x30(%esp)
0852d97b +0x19af:  mov    -0x1a7(%ebp),%edx
0852d981 +0x19b5:  mov    %edx,0x34(%esp)
0852d985 +0x19b9:  mov    -0x1a3(%ebp),%edx
0852d98b +0x19bf:  mov    %edx,0x38(%esp)
0852d98f +0x19c3:  mov    -0x19f(%ebp),%edx
0852d995 +0x19c9:  mov    %edx,0x3c(%esp)
0852d999 +0x19cd:  movzbl -0x19b(%ebp),%edx
0852d9a0 +0x19d4:  mov    %dl,0x40(%esp)
0852d9a4 +0x19d8:  mov    %eax,(%esp)
0852d9a7 +0x19db:  call   0850ab10 <_ZN10CInventory30insertCreatureIntoSpecificSlotE10Inven_Itemi14eItemAddReasonb>  ; CInventory::insertCreatureIntoSpecificSlot(Inven_Item, int, eItemAddReason, bool)
0852d9ac +0x19e0:  mov    %eax,-0x1c(%ebp)
0852d9af +0x19e3:  cmpl   $0x0,-0x1c(%ebp)
0852d9b3 +0x19e7:  js     0852db79 <+0x1bad>
0852d9b9 +0x19ed:  mov    -0x3c(%ebp),%ecx
0852d9bc +0x19f0:  mov    0x10(%ebp),%edx
0852d9bf +0x19f3:  mov    %edx,%eax
0852d9c1 +0x19f5:  shl    $0x3,%eax
0852d9c4 +0x19f8:  add    %edx,%eax
0852d9c6 +0x19fa:  shl    $0x3,%eax
0852d9c9 +0x19fd:  imul   $0x798,%ecx,%edx
0852d9cf +0x1a03:  add    %edx,%eax
0852d9d1 +0x1a05:  add    $0x30,%eax
0852d9d4 +0x1a08:  add    0x8(%ebp),%eax
0852d9d7 +0x1a0b:  mov    %eax,(%esp)
0852d9da +0x1a0e:  call   082a413c <_GLOBAL__I__ZN4CLog5this_E+0x563>  ; global constructors keyed to CLog::this_+0x563
0852d9df +0x1a13:  mov    -0x1e0(%ebp),%eax
0852d9e5 +0x1a19:  cmp    -0x1c(%ebp),%eax
0852d9e8 +0x1a1c:  je     0852da2c <+0x1a60>
0852d9ea +0x1a1e:  mov    -0x3c(%ebp),%edx
0852d9ed +0x1a21:  mov    0x8(%ebp),%eax
0852d9f0 +0x1a24:  add    $0x8,%edx
0852d9f3 +0x1a27:  mov    (%eax,%edx,4),%eax
0852d9f6 +0x1a2a:  mov    %eax,(%esp)
0852d9f9 +0x1a2d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852d9fe +0x1a32:  mov    %eax,(%esp)
0852da01 +0x1a35:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0852da06 +0x1a3a:  movl   $0x1d,0xc(%esp)
0852da0e +0x1a42:  mov    -0x1c(%ebp),%edx
0852da11 +0x1a45:  mov    %edx,0x8(%esp)
0852da15 +0x1a49:  lea    -0x1e0(%ebp),%edx
0852da1b +0x1a4f:  add    $0x9,%edx
0852da1e +0x1a52:  mov    %edx,0x4(%esp)
0852da22 +0x1a56:  mov    %eax,(%esp)
0852da25 +0x1a59:  call   0833aedc <_ZN13user_creature12CCreatureMgr12ChangeSlotNoEP10Inven_Itemii>  ; user_creature::CCreatureMgr::ChangeSlotNo(Inven_Item*, int, int)
0852da2a +0x1a5e:  jmp    0852da84 <+0x1ab8>
0852da2c +0x1a60:  movzbl -0x1d6(%ebp),%eax
0852da33 +0x1a67:  movzbl %al,%edi
0852da36 +0x1a6a:  mov    -0x1d0(%ebp),%esi
0852da3c +0x1a70:  mov    -0x1d5(%ebp),%eax
0852da42 +0x1a76:  mov    %eax,%ebx
0852da44 +0x1a78:  mov    -0x3c(%ebp),%edx
0852da47 +0x1a7b:  mov    0x8(%ebp),%eax
0852da4a +0x1a7e:  add    $0x8,%edx
0852da4d +0x1a81:  mov    (%eax,%edx,4),%eax
0852da50 +0x1a84:  mov    %eax,(%esp)
0852da53 +0x1a87:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0852da58 +0x1a8c:  movl   $0x1d,0x18(%esp)
0852da60 +0x1a94:  mov    %edi,0x14(%esp)
0852da64 +0x1a98:  movl   $0x1,0x10(%esp)
0852da6c +0x1aa0:  mov    %esi,0xc(%esp)
0852da70 +0x1aa4:  mov    %ebx,0x8(%esp)
0852da74 +0x1aa8:  movl   $0x3,0x4(%esp)
0852da7c +0x1ab0:  mov    %eax,(%esp)
0852da7f +0x1ab3:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0852da84 +0x1ab8:  lea    -0x80(%ebp),%eax
0852da87 +0x1abb:  mov    %eax,(%esp)
0852da8a +0x1abe:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0852da8f +0x1ac3:  movl   $0xf,0x8(%esp)
0852da97 +0x1acb:  movl   $0x0,0x4(%esp)
0852da9f +0x1ad3:  lea    -0x80(%ebp),%eax
0852daa2 +0x1ad6:  mov    %eax,(%esp)
0852daa5 +0x1ad9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0852daaa +0x1ade:  mov    0x10(%ebp),%eax
0852daad +0x1ae1:  mov    %eax,0x4(%esp)
0852dab1 +0x1ae5:  lea    -0x80(%ebp),%eax
0852dab4 +0x1ae8:  mov    %eax,(%esp)
0852dab7 +0x1aeb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852dabc +0x1af0:  movl   $0xffffffff,0x4(%esp)
0852dac4 +0x1af8:  lea    -0x80(%ebp),%eax
0852dac7 +0x1afb:  mov    %eax,(%esp)
0852daca +0x1afe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852dacf +0x1b03:  movl   $0x0,0x4(%esp)
0852dad7 +0x1b0b:  lea    -0x80(%ebp),%eax
0852dada +0x1b0e:  mov    %eax,(%esp)
0852dadd +0x1b11:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852dae2 +0x1b16:  movl   $0x0,0x4(%esp)
0852daea +0x1b1e:  lea    -0x80(%ebp),%eax
0852daed +0x1b21:  mov    %eax,(%esp)
0852daf0 +0x1b24:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852daf5 +0x1b29:  movl   $0x0,0x4(%esp)
0852dafd +0x1b31:  lea    -0x80(%ebp),%eax
0852db00 +0x1b34:  mov    %eax,(%esp)
0852db03 +0x1b37:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852db08 +0x1b3c:  movl   $0x0,0x4(%esp)
0852db10 +0x1b44:  lea    -0x80(%ebp),%eax
0852db13 +0x1b47:  mov    %eax,(%esp)
0852db16 +0x1b4a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0852db1b +0x1b4f:  movl   $0x0,0x4(%esp)
0852db23 +0x1b57:  lea    -0x80(%ebp),%eax
0852db26 +0x1b5a:  mov    %eax,(%esp)
0852db29 +0x1b5d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0852db2e +0x1b62:  movl   $0x0,0x4(%esp)
0852db36 +0x1b6a:  lea    -0x80(%ebp),%eax
0852db39 +0x1b6d:  mov    %eax,(%esp)
0852db3c +0x1b70:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0852db41 +0x1b75:  movl   $&g_emptySlot,0x4(%esp)
0852db49 +0x1b7d:  lea    -0x80(%ebp),%eax
0852db4c +0x1b80:  mov    %eax,(%esp)
0852db4f +0x1b83:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0852db54 +0x1b88:  movl   $0x1,0x4(%esp)
0852db5c +0x1b90:  lea    -0x80(%ebp),%eax
0852db5f +0x1b93:  mov    %eax,(%esp)
0852db62 +0x1b96:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0852db67 +0x1b9b:  lea    -0x80(%ebp),%eax
0852db6a +0x1b9e:  mov    %eax,0x4(%esp)
0852db6e +0x1ba2:  mov    -0x44(%ebp),%eax
0852db71 +0x1ba5:  mov    %eax,(%esp)
0852db74 +0x1ba8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0852db79 +0x1bad:  mov    -0x1c(%ebp),%ebx
0852db7c +0x1bb0:  jmp    0852dba0 <+0x1bd4>
0852db7e +0x1bb2:  mov    $0xffffffff,%ebx
0852db83 +0x1bb7:  jmp    0852dba0 <+0x1bd4>
0852db85 +0x1bb9:  mov    %edx,%ebx
0852db87 +0x1bbb:  mov    %eax,%esi
0852db89 +0x1bbd:  lea    -0x80(%ebp),%eax
0852db8c +0x1bc0:  mov    %eax,(%esp)
0852db8f +0x1bc3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852db94 +0x1bc8:  mov    %esi,%eax
0852db96 +0x1bca:  mov    %ebx,%edx
0852db98 +0x1bcc:  mov    %eax,(%esp)
0852db9b +0x1bcf:  call   08ae3750 <_Unwind_Resume>
0852dba0 +0x1bd4:  lea    -0x80(%ebp),%eax
0852dba3 +0x1bd7:  mov    %eax,(%esp)
0852dba6 +0x1bda:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0852dbab +0x1bdf:  mov    %ebx,%eax
0852dbad +0x1be1:  lea    -0xc(%ebp),%esp
0852dbb0 +0x1be4:  add    $0x0,%esp
0852dbb3 +0x1be7:  pop    %ebx
0852dbb4 +0x1be8:  pop    %esi
0852dbb5 +0x1be9:  pop    %edi
0852dbb6 +0x1bea:  pop    %ebp
0852dbb7 +0x1beb:  ret
```

## 反编译 C

```c
// CTradeSpace::remove_item @ 0x852bfcc

/* CTradeSpace::remove_item(CUser*, int, int, int, int) */

int __thiscall
CTradeSpace::remove_item
          (CTradeSpace *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  CDataManager *this_00;
  int iVar6;
  GameWorld *this_01;
  CCreatureMgr *pCVar7;
  CTradeSpace *pCVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  byte bVar12;
  int local_1e4 [2];
  char local_1dc;
  Inven_Item local_1db;
  char cStack_1da;
  undefined2 uStack_1d9;
  undefined2 local_1d7;
  undefined1 uStack_1d5;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined4 local_1cf;
  undefined4 local_1cb;
  undefined4 local_1c7;
  undefined4 local_1c3;
  undefined4 local_1bf;
  undefined4 local_1bb;
  undefined4 local_1b7;
  undefined4 local_1b3;
  undefined4 local_1af;
  undefined4 local_1ab;
  undefined4 local_1a7;
  undefined4 local_1a3;
  undefined1 local_19f;
  int local_19c [2];
  char local_194;
  undefined4 local_193;
  undefined4 local_18f;
  undefined4 local_18b;
  undefined4 local_187;
  undefined4 local_183;
  undefined4 local_17f;
  undefined4 local_17b;
  undefined4 local_177;
  undefined4 local_173;
  undefined4 local_16f;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined1 local_157;
  undefined4 local_154 [2];
  char local_14c;
  undefined2 uStack_14b;
  undefined2 local_149;
  undefined2 uStack_147;
  undefined2 uStack_145;
  undefined4 local_143;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined4 local_137;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined4 local_123;
  undefined4 local_11f;
  undefined4 local_11b;
  undefined4 local_117;
  undefined4 local_113;
  undefined1 local_10f;
  undefined4 local_10c [2];
  char local_104;
  Inven_Item local_103;
  byte bStack_102;
  undefined2 uStack_101;
  undefined2 local_ff;
  undefined2 uStack_fd;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined1 local_c7;
  undefined1 local_c1 [2];
  int local_bf;
  PacketGuard local_84 [12];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  CUser *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  CEquipItem *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  cVar1 = IsLocked(this);
  if (cVar1 != '\0') {
    return -1;
  }
  if (param_5 < 1) {
    return -0x62;
  }
  PacketGuard::PacketGuard(local_84);
  bVar11 = *(CUser **)(this + 0x20) != param_1;
  if (bVar11) {
    local_48 = *(CUser **)(this + 0x20);
  }
  else {
    local_48 = *(CUser **)(this + 0x24);
  }
  local_40 = (uint)bVar11;
  local_44 = (uint)!bVar11;
  *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
  *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
  if ((local_48 == (CUser *)0x0) || (0x1a < param_2)) {
    iVar2 = -1;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
    if ((iVar2 == 0) ||
       (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 == 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      uVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      uVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    /* try { // try from 0852c0fe to 0852db78 has its CatchHandler @ 0852db85 */
      cMyTrace::cMyTrace(local_78,"int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x45a,5
                        );
      cMyTrace::operator()
                (local_78,
                 "CTradeSpace::remove_item()\t0 == m_pTraders[owner_index]->getCurCharacR() %x || 0 == owner->getCurCharacR() %x"
                 ,uVar4,uVar3);
      iVar2 = -1;
    }
    else if ((char)this[param_2 * 0x48 + local_40 * 0x798 + 0x38] == param_3) {
      if (param_3 == 1) {
        pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
        piVar10 = local_19c;
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar10 = *(int *)pCVar8;
          pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
          piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
        }
        *(undefined2 *)piVar10 = *(undefined2 *)pCVar8;
        if (local_194 == '\x01') {
          uVar3 = CUserCharacInfo::getCurCharacInvenW
                            (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
          local_24 = CInventory::insertAvatarIntoSpecificSlot
                               (uVar3,local_193,local_18f,local_18b,local_187,local_183,local_17f,
                                local_17b,local_177,local_173,local_16f,local_16b,local_167,
                                local_163,local_15f,local_15b,local_157,param_4,4,1);
          iVar2 = local_24;
          if (-1 < local_24) {
            TradeSlot::Reset((TradeSlot *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30));
            if (local_19c[0] != local_24) {
              iVar2 = local_24 + 10;
              pCVar5 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
              CInventory::SendAvatarEvent
                        (pCVar5,0x32,local_19c[0] + 10,iVar2,
                         CONCAT31((undefined3)local_18b,local_18f._3_1_),0);
            }
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
            InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot)
            ;
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
            CUser::Send(local_48,local_84);
            iVar2 = local_24;
          }
        }
        else {
          iVar2 = -1;
        }
      }
      else {
        if (param_3 < 2) {
          if (param_3 == 0) {
            if (param_2 == 0) {
              if (*(int *)(this + (local_40 + 0x3d8) * 4) - param_5 < 0) {
                iVar2 = -1;
              }
              else {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::gain_money(pCVar5,param_5,1,1,0);
                *(int *)(this + (local_40 + 0x3d8) * 4) =
                     *(int *)(this + (local_40 + 0x3d8) * 4) - param_5;
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                if (*(int *)(this + (local_40 + 0x3d8) * 4) < 1) {
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                }
                else {
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                }
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_84,*(int *)(this + (local_40 + 0x3d8) * 4));
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_packet
                          ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                CUser::Send(local_48,local_84);
                *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
                *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
                iVar2 = 0;
              }
            }
            else {
              pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
              puVar9 = local_10c;
              for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar9 = *(undefined4 *)pCVar8;
                pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
                puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
              }
              *(undefined2 *)puVar9 = *(undefined2 *)pCVar8;
              local_3c = -1;
              pCVar5 = (CInventory *)
                       CUserCharacInfo::getCurCharacInvenR
                                 (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
              local_38 = CInventory::GetSlotItemType(pCVar5,param_4);
              if ((local_38 == 0) || (local_38 == bStack_102)) {
                if (bStack_102 == 1) {
                  if (local_104 != '\0') {
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  cVar1 = CInventory::check_empty_count(pCVar5,1,1);
                  if (cVar1 == '\0') {
                    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                    LogManager::logFormat
                              (1,"item_trade.cpp",
                               "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4ac,
                               "[TRADE]FATAL_ERROR USER[%s] ITEMID[%d]",uVar3,
                               CONCAT22(local_ff,uStack_101));
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  uVar3 = CUserCharacInfo::getCurCharacInvenW
                                    (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  local_3c = CInventory::insert_item_special_slot
                                       (uVar3,CONCAT22(uStack_101,CONCAT11(bStack_102,local_103)),
                                        CONCAT22(uStack_fd,local_ff),local_fb,local_f7,local_f3,
                                        local_ef,local_eb,local_e7,local_e3,local_df,local_db,
                                        local_d7,local_d3,local_cf,local_cb,local_c7,param_5,param_4
                                        ,9,0x10);
                  if (local_3c < 0) {
                    uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                    LogManager::logFormat
                              (1,"item_trade.cpp",
                               "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4a5,
                               "FATAL_ERROR USER[%s] ITEMID[%d] -> SLOT[%d]",uVar3,
                               CONCAT22(local_ff,uStack_101),param_4);
                    iVar2 = local_3c;
                    goto LAB_0852dba0;
                  }
                }
                else {
                  iVar2 = Inven_Item::get_add_info(&local_103);
                  if (iVar2 < param_5) {
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  Inven_Item::set_add_info(&local_103,param_5);
                  if (999 < param_5) {
                    uVar3 = CONCAT22(local_ff,uStack_101);
                    cMyTrace::cMyTrace(local_68,
                                       "int CTradeSpace::remove_item(CUser*, int, int, int, int)",
                                       0x4b8,5);
                    cMyTrace::operator()
                              (local_68,
                               "CTradeSpace::remove_item, moveitem.item.set_add_info , ITEM #%d, %d"
                               ,uVar3,param_5);
                  }
                  iVar2 = CONCAT22(local_ff,uStack_101);
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  local_34 = CInventory::check_item_exist(pCVar5,iVar2);
                  bVar12 = bStack_102;
                  if (local_34 == -1) {
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR
                                       (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    cVar1 = CInventory::check_empty_count(pCVar5,bVar12,1);
                    if (cVar1 == '\0') {
                      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                      LogManager::logFormat
                                (1,"item_trade.cpp",
                                 "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4db,
                                 "FATAL_ERROR USER[%s] ITEMID[%d]",uVar3,
                                 CONCAT22(local_ff,uStack_101));
                      iVar2 = -1;
                      goto LAB_0852dba0;
                    }
                    uVar3 = CUserCharacInfo::getCurCharacInvenW
                                      (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    local_3c = CInventory::insert_item_special_slot
                                         (uVar3,CONCAT22(uStack_101,CONCAT11(bStack_102,local_103)),
                                          CONCAT22(uStack_fd,local_ff),local_fb,local_f7,local_f3,
                                          local_ef,local_eb,local_e7,local_e3,local_df,local_db,
                                          local_d7,local_d3,local_cf,local_cb,local_c7,param_5,
                                          param_4,9,0x10);
                    iVar2 = local_3c;
                    if (local_3c < 0) goto LAB_0852dba0;
                  }
                  else {
                    uVar3 = CUserCharacInfo::getCurCharacInvenW
                                      (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                    local_3c = CInventory::insertItemIntoInventory
                                         (uVar3,CONCAT22(uStack_101,CONCAT11(bStack_102,local_103)),
                                          CONCAT22(uStack_fd,local_ff),local_fb,local_f7,local_f3,
                                          local_ef,local_eb,local_e7,local_e3,local_df,local_db,
                                          local_d7,local_d3,local_cf,local_cb,local_c7,0x10,1,1);
                    if (local_3c < 0) {
                      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                      LogManager::logFormat
                                (1,"item_trade.cpp",
                                 "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x4cc,
                                 "[TRADE]FATAL_ERROR USER[%s] ITEMID[%d]",uVar3,
                                 CONCAT22(local_ff,uStack_101));
                      iVar2 = local_3c;
                      goto LAB_0852dba0;
                    }
                  }
                }
                *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
                *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
                iVar2 = local_3c;
                if (local_3c != -1) {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
                  if (this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] == (CTradeSpace)0x1) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30) = 0;
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x34) = 0;
                    this[param_2 * 0x48 + local_40 * 0x798 + 0x38] = (CTradeSpace)0x0;
                    this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] = (CTradeSpace)0x0;
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b) = 0;
                    Inven_Item::set_add_info
                              ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),0);
                    Inven_Item::ResetItemAttr
                              ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                    *(undefined2 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x44) = 0;
                    *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x46) = 0;
                  }
                  else {
                    iVar2 = Inven_Item::get_add_info
                                      ((Inven_Item *)
                                       (this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                    if (param_5 < iVar2) {
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_84,CONCAT22(local_ff,uStack_101));
                      iVar2 = Inven_Item::get_add_info
                                        ((Inven_Item *)
                                         (this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,iVar2 - param_5);
                      local_30 = *(int *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x40) - param_5
                      ;
                      Inven_Item::set_add_info
                                ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),
                                 local_30);
                      if (999 < local_30) {
                        uVar3 = *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b);
                        cMyTrace::cMyTrace(local_58,
                                           "int CTradeSpace::remove_item(CUser*, int, int, int, int)"
                                           ,0x503,5);
                        cMyTrace::operator()
                                  (local_58,
                                   "CTradeSpace::remove_item, m_ItemSlot[owner_index][trade_slot_no].item.set_add_info 2 , ITEM #%d, %d"
                                   ,uVar3,local_30);
                      }
                    }
                    else {
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30) = 0;
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x34) = 0;
                      this[param_2 * 0x48 + local_40 * 0x798 + 0x38] = (CTradeSpace)0x0;
                      this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] = (CTradeSpace)0x0;
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b) = 0;
                      Inven_Item::set_add_info
                                ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),0);
                      Inven_Item::ResetItemAttr
                                ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                      *(undefined2 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x44) = 0;
                      *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x46) = 0;
                    }
                  }
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                  InterfacePacketBuf::put_packet
                            ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                  CUser::Send(local_48,local_84);
                  iVar2 = local_3c;
                }
              }
              else {
                iVar2 = -1;
              }
            }
            goto LAB_0852dba0;
          }
        }
        else {
          if (param_3 == 3) {
            if (param_2 == 0) {
              LogManager::logFormat
                        (1,"item_trade.cpp",
                         "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x59a,
                         "trade_slot_no == 0");
              iVar2 = -1;
            }
            else {
              pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
              puVar9 = local_154;
              for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar9 = *(undefined4 *)pCVar8;
                pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
                puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
              }
              *(undefined2 *)puVar9 = *(undefined2 *)pCVar8;
              if (local_14c == '\x03') {
                if (CONCAT22(uStack_147,local_149) == 0) {
                  LogManager::logFormat
                            (1,"item_trade.cpp",
                             "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5a8,
                             "moveitem.item.item_id == 0");
                  iVar2 = -1;
                }
                else {
                  if (this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
                    if (9 < param_4) {
                      iVar2 = -1;
                      goto LAB_0852dba0;
                    }
                  }
                  else if ((param_4 < 10) || (0x15 < param_4)) {
                    iVar2 = -1;
                    goto LAB_0852dba0;
                  }
                  iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_c1,iVar2);
                  if (local_bf == 0) {
                    iVar2 = CONCAT22(uStack_147,local_149);
                    this_00 = (CDataManager *)G_CDataManager();
                    local_2c = (CEquipItem *)CDataManager::find_item(this_00,iVar2);
                    if (local_2c == (CEquipItem *)0x0) {
                      LogManager::logFormat
                                (1,"item_trade.cpp",
                                 "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5c3,
                                 "equip_ref == NULL");
                      iVar2 = -1;
                    }
                    else {
                      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
                      iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
                      local_28 = CEquipItem::check_able_To_equip(local_2c,(char)param_4,iVar6,iVar2)
                      ;
                      if (local_28 == 0) {
                        iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                        iVar2 = iVar2 + param_4 * 0x3d;
                        *(uint *)(iVar2 + 0x1c) = CONCAT22(local_149,uStack_14b);
                        *(uint *)(iVar2 + 0x20) = CONCAT22(uStack_145,uStack_147);
                        *(undefined4 *)(iVar2 + 0x24) = local_143;
                        *(undefined4 *)(iVar2 + 0x28) = local_13f;
                        *(undefined4 *)(iVar2 + 0x2c) = local_13b;
                        *(undefined4 *)(iVar2 + 0x30) = local_137;
                        *(undefined4 *)(iVar2 + 0x34) = local_133;
                        *(undefined4 *)(iVar2 + 0x38) = local_12f;
                        *(undefined4 *)(iVar2 + 0x3c) = local_12b;
                        *(undefined4 *)(iVar2 + 0x40) = local_127;
                        *(undefined4 *)(iVar2 + 0x44) = local_123;
                        *(undefined4 *)(iVar2 + 0x48) = local_11f;
                        *(undefined4 *)(iVar2 + 0x4c) = local_11b;
                        *(undefined4 *)(iVar2 + 0x50) = local_117;
                        *(undefined4 *)(iVar2 + 0x54) = local_113;
                        *(undefined1 *)(iVar2 + 0x58) = local_10f;
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
                        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                        InterfacePacketBuf::put_packet
                                  ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                        CUser::Send(local_48,local_84);
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30) = 0;
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x34) = 0;
                        this[param_2 * 0x48 + local_40 * 0x798 + 0x38] = (CTradeSpace)0x0;
                        this[param_2 * 0x48 + local_40 * 0x798 + 0x3a] = (CTradeSpace)0x0;
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x3b) = 0;
                        Inven_Item::set_add_info
                                  ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39),0
                                  );
                        Inven_Item::ResetItemAttr
                                  ((Inven_Item *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x39));
                        *(undefined2 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x44) = 0;
                        *(undefined4 *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x46) = 0;
                        *(undefined4 *)(this + (local_40 + 8) * 4 + 8) = 0;
                        *(undefined4 *)(this + (local_44 + 8) * 4 + 8) = 0;
                        iVar2 = param_4;
                        if (param_2 < 0xc) {
                          iVar2 = CUser::get_state(param_1);
                          if ((iVar2 == 5) || (iVar2 = CUser::get_state(param_1), iVar2 == 8)) {
                            bVar11 = false;
                          }
                          else {
                            bVar11 = true;
                          }
                          iVar2 = param_4;
                          if (bVar11) {
                            InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,2);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,1);
                            CUser::make_basic_info(param_1,(char *)local_84,'\0');
                            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                            this_01 = (GameWorld *)G_GameWorld();
                            GameWorld::send_all(this_01,local_84,param_1);
                            iVar2 = param_4;
                          }
                        }
                      }
                      else {
                        LogManager::logFormat
                                  (1,"item_trade.cpp",
                                   "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5ca,
                                   "equip_ref->check_able_To_equip return false res(%d)",local_28);
                        iVar2 = -1;
                      }
                    }
                  }
                  else {
                    LogManager::logFormat
                              (1,"item_trade.cpp",
                               "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5bb,
                               "moveitem.item.item_id == 0");
                    iVar2 = -1;
                  }
                }
              }
              else {
                LogManager::logFormat
                          (1,"item_trade.cpp",
                           "int CTradeSpace::remove_item(CUser*, int, int, int, int)",0x5a2,
                           "moveitem.item_space != ENUM_ITEMSPACE_EQUIPPED");
                iVar2 = -1;
              }
            }
            goto LAB_0852dba0;
          }
          if (param_3 == 7) {
            pCVar8 = this + param_2 * 0x48 + local_40 * 0x798 + 0x30;
            piVar10 = local_1e4;
            for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar10 = *(int *)pCVar8;
              pCVar8 = pCVar8 + (uint)bVar12 * -8 + 4;
              piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
            }
            *(undefined2 *)piVar10 = *(undefined2 *)pCVar8;
            if (local_1dc == '\a') {
              if (cStack_1da == '\x05') {
                pCVar5 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
                cVar1 = user_creature::CCreatureMgr::IsCreatureEquipmentScope(pCVar7,param_4);
                if (cVar1 != '\x01') {
                  iVar2 = -1;
                  goto LAB_0852dba0;
                }
              }
              uVar3 = CUserCharacInfo::getCurCharacInvenW
                                (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
              local_20 = CInventory::insertCreatureIntoSpecificSlot
                                   (uVar3,CONCAT22(uStack_1d9,CONCAT11(cStack_1da,local_1db)),
                                    CONCAT13((undefined1)uStack_1d4,CONCAT12(uStack_1d5,local_1d7)),
                                    CONCAT13(uStack_1d0,uStack_1d4._1_3_),local_1cf,local_1cb,
                                    local_1c7,local_1c3,local_1bf,local_1bb,local_1b7,local_1b3,
                                    local_1af,local_1ab,local_1a7,local_1a3,local_19f,param_4,0x1d,1
                                   );
              iVar2 = local_20;
              if (-1 < local_20) {
                TradeSlot::Reset((TradeSlot *)(this + param_2 * 0x48 + local_40 * 0x798 + 0x30));
                if (local_1e4[0] == local_20) {
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  CInventory::WriteCreatureLog
                            (pCVar5,3,CONCAT22(local_1d7,uStack_1d9),uStack_1d4,1,cStack_1da,0x1d);
                }
                else {
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW
                                     (*(CUserCharacInfo **)(this + (local_40 + 8) * 4));
                  pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar5);
                  user_creature::CCreatureMgr::ChangeSlotNo(pCVar7,&local_1db,local_20,0x1d);
                }
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,0xf);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,param_2);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,-1);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,0);
                InterfacePacketBuf::put_packet
                          ((InterfacePacketBuf *)local_84,(Inven_Item *)g_emptySlot);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
                CUser::Send(local_48,local_84);
                iVar2 = local_20;
              }
            }
            else {
              iVar2 = -1;
            }
            goto LAB_0852dba0;
          }
        }
        iVar2 = -1;
      }
    }
    else {
      iVar2 = -1;
    }
  }
LAB_0852dba0:
  PacketGuard::~PacketGuard(local_84);
  return iVar2;
}
```
