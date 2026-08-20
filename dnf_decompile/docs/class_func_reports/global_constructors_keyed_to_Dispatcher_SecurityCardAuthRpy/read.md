# read

`_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE`

`global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Dispatcher_SecurityCardAuthRpy` | `0x08265228` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08265228  _GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE
#           global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)
# range [0x08265228, 0x08267157]
08265228 +0x0000:  push   %ebp
08265229 +0x0001:  mov    %esp,%ebp
0826522b +0x0003:  sub    $0x18,%esp
0826522e +0x0006:  movl   $0xffff,0x4(%esp)
08265236 +0x000e:  movl   $0x1,(%esp)
0826523d +0x0015:  call   082651e8 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08265242 +0x001a:  leave
08265243 +0x001b:  ret
08265244 +0x001c:  push   %ebp
08265245 +0x001d:  mov    %esp,%ebp
08265247 +0x001f:  sub    $0x18,%esp
0826524a +0x0022:  mov    0xc(%ebp),%eax
0826524d +0x0025:  mov    %eax,0x4(%esp)
08265251 +0x0029:  mov    0x8(%ebp),%eax
08265254 +0x002c:  mov    %eax,(%esp)
08265257 +0x002f:  call   0807de40 <_init+0x738>
0826525c +0x0034:  leave
0826525d +0x0035:  ret
0826525e +0x0036:  push   %ebp
0826525f +0x0037:  mov    %esp,%ebp
08265261 +0x0039:  sub    $0x18,%esp
08265264 +0x003c:  mov    0x8(%ebp),%eax
08265267 +0x003f:  add    $0xb24,%eax
0826526c +0x0044:  mov    %eax,(%esp)
0826526f +0x0047:  call   0822cf50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25fa
08265274 +0x004c:  leave
08265275 +0x004d:  ret
08265276 +0x004e:  push   %ebp
08265277 +0x004f:  mov    %esp,%ebp
08265279 +0x0051:  sub    $0x18,%esp
0826527c +0x0054:  mov    0x8(%ebp),%eax
0826527f +0x0057:  mov    %eax,(%esp)
08265282 +0x005a:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
08265287 +0x005f:  leave
08265288 +0x0060:  ret
08265289 +0x0061:  nop
0826528a +0x0062:  push   %ebp
0826528b +0x0063:  mov    %esp,%ebp
0826528d +0x0065:  mov    0x8(%ebp),%eax
08265290 +0x0068:  mov    0x38(%eax),%eax
08265293 +0x006b:  pop    %ebp
08265294 +0x006c:  ret
08265295 +0x006d:  nop
08265296 +0x006e:  push   %ebp
08265297 +0x006f:  mov    %esp,%ebp
08265299 +0x0071:  sub    $0x4,%esp
0826529c +0x0074:  mov    0xc(%ebp),%eax
0826529f +0x0077:  mov    %al,-0x4(%ebp)
082652a2 +0x007a:  mov    0x8(%ebp),%eax
082652a5 +0x007d:  movzbl -0x4(%ebp),%edx
082652a9 +0x0081:  mov    %dl,0x30(%eax)
082652ac +0x0084:  leave
082652ad +0x0085:  ret
082652ae +0x0086:  push   %ebp
082652af +0x0087:  mov    %esp,%ebp
082652b1 +0x0089:  mov    0x8(%ebp),%eax
082652b4 +0x008c:  mov    0x34(%eax),%eax
082652b7 +0x008f:  lea    0x1(%eax),%edx
082652ba +0x0092:  mov    0x8(%ebp),%eax
082652bd +0x0095:  mov    %edx,0x34(%eax)
082652c0 +0x0098:  mov    0x8(%ebp),%eax
082652c3 +0x009b:  mov    0x34(%eax),%eax
082652c6 +0x009e:  pop    %ebp
082652c7 +0x009f:  ret
082652c8 +0x00a0:  push   %ebp
082652c9 +0x00a1:  mov    %esp,%ebp
082652cb +0x00a3:  mov    0x8(%ebp),%eax
082652ce +0x00a6:  movl   $0x0,0x34(%eax)
082652d5 +0x00ad:  pop    %ebp
082652d6 +0x00ae:  ret
082652d7 +0x00af:  nop
082652d8 +0x00b0:  push   %ebp
082652d9 +0x00b1:  mov    %esp,%ebp
082652db +0x00b3:  mov    0x8(%ebp),%eax
082652de +0x00b6:  mov    0x38(%eax),%eax
082652e1 +0x00b9:  lea    0x1(%eax),%edx
082652e4 +0x00bc:  mov    0x8(%ebp),%eax
082652e7 +0x00bf:  mov    %edx,0x38(%eax)
082652ea +0x00c2:  mov    0x8(%ebp),%eax
082652ed +0x00c5:  mov    0x38(%eax),%eax
082652f0 +0x00c8:  pop    %ebp
082652f1 +0x00c9:  ret
082652f2 +0x00ca:  push   %ebp
082652f3 +0x00cb:  mov    %esp,%ebp
082652f5 +0x00cd:  mov    0x8(%ebp),%eax
082652f8 +0x00d0:  movl   $0x0,0x38(%eax)
082652ff +0x00d7:  pop    %ebp
08265300 +0x00d8:  ret
08265301 +0x00d9:  nop
08265302 +0x00da:  push   %ebp
08265303 +0x00db:  mov    %esp,%ebp
08265305 +0x00dd:  mov    0x8(%ebp),%eax
08265308 +0x00e0:  movzbl 0x3c(%eax),%eax
0826530c +0x00e4:  pop    %ebp
0826530d +0x00e5:  ret
0826530e +0x00e6:  push   %ebp
0826530f +0x00e7:  mov    %esp,%ebp
08265311 +0x00e9:  sub    $0x4,%esp
08265314 +0x00ec:  mov    0xc(%ebp),%eax
08265317 +0x00ef:  mov    %al,-0x4(%ebp)
0826531a +0x00f2:  mov    0x8(%ebp),%eax
0826531d +0x00f5:  movzbl -0x4(%ebp),%edx
08265321 +0x00f9:  mov    %dl,0x25(%eax)
08265324 +0x00fc:  leave
08265325 +0x00fd:  ret
08265326 +0x00fe:  push   %ebp
08265327 +0x00ff:  mov    %esp,%ebp
08265329 +0x0101:  mov    0x8(%ebp),%eax
0826532c +0x0104:  pop    %ebp
0826532d +0x0105:  ret
0826532e +0x0106:  push   %ebp
0826532f +0x0107:  mov    %esp,%ebp
08265331 +0x0109:  mov    0x8(%ebp),%eax
08265334 +0x010c:  mov    0x8e090(%eax),%eax
0826533a +0x0112:  pop    %ebp
0826533b +0x0113:  ret
0826533c +0x0114:  push   %ebp
0826533d +0x0115:  mov    %esp,%ebp
0826533f +0x0117:  sub    $0x18,%esp
08265342 +0x011a:  mov    0x8(%ebp),%eax
08265345 +0x011d:  mov    %eax,(%esp)
08265348 +0x0120:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
0826534d +0x0125:  mov    0x8(%ebp),%eax
08265350 +0x0128:  movl   $&_ZTV9TempParam+0x8,(%eax)
08265356 +0x012e:  mov    0x8(%ebp),%eax
08265359 +0x0131:  movl   $0x0,0x4(%eax)
08265360 +0x0138:  leave
08265361 +0x0139:  ret
08265362 +0x013a:  push   %ebp
08265363 +0x013b:  mov    %esp,%ebp
08265365 +0x013d:  sub    $0x18,%esp
08265368 +0x0140:  mov    0x8(%ebp),%eax
0826536b +0x0143:  mov    %eax,(%esp)
0826536e +0x0146:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08265373 +0x014b:  mov    0x8(%ebp),%eax
08265376 +0x014e:  movl   $&_ZTV16SecuCardRpyParam+0x8,(%eax)
0826537c +0x0154:  mov    0x8(%ebp),%eax
0826537f +0x0157:  movb   $0x0,0x4(%eax)
08265383 +0x015b:  mov    0x8(%ebp),%eax
08265386 +0x015e:  movb   $0x0,0x5(%eax)
0826538a +0x0162:  leave
0826538b +0x0163:  ret
0826538c +0x0164:  push   %ebp
0826538d +0x0165:  mov    %esp,%ebp
0826538f +0x0167:  sub    $0x18,%esp
08265392 +0x016a:  mov    0x8(%ebp),%eax
08265395 +0x016d:  mov    %eax,(%esp)
08265398 +0x0170:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
0826539d +0x0175:  mov    0x8(%ebp),%eax
082653a0 +0x0178:  movl   $&_ZTV15ScriptHashParam+0x8,(%eax)
082653a6 +0x017e:  mov    0x8(%ebp),%eax
082653a9 +0x0181:  movb   $0x0,0x4(%eax)
082653ad +0x0185:  mov    0x8(%ebp),%eax
082653b0 +0x0188:  movb   $0x0,0x5(%eax)
082653b4 +0x018c:  mov    0x8(%ebp),%eax
082653b7 +0x018f:  movl   $0x0,0x8(%eax)
082653be +0x0196:  leave
082653bf +0x0197:  ret
082653c0 +0x0198:  push   %ebp
082653c1 +0x0199:  mov    %esp,%ebp
082653c3 +0x019b:  sub    $0x18,%esp
082653c6 +0x019e:  mov    0x8(%ebp),%eax
082653c9 +0x01a1:  mov    %eax,(%esp)
082653cc +0x01a4:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
082653d1 +0x01a9:  mov    0x8(%ebp),%eax
082653d4 +0x01ac:  movl   $&_ZTV17ScanBotByDllParam+0x8,(%eax)
082653da +0x01b2:  mov    0x8(%ebp),%eax
082653dd +0x01b5:  movl   $0x0,0x4(%eax)
082653e4 +0x01bc:  mov    0x8(%ebp),%eax
082653e7 +0x01bf:  movb   $0x0,0x8(%eax)
082653eb +0x01c3:  mov    0x8(%ebp),%eax
082653ee +0x01c6:  movw   $0x0,0xa(%eax)
082653f4 +0x01cc:  leave
082653f5 +0x01cd:  ret
082653f6 +0x01ce:  push   %ebp
082653f7 +0x01cf:  mov    %esp,%ebp
082653f9 +0x01d1:  sub    $0x18,%esp
082653fc +0x01d4:  mov    0x8(%ebp),%eax
082653ff +0x01d7:  mov    %eax,(%esp)
08265402 +0x01da:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08265407 +0x01df:  mov    0x8(%ebp),%eax
0826540a +0x01e2:  movl   $&_ZTV17ScanBotByDrvParam+0x8,(%eax)
08265410 +0x01e8:  mov    0x8(%ebp),%eax
08265413 +0x01eb:  movl   $0x0,0x4(%eax)
0826541a +0x01f2:  mov    0x8(%ebp),%eax
0826541d +0x01f5:  movb   $0x0,0x8(%eax)
08265421 +0x01f9:  leave
08265422 +0x01fa:  ret
08265423 +0x01fb:  nop
08265424 +0x01fc:  push   %ebp
08265425 +0x01fd:  mov    %esp,%ebp
08265427 +0x01ff:  sub    $0x18,%esp
0826542a +0x0202:  mov    0x8(%ebp),%eax
0826542d +0x0205:  mov    %eax,(%esp)
08265430 +0x0208:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08265435 +0x020d:  mov    0x8(%ebp),%eax
08265438 +0x0210:  movl   $&_ZTV23CheckSecurityProtection+0x8,(%eax)
0826543e +0x0216:  mov    0x8(%ebp),%eax
08265441 +0x0219:  movb   $0x0,0x4(%eax)
08265445 +0x021d:  leave
08265446 +0x021e:  ret
08265447 +0x021f:  nop
08265448 +0x0220:  push   %ebp
08265449 +0x0221:  mov    %esp,%ebp
0826544b +0x0223:  sub    $0x18,%esp
0826544e +0x0226:  mov    0x8(%ebp),%eax
08265451 +0x0229:  mov    %eax,(%esp)
08265454 +0x022c:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08265459 +0x0231:  mov    0x8(%ebp),%eax
0826545c +0x0234:  movl   $&_ZTV20AbnormalUseStackable+0x8,(%eax)
08265462 +0x023a:  mov    0x8(%ebp),%eax
08265465 +0x023d:  movb   $0x0,0x4(%eax)
08265469 +0x0241:  leave
0826546a +0x0242:  ret
0826546b +0x0243:  nop
0826546c +0x0244:  push   %ebp
0826546d +0x0245:  mov    %esp,%ebp
0826546f +0x0247:  sub    $0x18,%esp
08265472 +0x024a:  mov    0x8(%ebp),%eax
08265475 +0x024d:  mov    %eax,(%esp)
08265478 +0x0250:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
0826547d +0x0255:  mov    0x8(%ebp),%eax
08265480 +0x0258:  movl   $&_ZTV17stFinishLoadParam+0x8,(%eax)
08265486 +0x025e:  mov    0x8(%ebp),%eax
08265489 +0x0261:  movl   $0x0,0x4(%eax)
08265490 +0x0268:  leave
08265491 +0x0269:  ret
08265492 +0x026a:  push   %ebp
08265493 +0x026b:  mov    %esp,%ebp
08265495 +0x026d:  sub    $0x18,%esp
08265498 +0x0270:  mov    0xc(%ebp),%eax
0826549b +0x0273:  mov    %eax,(%esp)
0826549e +0x0276:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082654a3 +0x027b:  mov    %eax,(%esp)
082654a6 +0x027e:  call   081466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>  ; Global::CGlobalFunc::Get_State_Check(ch_state)
082654ab +0x0283:  xor    $0x1,%eax
082654ae +0x0286:  test   %al,%al
082654b0 +0x0288:  je     082654b9 <+0x291>
082654b2 +0x028a:  mov    $0x7fffffff,%eax
082654b7 +0x028f:  jmp    082654be <+0x296>
082654b9 +0x0291:  mov    $0x0,%eax
082654be +0x0296:  leave
082654bf +0x0297:  ret
082654c0 +0x0298:  push   %ebp
082654c1 +0x0299:  mov    %esp,%ebp
082654c3 +0x029b:  sub    $0x18,%esp
082654c6 +0x029e:  mov    0x8(%ebp),%eax
082654c9 +0x02a1:  mov    (%eax),%eax
082654cb +0x02a3:  mov    %eax,(%esp)
082654ce +0x02a6:  call   082654d6 <+0x2ae>
082654d3 +0x02ab:  leave
082654d4 +0x02ac:  ret
082654d5 +0x02ad:  nop
082654d6 +0x02ae:  push   %ebp
082654d7 +0x02af:  mov    %esp,%ebp
082654d9 +0x02b1:  sub    $0x28,%esp
082654dc +0x02b4:  jmp    082654fa <+0x2d2>
082654de +0x02b6:  mov    0x8(%ebp),%eax
082654e1 +0x02b9:  mov    %eax,(%esp)
082654e4 +0x02bc:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
082654e9 +0x02c1:  add    %eax,%eax
082654eb +0x02c3:  mov    %eax,0x4(%esp)
082654ef +0x02c7:  mov    0x8(%ebp),%eax
082654f2 +0x02ca:  mov    %eax,(%esp)
082654f5 +0x02cd:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
082654fa +0x02d2:  movl   $0x59,0x4(%esp)
08265502 +0x02da:  mov    0x8(%ebp),%eax
08265505 +0x02dd:  mov    %eax,(%esp)
08265508 +0x02e0:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0826550d +0x02e5:  xor    $0x1,%eax
08265510 +0x02e8:  test   %al,%al
08265512 +0x02ea:  jne    082654de <+0x2b6>
08265514 +0x02ec:  mov    0x8(%ebp),%eax
08265517 +0x02ef:  mov    0x8(%eax),%eax
0826551a +0x02f2:  mov    %eax,%edx
0826551c +0x02f4:  mov    0x8(%ebp),%eax
0826551f +0x02f7:  mov    0xc(%eax),%eax
08265522 +0x02fa:  lea    (%edx,%eax,1),%eax
08265525 +0x02fd:  mov    %eax,-0xc(%ebp)
08265528 +0x0300:  movl   $0x59,0x4(%esp)
08265530 +0x0308:  mov    0x8(%ebp),%eax
08265533 +0x030b:  mov    %eax,(%esp)
08265536 +0x030e:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0826553b +0x0313:  mov    -0xc(%ebp),%eax
0826553e +0x0316:  leave
0826553f +0x0317:  ret
08265540 +0x0318:  push   %ebp
08265541 +0x0319:  mov    %esp,%ebp
08265543 +0x031b:  sub    $0x18,%esp
08265546 +0x031e:  mov    0x8(%ebp),%eax
08265549 +0x0321:  movl   $&_ZTV21DisPatcher_FinishLoad+0x8,(%eax)
0826554f +0x0327:  mov    0x8(%ebp),%eax
08265552 +0x032a:  mov    %eax,(%esp)
08265555 +0x032d:  call   08266d9e <+0x1b76>
0826555a +0x0332:  mov    $0x0,%eax
0826555f +0x0337:  test   %al,%al
08265561 +0x0339:  je     0826556e <+0x346>
08265563 +0x033b:  mov    0x8(%ebp),%eax
08265566 +0x033e:  mov    %eax,(%esp)
08265569 +0x0341:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826556e +0x0346:  leave
0826556f +0x0347:  ret
08265570 +0x0348:  push   %ebp
08265571 +0x0349:  mov    %esp,%ebp
08265573 +0x034b:  sub    $0x18,%esp
08265576 +0x034e:  mov    0x8(%ebp),%eax
08265579 +0x0351:  mov    %eax,(%esp)
0826557c +0x0354:  call   08265540 <+0x318>
08265581 +0x0359:  mov    0x8(%ebp),%eax
08265584 +0x035c:  mov    %eax,(%esp)
08265587 +0x035f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826558c +0x0364:  leave
0826558d +0x0365:  ret
0826558e +0x0366:  push   %ebp
0826558f +0x0367:  mov    %esp,%ebp
08265591 +0x0369:  sub    $0x18,%esp
08265594 +0x036c:  mov    0x8(%ebp),%eax
08265597 +0x036f:  movl   $&_ZTV33Dispatcher_Float_RDATA_Modulation+0x8,(%eax)
0826559d +0x0375:  mov    0x8(%ebp),%eax
082655a0 +0x0378:  mov    %eax,(%esp)
082655a3 +0x037b:  call   08266dec <+0x1bc4>
082655a8 +0x0380:  mov    $0x0,%eax
082655ad +0x0385:  test   %al,%al
082655af +0x0387:  je     082655bc <+0x394>
082655b1 +0x0389:  mov    0x8(%ebp),%eax
082655b4 +0x038c:  mov    %eax,(%esp)
082655b7 +0x038f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082655bc +0x0394:  leave
082655bd +0x0395:  ret
082655be +0x0396:  push   %ebp
082655bf +0x0397:  mov    %esp,%ebp
082655c1 +0x0399:  sub    $0x18,%esp
082655c4 +0x039c:  mov    0x8(%ebp),%eax
082655c7 +0x039f:  mov    %eax,(%esp)
082655ca +0x03a2:  call   0826558e <+0x366>
082655cf +0x03a7:  mov    0x8(%ebp),%eax
082655d2 +0x03aa:  mov    %eax,(%esp)
082655d5 +0x03ad:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082655da +0x03b2:  leave
082655db +0x03b3:  ret
082655dc +0x03b4:  push   %ebp
082655dd +0x03b5:  mov    %esp,%ebp
082655df +0x03b7:  sub    $0x18,%esp
082655e2 +0x03ba:  mov    0x8(%ebp),%eax
082655e5 +0x03bd:  movl   $&_ZTV31Dispatcher_AbnormalUseStackable+0x8,(%eax)
082655eb +0x03c3:  mov    0x8(%ebp),%eax
082655ee +0x03c6:  mov    %eax,(%esp)
082655f1 +0x03c9:  call   08266e3a <+0x1c12>
082655f6 +0x03ce:  mov    $0x0,%eax
082655fb +0x03d3:  test   %al,%al
082655fd +0x03d5:  je     0826560a <+0x3e2>
082655ff +0x03d7:  mov    0x8(%ebp),%eax
08265602 +0x03da:  mov    %eax,(%esp)
08265605 +0x03dd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826560a +0x03e2:  leave
0826560b +0x03e3:  ret
0826560c +0x03e4:  push   %ebp
0826560d +0x03e5:  mov    %esp,%ebp
0826560f +0x03e7:  sub    $0x18,%esp
08265612 +0x03ea:  mov    0x8(%ebp),%eax
08265615 +0x03ed:  mov    %eax,(%esp)
08265618 +0x03f0:  call   082655dc <+0x3b4>
0826561d +0x03f5:  mov    0x8(%ebp),%eax
08265620 +0x03f8:  mov    %eax,(%esp)
08265623 +0x03fb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265628 +0x0400:  leave
08265629 +0x0401:  ret
0826562a +0x0402:  push   %ebp
0826562b +0x0403:  mov    %esp,%ebp
0826562d +0x0405:  sub    $0x18,%esp
08265630 +0x0408:  mov    0x8(%ebp),%eax
08265633 +0x040b:  movl   $&_ZTV34DisPatcher_CheckSecurityProtection+0x8,(%eax)
08265639 +0x0411:  mov    0x8(%ebp),%eax
0826563c +0x0414:  mov    %eax,(%esp)
0826563f +0x0417:  call   08266e88 <+0x1c60>
08265644 +0x041c:  mov    $0x0,%eax
08265649 +0x0421:  test   %al,%al
0826564b +0x0423:  je     08265658 <+0x430>
0826564d +0x0425:  mov    0x8(%ebp),%eax
08265650 +0x0428:  mov    %eax,(%esp)
08265653 +0x042b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265658 +0x0430:  leave
08265659 +0x0431:  ret
0826565a +0x0432:  push   %ebp
0826565b +0x0433:  mov    %esp,%ebp
0826565d +0x0435:  sub    $0x18,%esp
08265660 +0x0438:  mov    0x8(%ebp),%eax
08265663 +0x043b:  mov    %eax,(%esp)
08265666 +0x043e:  call   0826562a <+0x402>
0826566b +0x0443:  mov    0x8(%ebp),%eax
0826566e +0x0446:  mov    %eax,(%esp)
08265671 +0x0449:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265676 +0x044e:  leave
08265677 +0x044f:  ret
08265678 +0x0450:  push   %ebp
08265679 +0x0451:  mov    %esp,%ebp
0826567b +0x0453:  sub    $0x18,%esp
0826567e +0x0456:  mov    0x8(%ebp),%eax
08265681 +0x0459:  movl   $&_ZTV23Dispatcher_ScanBotByDrv+0x8,(%eax)
08265687 +0x045f:  mov    0x8(%ebp),%eax
0826568a +0x0462:  mov    %eax,(%esp)
0826568d +0x0465:  call   08266ed6 <+0x1cae>
08265692 +0x046a:  mov    $0x0,%eax
08265697 +0x046f:  test   %al,%al
08265699 +0x0471:  je     082656a6 <+0x47e>
0826569b +0x0473:  mov    0x8(%ebp),%eax
0826569e +0x0476:  mov    %eax,(%esp)
082656a1 +0x0479:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082656a6 +0x047e:  leave
082656a7 +0x047f:  ret
082656a8 +0x0480:  push   %ebp
082656a9 +0x0481:  mov    %esp,%ebp
082656ab +0x0483:  sub    $0x18,%esp
082656ae +0x0486:  mov    0x8(%ebp),%eax
082656b1 +0x0489:  mov    %eax,(%esp)
082656b4 +0x048c:  call   08265678 <+0x450>
082656b9 +0x0491:  mov    0x8(%ebp),%eax
082656bc +0x0494:  mov    %eax,(%esp)
082656bf +0x0497:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082656c4 +0x049c:  leave
082656c5 +0x049d:  ret
082656c6 +0x049e:  push   %ebp
082656c7 +0x049f:  mov    %esp,%ebp
082656c9 +0x04a1:  sub    $0x18,%esp
082656cc +0x04a4:  mov    0x8(%ebp),%eax
082656cf +0x04a7:  movl   $&_ZTV21Dispatcher_MotionHack+0x8,(%eax)
082656d5 +0x04ad:  mov    0x8(%ebp),%eax
082656d8 +0x04b0:  mov    %eax,(%esp)
082656db +0x04b3:  call   08266f24 <+0x1cfc>
082656e0 +0x04b8:  mov    $0x0,%eax
082656e5 +0x04bd:  test   %al,%al
082656e7 +0x04bf:  je     082656f4 <+0x4cc>
082656e9 +0x04c1:  mov    0x8(%ebp),%eax
082656ec +0x04c4:  mov    %eax,(%esp)
082656ef +0x04c7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082656f4 +0x04cc:  leave
082656f5 +0x04cd:  ret
082656f6 +0x04ce:  push   %ebp
082656f7 +0x04cf:  mov    %esp,%ebp
082656f9 +0x04d1:  sub    $0x18,%esp
082656fc +0x04d4:  mov    0x8(%ebp),%eax
082656ff +0x04d7:  mov    %eax,(%esp)
08265702 +0x04da:  call   082656c6 <+0x49e>
08265707 +0x04df:  mov    0x8(%ebp),%eax
0826570a +0x04e2:  mov    %eax,(%esp)
0826570d +0x04e5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265712 +0x04ea:  leave
08265713 +0x04eb:  ret
08265714 +0x04ec:  push   %ebp
08265715 +0x04ed:  mov    %esp,%ebp
08265717 +0x04ef:  sub    $0x18,%esp
0826571a +0x04f2:  mov    0x8(%ebp),%eax
0826571d +0x04f5:  movl   $&_ZTV23Dispatcher_ScanBotByDll+0x8,(%eax)
08265723 +0x04fb:  mov    0x8(%ebp),%eax
08265726 +0x04fe:  mov    %eax,(%esp)
08265729 +0x0501:  call   08266f72 <+0x1d4a>
0826572e +0x0506:  mov    $0x0,%eax
08265733 +0x050b:  test   %al,%al
08265735 +0x050d:  je     08265742 <+0x51a>
08265737 +0x050f:  mov    0x8(%ebp),%eax
0826573a +0x0512:  mov    %eax,(%esp)
0826573d +0x0515:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265742 +0x051a:  leave
08265743 +0x051b:  ret
08265744 +0x051c:  push   %ebp
08265745 +0x051d:  mov    %esp,%ebp
08265747 +0x051f:  sub    $0x18,%esp
0826574a +0x0522:  mov    0x8(%ebp),%eax
0826574d +0x0525:  mov    %eax,(%esp)
08265750 +0x0528:  call   08265714 <+0x4ec>
08265755 +0x052d:  mov    0x8(%ebp),%eax
08265758 +0x0530:  mov    %eax,(%esp)
0826575b +0x0533:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265760 +0x0538:  leave
08265761 +0x0539:  ret
08265762 +0x053a:  push   %ebp
08265763 +0x053b:  mov    %esp,%ebp
08265765 +0x053d:  sub    $0x18,%esp
08265768 +0x0540:  mov    0x8(%ebp),%eax
0826576b +0x0543:  movl   $&_ZTV29Dispatcher_ValidateScriptHash+0x8,(%eax)
08265771 +0x0549:  mov    0x8(%ebp),%eax
08265774 +0x054c:  mov    %eax,(%esp)
08265777 +0x054f:  call   08266fc0 <+0x1d98>
0826577c +0x0554:  mov    $0x0,%eax
08265781 +0x0559:  test   %al,%al
08265783 +0x055b:  je     08265790 <+0x568>
08265785 +0x055d:  mov    0x8(%ebp),%eax
08265788 +0x0560:  mov    %eax,(%esp)
0826578b +0x0563:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265790 +0x0568:  leave
08265791 +0x0569:  ret
08265792 +0x056a:  push   %ebp
08265793 +0x056b:  mov    %esp,%ebp
08265795 +0x056d:  sub    $0x18,%esp
08265798 +0x0570:  mov    0x8(%ebp),%eax
0826579b +0x0573:  mov    %eax,(%esp)
0826579e +0x0576:  call   08265762 <+0x53a>
082657a3 +0x057b:  mov    0x8(%ebp),%eax
082657a6 +0x057e:  mov    %eax,(%esp)
082657a9 +0x0581:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082657ae +0x0586:  leave
082657af +0x0587:  ret
082657b0 +0x0588:  push   %ebp
082657b1 +0x0589:  mov    %esp,%ebp
082657b3 +0x058b:  sub    $0x18,%esp
082657b6 +0x058e:  mov    0x8(%ebp),%eax
082657b9 +0x0591:  movl   $&_ZTV24Dispatcher_MouseRegister+0x8,(%eax)
082657bf +0x0597:  mov    0x8(%ebp),%eax
082657c2 +0x059a:  mov    %eax,(%esp)
082657c5 +0x059d:  call   0826700e <+0x1de6>
082657ca +0x05a2:  mov    $0x0,%eax
082657cf +0x05a7:  test   %al,%al
082657d1 +0x05a9:  je     082657de <+0x5b6>
082657d3 +0x05ab:  mov    0x8(%ebp),%eax
082657d6 +0x05ae:  mov    %eax,(%esp)
082657d9 +0x05b1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082657de +0x05b6:  leave
082657df +0x05b7:  ret
082657e0 +0x05b8:  push   %ebp
082657e1 +0x05b9:  mov    %esp,%ebp
082657e3 +0x05bb:  sub    $0x18,%esp
082657e6 +0x05be:  mov    0x8(%ebp),%eax
082657e9 +0x05c1:  mov    %eax,(%esp)
082657ec +0x05c4:  call   082657b0 <+0x588>
082657f1 +0x05c9:  mov    0x8(%ebp),%eax
082657f4 +0x05cc:  mov    %eax,(%esp)
082657f7 +0x05cf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082657fc +0x05d4:  leave
082657fd +0x05d5:  ret
082657fe +0x05d6:  push   %ebp
082657ff +0x05d7:  mov    %esp,%ebp
08265801 +0x05d9:  sub    $0x18,%esp
08265804 +0x05dc:  mov    0x8(%ebp),%eax
08265807 +0x05df:  movl   $&_ZTV30Dispatcher_SecurityCardAuthRpy+0x8,(%eax)
0826580d +0x05e5:  mov    0x8(%ebp),%eax
08265810 +0x05e8:  mov    %eax,(%esp)
08265813 +0x05eb:  call   0826705c <+0x1e34>
08265818 +0x05f0:  mov    $0x0,%eax
0826581d +0x05f5:  test   %al,%al
0826581f +0x05f7:  je     0826582c <+0x604>
08265821 +0x05f9:  mov    0x8(%ebp),%eax
08265824 +0x05fc:  mov    %eax,(%esp)
08265827 +0x05ff:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826582c +0x0604:  leave
0826582d +0x0605:  ret
0826582e +0x0606:  push   %ebp
0826582f +0x0607:  mov    %esp,%ebp
08265831 +0x0609:  sub    $0x18,%esp
08265834 +0x060c:  mov    0x8(%ebp),%eax
08265837 +0x060f:  mov    %eax,(%esp)
0826583a +0x0612:  call   082657fe <+0x5d6>
0826583f +0x0617:  mov    0x8(%ebp),%eax
08265842 +0x061a:  mov    %eax,(%esp)
08265845 +0x061d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826584a +0x0622:  leave
0826584b +0x0623:  ret
0826584c +0x0624:  push   %ebp
0826584d +0x0625:  mov    %esp,%ebp
0826584f +0x0627:  sub    $0x18,%esp
08265852 +0x062a:  mov    0x8(%ebp),%eax
08265855 +0x062d:  movl   $&_ZTV17stFinishLoadParam+0x8,(%eax)
0826585b +0x0633:  mov    0x8(%ebp),%eax
0826585e +0x0636:  mov    %eax,(%esp)
08265861 +0x0639:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265866 +0x063e:  mov    $0x0,%eax
0826586b +0x0643:  test   %al,%al
0826586d +0x0645:  je     0826587a <+0x652>
0826586f +0x0647:  mov    0x8(%ebp),%eax
08265872 +0x064a:  mov    %eax,(%esp)
08265875 +0x064d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826587a +0x0652:  leave
0826587b +0x0653:  ret
0826587c +0x0654:  push   %ebp
0826587d +0x0655:  mov    %esp,%ebp
0826587f +0x0657:  sub    $0x18,%esp
08265882 +0x065a:  mov    0x8(%ebp),%eax
08265885 +0x065d:  mov    %eax,(%esp)
08265888 +0x0660:  call   0826584c <+0x624>
0826588d +0x0665:  mov    0x8(%ebp),%eax
08265890 +0x0668:  mov    %eax,(%esp)
08265893 +0x066b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265898 +0x0670:  leave
08265899 +0x0671:  ret
0826589a +0x0672:  push   %ebp
0826589b +0x0673:  mov    %esp,%ebp
0826589d +0x0675:  sub    $0x18,%esp
082658a0 +0x0678:  mov    0x8(%ebp),%eax
082658a3 +0x067b:  movl   $&_ZTV20AbnormalUseStackable+0x8,(%eax)
082658a9 +0x0681:  mov    0x8(%ebp),%eax
082658ac +0x0684:  mov    %eax,(%esp)
082658af +0x0687:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
082658b4 +0x068c:  mov    $0x0,%eax
082658b9 +0x0691:  test   %al,%al
082658bb +0x0693:  je     082658c8 <+0x6a0>
082658bd +0x0695:  mov    0x8(%ebp),%eax
082658c0 +0x0698:  mov    %eax,(%esp)
082658c3 +0x069b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082658c8 +0x06a0:  leave
082658c9 +0x06a1:  ret
082658ca +0x06a2:  push   %ebp
082658cb +0x06a3:  mov    %esp,%ebp
082658cd +0x06a5:  sub    $0x18,%esp
082658d0 +0x06a8:  mov    0x8(%ebp),%eax
082658d3 +0x06ab:  mov    %eax,(%esp)
082658d6 +0x06ae:  call   0826589a <+0x672>
082658db +0x06b3:  mov    0x8(%ebp),%eax
082658de +0x06b6:  mov    %eax,(%esp)
082658e1 +0x06b9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082658e6 +0x06be:  leave
082658e7 +0x06bf:  ret
082658e8 +0x06c0:  push   %ebp
082658e9 +0x06c1:  mov    %esp,%ebp
082658eb +0x06c3:  sub    $0x18,%esp
082658ee +0x06c6:  mov    0x8(%ebp),%eax
082658f1 +0x06c9:  movl   $&_ZTV23CheckSecurityProtection+0x8,(%eax)
082658f7 +0x06cf:  mov    0x8(%ebp),%eax
082658fa +0x06d2:  mov    %eax,(%esp)
082658fd +0x06d5:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265902 +0x06da:  mov    $0x0,%eax
08265907 +0x06df:  test   %al,%al
08265909 +0x06e1:  je     08265916 <+0x6ee>
0826590b +0x06e3:  mov    0x8(%ebp),%eax
0826590e +0x06e6:  mov    %eax,(%esp)
08265911 +0x06e9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265916 +0x06ee:  leave
08265917 +0x06ef:  ret
08265918 +0x06f0:  push   %ebp
08265919 +0x06f1:  mov    %esp,%ebp
0826591b +0x06f3:  sub    $0x18,%esp
0826591e +0x06f6:  mov    0x8(%ebp),%eax
08265921 +0x06f9:  mov    %eax,(%esp)
08265924 +0x06fc:  call   082658e8 <+0x6c0>
08265929 +0x0701:  mov    0x8(%ebp),%eax
0826592c +0x0704:  mov    %eax,(%esp)
0826592f +0x0707:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265934 +0x070c:  leave
08265935 +0x070d:  ret
08265936 +0x070e:  push   %ebp
08265937 +0x070f:  mov    %esp,%ebp
08265939 +0x0711:  sub    $0x18,%esp
0826593c +0x0714:  mov    0x8(%ebp),%eax
0826593f +0x0717:  movl   $&_ZTV17ScanBotByDrvParam+0x8,(%eax)
08265945 +0x071d:  mov    0x8(%ebp),%eax
08265948 +0x0720:  mov    %eax,(%esp)
0826594b +0x0723:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265950 +0x0728:  mov    $0x0,%eax
08265955 +0x072d:  test   %al,%al
08265957 +0x072f:  je     08265964 <+0x73c>
08265959 +0x0731:  mov    0x8(%ebp),%eax
0826595c +0x0734:  mov    %eax,(%esp)
0826595f +0x0737:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265964 +0x073c:  leave
08265965 +0x073d:  ret
08265966 +0x073e:  push   %ebp
08265967 +0x073f:  mov    %esp,%ebp
08265969 +0x0741:  sub    $0x18,%esp
0826596c +0x0744:  mov    0x8(%ebp),%eax
0826596f +0x0747:  mov    %eax,(%esp)
08265972 +0x074a:  call   08265936 <+0x70e>
08265977 +0x074f:  mov    0x8(%ebp),%eax
0826597a +0x0752:  mov    %eax,(%esp)
0826597d +0x0755:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265982 +0x075a:  leave
08265983 +0x075b:  ret
08265984 +0x075c:  push   %ebp
08265985 +0x075d:  mov    %esp,%ebp
08265987 +0x075f:  sub    $0x18,%esp
0826598a +0x0762:  mov    0x8(%ebp),%eax
0826598d +0x0765:  movl   $&_ZTV17ScanBotByDllParam+0x8,(%eax)
08265993 +0x076b:  mov    0x8(%ebp),%eax
08265996 +0x076e:  mov    %eax,(%esp)
08265999 +0x0771:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
0826599e +0x0776:  mov    $0x0,%eax
082659a3 +0x077b:  test   %al,%al
082659a5 +0x077d:  je     082659b2 <+0x78a>
082659a7 +0x077f:  mov    0x8(%ebp),%eax
082659aa +0x0782:  mov    %eax,(%esp)
082659ad +0x0785:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082659b2 +0x078a:  leave
082659b3 +0x078b:  ret
082659b4 +0x078c:  push   %ebp
082659b5 +0x078d:  mov    %esp,%ebp
082659b7 +0x078f:  sub    $0x18,%esp
082659ba +0x0792:  mov    0x8(%ebp),%eax
082659bd +0x0795:  mov    %eax,(%esp)
082659c0 +0x0798:  call   08265984 <+0x75c>
082659c5 +0x079d:  mov    0x8(%ebp),%eax
082659c8 +0x07a0:  mov    %eax,(%esp)
082659cb +0x07a3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082659d0 +0x07a8:  leave
082659d1 +0x07a9:  ret
082659d2 +0x07aa:  push   %ebp
082659d3 +0x07ab:  mov    %esp,%ebp
082659d5 +0x07ad:  sub    $0x18,%esp
082659d8 +0x07b0:  mov    0x8(%ebp),%eax
082659db +0x07b3:  movl   $&_ZTV15ScriptHashParam+0x8,(%eax)
082659e1 +0x07b9:  mov    0x8(%ebp),%eax
082659e4 +0x07bc:  mov    %eax,(%esp)
082659e7 +0x07bf:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
082659ec +0x07c4:  mov    $0x0,%eax
082659f1 +0x07c9:  test   %al,%al
082659f3 +0x07cb:  je     08265a00 <+0x7d8>
082659f5 +0x07cd:  mov    0x8(%ebp),%eax
082659f8 +0x07d0:  mov    %eax,(%esp)
082659fb +0x07d3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265a00 +0x07d8:  leave
08265a01 +0x07d9:  ret
08265a02 +0x07da:  push   %ebp
08265a03 +0x07db:  mov    %esp,%ebp
08265a05 +0x07dd:  sub    $0x18,%esp
08265a08 +0x07e0:  mov    0x8(%ebp),%eax
08265a0b +0x07e3:  mov    %eax,(%esp)
08265a0e +0x07e6:  call   082659d2 <+0x7aa>
08265a13 +0x07eb:  mov    0x8(%ebp),%eax
08265a16 +0x07ee:  mov    %eax,(%esp)
08265a19 +0x07f1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265a1e +0x07f6:  leave
08265a1f +0x07f7:  ret
08265a20 +0x07f8:  push   %ebp
08265a21 +0x07f9:  mov    %esp,%ebp
08265a23 +0x07fb:  sub    $0x18,%esp
08265a26 +0x07fe:  mov    0x8(%ebp),%eax
08265a29 +0x0801:  movl   $&_ZTV16SecuCardRpyParam+0x8,(%eax)
08265a2f +0x0807:  mov    0x8(%ebp),%eax
08265a32 +0x080a:  mov    %eax,(%esp)
08265a35 +0x080d:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265a3a +0x0812:  mov    $0x0,%eax
08265a3f +0x0817:  test   %al,%al
08265a41 +0x0819:  je     08265a4e <+0x826>
08265a43 +0x081b:  mov    0x8(%ebp),%eax
08265a46 +0x081e:  mov    %eax,(%esp)
08265a49 +0x0821:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265a4e +0x0826:  leave
08265a4f +0x0827:  ret
08265a50 +0x0828:  push   %ebp
08265a51 +0x0829:  mov    %esp,%ebp
08265a53 +0x082b:  sub    $0x18,%esp
08265a56 +0x082e:  mov    0x8(%ebp),%eax
08265a59 +0x0831:  mov    %eax,(%esp)
08265a5c +0x0834:  call   08265a20 <+0x7f8>
08265a61 +0x0839:  mov    0x8(%ebp),%eax
08265a64 +0x083c:  mov    %eax,(%esp)
08265a67 +0x083f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265a6c +0x0844:  leave
08265a6d +0x0845:  ret
08265a6e +0x0846:  push   %ebp
08265a6f +0x0847:  mov    %esp,%ebp
08265a71 +0x0849:  sub    $0x18,%esp
08265a74 +0x084c:  mov    0x8(%ebp),%eax
08265a77 +0x084f:  movl   $&_ZTV9TempParam+0x8,(%eax)
08265a7d +0x0855:  mov    0x8(%ebp),%eax
08265a80 +0x0858:  mov    %eax,(%esp)
08265a83 +0x085b:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265a88 +0x0860:  mov    $0x0,%eax
08265a8d +0x0865:  test   %al,%al
08265a8f +0x0867:  je     08265a9c <+0x874>
08265a91 +0x0869:  mov    0x8(%ebp),%eax
08265a94 +0x086c:  mov    %eax,(%esp)
08265a97 +0x086f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265a9c +0x0874:  leave
08265a9d +0x0875:  ret
08265a9e +0x0876:  push   %ebp
08265a9f +0x0877:  mov    %esp,%ebp
08265aa1 +0x0879:  sub    $0x18,%esp
08265aa4 +0x087c:  mov    0x8(%ebp),%eax
08265aa7 +0x087f:  mov    %eax,(%esp)
08265aaa +0x0882:  call   08265a6e <+0x846>
08265aaf +0x0887:  mov    0x8(%ebp),%eax
08265ab2 +0x088a:  mov    %eax,(%esp)
08265ab5 +0x088d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08265aba +0x0892:  leave
08265abb +0x0893:  ret
08265abc +0x0894:  push   %ebp
08265abd +0x0895:  mov    %esp,%ebp
08265abf +0x0897:  push   %esi
08265ac0 +0x0898:  push   %ebx
08265ac1 +0x0899:  sub    $0x40,%esp
08265ac4 +0x089c:  mov    0x8(%ebp),%eax
08265ac7 +0x089f:  mov    (%eax),%eax
08265ac9 +0x08a1:  add    $0x10,%eax
08265acc +0x08a4:  mov    (%eax),%edx
08265ace +0x08a6:  mov    0x10(%ebp),%eax
08265ad1 +0x08a9:  mov    %eax,0x8(%esp)
08265ad5 +0x08ad:  mov    0xc(%ebp),%eax
08265ad8 +0x08b0:  mov    %eax,0x4(%esp)
08265adc +0x08b4:  mov    0x8(%ebp),%eax
08265adf +0x08b7:  mov    %eax,(%esp)
08265ae2 +0x08ba:  call   *%edx
08265ae4 +0x08bc:  test   %eax,%eax
08265ae6 +0x08be:  setg   %al
08265ae9 +0x08c1:  test   %al,%al
08265aeb +0x08c3:  je     08265af7 <+0x8cf>
08265aed +0x08c5:  mov    $0x0,%ebx
08265af2 +0x08ca:  jmp    08265c03 <+0x9db>
08265af7 +0x08cf:  movl   $0x0,-0xc(%ebp)
08265afe +0x08d6:  mov    0x8(%ebp),%eax
08265b01 +0x08d9:  mov    (%eax),%eax
08265b03 +0x08db:  add    $0x14,%eax
08265b06 +0x08de:  mov    (%eax),%edx
08265b08 +0x08e0:  lea    -0x21(%ebp),%eax
08265b0b +0x08e3:  mov    %eax,0x8(%esp)
08265b0f +0x08e7:  mov    0x10(%ebp),%eax
08265b12 +0x08ea:  mov    %eax,0x4(%esp)
08265b16 +0x08ee:  mov    0x8(%ebp),%eax
08265b19 +0x08f1:  mov    %eax,(%esp)
08265b1c +0x08f4:  call   *%edx
08265b1e +0x08f6:  mov    %eax,-0xc(%ebp)
08265b21 +0x08f9:  cmpl   $0x0,-0xc(%ebp)
08265b25 +0x08fd:  setne  %al
08265b28 +0x0900:  test   %al,%al
08265b2a +0x0902:  je     08265b34 <+0x90c>
08265b2c +0x0904:  mov    -0xc(%ebp),%ebx
08265b2f +0x0907:  jmp    08265c03 <+0x9db>
08265b34 +0x090c:  lea    -0x2c(%ebp),%eax
08265b37 +0x090f:  mov    %eax,(%esp)
08265b3a +0x0912:  call   0826546c <+0x244>
08265b3f +0x0917:  mov    0x8(%ebp),%eax
08265b42 +0x091a:  mov    (%eax),%eax
08265b44 +0x091c:  add    $0x18,%eax
08265b47 +0x091f:  mov    (%eax),%edx
08265b49 +0x0921:  lea    -0x2c(%ebp),%eax
08265b4c +0x0924:  mov    %eax,0xc(%esp)
08265b50 +0x0928:  lea    -0x21(%ebp),%eax
08265b53 +0x092b:  mov    %eax,0x8(%esp)
08265b57 +0x092f:  mov    0xc(%ebp),%eax
08265b5a +0x0932:  mov    %eax,0x4(%esp)
08265b5e +0x0936:  mov    0x8(%ebp),%eax
08265b61 +0x0939:  mov    %eax,(%esp)
08265b64 +0x093c:  call   *%edx
08265b66 +0x093e:  mov    %eax,-0xc(%ebp)
08265b69 +0x0941:  cmpl   $0x0,-0xc(%ebp)
08265b6d +0x0945:  setg   %al
08265b70 +0x0948:  test   %al,%al
08265b72 +0x094a:  je     08265b79 <+0x951>
08265b74 +0x094c:  mov    -0xc(%ebp),%ebx
08265b77 +0x094f:  jmp    08265bf8 <+0x9d0>
08265b79 +0x0951:  cmpl   $0x0,-0xc(%ebp)
08265b7d +0x0955:  jns    08265b86 <+0x95e>
08265b7f +0x0957:  mov    $0x0,%ebx
08265b84 +0x095c:  jmp    08265bf8 <+0x9d0>
08265b86 +0x095e:  mov    0x8(%ebp),%eax
08265b89 +0x0961:  mov    (%eax),%eax
08265b8b +0x0963:  add    $0x1c,%eax
08265b8e +0x0966:  mov    (%eax),%edx
08265b90 +0x0968:  lea    -0x2c(%ebp),%eax
08265b93 +0x096b:  mov    %eax,0x8(%esp)
08265b97 +0x096f:  mov    0xc(%ebp),%eax
08265b9a +0x0972:  mov    %eax,0x4(%esp)
08265b9e +0x0976:  mov    0x8(%ebp),%eax
08265ba1 +0x0979:  mov    %eax,(%esp)
08265ba4 +0x097c:  call   *%edx
08265ba6 +0x097e:  mov    0x8(%ebp),%eax
08265ba9 +0x0981:  mov    (%eax),%eax
08265bab +0x0983:  add    $0xc,%eax
08265bae +0x0986:  mov    (%eax),%edx
08265bb0 +0x0988:  mov    0x10(%ebp),%eax
08265bb3 +0x098b:  mov    %eax,0x8(%esp)
08265bb7 +0x098f:  mov    0xc(%ebp),%eax
08265bba +0x0992:  mov    %eax,0x4(%esp)
08265bbe +0x0996:  mov    0x8(%ebp),%eax
08265bc1 +0x0999:  mov    %eax,(%esp)
08265bc4 +0x099c:  call   *%edx
08265bc6 +0x099e:  test   %eax,%eax
08265bc8 +0x09a0:  setg   %al
08265bcb +0x09a3:  test   %al,%al
08265bcd +0x09a5:  je     08265bd6 <+0x9ae>
08265bcf +0x09a7:  mov    $0x85,%ebx
08265bd4 +0x09ac:  jmp    08265bf8 <+0x9d0>
08265bd6 +0x09ae:  mov    $0x0,%ebx
08265bdb +0x09b3:  jmp    08265bf8 <+0x9d0>
08265bdd +0x09b5:  mov    %edx,%ebx
08265bdf +0x09b7:  mov    %eax,%esi
08265be1 +0x09b9:  lea    -0x2c(%ebp),%eax
08265be4 +0x09bc:  mov    %eax,(%esp)
08265be7 +0x09bf:  call   0826584c <+0x624>
08265bec +0x09c4:  mov    %esi,%eax
08265bee +0x09c6:  mov    %ebx,%edx
08265bf0 +0x09c8:  mov    %eax,(%esp)
08265bf3 +0x09cb:  call   08ae3750 <_Unwind_Resume>
08265bf8 +0x09d0:  lea    -0x2c(%ebp),%eax
08265bfb +0x09d3:  mov    %eax,(%esp)
08265bfe +0x09d6:  call   0826584c <+0x624>
08265c03 +0x09db:  mov    %ebx,%eax
08265c05 +0x09dd:  add    $0x40,%esp
08265c08 +0x09e0:  pop    %ebx
08265c09 +0x09e1:  pop    %esi
08265c0a +0x09e2:  pop    %ebp
08265c0b +0x09e3:  ret
08265c0c +0x09e4:  push   %ebp
08265c0d +0x09e5:  mov    %esp,%ebp
08265c0f +0x09e7:  mov    $0x0,%eax
08265c14 +0x09ec:  pop    %ebp
08265c15 +0x09ed:  ret
08265c16 +0x09ee:  push   %ebp
08265c17 +0x09ef:  mov    %esp,%ebp
08265c19 +0x09f1:  pop    %ebp
08265c1a +0x09f2:  ret
08265c1b +0x09f3:  nop
08265c1c +0x09f4:  push   %ebp
08265c1d +0x09f5:  mov    %esp,%ebp
08265c1f +0x09f7:  push   %esi
08265c20 +0x09f8:  push   %ebx
08265c21 +0x09f9:  sub    $0x30,%esp
08265c24 +0x09fc:  mov    0x8(%ebp),%eax
08265c27 +0x09ff:  mov    (%eax),%eax
08265c29 +0x0a01:  add    $0x10,%eax
08265c2c +0x0a04:  mov    (%eax),%edx
08265c2e +0x0a06:  mov    0x10(%ebp),%eax
08265c31 +0x0a09:  mov    %eax,0x8(%esp)
08265c35 +0x0a0d:  mov    0xc(%ebp),%eax
08265c38 +0x0a10:  mov    %eax,0x4(%esp)
08265c3c +0x0a14:  mov    0x8(%ebp),%eax
08265c3f +0x0a17:  mov    %eax,(%esp)
08265c42 +0x0a1a:  call   *%edx
08265c44 +0x0a1c:  test   %eax,%eax
08265c46 +0x0a1e:  setg   %al
08265c49 +0x0a21:  test   %al,%al
08265c4b +0x0a23:  je     08265c57 <+0xa2f>
08265c4d +0x0a25:  mov    $0x0,%ebx
08265c52 +0x0a2a:  jmp    08265d63 <+0xb3b>
08265c57 +0x0a2f:  movl   $0x0,-0xc(%ebp)
08265c5e +0x0a36:  mov    0x8(%ebp),%eax
08265c61 +0x0a39:  mov    (%eax),%eax
08265c63 +0x0a3b:  add    $0x14,%eax
08265c66 +0x0a3e:  mov    (%eax),%edx
08265c68 +0x0a40:  lea    -0x24(%ebp),%eax
08265c6b +0x0a43:  mov    %eax,0x8(%esp)
08265c6f +0x0a47:  mov    0x10(%ebp),%eax
08265c72 +0x0a4a:  mov    %eax,0x4(%esp)
08265c76 +0x0a4e:  mov    0x8(%ebp),%eax
08265c79 +0x0a51:  mov    %eax,(%esp)
08265c7c +0x0a54:  call   *%edx
08265c7e +0x0a56:  mov    %eax,-0xc(%ebp)
08265c81 +0x0a59:  cmpl   $0x0,-0xc(%ebp)
08265c85 +0x0a5d:  setne  %al
08265c88 +0x0a60:  test   %al,%al
08265c8a +0x0a62:  je     08265c94 <+0xa6c>
08265c8c +0x0a64:  mov    -0xc(%ebp),%ebx
08265c8f +0x0a67:  jmp    08265d63 <+0xb3b>
08265c94 +0x0a6c:  lea    -0x28(%ebp),%eax
08265c97 +0x0a6f:  mov    %eax,(%esp)
08265c9a +0x0a72:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08265c9f +0x0a77:  mov    0x8(%ebp),%eax
08265ca2 +0x0a7a:  mov    (%eax),%eax
08265ca4 +0x0a7c:  add    $0x18,%eax
08265ca7 +0x0a7f:  mov    (%eax),%edx
08265ca9 +0x0a81:  lea    -0x28(%ebp),%eax
08265cac +0x0a84:  mov    %eax,0xc(%esp)
08265cb0 +0x0a88:  lea    -0x24(%ebp),%eax
08265cb3 +0x0a8b:  mov    %eax,0x8(%esp)
08265cb7 +0x0a8f:  mov    0xc(%ebp),%eax
08265cba +0x0a92:  mov    %eax,0x4(%esp)
08265cbe +0x0a96:  mov    0x8(%ebp),%eax
08265cc1 +0x0a99:  mov    %eax,(%esp)
08265cc4 +0x0a9c:  call   *%edx
08265cc6 +0x0a9e:  mov    %eax,-0xc(%ebp)
08265cc9 +0x0aa1:  cmpl   $0x0,-0xc(%ebp)
08265ccd +0x0aa5:  setg   %al
08265cd0 +0x0aa8:  test   %al,%al
08265cd2 +0x0aaa:  je     08265cd9 <+0xab1>
08265cd4 +0x0aac:  mov    -0xc(%ebp),%ebx
08265cd7 +0x0aaf:  jmp    08265d58 <+0xb30>
08265cd9 +0x0ab1:  cmpl   $0x0,-0xc(%ebp)
08265cdd +0x0ab5:  jns    08265ce6 <+0xabe>
08265cdf +0x0ab7:  mov    $0x0,%ebx
08265ce4 +0x0abc:  jmp    08265d58 <+0xb30>
08265ce6 +0x0abe:  mov    0x8(%ebp),%eax
08265ce9 +0x0ac1:  mov    (%eax),%eax
08265ceb +0x0ac3:  add    $0x1c,%eax
08265cee +0x0ac6:  mov    (%eax),%edx
08265cf0 +0x0ac8:  lea    -0x28(%ebp),%eax
08265cf3 +0x0acb:  mov    %eax,0x8(%esp)
08265cf7 +0x0acf:  mov    0xc(%ebp),%eax
08265cfa +0x0ad2:  mov    %eax,0x4(%esp)
08265cfe +0x0ad6:  mov    0x8(%ebp),%eax
08265d01 +0x0ad9:  mov    %eax,(%esp)
08265d04 +0x0adc:  call   *%edx
08265d06 +0x0ade:  mov    0x8(%ebp),%eax
08265d09 +0x0ae1:  mov    (%eax),%eax
08265d0b +0x0ae3:  add    $0xc,%eax
08265d0e +0x0ae6:  mov    (%eax),%edx
08265d10 +0x0ae8:  mov    0x10(%ebp),%eax
08265d13 +0x0aeb:  mov    %eax,0x8(%esp)
08265d17 +0x0aef:  mov    0xc(%ebp),%eax
08265d1a +0x0af2:  mov    %eax,0x4(%esp)
08265d1e +0x0af6:  mov    0x8(%ebp),%eax
08265d21 +0x0af9:  mov    %eax,(%esp)
08265d24 +0x0afc:  call   *%edx
08265d26 +0x0afe:  test   %eax,%eax
08265d28 +0x0b00:  setg   %al
08265d2b +0x0b03:  test   %al,%al
08265d2d +0x0b05:  je     08265d36 <+0xb0e>
08265d2f +0x0b07:  mov    $0x85,%ebx
08265d34 +0x0b0c:  jmp    08265d58 <+0xb30>
08265d36 +0x0b0e:  mov    $0x0,%ebx
08265d3b +0x0b13:  jmp    08265d58 <+0xb30>
08265d3d +0x0b15:  mov    %edx,%ebx
08265d3f +0x0b17:  mov    %eax,%esi
08265d41 +0x0b19:  lea    -0x28(%ebp),%eax
08265d44 +0x0b1c:  mov    %eax,(%esp)
08265d47 +0x0b1f:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265d4c +0x0b24:  mov    %esi,%eax
08265d4e +0x0b26:  mov    %ebx,%edx
08265d50 +0x0b28:  mov    %eax,(%esp)
08265d53 +0x0b2b:  call   08ae3750 <_Unwind_Resume>
08265d58 +0x0b30:  lea    -0x28(%ebp),%eax
08265d5b +0x0b33:  mov    %eax,(%esp)
08265d5e +0x0b36:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08265d63 +0x0b3b:  mov    %ebx,%eax
08265d65 +0x0b3d:  add    $0x30,%esp
08265d68 +0x0b40:  pop    %ebx
08265d69 +0x0b41:  pop    %esi
08265d6a +0x0b42:  pop    %ebp
08265d6b +0x0b43:  ret
08265d6c +0x0b44:  push   %ebp
08265d6d +0x0b45:  mov    %esp,%ebp
08265d6f +0x0b47:  mov    $0x0,%eax
08265d74 +0x0b4c:  pop    %ebp
08265d75 +0x0b4d:  ret
08265d76 +0x0b4e:  push   %ebp
08265d77 +0x0b4f:  mov    %esp,%ebp
08265d79 +0x0b51:  sub    $0x38,%esp
08265d7c +0x0b54:  mov    0xc(%ebp),%eax
08265d7f +0x0b57:  mov    %eax,(%esp)
08265d82 +0x0b5a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08265d87 +0x0b5f:  shr    $0x1f,%eax
08265d8a +0x0b62:  test   %al,%al
08265d8c +0x0b64:  je     08265e00 <+0xbd8>
08265d8e +0x0b66:  movl   $0x1,0x4(%esp)
08265d96 +0x0b6e:  mov    0x10(%ebp),%eax
08265d99 +0x0b71:  mov    %eax,(%esp)
08265d9c +0x0b74:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08265da1 +0x0b79:  lea    -0xa(%ebp),%eax
08265da4 +0x0b7c:  mov    %eax,0x4(%esp)
08265da8 +0x0b80:  mov    0x10(%ebp),%eax
08265dab +0x0b83:  mov    %eax,(%esp)
08265dae +0x0b86:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08265db3 +0x0b8b:  mov    0x10(%ebp),%eax
08265db6 +0x0b8e:  mov    %eax,(%esp)
08265db9 +0x0b91:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08265dbe +0x0b96:  movzwl -0xa(%ebp),%edx
08265dc2 +0x0b9a:  movswl %dx,%edx
08265dc5 +0x0b9d:  mov    %eax,0x18(%esp)
08265dc9 +0x0ba1:  mov    %edx,0x14(%esp)
08265dcd +0x0ba5:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08265dd5 +0x0bad:  movl   $0x94,0xc(%esp)
08265ddd +0x0bb5:  movl   $&_ZZN17IPacketDispatcherI26MSG_FLOAT_RDATA_MODULATION9ParamBaseL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08265de5 +0x0bbd:  movl   $"PacketDispatcher.h",0x4(%esp)
08265ded +0x0bc5:  movl   $0x1,(%esp)
08265df4 +0x0bcc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08265df9 +0x0bd1:  mov    $0x95,%eax
08265dfe +0x0bd6:  jmp    08265e05 <+0xbdd>
08265e00 +0x0bd8:  mov    $0x0,%eax
08265e05 +0x0bdd:  leave
08265e06 +0x0bde:  ret
08265e07 +0x0bdf:  nop
08265e08 +0x0be0:  push   %ebp
08265e09 +0x0be1:  mov    %esp,%ebp
08265e0b +0x0be3:  pop    %ebp
08265e0c +0x0be4:  ret
08265e0d +0x0be5:  nop
08265e0e +0x0be6:  push   %ebp
08265e0f +0x0be7:  mov    %esp,%ebp
08265e11 +0x0be9:  push   %esi
08265e12 +0x0bea:  push   %ebx
08265e13 +0x0beb:  sub    $0x40,%esp
08265e16 +0x0bee:  mov    0x8(%ebp),%eax
08265e19 +0x0bf1:  mov    (%eax),%eax
08265e1b +0x0bf3:  add    $0x10,%eax
08265e1e +0x0bf6:  mov    (%eax),%edx
08265e20 +0x0bf8:  mov    0x10(%ebp),%eax
08265e23 +0x0bfb:  mov    %eax,0x8(%esp)
08265e27 +0x0bff:  mov    0xc(%ebp),%eax
08265e2a +0x0c02:  mov    %eax,0x4(%esp)
08265e2e +0x0c06:  mov    0x8(%ebp),%eax
08265e31 +0x0c09:  mov    %eax,(%esp)
08265e34 +0x0c0c:  call   *%edx
08265e36 +0x0c0e:  test   %eax,%eax
08265e38 +0x0c10:  setg   %al
08265e3b +0x0c13:  test   %al,%al
08265e3d +0x0c15:  je     08265e49 <+0xc21>
08265e3f +0x0c17:  mov    $0x0,%ebx
08265e44 +0x0c1c:  jmp    08265f55 <+0xd2d>
08265e49 +0x0c21:  movl   $0x0,-0xc(%ebp)
08265e50 +0x0c28:  mov    0x8(%ebp),%eax
08265e53 +0x0c2b:  mov    (%eax),%eax
08265e55 +0x0c2d:  add    $0x14,%eax
08265e58 +0x0c30:  mov    (%eax),%edx
08265e5a +0x0c32:  lea    -0x24(%ebp),%eax
08265e5d +0x0c35:  mov    %eax,0x8(%esp)
08265e61 +0x0c39:  mov    0x10(%ebp),%eax
08265e64 +0x0c3c:  mov    %eax,0x4(%esp)
08265e68 +0x0c40:  mov    0x8(%ebp),%eax
08265e6b +0x0c43:  mov    %eax,(%esp)
08265e6e +0x0c46:  call   *%edx
08265e70 +0x0c48:  mov    %eax,-0xc(%ebp)
08265e73 +0x0c4b:  cmpl   $0x0,-0xc(%ebp)
08265e77 +0x0c4f:  setne  %al
08265e7a +0x0c52:  test   %al,%al
08265e7c +0x0c54:  je     08265e86 <+0xc5e>
08265e7e +0x0c56:  mov    -0xc(%ebp),%ebx
08265e81 +0x0c59:  jmp    08265f55 <+0xd2d>
08265e86 +0x0c5e:  lea    -0x29(%ebp),%eax
08265e89 +0x0c61:  mov    %eax,(%esp)
08265e8c +0x0c64:  call   08265448 <+0x220>
08265e91 +0x0c69:  mov    0x8(%ebp),%eax
08265e94 +0x0c6c:  mov    (%eax),%eax
08265e96 +0x0c6e:  add    $0x18,%eax
08265e99 +0x0c71:  mov    (%eax),%edx
08265e9b +0x0c73:  lea    -0x29(%ebp),%eax
08265e9e +0x0c76:  mov    %eax,0xc(%esp)
08265ea2 +0x0c7a:  lea    -0x24(%ebp),%eax
08265ea5 +0x0c7d:  mov    %eax,0x8(%esp)
08265ea9 +0x0c81:  mov    0xc(%ebp),%eax
08265eac +0x0c84:  mov    %eax,0x4(%esp)
08265eb0 +0x0c88:  mov    0x8(%ebp),%eax
08265eb3 +0x0c8b:  mov    %eax,(%esp)
08265eb6 +0x0c8e:  call   *%edx
08265eb8 +0x0c90:  mov    %eax,-0xc(%ebp)
08265ebb +0x0c93:  cmpl   $0x0,-0xc(%ebp)
08265ebf +0x0c97:  setg   %al
08265ec2 +0x0c9a:  test   %al,%al
08265ec4 +0x0c9c:  je     08265ecb <+0xca3>
08265ec6 +0x0c9e:  mov    -0xc(%ebp),%ebx
08265ec9 +0x0ca1:  jmp    08265f4a <+0xd22>
08265ecb +0x0ca3:  cmpl   $0x0,-0xc(%ebp)
08265ecf +0x0ca7:  jns    08265ed8 <+0xcb0>
08265ed1 +0x0ca9:  mov    $0x0,%ebx
08265ed6 +0x0cae:  jmp    08265f4a <+0xd22>
08265ed8 +0x0cb0:  mov    0x8(%ebp),%eax
08265edb +0x0cb3:  mov    (%eax),%eax
08265edd +0x0cb5:  add    $0x1c,%eax
08265ee0 +0x0cb8:  mov    (%eax),%edx
08265ee2 +0x0cba:  lea    -0x29(%ebp),%eax
08265ee5 +0x0cbd:  mov    %eax,0x8(%esp)
08265ee9 +0x0cc1:  mov    0xc(%ebp),%eax
08265eec +0x0cc4:  mov    %eax,0x4(%esp)
08265ef0 +0x0cc8:  mov    0x8(%ebp),%eax
08265ef3 +0x0ccb:  mov    %eax,(%esp)
08265ef6 +0x0cce:  call   *%edx
08265ef8 +0x0cd0:  mov    0x8(%ebp),%eax
08265efb +0x0cd3:  mov    (%eax),%eax
08265efd +0x0cd5:  add    $0xc,%eax
08265f00 +0x0cd8:  mov    (%eax),%edx
08265f02 +0x0cda:  mov    0x10(%ebp),%eax
08265f05 +0x0cdd:  mov    %eax,0x8(%esp)
08265f09 +0x0ce1:  mov    0xc(%ebp),%eax
08265f0c +0x0ce4:  mov    %eax,0x4(%esp)
08265f10 +0x0ce8:  mov    0x8(%ebp),%eax
08265f13 +0x0ceb:  mov    %eax,(%esp)
08265f16 +0x0cee:  call   *%edx
08265f18 +0x0cf0:  test   %eax,%eax
08265f1a +0x0cf2:  setg   %al
08265f1d +0x0cf5:  test   %al,%al
08265f1f +0x0cf7:  je     08265f28 <+0xd00>
08265f21 +0x0cf9:  mov    $0x85,%ebx
08265f26 +0x0cfe:  jmp    08265f4a <+0xd22>
08265f28 +0x0d00:  mov    $0x0,%ebx
08265f2d +0x0d05:  jmp    08265f4a <+0xd22>
08265f2f +0x0d07:  mov    %edx,%ebx
08265f31 +0x0d09:  mov    %eax,%esi
08265f33 +0x0d0b:  lea    -0x29(%ebp),%eax
08265f36 +0x0d0e:  mov    %eax,(%esp)
08265f39 +0x0d11:  call   0826589a <+0x672>
08265f3e +0x0d16:  mov    %esi,%eax
08265f40 +0x0d18:  mov    %ebx,%edx
08265f42 +0x0d1a:  mov    %eax,(%esp)
08265f45 +0x0d1d:  call   08ae3750 <_Unwind_Resume>
08265f4a +0x0d22:  lea    -0x29(%ebp),%eax
08265f4d +0x0d25:  mov    %eax,(%esp)
08265f50 +0x0d28:  call   0826589a <+0x672>
08265f55 +0x0d2d:  mov    %ebx,%eax
08265f57 +0x0d2f:  add    $0x40,%esp
08265f5a +0x0d32:  pop    %ebx
08265f5b +0x0d33:  pop    %esi
08265f5c +0x0d34:  pop    %ebp
08265f5d +0x0d35:  ret
08265f5e +0x0d36:  push   %ebp
08265f5f +0x0d37:  mov    %esp,%ebp
08265f61 +0x0d39:  mov    $0x0,%eax
08265f66 +0x0d3e:  pop    %ebp
08265f67 +0x0d3f:  ret
08265f68 +0x0d40:  push   %ebp
08265f69 +0x0d41:  mov    %esp,%ebp
08265f6b +0x0d43:  sub    $0x38,%esp
08265f6e +0x0d46:  mov    0xc(%ebp),%eax
08265f71 +0x0d49:  mov    %eax,(%esp)
08265f74 +0x0d4c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08265f79 +0x0d51:  shr    $0x1f,%eax
08265f7c +0x0d54:  test   %al,%al
08265f7e +0x0d56:  je     08265ff2 <+0xdca>
08265f80 +0x0d58:  movl   $0x1,0x4(%esp)
08265f88 +0x0d60:  mov    0x10(%ebp),%eax
08265f8b +0x0d63:  mov    %eax,(%esp)
08265f8e +0x0d66:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08265f93 +0x0d6b:  lea    -0xa(%ebp),%eax
08265f96 +0x0d6e:  mov    %eax,0x4(%esp)
08265f9a +0x0d72:  mov    0x10(%ebp),%eax
08265f9d +0x0d75:  mov    %eax,(%esp)
08265fa0 +0x0d78:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08265fa5 +0x0d7d:  mov    0x10(%ebp),%eax
08265fa8 +0x0d80:  mov    %eax,(%esp)
08265fab +0x0d83:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08265fb0 +0x0d88:  movzwl -0xa(%ebp),%edx
08265fb4 +0x0d8c:  movswl %dx,%edx
08265fb7 +0x0d8f:  mov    %eax,0x18(%esp)
08265fbb +0x0d93:  mov    %edx,0x14(%esp)
08265fbf +0x0d97:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08265fc7 +0x0d9f:  movl   $0x94,0xc(%esp)
08265fcf +0x0da7:  movl   $&_ZZN17IPacketDispatcherI26MSG_ABNORMAL_USE_STACKABLE20AbnormalUseStackableL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08265fd7 +0x0daf:  movl   $"PacketDispatcher.h",0x4(%esp)
08265fdf +0x0db7:  movl   $0x1,(%esp)
08265fe6 +0x0dbe:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08265feb +0x0dc3:  mov    $0x95,%eax
08265ff0 +0x0dc8:  jmp    08265ff7 <+0xdcf>
08265ff2 +0x0dca:  mov    $0x0,%eax
08265ff7 +0x0dcf:  leave
08265ff8 +0x0dd0:  ret
08265ff9 +0x0dd1:  nop
08265ffa +0x0dd2:  push   %ebp
08265ffb +0x0dd3:  mov    %esp,%ebp
08265ffd +0x0dd5:  pop    %ebp
08265ffe +0x0dd6:  ret
08265fff +0x0dd7:  nop
08266000 +0x0dd8:  push   %ebp
08266001 +0x0dd9:  mov    %esp,%ebp
08266003 +0x0ddb:  push   %esi
08266004 +0x0ddc:  push   %ebx
08266005 +0x0ddd:  sub    $0x30,%esp
08266008 +0x0de0:  mov    0x8(%ebp),%eax
0826600b +0x0de3:  mov    (%eax),%eax
0826600d +0x0de5:  add    $0x10,%eax
08266010 +0x0de8:  mov    (%eax),%edx
08266012 +0x0dea:  mov    0x10(%ebp),%eax
08266015 +0x0ded:  mov    %eax,0x8(%esp)
08266019 +0x0df1:  mov    0xc(%ebp),%eax
0826601c +0x0df4:  mov    %eax,0x4(%esp)
08266020 +0x0df8:  mov    0x8(%ebp),%eax
08266023 +0x0dfb:  mov    %eax,(%esp)
08266026 +0x0dfe:  call   *%edx
08266028 +0x0e00:  test   %eax,%eax
0826602a +0x0e02:  setg   %al
0826602d +0x0e05:  test   %al,%al
0826602f +0x0e07:  je     0826603b <+0xe13>
08266031 +0x0e09:  mov    $0x0,%ebx
08266036 +0x0e0e:  jmp    08266147 <+0xf1f>
0826603b +0x0e13:  movl   $0x0,-0xc(%ebp)
08266042 +0x0e1a:  mov    0x8(%ebp),%eax
08266045 +0x0e1d:  mov    (%eax),%eax
08266047 +0x0e1f:  add    $0x14,%eax
0826604a +0x0e22:  mov    (%eax),%edx
0826604c +0x0e24:  lea    -0x19(%ebp),%eax
0826604f +0x0e27:  mov    %eax,0x8(%esp)
08266053 +0x0e2b:  mov    0x10(%ebp),%eax
08266056 +0x0e2e:  mov    %eax,0x4(%esp)
0826605a +0x0e32:  mov    0x8(%ebp),%eax
0826605d +0x0e35:  mov    %eax,(%esp)
08266060 +0x0e38:  call   *%edx
08266062 +0x0e3a:  mov    %eax,-0xc(%ebp)
08266065 +0x0e3d:  cmpl   $0x0,-0xc(%ebp)
08266069 +0x0e41:  setne  %al
0826606c +0x0e44:  test   %al,%al
0826606e +0x0e46:  je     08266078 <+0xe50>
08266070 +0x0e48:  mov    -0xc(%ebp),%ebx
08266073 +0x0e4b:  jmp    08266147 <+0xf1f>
08266078 +0x0e50:  lea    -0x1e(%ebp),%eax
0826607b +0x0e53:  mov    %eax,(%esp)
0826607e +0x0e56:  call   08265424 <+0x1fc>
08266083 +0x0e5b:  mov    0x8(%ebp),%eax
08266086 +0x0e5e:  mov    (%eax),%eax
08266088 +0x0e60:  add    $0x18,%eax
0826608b +0x0e63:  mov    (%eax),%edx
0826608d +0x0e65:  lea    -0x1e(%ebp),%eax
08266090 +0x0e68:  mov    %eax,0xc(%esp)
08266094 +0x0e6c:  lea    -0x19(%ebp),%eax
08266097 +0x0e6f:  mov    %eax,0x8(%esp)
0826609b +0x0e73:  mov    0xc(%ebp),%eax
0826609e +0x0e76:  mov    %eax,0x4(%esp)
082660a2 +0x0e7a:  mov    0x8(%ebp),%eax
082660a5 +0x0e7d:  mov    %eax,(%esp)
082660a8 +0x0e80:  call   *%edx
082660aa +0x0e82:  mov    %eax,-0xc(%ebp)
082660ad +0x0e85:  cmpl   $0x0,-0xc(%ebp)
082660b1 +0x0e89:  setg   %al
082660b4 +0x0e8c:  test   %al,%al
082660b6 +0x0e8e:  je     082660bd <+0xe95>
082660b8 +0x0e90:  mov    -0xc(%ebp),%ebx
082660bb +0x0e93:  jmp    0826613c <+0xf14>
082660bd +0x0e95:  cmpl   $0x0,-0xc(%ebp)
082660c1 +0x0e99:  jns    082660ca <+0xea2>
082660c3 +0x0e9b:  mov    $0x0,%ebx
082660c8 +0x0ea0:  jmp    0826613c <+0xf14>
082660ca +0x0ea2:  mov    0x8(%ebp),%eax
082660cd +0x0ea5:  mov    (%eax),%eax
082660cf +0x0ea7:  add    $0x1c,%eax
082660d2 +0x0eaa:  mov    (%eax),%edx
082660d4 +0x0eac:  lea    -0x1e(%ebp),%eax
082660d7 +0x0eaf:  mov    %eax,0x8(%esp)
082660db +0x0eb3:  mov    0xc(%ebp),%eax
082660de +0x0eb6:  mov    %eax,0x4(%esp)
082660e2 +0x0eba:  mov    0x8(%ebp),%eax
082660e5 +0x0ebd:  mov    %eax,(%esp)
082660e8 +0x0ec0:  call   *%edx
082660ea +0x0ec2:  mov    0x8(%ebp),%eax
082660ed +0x0ec5:  mov    (%eax),%eax
082660ef +0x0ec7:  add    $0xc,%eax
082660f2 +0x0eca:  mov    (%eax),%edx
082660f4 +0x0ecc:  mov    0x10(%ebp),%eax
082660f7 +0x0ecf:  mov    %eax,0x8(%esp)
082660fb +0x0ed3:  mov    0xc(%ebp),%eax
082660fe +0x0ed6:  mov    %eax,0x4(%esp)
08266102 +0x0eda:  mov    0x8(%ebp),%eax
08266105 +0x0edd:  mov    %eax,(%esp)
08266108 +0x0ee0:  call   *%edx
0826610a +0x0ee2:  test   %eax,%eax
0826610c +0x0ee4:  setg   %al
0826610f +0x0ee7:  test   %al,%al
08266111 +0x0ee9:  je     0826611a <+0xef2>
08266113 +0x0eeb:  mov    $0x85,%ebx
08266118 +0x0ef0:  jmp    0826613c <+0xf14>
0826611a +0x0ef2:  mov    $0x0,%ebx
0826611f +0x0ef7:  jmp    0826613c <+0xf14>
08266121 +0x0ef9:  mov    %edx,%ebx
08266123 +0x0efb:  mov    %eax,%esi
08266125 +0x0efd:  lea    -0x1e(%ebp),%eax
08266128 +0x0f00:  mov    %eax,(%esp)
0826612b +0x0f03:  call   082658e8 <+0x6c0>
08266130 +0x0f08:  mov    %esi,%eax
08266132 +0x0f0a:  mov    %ebx,%edx
08266134 +0x0f0c:  mov    %eax,(%esp)
08266137 +0x0f0f:  call   08ae3750 <_Unwind_Resume>
0826613c +0x0f14:  lea    -0x1e(%ebp),%eax
0826613f +0x0f17:  mov    %eax,(%esp)
08266142 +0x0f1a:  call   082658e8 <+0x6c0>
08266147 +0x0f1f:  mov    %ebx,%eax
08266149 +0x0f21:  add    $0x30,%esp
0826614c +0x0f24:  pop    %ebx
0826614d +0x0f25:  pop    %esi
0826614e +0x0f26:  pop    %ebp
0826614f +0x0f27:  ret
08266150 +0x0f28:  push   %ebp
08266151 +0x0f29:  mov    %esp,%ebp
08266153 +0x0f2b:  mov    $0x0,%eax
08266158 +0x0f30:  pop    %ebp
08266159 +0x0f31:  ret
0826615a +0x0f32:  push   %ebp
0826615b +0x0f33:  mov    %esp,%ebp
0826615d +0x0f35:  sub    $0x38,%esp
08266160 +0x0f38:  mov    0xc(%ebp),%eax
08266163 +0x0f3b:  mov    %eax,(%esp)
08266166 +0x0f3e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0826616b +0x0f43:  shr    $0x1f,%eax
0826616e +0x0f46:  test   %al,%al
08266170 +0x0f48:  je     082661e4 <+0xfbc>
08266172 +0x0f4a:  movl   $0x1,0x4(%esp)
0826617a +0x0f52:  mov    0x10(%ebp),%eax
0826617d +0x0f55:  mov    %eax,(%esp)
08266180 +0x0f58:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266185 +0x0f5d:  lea    -0xa(%ebp),%eax
08266188 +0x0f60:  mov    %eax,0x4(%esp)
0826618c +0x0f64:  mov    0x10(%ebp),%eax
0826618f +0x0f67:  mov    %eax,(%esp)
08266192 +0x0f6a:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266197 +0x0f6f:  mov    0x10(%ebp),%eax
0826619a +0x0f72:  mov    %eax,(%esp)
0826619d +0x0f75:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
082661a2 +0x0f7a:  movzwl -0xa(%ebp),%edx
082661a6 +0x0f7e:  movswl %dx,%edx
082661a9 +0x0f81:  mov    %eax,0x18(%esp)
082661ad +0x0f85:  mov    %edx,0x14(%esp)
082661b1 +0x0f89:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
082661b9 +0x0f91:  movl   $0x94,0xc(%esp)
082661c1 +0x0f99:  movl   $&_ZZN17IPacketDispatcherI8MSG_BASE23CheckSecurityProtectionL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
082661c9 +0x0fa1:  movl   $"PacketDispatcher.h",0x4(%esp)
082661d1 +0x0fa9:  movl   $0x1,(%esp)
082661d8 +0x0fb0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082661dd +0x0fb5:  mov    $0x95,%eax
082661e2 +0x0fba:  jmp    082661e9 <+0xfc1>
082661e4 +0x0fbc:  mov    $0x0,%eax
082661e9 +0x0fc1:  leave
082661ea +0x0fc2:  ret
082661eb +0x0fc3:  nop
082661ec +0x0fc4:  push   %ebp
082661ed +0x0fc5:  mov    %esp,%ebp
082661ef +0x0fc7:  push   %esi
082661f0 +0x0fc8:  push   %ebx
082661f1 +0x0fc9:  sub    $0x40,%esp
082661f4 +0x0fcc:  mov    0x8(%ebp),%eax
082661f7 +0x0fcf:  mov    (%eax),%eax
082661f9 +0x0fd1:  add    $0x10,%eax
082661fc +0x0fd4:  mov    (%eax),%edx
082661fe +0x0fd6:  mov    0x10(%ebp),%eax
08266201 +0x0fd9:  mov    %eax,0x8(%esp)
08266205 +0x0fdd:  mov    0xc(%ebp),%eax
08266208 +0x0fe0:  mov    %eax,0x4(%esp)
0826620c +0x0fe4:  mov    0x8(%ebp),%eax
0826620f +0x0fe7:  mov    %eax,(%esp)
08266212 +0x0fea:  call   *%edx
08266214 +0x0fec:  test   %eax,%eax
08266216 +0x0fee:  setg   %al
08266219 +0x0ff1:  test   %al,%al
0826621b +0x0ff3:  je     08266227 <+0xfff>
0826621d +0x0ff5:  mov    $0x0,%ebx
08266222 +0x0ffa:  jmp    08266333 <+0x110b>
08266227 +0x0fff:  movl   $0x0,-0xc(%ebp)
0826622e +0x1006:  mov    0x8(%ebp),%eax
08266231 +0x1009:  mov    (%eax),%eax
08266233 +0x100b:  add    $0x14,%eax
08266236 +0x100e:  mov    (%eax),%edx
08266238 +0x1010:  lea    -0x1e(%ebp),%eax
0826623b +0x1013:  mov    %eax,0x8(%esp)
0826623f +0x1017:  mov    0x10(%ebp),%eax
08266242 +0x101a:  mov    %eax,0x4(%esp)
08266246 +0x101e:  mov    0x8(%ebp),%eax
08266249 +0x1021:  mov    %eax,(%esp)
0826624c +0x1024:  call   *%edx
0826624e +0x1026:  mov    %eax,-0xc(%ebp)
08266251 +0x1029:  cmpl   $0x0,-0xc(%ebp)
08266255 +0x102d:  setne  %al
08266258 +0x1030:  test   %al,%al
0826625a +0x1032:  je     08266264 <+0x103c>
0826625c +0x1034:  mov    -0xc(%ebp),%ebx
0826625f +0x1037:  jmp    08266333 <+0x110b>
08266264 +0x103c:  lea    -0x2c(%ebp),%eax
08266267 +0x103f:  mov    %eax,(%esp)
0826626a +0x1042:  call   082653f6 <+0x1ce>
0826626f +0x1047:  mov    0x8(%ebp),%eax
08266272 +0x104a:  mov    (%eax),%eax
08266274 +0x104c:  add    $0x18,%eax
08266277 +0x104f:  mov    (%eax),%edx
08266279 +0x1051:  lea    -0x2c(%ebp),%eax
0826627c +0x1054:  mov    %eax,0xc(%esp)
08266280 +0x1058:  lea    -0x1e(%ebp),%eax
08266283 +0x105b:  mov    %eax,0x8(%esp)
08266287 +0x105f:  mov    0xc(%ebp),%eax
0826628a +0x1062:  mov    %eax,0x4(%esp)
0826628e +0x1066:  mov    0x8(%ebp),%eax
08266291 +0x1069:  mov    %eax,(%esp)
08266294 +0x106c:  call   *%edx
08266296 +0x106e:  mov    %eax,-0xc(%ebp)
08266299 +0x1071:  cmpl   $0x0,-0xc(%ebp)
0826629d +0x1075:  setg   %al
082662a0 +0x1078:  test   %al,%al
082662a2 +0x107a:  je     082662a9 <+0x1081>
082662a4 +0x107c:  mov    -0xc(%ebp),%ebx
082662a7 +0x107f:  jmp    08266328 <+0x1100>
082662a9 +0x1081:  cmpl   $0x0,-0xc(%ebp)
082662ad +0x1085:  jns    082662b6 <+0x108e>
082662af +0x1087:  mov    $0x0,%ebx
082662b4 +0x108c:  jmp    08266328 <+0x1100>
082662b6 +0x108e:  mov    0x8(%ebp),%eax
082662b9 +0x1091:  mov    (%eax),%eax
082662bb +0x1093:  add    $0x1c,%eax
082662be +0x1096:  mov    (%eax),%edx
082662c0 +0x1098:  lea    -0x2c(%ebp),%eax
082662c3 +0x109b:  mov    %eax,0x8(%esp)
082662c7 +0x109f:  mov    0xc(%ebp),%eax
082662ca +0x10a2:  mov    %eax,0x4(%esp)
082662ce +0x10a6:  mov    0x8(%ebp),%eax
082662d1 +0x10a9:  mov    %eax,(%esp)
082662d4 +0x10ac:  call   *%edx
082662d6 +0x10ae:  mov    0x8(%ebp),%eax
082662d9 +0x10b1:  mov    (%eax),%eax
082662db +0x10b3:  add    $0xc,%eax
082662de +0x10b6:  mov    (%eax),%edx
082662e0 +0x10b8:  mov    0x10(%ebp),%eax
082662e3 +0x10bb:  mov    %eax,0x8(%esp)
082662e7 +0x10bf:  mov    0xc(%ebp),%eax
082662ea +0x10c2:  mov    %eax,0x4(%esp)
082662ee +0x10c6:  mov    0x8(%ebp),%eax
082662f1 +0x10c9:  mov    %eax,(%esp)
082662f4 +0x10cc:  call   *%edx
082662f6 +0x10ce:  test   %eax,%eax
082662f8 +0x10d0:  setg   %al
082662fb +0x10d3:  test   %al,%al
082662fd +0x10d5:  je     08266306 <+0x10de>
082662ff +0x10d7:  mov    $0x85,%ebx
08266304 +0x10dc:  jmp    08266328 <+0x1100>
08266306 +0x10de:  mov    $0x0,%ebx
0826630b +0x10e3:  jmp    08266328 <+0x1100>
0826630d +0x10e5:  mov    %edx,%ebx
0826630f +0x10e7:  mov    %eax,%esi
08266311 +0x10e9:  lea    -0x2c(%ebp),%eax
08266314 +0x10ec:  mov    %eax,(%esp)
08266317 +0x10ef:  call   08265936 <+0x70e>
0826631c +0x10f4:  mov    %esi,%eax
0826631e +0x10f6:  mov    %ebx,%edx
08266320 +0x10f8:  mov    %eax,(%esp)
08266323 +0x10fb:  call   08ae3750 <_Unwind_Resume>
08266328 +0x1100:  lea    -0x2c(%ebp),%eax
0826632b +0x1103:  mov    %eax,(%esp)
0826632e +0x1106:  call   08265936 <+0x70e>
08266333 +0x110b:  mov    %ebx,%eax
08266335 +0x110d:  add    $0x40,%esp
08266338 +0x1110:  pop    %ebx
08266339 +0x1111:  pop    %esi
0826633a +0x1112:  pop    %ebp
0826633b +0x1113:  ret
0826633c +0x1114:  push   %ebp
0826633d +0x1115:  mov    %esp,%ebp
0826633f +0x1117:  mov    $0x0,%eax
08266344 +0x111c:  pop    %ebp
08266345 +0x111d:  ret
08266346 +0x111e:  push   %ebp
08266347 +0x111f:  mov    %esp,%ebp
08266349 +0x1121:  sub    $0x38,%esp
0826634c +0x1124:  mov    0xc(%ebp),%eax
0826634f +0x1127:  mov    %eax,(%esp)
08266352 +0x112a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08266357 +0x112f:  shr    $0x1f,%eax
0826635a +0x1132:  test   %al,%al
0826635c +0x1134:  je     082663d0 <+0x11a8>
0826635e +0x1136:  movl   $0x1,0x4(%esp)
08266366 +0x113e:  mov    0x10(%ebp),%eax
08266369 +0x1141:  mov    %eax,(%esp)
0826636c +0x1144:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266371 +0x1149:  lea    -0xa(%ebp),%eax
08266374 +0x114c:  mov    %eax,0x4(%esp)
08266378 +0x1150:  mov    0x10(%ebp),%eax
0826637b +0x1153:  mov    %eax,(%esp)
0826637e +0x1156:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266383 +0x115b:  mov    0x10(%ebp),%eax
08266386 +0x115e:  mov    %eax,(%esp)
08266389 +0x1161:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0826638e +0x1166:  movzwl -0xa(%ebp),%edx
08266392 +0x116a:  movswl %dx,%edx
08266395 +0x116d:  mov    %eax,0x18(%esp)
08266399 +0x1171:  mov    %edx,0x14(%esp)
0826639d +0x1175:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
082663a5 +0x117d:  movl   $0x94,0xc(%esp)
082663ad +0x1185:  movl   $&_ZZN17IPacketDispatcherI12MSG_SCAN_DRV17ScanBotByDrvParamL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
082663b5 +0x118d:  movl   $"PacketDispatcher.h",0x4(%esp)
082663bd +0x1195:  movl   $0x1,(%esp)
082663c4 +0x119c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082663c9 +0x11a1:  mov    $0x95,%eax
082663ce +0x11a6:  jmp    082663d5 <+0x11ad>
082663d0 +0x11a8:  mov    $0x0,%eax
082663d5 +0x11ad:  leave
082663d6 +0x11ae:  ret
082663d7 +0x11af:  nop
082663d8 +0x11b0:  push   %ebp
082663d9 +0x11b1:  mov    %esp,%ebp
082663db +0x11b3:  pop    %ebp
082663dc +0x11b4:  ret
082663dd +0x11b5:  nop
082663de +0x11b6:  push   %ebp
082663df +0x11b7:  mov    %esp,%ebp
082663e1 +0x11b9:  push   %esi
082663e2 +0x11ba:  push   %ebx
082663e3 +0x11bb:  sub    $0x30,%esp
082663e6 +0x11be:  mov    0x8(%ebp),%eax
082663e9 +0x11c1:  mov    (%eax),%eax
082663eb +0x11c3:  add    $0x10,%eax
082663ee +0x11c6:  mov    (%eax),%edx
082663f0 +0x11c8:  mov    0x10(%ebp),%eax
082663f3 +0x11cb:  mov    %eax,0x8(%esp)
082663f7 +0x11cf:  mov    0xc(%ebp),%eax
082663fa +0x11d2:  mov    %eax,0x4(%esp)
082663fe +0x11d6:  mov    0x8(%ebp),%eax
08266401 +0x11d9:  mov    %eax,(%esp)
08266404 +0x11dc:  call   *%edx
08266406 +0x11de:  test   %eax,%eax
08266408 +0x11e0:  setg   %al
0826640b +0x11e3:  test   %al,%al
0826640d +0x11e5:  je     08266419 <+0x11f1>
0826640f +0x11e7:  mov    $0x0,%ebx
08266414 +0x11ec:  jmp    08266525 <+0x12fd>
08266419 +0x11f1:  movl   $0x0,-0xc(%ebp)
08266420 +0x11f8:  mov    0x8(%ebp),%eax
08266423 +0x11fb:  mov    (%eax),%eax
08266425 +0x11fd:  add    $0x14,%eax
08266428 +0x1200:  mov    (%eax),%edx
0826642a +0x1202:  lea    -0x22(%ebp),%eax
0826642d +0x1205:  mov    %eax,0x8(%esp)
08266431 +0x1209:  mov    0x10(%ebp),%eax
08266434 +0x120c:  mov    %eax,0x4(%esp)
08266438 +0x1210:  mov    0x8(%ebp),%eax
0826643b +0x1213:  mov    %eax,(%esp)
0826643e +0x1216:  call   *%edx
08266440 +0x1218:  mov    %eax,-0xc(%ebp)
08266443 +0x121b:  cmpl   $0x0,-0xc(%ebp)
08266447 +0x121f:  setne  %al
0826644a +0x1222:  test   %al,%al
0826644c +0x1224:  je     08266456 <+0x122e>
0826644e +0x1226:  mov    -0xc(%ebp),%ebx
08266451 +0x1229:  jmp    08266525 <+0x12fd>
08266456 +0x122e:  lea    -0x26(%ebp),%eax
08266459 +0x1231:  mov    %eax,(%esp)
0826645c +0x1234:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08266461 +0x1239:  mov    0x8(%ebp),%eax
08266464 +0x123c:  mov    (%eax),%eax
08266466 +0x123e:  add    $0x18,%eax
08266469 +0x1241:  mov    (%eax),%edx
0826646b +0x1243:  lea    -0x26(%ebp),%eax
0826646e +0x1246:  mov    %eax,0xc(%esp)
08266472 +0x124a:  lea    -0x22(%ebp),%eax
08266475 +0x124d:  mov    %eax,0x8(%esp)
08266479 +0x1251:  mov    0xc(%ebp),%eax
0826647c +0x1254:  mov    %eax,0x4(%esp)
08266480 +0x1258:  mov    0x8(%ebp),%eax
08266483 +0x125b:  mov    %eax,(%esp)
08266486 +0x125e:  call   *%edx
08266488 +0x1260:  mov    %eax,-0xc(%ebp)
0826648b +0x1263:  cmpl   $0x0,-0xc(%ebp)
0826648f +0x1267:  setg   %al
08266492 +0x126a:  test   %al,%al
08266494 +0x126c:  je     0826649b <+0x1273>
08266496 +0x126e:  mov    -0xc(%ebp),%ebx
08266499 +0x1271:  jmp    0826651a <+0x12f2>
0826649b +0x1273:  cmpl   $0x0,-0xc(%ebp)
0826649f +0x1277:  jns    082664a8 <+0x1280>
082664a1 +0x1279:  mov    $0x0,%ebx
082664a6 +0x127e:  jmp    0826651a <+0x12f2>
082664a8 +0x1280:  mov    0x8(%ebp),%eax
082664ab +0x1283:  mov    (%eax),%eax
082664ad +0x1285:  add    $0x1c,%eax
082664b0 +0x1288:  mov    (%eax),%edx
082664b2 +0x128a:  lea    -0x26(%ebp),%eax
082664b5 +0x128d:  mov    %eax,0x8(%esp)
082664b9 +0x1291:  mov    0xc(%ebp),%eax
082664bc +0x1294:  mov    %eax,0x4(%esp)
082664c0 +0x1298:  mov    0x8(%ebp),%eax
082664c3 +0x129b:  mov    %eax,(%esp)
082664c6 +0x129e:  call   *%edx
082664c8 +0x12a0:  mov    0x8(%ebp),%eax
082664cb +0x12a3:  mov    (%eax),%eax
082664cd +0x12a5:  add    $0xc,%eax
082664d0 +0x12a8:  mov    (%eax),%edx
082664d2 +0x12aa:  mov    0x10(%ebp),%eax
082664d5 +0x12ad:  mov    %eax,0x8(%esp)
082664d9 +0x12b1:  mov    0xc(%ebp),%eax
082664dc +0x12b4:  mov    %eax,0x4(%esp)
082664e0 +0x12b8:  mov    0x8(%ebp),%eax
082664e3 +0x12bb:  mov    %eax,(%esp)
082664e6 +0x12be:  call   *%edx
082664e8 +0x12c0:  test   %eax,%eax
082664ea +0x12c2:  setg   %al
082664ed +0x12c5:  test   %al,%al
082664ef +0x12c7:  je     082664f8 <+0x12d0>
082664f1 +0x12c9:  mov    $0x85,%ebx
082664f6 +0x12ce:  jmp    0826651a <+0x12f2>
082664f8 +0x12d0:  mov    $0x0,%ebx
082664fd +0x12d5:  jmp    0826651a <+0x12f2>
082664ff +0x12d7:  mov    %edx,%ebx
08266501 +0x12d9:  mov    %eax,%esi
08266503 +0x12db:  lea    -0x26(%ebp),%eax
08266506 +0x12de:  mov    %eax,(%esp)
08266509 +0x12e1:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
0826650e +0x12e6:  mov    %esi,%eax
08266510 +0x12e8:  mov    %ebx,%edx
08266512 +0x12ea:  mov    %eax,(%esp)
08266515 +0x12ed:  call   08ae3750 <_Unwind_Resume>
0826651a +0x12f2:  lea    -0x26(%ebp),%eax
0826651d +0x12f5:  mov    %eax,(%esp)
08266520 +0x12f8:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08266525 +0x12fd:  mov    %ebx,%eax
08266527 +0x12ff:  add    $0x30,%esp
0826652a +0x1302:  pop    %ebx
0826652b +0x1303:  pop    %esi
0826652c +0x1304:  pop    %ebp
0826652d +0x1305:  ret
0826652e +0x1306:  push   %ebp
0826652f +0x1307:  mov    %esp,%ebp
08266531 +0x1309:  mov    $0x0,%eax
08266536 +0x130e:  pop    %ebp
08266537 +0x130f:  ret
08266538 +0x1310:  push   %ebp
08266539 +0x1311:  mov    %esp,%ebp
0826653b +0x1313:  sub    $0x38,%esp
0826653e +0x1316:  mov    0xc(%ebp),%eax
08266541 +0x1319:  mov    %eax,(%esp)
08266544 +0x131c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08266549 +0x1321:  shr    $0x1f,%eax
0826654c +0x1324:  test   %al,%al
0826654e +0x1326:  je     082665c2 <+0x139a>
08266550 +0x1328:  movl   $0x1,0x4(%esp)
08266558 +0x1330:  mov    0x10(%ebp),%eax
0826655b +0x1333:  mov    %eax,(%esp)
0826655e +0x1336:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266563 +0x133b:  lea    -0xa(%ebp),%eax
08266566 +0x133e:  mov    %eax,0x4(%esp)
0826656a +0x1342:  mov    0x10(%ebp),%eax
0826656d +0x1345:  mov    %eax,(%esp)
08266570 +0x1348:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266575 +0x134d:  mov    0x10(%ebp),%eax
08266578 +0x1350:  mov    %eax,(%esp)
0826657b +0x1353:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08266580 +0x1358:  movzwl -0xa(%ebp),%edx
08266584 +0x135c:  movswl %dx,%edx
08266587 +0x135f:  mov    %eax,0x18(%esp)
0826658b +0x1363:  mov    %edx,0x14(%esp)
0826658f +0x1367:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08266597 +0x136f:  movl   $0x94,0xc(%esp)
0826659f +0x1377:  movl   $&_ZZN17IPacketDispatcherI15MSG_MOTION_HACK9ParamBaseL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
082665a7 +0x137f:  movl   $"PacketDispatcher.h",0x4(%esp)
082665af +0x1387:  movl   $0x1,(%esp)
082665b6 +0x138e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082665bb +0x1393:  mov    $0x95,%eax
082665c0 +0x1398:  jmp    082665c7 <+0x139f>
082665c2 +0x139a:  mov    $0x0,%eax
082665c7 +0x139f:  leave
082665c8 +0x13a0:  ret
082665c9 +0x13a1:  nop
082665ca +0x13a2:  push   %ebp
082665cb +0x13a3:  mov    %esp,%ebp
082665cd +0x13a5:  pop    %ebp
082665ce +0x13a6:  ret
082665cf +0x13a7:  nop
082665d0 +0x13a8:  push   %ebp
082665d1 +0x13a9:  mov    %esp,%ebp
082665d3 +0x13ab:  push   %esi
082665d4 +0x13ac:  push   %ebx
082665d5 +0x13ad:  sub    $0x40,%esp
082665d8 +0x13b0:  mov    0x8(%ebp),%eax
082665db +0x13b3:  mov    (%eax),%eax
082665dd +0x13b5:  add    $0x10,%eax
082665e0 +0x13b8:  mov    (%eax),%edx
082665e2 +0x13ba:  mov    0x10(%ebp),%eax
082665e5 +0x13bd:  mov    %eax,0x8(%esp)
082665e9 +0x13c1:  mov    0xc(%ebp),%eax
082665ec +0x13c4:  mov    %eax,0x4(%esp)
082665f0 +0x13c8:  mov    0x8(%ebp),%eax
082665f3 +0x13cb:  mov    %eax,(%esp)
082665f6 +0x13ce:  call   *%edx
082665f8 +0x13d0:  test   %eax,%eax
082665fa +0x13d2:  setg   %al
082665fd +0x13d5:  test   %al,%al
082665ff +0x13d7:  je     0826660b <+0x13e3>
08266601 +0x13d9:  mov    $0x0,%ebx
08266606 +0x13de:  jmp    08266717 <+0x14ef>
0826660b +0x13e3:  movl   $0x0,-0xc(%ebp)
08266612 +0x13ea:  mov    0x8(%ebp),%eax
08266615 +0x13ed:  mov    (%eax),%eax
08266617 +0x13ef:  add    $0x14,%eax
0826661a +0x13f2:  mov    (%eax),%edx
0826661c +0x13f4:  lea    -0x20(%ebp),%eax
0826661f +0x13f7:  mov    %eax,0x8(%esp)
08266623 +0x13fb:  mov    0x10(%ebp),%eax
08266626 +0x13fe:  mov    %eax,0x4(%esp)
0826662a +0x1402:  mov    0x8(%ebp),%eax
0826662d +0x1405:  mov    %eax,(%esp)
08266630 +0x1408:  call   *%edx
08266632 +0x140a:  mov    %eax,-0xc(%ebp)
08266635 +0x140d:  cmpl   $0x0,-0xc(%ebp)
08266639 +0x1411:  setne  %al
0826663c +0x1414:  test   %al,%al
0826663e +0x1416:  je     08266648 <+0x1420>
08266640 +0x1418:  mov    -0xc(%ebp),%ebx
08266643 +0x141b:  jmp    08266717 <+0x14ef>
08266648 +0x1420:  lea    -0x2c(%ebp),%eax
0826664b +0x1423:  mov    %eax,(%esp)
0826664e +0x1426:  call   082653c0 <+0x198>
08266653 +0x142b:  mov    0x8(%ebp),%eax
08266656 +0x142e:  mov    (%eax),%eax
08266658 +0x1430:  add    $0x18,%eax
0826665b +0x1433:  mov    (%eax),%edx
0826665d +0x1435:  lea    -0x2c(%ebp),%eax
08266660 +0x1438:  mov    %eax,0xc(%esp)
08266664 +0x143c:  lea    -0x20(%ebp),%eax
08266667 +0x143f:  mov    %eax,0x8(%esp)
0826666b +0x1443:  mov    0xc(%ebp),%eax
0826666e +0x1446:  mov    %eax,0x4(%esp)
08266672 +0x144a:  mov    0x8(%ebp),%eax
08266675 +0x144d:  mov    %eax,(%esp)
08266678 +0x1450:  call   *%edx
0826667a +0x1452:  mov    %eax,-0xc(%ebp)
0826667d +0x1455:  cmpl   $0x0,-0xc(%ebp)
08266681 +0x1459:  setg   %al
08266684 +0x145c:  test   %al,%al
08266686 +0x145e:  je     0826668d <+0x1465>
08266688 +0x1460:  mov    -0xc(%ebp),%ebx
0826668b +0x1463:  jmp    0826670c <+0x14e4>
0826668d +0x1465:  cmpl   $0x0,-0xc(%ebp)
08266691 +0x1469:  jns    0826669a <+0x1472>
08266693 +0x146b:  mov    $0x0,%ebx
08266698 +0x1470:  jmp    0826670c <+0x14e4>
0826669a +0x1472:  mov    0x8(%ebp),%eax
0826669d +0x1475:  mov    (%eax),%eax
0826669f +0x1477:  add    $0x1c,%eax
082666a2 +0x147a:  mov    (%eax),%edx
082666a4 +0x147c:  lea    -0x2c(%ebp),%eax
082666a7 +0x147f:  mov    %eax,0x8(%esp)
082666ab +0x1483:  mov    0xc(%ebp),%eax
082666ae +0x1486:  mov    %eax,0x4(%esp)
082666b2 +0x148a:  mov    0x8(%ebp),%eax
082666b5 +0x148d:  mov    %eax,(%esp)
082666b8 +0x1490:  call   *%edx
082666ba +0x1492:  mov    0x8(%ebp),%eax
082666bd +0x1495:  mov    (%eax),%eax
082666bf +0x1497:  add    $0xc,%eax
082666c2 +0x149a:  mov    (%eax),%edx
082666c4 +0x149c:  mov    0x10(%ebp),%eax
082666c7 +0x149f:  mov    %eax,0x8(%esp)
082666cb +0x14a3:  mov    0xc(%ebp),%eax
082666ce +0x14a6:  mov    %eax,0x4(%esp)
082666d2 +0x14aa:  mov    0x8(%ebp),%eax
082666d5 +0x14ad:  mov    %eax,(%esp)
082666d8 +0x14b0:  call   *%edx
082666da +0x14b2:  test   %eax,%eax
082666dc +0x14b4:  setg   %al
082666df +0x14b7:  test   %al,%al
082666e1 +0x14b9:  je     082666ea <+0x14c2>
082666e3 +0x14bb:  mov    $0x85,%ebx
082666e8 +0x14c0:  jmp    0826670c <+0x14e4>
082666ea +0x14c2:  mov    $0x0,%ebx
082666ef +0x14c7:  jmp    0826670c <+0x14e4>
082666f1 +0x14c9:  mov    %edx,%ebx
082666f3 +0x14cb:  mov    %eax,%esi
082666f5 +0x14cd:  lea    -0x2c(%ebp),%eax
082666f8 +0x14d0:  mov    %eax,(%esp)
082666fb +0x14d3:  call   08265984 <+0x75c>
08266700 +0x14d8:  mov    %esi,%eax
08266702 +0x14da:  mov    %ebx,%edx
08266704 +0x14dc:  mov    %eax,(%esp)
08266707 +0x14df:  call   08ae3750 <_Unwind_Resume>
0826670c +0x14e4:  lea    -0x2c(%ebp),%eax
0826670f +0x14e7:  mov    %eax,(%esp)
08266712 +0x14ea:  call   08265984 <+0x75c>
08266717 +0x14ef:  mov    %ebx,%eax
08266719 +0x14f1:  add    $0x40,%esp
0826671c +0x14f4:  pop    %ebx
0826671d +0x14f5:  pop    %esi
0826671e +0x14f6:  pop    %ebp
0826671f +0x14f7:  ret
08266720 +0x14f8:  push   %ebp
08266721 +0x14f9:  mov    %esp,%ebp
08266723 +0x14fb:  mov    $0x0,%eax
08266728 +0x1500:  pop    %ebp
08266729 +0x1501:  ret
0826672a +0x1502:  push   %ebp
0826672b +0x1503:  mov    %esp,%ebp
0826672d +0x1505:  sub    $0x38,%esp
08266730 +0x1508:  mov    0xc(%ebp),%eax
08266733 +0x150b:  mov    %eax,(%esp)
08266736 +0x150e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0826673b +0x1513:  shr    $0x1f,%eax
0826673e +0x1516:  test   %al,%al
08266740 +0x1518:  je     082667b4 <+0x158c>
08266742 +0x151a:  movl   $0x1,0x4(%esp)
0826674a +0x1522:  mov    0x10(%ebp),%eax
0826674d +0x1525:  mov    %eax,(%esp)
08266750 +0x1528:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266755 +0x152d:  lea    -0xa(%ebp),%eax
08266758 +0x1530:  mov    %eax,0x4(%esp)
0826675c +0x1534:  mov    0x10(%ebp),%eax
0826675f +0x1537:  mov    %eax,(%esp)
08266762 +0x153a:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266767 +0x153f:  mov    0x10(%ebp),%eax
0826676a +0x1542:  mov    %eax,(%esp)
0826676d +0x1545:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08266772 +0x154a:  movzwl -0xa(%ebp),%edx
08266776 +0x154e:  movswl %dx,%edx
08266779 +0x1551:  mov    %eax,0x18(%esp)
0826677d +0x1555:  mov    %edx,0x14(%esp)
08266781 +0x1559:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08266789 +0x1561:  movl   $0x94,0xc(%esp)
08266791 +0x1569:  movl   $&_ZZN17IPacketDispatcherI12MSG_SCAN_DLL17ScanBotByDllParamL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08266799 +0x1571:  movl   $"PacketDispatcher.h",0x4(%esp)
082667a1 +0x1579:  movl   $0x1,(%esp)
082667a8 +0x1580:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082667ad +0x1585:  mov    $0x95,%eax
082667b2 +0x158a:  jmp    082667b9 <+0x1591>
082667b4 +0x158c:  mov    $0x0,%eax
082667b9 +0x1591:  leave
082667ba +0x1592:  ret
082667bb +0x1593:  nop
082667bc +0x1594:  push   %ebp
082667bd +0x1595:  mov    %esp,%ebp
082667bf +0x1597:  pop    %ebp
082667c0 +0x1598:  ret
082667c1 +0x1599:  nop
082667c2 +0x159a:  push   %ebp
082667c3 +0x159b:  mov    %esp,%ebp
082667c5 +0x159d:  push   %esi
082667c6 +0x159e:  push   %ebx
082667c7 +0x159f:  sub    $0x40,%esp
082667ca +0x15a2:  mov    0x8(%ebp),%eax
082667cd +0x15a5:  mov    (%eax),%eax
082667cf +0x15a7:  add    $0x10,%eax
082667d2 +0x15aa:  mov    (%eax),%edx
082667d4 +0x15ac:  mov    0x10(%ebp),%eax
082667d7 +0x15af:  mov    %eax,0x8(%esp)
082667db +0x15b3:  mov    0xc(%ebp),%eax
082667de +0x15b6:  mov    %eax,0x4(%esp)
082667e2 +0x15ba:  mov    0x8(%ebp),%eax
082667e5 +0x15bd:  mov    %eax,(%esp)
082667e8 +0x15c0:  call   *%edx
082667ea +0x15c2:  test   %eax,%eax
082667ec +0x15c4:  setg   %al
082667ef +0x15c7:  test   %al,%al
082667f1 +0x15c9:  je     082667fd <+0x15d5>
082667f3 +0x15cb:  mov    $0x0,%ebx
082667f8 +0x15d0:  jmp    08266909 <+0x16e1>
082667fd +0x15d5:  movl   $0x0,-0xc(%ebp)
08266804 +0x15dc:  mov    0x8(%ebp),%eax
08266807 +0x15df:  mov    (%eax),%eax
08266809 +0x15e1:  add    $0x14,%eax
0826680c +0x15e4:  mov    (%eax),%edx
0826680e +0x15e6:  lea    -0x1f(%ebp),%eax
08266811 +0x15e9:  mov    %eax,0x8(%esp)
08266815 +0x15ed:  mov    0x10(%ebp),%eax
08266818 +0x15f0:  mov    %eax,0x4(%esp)
0826681c +0x15f4:  mov    0x8(%ebp),%eax
0826681f +0x15f7:  mov    %eax,(%esp)
08266822 +0x15fa:  call   *%edx
08266824 +0x15fc:  mov    %eax,-0xc(%ebp)
08266827 +0x15ff:  cmpl   $0x0,-0xc(%ebp)
0826682b +0x1603:  setne  %al
0826682e +0x1606:  test   %al,%al
08266830 +0x1608:  je     0826683a <+0x1612>
08266832 +0x160a:  mov    -0xc(%ebp),%ebx
08266835 +0x160d:  jmp    08266909 <+0x16e1>
0826683a +0x1612:  lea    -0x2c(%ebp),%eax
0826683d +0x1615:  mov    %eax,(%esp)
08266840 +0x1618:  call   0826538c <+0x164>
08266845 +0x161d:  mov    0x8(%ebp),%eax
08266848 +0x1620:  mov    (%eax),%eax
0826684a +0x1622:  add    $0x18,%eax
0826684d +0x1625:  mov    (%eax),%edx
0826684f +0x1627:  lea    -0x2c(%ebp),%eax
08266852 +0x162a:  mov    %eax,0xc(%esp)
08266856 +0x162e:  lea    -0x1f(%ebp),%eax
08266859 +0x1631:  mov    %eax,0x8(%esp)
0826685d +0x1635:  mov    0xc(%ebp),%eax
08266860 +0x1638:  mov    %eax,0x4(%esp)
08266864 +0x163c:  mov    0x8(%ebp),%eax
08266867 +0x163f:  mov    %eax,(%esp)
0826686a +0x1642:  call   *%edx
0826686c +0x1644:  mov    %eax,-0xc(%ebp)
0826686f +0x1647:  cmpl   $0x0,-0xc(%ebp)
08266873 +0x164b:  setg   %al
08266876 +0x164e:  test   %al,%al
08266878 +0x1650:  je     0826687f <+0x1657>
0826687a +0x1652:  mov    -0xc(%ebp),%ebx
0826687d +0x1655:  jmp    082668fe <+0x16d6>
0826687f +0x1657:  cmpl   $0x0,-0xc(%ebp)
08266883 +0x165b:  jns    0826688c <+0x1664>
08266885 +0x165d:  mov    $0x0,%ebx
0826688a +0x1662:  jmp    082668fe <+0x16d6>
0826688c +0x1664:  mov    0x8(%ebp),%eax
0826688f +0x1667:  mov    (%eax),%eax
08266891 +0x1669:  add    $0x1c,%eax
08266894 +0x166c:  mov    (%eax),%edx
08266896 +0x166e:  lea    -0x2c(%ebp),%eax
08266899 +0x1671:  mov    %eax,0x8(%esp)
0826689d +0x1675:  mov    0xc(%ebp),%eax
082668a0 +0x1678:  mov    %eax,0x4(%esp)
082668a4 +0x167c:  mov    0x8(%ebp),%eax
082668a7 +0x167f:  mov    %eax,(%esp)
082668aa +0x1682:  call   *%edx
082668ac +0x1684:  mov    0x8(%ebp),%eax
082668af +0x1687:  mov    (%eax),%eax
082668b1 +0x1689:  add    $0xc,%eax
082668b4 +0x168c:  mov    (%eax),%edx
082668b6 +0x168e:  mov    0x10(%ebp),%eax
082668b9 +0x1691:  mov    %eax,0x8(%esp)
082668bd +0x1695:  mov    0xc(%ebp),%eax
082668c0 +0x1698:  mov    %eax,0x4(%esp)
082668c4 +0x169c:  mov    0x8(%ebp),%eax
082668c7 +0x169f:  mov    %eax,(%esp)
082668ca +0x16a2:  call   *%edx
082668cc +0x16a4:  test   %eax,%eax
082668ce +0x16a6:  setg   %al
082668d1 +0x16a9:  test   %al,%al
082668d3 +0x16ab:  je     082668dc <+0x16b4>
082668d5 +0x16ad:  mov    $0x85,%ebx
082668da +0x16b2:  jmp    082668fe <+0x16d6>
082668dc +0x16b4:  mov    $0x0,%ebx
082668e1 +0x16b9:  jmp    082668fe <+0x16d6>
082668e3 +0x16bb:  mov    %edx,%ebx
082668e5 +0x16bd:  mov    %eax,%esi
082668e7 +0x16bf:  lea    -0x2c(%ebp),%eax
082668ea +0x16c2:  mov    %eax,(%esp)
082668ed +0x16c5:  call   082659d2 <+0x7aa>
082668f2 +0x16ca:  mov    %esi,%eax
082668f4 +0x16cc:  mov    %ebx,%edx
082668f6 +0x16ce:  mov    %eax,(%esp)
082668f9 +0x16d1:  call   08ae3750 <_Unwind_Resume>
082668fe +0x16d6:  lea    -0x2c(%ebp),%eax
08266901 +0x16d9:  mov    %eax,(%esp)
08266904 +0x16dc:  call   082659d2 <+0x7aa>
08266909 +0x16e1:  mov    %ebx,%eax
0826690b +0x16e3:  add    $0x40,%esp
0826690e +0x16e6:  pop    %ebx
0826690f +0x16e7:  pop    %esi
08266910 +0x16e8:  pop    %ebp
08266911 +0x16e9:  ret
08266912 +0x16ea:  push   %ebp
08266913 +0x16eb:  mov    %esp,%ebp
08266915 +0x16ed:  mov    $0x0,%eax
0826691a +0x16f2:  pop    %ebp
0826691b +0x16f3:  ret
0826691c +0x16f4:  push   %ebp
0826691d +0x16f5:  mov    %esp,%ebp
0826691f +0x16f7:  sub    $0x38,%esp
08266922 +0x16fa:  mov    0xc(%ebp),%eax
08266925 +0x16fd:  mov    %eax,(%esp)
08266928 +0x1700:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0826692d +0x1705:  shr    $0x1f,%eax
08266930 +0x1708:  test   %al,%al
08266932 +0x170a:  je     082669a6 <+0x177e>
08266934 +0x170c:  movl   $0x1,0x4(%esp)
0826693c +0x1714:  mov    0x10(%ebp),%eax
0826693f +0x1717:  mov    %eax,(%esp)
08266942 +0x171a:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266947 +0x171f:  lea    -0xa(%ebp),%eax
0826694a +0x1722:  mov    %eax,0x4(%esp)
0826694e +0x1726:  mov    0x10(%ebp),%eax
08266951 +0x1729:  mov    %eax,(%esp)
08266954 +0x172c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266959 +0x1731:  mov    0x10(%ebp),%eax
0826695c +0x1734:  mov    %eax,(%esp)
0826695f +0x1737:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08266964 +0x173c:  movzwl -0xa(%ebp),%edx
08266968 +0x1740:  movswl %dx,%edx
0826696b +0x1743:  mov    %eax,0x18(%esp)
0826696f +0x1747:  mov    %edx,0x14(%esp)
08266973 +0x174b:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
0826697b +0x1753:  movl   $0x94,0xc(%esp)
08266983 +0x175b:  movl   $&_ZZN17IPacketDispatcherI15MSG_SCRIPT_HASH15ScriptHashParamL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0826698b +0x1763:  movl   $"PacketDispatcher.h",0x4(%esp)
08266993 +0x176b:  movl   $0x1,(%esp)
0826699a +0x1772:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826699f +0x1777:  mov    $0x95,%eax
082669a4 +0x177c:  jmp    082669ab <+0x1783>
082669a6 +0x177e:  mov    $0x0,%eax
082669ab +0x1783:  leave
082669ac +0x1784:  ret
082669ad +0x1785:  nop
082669ae +0x1786:  push   %ebp
082669af +0x1787:  mov    %esp,%ebp
082669b1 +0x1789:  pop    %ebp
082669b2 +0x178a:  ret
082669b3 +0x178b:  nop
082669b4 +0x178c:  push   %ebp
082669b5 +0x178d:  mov    %esp,%ebp
082669b7 +0x178f:  push   %esi
082669b8 +0x1790:  push   %ebx
082669b9 +0x1791:  sub    $0x30,%esp
082669bc +0x1794:  mov    0x8(%ebp),%eax
082669bf +0x1797:  mov    (%eax),%eax
082669c1 +0x1799:  add    $0x10,%eax
082669c4 +0x179c:  mov    (%eax),%edx
082669c6 +0x179e:  mov    0x10(%ebp),%eax
082669c9 +0x17a1:  mov    %eax,0x8(%esp)
082669cd +0x17a5:  mov    0xc(%ebp),%eax
082669d0 +0x17a8:  mov    %eax,0x4(%esp)
082669d4 +0x17ac:  mov    0x8(%ebp),%eax
082669d7 +0x17af:  mov    %eax,(%esp)
082669da +0x17b2:  call   *%edx
082669dc +0x17b4:  test   %eax,%eax
082669de +0x17b6:  setg   %al
082669e1 +0x17b9:  test   %al,%al
082669e3 +0x17bb:  je     082669ef <+0x17c7>
082669e5 +0x17bd:  mov    $0x0,%ebx
082669ea +0x17c2:  jmp    08266b06 <+0x18de>
082669ef +0x17c7:  lea    -0x19(%ebp),%eax
082669f2 +0x17ca:  mov    %eax,(%esp)
082669f5 +0x17cd:  call   08265276 <+0x4e>
082669fa +0x17d2:  movl   $0x0,-0xc(%ebp)
08266a01 +0x17d9:  mov    0x8(%ebp),%eax
08266a04 +0x17dc:  mov    (%eax),%eax
08266a06 +0x17de:  add    $0x14,%eax
08266a09 +0x17e1:  mov    (%eax),%edx
08266a0b +0x17e3:  lea    -0x19(%ebp),%eax
08266a0e +0x17e6:  mov    %eax,0x8(%esp)
08266a12 +0x17ea:  mov    0x10(%ebp),%eax
08266a15 +0x17ed:  mov    %eax,0x4(%esp)
08266a19 +0x17f1:  mov    0x8(%ebp),%eax
08266a1c +0x17f4:  mov    %eax,(%esp)
08266a1f +0x17f7:  call   *%edx
08266a21 +0x17f9:  mov    %eax,-0xc(%ebp)
08266a24 +0x17fc:  cmpl   $0x0,-0xc(%ebp)
08266a28 +0x1800:  setne  %al
08266a2b +0x1803:  test   %al,%al
08266a2d +0x1805:  je     08266a37 <+0x180f>
08266a2f +0x1807:  mov    -0xc(%ebp),%ebx
08266a32 +0x180a:  jmp    08266b06 <+0x18de>
08266a37 +0x180f:  lea    -0x24(%ebp),%eax
08266a3a +0x1812:  mov    %eax,(%esp)
08266a3d +0x1815:  call   0826533c <+0x114>
08266a42 +0x181a:  mov    0x8(%ebp),%eax
08266a45 +0x181d:  mov    (%eax),%eax
08266a47 +0x181f:  add    $0x18,%eax
08266a4a +0x1822:  mov    (%eax),%edx
08266a4c +0x1824:  lea    -0x24(%ebp),%eax
08266a4f +0x1827:  mov    %eax,0xc(%esp)
08266a53 +0x182b:  lea    -0x19(%ebp),%eax
08266a56 +0x182e:  mov    %eax,0x8(%esp)
08266a5a +0x1832:  mov    0xc(%ebp),%eax
08266a5d +0x1835:  mov    %eax,0x4(%esp)
08266a61 +0x1839:  mov    0x8(%ebp),%eax
08266a64 +0x183c:  mov    %eax,(%esp)
08266a67 +0x183f:  call   *%edx
08266a69 +0x1841:  mov    %eax,-0xc(%ebp)
08266a6c +0x1844:  cmpl   $0x0,-0xc(%ebp)
08266a70 +0x1848:  setg   %al
08266a73 +0x184b:  test   %al,%al
08266a75 +0x184d:  je     08266a7c <+0x1854>
08266a77 +0x184f:  mov    -0xc(%ebp),%ebx
08266a7a +0x1852:  jmp    08266afb <+0x18d3>
08266a7c +0x1854:  cmpl   $0x0,-0xc(%ebp)
08266a80 +0x1858:  jns    08266a89 <+0x1861>
08266a82 +0x185a:  mov    $0x0,%ebx
08266a87 +0x185f:  jmp    08266afb <+0x18d3>
08266a89 +0x1861:  mov    0x8(%ebp),%eax
08266a8c +0x1864:  mov    (%eax),%eax
08266a8e +0x1866:  add    $0x1c,%eax
08266a91 +0x1869:  mov    (%eax),%edx
08266a93 +0x186b:  lea    -0x24(%ebp),%eax
08266a96 +0x186e:  mov    %eax,0x8(%esp)
08266a9a +0x1872:  mov    0xc(%ebp),%eax
08266a9d +0x1875:  mov    %eax,0x4(%esp)
08266aa1 +0x1879:  mov    0x8(%ebp),%eax
08266aa4 +0x187c:  mov    %eax,(%esp)
08266aa7 +0x187f:  call   *%edx
08266aa9 +0x1881:  mov    0x8(%ebp),%eax
08266aac +0x1884:  mov    (%eax),%eax
08266aae +0x1886:  add    $0xc,%eax
08266ab1 +0x1889:  mov    (%eax),%edx
08266ab3 +0x188b:  mov    0x10(%ebp),%eax
08266ab6 +0x188e:  mov    %eax,0x8(%esp)
08266aba +0x1892:  mov    0xc(%ebp),%eax
08266abd +0x1895:  mov    %eax,0x4(%esp)
08266ac1 +0x1899:  mov    0x8(%ebp),%eax
08266ac4 +0x189c:  mov    %eax,(%esp)
08266ac7 +0x189f:  call   *%edx
08266ac9 +0x18a1:  test   %eax,%eax
08266acb +0x18a3:  setg   %al
08266ace +0x18a6:  test   %al,%al
08266ad0 +0x18a8:  je     08266ad9 <+0x18b1>
08266ad2 +0x18aa:  mov    $0x85,%ebx
08266ad7 +0x18af:  jmp    08266afb <+0x18d3>
08266ad9 +0x18b1:  mov    $0x0,%ebx
08266ade +0x18b6:  jmp    08266afb <+0x18d3>
08266ae0 +0x18b8:  mov    %edx,%ebx
08266ae2 +0x18ba:  mov    %eax,%esi
08266ae4 +0x18bc:  lea    -0x24(%ebp),%eax
08266ae7 +0x18bf:  mov    %eax,(%esp)
08266aea +0x18c2:  call   08265a6e <+0x846>
08266aef +0x18c7:  mov    %esi,%eax
08266af1 +0x18c9:  mov    %ebx,%edx
08266af3 +0x18cb:  mov    %eax,(%esp)
08266af6 +0x18ce:  call   08ae3750 <_Unwind_Resume>
08266afb +0x18d3:  lea    -0x24(%ebp),%eax
08266afe +0x18d6:  mov    %eax,(%esp)
08266b01 +0x18d9:  call   08265a6e <+0x846>
08266b06 +0x18de:  mov    %ebx,%eax
08266b08 +0x18e0:  add    $0x30,%esp
08266b0b +0x18e3:  pop    %ebx
08266b0c +0x18e4:  pop    %esi
08266b0d +0x18e5:  pop    %ebp
08266b0e +0x18e6:  ret
08266b0f +0x18e7:  nop
08266b10 +0x18e8:  push   %ebp
08266b11 +0x18e9:  mov    %esp,%ebp
08266b13 +0x18eb:  sub    $0x38,%esp
08266b16 +0x18ee:  mov    0xc(%ebp),%eax
08266b19 +0x18f1:  mov    %eax,(%esp)
08266b1c +0x18f4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08266b21 +0x18f9:  cmp    $0x1,%eax
08266b24 +0x18fc:  setle  %al
08266b27 +0x18ff:  test   %al,%al
08266b29 +0x1901:  je     08266b9d <+0x1975>
08266b2b +0x1903:  movl   $0x1,0x4(%esp)
08266b33 +0x190b:  mov    0x10(%ebp),%eax
08266b36 +0x190e:  mov    %eax,(%esp)
08266b39 +0x1911:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266b3e +0x1916:  lea    -0xa(%ebp),%eax
08266b41 +0x1919:  mov    %eax,0x4(%esp)
08266b45 +0x191d:  mov    0x10(%ebp),%eax
08266b48 +0x1920:  mov    %eax,(%esp)
08266b4b +0x1923:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266b50 +0x1928:  mov    0x10(%ebp),%eax
08266b53 +0x192b:  mov    %eax,(%esp)
08266b56 +0x192e:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08266b5b +0x1933:  movzwl -0xa(%ebp),%edx
08266b5f +0x1937:  movswl %dx,%edx
08266b62 +0x193a:  mov    %eax,0x18(%esp)
08266b66 +0x193e:  mov    %edx,0x14(%esp)
08266b6a +0x1942:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08266b72 +0x194a:  movl   $0x94,0xc(%esp)
08266b7a +0x1952:  movl   $&_ZZN17IPacketDispatcherI15MSG_TEMP_STRUCT9TempParamL8ch_state2EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08266b82 +0x195a:  movl   $"PacketDispatcher.h",0x4(%esp)
08266b8a +0x1962:  movl   $0x1,(%esp)
08266b91 +0x1969:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08266b96 +0x196e:  mov    $0x95,%eax
08266b9b +0x1973:  jmp    08266ba2 <+0x197a>
08266b9d +0x1975:  mov    $0x0,%eax
08266ba2 +0x197a:  leave
08266ba3 +0x197b:  ret
08266ba4 +0x197c:  push   %ebp
08266ba5 +0x197d:  mov    %esp,%ebp
08266ba7 +0x197f:  push   %esi
08266ba8 +0x1980:  push   %ebx
08266ba9 +0x1981:  sub    $0x1030,%esp
08266baf +0x1987:  mov    0x8(%ebp),%eax
08266bb2 +0x198a:  mov    (%eax),%eax
08266bb4 +0x198c:  add    $0x10,%eax
08266bb7 +0x198f:  mov    (%eax),%edx
08266bb9 +0x1991:  mov    0x10(%ebp),%eax
08266bbc +0x1994:  mov    %eax,0x8(%esp)
08266bc0 +0x1998:  mov    0xc(%ebp),%eax
08266bc3 +0x199b:  mov    %eax,0x4(%esp)
08266bc7 +0x199f:  mov    0x8(%ebp),%eax
08266bca +0x19a2:  mov    %eax,(%esp)
08266bcd +0x19a5:  call   *%edx
08266bcf +0x19a7:  test   %eax,%eax
08266bd1 +0x19a9:  setg   %al
08266bd4 +0x19ac:  test   %al,%al
08266bd6 +0x19ae:  je     08266be2 <+0x19ba>
08266bd8 +0x19b0:  mov    $0x0,%ebx
08266bdd +0x19b5:  jmp    08266cf4 <+0x1acc>
08266be2 +0x19ba:  movl   $0x0,-0xc(%ebp)
08266be9 +0x19c1:  mov    0x8(%ebp),%eax
08266bec +0x19c4:  mov    (%eax),%eax
08266bee +0x19c6:  add    $0x14,%eax
08266bf1 +0x19c9:  mov    (%eax),%edx
08266bf3 +0x19cb:  lea    -0x1026(%ebp),%eax
08266bf9 +0x19d1:  mov    %eax,0x8(%esp)
08266bfd +0x19d5:  mov    0x10(%ebp),%eax
08266c00 +0x19d8:  mov    %eax,0x4(%esp)
08266c04 +0x19dc:  mov    0x8(%ebp),%eax
08266c07 +0x19df:  mov    %eax,(%esp)
08266c0a +0x19e2:  call   *%edx
08266c0c +0x19e4:  mov    %eax,-0xc(%ebp)
08266c0f +0x19e7:  cmpl   $0x0,-0xc(%ebp)
08266c13 +0x19eb:  setne  %al
08266c16 +0x19ee:  test   %al,%al
08266c18 +0x19f0:  je     08266c22 <+0x19fa>
08266c1a +0x19f2:  mov    -0xc(%ebp),%ebx
08266c1d +0x19f5:  jmp    08266cf4 <+0x1acc>
08266c22 +0x19fa:  lea    -0x12(%ebp),%eax
08266c25 +0x19fd:  mov    %eax,(%esp)
08266c28 +0x1a00:  call   08265362 <+0x13a>
08266c2d +0x1a05:  mov    0x8(%ebp),%eax
08266c30 +0x1a08:  mov    (%eax),%eax
08266c32 +0x1a0a:  add    $0x18,%eax
08266c35 +0x1a0d:  mov    (%eax),%edx
08266c37 +0x1a0f:  lea    -0x12(%ebp),%eax
08266c3a +0x1a12:  mov    %eax,0xc(%esp)
08266c3e +0x1a16:  lea    -0x1026(%ebp),%eax
08266c44 +0x1a1c:  mov    %eax,0x8(%esp)
08266c48 +0x1a20:  mov    0xc(%ebp),%eax
08266c4b +0x1a23:  mov    %eax,0x4(%esp)
08266c4f +0x1a27:  mov    0x8(%ebp),%eax
08266c52 +0x1a2a:  mov    %eax,(%esp)
08266c55 +0x1a2d:  call   *%edx
08266c57 +0x1a2f:  mov    %eax,-0xc(%ebp)
08266c5a +0x1a32:  cmpl   $0x0,-0xc(%ebp)
08266c5e +0x1a36:  setg   %al
08266c61 +0x1a39:  test   %al,%al
08266c63 +0x1a3b:  je     08266c6a <+0x1a42>
08266c65 +0x1a3d:  mov    -0xc(%ebp),%ebx
08266c68 +0x1a40:  jmp    08266ce9 <+0x1ac1>
08266c6a +0x1a42:  cmpl   $0x0,-0xc(%ebp)
08266c6e +0x1a46:  jns    08266c77 <+0x1a4f>
08266c70 +0x1a48:  mov    $0x0,%ebx
08266c75 +0x1a4d:  jmp    08266ce9 <+0x1ac1>
08266c77 +0x1a4f:  mov    0x8(%ebp),%eax
08266c7a +0x1a52:  mov    (%eax),%eax
08266c7c +0x1a54:  add    $0x1c,%eax
08266c7f +0x1a57:  mov    (%eax),%edx
08266c81 +0x1a59:  lea    -0x12(%ebp),%eax
08266c84 +0x1a5c:  mov    %eax,0x8(%esp)
08266c88 +0x1a60:  mov    0xc(%ebp),%eax
08266c8b +0x1a63:  mov    %eax,0x4(%esp)
08266c8f +0x1a67:  mov    0x8(%ebp),%eax
08266c92 +0x1a6a:  mov    %eax,(%esp)
08266c95 +0x1a6d:  call   *%edx
08266c97 +0x1a6f:  mov    0x8(%ebp),%eax
08266c9a +0x1a72:  mov    (%eax),%eax
08266c9c +0x1a74:  add    $0xc,%eax
08266c9f +0x1a77:  mov    (%eax),%edx
08266ca1 +0x1a79:  mov    0x10(%ebp),%eax
08266ca4 +0x1a7c:  mov    %eax,0x8(%esp)
08266ca8 +0x1a80:  mov    0xc(%ebp),%eax
08266cab +0x1a83:  mov    %eax,0x4(%esp)
08266caf +0x1a87:  mov    0x8(%ebp),%eax
08266cb2 +0x1a8a:  mov    %eax,(%esp)
08266cb5 +0x1a8d:  call   *%edx
08266cb7 +0x1a8f:  test   %eax,%eax
08266cb9 +0x1a91:  setg   %al
08266cbc +0x1a94:  test   %al,%al
08266cbe +0x1a96:  je     08266cc7 <+0x1a9f>
08266cc0 +0x1a98:  mov    $0x85,%ebx
08266cc5 +0x1a9d:  jmp    08266ce9 <+0x1ac1>
08266cc7 +0x1a9f:  mov    $0x0,%ebx
08266ccc +0x1aa4:  jmp    08266ce9 <+0x1ac1>
08266cce +0x1aa6:  mov    %edx,%ebx
08266cd0 +0x1aa8:  mov    %eax,%esi
08266cd2 +0x1aaa:  lea    -0x12(%ebp),%eax
08266cd5 +0x1aad:  mov    %eax,(%esp)
08266cd8 +0x1ab0:  call   08265a20 <+0x7f8>
08266cdd +0x1ab5:  mov    %esi,%eax
08266cdf +0x1ab7:  mov    %ebx,%edx
08266ce1 +0x1ab9:  mov    %eax,(%esp)
08266ce4 +0x1abc:  call   08ae3750 <_Unwind_Resume>
08266ce9 +0x1ac1:  lea    -0x12(%ebp),%eax
08266cec +0x1ac4:  mov    %eax,(%esp)
08266cef +0x1ac7:  call   08265a20 <+0x7f8>
08266cf4 +0x1acc:  mov    %ebx,%eax
08266cf6 +0x1ace:  add    $0x1030,%esp
08266cfc +0x1ad4:  pop    %ebx
08266cfd +0x1ad5:  pop    %esi
08266cfe +0x1ad6:  pop    %ebp
08266cff +0x1ad7:  ret
08266d00 +0x1ad8:  push   %ebp
08266d01 +0x1ad9:  mov    %esp,%ebp
08266d03 +0x1adb:  mov    $0x0,%eax
08266d08 +0x1ae0:  pop    %ebp
08266d09 +0x1ae1:  ret
08266d0a +0x1ae2:  push   %ebp
08266d0b +0x1ae3:  mov    %esp,%ebp
08266d0d +0x1ae5:  sub    $0x38,%esp
08266d10 +0x1ae8:  mov    0xc(%ebp),%eax
08266d13 +0x1aeb:  mov    %eax,(%esp)
08266d16 +0x1aee:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08266d1b +0x1af3:  cmp    $0x1,%eax
08266d1e +0x1af6:  setle  %al
08266d21 +0x1af9:  test   %al,%al
08266d23 +0x1afb:  je     08266d97 <+0x1b6f>
08266d25 +0x1afd:  movl   $0x1,0x4(%esp)
08266d2d +0x1b05:  mov    0x10(%ebp),%eax
08266d30 +0x1b08:  mov    %eax,(%esp)
08266d33 +0x1b0b:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08266d38 +0x1b10:  lea    -0xa(%ebp),%eax
08266d3b +0x1b13:  mov    %eax,0x4(%esp)
08266d3f +0x1b17:  mov    0x10(%ebp),%eax
08266d42 +0x1b1a:  mov    %eax,(%esp)
08266d45 +0x1b1d:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08266d4a +0x1b22:  mov    0x10(%ebp),%eax
08266d4d +0x1b25:  mov    %eax,(%esp)
08266d50 +0x1b28:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08266d55 +0x1b2d:  movzwl -0xa(%ebp),%edx
08266d59 +0x1b31:  movswl %dx,%edx
08266d5c +0x1b34:  mov    %eax,0x18(%esp)
08266d60 +0x1b38:  mov    %edx,0x14(%esp)
08266d64 +0x1b3c:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08266d6c +0x1b44:  movl   $0x94,0xc(%esp)
08266d74 +0x1b4c:  movl   $&_ZZN17IPacketDispatcherI12MSG_SECU_RPY16SecuCardRpyParamL8ch_state2EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08266d7c +0x1b54:  movl   $"PacketDispatcher.h",0x4(%esp)
08266d84 +0x1b5c:  movl   $0x1,(%esp)
08266d8b +0x1b63:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08266d90 +0x1b68:  mov    $0x95,%eax
08266d95 +0x1b6d:  jmp    08266d9c <+0x1b74>
08266d97 +0x1b6f:  mov    $0x0,%eax
08266d9c +0x1b74:  leave
08266d9d +0x1b75:  ret
08266d9e +0x1b76:  push   %ebp
08266d9f +0x1b77:  mov    %esp,%ebp
08266da1 +0x1b79:  sub    $0x18,%esp
08266da4 +0x1b7c:  mov    0x8(%ebp),%eax
08266da7 +0x1b7f:  movl   $&_ZTV17IPacketDispatcherI18MSG_FINISH_LOADING17stFinishLoadParamL8ch_state0EE+0x8,(%eax)
08266dad +0x1b85:  mov    0x8(%ebp),%eax
08266db0 +0x1b88:  mov    %eax,(%esp)
08266db3 +0x1b8b:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266db8 +0x1b90:  mov    $0x0,%eax
08266dbd +0x1b95:  test   %al,%al
08266dbf +0x1b97:  je     08266dcc <+0x1ba4>
08266dc1 +0x1b99:  mov    0x8(%ebp),%eax
08266dc4 +0x1b9c:  mov    %eax,(%esp)
08266dc7 +0x1b9f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266dcc +0x1ba4:  leave
08266dcd +0x1ba5:  ret
08266dce +0x1ba6:  push   %ebp
08266dcf +0x1ba7:  mov    %esp,%ebp
08266dd1 +0x1ba9:  sub    $0x18,%esp
08266dd4 +0x1bac:  mov    0x8(%ebp),%eax
08266dd7 +0x1baf:  mov    %eax,(%esp)
08266dda +0x1bb2:  call   08266d9e <+0x1b76>
08266ddf +0x1bb7:  mov    0x8(%ebp),%eax
08266de2 +0x1bba:  mov    %eax,(%esp)
08266de5 +0x1bbd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266dea +0x1bc2:  leave
08266deb +0x1bc3:  ret
08266dec +0x1bc4:  push   %ebp
08266ded +0x1bc5:  mov    %esp,%ebp
08266def +0x1bc7:  sub    $0x18,%esp
08266df2 +0x1bca:  mov    0x8(%ebp),%eax
08266df5 +0x1bcd:  movl   $&_ZTV17IPacketDispatcherI26MSG_FLOAT_RDATA_MODULATION9ParamBaseL8ch_state0EE+0x8,(%eax)
08266dfb +0x1bd3:  mov    0x8(%ebp),%eax
08266dfe +0x1bd6:  mov    %eax,(%esp)
08266e01 +0x1bd9:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266e06 +0x1bde:  mov    $0x0,%eax
08266e0b +0x1be3:  test   %al,%al
08266e0d +0x1be5:  je     08266e1a <+0x1bf2>
08266e0f +0x1be7:  mov    0x8(%ebp),%eax
08266e12 +0x1bea:  mov    %eax,(%esp)
08266e15 +0x1bed:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266e1a +0x1bf2:  leave
08266e1b +0x1bf3:  ret
08266e1c +0x1bf4:  push   %ebp
08266e1d +0x1bf5:  mov    %esp,%ebp
08266e1f +0x1bf7:  sub    $0x18,%esp
08266e22 +0x1bfa:  mov    0x8(%ebp),%eax
08266e25 +0x1bfd:  mov    %eax,(%esp)
08266e28 +0x1c00:  call   08266dec <+0x1bc4>
08266e2d +0x1c05:  mov    0x8(%ebp),%eax
08266e30 +0x1c08:  mov    %eax,(%esp)
08266e33 +0x1c0b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266e38 +0x1c10:  leave
08266e39 +0x1c11:  ret
08266e3a +0x1c12:  push   %ebp
08266e3b +0x1c13:  mov    %esp,%ebp
08266e3d +0x1c15:  sub    $0x18,%esp
08266e40 +0x1c18:  mov    0x8(%ebp),%eax
08266e43 +0x1c1b:  movl   $&_ZTV17IPacketDispatcherI26MSG_ABNORMAL_USE_STACKABLE20AbnormalUseStackableL8ch_state0EE+0x8,(%eax)
08266e49 +0x1c21:  mov    0x8(%ebp),%eax
08266e4c +0x1c24:  mov    %eax,(%esp)
08266e4f +0x1c27:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266e54 +0x1c2c:  mov    $0x0,%eax
08266e59 +0x1c31:  test   %al,%al
08266e5b +0x1c33:  je     08266e68 <+0x1c40>
08266e5d +0x1c35:  mov    0x8(%ebp),%eax
08266e60 +0x1c38:  mov    %eax,(%esp)
08266e63 +0x1c3b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266e68 +0x1c40:  leave
08266e69 +0x1c41:  ret
08266e6a +0x1c42:  push   %ebp
08266e6b +0x1c43:  mov    %esp,%ebp
08266e6d +0x1c45:  sub    $0x18,%esp
08266e70 +0x1c48:  mov    0x8(%ebp),%eax
08266e73 +0x1c4b:  mov    %eax,(%esp)
08266e76 +0x1c4e:  call   08266e3a <+0x1c12>
08266e7b +0x1c53:  mov    0x8(%ebp),%eax
08266e7e +0x1c56:  mov    %eax,(%esp)
08266e81 +0x1c59:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266e86 +0x1c5e:  leave
08266e87 +0x1c5f:  ret
08266e88 +0x1c60:  push   %ebp
08266e89 +0x1c61:  mov    %esp,%ebp
08266e8b +0x1c63:  sub    $0x18,%esp
08266e8e +0x1c66:  mov    0x8(%ebp),%eax
08266e91 +0x1c69:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE23CheckSecurityProtectionL8ch_state0EE+0x8,(%eax)
08266e97 +0x1c6f:  mov    0x8(%ebp),%eax
08266e9a +0x1c72:  mov    %eax,(%esp)
08266e9d +0x1c75:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266ea2 +0x1c7a:  mov    $0x0,%eax
08266ea7 +0x1c7f:  test   %al,%al
08266ea9 +0x1c81:  je     08266eb6 <+0x1c8e>
08266eab +0x1c83:  mov    0x8(%ebp),%eax
08266eae +0x1c86:  mov    %eax,(%esp)
08266eb1 +0x1c89:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266eb6 +0x1c8e:  leave
08266eb7 +0x1c8f:  ret
08266eb8 +0x1c90:  push   %ebp
08266eb9 +0x1c91:  mov    %esp,%ebp
08266ebb +0x1c93:  sub    $0x18,%esp
08266ebe +0x1c96:  mov    0x8(%ebp),%eax
08266ec1 +0x1c99:  mov    %eax,(%esp)
08266ec4 +0x1c9c:  call   08266e88 <+0x1c60>
08266ec9 +0x1ca1:  mov    0x8(%ebp),%eax
08266ecc +0x1ca4:  mov    %eax,(%esp)
08266ecf +0x1ca7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266ed4 +0x1cac:  leave
08266ed5 +0x1cad:  ret
08266ed6 +0x1cae:  push   %ebp
08266ed7 +0x1caf:  mov    %esp,%ebp
08266ed9 +0x1cb1:  sub    $0x18,%esp
08266edc +0x1cb4:  mov    0x8(%ebp),%eax
08266edf +0x1cb7:  movl   $&_ZTV17IPacketDispatcherI12MSG_SCAN_DRV17ScanBotByDrvParamL8ch_state0EE+0x8,(%eax)
08266ee5 +0x1cbd:  mov    0x8(%ebp),%eax
08266ee8 +0x1cc0:  mov    %eax,(%esp)
08266eeb +0x1cc3:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266ef0 +0x1cc8:  mov    $0x0,%eax
08266ef5 +0x1ccd:  test   %al,%al
08266ef7 +0x1ccf:  je     08266f04 <+0x1cdc>
08266ef9 +0x1cd1:  mov    0x8(%ebp),%eax
08266efc +0x1cd4:  mov    %eax,(%esp)
08266eff +0x1cd7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266f04 +0x1cdc:  leave
08266f05 +0x1cdd:  ret
08266f06 +0x1cde:  push   %ebp
08266f07 +0x1cdf:  mov    %esp,%ebp
08266f09 +0x1ce1:  sub    $0x18,%esp
08266f0c +0x1ce4:  mov    0x8(%ebp),%eax
08266f0f +0x1ce7:  mov    %eax,(%esp)
08266f12 +0x1cea:  call   08266ed6 <+0x1cae>
08266f17 +0x1cef:  mov    0x8(%ebp),%eax
08266f1a +0x1cf2:  mov    %eax,(%esp)
08266f1d +0x1cf5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266f22 +0x1cfa:  leave
08266f23 +0x1cfb:  ret
08266f24 +0x1cfc:  push   %ebp
08266f25 +0x1cfd:  mov    %esp,%ebp
08266f27 +0x1cff:  sub    $0x18,%esp
08266f2a +0x1d02:  mov    0x8(%ebp),%eax
08266f2d +0x1d05:  movl   $&_ZTV17IPacketDispatcherI15MSG_MOTION_HACK9ParamBaseL8ch_state0EE+0x8,(%eax)
08266f33 +0x1d0b:  mov    0x8(%ebp),%eax
08266f36 +0x1d0e:  mov    %eax,(%esp)
08266f39 +0x1d11:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266f3e +0x1d16:  mov    $0x0,%eax
08266f43 +0x1d1b:  test   %al,%al
08266f45 +0x1d1d:  je     08266f52 <+0x1d2a>
08266f47 +0x1d1f:  mov    0x8(%ebp),%eax
08266f4a +0x1d22:  mov    %eax,(%esp)
08266f4d +0x1d25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266f52 +0x1d2a:  leave
08266f53 +0x1d2b:  ret
08266f54 +0x1d2c:  push   %ebp
08266f55 +0x1d2d:  mov    %esp,%ebp
08266f57 +0x1d2f:  sub    $0x18,%esp
08266f5a +0x1d32:  mov    0x8(%ebp),%eax
08266f5d +0x1d35:  mov    %eax,(%esp)
08266f60 +0x1d38:  call   08266f24 <+0x1cfc>
08266f65 +0x1d3d:  mov    0x8(%ebp),%eax
08266f68 +0x1d40:  mov    %eax,(%esp)
08266f6b +0x1d43:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266f70 +0x1d48:  leave
08266f71 +0x1d49:  ret
08266f72 +0x1d4a:  push   %ebp
08266f73 +0x1d4b:  mov    %esp,%ebp
08266f75 +0x1d4d:  sub    $0x18,%esp
08266f78 +0x1d50:  mov    0x8(%ebp),%eax
08266f7b +0x1d53:  movl   $&_ZTV17IPacketDispatcherI12MSG_SCAN_DLL17ScanBotByDllParamL8ch_state0EE+0x8,(%eax)
08266f81 +0x1d59:  mov    0x8(%ebp),%eax
08266f84 +0x1d5c:  mov    %eax,(%esp)
08266f87 +0x1d5f:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266f8c +0x1d64:  mov    $0x0,%eax
08266f91 +0x1d69:  test   %al,%al
08266f93 +0x1d6b:  je     08266fa0 <+0x1d78>
08266f95 +0x1d6d:  mov    0x8(%ebp),%eax
08266f98 +0x1d70:  mov    %eax,(%esp)
08266f9b +0x1d73:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266fa0 +0x1d78:  leave
08266fa1 +0x1d79:  ret
08266fa2 +0x1d7a:  push   %ebp
08266fa3 +0x1d7b:  mov    %esp,%ebp
08266fa5 +0x1d7d:  sub    $0x18,%esp
08266fa8 +0x1d80:  mov    0x8(%ebp),%eax
08266fab +0x1d83:  mov    %eax,(%esp)
08266fae +0x1d86:  call   08266f72 <+0x1d4a>
08266fb3 +0x1d8b:  mov    0x8(%ebp),%eax
08266fb6 +0x1d8e:  mov    %eax,(%esp)
08266fb9 +0x1d91:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266fbe +0x1d96:  leave
08266fbf +0x1d97:  ret
08266fc0 +0x1d98:  push   %ebp
08266fc1 +0x1d99:  mov    %esp,%ebp
08266fc3 +0x1d9b:  sub    $0x18,%esp
08266fc6 +0x1d9e:  mov    0x8(%ebp),%eax
08266fc9 +0x1da1:  movl   $&_ZTV17IPacketDispatcherI15MSG_SCRIPT_HASH15ScriptHashParamL8ch_state0EE+0x8,(%eax)
08266fcf +0x1da7:  mov    0x8(%ebp),%eax
08266fd2 +0x1daa:  mov    %eax,(%esp)
08266fd5 +0x1dad:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08266fda +0x1db2:  mov    $0x0,%eax
08266fdf +0x1db7:  test   %al,%al
08266fe1 +0x1db9:  je     08266fee <+0x1dc6>
08266fe3 +0x1dbb:  mov    0x8(%ebp),%eax
08266fe6 +0x1dbe:  mov    %eax,(%esp)
08266fe9 +0x1dc1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08266fee +0x1dc6:  leave
08266fef +0x1dc7:  ret
08266ff0 +0x1dc8:  push   %ebp
08266ff1 +0x1dc9:  mov    %esp,%ebp
08266ff3 +0x1dcb:  sub    $0x18,%esp
08266ff6 +0x1dce:  mov    0x8(%ebp),%eax
08266ff9 +0x1dd1:  mov    %eax,(%esp)
08266ffc +0x1dd4:  call   08266fc0 <+0x1d98>
08267001 +0x1dd9:  mov    0x8(%ebp),%eax
08267004 +0x1ddc:  mov    %eax,(%esp)
08267007 +0x1ddf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826700c +0x1de4:  leave
0826700d +0x1de5:  ret
0826700e +0x1de6:  push   %ebp
0826700f +0x1de7:  mov    %esp,%ebp
08267011 +0x1de9:  sub    $0x18,%esp
08267014 +0x1dec:  mov    0x8(%ebp),%eax
08267017 +0x1def:  movl   $&_ZTV17IPacketDispatcherI15MSG_TEMP_STRUCT9TempParamL8ch_state2EE+0x8,(%eax)
0826701d +0x1df5:  mov    0x8(%ebp),%eax
08267020 +0x1df8:  mov    %eax,(%esp)
08267023 +0x1dfb:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08267028 +0x1e00:  mov    $0x0,%eax
0826702d +0x1e05:  test   %al,%al
0826702f +0x1e07:  je     0826703c <+0x1e14>
08267031 +0x1e09:  mov    0x8(%ebp),%eax
08267034 +0x1e0c:  mov    %eax,(%esp)
08267037 +0x1e0f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826703c +0x1e14:  leave
0826703d +0x1e15:  ret
0826703e +0x1e16:  push   %ebp
0826703f +0x1e17:  mov    %esp,%ebp
08267041 +0x1e19:  sub    $0x18,%esp
08267044 +0x1e1c:  mov    0x8(%ebp),%eax
08267047 +0x1e1f:  mov    %eax,(%esp)
0826704a +0x1e22:  call   0826700e <+0x1de6>
0826704f +0x1e27:  mov    0x8(%ebp),%eax
08267052 +0x1e2a:  mov    %eax,(%esp)
08267055 +0x1e2d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826705a +0x1e32:  leave
0826705b +0x1e33:  ret
0826705c +0x1e34:  push   %ebp
0826705d +0x1e35:  mov    %esp,%ebp
0826705f +0x1e37:  sub    $0x18,%esp
08267062 +0x1e3a:  mov    0x8(%ebp),%eax
08267065 +0x1e3d:  movl   $&_ZTV17IPacketDispatcherI12MSG_SECU_RPY16SecuCardRpyParamL8ch_state2EE+0x8,(%eax)
0826706b +0x1e43:  mov    0x8(%ebp),%eax
0826706e +0x1e46:  mov    %eax,(%esp)
08267071 +0x1e49:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08267076 +0x1e4e:  mov    $0x0,%eax
0826707b +0x1e53:  test   %al,%al
0826707d +0x1e55:  je     0826708a <+0x1e62>
0826707f +0x1e57:  mov    0x8(%ebp),%eax
08267082 +0x1e5a:  mov    %eax,(%esp)
08267085 +0x1e5d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826708a +0x1e62:  leave
0826708b +0x1e63:  ret
0826708c +0x1e64:  push   %ebp
0826708d +0x1e65:  mov    %esp,%ebp
0826708f +0x1e67:  sub    $0x18,%esp
08267092 +0x1e6a:  mov    0x8(%ebp),%eax
08267095 +0x1e6d:  mov    %eax,(%esp)
08267098 +0x1e70:  call   0826705c <+0x1e34>
0826709d +0x1e75:  mov    0x8(%ebp),%eax
082670a0 +0x1e78:  mov    %eax,(%esp)
082670a3 +0x1e7b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082670a8 +0x1e80:  leave
082670a9 +0x1e81:  ret
082670aa +0x1e82:  push   %ebp
082670ab +0x1e83:  mov    %esp,%ebp
082670ad +0x1e85:  sub    $0x38,%esp
082670b0 +0x1e88:  mov    0xc(%ebp),%eax
082670b3 +0x1e8b:  mov    %eax,(%esp)
082670b6 +0x1e8e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082670bb +0x1e93:  shr    $0x1f,%eax
082670be +0x1e96:  test   %al,%al
082670c0 +0x1e98:  je     08267134 <+0x1f0c>
082670c2 +0x1e9a:  movl   $0x1,0x4(%esp)
082670ca +0x1ea2:  mov    0x10(%ebp),%eax
082670cd +0x1ea5:  mov    %eax,(%esp)
082670d0 +0x1ea8:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
082670d5 +0x1ead:  lea    -0xa(%ebp),%eax
082670d8 +0x1eb0:  mov    %eax,0x4(%esp)
082670dc +0x1eb4:  mov    0x10(%ebp),%eax
082670df +0x1eb7:  mov    %eax,(%esp)
082670e2 +0x1eba:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082670e7 +0x1ebf:  mov    0x10(%ebp),%eax
082670ea +0x1ec2:  mov    %eax,(%esp)
082670ed +0x1ec5:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
082670f2 +0x1eca:  movzwl -0xa(%ebp),%edx
082670f6 +0x1ece:  movswl %dx,%edx
082670f9 +0x1ed1:  mov    %eax,0x18(%esp)
082670fd +0x1ed5:  mov    %edx,0x14(%esp)
08267101 +0x1ed9:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08267109 +0x1ee1:  movl   $0x94,0xc(%esp)
08267111 +0x1ee9:  movl   $&_ZZN17IPacketDispatcherI18MSG_FINISH_LOADING17stFinishLoadParamL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08267119 +0x1ef1:  movl   $"PacketDispatcher.h",0x4(%esp)
08267121 +0x1ef9:  movl   $0x1,(%esp)
08267128 +0x1f00:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826712d +0x1f05:  mov    $0x95,%eax
08267132 +0x1f0a:  jmp    08267139 <+0x1f11>
08267134 +0x1f0c:  mov    $0x0,%eax
08267139 +0x1f11:  leave
0826713a +0x1f12:  ret
0826713b +0x1f13:  nop
0826713c +0x1f14:  push   %ebp
0826713d +0x1f15:  mov    %esp,%ebp
0826713f +0x1f17:  pop    %ebp
08267140 +0x1f18:  ret
08267141 +0x1f19:  nop
08267142 +0x1f1a:  push   %ebp
08267143 +0x1f1b:  mov    %esp,%ebp
08267145 +0x1f1d:  pop    %ebp
08267146 +0x1f1e:  ret
08267147 +0x1f1f:  nop
08267148 +0x1f20:  push   %ebp
08267149 +0x1f21:  mov    %esp,%ebp
0826714b +0x1f23:  mov    $0x0,%eax
08267150 +0x1f28:  pop    %ebp
08267151 +0x1f29:  ret
08267152 +0x1f2a:  push   %ebp
08267153 +0x1f2b:  mov    %esp,%ebp
08267155 +0x1f2d:  pop    %ebp
08267156 +0x1f2e:  ret
08267157 +0x1f2f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8265228

/* Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&) */

void Dispatcher_SecurityCardAuthRpy::_GLOBAL__I_read(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
