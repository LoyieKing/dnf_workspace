# _debugCommandOn

`_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND`

`global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DisPatcher_DebugCommand` | `0x08595020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08595020  _GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND
#           global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08595020, 0x08599257]
08595020 +0x0000:  push   %ebp
08595021 +0x0001:  mov    %esp,%ebp
08595023 +0x0003:  sub    $0x18,%esp
08595026 +0x0006:  movl   $0xffff,0x4(%esp)
0859502e +0x000e:  movl   $0x1,(%esp)
08595035 +0x0015:  call   08594fe0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0859503a +0x001a:  leave
0859503b +0x001b:  ret
0859503c +0x001c:  push   %ebp
0859503d +0x001d:  mov    %esp,%ebp
0859503f +0x001f:  mov    0x8(%ebp),%eax
08595042 +0x0022:  mov    0x10(%eax),%eax
08595045 +0x0025:  test   %eax,%eax
08595047 +0x0027:  je     08595058 <+0x38>
08595049 +0x0029:  mov    0x8(%ebp),%eax
0859504c +0x002c:  mov    0x10(%eax),%eax
0859504f +0x002f:  movzbl 0xe67(%eax),%eax
08595056 +0x0036:  jmp    0859505d <+0x3d>
08595058 +0x0038:  mov    $0x0,%eax
0859505d +0x003d:  pop    %ebp
0859505e +0x003e:  ret
0859505f +0x003f:  nop
08595060 +0x0040:  push   %ebp
08595061 +0x0041:  mov    %esp,%ebp
08595063 +0x0043:  mov    0x8(%ebp),%eax
08595066 +0x0046:  mov    0x796e0(%eax),%edx
0859506c +0x004c:  mov    0x8(%ebp),%eax
0859506f +0x004f:  mov    %edx,0x796e4(%eax)
08595075 +0x0055:  pop    %ebp
08595076 +0x0056:  ret
08595077 +0x0057:  nop
08595078 +0x0058:  push   %ebp
08595079 +0x0059:  mov    %esp,%ebp
0859507b +0x005b:  sub    $0x4,%esp
0859507e +0x005e:  mov    0xc(%ebp),%eax
08595081 +0x0061:  mov    %al,-0x4(%ebp)
08595084 +0x0064:  mov    0x8(%ebp),%eax
08595087 +0x0067:  movzbl -0x4(%ebp),%edx
0859508b +0x006b:  mov    %dl,0x8d253(%eax)
08595091 +0x0071:  leave
08595092 +0x0072:  ret
08595093 +0x0073:  nop
08595094 +0x0074:  push   %ebp
08595095 +0x0075:  mov    %esp,%ebp
08595097 +0x0077:  sub    $0x18,%esp
0859509a +0x007a:  mov    0x8(%ebp),%eax
0859509d +0x007d:  mov    %eax,(%esp)
085950a0 +0x0080:  call   0812b198 <_GLOBAL__I__ZN26CLocalChinaErrorDispatcherC2Ev+0x68>  ; global constructors keyed to CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()+0x68
085950a5 +0x0085:  leave
085950a6 +0x0086:  ret
085950a7 +0x0087:  nop
085950a8 +0x0088:  push   %ebp
085950a9 +0x0089:  mov    %esp,%ebp
085950ab +0x008b:  sub    $0x18,%esp
085950ae +0x008e:  mov    0x8(%ebp),%eax
085950b1 +0x0091:  mov    %eax,(%esp)
085950b4 +0x0094:  call   08597fa2 <+0x2f82>
085950b9 +0x0099:  mov    0x8(%ebp),%eax
085950bc +0x009c:  movl   $&_ZTV18DisPatcher_BuyItem+0x8,(%eax)
085950c2 +0x00a2:  leave
085950c3 +0x00a3:  ret
085950c4 +0x00a4:  push   %ebp
085950c5 +0x00a5:  mov    %esp,%ebp
085950c7 +0x00a7:  sub    $0x18,%esp
085950ca +0x00aa:  mov    0x8(%ebp),%eax
085950cd +0x00ad:  mov    %eax,(%esp)
085950d0 +0x00b0:  call   08597fbe <+0x2f9e>
085950d5 +0x00b5:  mov    0x8(%ebp),%eax
085950d8 +0x00b8:  movl   $&_ZTV19DisPatcher_BuySkill+0x8,(%eax)
085950de +0x00be:  leave
085950df +0x00bf:  ret
085950e0 +0x00c0:  push   %ebp
085950e1 +0x00c1:  mov    %esp,%ebp
085950e3 +0x00c3:  sub    $0x18,%esp
085950e6 +0x00c6:  mov    0x8(%ebp),%eax
085950e9 +0x00c9:  mov    %eax,(%esp)
085950ec +0x00cc:  call   08597fda <+0x2fba>
085950f1 +0x00d1:  mov    0x8(%ebp),%eax
085950f4 +0x00d4:  movl   $&_ZTV22DisPatcher_ChangeSkill+0x8,(%eax)
085950fa +0x00da:  leave
085950fb +0x00db:  ret
085950fc +0x00dc:  push   %ebp
085950fd +0x00dd:  mov    %esp,%ebp
085950ff +0x00df:  sub    $0x18,%esp
08595102 +0x00e2:  mov    0x8(%ebp),%eax
08595105 +0x00e5:  mov    %eax,(%esp)
08595108 +0x00e8:  call   08597ff6 <+0x2fd6>
0859510d +0x00ed:  mov    0x8(%ebp),%eax
08595110 +0x00f0:  movl   $&_ZTV23DisPatcher_CreateCharac+0x8,(%eax)
08595116 +0x00f6:  leave
08595117 +0x00f7:  ret
08595118 +0x00f8:  push   %ebp
08595119 +0x00f9:  mov    %esp,%ebp
0859511b +0x00fb:  sub    $0x18,%esp
0859511e +0x00fe:  mov    0x8(%ebp),%eax
08595121 +0x0101:  mov    %eax,(%esp)
08595124 +0x0104:  call   08598012 <+0x2ff2>
08595129 +0x0109:  mov    0x8(%ebp),%eax
0859512c +0x010c:  movl   $&_ZTV19DisPatcher_UseEquip+0x8,(%eax)
08595132 +0x0112:  leave
08595133 +0x0113:  ret
08595134 +0x0114:  push   %ebp
08595135 +0x0115:  mov    %esp,%ebp
08595137 +0x0117:  sub    $0x18,%esp
0859513a +0x011a:  mov    0x8(%ebp),%eax
0859513d +0x011d:  mov    %eax,(%esp)
08595140 +0x0120:  call   0859802e <+0x300e>
08595145 +0x0125:  mov    0x8(%ebp),%eax
08595148 +0x0128:  movl   $&_ZTV23DisPatcher_DeleteCharac+0x8,(%eax)
0859514e +0x012e:  leave
0859514f +0x012f:  ret
08595150 +0x0130:  push   %ebp
08595151 +0x0131:  mov    %esp,%ebp
08595153 +0x0133:  sub    $0x18,%esp
08595156 +0x0136:  mov    0x8(%ebp),%eax
08595159 +0x0139:  mov    %eax,(%esp)
0859515c +0x013c:  call   0859804a <+0x302a>
08595161 +0x0141:  mov    0x8(%ebp),%eax
08595164 +0x0144:  movl   $&_ZTV21DisPatcher_DeleteItem+0x8,(%eax)
0859516a +0x014a:  leave
0859516b +0x014b:  ret
0859516c +0x014c:  push   %ebp
0859516d +0x014d:  mov    %esp,%ebp
0859516f +0x014f:  sub    $0x18,%esp
08595172 +0x0152:  mov    0x8(%ebp),%eax
08595175 +0x0155:  mov    %eax,(%esp)
08595178 +0x0158:  call   08598066 <+0x3046>
0859517d +0x015d:  mov    0x8(%ebp),%eax
08595180 +0x0160:  movl   $&_ZTV19DisPatcher_DropItem+0x8,(%eax)
08595186 +0x0166:  leave
08595187 +0x0167:  ret
08595188 +0x0168:  push   %ebp
08595189 +0x0169:  mov    %esp,%ebp
0859518b +0x016b:  sub    $0x18,%esp
0859518e +0x016e:  mov    0x8(%ebp),%eax
08595191 +0x0171:  mov    %eax,(%esp)
08595194 +0x0174:  call   08598082 <+0x3062>
08595199 +0x0179:  mov    0x8(%ebp),%eax
0859519c +0x017c:  movl   $&_ZTV18DisPatcher_GetItem+0x8,(%eax)
085951a2 +0x0182:  leave
085951a3 +0x0183:  ret
085951a4 +0x0184:  push   %ebp
085951a5 +0x0185:  mov    %esp,%ebp
085951a7 +0x0187:  sub    $0x18,%esp
085951aa +0x018a:  mov    0x8(%ebp),%eax
085951ad +0x018d:  mov    %eax,(%esp)
085951b0 +0x0190:  call   0859809e <+0x307e>
085951b5 +0x0195:  mov    0x8(%ebp),%eax
085951b8 +0x0198:  movl   $&_ZTV22DisPatcher_GetUserInfo+0x8,(%eax)
085951be +0x019e:  leave
085951bf +0x019f:  ret
085951c0 +0x01a0:  push   %ebp
085951c1 +0x01a1:  mov    %esp,%ebp
085951c3 +0x01a3:  sub    $0x18,%esp
085951c6 +0x01a6:  mov    0x8(%ebp),%eax
085951c9 +0x01a9:  mov    %eax,(%esp)
085951cc +0x01ac:  call   085980ba <+0x309a>
085951d1 +0x01b1:  mov    0x8(%ebp),%eax
085951d4 +0x01b4:  movl   $&_ZTV25DisPatcher_RecoverStamina+0x8,(%eax)
085951da +0x01ba:  leave
085951db +0x01bb:  ret
085951dc +0x01bc:  push   %ebp
085951dd +0x01bd:  mov    %esp,%ebp
085951df +0x01bf:  sub    $0x18,%esp
085951e2 +0x01c2:  mov    0x8(%ebp),%eax
085951e5 +0x01c5:  mov    %eax,(%esp)
085951e8 +0x01c8:  call   085980d6 <+0x30b6>
085951ed +0x01cd:  mov    0x8(%ebp),%eax
085951f0 +0x01d0:  movl   $&_ZTV19DisPatcher_MoveItem+0x8,(%eax)
085951f6 +0x01d6:  leave
085951f7 +0x01d7:  ret
085951f8 +0x01d8:  push   %ebp
085951f9 +0x01d9:  mov    %esp,%ebp
085951fb +0x01db:  sub    $0x18,%esp
085951fe +0x01de:  mov    0x8(%ebp),%eax
08595201 +0x01e1:  mov    %eax,(%esp)
08595204 +0x01e4:  call   085980f2 <+0x30d2>
08595209 +0x01e9:  mov    0x8(%ebp),%eax
0859520c +0x01ec:  movl   $&_ZTV18DisPatcher_MoveMap+0x8,(%eax)
08595212 +0x01f2:  leave
08595213 +0x01f3:  ret
08595214 +0x01f4:  push   %ebp
08595215 +0x01f5:  mov    %esp,%ebp
08595217 +0x01f7:  sub    $0x18,%esp
0859521a +0x01fa:  mov    0x8(%ebp),%eax
0859521d +0x01fd:  mov    %eax,(%esp)
08595220 +0x0200:  call   0859810e <+0x30ee>
08595225 +0x0205:  mov    0x8(%ebp),%eax
08595228 +0x0208:  movl   $&_ZTV21DisPatcher_PvPTimeout+0x8,(%eax)
0859522e +0x020e:  leave
0859522f +0x020f:  ret
08595230 +0x0210:  push   %ebp
08595231 +0x0211:  mov    %esp,%ebp
08595233 +0x0213:  sub    $0x18,%esp
08595236 +0x0216:  mov    0x8(%ebp),%eax
08595239 +0x0219:  mov    %eax,(%esp)
0859523c +0x021c:  call   0859812a <+0x310a>
08595241 +0x0221:  mov    0x8(%ebp),%eax
08595244 +0x0224:  movl   $&_ZTV22DisPatcher_RepairEquip+0x8,(%eax)
0859524a +0x022a:  leave
0859524b +0x022b:  ret
0859524c +0x022c:  push   %ebp
0859524d +0x022d:  mov    %esp,%ebp
0859524f +0x022f:  sub    $0x18,%esp
08595252 +0x0232:  mov    0x8(%ebp),%eax
08595255 +0x0235:  mov    %eax,(%esp)
08595258 +0x0238:  call   08598146 <+0x3126>
0859525d +0x023d:  mov    0x8(%ebp),%eax
08595260 +0x0240:  movl   $&_ZTV23DisPatcher_SelectCharac+0x8,(%eax)
08595266 +0x0246:  leave
08595267 +0x0247:  ret
08595268 +0x0248:  push   %ebp
08595269 +0x0249:  mov    %esp,%ebp
0859526b +0x024b:  sub    $0x18,%esp
0859526e +0x024e:  mov    0x8(%ebp),%eax
08595271 +0x0251:  mov    %eax,(%esp)
08595274 +0x0254:  call   08598162 <+0x3142>
08595279 +0x0259:  mov    0x8(%ebp),%eax
0859527c +0x025c:  movl   $&_ZTV24DisPatcher_SelectDungeon+0x8,(%eax)
08595282 +0x0262:  leave
08595283 +0x0263:  ret
08595284 +0x0264:  push   %ebp
08595285 +0x0265:  mov    %esp,%ebp
08595287 +0x0267:  sub    $0x18,%esp
0859528a +0x026a:  mov    0x8(%ebp),%eax
0859528d +0x026d:  mov    %eax,(%esp)
08595290 +0x0270:  call   0859817e <+0x315e>
08595295 +0x0275:  mov    0x8(%ebp),%eax
08595298 +0x0278:  movl   $&_ZTV18DisPatcher_SetArea+0x8,(%eax)
0859529e +0x027e:  leave
0859529f +0x027f:  ret
085952a0 +0x0280:  push   %ebp
085952a1 +0x0281:  mov    %esp,%ebp
085952a3 +0x0283:  sub    $0x18,%esp
085952a6 +0x0286:  mov    0x8(%ebp),%eax
085952a9 +0x0289:  mov    %eax,(%esp)
085952ac +0x028c:  call   0859819a <+0x317a>
085952b1 +0x0291:  mov    0x8(%ebp),%eax
085952b4 +0x0294:  movl   $&_ZTV17DisPatcher_SetPos+0x8,(%eax)
085952ba +0x029a:  leave
085952bb +0x029b:  ret
085952bc +0x029c:  push   %ebp
085952bd +0x029d:  mov    %esp,%ebp
085952bf +0x029f:  sub    $0x18,%esp
085952c2 +0x02a2:  mov    0x8(%ebp),%eax
085952c5 +0x02a5:  mov    %eax,(%esp)
085952c8 +0x02a8:  call   085981b6 <+0x3196>
085952cd +0x02ad:  mov    0x8(%ebp),%eax
085952d0 +0x02b0:  movl   $&_ZTV22DisPatcher_SetPVPReady+0x8,(%eax)
085952d6 +0x02b6:  leave
085952d7 +0x02b7:  ret
085952d8 +0x02b8:  push   %ebp
085952d9 +0x02b9:  mov    %esp,%ebp
085952db +0x02bb:  sub    $0x18,%esp
085952de +0x02be:  mov    0x8(%ebp),%eax
085952e1 +0x02c1:  mov    %eax,(%esp)
085952e4 +0x02c4:  call   085981d2 <+0x31b2>
085952e9 +0x02c9:  mov    0x8(%ebp),%eax
085952ec +0x02cc:  movl   $&_ZTV19DisPatcher_SortItem+0x8,(%eax)
085952f2 +0x02d2:  leave
085952f3 +0x02d3:  ret
085952f4 +0x02d4:  push   %ebp
085952f5 +0x02d5:  mov    %esp,%ebp
085952f7 +0x02d7:  sub    $0x18,%esp
085952fa +0x02da:  mov    0x8(%ebp),%eax
085952fd +0x02dd:  mov    %eax,(%esp)
08595300 +0x02e0:  call   085981ee <+0x31ce>
08595305 +0x02e5:  mov    0x8(%ebp),%eax
08595308 +0x02e8:  movl   $&_ZTV18DisPatcher_UseCoin+0x8,(%eax)
0859530e +0x02ee:  leave
0859530f +0x02ef:  ret
08595310 +0x02f0:  push   %ebp
08595311 +0x02f1:  mov    %esp,%ebp
08595313 +0x02f3:  sub    $0x18,%esp
08595316 +0x02f6:  mov    0x8(%ebp),%eax
08595319 +0x02f9:  mov    %eax,(%esp)
0859531c +0x02fc:  call   0859820a <+0x31ea>
08595321 +0x0301:  mov    0x8(%ebp),%eax
08595324 +0x0304:  movl   $&_ZTV19DisPatcher_UseSkill+0x8,(%eax)
0859532a +0x030a:  leave
0859532b +0x030b:  ret
0859532c +0x030c:  push   %ebp
0859532d +0x030d:  mov    %esp,%ebp
0859532f +0x030f:  sub    $0x18,%esp
08595332 +0x0312:  mov    0x8(%ebp),%eax
08595335 +0x0315:  mov    %eax,(%esp)
08595338 +0x0318:  call   08598226 <+0x3206>
0859533d +0x031d:  mov    0x8(%ebp),%eax
08595340 +0x0320:  movl   $&_ZTV23DisPatcher_WalkoutParty+0x8,(%eax)
08595346 +0x0326:  leave
08595347 +0x0327:  ret
08595348 +0x0328:  push   %ebp
08595349 +0x0329:  mov    %esp,%ebp
0859534b +0x032b:  push   %edi
0859534c +0x032c:  push   %esi
0859534d +0x032d:  push   %ebx
0859534e +0x032e:  sub    $0x2c,%esp
08595351 +0x0331:  mov    0x8(%ebp),%eax
08595354 +0x0334:  mov    %eax,(%esp)
08595357 +0x0337:  call   08598242 <+0x3222>
0859535c +0x033c:  mov    0x8(%ebp),%eax
0859535f +0x033f:  movl   $&_ZTV26Dispatcher_MonstercardBind+0x8,(%eax)
08595365 +0x0345:  movl   $0x0,(%esp)
0859536c +0x034c:  call   0807d750 <_init+0x48>
08595371 +0x0351:  mov    %eax,-0x1c(%ebp)
08595374 +0x0354:  lea    -0x1c(%ebp),%esi
08595377 +0x0357:  movl   $0x9c8,(%esp)
0859537e +0x035e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08595383 +0x0363:  mov    %eax,%ebx
08595385 +0x0365:  mov    %ebx,%eax
08595387 +0x0367:  mov    %esi,0x4(%esp)
0859538b +0x036b:  mov    %eax,(%esp)
0859538e +0x036e:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
08595393 +0x0373:  jmp    085953a7 <+0x387>
08595395 +0x0375:  mov    %edx,%esi
08595397 +0x0377:  mov    %eax,%edi
08595399 +0x0379:  mov    %ebx,(%esp)
0859539c +0x037c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085953a1 +0x0381:  mov    %edi,%eax
085953a3 +0x0383:  mov    %esi,%edx
085953a5 +0x0385:  jmp    085953b7 <+0x397>
085953a7 +0x0387:  mov    %ebx,%edx
085953a9 +0x0389:  mov    0x8(%ebp),%eax
085953ac +0x038c:  mov    %edx,0x4(%eax)
085953af +0x038f:  add    $0x2c,%esp
085953b2 +0x0392:  pop    %ebx
085953b3 +0x0393:  pop    %esi
085953b4 +0x0394:  pop    %edi
085953b5 +0x0395:  pop    %ebp
085953b6 +0x0396:  ret
085953b7 +0x0397:  mov    %edx,%ebx
085953b9 +0x0399:  mov    %eax,%esi
085953bb +0x039b:  mov    0x8(%ebp),%eax
085953be +0x039e:  mov    %eax,(%esp)
085953c1 +0x03a1:  call   08236a08 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc0b2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc0b2
085953c6 +0x03a6:  mov    %esi,%eax
085953c8 +0x03a8:  mov    %ebx,%edx
085953ca +0x03aa:  mov    %eax,(%esp)
085953cd +0x03ad:  call   08ae3750 <_Unwind_Resume>
085953d2 +0x03b2:  push   %ebp
085953d3 +0x03b3:  mov    %esp,%ebp
085953d5 +0x03b5:  sub    $0x18,%esp
085953d8 +0x03b8:  mov    0x8(%ebp),%eax
085953db +0x03bb:  mov    %eax,(%esp)
085953de +0x03be:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085953e3 +0x03c3:  mov    0x8(%ebp),%eax
085953e6 +0x03c6:  movl   $&_ZTV16DisPatcher_Login+0x8,(%eax)
085953ec +0x03cc:  mov    0x8(%ebp),%eax
085953ef +0x03cf:  movl   $0x0,0x4(%eax)
085953f6 +0x03d6:  leave
085953f7 +0x03d7:  ret
085953f8 +0x03d8:  push   %ebp
085953f9 +0x03d9:  mov    %esp,%ebp
085953fb +0x03db:  sub    $0x18,%esp
085953fe +0x03de:  mov    0x8(%ebp),%eax
08595401 +0x03e1:  mov    %eax,(%esp)
08595404 +0x03e4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595409 +0x03e9:  mov    0x8(%ebp),%eax
0859540c +0x03ec:  movl   $&_ZTV19DisPatcher_Compound+0x8,(%eax)
08595412 +0x03f2:  leave
08595413 +0x03f3:  ret
08595414 +0x03f4:  push   %ebp
08595415 +0x03f5:  mov    %esp,%ebp
08595417 +0x03f7:  sub    $0x18,%esp
0859541a +0x03fa:  mov    0x8(%ebp),%eax
0859541d +0x03fd:  mov    %eax,(%esp)
08595420 +0x0400:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595425 +0x0405:  mov    0x8(%ebp),%eax
08595428 +0x0408:  movl   $&_ZTV17DisPatcher_DieMob+0x8,(%eax)
0859542e +0x040e:  leave
0859542f +0x040f:  ret
08595430 +0x0410:  push   %ebp
08595431 +0x0411:  mov    %esp,%ebp
08595433 +0x0413:  sub    $0x18,%esp
08595436 +0x0416:  mov    0x8(%ebp),%eax
08595439 +0x0419:  mov    %eax,(%esp)
0859543c +0x041c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595441 +0x0421:  mov    0x8(%ebp),%eax
08595444 +0x0424:  movl   $&_ZTV19DisPatcher_EnterPVP+0x8,(%eax)
0859544a +0x042a:  leave
0859544b +0x042b:  ret
0859544c +0x042c:  push   %ebp
0859544d +0x042d:  mov    %esp,%ebp
0859544f +0x042f:  sub    $0x18,%esp
08595452 +0x0432:  mov    0x8(%ebp),%eax
08595455 +0x0435:  mov    %eax,(%esp)
08595458 +0x0438:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859545d +0x043d:  mov    0x8(%ebp),%eax
08595460 +0x0440:  movl   $&_ZTV15DisPatcher_Exit+0x8,(%eax)
08595466 +0x0446:  leave
08595467 +0x0447:  ret
08595468 +0x0448:  push   %ebp
08595469 +0x0449:  mov    %esp,%ebp
0859546b +0x044b:  sub    $0x18,%esp
0859546e +0x044e:  mov    0x8(%ebp),%eax
08595471 +0x0451:  mov    %eax,(%esp)
08595474 +0x0454:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595479 +0x0459:  mov    0x8(%ebp),%eax
0859547c +0x045c:  movl   $&_ZTV23DisPatcher_ExtendAvatar+0x8,(%eax)
08595482 +0x0462:  leave
08595483 +0x0463:  ret
08595484 +0x0464:  push   %ebp
08595485 +0x0465:  mov    %esp,%ebp
08595487 +0x0467:  sub    $0x18,%esp
0859548a +0x046a:  mov    0x8(%ebp),%eax
0859548d +0x046d:  mov    %eax,(%esp)
08595490 +0x0470:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595495 +0x0475:  mov    0x8(%ebp),%eax
08595498 +0x0478:  movl   $&_ZTV22DisPatcher_IncreStatus+0x8,(%eax)
0859549e +0x047e:  leave
0859549f +0x047f:  ret
085954a0 +0x0480:  push   %ebp
085954a1 +0x0481:  mov    %esp,%ebp
085954a3 +0x0483:  sub    $0x18,%esp
085954a6 +0x0486:  mov    0x8(%ebp),%eax
085954a9 +0x0489:  mov    %eax,(%esp)
085954ac +0x048c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085954b1 +0x0491:  mov    0x8(%ebp),%eax
085954b4 +0x0494:  movl   $&_ZTV22DisPatcher_QuestAction+0x8,(%eax)
085954ba +0x049a:  leave
085954bb +0x049b:  ret
085954bc +0x049c:  push   %ebp
085954bd +0x049d:  mov    %esp,%ebp
085954bf +0x049f:  sub    $0x18,%esp
085954c2 +0x04a2:  mov    0x8(%ebp),%eax
085954c5 +0x04a5:  mov    %eax,(%esp)
085954c8 +0x04a8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085954cd +0x04ad:  mov    0x8(%ebp),%eax
085954d0 +0x04b0:  movl   $&_ZTV21DisPatcher_RentAvatar+0x8,(%eax)
085954d6 +0x04b6:  leave
085954d7 +0x04b7:  ret
085954d8 +0x04b8:  push   %ebp
085954d9 +0x04b9:  mov    %esp,%ebp
085954db +0x04bb:  sub    $0x18,%esp
085954de +0x04be:  mov    0x8(%ebp),%eax
085954e1 +0x04c1:  mov    %eax,(%esp)
085954e4 +0x04c4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085954e9 +0x04c9:  mov    0x8(%ebp),%eax
085954ec +0x04cc:  movl   $&_ZTV18DisPatcher_ReqPeer+0x8,(%eax)
085954f2 +0x04d2:  leave
085954f3 +0x04d3:  ret
085954f4 +0x04d4:  push   %ebp
085954f5 +0x04d5:  mov    %esp,%ebp
085954f7 +0x04d7:  sub    $0x18,%esp
085954fa +0x04da:  mov    0x8(%ebp),%eax
085954fd +0x04dd:  mov    %eax,(%esp)
08595500 +0x04e0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595505 +0x04e5:  mov    0x8(%ebp),%eax
08595508 +0x04e8:  movl   $&_ZTV21DisPatcher_ResPvpRank+0x8,(%eax)
0859550e +0x04ee:  leave
0859550f +0x04ef:  ret
08595510 +0x04f0:  push   %ebp
08595511 +0x04f1:  mov    %esp,%ebp
08595513 +0x04f3:  sub    $0x18,%esp
08595516 +0x04f6:  mov    0x8(%ebp),%eax
08595519 +0x04f9:  mov    %eax,(%esp)
0859551c +0x04fc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595521 +0x0501:  mov    0x8(%ebp),%eax
08595524 +0x0504:  movl   $&_ZTV18DisPatcher_ResPeer+0x8,(%eax)
0859552a +0x050a:  leave
0859552b +0x050b:  ret
0859552c +0x050c:  push   %ebp
0859552d +0x050d:  mov    %esp,%ebp
0859552f +0x050f:  sub    $0x18,%esp
08595532 +0x0512:  mov    0x8(%ebp),%eax
08595535 +0x0515:  mov    %eax,(%esp)
08595538 +0x0518:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859553d +0x051d:  mov    0x8(%ebp),%eax
08595540 +0x0520:  movl   $&_ZTV19DisPatcher_SellItem+0x8,(%eax)
08595546 +0x0526:  leave
08595547 +0x0527:  ret
08595548 +0x0528:  push   %ebp
08595549 +0x0529:  mov    %esp,%ebp
0859554b +0x052b:  sub    $0x18,%esp
0859554e +0x052e:  mov    0x8(%ebp),%eax
08595551 +0x0531:  mov    %eax,(%esp)
08595554 +0x0534:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595559 +0x0539:  mov    0x8(%ebp),%eax
0859555c +0x053c:  movl   $&_ZTV19DisPatcher_SendMess+0x8,(%eax)
08595562 +0x0542:  leave
08595563 +0x0543:  ret
08595564 +0x0544:  push   %ebp
08595565 +0x0545:  mov    %esp,%ebp
08595567 +0x0547:  sub    $0x18,%esp
0859556a +0x054a:  mov    0x8(%ebp),%eax
0859556d +0x054d:  mov    %eax,(%esp)
08595570 +0x0550:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595575 +0x0555:  mov    0x8(%ebp),%eax
08595578 +0x0558:  movl   $&_ZTV16DisPatcher_SetIP+0x8,(%eax)
0859557e +0x055e:  leave
0859557f +0x055f:  ret
08595580 +0x0560:  push   %ebp
08595581 +0x0561:  mov    %esp,%ebp
08595583 +0x0563:  sub    $0x18,%esp
08595586 +0x0566:  mov    0x8(%ebp),%eax
08595589 +0x0569:  mov    %eax,(%esp)
0859558c +0x056c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595591 +0x0571:  mov    0x8(%ebp),%eax
08595594 +0x0574:  movl   $&_ZTV24DisPatcher_SetPlayResult+0x8,(%eax)
0859559a +0x057a:  leave
0859559b +0x057b:  ret
0859559c +0x057c:  push   %ebp
0859559d +0x057d:  mov    %esp,%ebp
0859559f +0x057f:  sub    $0x18,%esp
085955a2 +0x0582:  mov    0x8(%ebp),%eax
085955a5 +0x0585:  mov    %eax,(%esp)
085955a8 +0x0588:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085955ad +0x058d:  mov    0x8(%ebp),%eax
085955b0 +0x0590:  movl   $&_ZTV21DisPatcher_SetPVPSeat+0x8,(%eax)
085955b6 +0x0596:  leave
085955b7 +0x0597:  ret
085955b8 +0x0598:  push   %ebp
085955b9 +0x0599:  mov    %esp,%ebp
085955bb +0x059b:  sub    $0x18,%esp
085955be +0x059e:  mov    0x8(%ebp),%eax
085955c1 +0x05a1:  mov    %eax,(%esp)
085955c4 +0x05a4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085955c9 +0x05a9:  mov    0x8(%ebp),%eax
085955cc +0x05ac:  movl   $&_ZTV21DisPatcher_SetPVPTeam+0x8,(%eax)
085955d2 +0x05b2:  leave
085955d3 +0x05b3:  ret
085955d4 +0x05b4:  push   %ebp
085955d5 +0x05b5:  mov    %esp,%ebp
085955d7 +0x05b7:  sub    $0x18,%esp
085955da +0x05ba:  mov    0x8(%ebp),%eax
085955dd +0x05bd:  mov    %eax,(%esp)
085955e0 +0x05c0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085955e5 +0x05c5:  mov    0x8(%ebp),%eax
085955e8 +0x05c8:  movl   $&_ZTV24DisPatcher_SetTradeState+0x8,(%eax)
085955ee +0x05ce:  leave
085955ef +0x05cf:  ret
085955f0 +0x05d0:  push   %ebp
085955f1 +0x05d1:  mov    %esp,%ebp
085955f3 +0x05d3:  sub    $0x18,%esp
085955f6 +0x05d6:  mov    0x8(%ebp),%eax
085955f9 +0x05d9:  mov    %eax,(%esp)
085955fc +0x05dc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595601 +0x05e1:  mov    0x8(%ebp),%eax
08595604 +0x05e4:  movl   $&_ZTV19DisPatcher_UseStack+0x8,(%eax)
0859560a +0x05ea:  leave
0859560b +0x05eb:  ret
0859560c +0x05ec:  push   %ebp
0859560d +0x05ed:  mov    %esp,%ebp
0859560f +0x05ef:  sub    $0x18,%esp
08595612 +0x05f2:  mov    0x8(%ebp),%eax
08595615 +0x05f5:  mov    %eax,(%esp)
08595618 +0x05f8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859561d +0x05fd:  mov    0x8(%ebp),%eax
08595620 +0x0600:  movl   $&_ZTV18DisPatcher_MakePVP+0x8,(%eax)
08595626 +0x0606:  leave
08595627 +0x0607:  ret
08595628 +0x0608:  push   %ebp
08595629 +0x0609:  mov    %esp,%ebp
0859562b +0x060b:  sub    $0x18,%esp
0859562e +0x060e:  mov    0x8(%ebp),%eax
08595631 +0x0611:  mov    %eax,(%esp)
08595634 +0x0614:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595639 +0x0619:  mov    0x8(%ebp),%eax
0859563c +0x061c:  movl   $&_ZTV18DisPatcher_Lottery+0x8,(%eax)
08595642 +0x0622:  leave
08595643 +0x0623:  ret
08595644 +0x0624:  push   %ebp
08595645 +0x0625:  mov    %esp,%ebp
08595647 +0x0627:  sub    $0x18,%esp
0859564a +0x062a:  mov    0x8(%ebp),%eax
0859564d +0x062d:  mov    %eax,(%esp)
08595650 +0x0630:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595655 +0x0635:  mov    0x8(%ebp),%eax
08595658 +0x0638:  movl   $&_ZTV25DisPatcher_SetPVPMapIndex+0x8,(%eax)
0859565e +0x063e:  leave
0859565f +0x063f:  ret
08595660 +0x0640:  push   %ebp
08595661 +0x0641:  mov    %esp,%ebp
08595663 +0x0643:  sub    $0x18,%esp
08595666 +0x0646:  mov    0x8(%ebp),%eax
08595669 +0x0649:  mov    %eax,(%esp)
0859566c +0x064c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595671 +0x0651:  mov    0x8(%ebp),%eax
08595674 +0x0654:  movl   $&_ZTV23DisPatcher_EndPvPResult+0x8,(%eax)
0859567a +0x065a:  leave
0859567b +0x065b:  ret
0859567c +0x065c:  push   %ebp
0859567d +0x065d:  mov    %esp,%ebp
0859567f +0x065f:  sub    $0x18,%esp
08595682 +0x0662:  mov    0x8(%ebp),%eax
08595685 +0x0665:  mov    %eax,(%esp)
08595688 +0x0668:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859568d +0x066d:  mov    0x8(%ebp),%eax
08595690 +0x0670:  movl   $&_ZTV23DisPatcher_DisJointItem+0x8,(%eax)
08595696 +0x0676:  leave
08595697 +0x0677:  ret
08595698 +0x0678:  push   %ebp
08595699 +0x0679:  mov    %esp,%ebp
0859569b +0x067b:  sub    $0x18,%esp
0859569e +0x067e:  mov    0x8(%ebp),%eax
085956a1 +0x0681:  mov    %eax,(%esp)
085956a4 +0x0684:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085956a9 +0x0689:  mov    0x8(%ebp),%eax
085956ac +0x068c:  movl   $&_ZTV21Dispatcher_GM_Command+0x8,(%eax)
085956b2 +0x0692:  leave
085956b3 +0x0693:  ret
085956b4 +0x0694:  push   %ebp
085956b5 +0x0695:  mov    %esp,%ebp
085956b7 +0x0697:  sub    $0x18,%esp
085956ba +0x069a:  mov    0x8(%ebp),%eax
085956bd +0x069d:  mov    %eax,(%esp)
085956c0 +0x06a0:  call   0859825e <+0x323e>
085956c5 +0x06a5:  mov    0x8(%ebp),%eax
085956c8 +0x06a8:  movl   $&_ZTV22Dispatcher_SecurityLog+0x8,(%eax)
085956ce +0x06ae:  leave
085956cf +0x06af:  ret
085956d0 +0x06b0:  push   %ebp
085956d1 +0x06b1:  mov    %esp,%ebp
085956d3 +0x06b3:  sub    $0x18,%esp
085956d6 +0x06b6:  mov    0x8(%ebp),%eax
085956d9 +0x06b9:  mov    %eax,(%esp)
085956dc +0x06bc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085956e1 +0x06c1:  mov    0x8(%ebp),%eax
085956e4 +0x06c4:  movl   $&_ZTVN12advancealtar20Dispatcher_StartGameE+0x8,(%eax)
085956ea +0x06ca:  leave
085956eb +0x06cb:  ret
085956ec +0x06cc:  push   %ebp
085956ed +0x06cd:  mov    %esp,%ebp
085956ef +0x06cf:  sub    $0x18,%esp
085956f2 +0x06d2:  mov    0x8(%ebp),%eax
085956f5 +0x06d5:  mov    %eax,(%esp)
085956f8 +0x06d8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085956fd +0x06dd:  mov    0x8(%ebp),%eax
08595700 +0x06e0:  movl   $&_ZTVN12advancealtar18Dispatcher_BuyItemE+0x8,(%eax)
08595706 +0x06e6:  leave
08595707 +0x06e7:  ret
08595708 +0x06e8:  push   %ebp
08595709 +0x06e9:  mov    %esp,%ebp
0859570b +0x06eb:  sub    $0x18,%esp
0859570e +0x06ee:  mov    0x8(%ebp),%eax
08595711 +0x06f1:  mov    %eax,(%esp)
08595714 +0x06f4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595719 +0x06f9:  mov    0x8(%ebp),%eax
0859571c +0x06fc:  movl   $&_ZTVN12advancealtar18Dispatcher_SetSlotE+0x8,(%eax)
08595722 +0x0702:  leave
08595723 +0x0703:  ret
08595724 +0x0704:  push   %ebp
08595725 +0x0705:  mov    %esp,%ebp
08595727 +0x0707:  sub    $0x18,%esp
0859572a +0x070a:  mov    0x8(%ebp),%eax
0859572d +0x070d:  mov    %eax,(%esp)
08595730 +0x0710:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595735 +0x0715:  mov    0x8(%ebp),%eax
08595738 +0x0718:  movl   $&_ZTVN12advancealtar22Dispatcher_UpgradeGageE+0x8,(%eax)
0859573e +0x071e:  leave
0859573f +0x071f:  ret
08595740 +0x0720:  push   %ebp
08595741 +0x0721:  mov    %esp,%ebp
08595743 +0x0723:  sub    $0x18,%esp
08595746 +0x0726:  mov    0x8(%ebp),%eax
08595749 +0x0729:  mov    %eax,(%esp)
0859574c +0x072c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595751 +0x0731:  mov    0x8(%ebp),%eax
08595754 +0x0734:  movl   $&_ZTVN12advancealtar21Dispatcher_SummonUnitE+0x8,(%eax)
0859575a +0x073a:  leave
0859575b +0x073b:  ret
0859575c +0x073c:  push   %ebp
0859575d +0x073d:  mov    %esp,%ebp
0859575f +0x073f:  sub    $0x18,%esp
08595762 +0x0742:  mov    0x8(%ebp),%eax
08595765 +0x0745:  mov    %eax,(%esp)
08595768 +0x0748:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859576d +0x074d:  mov    0x8(%ebp),%eax
08595770 +0x0750:  movl   $&_ZTVN12advancealtar23Dispatcher_ExchangeSlotE+0x8,(%eax)
08595776 +0x0756:  leave
08595777 +0x0757:  ret
08595778 +0x0758:  push   %ebp
08595779 +0x0759:  mov    %esp,%ebp
0859577b +0x075b:  sub    $0x18,%esp
0859577e +0x075e:  mov    0x8(%ebp),%eax
08595781 +0x0761:  mov    %eax,(%esp)
08595784 +0x0764:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595789 +0x0769:  mov    0x8(%ebp),%eax
0859578c +0x076c:  movl   $&_ZTVN12advancealtar16Dispatcher_PauseE+0x8,(%eax)
08595792 +0x0772:  leave
08595793 +0x0773:  ret
08595794 +0x0774:  push   %ebp
08595795 +0x0775:  mov    %esp,%ebp
08595797 +0x0777:  sub    $0x18,%esp
0859579a +0x077a:  mov    0x8(%ebp),%eax
0859579d +0x077d:  mov    %eax,(%esp)
085957a0 +0x0780:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085957a5 +0x0785:  mov    0x8(%ebp),%eax
085957a8 +0x0788:  movl   $&_ZTVN12advancealtar31Dispatcher_GetAchievementRewardE+0x8,(%eax)
085957ae +0x078e:  leave
085957af +0x078f:  ret
085957b0 +0x0790:  push   %ebp
085957b1 +0x0791:  mov    %esp,%ebp
085957b3 +0x0793:  sub    $0x18,%esp
085957b6 +0x0796:  mov    0x8(%ebp),%eax
085957b9 +0x0799:  mov    %eax,(%esp)
085957bc +0x079c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085957c1 +0x07a1:  mov    0x8(%ebp),%eax
085957c4 +0x07a4:  movl   $&_ZTVN12advancealtar20Dispatcher_ResetStarE+0x8,(%eax)
085957ca +0x07aa:  leave
085957cb +0x07ab:  ret
085957cc +0x07ac:  push   %ebp
085957cd +0x07ad:  mov    %esp,%ebp
085957cf +0x07af:  sub    $0x18,%esp
085957d2 +0x07b2:  mov    0x8(%ebp),%eax
085957d5 +0x07b5:  mov    %eax,(%esp)
085957d8 +0x07b8:  call   0859827a <+0x325a>
085957dd +0x07bd:  mov    0x8(%ebp),%eax
085957e0 +0x07c0:  movl   $&_ZTV37DisPatcher_EventDungeon_DestoryObject+0x8,(%eax)
085957e6 +0x07c6:  leave
085957e7 +0x07c7:  ret
085957e8 +0x07c8:  push   %ebp
085957e9 +0x07c9:  mov    %esp,%ebp
085957eb +0x07cb:  sub    $0x18,%esp
085957ee +0x07ce:  mov    0x8(%ebp),%eax
085957f1 +0x07d1:  mov    %eax,(%esp)
085957f4 +0x07d4:  call   08598296 <+0x3276>
085957f9 +0x07d9:  mov    0x8(%ebp),%eax
085957fc +0x07dc:  movl   $&_ZTV33DisPatcher_EventDungeon_ClearRoom+0x8,(%eax)
08595802 +0x07e2:  leave
08595803 +0x07e3:  ret
08595804 +0x07e4:  push   %ebp
08595805 +0x07e5:  mov    %esp,%ebp
08595807 +0x07e7:  sub    $0x18,%esp
0859580a +0x07ea:  mov    0x8(%ebp),%eax
0859580d +0x07ed:  mov    %eax,(%esp)
08595810 +0x07f0:  call   085982b2 <+0x3292>
08595815 +0x07f5:  mov    0x8(%ebp),%eax
08595818 +0x07f8:  movl   $&_ZTV26Dispatcher_SaveQuestNotify+0x8,(%eax)
0859581e +0x07fe:  leave
0859581f +0x07ff:  ret
08595820 +0x0800:  push   %ebp
08595821 +0x0801:  mov    %esp,%ebp
08595823 +0x0803:  sub    $0x18,%esp
08595826 +0x0806:  mov    0x8(%ebp),%eax
08595829 +0x0809:  mov    %eax,(%esp)
0859582c +0x080c:  call   085982ce <+0x32ae>
08595831 +0x0811:  mov    0x8(%ebp),%eax
08595834 +0x0814:  movl   $&_ZTV35Dispatcher_UseRightOfChangeGrowType+0x8,(%eax)
0859583a +0x081a:  leave
0859583b +0x081b:  ret
0859583c +0x081c:  push   %ebp
0859583d +0x081d:  mov    %esp,%ebp
0859583f +0x081f:  sub    $0x18,%esp
08595842 +0x0822:  mov    0x8(%ebp),%eax
08595845 +0x0825:  mov    %eax,(%esp)
08595848 +0x0828:  call   085982ea <+0x32ca>
0859584d +0x082d:  mov    0x8(%ebp),%eax
08595850 +0x0830:  movl   $&_ZTV29Dispatcher_StackableActionUse+0x8,(%eax)
08595856 +0x0836:  leave
08595857 +0x0837:  ret
08595858 +0x0838:  push   %ebp
08595859 +0x0839:  mov    %esp,%ebp
0859585b +0x083b:  sub    $0x18,%esp
0859585e +0x083e:  mov    0x8(%ebp),%eax
08595861 +0x0841:  mov    %eax,(%esp)
08595864 +0x0844:  call   08598306 <+0x32e6>
08595869 +0x0849:  mov    0x8(%ebp),%eax
0859586c +0x084c:  movl   $&_ZTV22Dispatcher_BingoReward+0x8,(%eax)
08595872 +0x0852:  leave
08595873 +0x0853:  ret
08595874 +0x0854:  push   %ebp
08595875 +0x0855:  mov    %esp,%ebp
08595877 +0x0857:  sub    $0x18,%esp
0859587a +0x085a:  mov    0x8(%ebp),%eax
0859587d +0x085d:  mov    %eax,(%esp)
08595880 +0x0860:  call   08598322 <+0x3302>
08595885 +0x0865:  mov    0x8(%ebp),%eax
08595888 +0x0868:  movl   $&_ZTV20Dispatcher_BingoQuiz+0x8,(%eax)
0859588e +0x086e:  leave
0859588f +0x086f:  ret
08595890 +0x0870:  push   %ebp
08595891 +0x0871:  mov    %esp,%ebp
08595893 +0x0873:  sub    $0x18,%esp
08595896 +0x0876:  mov    0x8(%ebp),%eax
08595899 +0x0879:  mov    %eax,(%esp)
0859589c +0x087c:  call   0859833e <+0x331e>
085958a1 +0x0881:  mov    0x8(%ebp),%eax
085958a4 +0x0884:  movl   $&_ZTV20Dispatcher_SkillInit+0x8,(%eax)
085958aa +0x088a:  leave
085958ab +0x088b:  ret
085958ac +0x088c:  push   %ebp
085958ad +0x088d:  mov    %esp,%ebp
085958af +0x088f:  sub    $0x18,%esp
085958b2 +0x0892:  mov    0x8(%ebp),%eax
085958b5 +0x0895:  mov    %eax,(%esp)
085958b8 +0x0898:  call   0859835a <+0x333a>
085958bd +0x089d:  mov    0x8(%ebp),%eax
085958c0 +0x08a0:  movl   $&_ZTV33Dispatcher_LogIngameAdvertisement+0x8,(%eax)
085958c6 +0x08a6:  leave
085958c7 +0x08a7:  ret
085958c8 +0x08a8:  push   %ebp
085958c9 +0x08a9:  mov    %esp,%ebp
085958cb +0x08ab:  sub    $0x18,%esp
085958ce +0x08ae:  mov    0x8(%ebp),%eax
085958d1 +0x08b1:  mov    %eax,(%esp)
085958d4 +0x08b4:  call   08598376 <+0x3356>
085958d9 +0x08b9:  mov    0x8(%ebp),%eax
085958dc +0x08bc:  movl   $&_ZTV37Dispatcher_RequestIngameAdvertisement+0x8,(%eax)
085958e2 +0x08c2:  leave
085958e3 +0x08c3:  ret
085958e4 +0x08c4:  push   %ebp
085958e5 +0x08c5:  mov    %esp,%ebp
085958e7 +0x08c7:  sub    $0x18,%esp
085958ea +0x08ca:  mov    0x8(%ebp),%eax
085958ed +0x08cd:  mov    %eax,(%esp)
085958f0 +0x08d0:  call   08598392 <+0x3372>
085958f5 +0x08d5:  mov    0x8(%ebp),%eax
085958f8 +0x08d8:  movl   $&_ZTV33Dispatcher_RequestCharacSkillInfo+0x8,(%eax)
085958fe +0x08de:  leave
085958ff +0x08df:  ret
08595900 +0x08e0:  push   %ebp
08595901 +0x08e1:  mov    %esp,%ebp
08595903 +0x08e3:  sub    $0x18,%esp
08595906 +0x08e6:  mov    0x8(%ebp),%eax
08595909 +0x08e9:  mov    %eax,(%esp)
0859590c +0x08ec:  call   085983ae <+0x338e>
08595911 +0x08f1:  mov    0x8(%ebp),%eax
08595914 +0x08f4:  movl   $&_ZTV24Dispatcher_SelectStriker+0x8,(%eax)
0859591a +0x08fa:  leave
0859591b +0x08fb:  ret
0859591c +0x08fc:  push   %ebp
0859591d +0x08fd:  mov    %esp,%ebp
0859591f +0x08ff:  sub    $0x18,%esp
08595922 +0x0902:  mov    0x8(%ebp),%eax
08595925 +0x0905:  mov    %eax,(%esp)
08595928 +0x0908:  call   085983ca <+0x33aa>
0859592d +0x090d:  mov    0x8(%ebp),%eax
08595930 +0x0910:  movl   $&_ZTV29Dispatcher_AvatarOptionChange+0x8,(%eax)
08595936 +0x0916:  leave
08595937 +0x0917:  ret
08595938 +0x0918:  push   %ebp
08595939 +0x0919:  mov    %esp,%ebp
0859593b +0x091b:  sub    $0x18,%esp
0859593e +0x091e:  mov    0x8(%ebp),%eax
08595941 +0x0921:  mov    %eax,(%esp)
08595944 +0x0924:  call   085983e6 <+0x33c6>
08595949 +0x0929:  mov    0x8(%ebp),%eax
0859594c +0x092c:  movl   $&_ZTV31Dispatcher_PartyTeleportConfirm+0x8,(%eax)
08595952 +0x0932:  leave
08595953 +0x0933:  ret
08595954 +0x0934:  push   %ebp
08595955 +0x0935:  mov    %esp,%ebp
08595957 +0x0937:  sub    $0x18,%esp
0859595a +0x093a:  mov    0x8(%ebp),%eax
0859595d +0x093d:  mov    %eax,(%esp)
08595960 +0x0940:  call   08598402 <+0x33e2>
08595965 +0x0945:  mov    0x8(%ebp),%eax
08595968 +0x0948:  movl   $&_ZTV24Dispatcher_PartyTeleport+0x8,(%eax)
0859596e +0x094e:  leave
0859596f +0x094f:  ret
08595970 +0x0950:  push   %ebp
08595971 +0x0951:  mov    %esp,%ebp
08595973 +0x0953:  sub    $0x18,%esp
08595976 +0x0956:  mov    0x8(%ebp),%eax
08595979 +0x0959:  mov    %eax,(%esp)
0859597c +0x095c:  call   0859841e <+0x33fe>
08595981 +0x0961:  mov    0x8(%ebp),%eax
08595984 +0x0964:  movl   $&_ZTV28Dispatcher_FatigueAttendance+0x8,(%eax)
0859598a +0x096a:  leave
0859598b +0x096b:  ret
0859598c +0x096c:  push   %ebp
0859598d +0x096d:  mov    %esp,%ebp
0859598f +0x096f:  sub    $0x18,%esp
08595992 +0x0972:  mov    0x8(%ebp),%eax
08595995 +0x0975:  mov    %eax,(%esp)
08595998 +0x0978:  call   0859843a <+0x341a>
0859599d +0x097d:  mov    0x8(%ebp),%eax
085959a0 +0x0980:  movl   $&_ZTV22Dispatcher_RefundSkill+0x8,(%eax)
085959a6 +0x0986:  leave
085959a7 +0x0987:  ret
085959a8 +0x0988:  push   %ebp
085959a9 +0x0989:  mov    %esp,%ebp
085959ab +0x098b:  sub    $0x18,%esp
085959ae +0x098e:  mov    0x8(%ebp),%eax
085959b1 +0x0991:  mov    %eax,(%esp)
085959b4 +0x0994:  call   08598456 <+0x3436>
085959b9 +0x0999:  mov    0x8(%ebp),%eax
085959bc +0x099c:  movl   $&_ZTV27Dispatcher_ExpertExtraction+0x8,(%eax)
085959c2 +0x09a2:  leave
085959c3 +0x09a3:  ret
085959c4 +0x09a4:  push   %ebp
085959c5 +0x09a5:  mov    %esp,%ebp
085959c7 +0x09a7:  sub    $0x18,%esp
085959ca +0x09aa:  mov    0x8(%ebp),%eax
085959cd +0x09ad:  mov    %eax,(%esp)
085959d0 +0x09b0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085959d5 +0x09b5:  mov    0x8(%ebp),%eax
085959d8 +0x09b8:  movl   $&_ZTV20DisPatcher_CheckConn+0x8,(%eax)
085959de +0x09be:  leave
085959df +0x09bf:  ret
085959e0 +0x09c0:  push   %ebp
085959e1 +0x09c1:  mov    %esp,%ebp
085959e3 +0x09c3:  sub    $0x18,%esp
085959e6 +0x09c6:  mov    0x8(%ebp),%eax
085959e9 +0x09c9:  mov    %eax,(%esp)
085959ec +0x09cc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085959f1 +0x09d1:  mov    0x8(%ebp),%eax
085959f4 +0x09d4:  movl   $&_ZTV34DisPatcher_ReturnToSelectCharacter+0x8,(%eax)
085959fa +0x09da:  leave
085959fb +0x09db:  ret
085959fc +0x09dc:  push   %ebp
085959fd +0x09dd:  mov    %esp,%ebp
085959ff +0x09df:  sub    $0x18,%esp
08595a02 +0x09e2:  mov    0x8(%ebp),%eax
08595a05 +0x09e5:  mov    %eax,(%esp)
08595a08 +0x09e8:  call   08598472 <+0x3452>
08595a0d +0x09ed:  mov    0x8(%ebp),%eax
08595a10 +0x09f0:  movl   $&_ZTV23DisPatcher_SetPartyInfo+0x8,(%eax)
08595a16 +0x09f6:  leave
08595a17 +0x09f7:  ret
08595a18 +0x09f8:  push   %ebp
08595a19 +0x09f9:  mov    %esp,%ebp
08595a1b +0x09fb:  sub    $0x18,%esp
08595a1e +0x09fe:  mov    0x8(%ebp),%eax
08595a21 +0x0a01:  mov    %eax,(%esp)
08595a24 +0x0a04:  call   0859848e <+0x346e>
08595a29 +0x0a09:  mov    0x8(%ebp),%eax
08595a2c +0x0a0c:  movl   $&_ZTV21DisPatcher_LeaveParty+0x8,(%eax)
08595a32 +0x0a12:  leave
08595a33 +0x0a13:  ret
08595a34 +0x0a14:  push   %ebp
08595a35 +0x0a15:  mov    %esp,%ebp
08595a37 +0x0a17:  sub    $0x18,%esp
08595a3a +0x0a1a:  mov    0x8(%ebp),%eax
08595a3d +0x0a1d:  mov    %eax,(%esp)
08595a40 +0x0a20:  call   085984aa <+0x348a>
08595a45 +0x0a25:  mov    0x8(%ebp),%eax
08595a48 +0x0a28:  movl   $&_ZTV20DisPatcher_StartGame+0x8,(%eax)
08595a4e +0x0a2e:  leave
08595a4f +0x0a2f:  ret
08595a50 +0x0a30:  push   %ebp
08595a51 +0x0a31:  mov    %esp,%ebp
08595a53 +0x0a33:  sub    $0x18,%esp
08595a56 +0x0a36:  mov    0x8(%ebp),%eax
08595a59 +0x0a39:  mov    %eax,(%esp)
08595a5c +0x0a3c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595a61 +0x0a41:  mov    0x8(%ebp),%eax
08595a64 +0x0a44:  movl   $&_ZTV15DisPatcher_Fish+0x8,(%eax)
08595a6a +0x0a4a:  leave
08595a6b +0x0a4b:  ret
08595a6c +0x0a4c:  push   %ebp
08595a6d +0x0a4d:  mov    %esp,%ebp
08595a6f +0x0a4f:  sub    $0x18,%esp
08595a72 +0x0a52:  mov    0x8(%ebp),%eax
08595a75 +0x0a55:  mov    %eax,(%esp)
08595a78 +0x0a58:  call   085984c6 <+0x34a6>
08595a7d +0x0a5d:  mov    0x8(%ebp),%eax
08595a80 +0x0a60:  movl   $&_ZTV21DisPatcher_FinishLoad+0x8,(%eax)
08595a86 +0x0a66:  leave
08595a87 +0x0a67:  ret
08595a88 +0x0a68:  push   %ebp
08595a89 +0x0a69:  mov    %esp,%ebp
08595a8b +0x0a6b:  sub    $0x18,%esp
08595a8e +0x0a6e:  mov    0x8(%ebp),%eax
08595a91 +0x0a71:  mov    %eax,(%esp)
08595a94 +0x0a74:  call   085984e2 <+0x34c2>
08595a99 +0x0a79:  mov    0x8(%ebp),%eax
08595a9c +0x0a7c:  movl   $&_ZTV29DisPatcher_DieCharacInDungeon+0x8,(%eax)
08595aa2 +0x0a82:  leave
08595aa3 +0x0a83:  ret
08595aa4 +0x0a84:  push   %ebp
08595aa5 +0x0a85:  mov    %esp,%ebp
08595aa7 +0x0a87:  sub    $0x18,%esp
08595aaa +0x0a8a:  mov    0x8(%ebp),%eax
08595aad +0x0a8d:  mov    %eax,(%esp)
08595ab0 +0x0a90:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595ab5 +0x0a95:  mov    0x8(%ebp),%eax
08595ab8 +0x0a98:  movl   $&_ZTV21DisPatcher_GiveUpGame+0x8,(%eax)
08595abe +0x0a9e:  leave
08595abf +0x0a9f:  ret
08595ac0 +0x0aa0:  push   %ebp
08595ac1 +0x0aa1:  mov    %esp,%ebp
08595ac3 +0x0aa3:  sub    $0x18,%esp
08595ac6 +0x0aa6:  mov    0x8(%ebp),%eax
08595ac9 +0x0aa9:  mov    %eax,(%esp)
08595acc +0x0aac:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595ad1 +0x0ab1:  mov    0x8(%ebp),%eax
08595ad4 +0x0ab4:  movl   $&_ZTV27Dispatcher_ReportBadP2PUser+0x8,(%eax)
08595ada +0x0aba:  leave
08595adb +0x0abb:  ret
08595adc +0x0abc:  push   %ebp
08595add +0x0abd:  mov    %esp,%ebp
08595adf +0x0abf:  sub    $0x18,%esp
08595ae2 +0x0ac2:  mov    0x8(%ebp),%eax
08595ae5 +0x0ac5:  mov    %eax,(%esp)
08595ae8 +0x0ac8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595aed +0x0acd:  mov    0x8(%ebp),%eax
08595af0 +0x0ad0:  movl   $&_ZTV17DisPatcher_DiePvP+0x8,(%eax)
08595af6 +0x0ad6:  leave
08595af7 +0x0ad7:  ret
08595af8 +0x0ad8:  push   %ebp
08595af9 +0x0ad9:  mov    %esp,%ebp
08595afb +0x0adb:  sub    $0x18,%esp
08595afe +0x0ade:  mov    0x8(%ebp),%eax
08595b01 +0x0ae1:  mov    %eax,(%esp)
08595b04 +0x0ae4:  call   085984fe <+0x34de>
08595b09 +0x0ae9:  mov    0x8(%ebp),%eax
08595b0c +0x0aec:  movl   $&_ZTV20DisPatcher_AddFriend+0x8,(%eax)
08595b12 +0x0af2:  leave
08595b13 +0x0af3:  ret
08595b14 +0x0af4:  push   %ebp
08595b15 +0x0af5:  mov    %esp,%ebp
08595b17 +0x0af7:  sub    $0x18,%esp
08595b1a +0x0afa:  mov    0x8(%ebp),%eax
08595b1d +0x0afd:  mov    %eax,(%esp)
08595b20 +0x0b00:  call   0859851a <+0x34fa>
08595b25 +0x0b05:  mov    0x8(%ebp),%eax
08595b28 +0x0b08:  movl   $&_ZTV23DisPatcher_RemoveFriend+0x8,(%eax)
08595b2e +0x0b0e:  leave
08595b2f +0x0b0f:  ret
08595b30 +0x0b10:  push   %ebp
08595b31 +0x0b11:  mov    %esp,%ebp
08595b33 +0x0b13:  sub    $0x18,%esp
08595b36 +0x0b16:  mov    0x8(%ebp),%eax
08595b39 +0x0b19:  mov    %eax,(%esp)
08595b3c +0x0b1c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595b41 +0x0b21:  mov    0x8(%ebp),%eax
08595b44 +0x0b24:  movl   $&_ZTV15DisPatcher_Cera+0x8,(%eax)
08595b4a +0x0b2a:  leave
08595b4b +0x0b2b:  ret
08595b4c +0x0b2c:  push   %ebp
08595b4d +0x0b2d:  mov    %esp,%ebp
08595b4f +0x0b2f:  sub    $0x18,%esp
08595b52 +0x0b32:  mov    0x8(%ebp),%eax
08595b55 +0x0b35:  mov    %eax,(%esp)
08595b58 +0x0b38:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595b5d +0x0b3d:  mov    0x8(%ebp),%eax
08595b60 +0x0b40:  movl   $&_ZTV26Dispatcher_BuyCeraShopItem+0x8,(%eax)
08595b66 +0x0b46:  leave
08595b67 +0x0b47:  ret
08595b68 +0x0b48:  push   %ebp
08595b69 +0x0b49:  mov    %esp,%ebp
08595b6b +0x0b4b:  sub    $0x18,%esp
08595b6e +0x0b4e:  mov    0x8(%ebp),%eax
08595b71 +0x0b51:  mov    %eax,(%esp)
08595b74 +0x0b54:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595b79 +0x0b59:  mov    0x8(%ebp),%eax
08595b7c +0x0b5c:  movl   $&_ZTV24Dispatcher_GenCeraTicket+0x8,(%eax)
08595b82 +0x0b62:  leave
08595b83 +0x0b63:  ret
08595b84 +0x0b64:  push   %ebp
08595b85 +0x0b65:  mov    %esp,%ebp
08595b87 +0x0b67:  sub    $0x18,%esp
08595b8a +0x0b6a:  mov    0x8(%ebp),%eax
08595b8d +0x0b6d:  mov    %eax,(%esp)
08595b90 +0x0b70:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595b95 +0x0b75:  mov    0x8(%ebp),%eax
08595b98 +0x0b78:  movl   $&_ZTV31Dispatcher_Request_PvpExpOfWeek+0x8,(%eax)
08595b9e +0x0b7e:  leave
08595b9f +0x0b7f:  ret
08595ba0 +0x0b80:  push   %ebp
08595ba1 +0x0b81:  mov    %esp,%ebp
08595ba3 +0x0b83:  sub    $0x18,%esp
08595ba6 +0x0b86:  mov    0x8(%ebp),%eax
08595ba9 +0x0b89:  mov    %eax,(%esp)
08595bac +0x0b8c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595bb1 +0x0b91:  mov    0x8(%ebp),%eax
08595bb4 +0x0b94:  movl   $&_ZTV22Dispatcher_EPLPCommand+0x8,(%eax)
08595bba +0x0b9a:  leave
08595bbb +0x0b9b:  ret
08595bbc +0x0b9c:  push   %ebp
08595bbd +0x0b9d:  mov    %esp,%ebp
08595bbf +0x0b9f:  sub    $0x18,%esp
08595bc2 +0x0ba2:  mov    0x8(%ebp),%eax
08595bc5 +0x0ba5:  mov    %eax,(%esp)
08595bc8 +0x0ba8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595bcd +0x0bad:  mov    0x8(%ebp),%eax
08595bd0 +0x0bb0:  movl   $&_ZTV29Dispatcher_Score_Scroll_State+0x8,(%eax)
08595bd6 +0x0bb6:  leave
08595bd7 +0x0bb7:  ret
08595bd8 +0x0bb8:  push   %ebp
08595bd9 +0x0bb9:  mov    %esp,%ebp
08595bdb +0x0bbb:  sub    $0x18,%esp
08595bde +0x0bbe:  mov    0x8(%ebp),%eax
08595be1 +0x0bc1:  mov    %eax,(%esp)
08595be4 +0x0bc4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595be9 +0x0bc9:  mov    0x8(%ebp),%eax
08595bec +0x0bcc:  movl   $&_ZTV34Dispatcher_Card_Select_Right_State+0x8,(%eax)
08595bf2 +0x0bd2:  leave
08595bf3 +0x0bd3:  ret
08595bf4 +0x0bd4:  push   %ebp
08595bf5 +0x0bd5:  mov    %esp,%ebp
08595bf7 +0x0bd7:  sub    $0x18,%esp
08595bfa +0x0bda:  mov    0x8(%ebp),%eax
08595bfd +0x0bdd:  mov    %eax,(%esp)
08595c00 +0x0be0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595c05 +0x0be5:  mov    0x8(%ebp),%eax
08595c08 +0x0be8:  movl   $&_ZTV22Dispatcher_Select_Card+0x8,(%eax)
08595c0e +0x0bee:  leave
08595c0f +0x0bef:  ret
08595c10 +0x0bf0:  push   %ebp
08595c11 +0x0bf1:  mov    %esp,%ebp
08595c13 +0x0bf3:  sub    $0x18,%esp
08595c16 +0x0bf6:  mov    0x8(%ebp),%eax
08595c19 +0x0bf9:  mov    %eax,(%esp)
08595c1c +0x0bfc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595c21 +0x0c01:  mov    0x8(%ebp),%eax
08595c24 +0x0c04:  movl   $&_ZTV27Dispatcher_CallGuildMembers+0x8,(%eax)
08595c2a +0x0c0a:  leave
08595c2b +0x0c0b:  ret
08595c2c +0x0c0c:  push   %ebp
08595c2d +0x0c0d:  mov    %esp,%ebp
08595c2f +0x0c0f:  sub    $0x18,%esp
08595c32 +0x0c12:  mov    0x8(%ebp),%eax
08595c35 +0x0c15:  mov    %eax,(%esp)
08595c38 +0x0c18:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595c3d +0x0c1d:  mov    0x8(%ebp),%eax
08595c40 +0x0c20:  movl   $&_ZTV31Dispatcher_CallGuildCreateRight+0x8,(%eax)
08595c46 +0x0c26:  leave
08595c47 +0x0c27:  ret
08595c48 +0x0c28:  push   %ebp
08595c49 +0x0c29:  mov    %esp,%ebp
08595c4b +0x0c2b:  sub    $0x18,%esp
08595c4e +0x0c2e:  mov    0x8(%ebp),%eax
08595c51 +0x0c31:  mov    %eax,(%esp)
08595c54 +0x0c34:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595c59 +0x0c39:  mov    0x8(%ebp),%eax
08595c5c +0x0c3c:  movl   $&_ZTV27Dispatcher_CallGuildLevelUp+0x8,(%eax)
08595c62 +0x0c42:  leave
08595c63 +0x0c43:  ret
08595c64 +0x0c44:  push   %ebp
08595c65 +0x0c45:  mov    %esp,%ebp
08595c67 +0x0c47:  sub    $0x18,%esp
08595c6a +0x0c4a:  mov    0x8(%ebp),%eax
08595c6d +0x0c4d:  mov    %eax,(%esp)
08595c70 +0x0c50:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595c75 +0x0c55:  mov    0x8(%ebp),%eax
08595c78 +0x0c58:  movl   $&_ZTV24Dispatcher_CallGuildInfo+0x8,(%eax)
08595c7e +0x0c5e:  leave
08595c7f +0x0c5f:  ret
08595c80 +0x0c60:  push   %ebp
08595c81 +0x0c61:  mov    %esp,%ebp
08595c83 +0x0c63:  sub    $0x18,%esp
08595c86 +0x0c66:  mov    0x8(%ebp),%eax
08595c89 +0x0c69:  mov    %eax,(%esp)
08595c8c +0x0c6c:  call   08598536 <+0x3516>
08595c91 +0x0c71:  mov    0x8(%ebp),%eax
08595c94 +0x0c74:  movl   $&_ZTV29Dispatcher_RequestMemberEnter+0x8,(%eax)
08595c9a +0x0c7a:  leave
08595c9b +0x0c7b:  ret
08595c9c +0x0c7c:  push   %ebp
08595c9d +0x0c7d:  mov    %esp,%ebp
08595c9f +0x0c7f:  sub    $0x18,%esp
08595ca2 +0x0c82:  mov    0x8(%ebp),%eax
08595ca5 +0x0c85:  mov    %eax,(%esp)
08595ca8 +0x0c88:  call   08598552 <+0x3532>
08595cad +0x0c8d:  mov    0x8(%ebp),%eax
08595cb0 +0x0c90:  movl   $&_ZTV27Dispatcher_MemberEnterReply+0x8,(%eax)
08595cb6 +0x0c96:  leave
08595cb7 +0x0c97:  ret
08595cb8 +0x0c98:  push   %ebp
08595cb9 +0x0c99:  mov    %esp,%ebp
08595cbb +0x0c9b:  sub    $0x18,%esp
08595cbe +0x0c9e:  mov    0x8(%ebp),%eax
08595cc1 +0x0ca1:  mov    %eax,(%esp)
08595cc4 +0x0ca4:  call   0859856e <+0x354e>
08595cc9 +0x0ca9:  mov    0x8(%ebp),%eax
08595ccc +0x0cac:  movl   $&_ZTV23Dispatcher_MemberSecede+0x8,(%eax)
08595cd2 +0x0cb2:  leave
08595cd3 +0x0cb3:  ret
08595cd4 +0x0cb4:  push   %ebp
08595cd5 +0x0cb5:  mov    %esp,%ebp
08595cd7 +0x0cb7:  sub    $0x18,%esp
08595cda +0x0cba:  mov    0x8(%ebp),%eax
08595cdd +0x0cbd:  mov    %eax,(%esp)
08595ce0 +0x0cc0:  call   0859858a <+0x356a>
08595ce5 +0x0cc5:  mov    0x8(%ebp),%eax
08595ce8 +0x0cc8:  movl   $&_ZTV25Dispatcher_CallMemberList+0x8,(%eax)
08595cee +0x0cce:  leave
08595cef +0x0ccf:  ret
08595cf0 +0x0cd0:  push   %ebp
08595cf1 +0x0cd1:  mov    %esp,%ebp
08595cf3 +0x0cd3:  sub    $0x18,%esp
08595cf6 +0x0cd6:  mov    0x8(%ebp),%eax
08595cf9 +0x0cd9:  mov    %eax,(%esp)
08595cfc +0x0cdc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595d01 +0x0ce1:  mov    0x8(%ebp),%eax
08595d04 +0x0ce4:  movl   $&_ZTV22Dispatcher_UpgradeItem+0x8,(%eax)
08595d0a +0x0cea:  leave
08595d0b +0x0ceb:  ret
08595d0c +0x0cec:  push   %ebp
08595d0d +0x0ced:  mov    %esp,%ebp
08595d0f +0x0cef:  sub    $0x18,%esp
08595d12 +0x0cf2:  mov    0x8(%ebp),%eax
08595d15 +0x0cf5:  mov    %eax,(%esp)
08595d18 +0x0cf8:  call   085985a6 <+0x3586>
08595d1d +0x0cfd:  mov    0x8(%ebp),%eax
08595d20 +0x0d00:  movl   $&_ZTV30Dispatcher_UpgradeItemSeparate+0x8,(%eax)
08595d26 +0x0d06:  leave
08595d27 +0x0d07:  ret
08595d28 +0x0d08:  push   %ebp
08595d29 +0x0d09:  mov    %esp,%ebp
08595d2b +0x0d0b:  sub    $0x18,%esp
08595d2e +0x0d0e:  mov    0x8(%ebp),%eax
08595d31 +0x0d11:  mov    %eax,(%esp)
08595d34 +0x0d14:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595d39 +0x0d19:  mov    0x8(%ebp),%eax
08595d3c +0x0d1c:  movl   $&_ZTV22Dispatcher_ModItemAttr+0x8,(%eax)
08595d42 +0x0d22:  leave
08595d43 +0x0d23:  ret
08595d44 +0x0d24:  push   %ebp
08595d45 +0x0d25:  mov    %esp,%ebp
08595d47 +0x0d27:  sub    $0x18,%esp
08595d4a +0x0d2a:  mov    0x8(%ebp),%eax
08595d4d +0x0d2d:  mov    %eax,(%esp)
08595d50 +0x0d30:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595d55 +0x0d35:  mov    0x8(%ebp),%eax
08595d58 +0x0d38:  movl   $&_ZTV23DisPatcher_EnterWarRoom+0x8,(%eax)
08595d5e +0x0d3e:  leave
08595d5f +0x0d3f:  ret
08595d60 +0x0d40:  push   %ebp
08595d61 +0x0d41:  mov    %esp,%ebp
08595d63 +0x0d43:  sub    $0x18,%esp
08595d66 +0x0d46:  mov    0x8(%ebp),%eax
08595d69 +0x0d49:  mov    %eax,(%esp)
08595d6c +0x0d4c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595d71 +0x0d51:  mov    0x8(%ebp),%eax
08595d74 +0x0d54:  movl   $&_ZTV30DisPatcher_SetWarRoomSeatState+0x8,(%eax)
08595d7a +0x0d5a:  leave
08595d7b +0x0d5b:  ret
08595d7c +0x0d5c:  push   %ebp
08595d7d +0x0d5d:  mov    %esp,%ebp
08595d7f +0x0d5f:  sub    $0x18,%esp
08595d82 +0x0d62:  mov    0x8(%ebp),%eax
08595d85 +0x0d65:  mov    %eax,(%esp)
08595d88 +0x0d68:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595d8d +0x0d6d:  mov    0x8(%ebp),%eax
08595d90 +0x0d70:  movl   $&_ZTV30DisPatcher_DieWarRoomCharacter+0x8,(%eax)
08595d96 +0x0d76:  leave
08595d97 +0x0d77:  ret
08595d98 +0x0d78:  push   %ebp
08595d99 +0x0d79:  mov    %esp,%ebp
08595d9b +0x0d7b:  sub    $0x18,%esp
08595d9e +0x0d7e:  mov    0x8(%ebp),%eax
08595da1 +0x0d81:  mov    %eax,(%esp)
08595da4 +0x0d84:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595da9 +0x0d89:  mov    0x8(%ebp),%eax
08595dac +0x0d8c:  movl   $&_ZTV27DisPatcher_StartWarRoomTemp+0x8,(%eax)
08595db2 +0x0d92:  leave
08595db3 +0x0d93:  ret
08595db4 +0x0d94:  push   %ebp
08595db5 +0x0d95:  mov    %esp,%ebp
08595db7 +0x0d97:  sub    $0x18,%esp
08595dba +0x0d9a:  mov    0x8(%ebp),%eax
08595dbd +0x0d9d:  mov    %eax,(%esp)
08595dc0 +0x0da0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595dc5 +0x0da5:  mov    0x8(%ebp),%eax
08595dc8 +0x0da8:  movl   $&_ZTV30Dispatcher_BuyPrivateStoreItem+0x8,(%eax)
08595dce +0x0dae:  leave
08595dcf +0x0daf:  ret
08595dd0 +0x0db0:  push   %ebp
08595dd1 +0x0db1:  mov    %esp,%ebp
08595dd3 +0x0db3:  sub    $0x18,%esp
08595dd6 +0x0db6:  mov    0x8(%ebp),%eax
08595dd9 +0x0db9:  mov    %eax,(%esp)
08595ddc +0x0dbc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595de1 +0x0dc1:  mov    0x8(%ebp),%eax
08595de4 +0x0dc4:  movl   $&_ZTV28Dispatcher_EnterPrivateStore+0x8,(%eax)
08595dea +0x0dca:  leave
08595deb +0x0dcb:  ret
08595dec +0x0dcc:  push   %ebp
08595ded +0x0dcd:  mov    %esp,%ebp
08595def +0x0dcf:  sub    $0x18,%esp
08595df2 +0x0dd2:  mov    0x8(%ebp),%eax
08595df5 +0x0dd5:  mov    %eax,(%esp)
08595df8 +0x0dd8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595dfd +0x0ddd:  mov    0x8(%ebp),%eax
08595e00 +0x0de0:  movl   $&_ZTV27Dispatcher_ExitPrivateStore+0x8,(%eax)
08595e06 +0x0de6:  leave
08595e07 +0x0de7:  ret
08595e08 +0x0de8:  push   %ebp
08595e09 +0x0de9:  mov    %esp,%ebp
08595e0b +0x0deb:  sub    $0x18,%esp
08595e0e +0x0dee:  mov    0x8(%ebp),%eax
08595e11 +0x0df1:  mov    %eax,(%esp)
08595e14 +0x0df4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595e19 +0x0df9:  mov    0x8(%ebp),%eax
08595e1c +0x0dfc:  movl   $&_ZTV29Dispatcher_CreatePrivateStore+0x8,(%eax)
08595e22 +0x0e02:  leave
08595e23 +0x0e03:  ret
08595e24 +0x0e04:  push   %ebp
08595e25 +0x0e05:  mov    %esp,%ebp
08595e27 +0x0e07:  sub    $0x18,%esp
08595e2a +0x0e0a:  mov    0x8(%ebp),%eax
08595e2d +0x0e0d:  mov    %eax,(%esp)
08595e30 +0x0e10:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595e35 +0x0e15:  mov    0x8(%ebp),%eax
08595e38 +0x0e18:  movl   $&_ZTV29Dispatcher_RemovePrivateStore+0x8,(%eax)
08595e3e +0x0e1e:  leave
08595e3f +0x0e1f:  ret
08595e40 +0x0e20:  push   %ebp
08595e41 +0x0e21:  mov    %esp,%ebp
08595e43 +0x0e23:  sub    $0x18,%esp
08595e46 +0x0e26:  mov    0x8(%ebp),%eax
08595e49 +0x0e29:  mov    %eax,(%esp)
08595e4c +0x0e2c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595e51 +0x0e31:  mov    0x8(%ebp),%eax
08595e54 +0x0e34:  movl   $&_ZTV26Dispatcher_CompleteDisplay+0x8,(%eax)
08595e5a +0x0e3a:  leave
08595e5b +0x0e3b:  ret
08595e5c +0x0e3c:  push   %ebp
08595e5d +0x0e3d:  mov    %esp,%ebp
08595e5f +0x0e3f:  sub    $0x18,%esp
08595e62 +0x0e42:  mov    0x8(%ebp),%eax
08595e65 +0x0e45:  mov    %eax,(%esp)
08595e68 +0x0e48:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595e6d +0x0e4d:  mov    0x8(%ebp),%eax
08595e70 +0x0e50:  movl   $&_ZTV21Dispatcher_MoveToGate+0x8,(%eax)
08595e76 +0x0e56:  leave
08595e77 +0x0e57:  ret
08595e78 +0x0e58:  push   %ebp
08595e79 +0x0e59:  mov    %esp,%ebp
08595e7b +0x0e5b:  sub    $0x18,%esp
08595e7e +0x0e5e:  mov    0x8(%ebp),%eax
08595e81 +0x0e61:  mov    %eax,(%esp)
08595e84 +0x0e64:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595e89 +0x0e69:  mov    0x8(%ebp),%eax
08595e8c +0x0e6c:  movl   $&_ZTV28Dispatcher_PeerConnectResult+0x8,(%eax)
08595e92 +0x0e72:  leave
08595e93 +0x0e73:  ret
08595e94 +0x0e74:  push   %ebp
08595e95 +0x0e75:  mov    %esp,%ebp
08595e97 +0x0e77:  sub    $0x18,%esp
08595e9a +0x0e7a:  mov    0x8(%ebp),%eax
08595e9d +0x0e7d:  mov    %eax,(%esp)
08595ea0 +0x0e80:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595ea5 +0x0e85:  mov    0x8(%ebp),%eax
08595ea8 +0x0e88:  movl   $&_ZTV24Dispatcher_QuickJoinRoom+0x8,(%eax)
08595eae +0x0e8e:  leave
08595eaf +0x0e8f:  ret
08595eb0 +0x0e90:  push   %ebp
08595eb1 +0x0e91:  mov    %esp,%ebp
08595eb3 +0x0e93:  sub    $0x18,%esp
08595eb6 +0x0e96:  mov    0x8(%ebp),%eax
08595eb9 +0x0e99:  mov    %eax,(%esp)
08595ebc +0x0e9c:  call   085985c2 <+0x35a2>
08595ec1 +0x0ea1:  mov    0x8(%ebp),%eax
08595ec4 +0x0ea4:  movl   $&_ZTV23Dispatcher_MailBox_Open+0x8,(%eax)
08595eca +0x0eaa:  leave
08595ecb +0x0eab:  ret
08595ecc +0x0eac:  push   %ebp
08595ecd +0x0ead:  mov    %esp,%ebp
08595ecf +0x0eaf:  sub    $0x18,%esp
08595ed2 +0x0eb2:  mov    0x8(%ebp),%eax
08595ed5 +0x0eb5:  mov    %eax,(%esp)
08595ed8 +0x0eb8:  call   085985de <+0x35be>
08595edd +0x0ebd:  mov    0x8(%ebp),%eax
08595ee0 +0x0ec0:  movl   $&_ZTV23Dispatcher_MailBox_Send+0x8,(%eax)
08595ee6 +0x0ec6:  leave
08595ee7 +0x0ec7:  ret
08595ee8 +0x0ec8:  push   %ebp
08595ee9 +0x0ec9:  mov    %esp,%ebp
08595eeb +0x0ecb:  sub    $0x18,%esp
08595eee +0x0ece:  mov    0x8(%ebp),%eax
08595ef1 +0x0ed1:  mov    %eax,(%esp)
08595ef4 +0x0ed4:  call   085985fa <+0x35da>
08595ef9 +0x0ed9:  mov    0x8(%ebp),%eax
08595efc +0x0edc:  movl   $&_ZTV26Dispatcher_MailBox_Extract+0x8,(%eax)
08595f02 +0x0ee2:  leave
08595f03 +0x0ee3:  ret
08595f04 +0x0ee4:  push   %ebp
08595f05 +0x0ee5:  mov    %esp,%ebp
08595f07 +0x0ee7:  sub    $0x18,%esp
08595f0a +0x0eea:  mov    0x8(%ebp),%eax
08595f0d +0x0eed:  mov    %eax,(%esp)
08595f10 +0x0ef0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595f15 +0x0ef5:  mov    0x8(%ebp),%eax
08595f18 +0x0ef8:  movl   $&_ZTV26Dispatcher_Compound_Avatar+0x8,(%eax)
08595f1e +0x0efe:  leave
08595f1f +0x0eff:  ret
08595f20 +0x0f00:  push   %ebp
08595f21 +0x0f01:  mov    %esp,%ebp
08595f23 +0x0f03:  sub    $0x18,%esp
08595f26 +0x0f06:  mov    0x8(%ebp),%eax
08595f29 +0x0f09:  mov    %eax,(%esp)
08595f2c +0x0f0c:  call   08598616 <+0x35f6>
08595f31 +0x0f11:  mov    0x8(%ebp),%eax
08595f34 +0x0f14:  movl   $&_ZTV25Dispatcher_RenameCreature+0x8,(%eax)
08595f3a +0x0f1a:  leave
08595f3b +0x0f1b:  ret
08595f3c +0x0f1c:  push   %ebp
08595f3d +0x0f1d:  mov    %esp,%ebp
08595f3f +0x0f1f:  sub    $0x18,%esp
08595f42 +0x0f22:  mov    0x8(%ebp),%eax
08595f45 +0x0f25:  mov    %eax,(%esp)
08595f48 +0x0f28:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595f4d +0x0f2d:  mov    0x8(%ebp),%eax
08595f50 +0x0f30:  movl   $&_ZTV27Dispatcher_ResponseCreature+0x8,(%eax)
08595f56 +0x0f36:  leave
08595f57 +0x0f37:  ret
08595f58 +0x0f38:  push   %ebp
08595f59 +0x0f39:  mov    %esp,%ebp
08595f5b +0x0f3b:  sub    $0x18,%esp
08595f5e +0x0f3e:  mov    0x8(%ebp),%eax
08595f61 +0x0f41:  mov    %eax,(%esp)
08595f64 +0x0f44:  call   08598632 <+0x3612>
08595f69 +0x0f49:  mov    0x8(%ebp),%eax
08595f6c +0x0f4c:  movl   $&_ZTV24Dispatcher_HatchCreature+0x8,(%eax)
08595f72 +0x0f52:  leave
08595f73 +0x0f53:  ret
08595f74 +0x0f54:  push   %ebp
08595f75 +0x0f55:  mov    %esp,%ebp
08595f77 +0x0f57:  sub    $0x18,%esp
08595f7a +0x0f5a:  mov    0x8(%ebp),%eax
08595f7d +0x0f5d:  mov    %eax,(%esp)
08595f80 +0x0f60:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595f85 +0x0f65:  mov    0x8(%ebp),%eax
08595f88 +0x0f68:  movl   $&_ZTV31Dispatcher_GatheringPartyStatus+0x8,(%eax)
08595f8e +0x0f6e:  leave
08595f8f +0x0f6f:  ret
08595f90 +0x0f70:  push   %ebp
08595f91 +0x0f71:  mov    %esp,%ebp
08595f93 +0x0f73:  sub    $0x18,%esp
08595f96 +0x0f76:  mov    0x8(%ebp),%eax
08595f99 +0x0f79:  mov    %eax,(%esp)
08595f9c +0x0f7c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595fa1 +0x0f81:  mov    0x8(%ebp),%eax
08595fa4 +0x0f84:  movl   $&_ZTV28DisPatcher_ReportClient4Hack+0x8,(%eax)
08595faa +0x0f8a:  leave
08595fab +0x0f8b:  ret
08595fac +0x0f8c:  push   %ebp
08595fad +0x0f8d:  mov    %esp,%ebp
08595faf +0x0f8f:  sub    $0x18,%esp
08595fb2 +0x0f92:  mov    0x8(%ebp),%eax
08595fb5 +0x0f95:  mov    %eax,(%esp)
08595fb8 +0x0f98:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595fbd +0x0f9d:  mov    0x8(%ebp),%eax
08595fc0 +0x0fa0:  movl   $&_ZTV30DisPatcher_RequestGuildWarInfo+0x8,(%eax)
08595fc6 +0x0fa6:  leave
08595fc7 +0x0fa7:  ret
08595fc8 +0x0fa8:  push   %ebp
08595fc9 +0x0fa9:  mov    %esp,%ebp
08595fcb +0x0fab:  sub    $0x18,%esp
08595fce +0x0fae:  mov    0x8(%ebp),%eax
08595fd1 +0x0fb1:  mov    %eax,(%esp)
08595fd4 +0x0fb4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595fd9 +0x0fb9:  mov    0x8(%ebp),%eax
08595fdc +0x0fbc:  movl   $&_ZTV23DisPatcher_PvpHeartBeat+0x8,(%eax)
08595fe2 +0x0fc2:  leave
08595fe3 +0x0fc3:  ret
08595fe4 +0x0fc4:  push   %ebp
08595fe5 +0x0fc5:  mov    %esp,%ebp
08595fe7 +0x0fc7:  sub    $0x18,%esp
08595fea +0x0fca:  mov    0x8(%ebp),%eax
08595fed +0x0fcd:  mov    %eax,(%esp)
08595ff0 +0x0fd0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08595ff5 +0x0fd5:  mov    0x8(%ebp),%eax
08595ff8 +0x0fd8:  movl   $&_ZTV23Dispatcher_CodeCheckSum+0x8,(%eax)
08595ffe +0x0fde:  leave
08595fff +0x0fdf:  ret
08596000 +0x0fe0:  push   %ebp
08596001 +0x0fe1:  mov    %esp,%ebp
08596003 +0x0fe3:  sub    $0x18,%esp
08596006 +0x0fe6:  mov    0x8(%ebp),%eax
08596009 +0x0fe9:  mov    %eax,(%esp)
0859600c +0x0fec:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596011 +0x0ff1:  mov    0x8(%ebp),%eax
08596014 +0x0ff4:  movl   $&_ZTV26Dispatcher_PVPRequestFight+0x8,(%eax)
0859601a +0x0ffa:  leave
0859601b +0x0ffb:  ret
0859601c +0x0ffc:  push   %ebp
0859601d +0x0ffd:  mov    %esp,%ebp
0859601f +0x0fff:  sub    $0x18,%esp
08596022 +0x1002:  mov    0x8(%ebp),%eax
08596025 +0x1005:  mov    %eax,(%esp)
08596028 +0x1008:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859602d +0x100d:  mov    0x8(%ebp),%eax
08596030 +0x1010:  movl   $&_ZTV30Dispatcher_CreatureSendMessage+0x8,(%eax)
08596036 +0x1016:  leave
08596037 +0x1017:  ret
08596038 +0x1018:  push   %ebp
08596039 +0x1019:  mov    %esp,%ebp
0859603b +0x101b:  sub    $0x18,%esp
0859603e +0x101e:  mov    0x8(%ebp),%eax
08596041 +0x1021:  mov    %eax,(%esp)
08596044 +0x1024:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596049 +0x1029:  mov    0x8(%ebp),%eax
0859604c +0x102c:  movl   $&_ZTV21Dispatcher_TraceError+0x8,(%eax)
08596052 +0x1032:  leave
08596053 +0x1033:  ret
08596054 +0x1034:  push   %ebp
08596055 +0x1035:  mov    %esp,%ebp
08596057 +0x1037:  sub    $0x18,%esp
0859605a +0x103a:  mov    0x8(%ebp),%eax
0859605d +0x103d:  mov    %eax,(%esp)
08596060 +0x1040:  call   0859864e <+0x362e>
08596065 +0x1045:  mov    0x8(%ebp),%eax
08596068 +0x1048:  movl   $&_ZTV24Dispatcher_MouseRegister+0x8,(%eax)
0859606e +0x104e:  leave
0859606f +0x104f:  ret
08596070 +0x1050:  push   %ebp
08596071 +0x1051:  mov    %esp,%ebp
08596073 +0x1053:  sub    $0x18,%esp
08596076 +0x1056:  mov    0x8(%ebp),%eax
08596079 +0x1059:  mov    %eax,(%esp)
0859607c +0x105c:  call   0859866a <+0x364a>
08596081 +0x1061:  mov    0x8(%ebp),%eax
08596084 +0x1064:  movl   $&_ZTV23Dispatcher_BossDieCheck+0x8,(%eax)
0859608a +0x106a:  leave
0859608b +0x106b:  ret
0859608c +0x106c:  push   %ebp
0859608d +0x106d:  mov    %esp,%ebp
0859608f +0x106f:  sub    $0x18,%esp
08596092 +0x1072:  mov    0x8(%ebp),%eax
08596095 +0x1075:  mov    %eax,(%esp)
08596098 +0x1078:  call   08598686 <+0x3666>
0859609d +0x107d:  mov    0x8(%ebp),%eax
085960a0 +0x1080:  movl   $&_ZTV30Dispatcher_RegisterToBlackList+0x8,(%eax)
085960a6 +0x1086:  leave
085960a7 +0x1087:  ret
085960a8 +0x1088:  push   %ebp
085960a9 +0x1089:  mov    %esp,%ebp
085960ab +0x108b:  sub    $0x18,%esp
085960ae +0x108e:  mov    0x8(%ebp),%eax
085960b1 +0x1091:  mov    %eax,(%esp)
085960b4 +0x1094:  call   085986a2 <+0x3682>
085960b9 +0x1099:  mov    0x8(%ebp),%eax
085960bc +0x109c:  movl   $&_ZTV28Dispatcher_DeleteToBlackList+0x8,(%eax)
085960c2 +0x10a2:  leave
085960c3 +0x10a3:  ret
085960c4 +0x10a4:  push   %ebp
085960c5 +0x10a5:  mov    %esp,%ebp
085960c7 +0x10a7:  sub    $0x18,%esp
085960ca +0x10aa:  mov    0x8(%ebp),%eax
085960cd +0x10ad:  mov    %eax,(%esp)
085960d0 +0x10b0:  call   085986be <+0x369e>
085960d5 +0x10b5:  mov    0x8(%ebp),%eax
085960d8 +0x10b8:  movl   $&_ZTV27Dispatcher_RequestBlackList+0x8,(%eax)
085960de +0x10be:  leave
085960df +0x10bf:  ret
085960e0 +0x10c0:  push   %ebp
085960e1 +0x10c1:  mov    %esp,%ebp
085960e3 +0x10c3:  sub    $0x18,%esp
085960e6 +0x10c6:  mov    0x8(%ebp),%eax
085960e9 +0x10c9:  mov    %eax,(%esp)
085960ec +0x10cc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085960f1 +0x10d1:  mov    0x8(%ebp),%eax
085960f4 +0x10d4:  movl   $&_ZTV21Dispatcher_ChangeHost+0x8,(%eax)
085960fa +0x10da:  leave
085960fb +0x10db:  ret
085960fc +0x10dc:  push   %ebp
085960fd +0x10dd:  mov    %esp,%ebp
085960ff +0x10df:  sub    $0x18,%esp
08596102 +0x10e2:  mov    0x8(%ebp),%eax
08596105 +0x10e5:  mov    %eax,(%esp)
08596108 +0x10e8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859610d +0x10ed:  mov    0x8(%ebp),%eax
08596110 +0x10f0:  movl   $&_ZTV32Dispatcher_CreatureScriptMessage+0x8,(%eax)
08596116 +0x10f6:  leave
08596117 +0x10f7:  ret
08596118 +0x10f8:  push   %ebp
08596119 +0x10f9:  mov    %esp,%ebp
0859611b +0x10fb:  sub    $0x18,%esp
0859611e +0x10fe:  mov    0x8(%ebp),%eax
08596121 +0x1101:  mov    %eax,(%esp)
08596124 +0x1104:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596129 +0x1109:  mov    0x8(%ebp),%eax
0859612c +0x110c:  movl   $&_ZTV29Dispatcher_CharacterStatistic+0x8,(%eax)
08596132 +0x1112:  leave
08596133 +0x1113:  ret
08596134 +0x1114:  push   %ebp
08596135 +0x1115:  mov    %esp,%ebp
08596137 +0x1117:  sub    $0x18,%esp
0859613a +0x111a:  mov    0x8(%ebp),%eax
0859613d +0x111d:  mov    %eax,(%esp)
08596140 +0x1120:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596145 +0x1125:  mov    0x8(%ebp),%eax
08596148 +0x1128:  movl   $&_ZTV28Dispatcher_SetSubGuildMaster+0x8,(%eax)
0859614e +0x112e:  leave
0859614f +0x112f:  ret
08596150 +0x1130:  push   %ebp
08596151 +0x1131:  mov    %esp,%ebp
08596153 +0x1133:  sub    $0x18,%esp
08596156 +0x1136:  mov    0x8(%ebp),%eax
08596159 +0x1139:  mov    %eax,(%esp)
0859615c +0x113c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596161 +0x1141:  mov    0x8(%ebp),%eax
08596164 +0x1144:  movl   $&_ZTV23Dispatcher_Back2Village+0x8,(%eax)
0859616a +0x114a:  leave
0859616b +0x114b:  ret
0859616c +0x114c:  push   %ebp
0859616d +0x114d:  mov    %esp,%ebp
0859616f +0x114f:  sub    $0x18,%esp
08596172 +0x1152:  mov    0x8(%ebp),%eax
08596175 +0x1155:  mov    %eax,(%esp)
08596178 +0x1158:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859617d +0x115d:  mov    0x8(%ebp),%eax
08596180 +0x1160:  movl   $&_ZTV25Dispatcher_BuyAutomatItem+0x8,(%eax)
08596186 +0x1166:  leave
08596187 +0x1167:  ret
08596188 +0x1168:  push   %ebp
08596189 +0x1169:  mov    %esp,%ebp
0859618b +0x116b:  sub    $0x18,%esp
0859618e +0x116e:  mov    0x8(%ebp),%eax
08596191 +0x1171:  mov    %eax,(%esp)
08596194 +0x1174:  call   085986da <+0x36ba>
08596199 +0x1179:  mov    0x8(%ebp),%eax
0859619c +0x117c:  movl   $&_ZTV27Dispatcher_ChangeLetterStat+0x8,(%eax)
085961a2 +0x1182:  leave
085961a3 +0x1183:  ret
085961a4 +0x1184:  push   %ebp
085961a5 +0x1185:  mov    %esp,%ebp
085961a7 +0x1187:  sub    $0x18,%esp
085961aa +0x118a:  mov    0x8(%ebp),%eax
085961ad +0x118d:  mov    %eax,(%esp)
085961b0 +0x1190:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085961b5 +0x1195:  mov    0x8(%ebp),%eax
085961b8 +0x1198:  movl   $&_ZTV27Dispatcher_ChangeCharacName+0x8,(%eax)
085961be +0x119e:  leave
085961bf +0x119f:  ret
085961c0 +0x11a0:  push   %ebp
085961c1 +0x11a1:  mov    %esp,%ebp
085961c3 +0x11a3:  sub    $0x18,%esp
085961c6 +0x11a6:  mov    0x8(%ebp),%eax
085961c9 +0x11a9:  mov    %eax,(%esp)
085961cc +0x11ac:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085961d1 +0x11b1:  mov    0x8(%ebp),%eax
085961d4 +0x11b4:  movl   $&_ZTV26Dispatcher_QueryCharacInfo+0x8,(%eax)
085961da +0x11ba:  leave
085961db +0x11bb:  ret
085961dc +0x11bc:  push   %ebp
085961dd +0x11bd:  mov    %esp,%ebp
085961df +0x11bf:  sub    $0x18,%esp
085961e2 +0x11c2:  mov    0x8(%ebp),%eax
085961e5 +0x11c5:  mov    %eax,(%esp)
085961e8 +0x11c8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085961ed +0x11cd:  mov    0x8(%ebp),%eax
085961f0 +0x11d0:  movl   $&_ZTV31Dispatcher_ReportMannerlessUser+0x8,(%eax)
085961f6 +0x11d6:  leave
085961f7 +0x11d7:  ret
085961f8 +0x11d8:  push   %ebp
085961f9 +0x11d9:  mov    %esp,%ebp
085961fb +0x11db:  sub    $0x18,%esp
085961fe +0x11de:  mov    0x8(%ebp),%eax
08596201 +0x11e1:  mov    %eax,(%esp)
08596204 +0x11e4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596209 +0x11e9:  mov    0x8(%ebp),%eax
0859620c +0x11ec:  movl   $&_ZTV20Dispatcher_DieMobAll+0x8,(%eax)
08596212 +0x11f2:  leave
08596213 +0x11f3:  ret
08596214 +0x11f4:  push   %ebp
08596215 +0x11f5:  mov    %esp,%ebp
08596217 +0x11f7:  sub    $0x18,%esp
0859621a +0x11fa:  mov    0x8(%ebp),%eax
0859621d +0x11fd:  mov    %eax,(%esp)
08596220 +0x1200:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596225 +0x1205:  mov    0x8(%ebp),%eax
08596228 +0x1208:  movl   $&_ZTV30Dispatcher_CallGuildAllMembers+0x8,(%eax)
0859622e +0x120e:  leave
0859622f +0x120f:  ret
08596230 +0x1210:  push   %ebp
08596231 +0x1211:  mov    %esp,%ebp
08596233 +0x1213:  sub    $0x18,%esp
08596236 +0x1216:  mov    0x8(%ebp),%eax
08596239 +0x1219:  mov    %eax,(%esp)
0859623c +0x121c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596241 +0x1221:  mov    0x8(%ebp),%eax
08596244 +0x1224:  movl   $&_ZTV23Dispatcher_HumanCertify+0x8,(%eax)
0859624a +0x122a:  leave
0859624b +0x122b:  ret
0859624c +0x122c:  push   %ebp
0859624d +0x122d:  mov    %esp,%ebp
0859624f +0x122f:  sub    $0x18,%esp
08596252 +0x1232:  mov    0x8(%ebp),%eax
08596255 +0x1235:  mov    %eax,(%esp)
08596258 +0x1238:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859625d +0x123d:  mov    0x8(%ebp),%eax
08596260 +0x1240:  movl   $&_ZTV29Dispatcher_ChangeTutorialFlag+0x8,(%eax)
08596266 +0x1246:  leave
08596267 +0x1247:  ret
08596268 +0x1248:  push   %ebp
08596269 +0x1249:  mov    %esp,%ebp
0859626b +0x124b:  sub    $0x18,%esp
0859626e +0x124e:  mov    0x8(%ebp),%eax
08596271 +0x1251:  mov    %eax,(%esp)
08596274 +0x1254:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596279 +0x1259:  mov    0x8(%ebp),%eax
0859627c +0x125c:  movl   $&_ZTV30Dispatcher_CompleteLoadAssault+0x8,(%eax)
08596282 +0x1262:  leave
08596283 +0x1263:  ret
08596284 +0x1264:  push   %ebp
08596285 +0x1265:  mov    %esp,%ebp
08596287 +0x1267:  sub    $0x18,%esp
0859628a +0x126a:  mov    0x8(%ebp),%eax
0859628d +0x126d:  mov    %eax,(%esp)
08596290 +0x1270:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596295 +0x1275:  mov    0x8(%ebp),%eax
08596298 +0x1278:  movl   $&_ZTV28Dispatcher_ConnectP2PAssault+0x8,(%eax)
0859629e +0x127e:  leave
0859629f +0x127f:  ret
085962a0 +0x1280:  push   %ebp
085962a1 +0x1281:  mov    %esp,%ebp
085962a3 +0x1283:  sub    $0x18,%esp
085962a6 +0x1286:  mov    0x8(%ebp),%eax
085962a9 +0x1289:  mov    %eax,(%esp)
085962ac +0x128c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085962b1 +0x1291:  mov    0x8(%ebp),%eax
085962b4 +0x1294:  movl   $&_ZTV27Dispatcher_DieAssaultPlayer+0x8,(%eax)
085962ba +0x129a:  leave
085962bb +0x129b:  ret
085962bc +0x129c:  push   %ebp
085962bd +0x129d:  mov    %esp,%ebp
085962bf +0x129f:  sub    $0x18,%esp
085962c2 +0x12a2:  mov    0x8(%ebp),%eax
085962c5 +0x12a5:  mov    %eax,(%esp)
085962c8 +0x12a8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085962cd +0x12ad:  mov    0x8(%ebp),%eax
085962d0 +0x12b0:  movl   $&_ZTV19Dispatcher_ChangeHp+0x8,(%eax)
085962d6 +0x12b6:  leave
085962d7 +0x12b7:  ret
085962d8 +0x12b8:  push   %ebp
085962d9 +0x12b9:  mov    %esp,%ebp
085962db +0x12bb:  sub    $0x18,%esp
085962de +0x12be:  mov    0x8(%ebp),%eax
085962e1 +0x12c1:  mov    %eax,(%esp)
085962e4 +0x12c4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085962e9 +0x12c9:  mov    0x8(%ebp),%eax
085962ec +0x12cc:  movl   $&_ZTV35Dispatcher_CompleteLoadAfterAssault+0x8,(%eax)
085962f2 +0x12d2:  leave
085962f3 +0x12d3:  ret
085962f4 +0x12d4:  push   %ebp
085962f5 +0x12d5:  mov    %esp,%ebp
085962f7 +0x12d7:  sub    $0x18,%esp
085962fa +0x12da:  mov    0x8(%ebp),%eax
085962fd +0x12dd:  mov    %eax,(%esp)
08596300 +0x12e0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596305 +0x12e5:  mov    0x8(%ebp),%eax
08596308 +0x12e8:  movl   $&_ZTV33Dispatcher_ConnectP2PAfterAssault+0x8,(%eax)
0859630e +0x12ee:  leave
0859630f +0x12ef:  ret
08596310 +0x12f0:  push   %ebp
08596311 +0x12f1:  mov    %esp,%ebp
08596313 +0x12f3:  sub    $0x18,%esp
08596316 +0x12f6:  mov    0x8(%ebp),%eax
08596319 +0x12f9:  mov    %eax,(%esp)
0859631c +0x12fc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596321 +0x1301:  mov    0x8(%ebp),%eax
08596324 +0x1304:  movl   $&_ZTV21Dispatcher_BVHackInfo+0x8,(%eax)
0859632a +0x130a:  leave
0859632b +0x130b:  ret
0859632c +0x130c:  push   %ebp
0859632d +0x130d:  mov    %esp,%ebp
0859632f +0x130f:  sub    $0x18,%esp
08596332 +0x1312:  mov    0x8(%ebp),%eax
08596335 +0x1315:  mov    %eax,(%esp)
08596338 +0x1318:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859633d +0x131d:  mov    0x8(%ebp),%eax
08596340 +0x1320:  movl   $&_ZTV26Dispatcher_CallGuildInvite+0x8,(%eax)
08596346 +0x1326:  leave
08596347 +0x1327:  ret
08596348 +0x1328:  push   %ebp
08596349 +0x1329:  mov    %esp,%ebp
0859634b +0x132b:  sub    $0x18,%esp
0859634e +0x132e:  mov    0x8(%ebp),%eax
08596351 +0x1331:  mov    %eax,(%esp)
08596354 +0x1334:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596359 +0x1339:  mov    0x8(%ebp),%eax
0859635c +0x133c:  movl   $&_ZTV27Dispatcher_ReplyGuildInvite+0x8,(%eax)
08596362 +0x1342:  leave
08596363 +0x1343:  ret
08596364 +0x1344:  push   %ebp
08596365 +0x1345:  mov    %esp,%ebp
08596367 +0x1347:  sub    $0x18,%esp
0859636a +0x134a:  mov    0x8(%ebp),%eax
0859636d +0x134d:  mov    %eax,(%esp)
08596370 +0x1350:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596375 +0x1355:  mov    0x8(%ebp),%eax
08596378 +0x1358:  movl   $&_ZTV29Dispatcher_RequestGuildSecede+0x8,(%eax)
0859637e +0x135e:  leave
0859637f +0x135f:  ret
08596380 +0x1360:  push   %ebp
08596381 +0x1361:  mov    %esp,%ebp
08596383 +0x1363:  sub    $0x18,%esp
08596386 +0x1366:  mov    0x8(%ebp),%eax
08596389 +0x1369:  mov    %eax,(%esp)
0859638c +0x136c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596391 +0x1371:  mov    0x8(%ebp),%eax
08596394 +0x1374:  movl   $&_ZTV31Dispatcher_NotifyMessageToGuild+0x8,(%eax)
0859639a +0x137a:  leave
0859639b +0x137b:  ret
0859639c +0x137c:  push   %ebp
0859639d +0x137d:  mov    %esp,%ebp
0859639f +0x137f:  sub    $0x18,%esp
085963a2 +0x1382:  mov    0x8(%ebp),%eax
085963a5 +0x1385:  mov    %eax,(%esp)
085963a8 +0x1388:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085963ad +0x138d:  mov    0x8(%ebp),%eax
085963b0 +0x1390:  movl   $&_ZTV30Dispatcher_GuildMasterDelegate+0x8,(%eax)
085963b6 +0x1396:  leave
085963b7 +0x1397:  ret
085963b8 +0x1398:  push   %ebp
085963b9 +0x1399:  mov    %esp,%ebp
085963bb +0x139b:  sub    $0x18,%esp
085963be +0x139e:  mov    0x8(%ebp),%eax
085963c1 +0x13a1:  mov    %eax,(%esp)
085963c4 +0x13a4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085963c9 +0x13a9:  mov    0x8(%ebp),%eax
085963cc +0x13ac:  movl   $&_ZTV31Dispatcher_CheckGuildNameDouble+0x8,(%eax)
085963d2 +0x13b2:  leave
085963d3 +0x13b3:  ret
085963d4 +0x13b4:  push   %ebp
085963d5 +0x13b5:  mov    %esp,%ebp
085963d7 +0x13b7:  sub    $0x18,%esp
085963da +0x13ba:  mov    0x8(%ebp),%eax
085963dd +0x13bd:  mov    %eax,(%esp)
085963e0 +0x13c0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085963e5 +0x13c5:  mov    0x8(%ebp),%eax
085963e8 +0x13c8:  movl   $&_ZTV34Dispatcher_CheckGuildAddressDouble+0x8,(%eax)
085963ee +0x13ce:  leave
085963ef +0x13cf:  ret
085963f0 +0x13d0:  push   %ebp
085963f1 +0x13d1:  mov    %esp,%ebp
085963f3 +0x13d3:  sub    $0x18,%esp
085963f6 +0x13d6:  mov    0x8(%ebp),%eax
085963f9 +0x13d9:  mov    %eax,(%esp)
085963fc +0x13dc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596401 +0x13e1:  mov    0x8(%ebp),%eax
08596404 +0x13e4:  movl   $&_ZTV32Dispatcher_OpenGuildCreateWindow+0x8,(%eax)
0859640a +0x13ea:  leave
0859640b +0x13eb:  ret
0859640c +0x13ec:  push   %ebp
0859640d +0x13ed:  mov    %esp,%ebp
0859640f +0x13ef:  sub    $0x18,%esp
08596412 +0x13f2:  mov    0x8(%ebp),%eax
08596415 +0x13f5:  mov    %eax,(%esp)
08596418 +0x13f8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859641d +0x13fd:  mov    0x8(%ebp),%eax
08596420 +0x1400:  movl   $&_ZTV33Dispatcher_DeathTowerStageCommand+0x8,(%eax)
08596426 +0x1406:  leave
08596427 +0x1407:  ret
08596428 +0x1408:  push   %ebp
08596429 +0x1409:  mov    %esp,%ebp
0859642b +0x140b:  sub    $0x18,%esp
0859642e +0x140e:  mov    0x8(%ebp),%eax
08596431 +0x1411:  mov    %eax,(%esp)
08596434 +0x1414:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596439 +0x1419:  mov    0x8(%ebp),%eax
0859643c +0x141c:  movl   $&_ZTV25Dispatcher_UseBoosterItem+0x8,(%eax)
08596442 +0x1422:  leave
08596443 +0x1423:  ret
08596444 +0x1424:  push   %ebp
08596445 +0x1425:  mov    %esp,%ebp
08596447 +0x1427:  sub    $0x18,%esp
0859644a +0x142a:  mov    0x8(%ebp),%eax
0859644d +0x142d:  mov    %eax,(%esp)
08596450 +0x1430:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596455 +0x1435:  mov    0x8(%ebp),%eax
08596458 +0x1438:  movl   $&_ZTV28Dispatcher_SecurityCardIssue+0x8,(%eax)
0859645e +0x143e:  leave
0859645f +0x143f:  ret
08596460 +0x1440:  push   %ebp
08596461 +0x1441:  mov    %esp,%ebp
08596463 +0x1443:  sub    $0x18,%esp
08596466 +0x1446:  mov    0x8(%ebp),%eax
08596469 +0x1449:  mov    %eax,(%esp)
0859646c +0x144c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596471 +0x1451:  mov    0x8(%ebp),%eax
08596474 +0x1454:  movl   $&_ZTV29Dispatcher_SecurityCardDisuse+0x8,(%eax)
0859647a +0x145a:  leave
0859647b +0x145b:  ret
0859647c +0x145c:  push   %ebp
0859647d +0x145d:  mov    %esp,%ebp
0859647f +0x145f:  sub    $0x18,%esp
08596482 +0x1462:  mov    0x8(%ebp),%eax
08596485 +0x1465:  mov    %eax,(%esp)
08596488 +0x1468:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859648d +0x146d:  mov    0x8(%ebp),%eax
08596490 +0x1470:  movl   $&_ZTV30Dispatcher_SecurityCardAuthReq+0x8,(%eax)
08596496 +0x1476:  leave
08596497 +0x1477:  ret
08596498 +0x1478:  push   %ebp
08596499 +0x1479:  mov    %esp,%ebp
0859649b +0x147b:  sub    $0x18,%esp
0859649e +0x147e:  mov    0x8(%ebp),%eax
085964a1 +0x1481:  mov    %eax,(%esp)
085964a4 +0x1484:  call   085986f6 <+0x36d6>
085964a9 +0x1489:  mov    0x8(%ebp),%eax
085964ac +0x148c:  movl   $&_ZTV30Dispatcher_SecurityCardAuthRpy+0x8,(%eax)
085964b2 +0x1492:  leave
085964b3 +0x1493:  ret
085964b4 +0x1494:  push   %ebp
085964b5 +0x1495:  mov    %esp,%ebp
085964b7 +0x1497:  sub    $0x18,%esp
085964ba +0x149a:  mov    0x8(%ebp),%eax
085964bd +0x149d:  mov    %eax,(%esp)
085964c0 +0x14a0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085964c5 +0x14a5:  mov    0x8(%ebp),%eax
085964c8 +0x14a8:  movl   $&_ZTV30Dispatcher_SecurityCardCertKey+0x8,(%eax)
085964ce +0x14ae:  leave
085964cf +0x14af:  ret
085964d0 +0x14b0:  push   %ebp
085964d1 +0x14b1:  mov    %esp,%ebp
085964d3 +0x14b3:  sub    $0x18,%esp
085964d6 +0x14b6:  mov    0x8(%ebp),%eax
085964d9 +0x14b9:  mov    %eax,(%esp)
085964dc +0x14bc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085964e1 +0x14c1:  mov    0x8(%ebp),%eax
085964e4 +0x14c4:  movl   $&_ZTV33Dispatcher_SecurityCardAuthCancel+0x8,(%eax)
085964ea +0x14ca:  leave
085964eb +0x14cb:  ret
085964ec +0x14cc:  push   %ebp
085964ed +0x14cd:  mov    %esp,%ebp
085964ef +0x14cf:  sub    $0x18,%esp
085964f2 +0x14d2:  mov    0x8(%ebp),%eax
085964f5 +0x14d5:  mov    %eax,(%esp)
085964f8 +0x14d8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085964fd +0x14dd:  mov    0x8(%ebp),%eax
08596500 +0x14e0:  movl   $&_ZTV33Dispatcher_SecurityCardRetransfer+0x8,(%eax)
08596506 +0x14e6:  leave
08596507 +0x14e7:  ret
08596508 +0x14e8:  push   %ebp
08596509 +0x14e9:  mov    %esp,%ebp
0859650b +0x14eb:  sub    $0x18,%esp
0859650e +0x14ee:  mov    0x8(%ebp),%eax
08596511 +0x14f1:  mov    %eax,(%esp)
08596514 +0x14f4:  call   08598712 <+0x36f2>
08596519 +0x14f9:  mov    0x8(%ebp),%eax
0859651c +0x14fc:  movl   $&_ZTV38Dispatcher_CallPartyMemberRealtimeInfo+0x8,(%eax)
08596522 +0x1502:  leave
08596523 +0x1503:  ret
08596524 +0x1504:  push   %ebp
08596525 +0x1505:  mov    %esp,%ebp
08596527 +0x1507:  sub    $0x18,%esp
0859652a +0x150a:  mov    0x8(%ebp),%eax
0859652d +0x150d:  mov    %eax,(%esp)
08596530 +0x1510:  call   08598712 <+0x36f2>
08596535 +0x1515:  mov    0x8(%ebp),%eax
08596538 +0x1518:  movl   $&_ZTV23Dispatcher_EvadeAssault+0x8,(%eax)
0859653e +0x151e:  leave
0859653f +0x151f:  ret
08596540 +0x1520:  push   %ebp
08596541 +0x1521:  mov    %esp,%ebp
08596543 +0x1523:  sub    $0x18,%esp
08596546 +0x1526:  mov    0x8(%ebp),%eax
08596549 +0x1529:  mov    %eax,(%esp)
0859654c +0x152c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596551 +0x1531:  mov    0x8(%ebp),%eax
08596554 +0x1534:  movl   $&_ZTV23Dispatcher_AgreeEnchant+0x8,(%eax)
0859655a +0x153a:  leave
0859655b +0x153b:  ret
0859655c +0x153c:  push   %ebp
0859655d +0x153d:  mov    %esp,%ebp
0859655f +0x153f:  sub    $0x18,%esp
08596562 +0x1542:  mov    0x8(%ebp),%eax
08596565 +0x1545:  mov    %eax,(%esp)
08596568 +0x1548:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859656d +0x154d:  mov    0x8(%ebp),%eax
08596570 +0x1550:  movl   $&_ZTV21Dispatcher_TryEnchant+0x8,(%eax)
08596576 +0x1556:  leave
08596577 +0x1557:  ret
08596578 +0x1558:  push   %ebp
08596579 +0x1559:  mov    %esp,%ebp
0859657b +0x155b:  sub    $0x18,%esp
0859657e +0x155e:  mov    0x8(%ebp),%eax
08596581 +0x1561:  mov    %eax,(%esp)
08596584 +0x1564:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596589 +0x1569:  mov    0x8(%ebp),%eax
0859658c +0x156c:  movl   $&_ZTV28Dispatcher_PutItemForEnchant+0x8,(%eax)
08596592 +0x1572:  leave
08596593 +0x1573:  ret
08596594 +0x1574:  push   %ebp
08596595 +0x1575:  mov    %esp,%ebp
08596597 +0x1577:  sub    $0x18,%esp
0859659a +0x157a:  mov    0x8(%ebp),%eax
0859659d +0x157d:  mov    %eax,(%esp)
085965a0 +0x1580:  call   0859872e <+0x370e>
085965a5 +0x1585:  mov    0x8(%ebp),%eax
085965a8 +0x1588:  movl   $&_ZTV32Dispatcher_Client_Spec_Statistic+0x8,(%eax)
085965ae +0x158e:  leave
085965af +0x158f:  ret
085965b0 +0x1590:  push   %ebp
085965b1 +0x1591:  mov    %esp,%ebp
085965b3 +0x1593:  sub    $0x18,%esp
085965b6 +0x1596:  mov    0x8(%ebp),%eax
085965b9 +0x1599:  mov    %eax,(%esp)
085965bc +0x159c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085965c1 +0x15a1:  mov    0x8(%ebp),%eax
085965c4 +0x15a4:  movl   $&_ZTV29Dispatcher_Antibot_DPCallBack+0x8,(%eax)
085965ca +0x15aa:  leave
085965cb +0x15ab:  ret
085965cc +0x15ac:  push   %ebp
085965cd +0x15ad:  mov    %esp,%ebp
085965cf +0x15af:  sub    $0x18,%esp
085965d2 +0x15b2:  mov    0x8(%ebp),%eax
085965d5 +0x15b5:  mov    %eax,(%esp)
085965d8 +0x15b8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085965dd +0x15bd:  mov    0x8(%ebp),%eax
085965e0 +0x15c0:  movl   $&_ZTV21Dispatcher_Antibot_DP+0x8,(%eax)
085965e6 +0x15c6:  leave
085965e7 +0x15c7:  ret
085965e8 +0x15c8:  push   %ebp
085965e9 +0x15c9:  mov    %esp,%ebp
085965eb +0x15cb:  sub    $0x18,%esp
085965ee +0x15ce:  mov    0x8(%ebp),%eax
085965f1 +0x15d1:  mov    %eax,(%esp)
085965f4 +0x15d4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085965f9 +0x15d9:  mov    0x8(%ebp),%eax
085965fc +0x15dc:  movl   $&_ZTV18Dispatcher_Antibot+0x8,(%eax)
08596602 +0x15e2:  leave
08596603 +0x15e3:  ret
08596604 +0x15e4:  push   %ebp
08596605 +0x15e5:  mov    %esp,%ebp
08596607 +0x15e7:  sub    $0x18,%esp
0859660a +0x15ea:  mov    0x8(%ebp),%eax
0859660d +0x15ed:  mov    %eax,(%esp)
08596610 +0x15f0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596615 +0x15f5:  mov    0x8(%ebp),%eax
08596618 +0x15f8:  movl   $&_ZTV21Dispatcher_Join_Power+0x8,(%eax)
0859661e +0x15fe:  leave
0859661f +0x15ff:  ret
08596620 +0x1600:  push   %ebp
08596621 +0x1601:  mov    %esp,%ebp
08596623 +0x1603:  sub    $0x18,%esp
08596626 +0x1606:  mov    0x8(%ebp),%eax
08596629 +0x1609:  mov    %eax,(%esp)
0859662c +0x160c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596631 +0x1611:  mov    0x8(%ebp),%eax
08596634 +0x1614:  movl   $&_ZTV23Dispatcher_Secede_Power+0x8,(%eax)
0859663a +0x161a:  leave
0859663b +0x161b:  ret
0859663c +0x161c:  push   %ebp
0859663d +0x161d:  mov    %esp,%ebp
0859663f +0x161f:  sub    $0x18,%esp
08596642 +0x1622:  mov    0x8(%ebp),%eax
08596645 +0x1625:  mov    %eax,(%esp)
08596648 +0x1628:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859664d +0x162d:  mov    0x8(%ebp),%eax
08596650 +0x1630:  movl   $&_ZTV30Dispatcher_New_Gmdebug_Command+0x8,(%eax)
08596656 +0x1636:  leave
08596657 +0x1637:  ret
08596658 +0x1638:  push   %ebp
08596659 +0x1639:  mov    %esp,%ebp
0859665b +0x163b:  sub    $0x18,%esp
0859665e +0x163e:  mov    0x8(%ebp),%eax
08596661 +0x1641:  mov    %eax,(%esp)
08596664 +0x1644:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596669 +0x1649:  mov    0x8(%ebp),%eax
0859666c +0x164c:  movl   $&_ZTV27Dispatcher_SDC_Damage_Check+0x8,(%eax)
08596672 +0x1652:  leave
08596673 +0x1653:  ret
08596674 +0x1654:  push   %ebp
08596675 +0x1655:  mov    %esp,%ebp
08596677 +0x1657:  sub    $0x18,%esp
0859667a +0x165a:  mov    0x8(%ebp),%eax
0859667d +0x165d:  mov    %eax,(%esp)
08596680 +0x1660:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596685 +0x1665:  mov    0x8(%ebp),%eax
08596688 +0x1668:  movl   $&_ZTV40Dispatcher_SDC_ActiveStatus_Damage_Check+0x8,(%eax)
0859668e +0x166e:  leave
0859668f +0x166f:  ret
08596690 +0x1670:  push   %ebp
08596691 +0x1671:  mov    %esp,%ebp
08596693 +0x1673:  sub    $0x18,%esp
08596696 +0x1676:  mov    0x8(%ebp),%eax
08596699 +0x1679:  mov    %eax,(%esp)
0859669c +0x167c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085966a1 +0x1681:  mov    0x8(%ebp),%eax
085966a4 +0x1684:  movl   $&_ZTV26Dispatcher_ChangeGuildName+0x8,(%eax)
085966aa +0x168a:  leave
085966ab +0x168b:  ret
085966ac +0x168c:  push   %ebp
085966ad +0x168d:  mov    %esp,%ebp
085966af +0x168f:  sub    $0x18,%esp
085966b2 +0x1692:  mov    0x8(%ebp),%eax
085966b5 +0x1695:  mov    %eax,(%esp)
085966b8 +0x1698:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085966bd +0x169d:  mov    0x8(%ebp),%eax
085966c0 +0x16a0:  movl   $&_ZTV33Dispatcher_AuctionAskAveragePrice+0x8,(%eax)
085966c6 +0x16a6:  leave
085966c7 +0x16a7:  ret
085966c8 +0x16a8:  push   %ebp
085966c9 +0x16a9:  mov    %esp,%ebp
085966cb +0x16ab:  sub    $0x18,%esp
085966ce +0x16ae:  mov    0x8(%ebp),%eax
085966d1 +0x16b1:  mov    %eax,(%esp)
085966d4 +0x16b4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085966d9 +0x16b9:  mov    0x8(%ebp),%eax
085966dc +0x16bc:  movl   $&_ZTV28Dispatcher_AuctionRegistItem+0x8,(%eax)
085966e2 +0x16c2:  leave
085966e3 +0x16c3:  ret
085966e4 +0x16c4:  push   %ebp
085966e5 +0x16c5:  mov    %esp,%ebp
085966e7 +0x16c7:  sub    $0x18,%esp
085966ea +0x16ca:  mov    0x8(%ebp),%eax
085966ed +0x16cd:  mov    %eax,(%esp)
085966f0 +0x16d0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085966f5 +0x16d5:  mov    0x8(%ebp),%eax
085966f8 +0x16d8:  movl   $&_ZTV30Dispatcher_AuctionRegistCancel+0x8,(%eax)
085966fe +0x16de:  leave
085966ff +0x16df:  ret
08596700 +0x16e0:  push   %ebp
08596701 +0x16e1:  mov    %esp,%ebp
08596703 +0x16e3:  sub    $0x18,%esp
08596706 +0x16e6:  mov    0x8(%ebp),%eax
08596709 +0x16e9:  mov    %eax,(%esp)
0859670c +0x16ec:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596711 +0x16f1:  mov    0x8(%ebp),%eax
08596714 +0x16f4:  movl   $&_ZTV25Dispatcher_AuctionBidding+0x8,(%eax)
0859671a +0x16fa:  leave
0859671b +0x16fb:  ret
0859671c +0x16fc:  push   %ebp
0859671d +0x16fd:  mov    %esp,%ebp
0859671f +0x16ff:  sub    $0x18,%esp
08596722 +0x1702:  mov    0x8(%ebp),%eax
08596725 +0x1705:  mov    %eax,(%esp)
08596728 +0x1708:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859672d +0x170d:  mov    0x8(%ebp),%eax
08596730 +0x1710:  movl   $&_ZTV33Dispatcher_AuctionSearchByItemKey+0x8,(%eax)
08596736 +0x1716:  leave
08596737 +0x1717:  ret
08596738 +0x1718:  push   %ebp
08596739 +0x1719:  mov    %esp,%ebp
0859673b +0x171b:  sub    $0x18,%esp
0859673e +0x171e:  mov    0x8(%ebp),%eax
08596741 +0x1721:  mov    %eax,(%esp)
08596744 +0x1724:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596749 +0x1729:  mov    0x8(%ebp),%eax
0859674c +0x172c:  movl   $&_ZTV35Dispatcher_AuctionSearchByNoItmeKey+0x8,(%eax)
08596752 +0x1732:  leave
08596753 +0x1733:  ret
08596754 +0x1734:  push   %ebp
08596755 +0x1735:  mov    %esp,%ebp
08596757 +0x1737:  sub    $0x18,%esp
0859675a +0x173a:  mov    0x8(%ebp),%eax
0859675d +0x173d:  mov    %eax,(%esp)
08596760 +0x1740:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596765 +0x1745:  mov    0x8(%ebp),%eax
08596768 +0x1748:  movl   $&_ZTV36Dispatcher_AuctionMyRegistedItemInfo+0x8,(%eax)
0859676e +0x174e:  leave
0859676f +0x174f:  ret
08596770 +0x1750:  push   %ebp
08596771 +0x1751:  mov    %esp,%ebp
08596773 +0x1753:  sub    $0x18,%esp
08596776 +0x1756:  mov    0x8(%ebp),%eax
08596779 +0x1759:  mov    %eax,(%esp)
0859677c +0x175c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596781 +0x1761:  mov    0x8(%ebp),%eax
08596784 +0x1764:  movl   $&_ZTV31Dispatcher_AuctionMyBiddingInfo+0x8,(%eax)
0859678a +0x176a:  leave
0859678b +0x176b:  ret
0859678c +0x176c:  push   %ebp
0859678d +0x176d:  mov    %esp,%ebp
0859678f +0x176f:  sub    $0x18,%esp
08596792 +0x1772:  mov    0x8(%ebp),%eax
08596795 +0x1775:  mov    %eax,(%esp)
08596798 +0x1778:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859679d +0x177d:  mov    0x8(%ebp),%eax
085967a0 +0x1780:  movl   $&_ZTV34Dispatcher_AuctionMyAuctionHistory+0x8,(%eax)
085967a6 +0x1786:  leave
085967a7 +0x1787:  ret
085967a8 +0x1788:  push   %ebp
085967a9 +0x1789:  mov    %esp,%ebp
085967ab +0x178b:  sub    $0x18,%esp
085967ae +0x178e:  mov    0x8(%ebp),%eax
085967b1 +0x1791:  mov    %eax,(%esp)
085967b4 +0x1794:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085967b9 +0x1799:  mov    0x8(%ebp),%eax
085967bc +0x179c:  movl   $&_ZTV33Dispatcher_DungeonEventStoryPause+0x8,(%eax)
085967c2 +0x17a2:  leave
085967c3 +0x17a3:  ret
085967c4 +0x17a4:  push   %ebp
085967c5 +0x17a5:  mov    %esp,%ebp
085967c7 +0x17a7:  sub    $0x18,%esp
085967ca +0x17aa:  mov    0x8(%ebp),%eax
085967cd +0x17ad:  mov    %eax,(%esp)
085967d0 +0x17b0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085967d5 +0x17b5:  mov    0x8(%ebp),%eax
085967d8 +0x17b8:  movl   $&_ZTV23Dispatcher_JoinPowerWar+0x8,(%eax)
085967de +0x17be:  leave
085967df +0x17bf:  ret
085967e0 +0x17c0:  push   %ebp
085967e1 +0x17c1:  mov    %esp,%ebp
085967e3 +0x17c3:  sub    $0x18,%esp
085967e6 +0x17c6:  mov    0x8(%ebp),%eax
085967e9 +0x17c9:  mov    %eax,(%esp)
085967ec +0x17cc:  call   0859874a <+0x372a>
085967f1 +0x17d1:  mov    0x8(%ebp),%eax
085967f4 +0x17d4:  movl   $&_ZTV27Dispatcher_SaveGameOption_1+0x8,(%eax)
085967fa +0x17da:  leave
085967fb +0x17db:  ret
085967fc +0x17dc:  push   %ebp
085967fd +0x17dd:  mov    %esp,%ebp
085967ff +0x17df:  sub    $0x18,%esp
08596802 +0x17e2:  mov    0x8(%ebp),%eax
08596805 +0x17e5:  mov    %eax,(%esp)
08596808 +0x17e8:  call   08598766 <+0x3746>
0859680d +0x17ed:  mov    0x8(%ebp),%eax
08596810 +0x17f0:  movl   $&_ZTV27Dispatcher_SaveGameOption_2+0x8,(%eax)
08596816 +0x17f6:  leave
08596817 +0x17f7:  ret
08596818 +0x17f8:  push   %ebp
08596819 +0x17f9:  mov    %esp,%ebp
0859681b +0x17fb:  sub    $0x18,%esp
0859681e +0x17fe:  mov    0x8(%ebp),%eax
08596821 +0x1801:  mov    %eax,(%esp)
08596824 +0x1804:  call   08598782 <+0x3762>
08596829 +0x1809:  mov    0x8(%ebp),%eax
0859682c +0x180c:  movl   $&_ZTV30Dispatcher_SaveCharacterOption+0x8,(%eax)
08596832 +0x1812:  leave
08596833 +0x1813:  ret
08596834 +0x1814:  push   %ebp
08596835 +0x1815:  mov    %esp,%ebp
08596837 +0x1817:  sub    $0x18,%esp
0859683a +0x181a:  mov    0x8(%ebp),%eax
0859683d +0x181d:  mov    %eax,(%esp)
08596840 +0x1820:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596845 +0x1825:  mov    0x8(%ebp),%eax
08596848 +0x1828:  movl   $&_ZTV29Dispatcher_FrameLagStatistics+0x8,(%eax)
0859684e +0x182e:  leave
0859684f +0x182f:  ret
08596850 +0x1830:  push   %ebp
08596851 +0x1831:  mov    %esp,%ebp
08596853 +0x1833:  sub    $0x18,%esp
08596856 +0x1836:  mov    0x8(%ebp),%eax
08596859 +0x1839:  mov    %eax,(%esp)
0859685c +0x183c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596861 +0x1841:  mov    0x8(%ebp),%eax
08596864 +0x1844:  movl   $&_ZTV26Dispatcher_GoblinPadStatus+0x8,(%eax)
0859686a +0x184a:  leave
0859686b +0x184b:  ret
0859686c +0x184c:  push   %ebp
0859686d +0x184d:  mov    %esp,%ebp
0859686f +0x184f:  sub    $0x18,%esp
08596872 +0x1852:  mov    0x8(%ebp),%eax
08596875 +0x1855:  mov    %eax,(%esp)
08596878 +0x1858:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859687d +0x185d:  mov    0x8(%ebp),%eax
08596880 +0x1860:  movl   $&_ZTV25Dispatcher_PvPChannelInfo+0x8,(%eax)
08596886 +0x1866:  leave
08596887 +0x1867:  ret
08596888 +0x1868:  push   %ebp
08596889 +0x1869:  mov    %esp,%ebp
0859688b +0x186b:  sub    $0x18,%esp
0859688e +0x186e:  mov    0x8(%ebp),%eax
08596891 +0x1871:  mov    %eax,(%esp)
08596894 +0x1874:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596899 +0x1879:  mov    0x8(%ebp),%eax
0859689c +0x187c:  movl   $&_ZTV23Dispatcher_RequestMatch+0x8,(%eax)
085968a2 +0x1882:  leave
085968a3 +0x1883:  ret
085968a4 +0x1884:  push   %ebp
085968a5 +0x1885:  mov    %esp,%ebp
085968a7 +0x1887:  sub    $0x18,%esp
085968aa +0x188a:  mov    0x8(%ebp),%eax
085968ad +0x188d:  mov    %eax,(%esp)
085968b0 +0x1890:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085968b5 +0x1895:  mov    0x8(%ebp),%eax
085968b8 +0x1898:  movl   $&_ZTV19Dispatcher_UseJewel+0x8,(%eax)
085968be +0x189e:  leave
085968bf +0x189f:  ret
085968c0 +0x18a0:  push   %ebp
085968c1 +0x18a1:  mov    %esp,%ebp
085968c3 +0x18a3:  sub    $0x18,%esp
085968c6 +0x18a6:  mov    0x8(%ebp),%eax
085968c9 +0x18a9:  mov    %eax,(%esp)
085968cc +0x18ac:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085968d1 +0x18b1:  mov    0x8(%ebp),%eax
085968d4 +0x18b4:  movl   $&_ZTV25Dispatcher_DisJointAvatar+0x8,(%eax)
085968da +0x18ba:  leave
085968db +0x18bb:  ret
085968dc +0x18bc:  push   %ebp
085968dd +0x18bd:  mov    %esp,%ebp
085968df +0x18bf:  sub    $0x18,%esp
085968e2 +0x18c2:  mov    0x8(%ebp),%eax
085968e5 +0x18c5:  mov    %eax,(%esp)
085968e8 +0x18c8:  call   0859879e <+0x377e>
085968ed +0x18cd:  mov    0x8(%ebp),%eax
085968f0 +0x18d0:  movl   $&_ZTV21Dispatcher_PurifyItem+0x8,(%eax)
085968f6 +0x18d6:  leave
085968f7 +0x18d7:  ret
085968f8 +0x18d8:  push   %ebp
085968f9 +0x18d9:  mov    %esp,%ebp
085968fb +0x18db:  sub    $0x18,%esp
085968fe +0x18de:  mov    0x8(%ebp),%eax
08596901 +0x18e1:  mov    %eax,(%esp)
08596904 +0x18e4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596909 +0x18e9:  mov    0x8(%ebp),%eax
0859690c +0x18ec:  movl   $&_ZTV34Dispatcher_InvestItemAmplifyOption+0x8,(%eax)
08596912 +0x18f2:  leave
08596913 +0x18f3:  ret
08596914 +0x18f4:  push   %ebp
08596915 +0x18f5:  mov    %esp,%ebp
08596917 +0x18f7:  sub    $0x18,%esp
0859691a +0x18fa:  mov    0x8(%ebp),%eax
0859691d +0x18fd:  mov    %eax,(%esp)
08596920 +0x1900:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596925 +0x1905:  mov    0x8(%ebp),%eax
08596928 +0x1908:  movl   $&_ZTV28Dispatcher_AddSocketToAvatar+0x8,(%eax)
0859692e +0x190e:  leave
0859692f +0x190f:  ret
08596930 +0x1910:  push   %ebp
08596931 +0x1911:  mov    %esp,%ebp
08596933 +0x1913:  sub    $0x18,%esp
08596936 +0x1916:  mov    0x8(%ebp),%eax
08596939 +0x1919:  mov    %eax,(%esp)
0859693c +0x191c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596941 +0x1921:  mov    0x8(%ebp),%eax
08596944 +0x1924:  movl   $&_ZTV26Dispatcher_Shop_Coin_Event+0x8,(%eax)
0859694a +0x192a:  leave
0859694b +0x192b:  ret
0859694c +0x192c:  push   %ebp
0859694d +0x192d:  mov    %esp,%ebp
0859694f +0x192f:  sub    $0x18,%esp
08596952 +0x1932:  mov    0x8(%ebp),%eax
08596955 +0x1935:  mov    %eax,(%esp)
08596958 +0x1938:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859695d +0x193d:  mov    0x8(%ebp),%eax
08596960 +0x1940:  movl   $&_ZTV26DisPatcher_MultiBoxLottery+0x8,(%eax)
08596966 +0x1946:  leave
08596967 +0x1947:  ret
08596968 +0x1948:  push   %ebp
08596969 +0x1949:  mov    %esp,%ebp
0859696b +0x194b:  sub    $0x18,%esp
0859696e +0x194e:  mov    0x8(%ebp),%eax
08596971 +0x1951:  mov    %eax,(%esp)
08596974 +0x1954:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596979 +0x1959:  mov    0x8(%ebp),%eax
0859697c +0x195c:  movl   $&_ZTV28DisPatcher_UdpCharacteristic+0x8,(%eax)
08596982 +0x1962:  leave
08596983 +0x1963:  ret
08596984 +0x1964:  push   %ebp
08596985 +0x1965:  mov    %esp,%ebp
08596987 +0x1967:  sub    $0x18,%esp
0859698a +0x196a:  mov    0x8(%ebp),%eax
0859698d +0x196d:  mov    %eax,(%esp)
08596990 +0x1970:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596995 +0x1975:  mov    0x8(%ebp),%eax
08596998 +0x1978:  movl   $&_ZTV28DIspatcher_OneDayLetheTicket+0x8,(%eax)
0859699e +0x197e:  leave
0859699f +0x197f:  ret
085969a0 +0x1980:  push   %ebp
085969a1 +0x1981:  mov    %esp,%ebp
085969a3 +0x1983:  sub    $0x18,%esp
085969a6 +0x1986:  mov    0x8(%ebp),%eax
085969a9 +0x1989:  mov    %eax,(%esp)
085969ac +0x198c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085969b1 +0x1991:  mov    0x8(%ebp),%eax
085969b4 +0x1994:  movl   $&_ZTV26Dispatcher_DisguiseRequest+0x8,(%eax)
085969ba +0x199a:  leave
085969bb +0x199b:  ret
085969bc +0x199c:  push   %ebp
085969bd +0x199d:  mov    %esp,%ebp
085969bf +0x199f:  sub    $0x18,%esp
085969c2 +0x19a2:  mov    0x8(%ebp),%eax
085969c5 +0x19a5:  mov    %eax,(%esp)
085969c8 +0x19a8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085969cd +0x19ad:  mov    0x8(%ebp),%eax
085969d0 +0x19b0:  movl   $&_ZTV25Dispatcher_DisguiseCancel+0x8,(%eax)
085969d6 +0x19b6:  leave
085969d7 +0x19b7:  ret
085969d8 +0x19b8:  push   %ebp
085969d9 +0x19b9:  mov    %esp,%ebp
085969db +0x19bb:  sub    $0x18,%esp
085969de +0x19be:  mov    0x8(%ebp),%eax
085969e1 +0x19c1:  mov    %eax,(%esp)
085969e4 +0x19c4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085969e9 +0x19c9:  mov    0x8(%ebp),%eax
085969ec +0x19cc:  movl   $&_ZTV24Dispatcher_UseCraneStart+0x8,(%eax)
085969f2 +0x19d2:  leave
085969f3 +0x19d3:  ret
085969f4 +0x19d4:  push   %ebp
085969f5 +0x19d5:  mov    %esp,%ebp
085969f7 +0x19d7:  sub    $0x18,%esp
085969fa +0x19da:  mov    0x8(%ebp),%eax
085969fd +0x19dd:  mov    %eax,(%esp)
08596a00 +0x19e0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596a05 +0x19e5:  mov    0x8(%ebp),%eax
08596a08 +0x19e8:  movl   $&_ZTV22Dispatcher_CranePickUp+0x8,(%eax)
08596a0e +0x19ee:  leave
08596a0f +0x19ef:  ret
08596a10 +0x19f0:  push   %ebp
08596a11 +0x19f1:  mov    %esp,%ebp
08596a13 +0x19f3:  sub    $0x18,%esp
08596a16 +0x19f6:  mov    0x8(%ebp),%eax
08596a19 +0x19f9:  mov    %eax,(%esp)
08596a1c +0x19fc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596a21 +0x1a01:  mov    0x8(%ebp),%eax
08596a24 +0x1a04:  movl   $&_ZTV34Dispatcher_RequestPCRoomPlayerList+0x8,(%eax)
08596a2a +0x1a0a:  leave
08596a2b +0x1a0b:  ret
08596a2c +0x1a0c:  push   %ebp
08596a2d +0x1a0d:  mov    %esp,%ebp
08596a2f +0x1a0f:  sub    $0x18,%esp
08596a32 +0x1a12:  mov    0x8(%ebp),%eax
08596a35 +0x1a15:  mov    %eax,(%esp)
08596a38 +0x1a18:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596a3d +0x1a1d:  mov    0x8(%ebp),%eax
08596a40 +0x1a20:  movl   $&_ZTV35Dispatcher_RequestPCRoomPlayerCount+0x8,(%eax)
08596a46 +0x1a26:  leave
08596a47 +0x1a27:  ret
08596a48 +0x1a28:  push   %ebp
08596a49 +0x1a29:  mov    %esp,%ebp
08596a4b +0x1a2b:  sub    $0x18,%esp
08596a4e +0x1a2e:  mov    0x8(%ebp),%eax
08596a51 +0x1a31:  mov    %eax,(%esp)
08596a54 +0x1a34:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596a59 +0x1a39:  mov    0x8(%ebp),%eax
08596a5c +0x1a3c:  movl   $&_ZTV30Dispatcher_UpdateServerMessage+0x8,(%eax)
08596a62 +0x1a42:  leave
08596a63 +0x1a43:  ret
08596a64 +0x1a44:  push   %ebp
08596a65 +0x1a45:  mov    %esp,%ebp
08596a67 +0x1a47:  sub    $0x18,%esp
08596a6a +0x1a4a:  mov    0x8(%ebp),%eax
08596a6d +0x1a4d:  mov    %eax,(%esp)
08596a70 +0x1a50:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596a75 +0x1a55:  mov    0x8(%ebp),%eax
08596a78 +0x1a58:  movl   $&_ZTV35Dispatcher_CheckEnableServerMessage+0x8,(%eax)
08596a7e +0x1a5e:  leave
08596a7f +0x1a5f:  ret
08596a80 +0x1a60:  push   %ebp
08596a81 +0x1a61:  mov    %esp,%ebp
08596a83 +0x1a63:  sub    $0x18,%esp
08596a86 +0x1a66:  mov    0x8(%ebp),%eax
08596a89 +0x1a69:  mov    %eax,(%esp)
08596a8c +0x1a6c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596a91 +0x1a71:  mov    0x8(%ebp),%eax
08596a94 +0x1a74:  movl   $&_ZTV24Dispatcher_AssertManager+0x8,(%eax)
08596a9a +0x1a7a:  leave
08596a9b +0x1a7b:  ret
08596a9c +0x1a7c:  push   %ebp
08596a9d +0x1a7d:  mov    %esp,%ebp
08596a9f +0x1a7f:  sub    $0x18,%esp
08596aa2 +0x1a82:  mov    0x8(%ebp),%eax
08596aa5 +0x1a85:  mov    %eax,(%esp)
08596aa8 +0x1a88:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596aad +0x1a8d:  mov    0x8(%ebp),%eax
08596ab0 +0x1a90:  movl   $&_ZTV24Dispatcher_GiveGiftToNPC+0x8,(%eax)
08596ab6 +0x1a96:  leave
08596ab7 +0x1a97:  ret
08596ab8 +0x1a98:  push   %ebp
08596ab9 +0x1a99:  mov    %esp,%ebp
08596abb +0x1a9b:  sub    $0x18,%esp
08596abe +0x1a9e:  mov    0x8(%ebp),%eax
08596ac1 +0x1aa1:  mov    %eax,(%esp)
08596ac4 +0x1aa4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596ac9 +0x1aa9:  mov    0x8(%ebp),%eax
08596acc +0x1aac:  movl   $&_ZTV24Dispatcher_Overflow_Info+0x8,(%eax)
08596ad2 +0x1ab2:  leave
08596ad3 +0x1ab3:  ret
08596ad4 +0x1ab4:  push   %ebp
08596ad5 +0x1ab5:  mov    %esp,%ebp
08596ad7 +0x1ab7:  sub    $0x18,%esp
08596ada +0x1aba:  mov    0x8(%ebp),%eax
08596add +0x1abd:  mov    %eax,(%esp)
08596ae0 +0x1ac0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596ae5 +0x1ac5:  mov    0x8(%ebp),%eax
08596ae8 +0x1ac8:  movl   $&_ZTV35Dispatcher_GoblinPadRequestCryptKey+0x8,(%eax)
08596aee +0x1ace:  leave
08596aef +0x1acf:  ret
08596af0 +0x1ad0:  push   %ebp
08596af1 +0x1ad1:  mov    %esp,%ebp
08596af3 +0x1ad3:  sub    $0x18,%esp
08596af6 +0x1ad6:  mov    0x8(%ebp),%eax
08596af9 +0x1ad9:  mov    %eax,(%esp)
08596afc +0x1adc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596b01 +0x1ae1:  mov    0x8(%ebp),%eax
08596b04 +0x1ae4:  movl   $&_ZTV31Dispatcher_WriteGuildMemberMemo+0x8,(%eax)
08596b0a +0x1aea:  leave
08596b0b +0x1aeb:  ret
08596b0c +0x1aec:  push   %ebp
08596b0d +0x1aed:  mov    %esp,%ebp
08596b0f +0x1aef:  sub    $0x18,%esp
08596b12 +0x1af2:  mov    0x8(%ebp),%eax
08596b15 +0x1af5:  mov    %eax,(%esp)
08596b18 +0x1af8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596b1d +0x1afd:  mov    0x8(%ebp),%eax
08596b20 +0x1b00:  movl   $&_ZTV25Dispatcher_HellPartyStart+0x8,(%eax)
08596b26 +0x1b06:  leave
08596b27 +0x1b07:  ret
08596b28 +0x1b08:  push   %ebp
08596b29 +0x1b09:  mov    %esp,%ebp
08596b2b +0x1b0b:  sub    $0x18,%esp
08596b2e +0x1b0e:  mov    0x8(%ebp),%eax
08596b31 +0x1b11:  mov    %eax,(%esp)
08596b34 +0x1b14:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596b39 +0x1b19:  mov    0x8(%ebp),%eax
08596b3c +0x1b1c:  movl   $&_ZTV30Dispatcher_PowerWarProcessInfo+0x8,(%eax)
08596b42 +0x1b22:  leave
08596b43 +0x1b23:  ret
08596b44 +0x1b24:  push   %ebp
08596b45 +0x1b25:  mov    %esp,%ebp
08596b47 +0x1b27:  sub    $0x18,%esp
08596b4a +0x1b2a:  mov    0x8(%ebp),%eax
08596b4d +0x1b2d:  mov    %eax,(%esp)
08596b50 +0x1b30:  call   085987ba <+0x379a>
08596b55 +0x1b35:  mov    0x8(%ebp),%eax
08596b58 +0x1b38:  movl   $&_ZTV30Dispatcher_CreateDisjointStore+0x8,(%eax)
08596b5e +0x1b3e:  leave
08596b5f +0x1b3f:  ret
08596b60 +0x1b40:  push   %ebp
08596b61 +0x1b41:  mov    %esp,%ebp
08596b63 +0x1b43:  sub    $0x18,%esp
08596b66 +0x1b46:  mov    0x8(%ebp),%eax
08596b69 +0x1b49:  mov    %eax,(%esp)
08596b6c +0x1b4c:  call   085987d6 <+0x37b6>
08596b71 +0x1b51:  mov    0x8(%ebp),%eax
08596b74 +0x1b54:  movl   $&_ZTV30Dispatcher_RequestDisjointItem+0x8,(%eax)
08596b7a +0x1b5a:  leave
08596b7b +0x1b5b:  ret
08596b7c +0x1b5c:  push   %ebp
08596b7d +0x1b5d:  mov    %esp,%ebp
08596b7f +0x1b5f:  sub    $0x18,%esp
08596b82 +0x1b62:  mov    0x8(%ebp),%eax
08596b85 +0x1b65:  mov    %eax,(%esp)
08596b88 +0x1b68:  call   085987f2 <+0x37d2>
08596b8d +0x1b6d:  mov    0x8(%ebp),%eax
08596b90 +0x1b70:  movl   $&_ZTV32Dispatcher_RepairDisjointMachine+0x8,(%eax)
08596b96 +0x1b76:  leave
08596b97 +0x1b77:  ret
08596b98 +0x1b78:  push   %ebp
08596b99 +0x1b79:  mov    %esp,%ebp
08596b9b +0x1b7b:  sub    $0x18,%esp
08596b9e +0x1b7e:  mov    0x8(%ebp),%eax
08596ba1 +0x1b81:  mov    %eax,(%esp)
08596ba4 +0x1b84:  call   0859880e <+0x37ee>
08596ba9 +0x1b89:  mov    0x8(%ebp),%eax
08596bac +0x1b8c:  movl   $&_ZTV19Dispatcher_Teleport+0x8,(%eax)
08596bb2 +0x1b92:  leave
08596bb3 +0x1b93:  ret
08596bb4 +0x1b94:  push   %ebp
08596bb5 +0x1b95:  mov    %esp,%ebp
08596bb7 +0x1b97:  sub    $0x18,%esp
08596bba +0x1b9a:  mov    0x8(%ebp),%eax
08596bbd +0x1b9d:  mov    %eax,(%esp)
08596bc0 +0x1ba0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596bc5 +0x1ba5:  mov    0x8(%ebp),%eax
08596bc8 +0x1ba8:  movl   $&_ZTV34Dispatcher_CompoundItemByExpertJob+0x8,(%eax)
08596bce +0x1bae:  leave
08596bcf +0x1baf:  ret
08596bd0 +0x1bb0:  push   %ebp
08596bd1 +0x1bb1:  mov    %esp,%ebp
08596bd3 +0x1bb3:  sub    $0x18,%esp
08596bd6 +0x1bb6:  mov    0x8(%ebp),%eax
08596bd9 +0x1bb9:  mov    %eax,(%esp)
08596bdc +0x1bbc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596be1 +0x1bc1:  mov    0x8(%ebp),%eax
08596be4 +0x1bc4:  movl   $&_ZTV26Dispatcher_GiveupExpertJob+0x8,(%eax)
08596bea +0x1bca:  leave
08596beb +0x1bcb:  ret
08596bec +0x1bcc:  push   %ebp
08596bed +0x1bcd:  mov    %esp,%ebp
08596bef +0x1bcf:  sub    $0x18,%esp
08596bf2 +0x1bd2:  mov    0x8(%ebp),%eax
08596bf5 +0x1bd5:  mov    %eax,(%esp)
08596bf8 +0x1bd8:  call   0859882a <+0x380a>
08596bfd +0x1bdd:  mov    0x8(%ebp),%eax
08596c00 +0x1be0:  movl   $&_ZTV33Dispatcher_UpgradeDisjointMachine+0x8,(%eax)
08596c06 +0x1be6:  leave
08596c07 +0x1be7:  ret
08596c08 +0x1be8:  push   %ebp
08596c09 +0x1be9:  mov    %esp,%ebp
08596c0b +0x1beb:  sub    $0x18,%esp
08596c0e +0x1bee:  mov    0x8(%ebp),%eax
08596c11 +0x1bf1:  mov    %eax,(%esp)
08596c14 +0x1bf4:  call   08598846 <+0x3826>
08596c19 +0x1bf9:  mov    0x8(%ebp),%eax
08596c1c +0x1bfc:  movl   $&_ZTV29Dispatcher_EnterDisjointStore+0x8,(%eax)
08596c22 +0x1c02:  leave
08596c23 +0x1c03:  ret
08596c24 +0x1c04:  push   %ebp
08596c25 +0x1c05:  mov    %esp,%ebp
08596c27 +0x1c07:  sub    $0x18,%esp
08596c2a +0x1c0a:  mov    0x8(%ebp),%eax
08596c2d +0x1c0d:  mov    %eax,(%esp)
08596c30 +0x1c10:  call   08598862 <+0x3842>
08596c35 +0x1c15:  mov    0x8(%ebp),%eax
08596c38 +0x1c18:  movl   $&_ZTV29Dispatcher_CloseDisjointStore+0x8,(%eax)
08596c3e +0x1c1e:  leave
08596c3f +0x1c1f:  ret
08596c40 +0x1c20:  push   %ebp
08596c41 +0x1c21:  mov    %esp,%ebp
08596c43 +0x1c23:  sub    $0x18,%esp
08596c46 +0x1c26:  mov    0x8(%ebp),%eax
08596c49 +0x1c29:  mov    %eax,(%esp)
08596c4c +0x1c2c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596c51 +0x1c31:  mov    0x8(%ebp),%eax
08596c54 +0x1c34:  movl   $&_ZTV26Dispatcher_ReportAbuseUser+0x8,(%eax)
08596c5a +0x1c3a:  leave
08596c5b +0x1c3b:  ret
08596c5c +0x1c3c:  push   %ebp
08596c5d +0x1c3d:  mov    %esp,%ebp
08596c5f +0x1c3f:  sub    $0x18,%esp
08596c62 +0x1c42:  mov    0x8(%ebp),%eax
08596c65 +0x1c45:  mov    %eax,(%esp)
08596c68 +0x1c48:  call   0859887e <+0x385e>
08596c6d +0x1c4d:  mov    0x8(%ebp),%eax
08596c70 +0x1c50:  movl   $&_ZTV21Dispatcher_GuildCargo+0x8,(%eax)
08596c76 +0x1c56:  leave
08596c77 +0x1c57:  ret
08596c78 +0x1c58:  push   %ebp
08596c79 +0x1c59:  mov    %esp,%ebp
08596c7b +0x1c5b:  sub    $0x18,%esp
08596c7e +0x1c5e:  mov    0x8(%ebp),%eax
08596c81 +0x1c61:  mov    %eax,(%esp)
08596c84 +0x1c64:  call   0859889a <+0x387a>
08596c89 +0x1c69:  mov    0x8(%ebp),%eax
08596c8c +0x1c6c:  movl   $&_ZTV28Dispatcher_GuildCargoHistory+0x8,(%eax)
08596c92 +0x1c72:  leave
08596c93 +0x1c73:  ret
08596c94 +0x1c74:  push   %ebp
08596c95 +0x1c75:  mov    %esp,%ebp
08596c97 +0x1c77:  sub    $0x18,%esp
08596c9a +0x1c7a:  mov    0x8(%ebp),%eax
08596c9d +0x1c7d:  mov    %eax,(%esp)
08596ca0 +0x1c80:  call   085988b6 <+0x3896>
08596ca5 +0x1c85:  mov    0x8(%ebp),%eax
08596ca8 +0x1c88:  movl   $&_ZTV29Dispatcher_GuildCargoPushItem+0x8,(%eax)
08596cae +0x1c8e:  leave
08596caf +0x1c8f:  ret
08596cb0 +0x1c90:  push   %ebp
08596cb1 +0x1c91:  mov    %esp,%ebp
08596cb3 +0x1c93:  sub    $0x18,%esp
08596cb6 +0x1c96:  mov    0x8(%ebp),%eax
08596cb9 +0x1c99:  mov    %eax,(%esp)
08596cbc +0x1c9c:  call   085988d2 <+0x38b2>
08596cc1 +0x1ca1:  mov    0x8(%ebp),%eax
08596cc4 +0x1ca4:  movl   $&_ZTV28Dispatcher_GuildCargoPopItem+0x8,(%eax)
08596cca +0x1caa:  leave
08596ccb +0x1cab:  ret
08596ccc +0x1cac:  push   %ebp
08596ccd +0x1cad:  mov    %esp,%ebp
08596ccf +0x1caf:  sub    $0x18,%esp
08596cd2 +0x1cb2:  mov    0x8(%ebp),%eax
08596cd5 +0x1cb5:  mov    %eax,(%esp)
08596cd8 +0x1cb8:  call   085988ee <+0x38ce>
08596cdd +0x1cbd:  mov    0x8(%ebp),%eax
08596ce0 +0x1cc0:  movl   $&_ZTV29Dispatcher_GuildCargoMoveItem+0x8,(%eax)
08596ce6 +0x1cc6:  leave
08596ce7 +0x1cc7:  ret
08596ce8 +0x1cc8:  push   %ebp
08596ce9 +0x1cc9:  mov    %esp,%ebp
08596ceb +0x1ccb:  sub    $0x18,%esp
08596cee +0x1cce:  mov    0x8(%ebp),%eax
08596cf1 +0x1cd1:  mov    %eax,(%esp)
08596cf4 +0x1cd4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596cf9 +0x1cd9:  mov    0x8(%ebp),%eax
08596cfc +0x1cdc:  movl   $&_ZTV28Dispatcher_LoadingTimeReport+0x8,(%eax)
08596d02 +0x1ce2:  leave
08596d03 +0x1ce3:  ret
08596d04 +0x1ce4:  push   %ebp
08596d05 +0x1ce5:  mov    %esp,%ebp
08596d07 +0x1ce7:  sub    $0x18,%esp
08596d0a +0x1cea:  mov    0x8(%ebp),%eax
08596d0d +0x1ced:  mov    %eax,(%esp)
08596d10 +0x1cf0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596d15 +0x1cf5:  mov    0x8(%ebp),%eax
08596d18 +0x1cf8:  movl   $&_ZTV30Dispatcher_UseSharedEffectItem+0x8,(%eax)
08596d1e +0x1cfe:  leave
08596d1f +0x1cff:  ret
08596d20 +0x1d00:  push   %ebp
08596d21 +0x1d01:  mov    %esp,%ebp
08596d23 +0x1d03:  sub    $0x18,%esp
08596d26 +0x1d06:  mov    0x8(%ebp),%eax
08596d29 +0x1d09:  mov    %eax,(%esp)
08596d2c +0x1d0c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596d31 +0x1d11:  mov    0x8(%ebp),%eax
08596d34 +0x1d14:  movl   $&_ZTV31Dispatcher_BuyCeraShopLimitItem+0x8,(%eax)
08596d3a +0x1d1a:  leave
08596d3b +0x1d1b:  ret
08596d3c +0x1d1c:  push   %ebp
08596d3d +0x1d1d:  mov    %esp,%ebp
08596d3f +0x1d1f:  sub    $0x18,%esp
08596d42 +0x1d22:  mov    0x8(%ebp),%eax
08596d45 +0x1d25:  mov    %eax,(%esp)
08596d48 +0x1d28:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596d4d +0x1d2d:  mov    0x8(%ebp),%eax
08596d50 +0x1d30:  movl   $&_ZTV26Dispatcher_SecuDataControl+0x8,(%eax)
08596d56 +0x1d36:  leave
08596d57 +0x1d37:  ret
08596d58 +0x1d38:  push   %ebp
08596d59 +0x1d39:  mov    %esp,%ebp
08596d5b +0x1d3b:  sub    $0x18,%esp
08596d5e +0x1d3e:  mov    0x8(%ebp),%eax
08596d61 +0x1d41:  mov    %eax,(%esp)
08596d64 +0x1d44:  call   0859890a <+0x38ea>
08596d69 +0x1d49:  mov    0x8(%ebp),%eax
08596d6c +0x1d4c:  movl   $&_ZTV24Dispatcher_ChangeEmotion+0x8,(%eax)
08596d72 +0x1d52:  leave
08596d73 +0x1d53:  ret
08596d74 +0x1d54:  push   %ebp
08596d75 +0x1d55:  mov    %esp,%ebp
08596d77 +0x1d57:  sub    $0x18,%esp
08596d7a +0x1d5a:  mov    0x8(%ebp),%eax
08596d7d +0x1d5d:  mov    %eax,(%esp)
08596d80 +0x1d60:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596d85 +0x1d65:  mov    0x8(%ebp),%eax
08596d88 +0x1d68:  movl   $&_ZTV26Dispatcher_DieBloodMonster+0x8,(%eax)
08596d8e +0x1d6e:  leave
08596d8f +0x1d6f:  ret
08596d90 +0x1d70:  push   %ebp
08596d91 +0x1d71:  mov    %esp,%ebp
08596d93 +0x1d73:  sub    $0x18,%esp
08596d96 +0x1d76:  mov    0x8(%ebp),%eax
08596d99 +0x1d79:  mov    %eax,(%esp)
08596d9c +0x1d7c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596da1 +0x1d81:  mov    0x8(%ebp),%eax
08596da4 +0x1d84:  movl   $&_ZTV25Dispatcher_CompoundEmblem+0x8,(%eax)
08596daa +0x1d8a:  leave
08596dab +0x1d8b:  ret
08596dac +0x1d8c:  push   %ebp
08596dad +0x1d8d:  mov    %esp,%ebp
08596daf +0x1d8f:  sub    $0x18,%esp
08596db2 +0x1d92:  mov    0x8(%ebp),%eax
08596db5 +0x1d95:  mov    %eax,(%esp)
08596db8 +0x1d98:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596dbd +0x1d9d:  mov    0x8(%ebp),%eax
08596dc0 +0x1da0:  movl   $&_ZTV33Dispatcher_CheckAssaultMotionHack+0x8,(%eax)
08596dc6 +0x1da6:  leave
08596dc7 +0x1da7:  ret
08596dc8 +0x1da8:  push   %ebp
08596dc9 +0x1da9:  mov    %esp,%ebp
08596dcb +0x1dab:  sub    $0x18,%esp
08596dce +0x1dae:  mov    0x8(%ebp),%eax
08596dd1 +0x1db1:  mov    %eax,(%esp)
08596dd4 +0x1db4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596dd9 +0x1db9:  mov    0x8(%ebp),%eax
08596ddc +0x1dbc:  movl   $&_ZTV36Dispatcher_BloodRoundUiPrepareFinish+0x8,(%eax)
08596de2 +0x1dc2:  leave
08596de3 +0x1dc3:  ret
08596de4 +0x1dc4:  push   %ebp
08596de5 +0x1dc5:  mov    %esp,%ebp
08596de7 +0x1dc7:  sub    $0x18,%esp
08596dea +0x1dca:  mov    0x8(%ebp),%eax
08596ded +0x1dcd:  mov    %eax,(%esp)
08596df0 +0x1dd0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596df5 +0x1dd5:  mov    0x8(%ebp),%eax
08596df8 +0x1dd8:  movl   $&_ZTV38Dispatcher_RequestConditionEventReward+0x8,(%eax)
08596dfe +0x1dde:  leave
08596dff +0x1ddf:  ret
08596e00 +0x1de0:  push   %ebp
08596e01 +0x1de1:  mov    %esp,%ebp
08596e03 +0x1de3:  sub    $0x18,%esp
08596e06 +0x1de6:  mov    0x8(%ebp),%eax
08596e09 +0x1de9:  mov    %eax,(%esp)
08596e0c +0x1dec:  call   08598926 <+0x3906>
08596e11 +0x1df1:  mov    0x8(%ebp),%eax
08596e14 +0x1df4:  movl   $&_ZTV33Dispatcher_ChangeAnotherSkillTree+0x8,(%eax)
08596e1a +0x1dfa:  leave
08596e1b +0x1dfb:  ret
08596e1c +0x1dfc:  push   %ebp
08596e1d +0x1dfd:  mov    %esp,%ebp
08596e1f +0x1dff:  sub    $0x18,%esp
08596e22 +0x1e02:  mov    0x8(%ebp),%eax
08596e25 +0x1e05:  mov    %eax,(%esp)
08596e28 +0x1e08:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596e2d +0x1e0d:  mov    0x8(%ebp),%eax
08596e30 +0x1e10:  movl   $&_ZTV30Dispatcher_FightVillageMonster+0x8,(%eax)
08596e36 +0x1e16:  leave
08596e37 +0x1e17:  ret
08596e38 +0x1e18:  push   %ebp
08596e39 +0x1e19:  mov    %esp,%ebp
08596e3b +0x1e1b:  sub    $0x18,%esp
08596e3e +0x1e1e:  mov    0x8(%ebp),%eax
08596e41 +0x1e21:  mov    %eax,(%esp)
08596e44 +0x1e24:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596e49 +0x1e29:  mov    0x8(%ebp),%eax
08596e4c +0x1e2c:  movl   $&_ZTV39Dispatcher_FinishVillageMonsterFighting+0x8,(%eax)
08596e52 +0x1e32:  leave
08596e53 +0x1e33:  ret
08596e54 +0x1e34:  push   %ebp
08596e55 +0x1e35:  mov    %esp,%ebp
08596e57 +0x1e37:  sub    $0x18,%esp
08596e5a +0x1e3a:  mov    0x8(%ebp),%eax
08596e5d +0x1e3d:  mov    %eax,(%esp)
08596e60 +0x1e40:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596e65 +0x1e45:  mov    0x8(%ebp),%eax
08596e68 +0x1e48:  movl   $&_ZTV28Dispatcher_UpgradeGuildCargo+0x8,(%eax)
08596e6e +0x1e4e:  leave
08596e6f +0x1e4f:  ret
08596e70 +0x1e50:  push   %ebp
08596e71 +0x1e51:  mov    %esp,%ebp
08596e73 +0x1e53:  sub    $0x18,%esp
08596e76 +0x1e56:  mov    0x8(%ebp),%eax
08596e79 +0x1e59:  mov    %eax,(%esp)
08596e7c +0x1e5c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596e81 +0x1e61:  mov    0x8(%ebp),%eax
08596e84 +0x1e64:  movl   $&_ZTV26Dispatcher_RequestItemLock+0x8,(%eax)
08596e8a +0x1e6a:  leave
08596e8b +0x1e6b:  ret
08596e8c +0x1e6c:  push   %ebp
08596e8d +0x1e6d:  mov    %esp,%ebp
08596e8f +0x1e6f:  sub    $0x18,%esp
08596e92 +0x1e72:  mov    0x8(%ebp),%eax
08596e95 +0x1e75:  mov    %eax,(%esp)
08596e98 +0x1e78:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596e9d +0x1e7d:  mov    0x8(%ebp),%eax
08596ea0 +0x1e80:  movl   $&_ZTV28Dispatcher_RequestItemUnlock+0x8,(%eax)
08596ea6 +0x1e86:  leave
08596ea7 +0x1e87:  ret
08596ea8 +0x1e88:  push   %ebp
08596ea9 +0x1e89:  mov    %esp,%ebp
08596eab +0x1e8b:  sub    $0x18,%esp
08596eae +0x1e8e:  mov    0x8(%ebp),%eax
08596eb1 +0x1e91:  mov    %eax,(%esp)
08596eb4 +0x1e94:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596eb9 +0x1e99:  mov    0x8(%ebp),%eax
08596ebc +0x1e9c:  movl   $&_ZTV34Dispatcher_RequestItemUnlockCancel+0x8,(%eax)
08596ec2 +0x1ea2:  leave
08596ec3 +0x1ea3:  ret
08596ec4 +0x1ea4:  push   %ebp
08596ec5 +0x1ea5:  mov    %esp,%ebp
08596ec7 +0x1ea7:  sub    $0x18,%esp
08596eca +0x1eaa:  mov    0x8(%ebp),%eax
08596ecd +0x1ead:  mov    %eax,(%esp)
08596ed0 +0x1eb0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596ed5 +0x1eb5:  mov    0x8(%ebp),%eax
08596ed8 +0x1eb8:  movl   $&_ZTV27Dispatcher_UpgradeChronicle+0x8,(%eax)
08596ede +0x1ebe:  leave
08596edf +0x1ebf:  ret
08596ee0 +0x1ec0:  push   %ebp
08596ee1 +0x1ec1:  mov    %esp,%ebp
08596ee3 +0x1ec3:  sub    $0x18,%esp
08596ee6 +0x1ec6:  mov    0x8(%ebp),%eax
08596ee9 +0x1ec9:  mov    %eax,(%esp)
08596eec +0x1ecc:  call   08598942 <+0x3922>
08596ef1 +0x1ed1:  mov    0x8(%ebp),%eax
08596ef4 +0x1ed4:  movl   $&_ZTV24Dispatcher_EnchantByBead+0x8,(%eax)
08596efa +0x1eda:  leave
08596efb +0x1edb:  ret
08596efc +0x1edc:  push   %ebp
08596efd +0x1edd:  mov    %esp,%ebp
08596eff +0x1edf:  sub    $0x18,%esp
08596f02 +0x1ee2:  mov    0x8(%ebp),%eax
08596f05 +0x1ee5:  mov    %eax,(%esp)
08596f08 +0x1ee8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596f0d +0x1eed:  mov    0x8(%ebp),%eax
08596f10 +0x1ef0:  movl   $&_ZTV29Dispatcher_DungeonNPCBuffInfo+0x8,(%eax)
08596f16 +0x1ef6:  leave
08596f17 +0x1ef7:  ret
08596f18 +0x1ef8:  push   %ebp
08596f19 +0x1ef9:  mov    %esp,%ebp
08596f1b +0x1efb:  sub    $0x18,%esp
08596f1e +0x1efe:  mov    0x8(%ebp),%eax
08596f21 +0x1f01:  mov    %eax,(%esp)
08596f24 +0x1f04:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596f29 +0x1f09:  mov    0x8(%ebp),%eax
08596f2c +0x1f0c:  movl   $&_ZTV21Dispatcher_VerifyGold+0x8,(%eax)
08596f32 +0x1f12:  leave
08596f33 +0x1f13:  ret
08596f34 +0x1f14:  push   %ebp
08596f35 +0x1f15:  mov    %esp,%ebp
08596f37 +0x1f17:  sub    $0x18,%esp
08596f3a +0x1f1a:  mov    0x8(%ebp),%eax
08596f3d +0x1f1d:  mov    %eax,(%esp)
08596f40 +0x1f20:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596f45 +0x1f25:  mov    0x8(%ebp),%eax
08596f48 +0x1f28:  movl   $&_ZTV31Dispatcher_Security_ProcessScan+0x8,(%eax)
08596f4e +0x1f2e:  leave
08596f4f +0x1f2f:  ret
08596f50 +0x1f30:  push   %ebp
08596f51 +0x1f31:  mov    %esp,%ebp
08596f53 +0x1f33:  sub    $0x18,%esp
08596f56 +0x1f36:  mov    0x8(%ebp),%eax
08596f59 +0x1f39:  mov    %eax,(%esp)
08596f5c +0x1f3c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596f61 +0x1f41:  mov    0x8(%ebp),%eax
08596f64 +0x1f44:  movl   $&_ZTV26Dispatcher_Security_IPScan+0x8,(%eax)
08596f6a +0x1f4a:  leave
08596f6b +0x1f4b:  ret
08596f6c +0x1f4c:  push   %ebp
08596f6d +0x1f4d:  mov    %esp,%ebp
08596f6f +0x1f4f:  sub    $0x18,%esp
08596f72 +0x1f52:  mov    0x8(%ebp),%eax
08596f75 +0x1f55:  mov    %eax,(%esp)
08596f78 +0x1f58:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596f7d +0x1f5d:  mov    0x8(%ebp),%eax
08596f80 +0x1f60:  movl   $&_ZTV25Dispatcher_Lag_Statistics+0x8,(%eax)
08596f86 +0x1f66:  leave
08596f87 +0x1f67:  ret
08596f88 +0x1f68:  push   %ebp
08596f89 +0x1f69:  mov    %esp,%ebp
08596f8b +0x1f6b:  sub    $0x18,%esp
08596f8e +0x1f6e:  mov    0x8(%ebp),%eax
08596f91 +0x1f71:  mov    %eax,(%esp)
08596f94 +0x1f74:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596f99 +0x1f79:  mov    0x8(%ebp),%eax
08596f9c +0x1f7c:  movl   $&_ZTV35Dispatcher_Security_PacketIntegrity+0x8,(%eax)
08596fa2 +0x1f82:  leave
08596fa3 +0x1f83:  ret
08596fa4 +0x1f84:  push   %ebp
08596fa5 +0x1f85:  mov    %esp,%ebp
08596fa7 +0x1f87:  sub    $0x18,%esp
08596faa +0x1f8a:  mov    0x8(%ebp),%eax
08596fad +0x1f8d:  mov    %eax,(%esp)
08596fb0 +0x1f90:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596fb5 +0x1f95:  mov    0x8(%ebp),%eax
08596fb8 +0x1f98:  movl   $&_ZTV35Dispatcher_RequestOnTimeEventReward+0x8,(%eax)
08596fbe +0x1f9e:  leave
08596fbf +0x1f9f:  ret
08596fc0 +0x1fa0:  push   %ebp
08596fc1 +0x1fa1:  mov    %esp,%ebp
08596fc3 +0x1fa3:  sub    $0x18,%esp
08596fc6 +0x1fa6:  mov    0x8(%ebp),%eax
08596fc9 +0x1fa9:  mov    %eax,(%esp)
08596fcc +0x1fac:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596fd1 +0x1fb1:  mov    0x8(%ebp),%eax
08596fd4 +0x1fb4:  movl   $&_ZTV29Dispatcher_RequestAddPvPBuddy+0x8,(%eax)
08596fda +0x1fba:  leave
08596fdb +0x1fbb:  ret
08596fdc +0x1fbc:  push   %ebp
08596fdd +0x1fbd:  mov    %esp,%ebp
08596fdf +0x1fbf:  sub    $0x18,%esp
08596fe2 +0x1fc2:  mov    0x8(%ebp),%eax
08596fe5 +0x1fc5:  mov    %eax,(%esp)
08596fe8 +0x1fc8:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08596fed +0x1fcd:  mov    0x8(%ebp),%eax
08596ff0 +0x1fd0:  movl   $&_ZTV30Dispatcher_ResponseAddPvPBuddy+0x8,(%eax)
08596ff6 +0x1fd6:  leave
08596ff7 +0x1fd7:  ret
08596ff8 +0x1fd8:  push   %ebp
08596ff9 +0x1fd9:  mov    %esp,%ebp
08596ffb +0x1fdb:  sub    $0x18,%esp
08596ffe +0x1fde:  mov    0x8(%ebp),%eax
08597001 +0x1fe1:  mov    %eax,(%esp)
08597004 +0x1fe4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597009 +0x1fe9:  mov    0x8(%ebp),%eax
0859700c +0x1fec:  movl   $&_ZTV25Dispatcher_RemovePvPBuddy+0x8,(%eax)
08597012 +0x1ff2:  leave
08597013 +0x1ff3:  ret
08597014 +0x1ff4:  push   %ebp
08597015 +0x1ff5:  mov    %esp,%ebp
08597017 +0x1ff7:  sub    $0x18,%esp
0859701a +0x1ffa:  mov    0x8(%ebp),%eax
0859701d +0x1ffd:  mov    %eax,(%esp)
08597020 +0x2000:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597025 +0x2005:  mov    0x8(%ebp),%eax
08597028 +0x2008:  movl   $&_ZTV27Dispatcher_PvPBuddyConnList+0x8,(%eax)
0859702e +0x200e:  leave
0859702f +0x200f:  ret
08597030 +0x2010:  push   %ebp
08597031 +0x2011:  mov    %esp,%ebp
08597033 +0x2013:  sub    $0x18,%esp
08597036 +0x2016:  mov    0x8(%ebp),%eax
08597039 +0x2019:  mov    %eax,(%esp)
0859703c +0x201c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597041 +0x2021:  mov    0x8(%ebp),%eax
08597044 +0x2024:  movl   $&_ZTV41Dispatcher_Security_NonClient_GetResponse+0x8,(%eax)
0859704a +0x202a:  leave
0859704b +0x202b:  ret
0859704c +0x202c:  push   %ebp
0859704d +0x202d:  mov    %esp,%ebp
0859704f +0x202f:  sub    $0x18,%esp
08597052 +0x2032:  mov    0x8(%ebp),%eax
08597055 +0x2035:  mov    %eax,(%esp)
08597058 +0x2038:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859705d +0x203d:  mov    0x8(%ebp),%eax
08597060 +0x2040:  movl   $&_ZTV35Dispatcher_Security_MemoryIntegrity+0x8,(%eax)
08597066 +0x2046:  leave
08597067 +0x2047:  ret
08597068 +0x2048:  push   %ebp
08597069 +0x2049:  mov    %esp,%ebp
0859706b +0x204b:  sub    $0x18,%esp
0859706e +0x204e:  mov    0x8(%ebp),%eax
08597071 +0x2051:  mov    %eax,(%esp)
08597074 +0x2054:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597079 +0x2059:  mov    0x8(%ebp),%eax
0859707c +0x205c:  movl   $&_ZTV42Dispatcher_Compound_Equipment_Upgrade_Card+0x8,(%eax)
08597082 +0x2062:  leave
08597083 +0x2063:  ret
08597084 +0x2064:  push   %ebp
08597085 +0x2065:  mov    %esp,%ebp
08597087 +0x2067:  sub    $0x18,%esp
0859708a +0x206a:  mov    0x8(%ebp),%eax
0859708d +0x206d:  mov    %eax,(%esp)
08597090 +0x2070:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597095 +0x2075:  mov    0x8(%ebp),%eax
08597098 +0x2078:  movl   $&_ZTV29Dispatcher_Change_Charac_Slot+0x8,(%eax)
0859709e +0x207e:  leave
0859709f +0x207f:  ret
085970a0 +0x2080:  push   %ebp
085970a1 +0x2081:  mov    %esp,%ebp
085970a3 +0x2083:  sub    $0x18,%esp
085970a6 +0x2086:  mov    0x8(%ebp),%eax
085970a9 +0x2089:  mov    %eax,(%esp)
085970ac +0x208c:  call   0859895e <+0x393e>
085970b1 +0x2091:  mov    0x8(%ebp),%eax
085970b4 +0x2094:  movl   $&_ZTV28Dispatcher_SecretShopBuyItem+0x8,(%eax)
085970ba +0x209a:  leave
085970bb +0x209b:  ret
085970bc +0x209c:  push   %ebp
085970bd +0x209d:  mov    %esp,%ebp
085970bf +0x209f:  sub    $0x18,%esp
085970c2 +0x20a2:  mov    0x8(%ebp),%eax
085970c5 +0x20a5:  mov    %eax,(%esp)
085970c8 +0x20a8:  call   0859897a <+0x395a>
085970cd +0x20ad:  mov    0x8(%ebp),%eax
085970d0 +0x20b0:  movl   $&_ZTV30Dispatcher_SecretShopOpenClose+0x8,(%eax)
085970d6 +0x20b6:  leave
085970d7 +0x20b7:  ret
085970d8 +0x20b8:  push   %ebp
085970d9 +0x20b9:  mov    %esp,%ebp
085970db +0x20bb:  sub    $0x18,%esp
085970de +0x20be:  mov    0x8(%ebp),%eax
085970e1 +0x20c1:  mov    %eax,(%esp)
085970e4 +0x20c4:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085970e9 +0x20c9:  mov    0x8(%ebp),%eax
085970ec +0x20cc:  movl   $&_ZTV26Dispatcher_CompleteLoadPvP+0x8,(%eax)
085970f2 +0x20d2:  leave
085970f3 +0x20d3:  ret
085970f4 +0x20d4:  push   %ebp
085970f5 +0x20d5:  mov    %esp,%ebp
085970f7 +0x20d7:  sub    $0x18,%esp
085970fa +0x20da:  mov    0x8(%ebp),%eax
085970fd +0x20dd:  mov    %eax,(%esp)
08597100 +0x20e0:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597105 +0x20e5:  mov    0x8(%ebp),%eax
08597108 +0x20e8:  movl   $&_ZTV24Dispatcher_ConnectP2PPvP+0x8,(%eax)
0859710e +0x20ee:  leave
0859710f +0x20ef:  ret
08597110 +0x20f0:  push   %ebp
08597111 +0x20f1:  mov    %esp,%ebp
08597113 +0x20f3:  sub    $0x18,%esp
08597116 +0x20f6:  mov    0x8(%ebp),%eax
08597119 +0x20f9:  mov    %eax,(%esp)
0859711c +0x20fc:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597121 +0x2101:  mov    0x8(%ebp),%eax
08597124 +0x2104:  movl   $&_ZTV29Dispatcher_BiddingRoutingItem+0x8,(%eax)
0859712a +0x210a:  leave
0859712b +0x210b:  ret
0859712c +0x210c:  push   %ebp
0859712d +0x210d:  mov    %esp,%ebp
0859712f +0x210f:  sub    $0x18,%esp
08597132 +0x2112:  mov    0x8(%ebp),%eax
08597135 +0x2115:  mov    %eax,(%esp)
08597138 +0x2118:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859713d +0x211d:  mov    0x8(%ebp),%eax
08597140 +0x2120:  movl   $&_ZTV29Dispatcher_CreateAccountCargo+0x8,(%eax)
08597146 +0x2126:  leave
08597147 +0x2127:  ret
08597148 +0x2128:  push   %ebp
08597149 +0x2129:  mov    %esp,%ebp
0859714b +0x212b:  sub    $0x18,%esp
0859714e +0x212e:  mov    0x8(%ebp),%eax
08597151 +0x2131:  mov    %eax,(%esp)
08597154 +0x2134:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597159 +0x2139:  mov    0x8(%ebp),%eax
0859715c +0x213c:  movl   $&_ZTV30Dispatcher_UpgradeAccountCargo+0x8,(%eax)
08597162 +0x2142:  leave
08597163 +0x2143:  ret
08597164 +0x2144:  push   %ebp
08597165 +0x2145:  mov    %esp,%ebp
08597167 +0x2147:  sub    $0x18,%esp
0859716a +0x214a:  mov    0x8(%ebp),%eax
0859716d +0x214d:  mov    %eax,(%esp)
08597170 +0x2150:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597175 +0x2155:  mov    0x8(%ebp),%eax
08597178 +0x2158:  movl   $&_ZTV23Dispatcher_DepositMoney+0x8,(%eax)
0859717e +0x215e:  leave
0859717f +0x215f:  ret
08597180 +0x2160:  push   %ebp
08597181 +0x2161:  mov    %esp,%ebp
08597183 +0x2163:  sub    $0x18,%esp
08597186 +0x2166:  mov    0x8(%ebp),%eax
08597189 +0x2169:  mov    %eax,(%esp)
0859718c +0x216c:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597191 +0x2171:  mov    0x8(%ebp),%eax
08597194 +0x2174:  movl   $&_ZTV24Dispatcher_WithdrawMoney+0x8,(%eax)
0859719a +0x217a:  leave
0859719b +0x217b:  ret
0859719c +0x217c:  push   %ebp
0859719d +0x217d:  mov    %esp,%ebp
0859719f +0x217f:  sub    $0x18,%esp
085971a2 +0x2182:  mov    0x8(%ebp),%eax
085971a5 +0x2185:  mov    %eax,(%esp)
085971a8 +0x2188:  call   08598996 <+0x3976>
085971ad +0x218d:  mov    0x8(%ebp),%eax
085971b0 +0x2190:  movl   $&_ZTV36Dispatcher_Skill_Command_Customizing+0x8,(%eax)
085971b6 +0x2196:  leave
085971b7 +0x2197:  ret
085971b8 +0x2198:  push   %ebp
085971b9 +0x2199:  mov    %esp,%ebp
085971bb +0x219b:  sub    $0x18,%esp
085971be +0x219e:  mov    0x8(%ebp),%eax
085971c1 +0x21a1:  mov    %eax,(%esp)
085971c4 +0x21a4:  call   08598996 <+0x3976>
085971c9 +0x21a9:  mov    0x8(%ebp),%eax
085971cc +0x21ac:  movl   $&_ZTV36Dispatcher_Skill_Command_All_Default+0x8,(%eax)
085971d2 +0x21b2:  leave
085971d3 +0x21b3:  ret
085971d4 +0x21b4:  push   %ebp
085971d5 +0x21b5:  mov    %esp,%ebp
085971d7 +0x21b7:  sub    $0x18,%esp
085971da +0x21ba:  mov    0x8(%ebp),%eax
085971dd +0x21bd:  mov    %eax,(%esp)
085971e0 +0x21c0:  call   085989b2 <+0x3992>
085971e5 +0x21c5:  mov    0x8(%ebp),%eax
085971e8 +0x21c8:  movl   $&_ZTV27Dispatcher_Open_Guild_Board+0x8,(%eax)
085971ee +0x21ce:  leave
085971ef +0x21cf:  ret
085971f0 +0x21d0:  push   %ebp
085971f1 +0x21d1:  mov    %esp,%ebp
085971f3 +0x21d3:  sub    $0x18,%esp
085971f6 +0x21d6:  mov    0x8(%ebp),%eax
085971f9 +0x21d9:  mov    %eax,(%esp)
085971fc +0x21dc:  call   085989b2 <+0x3992>
08597201 +0x21e1:  mov    0x8(%ebp),%eax
08597204 +0x21e4:  movl   $&_ZTV34Dispatcher_Write_On_The_GuildBoard+0x8,(%eax)
0859720a +0x21ea:  leave
0859720b +0x21eb:  ret
0859720c +0x21ec:  push   %ebp
0859720d +0x21ed:  mov    %esp,%ebp
0859720f +0x21ef:  sub    $0x18,%esp
08597212 +0x21f2:  mov    0x8(%ebp),%eax
08597215 +0x21f5:  mov    %eax,(%esp)
08597218 +0x21f8:  call   085989b2 <+0x3992>
0859721d +0x21fd:  mov    0x8(%ebp),%eax
08597220 +0x2200:  movl   $&_ZTV33Dispatcher_Delete_GuildBoard_Text+0x8,(%eax)
08597226 +0x2206:  leave
08597227 +0x2207:  ret
08597228 +0x2208:  push   %ebp
08597229 +0x2209:  mov    %esp,%ebp
0859722b +0x220b:  sub    $0x18,%esp
0859722e +0x220e:  mov    0x8(%ebp),%eax
08597231 +0x2211:  mov    %eax,(%esp)
08597234 +0x2214:  call   085989ce <+0x39ae>
08597239 +0x2219:  mov    0x8(%ebp),%eax
0859723c +0x221c:  movl   $&_ZTV33Dispatcher_Break_Away_Quest_Check+0x8,(%eax)
08597242 +0x2222:  leave
08597243 +0x2223:  ret
08597244 +0x2224:  push   %ebp
08597245 +0x2225:  mov    %esp,%ebp
08597247 +0x2227:  push   %esi
08597248 +0x2228:  push   %ebx
08597249 +0x2229:  sub    $0x10,%esp
0859724c +0x222c:  mov    0x8(%ebp),%eax
0859724f +0x222f:  mov    %eax,(%esp)
08597252 +0x2232:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597257 +0x2237:  mov    0x8(%ebp),%eax
0859725a +0x223a:  movl   $&_ZTV31Dispatcher_Compound_ExtreamItem+0x8,(%eax)
08597260 +0x2240:  mov    0x8(%ebp),%eax
08597263 +0x2243:  add    $0xc,%eax
08597266 +0x2246:  mov    %eax,%ebx
08597268 +0x2248:  mov    $0x1,%esi
0859726d +0x224d:  jmp    0859727d <+0x225d>
0859726f +0x224f:  mov    %ebx,(%esp)
08597272 +0x2252:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08597277 +0x2257:  add    $0x3d,%ebx
0859727a +0x225a:  sub    $0x1,%esi
0859727d +0x225d:  cmp    $0xffffffff,%esi
08597280 +0x2260:  setne  %al
08597283 +0x2263:  test   %al,%al
08597285 +0x2265:  jne    0859726f <+0x224f>
08597287 +0x2267:  mov    0x8(%ebp),%eax
0859728a +0x226a:  add    $0x90,%eax
0859728f +0x226f:  mov    %eax,(%esp)
08597292 +0x2272:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08597297 +0x2277:  add    $0x10,%esp
0859729a +0x227a:  pop    %ebx
0859729b +0x227b:  pop    %esi
0859729c +0x227c:  pop    %ebp
0859729d +0x227d:  ret
0859729e +0x227e:  push   %ebp
0859729f +0x227f:  mov    %esp,%ebp
085972a1 +0x2281:  sub    $0x18,%esp
085972a4 +0x2284:  mov    0x8(%ebp),%eax
085972a7 +0x2287:  mov    %eax,(%esp)
085972aa +0x228a:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085972af +0x228f:  mov    0x8(%ebp),%eax
085972b2 +0x2292:  movl   $&_ZTV21Dispatcher_RedeemList+0x8,(%eax)
085972b8 +0x2298:  leave
085972b9 +0x2299:  ret
085972ba +0x229a:  push   %ebp
085972bb +0x229b:  mov    %esp,%ebp
085972bd +0x229d:  sub    $0x18,%esp
085972c0 +0x22a0:  mov    0x8(%ebp),%eax
085972c3 +0x22a3:  mov    %eax,(%esp)
085972c6 +0x22a6:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085972cb +0x22ab:  mov    0x8(%ebp),%eax
085972ce +0x22ae:  movl   $&_ZTV17Dispatcher_Redeem+0x8,(%eax)
085972d4 +0x22b4:  leave
085972d5 +0x22b5:  ret
085972d6 +0x22b6:  push   %ebp
085972d7 +0x22b7:  mov    %esp,%ebp
085972d9 +0x22b9:  sub    $0x18,%esp
085972dc +0x22bc:  mov    0x8(%ebp),%eax
085972df +0x22bf:  mov    %eax,(%esp)
085972e2 +0x22c2:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085972e7 +0x22c7:  mov    0x8(%ebp),%eax
085972ea +0x22ca:  movl   $&_ZTV27Dispatcher_MultiMailBoxSend+0x8,(%eax)
085972f0 +0x22d0:  leave
085972f1 +0x22d1:  ret
085972f2 +0x22d2:  push   %ebp
085972f3 +0x22d3:  mov    %esp,%ebp
085972f5 +0x22d5:  sub    $0x18,%esp
085972f8 +0x22d8:  mov    0x8(%ebp),%eax
085972fb +0x22db:  mov    %eax,(%esp)
085972fe +0x22de:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597303 +0x22e3:  mov    0x8(%ebp),%eax
08597306 +0x22e6:  movl   $&_ZTV33Dispatcher_QueryCharacInfoMailbox+0x8,(%eax)
0859730c +0x22ec:  leave
0859730d +0x22ed:  ret
0859730e +0x22ee:  push   %ebp
0859730f +0x22ef:  mov    %esp,%ebp
08597311 +0x22f1:  sub    $0x18,%esp
08597314 +0x22f4:  mov    0x8(%ebp),%eax
08597317 +0x22f7:  mov    %eax,(%esp)
0859731a +0x22fa:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859731f +0x22ff:  mov    0x8(%ebp),%eax
08597322 +0x2302:  movl   $&_ZTV31Dispatcher_OperateRidableObject+0x8,(%eax)
08597328 +0x2308:  leave
08597329 +0x2309:  ret
0859732a +0x230a:  push   %ebp
0859732b +0x230b:  mov    %esp,%ebp
0859732d +0x230d:  sub    $0x18,%esp
08597330 +0x2310:  mov    0x8(%ebp),%eax
08597333 +0x2313:  mov    %eax,(%esp)
08597336 +0x2316:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859733b +0x231b:  mov    0x8(%ebp),%eax
0859733e +0x231e:  movl   $&_ZTV35Dispatcher_SelectUltimateDifficulty+0x8,(%eax)
08597344 +0x2324:  leave
08597345 +0x2325:  ret
08597346 +0x2326:  push   %ebp
08597347 +0x2327:  mov    %esp,%ebp
08597349 +0x2329:  sub    $0x18,%esp
0859734c +0x232c:  mov    0x8(%ebp),%eax
0859734f +0x232f:  mov    %eax,(%esp)
08597352 +0x2332:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597357 +0x2337:  mov    0x8(%ebp),%eax
0859735a +0x233a:  movl   $&_ZTV31Dispatcher_AuctionBuyItemApiece+0x8,(%eax)
08597360 +0x2340:  leave
08597361 +0x2341:  ret
08597362 +0x2342:  push   %ebp
08597363 +0x2343:  mov    %esp,%ebp
08597365 +0x2345:  sub    $0x18,%esp
08597368 +0x2348:  mov    0x8(%ebp),%eax
0859736b +0x234b:  mov    %eax,(%esp)
0859736e +0x234e:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597373 +0x2353:  mov    0x8(%ebp),%eax
08597376 +0x2356:  movl   $&_ZTV41Dispatcher_Security_PI_HashModulation_S2C+0x8,(%eax)
0859737c +0x235c:  leave
0859737d +0x235d:  ret
0859737e +0x235e:  push   %ebp
0859737f +0x235f:  mov    %esp,%ebp
08597381 +0x2361:  sub    $0x18,%esp
08597384 +0x2364:  mov    0x8(%ebp),%eax
08597387 +0x2367:  mov    %eax,(%esp)
0859738a +0x236a:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859738f +0x236f:  mov    0x8(%ebp),%eax
08597392 +0x2372:  movl   $&_ZTV41Dispatcher_Security_PI_HashModulation_C2C+0x8,(%eax)
08597398 +0x2378:  leave
08597399 +0x2379:  ret
0859739a +0x237a:  push   %ebp
0859739b +0x237b:  mov    %esp,%ebp
0859739d +0x237d:  sub    $0x18,%esp
085973a0 +0x2380:  mov    0x8(%ebp),%eax
085973a3 +0x2383:  mov    %eax,(%esp)
085973a6 +0x2386:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085973ab +0x238b:  mov    0x8(%ebp),%eax
085973ae +0x238e:  movl   $&_ZTV39Dispatcer_polic_one_to_one_chat_disable+0x8,(%eax)
085973b4 +0x2394:  leave
085973b5 +0x2395:  ret
085973b6 +0x2396:  push   %ebp
085973b7 +0x2397:  mov    %esp,%ebp
085973b9 +0x2399:  sub    $0x18,%esp
085973bc +0x239c:  mov    0x8(%ebp),%eax
085973bf +0x239f:  mov    %eax,(%esp)
085973c2 +0x23a2:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085973c7 +0x23a7:  mov    0x8(%ebp),%eax
085973ca +0x23aa:  movl   $&_ZTV40Dispatcher_police_queryCharacName_useMid+0x8,(%eax)
085973d0 +0x23b0:  leave
085973d1 +0x23b1:  ret
085973d2 +0x23b2:  push   %ebp
085973d3 +0x23b3:  mov    %esp,%ebp
085973d5 +0x23b5:  sub    $0x18,%esp
085973d8 +0x23b8:  mov    0x8(%ebp),%eax
085973db +0x23bb:  mov    %eax,(%esp)
085973de +0x23be:  call   085989ea <+0x39ca>
085973e3 +0x23c3:  mov    0x8(%ebp),%eax
085973e6 +0x23c6:  movl   $&_ZTV29Dispatcher_ValidateScriptHash+0x8,(%eax)
085973ec +0x23cc:  leave
085973ed +0x23cd:  ret
085973ee +0x23ce:  push   %ebp
085973ef +0x23cf:  mov    %esp,%ebp
085973f1 +0x23d1:  sub    $0x18,%esp
085973f4 +0x23d4:  mov    0x8(%ebp),%eax
085973f7 +0x23d7:  mov    %eax,(%esp)
085973fa +0x23da:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085973ff +0x23df:  mov    0x8(%ebp),%eax
08597402 +0x23e2:  movl   $&_ZTV37Dispatcher_Change_PartyMemberPosition+0x8,(%eax)
08597408 +0x23e8:  leave
08597409 +0x23e9:  ret
0859740a +0x23ea:  push   %ebp
0859740b +0x23eb:  mov    %esp,%ebp
0859740d +0x23ed:  sub    $0x18,%esp
08597410 +0x23f0:  mov    0x8(%ebp),%eax
08597413 +0x23f3:  mov    %eax,(%esp)
08597416 +0x23f6:  call   08598a06 <+0x39e6>
0859741b +0x23fb:  mov    0x8(%ebp),%eax
0859741e +0x23fe:  movl   $&_ZTV23Dispatcher_ScanBotByDll+0x8,(%eax)
08597424 +0x2404:  leave
08597425 +0x2405:  ret
08597426 +0x2406:  push   %ebp
08597427 +0x2407:  mov    %esp,%ebp
08597429 +0x2409:  sub    $0x18,%esp
0859742c +0x240c:  mov    0x8(%ebp),%eax
0859742f +0x240f:  mov    %eax,(%esp)
08597432 +0x2412:  call   08598a22 <+0x3a02>
08597437 +0x2417:  mov    0x8(%ebp),%eax
0859743a +0x241a:  movl   $&_ZTV23Dispatcher_UseLimitCube+0x8,(%eax)
08597440 +0x2420:  leave
08597441 +0x2421:  ret
08597442 +0x2422:  push   %ebp
08597443 +0x2423:  mov    %esp,%ebp
08597445 +0x2425:  sub    $0x18,%esp
08597448 +0x2428:  mov    0x8(%ebp),%eax
0859744b +0x242b:  mov    %eax,(%esp)
0859744e +0x242e:  call   08598712 <+0x36f2>
08597453 +0x2433:  mov    0x8(%ebp),%eax
08597456 +0x2436:  movl   $&_ZTV27Dispatcher_RefreshGuildInfo+0x8,(%eax)
0859745c +0x243c:  leave
0859745d +0x243d:  ret
0859745e +0x243e:  push   %ebp
0859745f +0x243f:  mov    %esp,%ebp
08597461 +0x2441:  sub    $0x18,%esp
08597464 +0x2444:  mov    0x8(%ebp),%eax
08597467 +0x2447:  mov    %eax,(%esp)
0859746a +0x244a:  call   08598a3e <+0x3a1e>
0859746f +0x244f:  mov    0x8(%ebp),%eax
08597472 +0x2452:  movl   $&_ZTV26Dispatcher_DonateGuildFund+0x8,(%eax)
08597478 +0x2458:  leave
08597479 +0x2459:  ret
0859747a +0x245a:  push   %ebp
0859747b +0x245b:  mov    %esp,%ebp
0859747d +0x245d:  sub    $0x18,%esp
08597480 +0x2460:  mov    0x8(%ebp),%eax
08597483 +0x2463:  mov    %eax,(%esp)
08597486 +0x2466:  call   08598a5a <+0x3a3a>
0859748b +0x246b:  mov    0x8(%ebp),%eax
0859748e +0x246e:  movl   $&_ZTV25Dispatcher_CheckJoinGuild+0x8,(%eax)
08597494 +0x2474:  leave
08597495 +0x2475:  ret
08597496 +0x2476:  push   %ebp
08597497 +0x2477:  mov    %esp,%ebp
08597499 +0x2479:  sub    $0x18,%esp
0859749c +0x247c:  mov    0x8(%ebp),%eax
0859749f +0x247f:  mov    %eax,(%esp)
085974a2 +0x2482:  call   08598a76 <+0x3a56>
085974a7 +0x2487:  mov    0x8(%ebp),%eax
085974aa +0x248a:  movl   $&_ZTV27Dispatcher_RequestJoinGuild+0x8,(%eax)
085974b0 +0x2490:  leave
085974b1 +0x2491:  ret
085974b2 +0x2492:  push   %ebp
085974b3 +0x2493:  mov    %esp,%ebp
085974b5 +0x2495:  sub    $0x18,%esp
085974b8 +0x2498:  mov    0x8(%ebp),%eax
085974bb +0x249b:  mov    %eax,(%esp)
085974be +0x249e:  call   08598a92 <+0x3a72>
085974c3 +0x24a3:  mov    0x8(%ebp),%eax
085974c6 +0x24a6:  movl   $&_ZTV26Dispatcher_CancelJoinGuild+0x8,(%eax)
085974cc +0x24ac:  leave
085974cd +0x24ad:  ret
085974ce +0x24ae:  push   %ebp
085974cf +0x24af:  mov    %esp,%ebp
085974d1 +0x24b1:  sub    $0x18,%esp
085974d4 +0x24b4:  mov    0x8(%ebp),%eax
085974d7 +0x24b7:  mov    %eax,(%esp)
085974da +0x24ba:  call   08598aae <+0x3a8e>
085974df +0x24bf:  mov    0x8(%ebp),%eax
085974e2 +0x24c2:  movl   $&_ZTV27Dispatcher_ApproveJoinGuild+0x8,(%eax)
085974e8 +0x24c8:  leave
085974e9 +0x24c9:  ret
085974ea +0x24ca:  push   %ebp
085974eb +0x24cb:  mov    %esp,%ebp
085974ed +0x24cd:  sub    $0x18,%esp
085974f0 +0x24d0:  mov    0x8(%ebp),%eax
085974f3 +0x24d3:  mov    %eax,(%esp)
085974f6 +0x24d6:  call   08598aca <+0x3aaa>
085974fb +0x24db:  mov    0x8(%ebp),%eax
085974fe +0x24de:  movl   $&_ZTV24Dispatcher_DenyJoinGuild+0x8,(%eax)
08597504 +0x24e4:  leave
08597505 +0x24e5:  ret
08597506 +0x24e6:  push   %ebp
08597507 +0x24e7:  mov    %esp,%ebp
08597509 +0x24e9:  sub    $0x18,%esp
0859750c +0x24ec:  mov    0x8(%ebp),%eax
0859750f +0x24ef:  mov    %eax,(%esp)
08597512 +0x24f2:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597517 +0x24f7:  mov    0x8(%ebp),%eax
0859751a +0x24fa:  movl   $&_ZTV24Dispatcher_GuildJoinList+0x8,(%eax)
08597520 +0x2500:  leave
08597521 +0x2501:  ret
08597522 +0x2502:  push   %ebp
08597523 +0x2503:  mov    %esp,%ebp
08597525 +0x2505:  sub    $0x18,%esp
08597528 +0x2508:  mov    0x8(%ebp),%eax
0859752b +0x250b:  mov    %eax,(%esp)
0859752e +0x250e:  call   08598ae6 <+0x3ac6>
08597533 +0x2513:  mov    0x8(%ebp),%eax
08597536 +0x2516:  movl   $&_ZTV30Dispatcher_GuildAttendanceInfo+0x8,(%eax)
0859753c +0x251c:  leave
0859753d +0x251d:  ret
0859753e +0x251e:  push   %ebp
0859753f +0x251f:  mov    %esp,%ebp
08597541 +0x2521:  sub    $0x18,%esp
08597544 +0x2524:  mov    0x8(%ebp),%eax
08597547 +0x2527:  mov    %eax,(%esp)
0859754a +0x252a:  call   08598b02 <+0x3ae2>
0859754f +0x252f:  mov    0x8(%ebp),%eax
08597552 +0x2532:  movl   $&_ZTV21Dispatcher_MotionHack+0x8,(%eax)
08597558 +0x2538:  leave
08597559 +0x2539:  ret
0859755a +0x253a:  push   %ebp
0859755b +0x253b:  mov    %esp,%ebp
0859755d +0x253d:  sub    $0x18,%esp
08597560 +0x2540:  mov    0x8(%ebp),%eax
08597563 +0x2543:  mov    %eax,(%esp)
08597566 +0x2546:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859756b +0x254b:  mov    0x8(%ebp),%eax
0859756e +0x254e:  movl   $&_ZTVN8APSystem22Dispatcher_ClearActionE+0x8,(%eax)
08597574 +0x2554:  leave
08597575 +0x2555:  ret
08597576 +0x2556:  push   %ebp
08597577 +0x2557:  mov    %esp,%ebp
08597579 +0x2559:  sub    $0x18,%esp
0859757c +0x255c:  mov    0x8(%ebp),%eax
0859757f +0x255f:  mov    %eax,(%esp)
08597582 +0x2562:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597587 +0x2567:  mov    0x8(%ebp),%eax
0859758a +0x256a:  movl   $&_ZTVN8APSystem25Dispatcher_GetTodayRewardE+0x8,(%eax)
08597590 +0x2570:  leave
08597591 +0x2571:  ret
08597592 +0x2572:  push   %ebp
08597593 +0x2573:  mov    %esp,%ebp
08597595 +0x2575:  sub    $0x18,%esp
08597598 +0x2578:  mov    0x8(%ebp),%eax
0859759b +0x257b:  mov    %eax,(%esp)
0859759e +0x257e:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085975a3 +0x2583:  mov    0x8(%ebp),%eax
085975a6 +0x2586:  movl   $&_ZTV24Dispatcher_JoinGuildInfo+0x8,(%eax)
085975ac +0x258c:  leave
085975ad +0x258d:  ret
085975ae +0x258e:  push   %ebp
085975af +0x258f:  mov    %esp,%ebp
085975b1 +0x2591:  sub    $0x18,%esp
085975b4 +0x2594:  mov    0x8(%ebp),%eax
085975b7 +0x2597:  mov    %eax,(%esp)
085975ba +0x259a:  call   08598b1e <+0x3afe>
085975bf +0x259f:  mov    0x8(%ebp),%eax
085975c2 +0x25a2:  movl   $&_ZTV23Dispatcher_ScanBotByDrv+0x8,(%eax)
085975c8 +0x25a8:  leave
085975c9 +0x25a9:  ret
085975ca +0x25aa:  push   %ebp
085975cb +0x25ab:  mov    %esp,%ebp
085975cd +0x25ad:  sub    $0x18,%esp
085975d0 +0x25b0:  mov    0x8(%ebp),%eax
085975d3 +0x25b3:  mov    %eax,(%esp)
085975d6 +0x25b6:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085975db +0x25bb:  mov    0x8(%ebp),%eax
085975de +0x25be:  movl   $&_ZTV21Dispatcher_AskRematch+0x8,(%eax)
085975e4 +0x25c4:  leave
085975e5 +0x25c5:  ret
085975e6 +0x25c6:  push   %ebp
085975e7 +0x25c7:  mov    %esp,%ebp
085975e9 +0x25c9:  sub    $0x18,%esp
085975ec +0x25cc:  mov    0x8(%ebp),%eax
085975ef +0x25cf:  mov    %eax,(%esp)
085975f2 +0x25d2:  call   08598b3a <+0x3b1a>
085975f7 +0x25d7:  mov    0x8(%ebp),%eax
085975fa +0x25da:  movl   $&_ZTV39Dispatcher_SaveGameOption_QuickChatting+0x8,(%eax)
08597600 +0x25e0:  leave
08597601 +0x25e1:  ret
08597602 +0x25e2:  push   %ebp
08597603 +0x25e3:  mov    %esp,%ebp
08597605 +0x25e5:  sub    $0x18,%esp
08597608 +0x25e8:  mov    0x8(%ebp),%eax
0859760b +0x25eb:  mov    %eax,(%esp)
0859760e +0x25ee:  call   08598b56 <+0x3b36>
08597613 +0x25f3:  mov    0x8(%ebp),%eax
08597616 +0x25f6:  movl   $&_ZTV45Dispatcher_Select_3rdChronicleItem_ForEnchant+0x8,(%eax)
0859761c +0x25fc:  leave
0859761d +0x25fd:  ret
0859761e +0x25fe:  push   %ebp
0859761f +0x25ff:  mov    %esp,%ebp
08597621 +0x2601:  sub    $0x18,%esp
08597624 +0x2604:  mov    0x8(%ebp),%eax
08597627 +0x2607:  mov    %eax,(%esp)
0859762a +0x260a:  call   08598b72 <+0x3b52>
0859762f +0x260f:  mov    0x8(%ebp),%eax
08597632 +0x2612:  movl   $&_ZTV35Dispatcher_Enchant_3rdChronicleItem+0x8,(%eax)
08597638 +0x2618:  leave
08597639 +0x2619:  ret
0859763a +0x261a:  push   %ebp
0859763b +0x261b:  mov    %esp,%ebp
0859763d +0x261d:  sub    $0x18,%esp
08597640 +0x2620:  mov    0x8(%ebp),%eax
08597643 +0x2623:  mov    %eax,(%esp)
08597646 +0x2626:  call   08598b8e <+0x3b6e>
0859764b +0x262b:  mov    0x8(%ebp),%eax
0859764e +0x262e:  movl   $&_ZTV35Dispatcher_GoldTakeIncreasingAmount+0x8,(%eax)
08597654 +0x2634:  leave
08597655 +0x2635:  ret
08597656 +0x2636:  push   %ebp
08597657 +0x2637:  mov    %esp,%ebp
08597659 +0x2639:  sub    $0x18,%esp
0859765c +0x263c:  mov    0x8(%ebp),%eax
0859765f +0x263f:  mov    %eax,(%esp)
08597662 +0x2642:  call   08598baa <+0x3b8a>
08597667 +0x2647:  mov    0x8(%ebp),%eax
0859766a +0x264a:  movl   $&_ZTV34DisPatcher_CheckSecurityProtection+0x8,(%eax)
08597670 +0x2650:  leave
08597671 +0x2651:  ret
08597672 +0x2652:  push   %ebp
08597673 +0x2653:  mov    %esp,%ebp
08597675 +0x2655:  sub    $0x18,%esp
08597678 +0x2658:  mov    0x8(%ebp),%eax
0859767b +0x265b:  mov    %eax,(%esp)
0859767e +0x265e:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597683 +0x2663:  mov    0x8(%ebp),%eax
08597686 +0x2666:  movl   $&_ZTV23Dispatcher_FairPvPScore+0x8,(%eax)
0859768c +0x266c:  leave
0859768d +0x266d:  ret
0859768e +0x266e:  push   %ebp
0859768f +0x266f:  mov    %esp,%ebp
08597691 +0x2671:  sub    $0x18,%esp
08597694 +0x2674:  mov    0x8(%ebp),%eax
08597697 +0x2677:  mov    %eax,(%esp)
0859769a +0x267a:  call   08598bc6 <+0x3ba6>
0859769f +0x267f:  mov    0x8(%ebp),%eax
085976a2 +0x2682:  movl   $&_ZTV30Dispatcher_PvpMissionHPPercent+0x8,(%eax)
085976a8 +0x2688:  leave
085976a9 +0x2689:  ret
085976aa +0x268a:  push   %ebp
085976ab +0x268b:  mov    %esp,%ebp
085976ad +0x268d:  sub    $0x18,%esp
085976b0 +0x2690:  mov    0x8(%ebp),%eax
085976b3 +0x2693:  mov    %eax,(%esp)
085976b6 +0x2696:  call   08598be2 <+0x3bc2>
085976bb +0x269b:  mov    0x8(%ebp),%eax
085976be +0x269e:  movl   $&_ZTV31Dispatcher_PvpMissionComboClear+0x8,(%eax)
085976c4 +0x26a4:  leave
085976c5 +0x26a5:  ret
085976c6 +0x26a6:  push   %ebp
085976c7 +0x26a7:  mov    %esp,%ebp
085976c9 +0x26a9:  sub    $0x18,%esp
085976cc +0x26ac:  mov    0x8(%ebp),%eax
085976cf +0x26af:  mov    %eax,(%esp)
085976d2 +0x26b2:  call   08598bfe <+0x3bde>
085976d7 +0x26b7:  mov    0x8(%ebp),%eax
085976da +0x26ba:  movl   $&_ZTV30Dispatcher_WarRoomWpPerMonster+0x8,(%eax)
085976e0 +0x26c0:  leave
085976e1 +0x26c1:  ret
085976e2 +0x26c2:  push   %ebp
085976e3 +0x26c3:  mov    %esp,%ebp
085976e5 +0x26c5:  sub    $0x18,%esp
085976e8 +0x26c8:  mov    0x8(%ebp),%eax
085976eb +0x26cb:  mov    %eax,(%esp)
085976ee +0x26ce:  call   08598c1a <+0x3bfa>
085976f3 +0x26d3:  mov    0x8(%ebp),%eax
085976f6 +0x26d6:  movl   $&_ZTV27Dispatcher_Equipslot_Switch+0x8,(%eax)
085976fc +0x26dc:  leave
085976fd +0x26dd:  ret
085976fe +0x26de:  push   %ebp
085976ff +0x26df:  mov    %esp,%ebp
08597701 +0x26e1:  sub    $0x18,%esp
08597704 +0x26e4:  mov    0x8(%ebp),%eax
08597707 +0x26e7:  mov    %eax,(%esp)
0859770a +0x26ea:  call   08598c36 <+0x3c16>
0859770f +0x26ef:  mov    0x8(%ebp),%eax
08597712 +0x26f2:  movl   $&_ZTV39Dispatcher_Expand_Equipslot_Flag_Update+0x8,(%eax)
08597718 +0x26f8:  leave
08597719 +0x26f9:  ret
0859771a +0x26fa:  push   %ebp
0859771b +0x26fb:  mov    %esp,%ebp
0859771d +0x26fd:  sub    $0x18,%esp
08597720 +0x2700:  mov    0x8(%ebp),%eax
08597723 +0x2703:  mov    %eax,(%esp)
08597726 +0x2706:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859772b +0x270b:  mov    0x8(%ebp),%eax
0859772e +0x270e:  movl   $&_ZTV29Dispatcher_UnsealRandomOption+0x8,(%eax)
08597734 +0x2714:  leave
08597735 +0x2715:  ret
08597736 +0x2716:  push   %ebp
08597737 +0x2717:  mov    %esp,%ebp
08597739 +0x2719:  sub    $0x18,%esp
0859773c +0x271c:  mov    0x8(%ebp),%eax
0859773f +0x271f:  mov    %eax,(%esp)
08597742 +0x2722:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597747 +0x2727:  mov    0x8(%ebp),%eax
0859774a +0x272a:  movl   $&_ZTV35Dispatcher_UseCreatureEvolutionItem+0x8,(%eax)
08597750 +0x2730:  leave
08597751 +0x2731:  ret
08597752 +0x2732:  push   %ebp
08597753 +0x2733:  mov    %esp,%ebp
08597755 +0x2735:  sub    $0x18,%esp
08597758 +0x2738:  mov    0x8(%ebp),%eax
0859775b +0x273b:  mov    %eax,(%esp)
0859775e +0x273e:  call   08598c52 <+0x3c32>
08597763 +0x2743:  mov    0x8(%ebp),%eax
08597766 +0x2746:  movl   $&_ZTV37Dispatcher_Buy_Charac_Status_Using_QP+0x8,(%eax)
0859776c +0x274c:  leave
0859776d +0x274d:  ret
0859776e +0x274e:  push   %ebp
0859776f +0x274f:  mov    %esp,%ebp
08597771 +0x2751:  sub    $0x18,%esp
08597774 +0x2754:  mov    0x8(%ebp),%eax
08597777 +0x2757:  mov    %eax,(%esp)
0859777a +0x275a:  call   08598c6e <+0x3c4e>
0859777f +0x275f:  mov    0x8(%ebp),%eax
08597782 +0x2762:  movl   $&_ZTV24Dispatcher_Clear_Used_QP+0x8,(%eax)
08597788 +0x2768:  leave
08597789 +0x2769:  ret
0859778a +0x276a:  push   %ebp
0859778b +0x276b:  mov    %esp,%ebp
0859778d +0x276d:  sub    $0x18,%esp
08597790 +0x2770:  mov    0x8(%ebp),%eax
08597793 +0x2773:  mov    %eax,(%esp)
08597796 +0x2776:  call   08598c8a <+0x3c6a>
0859779b +0x277b:  mov    0x8(%ebp),%eax
0859779e +0x277e:  movl   $&_ZTV28Dispatcher_ChangeHostWarRoom+0x8,(%eax)
085977a4 +0x2784:  leave
085977a5 +0x2785:  ret
085977a6 +0x2786:  push   %ebp
085977a7 +0x2787:  mov    %esp,%ebp
085977a9 +0x2789:  sub    $0x18,%esp
085977ac +0x278c:  mov    0x8(%ebp),%eax
085977af +0x278f:  mov    %eax,(%esp)
085977b2 +0x2792:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085977b7 +0x2797:  mov    0x8(%ebp),%eax
085977ba +0x279a:  movl   $&_ZTV33Dispatcher_VerifyPrivateStoreItem+0x8,(%eax)
085977c0 +0x27a0:  leave
085977c1 +0x27a1:  ret
085977c2 +0x27a2:  push   %ebp
085977c3 +0x27a3:  mov    %esp,%ebp
085977c5 +0x27a5:  sub    $0x18,%esp
085977c8 +0x27a8:  mov    0x8(%ebp),%eax
085977cb +0x27ab:  mov    %eax,(%esp)
085977ce +0x27ae:  call   08598ca6 <+0x3c86>
085977d3 +0x27b3:  mov    0x8(%ebp),%eax
085977d6 +0x27b6:  movl   $&_ZTV34Dispather_RegenerationRandomOption+0x8,(%eax)
085977dc +0x27bc:  leave
085977dd +0x27bd:  ret
085977de +0x27be:  push   %ebp
085977df +0x27bf:  mov    %esp,%ebp
085977e1 +0x27c1:  sub    $0x18,%esp
085977e4 +0x27c4:  mov    0x8(%ebp),%eax
085977e7 +0x27c7:  mov    %eax,(%esp)
085977ea +0x27ca:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085977ef +0x27cf:  mov    0x8(%ebp),%eax
085977f2 +0x27d2:  movl   $&_ZTV21Dispatcher_SelectItem+0x8,(%eax)
085977f8 +0x27d8:  leave
085977f9 +0x27d9:  ret
085977fa +0x27da:  push   %ebp
085977fb +0x27db:  mov    %esp,%ebp
085977fd +0x27dd:  sub    $0x18,%esp
08597800 +0x27e0:  mov    0x8(%ebp),%eax
08597803 +0x27e3:  mov    %eax,(%esp)
08597806 +0x27e6:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0859780b +0x27eb:  mov    0x8(%ebp),%eax
0859780e +0x27ee:  movl   $&_ZTV23Dispatcher_UpgradeCargo+0x8,(%eax)
08597814 +0x27f4:  leave
08597815 +0x27f5:  ret
08597816 +0x27f6:  push   %ebp
08597817 +0x27f7:  mov    %esp,%ebp
08597819 +0x27f9:  sub    $0x18,%esp
0859781c +0x27fc:  mov    0x8(%ebp),%eax
0859781f +0x27ff:  mov    %eax,(%esp)
08597822 +0x2802:  call   08598cc2 <+0x3ca2>
08597827 +0x2807:  mov    0x8(%ebp),%eax
0859782a +0x280a:  movl   $&_ZTV23Dispatcher_TitleBookPut+0x8,(%eax)
08597830 +0x2810:  leave
08597831 +0x2811:  ret
08597832 +0x2812:  push   %ebp
08597833 +0x2813:  mov    %esp,%ebp
08597835 +0x2815:  sub    $0x18,%esp
08597838 +0x2818:  mov    0x8(%ebp),%eax
0859783b +0x281b:  mov    %eax,(%esp)
0859783e +0x281e:  call   08598cde <+0x3cbe>
08597843 +0x2823:  mov    0x8(%ebp),%eax
08597846 +0x2826:  movl   $&_ZTV23Dispatcher_TitleBookGet+0x8,(%eax)
0859784c +0x282c:  leave
0859784d +0x282d:  ret
0859784e +0x282e:  push   %ebp
0859784f +0x282f:  mov    %esp,%ebp
08597851 +0x2831:  sub    $0x18,%esp
08597854 +0x2834:  mov    0x8(%ebp),%eax
08597857 +0x2837:  mov    %eax,(%esp)
0859785a +0x283a:  call   08598cfa <+0x3cda>
0859785f +0x283f:  mov    0x8(%ebp),%eax
08597862 +0x2842:  movl   $&_ZTV29Dispatcher_TitleBookOtherUser+0x8,(%eax)
08597868 +0x2848:  leave
08597869 +0x2849:  ret
0859786a +0x284a:  push   %ebp
0859786b +0x284b:  mov    %esp,%ebp
0859786d +0x284d:  sub    $0x18,%esp
08597870 +0x2850:  mov    0x8(%ebp),%eax
08597873 +0x2853:  mov    %eax,(%esp)
08597876 +0x2856:  call   08598d16 <+0x3cf6>
0859787b +0x285b:  mov    0x8(%ebp),%eax
0859787e +0x285e:  movl   $&_ZTV29Dispatcher_AchievementTrigger+0x8,(%eax)
08597884 +0x2864:  leave
08597885 +0x2865:  ret
08597886 +0x2866:  push   %ebp
08597887 +0x2867:  mov    %esp,%ebp
08597889 +0x2869:  sub    $0x18,%esp
0859788c +0x286c:  mov    0x8(%ebp),%eax
0859788f +0x286f:  mov    %eax,(%esp)
08597892 +0x2872:  call   08598d32 <+0x3d12>
08597897 +0x2877:  mov    0x8(%ebp),%eax
0859789a +0x287a:  movl   $&_ZTV33Dispatcher_CharacSlotExtendEffect+0x8,(%eax)
085978a0 +0x2880:  leave
085978a1 +0x2881:  ret
085978a2 +0x2882:  push   %ebp
085978a3 +0x2883:  mov    %esp,%ebp
085978a5 +0x2885:  sub    $0x18,%esp
085978a8 +0x2888:  mov    0x8(%ebp),%eax
085978ab +0x288b:  mov    %eax,(%esp)
085978ae +0x288e:  call   08598d4e <+0x3d2e>
085978b3 +0x2893:  mov    0x8(%ebp),%eax
085978b6 +0x2896:  movl   $&_ZTV31Dispatcher_ItemHyperLinkMessage+0x8,(%eax)
085978bc +0x289c:  leave
085978bd +0x289d:  ret
085978be +0x289e:  push   %ebp
085978bf +0x289f:  mov    %esp,%ebp
085978c1 +0x28a1:  sub    $0x18,%esp
085978c4 +0x28a4:  mov    0x8(%ebp),%eax
085978c7 +0x28a7:  mov    %eax,(%esp)
085978ca +0x28aa:  call   08598d6a <+0x3d4a>
085978cf +0x28af:  mov    0x8(%ebp),%eax
085978d2 +0x28b2:  movl   $&_ZTV25Dispatcher_UserHistoryLog+0x8,(%eax)
085978d8 +0x28b8:  leave
085978d9 +0x28b9:  ret
085978da +0x28ba:  push   %ebp
085978db +0x28bb:  mov    %esp,%ebp
085978dd +0x28bd:  sub    $0x18,%esp
085978e0 +0x28c0:  mov    0x8(%ebp),%eax
085978e3 +0x28c3:  mov    %eax,(%esp)
085978e6 +0x28c6:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
085978eb +0x28cb:  mov    0x8(%ebp),%eax
085978ee +0x28ce:  movl   $&_ZTV27Dispatcher_UpgradeInventory+0x8,(%eax)
085978f4 +0x28d4:  leave
085978f5 +0x28d5:  ret
085978f6 +0x28d6:  push   %ebp
085978f7 +0x28d7:  mov    %esp,%ebp
085978f9 +0x28d9:  sub    $0x18,%esp
085978fc +0x28dc:  mov    0x8(%ebp),%eax
085978ff +0x28df:  mov    %eax,(%esp)
08597902 +0x28e2:  call   08598d86 <+0x3d66>
08597907 +0x28e7:  mov    0x8(%ebp),%eax
0859790a +0x28ea:  movl   $&_ZTV35Dispatcher_Select_Item_Grwoth_Power+0x8,(%eax)
08597910 +0x28f0:  leave
08597911 +0x28f1:  ret
08597912 +0x28f2:  push   %ebp
08597913 +0x28f3:  mov    %esp,%ebp
08597915 +0x28f5:  sub    $0x18,%esp
08597918 +0x28f8:  mov    0x8(%ebp),%eax
0859791b +0x28fb:  mov    %eax,(%esp)
0859791e +0x28fe:  call   08598da2 <+0x3d82>
08597923 +0x2903:  mov    0x8(%ebp),%eax
08597926 +0x2906:  movl   $&_ZTV29Dispatcher_Request_Seria_Buff+0x8,(%eax)
0859792c +0x290c:  leave
0859792d +0x290d:  ret
0859792e +0x290e:  push   %ebp
0859792f +0x290f:  mov    %esp,%ebp
08597931 +0x2911:  sub    $0x18,%esp
08597934 +0x2914:  mov    0x8(%ebp),%eax
08597937 +0x2917:  mov    %eax,(%esp)
0859793a +0x291a:  call   08598dbe <+0x3d9e>
0859793f +0x291f:  mov    0x8(%ebp),%eax
08597942 +0x2922:  movl   $&_ZTV31Dispatcher_AbnormalUseStackable+0x8,(%eax)
08597948 +0x2928:  leave
08597949 +0x2929:  ret
0859794a +0x292a:  push   %ebp
0859794b +0x292b:  mov    %esp,%ebp
0859794d +0x292d:  sub    $0x18,%esp
08597950 +0x2930:  mov    0x8(%ebp),%eax
08597953 +0x2933:  mov    %eax,(%esp)
08597956 +0x2936:  call   08598dda <+0x3dba>
0859795b +0x293b:  mov    0x8(%ebp),%eax
0859795e +0x293e:  movl   $&_ZTV29Dispatcher_ChangeRandomOption+0x8,(%eax)
08597964 +0x2944:  leave
08597965 +0x2945:  ret
08597966 +0x2946:  push   %ebp
08597967 +0x2947:  mov    %esp,%ebp
08597969 +0x2949:  sub    $0x18,%esp
0859796c +0x294c:  mov    0x8(%ebp),%eax
0859796f +0x294f:  mov    %eax,(%esp)
08597972 +0x2952:  call   08598df6 <+0x3dd6>
08597977 +0x2957:  mov    0x8(%ebp),%eax
0859797a +0x295a:  movl   $&_ZTV27DispatcherResetRandomOption+0x8,(%eax)
08597980 +0x2960:  leave
08597981 +0x2961:  ret
08597982 +0x2962:  push   %ebp
08597983 +0x2963:  mov    %esp,%ebp
08597985 +0x2965:  sub    $0x18,%esp
08597988 +0x2968:  mov    0x8(%ebp),%eax
0859798b +0x296b:  mov    %eax,(%esp)
0859798e +0x296e:  call   08598e12 <+0x3df2>
08597993 +0x2973:  mov    0x8(%ebp),%eax
08597996 +0x2976:  movl   $&_ZTV25Dispatcher_ItemDictionary+0x8,(%eax)
0859799c +0x297c:  leave
0859799d +0x297d:  ret
0859799e +0x297e:  push   %ebp
0859799f +0x297f:  mov    %esp,%ebp
085979a1 +0x2981:  sub    $0x18,%esp
085979a4 +0x2984:  mov    0x8(%ebp),%eax
085979a7 +0x2987:  mov    %eax,(%esp)
085979aa +0x298a:  call   08598e2e <+0x3e0e>
085979af +0x298f:  mov    0x8(%ebp),%eax
085979b2 +0x2992:  movl   $&_ZTV27Dispatcher_Mercenary_Return+0x8,(%eax)
085979b8 +0x2998:  leave
085979b9 +0x2999:  ret
085979ba +0x299a:  push   %ebp
085979bb +0x299b:  mov    %esp,%ebp
085979bd +0x299d:  sub    $0x18,%esp
085979c0 +0x29a0:  mov    0x8(%ebp),%eax
085979c3 +0x29a3:  mov    %eax,(%esp)
085979c6 +0x29a6:  call   08598e4a <+0x3e2a>
085979cb +0x29ab:  mov    0x8(%ebp),%eax
085979ce +0x29ae:  movl   $&_ZTV25Dispatcher_Mercenary_Info+0x8,(%eax)
085979d4 +0x29b4:  leave
085979d5 +0x29b5:  ret
085979d6 +0x29b6:  push   %ebp
085979d7 +0x29b7:  mov    %esp,%ebp
085979d9 +0x29b9:  sub    $0x18,%esp
085979dc +0x29bc:  mov    0x8(%ebp),%eax
085979df +0x29bf:  mov    %eax,(%esp)
085979e2 +0x29c2:  call   08598e66 <+0x3e46>
085979e7 +0x29c7:  mov    0x8(%ebp),%eax
085979ea +0x29ca:  movl   $&_ZTV32Dispatcher_Mercenary_Competition+0x8,(%eax)
085979f0 +0x29d0:  leave
085979f1 +0x29d1:  ret
085979f2 +0x29d2:  push   %ebp
085979f3 +0x29d3:  mov    %esp,%ebp
085979f5 +0x29d5:  sub    $0x18,%esp
085979f8 +0x29d8:  mov    0x8(%ebp),%eax
085979fb +0x29db:  mov    %eax,(%esp)
085979fe +0x29de:  call   08598e82 <+0x3e62>
08597a03 +0x29e3:  mov    0x8(%ebp),%eax
08597a06 +0x29e6:  movl   $&_ZTV31Dispatcher_Register_Quick_Party+0x8,(%eax)
08597a0c +0x29ec:  leave
08597a0d +0x29ed:  ret
08597a0e +0x29ee:  push   %ebp
08597a0f +0x29ef:  mov    %esp,%ebp
08597a11 +0x29f1:  sub    $0x18,%esp
08597a14 +0x29f4:  mov    0x8(%ebp),%eax
08597a17 +0x29f7:  mov    %eax,(%esp)
08597a1a +0x29fa:  call   08598e9e <+0x3e7e>
08597a1f +0x29ff:  mov    0x8(%ebp),%eax
08597a22 +0x2a02:  movl   $&_ZTV29Dispatcher_Cancel_Quick_Party+0x8,(%eax)
08597a28 +0x2a08:  leave
08597a29 +0x2a09:  ret
08597a2a +0x2a0a:  push   %ebp
08597a2b +0x2a0b:  mov    %esp,%ebp
08597a2d +0x2a0d:  sub    $0x18,%esp
08597a30 +0x2a10:  mov    0x8(%ebp),%eax
08597a33 +0x2a13:  mov    %eax,(%esp)
08597a36 +0x2a16:  call   08598e9e <+0x3e7e>
08597a3b +0x2a1b:  mov    0x8(%ebp),%eax
08597a3e +0x2a1e:  movl   $&_ZTV38Dispatcher_Direct_Entrance_Quick_Party+0x8,(%eax)
08597a44 +0x2a24:  leave
08597a45 +0x2a25:  ret
08597a46 +0x2a26:  push   %ebp
08597a47 +0x2a27:  mov    %esp,%ebp
08597a49 +0x2a29:  sub    $0x18,%esp
08597a4c +0x2a2c:  mov    0x8(%ebp),%eax
08597a4f +0x2a2f:  mov    %eax,(%esp)
08597a52 +0x2a32:  call   08598eba <+0x3e9a>
08597a57 +0x2a37:  mov    0x8(%ebp),%eax
08597a5a +0x2a3a:  movl   $&_ZTV38Dispatcher_Exchange_Random_Item_Reward+0x8,(%eax)
08597a60 +0x2a40:  leave
08597a61 +0x2a41:  ret
08597a62 +0x2a42:  push   %ebp
08597a63 +0x2a43:  mov    %esp,%ebp
08597a65 +0x2a45:  sub    $0x18,%esp
08597a68 +0x2a48:  mov    0x8(%ebp),%eax
08597a6b +0x2a4b:  mov    %eax,(%esp)
08597a6e +0x2a4e:  call   08598ed6 <+0x3eb6>
08597a73 +0x2a53:  mov    0x8(%ebp),%eax
08597a76 +0x2a56:  movl   $&_ZTV40Dispatcher_Avatar_Disjoint_Random_Reward+0x8,(%eax)
08597a7c +0x2a5c:  leave
08597a7d +0x2a5d:  ret
08597a7e +0x2a5e:  push   %ebp
08597a7f +0x2a5f:  mov    %esp,%ebp
08597a81 +0x2a61:  sub    $0x18,%esp
08597a84 +0x2a64:  mov    0x8(%ebp),%eax
08597a87 +0x2a67:  mov    %eax,(%esp)
08597a8a +0x2a6a:  call   08598ef2 <+0x3ed2>
08597a8f +0x2a6f:  mov    0x8(%ebp),%eax
08597a92 +0x2a72:  movl   $&_ZTV30Dispatcher_RequestAssaultPrice+0x8,(%eax)
08597a98 +0x2a78:  leave
08597a99 +0x2a79:  ret
08597a9a +0x2a7a:  push   %ebp
08597a9b +0x2a7b:  mov    %esp,%ebp
08597a9d +0x2a7d:  sub    $0x18,%esp
08597aa0 +0x2a80:  mov    0x8(%ebp),%eax
08597aa3 +0x2a83:  mov    %eax,(%esp)
08597aa6 +0x2a86:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597aab +0x2a8b:  mov    0x8(%ebp),%eax
08597aae +0x2a8e:  movl   $&_ZTV31Dispatcher_Check3rdPartyConcent+0x8,(%eax)
08597ab4 +0x2a94:  leave
08597ab5 +0x2a95:  ret
08597ab6 +0x2a96:  push   %ebp
08597ab7 +0x2a97:  mov    %esp,%ebp
08597ab9 +0x2a99:  sub    $0x18,%esp
08597abc +0x2a9c:  mov    0x8(%ebp),%eax
08597abf +0x2a9f:  mov    %eax,(%esp)
08597ac2 +0x2aa2:  call   08598f0e <+0x3eee>
08597ac7 +0x2aa7:  mov    0x8(%ebp),%eax
08597aca +0x2aaa:  movl   $&_ZTV33Dispatcher_Float_RDATA_Modulation+0x8,(%eax)
08597ad0 +0x2ab0:  leave
08597ad1 +0x2ab1:  ret
08597ad2 +0x2ab2:  push   %ebp
08597ad3 +0x2ab3:  mov    %esp,%ebp
08597ad5 +0x2ab5:  sub    $0x18,%esp
08597ad8 +0x2ab8:  mov    0x8(%ebp),%eax
08597adb +0x2abb:  mov    %eax,(%esp)
08597ade +0x2abe:  call   08598f2a <+0x3f0a>
08597ae3 +0x2ac3:  mov    0x8(%ebp),%eax
08597ae6 +0x2ac6:  movl   $&_ZTV27Dispatcher_Req_Urgent_Quest+0x8,(%eax)
08597aec +0x2acc:  leave
08597aed +0x2acd:  ret
08597aee +0x2ace:  push   %ebp
08597aef +0x2acf:  mov    %esp,%ebp
08597af1 +0x2ad1:  sub    $0x18,%esp
08597af4 +0x2ad4:  mov    0x8(%ebp),%eax
08597af7 +0x2ad7:  mov    %eax,(%esp)
08597afa +0x2ada:  call   08598f46 <+0x3f26>
08597aff +0x2adf:  mov    0x8(%ebp),%eax
08597b02 +0x2ae2:  movl   $&_ZTV28Dispatcher_Debug_Clear_Quest+0x8,(%eax)
08597b08 +0x2ae8:  leave
08597b09 +0x2ae9:  ret
08597b0a +0x2aea:  push   %ebp
08597b0b +0x2aeb:  mov    %esp,%ebp
08597b0d +0x2aed:  sub    $0x18,%esp
08597b10 +0x2af0:  mov    0x8(%ebp),%eax
08597b13 +0x2af3:  mov    %eax,(%esp)
08597b16 +0x2af6:  call   08598f62 <+0x3f42>
08597b1b +0x2afb:  mov    0x8(%ebp),%eax
08597b1e +0x2afe:  movl   $&_ZTV38Dispatcher_TournamentRewardSelectState+0x8,(%eax)
08597b24 +0x2b04:  leave
08597b25 +0x2b05:  ret
08597b26 +0x2b06:  push   %ebp
08597b27 +0x2b07:  mov    %esp,%ebp
08597b29 +0x2b09:  sub    $0x18,%esp
08597b2c +0x2b0c:  mov    0x8(%ebp),%eax
08597b2f +0x2b0f:  mov    %eax,(%esp)
08597b32 +0x2b12:  call   08598f7e <+0x3f5e>
08597b37 +0x2b17:  mov    0x8(%ebp),%eax
08597b3a +0x2b1a:  movl   $&_ZTV33Dispatcher_TournamentRewardSelect+0x8,(%eax)
08597b40 +0x2b20:  leave
08597b41 +0x2b21:  ret
08597b42 +0x2b22:  push   %ebp
08597b43 +0x2b23:  mov    %esp,%ebp
08597b45 +0x2b25:  sub    $0x18,%esp
08597b48 +0x2b28:  mov    0x8(%ebp),%eax
08597b4b +0x2b2b:  mov    %eax,(%esp)
08597b4e +0x2b2e:  call   08598f9a <+0x3f7a>
08597b53 +0x2b33:  mov    0x8(%ebp),%eax
08597b56 +0x2b36:  movl   $&_ZTV26Dispatcher_LimitNpcBuyItem+0x8,(%eax)
08597b5c +0x2b3c:  leave
08597b5d +0x2b3d:  ret
08597b5e +0x2b3e:  push   %ebp
08597b5f +0x2b3f:  mov    %esp,%ebp
08597b61 +0x2b41:  sub    $0x18,%esp
08597b64 +0x2b44:  mov    0x8(%ebp),%eax
08597b67 +0x2b47:  mov    %eax,(%esp)
08597b6a +0x2b4a:  call   08598fb6 <+0x3f96>
08597b6f +0x2b4f:  mov    0x8(%ebp),%eax
08597b72 +0x2b52:  movl   $&_ZTV24Dispatcher_ObjectBringUp+0x8,(%eax)
08597b78 +0x2b58:  leave
08597b79 +0x2b59:  ret
08597b7a +0x2b5a:  push   %ebp
08597b7b +0x2b5b:  mov    %esp,%ebp
08597b7d +0x2b5d:  sub    $0x18,%esp
08597b80 +0x2b60:  mov    0x8(%ebp),%eax
08597b83 +0x2b63:  mov    %eax,(%esp)
08597b86 +0x2b66:  call   08598fd2 <+0x3fb2>
08597b8b +0x2b6b:  mov    0x8(%ebp),%eax
08597b8e +0x2b6e:  movl   $&_ZTV31Dispatcher_PrecheckSoloTeleport+0x8,(%eax)
08597b94 +0x2b74:  leave
08597b95 +0x2b75:  ret
08597b96 +0x2b76:  push   %ebp
08597b97 +0x2b77:  mov    %esp,%ebp
08597b99 +0x2b79:  sub    $0x18,%esp
08597b9c +0x2b7c:  mov    0x8(%ebp),%eax
08597b9f +0x2b7f:  mov    %eax,(%esp)
08597ba2 +0x2b82:  call   08598fd2 <+0x3fb2>
08597ba7 +0x2b87:  mov    0x8(%ebp),%eax
08597baa +0x2b8a:  movl   $&_ZTV23Dispatcher_SoloTeleport+0x8,(%eax)
08597bb0 +0x2b90:  leave
08597bb1 +0x2b91:  ret
08597bb2 +0x2b92:  push   %ebp
08597bb3 +0x2b93:  mov    %esp,%ebp
08597bb5 +0x2b95:  sub    $0x18,%esp
08597bb8 +0x2b98:  mov    0x8(%ebp),%eax
08597bbb +0x2b9b:  mov    %eax,(%esp)
08597bbe +0x2b9e:  call   08598fee <+0x3fce>
08597bc3 +0x2ba3:  mov    0x8(%ebp),%eax
08597bc6 +0x2ba6:  movl   $&_ZTV42Dispatcher_SaveGameOption_ChattingEmoticon+0x8,(%eax)
08597bcc +0x2bac:  leave
08597bcd +0x2bad:  ret
08597bce +0x2bae:  push   %ebp
08597bcf +0x2baf:  mov    %esp,%ebp
08597bd1 +0x2bb1:  sub    $0x18,%esp
08597bd4 +0x2bb4:  mov    0x8(%ebp),%eax
08597bd7 +0x2bb7:  mov    %eax,(%esp)
08597bda +0x2bba:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597bdf +0x2bbf:  mov    0x8(%ebp),%eax
08597be2 +0x2bc2:  movl   $&_ZTVN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacterE+0x8,(%eax)
08597be8 +0x2bc8:  leave
08597be9 +0x2bc9:  ret
08597bea +0x2bca:  push   %ebp
08597beb +0x2bcb:  mov    %esp,%ebp
08597bed +0x2bcd:  sub    $0x18,%esp
08597bf0 +0x2bd0:  mov    0x8(%ebp),%eax
08597bf3 +0x2bd3:  mov    %eax,(%esp)
08597bf6 +0x2bd6:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597bfb +0x2bdb:  mov    0x8(%ebp),%eax
08597bfe +0x2bde:  movl   $&_ZTVN4ARAD10DISPATCHER26Dispatcher_AvartarRouletteE+0x8,(%eax)
08597c04 +0x2be4:  leave
08597c05 +0x2be5:  ret
08597c06 +0x2be6:  push   %ebp
08597c07 +0x2be7:  mov    %esp,%ebp
08597c09 +0x2be9:  sub    $0x18,%esp
08597c0c +0x2bec:  mov    0x8(%ebp),%eax
08597c0f +0x2bef:  mov    %eax,(%esp)
08597c12 +0x2bf2:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597c17 +0x2bf7:  mov    0x8(%ebp),%eax
08597c1a +0x2bfa:  movl   $&_ZTVN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCountE+0x8,(%eax)
08597c20 +0x2c00:  leave
08597c21 +0x2c01:  ret
08597c22 +0x2c02:  push   %ebp
08597c23 +0x2c03:  mov    %esp,%ebp
08597c25 +0x2c05:  sub    $0x18,%esp
08597c28 +0x2c08:  mov    0x8(%ebp),%eax
08597c2b +0x2c0b:  mov    %eax,(%esp)
08597c2e +0x2c0e:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597c33 +0x2c13:  mov    0x8(%ebp),%eax
08597c36 +0x2c16:  movl   $&_ZTVN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChangeE+0x8,(%eax)
08597c3c +0x2c1c:  leave
08597c3d +0x2c1d:  ret
08597c3e +0x2c1e:  push   %ebp
08597c3f +0x2c1f:  mov    %esp,%ebp
08597c41 +0x2c21:  sub    $0x18,%esp
08597c44 +0x2c24:  mov    0x8(%ebp),%eax
08597c47 +0x2c27:  mov    %eax,(%esp)
08597c4a +0x2c2a:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597c4f +0x2c2f:  mov    0x8(%ebp),%eax
08597c52 +0x2c32:  movl   $&_ZTVN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRechargeE+0x8,(%eax)
08597c58 +0x2c38:  leave
08597c59 +0x2c39:  ret
08597c5a +0x2c3a:  push   %ebp
08597c5b +0x2c3b:  mov    %esp,%ebp
08597c5d +0x2c3d:  sub    $0x18,%esp
08597c60 +0x2c40:  mov    0x8(%ebp),%eax
08597c63 +0x2c43:  mov    %eax,(%esp)
08597c66 +0x2c46:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597c6b +0x2c4b:  mov    0x8(%ebp),%eax
08597c6e +0x2c4e:  movl   $&_ZTVN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvertE+0x8,(%eax)
08597c74 +0x2c54:  leave
08597c75 +0x2c55:  ret
08597c76 +0x2c56:  push   %ebp
08597c77 +0x2c57:  mov    %esp,%ebp
08597c79 +0x2c59:  sub    $0x18,%esp
08597c7c +0x2c5c:  mov    0x8(%ebp),%eax
08597c7f +0x2c5f:  mov    %eax,(%esp)
08597c82 +0x2c62:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597c87 +0x2c67:  mov    0x8(%ebp),%eax
08597c8a +0x2c6a:  movl   $&_ZTVN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompoundE+0x8,(%eax)
08597c90 +0x2c70:  leave
08597c91 +0x2c71:  ret
08597c92 +0x2c72:  push   %ebp
08597c93 +0x2c73:  mov    %esp,%ebp
08597c95 +0x2c75:  sub    $0x18,%esp
08597c98 +0x2c78:  mov    0x8(%ebp),%eax
08597c9b +0x2c7b:  mov    %eax,(%esp)
08597c9e +0x2c7e:  call   0859900a <+0x3fea>
08597ca3 +0x2c83:  mov    0x8(%ebp),%eax
08597ca6 +0x2c86:  movl   $&_ZTV41Dispatcher_ImageCommunicationEquipmentUse+0x8,(%eax)
08597cac +0x2c8c:  leave
08597cad +0x2c8d:  ret
08597cae +0x2c8e:  push   %ebp
08597caf +0x2c8f:  mov    %esp,%ebp
08597cb1 +0x2c91:  sub    $0x18,%esp
08597cb4 +0x2c94:  mov    0x8(%ebp),%eax
08597cb7 +0x2c97:  mov    %eax,(%esp)
08597cba +0x2c9a:  call   08599026 <+0x4006>
08597cbf +0x2c9f:  mov    0x8(%ebp),%eax
08597cc2 +0x2ca2:  movl   $&_ZTV29Dispatcher_CompatibilityIndex+0x8,(%eax)
08597cc8 +0x2ca8:  leave
08597cc9 +0x2ca9:  ret
08597cca +0x2caa:  push   %ebp
08597ccb +0x2cab:  mov    %esp,%ebp
08597ccd +0x2cad:  sub    $0x18,%esp
08597cd0 +0x2cb0:  mov    0x8(%ebp),%eax
08597cd3 +0x2cb3:  mov    %eax,(%esp)
08597cd6 +0x2cb6:  call   08599042 <+0x4022>
08597cdb +0x2cbb:  mov    0x8(%ebp),%eax
08597cde +0x2cbe:  movl   $&_ZTV25Dispatcher_P2P_Statistics+0x8,(%eax)
08597ce4 +0x2cc4:  leave
08597ce5 +0x2cc5:  ret
08597ce6 +0x2cc6:  push   %ebp
08597ce7 +0x2cc7:  mov    %esp,%ebp
08597ce9 +0x2cc9:  sub    $0x18,%esp
08597cec +0x2ccc:  mov    0x8(%ebp),%eax
08597cef +0x2ccf:  mov    %eax,(%esp)
08597cf2 +0x2cd2:  call   0859905e <+0x403e>
08597cf7 +0x2cd7:  mov    0x8(%ebp),%eax
08597cfa +0x2cda:  movl   $&_ZTV23Dispatcher_InformNotice+0x8,(%eax)
08597d00 +0x2ce0:  leave
08597d01 +0x2ce1:  ret
08597d02 +0x2ce2:  push   %ebp
08597d03 +0x2ce3:  mov    %esp,%ebp
08597d05 +0x2ce5:  sub    $0x18,%esp
08597d08 +0x2ce8:  mov    0x8(%ebp),%eax
08597d0b +0x2ceb:  mov    %eax,(%esp)
08597d0e +0x2cee:  call   0859907a <+0x405a>
08597d13 +0x2cf3:  mov    0x8(%ebp),%eax
08597d16 +0x2cf6:  movl   $&_ZTV27Dispatcher_InformNotice_2nd+0x8,(%eax)
08597d1c +0x2cfc:  leave
08597d1d +0x2cfd:  ret
08597d1e +0x2cfe:  push   %ebp
08597d1f +0x2cff:  mov    %esp,%ebp
08597d21 +0x2d01:  sub    $0x18,%esp
08597d24 +0x2d04:  mov    0x8(%ebp),%eax
08597d27 +0x2d07:  mov    %eax,(%esp)
08597d2a +0x2d0a:  call   08598712 <+0x36f2>
08597d2f +0x2d0f:  mov    0x8(%ebp),%eax
08597d32 +0x2d12:  movl   $&_ZTV30Dispatcher_VerifyCreatureQuest+0x8,(%eax)
08597d38 +0x2d18:  leave
08597d39 +0x2d19:  ret
08597d3a +0x2d1a:  push   %ebp
08597d3b +0x2d1b:  mov    %esp,%ebp
08597d3d +0x2d1d:  sub    $0x18,%esp
08597d40 +0x2d20:  mov    0x8(%ebp),%eax
08597d43 +0x2d23:  mov    %eax,(%esp)
08597d46 +0x2d26:  call   08599096 <+0x4076>
08597d4b +0x2d2b:  mov    0x8(%ebp),%eax
08597d4e +0x2d2e:  movl   $&_ZTV23Dispatcher_CollectItems+0x8,(%eax)
08597d54 +0x2d34:  leave
08597d55 +0x2d35:  ret
08597d56 +0x2d36:  push   %ebp
08597d57 +0x2d37:  mov    %esp,%ebp
08597d59 +0x2d39:  sub    $0x18,%esp
08597d5c +0x2d3c:  mov    0x8(%ebp),%eax
08597d5f +0x2d3f:  mov    %eax,(%esp)
08597d62 +0x2d42:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597d67 +0x2d47:  mov    0x8(%ebp),%eax
08597d6a +0x2d4a:  movl   $&_ZTV26Dispatcher_TutorialLevelUp+0x8,(%eax)
08597d70 +0x2d50:  leave
08597d71 +0x2d51:  ret
08597d72 +0x2d52:  push   %ebp
08597d73 +0x2d53:  mov    %esp,%ebp
08597d75 +0x2d55:  sub    $0x18,%esp
08597d78 +0x2d58:  mov    0x8(%ebp),%eax
08597d7b +0x2d5b:  mov    %eax,(%esp)
08597d7e +0x2d5e:  call   085990b2 <+0x4092>
08597d83 +0x2d63:  mov    0x8(%ebp),%eax
08597d86 +0x2d66:  movl   $&_ZTV31Dispatcher_PcRoomPlayTimeReward+0x8,(%eax)
08597d8c +0x2d6c:  leave
08597d8d +0x2d6d:  ret
08597d8e +0x2d6e:  push   %ebp
08597d8f +0x2d6f:  mov    %esp,%ebp
08597d91 +0x2d71:  sub    $0x18,%esp
08597d94 +0x2d74:  mov    0x8(%ebp),%eax
08597d97 +0x2d77:  mov    %eax,(%esp)
08597d9a +0x2d7a:  call   085990ce <+0x40ae>
08597d9f +0x2d7f:  mov    0x8(%ebp),%eax
08597da2 +0x2d82:  movl   $&_ZTV25Dispatcher_PcRoomRentItem+0x8,(%eax)
08597da8 +0x2d88:  leave
08597da9 +0x2d89:  ret
08597daa +0x2d8a:  push   %ebp
08597dab +0x2d8b:  mov    %esp,%ebp
08597dad +0x2d8d:  sub    $0x18,%esp
08597db0 +0x2d90:  mov    0x8(%ebp),%eax
08597db3 +0x2d93:  mov    %eax,(%esp)
08597db6 +0x2d96:  call   085990ea <+0x40ca>
08597dbb +0x2d9b:  mov    0x8(%ebp),%eax
08597dbe +0x2d9e:  movl   $&_ZTV31Dispatcher_SeriaRoom_Deco_Event+0x8,(%eax)
08597dc4 +0x2da4:  leave
08597dc5 +0x2da5:  ret
08597dc6 +0x2da6:  push   %ebp
08597dc7 +0x2da7:  mov    %esp,%ebp
08597dc9 +0x2da9:  sub    $0x18,%esp
08597dcc +0x2dac:  mov    0x8(%ebp),%eax
08597dcf +0x2daf:  mov    %eax,(%esp)
08597dd2 +0x2db2:  call   08599106 <+0x40e6>
08597dd7 +0x2db7:  mov    0x8(%ebp),%eax
08597dda +0x2dba:  movl   $&_ZTV21Dispatcher_BlueMarble+0x8,(%eax)
08597de0 +0x2dc0:  leave
08597de1 +0x2dc1:  ret
08597de2 +0x2dc2:  push   %ebp
08597de3 +0x2dc3:  mov    %esp,%ebp
08597de5 +0x2dc5:  sub    $0x18,%esp
08597de8 +0x2dc8:  mov    0x8(%ebp),%eax
08597deb +0x2dcb:  mov    %eax,(%esp)
08597dee +0x2dce:  call   08599122 <+0x4102>
08597df3 +0x2dd3:  mov    0x8(%ebp),%eax
08597df6 +0x2dd6:  movl   $&_ZTV32Dispatcher_BlueMarbleConfirmInfo+0x8,(%eax)
08597dfc +0x2ddc:  leave
08597dfd +0x2ddd:  ret
08597dfe +0x2dde:  push   %ebp
08597dff +0x2ddf:  mov    %esp,%ebp
08597e01 +0x2de1:  sub    $0x18,%esp
08597e04 +0x2de4:  mov    0x8(%ebp),%eax
08597e07 +0x2de7:  mov    %eax,(%esp)
08597e0a +0x2dea:  call   0859913e <+0x411e>
08597e0f +0x2def:  mov    0x8(%ebp),%eax
08597e12 +0x2df2:  movl   $&_ZTV17Dispatcher_UseDye+0x8,(%eax)
08597e18 +0x2df8:  leave
08597e19 +0x2df9:  ret
08597e1a +0x2dfa:  push   %ebp
08597e1b +0x2dfb:  mov    %esp,%ebp
08597e1d +0x2dfd:  sub    $0x18,%esp
08597e20 +0x2e00:  mov    0x8(%ebp),%eax
08597e23 +0x2e03:  mov    %eax,(%esp)
08597e26 +0x2e06:  call   0859915a <+0x413a>
08597e2b +0x2e0b:  mov    0x8(%ebp),%eax
08597e2e +0x2e0e:  movl   $&_ZTV42Dispatcher_GrowthWeaponEventChangeInfinity+0x8,(%eax)
08597e34 +0x2e14:  leave
08597e35 +0x2e15:  ret
08597e36 +0x2e16:  push   %ebp
08597e37 +0x2e17:  mov    %esp,%ebp
08597e39 +0x2e19:  sub    $0x18,%esp
08597e3c +0x2e1c:  mov    0x8(%ebp),%eax
08597e3f +0x2e1f:  mov    %eax,(%esp)
08597e42 +0x2e22:  call   0859915a <+0x413a>
08597e47 +0x2e27:  mov    0x8(%ebp),%eax
08597e4a +0x2e2a:  movl   $&_ZTV39Dispatcher_GrowthWeaponEventUseMaterial+0x8,(%eax)
08597e50 +0x2e30:  leave
08597e51 +0x2e31:  ret
08597e52 +0x2e32:  push   %ebp
08597e53 +0x2e33:  mov    %esp,%ebp
08597e55 +0x2e35:  sub    $0x18,%esp
08597e58 +0x2e38:  mov    0x8(%ebp),%eax
08597e5b +0x2e3b:  mov    %eax,(%esp)
08597e5e +0x2e3e:  call   08599176 <+0x4156>
08597e63 +0x2e43:  mov    0x8(%ebp),%eax
08597e66 +0x2e46:  movl   $&_ZTV21Dispatcher_ComboSkill+0x8,(%eax)
08597e6c +0x2e4c:  leave
08597e6d +0x2e4d:  ret
08597e6e +0x2e4e:  push   %ebp
08597e6f +0x2e4f:  mov    %esp,%ebp
08597e71 +0x2e51:  sub    $0x18,%esp
08597e74 +0x2e54:  mov    0x8(%ebp),%eax
08597e77 +0x2e57:  mov    %eax,(%esp)
08597e7a +0x2e5a:  call   08599192 <+0x4172>
08597e7f +0x2e5f:  mov    0x8(%ebp),%eax
08597e82 +0x2e62:  movl   $&_ZTV44Dispatcher_ComboSkillExtensionQuickSlotReset+0x8,(%eax)
08597e88 +0x2e68:  leave
08597e89 +0x2e69:  ret
08597e8a +0x2e6a:  push   %ebp
08597e8b +0x2e6b:  mov    %esp,%ebp
08597e8d +0x2e6d:  sub    $0x18,%esp
08597e90 +0x2e70:  mov    0x8(%ebp),%eax
08597e93 +0x2e73:  mov    %eax,(%esp)
08597e96 +0x2e76:  call   085991ae <+0x418e>
08597e9b +0x2e7b:  mov    0x8(%ebp),%eax
08597e9e +0x2e7e:  movl   $&_ZTV24Dispatcher_UseRenameCard+0x8,(%eax)
08597ea4 +0x2e84:  leave
08597ea5 +0x2e85:  ret
08597ea6 +0x2e86:  push   %ebp
08597ea7 +0x2e87:  mov    %esp,%ebp
08597ea9 +0x2e89:  sub    $0x18,%esp
08597eac +0x2e8c:  mov    0x8(%ebp),%eax
08597eaf +0x2e8f:  mov    %eax,(%esp)
08597eb2 +0x2e92:  call   085991ca <+0x41aa>
08597eb7 +0x2e97:  mov    0x8(%ebp),%eax
08597eba +0x2e9a:  movl   $&_ZTV26Dispatcher_CeraPackageOpen+0x8,(%eax)
08597ec0 +0x2ea0:  leave
08597ec1 +0x2ea1:  ret
08597ec2 +0x2ea2:  push   %ebp
08597ec3 +0x2ea3:  mov    %esp,%ebp
08597ec5 +0x2ea5:  sub    $0x18,%esp
08597ec8 +0x2ea8:  mov    0x8(%ebp),%eax
08597ecb +0x2eab:  mov    %eax,(%esp)
08597ece +0x2eae:  call   085991e6 <+0x41c6>
08597ed3 +0x2eb3:  mov    0x8(%ebp),%eax
08597ed6 +0x2eb6:  movl   $&_ZTV47Dispatcher_GrowthCreatureChangeInfinityCreature+0x8,(%eax)
08597edc +0x2ebc:  leave
08597edd +0x2ebd:  ret
08597ede +0x2ebe:  push   %ebp
08597edf +0x2ebf:  mov    %esp,%ebp
08597ee1 +0x2ec1:  sub    $0x18,%esp
08597ee4 +0x2ec4:  mov    0x8(%ebp),%eax
08597ee7 +0x2ec7:  mov    %eax,(%esp)
08597eea +0x2eca:  call   08599202 <+0x41e2>
08597eef +0x2ecf:  mov    0x8(%ebp),%eax
08597ef2 +0x2ed2:  movl   $&_ZTV35Dispatcher_SeriaRoom_Ani_Deco_Event+0x8,(%eax)
08597ef8 +0x2ed8:  leave
08597ef9 +0x2ed9:  ret
08597efa +0x2eda:  push   %ebp
08597efb +0x2edb:  mov    %esp,%ebp
08597efd +0x2edd:  sub    $0x18,%esp
08597f00 +0x2ee0:  mov    0x8(%ebp),%eax
08597f03 +0x2ee3:  mov    %eax,(%esp)
08597f06 +0x2ee6:  call   0859921e <+0x41fe>
08597f0b +0x2eeb:  mov    0x8(%ebp),%eax
08597f0e +0x2eee:  movl   $&_ZTV35Dispatcher_UpdateContractOfCubeInfo+0x8,(%eax)
08597f14 +0x2ef4:  leave
08597f15 +0x2ef5:  ret
08597f16 +0x2ef6:  push   %ebp
08597f17 +0x2ef7:  mov    %esp,%ebp
08597f19 +0x2ef9:  sub    $0x18,%esp
08597f1c +0x2efc:  mov    0x8(%ebp),%eax
08597f1f +0x2eff:  mov    %eax,(%esp)
08597f22 +0x2f02:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597f27 +0x2f07:  mov    0x8(%ebp),%eax
08597f2a +0x2f0a:  movl   $&_ZTV35Dispatcher_LevelupSupportReqestItem+0x8,(%eax)
08597f30 +0x2f10:  leave
08597f31 +0x2f11:  ret
08597f32 +0x2f12:  push   %ebp
08597f33 +0x2f13:  mov    %esp,%ebp
08597f35 +0x2f15:  sub    $0x18,%esp
08597f38 +0x2f18:  mov    0x8(%ebp),%eax
08597f3b +0x2f1b:  mov    %eax,(%esp)
08597f3e +0x2f1e:  call   0859923a <+0x421a>
08597f43 +0x2f23:  mov    0x8(%ebp),%eax
08597f46 +0x2f26:  movl   $&_ZTV47Dispatcher_P2PHolePunchingSuccessRateStatistics+0x8,(%eax)
08597f4c +0x2f2c:  leave
08597f4d +0x2f2d:  ret
08597f4e +0x2f2e:  push   %ebp
08597f4f +0x2f2f:  mov    %esp,%ebp
08597f51 +0x2f31:  sub    $0x18,%esp
08597f54 +0x2f34:  mov    0x8(%ebp),%eax
08597f57 +0x2f37:  mov    %eax,(%esp)
08597f5a +0x2f3a:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597f5f +0x2f3f:  mov    0x8(%ebp),%eax
08597f62 +0x2f42:  movl   $&_ZTVN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequestE+0x8,(%eax)
08597f68 +0x2f48:  leave
08597f69 +0x2f49:  ret
08597f6a +0x2f4a:  push   %ebp
08597f6b +0x2f4b:  mov    %esp,%ebp
08597f6d +0x2f4d:  sub    $0x18,%esp
08597f70 +0x2f50:  mov    0x8(%ebp),%eax
08597f73 +0x2f53:  mov    %eax,(%esp)
08597f76 +0x2f56:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597f7b +0x2f5b:  mov    0x8(%ebp),%eax
08597f7e +0x2f5e:  movl   $&_ZTVN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyRewardE+0x8,(%eax)
08597f84 +0x2f64:  leave
08597f85 +0x2f65:  ret
08597f86 +0x2f66:  push   %ebp
08597f87 +0x2f67:  mov    %esp,%ebp
08597f89 +0x2f69:  sub    $0x18,%esp
08597f8c +0x2f6c:  mov    0x8(%ebp),%eax
08597f8f +0x2f6f:  mov    %eax,(%esp)
08597f92 +0x2f72:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
08597f97 +0x2f77:  mov    0x8(%ebp),%eax
08597f9a +0x2f7a:  movl   $&_ZTV39Dispatcher_HeroMissionEventState_Reward+0x8,(%eax)
08597fa0 +0x2f80:  leave
08597fa1 +0x2f81:  ret
08597fa2 +0x2f82:  push   %ebp
08597fa3 +0x2f83:  mov    %esp,%ebp
08597fa5 +0x2f85:  sub    $0x18,%esp
08597fa8 +0x2f88:  mov    0x8(%ebp),%eax
08597fab +0x2f8b:  mov    %eax,(%esp)
08597fae +0x2f8e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08597fb3 +0x2f93:  mov    0x8(%ebp),%eax
08597fb6 +0x2f96:  movl   $&_ZTV17IPacketDispatcherI12MSG_BUY_ITEM12BuyItemParamL8ch_state3EE+0x8,(%eax)
08597fbc +0x2f9c:  leave
08597fbd +0x2f9d:  ret
08597fbe +0x2f9e:  push   %ebp
08597fbf +0x2f9f:  mov    %esp,%ebp
08597fc1 +0x2fa1:  sub    $0x18,%esp
08597fc4 +0x2fa4:  mov    0x8(%ebp),%eax
08597fc7 +0x2fa7:  mov    %eax,(%esp)
08597fca +0x2faa:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08597fcf +0x2faf:  mov    0x8(%ebp),%eax
08597fd2 +0x2fb2:  movl   $&_ZTV17IPacketDispatcherI13MSG_BUY_SKILL17stOnBuySkillParamL8ch_state3EE+0x8,(%eax)
08597fd8 +0x2fb8:  leave
08597fd9 +0x2fb9:  ret
08597fda +0x2fba:  push   %ebp
08597fdb +0x2fbb:  mov    %esp,%ebp
08597fdd +0x2fbd:  sub    $0x18,%esp
08597fe0 +0x2fc0:  mov    0x8(%ebp),%eax
08597fe3 +0x2fc3:  mov    %eax,(%esp)
08597fe6 +0x2fc6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08597feb +0x2fcb:  mov    0x8(%ebp),%eax
08597fee +0x2fce:  movl   $&_ZTV17IPacketDispatcherI20MSG_CHANGE_SKILLSLOT20stOnChangeSkillParamL8ch_state3EE+0x8,(%eax)
08597ff4 +0x2fd4:  leave
08597ff5 +0x2fd5:  ret
08597ff6 +0x2fd6:  push   %ebp
08597ff7 +0x2fd7:  mov    %esp,%ebp
08597ff9 +0x2fd9:  sub    $0x18,%esp
08597ffc +0x2fdc:  mov    0x8(%ebp),%eax
08597fff +0x2fdf:  mov    %eax,(%esp)
08598002 +0x2fe2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598007 +0x2fe7:  mov    0x8(%ebp),%eax
0859800a +0x2fea:  movl   $&_ZTV17IPacketDispatcherI20MSG_CREATE_CHARACTER14stCreateCharacL8ch_state2EE+0x8,(%eax)
08598010 +0x2ff0:  leave
08598011 +0x2ff1:  ret
08598012 +0x2ff2:  push   %ebp
08598013 +0x2ff3:  mov    %esp,%ebp
08598015 +0x2ff5:  sub    $0x18,%esp
08598018 +0x2ff8:  mov    0x8(%ebp),%eax
0859801b +0x2ffb:  mov    %eax,(%esp)
0859801e +0x2ffe:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598023 +0x3003:  mov    0x8(%ebp),%eax
08598026 +0x3006:  movl   $&_ZTV17IPacketDispatcherI23MSG_DECREASE_DURABILITY17stOnUseEquipParamL8ch_state0EE+0x8,(%eax)
0859802c +0x300c:  leave
0859802d +0x300d:  ret
0859802e +0x300e:  push   %ebp
0859802f +0x300f:  mov    %esp,%ebp
08598031 +0x3011:  sub    $0x18,%esp
08598034 +0x3014:  mov    0x8(%ebp),%eax
08598037 +0x3017:  mov    %eax,(%esp)
0859803a +0x301a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859803f +0x301f:  mov    0x8(%ebp),%eax
08598042 +0x3022:  movl   $&_ZTV17IPacketDispatcherI20MSG_DELETE_CHARACTER14stDeleteCharacL8ch_state2EE+0x8,(%eax)
08598048 +0x3028:  leave
08598049 +0x3029:  ret
0859804a +0x302a:  push   %ebp
0859804b +0x302b:  mov    %esp,%ebp
0859804d +0x302d:  sub    $0x18,%esp
08598050 +0x3030:  mov    0x8(%ebp),%eax
08598053 +0x3033:  mov    %eax,(%esp)
08598056 +0x3036:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859805b +0x303b:  mov    0x8(%ebp),%eax
0859805e +0x303e:  movl   $&_ZTV17IPacketDispatcherI15MSG_DELETE_ITEM17stDeleteItemParamL8ch_state3EE+0x8,(%eax)
08598064 +0x3044:  leave
08598065 +0x3045:  ret
08598066 +0x3046:  push   %ebp
08598067 +0x3047:  mov    %esp,%ebp
08598069 +0x3049:  sub    $0x18,%esp
0859806c +0x304c:  mov    0x8(%ebp),%eax
0859806f +0x304f:  mov    %eax,(%esp)
08598072 +0x3052:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598077 +0x3057:  mov    0x8(%ebp),%eax
0859807a +0x305a:  movl   $&_ZTV17IPacketDispatcherI13MSG_DROP_ITEM15stDropItemParamL8ch_state3EE+0x8,(%eax)
08598080 +0x3060:  leave
08598081 +0x3061:  ret
08598082 +0x3062:  push   %ebp
08598083 +0x3063:  mov    %esp,%ebp
08598085 +0x3065:  sub    $0x18,%esp
08598088 +0x3068:  mov    0x8(%ebp),%eax
0859808b +0x306b:  mov    %eax,(%esp)
0859808e +0x306e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598093 +0x3073:  mov    0x8(%ebp),%eax
08598096 +0x3076:  movl   $&_ZTV17IPacketDispatcherI12MSG_GET_ITEM14stGetItemParamL8ch_state5EE+0x8,(%eax)
0859809c +0x307c:  leave
0859809d +0x307d:  ret
0859809e +0x307e:  push   %ebp
0859809f +0x307f:  mov    %esp,%ebp
085980a1 +0x3081:  sub    $0x18,%esp
085980a4 +0x3084:  mov    0x8(%ebp),%eax
085980a7 +0x3087:  mov    %eax,(%esp)
085980aa +0x308a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085980af +0x308f:  mov    0x8(%ebp),%eax
085980b2 +0x3092:  movl   $&_ZTV17IPacketDispatcherI16MSG_USERINFO_REQ20stOnGetUserInfoParamL8ch_state1EE+0x8,(%eax)
085980b8 +0x3098:  leave
085980b9 +0x3099:  ret
085980ba +0x309a:  push   %ebp
085980bb +0x309b:  mov    %esp,%ebp
085980bd +0x309d:  sub    $0x18,%esp
085980c0 +0x30a0:  mov    0x8(%ebp),%eax
085980c3 +0x30a3:  mov    %eax,(%esp)
085980c6 +0x30a6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085980cb +0x30ab:  mov    0x8(%ebp),%eax
085980ce +0x30ae:  movl   $&_ZTV17IPacketDispatcherI16MSG_USERINFO_REQ23stOnRecoverStaminaParamL8ch_state3EE+0x8,(%eax)
085980d4 +0x30b4:  leave
085980d5 +0x30b5:  ret
085980d6 +0x30b6:  push   %ebp
085980d7 +0x30b7:  mov    %esp,%ebp
085980d9 +0x30b9:  sub    $0x18,%esp
085980dc +0x30bc:  mov    0x8(%ebp),%eax
085980df +0x30bf:  mov    %eax,(%esp)
085980e2 +0x30c2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085980e7 +0x30c7:  mov    0x8(%ebp),%eax
085980ea +0x30ca:  movl   $&_ZTV17IPacketDispatcherI18MSG_MOVE_ITEMSPACE15stMoveItemParamL8ch_state3EE+0x8,(%eax)
085980f0 +0x30d0:  leave
085980f1 +0x30d1:  ret
085980f2 +0x30d2:  push   %ebp
085980f3 +0x30d3:  mov    %esp,%ebp
085980f5 +0x30d5:  sub    $0x18,%esp
085980f8 +0x30d8:  mov    0x8(%ebp),%eax
085980fb +0x30db:  mov    %eax,(%esp)
085980fe +0x30de:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598103 +0x30e3:  mov    0x8(%ebp),%eax
08598106 +0x30e6:  movl   $&_ZTV17IPacketDispatcherI12MSG_MOVE_MAP14stMoveMapParamL8ch_state0EE+0x8,(%eax)
0859810c +0x30ec:  leave
0859810d +0x30ed:  ret
0859810e +0x30ee:  push   %ebp
0859810f +0x30ef:  mov    %esp,%ebp
08598111 +0x30f1:  sub    $0x18,%esp
08598114 +0x30f4:  mov    0x8(%ebp),%eax
08598117 +0x30f7:  mov    %eax,(%esp)
0859811a +0x30fa:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859811f +0x30ff:  mov    0x8(%ebp),%eax
08598122 +0x3102:  movl   $&_ZTV17IPacketDispatcherI15MSG_PVP_TIMEOUT14stOnPvPTimeOutL8ch_state0EE+0x8,(%eax)
08598128 +0x3108:  leave
08598129 +0x3109:  ret
0859812a +0x310a:  push   %ebp
0859812b +0x310b:  mov    %esp,%ebp
0859812d +0x310d:  sub    $0x18,%esp
08598130 +0x3110:  mov    0x8(%ebp),%eax
08598133 +0x3113:  mov    %eax,(%esp)
08598136 +0x3116:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859813b +0x311b:  mov    0x8(%ebp),%eax
0859813e +0x311e:  movl   $&_ZTV17IPacketDispatcherI16MSG_REPAIR_EQUIP18stRepairEquipParamL8ch_state0EE+0x8,(%eax)
08598144 +0x3124:  leave
08598145 +0x3125:  ret
08598146 +0x3126:  push   %ebp
08598147 +0x3127:  mov    %esp,%ebp
08598149 +0x3129:  sub    $0x18,%esp
0859814c +0x312c:  mov    0x8(%ebp),%eax
0859814f +0x312f:  mov    %eax,(%esp)
08598152 +0x3132:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598157 +0x3137:  mov    0x8(%ebp),%eax
0859815a +0x313a:  movl   $&_ZTV17IPacketDispatcherI17MSG_CHARAC_SELECT14stSelectCharacL8ch_state2EE+0x8,(%eax)
08598160 +0x3140:  leave
08598161 +0x3141:  ret
08598162 +0x3142:  push   %ebp
08598163 +0x3143:  mov    %esp,%ebp
08598165 +0x3145:  sub    $0x18,%esp
08598168 +0x3148:  mov    0x8(%ebp),%eax
0859816b +0x314b:  mov    %eax,(%esp)
0859816e +0x314e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598173 +0x3153:  mov    0x8(%ebp),%eax
08598176 +0x3156:  movl   $&_ZTV17IPacketDispatcherI18MSG_SELECT_DUNGEON20stSelectDungeonParamL8ch_state0EE+0x8,(%eax)
0859817c +0x315c:  leave
0859817d +0x315d:  ret
0859817e +0x315e:  push   %ebp
0859817f +0x315f:  mov    %esp,%ebp
08598181 +0x3161:  sub    $0x18,%esp
08598184 +0x3164:  mov    0x8(%ebp),%eax
08598187 +0x3167:  mov    %eax,(%esp)
0859818a +0x316a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859818f +0x316f:  mov    0x8(%ebp),%eax
08598192 +0x3172:  movl   $&_ZTV17IPacketDispatcherI17MSG_SET_USER_AREA14stSetAreaParamL8ch_state3EE+0x8,(%eax)
08598198 +0x3178:  leave
08598199 +0x3179:  ret
0859819a +0x317a:  push   %ebp
0859819b +0x317b:  mov    %esp,%ebp
0859819d +0x317d:  sub    $0x18,%esp
085981a0 +0x3180:  mov    0x8(%ebp),%eax
085981a3 +0x3183:  mov    %eax,(%esp)
085981a6 +0x3186:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085981ab +0x318b:  mov    0x8(%ebp),%eax
085981ae +0x318e:  movl   $&_ZTV17IPacketDispatcherI16MSG_USER_SET_POS9ParamBaseL8ch_state0EE+0x8,(%eax)
085981b4 +0x3194:  leave
085981b5 +0x3195:  ret
085981b6 +0x3196:  push   %ebp
085981b7 +0x3197:  mov    %esp,%ebp
085981b9 +0x3199:  sub    $0x18,%esp
085981bc +0x319c:  mov    0x8(%ebp),%eax
085981bf +0x319f:  mov    %eax,(%esp)
085981c2 +0x31a2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085981c7 +0x31a7:  mov    0x8(%ebp),%eax
085981ca +0x31aa:  movl   $&_ZTV17IPacketDispatcherI19MSG_SET_READY_STATE20stOnSetPvPReadyParamL8ch_state0EE+0x8,(%eax)
085981d0 +0x31b0:  leave
085981d1 +0x31b1:  ret
085981d2 +0x31b2:  push   %ebp
085981d3 +0x31b3:  mov    %esp,%ebp
085981d5 +0x31b5:  sub    $0x18,%esp
085981d8 +0x31b8:  mov    0x8(%ebp),%eax
085981db +0x31bb:  mov    %eax,(%esp)
085981de +0x31be:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085981e3 +0x31c3:  mov    0x8(%ebp),%eax
085981e6 +0x31c6:  movl   $&_ZTV17IPacketDispatcherI13MSG_SORT_ITEM17stOnSortItemParamL8ch_state3EE+0x8,(%eax)
085981ec +0x31cc:  leave
085981ed +0x31cd:  ret
085981ee +0x31ce:  push   %ebp
085981ef +0x31cf:  mov    %esp,%ebp
085981f1 +0x31d1:  sub    $0x18,%esp
085981f4 +0x31d4:  mov    0x8(%ebp),%eax
085981f7 +0x31d7:  mov    %eax,(%esp)
085981fa +0x31da:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085981ff +0x31df:  mov    0x8(%ebp),%eax
08598202 +0x31e2:  movl   $&_ZTV17IPacketDispatcherI12MSG_USE_COIN14stUseCoinParamL8ch_state0EE+0x8,(%eax)
08598208 +0x31e8:  leave
08598209 +0x31e9:  ret
0859820a +0x31ea:  push   %ebp
0859820b +0x31eb:  mov    %esp,%ebp
0859820d +0x31ed:  sub    $0x18,%esp
08598210 +0x31f0:  mov    0x8(%ebp),%eax
08598213 +0x31f3:  mov    %eax,(%esp)
08598216 +0x31f6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859821b +0x31fb:  mov    0x8(%ebp),%eax
0859821e +0x31fe:  movl   $&_ZTV17IPacketDispatcherI13MSG_USE_SKILL15stUseSkillParamL8ch_state0EE+0x8,(%eax)
08598224 +0x3204:  leave
08598225 +0x3205:  ret
08598226 +0x3206:  push   %ebp
08598227 +0x3207:  mov    %esp,%ebp
08598229 +0x3209:  sub    $0x18,%esp
0859822c +0x320c:  mov    0x8(%ebp),%eax
0859822f +0x320f:  mov    %eax,(%esp)
08598232 +0x3212:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598237 +0x3217:  mov    0x8(%ebp),%eax
0859823a +0x321a:  movl   $&_ZTV17IPacketDispatcherI17MSG_WALKOUT_PARTY19stWalkoutPartyParamL8ch_state3EE+0x8,(%eax)
08598240 +0x3220:  leave
08598241 +0x3221:  ret
08598242 +0x3222:  push   %ebp
08598243 +0x3223:  mov    %esp,%ebp
08598245 +0x3225:  sub    $0x18,%esp
08598248 +0x3228:  mov    0x8(%ebp),%eax
0859824b +0x322b:  mov    %eax,(%esp)
0859824e +0x322e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598253 +0x3233:  mov    0x8(%ebp),%eax
08598256 +0x3236:  movl   $&_ZTV17IPacketDispatcherI20MSG_MONSTERCARD_BIND17stMonstercardBindL8ch_state3EE+0x8,(%eax)
0859825c +0x323c:  leave
0859825d +0x323d:  ret
0859825e +0x323e:  push   %ebp
0859825f +0x323f:  mov    %esp,%ebp
08598261 +0x3241:  sub    $0x18,%esp
08598264 +0x3244:  mov    0x8(%ebp),%eax
08598267 +0x3247:  mov    %eax,(%esp)
0859826a +0x324a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859826f +0x324f:  mov    0x8(%ebp),%eax
08598272 +0x3252:  movl   $&_ZTV17IPacketDispatcherI23MSG_SECURITY_LOG_PACKET18stSecurityLogParamL8ch_state0EE+0x8,(%eax)
08598278 +0x3258:  leave
08598279 +0x3259:  ret
0859827a +0x325a:  push   %ebp
0859827b +0x325b:  mov    %esp,%ebp
0859827d +0x325d:  sub    $0x18,%esp
08598280 +0x3260:  mov    0x8(%ebp),%eax
08598283 +0x3263:  mov    %eax,(%esp)
08598286 +0x3266:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859828b +0x326b:  mov    0x8(%ebp),%eax
0859828e +0x326e:  movl   $&_ZTV17IPacketDispatcherIN15CMDPacketStruct31_STReqEventDungeonDestoryObjectENS0_31_STResEventDungeonDestoryObjectEL8ch_state3EE+0x8,(%eax)
08598294 +0x3274:  leave
08598295 +0x3275:  ret
08598296 +0x3276:  push   %ebp
08598297 +0x3277:  mov    %esp,%ebp
08598299 +0x3279:  sub    $0x18,%esp
0859829c +0x327c:  mov    0x8(%ebp),%eax
0859829f +0x327f:  mov    %eax,(%esp)
085982a2 +0x3282:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085982a7 +0x3287:  mov    0x8(%ebp),%eax
085982aa +0x328a:  movl   $&_ZTV17IPacketDispatcherIN15CMDPacketStruct27_STReqEventDungeonClearRoomENS0_27_STResEventDungeonClearRoomEL8ch_state3EE+0x8,(%eax)
085982b0 +0x3290:  leave
085982b1 +0x3291:  ret
085982b2 +0x3292:  push   %ebp
085982b3 +0x3293:  mov    %esp,%ebp
085982b5 +0x3295:  sub    $0x18,%esp
085982b8 +0x3298:  mov    0x8(%ebp),%eax
085982bb +0x329b:  mov    %eax,(%esp)
085982be +0x329e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085982c3 +0x32a3:  mov    0x8(%ebp),%eax
085982c6 +0x32a6:  movl   $&_ZTV17IPacketDispatcherI21MSG_SAVE_QUEST_NOTIFY20saveQuestNotifyParamL8ch_state3EE+0x8,(%eax)
085982cc +0x32ac:  leave
085982cd +0x32ad:  ret
085982ce +0x32ae:  push   %ebp
085982cf +0x32af:  mov    %esp,%ebp
085982d1 +0x32b1:  sub    $0x18,%esp
085982d4 +0x32b4:  mov    0x8(%ebp),%eax
085982d7 +0x32b7:  mov    %eax,(%esp)
085982da +0x32ba:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085982df +0x32bf:  mov    0x8(%ebp),%eax
085982e2 +0x32c2:  movl   $&_ZTV17IPacketDispatcherI29MSG_RIGHT_OF_CHANGE_GROW_TYPE23stRightOfChangeGrowTypeL8ch_state3EE+0x8,(%eax)
085982e8 +0x32c8:  leave
085982e9 +0x32c9:  ret
085982ea +0x32ca:  push   %ebp
085982eb +0x32cb:  mov    %esp,%ebp
085982ed +0x32cd:  sub    $0x18,%esp
085982f0 +0x32d0:  mov    0x8(%ebp),%eax
085982f3 +0x32d3:  mov    %eax,(%esp)
085982f6 +0x32d6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085982fb +0x32db:  mov    0x8(%ebp),%eax
085982fe +0x32de:  movl   $&_ZTV17IPacketDispatcherI24MSG_STACKABLE_ACTION_USE20stStackableActionUseL8ch_state3EE+0x8,(%eax)
08598304 +0x32e4:  leave
08598305 +0x32e5:  ret
08598306 +0x32e6:  push   %ebp
08598307 +0x32e7:  mov    %esp,%ebp
08598309 +0x32e9:  sub    $0x18,%esp
0859830c +0x32ec:  mov    0x8(%ebp),%eax
0859830f +0x32ef:  mov    %eax,(%esp)
08598312 +0x32f2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598317 +0x32f7:  mov    0x8(%ebp),%eax
0859831a +0x32fa:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE13stBingoRewardL8ch_state3EE+0x8,(%eax)
08598320 +0x3300:  leave
08598321 +0x3301:  ret
08598322 +0x3302:  push   %ebp
08598323 +0x3303:  mov    %esp,%ebp
08598325 +0x3305:  sub    $0x18,%esp
08598328 +0x3308:  mov    0x8(%ebp),%eax
0859832b +0x330b:  mov    %eax,(%esp)
0859832e +0x330e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598333 +0x3313:  mov    0x8(%ebp),%eax
08598336 +0x3316:  movl   $&_ZTV17IPacketDispatcherI14MSG_BINGO_QUIZ11stBingoQuizL8ch_state3EE+0x8,(%eax)
0859833c +0x331c:  leave
0859833d +0x331d:  ret
0859833e +0x331e:  push   %ebp
0859833f +0x331f:  mov    %esp,%ebp
08598341 +0x3321:  sub    $0x18,%esp
08598344 +0x3324:  mov    0x8(%ebp),%eax
08598347 +0x3327:  mov    %eax,(%esp)
0859834a +0x332a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859834f +0x332f:  mov    0x8(%ebp),%eax
08598352 +0x3332:  movl   $&_ZTV17IPacketDispatcherI14MSG_SKILL_INIT11stSkillInitL8ch_state0EE+0x8,(%eax)
08598358 +0x3338:  leave
08598359 +0x3339:  ret
0859835a +0x333a:  push   %ebp
0859835b +0x333b:  mov    %esp,%ebp
0859835d +0x333d:  sub    $0x18,%esp
08598360 +0x3340:  mov    0x8(%ebp),%eax
08598363 +0x3343:  mov    %eax,(%esp)
08598366 +0x3346:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859836b +0x334b:  mov    0x8(%ebp),%eax
0859836e +0x334e:  movl   $&_ZTV17IPacketDispatcherI28MSG_LOG_INGAME_ADVERTISEMENT24stLogIngameAdvertisementL8ch_state2EE+0x8,(%eax)
08598374 +0x3354:  leave
08598375 +0x3355:  ret
08598376 +0x3356:  push   %ebp
08598377 +0x3357:  mov    %esp,%ebp
08598379 +0x3359:  sub    $0x18,%esp
0859837c +0x335c:  mov    0x8(%ebp),%eax
0859837f +0x335f:  mov    %eax,(%esp)
08598382 +0x3362:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598387 +0x3367:  mov    0x8(%ebp),%eax
0859838a +0x336a:  movl   $&_ZTV17IPacketDispatcherI32MSG_REQUEST_INGAME_ADVERTISEMENT28stRequestIngameAdvertisementL8ch_state2EE+0x8,(%eax)
08598390 +0x3370:  leave
08598391 +0x3371:  ret
08598392 +0x3372:  push   %ebp
08598393 +0x3373:  mov    %esp,%ebp
08598395 +0x3375:  sub    $0x18,%esp
08598398 +0x3378:  mov    0x8(%ebp),%eax
0859839b +0x337b:  mov    %eax,(%esp)
0859839e +0x337e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085983a3 +0x3383:  mov    0x8(%ebp),%eax
085983a6 +0x3386:  movl   $&_ZTV17IPacketDispatcherI29MSG_REQUEST_CHARAC_SKILL_INFO24stRequestCharacSkillInfoL8ch_state3EE+0x8,(%eax)
085983ac +0x338c:  leave
085983ad +0x338d:  ret
085983ae +0x338e:  push   %ebp
085983af +0x338f:  mov    %esp,%ebp
085983b1 +0x3391:  sub    $0x18,%esp
085983b4 +0x3394:  mov    0x8(%ebp),%eax
085983b7 +0x3397:  mov    %eax,(%esp)
085983ba +0x339a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085983bf +0x339f:  mov    0x8(%ebp),%eax
085983c2 +0x33a2:  movl   $&_ZTV17IPacketDispatcherI18MSG_SELECT_STRIKER15stSelectStrikerL8ch_state3EE+0x8,(%eax)
085983c8 +0x33a8:  leave
085983c9 +0x33a9:  ret
085983ca +0x33aa:  push   %ebp
085983cb +0x33ab:  mov    %esp,%ebp
085983cd +0x33ad:  sub    $0x18,%esp
085983d0 +0x33b0:  mov    0x8(%ebp),%eax
085983d3 +0x33b3:  mov    %eax,(%esp)
085983d6 +0x33b6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085983db +0x33bb:  mov    0x8(%ebp),%eax
085983de +0x33be:  movl   $&_ZTV17IPacketDispatcherI24MSG_CHANGE_AVATAR_OPTION20stChangeAvatarOptionL8ch_state3EE+0x8,(%eax)
085983e4 +0x33c4:  leave
085983e5 +0x33c5:  ret
085983e6 +0x33c6:  push   %ebp
085983e7 +0x33c7:  mov    %esp,%ebp
085983e9 +0x33c9:  sub    $0x18,%esp
085983ec +0x33cc:  mov    0x8(%ebp),%eax
085983ef +0x33cf:  mov    %eax,(%esp)
085983f2 +0x33d2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085983f7 +0x33d7:  mov    0x8(%ebp),%eax
085983fa +0x33da:  movl   $&_ZTV17IPacketDispatcherI26MSG_PARTY_TELEPORT_CONFIRM22stPartyTeleportConfirmL8ch_state0EE+0x8,(%eax)
08598400 +0x33e0:  leave
08598401 +0x33e1:  ret
08598402 +0x33e2:  push   %ebp
08598403 +0x33e3:  mov    %esp,%ebp
08598405 +0x33e5:  sub    $0x18,%esp
08598408 +0x33e8:  mov    0x8(%ebp),%eax
0859840b +0x33eb:  mov    %eax,(%esp)
0859840e +0x33ee:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598413 +0x33f3:  mov    0x8(%ebp),%eax
08598416 +0x33f6:  movl   $&_ZTV17IPacketDispatcherI18MSG_PARTY_TELEPORT15stPartyTeleportL8ch_state0EE+0x8,(%eax)
0859841c +0x33fc:  leave
0859841d +0x33fd:  ret
0859841e +0x33fe:  push   %ebp
0859841f +0x33ff:  mov    %esp,%ebp
08598421 +0x3401:  sub    $0x18,%esp
08598424 +0x3404:  mov    0x8(%ebp),%eax
08598427 +0x3407:  mov    %eax,(%esp)
0859842a +0x340a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859842f +0x340f:  mov    0x8(%ebp),%eax
08598432 +0x3412:  movl   $&_ZTV17IPacketDispatcherI22MSG_FATIGUE_ATTENDANCE19stFatigueAttendanceL8ch_state0EE+0x8,(%eax)
08598438 +0x3418:  leave
08598439 +0x3419:  ret
0859843a +0x341a:  push   %ebp
0859843b +0x341b:  mov    %esp,%ebp
0859843d +0x341d:  sub    $0x18,%esp
08598440 +0x3420:  mov    0x8(%ebp),%eax
08598443 +0x3423:  mov    %eax,(%esp)
08598446 +0x3426:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859844b +0x342b:  mov    0x8(%ebp),%eax
0859844e +0x342e:  movl   $&_ZTV17IPacketDispatcherI16MSG_REFUND_SKILL13stRefundSkillL8ch_state0EE+0x8,(%eax)
08598454 +0x3434:  leave
08598455 +0x3435:  ret
08598456 +0x3436:  push   %ebp
08598457 +0x3437:  mov    %esp,%ebp
08598459 +0x3439:  sub    $0x18,%esp
0859845c +0x343c:  mov    0x8(%ebp),%eax
0859845f +0x343f:  mov    %eax,(%esp)
08598462 +0x3442:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598467 +0x3447:  mov    0x8(%ebp),%eax
0859846a +0x344a:  movl   $&_ZTV17IPacketDispatcherI21MSG_EXPERT_EXTRACTION18stExpertExtractionL8ch_state3EE+0x8,(%eax)
08598470 +0x3450:  leave
08598471 +0x3451:  ret
08598472 +0x3452:  push   %ebp
08598473 +0x3453:  mov    %esp,%ebp
08598475 +0x3455:  sub    $0x18,%esp
08598478 +0x3458:  mov    0x8(%ebp),%eax
0859847b +0x345b:  mov    %eax,(%esp)
0859847e +0x345e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598483 +0x3463:  mov    0x8(%ebp),%eax
08598486 +0x3466:  movl   $&_ZTV17IPacketDispatcherI18MSG_PARTY_SET_INFO14stSetPartyInfoL8ch_state3EE+0x8,(%eax)
0859848c +0x346c:  leave
0859848d +0x346d:  ret
0859848e +0x346e:  push   %ebp
0859848f +0x346f:  mov    %esp,%ebp
08598491 +0x3471:  sub    $0x18,%esp
08598494 +0x3474:  mov    0x8(%ebp),%eax
08598497 +0x3477:  mov    %eax,(%esp)
0859849a +0x347a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859849f +0x347f:  mov    0x8(%ebp),%eax
085984a2 +0x3482:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE17stLeavePartyParamL8ch_state0EE+0x8,(%eax)
085984a8 +0x3488:  leave
085984a9 +0x3489:  ret
085984aa +0x348a:  push   %ebp
085984ab +0x348b:  mov    %esp,%ebp
085984ad +0x348d:  sub    $0x18,%esp
085984b0 +0x3490:  mov    0x8(%ebp),%eax
085984b3 +0x3493:  mov    %eax,(%esp)
085984b6 +0x3496:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085984bb +0x349b:  mov    0x8(%ebp),%eax
085984be +0x349e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE16stStartGameParamL8ch_state0EE+0x8,(%eax)
085984c4 +0x34a4:  leave
085984c5 +0x34a5:  ret
085984c6 +0x34a6:  push   %ebp
085984c7 +0x34a7:  mov    %esp,%ebp
085984c9 +0x34a9:  sub    $0x18,%esp
085984cc +0x34ac:  mov    0x8(%ebp),%eax
085984cf +0x34af:  mov    %eax,(%esp)
085984d2 +0x34b2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085984d7 +0x34b7:  mov    0x8(%ebp),%eax
085984da +0x34ba:  movl   $&_ZTV17IPacketDispatcherI18MSG_FINISH_LOADING17stFinishLoadParamL8ch_state0EE+0x8,(%eax)
085984e0 +0x34c0:  leave
085984e1 +0x34c1:  ret
085984e2 +0x34c2:  push   %ebp
085984e3 +0x34c3:  mov    %esp,%ebp
085984e5 +0x34c5:  sub    $0x18,%esp
085984e8 +0x34c8:  mov    0x8(%ebp),%eax
085984eb +0x34cb:  mov    %eax,(%esp)
085984ee +0x34ce:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085984f3 +0x34d3:  mov    0x8(%ebp),%eax
085984f6 +0x34d6:  movl   $&_ZTV17IPacketDispatcherI17MSG_DIE_CHARACTER20stDieCharacInDungeonL8ch_state0EE+0x8,(%eax)
085984fc +0x34dc:  leave
085984fd +0x34dd:  ret
085984fe +0x34de:  push   %ebp
085984ff +0x34df:  mov    %esp,%ebp
08598501 +0x34e1:  sub    $0x18,%esp
08598504 +0x34e4:  mov    0x8(%ebp),%eax
08598507 +0x34e7:  mov    %eax,(%esp)
0859850a +0x34ea:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859850f +0x34ef:  mov    0x8(%ebp),%eax
08598512 +0x34f2:  movl   $&_ZTV17IPacketDispatcherI14MSG_ADD_FRIEND16stAddFriendParamL8ch_state3EE+0x8,(%eax)
08598518 +0x34f8:  leave
08598519 +0x34f9:  ret
0859851a +0x34fa:  push   %ebp
0859851b +0x34fb:  mov    %esp,%ebp
0859851d +0x34fd:  sub    $0x18,%esp
08598520 +0x3500:  mov    0x8(%ebp),%eax
08598523 +0x3503:  mov    %eax,(%esp)
08598526 +0x3506:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859852b +0x350b:  mov    0x8(%ebp),%eax
0859852e +0x350e:  movl   $&_ZTV17IPacketDispatcherI17MSG_REMOVE_FRIEND19stRemoveFriendParamL8ch_state3EE+0x8,(%eax)
08598534 +0x3514:  leave
08598535 +0x3515:  ret
08598536 +0x3516:  push   %ebp
08598537 +0x3517:  mov    %esp,%ebp
08598539 +0x3519:  sub    $0x18,%esp
0859853c +0x351c:  mov    0x8(%ebp),%eax
0859853f +0x351f:  mov    %eax,(%esp)
08598542 +0x3522:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598547 +0x3527:  mov    0x8(%ebp),%eax
0859854a +0x352a:  movl   $&_ZTV17IPacketDispatcherI24MSG_REQUEST_MEMBER_ENTER25stRequestMemberEnterParamL8ch_state3EE+0x8,(%eax)
08598550 +0x3530:  leave
08598551 +0x3531:  ret
08598552 +0x3532:  push   %ebp
08598553 +0x3533:  mov    %esp,%ebp
08598555 +0x3535:  sub    $0x18,%esp
08598558 +0x3538:  mov    0x8(%ebp),%eax
0859855b +0x353b:  mov    %eax,(%esp)
0859855e +0x353e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598563 +0x3543:  mov    0x8(%ebp),%eax
08598566 +0x3546:  movl   $&_ZTV17IPacketDispatcherI22MSG_MEMBER_ENTER_REPLY23stMemberEnterReplyParamL8ch_state3EE+0x8,(%eax)
0859856c +0x354c:  leave
0859856d +0x354d:  ret
0859856e +0x354e:  push   %ebp
0859856f +0x354f:  mov    %esp,%ebp
08598571 +0x3551:  sub    $0x18,%esp
08598574 +0x3554:  mov    0x8(%ebp),%eax
08598577 +0x3557:  mov    %eax,(%esp)
0859857a +0x355a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859857f +0x355f:  mov    0x8(%ebp),%eax
08598582 +0x3562:  movl   $&_ZTV17IPacketDispatcherI17MSG_MEMBER_SECEDE19stMemberSecedeParamL8ch_state3EE+0x8,(%eax)
08598588 +0x3568:  leave
08598589 +0x3569:  ret
0859858a +0x356a:  push   %ebp
0859858b +0x356b:  mov    %esp,%ebp
0859858d +0x356d:  sub    $0x18,%esp
08598590 +0x3570:  mov    0x8(%ebp),%eax
08598593 +0x3573:  mov    %eax,(%esp)
08598596 +0x3576:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859859b +0x357b:  mov    0x8(%ebp),%eax
0859859e +0x357e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE21stCallMemberListParamL8ch_state3EE+0x8,(%eax)
085985a4 +0x3584:  leave
085985a5 +0x3585:  ret
085985a6 +0x3586:  push   %ebp
085985a7 +0x3587:  mov    %esp,%ebp
085985a9 +0x3589:  sub    $0x18,%esp
085985ac +0x358c:  mov    0x8(%ebp),%eax
085985af +0x358f:  mov    %eax,(%esp)
085985b2 +0x3592:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085985b7 +0x3597:  mov    0x8(%ebp),%eax
085985ba +0x359a:  movl   $&_ZTV17IPacketDispatcherI16MSG_ITEM_UPGRADE16STUdateItemParamL8ch_state0EE+0x8,(%eax)
085985c0 +0x35a0:  leave
085985c1 +0x35a1:  ret
085985c2 +0x35a2:  push   %ebp
085985c3 +0x35a3:  mov    %esp,%ebp
085985c5 +0x35a5:  sub    $0x18,%esp
085985c8 +0x35a8:  mov    0x8(%ebp),%eax
085985cb +0x35ab:  mov    %eax,(%esp)
085985ce +0x35ae:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085985d3 +0x35b3:  mov    0x8(%ebp),%eax
085985d6 +0x35b6:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE18stMailboxOpenParamL8ch_state0EE+0x8,(%eax)
085985dc +0x35bc:  leave
085985dd +0x35bd:  ret
085985de +0x35be:  push   %ebp
085985df +0x35bf:  mov    %esp,%ebp
085985e1 +0x35c1:  sub    $0x18,%esp
085985e4 +0x35c4:  mov    0x8(%ebp),%eax
085985e7 +0x35c7:  mov    %eax,(%esp)
085985ea +0x35ca:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085985ef +0x35cf:  mov    0x8(%ebp),%eax
085985f2 +0x35d2:  movl   $&_ZTV17IPacketDispatcherI16MSG_MAILBOX_SEND18stMailboxSendParamL8ch_state0EE+0x8,(%eax)
085985f8 +0x35d8:  leave
085985f9 +0x35d9:  ret
085985fa +0x35da:  push   %ebp
085985fb +0x35db:  mov    %esp,%ebp
085985fd +0x35dd:  sub    $0x18,%esp
08598600 +0x35e0:  mov    0x8(%ebp),%eax
08598603 +0x35e3:  mov    %eax,(%esp)
08598606 +0x35e6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859860b +0x35eb:  mov    0x8(%ebp),%eax
0859860e +0x35ee:  movl   $&_ZTV17IPacketDispatcherI24MSG_MAILBOX_EXTRACT_ITEM21stMailboxExtractParamL8ch_state0EE+0x8,(%eax)
08598614 +0x35f4:  leave
08598615 +0x35f5:  ret
08598616 +0x35f6:  push   %ebp
08598617 +0x35f7:  mov    %esp,%ebp
08598619 +0x35f9:  sub    $0x18,%esp
0859861c +0x35fc:  mov    0x8(%ebp),%eax
0859861f +0x35ff:  mov    %eax,(%esp)
08598622 +0x3602:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598627 +0x3607:  mov    0x8(%ebp),%eax
0859862a +0x360a:  movl   $&_ZTV17IPacketDispatcherI19MSG_RENAME_CREATURE16stRenameCreatureL8ch_state0EE+0x8,(%eax)
08598630 +0x3610:  leave
08598631 +0x3611:  ret
08598632 +0x3612:  push   %ebp
08598633 +0x3613:  mov    %esp,%ebp
08598635 +0x3615:  sub    $0x18,%esp
08598638 +0x3618:  mov    0x8(%ebp),%eax
0859863b +0x361b:  mov    %eax,(%esp)
0859863e +0x361e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598643 +0x3623:  mov    0x8(%ebp),%eax
08598646 +0x3626:  movl   $&_ZTV17IPacketDispatcherI18MSG_HATCH_CREATURE15stHatchCreatureL8ch_state3EE+0x8,(%eax)
0859864c +0x362c:  leave
0859864d +0x362d:  ret
0859864e +0x362e:  push   %ebp
0859864f +0x362f:  mov    %esp,%ebp
08598651 +0x3631:  sub    $0x18,%esp
08598654 +0x3634:  mov    0x8(%ebp),%eax
08598657 +0x3637:  mov    %eax,(%esp)
0859865a +0x363a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859865f +0x363f:  mov    0x8(%ebp),%eax
08598662 +0x3642:  movl   $&_ZTV17IPacketDispatcherI15MSG_TEMP_STRUCT9TempParamL8ch_state2EE+0x8,(%eax)
08598668 +0x3648:  leave
08598669 +0x3649:  ret
0859866a +0x364a:  push   %ebp
0859866b +0x364b:  mov    %esp,%ebp
0859866d +0x364d:  sub    $0x18,%esp
08598670 +0x3650:  mov    0x8(%ebp),%eax
08598673 +0x3653:  mov    %eax,(%esp)
08598676 +0x3656:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859867b +0x365b:  mov    0x8(%ebp),%eax
0859867e +0x365e:  movl   $&_ZTV17IPacketDispatcherI18MSG_BOSS_DIE_CHECK19stBossDieCheckParamL8ch_state5EE+0x8,(%eax)
08598684 +0x3664:  leave
08598685 +0x3665:  ret
08598686 +0x3666:  push   %ebp
08598687 +0x3667:  mov    %esp,%ebp
08598689 +0x3669:  sub    $0x18,%esp
0859868c +0x366c:  mov    0x8(%ebp),%eax
0859868f +0x366f:  mov    %eax,(%esp)
08598692 +0x3672:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598697 +0x3677:  mov    0x8(%ebp),%eax
0859869a +0x367a:  movl   $&_ZTV17IPacketDispatcherI25MSG_REGISTER_TO_BLACKLIST26stRegisterToBlackListParamL8ch_state3EE+0x8,(%eax)
085986a0 +0x3680:  leave
085986a1 +0x3681:  ret
085986a2 +0x3682:  push   %ebp
085986a3 +0x3683:  mov    %esp,%ebp
085986a5 +0x3685:  sub    $0x18,%esp
085986a8 +0x3688:  mov    0x8(%ebp),%eax
085986ab +0x368b:  mov    %eax,(%esp)
085986ae +0x368e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085986b3 +0x3693:  mov    0x8(%ebp),%eax
085986b6 +0x3696:  movl   $&_ZTV17IPacketDispatcherI23MSG_DELETE_TO_BLACKLIST24stDeleteToBlackListParamL8ch_state3EE+0x8,(%eax)
085986bc +0x369c:  leave
085986bd +0x369d:  ret
085986be +0x369e:  push   %ebp
085986bf +0x369f:  mov    %esp,%ebp
085986c1 +0x36a1:  sub    $0x18,%esp
085986c4 +0x36a4:  mov    0x8(%ebp),%eax
085986c7 +0x36a7:  mov    %eax,(%esp)
085986ca +0x36aa:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085986cf +0x36af:  mov    0x8(%ebp),%eax
085986d2 +0x36b2:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE23stRequestBlackListParamL8ch_state3EE+0x8,(%eax)
085986d8 +0x36b8:  leave
085986d9 +0x36b9:  ret
085986da +0x36ba:  push   %ebp
085986db +0x36bb:  mov    %esp,%ebp
085986dd +0x36bd:  sub    $0x18,%esp
085986e0 +0x36c0:  mov    0x8(%ebp),%eax
085986e3 +0x36c3:  mov    %eax,(%esp)
085986e6 +0x36c6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085986eb +0x36cb:  mov    0x8(%ebp),%eax
085986ee +0x36ce:  movl   $&_ZTV17IPacketDispatcherI22MSG_CHANGE_LETTER_STAT23stChangeLetterStatParamL8ch_state3EE+0x8,(%eax)
085986f4 +0x36d4:  leave
085986f5 +0x36d5:  ret
085986f6 +0x36d6:  push   %ebp
085986f7 +0x36d7:  mov    %esp,%ebp
085986f9 +0x36d9:  sub    $0x18,%esp
085986fc +0x36dc:  mov    0x8(%ebp),%eax
085986ff +0x36df:  mov    %eax,(%esp)
08598702 +0x36e2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598707 +0x36e7:  mov    0x8(%ebp),%eax
0859870a +0x36ea:  movl   $&_ZTV17IPacketDispatcherI12MSG_SECU_RPY16SecuCardRpyParamL8ch_state2EE+0x8,(%eax)
08598710 +0x36f0:  leave
08598711 +0x36f1:  ret
08598712 +0x36f2:  push   %ebp
08598713 +0x36f3:  mov    %esp,%ebp
08598715 +0x36f5:  sub    $0x18,%esp
08598718 +0x36f8:  mov    0x8(%ebp),%eax
0859871b +0x36fb:  mov    %eax,(%esp)
0859871e +0x36fe:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598723 +0x3703:  mov    0x8(%ebp),%eax
08598726 +0x3706:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE9ParamBaseL8ch_state3EE+0x8,(%eax)
0859872c +0x370c:  leave
0859872d +0x370d:  ret
0859872e +0x370e:  push   %ebp
0859872f +0x370f:  mov    %esp,%ebp
08598731 +0x3711:  sub    $0x18,%esp
08598734 +0x3714:  mov    0x8(%ebp),%eax
08598737 +0x3717:  mov    %eax,(%esp)
0859873a +0x371a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859873f +0x371f:  mov    0x8(%ebp),%eax
08598742 +0x3722:  movl   $&_ZTV17IPacketDispatcherI25MSG_CLIENT_SPEC_STATISTIC26stClientSpecStatisticParamL8ch_state2EE+0x8,(%eax)
08598748 +0x3728:  leave
08598749 +0x3729:  ret
0859874a +0x372a:  push   %ebp
0859874b +0x372b:  mov    %esp,%ebp
0859874d +0x372d:  sub    $0x18,%esp
08598750 +0x3730:  mov    0x8(%ebp),%eax
08598753 +0x3733:  mov    %eax,(%esp)
08598756 +0x3736:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859875b +0x373b:  mov    0x8(%ebp),%eax
0859875e +0x373e:  movl   $&_ZTV17IPacketDispatcherI22MSG_SAVE_GAME_OPTION_19ParamBaseL8ch_state2EE+0x8,(%eax)
08598764 +0x3744:  leave
08598765 +0x3745:  ret
08598766 +0x3746:  push   %ebp
08598767 +0x3747:  mov    %esp,%ebp
08598769 +0x3749:  sub    $0x18,%esp
0859876c +0x374c:  mov    0x8(%ebp),%eax
0859876f +0x374f:  mov    %eax,(%esp)
08598772 +0x3752:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598777 +0x3757:  mov    0x8(%ebp),%eax
0859877a +0x375a:  movl   $&_ZTV17IPacketDispatcherI22MSG_SAVE_GAME_OPTION_29ParamBaseL8ch_state2EE+0x8,(%eax)
08598780 +0x3760:  leave
08598781 +0x3761:  ret
08598782 +0x3762:  push   %ebp
08598783 +0x3763:  mov    %esp,%ebp
08598785 +0x3765:  sub    $0x18,%esp
08598788 +0x3768:  mov    0x8(%ebp),%eax
0859878b +0x376b:  mov    %eax,(%esp)
0859878e +0x376e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598793 +0x3773:  mov    0x8(%ebp),%eax
08598796 +0x3776:  movl   $&_ZTV17IPacketDispatcherI25MSG_SAVE_CHARACTER_OPTION18stSaveCharacOptionL8ch_state2EE+0x8,(%eax)
0859879c +0x377c:  leave
0859879d +0x377d:  ret
0859879e +0x377e:  push   %ebp
0859879f +0x377f:  mov    %esp,%ebp
085987a1 +0x3781:  sub    $0x18,%esp
085987a4 +0x3784:  mov    0x8(%ebp),%eax
085987a7 +0x3787:  mov    %eax,(%esp)
085987aa +0x378a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085987af +0x378f:  mov    0x8(%ebp),%eax
085987b2 +0x3792:  movl   $&_ZTV17IPacketDispatcherI15MSG_PURIFY_ITEM9ParamBaseL8ch_state0EE+0x8,(%eax)
085987b8 +0x3798:  leave
085987b9 +0x3799:  ret
085987ba +0x379a:  push   %ebp
085987bb +0x379b:  mov    %esp,%ebp
085987bd +0x379d:  sub    $0x18,%esp
085987c0 +0x37a0:  mov    0x8(%ebp),%eax
085987c3 +0x37a3:  mov    %eax,(%esp)
085987c6 +0x37a6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085987cb +0x37ab:  mov    0x8(%ebp),%eax
085987ce +0x37ae:  movl   $&_ZTV17IPacketDispatcherI25MSG_CREATE_DISJOINT_STORE26stCreateDisjointStoreParamL8ch_state3EE+0x8,(%eax)
085987d4 +0x37b4:  leave
085987d5 +0x37b5:  ret
085987d6 +0x37b6:  push   %ebp
085987d7 +0x37b7:  mov    %esp,%ebp
085987d9 +0x37b9:  sub    $0x18,%esp
085987dc +0x37bc:  mov    0x8(%ebp),%eax
085987df +0x37bf:  mov    %eax,(%esp)
085987e2 +0x37c2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085987e7 +0x37c7:  mov    0x8(%ebp),%eax
085987ea +0x37ca:  movl   $&_ZTV17IPacketDispatcherI25MSG_REQUEST_DISJOINT_ITEM26stRequestDisjointItemParamL8ch_state3EE+0x8,(%eax)
085987f0 +0x37d0:  leave
085987f1 +0x37d1:  ret
085987f2 +0x37d2:  push   %ebp
085987f3 +0x37d3:  mov    %esp,%ebp
085987f5 +0x37d5:  sub    $0x18,%esp
085987f8 +0x37d8:  mov    0x8(%ebp),%eax
085987fb +0x37db:  mov    %eax,(%esp)
085987fe +0x37de:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598803 +0x37e3:  mov    0x8(%ebp),%eax
08598806 +0x37e6:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE28stRepairDisjointMachineParamL8ch_state3EE+0x8,(%eax)
0859880c +0x37ec:  leave
0859880d +0x37ed:  ret
0859880e +0x37ee:  push   %ebp
0859880f +0x37ef:  mov    %esp,%ebp
08598811 +0x37f1:  sub    $0x18,%esp
08598814 +0x37f4:  mov    0x8(%ebp),%eax
08598817 +0x37f7:  mov    %eax,(%esp)
0859881a +0x37fa:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859881f +0x37ff:  mov    0x8(%ebp),%eax
08598822 +0x3802:  movl   $&_ZTV17IPacketDispatcherI12MSG_TELEPORT15stTeleportParamL8ch_state3EE+0x8,(%eax)
08598828 +0x3808:  leave
08598829 +0x3809:  ret
0859882a +0x380a:  push   %ebp
0859882b +0x380b:  mov    %esp,%ebp
0859882d +0x380d:  sub    $0x18,%esp
08598830 +0x3810:  mov    0x8(%ebp),%eax
08598833 +0x3813:  mov    %eax,(%esp)
08598836 +0x3816:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859883b +0x381b:  mov    0x8(%ebp),%eax
0859883e +0x381e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE29stUpgradeDisjointMachineParamL8ch_state3EE+0x8,(%eax)
08598844 +0x3824:  leave
08598845 +0x3825:  ret
08598846 +0x3826:  push   %ebp
08598847 +0x3827:  mov    %esp,%ebp
08598849 +0x3829:  sub    $0x18,%esp
0859884c +0x382c:  mov    0x8(%ebp),%eax
0859884f +0x382f:  mov    %eax,(%esp)
08598852 +0x3832:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598857 +0x3837:  mov    0x8(%ebp),%eax
0859885a +0x383a:  movl   $&_ZTV17IPacketDispatcherI24MSG_ENTER_DISJOINT_STORE25stEnterDisjointStoreParamL8ch_state3EE+0x8,(%eax)
08598860 +0x3840:  leave
08598861 +0x3841:  ret
08598862 +0x3842:  push   %ebp
08598863 +0x3843:  mov    %esp,%ebp
08598865 +0x3845:  sub    $0x18,%esp
08598868 +0x3848:  mov    0x8(%ebp),%eax
0859886b +0x384b:  mov    %eax,(%esp)
0859886e +0x384e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598873 +0x3853:  mov    0x8(%ebp),%eax
08598876 +0x3856:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE25stCloseDisjointStoreParamL8ch_state3EE+0x8,(%eax)
0859887c +0x385c:  leave
0859887d +0x385d:  ret
0859887e +0x385e:  push   %ebp
0859887f +0x385f:  mov    %esp,%ebp
08598881 +0x3861:  sub    $0x18,%esp
08598884 +0x3864:  mov    0x8(%ebp),%eax
08598887 +0x3867:  mov    %eax,(%esp)
0859888a +0x386a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859888f +0x386f:  mov    0x8(%ebp),%eax
08598892 +0x3872:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE17stGuildCargoParamL8ch_state0EE+0x8,(%eax)
08598898 +0x3878:  leave
08598899 +0x3879:  ret
0859889a +0x387a:  push   %ebp
0859889b +0x387b:  mov    %esp,%ebp
0859889d +0x387d:  sub    $0x18,%esp
085988a0 +0x3880:  mov    0x8(%ebp),%eax
085988a3 +0x3883:  mov    %eax,(%esp)
085988a6 +0x3886:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085988ab +0x388b:  mov    0x8(%ebp),%eax
085988ae +0x388e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE24stGuildCargoHistoryParamL8ch_state0EE+0x8,(%eax)
085988b4 +0x3894:  leave
085988b5 +0x3895:  ret
085988b6 +0x3896:  push   %ebp
085988b7 +0x3897:  mov    %esp,%ebp
085988b9 +0x3899:  sub    $0x18,%esp
085988bc +0x389c:  mov    0x8(%ebp),%eax
085988bf +0x389f:  mov    %eax,(%esp)
085988c2 +0x38a2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085988c7 +0x38a7:  mov    0x8(%ebp),%eax
085988ca +0x38aa:  movl   $&_ZTV17IPacketDispatcherI25MSG_GUILD_CARGO_PUSH_ITEM25stGuildCargoPushItemParamL8ch_state0EE+0x8,(%eax)
085988d0 +0x38b0:  leave
085988d1 +0x38b1:  ret
085988d2 +0x38b2:  push   %ebp
085988d3 +0x38b3:  mov    %esp,%ebp
085988d5 +0x38b5:  sub    $0x18,%esp
085988d8 +0x38b8:  mov    0x8(%ebp),%eax
085988db +0x38bb:  mov    %eax,(%esp)
085988de +0x38be:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085988e3 +0x38c3:  mov    0x8(%ebp),%eax
085988e6 +0x38c6:  movl   $&_ZTV17IPacketDispatcherI24MSG_GUILD_CARGO_POP_ITEM24stGuildCargoPopItemParamL8ch_state0EE+0x8,(%eax)
085988ec +0x38cc:  leave
085988ed +0x38cd:  ret
085988ee +0x38ce:  push   %ebp
085988ef +0x38cf:  mov    %esp,%ebp
085988f1 +0x38d1:  sub    $0x18,%esp
085988f4 +0x38d4:  mov    0x8(%ebp),%eax
085988f7 +0x38d7:  mov    %eax,(%esp)
085988fa +0x38da:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085988ff +0x38df:  mov    0x8(%ebp),%eax
08598902 +0x38e2:  movl   $&_ZTV17IPacketDispatcherI25MSG_GUILD_CARGO_MOVE_ITEM25stGuildCargoMoveItemParamL8ch_state0EE+0x8,(%eax)
08598908 +0x38e8:  leave
08598909 +0x38e9:  ret
0859890a +0x38ea:  push   %ebp
0859890b +0x38eb:  mov    %esp,%ebp
0859890d +0x38ed:  sub    $0x18,%esp
08598910 +0x38f0:  mov    0x8(%ebp),%eax
08598913 +0x38f3:  mov    %eax,(%esp)
08598916 +0x38f6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859891b +0x38fb:  mov    0x8(%ebp),%eax
0859891e +0x38fe:  movl   $&_ZTV17IPacketDispatcherI18MSG_CHANGE_EMOTION20stChangeEmotionParamL8ch_state3EE+0x8,(%eax)
08598924 +0x3904:  leave
08598925 +0x3905:  ret
08598926 +0x3906:  push   %ebp
08598927 +0x3907:  mov    %esp,%ebp
08598929 +0x3909:  sub    $0x18,%esp
0859892c +0x390c:  mov    0x8(%ebp),%eax
0859892f +0x390f:  mov    %eax,(%esp)
08598932 +0x3912:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598937 +0x3917:  mov    0x8(%ebp),%eax
0859893a +0x391a:  movl   $&_ZTV17IPacketDispatcherI29MSG_CHANGE_ANOTHER_SKILL_TREE24stChangeAnotherSkillTreeL8ch_state0EE+0x8,(%eax)
08598940 +0x3920:  leave
08598941 +0x3921:  ret
08598942 +0x3922:  push   %ebp
08598943 +0x3923:  mov    %esp,%ebp
08598945 +0x3925:  sub    $0x18,%esp
08598948 +0x3928:  mov    0x8(%ebp),%eax
0859894b +0x392b:  mov    %eax,(%esp)
0859894e +0x392e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598953 +0x3933:  mov    0x8(%ebp),%eax
08598956 +0x3936:  movl   $&_ZTV17IPacketDispatcherI19MSG_ENCHANT_BY_BEAD20stEnchantByBeadParamL8ch_state3EE+0x8,(%eax)
0859895c +0x393c:  leave
0859895d +0x393d:  ret
0859895e +0x393e:  push   %ebp
0859895f +0x393f:  mov    %esp,%ebp
08598961 +0x3941:  sub    $0x18,%esp
08598964 +0x3944:  mov    0x8(%ebp),%eax
08598967 +0x3947:  mov    %eax,(%esp)
0859896a +0x394a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859896f +0x394f:  mov    0x8(%ebp),%eax
08598972 +0x3952:  movl   $&_ZTV17IPacketDispatcherI24MSG_SECRET_SHOP_BUY_ITEM24stSecretShopBuyItemParamL8ch_state0EE+0x8,(%eax)
08598978 +0x3958:  leave
08598979 +0x3959:  ret
0859897a +0x395a:  push   %ebp
0859897b +0x395b:  mov    %esp,%ebp
0859897d +0x395d:  sub    $0x18,%esp
08598980 +0x3960:  mov    0x8(%ebp),%eax
08598983 +0x3963:  mov    %eax,(%esp)
08598986 +0x3966:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859898b +0x396b:  mov    0x8(%ebp),%eax
0859898e +0x396e:  movl   $&_ZTV17IPacketDispatcherI26MSG_SECRET_SHOP_OPEN_CLOSE26stSecretShopOpenCloseParamL8ch_state0EE+0x8,(%eax)
08598994 +0x3974:  leave
08598995 +0x3975:  ret
08598996 +0x3976:  push   %ebp
08598997 +0x3977:  mov    %esp,%ebp
08598999 +0x3979:  sub    $0x18,%esp
0859899c +0x397c:  mov    0x8(%ebp),%eax
0859899f +0x397f:  mov    %eax,(%esp)
085989a2 +0x3982:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085989a7 +0x3987:  mov    0x8(%ebp),%eax
085989aa +0x398a:  movl   $&_ZTV17IPacketDispatcherI17MSG_SKILL_COMMAND19stSkillCommandParamL8ch_state3EE+0x8,(%eax)
085989b0 +0x3990:  leave
085989b1 +0x3991:  ret
085989b2 +0x3992:  push   %ebp
085989b3 +0x3993:  mov    %esp,%ebp
085989b5 +0x3995:  sub    $0x18,%esp
085989b8 +0x3998:  mov    0x8(%ebp),%eax
085989bb +0x399b:  mov    %eax,(%esp)
085989be +0x399e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085989c3 +0x39a3:  mov    0x8(%ebp),%eax
085989c6 +0x39a6:  movl   $&_ZTV17IPacketDispatcherI15MSG_GUILD_BOARD17stGuildBoardParamL8ch_state3EE+0x8,(%eax)
085989cc +0x39ac:  leave
085989cd +0x39ad:  ret
085989ce +0x39ae:  push   %ebp
085989cf +0x39af:  mov    %esp,%ebp
085989d1 +0x39b1:  sub    $0x18,%esp
085989d4 +0x39b4:  mov    0x8(%ebp),%eax
085989d7 +0x39b7:  mov    %eax,(%esp)
085989da +0x39ba:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085989df +0x39bf:  mov    0x8(%ebp),%eax
085989e2 +0x39c2:  movl   $&_ZTV17IPacketDispatcherI14MSG_BREAK_AWAY16stBreakAwayParamL8ch_state3EE+0x8,(%eax)
085989e8 +0x39c8:  leave
085989e9 +0x39c9:  ret
085989ea +0x39ca:  push   %ebp
085989eb +0x39cb:  mov    %esp,%ebp
085989ed +0x39cd:  sub    $0x18,%esp
085989f0 +0x39d0:  mov    0x8(%ebp),%eax
085989f3 +0x39d3:  mov    %eax,(%esp)
085989f6 +0x39d6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085989fb +0x39db:  mov    0x8(%ebp),%eax
085989fe +0x39de:  movl   $&_ZTV17IPacketDispatcherI15MSG_SCRIPT_HASH15ScriptHashParamL8ch_state0EE+0x8,(%eax)
08598a04 +0x39e4:  leave
08598a05 +0x39e5:  ret
08598a06 +0x39e6:  push   %ebp
08598a07 +0x39e7:  mov    %esp,%ebp
08598a09 +0x39e9:  sub    $0x18,%esp
08598a0c +0x39ec:  mov    0x8(%ebp),%eax
08598a0f +0x39ef:  mov    %eax,(%esp)
08598a12 +0x39f2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598a17 +0x39f7:  mov    0x8(%ebp),%eax
08598a1a +0x39fa:  movl   $&_ZTV17IPacketDispatcherI12MSG_SCAN_DLL17ScanBotByDllParamL8ch_state0EE+0x8,(%eax)
08598a20 +0x3a00:  leave
08598a21 +0x3a01:  ret
08598a22 +0x3a02:  push   %ebp
08598a23 +0x3a03:  mov    %esp,%ebp
08598a25 +0x3a05:  sub    $0x18,%esp
08598a28 +0x3a08:  mov    0x8(%ebp),%eax
08598a2b +0x3a0b:  mov    %eax,(%esp)
08598a2e +0x3a0e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598a33 +0x3a13:  mov    0x8(%ebp),%eax
08598a36 +0x3a16:  movl   $&_ZTV17IPacketDispatcherI18MSG_USE_LIMIT_CUBE14stUseLimitCubeL8ch_state3EE+0x8,(%eax)
08598a3c +0x3a1c:  leave
08598a3d +0x3a1d:  ret
08598a3e +0x3a1e:  push   %ebp
08598a3f +0x3a1f:  mov    %esp,%ebp
08598a41 +0x3a21:  sub    $0x18,%esp
08598a44 +0x3a24:  mov    0x8(%ebp),%eax
08598a47 +0x3a27:  mov    %eax,(%esp)
08598a4a +0x3a2a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598a4f +0x3a2f:  mov    0x8(%ebp),%eax
08598a52 +0x3a32:  movl   $&_ZTV17IPacketDispatcherI21MSG_DONATE_GUILD_FUND9ParamBaseL8ch_state3EE+0x8,(%eax)
08598a58 +0x3a38:  leave
08598a59 +0x3a39:  ret
08598a5a +0x3a3a:  push   %ebp
08598a5b +0x3a3b:  mov    %esp,%ebp
08598a5d +0x3a3d:  sub    $0x18,%esp
08598a60 +0x3a40:  mov    0x8(%ebp),%eax
08598a63 +0x3a43:  mov    %eax,(%esp)
08598a66 +0x3a46:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598a6b +0x3a4b:  mov    0x8(%ebp),%eax
08598a6e +0x3a4e:  movl   $&_ZTV17IPacketDispatcherI20MSG_CHECK_GUILD_JOIN9ParamBaseL8ch_state0EE+0x8,(%eax)
08598a74 +0x3a54:  leave
08598a75 +0x3a55:  ret
08598a76 +0x3a56:  push   %ebp
08598a77 +0x3a57:  mov    %esp,%ebp
08598a79 +0x3a59:  sub    $0x18,%esp
08598a7c +0x3a5c:  mov    0x8(%ebp),%eax
08598a7f +0x3a5f:  mov    %eax,(%esp)
08598a82 +0x3a62:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598a87 +0x3a67:  mov    0x8(%ebp),%eax
08598a8a +0x3a6a:  movl   $&_ZTV17IPacketDispatcherI22MSG_REQUEST_GUILD_JOIN9ParamBaseL8ch_state0EE+0x8,(%eax)
08598a90 +0x3a70:  leave
08598a91 +0x3a71:  ret
08598a92 +0x3a72:  push   %ebp
08598a93 +0x3a73:  mov    %esp,%ebp
08598a95 +0x3a75:  sub    $0x18,%esp
08598a98 +0x3a78:  mov    0x8(%ebp),%eax
08598a9b +0x3a7b:  mov    %eax,(%esp)
08598a9e +0x3a7e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598aa3 +0x3a83:  mov    0x8(%ebp),%eax
08598aa6 +0x3a86:  movl   $&_ZTV17IPacketDispatcherI21MSG_CANCEL_JOIN_GUILD9ParamBaseL8ch_state0EE+0x8,(%eax)
08598aac +0x3a8c:  leave
08598aad +0x3a8d:  ret
08598aae +0x3a8e:  push   %ebp
08598aaf +0x3a8f:  mov    %esp,%ebp
08598ab1 +0x3a91:  sub    $0x18,%esp
08598ab4 +0x3a94:  mov    0x8(%ebp),%eax
08598ab7 +0x3a97:  mov    %eax,(%esp)
08598aba +0x3a9a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598abf +0x3a9f:  mov    0x8(%ebp),%eax
08598ac2 +0x3aa2:  movl   $&_ZTV17IPacketDispatcherI22MSG_APPROVE_JOIN_GUILD9ParamBaseL8ch_state0EE+0x8,(%eax)
08598ac8 +0x3aa8:  leave
08598ac9 +0x3aa9:  ret
08598aca +0x3aaa:  push   %ebp
08598acb +0x3aab:  mov    %esp,%ebp
08598acd +0x3aad:  sub    $0x18,%esp
08598ad0 +0x3ab0:  mov    0x8(%ebp),%eax
08598ad3 +0x3ab3:  mov    %eax,(%esp)
08598ad6 +0x3ab6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598adb +0x3abb:  mov    0x8(%ebp),%eax
08598ade +0x3abe:  movl   $&_ZTV17IPacketDispatcherI19MSG_DENY_JOIN_GUILD9ParamBaseL8ch_state0EE+0x8,(%eax)
08598ae4 +0x3ac4:  leave
08598ae5 +0x3ac5:  ret
08598ae6 +0x3ac6:  push   %ebp
08598ae7 +0x3ac7:  mov    %esp,%ebp
08598ae9 +0x3ac9:  sub    $0x18,%esp
08598aec +0x3acc:  mov    0x8(%ebp),%eax
08598aef +0x3acf:  mov    %eax,(%esp)
08598af2 +0x3ad2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598af7 +0x3ad7:  mov    0x8(%ebp),%eax
08598afa +0x3ada:  movl   $&_ZTV17IPacketDispatcherI20MSG_GUILD_ATTENDANCE9ParamBaseL8ch_state0EE+0x8,(%eax)
08598b00 +0x3ae0:  leave
08598b01 +0x3ae1:  ret
08598b02 +0x3ae2:  push   %ebp
08598b03 +0x3ae3:  mov    %esp,%ebp
08598b05 +0x3ae5:  sub    $0x18,%esp
08598b08 +0x3ae8:  mov    0x8(%ebp),%eax
08598b0b +0x3aeb:  mov    %eax,(%esp)
08598b0e +0x3aee:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598b13 +0x3af3:  mov    0x8(%ebp),%eax
08598b16 +0x3af6:  movl   $&_ZTV17IPacketDispatcherI15MSG_MOTION_HACK9ParamBaseL8ch_state0EE+0x8,(%eax)
08598b1c +0x3afc:  leave
08598b1d +0x3afd:  ret
08598b1e +0x3afe:  push   %ebp
08598b1f +0x3aff:  mov    %esp,%ebp
08598b21 +0x3b01:  sub    $0x18,%esp
08598b24 +0x3b04:  mov    0x8(%ebp),%eax
08598b27 +0x3b07:  mov    %eax,(%esp)
08598b2a +0x3b0a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598b2f +0x3b0f:  mov    0x8(%ebp),%eax
08598b32 +0x3b12:  movl   $&_ZTV17IPacketDispatcherI12MSG_SCAN_DRV17ScanBotByDrvParamL8ch_state0EE+0x8,(%eax)
08598b38 +0x3b18:  leave
08598b39 +0x3b19:  ret
08598b3a +0x3b1a:  push   %ebp
08598b3b +0x3b1b:  mov    %esp,%ebp
08598b3d +0x3b1d:  sub    $0x18,%esp
08598b40 +0x3b20:  mov    0x8(%ebp),%eax
08598b43 +0x3b23:  mov    %eax,(%esp)
08598b46 +0x3b26:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598b4b +0x3b2b:  mov    0x8(%ebp),%eax
08598b4e +0x3b2e:  movl   $&_ZTV17IPacketDispatcherI14MSG_QUICK_CHAT16stQuickChatParamL8ch_state2EE+0x8,(%eax)
08598b54 +0x3b34:  leave
08598b55 +0x3b35:  ret
08598b56 +0x3b36:  push   %ebp
08598b57 +0x3b37:  mov    %esp,%ebp
08598b59 +0x3b39:  sub    $0x18,%esp
08598b5c +0x3b3c:  mov    0x8(%ebp),%eax
08598b5f +0x3b3f:  mov    %eax,(%esp)
08598b62 +0x3b42:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598b67 +0x3b47:  mov    0x8(%ebp),%eax
08598b6a +0x3b4a:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE14stEnchantParamL8ch_state0EE+0x8,(%eax)
08598b70 +0x3b50:  leave
08598b71 +0x3b51:  ret
08598b72 +0x3b52:  push   %ebp
08598b73 +0x3b53:  mov    %esp,%ebp
08598b75 +0x3b55:  sub    $0x18,%esp
08598b78 +0x3b58:  mov    0x8(%ebp),%eax
08598b7b +0x3b5b:  mov    %eax,(%esp)
08598b7e +0x3b5e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598b83 +0x3b63:  mov    0x8(%ebp),%eax
08598b86 +0x3b66:  movl   $&_ZTV17IPacketDispatcherI11MSG_ENCHANT14stEnchantParamL8ch_state0EE+0x8,(%eax)
08598b8c +0x3b6c:  leave
08598b8d +0x3b6d:  ret
08598b8e +0x3b6e:  push   %ebp
08598b8f +0x3b6f:  mov    %esp,%ebp
08598b91 +0x3b71:  sub    $0x18,%esp
08598b94 +0x3b74:  mov    0x8(%ebp),%eax
08598b97 +0x3b77:  mov    %eax,(%esp)
08598b9a +0x3b7a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598b9f +0x3b7f:  mov    0x8(%ebp),%eax
08598ba2 +0x3b82:  movl   $&_ZTV17IPacketDispatcherI31MSG_GOLD_TAKE_INCREASING_AMOUNT26stGoldTakeIncreasingAmountL8ch_state0EE+0x8,(%eax)
08598ba8 +0x3b88:  leave
08598ba9 +0x3b89:  ret
08598baa +0x3b8a:  push   %ebp
08598bab +0x3b8b:  mov    %esp,%ebp
08598bad +0x3b8d:  sub    $0x18,%esp
08598bb0 +0x3b90:  mov    0x8(%ebp),%eax
08598bb3 +0x3b93:  mov    %eax,(%esp)
08598bb6 +0x3b96:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598bbb +0x3b9b:  mov    0x8(%ebp),%eax
08598bbe +0x3b9e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE23CheckSecurityProtectionL8ch_state0EE+0x8,(%eax)
08598bc4 +0x3ba4:  leave
08598bc5 +0x3ba5:  ret
08598bc6 +0x3ba6:  push   %ebp
08598bc7 +0x3ba7:  mov    %esp,%ebp
08598bc9 +0x3ba9:  sub    $0x18,%esp
08598bcc +0x3bac:  mov    0x8(%ebp),%eax
08598bcf +0x3baf:  mov    %eax,(%esp)
08598bd2 +0x3bb2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598bd7 +0x3bb7:  mov    0x8(%ebp),%eax
08598bda +0x3bba:  movl   $&_ZTV17IPacketDispatcherI26MSG_PVP_MISSION_HP_PERCENT20stSendClearedMissionL8ch_state3EE+0x8,(%eax)
08598be0 +0x3bc0:  leave
08598be1 +0x3bc1:  ret
08598be2 +0x3bc2:  push   %ebp
08598be3 +0x3bc3:  mov    %esp,%ebp
08598be5 +0x3bc5:  sub    $0x18,%esp
08598be8 +0x3bc8:  mov    0x8(%ebp),%eax
08598beb +0x3bcb:  mov    %eax,(%esp)
08598bee +0x3bce:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598bf3 +0x3bd3:  mov    0x8(%ebp),%eax
08598bf6 +0x3bd6:  movl   $&_ZTV17IPacketDispatcherI27MSG_PVP_MISSION_COMBO_CLEAR9ParamBaseL8ch_state3EE+0x8,(%eax)
08598bfc +0x3bdc:  leave
08598bfd +0x3bdd:  ret
08598bfe +0x3bde:  push   %ebp
08598bff +0x3bdf:  mov    %esp,%ebp
08598c01 +0x3be1:  sub    $0x18,%esp
08598c04 +0x3be4:  mov    0x8(%ebp),%eax
08598c07 +0x3be7:  mov    %eax,(%esp)
08598c0a +0x3bea:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598c0f +0x3bef:  mov    0x8(%ebp),%eax
08598c12 +0x3bf2:  movl   $&_ZTV17IPacketDispatcherI26MSG_WARROOM_WP_PER_MONSTER11stWarRoomWpL8ch_state0EE+0x8,(%eax)
08598c18 +0x3bf8:  leave
08598c19 +0x3bf9:  ret
08598c1a +0x3bfa:  push   %ebp
08598c1b +0x3bfb:  mov    %esp,%ebp
08598c1d +0x3bfd:  sub    $0x18,%esp
08598c20 +0x3c00:  mov    0x8(%ebp),%eax
08598c23 +0x3c03:  mov    %eax,(%esp)
08598c26 +0x3c06:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598c2b +0x3c0b:  mov    0x8(%ebp),%eax
08598c2e +0x3c0e:  movl   $&_ZTV17IPacketDispatcherI20MSG_EQUIPSLOT_SWITCH17stEquipslotSwitchL8ch_state3EE+0x8,(%eax)
08598c34 +0x3c14:  leave
08598c35 +0x3c15:  ret
08598c36 +0x3c16:  push   %ebp
08598c37 +0x3c17:  mov    %esp,%ebp
08598c39 +0x3c19:  sub    $0x18,%esp
08598c3c +0x3c1c:  mov    0x8(%ebp),%eax
08598c3f +0x3c1f:  mov    %eax,(%esp)
08598c42 +0x3c22:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598c47 +0x3c27:  mov    0x8(%ebp),%eax
08598c4a +0x3c2a:  movl   $&_ZTV17IPacketDispatcherI32MSG_EXPAND_EQUIPSLOT_FLAG_UPDATE27stExpandEquipslotFlagUpdateL8ch_state3EE+0x8,(%eax)
08598c50 +0x3c30:  leave
08598c51 +0x3c31:  ret
08598c52 +0x3c32:  push   %ebp
08598c53 +0x3c33:  mov    %esp,%ebp
08598c55 +0x3c35:  sub    $0x18,%esp
08598c58 +0x3c38:  mov    0x8(%ebp),%eax
08598c5b +0x3c3b:  mov    %eax,(%esp)
08598c5e +0x3c3e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598c63 +0x3c43:  mov    0x8(%ebp),%eax
08598c66 +0x3c46:  movl   $&_ZTV17IPacketDispatcherI14MSG_QUEST_SHOP19STQuestShopBuyParamL8ch_state0EE+0x8,(%eax)
08598c6c +0x3c4c:  leave
08598c6d +0x3c4d:  ret
08598c6e +0x3c4e:  push   %ebp
08598c6f +0x3c4f:  mov    %esp,%ebp
08598c71 +0x3c51:  sub    $0x18,%esp
08598c74 +0x3c54:  mov    0x8(%ebp),%eax
08598c77 +0x3c57:  mov    %eax,(%esp)
08598c7a +0x3c5a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598c7f +0x3c5f:  mov    0x8(%ebp),%eax
08598c82 +0x3c62:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE16STQuestShopParamL8ch_state0EE+0x8,(%eax)
08598c88 +0x3c68:  leave
08598c89 +0x3c69:  ret
08598c8a +0x3c6a:  push   %ebp
08598c8b +0x3c6b:  mov    %esp,%ebp
08598c8d +0x3c6d:  sub    $0x18,%esp
08598c90 +0x3c70:  mov    0x8(%ebp),%eax
08598c93 +0x3c73:  mov    %eax,(%esp)
08598c96 +0x3c76:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598c9b +0x3c7b:  mov    0x8(%ebp),%eax
08598c9e +0x3c7e:  movl   $&_ZTV17IPacketDispatcherI23MSG_CHANGE_HOST_WARROOM19stChangeHostWarRoomL8ch_state0EE+0x8,(%eax)
08598ca4 +0x3c84:  leave
08598ca5 +0x3c85:  ret
08598ca6 +0x3c86:  push   %ebp
08598ca7 +0x3c87:  mov    %esp,%ebp
08598ca9 +0x3c89:  sub    $0x18,%esp
08598cac +0x3c8c:  mov    0x8(%ebp),%eax
08598caf +0x3c8f:  mov    %eax,(%esp)
08598cb2 +0x3c92:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598cb7 +0x3c97:  mov    0x8(%ebp),%eax
08598cba +0x3c9a:  movl   $&_ZTV17IPacketDispatcherI30MSG_REGENERATION_RANDOM_OPTION16stRegenROIResultL8ch_state0EE+0x8,(%eax)
08598cc0 +0x3ca0:  leave
08598cc1 +0x3ca1:  ret
08598cc2 +0x3ca2:  push   %ebp
08598cc3 +0x3ca3:  mov    %esp,%ebp
08598cc5 +0x3ca5:  sub    $0x18,%esp
08598cc8 +0x3ca8:  mov    0x8(%ebp),%eax
08598ccb +0x3cab:  mov    %eax,(%esp)
08598cce +0x3cae:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598cd3 +0x3cb3:  mov    0x8(%ebp),%eax
08598cd6 +0x3cb6:  movl   $&_ZTV17IPacketDispatcherI17MSG_TITLEBOOK_PUT9ParamBaseL8ch_state3EE+0x8,(%eax)
08598cdc +0x3cbc:  leave
08598cdd +0x3cbd:  ret
08598cde +0x3cbe:  push   %ebp
08598cdf +0x3cbf:  mov    %esp,%ebp
08598ce1 +0x3cc1:  sub    $0x18,%esp
08598ce4 +0x3cc4:  mov    0x8(%ebp),%eax
08598ce7 +0x3cc7:  mov    %eax,(%esp)
08598cea +0x3cca:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598cef +0x3ccf:  mov    0x8(%ebp),%eax
08598cf2 +0x3cd2:  movl   $&_ZTV17IPacketDispatcherI17MSG_TITLEBOOK_GET9ParamBaseL8ch_state3EE+0x8,(%eax)
08598cf8 +0x3cd8:  leave
08598cf9 +0x3cd9:  ret
08598cfa +0x3cda:  push   %ebp
08598cfb +0x3cdb:  mov    %esp,%ebp
08598cfd +0x3cdd:  sub    $0x18,%esp
08598d00 +0x3ce0:  mov    0x8(%ebp),%eax
08598d03 +0x3ce3:  mov    %eax,(%esp)
08598d06 +0x3ce6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598d0b +0x3ceb:  mov    0x8(%ebp),%eax
08598d0e +0x3cee:  movl   $&_ZTV17IPacketDispatcherI23MSG_TITLEBOOK_OTHERUSER9ParamBaseL8ch_state3EE+0x8,(%eax)
08598d14 +0x3cf4:  leave
08598d15 +0x3cf5:  ret
08598d16 +0x3cf6:  push   %ebp
08598d17 +0x3cf7:  mov    %esp,%ebp
08598d19 +0x3cf9:  sub    $0x18,%esp
08598d1c +0x3cfc:  mov    0x8(%ebp),%eax
08598d1f +0x3cff:  mov    %eax,(%esp)
08598d22 +0x3d02:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598d27 +0x3d07:  mov    0x8(%ebp),%eax
08598d2a +0x3d0a:  movl   $&_ZTV17IPacketDispatcherI23MSG_ACHIEVEMENT_TRIGGER9ParamBaseL8ch_state3EE+0x8,(%eax)
08598d30 +0x3d10:  leave
08598d31 +0x3d11:  ret
08598d32 +0x3d12:  push   %ebp
08598d33 +0x3d13:  mov    %esp,%ebp
08598d35 +0x3d15:  sub    $0x18,%esp
08598d38 +0x3d18:  mov    0x8(%ebp),%eax
08598d3b +0x3d1b:  mov    %eax,(%esp)
08598d3e +0x3d1e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598d43 +0x3d23:  mov    0x8(%ebp),%eax
08598d46 +0x3d26:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE24stCharacSlotExtendEffectL8ch_state0EE+0x8,(%eax)
08598d4c +0x3d2c:  leave
08598d4d +0x3d2d:  ret
08598d4e +0x3d2e:  push   %ebp
08598d4f +0x3d2f:  mov    %esp,%ebp
08598d51 +0x3d31:  sub    $0x18,%esp
08598d54 +0x3d34:  mov    0x8(%ebp),%eax
08598d57 +0x3d37:  mov    %eax,(%esp)
08598d5a +0x3d3a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598d5f +0x3d3f:  mov    0x8(%ebp),%eax
08598d62 +0x3d42:  movl   $&_ZTV17IPacketDispatcherI27MSG_ITEM_HYPER_LINK_MESSAGE22stItemHyperLinkMessageL8ch_state3EE+0x8,(%eax)
08598d68 +0x3d48:  leave
08598d69 +0x3d49:  ret
08598d6a +0x3d4a:  push   %ebp
08598d6b +0x3d4b:  mov    %esp,%ebp
08598d6d +0x3d4d:  sub    $0x18,%esp
08598d70 +0x3d50:  mov    0x8(%ebp),%eax
08598d73 +0x3d53:  mov    %eax,(%esp)
08598d76 +0x3d56:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598d7b +0x3d5b:  mov    0x8(%ebp),%eax
08598d7e +0x3d5e:  movl   $&_ZTV17IPacketDispatcherI20MSG_USER_HISTORY_LOG9ParamBaseL8ch_state0EE+0x8,(%eax)
08598d84 +0x3d64:  leave
08598d85 +0x3d65:  ret
08598d86 +0x3d66:  push   %ebp
08598d87 +0x3d67:  mov    %esp,%ebp
08598d89 +0x3d69:  sub    $0x18,%esp
08598d8c +0x3d6c:  mov    0x8(%ebp),%eax
08598d8f +0x3d6f:  mov    %eax,(%esp)
08598d92 +0x3d72:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598d97 +0x3d77:  mov    0x8(%ebp),%eax
08598d9a +0x3d7a:  movl   $&_ZTV17IPacketDispatcherI16MSG_GROWTH_POWER18stGrowthPowerParamL8ch_state3EE+0x8,(%eax)
08598da0 +0x3d80:  leave
08598da1 +0x3d81:  ret
08598da2 +0x3d82:  push   %ebp
08598da3 +0x3d83:  mov    %esp,%ebp
08598da5 +0x3d85:  sub    $0x18,%esp
08598da8 +0x3d88:  mov    0x8(%ebp),%eax
08598dab +0x3d8b:  mov    %eax,(%esp)
08598dae +0x3d8e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598db3 +0x3d93:  mov    0x8(%ebp),%eax
08598db6 +0x3d96:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE18stGrowthPowerParamL8ch_state0EE+0x8,(%eax)
08598dbc +0x3d9c:  leave
08598dbd +0x3d9d:  ret
08598dbe +0x3d9e:  push   %ebp
08598dbf +0x3d9f:  mov    %esp,%ebp
08598dc1 +0x3da1:  sub    $0x18,%esp
08598dc4 +0x3da4:  mov    0x8(%ebp),%eax
08598dc7 +0x3da7:  mov    %eax,(%esp)
08598dca +0x3daa:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598dcf +0x3daf:  mov    0x8(%ebp),%eax
08598dd2 +0x3db2:  movl   $&_ZTV17IPacketDispatcherI26MSG_ABNORMAL_USE_STACKABLE20AbnormalUseStackableL8ch_state0EE+0x8,(%eax)
08598dd8 +0x3db8:  leave
08598dd9 +0x3db9:  ret
08598dda +0x3dba:  push   %ebp
08598ddb +0x3dbb:  mov    %esp,%ebp
08598ddd +0x3dbd:  sub    $0x18,%esp
08598de0 +0x3dc0:  mov    0x8(%ebp),%eax
08598de3 +0x3dc3:  mov    %eax,(%esp)
08598de6 +0x3dc6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598deb +0x3dcb:  mov    0x8(%ebp),%eax
08598dee +0x3dce:  movl   $&_ZTV17IPacketDispatcherI24MSG_CHANGE_RANDOM_OPTION9ParamBaseL8ch_state0EE+0x8,(%eax)
08598df4 +0x3dd4:  leave
08598df5 +0x3dd5:  ret
08598df6 +0x3dd6:  push   %ebp
08598df7 +0x3dd7:  mov    %esp,%ebp
08598df9 +0x3dd9:  sub    $0x18,%esp
08598dfc +0x3ddc:  mov    0x8(%ebp),%eax
08598dff +0x3ddf:  mov    %eax,(%esp)
08598e02 +0x3de2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598e07 +0x3de7:  mov    0x8(%ebp),%eax
08598e0a +0x3dea:  movl   $&_ZTV17IPacketDispatcherI23MSG_RESET_RANDOM_OPTION9ParamBaseL8ch_state0EE+0x8,(%eax)
08598e10 +0x3df0:  leave
08598e11 +0x3df1:  ret
08598e12 +0x3df2:  push   %ebp
08598e13 +0x3df3:  mov    %esp,%ebp
08598e15 +0x3df5:  sub    $0x18,%esp
08598e18 +0x3df8:  mov    0x8(%ebp),%eax
08598e1b +0x3dfb:  mov    %eax,(%esp)
08598e1e +0x3dfe:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598e23 +0x3e03:  mov    0x8(%ebp),%eax
08598e26 +0x3e06:  movl   $&_ZTV17IPacketDispatcherI19MSG_ITEM_DICTIONARY16stItemDictionaryL8ch_state3EE+0x8,(%eax)
08598e2c +0x3e0c:  leave
08598e2d +0x3e0d:  ret
08598e2e +0x3e0e:  push   %ebp
08598e2f +0x3e0f:  mov    %esp,%ebp
08598e31 +0x3e11:  sub    $0x18,%esp
08598e34 +0x3e14:  mov    0x8(%ebp),%eax
08598e37 +0x3e17:  mov    %eax,(%esp)
08598e3a +0x3e1a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598e3f +0x3e1f:  mov    0x8(%ebp),%eax
08598e42 +0x3e22:  movl   $&_ZTV17IPacketDispatcherI18MsgMercenaryReturn25SendMercenaryReturnResultL8ch_state0EE+0x8,(%eax)
08598e48 +0x3e28:  leave
08598e49 +0x3e29:  ret
08598e4a +0x3e2a:  push   %ebp
08598e4b +0x3e2b:  mov    %esp,%ebp
08598e4d +0x3e2d:  sub    $0x18,%esp
08598e50 +0x3e30:  mov    0x8(%ebp),%eax
08598e53 +0x3e33:  mov    %eax,(%esp)
08598e56 +0x3e36:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598e5b +0x3e3b:  mov    0x8(%ebp),%eax
08598e5e +0x3e3e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE9ParamBaseL8ch_state2EE+0x8,(%eax)
08598e64 +0x3e44:  leave
08598e65 +0x3e45:  ret
08598e66 +0x3e46:  push   %ebp
08598e67 +0x3e47:  mov    %esp,%ebp
08598e69 +0x3e49:  sub    $0x18,%esp
08598e6c +0x3e4c:  mov    0x8(%ebp),%eax
08598e6f +0x3e4f:  mov    %eax,(%esp)
08598e72 +0x3e52:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598e77 +0x3e57:  mov    0x8(%ebp),%eax
08598e7a +0x3e5a:  movl   $&_ZTV17IPacketDispatcherI23MsgMercenaryCompetition30SendMercenaryCompetitionResultL8ch_state0EE+0x8,(%eax)
08598e80 +0x3e60:  leave
08598e81 +0x3e61:  ret
08598e82 +0x3e62:  push   %ebp
08598e83 +0x3e63:  mov    %esp,%ebp
08598e85 +0x3e65:  sub    $0x18,%esp
08598e88 +0x3e68:  mov    0x8(%ebp),%eax
08598e8b +0x3e6b:  mov    %eax,(%esp)
08598e8e +0x3e6e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598e93 +0x3e73:  mov    0x8(%ebp),%eax
08598e96 +0x3e76:  movl   $&_ZTV17IPacketDispatcherI15MSG_QUICK_PARTY17stQuickPartyParamL8ch_state5EE+0x8,(%eax)
08598e9c +0x3e7c:  leave
08598e9d +0x3e7d:  ret
08598e9e +0x3e7e:  push   %ebp
08598e9f +0x3e7f:  mov    %esp,%ebp
08598ea1 +0x3e81:  sub    $0x18,%esp
08598ea4 +0x3e84:  mov    0x8(%ebp),%eax
08598ea7 +0x3e87:  mov    %eax,(%esp)
08598eaa +0x3e8a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598eaf +0x3e8f:  mov    0x8(%ebp),%eax
08598eb2 +0x3e92:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE17stQuickPartyParamL8ch_state5EE+0x8,(%eax)
08598eb8 +0x3e98:  leave
08598eb9 +0x3e99:  ret
08598eba +0x3e9a:  push   %ebp
08598ebb +0x3e9b:  mov    %esp,%ebp
08598ebd +0x3e9d:  sub    $0x18,%esp
08598ec0 +0x3ea0:  mov    0x8(%ebp),%eax
08598ec3 +0x3ea3:  mov    %eax,(%esp)
08598ec6 +0x3ea6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598ecb +0x3eab:  mov    0x8(%ebp),%eax
08598ece +0x3eae:  movl   $&_ZTV17IPacketDispatcherI31MSG_EXCHANGE_RANDOM_ITEM_REWARD26stExchangeRandomItemRewardL8ch_state0EE+0x8,(%eax)
08598ed4 +0x3eb4:  leave
08598ed5 +0x3eb5:  ret
08598ed6 +0x3eb6:  push   %ebp
08598ed7 +0x3eb7:  mov    %esp,%ebp
08598ed9 +0x3eb9:  sub    $0x18,%esp
08598edc +0x3ebc:  mov    0x8(%ebp),%eax
08598edf +0x3ebf:  mov    %eax,(%esp)
08598ee2 +0x3ec2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598ee7 +0x3ec7:  mov    0x8(%ebp),%eax
08598eea +0x3eca:  movl   $&_ZTV17IPacketDispatcherI33MSG_AVATAR_DISJOINT_RANDOM_REWARD28stAvatarDisjointRandomRewardL8ch_state0EE+0x8,(%eax)
08598ef0 +0x3ed0:  leave
08598ef1 +0x3ed1:  ret
08598ef2 +0x3ed2:  push   %ebp
08598ef3 +0x3ed3:  mov    %esp,%ebp
08598ef5 +0x3ed5:  sub    $0x18,%esp
08598ef8 +0x3ed8:  mov    0x8(%ebp),%eax
08598efb +0x3edb:  mov    %eax,(%esp)
08598efe +0x3ede:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598f03 +0x3ee3:  mov    0x8(%ebp),%eax
08598f06 +0x3ee6:  movl   $&_ZTV17IPacketDispatcherI22MsgRequestAssaultPrice21stRequestAssaultPriceL8ch_state3EE+0x8,(%eax)
08598f0c +0x3eec:  leave
08598f0d +0x3eed:  ret
08598f0e +0x3eee:  push   %ebp
08598f0f +0x3eef:  mov    %esp,%ebp
08598f11 +0x3ef1:  sub    $0x18,%esp
08598f14 +0x3ef4:  mov    0x8(%ebp),%eax
08598f17 +0x3ef7:  mov    %eax,(%esp)
08598f1a +0x3efa:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598f1f +0x3eff:  mov    0x8(%ebp),%eax
08598f22 +0x3f02:  movl   $&_ZTV17IPacketDispatcherI26MSG_FLOAT_RDATA_MODULATION9ParamBaseL8ch_state0EE+0x8,(%eax)
08598f28 +0x3f08:  leave
08598f29 +0x3f09:  ret
08598f2a +0x3f0a:  push   %ebp
08598f2b +0x3f0b:  mov    %esp,%ebp
08598f2d +0x3f0d:  sub    $0x18,%esp
08598f30 +0x3f10:  mov    0x8(%ebp),%eax
08598f33 +0x3f13:  mov    %eax,(%esp)
08598f36 +0x3f16:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598f3b +0x3f1b:  mov    0x8(%ebp),%eax
08598f3e +0x3f1e:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE9ReqResultL8ch_state3EE+0x8,(%eax)
08598f44 +0x3f24:  leave
08598f45 +0x3f25:  ret
08598f46 +0x3f26:  push   %ebp
08598f47 +0x3f27:  mov    %esp,%ebp
08598f49 +0x3f29:  sub    $0x18,%esp
08598f4c +0x3f2c:  mov    0x8(%ebp),%eax
08598f4f +0x3f2f:  mov    %eax,(%esp)
08598f52 +0x3f32:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598f57 +0x3f37:  mov    0x8(%ebp),%eax
08598f5a +0x3f3a:  movl   $&_ZTV17IPacketDispatcherI18MsgClearQuestIndex24ReqDebugClearQuestResultL8ch_state0EE+0x8,(%eax)
08598f60 +0x3f40:  leave
08598f61 +0x3f41:  ret
08598f62 +0x3f42:  push   %ebp
08598f63 +0x3f43:  mov    %esp,%ebp
08598f65 +0x3f45:  sub    $0x18,%esp
08598f68 +0x3f48:  mov    0x8(%ebp),%eax
08598f6b +0x3f4b:  mov    %eax,(%esp)
08598f6e +0x3f4e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598f73 +0x3f53:  mov    0x8(%ebp),%eax
08598f76 +0x3f56:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE29stTournamentRewardSelectStateL8ch_state0EE+0x8,(%eax)
08598f7c +0x3f5c:  leave
08598f7d +0x3f5d:  ret
08598f7e +0x3f5e:  push   %ebp
08598f7f +0x3f5f:  mov    %esp,%ebp
08598f81 +0x3f61:  sub    $0x18,%esp
08598f84 +0x3f64:  mov    0x8(%ebp),%eax
08598f87 +0x3f67:  mov    %eax,(%esp)
08598f8a +0x3f6a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598f8f +0x3f6f:  mov    0x8(%ebp),%eax
08598f92 +0x3f72:  movl   $&_ZTV17IPacketDispatcherI25MsgTournamentRewardSelect24stTournamentRewardSelectL8ch_state0EE+0x8,(%eax)
08598f98 +0x3f78:  leave
08598f99 +0x3f79:  ret
08598f9a +0x3f7a:  push   %ebp
08598f9b +0x3f7b:  mov    %esp,%ebp
08598f9d +0x3f7d:  sub    $0x18,%esp
08598fa0 +0x3f80:  mov    0x8(%ebp),%eax
08598fa3 +0x3f83:  mov    %eax,(%esp)
08598fa6 +0x3f86:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598fab +0x3f8b:  mov    0x8(%ebp),%eax
08598fae +0x3f8e:  movl   $&_ZTV17IPacketDispatcherI18MsgLimitNpcBuyItem15LimitNpcBuyItemL8ch_state3EE+0x8,(%eax)
08598fb4 +0x3f94:  leave
08598fb5 +0x3f95:  ret
08598fb6 +0x3f96:  push   %ebp
08598fb7 +0x3f97:  mov    %esp,%ebp
08598fb9 +0x3f99:  sub    $0x18,%esp
08598fbc +0x3f9c:  mov    0x8(%ebp),%eax
08598fbf +0x3f9f:  mov    %eax,(%esp)
08598fc2 +0x3fa2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598fc7 +0x3fa7:  mov    0x8(%ebp),%eax
08598fca +0x3faa:  movl   $&_ZTV17IPacketDispatcherI19MSG_OBJECT_BRING_UP15stObjectBringUpL8ch_state3EE+0x8,(%eax)
08598fd0 +0x3fb0:  leave
08598fd1 +0x3fb1:  ret
08598fd2 +0x3fb2:  push   %ebp
08598fd3 +0x3fb3:  mov    %esp,%ebp
08598fd5 +0x3fb5:  sub    $0x18,%esp
08598fd8 +0x3fb8:  mov    0x8(%ebp),%eax
08598fdb +0x3fbb:  mov    %eax,(%esp)
08598fde +0x3fbe:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598fe3 +0x3fc3:  mov    0x8(%ebp),%eax
08598fe6 +0x3fc6:  movl   $&_ZTV17IPacketDispatcherI17MSG_SOLO_TELEPORT19stSoloTeleportParamL8ch_state0EE+0x8,(%eax)
08598fec +0x3fcc:  leave
08598fed +0x3fcd:  ret
08598fee +0x3fce:  push   %ebp
08598fef +0x3fcf:  mov    %esp,%ebp
08598ff1 +0x3fd1:  sub    $0x18,%esp
08598ff4 +0x3fd4:  mov    0x8(%ebp),%eax
08598ff7 +0x3fd7:  mov    %eax,(%esp)
08598ffa +0x3fda:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08598fff +0x3fdf:  mov    0x8(%ebp),%eax
08599002 +0x3fe2:  movl   $&_ZTV17IPacketDispatcherI38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON9ParamBaseL8ch_state2EE+0x8,(%eax)
08599008 +0x3fe8:  leave
08599009 +0x3fe9:  ret
0859900a +0x3fea:  push   %ebp
0859900b +0x3feb:  mov    %esp,%ebp
0859900d +0x3fed:  sub    $0x18,%esp
08599010 +0x3ff0:  mov    0x8(%ebp),%eax
08599013 +0x3ff3:  mov    %eax,(%esp)
08599016 +0x3ff6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859901b +0x3ffb:  mov    0x8(%ebp),%eax
0859901e +0x3ffe:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE32stImageCommunicationEquipmentUseL8ch_state3EE+0x8,(%eax)
08599024 +0x4004:  leave
08599025 +0x4005:  ret
08599026 +0x4006:  push   %ebp
08599027 +0x4007:  mov    %esp,%ebp
08599029 +0x4009:  sub    $0x18,%esp
0859902c +0x400c:  mov    0x8(%ebp),%eax
0859902f +0x400f:  mov    %eax,(%esp)
08599032 +0x4012:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08599037 +0x4017:  mov    0x8(%ebp),%eax
0859903a +0x401a:  movl   $&_ZTV17IPacketDispatcherI23MSG_COMPATIBILITY_INDEX9ParamBaseL8ch_state0EE+0x8,(%eax)
08599040 +0x4020:  leave
08599041 +0x4021:  ret
08599042 +0x4022:  push   %ebp
08599043 +0x4023:  mov    %esp,%ebp
08599045 +0x4025:  sub    $0x18,%esp
08599048 +0x4028:  mov    0x8(%ebp),%eax
0859904b +0x402b:  mov    %eax,(%esp)
0859904e +0x402e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08599053 +0x4033:  mov    0x8(%ebp),%eax
08599056 +0x4036:  movl   $&_ZTV17IPacketDispatcherI18MSG_P2P_STATISTICS9ParamBaseL8ch_state0EE+0x8,(%eax)
0859905c +0x403c:  leave
0859905d +0x403d:  ret
0859905e +0x403e:  push   %ebp
0859905f +0x403f:  mov    %esp,%ebp
08599061 +0x4041:  sub    $0x18,%esp
08599064 +0x4044:  mov    0x8(%ebp),%eax
08599067 +0x4047:  mov    %eax,(%esp)
0859906a +0x404a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859906f +0x404f:  mov    0x8(%ebp),%eax
08599072 +0x4052:  movl   $&_ZTV17IPacketDispatcherI17MSG_INFORM_NOTICE16InformNoticeDataL8ch_state3EE+0x8,(%eax)
08599078 +0x4058:  leave
08599079 +0x4059:  ret
0859907a +0x405a:  push   %ebp
0859907b +0x405b:  mov    %esp,%ebp
0859907d +0x405d:  sub    $0x18,%esp
08599080 +0x4060:  mov    0x8(%ebp),%eax
08599083 +0x4063:  mov    %eax,(%esp)
08599086 +0x4066:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859908b +0x406b:  mov    0x8(%ebp),%eax
0859908e +0x406e:  movl   $&_ZTV17IPacketDispatcherI21MSG_INFORM_NOTICE_2ND19InformNoticeData2ndL8ch_state3EE+0x8,(%eax)
08599094 +0x4074:  leave
08599095 +0x4075:  ret
08599096 +0x4076:  push   %ebp
08599097 +0x4077:  mov    %esp,%ebp
08599099 +0x4079:  sub    $0x18,%esp
0859909c +0x407c:  mov    0x8(%ebp),%eax
0859909f +0x407f:  mov    %eax,(%esp)
085990a2 +0x4082:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085990a7 +0x4087:  mov    0x8(%ebp),%eax
085990aa +0x408a:  movl   $&_ZTV17IPacketDispatcherI17MSG_COLLECT_ITEMS14stCollectItemsL8ch_state0EE+0x8,(%eax)
085990b0 +0x4090:  leave
085990b1 +0x4091:  ret
085990b2 +0x4092:  push   %ebp
085990b3 +0x4093:  mov    %esp,%ebp
085990b5 +0x4095:  sub    $0x18,%esp
085990b8 +0x4098:  mov    0x8(%ebp),%eax
085990bb +0x409b:  mov    %eax,(%esp)
085990be +0x409e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085990c3 +0x40a3:  mov    0x8(%ebp),%eax
085990c6 +0x40a6:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE25PcRoomPlayTimeRewardParamL8ch_state3EE+0x8,(%eax)
085990cc +0x40ac:  leave
085990cd +0x40ad:  ret
085990ce +0x40ae:  push   %ebp
085990cf +0x40af:  mov    %esp,%ebp
085990d1 +0x40b1:  sub    $0x18,%esp
085990d4 +0x40b4:  mov    0x8(%ebp),%eax
085990d7 +0x40b7:  mov    %eax,(%esp)
085990da +0x40ba:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085990df +0x40bf:  mov    0x8(%ebp),%eax
085990e2 +0x40c2:  movl   $&_ZTV17IPacketDispatcherI13MSG_RENT_ITEM15stRentItemParamL8ch_state0EE+0x8,(%eax)
085990e8 +0x40c8:  leave
085990e9 +0x40c9:  ret
085990ea +0x40ca:  push   %ebp
085990eb +0x40cb:  mov    %esp,%ebp
085990ed +0x40cd:  sub    $0x18,%esp
085990f0 +0x40d0:  mov    0x8(%ebp),%eax
085990f3 +0x40d3:  mov    %eax,(%esp)
085990f6 +0x40d6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085990fb +0x40db:  mov    0x8(%ebp),%eax
085990fe +0x40de:  movl   $&_ZTV17IPacketDispatcherI24MSG_SERIAROOM_DECO_EVENT20stSeriaRoomDecoEventL8ch_state0EE+0x8,(%eax)
08599104 +0x40e4:  leave
08599105 +0x40e5:  ret
08599106 +0x40e6:  push   %ebp
08599107 +0x40e7:  mov    %esp,%ebp
08599109 +0x40e9:  sub    $0x18,%esp
0859910c +0x40ec:  mov    0x8(%ebp),%eax
0859910f +0x40ef:  mov    %eax,(%esp)
08599112 +0x40f2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08599117 +0x40f7:  mov    0x8(%ebp),%eax
0859911a +0x40fa:  movl   $&_ZTV17IPacketDispatcherI15MSG_BLUE_MARBLE12stBlueMarbleL8ch_state3EE+0x8,(%eax)
08599120 +0x4100:  leave
08599121 +0x4101:  ret
08599122 +0x4102:  push   %ebp
08599123 +0x4103:  mov    %esp,%ebp
08599125 +0x4105:  sub    $0x18,%esp
08599128 +0x4108:  mov    0x8(%ebp),%eax
0859912b +0x410b:  mov    %eax,(%esp)
0859912e +0x410e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08599133 +0x4113:  mov    0x8(%ebp),%eax
08599136 +0x4116:  movl   $&_ZTV17IPacketDispatcherI28MSG_BLUE_MARBLE_CONFIRM_INFO23stBlueMarbleConfirmInfoL8ch_state3EE+0x8,(%eax)
0859913c +0x411c:  leave
0859913d +0x411d:  ret
0859913e +0x411e:  push   %ebp
0859913f +0x411f:  mov    %esp,%ebp
08599141 +0x4121:  sub    $0x18,%esp
08599144 +0x4124:  mov    0x8(%ebp),%eax
08599147 +0x4127:  mov    %eax,(%esp)
0859914a +0x412a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859914f +0x412f:  mov    0x8(%ebp),%eax
08599152 +0x4132:  movl   $&_ZTV17IPacketDispatcherI11MSG_USE_DYE8stUseDyeL8ch_state0EE+0x8,(%eax)
08599158 +0x4138:  leave
08599159 +0x4139:  ret
0859915a +0x413a:  push   %ebp
0859915b +0x413b:  mov    %esp,%ebp
0859915d +0x413d:  sub    $0x18,%esp
08599160 +0x4140:  mov    0x8(%ebp),%eax
08599163 +0x4143:  mov    %eax,(%esp)
08599166 +0x4146:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859916b +0x414b:  mov    0x8(%ebp),%eax
0859916e +0x414e:  movl   $&_ZTV17IPacketDispatcherI20MSG_GROWTH_EQUIPMENT17stGrowthEquipmentL8ch_state3EE+0x8,(%eax)
08599174 +0x4154:  leave
08599175 +0x4155:  ret
08599176 +0x4156:  push   %ebp
08599177 +0x4157:  mov    %esp,%ebp
08599179 +0x4159:  sub    $0x18,%esp
0859917c +0x415c:  mov    0x8(%ebp),%eax
0859917f +0x415f:  mov    %eax,(%esp)
08599182 +0x4162:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08599187 +0x4167:  mov    0x8(%ebp),%eax
0859918a +0x416a:  movl   $&_ZTV17IPacketDispatcherI15MSG_COMBO_SKILL12stComboSkillL8ch_state3EE+0x8,(%eax)
08599190 +0x4170:  leave
08599191 +0x4171:  ret
08599192 +0x4172:  push   %ebp
08599193 +0x4173:  mov    %esp,%ebp
08599195 +0x4175:  sub    $0x18,%esp
08599198 +0x4178:  mov    0x8(%ebp),%eax
0859919b +0x417b:  mov    %eax,(%esp)
0859919e +0x417e:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085991a3 +0x4183:  mov    0x8(%ebp),%eax
085991a6 +0x4186:  movl   $&_ZTV17IPacketDispatcherI42MSG_COMBO_SKILL_EXTENSION_QUICK_SLOT_RESET35stComboSkillExtensionQuickSlotResetL8ch_state3EE+0x8,(%eax)
085991ac +0x418c:  leave
085991ad +0x418d:  ret
085991ae +0x418e:  push   %ebp
085991af +0x418f:  mov    %esp,%ebp
085991b1 +0x4191:  sub    $0x18,%esp
085991b4 +0x4194:  mov    0x8(%ebp),%eax
085991b7 +0x4197:  mov    %eax,(%esp)
085991ba +0x419a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085991bf +0x419f:  mov    0x8(%ebp),%eax
085991c2 +0x41a2:  movl   $&_ZTV17IPacketDispatcherI19MSG_USE_RENAME_CARD15stUseRenameCardL8ch_state0EE+0x8,(%eax)
085991c8 +0x41a8:  leave
085991c9 +0x41a9:  ret
085991ca +0x41aa:  push   %ebp
085991cb +0x41ab:  mov    %esp,%ebp
085991cd +0x41ad:  sub    $0x18,%esp
085991d0 +0x41b0:  mov    0x8(%ebp),%eax
085991d3 +0x41b3:  mov    %eax,(%esp)
085991d6 +0x41b6:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085991db +0x41bb:  mov    0x8(%ebp),%eax
085991de +0x41be:  movl   $&_ZTV17IPacketDispatcherI20MSG_OPEN_CERAPACKAGE17stOpenCeraPackageL8ch_state0EE+0x8,(%eax)
085991e4 +0x41c4:  leave
085991e5 +0x41c5:  ret
085991e6 +0x41c6:  push   %ebp
085991e7 +0x41c7:  mov    %esp,%ebp
085991e9 +0x41c9:  sub    $0x18,%esp
085991ec +0x41cc:  mov    0x8(%ebp),%eax
085991ef +0x41cf:  mov    %eax,(%esp)
085991f2 +0x41d2:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
085991f7 +0x41d7:  mov    0x8(%ebp),%eax
085991fa +0x41da:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE16stGrowthCreatureL8ch_state3EE+0x8,(%eax)
08599200 +0x41e0:  leave
08599201 +0x41e1:  ret
08599202 +0x41e2:  push   %ebp
08599203 +0x41e3:  mov    %esp,%ebp
08599205 +0x41e5:  sub    $0x18,%esp
08599208 +0x41e8:  mov    0x8(%ebp),%eax
0859920b +0x41eb:  mov    %eax,(%esp)
0859920e +0x41ee:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
08599213 +0x41f3:  mov    0x8(%ebp),%eax
08599216 +0x41f6:  movl   $&_ZTV17IPacketDispatcherI24MSG_SERIAROOM_DECO_EVENT20stSeriaRoomDecoEventL8ch_state3EE+0x8,(%eax)
0859921c +0x41fc:  leave
0859921d +0x41fd:  ret
0859921e +0x41fe:  push   %ebp
0859921f +0x41ff:  mov    %esp,%ebp
08599221 +0x4201:  sub    $0x18,%esp
08599224 +0x4204:  mov    0x8(%ebp),%eax
08599227 +0x4207:  mov    %eax,(%esp)
0859922a +0x420a:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859922f +0x420f:  mov    0x8(%ebp),%eax
08599232 +0x4212:  movl   $&_ZTV17IPacketDispatcherI32MSG_UPDATE_CONTRACT_OF_CUBE_INFO26stUpdateContractOfCubeInfoL8ch_state0EE+0x8,(%eax)
08599238 +0x4218:  leave
08599239 +0x4219:  ret
0859923a +0x421a:  push   %ebp
0859923b +0x421b:  mov    %esp,%ebp
0859923d +0x421d:  sub    $0x18,%esp
08599240 +0x4220:  mov    0x8(%ebp),%eax
08599243 +0x4223:  mov    %eax,(%esp)
08599246 +0x4226:  call   082308f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5fa2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5fa2
0859924b +0x422b:  mov    0x8(%ebp),%eax
0859924e +0x422e:  movl   $&_ZTV17IPacketDispatcherI34MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE9ParamBaseL8ch_state0EE+0x8,(%eax)
08599254 +0x4234:  leave
08599255 +0x4235:  ret
08599256 +0x4236:  nop
08599257 +0x4237:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8595020

/* DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&) */

void DisPatcher_DebugCommand::_GLOBAL__I__debugCommandOn(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
