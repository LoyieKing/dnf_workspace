# read

`_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE`

`global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Dispatcher_UseRightOfChangeGrowType` | `0x082602d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082602d0  _GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE
#           global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)
# range [0x082602d0, 0x08262643]
082602d0 +0x0000:  push   %ebp
082602d1 +0x0001:  mov    %esp,%ebp
082602d3 +0x0003:  sub    $0x18,%esp
082602d6 +0x0006:  movl   $0xffff,0x4(%esp)
082602de +0x000e:  movl   $0x1,(%esp)
082602e5 +0x0015:  call   08260290 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082602ea +0x001a:  leave
082602eb +0x001b:  ret
082602ec +0x001c:  push   %ebp
082602ed +0x001d:  mov    %esp,%ebp
082602ef +0x001f:  sub    $0x18,%esp
082602f2 +0x0022:  mov    0x8(%ebp),%eax
082602f5 +0x0025:  mov    %eax,(%esp)
082602f8 +0x0028:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
082602fd +0x002d:  movl   $0x25,0x8(%esp)
08260305 +0x0035:  movl   $0x0,0x4(%esp)
0826030d +0x003d:  mov    0x8(%ebp),%eax
08260310 +0x0040:  mov    %eax,(%esp)
08260313 +0x0043:  call   0807dcc0 <_init+0x5b8>
08260318 +0x0048:  leave
08260319 +0x0049:  ret
0826031a +0x004a:  push   %ebp
0826031b +0x004b:  mov    %esp,%ebp
0826031d +0x004d:  sub    $0x18,%esp
08260320 +0x0050:  mov    0x8(%ebp),%eax
08260323 +0x0053:  mov    %eax,(%esp)
08260326 +0x0056:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
0826032b +0x005b:  mov    0x8(%ebp),%eax
0826032e +0x005e:  movw   $0x0,0xd(%eax)
08260334 +0x0064:  mov    0x8(%ebp),%eax
08260337 +0x0067:  movb   $0x0,0xf(%eax)
0826033b +0x006b:  leave
0826033c +0x006c:  ret
0826033d +0x006d:  nop
0826033e +0x006e:  push   %ebp
0826033f +0x006f:  mov    %esp,%ebp
08260341 +0x0071:  sub    $0x18,%esp
08260344 +0x0074:  mov    0x8(%ebp),%eax
08260347 +0x0077:  mov    %eax,(%esp)
0826034a +0x007a:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
0826034f +0x007f:  mov    0x8(%ebp),%eax
08260352 +0x0082:  movw   $0x0,0xd(%eax)
08260358 +0x0088:  mov    0x8(%ebp),%eax
0826035b +0x008b:  movb   $0x0,0xf(%eax)
0826035f +0x008f:  mov    0x8(%ebp),%eax
08260362 +0x0092:  movl   $0x0,0x10(%eax)
08260369 +0x0099:  mov    0x8(%ebp),%eax
0826036c +0x009c:  movb   $0x0,0x14(%eax)
08260370 +0x00a0:  mov    0x8(%ebp),%eax
08260373 +0x00a3:  movl   $0x0,0x15(%eax)
0826037a +0x00aa:  mov    0x8(%ebp),%eax
0826037d +0x00ad:  movl   $0x0,0x19(%eax)
08260384 +0x00b4:  leave
08260385 +0x00b5:  ret
08260386 +0x00b6:  push   %ebp
08260387 +0x00b7:  mov    %esp,%ebp
08260389 +0x00b9:  sub    $0x18,%esp
0826038c +0x00bc:  mov    0x8(%ebp),%eax
0826038f +0x00bf:  mov    %eax,(%esp)
08260392 +0x00c2:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
08260397 +0x00c7:  mov    0x8(%ebp),%eax
0826039a +0x00ca:  movl   $0x0,0xd(%eax)
082603a1 +0x00d1:  leave
082603a2 +0x00d2:  ret
082603a3 +0x00d3:  nop
082603a4 +0x00d4:  push   %ebp
082603a5 +0x00d5:  mov    %esp,%ebp
082603a7 +0x00d7:  sub    $0x18,%esp
082603aa +0x00da:  mov    0x8(%ebp),%eax
082603ad +0x00dd:  mov    %eax,(%esp)
082603b0 +0x00e0:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
082603b5 +0x00e5:  mov    0x8(%ebp),%eax
082603b8 +0x00e8:  add    $0xd,%eax
082603bb +0x00eb:  movl   $0x28,0x8(%esp)
082603c3 +0x00f3:  movl   $0x0,0x4(%esp)
082603cb +0x00fb:  mov    %eax,(%esp)
082603ce +0x00fe:  call   0807dcc0 <_init+0x5b8>
082603d3 +0x0103:  leave
082603d4 +0x0104:  ret
082603d5 +0x0105:  nop
082603d6 +0x0106:  push   %ebp
082603d7 +0x0107:  mov    %esp,%ebp
082603d9 +0x0109:  push   %esi
082603da +0x010a:  push   %ebx
082603db +0x010b:  sub    $0x10,%esp
082603de +0x010e:  mov    0x8(%ebp),%eax
082603e1 +0x0111:  mov    %eax,(%esp)
082603e4 +0x0114:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
082603e9 +0x0119:  mov    0x8(%ebp),%eax
082603ec +0x011c:  movb   $0x0,0xd(%eax)
082603f0 +0x0120:  mov    0x8(%ebp),%eax
082603f3 +0x0123:  add    $0xe,%eax
082603f6 +0x0126:  mov    %eax,(%esp)
082603f9 +0x0129:  call   080ea586 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1bf>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1bf
082603fe +0x012e:  mov    0x8(%ebp),%eax
08260401 +0x0131:  add    $0xe,%eax
08260404 +0x0134:  mov    %eax,(%esp)
08260407 +0x0137:  call   0826069c <+0x3cc>
0826040c +0x013c:  jmp    0826042c <+0x15c>
0826040e +0x013e:  mov    %edx,%ebx
08260410 +0x0140:  mov    %eax,%esi
08260412 +0x0142:  mov    0x8(%ebp),%eax
08260415 +0x0145:  add    $0xe,%eax
08260418 +0x0148:  mov    %eax,(%esp)
0826041b +0x014b:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
08260420 +0x0150:  mov    %esi,%eax
08260422 +0x0152:  mov    %ebx,%edx
08260424 +0x0154:  mov    %eax,(%esp)
08260427 +0x0157:  call   08ae3750 <_Unwind_Resume>
0826042c +0x015c:  add    $0x10,%esp
0826042f +0x015f:  pop    %ebx
08260430 +0x0160:  pop    %esi
08260431 +0x0161:  pop    %ebp
08260432 +0x0162:  ret
08260433 +0x0163:  nop
08260434 +0x0164:  push   %ebp
08260435 +0x0165:  mov    %esp,%ebp
08260437 +0x0167:  sub    $0x18,%esp
0826043a +0x016a:  mov    0x8(%ebp),%eax
0826043d +0x016d:  mov    %eax,(%esp)
08260440 +0x0170:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
08260445 +0x0175:  mov    0x8(%ebp),%eax
08260448 +0x0178:  movb   $0x0,0xd(%eax)
0826044c +0x017c:  leave
0826044d +0x017d:  ret
0826044e +0x017e:  push   %ebp
0826044f +0x017f:  mov    %esp,%ebp
08260451 +0x0181:  sub    $0x18,%esp
08260454 +0x0184:  mov    0x8(%ebp),%eax
08260457 +0x0187:  mov    %eax,(%esp)
0826045a +0x018a:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
0826045f +0x018f:  mov    0x8(%ebp),%eax
08260462 +0x0192:  movb   $0x0,0xd(%eax)
08260466 +0x0196:  mov    0x8(%ebp),%eax
08260469 +0x0199:  movb   $0x0,0xe(%eax)
0826046d +0x019d:  leave
0826046e +0x019e:  ret
0826046f +0x019f:  nop
08260470 +0x01a0:  push   %ebp
08260471 +0x01a1:  mov    %esp,%ebp
08260473 +0x01a3:  sub    $0x18,%esp
08260476 +0x01a6:  mov    0x8(%ebp),%eax
08260479 +0x01a9:  mov    %eax,(%esp)
0826047c +0x01ac:  call   0812c076 <_GLOBAL__I__ZN37DisPatcher_EventDungeon_DestoryObject4readER9PacketBufR8MSG_BASE+0x6b>  ; global constructors keyed to DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&)+0x6b
08260481 +0x01b1:  mov    0x8(%ebp),%eax
08260484 +0x01b4:  movb   $0x0,0xd(%eax)
08260488 +0x01b8:  mov    0x8(%ebp),%eax
0826048b +0x01bb:  movl   $0x0,0xe(%eax)
08260492 +0x01c2:  leave
08260493 +0x01c3:  ret
08260494 +0x01c4:  push   %ebp
08260495 +0x01c5:  mov    %esp,%ebp
08260497 +0x01c7:  sub    $0x8,%esp
0826049a +0x01ca:  mov    0xc(%ebp),%edx
0826049d +0x01cd:  mov    0x10(%ebp),%eax
082604a0 +0x01d0:  mov    %dl,-0x4(%ebp)
082604a3 +0x01d3:  mov    %al,-0x8(%ebp)
082604a6 +0x01d6:  mov    0x8(%ebp),%eax
082604a9 +0x01d9:  mov    0x10(%eax),%eax
082604ac +0x01dc:  test   %eax,%eax
082604ae +0x01de:  jne    082604b7 <+0x1e7>
082604b0 +0x01e0:  mov    $0x0,%eax
082604b5 +0x01e5:  jmp    082604e9 <+0x219>
082604b7 +0x01e7:  mov    0x8(%ebp),%eax
082604ba +0x01ea:  mov    0x10(%eax),%eax
082604bd +0x01ed:  movb   $0x1,0x14d0(%eax)
082604c4 +0x01f4:  mov    0x8(%ebp),%eax
082604c7 +0x01f7:  mov    0x10(%eax),%eax
082604ca +0x01fa:  movzbl -0x4(%ebp),%edx
082604ce +0x01fe:  mov    %dl,0x14ce(%eax)
082604d4 +0x0204:  mov    0x8(%ebp),%eax
082604d7 +0x0207:  mov    0x10(%eax),%eax
082604da +0x020a:  movzbl -0x8(%ebp),%edx
082604de +0x020e:  mov    %dl,0x14cf(%eax)
082604e4 +0x0214:  mov    $0x1,%eax
082604e9 +0x0219:  leave
082604ea +0x021a:  ret
082604eb +0x021b:  nop
082604ec +0x021c:  push   %ebp
082604ed +0x021d:  mov    %esp,%ebp
082604ef +0x021f:  mov    0x8(%ebp),%eax
082604f2 +0x0222:  add    $0x858d4,%eax
082604f7 +0x0227:  pop    %ebp
082604f8 +0x0228:  ret
082604f9 +0x0229:  nop
082604fa +0x022a:  push   %ebp
082604fb +0x022b:  mov    %esp,%ebp
082604fd +0x022d:  sub    $0x18,%esp
08260500 +0x0230:  mov    0x8(%ebp),%eax
08260503 +0x0233:  mov    %eax,(%esp)
08260506 +0x0236:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
0826050b +0x023b:  mov    0x8(%ebp),%eax
0826050e +0x023e:  movl   $&_ZTV12stComboSkill+0x8,(%eax)
08260514 +0x0244:  mov    0x8(%ebp),%eax
08260517 +0x0247:  movl   $0x0,0x4(%eax)
0826051e +0x024e:  leave
0826051f +0x024f:  ret
08260520 +0x0250:  push   %ebp
08260521 +0x0251:  mov    %esp,%ebp
08260523 +0x0253:  sub    $0x18,%esp
08260526 +0x0256:  mov    0x8(%ebp),%eax
08260529 +0x0259:  mov    %eax,(%esp)
0826052c +0x025c:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08260531 +0x0261:  mov    0x8(%ebp),%eax
08260534 +0x0264:  movl   $&_ZTV35stComboSkillExtensionQuickSlotReset+0x8,(%eax)
0826053a +0x026a:  mov    0x8(%ebp),%eax
0826053d +0x026d:  movl   $0x0,0x4(%eax)
08260544 +0x0274:  leave
08260545 +0x0275:  ret
08260546 +0x0276:  push   %ebp
08260547 +0x0277:  mov    %esp,%ebp
08260549 +0x0279:  sub    $0x18,%esp
0826054c +0x027c:  mov    0x8(%ebp),%eax
0826054f +0x027f:  mov    %eax,(%esp)
08260552 +0x0282:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08260557 +0x0287:  mov    0x8(%ebp),%eax
0826055a +0x028a:  movl   $&_ZTV26stUpdateContractOfCubeInfo+0x8,(%eax)
08260560 +0x0290:  mov    0x8(%ebp),%eax
08260563 +0x0293:  movl   $0x0,0x4(%eax)
0826056a +0x029a:  mov    0x8(%ebp),%eax
0826056d +0x029d:  movb   $0x0,0x8(%eax)
08260571 +0x02a1:  mov    0x8(%ebp),%eax
08260574 +0x02a4:  movb   $0x0,0x9(%eax)
08260578 +0x02a8:  leave
08260579 +0x02a9:  ret
0826057a +0x02aa:  push   %ebp
0826057b +0x02ab:  mov    %esp,%ebp
0826057d +0x02ad:  sub    $0x18,%esp
08260580 +0x02b0:  mov    0x8(%ebp),%eax
08260583 +0x02b3:  mov    %eax,(%esp)
08260586 +0x02b6:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
0826058b +0x02bb:  mov    0x8(%ebp),%eax
0826058e +0x02be:  movl   $&_ZTV18stSecurityLogParam+0x8,(%eax)
08260594 +0x02c4:  leave
08260595 +0x02c5:  ret
08260596 +0x02c6:  push   %ebp
08260597 +0x02c7:  mov    %esp,%ebp
08260599 +0x02c9:  sub    $0x18,%esp
0826059c +0x02cc:  mov    0x8(%ebp),%eax
0826059f +0x02cf:  movl   $&_ZTV22Dispatcher_SecurityLog+0x8,(%eax)
082605a5 +0x02d5:  mov    0x8(%ebp),%eax
082605a8 +0x02d8:  mov    %eax,(%esp)
082605ab +0x02db:  call   082606b0 <+0x3e0>
082605b0 +0x02e0:  mov    $0x0,%eax
082605b5 +0x02e5:  test   %al,%al
082605b7 +0x02e7:  je     082605c4 <+0x2f4>
082605b9 +0x02e9:  mov    0x8(%ebp),%eax
082605bc +0x02ec:  mov    %eax,(%esp)
082605bf +0x02ef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082605c4 +0x02f4:  leave
082605c5 +0x02f5:  ret
082605c6 +0x02f6:  push   %ebp
082605c7 +0x02f7:  mov    %esp,%ebp
082605c9 +0x02f9:  sub    $0x18,%esp
082605cc +0x02fc:  mov    0x8(%ebp),%eax
082605cf +0x02ff:  mov    %eax,(%esp)
082605d2 +0x0302:  call   08260596 <+0x2c6>
082605d7 +0x0307:  mov    0x8(%ebp),%eax
082605da +0x030a:  mov    %eax,(%esp)
082605dd +0x030d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082605e2 +0x0312:  leave
082605e3 +0x0313:  ret
082605e4 +0x0314:  push   %ebp
082605e5 +0x0315:  mov    %esp,%ebp
082605e7 +0x0317:  mov    $0x0,%eax
082605ec +0x031c:  pop    %ebp
082605ed +0x031d:  ret
082605ee +0x031e:  push   %ebp
082605ef +0x031f:  mov    %esp,%ebp
082605f1 +0x0321:  mov    $0x0,%eax
082605f6 +0x0326:  pop    %ebp
082605f7 +0x0327:  ret
082605f8 +0x0328:  push   %ebp
082605f9 +0x0329:  mov    %esp,%ebp
082605fb +0x032b:  pop    %ebp
082605fc +0x032c:  ret
082605fd +0x032d:  nop
082605fe +0x032e:  push   %ebp
082605ff +0x032f:  mov    %esp,%ebp
08260601 +0x0331:  mov    $0x0,%eax
08260606 +0x0336:  pop    %ebp
08260607 +0x0337:  ret
08260608 +0x0338:  push   %ebp
08260609 +0x0339:  mov    %esp,%ebp
0826060b +0x033b:  pop    %ebp
0826060c +0x033c:  ret
0826060d +0x033d:  nop
0826060e +0x033e:  push   %ebp
0826060f +0x033f:  mov    %esp,%ebp
08260611 +0x0341:  mov    $0x0,%eax
08260616 +0x0346:  pop    %ebp
08260617 +0x0347:  ret
08260618 +0x0348:  push   %ebp
08260619 +0x0349:  mov    %esp,%ebp
0826061b +0x034b:  mov    $0x0,%eax
08260620 +0x0350:  pop    %ebp
08260621 +0x0351:  ret
08260622 +0x0352:  push   %ebp
08260623 +0x0353:  mov    %esp,%ebp
08260625 +0x0355:  pop    %ebp
08260626 +0x0356:  ret
08260627 +0x0357:  nop
08260628 +0x0358:  push   %ebp
08260629 +0x0359:  mov    %esp,%ebp
0826062b +0x035b:  mov    0x8(%ebp),%eax
0826062e +0x035e:  movl   $0x0,(%eax)
08260634 +0x0364:  mov    0x8(%ebp),%eax
08260637 +0x0367:  movl   $0x0,0x4(%eax)
0826063e +0x036e:  pop    %ebp
0826063f +0x036f:  ret
08260640 +0x0370:  push   %ebp
08260641 +0x0371:  mov    %esp,%ebp
08260643 +0x0373:  sub    $0x18,%esp
08260646 +0x0376:  mov    $&_ZGVZ21CPacketTracerInstancevE8instance,%eax
0826064b +0x037b:  movzbl (%eax),%eax
0826064e +0x037e:  test   %al,%al
08260650 +0x0380:  jne    0826067f <+0x3af>
08260652 +0x0382:  movl   $&_ZGVZ21CPacketTracerInstancevE8instance,(%esp)
08260659 +0x0389:  call   08725330 <__cxa_guard_acquire>
0826065e +0x038e:  test   %eax,%eax
08260660 +0x0390:  setne  %al
08260663 +0x0393:  test   %al,%al
08260665 +0x0395:  je     0826067f <+0x3af>
08260667 +0x0397:  movl   $&_ZZ21CPacketTracerInstancevE8instance,(%esp)
0826066e +0x039e:  call   08260628 <+0x358>
08260673 +0x03a3:  movl   $&_ZGVZ21CPacketTracerInstancevE8instance,(%esp)
0826067a +0x03aa:  call   08725250 <__cxa_guard_release>
0826067f +0x03af:  mov    $&_ZZ21CPacketTracerInstancevE8instance,%eax
08260684 +0x03b4:  leave
08260685 +0x03b5:  ret
08260686 +0x03b6:  push   %ebp
08260687 +0x03b7:  mov    %esp,%ebp
08260689 +0x03b9:  sub    $0x18,%esp
0826068c +0x03bc:  mov    0x8(%ebp),%eax
0826068f +0x03bf:  add    $0x4,%eax
08260692 +0x03c2:  mov    %eax,(%esp)
08260695 +0x03c5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0826069a +0x03ca:  leave
0826069b +0x03cb:  ret
0826069c +0x03cc:  push   %ebp
0826069d +0x03cd:  mov    %esp,%ebp
0826069f +0x03cf:  sub    $0x18,%esp
082606a2 +0x03d2:  mov    0x8(%ebp),%eax
082606a5 +0x03d5:  mov    %eax,(%esp)
082606a8 +0x03d8:  call   08260794 <+0x4c4>
082606ad +0x03dd:  leave
082606ae +0x03de:  ret
082606af +0x03df:  nop
082606b0 +0x03e0:  push   %ebp
082606b1 +0x03e1:  mov    %esp,%ebp
082606b3 +0x03e3:  sub    $0x18,%esp
082606b6 +0x03e6:  mov    0x8(%ebp),%eax
082606b9 +0x03e9:  movl   $&_ZTV17IPacketDispatcherI23MSG_SECURITY_LOG_PACKET18stSecurityLogParamL8ch_state0EE+0x8,(%eax)
082606bf +0x03ef:  mov    0x8(%ebp),%eax
082606c2 +0x03f2:  mov    %eax,(%esp)
082606c5 +0x03f5:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
082606ca +0x03fa:  mov    $0x0,%eax
082606cf +0x03ff:  test   %al,%al
082606d1 +0x0401:  je     082606de <+0x40e>
082606d3 +0x0403:  mov    0x8(%ebp),%eax
082606d6 +0x0406:  mov    %eax,(%esp)
082606d9 +0x0409:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082606de +0x040e:  leave
082606df +0x040f:  ret
082606e0 +0x0410:  push   %ebp
082606e1 +0x0411:  mov    %esp,%ebp
082606e3 +0x0413:  sub    $0x18,%esp
082606e6 +0x0416:  mov    0x8(%ebp),%eax
082606e9 +0x0419:  mov    %eax,(%esp)
082606ec +0x041c:  call   082606b0 <+0x3e0>
082606f1 +0x0421:  mov    0x8(%ebp),%eax
082606f4 +0x0424:  mov    %eax,(%esp)
082606f7 +0x0427:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082606fc +0x042c:  leave
082606fd +0x042d:  ret
082606fe +0x042e:  push   %ebp
082606ff +0x042f:  mov    %esp,%ebp
08260701 +0x0431:  push   %edi
08260702 +0x0432:  push   %esi
08260703 +0x0433:  push   %ebx
08260704 +0x0434:  sub    $0x1c,%esp
08260707 +0x0437:  mov    0x8(%ebp),%ebx
0826070a +0x043a:  mov    %ebx,%edi
0826070c +0x043c:  mov    0x10(%ebp),%eax
0826070f +0x043f:  mov    %eax,(%esp)
08260712 +0x0442:  call   080eadc2 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9fb>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9fb
08260717 +0x0447:  mov    %eax,%esi
08260719 +0x0449:  mov    0xc(%ebp),%eax
0826071c +0x044c:  mov    %eax,(%esp)
0826071f +0x044f:  call   080f59f2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9a3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9a3
08260724 +0x0454:  mov    %esi,0x8(%esp)
08260728 +0x0458:  mov    %eax,0x4(%esp)
0826072c +0x045c:  mov    %edi,(%esp)
0826072f +0x045f:  call   0826080a <+0x53a>
08260734 +0x0464:  mov    %ebx,%eax
08260736 +0x0466:  mov    %ebx,%eax
08260738 +0x0468:  add    $0x1c,%esp
0826073b +0x046b:  pop    %ebx
0826073c +0x046c:  pop    %esi
0826073d +0x046d:  pop    %edi
0826073e +0x046e:  pop    %ebp
0826073f +0x046f:  ret    $0x4
08260742 +0x0472:  push   %ebp
08260743 +0x0473:  mov    %esp,%ebp
08260745 +0x0475:  sub    $0x18,%esp
08260748 +0x0478:  mov    0xc(%ebp),%eax
0826074b +0x047b:  mov    %eax,(%esp)
0826074e +0x047e:  call   080f5a2b <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9dc>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9dc
08260753 +0x0483:  movzwl (%eax),%edx
08260756 +0x0486:  mov    0x8(%ebp),%eax
08260759 +0x0489:  mov    %dx,(%eax)
0826075c +0x048c:  mov    0xc(%ebp),%eax
0826075f +0x048f:  add    $0x4,%eax
08260762 +0x0492:  mov    %eax,(%esp)
08260765 +0x0495:  call   080eae01 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xa3a>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xa3a
0826076a +0x049a:  mov    0x8(%ebp),%edx
0826076d +0x049d:  add    $0x4,%edx
08260770 +0x04a0:  mov    %eax,0x4(%esp)
08260774 +0x04a4:  mov    %edx,(%esp)
08260777 +0x04a7:  call   080eae0a <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xa43>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xa43
0826077c +0x04ac:  leave
0826077d +0x04ad:  ret
0826077e +0x04ae:  push   %ebp
0826077f +0x04af:  mov    %esp,%ebp
08260781 +0x04b1:  sub    $0x18,%esp
08260784 +0x04b4:  mov    0x8(%ebp),%eax
08260787 +0x04b7:  mov    (%eax),%eax
08260789 +0x04b9:  mov    %eax,(%esp)
0826078c +0x04bc:  call   08260844 <+0x574>
08260791 +0x04c1:  leave
08260792 +0x04c2:  ret
08260793 +0x04c3:  nop
08260794 +0x04c4:  push   %ebp
08260795 +0x04c5:  mov    %esp,%ebp
08260797 +0x04c7:  push   %ebx
08260798 +0x04c8:  sub    $0x14,%esp
0826079b +0x04cb:  mov    0x8(%ebp),%eax
0826079e +0x04ce:  mov    %eax,(%esp)
082607a1 +0x04d1:  call   080eab68 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x7a1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x7a1
082607a6 +0x04d6:  mov    %eax,0x4(%esp)
082607aa +0x04da:  mov    0x8(%ebp),%eax
082607ad +0x04dd:  mov    %eax,(%esp)
082607b0 +0x04e0:  call   080eab12 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x74b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x74b
082607b5 +0x04e5:  mov    0x8(%ebp),%eax
082607b8 +0x04e8:  mov    %eax,(%esp)
082607bb +0x04eb:  call   080eb1a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xddd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xddd
082607c0 +0x04f0:  mov    %eax,%ebx
082607c2 +0x04f2:  mov    0x8(%ebp),%eax
082607c5 +0x04f5:  mov    %eax,(%esp)
082607c8 +0x04f8:  call   080eb198 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xdd1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xdd1
082607cd +0x04fd:  mov    %eax,(%ebx)
082607cf +0x04ff:  mov    0x8(%ebp),%eax
082607d2 +0x0502:  mov    %eax,(%esp)
082607d5 +0x0505:  call   082608ae <+0x5de>
082607da +0x050a:  movl   $0x0,(%eax)
082607e0 +0x0510:  mov    0x8(%ebp),%eax
082607e3 +0x0513:  mov    %eax,(%esp)
082607e6 +0x0516:  call   080eb1b0 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xde9>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xde9
082607eb +0x051b:  mov    %eax,%ebx
082607ed +0x051d:  mov    0x8(%ebp),%eax
082607f0 +0x0520:  mov    %eax,(%esp)
082607f3 +0x0523:  call   080eb198 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xdd1>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xdd1
082607f8 +0x0528:  mov    %eax,(%ebx)
082607fa +0x052a:  mov    0x8(%ebp),%eax
082607fd +0x052d:  movl   $0x0,0x11(%eax)
08260804 +0x0534:  add    $0x14,%esp
08260807 +0x0537:  pop    %ebx
08260808 +0x0538:  pop    %ebp
08260809 +0x0539:  ret
0826080a +0x053a:  push   %ebp
0826080b +0x053b:  mov    %esp,%ebp
0826080d +0x053d:  sub    $0x18,%esp
08260810 +0x0540:  mov    0xc(%ebp),%eax
08260813 +0x0543:  mov    %eax,(%esp)
08260816 +0x0546:  call   080f59f2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9a3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9a3
0826081b +0x054b:  movzwl (%eax),%edx
0826081e +0x054e:  mov    0x8(%ebp),%eax
08260821 +0x0551:  mov    %dx,(%eax)
08260824 +0x0554:  mov    0x10(%ebp),%eax
08260827 +0x0557:  mov    %eax,(%esp)
0826082a +0x055a:  call   080eadc2 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9fb>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9fb
0826082f +0x055f:  mov    0x8(%ebp),%edx
08260832 +0x0562:  add    $0x4,%edx
08260835 +0x0565:  mov    %eax,0x4(%esp)
08260839 +0x0569:  mov    %edx,(%esp)
0826083c +0x056c:  call   080eaa36 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x66f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x66f
08260841 +0x0571:  leave
08260842 +0x0572:  ret
08260843 +0x0573:  nop
08260844 +0x0574:  push   %ebp
08260845 +0x0575:  mov    %esp,%ebp
08260847 +0x0577:  sub    $0x28,%esp
0826084a +0x057a:  jmp    08260868 <+0x598>
0826084c +0x057c:  mov    0x8(%ebp),%eax
0826084f +0x057f:  mov    %eax,(%esp)
08260852 +0x0582:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08260857 +0x0587:  add    %eax,%eax
08260859 +0x0589:  mov    %eax,0x4(%esp)
0826085d +0x058d:  mov    0x8(%ebp),%eax
08260860 +0x0590:  mov    %eax,(%esp)
08260863 +0x0593:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08260868 +0x0598:  movl   $0x16,0x4(%esp)
08260870 +0x05a0:  mov    0x8(%ebp),%eax
08260873 +0x05a3:  mov    %eax,(%esp)
08260876 +0x05a6:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0826087b +0x05ab:  xor    $0x1,%eax
0826087e +0x05ae:  test   %al,%al
08260880 +0x05b0:  jne    0826084c <+0x57c>
08260882 +0x05b2:  mov    0x8(%ebp),%eax
08260885 +0x05b5:  mov    0x8(%eax),%eax
08260888 +0x05b8:  mov    %eax,%edx
0826088a +0x05ba:  mov    0x8(%ebp),%eax
0826088d +0x05bd:  mov    0xc(%eax),%eax
08260890 +0x05c0:  lea    (%edx,%eax,1),%eax
08260893 +0x05c3:  mov    %eax,-0xc(%ebp)
08260896 +0x05c6:  movl   $0x16,0x4(%esp)
0826089e +0x05ce:  mov    0x8(%ebp),%eax
082608a1 +0x05d1:  mov    %eax,(%esp)
082608a4 +0x05d4:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
082608a9 +0x05d9:  mov    -0xc(%ebp),%eax
082608ac +0x05dc:  leave
082608ad +0x05dd:  ret
082608ae +0x05de:  push   %ebp
082608af +0x05df:  mov    %esp,%ebp
082608b1 +0x05e1:  mov    0x8(%ebp),%eax
082608b4 +0x05e4:  add    $0x5,%eax
082608b7 +0x05e7:  pop    %ebp
082608b8 +0x05e8:  ret
082608b9 +0x05e9:  nop
082608ba +0x05ea:  push   %ebp
082608bb +0x05eb:  mov    %esp,%ebp
082608bd +0x05ed:  sub    $0x18,%esp
082608c0 +0x05f0:  mov    0x8(%ebp),%eax
082608c3 +0x05f3:  movl   $&_ZTV39Dispatcher_HeroMissionEventState_Reward+0x8,(%eax)
082608c9 +0x05f9:  mov    0x8(%ebp),%eax
082608cc +0x05fc:  mov    %eax,(%esp)
082608cf +0x05ff:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
082608d4 +0x0604:  mov    $0x0,%eax
082608d9 +0x0609:  test   %al,%al
082608db +0x060b:  je     082608e8 <+0x618>
082608dd +0x060d:  mov    0x8(%ebp),%eax
082608e0 +0x0610:  mov    %eax,(%esp)
082608e3 +0x0613:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082608e8 +0x0618:  leave
082608e9 +0x0619:  ret
082608ea +0x061a:  push   %ebp
082608eb +0x061b:  mov    %esp,%ebp
082608ed +0x061d:  sub    $0x18,%esp
082608f0 +0x0620:  mov    0x8(%ebp),%eax
082608f3 +0x0623:  mov    %eax,(%esp)
082608f6 +0x0626:  call   082608ba <+0x5ea>
082608fb +0x062b:  mov    0x8(%ebp),%eax
082608fe +0x062e:  mov    %eax,(%esp)
08260901 +0x0631:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260906 +0x0636:  leave
08260907 +0x0637:  ret
08260908 +0x0638:  push   %ebp
08260909 +0x0639:  mov    %esp,%ebp
0826090b +0x063b:  sub    $0x18,%esp
0826090e +0x063e:  mov    0x8(%ebp),%eax
08260911 +0x0641:  movl   $&_ZTV47Dispatcher_P2PHolePunchingSuccessRateStatistics+0x8,(%eax)
08260917 +0x0647:  mov    0x8(%ebp),%eax
0826091a +0x064a:  mov    %eax,(%esp)
0826091d +0x064d:  call   0826234a <+0x207a>
08260922 +0x0652:  mov    $0x0,%eax
08260927 +0x0657:  test   %al,%al
08260929 +0x0659:  je     08260936 <+0x666>
0826092b +0x065b:  mov    0x8(%ebp),%eax
0826092e +0x065e:  mov    %eax,(%esp)
08260931 +0x0661:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260936 +0x0666:  leave
08260937 +0x0667:  ret
08260938 +0x0668:  push   %ebp
08260939 +0x0669:  mov    %esp,%ebp
0826093b +0x066b:  sub    $0x18,%esp
0826093e +0x066e:  mov    0x8(%ebp),%eax
08260941 +0x0671:  mov    %eax,(%esp)
08260944 +0x0674:  call   08260908 <+0x638>
08260949 +0x0679:  mov    0x8(%ebp),%eax
0826094c +0x067c:  mov    %eax,(%esp)
0826094f +0x067f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260954 +0x0684:  leave
08260955 +0x0685:  ret
08260956 +0x0686:  push   %ebp
08260957 +0x0687:  mov    %esp,%ebp
08260959 +0x0689:  sub    $0x18,%esp
0826095c +0x068c:  mov    0x8(%ebp),%eax
0826095f +0x068f:  movl   $&_ZTV35Dispatcher_LevelupSupportReqestItem+0x8,(%eax)
08260965 +0x0695:  mov    0x8(%ebp),%eax
08260968 +0x0698:  mov    %eax,(%esp)
0826096b +0x069b:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
08260970 +0x06a0:  mov    $0x0,%eax
08260975 +0x06a5:  test   %al,%al
08260977 +0x06a7:  je     08260984 <+0x6b4>
08260979 +0x06a9:  mov    0x8(%ebp),%eax
0826097c +0x06ac:  mov    %eax,(%esp)
0826097f +0x06af:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260984 +0x06b4:  leave
08260985 +0x06b5:  ret
08260986 +0x06b6:  push   %ebp
08260987 +0x06b7:  mov    %esp,%ebp
08260989 +0x06b9:  sub    $0x18,%esp
0826098c +0x06bc:  mov    0x8(%ebp),%eax
0826098f +0x06bf:  mov    %eax,(%esp)
08260992 +0x06c2:  call   08260956 <+0x686>
08260997 +0x06c7:  mov    0x8(%ebp),%eax
0826099a +0x06ca:  mov    %eax,(%esp)
0826099d +0x06cd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082609a2 +0x06d2:  leave
082609a3 +0x06d3:  ret
082609a4 +0x06d4:  push   %ebp
082609a5 +0x06d5:  mov    %esp,%ebp
082609a7 +0x06d7:  sub    $0x18,%esp
082609aa +0x06da:  mov    0x8(%ebp),%eax
082609ad +0x06dd:  movl   $&_ZTV35Dispatcher_UpdateContractOfCubeInfo+0x8,(%eax)
082609b3 +0x06e3:  mov    0x8(%ebp),%eax
082609b6 +0x06e6:  mov    %eax,(%esp)
082609b9 +0x06e9:  call   08262398 <+0x20c8>
082609be +0x06ee:  mov    $0x0,%eax
082609c3 +0x06f3:  test   %al,%al
082609c5 +0x06f5:  je     082609d2 <+0x702>
082609c7 +0x06f7:  mov    0x8(%ebp),%eax
082609ca +0x06fa:  mov    %eax,(%esp)
082609cd +0x06fd:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082609d2 +0x0702:  leave
082609d3 +0x0703:  ret
082609d4 +0x0704:  push   %ebp
082609d5 +0x0705:  mov    %esp,%ebp
082609d7 +0x0707:  sub    $0x18,%esp
082609da +0x070a:  mov    0x8(%ebp),%eax
082609dd +0x070d:  mov    %eax,(%esp)
082609e0 +0x0710:  call   082609a4 <+0x6d4>
082609e5 +0x0715:  mov    0x8(%ebp),%eax
082609e8 +0x0718:  mov    %eax,(%esp)
082609eb +0x071b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082609f0 +0x0720:  leave
082609f1 +0x0721:  ret
082609f2 +0x0722:  push   %ebp
082609f3 +0x0723:  mov    %esp,%ebp
082609f5 +0x0725:  sub    $0x18,%esp
082609f8 +0x0728:  mov    0x8(%ebp),%eax
082609fb +0x072b:  movl   $&_ZTV44Dispatcher_ComboSkillExtensionQuickSlotReset+0x8,(%eax)
08260a01 +0x0731:  mov    0x8(%ebp),%eax
08260a04 +0x0734:  mov    %eax,(%esp)
08260a07 +0x0737:  call   082623e6 <+0x2116>
08260a0c +0x073c:  mov    $0x0,%eax
08260a11 +0x0741:  test   %al,%al
08260a13 +0x0743:  je     08260a20 <+0x750>
08260a15 +0x0745:  mov    0x8(%ebp),%eax
08260a18 +0x0748:  mov    %eax,(%esp)
08260a1b +0x074b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260a20 +0x0750:  leave
08260a21 +0x0751:  ret
08260a22 +0x0752:  push   %ebp
08260a23 +0x0753:  mov    %esp,%ebp
08260a25 +0x0755:  sub    $0x18,%esp
08260a28 +0x0758:  mov    0x8(%ebp),%eax
08260a2b +0x075b:  mov    %eax,(%esp)
08260a2e +0x075e:  call   082609f2 <+0x722>
08260a33 +0x0763:  mov    0x8(%ebp),%eax
08260a36 +0x0766:  mov    %eax,(%esp)
08260a39 +0x0769:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260a3e +0x076e:  leave
08260a3f +0x076f:  ret
08260a40 +0x0770:  push   %ebp
08260a41 +0x0771:  mov    %esp,%ebp
08260a43 +0x0773:  sub    $0x18,%esp
08260a46 +0x0776:  mov    0x8(%ebp),%eax
08260a49 +0x0779:  movl   $&_ZTV21Dispatcher_ComboSkill+0x8,(%eax)
08260a4f +0x077f:  mov    0x8(%ebp),%eax
08260a52 +0x0782:  mov    %eax,(%esp)
08260a55 +0x0785:  call   08262434 <+0x2164>
08260a5a +0x078a:  mov    $0x0,%eax
08260a5f +0x078f:  test   %al,%al
08260a61 +0x0791:  je     08260a6e <+0x79e>
08260a63 +0x0793:  mov    0x8(%ebp),%eax
08260a66 +0x0796:  mov    %eax,(%esp)
08260a69 +0x0799:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260a6e +0x079e:  leave
08260a6f +0x079f:  ret
08260a70 +0x07a0:  push   %ebp
08260a71 +0x07a1:  mov    %esp,%ebp
08260a73 +0x07a3:  sub    $0x18,%esp
08260a76 +0x07a6:  mov    0x8(%ebp),%eax
08260a79 +0x07a9:  mov    %eax,(%esp)
08260a7c +0x07ac:  call   08260a40 <+0x770>
08260a81 +0x07b1:  mov    0x8(%ebp),%eax
08260a84 +0x07b4:  mov    %eax,(%esp)
08260a87 +0x07b7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260a8c +0x07bc:  leave
08260a8d +0x07bd:  ret
08260a8e +0x07be:  push   %ebp
08260a8f +0x07bf:  mov    %esp,%ebp
08260a91 +0x07c1:  sub    $0x18,%esp
08260a94 +0x07c4:  mov    0x8(%ebp),%eax
08260a97 +0x07c7:  movl   $&_ZTV26Dispatcher_SaveQuestNotify+0x8,(%eax)
08260a9d +0x07cd:  mov    0x8(%ebp),%eax
08260aa0 +0x07d0:  mov    %eax,(%esp)
08260aa3 +0x07d3:  call   08262482 <+0x21b2>
08260aa8 +0x07d8:  mov    $0x0,%eax
08260aad +0x07dd:  test   %al,%al
08260aaf +0x07df:  je     08260abc <+0x7ec>
08260ab1 +0x07e1:  mov    0x8(%ebp),%eax
08260ab4 +0x07e4:  mov    %eax,(%esp)
08260ab7 +0x07e7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260abc +0x07ec:  leave
08260abd +0x07ed:  ret
08260abe +0x07ee:  push   %ebp
08260abf +0x07ef:  mov    %esp,%ebp
08260ac1 +0x07f1:  sub    $0x18,%esp
08260ac4 +0x07f4:  mov    0x8(%ebp),%eax
08260ac7 +0x07f7:  mov    %eax,(%esp)
08260aca +0x07fa:  call   08260a8e <+0x7be>
08260acf +0x07ff:  mov    0x8(%ebp),%eax
08260ad2 +0x0802:  mov    %eax,(%esp)
08260ad5 +0x0805:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260ada +0x080a:  leave
08260adb +0x080b:  ret
08260adc +0x080c:  push   %ebp
08260add +0x080d:  mov    %esp,%ebp
08260adf +0x080f:  sub    $0x18,%esp
08260ae2 +0x0812:  mov    0x8(%ebp),%eax
08260ae5 +0x0815:  movl   $&_ZTV20Dispatcher_BingoQuiz+0x8,(%eax)
08260aeb +0x081b:  mov    0x8(%ebp),%eax
08260aee +0x081e:  mov    %eax,(%esp)
08260af1 +0x0821:  call   082624d0 <+0x2200>
08260af6 +0x0826:  mov    $0x0,%eax
08260afb +0x082b:  test   %al,%al
08260afd +0x082d:  je     08260b0a <+0x83a>
08260aff +0x082f:  mov    0x8(%ebp),%eax
08260b02 +0x0832:  mov    %eax,(%esp)
08260b05 +0x0835:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260b0a +0x083a:  leave
08260b0b +0x083b:  ret
08260b0c +0x083c:  push   %ebp
08260b0d +0x083d:  mov    %esp,%ebp
08260b0f +0x083f:  sub    $0x18,%esp
08260b12 +0x0842:  mov    0x8(%ebp),%eax
08260b15 +0x0845:  mov    %eax,(%esp)
08260b18 +0x0848:  call   08260adc <+0x80c>
08260b1d +0x084d:  mov    0x8(%ebp),%eax
08260b20 +0x0850:  mov    %eax,(%esp)
08260b23 +0x0853:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260b28 +0x0858:  leave
08260b29 +0x0859:  ret
08260b2a +0x085a:  push   %ebp
08260b2b +0x085b:  mov    %esp,%ebp
08260b2d +0x085d:  sub    $0x18,%esp
08260b30 +0x0860:  mov    0x8(%ebp),%eax
08260b33 +0x0863:  movl   $&_ZTV22Dispatcher_BingoReward+0x8,(%eax)
08260b39 +0x0869:  mov    0x8(%ebp),%eax
08260b3c +0x086c:  mov    %eax,(%esp)
08260b3f +0x086f:  call   0826251e <+0x224e>
08260b44 +0x0874:  mov    $0x0,%eax
08260b49 +0x0879:  test   %al,%al
08260b4b +0x087b:  je     08260b58 <+0x888>
08260b4d +0x087d:  mov    0x8(%ebp),%eax
08260b50 +0x0880:  mov    %eax,(%esp)
08260b53 +0x0883:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260b58 +0x0888:  leave
08260b59 +0x0889:  ret
08260b5a +0x088a:  push   %ebp
08260b5b +0x088b:  mov    %esp,%ebp
08260b5d +0x088d:  sub    $0x18,%esp
08260b60 +0x0890:  mov    0x8(%ebp),%eax
08260b63 +0x0893:  mov    %eax,(%esp)
08260b66 +0x0896:  call   08260b2a <+0x85a>
08260b6b +0x089b:  mov    0x8(%ebp),%eax
08260b6e +0x089e:  mov    %eax,(%esp)
08260b71 +0x08a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260b76 +0x08a6:  leave
08260b77 +0x08a7:  ret
08260b78 +0x08a8:  push   %ebp
08260b79 +0x08a9:  mov    %esp,%ebp
08260b7b +0x08ab:  sub    $0x18,%esp
08260b7e +0x08ae:  mov    0x8(%ebp),%eax
08260b81 +0x08b1:  movl   $&_ZTV29Dispatcher_StackableActionUse+0x8,(%eax)
08260b87 +0x08b7:  mov    0x8(%ebp),%eax
08260b8a +0x08ba:  mov    %eax,(%esp)
08260b8d +0x08bd:  call   0826256c <+0x229c>
08260b92 +0x08c2:  mov    $0x0,%eax
08260b97 +0x08c7:  test   %al,%al
08260b99 +0x08c9:  je     08260ba6 <+0x8d6>
08260b9b +0x08cb:  mov    0x8(%ebp),%eax
08260b9e +0x08ce:  mov    %eax,(%esp)
08260ba1 +0x08d1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260ba6 +0x08d6:  leave
08260ba7 +0x08d7:  ret
08260ba8 +0x08d8:  push   %ebp
08260ba9 +0x08d9:  mov    %esp,%ebp
08260bab +0x08db:  sub    $0x18,%esp
08260bae +0x08de:  mov    0x8(%ebp),%eax
08260bb1 +0x08e1:  mov    %eax,(%esp)
08260bb4 +0x08e4:  call   08260b78 <+0x8a8>
08260bb9 +0x08e9:  mov    0x8(%ebp),%eax
08260bbc +0x08ec:  mov    %eax,(%esp)
08260bbf +0x08ef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260bc4 +0x08f4:  leave
08260bc5 +0x08f5:  ret
08260bc6 +0x08f6:  push   %ebp
08260bc7 +0x08f7:  mov    %esp,%ebp
08260bc9 +0x08f9:  sub    $0x18,%esp
08260bcc +0x08fc:  mov    0x8(%ebp),%eax
08260bcf +0x08ff:  movl   $&_ZTV35Dispatcher_UseRightOfChangeGrowType+0x8,(%eax)
08260bd5 +0x0905:  mov    0x8(%ebp),%eax
08260bd8 +0x0908:  mov    %eax,(%esp)
08260bdb +0x090b:  call   082625ba <+0x22ea>
08260be0 +0x0910:  mov    $0x0,%eax
08260be5 +0x0915:  test   %al,%al
08260be7 +0x0917:  je     08260bf4 <+0x924>
08260be9 +0x0919:  mov    0x8(%ebp),%eax
08260bec +0x091c:  mov    %eax,(%esp)
08260bef +0x091f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260bf4 +0x0924:  leave
08260bf5 +0x0925:  ret
08260bf6 +0x0926:  push   %ebp
08260bf7 +0x0927:  mov    %esp,%ebp
08260bf9 +0x0929:  sub    $0x18,%esp
08260bfc +0x092c:  mov    0x8(%ebp),%eax
08260bff +0x092f:  mov    %eax,(%esp)
08260c02 +0x0932:  call   08260bc6 <+0x8f6>
08260c07 +0x0937:  mov    0x8(%ebp),%eax
08260c0a +0x093a:  mov    %eax,(%esp)
08260c0d +0x093d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260c12 +0x0942:  leave
08260c13 +0x0943:  ret
08260c14 +0x0944:  push   %ebp
08260c15 +0x0945:  mov    %esp,%ebp
08260c17 +0x0947:  sub    $0x18,%esp
08260c1a +0x094a:  mov    0x8(%ebp),%eax
08260c1d +0x094d:  movl   $&_ZTV18stSecurityLogParam+0x8,(%eax)
08260c23 +0x0953:  mov    0x8(%ebp),%eax
08260c26 +0x0956:  mov    %eax,(%esp)
08260c29 +0x0959:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08260c2e +0x095e:  mov    $0x0,%eax
08260c33 +0x0963:  test   %al,%al
08260c35 +0x0965:  je     08260c42 <+0x972>
08260c37 +0x0967:  mov    0x8(%ebp),%eax
08260c3a +0x096a:  mov    %eax,(%esp)
08260c3d +0x096d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260c42 +0x0972:  leave
08260c43 +0x0973:  ret
08260c44 +0x0974:  push   %ebp
08260c45 +0x0975:  mov    %esp,%ebp
08260c47 +0x0977:  sub    $0x18,%esp
08260c4a +0x097a:  mov    0x8(%ebp),%eax
08260c4d +0x097d:  mov    %eax,(%esp)
08260c50 +0x0980:  call   08260c14 <+0x944>
08260c55 +0x0985:  mov    0x8(%ebp),%eax
08260c58 +0x0988:  mov    %eax,(%esp)
08260c5b +0x098b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260c60 +0x0990:  leave
08260c61 +0x0991:  ret
08260c62 +0x0992:  push   %ebp
08260c63 +0x0993:  mov    %esp,%ebp
08260c65 +0x0995:  sub    $0x18,%esp
08260c68 +0x0998:  mov    0x8(%ebp),%eax
08260c6b +0x099b:  movl   $&_ZTV26stUpdateContractOfCubeInfo+0x8,(%eax)
08260c71 +0x09a1:  mov    0x8(%ebp),%eax
08260c74 +0x09a4:  mov    %eax,(%esp)
08260c77 +0x09a7:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08260c7c +0x09ac:  mov    $0x0,%eax
08260c81 +0x09b1:  test   %al,%al
08260c83 +0x09b3:  je     08260c90 <+0x9c0>
08260c85 +0x09b5:  mov    0x8(%ebp),%eax
08260c88 +0x09b8:  mov    %eax,(%esp)
08260c8b +0x09bb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260c90 +0x09c0:  leave
08260c91 +0x09c1:  ret
08260c92 +0x09c2:  push   %ebp
08260c93 +0x09c3:  mov    %esp,%ebp
08260c95 +0x09c5:  sub    $0x18,%esp
08260c98 +0x09c8:  mov    0x8(%ebp),%eax
08260c9b +0x09cb:  mov    %eax,(%esp)
08260c9e +0x09ce:  call   08260c62 <+0x992>
08260ca3 +0x09d3:  mov    0x8(%ebp),%eax
08260ca6 +0x09d6:  mov    %eax,(%esp)
08260ca9 +0x09d9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260cae +0x09de:  leave
08260caf +0x09df:  ret
08260cb0 +0x09e0:  push   %ebp
08260cb1 +0x09e1:  mov    %esp,%ebp
08260cb3 +0x09e3:  sub    $0x18,%esp
08260cb6 +0x09e6:  mov    0x8(%ebp),%eax
08260cb9 +0x09e9:  movl   $&_ZTV35stComboSkillExtensionQuickSlotReset+0x8,(%eax)
08260cbf +0x09ef:  mov    0x8(%ebp),%eax
08260cc2 +0x09f2:  mov    %eax,(%esp)
08260cc5 +0x09f5:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08260cca +0x09fa:  mov    $0x0,%eax
08260ccf +0x09ff:  test   %al,%al
08260cd1 +0x0a01:  je     08260cde <+0xa0e>
08260cd3 +0x0a03:  mov    0x8(%ebp),%eax
08260cd6 +0x0a06:  mov    %eax,(%esp)
08260cd9 +0x0a09:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260cde +0x0a0e:  leave
08260cdf +0x0a0f:  ret
08260ce0 +0x0a10:  push   %ebp
08260ce1 +0x0a11:  mov    %esp,%ebp
08260ce3 +0x0a13:  sub    $0x18,%esp
08260ce6 +0x0a16:  mov    0x8(%ebp),%eax
08260ce9 +0x0a19:  mov    %eax,(%esp)
08260cec +0x0a1c:  call   08260cb0 <+0x9e0>
08260cf1 +0x0a21:  mov    0x8(%ebp),%eax
08260cf4 +0x0a24:  mov    %eax,(%esp)
08260cf7 +0x0a27:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260cfc +0x0a2c:  leave
08260cfd +0x0a2d:  ret
08260cfe +0x0a2e:  push   %ebp
08260cff +0x0a2f:  mov    %esp,%ebp
08260d01 +0x0a31:  sub    $0x18,%esp
08260d04 +0x0a34:  mov    0x8(%ebp),%eax
08260d07 +0x0a37:  movl   $&_ZTV12stComboSkill+0x8,(%eax)
08260d0d +0x0a3d:  mov    0x8(%ebp),%eax
08260d10 +0x0a40:  mov    %eax,(%esp)
08260d13 +0x0a43:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08260d18 +0x0a48:  mov    $0x0,%eax
08260d1d +0x0a4d:  test   %al,%al
08260d1f +0x0a4f:  je     08260d2c <+0xa5c>
08260d21 +0x0a51:  mov    0x8(%ebp),%eax
08260d24 +0x0a54:  mov    %eax,(%esp)
08260d27 +0x0a57:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260d2c +0x0a5c:  leave
08260d2d +0x0a5d:  ret
08260d2e +0x0a5e:  push   %ebp
08260d2f +0x0a5f:  mov    %esp,%ebp
08260d31 +0x0a61:  sub    $0x18,%esp
08260d34 +0x0a64:  mov    0x8(%ebp),%eax
08260d37 +0x0a67:  mov    %eax,(%esp)
08260d3a +0x0a6a:  call   08260cfe <+0xa2e>
08260d3f +0x0a6f:  mov    0x8(%ebp),%eax
08260d42 +0x0a72:  mov    %eax,(%esp)
08260d45 +0x0a75:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08260d4a +0x0a7a:  leave
08260d4b +0x0a7b:  ret
08260d4c +0x0a7c:  push   %ebp
08260d4d +0x0a7d:  mov    %esp,%ebp
08260d4f +0x0a7f:  push   %esi
08260d50 +0x0a80:  push   %ebx
08260d51 +0x0a81:  sub    $0x30,%esp
08260d54 +0x0a84:  mov    0x8(%ebp),%eax
08260d57 +0x0a87:  mov    (%eax),%eax
08260d59 +0x0a89:  add    $0x10,%eax
08260d5c +0x0a8c:  mov    (%eax),%edx
08260d5e +0x0a8e:  mov    0x10(%ebp),%eax
08260d61 +0x0a91:  mov    %eax,0x8(%esp)
08260d65 +0x0a95:  mov    0xc(%ebp),%eax
08260d68 +0x0a98:  mov    %eax,0x4(%esp)
08260d6c +0x0a9c:  mov    0x8(%ebp),%eax
08260d6f +0x0a9f:  mov    %eax,(%esp)
08260d72 +0x0aa2:  call   *%edx
08260d74 +0x0aa4:  test   %eax,%eax
08260d76 +0x0aa6:  setg   %al
08260d79 +0x0aa9:  test   %al,%al
08260d7b +0x0aab:  je     08260d87 <+0xab7>
08260d7d +0x0aad:  mov    $0x0,%ebx
08260d82 +0x0ab2:  jmp    08260e9e <+0xbce>
08260d87 +0x0ab7:  lea    -0x22(%ebp),%eax
08260d8a +0x0aba:  mov    %eax,(%esp)
08260d8d +0x0abd:  call   08260470 <+0x1a0>
08260d92 +0x0ac2:  movl   $0x0,-0xc(%ebp)
08260d99 +0x0ac9:  mov    0x8(%ebp),%eax
08260d9c +0x0acc:  mov    (%eax),%eax
08260d9e +0x0ace:  add    $0x14,%eax
08260da1 +0x0ad1:  mov    (%eax),%edx
08260da3 +0x0ad3:  lea    -0x22(%ebp),%eax
08260da6 +0x0ad6:  mov    %eax,0x8(%esp)
08260daa +0x0ada:  mov    0x10(%ebp),%eax
08260dad +0x0add:  mov    %eax,0x4(%esp)
08260db1 +0x0ae1:  mov    0x8(%ebp),%eax
08260db4 +0x0ae4:  mov    %eax,(%esp)
08260db7 +0x0ae7:  call   *%edx
08260db9 +0x0ae9:  mov    %eax,-0xc(%ebp)
08260dbc +0x0aec:  cmpl   $0x0,-0xc(%ebp)
08260dc0 +0x0af0:  setne  %al
08260dc3 +0x0af3:  test   %al,%al
08260dc5 +0x0af5:  je     08260dcf <+0xaff>
08260dc7 +0x0af7:  mov    -0xc(%ebp),%ebx
08260dca +0x0afa:  jmp    08260e9e <+0xbce>
08260dcf +0x0aff:  lea    -0x26(%ebp),%eax
08260dd2 +0x0b02:  mov    %eax,(%esp)
08260dd5 +0x0b05:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08260dda +0x0b0a:  mov    0x8(%ebp),%eax
08260ddd +0x0b0d:  mov    (%eax),%eax
08260ddf +0x0b0f:  add    $0x18,%eax
08260de2 +0x0b12:  mov    (%eax),%edx
08260de4 +0x0b14:  lea    -0x26(%ebp),%eax
08260de7 +0x0b17:  mov    %eax,0xc(%esp)
08260deb +0x0b1b:  lea    -0x22(%ebp),%eax
08260dee +0x0b1e:  mov    %eax,0x8(%esp)
08260df2 +0x0b22:  mov    0xc(%ebp),%eax
08260df5 +0x0b25:  mov    %eax,0x4(%esp)
08260df9 +0x0b29:  mov    0x8(%ebp),%eax
08260dfc +0x0b2c:  mov    %eax,(%esp)
08260dff +0x0b2f:  call   *%edx
08260e01 +0x0b31:  mov    %eax,-0xc(%ebp)
08260e04 +0x0b34:  cmpl   $0x0,-0xc(%ebp)
08260e08 +0x0b38:  setg   %al
08260e0b +0x0b3b:  test   %al,%al
08260e0d +0x0b3d:  je     08260e14 <+0xb44>
08260e0f +0x0b3f:  mov    -0xc(%ebp),%ebx
08260e12 +0x0b42:  jmp    08260e93 <+0xbc3>
08260e14 +0x0b44:  cmpl   $0x0,-0xc(%ebp)
08260e18 +0x0b48:  jns    08260e21 <+0xb51>
08260e1a +0x0b4a:  mov    $0x0,%ebx
08260e1f +0x0b4f:  jmp    08260e93 <+0xbc3>
08260e21 +0x0b51:  mov    0x8(%ebp),%eax
08260e24 +0x0b54:  mov    (%eax),%eax
08260e26 +0x0b56:  add    $0x1c,%eax
08260e29 +0x0b59:  mov    (%eax),%edx
08260e2b +0x0b5b:  lea    -0x26(%ebp),%eax
08260e2e +0x0b5e:  mov    %eax,0x8(%esp)
08260e32 +0x0b62:  mov    0xc(%ebp),%eax
08260e35 +0x0b65:  mov    %eax,0x4(%esp)
08260e39 +0x0b69:  mov    0x8(%ebp),%eax
08260e3c +0x0b6c:  mov    %eax,(%esp)
08260e3f +0x0b6f:  call   *%edx
08260e41 +0x0b71:  mov    0x8(%ebp),%eax
08260e44 +0x0b74:  mov    (%eax),%eax
08260e46 +0x0b76:  add    $0xc,%eax
08260e49 +0x0b79:  mov    (%eax),%edx
08260e4b +0x0b7b:  mov    0x10(%ebp),%eax
08260e4e +0x0b7e:  mov    %eax,0x8(%esp)
08260e52 +0x0b82:  mov    0xc(%ebp),%eax
08260e55 +0x0b85:  mov    %eax,0x4(%esp)
08260e59 +0x0b89:  mov    0x8(%ebp),%eax
08260e5c +0x0b8c:  mov    %eax,(%esp)
08260e5f +0x0b8f:  call   *%edx
08260e61 +0x0b91:  test   %eax,%eax
08260e63 +0x0b93:  setg   %al
08260e66 +0x0b96:  test   %al,%al
08260e68 +0x0b98:  je     08260e71 <+0xba1>
08260e6a +0x0b9a:  mov    $0x85,%ebx
08260e6f +0x0b9f:  jmp    08260e93 <+0xbc3>
08260e71 +0x0ba1:  mov    $0x0,%ebx
08260e76 +0x0ba6:  jmp    08260e93 <+0xbc3>
08260e78 +0x0ba8:  mov    %edx,%ebx
08260e7a +0x0baa:  mov    %eax,%esi
08260e7c +0x0bac:  lea    -0x26(%ebp),%eax
08260e7f +0x0baf:  mov    %eax,(%esp)
08260e82 +0x0bb2:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08260e87 +0x0bb7:  mov    %esi,%eax
08260e89 +0x0bb9:  mov    %ebx,%edx
08260e8b +0x0bbb:  mov    %eax,(%esp)
08260e8e +0x0bbe:  call   08ae3750 <_Unwind_Resume>
08260e93 +0x0bc3:  lea    -0x26(%ebp),%eax
08260e96 +0x0bc6:  mov    %eax,(%esp)
08260e99 +0x0bc9:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08260e9e +0x0bce:  mov    %ebx,%eax
08260ea0 +0x0bd0:  add    $0x30,%esp
08260ea3 +0x0bd3:  pop    %ebx
08260ea4 +0x0bd4:  pop    %esi
08260ea5 +0x0bd5:  pop    %ebp
08260ea6 +0x0bd6:  ret
08260ea7 +0x0bd7:  nop
08260ea8 +0x0bd8:  push   %ebp
08260ea9 +0x0bd9:  mov    %esp,%ebp
08260eab +0x0bdb:  sub    $0x38,%esp
08260eae +0x0bde:  mov    0xc(%ebp),%eax
08260eb1 +0x0be1:  mov    %eax,(%esp)
08260eb4 +0x0be4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08260eb9 +0x0be9:  shr    $0x1f,%eax
08260ebc +0x0bec:  test   %al,%al
08260ebe +0x0bee:  je     08260f32 <+0xc62>
08260ec0 +0x0bf0:  movl   $0x1,0x4(%esp)
08260ec8 +0x0bf8:  mov    0x10(%ebp),%eax
08260ecb +0x0bfb:  mov    %eax,(%esp)
08260ece +0x0bfe:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08260ed3 +0x0c03:  lea    -0xa(%ebp),%eax
08260ed6 +0x0c06:  mov    %eax,0x4(%esp)
08260eda +0x0c0a:  mov    0x10(%ebp),%eax
08260edd +0x0c0d:  mov    %eax,(%esp)
08260ee0 +0x0c10:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08260ee5 +0x0c15:  mov    0x10(%ebp),%eax
08260ee8 +0x0c18:  mov    %eax,(%esp)
08260eeb +0x0c1b:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08260ef0 +0x0c20:  movzwl -0xa(%ebp),%edx
08260ef4 +0x0c24:  movswl %dx,%edx
08260ef7 +0x0c27:  mov    %eax,0x18(%esp)
08260efb +0x0c2b:  mov    %edx,0x14(%esp)
08260eff +0x0c2f:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08260f07 +0x0c37:  movl   $0x94,0xc(%esp)
08260f0f +0x0c3f:  movl   $&_ZZN17IPacketDispatcherI34MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE9ParamBaseL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08260f17 +0x0c47:  movl   $"PacketDispatcher.h",0x4(%esp)
08260f1f +0x0c4f:  movl   $0x1,(%esp)
08260f26 +0x0c56:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08260f2b +0x0c5b:  mov    $0x95,%eax
08260f30 +0x0c60:  jmp    08260f37 <+0xc67>
08260f32 +0x0c62:  mov    $0x0,%eax
08260f37 +0x0c67:  leave
08260f38 +0x0c68:  ret
08260f39 +0x0c69:  nop
08260f3a +0x0c6a:  push   %ebp
08260f3b +0x0c6b:  mov    %esp,%ebp
08260f3d +0x0c6d:  push   %esi
08260f3e +0x0c6e:  push   %ebx
08260f3f +0x0c6f:  sub    $0x40,%esp
08260f42 +0x0c72:  mov    0x8(%ebp),%eax
08260f45 +0x0c75:  mov    (%eax),%eax
08260f47 +0x0c77:  add    $0x10,%eax
08260f4a +0x0c7a:  mov    (%eax),%edx
08260f4c +0x0c7c:  mov    0x10(%ebp),%eax
08260f4f +0x0c7f:  mov    %eax,0x8(%esp)
08260f53 +0x0c83:  mov    0xc(%ebp),%eax
08260f56 +0x0c86:  mov    %eax,0x4(%esp)
08260f5a +0x0c8a:  mov    0x8(%ebp),%eax
08260f5d +0x0c8d:  mov    %eax,(%esp)
08260f60 +0x0c90:  call   *%edx
08260f62 +0x0c92:  test   %eax,%eax
08260f64 +0x0c94:  setg   %al
08260f67 +0x0c97:  test   %al,%al
08260f69 +0x0c99:  je     08260f75 <+0xca5>
08260f6b +0x0c9b:  mov    $0x0,%ebx
08260f70 +0x0ca0:  jmp    0826108c <+0xdbc>
08260f75 +0x0ca5:  lea    -0x35(%ebp),%eax
08260f78 +0x0ca8:  mov    %eax,(%esp)
08260f7b +0x0cab:  call   082602ec <+0x1c>
08260f80 +0x0cb0:  movl   $0x0,-0xc(%ebp)
08260f87 +0x0cb7:  mov    0x8(%ebp),%eax
08260f8a +0x0cba:  mov    (%eax),%eax
08260f8c +0x0cbc:  add    $0x14,%eax
08260f8f +0x0cbf:  mov    (%eax),%edx
08260f91 +0x0cc1:  lea    -0x35(%ebp),%eax
08260f94 +0x0cc4:  mov    %eax,0x8(%esp)
08260f98 +0x0cc8:  mov    0x10(%ebp),%eax
08260f9b +0x0ccb:  mov    %eax,0x4(%esp)
08260f9f +0x0ccf:  mov    0x8(%ebp),%eax
08260fa2 +0x0cd2:  mov    %eax,(%esp)
08260fa5 +0x0cd5:  call   *%edx
08260fa7 +0x0cd7:  mov    %eax,-0xc(%ebp)
08260faa +0x0cda:  cmpl   $0x0,-0xc(%ebp)
08260fae +0x0cde:  setne  %al
08260fb1 +0x0ce1:  test   %al,%al
08260fb3 +0x0ce3:  je     08260fbd <+0xced>
08260fb5 +0x0ce5:  mov    -0xc(%ebp),%ebx
08260fb8 +0x0ce8:  jmp    0826108c <+0xdbc>
08260fbd +0x0ced:  lea    -0x10(%ebp),%eax
08260fc0 +0x0cf0:  mov    %eax,(%esp)
08260fc3 +0x0cf3:  call   0826057a <+0x2aa>
08260fc8 +0x0cf8:  mov    0x8(%ebp),%eax
08260fcb +0x0cfb:  mov    (%eax),%eax
08260fcd +0x0cfd:  add    $0x18,%eax
08260fd0 +0x0d00:  mov    (%eax),%edx
08260fd2 +0x0d02:  lea    -0x10(%ebp),%eax
08260fd5 +0x0d05:  mov    %eax,0xc(%esp)
08260fd9 +0x0d09:  lea    -0x35(%ebp),%eax
08260fdc +0x0d0c:  mov    %eax,0x8(%esp)
08260fe0 +0x0d10:  mov    0xc(%ebp),%eax
08260fe3 +0x0d13:  mov    %eax,0x4(%esp)
08260fe7 +0x0d17:  mov    0x8(%ebp),%eax
08260fea +0x0d1a:  mov    %eax,(%esp)
08260fed +0x0d1d:  call   *%edx
08260fef +0x0d1f:  mov    %eax,-0xc(%ebp)
08260ff2 +0x0d22:  cmpl   $0x0,-0xc(%ebp)
08260ff6 +0x0d26:  setg   %al
08260ff9 +0x0d29:  test   %al,%al
08260ffb +0x0d2b:  je     08261002 <+0xd32>
08260ffd +0x0d2d:  mov    -0xc(%ebp),%ebx
08261000 +0x0d30:  jmp    08261081 <+0xdb1>
08261002 +0x0d32:  cmpl   $0x0,-0xc(%ebp)
08261006 +0x0d36:  jns    0826100f <+0xd3f>
08261008 +0x0d38:  mov    $0x0,%ebx
0826100d +0x0d3d:  jmp    08261081 <+0xdb1>
0826100f +0x0d3f:  mov    0x8(%ebp),%eax
08261012 +0x0d42:  mov    (%eax),%eax
08261014 +0x0d44:  add    $0x1c,%eax
08261017 +0x0d47:  mov    (%eax),%edx
08261019 +0x0d49:  lea    -0x10(%ebp),%eax
0826101c +0x0d4c:  mov    %eax,0x8(%esp)
08261020 +0x0d50:  mov    0xc(%ebp),%eax
08261023 +0x0d53:  mov    %eax,0x4(%esp)
08261027 +0x0d57:  mov    0x8(%ebp),%eax
0826102a +0x0d5a:  mov    %eax,(%esp)
0826102d +0x0d5d:  call   *%edx
0826102f +0x0d5f:  mov    0x8(%ebp),%eax
08261032 +0x0d62:  mov    (%eax),%eax
08261034 +0x0d64:  add    $0xc,%eax
08261037 +0x0d67:  mov    (%eax),%edx
08261039 +0x0d69:  mov    0x10(%ebp),%eax
0826103c +0x0d6c:  mov    %eax,0x8(%esp)
08261040 +0x0d70:  mov    0xc(%ebp),%eax
08261043 +0x0d73:  mov    %eax,0x4(%esp)
08261047 +0x0d77:  mov    0x8(%ebp),%eax
0826104a +0x0d7a:  mov    %eax,(%esp)
0826104d +0x0d7d:  call   *%edx
0826104f +0x0d7f:  test   %eax,%eax
08261051 +0x0d81:  setg   %al
08261054 +0x0d84:  test   %al,%al
08261056 +0x0d86:  je     0826105f <+0xd8f>
08261058 +0x0d88:  mov    $0x85,%ebx
0826105d +0x0d8d:  jmp    08261081 <+0xdb1>
0826105f +0x0d8f:  mov    $0x0,%ebx
08261064 +0x0d94:  jmp    08261081 <+0xdb1>
08261066 +0x0d96:  mov    %edx,%ebx
08261068 +0x0d98:  mov    %eax,%esi
0826106a +0x0d9a:  lea    -0x10(%ebp),%eax
0826106d +0x0d9d:  mov    %eax,(%esp)
08261070 +0x0da0:  call   08260c14 <+0x944>
08261075 +0x0da5:  mov    %esi,%eax
08261077 +0x0da7:  mov    %ebx,%edx
08261079 +0x0da9:  mov    %eax,(%esp)
0826107c +0x0dac:  call   08ae3750 <_Unwind_Resume>
08261081 +0x0db1:  lea    -0x10(%ebp),%eax
08261084 +0x0db4:  mov    %eax,(%esp)
08261087 +0x0db7:  call   08260c14 <+0x944>
0826108c +0x0dbc:  mov    %ebx,%eax
0826108e +0x0dbe:  add    $0x40,%esp
08261091 +0x0dc1:  pop    %ebx
08261092 +0x0dc2:  pop    %esi
08261093 +0x0dc3:  pop    %ebp
08261094 +0x0dc4:  ret
08261095 +0x0dc5:  nop
08261096 +0x0dc6:  push   %ebp
08261097 +0x0dc7:  mov    %esp,%ebp
08261099 +0x0dc9:  mov    $0x0,%eax
0826109e +0x0dce:  pop    %ebp
0826109f +0x0dcf:  ret
082610a0 +0x0dd0:  push   %ebp
082610a1 +0x0dd1:  mov    %esp,%ebp
082610a3 +0x0dd3:  sub    $0x38,%esp
082610a6 +0x0dd6:  mov    0xc(%ebp),%eax
082610a9 +0x0dd9:  mov    %eax,(%esp)
082610ac +0x0ddc:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082610b1 +0x0de1:  shr    $0x1f,%eax
082610b4 +0x0de4:  test   %al,%al
082610b6 +0x0de6:  je     0826112a <+0xe5a>
082610b8 +0x0de8:  movl   $0x1,0x4(%esp)
082610c0 +0x0df0:  mov    0x10(%ebp),%eax
082610c3 +0x0df3:  mov    %eax,(%esp)
082610c6 +0x0df6:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
082610cb +0x0dfb:  lea    -0xa(%ebp),%eax
082610ce +0x0dfe:  mov    %eax,0x4(%esp)
082610d2 +0x0e02:  mov    0x10(%ebp),%eax
082610d5 +0x0e05:  mov    %eax,(%esp)
082610d8 +0x0e08:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082610dd +0x0e0d:  mov    0x10(%ebp),%eax
082610e0 +0x0e10:  mov    %eax,(%esp)
082610e3 +0x0e13:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
082610e8 +0x0e18:  movzwl -0xa(%ebp),%edx
082610ec +0x0e1c:  movswl %dx,%edx
082610ef +0x0e1f:  mov    %eax,0x18(%esp)
082610f3 +0x0e23:  mov    %edx,0x14(%esp)
082610f7 +0x0e27:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
082610ff +0x0e2f:  movl   $0x94,0xc(%esp)
08261107 +0x0e37:  movl   $&_ZZN17IPacketDispatcherI23MSG_SECURITY_LOG_PACKET18stSecurityLogParamL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0826110f +0x0e3f:  movl   $"PacketDispatcher.h",0x4(%esp)
08261117 +0x0e47:  movl   $0x1,(%esp)
0826111e +0x0e4e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08261123 +0x0e53:  mov    $0x95,%eax
08261128 +0x0e58:  jmp    0826112f <+0xe5f>
0826112a +0x0e5a:  mov    $0x0,%eax
0826112f +0x0e5f:  leave
08261130 +0x0e60:  ret
08261131 +0x0e61:  nop
08261132 +0x0e62:  push   %ebp
08261133 +0x0e63:  mov    %esp,%ebp
08261135 +0x0e65:  push   %esi
08261136 +0x0e66:  push   %ebx
08261137 +0x0e67:  sub    $0x30,%esp
0826113a +0x0e6a:  mov    0x8(%ebp),%eax
0826113d +0x0e6d:  mov    (%eax),%eax
0826113f +0x0e6f:  add    $0x10,%eax
08261142 +0x0e72:  mov    (%eax),%edx
08261144 +0x0e74:  mov    0x10(%ebp),%eax
08261147 +0x0e77:  mov    %eax,0x8(%esp)
0826114b +0x0e7b:  mov    0xc(%ebp),%eax
0826114e +0x0e7e:  mov    %eax,0x4(%esp)
08261152 +0x0e82:  mov    0x8(%ebp),%eax
08261155 +0x0e85:  mov    %eax,(%esp)
08261158 +0x0e88:  call   *%edx
0826115a +0x0e8a:  test   %eax,%eax
0826115c +0x0e8c:  setg   %al
0826115f +0x0e8f:  test   %al,%al
08261161 +0x0e91:  je     0826116d <+0xe9d>
08261163 +0x0e93:  mov    $0x0,%ebx
08261168 +0x0e98:  jmp    08261284 <+0xfb4>
0826116d +0x0e9d:  lea    -0x1b(%ebp),%eax
08261170 +0x0ea0:  mov    %eax,(%esp)
08261173 +0x0ea3:  call   0826044e <+0x17e>
08261178 +0x0ea8:  movl   $0x0,-0xc(%ebp)
0826117f +0x0eaf:  mov    0x8(%ebp),%eax
08261182 +0x0eb2:  mov    (%eax),%eax
08261184 +0x0eb4:  add    $0x14,%eax
08261187 +0x0eb7:  mov    (%eax),%edx
08261189 +0x0eb9:  lea    -0x1b(%ebp),%eax
0826118c +0x0ebc:  mov    %eax,0x8(%esp)
08261190 +0x0ec0:  mov    0x10(%ebp),%eax
08261193 +0x0ec3:  mov    %eax,0x4(%esp)
08261197 +0x0ec7:  mov    0x8(%ebp),%eax
0826119a +0x0eca:  mov    %eax,(%esp)
0826119d +0x0ecd:  call   *%edx
0826119f +0x0ecf:  mov    %eax,-0xc(%ebp)
082611a2 +0x0ed2:  cmpl   $0x0,-0xc(%ebp)
082611a6 +0x0ed6:  setne  %al
082611a9 +0x0ed9:  test   %al,%al
082611ab +0x0edb:  je     082611b5 <+0xee5>
082611ad +0x0edd:  mov    -0xc(%ebp),%ebx
082611b0 +0x0ee0:  jmp    08261284 <+0xfb4>
082611b5 +0x0ee5:  lea    -0x28(%ebp),%eax
082611b8 +0x0ee8:  mov    %eax,(%esp)
082611bb +0x0eeb:  call   08260546 <+0x276>
082611c0 +0x0ef0:  mov    0x8(%ebp),%eax
082611c3 +0x0ef3:  mov    (%eax),%eax
082611c5 +0x0ef5:  add    $0x18,%eax
082611c8 +0x0ef8:  mov    (%eax),%edx
082611ca +0x0efa:  lea    -0x28(%ebp),%eax
082611cd +0x0efd:  mov    %eax,0xc(%esp)
082611d1 +0x0f01:  lea    -0x1b(%ebp),%eax
082611d4 +0x0f04:  mov    %eax,0x8(%esp)
082611d8 +0x0f08:  mov    0xc(%ebp),%eax
082611db +0x0f0b:  mov    %eax,0x4(%esp)
082611df +0x0f0f:  mov    0x8(%ebp),%eax
082611e2 +0x0f12:  mov    %eax,(%esp)
082611e5 +0x0f15:  call   *%edx
082611e7 +0x0f17:  mov    %eax,-0xc(%ebp)
082611ea +0x0f1a:  cmpl   $0x0,-0xc(%ebp)
082611ee +0x0f1e:  setg   %al
082611f1 +0x0f21:  test   %al,%al
082611f3 +0x0f23:  je     082611fa <+0xf2a>
082611f5 +0x0f25:  mov    -0xc(%ebp),%ebx
082611f8 +0x0f28:  jmp    08261279 <+0xfa9>
082611fa +0x0f2a:  cmpl   $0x0,-0xc(%ebp)
082611fe +0x0f2e:  jns    08261207 <+0xf37>
08261200 +0x0f30:  mov    $0x0,%ebx
08261205 +0x0f35:  jmp    08261279 <+0xfa9>
08261207 +0x0f37:  mov    0x8(%ebp),%eax
0826120a +0x0f3a:  mov    (%eax),%eax
0826120c +0x0f3c:  add    $0x1c,%eax
0826120f +0x0f3f:  mov    (%eax),%edx
08261211 +0x0f41:  lea    -0x28(%ebp),%eax
08261214 +0x0f44:  mov    %eax,0x8(%esp)
08261218 +0x0f48:  mov    0xc(%ebp),%eax
0826121b +0x0f4b:  mov    %eax,0x4(%esp)
0826121f +0x0f4f:  mov    0x8(%ebp),%eax
08261222 +0x0f52:  mov    %eax,(%esp)
08261225 +0x0f55:  call   *%edx
08261227 +0x0f57:  mov    0x8(%ebp),%eax
0826122a +0x0f5a:  mov    (%eax),%eax
0826122c +0x0f5c:  add    $0xc,%eax
0826122f +0x0f5f:  mov    (%eax),%edx
08261231 +0x0f61:  mov    0x10(%ebp),%eax
08261234 +0x0f64:  mov    %eax,0x8(%esp)
08261238 +0x0f68:  mov    0xc(%ebp),%eax
0826123b +0x0f6b:  mov    %eax,0x4(%esp)
0826123f +0x0f6f:  mov    0x8(%ebp),%eax
08261242 +0x0f72:  mov    %eax,(%esp)
08261245 +0x0f75:  call   *%edx
08261247 +0x0f77:  test   %eax,%eax
08261249 +0x0f79:  setg   %al
0826124c +0x0f7c:  test   %al,%al
0826124e +0x0f7e:  je     08261257 <+0xf87>
08261250 +0x0f80:  mov    $0x85,%ebx
08261255 +0x0f85:  jmp    08261279 <+0xfa9>
08261257 +0x0f87:  mov    $0x0,%ebx
0826125c +0x0f8c:  jmp    08261279 <+0xfa9>
0826125e +0x0f8e:  mov    %edx,%ebx
08261260 +0x0f90:  mov    %eax,%esi
08261262 +0x0f92:  lea    -0x28(%ebp),%eax
08261265 +0x0f95:  mov    %eax,(%esp)
08261268 +0x0f98:  call   08260c62 <+0x992>
0826126d +0x0f9d:  mov    %esi,%eax
0826126f +0x0f9f:  mov    %ebx,%edx
08261271 +0x0fa1:  mov    %eax,(%esp)
08261274 +0x0fa4:  call   08ae3750 <_Unwind_Resume>
08261279 +0x0fa9:  lea    -0x28(%ebp),%eax
0826127c +0x0fac:  mov    %eax,(%esp)
0826127f +0x0faf:  call   08260c62 <+0x992>
08261284 +0x0fb4:  mov    %ebx,%eax
08261286 +0x0fb6:  add    $0x30,%esp
08261289 +0x0fb9:  pop    %ebx
0826128a +0x0fba:  pop    %esi
0826128b +0x0fbb:  pop    %ebp
0826128c +0x0fbc:  ret
0826128d +0x0fbd:  nop
0826128e +0x0fbe:  push   %ebp
0826128f +0x0fbf:  mov    %esp,%ebp
08261291 +0x0fc1:  mov    $0x0,%eax
08261296 +0x0fc6:  pop    %ebp
08261297 +0x0fc7:  ret
08261298 +0x0fc8:  push   %ebp
08261299 +0x0fc9:  mov    %esp,%ebp
0826129b +0x0fcb:  sub    $0x38,%esp
0826129e +0x0fce:  mov    0xc(%ebp),%eax
082612a1 +0x0fd1:  mov    %eax,(%esp)
082612a4 +0x0fd4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082612a9 +0x0fd9:  shr    $0x1f,%eax
082612ac +0x0fdc:  test   %al,%al
082612ae +0x0fde:  je     08261322 <+0x1052>
082612b0 +0x0fe0:  movl   $0x1,0x4(%esp)
082612b8 +0x0fe8:  mov    0x10(%ebp),%eax
082612bb +0x0feb:  mov    %eax,(%esp)
082612be +0x0fee:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
082612c3 +0x0ff3:  lea    -0xa(%ebp),%eax
082612c6 +0x0ff6:  mov    %eax,0x4(%esp)
082612ca +0x0ffa:  mov    0x10(%ebp),%eax
082612cd +0x0ffd:  mov    %eax,(%esp)
082612d0 +0x1000:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082612d5 +0x1005:  mov    0x10(%ebp),%eax
082612d8 +0x1008:  mov    %eax,(%esp)
082612db +0x100b:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
082612e0 +0x1010:  movzwl -0xa(%ebp),%edx
082612e4 +0x1014:  movswl %dx,%edx
082612e7 +0x1017:  mov    %eax,0x18(%esp)
082612eb +0x101b:  mov    %edx,0x14(%esp)
082612ef +0x101f:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
082612f7 +0x1027:  movl   $0x94,0xc(%esp)
082612ff +0x102f:  movl   $&_ZZN17IPacketDispatcherI32MSG_UPDATE_CONTRACT_OF_CUBE_INFO26stUpdateContractOfCubeInfoL8ch_state0EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08261307 +0x1037:  movl   $"PacketDispatcher.h",0x4(%esp)
0826130f +0x103f:  movl   $0x1,(%esp)
08261316 +0x1046:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826131b +0x104b:  mov    $0x95,%eax
08261320 +0x1050:  jmp    08261327 <+0x1057>
08261322 +0x1052:  mov    $0x0,%eax
08261327 +0x1057:  leave
08261328 +0x1058:  ret
08261329 +0x1059:  nop
0826132a +0x105a:  push   %ebp
0826132b +0x105b:  mov    %esp,%ebp
0826132d +0x105d:  push   %esi
0826132e +0x105e:  push   %ebx
0826132f +0x105f:  sub    $0x30,%esp
08261332 +0x1062:  mov    0x8(%ebp),%eax
08261335 +0x1065:  mov    (%eax),%eax
08261337 +0x1067:  add    $0x10,%eax
0826133a +0x106a:  mov    (%eax),%edx
0826133c +0x106c:  mov    0x10(%ebp),%eax
0826133f +0x106f:  mov    %eax,0x8(%esp)
08261343 +0x1073:  mov    0xc(%ebp),%eax
08261346 +0x1076:  mov    %eax,0x4(%esp)
0826134a +0x107a:  mov    0x8(%ebp),%eax
0826134d +0x107d:  mov    %eax,(%esp)
08261350 +0x1080:  call   *%edx
08261352 +0x1082:  test   %eax,%eax
08261354 +0x1084:  setg   %al
08261357 +0x1087:  test   %al,%al
08261359 +0x1089:  je     08261365 <+0x1095>
0826135b +0x108b:  mov    $0x0,%ebx
08261360 +0x1090:  jmp    0826147c <+0x11ac>
08261365 +0x1095:  lea    -0x1a(%ebp),%eax
08261368 +0x1098:  mov    %eax,(%esp)
0826136b +0x109b:  call   08260434 <+0x164>
08261370 +0x10a0:  movl   $0x0,-0xc(%ebp)
08261377 +0x10a7:  mov    0x8(%ebp),%eax
0826137a +0x10aa:  mov    (%eax),%eax
0826137c +0x10ac:  add    $0x14,%eax
0826137f +0x10af:  mov    (%eax),%edx
08261381 +0x10b1:  lea    -0x1a(%ebp),%eax
08261384 +0x10b4:  mov    %eax,0x8(%esp)
08261388 +0x10b8:  mov    0x10(%ebp),%eax
0826138b +0x10bb:  mov    %eax,0x4(%esp)
0826138f +0x10bf:  mov    0x8(%ebp),%eax
08261392 +0x10c2:  mov    %eax,(%esp)
08261395 +0x10c5:  call   *%edx
08261397 +0x10c7:  mov    %eax,-0xc(%ebp)
0826139a +0x10ca:  cmpl   $0x0,-0xc(%ebp)
0826139e +0x10ce:  setne  %al
082613a1 +0x10d1:  test   %al,%al
082613a3 +0x10d3:  je     082613ad <+0x10dd>
082613a5 +0x10d5:  mov    -0xc(%ebp),%ebx
082613a8 +0x10d8:  jmp    0826147c <+0x11ac>
082613ad +0x10dd:  lea    -0x24(%ebp),%eax
082613b0 +0x10e0:  mov    %eax,(%esp)
082613b3 +0x10e3:  call   08260520 <+0x250>
082613b8 +0x10e8:  mov    0x8(%ebp),%eax
082613bb +0x10eb:  mov    (%eax),%eax
082613bd +0x10ed:  add    $0x18,%eax
082613c0 +0x10f0:  mov    (%eax),%edx
082613c2 +0x10f2:  lea    -0x24(%ebp),%eax
082613c5 +0x10f5:  mov    %eax,0xc(%esp)
082613c9 +0x10f9:  lea    -0x1a(%ebp),%eax
082613cc +0x10fc:  mov    %eax,0x8(%esp)
082613d0 +0x1100:  mov    0xc(%ebp),%eax
082613d3 +0x1103:  mov    %eax,0x4(%esp)
082613d7 +0x1107:  mov    0x8(%ebp),%eax
082613da +0x110a:  mov    %eax,(%esp)
082613dd +0x110d:  call   *%edx
082613df +0x110f:  mov    %eax,-0xc(%ebp)
082613e2 +0x1112:  cmpl   $0x0,-0xc(%ebp)
082613e6 +0x1116:  setg   %al
082613e9 +0x1119:  test   %al,%al
082613eb +0x111b:  je     082613f2 <+0x1122>
082613ed +0x111d:  mov    -0xc(%ebp),%ebx
082613f0 +0x1120:  jmp    08261471 <+0x11a1>
082613f2 +0x1122:  cmpl   $0x0,-0xc(%ebp)
082613f6 +0x1126:  jns    082613ff <+0x112f>
082613f8 +0x1128:  mov    $0x0,%ebx
082613fd +0x112d:  jmp    08261471 <+0x11a1>
082613ff +0x112f:  mov    0x8(%ebp),%eax
08261402 +0x1132:  mov    (%eax),%eax
08261404 +0x1134:  add    $0x1c,%eax
08261407 +0x1137:  mov    (%eax),%edx
08261409 +0x1139:  lea    -0x24(%ebp),%eax
0826140c +0x113c:  mov    %eax,0x8(%esp)
08261410 +0x1140:  mov    0xc(%ebp),%eax
08261413 +0x1143:  mov    %eax,0x4(%esp)
08261417 +0x1147:  mov    0x8(%ebp),%eax
0826141a +0x114a:  mov    %eax,(%esp)
0826141d +0x114d:  call   *%edx
0826141f +0x114f:  mov    0x8(%ebp),%eax
08261422 +0x1152:  mov    (%eax),%eax
08261424 +0x1154:  add    $0xc,%eax
08261427 +0x1157:  mov    (%eax),%edx
08261429 +0x1159:  mov    0x10(%ebp),%eax
0826142c +0x115c:  mov    %eax,0x8(%esp)
08261430 +0x1160:  mov    0xc(%ebp),%eax
08261433 +0x1163:  mov    %eax,0x4(%esp)
08261437 +0x1167:  mov    0x8(%ebp),%eax
0826143a +0x116a:  mov    %eax,(%esp)
0826143d +0x116d:  call   *%edx
0826143f +0x116f:  test   %eax,%eax
08261441 +0x1171:  setg   %al
08261444 +0x1174:  test   %al,%al
08261446 +0x1176:  je     0826144f <+0x117f>
08261448 +0x1178:  mov    $0x85,%ebx
0826144d +0x117d:  jmp    08261471 <+0x11a1>
0826144f +0x117f:  mov    $0x0,%ebx
08261454 +0x1184:  jmp    08261471 <+0x11a1>
08261456 +0x1186:  mov    %edx,%ebx
08261458 +0x1188:  mov    %eax,%esi
0826145a +0x118a:  lea    -0x24(%ebp),%eax
0826145d +0x118d:  mov    %eax,(%esp)
08261460 +0x1190:  call   08260cb0 <+0x9e0>
08261465 +0x1195:  mov    %esi,%eax
08261467 +0x1197:  mov    %ebx,%edx
08261469 +0x1199:  mov    %eax,(%esp)
0826146c +0x119c:  call   08ae3750 <_Unwind_Resume>
08261471 +0x11a1:  lea    -0x24(%ebp),%eax
08261474 +0x11a4:  mov    %eax,(%esp)
08261477 +0x11a7:  call   08260cb0 <+0x9e0>
0826147c +0x11ac:  mov    %ebx,%eax
0826147e +0x11ae:  add    $0x30,%esp
08261481 +0x11b1:  pop    %ebx
08261482 +0x11b2:  pop    %esi
08261483 +0x11b3:  pop    %ebp
08261484 +0x11b4:  ret
08261485 +0x11b5:  nop
08261486 +0x11b6:  push   %ebp
08261487 +0x11b7:  mov    %esp,%ebp
08261489 +0x11b9:  mov    $0x0,%eax
0826148e +0x11be:  pop    %ebp
0826148f +0x11bf:  ret
08261490 +0x11c0:  push   %ebp
08261491 +0x11c1:  mov    %esp,%ebp
08261493 +0x11c3:  sub    $0x38,%esp
08261496 +0x11c6:  mov    0xc(%ebp),%eax
08261499 +0x11c9:  mov    %eax,(%esp)
0826149c +0x11cc:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082614a1 +0x11d1:  cmp    $0x2,%eax
082614a4 +0x11d4:  setle  %al
082614a7 +0x11d7:  test   %al,%al
082614a9 +0x11d9:  je     0826151d <+0x124d>
082614ab +0x11db:  movl   $0x1,0x4(%esp)
082614b3 +0x11e3:  mov    0x10(%ebp),%eax
082614b6 +0x11e6:  mov    %eax,(%esp)
082614b9 +0x11e9:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
082614be +0x11ee:  lea    -0xa(%ebp),%eax
082614c1 +0x11f1:  mov    %eax,0x4(%esp)
082614c5 +0x11f5:  mov    0x10(%ebp),%eax
082614c8 +0x11f8:  mov    %eax,(%esp)
082614cb +0x11fb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082614d0 +0x1200:  mov    0x10(%ebp),%eax
082614d3 +0x1203:  mov    %eax,(%esp)
082614d6 +0x1206:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
082614db +0x120b:  movzwl -0xa(%ebp),%edx
082614df +0x120f:  movswl %dx,%edx
082614e2 +0x1212:  mov    %eax,0x18(%esp)
082614e6 +0x1216:  mov    %edx,0x14(%esp)
082614ea +0x121a:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
082614f2 +0x1222:  movl   $0x94,0xc(%esp)
082614fa +0x122a:  movl   $&_ZZN17IPacketDispatcherI42MSG_COMBO_SKILL_EXTENSION_QUICK_SLOT_RESET35stComboSkillExtensionQuickSlotResetL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08261502 +0x1232:  movl   $"PacketDispatcher.h",0x4(%esp)
0826150a +0x123a:  movl   $0x1,(%esp)
08261511 +0x1241:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08261516 +0x1246:  mov    $0x95,%eax
0826151b +0x124b:  jmp    08261522 <+0x1252>
0826151d +0x124d:  mov    $0x0,%eax
08261522 +0x1252:  leave
08261523 +0x1253:  ret
08261524 +0x1254:  push   %ebp
08261525 +0x1255:  mov    %esp,%ebp
08261527 +0x1257:  sub    $0x18,%esp
0826152a +0x125a:  mov    0x8(%ebp),%eax
0826152d +0x125d:  add    $0xe,%eax
08261530 +0x1260:  mov    %eax,(%esp)
08261533 +0x1263:  call   080ea3e4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1d>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1d
08261538 +0x1268:  leave
08261539 +0x1269:  ret
0826153a +0x126a:  push   %ebp
0826153b +0x126b:  mov    %esp,%ebp
0826153d +0x126d:  push   %esi
0826153e +0x126e:  push   %ebx
0826153f +0x126f:  sub    $0x40,%esp
08261542 +0x1272:  mov    0x8(%ebp),%eax
08261545 +0x1275:  mov    (%eax),%eax
08261547 +0x1277:  add    $0x10,%eax
0826154a +0x127a:  mov    (%eax),%edx
0826154c +0x127c:  mov    0x10(%ebp),%eax
0826154f +0x127f:  mov    %eax,0x8(%esp)
08261553 +0x1283:  mov    0xc(%ebp),%eax
08261556 +0x1286:  mov    %eax,0x4(%esp)
0826155a +0x128a:  mov    0x8(%ebp),%eax
0826155d +0x128d:  mov    %eax,(%esp)
08261560 +0x1290:  call   *%edx
08261562 +0x1292:  test   %eax,%eax
08261564 +0x1294:  setg   %al
08261567 +0x1297:  test   %al,%al
08261569 +0x1299:  je     08261575 <+0x12a5>
0826156b +0x129b:  mov    $0x0,%ebx
08261570 +0x12a0:  jmp    082616ae <+0x13de>
08261575 +0x12a5:  lea    -0x37(%ebp),%eax
08261578 +0x12a8:  mov    %eax,(%esp)
0826157b +0x12ab:  call   082603d6 <+0x106>
08261580 +0x12b0:  movl   $0x0,-0xc(%ebp)
08261587 +0x12b7:  mov    0x8(%ebp),%eax
0826158a +0x12ba:  mov    (%eax),%eax
0826158c +0x12bc:  add    $0x14,%eax
0826158f +0x12bf:  mov    (%eax),%edx
08261591 +0x12c1:  lea    -0x37(%ebp),%eax
08261594 +0x12c4:  mov    %eax,0x8(%esp)
08261598 +0x12c8:  mov    0x10(%ebp),%eax
0826159b +0x12cb:  mov    %eax,0x4(%esp)
0826159f +0x12cf:  mov    0x8(%ebp),%eax
082615a2 +0x12d2:  mov    %eax,(%esp)
082615a5 +0x12d5:  call   *%edx
082615a7 +0x12d7:  mov    %eax,-0xc(%ebp)
082615aa +0x12da:  cmpl   $0x0,-0xc(%ebp)
082615ae +0x12de:  setne  %al
082615b1 +0x12e1:  test   %al,%al
082615b3 +0x12e3:  je     082615bd <+0x12ed>
082615b5 +0x12e5:  mov    -0xc(%ebp),%ebx
082615b8 +0x12e8:  jmp    082616a3 <+0x13d3>
082615bd +0x12ed:  lea    -0x14(%ebp),%eax
082615c0 +0x12f0:  mov    %eax,(%esp)
082615c3 +0x12f3:  call   082604fa <+0x22a>
082615c8 +0x12f8:  mov    0x8(%ebp),%eax
082615cb +0x12fb:  mov    (%eax),%eax
082615cd +0x12fd:  add    $0x18,%eax
082615d0 +0x1300:  mov    (%eax),%edx
082615d2 +0x1302:  lea    -0x14(%ebp),%eax
082615d5 +0x1305:  mov    %eax,0xc(%esp)
082615d9 +0x1309:  lea    -0x37(%ebp),%eax
082615dc +0x130c:  mov    %eax,0x8(%esp)
082615e0 +0x1310:  mov    0xc(%ebp),%eax
082615e3 +0x1313:  mov    %eax,0x4(%esp)
082615e7 +0x1317:  mov    0x8(%ebp),%eax
082615ea +0x131a:  mov    %eax,(%esp)
082615ed +0x131d:  call   *%edx
082615ef +0x131f:  mov    %eax,-0xc(%ebp)
082615f2 +0x1322:  cmpl   $0x0,-0xc(%ebp)
082615f6 +0x1326:  setg   %al
082615f9 +0x1329:  test   %al,%al
082615fb +0x132b:  je     08261602 <+0x1332>
082615fd +0x132d:  mov    -0xc(%ebp),%ebx
08261600 +0x1330:  jmp    0826167b <+0x13ab>
08261602 +0x1332:  cmpl   $0x0,-0xc(%ebp)
08261606 +0x1336:  jns    0826160f <+0x133f>
08261608 +0x1338:  mov    $0x0,%ebx
0826160d +0x133d:  jmp    0826167b <+0x13ab>
0826160f +0x133f:  mov    0x8(%ebp),%eax
08261612 +0x1342:  mov    (%eax),%eax
08261614 +0x1344:  add    $0x1c,%eax
08261617 +0x1347:  mov    (%eax),%edx
08261619 +0x1349:  lea    -0x14(%ebp),%eax
0826161c +0x134c:  mov    %eax,0x8(%esp)
08261620 +0x1350:  mov    0xc(%ebp),%eax
08261623 +0x1353:  mov    %eax,0x4(%esp)
08261627 +0x1357:  mov    0x8(%ebp),%eax
0826162a +0x135a:  mov    %eax,(%esp)
0826162d +0x135d:  call   *%edx
0826162f +0x135f:  mov    0x8(%ebp),%eax
08261632 +0x1362:  mov    (%eax),%eax
08261634 +0x1364:  add    $0xc,%eax
08261637 +0x1367:  mov    (%eax),%edx
08261639 +0x1369:  mov    0x10(%ebp),%eax
0826163c +0x136c:  mov    %eax,0x8(%esp)
08261640 +0x1370:  mov    0xc(%ebp),%eax
08261643 +0x1373:  mov    %eax,0x4(%esp)
08261647 +0x1377:  mov    0x8(%ebp),%eax
0826164a +0x137a:  mov    %eax,(%esp)
0826164d +0x137d:  call   *%edx
0826164f +0x137f:  test   %eax,%eax
08261651 +0x1381:  setg   %al
08261654 +0x1384:  test   %al,%al
08261656 +0x1386:  je     0826165f <+0x138f>
08261658 +0x1388:  mov    $0x85,%ebx
0826165d +0x138d:  jmp    0826167b <+0x13ab>
0826165f +0x138f:  mov    $0x0,%ebx
08261664 +0x1394:  jmp    0826167b <+0x13ab>
08261666 +0x1396:  mov    %edx,%ebx
08261668 +0x1398:  mov    %eax,%esi
0826166a +0x139a:  lea    -0x14(%ebp),%eax
0826166d +0x139d:  mov    %eax,(%esp)
08261670 +0x13a0:  call   08260cfe <+0xa2e>
08261675 +0x13a5:  mov    %esi,%eax
08261677 +0x13a7:  mov    %ebx,%edx
08261679 +0x13a9:  jmp    08261688 <+0x13b8>
0826167b +0x13ab:  lea    -0x14(%ebp),%eax
0826167e +0x13ae:  mov    %eax,(%esp)
08261681 +0x13b1:  call   08260cfe <+0xa2e>
08261686 +0x13b6:  jmp    082616a3 <+0x13d3>
08261688 +0x13b8:  mov    %edx,%ebx
0826168a +0x13ba:  mov    %eax,%esi
0826168c +0x13bc:  lea    -0x37(%ebp),%eax
0826168f +0x13bf:  mov    %eax,(%esp)
08261692 +0x13c2:  call   08261524 <+0x1254>
08261697 +0x13c7:  mov    %esi,%eax
08261699 +0x13c9:  mov    %ebx,%edx
0826169b +0x13cb:  mov    %eax,(%esp)
0826169e +0x13ce:  call   08ae3750 <_Unwind_Resume>
082616a3 +0x13d3:  lea    -0x37(%ebp),%eax
082616a6 +0x13d6:  mov    %eax,(%esp)
082616a9 +0x13d9:  call   08261524 <+0x1254>
082616ae +0x13de:  mov    %ebx,%eax
082616b0 +0x13e0:  add    $0x40,%esp
082616b3 +0x13e3:  pop    %ebx
082616b4 +0x13e4:  pop    %esi
082616b5 +0x13e5:  pop    %ebp
082616b6 +0x13e6:  ret
082616b7 +0x13e7:  nop
082616b8 +0x13e8:  push   %ebp
082616b9 +0x13e9:  mov    %esp,%ebp
082616bb +0x13eb:  mov    $0x0,%eax
082616c0 +0x13f0:  pop    %ebp
082616c1 +0x13f1:  ret
082616c2 +0x13f2:  push   %ebp
082616c3 +0x13f3:  mov    %esp,%ebp
082616c5 +0x13f5:  sub    $0x38,%esp
082616c8 +0x13f8:  mov    0xc(%ebp),%eax
082616cb +0x13fb:  mov    %eax,(%esp)
082616ce +0x13fe:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082616d3 +0x1403:  cmp    $0x2,%eax
082616d6 +0x1406:  setle  %al
082616d9 +0x1409:  test   %al,%al
082616db +0x140b:  je     0826174f <+0x147f>
082616dd +0x140d:  movl   $0x1,0x4(%esp)
082616e5 +0x1415:  mov    0x10(%ebp),%eax
082616e8 +0x1418:  mov    %eax,(%esp)
082616eb +0x141b:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
082616f0 +0x1420:  lea    -0xa(%ebp),%eax
082616f3 +0x1423:  mov    %eax,0x4(%esp)
082616f7 +0x1427:  mov    0x10(%ebp),%eax
082616fa +0x142a:  mov    %eax,(%esp)
082616fd +0x142d:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08261702 +0x1432:  mov    0x10(%ebp),%eax
08261705 +0x1435:  mov    %eax,(%esp)
08261708 +0x1438:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0826170d +0x143d:  movzwl -0xa(%ebp),%edx
08261711 +0x1441:  movswl %dx,%edx
08261714 +0x1444:  mov    %eax,0x18(%esp)
08261718 +0x1448:  mov    %edx,0x14(%esp)
0826171c +0x144c:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08261724 +0x1454:  movl   $0x94,0xc(%esp)
0826172c +0x145c:  movl   $&_ZZN17IPacketDispatcherI15MSG_COMBO_SKILL12stComboSkillL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08261734 +0x1464:  movl   $"PacketDispatcher.h",0x4(%esp)
0826173c +0x146c:  movl   $0x1,(%esp)
08261743 +0x1473:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08261748 +0x1478:  mov    $0x95,%eax
0826174d +0x147d:  jmp    08261754 <+0x1484>
0826174f +0x147f:  mov    $0x0,%eax
08261754 +0x1484:  leave
08261755 +0x1485:  ret
08261756 +0x1486:  push   %ebp
08261757 +0x1487:  mov    %esp,%ebp
08261759 +0x1489:  sub    $0x18,%esp
0826175c +0x148c:  mov    0x8(%ebp),%eax
0826175f +0x148f:  mov    %eax,(%esp)
08261762 +0x1492:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08261767 +0x1497:  mov    0x8(%ebp),%eax
0826176a +0x149a:  movl   $&_ZTV20saveQuestNotifyParam+0x8,(%eax)
08261770 +0x14a0:  leave
08261771 +0x14a1:  ret
08261772 +0x14a2:  push   %ebp
08261773 +0x14a3:  mov    %esp,%ebp
08261775 +0x14a5:  sub    $0x18,%esp
08261778 +0x14a8:  mov    0x8(%ebp),%eax
0826177b +0x14ab:  movl   $&_ZTV20saveQuestNotifyParam+0x8,(%eax)
08261781 +0x14b1:  mov    0x8(%ebp),%eax
08261784 +0x14b4:  mov    %eax,(%esp)
08261787 +0x14b7:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
0826178c +0x14bc:  mov    $0x0,%eax
08261791 +0x14c1:  test   %al,%al
08261793 +0x14c3:  je     082617a0 <+0x14d0>
08261795 +0x14c5:  mov    0x8(%ebp),%eax
08261798 +0x14c8:  mov    %eax,(%esp)
0826179b +0x14cb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082617a0 +0x14d0:  leave
082617a1 +0x14d1:  ret
082617a2 +0x14d2:  push   %ebp
082617a3 +0x14d3:  mov    %esp,%ebp
082617a5 +0x14d5:  sub    $0x18,%esp
082617a8 +0x14d8:  mov    0x8(%ebp),%eax
082617ab +0x14db:  mov    %eax,(%esp)
082617ae +0x14de:  call   08261772 <+0x14a2>
082617b3 +0x14e3:  mov    0x8(%ebp),%eax
082617b6 +0x14e6:  mov    %eax,(%esp)
082617b9 +0x14e9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082617be +0x14ee:  leave
082617bf +0x14ef:  ret
082617c0 +0x14f0:  push   %ebp
082617c1 +0x14f1:  mov    %esp,%ebp
082617c3 +0x14f3:  push   %esi
082617c4 +0x14f4:  push   %ebx
082617c5 +0x14f5:  sub    $0x60,%esp
082617c8 +0x14f8:  mov    0x8(%ebp),%eax
082617cb +0x14fb:  mov    (%eax),%eax
082617cd +0x14fd:  add    $0x10,%eax
082617d0 +0x1500:  mov    (%eax),%edx
082617d2 +0x1502:  mov    0x10(%ebp),%eax
082617d5 +0x1505:  mov    %eax,0x8(%esp)
082617d9 +0x1509:  mov    0xc(%ebp),%eax
082617dc +0x150c:  mov    %eax,0x4(%esp)
082617e0 +0x1510:  mov    0x8(%ebp),%eax
082617e3 +0x1513:  mov    %eax,(%esp)
082617e6 +0x1516:  call   *%edx
082617e8 +0x1518:  test   %eax,%eax
082617ea +0x151a:  setg   %al
082617ed +0x151d:  test   %al,%al
082617ef +0x151f:  je     082617fb <+0x152b>
082617f1 +0x1521:  mov    $0x0,%ebx
082617f6 +0x1526:  jmp    08261912 <+0x1642>
082617fb +0x152b:  lea    -0x49(%ebp),%eax
082617fe +0x152e:  mov    %eax,(%esp)
08261801 +0x1531:  call   082603a4 <+0xd4>
08261806 +0x1536:  movl   $0x0,-0xc(%ebp)
0826180d +0x153d:  mov    0x8(%ebp),%eax
08261810 +0x1540:  mov    (%eax),%eax
08261812 +0x1542:  add    $0x14,%eax
08261815 +0x1545:  mov    (%eax),%edx
08261817 +0x1547:  lea    -0x49(%ebp),%eax
0826181a +0x154a:  mov    %eax,0x8(%esp)
0826181e +0x154e:  mov    0x10(%ebp),%eax
08261821 +0x1551:  mov    %eax,0x4(%esp)
08261825 +0x1555:  mov    0x8(%ebp),%eax
08261828 +0x1558:  mov    %eax,(%esp)
0826182b +0x155b:  call   *%edx
0826182d +0x155d:  mov    %eax,-0xc(%ebp)
08261830 +0x1560:  cmpl   $0x0,-0xc(%ebp)
08261834 +0x1564:  setne  %al
08261837 +0x1567:  test   %al,%al
08261839 +0x1569:  je     08261843 <+0x1573>
0826183b +0x156b:  mov    -0xc(%ebp),%ebx
0826183e +0x156e:  jmp    08261912 <+0x1642>
08261843 +0x1573:  lea    -0x14(%ebp),%eax
08261846 +0x1576:  mov    %eax,(%esp)
08261849 +0x1579:  call   08261756 <+0x1486>
0826184e +0x157e:  mov    0x8(%ebp),%eax
08261851 +0x1581:  mov    (%eax),%eax
08261853 +0x1583:  add    $0x18,%eax
08261856 +0x1586:  mov    (%eax),%edx
08261858 +0x1588:  lea    -0x14(%ebp),%eax
0826185b +0x158b:  mov    %eax,0xc(%esp)
0826185f +0x158f:  lea    -0x49(%ebp),%eax
08261862 +0x1592:  mov    %eax,0x8(%esp)
08261866 +0x1596:  mov    0xc(%ebp),%eax
08261869 +0x1599:  mov    %eax,0x4(%esp)
0826186d +0x159d:  mov    0x8(%ebp),%eax
08261870 +0x15a0:  mov    %eax,(%esp)
08261873 +0x15a3:  call   *%edx
08261875 +0x15a5:  mov    %eax,-0xc(%ebp)
08261878 +0x15a8:  cmpl   $0x0,-0xc(%ebp)
0826187c +0x15ac:  setg   %al
0826187f +0x15af:  test   %al,%al
08261881 +0x15b1:  je     08261888 <+0x15b8>
08261883 +0x15b3:  mov    -0xc(%ebp),%ebx
08261886 +0x15b6:  jmp    08261907 <+0x1637>
08261888 +0x15b8:  cmpl   $0x0,-0xc(%ebp)
0826188c +0x15bc:  jns    08261895 <+0x15c5>
0826188e +0x15be:  mov    $0x0,%ebx
08261893 +0x15c3:  jmp    08261907 <+0x1637>
08261895 +0x15c5:  mov    0x8(%ebp),%eax
08261898 +0x15c8:  mov    (%eax),%eax
0826189a +0x15ca:  add    $0x1c,%eax
0826189d +0x15cd:  mov    (%eax),%edx
0826189f +0x15cf:  lea    -0x14(%ebp),%eax
082618a2 +0x15d2:  mov    %eax,0x8(%esp)
082618a6 +0x15d6:  mov    0xc(%ebp),%eax
082618a9 +0x15d9:  mov    %eax,0x4(%esp)
082618ad +0x15dd:  mov    0x8(%ebp),%eax
082618b0 +0x15e0:  mov    %eax,(%esp)
082618b3 +0x15e3:  call   *%edx
082618b5 +0x15e5:  mov    0x8(%ebp),%eax
082618b8 +0x15e8:  mov    (%eax),%eax
082618ba +0x15ea:  add    $0xc,%eax
082618bd +0x15ed:  mov    (%eax),%edx
082618bf +0x15ef:  mov    0x10(%ebp),%eax
082618c2 +0x15f2:  mov    %eax,0x8(%esp)
082618c6 +0x15f6:  mov    0xc(%ebp),%eax
082618c9 +0x15f9:  mov    %eax,0x4(%esp)
082618cd +0x15fd:  mov    0x8(%ebp),%eax
082618d0 +0x1600:  mov    %eax,(%esp)
082618d3 +0x1603:  call   *%edx
082618d5 +0x1605:  test   %eax,%eax
082618d7 +0x1607:  setg   %al
082618da +0x160a:  test   %al,%al
082618dc +0x160c:  je     082618e5 <+0x1615>
082618de +0x160e:  mov    $0x85,%ebx
082618e3 +0x1613:  jmp    08261907 <+0x1637>
082618e5 +0x1615:  mov    $0x0,%ebx
082618ea +0x161a:  jmp    08261907 <+0x1637>
082618ec +0x161c:  mov    %edx,%ebx
082618ee +0x161e:  mov    %eax,%esi
082618f0 +0x1620:  lea    -0x14(%ebp),%eax
082618f3 +0x1623:  mov    %eax,(%esp)
082618f6 +0x1626:  call   08261772 <+0x14a2>
082618fb +0x162b:  mov    %esi,%eax
082618fd +0x162d:  mov    %ebx,%edx
082618ff +0x162f:  mov    %eax,(%esp)
08261902 +0x1632:  call   08ae3750 <_Unwind_Resume>
08261907 +0x1637:  lea    -0x14(%ebp),%eax
0826190a +0x163a:  mov    %eax,(%esp)
0826190d +0x163d:  call   08261772 <+0x14a2>
08261912 +0x1642:  mov    %ebx,%eax
08261914 +0x1644:  add    $0x60,%esp
08261917 +0x1647:  pop    %ebx
08261918 +0x1648:  pop    %esi
08261919 +0x1649:  pop    %ebp
0826191a +0x164a:  ret
0826191b +0x164b:  nop
0826191c +0x164c:  push   %ebp
0826191d +0x164d:  mov    %esp,%ebp
0826191f +0x164f:  mov    $0x0,%eax
08261924 +0x1654:  pop    %ebp
08261925 +0x1655:  ret
08261926 +0x1656:  push   %ebp
08261927 +0x1657:  mov    %esp,%ebp
08261929 +0x1659:  sub    $0x38,%esp
0826192c +0x165c:  mov    0xc(%ebp),%eax
0826192f +0x165f:  mov    %eax,(%esp)
08261932 +0x1662:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08261937 +0x1667:  cmp    $0x2,%eax
0826193a +0x166a:  setle  %al
0826193d +0x166d:  test   %al,%al
0826193f +0x166f:  je     082619b3 <+0x16e3>
08261941 +0x1671:  movl   $0x1,0x4(%esp)
08261949 +0x1679:  mov    0x10(%ebp),%eax
0826194c +0x167c:  mov    %eax,(%esp)
0826194f +0x167f:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08261954 +0x1684:  lea    -0xa(%ebp),%eax
08261957 +0x1687:  mov    %eax,0x4(%esp)
0826195b +0x168b:  mov    0x10(%ebp),%eax
0826195e +0x168e:  mov    %eax,(%esp)
08261961 +0x1691:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08261966 +0x1696:  mov    0x10(%ebp),%eax
08261969 +0x1699:  mov    %eax,(%esp)
0826196c +0x169c:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08261971 +0x16a1:  movzwl -0xa(%ebp),%edx
08261975 +0x16a5:  movswl %dx,%edx
08261978 +0x16a8:  mov    %eax,0x18(%esp)
0826197c +0x16ac:  mov    %edx,0x14(%esp)
08261980 +0x16b0:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08261988 +0x16b8:  movl   $0x94,0xc(%esp)
08261990 +0x16c0:  movl   $&_ZZN17IPacketDispatcherI21MSG_SAVE_QUEST_NOTIFY20saveQuestNotifyParamL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08261998 +0x16c8:  movl   $"PacketDispatcher.h",0x4(%esp)
082619a0 +0x16d0:  movl   $0x1,(%esp)
082619a7 +0x16d7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082619ac +0x16dc:  mov    $0x95,%eax
082619b1 +0x16e1:  jmp    082619b8 <+0x16e8>
082619b3 +0x16e3:  mov    $0x0,%eax
082619b8 +0x16e8:  leave
082619b9 +0x16e9:  ret
082619ba +0x16ea:  push   %ebp
082619bb +0x16eb:  mov    %esp,%ebp
082619bd +0x16ed:  pop    %ebp
082619be +0x16ee:  ret
082619bf +0x16ef:  nop
082619c0 +0x16f0:  push   %ebp
082619c1 +0x16f1:  mov    %esp,%ebp
082619c3 +0x16f3:  sub    $0x18,%esp
082619c6 +0x16f6:  mov    0x8(%ebp),%eax
082619c9 +0x16f9:  mov    %eax,(%esp)
082619cc +0x16fc:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
082619d1 +0x1701:  mov    0x8(%ebp),%eax
082619d4 +0x1704:  movl   $&_ZTV11stBingoQuiz+0x8,(%eax)
082619da +0x170a:  leave
082619db +0x170b:  ret
082619dc +0x170c:  push   %ebp
082619dd +0x170d:  mov    %esp,%ebp
082619df +0x170f:  sub    $0x18,%esp
082619e2 +0x1712:  mov    0x8(%ebp),%eax
082619e5 +0x1715:  movl   $&_ZTV11stBingoQuiz+0x8,(%eax)
082619eb +0x171b:  mov    0x8(%ebp),%eax
082619ee +0x171e:  mov    %eax,(%esp)
082619f1 +0x1721:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
082619f6 +0x1726:  mov    $0x0,%eax
082619fb +0x172b:  test   %al,%al
082619fd +0x172d:  je     08261a0a <+0x173a>
082619ff +0x172f:  mov    0x8(%ebp),%eax
08261a02 +0x1732:  mov    %eax,(%esp)
08261a05 +0x1735:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08261a0a +0x173a:  leave
08261a0b +0x173b:  ret
08261a0c +0x173c:  push   %ebp
08261a0d +0x173d:  mov    %esp,%ebp
08261a0f +0x173f:  sub    $0x18,%esp
08261a12 +0x1742:  mov    0x8(%ebp),%eax
08261a15 +0x1745:  mov    %eax,(%esp)
08261a18 +0x1748:  call   082619dc <+0x170c>
08261a1d +0x174d:  mov    0x8(%ebp),%eax
08261a20 +0x1750:  mov    %eax,(%esp)
08261a23 +0x1753:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08261a28 +0x1758:  leave
08261a29 +0x1759:  ret
08261a2a +0x175a:  push   %ebp
08261a2b +0x175b:  mov    %esp,%ebp
08261a2d +0x175d:  push   %esi
08261a2e +0x175e:  push   %ebx
08261a2f +0x175f:  sub    $0x40,%esp
08261a32 +0x1762:  mov    0x8(%ebp),%eax
08261a35 +0x1765:  mov    (%eax),%eax
08261a37 +0x1767:  add    $0x10,%eax
08261a3a +0x176a:  mov    (%eax),%edx
08261a3c +0x176c:  mov    0x10(%ebp),%eax
08261a3f +0x176f:  mov    %eax,0x8(%esp)
08261a43 +0x1773:  mov    0xc(%ebp),%eax
08261a46 +0x1776:  mov    %eax,0x4(%esp)
08261a4a +0x177a:  mov    0x8(%ebp),%eax
08261a4d +0x177d:  mov    %eax,(%esp)
08261a50 +0x1780:  call   *%edx
08261a52 +0x1782:  test   %eax,%eax
08261a54 +0x1784:  setg   %al
08261a57 +0x1787:  test   %al,%al
08261a59 +0x1789:  je     08261a65 <+0x1795>
08261a5b +0x178b:  mov    $0x0,%ebx
08261a60 +0x1790:  jmp    08261b7c <+0x18ac>
08261a65 +0x1795:  lea    -0x1d(%ebp),%eax
08261a68 +0x1798:  mov    %eax,(%esp)
08261a6b +0x179b:  call   08260386 <+0xb6>
08261a70 +0x17a0:  movl   $0x0,-0xc(%ebp)
08261a77 +0x17a7:  mov    0x8(%ebp),%eax
08261a7a +0x17aa:  mov    (%eax),%eax
08261a7c +0x17ac:  add    $0x14,%eax
08261a7f +0x17af:  mov    (%eax),%edx
08261a81 +0x17b1:  lea    -0x1d(%ebp),%eax
08261a84 +0x17b4:  mov    %eax,0x8(%esp)
08261a88 +0x17b8:  mov    0x10(%ebp),%eax
08261a8b +0x17bb:  mov    %eax,0x4(%esp)
08261a8f +0x17bf:  mov    0x8(%ebp),%eax
08261a92 +0x17c2:  mov    %eax,(%esp)
08261a95 +0x17c5:  call   *%edx
08261a97 +0x17c7:  mov    %eax,-0xc(%ebp)
08261a9a +0x17ca:  cmpl   $0x0,-0xc(%ebp)
08261a9e +0x17ce:  setne  %al
08261aa1 +0x17d1:  test   %al,%al
08261aa3 +0x17d3:  je     08261aad <+0x17dd>
08261aa5 +0x17d5:  mov    -0xc(%ebp),%ebx
08261aa8 +0x17d8:  jmp    08261b7c <+0x18ac>
08261aad +0x17dd:  lea    -0x2c(%ebp),%eax
08261ab0 +0x17e0:  mov    %eax,(%esp)
08261ab3 +0x17e3:  call   082619c0 <+0x16f0>
08261ab8 +0x17e8:  mov    0x8(%ebp),%eax
08261abb +0x17eb:  mov    (%eax),%eax
08261abd +0x17ed:  add    $0x18,%eax
08261ac0 +0x17f0:  mov    (%eax),%edx
08261ac2 +0x17f2:  lea    -0x2c(%ebp),%eax
08261ac5 +0x17f5:  mov    %eax,0xc(%esp)
08261ac9 +0x17f9:  lea    -0x1d(%ebp),%eax
08261acc +0x17fc:  mov    %eax,0x8(%esp)
08261ad0 +0x1800:  mov    0xc(%ebp),%eax
08261ad3 +0x1803:  mov    %eax,0x4(%esp)
08261ad7 +0x1807:  mov    0x8(%ebp),%eax
08261ada +0x180a:  mov    %eax,(%esp)
08261add +0x180d:  call   *%edx
08261adf +0x180f:  mov    %eax,-0xc(%ebp)
08261ae2 +0x1812:  cmpl   $0x0,-0xc(%ebp)
08261ae6 +0x1816:  setg   %al
08261ae9 +0x1819:  test   %al,%al
08261aeb +0x181b:  je     08261af2 <+0x1822>
08261aed +0x181d:  mov    -0xc(%ebp),%ebx
08261af0 +0x1820:  jmp    08261b71 <+0x18a1>
08261af2 +0x1822:  cmpl   $0x0,-0xc(%ebp)
08261af6 +0x1826:  jns    08261aff <+0x182f>
08261af8 +0x1828:  mov    $0x0,%ebx
08261afd +0x182d:  jmp    08261b71 <+0x18a1>
08261aff +0x182f:  mov    0x8(%ebp),%eax
08261b02 +0x1832:  mov    (%eax),%eax
08261b04 +0x1834:  add    $0x1c,%eax
08261b07 +0x1837:  mov    (%eax),%edx
08261b09 +0x1839:  lea    -0x2c(%ebp),%eax
08261b0c +0x183c:  mov    %eax,0x8(%esp)
08261b10 +0x1840:  mov    0xc(%ebp),%eax
08261b13 +0x1843:  mov    %eax,0x4(%esp)
08261b17 +0x1847:  mov    0x8(%ebp),%eax
08261b1a +0x184a:  mov    %eax,(%esp)
08261b1d +0x184d:  call   *%edx
08261b1f +0x184f:  mov    0x8(%ebp),%eax
08261b22 +0x1852:  mov    (%eax),%eax
08261b24 +0x1854:  add    $0xc,%eax
08261b27 +0x1857:  mov    (%eax),%edx
08261b29 +0x1859:  mov    0x10(%ebp),%eax
08261b2c +0x185c:  mov    %eax,0x8(%esp)
08261b30 +0x1860:  mov    0xc(%ebp),%eax
08261b33 +0x1863:  mov    %eax,0x4(%esp)
08261b37 +0x1867:  mov    0x8(%ebp),%eax
08261b3a +0x186a:  mov    %eax,(%esp)
08261b3d +0x186d:  call   *%edx
08261b3f +0x186f:  test   %eax,%eax
08261b41 +0x1871:  setg   %al
08261b44 +0x1874:  test   %al,%al
08261b46 +0x1876:  je     08261b4f <+0x187f>
08261b48 +0x1878:  mov    $0x85,%ebx
08261b4d +0x187d:  jmp    08261b71 <+0x18a1>
08261b4f +0x187f:  mov    $0x0,%ebx
08261b54 +0x1884:  jmp    08261b71 <+0x18a1>
08261b56 +0x1886:  mov    %edx,%ebx
08261b58 +0x1888:  mov    %eax,%esi
08261b5a +0x188a:  lea    -0x2c(%ebp),%eax
08261b5d +0x188d:  mov    %eax,(%esp)
08261b60 +0x1890:  call   082619dc <+0x170c>
08261b65 +0x1895:  mov    %esi,%eax
08261b67 +0x1897:  mov    %ebx,%edx
08261b69 +0x1899:  mov    %eax,(%esp)
08261b6c +0x189c:  call   08ae3750 <_Unwind_Resume>
08261b71 +0x18a1:  lea    -0x2c(%ebp),%eax
08261b74 +0x18a4:  mov    %eax,(%esp)
08261b77 +0x18a7:  call   082619dc <+0x170c>
08261b7c +0x18ac:  mov    %ebx,%eax
08261b7e +0x18ae:  add    $0x40,%esp
08261b81 +0x18b1:  pop    %ebx
08261b82 +0x18b2:  pop    %esi
08261b83 +0x18b3:  pop    %ebp
08261b84 +0x18b4:  ret
08261b85 +0x18b5:  nop
08261b86 +0x18b6:  push   %ebp
08261b87 +0x18b7:  mov    %esp,%ebp
08261b89 +0x18b9:  mov    $0x0,%eax
08261b8e +0x18be:  pop    %ebp
08261b8f +0x18bf:  ret
08261b90 +0x18c0:  push   %ebp
08261b91 +0x18c1:  mov    %esp,%ebp
08261b93 +0x18c3:  sub    $0x38,%esp
08261b96 +0x18c6:  mov    0xc(%ebp),%eax
08261b99 +0x18c9:  mov    %eax,(%esp)
08261b9c +0x18cc:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08261ba1 +0x18d1:  cmp    $0x2,%eax
08261ba4 +0x18d4:  setle  %al
08261ba7 +0x18d7:  test   %al,%al
08261ba9 +0x18d9:  je     08261c1d <+0x194d>
08261bab +0x18db:  movl   $0x1,0x4(%esp)
08261bb3 +0x18e3:  mov    0x10(%ebp),%eax
08261bb6 +0x18e6:  mov    %eax,(%esp)
08261bb9 +0x18e9:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08261bbe +0x18ee:  lea    -0xa(%ebp),%eax
08261bc1 +0x18f1:  mov    %eax,0x4(%esp)
08261bc5 +0x18f5:  mov    0x10(%ebp),%eax
08261bc8 +0x18f8:  mov    %eax,(%esp)
08261bcb +0x18fb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08261bd0 +0x1900:  mov    0x10(%ebp),%eax
08261bd3 +0x1903:  mov    %eax,(%esp)
08261bd6 +0x1906:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08261bdb +0x190b:  movzwl -0xa(%ebp),%edx
08261bdf +0x190f:  movswl %dx,%edx
08261be2 +0x1912:  mov    %eax,0x18(%esp)
08261be6 +0x1916:  mov    %edx,0x14(%esp)
08261bea +0x191a:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08261bf2 +0x1922:  movl   $0x94,0xc(%esp)
08261bfa +0x192a:  movl   $&_ZZN17IPacketDispatcherI14MSG_BINGO_QUIZ11stBingoQuizL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08261c02 +0x1932:  movl   $"PacketDispatcher.h",0x4(%esp)
08261c0a +0x193a:  movl   $0x1,(%esp)
08261c11 +0x1941:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08261c16 +0x1946:  mov    $0x95,%eax
08261c1b +0x194b:  jmp    08261c22 <+0x1952>
08261c1d +0x194d:  mov    $0x0,%eax
08261c22 +0x1952:  leave
08261c23 +0x1953:  ret
08261c24 +0x1954:  push   %ebp
08261c25 +0x1955:  mov    %esp,%ebp
08261c27 +0x1957:  sub    $0x18,%esp
08261c2a +0x195a:  mov    0x8(%ebp),%eax
08261c2d +0x195d:  mov    %eax,(%esp)
08261c30 +0x1960:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08261c35 +0x1965:  mov    0x8(%ebp),%eax
08261c38 +0x1968:  movl   $&_ZTV13stBingoReward+0x8,(%eax)
08261c3e +0x196e:  leave
08261c3f +0x196f:  ret
08261c40 +0x1970:  push   %ebp
08261c41 +0x1971:  mov    %esp,%ebp
08261c43 +0x1973:  sub    $0x18,%esp
08261c46 +0x1976:  mov    0x8(%ebp),%eax
08261c49 +0x1979:  movl   $&_ZTV13stBingoReward+0x8,(%eax)
08261c4f +0x197f:  mov    0x8(%ebp),%eax
08261c52 +0x1982:  mov    %eax,(%esp)
08261c55 +0x1985:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08261c5a +0x198a:  mov    $0x0,%eax
08261c5f +0x198f:  test   %al,%al
08261c61 +0x1991:  je     08261c6e <+0x199e>
08261c63 +0x1993:  mov    0x8(%ebp),%eax
08261c66 +0x1996:  mov    %eax,(%esp)
08261c69 +0x1999:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08261c6e +0x199e:  leave
08261c6f +0x199f:  ret
08261c70 +0x19a0:  push   %ebp
08261c71 +0x19a1:  mov    %esp,%ebp
08261c73 +0x19a3:  sub    $0x18,%esp
08261c76 +0x19a6:  mov    0x8(%ebp),%eax
08261c79 +0x19a9:  mov    %eax,(%esp)
08261c7c +0x19ac:  call   08261c40 <+0x1970>
08261c81 +0x19b1:  mov    0x8(%ebp),%eax
08261c84 +0x19b4:  mov    %eax,(%esp)
08261c87 +0x19b7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08261c8c +0x19bc:  leave
08261c8d +0x19bd:  ret
08261c8e +0x19be:  push   %ebp
08261c8f +0x19bf:  mov    %esp,%ebp
08261c91 +0x19c1:  push   %esi
08261c92 +0x19c2:  push   %ebx
08261c93 +0x19c3:  sub    $0x30,%esp
08261c96 +0x19c6:  mov    0x8(%ebp),%eax
08261c99 +0x19c9:  mov    (%eax),%eax
08261c9b +0x19cb:  add    $0x10,%eax
08261c9e +0x19ce:  mov    (%eax),%edx
08261ca0 +0x19d0:  mov    0x10(%ebp),%eax
08261ca3 +0x19d3:  mov    %eax,0x8(%esp)
08261ca7 +0x19d7:  mov    0xc(%ebp),%eax
08261caa +0x19da:  mov    %eax,0x4(%esp)
08261cae +0x19de:  mov    0x8(%ebp),%eax
08261cb1 +0x19e1:  mov    %eax,(%esp)
08261cb4 +0x19e4:  call   *%edx
08261cb6 +0x19e6:  test   %eax,%eax
08261cb8 +0x19e8:  setg   %al
08261cbb +0x19eb:  test   %al,%al
08261cbd +0x19ed:  je     08261cc9 <+0x19f9>
08261cbf +0x19ef:  mov    $0x0,%ebx
08261cc4 +0x19f4:  jmp    08261dd5 <+0x1b05>
08261cc9 +0x19f9:  movl   $0x0,-0xc(%ebp)
08261cd0 +0x1a00:  mov    0x8(%ebp),%eax
08261cd3 +0x1a03:  mov    (%eax),%eax
08261cd5 +0x1a05:  add    $0x14,%eax
08261cd8 +0x1a08:  mov    (%eax),%edx
08261cda +0x1a0a:  lea    -0x19(%ebp),%eax
08261cdd +0x1a0d:  mov    %eax,0x8(%esp)
08261ce1 +0x1a11:  mov    0x10(%ebp),%eax
08261ce4 +0x1a14:  mov    %eax,0x4(%esp)
08261ce8 +0x1a18:  mov    0x8(%ebp),%eax
08261ceb +0x1a1b:  mov    %eax,(%esp)
08261cee +0x1a1e:  call   *%edx
08261cf0 +0x1a20:  mov    %eax,-0xc(%ebp)
08261cf3 +0x1a23:  cmpl   $0x0,-0xc(%ebp)
08261cf7 +0x1a27:  setne  %al
08261cfa +0x1a2a:  test   %al,%al
08261cfc +0x1a2c:  je     08261d06 <+0x1a36>
08261cfe +0x1a2e:  mov    -0xc(%ebp),%ebx
08261d01 +0x1a31:  jmp    08261dd5 <+0x1b05>
08261d06 +0x1a36:  lea    -0x28(%ebp),%eax
08261d09 +0x1a39:  mov    %eax,(%esp)
08261d0c +0x1a3c:  call   08261c24 <+0x1954>
08261d11 +0x1a41:  mov    0x8(%ebp),%eax
08261d14 +0x1a44:  mov    (%eax),%eax
08261d16 +0x1a46:  add    $0x18,%eax
08261d19 +0x1a49:  mov    (%eax),%edx
08261d1b +0x1a4b:  lea    -0x28(%ebp),%eax
08261d1e +0x1a4e:  mov    %eax,0xc(%esp)
08261d22 +0x1a52:  lea    -0x19(%ebp),%eax
08261d25 +0x1a55:  mov    %eax,0x8(%esp)
08261d29 +0x1a59:  mov    0xc(%ebp),%eax
08261d2c +0x1a5c:  mov    %eax,0x4(%esp)
08261d30 +0x1a60:  mov    0x8(%ebp),%eax
08261d33 +0x1a63:  mov    %eax,(%esp)
08261d36 +0x1a66:  call   *%edx
08261d38 +0x1a68:  mov    %eax,-0xc(%ebp)
08261d3b +0x1a6b:  cmpl   $0x0,-0xc(%ebp)
08261d3f +0x1a6f:  setg   %al
08261d42 +0x1a72:  test   %al,%al
08261d44 +0x1a74:  je     08261d4b <+0x1a7b>
08261d46 +0x1a76:  mov    -0xc(%ebp),%ebx
08261d49 +0x1a79:  jmp    08261dca <+0x1afa>
08261d4b +0x1a7b:  cmpl   $0x0,-0xc(%ebp)
08261d4f +0x1a7f:  jns    08261d58 <+0x1a88>
08261d51 +0x1a81:  mov    $0x0,%ebx
08261d56 +0x1a86:  jmp    08261dca <+0x1afa>
08261d58 +0x1a88:  mov    0x8(%ebp),%eax
08261d5b +0x1a8b:  mov    (%eax),%eax
08261d5d +0x1a8d:  add    $0x1c,%eax
08261d60 +0x1a90:  mov    (%eax),%edx
08261d62 +0x1a92:  lea    -0x28(%ebp),%eax
08261d65 +0x1a95:  mov    %eax,0x8(%esp)
08261d69 +0x1a99:  mov    0xc(%ebp),%eax
08261d6c +0x1a9c:  mov    %eax,0x4(%esp)
08261d70 +0x1aa0:  mov    0x8(%ebp),%eax
08261d73 +0x1aa3:  mov    %eax,(%esp)
08261d76 +0x1aa6:  call   *%edx
08261d78 +0x1aa8:  mov    0x8(%ebp),%eax
08261d7b +0x1aab:  mov    (%eax),%eax
08261d7d +0x1aad:  add    $0xc,%eax
08261d80 +0x1ab0:  mov    (%eax),%edx
08261d82 +0x1ab2:  mov    0x10(%ebp),%eax
08261d85 +0x1ab5:  mov    %eax,0x8(%esp)
08261d89 +0x1ab9:  mov    0xc(%ebp),%eax
08261d8c +0x1abc:  mov    %eax,0x4(%esp)
08261d90 +0x1ac0:  mov    0x8(%ebp),%eax
08261d93 +0x1ac3:  mov    %eax,(%esp)
08261d96 +0x1ac6:  call   *%edx
08261d98 +0x1ac8:  test   %eax,%eax
08261d9a +0x1aca:  setg   %al
08261d9d +0x1acd:  test   %al,%al
08261d9f +0x1acf:  je     08261da8 <+0x1ad8>
08261da1 +0x1ad1:  mov    $0x85,%ebx
08261da6 +0x1ad6:  jmp    08261dca <+0x1afa>
08261da8 +0x1ad8:  mov    $0x0,%ebx
08261dad +0x1add:  jmp    08261dca <+0x1afa>
08261daf +0x1adf:  mov    %edx,%ebx
08261db1 +0x1ae1:  mov    %eax,%esi
08261db3 +0x1ae3:  lea    -0x28(%ebp),%eax
08261db6 +0x1ae6:  mov    %eax,(%esp)
08261db9 +0x1ae9:  call   08261c40 <+0x1970>
08261dbe +0x1aee:  mov    %esi,%eax
08261dc0 +0x1af0:  mov    %ebx,%edx
08261dc2 +0x1af2:  mov    %eax,(%esp)
08261dc5 +0x1af5:  call   08ae3750 <_Unwind_Resume>
08261dca +0x1afa:  lea    -0x28(%ebp),%eax
08261dcd +0x1afd:  mov    %eax,(%esp)
08261dd0 +0x1b00:  call   08261c40 <+0x1970>
08261dd5 +0x1b05:  mov    %ebx,%eax
08261dd7 +0x1b07:  add    $0x30,%esp
08261dda +0x1b0a:  pop    %ebx
08261ddb +0x1b0b:  pop    %esi
08261ddc +0x1b0c:  pop    %ebp
08261ddd +0x1b0d:  ret
08261dde +0x1b0e:  push   %ebp
08261ddf +0x1b0f:  mov    %esp,%ebp
08261de1 +0x1b11:  mov    $0x0,%eax
08261de6 +0x1b16:  pop    %ebp
08261de7 +0x1b17:  ret
08261de8 +0x1b18:  push   %ebp
08261de9 +0x1b19:  mov    %esp,%ebp
08261deb +0x1b1b:  sub    $0x38,%esp
08261dee +0x1b1e:  mov    0xc(%ebp),%eax
08261df1 +0x1b21:  mov    %eax,(%esp)
08261df4 +0x1b24:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08261df9 +0x1b29:  cmp    $0x2,%eax
08261dfc +0x1b2c:  setle  %al
08261dff +0x1b2f:  test   %al,%al
08261e01 +0x1b31:  je     08261e75 <+0x1ba5>
08261e03 +0x1b33:  movl   $0x1,0x4(%esp)
08261e0b +0x1b3b:  mov    0x10(%ebp),%eax
08261e0e +0x1b3e:  mov    %eax,(%esp)
08261e11 +0x1b41:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
08261e16 +0x1b46:  lea    -0xa(%ebp),%eax
08261e19 +0x1b49:  mov    %eax,0x4(%esp)
08261e1d +0x1b4d:  mov    0x10(%ebp),%eax
08261e20 +0x1b50:  mov    %eax,(%esp)
08261e23 +0x1b53:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08261e28 +0x1b58:  mov    0x10(%ebp),%eax
08261e2b +0x1b5b:  mov    %eax,(%esp)
08261e2e +0x1b5e:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08261e33 +0x1b63:  movzwl -0xa(%ebp),%edx
08261e37 +0x1b67:  movswl %dx,%edx
08261e3a +0x1b6a:  mov    %eax,0x18(%esp)
08261e3e +0x1b6e:  mov    %edx,0x14(%esp)
08261e42 +0x1b72:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08261e4a +0x1b7a:  movl   $0x94,0xc(%esp)
08261e52 +0x1b82:  movl   $&_ZZN17IPacketDispatcherI8MSG_BASE13stBingoRewardL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08261e5a +0x1b8a:  movl   $"PacketDispatcher.h",0x4(%esp)
08261e62 +0x1b92:  movl   $0x1,(%esp)
08261e69 +0x1b99:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08261e6e +0x1b9e:  mov    $0x95,%eax
08261e73 +0x1ba3:  jmp    08261e7a <+0x1baa>
08261e75 +0x1ba5:  mov    $0x0,%eax
08261e7a +0x1baa:  leave
08261e7b +0x1bab:  ret
08261e7c +0x1bac:  push   %ebp
08261e7d +0x1bad:  mov    %esp,%ebp
08261e7f +0x1baf:  sub    $0x18,%esp
08261e82 +0x1bb2:  mov    0x8(%ebp),%eax
08261e85 +0x1bb5:  mov    %eax,(%esp)
08261e88 +0x1bb8:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
08261e8d +0x1bbd:  mov    0x8(%ebp),%eax
08261e90 +0x1bc0:  movl   $&_ZTV20stStackableActionUse+0x8,(%eax)
08261e96 +0x1bc6:  leave
08261e97 +0x1bc7:  ret
08261e98 +0x1bc8:  push   %ebp
08261e99 +0x1bc9:  mov    %esp,%ebp
08261e9b +0x1bcb:  sub    $0x18,%esp
08261e9e +0x1bce:  mov    0x8(%ebp),%eax
08261ea1 +0x1bd1:  movl   $&_ZTV20stStackableActionUse+0x8,(%eax)
08261ea7 +0x1bd7:  mov    0x8(%ebp),%eax
08261eaa +0x1bda:  mov    %eax,(%esp)
08261ead +0x1bdd:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08261eb2 +0x1be2:  mov    $0x0,%eax
08261eb7 +0x1be7:  test   %al,%al
08261eb9 +0x1be9:  je     08261ec6 <+0x1bf6>
08261ebb +0x1beb:  mov    0x8(%ebp),%eax
08261ebe +0x1bee:  mov    %eax,(%esp)
08261ec1 +0x1bf1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08261ec6 +0x1bf6:  leave
08261ec7 +0x1bf7:  ret
08261ec8 +0x1bf8:  push   %ebp
08261ec9 +0x1bf9:  mov    %esp,%ebp
08261ecb +0x1bfb:  sub    $0x18,%esp
08261ece +0x1bfe:  mov    0x8(%ebp),%eax
08261ed1 +0x1c01:  mov    %eax,(%esp)
08261ed4 +0x1c04:  call   08261e98 <+0x1bc8>
08261ed9 +0x1c09:  mov    0x8(%ebp),%eax
08261edc +0x1c0c:  mov    %eax,(%esp)
08261edf +0x1c0f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08261ee4 +0x1c14:  leave
08261ee5 +0x1c15:  ret
08261ee6 +0x1c16:  push   %ebp
08261ee7 +0x1c17:  mov    %esp,%ebp
08261ee9 +0x1c19:  push   %esi
08261eea +0x1c1a:  push   %ebx
08261eeb +0x1c1b:  sub    $0x40,%esp
08261eee +0x1c1e:  mov    0x8(%ebp),%eax
08261ef1 +0x1c21:  mov    (%eax),%eax
08261ef3 +0x1c23:  add    $0x10,%eax
08261ef6 +0x1c26:  mov    (%eax),%edx
08261ef8 +0x1c28:  mov    0x10(%ebp),%eax
08261efb +0x1c2b:  mov    %eax,0x8(%esp)
08261eff +0x1c2f:  mov    0xc(%ebp),%eax
08261f02 +0x1c32:  mov    %eax,0x4(%esp)
08261f06 +0x1c36:  mov    0x8(%ebp),%eax
08261f09 +0x1c39:  mov    %eax,(%esp)
08261f0c +0x1c3c:  call   *%edx
08261f0e +0x1c3e:  test   %eax,%eax
08261f10 +0x1c40:  setg   %al
08261f13 +0x1c43:  test   %al,%al
08261f15 +0x1c45:  je     08261f21 <+0x1c51>
08261f17 +0x1c47:  mov    $0x0,%ebx
08261f1c +0x1c4c:  jmp    08262038 <+0x1d68>
08261f21 +0x1c51:  lea    -0x29(%ebp),%eax
08261f24 +0x1c54:  mov    %eax,(%esp)
08261f27 +0x1c57:  call   0826033e <+0x6e>
08261f2c +0x1c5c:  movl   $0x0,-0xc(%ebp)
08261f33 +0x1c63:  mov    0x8(%ebp),%eax
08261f36 +0x1c66:  mov    (%eax),%eax
08261f38 +0x1c68:  add    $0x14,%eax
08261f3b +0x1c6b:  mov    (%eax),%edx
08261f3d +0x1c6d:  lea    -0x29(%ebp),%eax
08261f40 +0x1c70:  mov    %eax,0x8(%esp)
08261f44 +0x1c74:  mov    0x10(%ebp),%eax
08261f47 +0x1c77:  mov    %eax,0x4(%esp)
08261f4b +0x1c7b:  mov    0x8(%ebp),%eax
08261f4e +0x1c7e:  mov    %eax,(%esp)
08261f51 +0x1c81:  call   *%edx
08261f53 +0x1c83:  mov    %eax,-0xc(%ebp)
08261f56 +0x1c86:  cmpl   $0x0,-0xc(%ebp)
08261f5a +0x1c8a:  setne  %al
08261f5d +0x1c8d:  test   %al,%al
08261f5f +0x1c8f:  je     08261f69 <+0x1c99>
08261f61 +0x1c91:  mov    -0xc(%ebp),%ebx
08261f64 +0x1c94:  jmp    08262038 <+0x1d68>
08261f69 +0x1c99:  lea    -0x38(%ebp),%eax
08261f6c +0x1c9c:  mov    %eax,(%esp)
08261f6f +0x1c9f:  call   08261e7c <+0x1bac>
08261f74 +0x1ca4:  mov    0x8(%ebp),%eax
08261f77 +0x1ca7:  mov    (%eax),%eax
08261f79 +0x1ca9:  add    $0x18,%eax
08261f7c +0x1cac:  mov    (%eax),%edx
08261f7e +0x1cae:  lea    -0x38(%ebp),%eax
08261f81 +0x1cb1:  mov    %eax,0xc(%esp)
08261f85 +0x1cb5:  lea    -0x29(%ebp),%eax
08261f88 +0x1cb8:  mov    %eax,0x8(%esp)
08261f8c +0x1cbc:  mov    0xc(%ebp),%eax
08261f8f +0x1cbf:  mov    %eax,0x4(%esp)
08261f93 +0x1cc3:  mov    0x8(%ebp),%eax
08261f96 +0x1cc6:  mov    %eax,(%esp)
08261f99 +0x1cc9:  call   *%edx
08261f9b +0x1ccb:  mov    %eax,-0xc(%ebp)
08261f9e +0x1cce:  cmpl   $0x0,-0xc(%ebp)
08261fa2 +0x1cd2:  setg   %al
08261fa5 +0x1cd5:  test   %al,%al
08261fa7 +0x1cd7:  je     08261fae <+0x1cde>
08261fa9 +0x1cd9:  mov    -0xc(%ebp),%ebx
08261fac +0x1cdc:  jmp    0826202d <+0x1d5d>
08261fae +0x1cde:  cmpl   $0x0,-0xc(%ebp)
08261fb2 +0x1ce2:  jns    08261fbb <+0x1ceb>
08261fb4 +0x1ce4:  mov    $0x0,%ebx
08261fb9 +0x1ce9:  jmp    0826202d <+0x1d5d>
08261fbb +0x1ceb:  mov    0x8(%ebp),%eax
08261fbe +0x1cee:  mov    (%eax),%eax
08261fc0 +0x1cf0:  add    $0x1c,%eax
08261fc3 +0x1cf3:  mov    (%eax),%edx
08261fc5 +0x1cf5:  lea    -0x38(%ebp),%eax
08261fc8 +0x1cf8:  mov    %eax,0x8(%esp)
08261fcc +0x1cfc:  mov    0xc(%ebp),%eax
08261fcf +0x1cff:  mov    %eax,0x4(%esp)
08261fd3 +0x1d03:  mov    0x8(%ebp),%eax
08261fd6 +0x1d06:  mov    %eax,(%esp)
08261fd9 +0x1d09:  call   *%edx
08261fdb +0x1d0b:  mov    0x8(%ebp),%eax
08261fde +0x1d0e:  mov    (%eax),%eax
08261fe0 +0x1d10:  add    $0xc,%eax
08261fe3 +0x1d13:  mov    (%eax),%edx
08261fe5 +0x1d15:  mov    0x10(%ebp),%eax
08261fe8 +0x1d18:  mov    %eax,0x8(%esp)
08261fec +0x1d1c:  mov    0xc(%ebp),%eax
08261fef +0x1d1f:  mov    %eax,0x4(%esp)
08261ff3 +0x1d23:  mov    0x8(%ebp),%eax
08261ff6 +0x1d26:  mov    %eax,(%esp)
08261ff9 +0x1d29:  call   *%edx
08261ffb +0x1d2b:  test   %eax,%eax
08261ffd +0x1d2d:  setg   %al
08262000 +0x1d30:  test   %al,%al
08262002 +0x1d32:  je     0826200b <+0x1d3b>
08262004 +0x1d34:  mov    $0x85,%ebx
08262009 +0x1d39:  jmp    0826202d <+0x1d5d>
0826200b +0x1d3b:  mov    $0x0,%ebx
08262010 +0x1d40:  jmp    0826202d <+0x1d5d>
08262012 +0x1d42:  mov    %edx,%ebx
08262014 +0x1d44:  mov    %eax,%esi
08262016 +0x1d46:  lea    -0x38(%ebp),%eax
08262019 +0x1d49:  mov    %eax,(%esp)
0826201c +0x1d4c:  call   08261e98 <+0x1bc8>
08262021 +0x1d51:  mov    %esi,%eax
08262023 +0x1d53:  mov    %ebx,%edx
08262025 +0x1d55:  mov    %eax,(%esp)
08262028 +0x1d58:  call   08ae3750 <_Unwind_Resume>
0826202d +0x1d5d:  lea    -0x38(%ebp),%eax
08262030 +0x1d60:  mov    %eax,(%esp)
08262033 +0x1d63:  call   08261e98 <+0x1bc8>
08262038 +0x1d68:  mov    %ebx,%eax
0826203a +0x1d6a:  add    $0x40,%esp
0826203d +0x1d6d:  pop    %ebx
0826203e +0x1d6e:  pop    %esi
0826203f +0x1d6f:  pop    %ebp
08262040 +0x1d70:  ret
08262041 +0x1d71:  nop
08262042 +0x1d72:  push   %ebp
08262043 +0x1d73:  mov    %esp,%ebp
08262045 +0x1d75:  mov    $0x0,%eax
0826204a +0x1d7a:  pop    %ebp
0826204b +0x1d7b:  ret
0826204c +0x1d7c:  push   %ebp
0826204d +0x1d7d:  mov    %esp,%ebp
0826204f +0x1d7f:  sub    $0x38,%esp
08262052 +0x1d82:  mov    0xc(%ebp),%eax
08262055 +0x1d85:  mov    %eax,(%esp)
08262058 +0x1d88:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0826205d +0x1d8d:  cmp    $0x2,%eax
08262060 +0x1d90:  setle  %al
08262063 +0x1d93:  test   %al,%al
08262065 +0x1d95:  je     082620d9 <+0x1e09>
08262067 +0x1d97:  movl   $0x1,0x4(%esp)
0826206f +0x1d9f:  mov    0x10(%ebp),%eax
08262072 +0x1da2:  mov    %eax,(%esp)
08262075 +0x1da5:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
0826207a +0x1daa:  lea    -0xa(%ebp),%eax
0826207d +0x1dad:  mov    %eax,0x4(%esp)
08262081 +0x1db1:  mov    0x10(%ebp),%eax
08262084 +0x1db4:  mov    %eax,(%esp)
08262087 +0x1db7:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0826208c +0x1dbc:  mov    0x10(%ebp),%eax
0826208f +0x1dbf:  mov    %eax,(%esp)
08262092 +0x1dc2:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
08262097 +0x1dc7:  movzwl -0xa(%ebp),%edx
0826209b +0x1dcb:  movswl %dx,%edx
0826209e +0x1dce:  mov    %eax,0x18(%esp)
082620a2 +0x1dd2:  mov    %edx,0x14(%esp)
082620a6 +0x1dd6:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
082620ae +0x1dde:  movl   $0x94,0xc(%esp)
082620b6 +0x1de6:  movl   $&_ZZN17IPacketDispatcherI24MSG_STACKABLE_ACTION_USE20stStackableActionUseL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
082620be +0x1dee:  movl   $"PacketDispatcher.h",0x4(%esp)
082620c6 +0x1df6:  movl   $0x1,(%esp)
082620cd +0x1dfd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082620d2 +0x1e02:  mov    $0x95,%eax
082620d7 +0x1e07:  jmp    082620de <+0x1e0e>
082620d9 +0x1e09:  mov    $0x0,%eax
082620de +0x1e0e:  leave
082620df +0x1e0f:  ret
082620e0 +0x1e10:  push   %ebp
082620e1 +0x1e11:  mov    %esp,%ebp
082620e3 +0x1e13:  sub    $0x18,%esp
082620e6 +0x1e16:  mov    0x8(%ebp),%eax
082620e9 +0x1e19:  mov    %eax,(%esp)
082620ec +0x1e1c:  call   0812530c <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x6f>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x6f
082620f1 +0x1e21:  mov    0x8(%ebp),%eax
082620f4 +0x1e24:  movl   $&_ZTV23stRightOfChangeGrowType+0x8,(%eax)
082620fa +0x1e2a:  leave
082620fb +0x1e2b:  ret
082620fc +0x1e2c:  push   %ebp
082620fd +0x1e2d:  mov    %esp,%ebp
082620ff +0x1e2f:  sub    $0x18,%esp
08262102 +0x1e32:  mov    0x8(%ebp),%eax
08262105 +0x1e35:  movl   $&_ZTV23stRightOfChangeGrowType+0x8,(%eax)
0826210b +0x1e3b:  mov    0x8(%ebp),%eax
0826210e +0x1e3e:  mov    %eax,(%esp)
08262111 +0x1e41:  call   081252c8 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x2b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x2b
08262116 +0x1e46:  mov    $0x0,%eax
0826211b +0x1e4b:  test   %al,%al
0826211d +0x1e4d:  je     0826212a <+0x1e5a>
0826211f +0x1e4f:  mov    0x8(%ebp),%eax
08262122 +0x1e52:  mov    %eax,(%esp)
08262125 +0x1e55:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826212a +0x1e5a:  leave
0826212b +0x1e5b:  ret
0826212c +0x1e5c:  push   %ebp
0826212d +0x1e5d:  mov    %esp,%ebp
0826212f +0x1e5f:  sub    $0x18,%esp
08262132 +0x1e62:  mov    0x8(%ebp),%eax
08262135 +0x1e65:  mov    %eax,(%esp)
08262138 +0x1e68:  call   082620fc <+0x1e2c>
0826213d +0x1e6d:  mov    0x8(%ebp),%eax
08262140 +0x1e70:  mov    %eax,(%esp)
08262143 +0x1e73:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262148 +0x1e78:  leave
08262149 +0x1e79:  ret
0826214a +0x1e7a:  push   %ebp
0826214b +0x1e7b:  mov    %esp,%ebp
0826214d +0x1e7d:  push   %esi
0826214e +0x1e7e:  push   %ebx
0826214f +0x1e7f:  sub    $0x30,%esp
08262152 +0x1e82:  mov    0x8(%ebp),%eax
08262155 +0x1e85:  mov    (%eax),%eax
08262157 +0x1e87:  add    $0x10,%eax
0826215a +0x1e8a:  mov    (%eax),%edx
0826215c +0x1e8c:  mov    0x10(%ebp),%eax
0826215f +0x1e8f:  mov    %eax,0x8(%esp)
08262163 +0x1e93:  mov    0xc(%ebp),%eax
08262166 +0x1e96:  mov    %eax,0x4(%esp)
0826216a +0x1e9a:  mov    0x8(%ebp),%eax
0826216d +0x1e9d:  mov    %eax,(%esp)
08262170 +0x1ea0:  call   *%edx
08262172 +0x1ea2:  test   %eax,%eax
08262174 +0x1ea4:  setg   %al
08262177 +0x1ea7:  test   %al,%al
08262179 +0x1ea9:  je     08262185 <+0x1eb5>
0826217b +0x1eab:  mov    $0x0,%ebx
08262180 +0x1eb0:  jmp    0826229c <+0x1fcc>
08262185 +0x1eb5:  lea    -0x1c(%ebp),%eax
08262188 +0x1eb8:  mov    %eax,(%esp)
0826218b +0x1ebb:  call   0826031a <+0x4a>
08262190 +0x1ec0:  movl   $0x0,-0xc(%ebp)
08262197 +0x1ec7:  mov    0x8(%ebp),%eax
0826219a +0x1eca:  mov    (%eax),%eax
0826219c +0x1ecc:  add    $0x14,%eax
0826219f +0x1ecf:  mov    (%eax),%edx
082621a1 +0x1ed1:  lea    -0x1c(%ebp),%eax
082621a4 +0x1ed4:  mov    %eax,0x8(%esp)
082621a8 +0x1ed8:  mov    0x10(%ebp),%eax
082621ab +0x1edb:  mov    %eax,0x4(%esp)
082621af +0x1edf:  mov    0x8(%ebp),%eax
082621b2 +0x1ee2:  mov    %eax,(%esp)
082621b5 +0x1ee5:  call   *%edx
082621b7 +0x1ee7:  mov    %eax,-0xc(%ebp)
082621ba +0x1eea:  cmpl   $0x0,-0xc(%ebp)
082621be +0x1eee:  setne  %al
082621c1 +0x1ef1:  test   %al,%al
082621c3 +0x1ef3:  je     082621cd <+0x1efd>
082621c5 +0x1ef5:  mov    -0xc(%ebp),%ebx
082621c8 +0x1ef8:  jmp    0826229c <+0x1fcc>
082621cd +0x1efd:  lea    -0x24(%ebp),%eax
082621d0 +0x1f00:  mov    %eax,(%esp)
082621d3 +0x1f03:  call   082620e0 <+0x1e10>
082621d8 +0x1f08:  mov    0x8(%ebp),%eax
082621db +0x1f0b:  mov    (%eax),%eax
082621dd +0x1f0d:  add    $0x18,%eax
082621e0 +0x1f10:  mov    (%eax),%edx
082621e2 +0x1f12:  lea    -0x24(%ebp),%eax
082621e5 +0x1f15:  mov    %eax,0xc(%esp)
082621e9 +0x1f19:  lea    -0x1c(%ebp),%eax
082621ec +0x1f1c:  mov    %eax,0x8(%esp)
082621f0 +0x1f20:  mov    0xc(%ebp),%eax
082621f3 +0x1f23:  mov    %eax,0x4(%esp)
082621f7 +0x1f27:  mov    0x8(%ebp),%eax
082621fa +0x1f2a:  mov    %eax,(%esp)
082621fd +0x1f2d:  call   *%edx
082621ff +0x1f2f:  mov    %eax,-0xc(%ebp)
08262202 +0x1f32:  cmpl   $0x0,-0xc(%ebp)
08262206 +0x1f36:  setg   %al
08262209 +0x1f39:  test   %al,%al
0826220b +0x1f3b:  je     08262212 <+0x1f42>
0826220d +0x1f3d:  mov    -0xc(%ebp),%ebx
08262210 +0x1f40:  jmp    08262291 <+0x1fc1>
08262212 +0x1f42:  cmpl   $0x0,-0xc(%ebp)
08262216 +0x1f46:  jns    0826221f <+0x1f4f>
08262218 +0x1f48:  mov    $0x0,%ebx
0826221d +0x1f4d:  jmp    08262291 <+0x1fc1>
0826221f +0x1f4f:  mov    0x8(%ebp),%eax
08262222 +0x1f52:  mov    (%eax),%eax
08262224 +0x1f54:  add    $0x1c,%eax
08262227 +0x1f57:  mov    (%eax),%edx
08262229 +0x1f59:  lea    -0x24(%ebp),%eax
0826222c +0x1f5c:  mov    %eax,0x8(%esp)
08262230 +0x1f60:  mov    0xc(%ebp),%eax
08262233 +0x1f63:  mov    %eax,0x4(%esp)
08262237 +0x1f67:  mov    0x8(%ebp),%eax
0826223a +0x1f6a:  mov    %eax,(%esp)
0826223d +0x1f6d:  call   *%edx
0826223f +0x1f6f:  mov    0x8(%ebp),%eax
08262242 +0x1f72:  mov    (%eax),%eax
08262244 +0x1f74:  add    $0xc,%eax
08262247 +0x1f77:  mov    (%eax),%edx
08262249 +0x1f79:  mov    0x10(%ebp),%eax
0826224c +0x1f7c:  mov    %eax,0x8(%esp)
08262250 +0x1f80:  mov    0xc(%ebp),%eax
08262253 +0x1f83:  mov    %eax,0x4(%esp)
08262257 +0x1f87:  mov    0x8(%ebp),%eax
0826225a +0x1f8a:  mov    %eax,(%esp)
0826225d +0x1f8d:  call   *%edx
0826225f +0x1f8f:  test   %eax,%eax
08262261 +0x1f91:  setg   %al
08262264 +0x1f94:  test   %al,%al
08262266 +0x1f96:  je     0826226f <+0x1f9f>
08262268 +0x1f98:  mov    $0x85,%ebx
0826226d +0x1f9d:  jmp    08262291 <+0x1fc1>
0826226f +0x1f9f:  mov    $0x0,%ebx
08262274 +0x1fa4:  jmp    08262291 <+0x1fc1>
08262276 +0x1fa6:  mov    %edx,%ebx
08262278 +0x1fa8:  mov    %eax,%esi
0826227a +0x1faa:  lea    -0x24(%ebp),%eax
0826227d +0x1fad:  mov    %eax,(%esp)
08262280 +0x1fb0:  call   082620fc <+0x1e2c>
08262285 +0x1fb5:  mov    %esi,%eax
08262287 +0x1fb7:  mov    %ebx,%edx
08262289 +0x1fb9:  mov    %eax,(%esp)
0826228c +0x1fbc:  call   08ae3750 <_Unwind_Resume>
08262291 +0x1fc1:  lea    -0x24(%ebp),%eax
08262294 +0x1fc4:  mov    %eax,(%esp)
08262297 +0x1fc7:  call   082620fc <+0x1e2c>
0826229c +0x1fcc:  mov    %ebx,%eax
0826229e +0x1fce:  add    $0x30,%esp
082622a1 +0x1fd1:  pop    %ebx
082622a2 +0x1fd2:  pop    %esi
082622a3 +0x1fd3:  pop    %ebp
082622a4 +0x1fd4:  ret
082622a5 +0x1fd5:  nop
082622a6 +0x1fd6:  push   %ebp
082622a7 +0x1fd7:  mov    %esp,%ebp
082622a9 +0x1fd9:  mov    $0x0,%eax
082622ae +0x1fde:  pop    %ebp
082622af +0x1fdf:  ret
082622b0 +0x1fe0:  push   %ebp
082622b1 +0x1fe1:  mov    %esp,%ebp
082622b3 +0x1fe3:  sub    $0x38,%esp
082622b6 +0x1fe6:  mov    0xc(%ebp),%eax
082622b9 +0x1fe9:  mov    %eax,(%esp)
082622bc +0x1fec:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082622c1 +0x1ff1:  cmp    $0x2,%eax
082622c4 +0x1ff4:  setle  %al
082622c7 +0x1ff7:  test   %al,%al
082622c9 +0x1ff9:  je     0826233d <+0x206d>
082622cb +0x1ffb:  movl   $0x1,0x4(%esp)
082622d3 +0x2003:  mov    0x10(%ebp),%eax
082622d6 +0x2006:  mov    %eax,(%esp)
082622d9 +0x2009:  call   081252ba <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x1d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x1d
082622de +0x200e:  lea    -0xa(%ebp),%eax
082622e1 +0x2011:  mov    %eax,0x4(%esp)
082622e5 +0x2015:  mov    0x10(%ebp),%eax
082622e8 +0x2018:  mov    %eax,(%esp)
082622eb +0x201b:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082622f0 +0x2020:  mov    0x10(%ebp),%eax
082622f3 +0x2023:  mov    %eax,(%esp)
082622f6 +0x2026:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
082622fb +0x202b:  movzwl -0xa(%ebp),%edx
082622ff +0x202f:  movswl %dx,%edx
08262302 +0x2032:  mov    %eax,0x18(%esp)
08262306 +0x2036:  mov    %edx,0x14(%esp)
0826230a +0x203a:  movl   $"return __LINE__: code(%d) size(%d)",0x10(%esp)
08262312 +0x2042:  movl   $0x94,0xc(%esp)
0826231a +0x204a:  movl   $&_ZZN17IPacketDispatcherI29MSG_RIGHT_OF_CHANGE_GROW_TYPE23stRightOfChangeGrowTypeL8ch_state3EE11check_stateEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08262322 +0x2052:  movl   $"PacketDispatcher.h",0x4(%esp)
0826232a +0x205a:  movl   $0x1,(%esp)
08262331 +0x2061:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08262336 +0x2066:  mov    $0x95,%eax
0826233b +0x206b:  jmp    08262342 <+0x2072>
0826233d +0x206d:  mov    $0x0,%eax
08262342 +0x2072:  leave
08262343 +0x2073:  ret
08262344 +0x2074:  push   %ebp
08262345 +0x2075:  mov    %esp,%ebp
08262347 +0x2077:  pop    %ebp
08262348 +0x2078:  ret
08262349 +0x2079:  nop
0826234a +0x207a:  push   %ebp
0826234b +0x207b:  mov    %esp,%ebp
0826234d +0x207d:  sub    $0x18,%esp
08262350 +0x2080:  mov    0x8(%ebp),%eax
08262353 +0x2083:  movl   $&_ZTV17IPacketDispatcherI34MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE9ParamBaseL8ch_state0EE+0x8,(%eax)
08262359 +0x2089:  mov    0x8(%ebp),%eax
0826235c +0x208c:  mov    %eax,(%esp)
0826235f +0x208f:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08262364 +0x2094:  mov    $0x0,%eax
08262369 +0x2099:  test   %al,%al
0826236b +0x209b:  je     08262378 <+0x20a8>
0826236d +0x209d:  mov    0x8(%ebp),%eax
08262370 +0x20a0:  mov    %eax,(%esp)
08262373 +0x20a3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262378 +0x20a8:  leave
08262379 +0x20a9:  ret
0826237a +0x20aa:  push   %ebp
0826237b +0x20ab:  mov    %esp,%ebp
0826237d +0x20ad:  sub    $0x18,%esp
08262380 +0x20b0:  mov    0x8(%ebp),%eax
08262383 +0x20b3:  mov    %eax,(%esp)
08262386 +0x20b6:  call   0826234a <+0x207a>
0826238b +0x20bb:  mov    0x8(%ebp),%eax
0826238e +0x20be:  mov    %eax,(%esp)
08262391 +0x20c1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262396 +0x20c6:  leave
08262397 +0x20c7:  ret
08262398 +0x20c8:  push   %ebp
08262399 +0x20c9:  mov    %esp,%ebp
0826239b +0x20cb:  sub    $0x18,%esp
0826239e +0x20ce:  mov    0x8(%ebp),%eax
082623a1 +0x20d1:  movl   $&_ZTV17IPacketDispatcherI32MSG_UPDATE_CONTRACT_OF_CUBE_INFO26stUpdateContractOfCubeInfoL8ch_state0EE+0x8,(%eax)
082623a7 +0x20d7:  mov    0x8(%ebp),%eax
082623aa +0x20da:  mov    %eax,(%esp)
082623ad +0x20dd:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
082623b2 +0x20e2:  mov    $0x0,%eax
082623b7 +0x20e7:  test   %al,%al
082623b9 +0x20e9:  je     082623c6 <+0x20f6>
082623bb +0x20eb:  mov    0x8(%ebp),%eax
082623be +0x20ee:  mov    %eax,(%esp)
082623c1 +0x20f1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082623c6 +0x20f6:  leave
082623c7 +0x20f7:  ret
082623c8 +0x20f8:  push   %ebp
082623c9 +0x20f9:  mov    %esp,%ebp
082623cb +0x20fb:  sub    $0x18,%esp
082623ce +0x20fe:  mov    0x8(%ebp),%eax
082623d1 +0x2101:  mov    %eax,(%esp)
082623d4 +0x2104:  call   08262398 <+0x20c8>
082623d9 +0x2109:  mov    0x8(%ebp),%eax
082623dc +0x210c:  mov    %eax,(%esp)
082623df +0x210f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082623e4 +0x2114:  leave
082623e5 +0x2115:  ret
082623e6 +0x2116:  push   %ebp
082623e7 +0x2117:  mov    %esp,%ebp
082623e9 +0x2119:  sub    $0x18,%esp
082623ec +0x211c:  mov    0x8(%ebp),%eax
082623ef +0x211f:  movl   $&_ZTV17IPacketDispatcherI42MSG_COMBO_SKILL_EXTENSION_QUICK_SLOT_RESET35stComboSkillExtensionQuickSlotResetL8ch_state3EE+0x8,(%eax)
082623f5 +0x2125:  mov    0x8(%ebp),%eax
082623f8 +0x2128:  mov    %eax,(%esp)
082623fb +0x212b:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08262400 +0x2130:  mov    $0x0,%eax
08262405 +0x2135:  test   %al,%al
08262407 +0x2137:  je     08262414 <+0x2144>
08262409 +0x2139:  mov    0x8(%ebp),%eax
0826240c +0x213c:  mov    %eax,(%esp)
0826240f +0x213f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262414 +0x2144:  leave
08262415 +0x2145:  ret
08262416 +0x2146:  push   %ebp
08262417 +0x2147:  mov    %esp,%ebp
08262419 +0x2149:  sub    $0x18,%esp
0826241c +0x214c:  mov    0x8(%ebp),%eax
0826241f +0x214f:  mov    %eax,(%esp)
08262422 +0x2152:  call   082623e6 <+0x2116>
08262427 +0x2157:  mov    0x8(%ebp),%eax
0826242a +0x215a:  mov    %eax,(%esp)
0826242d +0x215d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262432 +0x2162:  leave
08262433 +0x2163:  ret
08262434 +0x2164:  push   %ebp
08262435 +0x2165:  mov    %esp,%ebp
08262437 +0x2167:  sub    $0x18,%esp
0826243a +0x216a:  mov    0x8(%ebp),%eax
0826243d +0x216d:  movl   $&_ZTV17IPacketDispatcherI15MSG_COMBO_SKILL12stComboSkillL8ch_state3EE+0x8,(%eax)
08262443 +0x2173:  mov    0x8(%ebp),%eax
08262446 +0x2176:  mov    %eax,(%esp)
08262449 +0x2179:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
0826244e +0x217e:  mov    $0x0,%eax
08262453 +0x2183:  test   %al,%al
08262455 +0x2185:  je     08262462 <+0x2192>
08262457 +0x2187:  mov    0x8(%ebp),%eax
0826245a +0x218a:  mov    %eax,(%esp)
0826245d +0x218d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262462 +0x2192:  leave
08262463 +0x2193:  ret
08262464 +0x2194:  push   %ebp
08262465 +0x2195:  mov    %esp,%ebp
08262467 +0x2197:  sub    $0x18,%esp
0826246a +0x219a:  mov    0x8(%ebp),%eax
0826246d +0x219d:  mov    %eax,(%esp)
08262470 +0x21a0:  call   08262434 <+0x2164>
08262475 +0x21a5:  mov    0x8(%ebp),%eax
08262478 +0x21a8:  mov    %eax,(%esp)
0826247b +0x21ab:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262480 +0x21b0:  leave
08262481 +0x21b1:  ret
08262482 +0x21b2:  push   %ebp
08262483 +0x21b3:  mov    %esp,%ebp
08262485 +0x21b5:  sub    $0x18,%esp
08262488 +0x21b8:  mov    0x8(%ebp),%eax
0826248b +0x21bb:  movl   $&_ZTV17IPacketDispatcherI21MSG_SAVE_QUEST_NOTIFY20saveQuestNotifyParamL8ch_state3EE+0x8,(%eax)
08262491 +0x21c1:  mov    0x8(%ebp),%eax
08262494 +0x21c4:  mov    %eax,(%esp)
08262497 +0x21c7:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
0826249c +0x21cc:  mov    $0x0,%eax
082624a1 +0x21d1:  test   %al,%al
082624a3 +0x21d3:  je     082624b0 <+0x21e0>
082624a5 +0x21d5:  mov    0x8(%ebp),%eax
082624a8 +0x21d8:  mov    %eax,(%esp)
082624ab +0x21db:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082624b0 +0x21e0:  leave
082624b1 +0x21e1:  ret
082624b2 +0x21e2:  push   %ebp
082624b3 +0x21e3:  mov    %esp,%ebp
082624b5 +0x21e5:  sub    $0x18,%esp
082624b8 +0x21e8:  mov    0x8(%ebp),%eax
082624bb +0x21eb:  mov    %eax,(%esp)
082624be +0x21ee:  call   08262482 <+0x21b2>
082624c3 +0x21f3:  mov    0x8(%ebp),%eax
082624c6 +0x21f6:  mov    %eax,(%esp)
082624c9 +0x21f9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082624ce +0x21fe:  leave
082624cf +0x21ff:  ret
082624d0 +0x2200:  push   %ebp
082624d1 +0x2201:  mov    %esp,%ebp
082624d3 +0x2203:  sub    $0x18,%esp
082624d6 +0x2206:  mov    0x8(%ebp),%eax
082624d9 +0x2209:  movl   $&_ZTV17IPacketDispatcherI14MSG_BINGO_QUIZ11stBingoQuizL8ch_state3EE+0x8,(%eax)
082624df +0x220f:  mov    0x8(%ebp),%eax
082624e2 +0x2212:  mov    %eax,(%esp)
082624e5 +0x2215:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
082624ea +0x221a:  mov    $0x0,%eax
082624ef +0x221f:  test   %al,%al
082624f1 +0x2221:  je     082624fe <+0x222e>
082624f3 +0x2223:  mov    0x8(%ebp),%eax
082624f6 +0x2226:  mov    %eax,(%esp)
082624f9 +0x2229:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082624fe +0x222e:  leave
082624ff +0x222f:  ret
08262500 +0x2230:  push   %ebp
08262501 +0x2231:  mov    %esp,%ebp
08262503 +0x2233:  sub    $0x18,%esp
08262506 +0x2236:  mov    0x8(%ebp),%eax
08262509 +0x2239:  mov    %eax,(%esp)
0826250c +0x223c:  call   082624d0 <+0x2200>
08262511 +0x2241:  mov    0x8(%ebp),%eax
08262514 +0x2244:  mov    %eax,(%esp)
08262517 +0x2247:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826251c +0x224c:  leave
0826251d +0x224d:  ret
0826251e +0x224e:  push   %ebp
0826251f +0x224f:  mov    %esp,%ebp
08262521 +0x2251:  sub    $0x18,%esp
08262524 +0x2254:  mov    0x8(%ebp),%eax
08262527 +0x2257:  movl   $&_ZTV17IPacketDispatcherI8MSG_BASE13stBingoRewardL8ch_state3EE+0x8,(%eax)
0826252d +0x225d:  mov    0x8(%ebp),%eax
08262530 +0x2260:  mov    %eax,(%esp)
08262533 +0x2263:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08262538 +0x2268:  mov    $0x0,%eax
0826253d +0x226d:  test   %al,%al
0826253f +0x226f:  je     0826254c <+0x227c>
08262541 +0x2271:  mov    0x8(%ebp),%eax
08262544 +0x2274:  mov    %eax,(%esp)
08262547 +0x2277:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826254c +0x227c:  leave
0826254d +0x227d:  ret
0826254e +0x227e:  push   %ebp
0826254f +0x227f:  mov    %esp,%ebp
08262551 +0x2281:  sub    $0x18,%esp
08262554 +0x2284:  mov    0x8(%ebp),%eax
08262557 +0x2287:  mov    %eax,(%esp)
0826255a +0x228a:  call   0826251e <+0x224e>
0826255f +0x228f:  mov    0x8(%ebp),%eax
08262562 +0x2292:  mov    %eax,(%esp)
08262565 +0x2295:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826256a +0x229a:  leave
0826256b +0x229b:  ret
0826256c +0x229c:  push   %ebp
0826256d +0x229d:  mov    %esp,%ebp
0826256f +0x229f:  sub    $0x18,%esp
08262572 +0x22a2:  mov    0x8(%ebp),%eax
08262575 +0x22a5:  movl   $&_ZTV17IPacketDispatcherI24MSG_STACKABLE_ACTION_USE20stStackableActionUseL8ch_state3EE+0x8,(%eax)
0826257b +0x22ab:  mov    0x8(%ebp),%eax
0826257e +0x22ae:  mov    %eax,(%esp)
08262581 +0x22b1:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
08262586 +0x22b6:  mov    $0x0,%eax
0826258b +0x22bb:  test   %al,%al
0826258d +0x22bd:  je     0826259a <+0x22ca>
0826258f +0x22bf:  mov    0x8(%ebp),%eax
08262592 +0x22c2:  mov    %eax,(%esp)
08262595 +0x22c5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826259a +0x22ca:  leave
0826259b +0x22cb:  ret
0826259c +0x22cc:  push   %ebp
0826259d +0x22cd:  mov    %esp,%ebp
0826259f +0x22cf:  sub    $0x18,%esp
082625a2 +0x22d2:  mov    0x8(%ebp),%eax
082625a5 +0x22d5:  mov    %eax,(%esp)
082625a8 +0x22d8:  call   0826256c <+0x229c>
082625ad +0x22dd:  mov    0x8(%ebp),%eax
082625b0 +0x22e0:  mov    %eax,(%esp)
082625b3 +0x22e3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082625b8 +0x22e8:  leave
082625b9 +0x22e9:  ret
082625ba +0x22ea:  push   %ebp
082625bb +0x22eb:  mov    %esp,%ebp
082625bd +0x22ed:  sub    $0x18,%esp
082625c0 +0x22f0:  mov    0x8(%ebp),%eax
082625c3 +0x22f3:  movl   $&_ZTV17IPacketDispatcherI29MSG_RIGHT_OF_CHANGE_GROW_TYPE23stRightOfChangeGrowTypeL8ch_state3EE+0x8,(%eax)
082625c9 +0x22f9:  mov    0x8(%ebp),%eax
082625cc +0x22fc:  mov    %eax,(%esp)
082625cf +0x22ff:  call   08125408 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x16b>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x16b
082625d4 +0x2304:  mov    $0x0,%eax
082625d9 +0x2309:  test   %al,%al
082625db +0x230b:  je     082625e8 <+0x2318>
082625dd +0x230d:  mov    0x8(%ebp),%eax
082625e0 +0x2310:  mov    %eax,(%esp)
082625e3 +0x2313:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082625e8 +0x2318:  leave
082625e9 +0x2319:  ret
082625ea +0x231a:  push   %ebp
082625eb +0x231b:  mov    %esp,%ebp
082625ed +0x231d:  sub    $0x18,%esp
082625f0 +0x2320:  mov    0x8(%ebp),%eax
082625f3 +0x2323:  mov    %eax,(%esp)
082625f6 +0x2326:  call   082625ba <+0x22ea>
082625fb +0x232b:  mov    0x8(%ebp),%eax
082625fe +0x232e:  mov    %eax,(%esp)
08262601 +0x2331:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08262606 +0x2336:  leave
08262607 +0x2337:  ret
08262608 +0x2338:  push   %ebp
08262609 +0x2339:  mov    %esp,%ebp
0826260b +0x233b:  pop    %ebp
0826260c +0x233c:  ret
0826260d +0x233d:  nop
0826260e +0x233e:  push   %ebp
0826260f +0x233f:  mov    %esp,%ebp
08262611 +0x2341:  mov    $0x0,%eax
08262616 +0x2346:  pop    %ebp
08262617 +0x2347:  ret
08262618 +0x2348:  push   %ebp
08262619 +0x2349:  mov    %esp,%ebp
0826261b +0x234b:  pop    %ebp
0826261c +0x234c:  ret
0826261d +0x234d:  nop
0826261e +0x234e:  push   %ebp
0826261f +0x234f:  mov    %esp,%ebp
08262621 +0x2351:  pop    %ebp
08262622 +0x2352:  ret
08262623 +0x2353:  nop
08262624 +0x2354:  push   %ebp
08262625 +0x2355:  mov    %esp,%ebp
08262627 +0x2357:  pop    %ebp
08262628 +0x2358:  ret
08262629 +0x2359:  nop
0826262a +0x235a:  push   %ebp
0826262b +0x235b:  mov    %esp,%ebp
0826262d +0x235d:  pop    %ebp
0826262e +0x235e:  ret
0826262f +0x235f:  nop
08262630 +0x2360:  push   %ebp
08262631 +0x2361:  mov    %esp,%ebp
08262633 +0x2363:  pop    %ebp
08262634 +0x2364:  ret
08262635 +0x2365:  nop
08262636 +0x2366:  push   %ebp
08262637 +0x2367:  mov    %esp,%ebp
08262639 +0x2369:  pop    %ebp
0826263a +0x236a:  ret
0826263b +0x236b:  nop
0826263c +0x236c:  push   %ebp
0826263d +0x236d:  mov    %esp,%ebp
0826263f +0x236f:  pop    %ebp
08262640 +0x2370:  ret
08262641 +0x2371:  nop
08262642 +0x2372:  nop
08262643 +0x2373:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82602d0

/* Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&) */

void Dispatcher_UseRightOfChangeGrowType::_GLOBAL__I_read(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
