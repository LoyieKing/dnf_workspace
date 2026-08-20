# set_traders

`_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_`

`global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CTradeSpace` | `0x08531fa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08531fa2  _GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_
#           global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)
# range [0x08531fa2, 0x085331bb]
08531fa2 +0x0000:  push   %ebp
08531fa3 +0x0001:  mov    %esp,%ebp
08531fa5 +0x0003:  sub    $0x18,%esp
08531fa8 +0x0006:  movl   $0xffff,0x4(%esp)
08531fb0 +0x000e:  movl   $0x1,(%esp)
08531fb7 +0x0015:  call   08531f62 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08531fbc +0x001a:  leave
08531fbd +0x001b:  ret
08531fbe +0x001c:  push   %ebp
08531fbf +0x001d:  mov    %esp,%ebp
08531fc1 +0x001f:  sub    $0x18,%esp
08531fc4 +0x0022:  mov    0x8(%ebp),%eax
08531fc7 +0x0025:  mov    %eax,(%esp)
08531fca +0x0028:  call   083418f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39bf
08531fcf +0x002d:  leave
08531fd0 +0x002e:  ret
08531fd1 +0x002f:  nop
08531fd2 +0x0030:  push   %ebp
08531fd3 +0x0031:  mov    %esp,%ebp
08531fd5 +0x0033:  sub    $0x8,%esp
08531fd8 +0x0036:  mov    0x10(%ebp),%eax
08531fdb +0x0039:  mov    %eax,-0x8(%ebp)
08531fde +0x003c:  mov    0x14(%ebp),%eax
08531fe1 +0x003f:  mov    %eax,-0x4(%ebp)
08531fe4 +0x0042:  mov    0x8(%ebp),%eax
08531fe7 +0x0045:  mov    0x18(%eax),%eax
08531fea +0x0048:  test   %eax,%eax
08531fec +0x004a:  jne    08532004 <+0x62>
08531fee +0x004c:  mov    0x8(%ebp),%eax
08531ff1 +0x004f:  mov    0x20(%eax),%edx
08531ff4 +0x0052:  mov    0x1c(%eax),%eax
08531ff7 +0x0055:  or     %edx,%eax
08531ff9 +0x0057:  test   %eax,%eax
08531ffb +0x0059:  jne    08532004 <+0x62>
08531ffd +0x005b:  mov    $0x0,%eax
08532002 +0x0060:  jmp    08532033 <+0x91>
08532004 +0x0062:  mov    0x8(%ebp),%eax
08532007 +0x0065:  mov    0x18(%eax),%eax
0853200a +0x0068:  cmp    0xc(%ebp),%eax
0853200d +0x006b:  ja     0853202e <+0x8c>
0853200f +0x006d:  mov    0x8(%ebp),%eax
08532012 +0x0070:  mov    0x20(%eax),%edx
08532015 +0x0073:  mov    0x1c(%eax),%eax
08532018 +0x0076:  cmp    -0x4(%ebp),%edx
0853201b +0x0079:  ja     0853202e <+0x8c>
0853201d +0x007b:  cmp    -0x4(%ebp),%edx
08532020 +0x007e:  jb     08532027 <+0x85>
08532022 +0x0080:  cmp    -0x8(%ebp),%eax
08532025 +0x0083:  ja     0853202e <+0x8c>
08532027 +0x0085:  mov    $0x1,%eax
0853202c +0x008a:  jmp    08532033 <+0x91>
0853202e +0x008c:  mov    $0x0,%eax
08532033 +0x0091:  leave
08532034 +0x0092:  ret
08532035 +0x0093:  nop
08532036 +0x0094:  push   %ebp
08532037 +0x0095:  mov    %esp,%ebp
08532039 +0x0097:  sub    $0x18,%esp
0853203c +0x009a:  mov    0x8(%ebp),%eax
0853203f +0x009d:  lea    0x22(%eax),%edx
08532042 +0x00a0:  movl   $0x1e,0x8(%esp)
0853204a +0x00a8:  mov    0xc(%ebp),%eax
0853204d +0x00ab:  mov    %eax,0x4(%esp)
08532051 +0x00af:  mov    %edx,(%esp)
08532054 +0x00b2:  call   0807d8d0 <_init+0x1c8>
08532059 +0x00b7:  mov    0x8(%ebp),%eax
0853205c +0x00ba:  lea    0x4(%eax),%edx
0853205f +0x00bd:  movl   $0x1e,0x8(%esp)
08532067 +0x00c5:  mov    0x10(%ebp),%eax
0853206a +0x00c8:  mov    %eax,0x4(%esp)
0853206e +0x00cc:  mov    %edx,(%esp)
08532071 +0x00cf:  call   0807d8d0 <_init+0x1c8>
08532076 +0x00d4:  leave
08532077 +0x00d5:  ret
08532078 +0x00d6:  push   %ebp
08532079 +0x00d7:  mov    %esp,%ebp
0853207b +0x00d9:  mov    0x8(%ebp),%eax
0853207e +0x00dc:  mov    0x8d1b0(%eax),%edx
08532084 +0x00e2:  mov    0x8d1ac(%eax),%eax
0853208a +0x00e8:  pop    %ebp
0853208b +0x00e9:  ret
0853208c +0x00ea:  push   %ebp
0853208d +0x00eb:  mov    %esp,%ebp
0853208f +0x00ed:  mov    0x8(%ebp),%eax
08532092 +0x00f0:  mov    0x8d1b4(%eax),%eax
08532098 +0x00f6:  pop    %ebp
08532099 +0x00f7:  ret
0853209a +0x00f8:  push   %ebp
0853209b +0x00f9:  mov    %esp,%ebp
0853209d +0x00fb:  mov    0x8(%ebp),%eax
085320a0 +0x00fe:  mov    0x8d10c(%eax),%eax
085320a6 +0x0104:  lea    0x1(%eax),%edx
085320a9 +0x0107:  mov    0x8(%ebp),%eax
085320ac +0x010a:  mov    %edx,0x8d10c(%eax)
085320b2 +0x0110:  pop    %ebp
085320b3 +0x0111:  ret
085320b4 +0x0112:  push   %ebp
085320b5 +0x0113:  mov    %esp,%ebp
085320b7 +0x0115:  sub    $0x18,%esp
085320ba +0x0118:  mov    0x8(%ebp),%eax
085320bd +0x011b:  mov    %eax,(%esp)
085320c0 +0x011e:  call   0822fdb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5460>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5460
085320c5 +0x0123:  mov    0xc(%ebp),%eax
085320c8 +0x0126:  mov    %eax,%edx
085320ca +0x0128:  mov    0x8(%ebp),%eax
085320cd +0x012b:  mov    %dx,0x8d002(%eax)
085320d4 +0x0132:  mov    0x8(%ebp),%eax
085320d7 +0x0135:  mov    %eax,(%esp)
085320da +0x0138:  call   0822fdce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5478>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5478
085320df +0x013d:  leave
085320e0 +0x013e:  ret
085320e1 +0x013f:  nop
085320e2 +0x0140:  push   %ebp
085320e3 +0x0141:  mov    %esp,%ebp
085320e5 +0x0143:  pop    %ebp
085320e6 +0x0144:  ret
085320e7 +0x0145:  nop
085320e8 +0x0146:  push   %ebp
085320e9 +0x0147:  mov    %esp,%ebp
085320eb +0x0149:  pop    %ebp
085320ec +0x014a:  ret
085320ed +0x014b:  nop
085320ee +0x014c:  push   %ebp
085320ef +0x014d:  mov    %esp,%ebp
085320f1 +0x014f:  mov    0x8(%ebp),%eax
085320f4 +0x0152:  movzbl 0x1d(%eax),%eax
085320f8 +0x0156:  pop    %ebp
085320f9 +0x0157:  ret
085320fa +0x0158:  push   %ebp
085320fb +0x0159:  mov    %esp,%ebp
085320fd +0x015b:  sub    $0x4,%esp
08532100 +0x015e:  mov    0xc(%ebp),%eax
08532103 +0x0161:  mov    %al,-0x4(%ebp)
08532106 +0x0164:  mov    0x8(%ebp),%eax
08532109 +0x0167:  movzbl -0x4(%ebp),%edx
0853210d +0x016b:  mov    %dl,0x1d(%eax)
08532110 +0x016e:  leave
08532111 +0x016f:  ret
08532112 +0x0170:  push   %ebp
08532113 +0x0171:  mov    %esp,%ebp
08532115 +0x0173:  sub    $0x18,%esp
08532118 +0x0176:  mov    0x8(%ebp),%eax
0853211b +0x0179:  mov    %eax,(%esp)
0853211e +0x017c:  call   0853214e <+0x1ac>
08532123 +0x0181:  leave
08532124 +0x0182:  ret
08532125 +0x0183:  nop
08532126 +0x0184:  push   %ebp
08532127 +0x0185:  mov    %esp,%ebp
08532129 +0x0187:  sub    $0x18,%esp
0853212c +0x018a:  mov    0x8(%ebp),%eax
0853212f +0x018d:  mov    %eax,(%esp)
08532132 +0x0190:  call   085323a4 <+0x402>
08532137 +0x0195:  leave
08532138 +0x0196:  ret
08532139 +0x0197:  nop
0853213a +0x0198:  push   %ebp
0853213b +0x0199:  mov    %esp,%ebp
0853213d +0x019b:  sub    $0x18,%esp
08532140 +0x019e:  mov    0x8(%ebp),%eax
08532143 +0x01a1:  mov    %eax,(%esp)
08532146 +0x01a4:  call   085323b8 <+0x416>
0853214b +0x01a9:  leave
0853214c +0x01aa:  ret
0853214d +0x01ab:  nop
0853214e +0x01ac:  push   %ebp
0853214f +0x01ad:  mov    %esp,%ebp
08532151 +0x01af:  push   %esi
08532152 +0x01b0:  push   %ebx
08532153 +0x01b1:  sub    $0x10,%esp
08532156 +0x01b4:  mov    0x8(%ebp),%eax
08532159 +0x01b7:  mov    %eax,(%esp)
0853215c +0x01ba:  call   08532422 <+0x480>
08532161 +0x01bf:  mov    %eax,0x4(%esp)
08532165 +0x01c3:  mov    0x8(%ebp),%eax
08532168 +0x01c6:  mov    %eax,(%esp)
0853216b +0x01c9:  call   085323cc <+0x42a>
08532170 +0x01ce:  jmp    0853218d <+0x1eb>
08532172 +0x01d0:  mov    %edx,%ebx
08532174 +0x01d2:  mov    %eax,%esi
08532176 +0x01d4:  mov    0x8(%ebp),%eax
08532179 +0x01d7:  mov    %eax,(%esp)
0853217c +0x01da:  call   0853213a <+0x198>
08532181 +0x01df:  mov    %esi,%eax
08532183 +0x01e1:  mov    %ebx,%edx
08532185 +0x01e3:  mov    %eax,(%esp)
08532188 +0x01e6:  call   08ae3750 <_Unwind_Resume>
0853218d +0x01eb:  mov    0x8(%ebp),%eax
08532190 +0x01ee:  mov    %eax,(%esp)
08532193 +0x01f1:  call   0853213a <+0x198>
08532198 +0x01f6:  add    $0x10,%esp
0853219b +0x01f9:  pop    %ebx
0853219c +0x01fa:  pop    %esi
0853219d +0x01fb:  pop    %ebp
0853219e +0x01fc:  ret
0853219f +0x01fd:  nop
085321a0 +0x01fe:  push   %ebp
085321a1 +0x01ff:  mov    %esp,%ebp
085321a3 +0x0201:  sub    $0x18,%esp
085321a6 +0x0204:  mov    0x8(%ebp),%eax
085321a9 +0x0207:  mov    (%eax),%eax
085321ab +0x0209:  mov    %eax,(%esp)
085321ae +0x020c:  call   0853242e <+0x48c>
085321b3 +0x0211:  leave
085321b4 +0x0212:  ret
085321b5 +0x0213:  nop
085321b6 +0x0214:  push   %ebp
085321b7 +0x0215:  mov    %esp,%ebp
085321b9 +0x0217:  sub    $0x18,%esp
085321bc +0x021a:  mov    0x8(%ebp),%eax
085321bf +0x021d:  add    $0x4,%eax
085321c2 +0x0220:  mov    %eax,(%esp)
085321c5 +0x0223:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085321ca +0x0228:  leave
085321cb +0x0229:  ret
085321cc +0x022a:  push   %ebp
085321cd +0x022b:  mov    %esp,%ebp
085321cf +0x022d:  push   %esi
085321d0 +0x022e:  push   %ebx
085321d1 +0x022f:  sub    $0x50,%esp
085321d4 +0x0232:  lea    -0x30(%ebp),%eax
085321d7 +0x0235:  mov    0xc(%ebp),%edx
085321da +0x0238:  mov    %edx,0x8(%esp)
085321de +0x023c:  mov    0x8(%ebp),%edx
085321e1 +0x023f:  mov    %edx,0x4(%esp)
085321e5 +0x0243:  mov    %eax,(%esp)
085321e8 +0x0246:  call   08532498 <+0x4f6>
085321ed +0x024b:  sub    $0x4,%esp
085321f0 +0x024e:  lea    -0x2c(%ebp),%eax
085321f3 +0x0251:  mov    0x8(%ebp),%edx
085321f6 +0x0254:  mov    %edx,0x4(%esp)
085321fa +0x0258:  mov    %eax,(%esp)
085321fd +0x025b:  call   0853233e <+0x39c>
08532202 +0x0260:  sub    $0x4,%esp
08532205 +0x0263:  lea    -0x2c(%ebp),%eax
08532208 +0x0266:  mov    %eax,0x4(%esp)
0853220c +0x026a:  lea    -0x30(%ebp),%eax
0853220f +0x026d:  mov    %eax,(%esp)
08532212 +0x0270:  call   085324fe <+0x55c>
08532217 +0x0275:  test   %al,%al
08532219 +0x0277:  jne    08532257 <+0x2b5>
0853221b +0x0279:  lea    -0x30(%ebp),%eax
0853221e +0x027c:  mov    %eax,(%esp)
08532221 +0x027f:  call   08532396 <+0x3f4>
08532226 +0x0284:  mov    %eax,%ebx
08532228 +0x0286:  lea    -0x25(%ebp),%eax
0853222b +0x0289:  mov    0x8(%ebp),%edx
0853222e +0x028c:  mov    %edx,0x4(%esp)
08532232 +0x0290:  mov    %eax,(%esp)
08532235 +0x0293:  call   085324c4 <+0x522>
0853223a +0x0298:  sub    $0x4,%esp
0853223d +0x029b:  mov    %ebx,0x8(%esp)
08532241 +0x029f:  mov    0xc(%ebp),%eax
08532244 +0x02a2:  mov    %eax,0x4(%esp)
08532248 +0x02a6:  lea    -0x25(%ebp),%eax
0853224b +0x02a9:  mov    %eax,(%esp)
0853224e +0x02ac:  call   085324ea <+0x548>
08532253 +0x02b1:  test   %al,%al
08532255 +0x02b3:  je     0853225e <+0x2bc>
08532257 +0x02b5:  mov    $0x1,%eax
0853225c +0x02ba:  jmp    08532263 <+0x2c1>
0853225e +0x02bc:  mov    $0x0,%eax
08532263 +0x02c1:  test   %al,%al
08532265 +0x02c3:  je     08532300 <+0x35e>
0853226b +0x02c9:  lea    -0x14(%ebp),%eax
0853226e +0x02cc:  mov    %eax,(%esp)
08532271 +0x02cf:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08532276 +0x02d4:  lea    -0x14(%ebp),%eax
08532279 +0x02d7:  mov    %eax,0x8(%esp)
0853227d +0x02db:  mov    0xc(%ebp),%eax
08532280 +0x02de:  mov    %eax,0x4(%esp)
08532284 +0x02e2:  lea    -0x24(%ebp),%eax
08532287 +0x02e5:  mov    %eax,(%esp)
0853228a +0x02e8:  call   08532512 <+0x570>
0853228f +0x02ed:  lea    -0x3c(%ebp),%eax
08532292 +0x02f0:  lea    -0x24(%ebp),%edx
08532295 +0x02f3:  mov    %edx,0xc(%esp)
08532299 +0x02f7:  mov    -0x30(%ebp),%edx
0853229c +0x02fa:  mov    %edx,0x8(%esp)
085322a0 +0x02fe:  mov    0x8(%ebp),%edx
085322a3 +0x0301:  mov    %edx,0x4(%esp)
085322a7 +0x0305:  mov    %eax,(%esp)
085322aa +0x0308:  call   0853254a <+0x5a8>
085322af +0x030d:  sub    $0x4,%esp
085322b2 +0x0310:  mov    -0x3c(%ebp),%eax
085322b5 +0x0313:  mov    %eax,-0x30(%ebp)
085322b8 +0x0316:  lea    -0x24(%ebp),%eax
085322bb +0x0319:  mov    %eax,(%esp)
085322be +0x031c:  call   085321b6 <+0x214>
085322c3 +0x0321:  jmp    085322f5 <+0x353>
085322c5 +0x0323:  mov    %edx,%ebx
085322c7 +0x0325:  mov    %eax,%esi
085322c9 +0x0327:  lea    -0x24(%ebp),%eax
085322cc +0x032a:  mov    %eax,(%esp)
085322cf +0x032d:  call   085321b6 <+0x214>
085322d4 +0x0332:  mov    %esi,%eax
085322d6 +0x0334:  mov    %ebx,%edx
085322d8 +0x0336:  jmp    085322da <+0x338>
085322da +0x0338:  mov    %edx,%ebx
085322dc +0x033a:  mov    %eax,%esi
085322de +0x033c:  lea    -0x14(%ebp),%eax
085322e1 +0x033f:  mov    %eax,(%esp)
085322e4 +0x0342:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085322e9 +0x0347:  mov    %esi,%eax
085322eb +0x0349:  mov    %ebx,%edx
085322ed +0x034b:  mov    %eax,(%esp)
085322f0 +0x034e:  call   08ae3750 <_Unwind_Resume>
085322f5 +0x0353:  lea    -0x14(%ebp),%eax
085322f8 +0x0356:  mov    %eax,(%esp)
085322fb +0x0359:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08532300 +0x035e:  lea    -0x30(%ebp),%eax
08532303 +0x0361:  mov    %eax,(%esp)
08532306 +0x0364:  call   08532396 <+0x3f4>
0853230b +0x0369:  add    $0x4,%eax
0853230e +0x036c:  lea    -0x8(%ebp),%esp
08532311 +0x036f:  add    $0x0,%esp
08532314 +0x0372:  pop    %ebx
08532315 +0x0373:  pop    %esi
08532316 +0x0374:  pop    %ebp
08532317 +0x0375:  ret
08532318 +0x0376:  push   %ebp
08532319 +0x0377:  mov    %esp,%ebp
0853231b +0x0379:  push   %ebx
0853231c +0x037a:  sub    $0x14,%esp
0853231f +0x037d:  mov    0x8(%ebp),%ebx
08532322 +0x0380:  mov    0xc(%ebp),%eax
08532325 +0x0383:  mov    %eax,0x4(%esp)
08532329 +0x0387:  mov    %ebx,(%esp)
0853232c +0x038a:  call   08532590 <+0x5ee>
08532331 +0x038f:  sub    $0x4,%esp
08532334 +0x0392:  mov    %ebx,%eax
08532336 +0x0394:  mov    -0x4(%ebp),%ebx
08532339 +0x0397:  leave
0853233a +0x0398:  ret    $0x4
0853233d +0x039b:  nop
0853233e +0x039c:  push   %ebp
0853233f +0x039d:  mov    %esp,%ebp
08532341 +0x039f:  push   %ebx
08532342 +0x03a0:  sub    $0x14,%esp
08532345 +0x03a3:  mov    0x8(%ebp),%ebx
08532348 +0x03a6:  mov    0xc(%ebp),%eax
0853234b +0x03a9:  mov    %eax,0x4(%esp)
0853234f +0x03ad:  mov    %ebx,(%esp)
08532352 +0x03b0:  call   085325b6 <+0x614>
08532357 +0x03b5:  sub    $0x4,%esp
0853235a +0x03b8:  mov    %ebx,%eax
0853235c +0x03ba:  mov    -0x4(%ebp),%ebx
0853235f +0x03bd:  leave
08532360 +0x03be:  ret    $0x4
08532363 +0x03c1:  nop
08532364 +0x03c2:  push   %ebp
08532365 +0x03c3:  mov    %esp,%ebp
08532367 +0x03c5:  mov    0x8(%ebp),%eax
0853236a +0x03c8:  mov    (%eax),%edx
0853236c +0x03ca:  mov    0xc(%ebp),%eax
0853236f +0x03cd:  mov    (%eax),%eax
08532371 +0x03cf:  cmp    %eax,%edx
08532373 +0x03d1:  setne  %al
08532376 +0x03d4:  pop    %ebp
08532377 +0x03d5:  ret
08532378 +0x03d6:  push   %ebp
08532379 +0x03d7:  mov    %esp,%ebp
0853237b +0x03d9:  sub    $0x18,%esp
0853237e +0x03dc:  mov    0x8(%ebp),%eax
08532381 +0x03df:  mov    (%eax),%eax
08532383 +0x03e1:  mov    %eax,(%esp)
08532386 +0x03e4:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0853238b +0x03e9:  mov    0x8(%ebp),%edx
0853238e +0x03ec:  mov    %eax,(%edx)
08532390 +0x03ee:  mov    0x8(%ebp),%eax
08532393 +0x03f1:  leave
08532394 +0x03f2:  ret
08532395 +0x03f3:  nop
08532396 +0x03f4:  push   %ebp
08532397 +0x03f5:  mov    %esp,%ebp
08532399 +0x03f7:  mov    0x8(%ebp),%eax
0853239c +0x03fa:  mov    (%eax),%eax
0853239e +0x03fc:  add    $0x10,%eax
085323a1 +0x03ff:  pop    %ebp
085323a2 +0x0400:  ret
085323a3 +0x0401:  nop
085323a4 +0x0402:  push   %ebp
085323a5 +0x0403:  mov    %esp,%ebp
085323a7 +0x0405:  sub    $0x18,%esp
085323aa +0x0408:  mov    0x8(%ebp),%eax
085323ad +0x040b:  mov    %eax,(%esp)
085323b0 +0x040e:  call   085325dc <+0x63a>
085323b5 +0x0413:  leave
085323b6 +0x0414:  ret
085323b7 +0x0415:  nop
085323b8 +0x0416:  push   %ebp
085323b9 +0x0417:  mov    %esp,%ebp
085323bb +0x0419:  sub    $0x18,%esp
085323be +0x041c:  mov    0x8(%ebp),%eax
085323c1 +0x041f:  mov    %eax,(%esp)
085323c4 +0x0422:  call   0853262c <+0x68a>
085323c9 +0x0427:  leave
085323ca +0x0428:  ret
085323cb +0x0429:  nop
085323cc +0x042a:  push   %ebp
085323cd +0x042b:  mov    %esp,%ebp
085323cf +0x042d:  sub    $0x28,%esp
085323d2 +0x0430:  jmp    08532414 <+0x472>
085323d4 +0x0432:  mov    0xc(%ebp),%eax
085323d7 +0x0435:  mov    %eax,(%esp)
085323da +0x0438:  call   08532631 <+0x68f>
085323df +0x043d:  mov    %eax,0x4(%esp)
085323e3 +0x0441:  mov    0x8(%ebp),%eax
085323e6 +0x0444:  mov    %eax,(%esp)
085323e9 +0x0447:  call   085323cc <+0x42a>
085323ee +0x044c:  mov    0xc(%ebp),%eax
085323f1 +0x044f:  mov    %eax,(%esp)
085323f4 +0x0452:  call   0853263c <+0x69a>
085323f9 +0x0457:  mov    %eax,-0xc(%ebp)
085323fc +0x045a:  mov    0xc(%ebp),%eax
085323ff +0x045d:  mov    %eax,0x4(%esp)
08532403 +0x0461:  mov    0x8(%ebp),%eax
08532406 +0x0464:  mov    %eax,(%esp)
08532409 +0x0467:  call   08532648 <+0x6a6>
0853240e +0x046c:  mov    -0xc(%ebp),%eax
08532411 +0x046f:  mov    %eax,0xc(%ebp)
08532414 +0x0472:  cmpl   $0x0,0xc(%ebp)
08532418 +0x0476:  setne  %al
0853241b +0x0479:  test   %al,%al
0853241d +0x047b:  jne    085323d4 <+0x432>
0853241f +0x047d:  leave
08532420 +0x047e:  ret
08532421 +0x047f:  nop
08532422 +0x0480:  push   %ebp
08532423 +0x0481:  mov    %esp,%ebp
08532425 +0x0483:  mov    0x8(%ebp),%eax
08532428 +0x0486:  mov    0x8(%eax),%eax
0853242b +0x0489:  pop    %ebp
0853242c +0x048a:  ret
0853242d +0x048b:  nop
0853242e +0x048c:  push   %ebp
0853242f +0x048d:  mov    %esp,%ebp
08532431 +0x048f:  sub    $0x28,%esp
08532434 +0x0492:  jmp    08532452 <+0x4b0>
08532436 +0x0494:  mov    0x8(%ebp),%eax
08532439 +0x0497:  mov    %eax,(%esp)
0853243c +0x049a:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08532441 +0x049f:  add    %eax,%eax
08532443 +0x04a1:  mov    %eax,0x4(%esp)
08532447 +0x04a5:  mov    0x8(%ebp),%eax
0853244a +0x04a8:  mov    %eax,(%esp)
0853244d +0x04ab:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08532452 +0x04b0:  movl   $0xe0,0x4(%esp)
0853245a +0x04b8:  mov    0x8(%ebp),%eax
0853245d +0x04bb:  mov    %eax,(%esp)
08532460 +0x04be:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08532465 +0x04c3:  xor    $0x1,%eax
08532468 +0x04c6:  test   %al,%al
0853246a +0x04c8:  jne    08532436 <+0x494>
0853246c +0x04ca:  mov    0x8(%ebp),%eax
0853246f +0x04cd:  mov    0x8(%eax),%eax
08532472 +0x04d0:  mov    %eax,%edx
08532474 +0x04d2:  mov    0x8(%ebp),%eax
08532477 +0x04d5:  mov    0xc(%eax),%eax
0853247a +0x04d8:  lea    (%edx,%eax,1),%eax
0853247d +0x04db:  mov    %eax,-0xc(%ebp)
08532480 +0x04de:  movl   $0xe0,0x4(%esp)
08532488 +0x04e6:  mov    0x8(%ebp),%eax
0853248b +0x04e9:  mov    %eax,(%esp)
0853248e +0x04ec:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08532493 +0x04f1:  mov    -0xc(%ebp),%eax
08532496 +0x04f4:  leave
08532497 +0x04f5:  ret
08532498 +0x04f6:  push   %ebp
08532499 +0x04f7:  mov    %esp,%ebp
0853249b +0x04f9:  push   %ebx
0853249c +0x04fa:  sub    $0x14,%esp
0853249f +0x04fd:  mov    0x8(%ebp),%ebx
085324a2 +0x0500:  mov    0xc(%ebp),%eax
085324a5 +0x0503:  mov    0x10(%ebp),%edx
085324a8 +0x0506:  mov    %edx,0x8(%esp)
085324ac +0x050a:  mov    %eax,0x4(%esp)
085324b0 +0x050e:  mov    %ebx,(%esp)
085324b3 +0x0511:  call   0853267c <+0x6da>
085324b8 +0x0516:  sub    $0x4,%esp
085324bb +0x0519:  mov    %ebx,%eax
085324bd +0x051b:  mov    -0x4(%ebp),%ebx
085324c0 +0x051e:  leave
085324c1 +0x051f:  ret    $0x4
085324c4 +0x0522:  push   %ebp
085324c5 +0x0523:  mov    %esp,%ebp
085324c7 +0x0525:  push   %ebx
085324c8 +0x0526:  sub    $0x14,%esp
085324cb +0x0529:  mov    0x8(%ebp),%ebx
085324ce +0x052c:  mov    0xc(%ebp),%eax
085324d1 +0x052f:  mov    %eax,0x4(%esp)
085324d5 +0x0533:  mov    %ebx,(%esp)
085324d8 +0x0536:  call   085326ce <+0x72c>
085324dd +0x053b:  sub    $0x4,%esp
085324e0 +0x053e:  mov    %ebx,%eax
085324e2 +0x0540:  mov    -0x4(%ebp),%ebx
085324e5 +0x0543:  leave
085324e6 +0x0544:  ret    $0x4
085324e9 +0x0547:  nop
085324ea +0x0548:  push   %ebp
085324eb +0x0549:  mov    %esp,%ebp
085324ed +0x054b:  mov    0xc(%ebp),%eax
085324f0 +0x054e:  mov    (%eax),%edx
085324f2 +0x0550:  mov    0x10(%ebp),%eax
085324f5 +0x0553:  mov    (%eax),%eax
085324f7 +0x0555:  cmp    %eax,%edx
085324f9 +0x0557:  setb   %al
085324fc +0x055a:  pop    %ebp
085324fd +0x055b:  ret
085324fe +0x055c:  push   %ebp
085324ff +0x055d:  mov    %esp,%ebp
08532501 +0x055f:  mov    0x8(%ebp),%eax
08532504 +0x0562:  mov    (%eax),%edx
08532506 +0x0564:  mov    0xc(%ebp),%eax
08532509 +0x0567:  mov    (%eax),%eax
0853250b +0x0569:  cmp    %eax,%edx
0853250d +0x056b:  sete   %al
08532510 +0x056e:  pop    %ebp
08532511 +0x056f:  ret
08532512 +0x0570:  push   %ebp
08532513 +0x0571:  mov    %esp,%ebp
08532515 +0x0573:  sub    $0x18,%esp
08532518 +0x0576:  mov    0xc(%ebp),%eax
0853251b +0x0579:  mov    %eax,(%esp)
0853251e +0x057c:  call   085326d8 <+0x736>
08532523 +0x0581:  mov    (%eax),%edx
08532525 +0x0583:  mov    0x8(%ebp),%eax
08532528 +0x0586:  mov    %edx,(%eax)
0853252a +0x0588:  mov    0x10(%ebp),%eax
0853252d +0x058b:  mov    %eax,(%esp)
08532530 +0x058e:  call   080eb2cc <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xf05>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xf05
08532535 +0x0593:  mov    0x8(%ebp),%edx
08532538 +0x0596:  add    $0x4,%edx
0853253b +0x0599:  mov    %eax,0x4(%esp)
0853253f +0x059d:  mov    %edx,(%esp)
08532542 +0x05a0:  call   080eae0a <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xa43>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xa43
08532547 +0x05a5:  leave
08532548 +0x05a6:  ret
08532549 +0x05a7:  nop
0853254a +0x05a8:  push   %ebp
0853254b +0x05a9:  mov    %esp,%ebp
0853254d +0x05ab:  push   %ebx
0853254e +0x05ac:  sub    $0x24,%esp
08532551 +0x05af:  mov    0x8(%ebp),%ebx
08532554 +0x05b2:  lea    0x10(%ebp),%eax
08532557 +0x05b5:  mov    %eax,0x4(%esp)
0853255b +0x05b9:  lea    -0xc(%ebp),%eax
0853255e +0x05bc:  mov    %eax,(%esp)
08532561 +0x05bf:  call   085326e0 <+0x73e>
08532566 +0x05c4:  mov    0xc(%ebp),%eax
08532569 +0x05c7:  mov    0x14(%ebp),%edx
0853256c +0x05ca:  mov    %edx,0xc(%esp)
08532570 +0x05ce:  mov    -0xc(%ebp),%edx
08532573 +0x05d1:  mov    %edx,0x8(%esp)
08532577 +0x05d5:  mov    %eax,0x4(%esp)
0853257b +0x05d9:  mov    %ebx,(%esp)
0853257e +0x05dc:  call   085326f0 <+0x74e>
08532583 +0x05e1:  sub    $0x4,%esp
08532586 +0x05e4:  mov    %ebx,%eax
08532588 +0x05e6:  mov    -0x4(%ebp),%ebx
0853258b +0x05e9:  leave
0853258c +0x05ea:  ret    $0x4
0853258f +0x05ed:  nop
08532590 +0x05ee:  push   %ebp
08532591 +0x05ef:  mov    %esp,%ebp
08532593 +0x05f1:  push   %ebx
08532594 +0x05f2:  sub    $0x14,%esp
08532597 +0x05f5:  mov    0x8(%ebp),%ebx
0853259a +0x05f8:  mov    0xc(%ebp),%eax
0853259d +0x05fb:  mov    0xc(%eax),%eax
085325a0 +0x05fe:  mov    %eax,0x4(%esp)
085325a4 +0x0602:  mov    %ebx,(%esp)
085325a7 +0x0605:  call   08532ab6 <+0xb14>
085325ac +0x060a:  mov    %ebx,%eax
085325ae +0x060c:  add    $0x14,%esp
085325b1 +0x060f:  pop    %ebx
085325b2 +0x0610:  pop    %ebp
085325b3 +0x0611:  ret    $0x4
085325b6 +0x0614:  push   %ebp
085325b7 +0x0615:  mov    %esp,%ebp
085325b9 +0x0617:  push   %ebx
085325ba +0x0618:  sub    $0x14,%esp
085325bd +0x061b:  mov    0x8(%ebp),%ebx
085325c0 +0x061e:  mov    0xc(%ebp),%eax
085325c3 +0x0621:  add    $0x4,%eax
085325c6 +0x0624:  mov    %eax,0x4(%esp)
085325ca +0x0628:  mov    %ebx,(%esp)
085325cd +0x062b:  call   08532ab6 <+0xb14>
085325d2 +0x0630:  mov    %ebx,%eax
085325d4 +0x0632:  add    $0x14,%esp
085325d7 +0x0635:  pop    %ebx
085325d8 +0x0636:  pop    %ebp
085325d9 +0x0637:  ret    $0x4
085325dc +0x063a:  push   %ebp
085325dd +0x063b:  mov    %esp,%ebp
085325df +0x063d:  sub    $0x18,%esp
085325e2 +0x0640:  mov    0x8(%ebp),%eax
085325e5 +0x0643:  mov    %eax,(%esp)
085325e8 +0x0646:  call   08532ac4 <+0xb22>
085325ed +0x064b:  mov    0x8(%ebp),%eax
085325f0 +0x064e:  movl   $0x0,0x4(%eax)
085325f7 +0x0655:  mov    0x8(%ebp),%eax
085325fa +0x0658:  movl   $0x0,0x8(%eax)
08532601 +0x065f:  mov    0x8(%ebp),%eax
08532604 +0x0662:  movl   $0x0,0xc(%eax)
0853260b +0x0669:  mov    0x8(%ebp),%eax
0853260e +0x066c:  movl   $0x0,0x10(%eax)
08532615 +0x0673:  mov    0x8(%ebp),%eax
08532618 +0x0676:  movl   $0x0,0x14(%eax)
0853261f +0x067d:  mov    0x8(%ebp),%eax
08532622 +0x0680:  mov    %eax,(%esp)
08532625 +0x0683:  call   08532ad8 <+0xb36>
0853262a +0x0688:  leave
0853262b +0x0689:  ret
0853262c +0x068a:  push   %ebp
0853262d +0x068b:  mov    %esp,%ebp
0853262f +0x068d:  pop    %ebp
08532630 +0x068e:  ret
08532631 +0x068f:  push   %ebp
08532632 +0x0690:  mov    %esp,%ebp
08532634 +0x0692:  mov    0x8(%ebp),%eax
08532637 +0x0695:  mov    0xc(%eax),%eax
0853263a +0x0698:  pop    %ebp
0853263b +0x0699:  ret
0853263c +0x069a:  push   %ebp
0853263d +0x069b:  mov    %esp,%ebp
0853263f +0x069d:  mov    0x8(%ebp),%eax
08532642 +0x06a0:  mov    0x8(%eax),%eax
08532645 +0x06a3:  pop    %ebp
08532646 +0x06a4:  ret
08532647 +0x06a5:  nop
08532648 +0x06a6:  push   %ebp
08532649 +0x06a7:  mov    %esp,%ebp
0853264b +0x06a9:  sub    $0x18,%esp
0853264e +0x06ac:  mov    0x8(%ebp),%eax
08532651 +0x06af:  mov    %eax,(%esp)
08532654 +0x06b2:  call   08532b0a <+0xb68>
08532659 +0x06b7:  mov    0xc(%ebp),%edx
0853265c +0x06ba:  mov    %edx,0x4(%esp)
08532660 +0x06be:  mov    %eax,(%esp)
08532663 +0x06c1:  call   08532b28 <+0xb86>
08532668 +0x06c6:  mov    0xc(%ebp),%eax
0853266b +0x06c9:  mov    %eax,0x4(%esp)
0853266f +0x06cd:  mov    0x8(%ebp),%eax
08532672 +0x06d0:  mov    %eax,(%esp)
08532675 +0x06d3:  call   08532b3c <+0xb9a>
0853267a +0x06d8:  leave
0853267b +0x06d9:  ret
0853267c +0x06da:  push   %ebp
0853267d +0x06db:  mov    %esp,%ebp
0853267f +0x06dd:  push   %esi
08532680 +0x06de:  push   %ebx
08532681 +0x06df:  sub    $0x20,%esp
08532684 +0x06e2:  mov    0x8(%ebp),%esi
08532687 +0x06e5:  mov    0xc(%ebp),%eax
0853268a +0x06e8:  mov    %eax,(%esp)
0853268d +0x06eb:  call   08532b5e <+0xbbc>
08532692 +0x06f0:  mov    %eax,%ebx
08532694 +0x06f2:  mov    0xc(%ebp),%eax
08532697 +0x06f5:  mov    %eax,(%esp)
0853269a +0x06f8:  call   08532422 <+0x480>
0853269f +0x06fd:  mov    0x10(%ebp),%edx
085326a2 +0x0700:  mov    %edx,0x10(%esp)
085326a6 +0x0704:  mov    %ebx,0xc(%esp)
085326aa +0x0708:  mov    %eax,0x8(%esp)
085326ae +0x070c:  mov    0xc(%ebp),%eax
085326b1 +0x070f:  mov    %eax,0x4(%esp)
085326b5 +0x0713:  mov    %esi,(%esp)
085326b8 +0x0716:  call   08532b6a <+0xbc8>
085326bd +0x071b:  sub    $0x4,%esp
085326c0 +0x071e:  mov    %esi,%eax
085326c2 +0x0720:  lea    -0x8(%ebp),%esp
085326c5 +0x0723:  add    $0x0,%esp
085326c8 +0x0726:  pop    %ebx
085326c9 +0x0727:  pop    %esi
085326ca +0x0728:  pop    %ebp
085326cb +0x0729:  ret    $0x4
085326ce +0x072c:  push   %ebp
085326cf +0x072d:  mov    %esp,%ebp
085326d1 +0x072f:  mov    0x8(%ebp),%eax
085326d4 +0x0732:  pop    %ebp
085326d5 +0x0733:  ret    $0x4
085326d8 +0x0736:  push   %ebp
085326d9 +0x0737:  mov    %esp,%ebp
085326db +0x0739:  mov    0x8(%ebp),%eax
085326de +0x073c:  pop    %ebp
085326df +0x073d:  ret
085326e0 +0x073e:  push   %ebp
085326e1 +0x073f:  mov    %esp,%ebp
085326e3 +0x0741:  mov    0xc(%ebp),%eax
085326e6 +0x0744:  mov    (%eax),%edx
085326e8 +0x0746:  mov    0x8(%ebp),%eax
085326eb +0x0749:  mov    %edx,(%eax)
085326ed +0x074b:  pop    %ebp
085326ee +0x074c:  ret
085326ef +0x074d:  nop
085326f0 +0x074e:  push   %ebp
085326f1 +0x074f:  mov    %esp,%ebp
085326f3 +0x0751:  push   %esi
085326f4 +0x0752:  push   %ebx
085326f5 +0x0753:  sub    $0x50,%esp
085326f8 +0x0756:  mov    0x8(%ebp),%ebx
085326fb +0x0759:  mov    0x10(%ebp),%esi
085326fe +0x075c:  mov    0xc(%ebp),%eax
08532701 +0x075f:  mov    %eax,(%esp)
08532704 +0x0762:  call   08532b5e <+0xbbc>
08532709 +0x0767:  cmp    %eax,%esi
0853270b +0x0769:  sete   %al
0853270e +0x076c:  test   %al,%al
08532710 +0x076e:  je     085327d2 <+0x830>
08532716 +0x0774:  mov    0xc(%ebp),%eax
08532719 +0x0777:  mov    %eax,(%esp)
0853271c +0x077a:  call   08532c1c <+0xc7a>
08532721 +0x077f:  test   %eax,%eax
08532723 +0x0781:  je     0853276c <+0x7ca>
08532725 +0x0783:  mov    0x14(%ebp),%eax
08532728 +0x0786:  mov    %eax,0x4(%esp)
0853272c +0x078a:  lea    -0x29(%ebp),%eax
0853272f +0x078d:  mov    %eax,(%esp)
08532732 +0x0790:  call   08532c14 <+0xc72>
08532737 +0x0795:  mov    %eax,%esi
08532739 +0x0797:  mov    0xc(%ebp),%eax
0853273c +0x079a:  mov    %eax,(%esp)
0853273f +0x079d:  call   08532be6 <+0xc44>
08532744 +0x07a2:  mov    (%eax),%eax
08532746 +0x07a4:  mov    %eax,(%esp)
08532749 +0x07a7:  call   08532bf1 <+0xc4f>
0853274e +0x07ac:  mov    0xc(%ebp),%edx
08532751 +0x07af:  mov    %esi,0x8(%esp)
08532755 +0x07b3:  mov    %eax,0x4(%esp)
08532759 +0x07b7:  mov    %edx,(%esp)
0853275c +0x07ba:  call   085324ea <+0x548>
08532761 +0x07bf:  test   %al,%al
08532763 +0x07c1:  je     0853276c <+0x7ca>
08532765 +0x07c3:  mov    $0x1,%eax
0853276a +0x07c8:  jmp    08532771 <+0x7cf>
0853276c +0x07ca:  mov    $0x0,%eax
08532771 +0x07cf:  test   %al,%al
08532773 +0x07d1:  je     085327ac <+0x80a>
08532775 +0x07d3:  mov    0xc(%ebp),%eax
08532778 +0x07d6:  mov    %eax,(%esp)
0853277b +0x07d9:  call   08532be6 <+0xc44>
08532780 +0x07de:  mov    (%eax),%eax
08532782 +0x07e0:  mov    0x14(%ebp),%edx
08532785 +0x07e3:  mov    %edx,0x10(%esp)
08532789 +0x07e7:  mov    %eax,0xc(%esp)
0853278d +0x07eb:  movl   $0x0,0x8(%esp)
08532795 +0x07f3:  mov    0xc(%ebp),%eax
08532798 +0x07f6:  mov    %eax,0x4(%esp)
0853279c +0x07fa:  mov    %ebx,(%esp)
0853279f +0x07fd:  call   08532c28 <+0xc86>
085327a4 +0x0802:  sub    $0x4,%esp
085327a7 +0x0805:  jmp    08532aa7 <+0xb05>
085327ac +0x080a:  lea    -0x28(%ebp),%eax
085327af +0x080d:  mov    0x14(%ebp),%edx
085327b2 +0x0810:  mov    %edx,0x8(%esp)
085327b6 +0x0814:  mov    0xc(%ebp),%edx
085327b9 +0x0817:  mov    %edx,0x4(%esp)
085327bd +0x081b:  mov    %eax,(%esp)
085327c0 +0x081e:  call   08532cf0 <+0xd4e>
085327c5 +0x0823:  sub    $0x4,%esp
085327c8 +0x0826:  mov    -0x28(%ebp),%eax
085327cb +0x0829:  mov    %eax,(%ebx)
085327cd +0x082b:  jmp    08532aa7 <+0xb05>
085327d2 +0x0830:  mov    0x10(%ebp),%eax
085327d5 +0x0833:  mov    %eax,(%esp)
085327d8 +0x0836:  call   08532bf1 <+0xc4f>
085327dd +0x083b:  mov    %eax,%esi
085327df +0x083d:  mov    0x14(%ebp),%eax
085327e2 +0x0840:  mov    %eax,0x4(%esp)
085327e6 +0x0844:  lea    -0x1e(%ebp),%eax
085327e9 +0x0847:  mov    %eax,(%esp)
085327ec +0x084a:  call   08532c14 <+0xc72>
085327f1 +0x084f:  mov    0xc(%ebp),%edx
085327f4 +0x0852:  mov    %esi,0x8(%esp)
085327f8 +0x0856:  mov    %eax,0x4(%esp)
085327fc +0x085a:  mov    %edx,(%esp)
085327ff +0x085d:  call   085324ea <+0x548>
08532804 +0x0862:  test   %al,%al
08532806 +0x0864:  je     0853293e <+0x99c>
0853280c +0x086a:  mov    0x10(%ebp),%eax
0853280f +0x086d:  mov    %eax,-0x30(%ebp)
08532812 +0x0870:  mov    0x10(%ebp),%esi
08532815 +0x0873:  mov    0xc(%ebp),%eax
08532818 +0x0876:  mov    %eax,(%esp)
0853281b +0x0879:  call   08532ec0 <+0xf1e>
08532820 +0x087e:  mov    (%eax),%eax
08532822 +0x0880:  cmp    %eax,%esi
08532824 +0x0882:  sete   %al
08532827 +0x0885:  test   %al,%al
08532829 +0x0887:  je     0853286b <+0x8c9>
0853282b +0x0889:  mov    0xc(%ebp),%eax
0853282e +0x088c:  mov    %eax,(%esp)
08532831 +0x088f:  call   08532ec0 <+0xf1e>
08532836 +0x0894:  mov    (%eax),%esi
08532838 +0x0896:  mov    0xc(%ebp),%eax
0853283b +0x0899:  mov    %eax,(%esp)
0853283e +0x089c:  call   08532ec0 <+0xf1e>
08532843 +0x08a1:  mov    (%eax),%eax
08532845 +0x08a3:  mov    0x14(%ebp),%edx
08532848 +0x08a6:  mov    %edx,0x10(%esp)
0853284c +0x08aa:  mov    %esi,0xc(%esp)
08532850 +0x08ae:  mov    %eax,0x8(%esp)
08532854 +0x08b2:  mov    0xc(%ebp),%eax
08532857 +0x08b5:  mov    %eax,0x4(%esp)
0853285b +0x08b9:  mov    %ebx,(%esp)
0853285e +0x08bc:  call   08532c28 <+0xc86>
08532863 +0x08c1:  sub    $0x4,%esp
08532866 +0x08c4:  jmp    08532aa7 <+0xb05>
0853286b +0x08c9:  mov    0x14(%ebp),%eax
0853286e +0x08cc:  mov    %eax,0x4(%esp)
08532872 +0x08d0:  lea    -0x1d(%ebp),%eax
08532875 +0x08d3:  mov    %eax,(%esp)
08532878 +0x08d6:  call   08532c14 <+0xc72>
0853287d +0x08db:  mov    %eax,%esi
0853287f +0x08dd:  lea    -0x30(%ebp),%eax
08532882 +0x08e0:  mov    %eax,(%esp)
08532885 +0x08e3:  call   08532ecc <+0xf2a>
0853288a +0x08e8:  mov    (%eax),%eax
0853288c +0x08ea:  mov    %eax,(%esp)
0853288f +0x08ed:  call   08532bf1 <+0xc4f>
08532894 +0x08f2:  mov    0xc(%ebp),%edx
08532897 +0x08f5:  mov    %esi,0x8(%esp)
0853289b +0x08f9:  mov    %eax,0x4(%esp)
0853289f +0x08fd:  mov    %edx,(%esp)
085328a2 +0x0900:  call   085324ea <+0x548>
085328a7 +0x0905:  test   %al,%al
085328a9 +0x0907:  je     08532918 <+0x976>
085328ab +0x0909:  mov    -0x30(%ebp),%eax
085328ae +0x090c:  mov    %eax,(%esp)
085328b1 +0x090f:  call   08532ee9 <+0xf47>
085328b6 +0x0914:  test   %eax,%eax
085328b8 +0x0916:  sete   %al
085328bb +0x0919:  test   %al,%al
085328bd +0x091b:  je     085328ec <+0x94a>
085328bf +0x091d:  mov    -0x30(%ebp),%eax
085328c2 +0x0920:  mov    0x14(%ebp),%edx
085328c5 +0x0923:  mov    %edx,0x10(%esp)
085328c9 +0x0927:  mov    %eax,0xc(%esp)
085328cd +0x092b:  movl   $0x0,0x8(%esp)
085328d5 +0x0933:  mov    0xc(%ebp),%eax
085328d8 +0x0936:  mov    %eax,0x4(%esp)
085328dc +0x093a:  mov    %ebx,(%esp)
085328df +0x093d:  call   08532c28 <+0xc86>
085328e4 +0x0942:  sub    $0x4,%esp
085328e7 +0x0945:  jmp    08532aa7 <+0xb05>
085328ec +0x094a:  mov    0x10(%ebp),%edx
085328ef +0x094d:  mov    0x10(%ebp),%eax
085328f2 +0x0950:  mov    0x14(%ebp),%ecx
085328f5 +0x0953:  mov    %ecx,0x10(%esp)
085328f9 +0x0957:  mov    %edx,0xc(%esp)
085328fd +0x095b:  mov    %eax,0x8(%esp)
08532901 +0x095f:  mov    0xc(%ebp),%eax
08532904 +0x0962:  mov    %eax,0x4(%esp)
08532908 +0x0966:  mov    %ebx,(%esp)
0853290b +0x0969:  call   08532c28 <+0xc86>
08532910 +0x096e:  sub    $0x4,%esp
08532913 +0x0971:  jmp    08532aa7 <+0xb05>
08532918 +0x0976:  lea    -0x1c(%ebp),%eax
0853291b +0x0979:  mov    0x14(%ebp),%edx
0853291e +0x097c:  mov    %edx,0x8(%esp)
08532922 +0x0980:  mov    0xc(%ebp),%edx
08532925 +0x0983:  mov    %edx,0x4(%esp)
08532929 +0x0987:  mov    %eax,(%esp)
0853292c +0x098a:  call   08532cf0 <+0xd4e>
08532931 +0x098f:  sub    $0x4,%esp
08532934 +0x0992:  mov    -0x1c(%ebp),%eax
08532937 +0x0995:  mov    %eax,(%ebx)
08532939 +0x0997:  jmp    08532aa7 <+0xb05>
0853293e +0x099c:  mov    0x14(%ebp),%eax
08532941 +0x099f:  mov    %eax,0x4(%esp)
08532945 +0x09a3:  lea    -0x12(%ebp),%eax
08532948 +0x09a6:  mov    %eax,(%esp)
0853294b +0x09a9:  call   08532c14 <+0xc72>
08532950 +0x09ae:  mov    %eax,%esi
08532952 +0x09b0:  mov    0x10(%ebp),%eax
08532955 +0x09b3:  mov    %eax,(%esp)
08532958 +0x09b6:  call   08532bf1 <+0xc4f>
0853295d +0x09bb:  mov    0xc(%ebp),%edx
08532960 +0x09be:  mov    %esi,0x8(%esp)
08532964 +0x09c2:  mov    %eax,0x4(%esp)
08532968 +0x09c6:  mov    %edx,(%esp)
0853296b +0x09c9:  call   085324ea <+0x548>
08532970 +0x09ce:  test   %al,%al
08532972 +0x09d0:  je     08532a98 <+0xaf6>
08532978 +0x09d6:  mov    0x10(%ebp),%eax
0853297b +0x09d9:  mov    %eax,-0x34(%ebp)
0853297e +0x09dc:  mov    0x10(%ebp),%esi
08532981 +0x09df:  mov    0xc(%ebp),%eax
08532984 +0x09e2:  mov    %eax,(%esp)
08532987 +0x09e5:  call   08532be6 <+0xc44>
0853298c +0x09ea:  mov    (%eax),%eax
0853298e +0x09ec:  cmp    %eax,%esi
08532990 +0x09ee:  sete   %al
08532993 +0x09f1:  test   %al,%al
08532995 +0x09f3:  je     085329ce <+0xa2c>
08532997 +0x09f5:  mov    0xc(%ebp),%eax
0853299a +0x09f8:  mov    %eax,(%esp)
0853299d +0x09fb:  call   08532be6 <+0xc44>
085329a2 +0x0a00:  mov    (%eax),%eax
085329a4 +0x0a02:  mov    0x14(%ebp),%edx
085329a7 +0x0a05:  mov    %edx,0x10(%esp)
085329ab +0x0a09:  mov    %eax,0xc(%esp)
085329af +0x0a0d:  movl   $0x0,0x8(%esp)
085329b7 +0x0a15:  mov    0xc(%ebp),%eax
085329ba +0x0a18:  mov    %eax,0x4(%esp)
085329be +0x0a1c:  mov    %ebx,(%esp)
085329c1 +0x0a1f:  call   08532c28 <+0xc86>
085329c6 +0x0a24:  sub    $0x4,%esp
085329c9 +0x0a27:  jmp    08532aa7 <+0xb05>
085329ce +0x0a2c:  lea    -0x34(%ebp),%eax
085329d1 +0x0a2f:  mov    %eax,(%esp)
085329d4 +0x0a32:  call   08532ef4 <+0xf52>
085329d9 +0x0a37:  mov    (%eax),%eax
085329db +0x0a39:  mov    %eax,(%esp)
085329de +0x0a3c:  call   08532bf1 <+0xc4f>
085329e3 +0x0a41:  mov    %eax,%esi
085329e5 +0x0a43:  mov    0x14(%ebp),%eax
085329e8 +0x0a46:  mov    %eax,0x4(%esp)
085329ec +0x0a4a:  lea    -0x11(%ebp),%eax
085329ef +0x0a4d:  mov    %eax,(%esp)
085329f2 +0x0a50:  call   08532c14 <+0xc72>
085329f7 +0x0a55:  mov    0xc(%ebp),%edx
085329fa +0x0a58:  mov    %esi,0x8(%esp)
085329fe +0x0a5c:  mov    %eax,0x4(%esp)
08532a02 +0x0a60:  mov    %edx,(%esp)
08532a05 +0x0a63:  call   085324ea <+0x548>
08532a0a +0x0a68:  test   %al,%al
08532a0c +0x0a6a:  je     08532a75 <+0xad3>
08532a0e +0x0a6c:  mov    0x10(%ebp),%eax
08532a11 +0x0a6f:  mov    %eax,(%esp)
08532a14 +0x0a72:  call   08532ee9 <+0xf47>
08532a19 +0x0a77:  test   %eax,%eax
08532a1b +0x0a79:  sete   %al
08532a1e +0x0a7c:  test   %al,%al
08532a20 +0x0a7e:  je     08532a4c <+0xaaa>
08532a22 +0x0a80:  mov    0x10(%ebp),%eax
08532a25 +0x0a83:  mov    0x14(%ebp),%edx
08532a28 +0x0a86:  mov    %edx,0x10(%esp)
08532a2c +0x0a8a:  mov    %eax,0xc(%esp)
08532a30 +0x0a8e:  movl   $0x0,0x8(%esp)
08532a38 +0x0a96:  mov    0xc(%ebp),%eax
08532a3b +0x0a99:  mov    %eax,0x4(%esp)
08532a3f +0x0a9d:  mov    %ebx,(%esp)
08532a42 +0x0aa0:  call   08532c28 <+0xc86>
08532a47 +0x0aa5:  sub    $0x4,%esp
08532a4a +0x0aa8:  jmp    08532aa7 <+0xb05>
08532a4c +0x0aaa:  mov    -0x34(%ebp),%edx
08532a4f +0x0aad:  mov    -0x34(%ebp),%eax
08532a52 +0x0ab0:  mov    0x14(%ebp),%ecx
08532a55 +0x0ab3:  mov    %ecx,0x10(%esp)
08532a59 +0x0ab7:  mov    %edx,0xc(%esp)
08532a5d +0x0abb:  mov    %eax,0x8(%esp)
08532a61 +0x0abf:  mov    0xc(%ebp),%eax
08532a64 +0x0ac2:  mov    %eax,0x4(%esp)
08532a68 +0x0ac6:  mov    %ebx,(%esp)
08532a6b +0x0ac9:  call   08532c28 <+0xc86>
08532a70 +0x0ace:  sub    $0x4,%esp
08532a73 +0x0ad1:  jmp    08532aa7 <+0xb05>
08532a75 +0x0ad3:  lea    -0x10(%ebp),%eax
08532a78 +0x0ad6:  mov    0x14(%ebp),%edx
08532a7b +0x0ad9:  mov    %edx,0x8(%esp)
08532a7f +0x0add:  mov    0xc(%ebp),%edx
08532a82 +0x0ae0:  mov    %edx,0x4(%esp)
08532a86 +0x0ae4:  mov    %eax,(%esp)
08532a89 +0x0ae7:  call   08532cf0 <+0xd4e>
08532a8e +0x0aec:  sub    $0x4,%esp
08532a91 +0x0aef:  mov    -0x10(%ebp),%eax
08532a94 +0x0af2:  mov    %eax,(%ebx)
08532a96 +0x0af4:  jmp    08532aa7 <+0xb05>
08532a98 +0x0af6:  mov    0x10(%ebp),%eax
08532a9b +0x0af9:  mov    %eax,0x4(%esp)
08532a9f +0x0afd:  mov    %ebx,(%esp)
08532aa2 +0x0b00:  call   08532ab6 <+0xb14>
08532aa7 +0x0b05:  mov    %ebx,%eax
08532aa9 +0x0b07:  lea    -0x8(%ebp),%esp
08532aac +0x0b0a:  add    $0x0,%esp
08532aaf +0x0b0d:  pop    %ebx
08532ab0 +0x0b0e:  pop    %esi
08532ab1 +0x0b0f:  pop    %ebp
08532ab2 +0x0b10:  ret    $0x4
08532ab5 +0x0b13:  nop
08532ab6 +0x0b14:  push   %ebp
08532ab7 +0x0b15:  mov    %esp,%ebp
08532ab9 +0x0b17:  mov    0xc(%ebp),%edx
08532abc +0x0b1a:  mov    0x8(%ebp),%eax
08532abf +0x0b1d:  mov    %edx,(%eax)
08532ac1 +0x0b1f:  pop    %ebp
08532ac2 +0x0b20:  ret
08532ac3 +0x0b21:  nop
08532ac4 +0x0b22:  push   %ebp
08532ac5 +0x0b23:  mov    %esp,%ebp
08532ac7 +0x0b25:  sub    $0x18,%esp
08532aca +0x0b28:  mov    0x8(%ebp),%eax
08532acd +0x0b2b:  mov    %eax,(%esp)
08532ad0 +0x0b2e:  call   08532f12 <+0xf70>
08532ad5 +0x0b33:  leave
08532ad6 +0x0b34:  ret
08532ad7 +0x0b35:  nop
08532ad8 +0x0b36:  push   %ebp
08532ad9 +0x0b37:  mov    %esp,%ebp
08532adb +0x0b39:  mov    0x8(%ebp),%eax
08532ade +0x0b3c:  movl   $0x0,0x4(%eax)
08532ae5 +0x0b43:  mov    0x8(%ebp),%eax
08532ae8 +0x0b46:  movl   $0x0,0x8(%eax)
08532aef +0x0b4d:  mov    0x8(%ebp),%eax
08532af2 +0x0b50:  lea    0x4(%eax),%edx
08532af5 +0x0b53:  mov    0x8(%ebp),%eax
08532af8 +0x0b56:  mov    %edx,0xc(%eax)
08532afb +0x0b59:  mov    0x8(%ebp),%eax
08532afe +0x0b5c:  lea    0x4(%eax),%edx
08532b01 +0x0b5f:  mov    0x8(%ebp),%eax
08532b04 +0x0b62:  mov    %edx,0x10(%eax)
08532b07 +0x0b65:  pop    %ebp
08532b08 +0x0b66:  ret
08532b09 +0x0b67:  nop
08532b0a +0x0b68:  push   %ebp
08532b0b +0x0b69:  mov    %esp,%ebp
08532b0d +0x0b6b:  mov    0x8(%ebp),%eax
08532b10 +0x0b6e:  pop    %ebp
08532b11 +0x0b6f:  ret
08532b12 +0x0b70:  push   %ebp
08532b13 +0x0b71:  mov    %esp,%ebp
08532b15 +0x0b73:  sub    $0x18,%esp
08532b18 +0x0b76:  mov    0x8(%ebp),%eax
08532b1b +0x0b79:  add    $0x10,%eax
08532b1e +0x0b7c:  mov    %eax,(%esp)
08532b21 +0x0b7f:  call   085321b6 <+0x214>
08532b26 +0x0b84:  leave
08532b27 +0x0b85:  ret
08532b28 +0x0b86:  push   %ebp
08532b29 +0x0b87:  mov    %esp,%ebp
08532b2b +0x0b89:  sub    $0x18,%esp
08532b2e +0x0b8c:  mov    0xc(%ebp),%eax
08532b31 +0x0b8f:  mov    %eax,(%esp)
08532b34 +0x0b92:  call   08532b12 <+0xb70>
08532b39 +0x0b97:  leave
08532b3a +0x0b98:  ret
08532b3b +0x0b99:  nop
08532b3c +0x0b9a:  push   %ebp
08532b3d +0x0b9b:  mov    %esp,%ebp
08532b3f +0x0b9d:  sub    $0x18,%esp
08532b42 +0x0ba0:  mov    0x8(%ebp),%eax
08532b45 +0x0ba3:  movl   $0x1,0x8(%esp)
08532b4d +0x0bab:  mov    0xc(%ebp),%edx
08532b50 +0x0bae:  mov    %edx,0x4(%esp)
08532b54 +0x0bb2:  mov    %eax,(%esp)
08532b57 +0x0bb5:  call   08532f18 <+0xf76>
08532b5c +0x0bba:  leave
08532b5d +0x0bbb:  ret
08532b5e +0x0bbc:  push   %ebp
08532b5f +0x0bbd:  mov    %esp,%ebp
08532b61 +0x0bbf:  mov    0x8(%ebp),%eax
08532b64 +0x0bc2:  add    $0x4,%eax
08532b67 +0x0bc5:  pop    %ebp
08532b68 +0x0bc6:  ret
08532b69 +0x0bc7:  nop
08532b6a +0x0bc8:  push   %ebp
08532b6b +0x0bc9:  mov    %esp,%ebp
08532b6d +0x0bcb:  push   %ebx
08532b6e +0x0bcc:  sub    $0x14,%esp
08532b71 +0x0bcf:  mov    0x8(%ebp),%ebx
08532b74 +0x0bd2:  jmp    08532bc2 <+0xc20>
08532b76 +0x0bd4:  mov    0x10(%ebp),%eax
08532b79 +0x0bd7:  mov    %eax,(%esp)
08532b7c +0x0bda:  call   08532f2b <+0xf89>
08532b81 +0x0bdf:  mov    0xc(%ebp),%edx
08532b84 +0x0be2:  mov    0x18(%ebp),%ecx
08532b87 +0x0be5:  mov    %ecx,0x8(%esp)
08532b8b +0x0be9:  mov    %eax,0x4(%esp)
08532b8f +0x0bed:  mov    %edx,(%esp)
08532b92 +0x0bf0:  call   085324ea <+0x548>
08532b97 +0x0bf5:  xor    $0x1,%eax
08532b9a +0x0bf8:  test   %al,%al
08532b9c +0x0bfa:  je     08532bb4 <+0xc12>
08532b9e +0x0bfc:  mov    0x10(%ebp),%eax
08532ba1 +0x0bff:  mov    %eax,0x14(%ebp)
08532ba4 +0x0c02:  mov    0x10(%ebp),%eax
08532ba7 +0x0c05:  mov    %eax,(%esp)
08532baa +0x0c08:  call   0853263c <+0x69a>
08532baf +0x0c0d:  mov    %eax,0x10(%ebp)
08532bb2 +0x0c10:  jmp    08532bc2 <+0xc20>
08532bb4 +0x0c12:  mov    0x10(%ebp),%eax
08532bb7 +0x0c15:  mov    %eax,(%esp)
08532bba +0x0c18:  call   08532631 <+0x68f>
08532bbf +0x0c1d:  mov    %eax,0x10(%ebp)
08532bc2 +0x0c20:  cmpl   $0x0,0x10(%ebp)
08532bc6 +0x0c24:  setne  %al
08532bc9 +0x0c27:  test   %al,%al
08532bcb +0x0c29:  jne    08532b76 <+0xbd4>
08532bcd +0x0c2b:  mov    0x14(%ebp),%eax
08532bd0 +0x0c2e:  mov    %eax,0x4(%esp)
08532bd4 +0x0c32:  mov    %ebx,(%esp)
08532bd7 +0x0c35:  call   08532ab6 <+0xb14>
08532bdc +0x0c3a:  mov    %ebx,%eax
08532bde +0x0c3c:  add    $0x14,%esp
08532be1 +0x0c3f:  pop    %ebx
08532be2 +0x0c40:  pop    %ebp
08532be3 +0x0c41:  ret    $0x4
08532be6 +0x0c44:  push   %ebp
08532be7 +0x0c45:  mov    %esp,%ebp
08532be9 +0x0c47:  mov    0x8(%ebp),%eax
08532bec +0x0c4a:  add    $0x10,%eax
08532bef +0x0c4d:  pop    %ebp
08532bf0 +0x0c4e:  ret
08532bf1 +0x0c4f:  push   %ebp
08532bf2 +0x0c50:  mov    %esp,%ebp
08532bf4 +0x0c52:  sub    $0x28,%esp
08532bf7 +0x0c55:  mov    0x8(%ebp),%eax
08532bfa +0x0c58:  mov    %eax,(%esp)
08532bfd +0x0c5b:  call   08532f4d <+0xfab>
08532c02 +0x0c60:  mov    %eax,0x4(%esp)
08532c06 +0x0c64:  lea    -0x9(%ebp),%eax
08532c09 +0x0c67:  mov    %eax,(%esp)
08532c0c +0x0c6a:  call   08532c14 <+0xc72>
08532c11 +0x0c6f:  leave
08532c12 +0x0c70:  ret
08532c13 +0x0c71:  nop
08532c14 +0x0c72:  push   %ebp
08532c15 +0x0c73:  mov    %esp,%ebp
08532c17 +0x0c75:  mov    0xc(%ebp),%eax
08532c1a +0x0c78:  pop    %ebp
08532c1b +0x0c79:  ret
08532c1c +0x0c7a:  push   %ebp
08532c1d +0x0c7b:  mov    %esp,%ebp
08532c1f +0x0c7d:  mov    0x8(%ebp),%eax
08532c22 +0x0c80:  mov    0x14(%eax),%eax
08532c25 +0x0c83:  pop    %ebp
08532c26 +0x0c84:  ret
08532c27 +0x0c85:  nop
08532c28 +0x0c86:  push   %ebp
08532c29 +0x0c87:  mov    %esp,%ebp
08532c2b +0x0c89:  push   %esi
08532c2c +0x0c8a:  push   %ebx
08532c2d +0x0c8b:  sub    $0x20,%esp
08532c30 +0x0c8e:  mov    0x8(%ebp),%esi
08532c33 +0x0c91:  cmpl   $0x0,0x10(%ebp)
08532c37 +0x0c95:  jne    08532c7f <+0xcdd>
08532c39 +0x0c97:  mov    0xc(%ebp),%eax
08532c3c +0x0c9a:  mov    %eax,(%esp)
08532c3f +0x0c9d:  call   08532b5e <+0xbbc>
08532c44 +0x0ca2:  cmp    0x14(%ebp),%eax
08532c47 +0x0ca5:  je     08532c7f <+0xcdd>
08532c49 +0x0ca7:  mov    0x14(%ebp),%eax
08532c4c +0x0caa:  mov    %eax,(%esp)
08532c4f +0x0cad:  call   08532bf1 <+0xc4f>
08532c54 +0x0cb2:  mov    %eax,%ebx
08532c56 +0x0cb4:  mov    0x18(%ebp),%eax
08532c59 +0x0cb7:  mov    %eax,0x4(%esp)
08532c5d +0x0cbb:  lea    -0xe(%ebp),%eax
08532c60 +0x0cbe:  mov    %eax,(%esp)
08532c63 +0x0cc1:  call   08532c14 <+0xc72>
08532c68 +0x0cc6:  mov    0xc(%ebp),%edx
08532c6b +0x0cc9:  mov    %ebx,0x8(%esp)
08532c6f +0x0ccd:  mov    %eax,0x4(%esp)
08532c73 +0x0cd1:  mov    %edx,(%esp)
08532c76 +0x0cd4:  call   085324ea <+0x548>
08532c7b +0x0cd9:  test   %al,%al
08532c7d +0x0cdb:  je     08532c86 <+0xce4>
08532c7f +0x0cdd:  mov    $0x1,%eax
08532c84 +0x0ce2:  jmp    08532c8b <+0xce9>
08532c86 +0x0ce4:  mov    $0x0,%eax
08532c8b +0x0ce9:  mov    %al,-0xd(%ebp)
08532c8e +0x0cec:  mov    0x18(%ebp),%eax
08532c91 +0x0cef:  mov    %eax,0x4(%esp)
08532c95 +0x0cf3:  mov    0xc(%ebp),%eax
08532c98 +0x0cf6:  mov    %eax,(%esp)
08532c9b +0x0cf9:  call   08532f58 <+0xfb6>
08532ca0 +0x0cfe:  mov    %eax,-0xc(%ebp)
08532ca3 +0x0d01:  mov    0xc(%ebp),%eax
08532ca6 +0x0d04:  lea    0x4(%eax),%ecx
08532ca9 +0x0d07:  mov    -0xc(%ebp),%edx
08532cac +0x0d0a:  movzbl -0xd(%ebp),%eax
08532cb0 +0x0d0e:  mov    %ecx,0xc(%esp)
08532cb4 +0x0d12:  mov    0x14(%ebp),%ecx
08532cb7 +0x0d15:  mov    %ecx,0x8(%esp)
08532cbb +0x0d19:  mov    %edx,0x4(%esp)
08532cbf +0x0d1d:  mov    %eax,(%esp)
08532cc2 +0x0d20:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08532cc7 +0x0d25:  mov    0xc(%ebp),%eax
08532cca +0x0d28:  mov    0x14(%eax),%eax
08532ccd +0x0d2b:  lea    0x1(%eax),%edx
08532cd0 +0x0d2e:  mov    0xc(%ebp),%eax
08532cd3 +0x0d31:  mov    %edx,0x14(%eax)
08532cd6 +0x0d34:  mov    -0xc(%ebp),%eax
08532cd9 +0x0d37:  mov    %eax,0x4(%esp)
08532cdd +0x0d3b:  mov    %esi,(%esp)
08532ce0 +0x0d3e:  call   08532ab6 <+0xb14>
08532ce5 +0x0d43:  mov    %esi,%eax
08532ce7 +0x0d45:  add    $0x20,%esp
08532cea +0x0d48:  pop    %ebx
08532ceb +0x0d49:  pop    %esi
08532cec +0x0d4a:  pop    %ebp
08532ced +0x0d4b:  ret    $0x4
08532cf0 +0x0d4e:  push   %ebp
08532cf1 +0x0d4f:  mov    %esp,%ebp
08532cf3 +0x0d51:  push   %esi
08532cf4 +0x0d52:  push   %ebx
08532cf5 +0x0d53:  sub    $0x50,%esp
08532cf8 +0x0d56:  mov    0x8(%ebp),%ebx
08532cfb +0x0d59:  mov    0xc(%ebp),%eax
08532cfe +0x0d5c:  mov    %eax,(%esp)
08532d01 +0x0d5f:  call   08532422 <+0x480>
08532d06 +0x0d64:  mov    %eax,-0x14(%ebp)
08532d09 +0x0d67:  mov    0xc(%ebp),%eax
08532d0c +0x0d6a:  mov    %eax,(%esp)
08532d0f +0x0d6d:  call   08532b5e <+0xbbc>
08532d14 +0x0d72:  mov    %eax,-0x10(%ebp)
08532d17 +0x0d75:  movb   $0x1,-0x9(%ebp)
08532d1b +0x0d79:  jmp    08532d79 <+0xdd7>
08532d1d +0x0d7b:  mov    -0x14(%ebp),%eax
08532d20 +0x0d7e:  mov    %eax,-0x10(%ebp)
08532d23 +0x0d81:  mov    -0x14(%ebp),%eax
08532d26 +0x0d84:  mov    %eax,(%esp)
08532d29 +0x0d87:  call   08532f2b <+0xf89>
08532d2e +0x0d8c:  mov    %eax,%esi
08532d30 +0x0d8e:  mov    0x10(%ebp),%eax
08532d33 +0x0d91:  mov    %eax,0x4(%esp)
08532d37 +0x0d95:  lea    -0x2d(%ebp),%eax
08532d3a +0x0d98:  mov    %eax,(%esp)
08532d3d +0x0d9b:  call   08532c14 <+0xc72>
08532d42 +0x0da0:  mov    0xc(%ebp),%edx
08532d45 +0x0da3:  mov    %esi,0x8(%esp)
08532d49 +0x0da7:  mov    %eax,0x4(%esp)
08532d4d +0x0dab:  mov    %edx,(%esp)
08532d50 +0x0dae:  call   085324ea <+0x548>
08532d55 +0x0db3:  mov    %al,-0x9(%ebp)
08532d58 +0x0db6:  cmpb   $0x0,-0x9(%ebp)
08532d5c +0x0dba:  je     08532d6b <+0xdc9>
08532d5e +0x0dbc:  mov    -0x14(%ebp),%eax
08532d61 +0x0dbf:  mov    %eax,(%esp)
08532d64 +0x0dc2:  call   0853263c <+0x69a>
08532d69 +0x0dc7:  jmp    08532d76 <+0xdd4>
08532d6b +0x0dc9:  mov    -0x14(%ebp),%eax
08532d6e +0x0dcc:  mov    %eax,(%esp)
08532d71 +0x0dcf:  call   08532631 <+0x68f>
08532d76 +0x0dd4:  mov    %eax,-0x14(%ebp)
08532d79 +0x0dd7:  cmpl   $0x0,-0x14(%ebp)
08532d7d +0x0ddb:  setne  %al
08532d80 +0x0dde:  test   %al,%al
08532d82 +0x0de0:  jne    08532d1d <+0xd7b>
08532d84 +0x0de2:  mov    -0x10(%ebp),%eax
08532d87 +0x0de5:  mov    %eax,0x4(%esp)
08532d8b +0x0de9:  lea    -0x34(%ebp),%eax
08532d8e +0x0dec:  mov    %eax,(%esp)
08532d91 +0x0def:  call   08532ab6 <+0xb14>
08532d96 +0x0df4:  cmpb   $0x0,-0x9(%ebp)
08532d9a +0x0df8:  je     08532e1b <+0xe79>
08532d9c +0x0dfa:  lea    -0x2c(%ebp),%eax
08532d9f +0x0dfd:  mov    0xc(%ebp),%edx
08532da2 +0x0e00:  mov    %edx,0x4(%esp)
08532da6 +0x0e04:  mov    %eax,(%esp)
08532da9 +0x0e07:  call   08532590 <+0x5ee>
08532dae +0x0e0c:  sub    $0x4,%esp
08532db1 +0x0e0f:  lea    -0x2c(%ebp),%eax
08532db4 +0x0e12:  mov    %eax,0x4(%esp)
08532db8 +0x0e16:  lea    -0x34(%ebp),%eax
08532dbb +0x0e19:  mov    %eax,(%esp)
08532dbe +0x0e1c:  call   085324fe <+0x55c>
08532dc3 +0x0e21:  test   %al,%al
08532dc5 +0x0e23:  je     08532e10 <+0xe6e>
08532dc7 +0x0e25:  movb   $0x1,-0x25(%ebp)
08532dcb +0x0e29:  mov    -0x10(%ebp),%ecx
08532dce +0x0e2c:  mov    -0x14(%ebp),%edx
08532dd1 +0x0e2f:  lea    -0x24(%ebp),%eax
08532dd4 +0x0e32:  mov    0x10(%ebp),%esi
08532dd7 +0x0e35:  mov    %esi,0x10(%esp)
08532ddb +0x0e39:  mov    %ecx,0xc(%esp)
08532ddf +0x0e3d:  mov    %edx,0x8(%esp)
08532de3 +0x0e41:  mov    0xc(%ebp),%edx
08532de6 +0x0e44:  mov    %edx,0x4(%esp)
08532dea +0x0e48:  mov    %eax,(%esp)
08532ded +0x0e4b:  call   08532c28 <+0xc86>
08532df2 +0x0e50:  sub    $0x4,%esp
08532df5 +0x0e53:  lea    -0x25(%ebp),%eax
08532df8 +0x0e56:  mov    %eax,0x8(%esp)
08532dfc +0x0e5a:  lea    -0x24(%ebp),%eax
08532dff +0x0e5d:  mov    %eax,0x4(%esp)
08532e03 +0x0e61:  mov    %ebx,(%esp)
08532e06 +0x0e64:  call   08532fda <+0x1038>
08532e0b +0x0e69:  jmp    08532eb1 <+0xf0f>
08532e10 +0x0e6e:  lea    -0x34(%ebp),%eax
08532e13 +0x0e71:  mov    %eax,(%esp)
08532e16 +0x0e74:  call   08533008 <+0x1066>
08532e1b +0x0e79:  mov    0x10(%ebp),%eax
08532e1e +0x0e7c:  mov    %eax,0x4(%esp)
08532e22 +0x0e80:  lea    -0x1e(%ebp),%eax
08532e25 +0x0e83:  mov    %eax,(%esp)
08532e28 +0x0e86:  call   08532c14 <+0xc72>
08532e2d +0x0e8b:  mov    %eax,%esi
08532e2f +0x0e8d:  mov    -0x34(%ebp),%eax
08532e32 +0x0e90:  mov    %eax,(%esp)
08532e35 +0x0e93:  call   08532bf1 <+0xc4f>
08532e3a +0x0e98:  mov    0xc(%ebp),%edx
08532e3d +0x0e9b:  mov    %esi,0x8(%esp)
08532e41 +0x0e9f:  mov    %eax,0x4(%esp)
08532e45 +0x0ea3:  mov    %edx,(%esp)
08532e48 +0x0ea6:  call   085324ea <+0x548>
08532e4d +0x0eab:  test   %al,%al
08532e4f +0x0ead:  je     08532e97 <+0xef5>
08532e51 +0x0eaf:  movb   $0x1,-0x1d(%ebp)
08532e55 +0x0eb3:  mov    -0x10(%ebp),%ecx
08532e58 +0x0eb6:  mov    -0x14(%ebp),%edx
08532e5b +0x0eb9:  lea    -0x1c(%ebp),%eax
08532e5e +0x0ebc:  mov    0x10(%ebp),%esi
08532e61 +0x0ebf:  mov    %esi,0x10(%esp)
08532e65 +0x0ec3:  mov    %ecx,0xc(%esp)
08532e69 +0x0ec7:  mov    %edx,0x8(%esp)
08532e6d +0x0ecb:  mov    0xc(%ebp),%edx
08532e70 +0x0ece:  mov    %edx,0x4(%esp)
08532e74 +0x0ed2:  mov    %eax,(%esp)
08532e77 +0x0ed5:  call   08532c28 <+0xc86>
08532e7c +0x0eda:  sub    $0x4,%esp
08532e7f +0x0edd:  lea    -0x1d(%ebp),%eax
08532e82 +0x0ee0:  mov    %eax,0x8(%esp)
08532e86 +0x0ee4:  lea    -0x1c(%ebp),%eax
08532e89 +0x0ee7:  mov    %eax,0x4(%esp)
08532e8d +0x0eeb:  mov    %ebx,(%esp)
08532e90 +0x0eee:  call   08532fda <+0x1038>
08532e95 +0x0ef3:  jmp    08532eb1 <+0xf0f>
08532e97 +0x0ef5:  movb   $0x0,-0x15(%ebp)
08532e9b +0x0ef9:  lea    -0x15(%ebp),%eax
08532e9e +0x0efc:  mov    %eax,0x8(%esp)
08532ea2 +0x0f00:  lea    -0x34(%ebp),%eax
08532ea5 +0x0f03:  mov    %eax,0x4(%esp)
08532ea9 +0x0f07:  mov    %ebx,(%esp)
08532eac +0x0f0a:  call   08533026 <+0x1084>
08532eb1 +0x0f0f:  mov    %ebx,%eax
08532eb3 +0x0f11:  lea    -0x8(%ebp),%esp
08532eb6 +0x0f14:  add    $0x0,%esp
08532eb9 +0x0f17:  pop    %ebx
08532eba +0x0f18:  pop    %esi
08532ebb +0x0f19:  pop    %ebp
08532ebc +0x0f1a:  ret    $0x4
08532ebf +0x0f1d:  nop
08532ec0 +0x0f1e:  push   %ebp
08532ec1 +0x0f1f:  mov    %esp,%ebp
08532ec3 +0x0f21:  mov    0x8(%ebp),%eax
08532ec6 +0x0f24:  add    $0xc,%eax
08532ec9 +0x0f27:  pop    %ebp
08532eca +0x0f28:  ret
08532ecb +0x0f29:  nop
08532ecc +0x0f2a:  push   %ebp
08532ecd +0x0f2b:  mov    %esp,%ebp
08532ecf +0x0f2d:  sub    $0x18,%esp
08532ed2 +0x0f30:  mov    0x8(%ebp),%eax
08532ed5 +0x0f33:  mov    (%eax),%eax
08532ed7 +0x0f35:  mov    %eax,(%esp)
08532eda +0x0f38:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
08532edf +0x0f3d:  mov    0x8(%ebp),%edx
08532ee2 +0x0f40:  mov    %eax,(%edx)
08532ee4 +0x0f42:  mov    0x8(%ebp),%eax
08532ee7 +0x0f45:  leave
08532ee8 +0x0f46:  ret
08532ee9 +0x0f47:  push   %ebp
08532eea +0x0f48:  mov    %esp,%ebp
08532eec +0x0f4a:  mov    0x8(%ebp),%eax
08532eef +0x0f4d:  mov    0xc(%eax),%eax
08532ef2 +0x0f50:  pop    %ebp
08532ef3 +0x0f51:  ret
08532ef4 +0x0f52:  push   %ebp
08532ef5 +0x0f53:  mov    %esp,%ebp
08532ef7 +0x0f55:  sub    $0x18,%esp
08532efa +0x0f58:  mov    0x8(%ebp),%eax
08532efd +0x0f5b:  mov    (%eax),%eax
08532eff +0x0f5d:  mov    %eax,(%esp)
08532f02 +0x0f60:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08532f07 +0x0f65:  mov    0x8(%ebp),%edx
08532f0a +0x0f68:  mov    %eax,(%edx)
08532f0c +0x0f6a:  mov    0x8(%ebp),%eax
08532f0f +0x0f6d:  leave
08532f10 +0x0f6e:  ret
08532f11 +0x0f6f:  nop
08532f12 +0x0f70:  push   %ebp
08532f13 +0x0f71:  mov    %esp,%ebp
08532f15 +0x0f73:  pop    %ebp
08532f16 +0x0f74:  ret
08532f17 +0x0f75:  nop
08532f18 +0x0f76:  push   %ebp
08532f19 +0x0f77:  mov    %esp,%ebp
08532f1b +0x0f79:  sub    $0x18,%esp
08532f1e +0x0f7c:  mov    0xc(%ebp),%eax
08532f21 +0x0f7f:  mov    %eax,(%esp)
08532f24 +0x0f82:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08532f29 +0x0f87:  leave
08532f2a +0x0f88:  ret
08532f2b +0x0f89:  push   %ebp
08532f2c +0x0f8a:  mov    %esp,%ebp
08532f2e +0x0f8c:  sub    $0x28,%esp
08532f31 +0x0f8f:  mov    0x8(%ebp),%eax
08532f34 +0x0f92:  mov    %eax,(%esp)
08532f37 +0x0f95:  call   08533054 <+0x10b2>
08532f3c +0x0f9a:  mov    %eax,0x4(%esp)
08532f40 +0x0f9e:  lea    -0x9(%ebp),%eax
08532f43 +0x0fa1:  mov    %eax,(%esp)
08532f46 +0x0fa4:  call   08532c14 <+0xc72>
08532f4b +0x0fa9:  leave
08532f4c +0x0faa:  ret
08532f4d +0x0fab:  push   %ebp
08532f4e +0x0fac:  mov    %esp,%ebp
08532f50 +0x0fae:  mov    0x8(%ebp),%eax
08532f53 +0x0fb1:  add    $0x10,%eax
08532f56 +0x0fb4:  pop    %ebp
08532f57 +0x0fb5:  ret
08532f58 +0x0fb6:  push   %ebp
08532f59 +0x0fb7:  mov    %esp,%ebp
08532f5b +0x0fb9:  push   %esi
08532f5c +0x0fba:  push   %ebx
08532f5d +0x0fbb:  sub    $0x20,%esp
08532f60 +0x0fbe:  mov    0x8(%ebp),%eax
08532f63 +0x0fc1:  mov    %eax,(%esp)
08532f66 +0x0fc4:  call   08533060 <+0x10be>
08532f6b +0x0fc9:  mov    %eax,-0xc(%ebp)
08532f6e +0x0fcc:  mov    0xc(%ebp),%eax
08532f71 +0x0fcf:  mov    %eax,(%esp)
08532f74 +0x0fd2:  call   08533083 <+0x10e1>
08532f79 +0x0fd7:  mov    %eax,%ebx
08532f7b +0x0fd9:  mov    0x8(%ebp),%eax
08532f7e +0x0fdc:  mov    %eax,(%esp)
08532f81 +0x0fdf:  call   08532b0a <+0xb68>
08532f86 +0x0fe4:  mov    %ebx,0x8(%esp)
08532f8a +0x0fe8:  mov    -0xc(%ebp),%edx
08532f8d +0x0feb:  mov    %edx,0x4(%esp)
08532f91 +0x0fef:  mov    %eax,(%esp)
08532f94 +0x0ff2:  call   0853308c <+0x10ea>
08532f99 +0x0ff7:  jmp    08532fcf <+0x102d>
08532f9b +0x0ff9:  mov    %eax,(%esp)
08532f9e +0x0ffc:  call   08725ce0 <__cxa_begin_catch>
08532fa3 +0x1001:  mov    -0xc(%ebp),%eax
08532fa6 +0x1004:  mov    %eax,0x4(%esp)
08532faa +0x1008:  mov    0x8(%ebp),%eax
08532fad +0x100b:  mov    %eax,(%esp)
08532fb0 +0x100e:  call   08532b3c <+0xb9a>
08532fb5 +0x1013:  call   08724be0 <__cxa_rethrow>
08532fba +0x1018:  mov    %edx,%ebx
08532fbc +0x101a:  mov    %eax,%esi
08532fbe +0x101c:  call   08725c30 <__cxa_end_catch>
08532fc3 +0x1021:  mov    %esi,%eax
08532fc5 +0x1023:  mov    %ebx,%edx
08532fc7 +0x1025:  mov    %eax,(%esp)
08532fca +0x1028:  call   08ae3750 <_Unwind_Resume>
08532fcf +0x102d:  mov    -0xc(%ebp),%eax
08532fd2 +0x1030:  add    $0x20,%esp
08532fd5 +0x1033:  pop    %ebx
08532fd6 +0x1034:  pop    %esi
08532fd7 +0x1035:  pop    %ebp
08532fd8 +0x1036:  ret
08532fd9 +0x1037:  nop
08532fda +0x1038:  push   %ebp
08532fdb +0x1039:  mov    %esp,%ebp
08532fdd +0x103b:  sub    $0x18,%esp
08532fe0 +0x103e:  mov    0xc(%ebp),%eax
08532fe3 +0x1041:  mov    %eax,(%esp)
08532fe6 +0x1044:  call   085330f3 <+0x1151>
08532feb +0x1049:  mov    0x8(%ebp),%edx
08532fee +0x104c:  mov    (%eax),%eax
08532ff0 +0x104e:  mov    %eax,(%edx)
08532ff2 +0x1050:  mov    0x10(%ebp),%eax
08532ff5 +0x1053:  mov    %eax,(%esp)
08532ff8 +0x1056:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08532ffd +0x105b:  movzbl (%eax),%edx
08533000 +0x105e:  mov    0x8(%ebp),%eax
08533003 +0x1061:  mov    %dl,0x4(%eax)
08533006 +0x1064:  leave
08533007 +0x1065:  ret
08533008 +0x1066:  push   %ebp
08533009 +0x1067:  mov    %esp,%ebp
0853300b +0x1069:  sub    $0x18,%esp
0853300e +0x106c:  mov    0x8(%ebp),%eax
08533011 +0x106f:  mov    (%eax),%eax
08533013 +0x1071:  mov    %eax,(%esp)
08533016 +0x1074:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0853301b +0x1079:  mov    0x8(%ebp),%edx
0853301e +0x107c:  mov    %eax,(%edx)
08533020 +0x107e:  mov    0x8(%ebp),%eax
08533023 +0x1081:  leave
08533024 +0x1082:  ret
08533025 +0x1083:  nop
08533026 +0x1084:  push   %ebp
08533027 +0x1085:  mov    %esp,%ebp
08533029 +0x1087:  sub    $0x18,%esp
0853302c +0x108a:  mov    0xc(%ebp),%eax
0853302f +0x108d:  mov    %eax,(%esp)
08533032 +0x1090:  call   085330fb <+0x1159>
08533037 +0x1095:  mov    0x8(%ebp),%edx
0853303a +0x1098:  mov    (%eax),%eax
0853303c +0x109a:  mov    %eax,(%edx)
0853303e +0x109c:  mov    0x10(%ebp),%eax
08533041 +0x109f:  mov    %eax,(%esp)
08533044 +0x10a2:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08533049 +0x10a7:  movzbl (%eax),%edx
0853304c +0x10aa:  mov    0x8(%ebp),%eax
0853304f +0x10ad:  mov    %dl,0x4(%eax)
08533052 +0x10b0:  leave
08533053 +0x10b1:  ret
08533054 +0x10b2:  push   %ebp
08533055 +0x10b3:  mov    %esp,%ebp
08533057 +0x10b5:  mov    0x8(%ebp),%eax
0853305a +0x10b8:  add    $0x10,%eax
0853305d +0x10bb:  pop    %ebp
0853305e +0x10bc:  ret
0853305f +0x10bd:  nop
08533060 +0x10be:  push   %ebp
08533061 +0x10bf:  mov    %esp,%ebp
08533063 +0x10c1:  sub    $0x18,%esp
08533066 +0x10c4:  mov    0x8(%ebp),%eax
08533069 +0x10c7:  movl   $0x0,0x8(%esp)
08533071 +0x10cf:  movl   $0x1,0x4(%esp)
08533079 +0x10d7:  mov    %eax,(%esp)
0853307c +0x10da:  call   08533104 <+0x1162>
08533081 +0x10df:  leave
08533082 +0x10e0:  ret
08533083 +0x10e1:  push   %ebp
08533084 +0x10e2:  mov    %esp,%ebp
08533086 +0x10e4:  mov    0x8(%ebp),%eax
08533089 +0x10e7:  pop    %ebp
0853308a +0x10e8:  ret
0853308b +0x10e9:  nop
0853308c +0x10ea:  push   %ebp
0853308d +0x10eb:  mov    %esp,%ebp
0853308f +0x10ed:  push   %edi
08533090 +0x10ee:  push   %esi
08533091 +0x10ef:  push   %ebx
08533092 +0x10f0:  sub    $0x2c,%esp
08533095 +0x10f3:  mov    0x10(%ebp),%eax
08533098 +0x10f6:  mov    %eax,(%esp)
0853309b +0x10f9:  call   08533083 <+0x10e1>
085330a0 +0x10fe:  mov    %eax,%edi
085330a2 +0x1100:  mov    0xc(%ebp),%esi
085330a5 +0x1103:  mov    %esi,0x4(%esp)
085330a9 +0x1107:  movl   $0x20,(%esp)
085330b0 +0x110e:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085330b5 +0x1113:  mov    %eax,%ebx
085330b7 +0x1115:  mov    %ebx,%eax
085330b9 +0x1117:  test   %eax,%eax
085330bb +0x1119:  je     085330eb <+0x1149>
085330bd +0x111b:  mov    %ebx,%eax
085330bf +0x111d:  mov    %edi,0x4(%esp)
085330c3 +0x1121:  mov    %eax,(%esp)
085330c6 +0x1124:  call   08533166 <+0x11c4>
085330cb +0x1129:  jmp    085330eb <+0x1149>
085330cd +0x112b:  mov    %edx,%edi
085330cf +0x112d:  mov    %eax,-0x1c(%ebp)
085330d2 +0x1130:  mov    %esi,0x4(%esp)
085330d6 +0x1134:  mov    %ebx,(%esp)
085330d9 +0x1137:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
085330de +0x113c:  mov    -0x1c(%ebp),%eax
085330e1 +0x113f:  mov    %edi,%edx
085330e3 +0x1141:  mov    %eax,(%esp)
085330e6 +0x1144:  call   08ae3750 <_Unwind_Resume>
085330eb +0x1149:  add    $0x2c,%esp
085330ee +0x114c:  pop    %ebx
085330ef +0x114d:  pop    %esi
085330f0 +0x114e:  pop    %edi
085330f1 +0x114f:  pop    %ebp
085330f2 +0x1150:  ret
085330f3 +0x1151:  push   %ebp
085330f4 +0x1152:  mov    %esp,%ebp
085330f6 +0x1154:  mov    0x8(%ebp),%eax
085330f9 +0x1157:  pop    %ebp
085330fa +0x1158:  ret
085330fb +0x1159:  push   %ebp
085330fc +0x115a:  mov    %esp,%ebp
085330fe +0x115c:  mov    0x8(%ebp),%eax
08533101 +0x115f:  pop    %ebp
08533102 +0x1160:  ret
08533103 +0x1161:  nop
08533104 +0x1162:  push   %ebp
08533105 +0x1163:  mov    %esp,%ebp
08533107 +0x1165:  sub    $0x18,%esp
0853310a +0x1168:  mov    0x8(%ebp),%eax
0853310d +0x116b:  mov    %eax,(%esp)
08533110 +0x116e:  call   085331b2 <+0x1210>
08533115 +0x1173:  cmp    0xc(%ebp),%eax
08533118 +0x1176:  setb   %al
0853311b +0x1179:  movzbl %al,%eax
0853311e +0x117c:  test   %eax,%eax
08533120 +0x117e:  setne  %al
08533123 +0x1181:  test   %al,%al
08533125 +0x1183:  je     0853312c <+0x118a>
08533127 +0x1185:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0853312c +0x118a:  mov    0xc(%ebp),%eax
0853312f +0x118d:  shl    $0x5,%eax
08533132 +0x1190:  mov    %eax,(%esp)
08533135 +0x1193:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0853313a +0x1198:  leave
0853313b +0x1199:  ret
0853313c +0x119a:  push   %ebp
0853313d +0x119b:  mov    %esp,%ebp
0853313f +0x119d:  sub    $0x18,%esp
08533142 +0x11a0:  mov    0xc(%ebp),%eax
08533145 +0x11a3:  mov    (%eax),%edx
08533147 +0x11a5:  mov    0x8(%ebp),%eax
0853314a +0x11a8:  mov    %edx,(%eax)
0853314c +0x11aa:  mov    0xc(%ebp),%eax
0853314f +0x11ad:  lea    0x4(%eax),%edx
08533152 +0x11b0:  mov    0x8(%ebp),%eax
08533155 +0x11b3:  add    $0x4,%eax
08533158 +0x11b6:  mov    %edx,0x4(%esp)
0853315c +0x11ba:  mov    %eax,(%esp)
0853315f +0x11bd:  call   080eaa36 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x66f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x66f
08533164 +0x11c2:  leave
08533165 +0x11c3:  ret
08533166 +0x11c4:  push   %ebp
08533167 +0x11c5:  mov    %esp,%ebp
08533169 +0x11c7:  sub    $0x18,%esp
0853316c +0x11ca:  mov    0x8(%ebp),%eax
0853316f +0x11cd:  movl   $0x0,(%eax)
08533175 +0x11d3:  mov    0x8(%ebp),%eax
08533178 +0x11d6:  movl   $0x0,0x4(%eax)
0853317f +0x11dd:  mov    0x8(%ebp),%eax
08533182 +0x11e0:  movl   $0x0,0x8(%eax)
08533189 +0x11e7:  mov    0x8(%ebp),%eax
0853318c +0x11ea:  movl   $0x0,0xc(%eax)
08533193 +0x11f1:  mov    0xc(%ebp),%eax
08533196 +0x11f4:  mov    %eax,(%esp)
08533199 +0x11f7:  call   08533083 <+0x10e1>
0853319e +0x11fc:  mov    0x8(%ebp),%edx
085331a1 +0x11ff:  add    $0x10,%edx
085331a4 +0x1202:  mov    %eax,0x4(%esp)
085331a8 +0x1206:  mov    %edx,(%esp)
085331ab +0x1209:  call   0853313c <+0x119a>
085331b0 +0x120e:  leave
085331b1 +0x120f:  ret
085331b2 +0x1210:  push   %ebp
085331b3 +0x1211:  mov    %esp,%ebp
085331b5 +0x1213:  mov    $0x7ffffff,%eax
085331ba +0x1218:  pop    %ebp
085331bb +0x1219:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8531fa2

/* CTradeSpace::set_traders(CUser*, CUser*) */

void CTradeSpace::_GLOBAL__I_set_traders(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
