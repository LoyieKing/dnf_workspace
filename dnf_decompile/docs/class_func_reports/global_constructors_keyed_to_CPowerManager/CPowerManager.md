# CPowerManager

`_GLOBAL__I__ZN13CPowerManagerC2Ev`

`global constructors keyed to CPowerManager::CPowerManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPowerManager` | `0x08480f82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480f82  _GLOBAL__I__ZN13CPowerManagerC2Ev
#           global constructors keyed to CPowerManager::CPowerManager()
# range [0x08480f82, 0x08483503]
08480f82 +0x0000:  push   %ebp
08480f83 +0x0001:  mov    %esp,%ebp
08480f85 +0x0003:  sub    $0x18,%esp
08480f88 +0x0006:  movl   $0xffff,0x4(%esp)
08480f90 +0x000e:  movl   $0x1,(%esp)
08480f97 +0x0015:  call   08480f42 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08480f9c +0x001a:  leave
08480f9d +0x001b:  ret
08480f9e +0x001c:  push   %ebp
08480f9f +0x001d:  mov    %esp,%ebp
08480fa1 +0x001f:  sub    $0x28,%esp
08480fa4 +0x0022:  mov    0x8(%ebp),%eax
08480fa7 +0x0025:  movb   $0x0,(%eax)
08480faa +0x0028:  mov    0x8(%ebp),%eax
08480fad +0x002b:  movl   $0x0,0x4(%eax)
08480fb4 +0x0032:  mov    0x8(%ebp),%eax
08480fb7 +0x0035:  movb   $0x0,0x26(%eax)
08480fbb +0x0039:  mov    0x8(%ebp),%eax
08480fbe +0x003c:  movb   $0x0,0x27(%eax)
08480fc2 +0x0040:  mov    0x8(%ebp),%eax
08480fc5 +0x0043:  movb   $0x0,0x28(%eax)
08480fc9 +0x0047:  mov    0x8(%ebp),%eax
08480fcc +0x004a:  add    $0x8,%eax
08480fcf +0x004d:  movl   $0x1e,0x8(%esp)
08480fd7 +0x0055:  movl   $0x0,0x4(%esp)
08480fdf +0x005d:  mov    %eax,(%esp)
08480fe2 +0x0060:  call   0807dcc0 <_init+0x5b8>
08480fe7 +0x0065:  mov    0x8(%ebp),%eax
08480fea +0x0068:  add    $0x29,%eax
08480fed +0x006b:  movl   $0x28,0x8(%esp)
08480ff5 +0x0073:  movl   $0x0,0x4(%esp)
08480ffd +0x007b:  mov    %eax,(%esp)
08481000 +0x007e:  call   0807dcc0 <_init+0x5b8>
08481005 +0x0083:  movl   $0x0,-0xc(%ebp)
0848100c +0x008a:  jmp    08481023 <+0xa1>
0848100e +0x008c:  mov    -0xc(%ebp),%edx
08481011 +0x008f:  mov    0x8(%ebp),%eax
08481014 +0x0092:  add    $0x14,%edx
08481017 +0x0095:  movl   $0x0,0x8(%eax,%edx,4)
0848101f +0x009d:  addl   $0x1,-0xc(%ebp)
08481023 +0x00a1:  cmpl   $0xa,-0xc(%ebp)
08481027 +0x00a5:  setle  %al
0848102a +0x00a8:  test   %al,%al
0848102c +0x00aa:  jne    0848100e <+0x8c>
0848102e +0x00ac:  leave
0848102f +0x00ad:  ret
08481030 +0x00ae:  push   %ebp
08481031 +0x00af:  mov    %esp,%ebp
08481033 +0x00b1:  mov    0x8(%ebp),%eax
08481036 +0x00b4:  mov    0xc(%eax),%edx
08481039 +0x00b7:  mov    0xc(%ebp),%eax
0848103c +0x00ba:  mov    0xc(%eax),%eax
0848103f +0x00bd:  cmp    %eax,%edx
08481041 +0x00bf:  jle    0848104a <+0xc8>
08481043 +0x00c1:  mov    $0x1,%eax
08481048 +0x00c6:  jmp    0848104f <+0xcd>
0848104a +0x00c8:  mov    $0x0,%eax
0848104f +0x00cd:  pop    %ebp
08481050 +0x00ce:  ret
08481051 +0x00cf:  nop
08481052 +0x00d0:  push   %ebp
08481053 +0x00d1:  mov    %esp,%ebp
08481055 +0x00d3:  mov    0x8(%ebp),%eax
08481058 +0x00d6:  mov    0x10(%eax),%eax
0848105b +0x00d9:  mov    0x7f(%eax),%eax
0848105e +0x00dc:  pop    %ebp
0848105f +0x00dd:  ret
08481060 +0x00de:  push   %ebp
08481061 +0x00df:  mov    %esp,%ebp
08481063 +0x00e1:  sub    $0x18,%esp
08481066 +0x00e4:  mov    0x8(%ebp),%eax
08481069 +0x00e7:  mov    %eax,(%esp)
0848106c +0x00ea:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08481071 +0x00ef:  mov    0x8(%ebp),%eax
08481074 +0x00f2:  mov    0x10(%eax),%eax
08481077 +0x00f5:  mov    0xc(%ebp),%edx
0848107a +0x00f8:  mov    %edx,0x7f(%eax)
0848107d +0x00fb:  leave
0848107e +0x00fc:  ret
0848107f +0x00fd:  nop
08481080 +0x00fe:  push   %ebp
08481081 +0x00ff:  mov    %esp,%ebp
08481083 +0x0101:  sub    $0x28,%esp
08481086 +0x0104:  mov    0xc(%ebp),%eax
08481089 +0x0107:  mov    %al,-0xc(%ebp)
0848108c +0x010a:  mov    0x8(%ebp),%eax
0848108f +0x010d:  mov    %eax,(%esp)
08481092 +0x0110:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08481097 +0x0115:  mov    0x8(%ebp),%eax
0848109a +0x0118:  mov    0x10(%eax),%eax
0848109d +0x011b:  test   %eax,%eax
0848109f +0x011d:  je     084810b1 <+0x12f>
084810a1 +0x011f:  mov    0x8(%ebp),%eax
084810a4 +0x0122:  mov    0x10(%eax),%eax
084810a7 +0x0125:  movzbl -0xc(%ebp),%edx
084810ab +0x0129:  mov    %dl,0xe8f(%eax)
084810b1 +0x012f:  leave
084810b2 +0x0130:  ret
084810b3 +0x0131:  nop
084810b4 +0x0132:  push   %ebp
084810b5 +0x0133:  mov    %esp,%ebp
084810b7 +0x0135:  mov    0x8(%ebp),%eax
084810ba +0x0138:  mov    0x10(%eax),%eax
084810bd +0x013b:  test   %eax,%eax
084810bf +0x013d:  je     084810cf <+0x14d>
084810c1 +0x013f:  mov    0x8(%ebp),%eax
084810c4 +0x0142:  mov    0x10(%eax),%eax
084810c7 +0x0145:  mov    0xe61(%eax),%eax
084810cd +0x014b:  jmp    084810d4 <+0x152>
084810cf +0x014d:  mov    $0x0,%eax
084810d4 +0x0152:  pop    %ebp
084810d5 +0x0153:  ret
084810d6 +0x0154:  push   %ebp
084810d7 +0x0155:  mov    %esp,%ebp
084810d9 +0x0157:  sub    $0x18,%esp
084810dc +0x015a:  mov    0x8(%ebp),%eax
084810df +0x015d:  mov    %eax,(%esp)
084810e2 +0x0160:  call   0848113e <+0x1bc>
084810e7 +0x0165:  leave
084810e8 +0x0166:  ret
084810e9 +0x0167:  nop
084810ea +0x0168:  push   %ebp
084810eb +0x0169:  mov    %esp,%ebp
084810ed +0x016b:  sub    $0x18,%esp
084810f0 +0x016e:  mov    0x8(%ebp),%eax
084810f3 +0x0171:  add    $0x10,%eax
084810f6 +0x0174:  mov    %eax,(%esp)
084810f9 +0x0177:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084810fe +0x017c:  leave
084810ff +0x017d:  ret
08481100 +0x017e:  push   %ebp
08481101 +0x017f:  mov    %esp,%ebp
08481103 +0x0181:  sub    $0x18,%esp
08481106 +0x0184:  mov    0x8(%ebp),%eax
08481109 +0x0187:  add    $0x10,%eax
0848110c +0x018a:  mov    %eax,(%esp)
0848110f +0x018d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08481114 +0x0192:  leave
08481115 +0x0193:  ret
08481116 +0x0194:  push   %ebp
08481117 +0x0195:  mov    %esp,%ebp
08481119 +0x0197:  sub    $0x18,%esp
0848111c +0x019a:  mov    0x8(%ebp),%eax
0848111f +0x019d:  mov    %eax,(%esp)
08481122 +0x01a0:  call   084814e8 <+0x566>
08481127 +0x01a5:  leave
08481128 +0x01a6:  ret
08481129 +0x01a7:  nop
0848112a +0x01a8:  push   %ebp
0848112b +0x01a9:  mov    %esp,%ebp
0848112d +0x01ab:  sub    $0x18,%esp
08481130 +0x01ae:  mov    0x8(%ebp),%eax
08481133 +0x01b1:  mov    %eax,(%esp)
08481136 +0x01b4:  call   084814fc <+0x57a>
0848113b +0x01b9:  leave
0848113c +0x01ba:  ret
0848113d +0x01bb:  nop
0848113e +0x01bc:  push   %ebp
0848113f +0x01bd:  mov    %esp,%ebp
08481141 +0x01bf:  push   %esi
08481142 +0x01c0:  push   %ebx
08481143 +0x01c1:  sub    $0x10,%esp
08481146 +0x01c4:  mov    0x8(%ebp),%eax
08481149 +0x01c7:  mov    %eax,(%esp)
0848114c +0x01ca:  call   08481566 <+0x5e4>
08481151 +0x01cf:  mov    %eax,0x4(%esp)
08481155 +0x01d3:  mov    0x8(%ebp),%eax
08481158 +0x01d6:  mov    %eax,(%esp)
0848115b +0x01d9:  call   08481510 <+0x58e>
08481160 +0x01de:  jmp    0848117d <+0x1fb>
08481162 +0x01e0:  mov    %edx,%ebx
08481164 +0x01e2:  mov    %eax,%esi
08481166 +0x01e4:  mov    0x8(%ebp),%eax
08481169 +0x01e7:  mov    %eax,(%esp)
0848116c +0x01ea:  call   0848112a <+0x1a8>
08481171 +0x01ef:  mov    %esi,%eax
08481173 +0x01f1:  mov    %ebx,%edx
08481175 +0x01f3:  mov    %eax,(%esp)
08481178 +0x01f6:  call   08ae3750 <_Unwind_Resume>
0848117d +0x01fb:  mov    0x8(%ebp),%eax
08481180 +0x01fe:  mov    %eax,(%esp)
08481183 +0x0201:  call   0848112a <+0x1a8>
08481188 +0x0206:  add    $0x10,%esp
0848118b +0x0209:  pop    %ebx
0848118c +0x020a:  pop    %esi
0848118d +0x020b:  pop    %ebp
0848118e +0x020c:  ret
0848118f +0x020d:  nop
08481190 +0x020e:  push   %ebp
08481191 +0x020f:  mov    %esp,%ebp
08481193 +0x0211:  push   %ebx
08481194 +0x0212:  sub    $0x14,%esp
08481197 +0x0215:  mov    0x8(%ebp),%ebx
0848119a +0x0218:  mov    0xc(%ebp),%eax
0848119d +0x021b:  mov    %eax,0x4(%esp)
084811a1 +0x021f:  mov    %ebx,(%esp)
084811a4 +0x0222:  call   08481572 <+0x5f0>
084811a9 +0x0227:  sub    $0x4,%esp
084811ac +0x022a:  mov    %ebx,%eax
084811ae +0x022c:  mov    -0x4(%ebp),%ebx
084811b1 +0x022f:  leave
084811b2 +0x0230:  ret    $0x4
084811b5 +0x0233:  nop
084811b6 +0x0234:  push   %ebp
084811b7 +0x0235:  mov    %esp,%ebp
084811b9 +0x0237:  push   %ebx
084811ba +0x0238:  sub    $0x14,%esp
084811bd +0x023b:  mov    0x8(%ebp),%ebx
084811c0 +0x023e:  mov    0xc(%ebp),%eax
084811c3 +0x0241:  mov    %eax,0x4(%esp)
084811c7 +0x0245:  mov    %ebx,(%esp)
084811ca +0x0248:  call   08481598 <+0x616>
084811cf +0x024d:  sub    $0x4,%esp
084811d2 +0x0250:  mov    %ebx,%eax
084811d4 +0x0252:  mov    -0x4(%ebp),%ebx
084811d7 +0x0255:  leave
084811d8 +0x0256:  ret    $0x4
084811db +0x0259:  nop
084811dc +0x025a:  push   %ebp
084811dd +0x025b:  mov    %esp,%ebp
084811df +0x025d:  mov    0x8(%ebp),%eax
084811e2 +0x0260:  mov    (%eax),%edx
084811e4 +0x0262:  mov    0xc(%ebp),%eax
084811e7 +0x0265:  mov    (%eax),%eax
084811e9 +0x0267:  cmp    %eax,%edx
084811eb +0x0269:  setne  %al
084811ee +0x026c:  pop    %ebp
084811ef +0x026d:  ret
084811f0 +0x026e:  push   %ebp
084811f1 +0x026f:  mov    %esp,%ebp
084811f3 +0x0271:  mov    0x8(%ebp),%eax
084811f6 +0x0274:  mov    (%eax),%eax
084811f8 +0x0276:  add    $0x10,%eax
084811fb +0x0279:  pop    %ebp
084811fc +0x027a:  ret
084811fd +0x027b:  nop
084811fe +0x027c:  push   %ebp
084811ff +0x027d:  mov    %esp,%ebp
08481201 +0x027f:  sub    $0x18,%esp
08481204 +0x0282:  mov    0x8(%ebp),%eax
08481207 +0x0285:  mov    (%eax),%eax
08481209 +0x0287:  mov    %eax,(%esp)
0848120c +0x028a:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08481211 +0x028f:  mov    0x8(%ebp),%edx
08481214 +0x0292:  mov    %eax,(%edx)
08481216 +0x0294:  mov    0x8(%ebp),%eax
08481219 +0x0297:  leave
0848121a +0x0298:  ret
0848121b +0x0299:  nop
0848121c +0x029a:  push   %ebp
0848121d +0x029b:  mov    %esp,%ebp
0848121f +0x029d:  sub    $0x18,%esp
08481222 +0x02a0:  mov    0x8(%ebp),%eax
08481225 +0x02a3:  mov    %eax,(%esp)
08481228 +0x02a6:  call   084815be <+0x63c>
0848122d +0x02ab:  leave
0848122e +0x02ac:  ret
0848122f +0x02ad:  nop
08481230 +0x02ae:  push   %ebp
08481231 +0x02af:  mov    %esp,%ebp
08481233 +0x02b1:  push   %ebx
08481234 +0x02b2:  sub    $0x14,%esp
08481237 +0x02b5:  mov    0x8(%ebp),%ebx
0848123a +0x02b8:  mov    0xc(%ebp),%eax
0848123d +0x02bb:  mov    0x10(%ebp),%edx
08481240 +0x02be:  mov    %edx,0x8(%esp)
08481244 +0x02c2:  mov    %eax,0x4(%esp)
08481248 +0x02c6:  mov    %ebx,(%esp)
0848124b +0x02c9:  call   08481634 <+0x6b2>
08481250 +0x02ce:  sub    $0x4,%esp
08481253 +0x02d1:  mov    %ebx,%eax
08481255 +0x02d3:  mov    -0x4(%ebp),%ebx
08481258 +0x02d6:  leave
08481259 +0x02d7:  ret    $0x4
0848125c +0x02da:  push   %ebp
0848125d +0x02db:  mov    %esp,%ebp
0848125f +0x02dd:  push   %esi
08481260 +0x02de:  push   %ebx
08481261 +0x02df:  sub    $0x10,%esp
08481264 +0x02e2:  mov    0x8(%ebp),%esi
08481267 +0x02e5:  mov    0x10(%ebp),%eax
0848126a +0x02e8:  mov    %eax,(%esp)
0848126d +0x02eb:  call   084816f2 <+0x770>
08481272 +0x02f0:  mov    %eax,%ebx
08481274 +0x02f2:  mov    0xc(%ebp),%eax
08481277 +0x02f5:  mov    %eax,(%esp)
0848127a +0x02f8:  call   08238f75 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe61f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe61f
0848127f +0x02fd:  mov    %ebx,0x8(%esp)
08481283 +0x0301:  mov    %eax,0x4(%esp)
08481287 +0x0305:  mov    %esi,(%esp)
0848128a +0x0308:  call   084816fa <+0x778>
0848128f +0x030d:  mov    %esi,%eax
08481291 +0x030f:  add    $0x10,%esp
08481294 +0x0312:  pop    %ebx
08481295 +0x0313:  pop    %esi
08481296 +0x0314:  pop    %ebp
08481297 +0x0315:  ret    $0x4
0848129a +0x0318:  push   %ebp
0848129b +0x0319:  mov    %esp,%ebp
0848129d +0x031b:  sub    $0x18,%esp
084812a0 +0x031e:  mov    0xc(%ebp),%eax
084812a3 +0x0321:  mov    %eax,(%esp)
084812a6 +0x0324:  call   08112442 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1954>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1954
084812ab +0x0329:  movzwl (%eax),%eax
084812ae +0x032c:  movzwl %ax,%edx
084812b1 +0x032f:  mov    0x8(%ebp),%eax
084812b4 +0x0332:  mov    %edx,(%eax)
084812b6 +0x0334:  mov    0xc(%ebp),%eax
084812b9 +0x0337:  add    $0x4,%eax
084812bc +0x033a:  mov    %eax,(%esp)
084812bf +0x033d:  call   08481729 <+0x7a7>
084812c4 +0x0342:  mov    (%eax),%edx
084812c6 +0x0344:  mov    0x8(%ebp),%eax
084812c9 +0x0347:  mov    %edx,0x4(%eax)
084812cc +0x034a:  leave
084812cd +0x034b:  ret
084812ce +0x034c:  push   %ebp
084812cf +0x034d:  mov    %esp,%ebp
084812d1 +0x034f:  push   %ebx
084812d2 +0x0350:  sub    $0x14,%esp
084812d5 +0x0353:  mov    0x8(%ebp),%ebx
084812d8 +0x0356:  mov    0xc(%ebp),%eax
084812db +0x0359:  mov    0x10(%ebp),%edx
084812de +0x035c:  mov    %edx,0x8(%esp)
084812e2 +0x0360:  mov    %eax,0x4(%esp)
084812e6 +0x0364:  mov    %ebx,(%esp)
084812e9 +0x0367:  call   08481732 <+0x7b0>
084812ee +0x036c:  sub    $0x4,%esp
084812f1 +0x036f:  mov    %ebx,%eax
084812f3 +0x0371:  mov    -0x4(%ebp),%ebx
084812f6 +0x0374:  leave
084812f7 +0x0375:  ret    $0x4
084812fa +0x0378:  push   %ebp
084812fb +0x0379:  mov    %esp,%ebp
084812fd +0x037b:  sub    $0x18,%esp
08481300 +0x037e:  mov    0x8(%ebp),%eax
08481303 +0x0381:  mov    %eax,(%esp)
08481306 +0x0384:  call   08481916 <+0x994>
0848130b +0x0389:  leave
0848130c +0x038a:  ret
0848130d +0x038b:  nop
0848130e +0x038c:  push   %ebp
0848130f +0x038d:  mov    %esp,%ebp
08481311 +0x038f:  push   %esi
08481312 +0x0390:  push   %ebx
08481313 +0x0391:  sub    $0x10,%esp
08481316 +0x0394:  mov    0x8(%ebp),%eax
08481319 +0x0397:  mov    %eax,(%esp)
0848131c +0x039a:  call   08481992 <+0xa10>
08481321 +0x039f:  mov    0x8(%ebp),%edx
08481324 +0x03a2:  mov    0x4(%edx),%ecx
08481327 +0x03a5:  mov    0x8(%ebp),%edx
0848132a +0x03a8:  mov    (%edx),%edx
0848132c +0x03aa:  mov    %eax,0x8(%esp)
08481330 +0x03ae:  mov    %ecx,0x4(%esp)
08481334 +0x03b2:  mov    %edx,(%esp)
08481337 +0x03b5:  call   0848199a <+0xa18>
0848133c +0x03ba:  jmp    08481359 <+0x3d7>
0848133e +0x03bc:  mov    %edx,%ebx
08481340 +0x03be:  mov    %eax,%esi
08481342 +0x03c0:  mov    0x8(%ebp),%eax
08481345 +0x03c3:  mov    %eax,(%esp)
08481348 +0x03c6:  call   0848192a <+0x9a8>
0848134d +0x03cb:  mov    %esi,%eax
0848134f +0x03cd:  mov    %ebx,%edx
08481351 +0x03cf:  mov    %eax,(%esp)
08481354 +0x03d2:  call   08ae3750 <_Unwind_Resume>
08481359 +0x03d7:  mov    0x8(%ebp),%eax
0848135c +0x03da:  mov    %eax,(%esp)
0848135f +0x03dd:  call   0848192a <+0x9a8>
08481364 +0x03e2:  add    $0x10,%esp
08481367 +0x03e5:  pop    %ebx
08481368 +0x03e6:  pop    %esi
08481369 +0x03e7:  pop    %ebp
0848136a +0x03e8:  ret
0848136b +0x03e9:  nop
0848136c +0x03ea:  push   %ebp
0848136d +0x03eb:  mov    %esp,%ebp
0848136f +0x03ed:  sub    $0x28,%esp
08481372 +0x03f0:  mov    0x8(%ebp),%eax
08481375 +0x03f3:  mov    0x4(%eax),%edx
08481378 +0x03f6:  mov    0x8(%ebp),%eax
0848137b +0x03f9:  mov    0x8(%eax),%eax
0848137e +0x03fc:  cmp    %eax,%edx
08481380 +0x03fe:  je     084813af <+0x42d>
08481382 +0x0400:  mov    0x8(%ebp),%eax
08481385 +0x0403:  mov    0x4(%eax),%edx
08481388 +0x0406:  mov    0x8(%ebp),%eax
0848138b +0x0409:  mov    0xc(%ebp),%ecx
0848138e +0x040c:  mov    %ecx,0x8(%esp)
08481392 +0x0410:  mov    %edx,0x4(%esp)
08481396 +0x0414:  mov    %eax,(%esp)
08481399 +0x0417:  call   084819b4 <+0xa32>
0848139e +0x041c:  mov    0x8(%ebp),%eax
084813a1 +0x041f:  mov    0x4(%eax),%eax
084813a4 +0x0422:  lea    0x4(%eax),%edx
084813a7 +0x0425:  mov    0x8(%ebp),%eax
084813aa +0x0428:  mov    %edx,0x4(%eax)
084813ad +0x042b:  jmp    084813dd <+0x45b>
084813af +0x042d:  lea    -0xc(%ebp),%eax
084813b2 +0x0430:  mov    0x8(%ebp),%edx
084813b5 +0x0433:  mov    %edx,0x4(%esp)
084813b9 +0x0437:  mov    %eax,(%esp)
084813bc +0x043a:  call   08481404 <+0x482>
084813c1 +0x043f:  sub    $0x4,%esp
084813c4 +0x0442:  mov    0xc(%ebp),%eax
084813c7 +0x0445:  mov    %eax,0x8(%esp)
084813cb +0x0449:  mov    -0xc(%ebp),%eax
084813ce +0x044c:  mov    %eax,0x4(%esp)
084813d2 +0x0450:  mov    0x8(%ebp),%eax
084813d5 +0x0453:  mov    %eax,(%esp)
084813d8 +0x0456:  call   084819dc <+0xa5a>
084813dd +0x045b:  leave
084813de +0x045c:  ret
084813df +0x045d:  nop
084813e0 +0x045e:  push   %ebp
084813e1 +0x045f:  mov    %esp,%ebp
084813e3 +0x0461:  push   %ebx
084813e4 +0x0462:  sub    $0x14,%esp
084813e7 +0x0465:  mov    0x8(%ebp),%ebx
084813ea +0x0468:  mov    0xc(%ebp),%eax
084813ed +0x046b:  mov    %eax,0x4(%esp)
084813f1 +0x046f:  mov    %ebx,(%esp)
084813f4 +0x0472:  call   08481c96 <+0xd14>
084813f9 +0x0477:  mov    %ebx,%eax
084813fb +0x0479:  add    $0x14,%esp
084813fe +0x047c:  pop    %ebx
084813ff +0x047d:  pop    %ebp
08481400 +0x047e:  ret    $0x4
08481403 +0x0481:  nop
08481404 +0x0482:  push   %ebp
08481405 +0x0483:  mov    %esp,%ebp
08481407 +0x0485:  push   %ebx
08481408 +0x0486:  sub    $0x14,%esp
0848140b +0x0489:  mov    0x8(%ebp),%ebx
0848140e +0x048c:  mov    0xc(%ebp),%eax
08481411 +0x048f:  add    $0x4,%eax
08481414 +0x0492:  mov    %eax,0x4(%esp)
08481418 +0x0496:  mov    %ebx,(%esp)
0848141b +0x0499:  call   08481c96 <+0xd14>
08481420 +0x049e:  mov    %ebx,%eax
08481422 +0x04a0:  add    $0x14,%esp
08481425 +0x04a3:  pop    %ebx
08481426 +0x04a4:  pop    %ebp
08481427 +0x04a5:  ret    $0x4
0848142a +0x04a8:  push   %ebp
0848142b +0x04a9:  mov    %esp,%ebp
0848142d +0x04ab:  sub    $0x18,%esp
08481430 +0x04ae:  lea    0xc(%ebp),%eax
08481433 +0x04b1:  mov    %eax,0x4(%esp)
08481437 +0x04b5:  lea    0x8(%ebp),%eax
0848143a +0x04b8:  mov    %eax,(%esp)
0848143d +0x04bb:  call   0848149b <+0x519>
08481442 +0x04c0:  test   %al,%al
08481444 +0x04c2:  je     08481499 <+0x517>
08481446 +0x04c4:  lea    0x8(%ebp),%eax
08481449 +0x04c7:  mov    %eax,0x4(%esp)
0848144d +0x04cb:  lea    0xc(%ebp),%eax
08481450 +0x04ce:  mov    %eax,(%esp)
08481453 +0x04d1:  call   08481ca5 <+0xd23>
08481458 +0x04d6:  mov    %eax,(%esp)
0848145b +0x04d9:  call   08134415 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c
08481460 +0x04de:  lea    (%eax,%eax,1),%edx
08481463 +0x04e1:  mov    0x10(%ebp),%eax
08481466 +0x04e4:  mov    %eax,0xc(%esp)
0848146a +0x04e8:  mov    %edx,0x8(%esp)
0848146e +0x04ec:  mov    0xc(%ebp),%eax
08481471 +0x04ef:  mov    %eax,0x4(%esp)
08481475 +0x04f3:  mov    0x8(%ebp),%eax
08481478 +0x04f6:  mov    %eax,(%esp)
0848147b +0x04f9:  call   08481cd7 <+0xd55>
08481480 +0x04fe:  mov    0x10(%ebp),%eax
08481483 +0x0501:  mov    %eax,0x8(%esp)
08481487 +0x0505:  mov    0xc(%ebp),%eax
0848148a +0x0508:  mov    %eax,0x4(%esp)
0848148e +0x050c:  mov    0x8(%ebp),%eax
08481491 +0x050f:  mov    %eax,(%esp)
08481494 +0x0512:  call   08481e26 <+0xea4>
08481499 +0x0517:  leave
0848149a +0x0518:  ret
0848149b +0x0519:  push   %ebp
0848149c +0x051a:  mov    %esp,%ebp
0848149e +0x051c:  push   %ebx
0848149f +0x051d:  sub    $0x14,%esp
084814a2 +0x0520:  mov    0x8(%ebp),%eax
084814a5 +0x0523:  mov    %eax,(%esp)
084814a8 +0x0526:  call   08481ede <+0xf5c>
084814ad +0x052b:  mov    (%eax),%ebx
084814af +0x052d:  mov    0xc(%ebp),%eax
084814b2 +0x0530:  mov    %eax,(%esp)
084814b5 +0x0533:  call   08481ede <+0xf5c>
084814ba +0x0538:  mov    (%eax),%eax
084814bc +0x053a:  cmp    %eax,%ebx
084814be +0x053c:  setne  %al
084814c1 +0x053f:  add    $0x14,%esp
084814c4 +0x0542:  pop    %ebx
084814c5 +0x0543:  pop    %ebp
084814c6 +0x0544:  ret
084814c7 +0x0545:  nop
084814c8 +0x0546:  push   %ebp
084814c9 +0x0547:  mov    %esp,%ebp
084814cb +0x0549:  mov    0x8(%ebp),%eax
084814ce +0x054c:  mov    (%eax),%eax
084814d0 +0x054e:  pop    %ebp
084814d1 +0x054f:  ret
084814d2 +0x0550:  push   %ebp
084814d3 +0x0551:  mov    %esp,%ebp
084814d5 +0x0553:  mov    0x8(%ebp),%eax
084814d8 +0x0556:  mov    (%eax),%eax
084814da +0x0558:  lea    0x4(%eax),%edx
084814dd +0x055b:  mov    0x8(%ebp),%eax
084814e0 +0x055e:  mov    %edx,(%eax)
084814e2 +0x0560:  mov    0x8(%ebp),%eax
084814e5 +0x0563:  pop    %ebp
084814e6 +0x0564:  ret
084814e7 +0x0565:  nop
084814e8 +0x0566:  push   %ebp
084814e9 +0x0567:  mov    %esp,%ebp
084814eb +0x0569:  sub    $0x18,%esp
084814ee +0x056c:  mov    0x8(%ebp),%eax
084814f1 +0x056f:  mov    %eax,(%esp)
084814f4 +0x0572:  call   08481ee6 <+0xf64>
084814f9 +0x0577:  leave
084814fa +0x0578:  ret
084814fb +0x0579:  nop
084814fc +0x057a:  push   %ebp
084814fd +0x057b:  mov    %esp,%ebp
084814ff +0x057d:  sub    $0x18,%esp
08481502 +0x0580:  mov    0x8(%ebp),%eax
08481505 +0x0583:  mov    %eax,(%esp)
08481508 +0x0586:  call   08481f36 <+0xfb4>
0848150d +0x058b:  leave
0848150e +0x058c:  ret
0848150f +0x058d:  nop
08481510 +0x058e:  push   %ebp
08481511 +0x058f:  mov    %esp,%ebp
08481513 +0x0591:  sub    $0x28,%esp
08481516 +0x0594:  jmp    08481558 <+0x5d6>
08481518 +0x0596:  mov    0xc(%ebp),%eax
0848151b +0x0599:  mov    %eax,(%esp)
0848151e +0x059c:  call   08481f3b <+0xfb9>
08481523 +0x05a1:  mov    %eax,0x4(%esp)
08481527 +0x05a5:  mov    0x8(%ebp),%eax
0848152a +0x05a8:  mov    %eax,(%esp)
0848152d +0x05ab:  call   08481510 <+0x58e>
08481532 +0x05b0:  mov    0xc(%ebp),%eax
08481535 +0x05b3:  mov    %eax,(%esp)
08481538 +0x05b6:  call   08481f46 <+0xfc4>
0848153d +0x05bb:  mov    %eax,-0xc(%ebp)
08481540 +0x05be:  mov    0xc(%ebp),%eax
08481543 +0x05c1:  mov    %eax,0x4(%esp)
08481547 +0x05c5:  mov    0x8(%ebp),%eax
0848154a +0x05c8:  mov    %eax,(%esp)
0848154d +0x05cb:  call   08481f52 <+0xfd0>
08481552 +0x05d0:  mov    -0xc(%ebp),%eax
08481555 +0x05d3:  mov    %eax,0xc(%ebp)
08481558 +0x05d6:  cmpl   $0x0,0xc(%ebp)
0848155c +0x05da:  setne  %al
0848155f +0x05dd:  test   %al,%al
08481561 +0x05df:  jne    08481518 <+0x596>
08481563 +0x05e1:  leave
08481564 +0x05e2:  ret
08481565 +0x05e3:  nop
08481566 +0x05e4:  push   %ebp
08481567 +0x05e5:  mov    %esp,%ebp
08481569 +0x05e7:  mov    0x8(%ebp),%eax
0848156c +0x05ea:  mov    0x8(%eax),%eax
0848156f +0x05ed:  pop    %ebp
08481570 +0x05ee:  ret
08481571 +0x05ef:  nop
08481572 +0x05f0:  push   %ebp
08481573 +0x05f1:  mov    %esp,%ebp
08481575 +0x05f3:  push   %ebx
08481576 +0x05f4:  sub    $0x14,%esp
08481579 +0x05f7:  mov    0x8(%ebp),%ebx
0848157c +0x05fa:  mov    0xc(%ebp),%eax
0848157f +0x05fd:  mov    0xc(%eax),%eax
08481582 +0x0600:  mov    %eax,0x4(%esp)
08481586 +0x0604:  mov    %ebx,(%esp)
08481589 +0x0607:  call   08481f86 <+0x1004>
0848158e +0x060c:  mov    %ebx,%eax
08481590 +0x060e:  add    $0x14,%esp
08481593 +0x0611:  pop    %ebx
08481594 +0x0612:  pop    %ebp
08481595 +0x0613:  ret    $0x4
08481598 +0x0616:  push   %ebp
08481599 +0x0617:  mov    %esp,%ebp
0848159b +0x0619:  push   %ebx
0848159c +0x061a:  sub    $0x14,%esp
0848159f +0x061d:  mov    0x8(%ebp),%ebx
084815a2 +0x0620:  mov    0xc(%ebp),%eax
084815a5 +0x0623:  add    $0x4,%eax
084815a8 +0x0626:  mov    %eax,0x4(%esp)
084815ac +0x062a:  mov    %ebx,(%esp)
084815af +0x062d:  call   08481f86 <+0x1004>
084815b4 +0x0632:  mov    %ebx,%eax
084815b6 +0x0634:  add    $0x14,%esp
084815b9 +0x0637:  pop    %ebx
084815ba +0x0638:  pop    %ebp
084815bb +0x0639:  ret    $0x4
084815be +0x063c:  push   %ebp
084815bf +0x063d:  mov    %esp,%ebp
084815c1 +0x063f:  push   %ebx
084815c2 +0x0640:  sub    $0x14,%esp
084815c5 +0x0643:  mov    0x8(%ebp),%eax
084815c8 +0x0646:  mov    %eax,(%esp)
084815cb +0x0649:  call   08481566 <+0x5e4>
084815d0 +0x064e:  mov    %eax,0x4(%esp)
084815d4 +0x0652:  mov    0x8(%ebp),%eax
084815d7 +0x0655:  mov    %eax,(%esp)
084815da +0x0658:  call   08481510 <+0x58e>
084815df +0x065d:  mov    0x8(%ebp),%eax
084815e2 +0x0660:  mov    %eax,(%esp)
084815e5 +0x0663:  call   08481fa0 <+0x101e>
084815ea +0x0668:  mov    %eax,%ebx
084815ec +0x066a:  mov    0x8(%ebp),%eax
084815ef +0x066d:  mov    %eax,(%esp)
084815f2 +0x0670:  call   08481f94 <+0x1012>
084815f7 +0x0675:  mov    %eax,(%ebx)
084815f9 +0x0677:  mov    0x8(%ebp),%eax
084815fc +0x067a:  mov    %eax,(%esp)
084815ff +0x067d:  call   08481fac <+0x102a>
08481604 +0x0682:  movl   $0x0,(%eax)
0848160a +0x0688:  mov    0x8(%ebp),%eax
0848160d +0x068b:  mov    %eax,(%esp)
08481610 +0x068e:  call   08481fb8 <+0x1036>
08481615 +0x0693:  mov    %eax,%ebx
08481617 +0x0695:  mov    0x8(%ebp),%eax
0848161a +0x0698:  mov    %eax,(%esp)
0848161d +0x069b:  call   08481f94 <+0x1012>
08481622 +0x06a0:  mov    %eax,(%ebx)
08481624 +0x06a2:  mov    0x8(%ebp),%eax
08481627 +0x06a5:  movl   $0x0,0x14(%eax)
0848162e +0x06ac:  add    $0x14,%esp
08481631 +0x06af:  pop    %ebx
08481632 +0x06b0:  pop    %ebp
08481633 +0x06b1:  ret
08481634 +0x06b2:  push   %ebp
08481635 +0x06b3:  mov    %esp,%ebp
08481637 +0x06b5:  push   %esi
08481638 +0x06b6:  push   %ebx
08481639 +0x06b7:  sub    $0x30,%esp
0848163c +0x06ba:  mov    0x8(%ebp),%ebx
0848163f +0x06bd:  mov    0xc(%ebp),%eax
08481642 +0x06c0:  mov    %eax,(%esp)
08481645 +0x06c3:  call   08481f94 <+0x1012>
0848164a +0x06c8:  mov    %eax,%esi
0848164c +0x06ca:  mov    0xc(%ebp),%eax
0848164f +0x06cd:  mov    %eax,(%esp)
08481652 +0x06d0:  call   08481566 <+0x5e4>
08481657 +0x06d5:  lea    -0x10(%ebp),%edx
0848165a +0x06d8:  mov    0x10(%ebp),%ecx
0848165d +0x06db:  mov    %ecx,0x10(%esp)
08481661 +0x06df:  mov    %esi,0xc(%esp)
08481665 +0x06e3:  mov    %eax,0x8(%esp)
08481669 +0x06e7:  mov    0xc(%ebp),%eax
0848166c +0x06ea:  mov    %eax,0x4(%esp)
08481670 +0x06ee:  mov    %edx,(%esp)
08481673 +0x06f1:  call   08481fc4 <+0x1042>
08481678 +0x06f6:  sub    $0x4,%esp
0848167b +0x06f9:  lea    -0xc(%ebp),%eax
0848167e +0x06fc:  mov    0xc(%ebp),%edx
08481681 +0x06ff:  mov    %edx,0x4(%esp)
08481685 +0x0703:  mov    %eax,(%esp)
08481688 +0x0706:  call   08481598 <+0x616>
0848168d +0x070b:  sub    $0x4,%esp
08481690 +0x070e:  lea    -0xc(%ebp),%eax
08481693 +0x0711:  mov    %eax,0x4(%esp)
08481697 +0x0715:  lea    -0x10(%ebp),%eax
0848169a +0x0718:  mov    %eax,(%esp)
0848169d +0x071b:  call   08482062 <+0x10e0>
084816a2 +0x0720:  test   %al,%al
084816a4 +0x0722:  jne    084816cb <+0x749>
084816a6 +0x0724:  mov    -0x10(%ebp),%eax
084816a9 +0x0727:  mov    %eax,(%esp)
084816ac +0x072a:  call   08482040 <+0x10be>
084816b1 +0x072f:  mov    0xc(%ebp),%edx
084816b4 +0x0732:  mov    %eax,0x8(%esp)
084816b8 +0x0736:  mov    0x10(%ebp),%eax
084816bb +0x0739:  mov    %eax,0x4(%esp)
084816bf +0x073d:  mov    %edx,(%esp)
084816c2 +0x0740:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
084816c7 +0x0745:  test   %al,%al
084816c9 +0x0747:  je     084816df <+0x75d>
084816cb +0x0749:  mov    0xc(%ebp),%eax
084816ce +0x074c:  mov    %eax,0x4(%esp)
084816d2 +0x0750:  mov    %ebx,(%esp)
084816d5 +0x0753:  call   08481598 <+0x616>
084816da +0x0758:  sub    $0x4,%esp
084816dd +0x075b:  jmp    084816e4 <+0x762>
084816df +0x075d:  mov    -0x10(%ebp),%eax
084816e2 +0x0760:  mov    %eax,(%ebx)
084816e4 +0x0762:  mov    %ebx,%eax
084816e6 +0x0764:  lea    -0x8(%ebp),%esp
084816e9 +0x0767:  add    $0x0,%esp
084816ec +0x076a:  pop    %ebx
084816ed +0x076b:  pop    %esi
084816ee +0x076c:  pop    %ebp
084816ef +0x076d:  ret    $0x4
084816f2 +0x0770:  push   %ebp
084816f3 +0x0771:  mov    %esp,%ebp
084816f5 +0x0773:  mov    0x8(%ebp),%eax
084816f8 +0x0776:  pop    %ebp
084816f9 +0x0777:  ret
084816fa +0x0778:  push   %ebp
084816fb +0x0779:  mov    %esp,%ebp
084816fd +0x077b:  sub    $0x18,%esp
08481700 +0x077e:  mov    0xc(%ebp),%eax
08481703 +0x0781:  mov    %eax,(%esp)
08481706 +0x0784:  call   08238f75 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe61f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe61f
0848170b +0x0789:  movzwl (%eax),%edx
0848170e +0x078c:  mov    0x8(%ebp),%eax
08481711 +0x078f:  mov    %dx,(%eax)
08481714 +0x0792:  mov    0x10(%ebp),%eax
08481717 +0x0795:  mov    %eax,(%esp)
0848171a +0x0798:  call   084816f2 <+0x770>
0848171f +0x079d:  mov    (%eax),%edx
08481721 +0x079f:  mov    0x8(%ebp),%eax
08481724 +0x07a2:  mov    %edx,0x4(%eax)
08481727 +0x07a5:  leave
08481728 +0x07a6:  ret
08481729 +0x07a7:  push   %ebp
0848172a +0x07a8:  mov    %esp,%ebp
0848172c +0x07aa:  mov    0x8(%ebp),%eax
0848172f +0x07ad:  pop    %ebp
08481730 +0x07ae:  ret
08481731 +0x07af:  nop
08481732 +0x07b0:  push   %ebp
08481733 +0x07b1:  mov    %esp,%ebp
08481735 +0x07b3:  push   %esi
08481736 +0x07b4:  push   %ebx
08481737 +0x07b5:  sub    $0x50,%esp
0848173a +0x07b8:  mov    0x8(%ebp),%ebx
0848173d +0x07bb:  mov    0xc(%ebp),%eax
08481740 +0x07be:  mov    %eax,(%esp)
08481743 +0x07c1:  call   08481566 <+0x5e4>
08481748 +0x07c6:  mov    %eax,-0x14(%ebp)
0848174b +0x07c9:  mov    0xc(%ebp),%eax
0848174e +0x07cc:  mov    %eax,(%esp)
08481751 +0x07cf:  call   08481f94 <+0x1012>
08481756 +0x07d4:  mov    %eax,-0x10(%ebp)
08481759 +0x07d7:  movb   $0x1,-0x9(%ebp)
0848175d +0x07db:  jmp    084817bb <+0x839>
0848175f +0x07dd:  mov    -0x14(%ebp),%eax
08481762 +0x07e0:  mov    %eax,-0x10(%ebp)
08481765 +0x07e3:  mov    -0x14(%ebp),%eax
08481768 +0x07e6:  mov    %eax,(%esp)
0848176b +0x07e9:  call   0848207e <+0x10fc>
08481770 +0x07ee:  mov    %eax,%esi
08481772 +0x07f0:  mov    0x10(%ebp),%eax
08481775 +0x07f3:  mov    %eax,0x4(%esp)
08481779 +0x07f7:  lea    -0x2d(%ebp),%eax
0848177c +0x07fa:  mov    %eax,(%esp)
0848177f +0x07fd:  call   08482076 <+0x10f4>
08481784 +0x0802:  mov    0xc(%ebp),%edx
08481787 +0x0805:  mov    %esi,0x8(%esp)
0848178b +0x0809:  mov    %eax,0x4(%esp)
0848178f +0x080d:  mov    %edx,(%esp)
08481792 +0x0810:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08481797 +0x0815:  mov    %al,-0x9(%ebp)
0848179a +0x0818:  cmpb   $0x0,-0x9(%ebp)
0848179e +0x081c:  je     084817ad <+0x82b>
084817a0 +0x081e:  mov    -0x14(%ebp),%eax
084817a3 +0x0821:  mov    %eax,(%esp)
084817a6 +0x0824:  call   08481f46 <+0xfc4>
084817ab +0x0829:  jmp    084817b8 <+0x836>
084817ad +0x082b:  mov    -0x14(%ebp),%eax
084817b0 +0x082e:  mov    %eax,(%esp)
084817b3 +0x0831:  call   08481f3b <+0xfb9>
084817b8 +0x0836:  mov    %eax,-0x14(%ebp)
084817bb +0x0839:  cmpl   $0x0,-0x14(%ebp)
084817bf +0x083d:  setne  %al
084817c2 +0x0840:  test   %al,%al
084817c4 +0x0842:  jne    0848175f <+0x7dd>
084817c6 +0x0844:  mov    -0x10(%ebp),%eax
084817c9 +0x0847:  mov    %eax,0x4(%esp)
084817cd +0x084b:  lea    -0x34(%ebp),%eax
084817d0 +0x084e:  mov    %eax,(%esp)
084817d3 +0x0851:  call   08481f86 <+0x1004>
084817d8 +0x0856:  cmpb   $0x0,-0x9(%ebp)
084817dc +0x085a:  je     0848185d <+0x8db>
084817de +0x085c:  lea    -0x2c(%ebp),%eax
084817e1 +0x085f:  mov    0xc(%ebp),%edx
084817e4 +0x0862:  mov    %edx,0x4(%esp)
084817e8 +0x0866:  mov    %eax,(%esp)
084817eb +0x0869:  call   08481572 <+0x5f0>
084817f0 +0x086e:  sub    $0x4,%esp
084817f3 +0x0871:  lea    -0x2c(%ebp),%eax
084817f6 +0x0874:  mov    %eax,0x4(%esp)
084817fa +0x0878:  lea    -0x34(%ebp),%eax
084817fd +0x087b:  mov    %eax,(%esp)
08481800 +0x087e:  call   08482062 <+0x10e0>
08481805 +0x0883:  test   %al,%al
08481807 +0x0885:  je     08481852 <+0x8d0>
08481809 +0x0887:  movb   $0x1,-0x25(%ebp)
0848180d +0x088b:  mov    -0x10(%ebp),%ecx
08481810 +0x088e:  mov    -0x14(%ebp),%edx
08481813 +0x0891:  lea    -0x24(%ebp),%eax
08481816 +0x0894:  mov    0x10(%ebp),%esi
08481819 +0x0897:  mov    %esi,0x10(%esp)
0848181d +0x089b:  mov    %ecx,0xc(%esp)
08481821 +0x089f:  mov    %edx,0x8(%esp)
08481825 +0x08a3:  mov    0xc(%ebp),%edx
08481828 +0x08a6:  mov    %edx,0x4(%esp)
0848182c +0x08aa:  mov    %eax,(%esp)
0848182f +0x08ad:  call   084820a0 <+0x111e>
08481834 +0x08b2:  sub    $0x4,%esp
08481837 +0x08b5:  lea    -0x25(%ebp),%eax
0848183a +0x08b8:  mov    %eax,0x8(%esp)
0848183e +0x08bc:  lea    -0x24(%ebp),%eax
08481841 +0x08bf:  mov    %eax,0x4(%esp)
08481845 +0x08c3:  mov    %ebx,(%esp)
08481848 +0x08c6:  call   08482168 <+0x11e6>
0848184d +0x08cb:  jmp    084818f3 <+0x971>
08481852 +0x08d0:  lea    -0x34(%ebp),%eax
08481855 +0x08d3:  mov    %eax,(%esp)
08481858 +0x08d6:  call   08482196 <+0x1214>
0848185d +0x08db:  mov    0x10(%ebp),%eax
08481860 +0x08de:  mov    %eax,0x4(%esp)
08481864 +0x08e2:  lea    -0x1e(%ebp),%eax
08481867 +0x08e5:  mov    %eax,(%esp)
0848186a +0x08e8:  call   08482076 <+0x10f4>
0848186f +0x08ed:  mov    %eax,%esi
08481871 +0x08ef:  mov    -0x34(%ebp),%eax
08481874 +0x08f2:  mov    %eax,(%esp)
08481877 +0x08f5:  call   08482040 <+0x10be>
0848187c +0x08fa:  mov    0xc(%ebp),%edx
0848187f +0x08fd:  mov    %esi,0x8(%esp)
08481883 +0x0901:  mov    %eax,0x4(%esp)
08481887 +0x0905:  mov    %edx,(%esp)
0848188a +0x0908:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0848188f +0x090d:  test   %al,%al
08481891 +0x090f:  je     084818d9 <+0x957>
08481893 +0x0911:  movb   $0x1,-0x1d(%ebp)
08481897 +0x0915:  mov    -0x10(%ebp),%ecx
0848189a +0x0918:  mov    -0x14(%ebp),%edx
0848189d +0x091b:  lea    -0x1c(%ebp),%eax
084818a0 +0x091e:  mov    0x10(%ebp),%esi
084818a3 +0x0921:  mov    %esi,0x10(%esp)
084818a7 +0x0925:  mov    %ecx,0xc(%esp)
084818ab +0x0929:  mov    %edx,0x8(%esp)
084818af +0x092d:  mov    0xc(%ebp),%edx
084818b2 +0x0930:  mov    %edx,0x4(%esp)
084818b6 +0x0934:  mov    %eax,(%esp)
084818b9 +0x0937:  call   084820a0 <+0x111e>
084818be +0x093c:  sub    $0x4,%esp
084818c1 +0x093f:  lea    -0x1d(%ebp),%eax
084818c4 +0x0942:  mov    %eax,0x8(%esp)
084818c8 +0x0946:  lea    -0x1c(%ebp),%eax
084818cb +0x0949:  mov    %eax,0x4(%esp)
084818cf +0x094d:  mov    %ebx,(%esp)
084818d2 +0x0950:  call   08482168 <+0x11e6>
084818d7 +0x0955:  jmp    084818f3 <+0x971>
084818d9 +0x0957:  movb   $0x0,-0x15(%ebp)
084818dd +0x095b:  lea    -0x15(%ebp),%eax
084818e0 +0x095e:  mov    %eax,0x8(%esp)
084818e4 +0x0962:  lea    -0x34(%ebp),%eax
084818e7 +0x0965:  mov    %eax,0x4(%esp)
084818eb +0x0969:  mov    %ebx,(%esp)
084818ee +0x096c:  call   084821b4 <+0x1232>
084818f3 +0x0971:  mov    %ebx,%eax
084818f5 +0x0973:  lea    -0x8(%ebp),%esp
084818f8 +0x0976:  add    $0x0,%esp
084818fb +0x0979:  pop    %ebx
084818fc +0x097a:  pop    %esi
084818fd +0x097b:  pop    %ebp
084818fe +0x097c:  ret    $0x4
08481901 +0x097f:  nop
08481902 +0x0980:  push   %ebp
08481903 +0x0981:  mov    %esp,%ebp
08481905 +0x0983:  sub    $0x18,%esp
08481908 +0x0986:  mov    0x8(%ebp),%eax
0848190b +0x0989:  mov    %eax,(%esp)
0848190e +0x098c:  call   08482212 <+0x1290>
08481913 +0x0991:  leave
08481914 +0x0992:  ret
08481915 +0x0993:  nop
08481916 +0x0994:  push   %ebp
08481917 +0x0995:  mov    %esp,%ebp
08481919 +0x0997:  sub    $0x18,%esp
0848191c +0x099a:  mov    0x8(%ebp),%eax
0848191f +0x099d:  mov    %eax,(%esp)
08481922 +0x09a0:  call   084821e2 <+0x1260>
08481927 +0x09a5:  leave
08481928 +0x09a6:  ret
08481929 +0x09a7:  nop
0848192a +0x09a8:  push   %ebp
0848192b +0x09a9:  mov    %esp,%ebp
0848192d +0x09ab:  push   %esi
0848192e +0x09ac:  push   %ebx
0848192f +0x09ad:  sub    $0x10,%esp
08481932 +0x09b0:  mov    0x8(%ebp),%eax
08481935 +0x09b3:  mov    0x8(%eax),%eax
08481938 +0x09b6:  mov    %eax,%edx
0848193a +0x09b8:  mov    0x8(%ebp),%eax
0848193d +0x09bb:  mov    (%eax),%eax
0848193f +0x09bd:  mov    %edx,%ecx
08481941 +0x09bf:  sub    %eax,%ecx
08481943 +0x09c1:  mov    %ecx,%eax
08481945 +0x09c3:  sar    $0x2,%eax
08481948 +0x09c6:  mov    %eax,%edx
0848194a +0x09c8:  mov    0x8(%ebp),%eax
0848194d +0x09cb:  mov    (%eax),%eax
0848194f +0x09cd:  mov    %edx,0x8(%esp)
08481953 +0x09d1:  mov    %eax,0x4(%esp)
08481957 +0x09d5:  mov    0x8(%ebp),%eax
0848195a +0x09d8:  mov    %eax,(%esp)
0848195d +0x09db:  call   08482226 <+0x12a4>
08481962 +0x09e0:  jmp    0848197f <+0x9fd>
08481964 +0x09e2:  mov    %edx,%ebx
08481966 +0x09e4:  mov    %eax,%esi
08481968 +0x09e6:  mov    0x8(%ebp),%eax
0848196b +0x09e9:  mov    %eax,(%esp)
0848196e +0x09ec:  call   08481902 <+0x980>
08481973 +0x09f1:  mov    %esi,%eax
08481975 +0x09f3:  mov    %ebx,%edx
08481977 +0x09f5:  mov    %eax,(%esp)
0848197a +0x09f8:  call   08ae3750 <_Unwind_Resume>
0848197f +0x09fd:  mov    0x8(%ebp),%eax
08481982 +0x0a00:  mov    %eax,(%esp)
08481985 +0x0a03:  call   08481902 <+0x980>
0848198a +0x0a08:  add    $0x10,%esp
0848198d +0x0a0b:  pop    %ebx
0848198e +0x0a0c:  pop    %esi
0848198f +0x0a0d:  pop    %ebp
08481990 +0x0a0e:  ret
08481991 +0x0a0f:  nop
08481992 +0x0a10:  push   %ebp
08481993 +0x0a11:  mov    %esp,%ebp
08481995 +0x0a13:  mov    0x8(%ebp),%eax
08481998 +0x0a16:  pop    %ebp
08481999 +0x0a17:  ret
0848199a +0x0a18:  push   %ebp
0848199b +0x0a19:  mov    %esp,%ebp
0848199d +0x0a1b:  sub    $0x18,%esp
084819a0 +0x0a1e:  mov    0xc(%ebp),%eax
084819a3 +0x0a21:  mov    %eax,0x4(%esp)
084819a7 +0x0a25:  mov    0x8(%ebp),%eax
084819aa +0x0a28:  mov    %eax,(%esp)
084819ad +0x0a2b:  call   0848224d <+0x12cb>
084819b2 +0x0a30:  leave
084819b3 +0x0a31:  ret
084819b4 +0x0a32:  push   %ebp
084819b5 +0x0a33:  mov    %esp,%ebp
084819b7 +0x0a35:  sub    $0x18,%esp
084819ba +0x0a38:  mov    0xc(%ebp),%eax
084819bd +0x0a3b:  mov    %eax,0x4(%esp)
084819c1 +0x0a3f:  movl   $0x4,(%esp)
084819c8 +0x0a46:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084819cd +0x0a4b:  mov    %eax,%edx
084819cf +0x0a4d:  test   %edx,%edx
084819d1 +0x0a4f:  je     084819da <+0xa58>
084819d3 +0x0a51:  mov    0x10(%ebp),%edx
084819d6 +0x0a54:  mov    (%edx),%edx
084819d8 +0x0a56:  mov    %edx,(%eax)
084819da +0x0a58:  leave
084819db +0x0a59:  ret
084819dc +0x0a5a:  push   %ebp
084819dd +0x0a5b:  mov    %esp,%ebp
084819df +0x0a5d:  push   %esi
084819e0 +0x0a5e:  push   %ebx
084819e1 +0x0a5f:  sub    $0x30,%esp
084819e4 +0x0a62:  mov    0x8(%ebp),%eax
084819e7 +0x0a65:  mov    0x4(%eax),%edx
084819ea +0x0a68:  mov    0x8(%ebp),%eax
084819ed +0x0a6b:  mov    0x8(%eax),%eax
084819f0 +0x0a6e:  cmp    %eax,%edx
084819f2 +0x0a70:  je     08481a89 <+0xb07>
084819f8 +0x0a76:  mov    0x8(%ebp),%eax
084819fb +0x0a79:  mov    0x4(%eax),%eax
084819fe +0x0a7c:  sub    $0x4,%eax
08481a01 +0x0a7f:  mov    %eax,(%esp)
08481a04 +0x0a82:  call   08481729 <+0x7a7>
08481a09 +0x0a87:  mov    (%eax),%eax
08481a0b +0x0a89:  mov    %eax,-0x20(%ebp)
08481a0e +0x0a8c:  mov    0x8(%ebp),%eax
08481a11 +0x0a8f:  mov    0x4(%eax),%edx
08481a14 +0x0a92:  mov    0x8(%ebp),%eax
08481a17 +0x0a95:  lea    -0x20(%ebp),%ecx
08481a1a +0x0a98:  mov    %ecx,0x8(%esp)
08481a1e +0x0a9c:  mov    %edx,0x4(%esp)
08481a22 +0x0aa0:  mov    %eax,(%esp)
08481a25 +0x0aa3:  call   08482268 <+0x12e6>
08481a2a +0x0aa8:  mov    0x8(%ebp),%eax
08481a2d +0x0aab:  mov    0x4(%eax),%eax
08481a30 +0x0aae:  lea    0x4(%eax),%edx
08481a33 +0x0ab1:  mov    0x8(%ebp),%eax
08481a36 +0x0ab4:  mov    %edx,0x4(%eax)
08481a39 +0x0ab7:  mov    0x8(%ebp),%eax
08481a3c +0x0aba:  mov    0x4(%eax),%eax
08481a3f +0x0abd:  lea    -0x4(%eax),%esi
08481a42 +0x0ac0:  mov    0x8(%ebp),%eax
08481a45 +0x0ac3:  mov    0x4(%eax),%eax
08481a48 +0x0ac6:  lea    -0x8(%eax),%ebx
08481a4b +0x0ac9:  lea    0xc(%ebp),%eax
08481a4e +0x0acc:  mov    %eax,(%esp)
08481a51 +0x0acf:  call   08481ede <+0xf5c>
08481a56 +0x0ad4:  mov    (%eax),%eax
08481a58 +0x0ad6:  mov    %esi,0x8(%esp)
08481a5c +0x0ada:  mov    %ebx,0x4(%esp)
08481a60 +0x0ade:  mov    %eax,(%esp)
08481a63 +0x0ae1:  call   0848229d <+0x131b>
08481a68 +0x0ae6:  lea    0xc(%ebp),%eax
08481a6b +0x0ae9:  mov    %eax,(%esp)
08481a6e +0x0aec:  call   084814c8 <+0x546>
08481a73 +0x0af1:  mov    %eax,%ebx
08481a75 +0x0af3:  mov    0x10(%ebp),%eax
08481a78 +0x0af6:  mov    %eax,(%esp)
08481a7b +0x0af9:  call   084822d5 <+0x1353>
08481a80 +0x0afe:  mov    (%eax),%eax
08481a82 +0x0b00:  mov    %eax,(%ebx)
08481a84 +0x0b02:  jmp    08481c8b <+0xd09>
08481a89 +0x0b07:  movl   $"vector::_M_insert_aux",0x8(%esp)
08481a91 +0x0b0f:  movl   $0x1,0x4(%esp)
08481a99 +0x0b17:  mov    0x8(%ebp),%eax
08481a9c +0x0b1a:  mov    %eax,(%esp)
08481a9f +0x0b1d:  call   084822de <+0x135c>
08481aa4 +0x0b22:  mov    %eax,-0x18(%ebp)
08481aa7 +0x0b25:  lea    -0x1c(%ebp),%eax
08481aaa +0x0b28:  mov    0x8(%ebp),%edx
08481aad +0x0b2b:  mov    %edx,0x4(%esp)
08481ab1 +0x0b2f:  mov    %eax,(%esp)
08481ab4 +0x0b32:  call   084813e0 <+0x45e>
08481ab9 +0x0b37:  sub    $0x4,%esp
08481abc +0x0b3a:  lea    -0x1c(%ebp),%eax
08481abf +0x0b3d:  mov    %eax,0x4(%esp)
08481ac3 +0x0b41:  lea    0xc(%ebp),%eax
08481ac6 +0x0b44:  mov    %eax,(%esp)
08481ac9 +0x0b47:  call   08481ca5 <+0xd23>
08481ace +0x0b4c:  mov    %eax,-0x14(%ebp)
08481ad1 +0x0b4f:  mov    0x8(%ebp),%eax
08481ad4 +0x0b52:  mov    -0x18(%ebp),%edx
08481ad7 +0x0b55:  mov    %edx,0x4(%esp)
08481adb +0x0b59:  mov    %eax,(%esp)
08481ade +0x0b5c:  call   08482384 <+0x1402>
08481ae3 +0x0b61:  mov    %eax,-0x10(%ebp)
08481ae6 +0x0b64:  mov    -0x10(%ebp),%eax
08481ae9 +0x0b67:  mov    %eax,-0xc(%ebp)
08481aec +0x0b6a:  mov    0x10(%ebp),%eax
08481aef +0x0b6d:  mov    %eax,(%esp)
08481af2 +0x0b70:  call   084822d5 <+0x1353>
08481af7 +0x0b75:  mov    -0x14(%ebp),%edx
08481afa +0x0b78:  shl    $0x2,%edx
08481afd +0x0b7b:  mov    %edx,%ecx
08481aff +0x0b7d:  add    -0x10(%ebp),%ecx
08481b02 +0x0b80:  mov    0x8(%ebp),%edx
08481b05 +0x0b83:  mov    %eax,0x8(%esp)
08481b09 +0x0b87:  mov    %ecx,0x4(%esp)
08481b0d +0x0b8b:  mov    %edx,(%esp)
08481b10 +0x0b8e:  call   084819b4 <+0xa32>
08481b15 +0x0b93:  movl   $0x0,-0xc(%ebp)
08481b1c +0x0b9a:  mov    0x8(%ebp),%eax
08481b1f +0x0b9d:  mov    %eax,(%esp)
08481b22 +0x0ba0:  call   08481992 <+0xa10>
08481b27 +0x0ba5:  mov    %eax,%ebx
08481b29 +0x0ba7:  lea    0xc(%ebp),%eax
08481b2c +0x0baa:  mov    %eax,(%esp)
08481b2f +0x0bad:  call   08481ede <+0xf5c>
08481b34 +0x0bb2:  mov    (%eax),%edx
08481b36 +0x0bb4:  mov    0x8(%ebp),%eax
08481b39 +0x0bb7:  mov    (%eax),%eax
08481b3b +0x0bb9:  mov    %ebx,0xc(%esp)
08481b3f +0x0bbd:  mov    -0x10(%ebp),%ecx
08481b42 +0x0bc0:  mov    %ecx,0x8(%esp)
08481b46 +0x0bc4:  mov    %edx,0x4(%esp)
08481b4a +0x0bc8:  mov    %eax,(%esp)
08481b4d +0x0bcb:  call   084823b3 <+0x1431>
08481b52 +0x0bd0:  mov    %eax,-0xc(%ebp)
08481b55 +0x0bd3:  addl   $0x4,-0xc(%ebp)
08481b59 +0x0bd7:  mov    0x8(%ebp),%eax
08481b5c +0x0bda:  mov    %eax,(%esp)
08481b5f +0x0bdd:  call   08481992 <+0xa10>
08481b64 +0x0be2:  mov    %eax,%ebx
08481b66 +0x0be4:  mov    0x8(%ebp),%eax
08481b69 +0x0be7:  mov    0x4(%eax),%esi
08481b6c +0x0bea:  lea    0xc(%ebp),%eax
08481b6f +0x0bed:  mov    %eax,(%esp)
08481b72 +0x0bf0:  call   08481ede <+0xf5c>
08481b77 +0x0bf5:  mov    (%eax),%eax
08481b79 +0x0bf7:  mov    %ebx,0xc(%esp)
08481b7d +0x0bfb:  mov    -0xc(%ebp),%edx
08481b80 +0x0bfe:  mov    %edx,0x8(%esp)
08481b84 +0x0c02:  mov    %esi,0x4(%esp)
08481b88 +0x0c06:  mov    %eax,(%esp)
08481b8b +0x0c09:  call   084823b3 <+0x1431>
08481b90 +0x0c0e:  mov    %eax,-0xc(%ebp)
08481b93 +0x0c11:  mov    0x8(%ebp),%eax
08481b96 +0x0c14:  mov    %eax,(%esp)
08481b99 +0x0c17:  call   08481992 <+0xa10>
08481b9e +0x0c1c:  mov    0x8(%ebp),%edx
08481ba1 +0x0c1f:  mov    0x4(%edx),%ecx
08481ba4 +0x0c22:  mov    0x8(%ebp),%edx
08481ba7 +0x0c25:  mov    (%edx),%edx
08481ba9 +0x0c27:  mov    %eax,0x8(%esp)
08481bad +0x0c2b:  mov    %ecx,0x4(%esp)
08481bb1 +0x0c2f:  mov    %edx,(%esp)
08481bb4 +0x0c32:  call   0848199a <+0xa18>
08481bb9 +0x0c37:  mov    0x8(%ebp),%eax
08481bbc +0x0c3a:  mov    0x8(%eax),%eax
08481bbf +0x0c3d:  mov    %eax,%edx
08481bc1 +0x0c3f:  mov    0x8(%ebp),%eax
08481bc4 +0x0c42:  mov    (%eax),%eax
08481bc6 +0x0c44:  mov    %edx,%ecx
08481bc8 +0x0c46:  sub    %eax,%ecx
08481bca +0x0c48:  mov    %ecx,%eax
08481bcc +0x0c4a:  sar    $0x2,%eax
08481bcf +0x0c4d:  mov    %eax,%ecx
08481bd1 +0x0c4f:  mov    0x8(%ebp),%eax
08481bd4 +0x0c52:  mov    (%eax),%edx
08481bd6 +0x0c54:  mov    0x8(%ebp),%eax
08481bd9 +0x0c57:  mov    %ecx,0x8(%esp)
08481bdd +0x0c5b:  mov    %edx,0x4(%esp)
08481be1 +0x0c5f:  mov    %eax,(%esp)
08481be4 +0x0c62:  call   08482226 <+0x12a4>
08481be9 +0x0c67:  mov    0x8(%ebp),%eax
08481bec +0x0c6a:  mov    -0x10(%ebp),%edx
08481bef +0x0c6d:  mov    %edx,(%eax)
08481bf1 +0x0c6f:  mov    0x8(%ebp),%eax
08481bf4 +0x0c72:  mov    -0xc(%ebp),%edx
08481bf7 +0x0c75:  mov    %edx,0x4(%eax)
08481bfa +0x0c78:  mov    -0x18(%ebp),%eax
08481bfd +0x0c7b:  shl    $0x2,%eax
08481c00 +0x0c7e:  mov    %eax,%edx
08481c02 +0x0c80:  add    -0x10(%ebp),%edx
08481c05 +0x0c83:  mov    0x8(%ebp),%eax
08481c08 +0x0c86:  mov    %edx,0x8(%eax)
08481c0b +0x0c89:  jmp    08481c8b <+0xd09>
08481c0d +0x0c8b:  mov    %eax,(%esp)
08481c10 +0x0c8e:  call   08725ce0 <__cxa_begin_catch>
08481c15 +0x0c93:  cmpl   $0x0,-0xc(%ebp)
08481c19 +0x0c97:  jne    08481c37 <+0xcb5>
08481c1b +0x0c99:  mov    -0x14(%ebp),%eax
08481c1e +0x0c9c:  shl    $0x2,%eax
08481c21 +0x0c9f:  mov    %eax,%edx
08481c23 +0x0ca1:  add    -0x10(%ebp),%edx
08481c26 +0x0ca4:  mov    0x8(%ebp),%eax
08481c29 +0x0ca7:  mov    %edx,0x4(%esp)
08481c2d +0x0cab:  mov    %eax,(%esp)
08481c30 +0x0cae:  call   08482406 <+0x1484>
08481c35 +0x0cb3:  jmp    08481c58 <+0xcd6>
08481c37 +0x0cb5:  mov    0x8(%ebp),%eax
08481c3a +0x0cb8:  mov    %eax,(%esp)
08481c3d +0x0cbb:  call   08481992 <+0xa10>
08481c42 +0x0cc0:  mov    %eax,0x8(%esp)
08481c46 +0x0cc4:  mov    -0xc(%ebp),%eax
08481c49 +0x0cc7:  mov    %eax,0x4(%esp)
08481c4d +0x0ccb:  mov    -0x10(%ebp),%eax
08481c50 +0x0cce:  mov    %eax,(%esp)
08481c53 +0x0cd1:  call   0848199a <+0xa18>
08481c58 +0x0cd6:  mov    0x8(%ebp),%eax
08481c5b +0x0cd9:  mov    -0x18(%ebp),%edx
08481c5e +0x0cdc:  mov    %edx,0x8(%esp)
08481c62 +0x0ce0:  mov    -0x10(%ebp),%edx
08481c65 +0x0ce3:  mov    %edx,0x4(%esp)
08481c69 +0x0ce7:  mov    %eax,(%esp)
08481c6c +0x0cea:  call   08482226 <+0x12a4>
08481c71 +0x0cef:  call   08724be0 <__cxa_rethrow>
08481c76 +0x0cf4:  mov    %edx,%ebx
08481c78 +0x0cf6:  mov    %eax,%esi
08481c7a +0x0cf8:  call   08725c30 <__cxa_end_catch>
08481c7f +0x0cfd:  mov    %esi,%eax
08481c81 +0x0cff:  mov    %ebx,%edx
08481c83 +0x0d01:  mov    %eax,(%esp)
08481c86 +0x0d04:  call   08ae3750 <_Unwind_Resume>
08481c8b +0x0d09:  lea    -0x8(%ebp),%esp
08481c8e +0x0d0c:  add    $0x0,%esp
08481c91 +0x0d0f:  pop    %ebx
08481c92 +0x0d10:  pop    %esi
08481c93 +0x0d11:  pop    %ebp
08481c94 +0x0d12:  ret
08481c95 +0x0d13:  nop
08481c96 +0x0d14:  push   %ebp
08481c97 +0x0d15:  mov    %esp,%ebp
08481c99 +0x0d17:  mov    0xc(%ebp),%eax
08481c9c +0x0d1a:  mov    (%eax),%edx
08481c9e +0x0d1c:  mov    0x8(%ebp),%eax
08481ca1 +0x0d1f:  mov    %edx,(%eax)
08481ca3 +0x0d21:  pop    %ebp
08481ca4 +0x0d22:  ret
08481ca5 +0x0d23:  push   %ebp
08481ca6 +0x0d24:  mov    %esp,%ebp
08481ca8 +0x0d26:  push   %ebx
08481ca9 +0x0d27:  sub    $0x14,%esp
08481cac +0x0d2a:  mov    0x8(%ebp),%eax
08481caf +0x0d2d:  mov    %eax,(%esp)
08481cb2 +0x0d30:  call   08481ede <+0xf5c>
08481cb7 +0x0d35:  mov    (%eax),%eax
08481cb9 +0x0d37:  mov    %eax,%ebx
08481cbb +0x0d39:  mov    0xc(%ebp),%eax
08481cbe +0x0d3c:  mov    %eax,(%esp)
08481cc1 +0x0d3f:  call   08481ede <+0xf5c>
08481cc6 +0x0d44:  mov    (%eax),%eax
08481cc8 +0x0d46:  mov    %ebx,%edx
08481cca +0x0d48:  sub    %eax,%edx
08481ccc +0x0d4a:  mov    %edx,%eax
08481cce +0x0d4c:  sar    $0x2,%eax
08481cd1 +0x0d4f:  add    $0x14,%esp
08481cd4 +0x0d52:  pop    %ebx
08481cd5 +0x0d53:  pop    %ebp
08481cd6 +0x0d54:  ret
08481cd7 +0x0d55:  push   %ebp
08481cd8 +0x0d56:  mov    %esp,%ebp
08481cda +0x0d58:  push   %esi
08481cdb +0x0d59:  push   %ebx
08481cdc +0x0d5a:  sub    $0x40,%esp
08481cdf +0x0d5d:  jmp    08481dfc <+0xe7a>
08481ce4 +0x0d62:  cmpl   $0x0,0x10(%ebp)
08481ce8 +0x0d66:  jne    08481d0f <+0xd8d>
08481cea +0x0d68:  mov    0x14(%ebp),%eax
08481ced +0x0d6b:  mov    %eax,0xc(%esp)
08481cf1 +0x0d6f:  mov    0xc(%ebp),%eax
08481cf4 +0x0d72:  mov    %eax,0x8(%esp)
08481cf8 +0x0d76:  mov    0xc(%ebp),%eax
08481cfb +0x0d79:  mov    %eax,0x4(%esp)
08481cff +0x0d7d:  mov    0x8(%ebp),%eax
08481d02 +0x0d80:  mov    %eax,(%esp)
08481d05 +0x0d83:  call   0848240b <+0x1489>
08481d0a +0x0d88:  jmp    08481e1c <+0xe9a>
08481d0f +0x0d8d:  subl   $0x1,0x10(%ebp)
08481d13 +0x0d91:  movl   $0x1,-0x14(%ebp)
08481d1a +0x0d98:  lea    -0x18(%ebp),%eax
08481d1d +0x0d9b:  lea    -0x14(%ebp),%edx
08481d20 +0x0d9e:  mov    %edx,0x8(%esp)
08481d24 +0x0da2:  lea    0xc(%ebp),%edx
08481d27 +0x0da5:  mov    %edx,0x4(%esp)
08481d2b +0x0da9:  mov    %eax,(%esp)
08481d2e +0x0dac:  call   08482482 <+0x1500>
08481d33 +0x0db1:  sub    $0x4,%esp
08481d36 +0x0db4:  lea    -0x18(%ebp),%eax
08481d39 +0x0db7:  mov    %eax,(%esp)
08481d3c +0x0dba:  call   084814c8 <+0x546>
08481d41 +0x0dbf:  mov    %eax,%esi
08481d43 +0x0dc1:  lea    0x8(%ebp),%eax
08481d46 +0x0dc4:  mov    %eax,0x4(%esp)
08481d4a +0x0dc8:  lea    0xc(%ebp),%eax
08481d4d +0x0dcb:  mov    %eax,(%esp)
08481d50 +0x0dce:  call   08481ca5 <+0xd23>
08481d55 +0x0dd3:  mov    %eax,%edx
08481d57 +0x0dd5:  shr    $0x1f,%edx
08481d5a +0x0dd8:  lea    (%edx,%eax,1),%eax
08481d5d +0x0ddb:  sar    %eax
08481d5f +0x0ddd:  mov    %eax,-0xc(%ebp)
08481d62 +0x0de0:  lea    -0x10(%ebp),%eax
08481d65 +0x0de3:  lea    -0xc(%ebp),%edx
08481d68 +0x0de6:  mov    %edx,0x8(%esp)
08481d6c +0x0dea:  lea    0x8(%ebp),%edx
08481d6f +0x0ded:  mov    %edx,0x4(%esp)
08481d73 +0x0df1:  mov    %eax,(%esp)
08481d76 +0x0df4:  call   0848244c <+0x14ca>
08481d7b +0x0df9:  sub    $0x4,%esp
08481d7e +0x0dfc:  lea    -0x10(%ebp),%eax
08481d81 +0x0dff:  mov    %eax,(%esp)
08481d84 +0x0e02:  call   084814c8 <+0x546>
08481d89 +0x0e07:  mov    %eax,%ebx
08481d8b +0x0e09:  lea    0x8(%ebp),%eax
08481d8e +0x0e0c:  mov    %eax,(%esp)
08481d91 +0x0e0f:  call   084814c8 <+0x546>
08481d96 +0x0e14:  mov    0x14(%ebp),%edx
08481d99 +0x0e17:  mov    %edx,0xc(%esp)
08481d9d +0x0e1b:  mov    %esi,0x8(%esp)
08481da1 +0x0e1f:  mov    %ebx,0x4(%esp)
08481da5 +0x0e23:  mov    %eax,(%esp)
08481da8 +0x0e26:  call   084824ba <+0x1538>
08481dad +0x0e2b:  mov    (%eax),%edx
08481daf +0x0e2d:  lea    -0x1c(%ebp),%eax
08481db2 +0x0e30:  mov    0x14(%ebp),%ecx
08481db5 +0x0e33:  mov    %ecx,0x10(%esp)
08481db9 +0x0e37:  mov    %edx,0xc(%esp)
08481dbd +0x0e3b:  mov    0xc(%ebp),%edx
08481dc0 +0x0e3e:  mov    %edx,0x8(%esp)
08481dc4 +0x0e42:  mov    0x8(%ebp),%edx
08481dc7 +0x0e45:  mov    %edx,0x4(%esp)
08481dcb +0x0e49:  mov    %eax,(%esp)
08481dce +0x0e4c:  call   08482560 <+0x15de>
08481dd3 +0x0e51:  sub    $0x4,%esp
08481dd6 +0x0e54:  mov    0x14(%ebp),%eax
08481dd9 +0x0e57:  mov    %eax,0xc(%esp)
08481ddd +0x0e5b:  mov    0x10(%ebp),%eax
08481de0 +0x0e5e:  mov    %eax,0x8(%esp)
08481de4 +0x0e62:  mov    0xc(%ebp),%eax
08481de7 +0x0e65:  mov    %eax,0x4(%esp)
08481deb +0x0e69:  mov    -0x1c(%ebp),%eax
08481dee +0x0e6c:  mov    %eax,(%esp)
08481df1 +0x0e6f:  call   08481cd7 <+0xd55>
08481df6 +0x0e74:  mov    -0x1c(%ebp),%eax
08481df9 +0x0e77:  mov    %eax,0xc(%ebp)
08481dfc +0x0e7a:  lea    0x8(%ebp),%edx
08481dff +0x0e7d:  mov    %edx,0x4(%esp)
08481e03 +0x0e81:  lea    0xc(%ebp),%eax
08481e06 +0x0e84:  mov    %eax,(%esp)
08481e09 +0x0e87:  call   08481ca5 <+0xd23>
08481e0e +0x0e8c:  cmp    $0x10,%eax
08481e11 +0x0e8f:  setg   %al
08481e14 +0x0e92:  test   %al,%al
08481e16 +0x0e94:  jne    08481ce4 <+0xd62>
08481e1c +0x0e9a:  lea    -0x8(%ebp),%esp
08481e1f +0x0e9d:  add    $0x0,%esp
08481e22 +0x0ea0:  pop    %ebx
08481e23 +0x0ea1:  pop    %esi
08481e24 +0x0ea2:  pop    %ebp
08481e25 +0x0ea3:  ret
08481e26 +0x0ea4:  push   %ebp
08481e27 +0x0ea5:  mov    %esp,%ebp
08481e29 +0x0ea7:  sub    $0x28,%esp
08481e2c +0x0eaa:  lea    0x8(%ebp),%eax
08481e2f +0x0ead:  mov    %eax,0x4(%esp)
08481e33 +0x0eb1:  lea    0xc(%ebp),%eax
08481e36 +0x0eb4:  mov    %eax,(%esp)
08481e39 +0x0eb7:  call   08481ca5 <+0xd23>
08481e3e +0x0ebc:  cmp    $0x10,%eax
08481e41 +0x0ebf:  setg   %al
08481e44 +0x0ec2:  test   %al,%al
08481e46 +0x0ec4:  je     08481ec2 <+0xf40>
08481e48 +0x0ec6:  movl   $0x10,-0x14(%ebp)
08481e4f +0x0ecd:  lea    -0x18(%ebp),%eax
08481e52 +0x0ed0:  lea    -0x14(%ebp),%edx
08481e55 +0x0ed3:  mov    %edx,0x8(%esp)
08481e59 +0x0ed7:  lea    0x8(%ebp),%edx
08481e5c +0x0eda:  mov    %edx,0x4(%esp)
08481e60 +0x0ede:  mov    %eax,(%esp)
08481e63 +0x0ee1:  call   0848244c <+0x14ca>
08481e68 +0x0ee6:  sub    $0x4,%esp
08481e6b +0x0ee9:  mov    0x10(%ebp),%eax
08481e6e +0x0eec:  mov    %eax,0x8(%esp)
08481e72 +0x0ef0:  mov    -0x18(%ebp),%eax
08481e75 +0x0ef3:  mov    %eax,0x4(%esp)
08481e79 +0x0ef7:  mov    0x8(%ebp),%eax
08481e7c +0x0efa:  mov    %eax,(%esp)
08481e7f +0x0efd:  call   0848261a <+0x1698>
08481e84 +0x0f02:  movl   $0x10,-0xc(%ebp)
08481e8b +0x0f09:  lea    -0x10(%ebp),%eax
08481e8e +0x0f0c:  lea    -0xc(%ebp),%edx
08481e91 +0x0f0f:  mov    %edx,0x8(%esp)
08481e95 +0x0f13:  lea    0x8(%ebp),%edx
08481e98 +0x0f16:  mov    %edx,0x4(%esp)
08481e9c +0x0f1a:  mov    %eax,(%esp)
08481e9f +0x0f1d:  call   0848244c <+0x14ca>
08481ea4 +0x0f22:  sub    $0x4,%esp
08481ea7 +0x0f25:  mov    0x10(%ebp),%eax
08481eaa +0x0f28:  mov    %eax,0x8(%esp)
08481eae +0x0f2c:  mov    0xc(%ebp),%eax
08481eb1 +0x0f2f:  mov    %eax,0x4(%esp)
08481eb5 +0x0f33:  mov    -0x10(%ebp),%eax
08481eb8 +0x0f36:  mov    %eax,(%esp)
08481ebb +0x0f39:  call   0848272d <+0x17ab>
08481ec0 +0x0f3e:  jmp    08481edb <+0xf59>
08481ec2 +0x0f40:  mov    0x10(%ebp),%eax
08481ec5 +0x0f43:  mov    %eax,0x8(%esp)
08481ec9 +0x0f47:  mov    0xc(%ebp),%eax
08481ecc +0x0f4a:  mov    %eax,0x4(%esp)
08481ed0 +0x0f4e:  mov    0x8(%ebp),%eax
08481ed3 +0x0f51:  mov    %eax,(%esp)
08481ed6 +0x0f54:  call   0848261a <+0x1698>
08481edb +0x0f59:  leave
08481edc +0x0f5a:  ret
08481edd +0x0f5b:  nop
08481ede +0x0f5c:  push   %ebp
08481edf +0x0f5d:  mov    %esp,%ebp
08481ee1 +0x0f5f:  mov    0x8(%ebp),%eax
08481ee4 +0x0f62:  pop    %ebp
08481ee5 +0x0f63:  ret
08481ee6 +0x0f64:  push   %ebp
08481ee7 +0x0f65:  mov    %esp,%ebp
08481ee9 +0x0f67:  sub    $0x18,%esp
08481eec +0x0f6a:  mov    0x8(%ebp),%eax
08481eef +0x0f6d:  mov    %eax,(%esp)
08481ef2 +0x0f70:  call   08482782 <+0x1800>
08481ef7 +0x0f75:  mov    0x8(%ebp),%eax
08481efa +0x0f78:  movl   $0x0,0x4(%eax)
08481f01 +0x0f7f:  mov    0x8(%ebp),%eax
08481f04 +0x0f82:  movl   $0x0,0x8(%eax)
08481f0b +0x0f89:  mov    0x8(%ebp),%eax
08481f0e +0x0f8c:  movl   $0x0,0xc(%eax)
08481f15 +0x0f93:  mov    0x8(%ebp),%eax
08481f18 +0x0f96:  movl   $0x0,0x10(%eax)
08481f1f +0x0f9d:  mov    0x8(%ebp),%eax
08481f22 +0x0fa0:  movl   $0x0,0x14(%eax)
08481f29 +0x0fa7:  mov    0x8(%ebp),%eax
08481f2c +0x0faa:  mov    %eax,(%esp)
08481f2f +0x0fad:  call   08482796 <+0x1814>
08481f34 +0x0fb2:  leave
08481f35 +0x0fb3:  ret
08481f36 +0x0fb4:  push   %ebp
08481f37 +0x0fb5:  mov    %esp,%ebp
08481f39 +0x0fb7:  pop    %ebp
08481f3a +0x0fb8:  ret
08481f3b +0x0fb9:  push   %ebp
08481f3c +0x0fba:  mov    %esp,%ebp
08481f3e +0x0fbc:  mov    0x8(%ebp),%eax
08481f41 +0x0fbf:  mov    0xc(%eax),%eax
08481f44 +0x0fc2:  pop    %ebp
08481f45 +0x0fc3:  ret
08481f46 +0x0fc4:  push   %ebp
08481f47 +0x0fc5:  mov    %esp,%ebp
08481f49 +0x0fc7:  mov    0x8(%ebp),%eax
08481f4c +0x0fca:  mov    0x8(%eax),%eax
08481f4f +0x0fcd:  pop    %ebp
08481f50 +0x0fce:  ret
08481f51 +0x0fcf:  nop
08481f52 +0x0fd0:  push   %ebp
08481f53 +0x0fd1:  mov    %esp,%ebp
08481f55 +0x0fd3:  sub    $0x18,%esp
08481f58 +0x0fd6:  mov    0x8(%ebp),%eax
08481f5b +0x0fd9:  mov    %eax,(%esp)
08481f5e +0x0fdc:  call   084827c8 <+0x1846>
08481f63 +0x0fe1:  mov    0xc(%ebp),%edx
08481f66 +0x0fe4:  mov    %edx,0x4(%esp)
08481f6a +0x0fe8:  mov    %eax,(%esp)
08481f6d +0x0feb:  call   084827d6 <+0x1854>
08481f72 +0x0ff0:  mov    0xc(%ebp),%eax
08481f75 +0x0ff3:  mov    %eax,0x4(%esp)
08481f79 +0x0ff7:  mov    0x8(%ebp),%eax
08481f7c +0x0ffa:  mov    %eax,(%esp)
08481f7f +0x0ffd:  call   084827ea <+0x1868>
08481f84 +0x1002:  leave
08481f85 +0x1003:  ret
08481f86 +0x1004:  push   %ebp
08481f87 +0x1005:  mov    %esp,%ebp
08481f89 +0x1007:  mov    0xc(%ebp),%edx
08481f8c +0x100a:  mov    0x8(%ebp),%eax
08481f8f +0x100d:  mov    %edx,(%eax)
08481f91 +0x100f:  pop    %ebp
08481f92 +0x1010:  ret
08481f93 +0x1011:  nop
08481f94 +0x1012:  push   %ebp
08481f95 +0x1013:  mov    %esp,%ebp
08481f97 +0x1015:  mov    0x8(%ebp),%eax
08481f9a +0x1018:  add    $0x4,%eax
08481f9d +0x101b:  pop    %ebp
08481f9e +0x101c:  ret
08481f9f +0x101d:  nop
08481fa0 +0x101e:  push   %ebp
08481fa1 +0x101f:  mov    %esp,%ebp
08481fa3 +0x1021:  mov    0x8(%ebp),%eax
08481fa6 +0x1024:  add    $0xc,%eax
08481fa9 +0x1027:  pop    %ebp
08481faa +0x1028:  ret
08481fab +0x1029:  nop
08481fac +0x102a:  push   %ebp
08481fad +0x102b:  mov    %esp,%ebp
08481faf +0x102d:  mov    0x8(%ebp),%eax
08481fb2 +0x1030:  add    $0x8,%eax
08481fb5 +0x1033:  pop    %ebp
08481fb6 +0x1034:  ret
08481fb7 +0x1035:  nop
08481fb8 +0x1036:  push   %ebp
08481fb9 +0x1037:  mov    %esp,%ebp
08481fbb +0x1039:  mov    0x8(%ebp),%eax
08481fbe +0x103c:  add    $0x10,%eax
08481fc1 +0x103f:  pop    %ebp
08481fc2 +0x1040:  ret
08481fc3 +0x1041:  nop
08481fc4 +0x1042:  push   %ebp
08481fc5 +0x1043:  mov    %esp,%ebp
08481fc7 +0x1045:  push   %ebx
08481fc8 +0x1046:  sub    $0x14,%esp
08481fcb +0x1049:  mov    0x8(%ebp),%ebx
08481fce +0x104c:  jmp    0848201c <+0x109a>
08481fd0 +0x104e:  mov    0x10(%ebp),%eax
08481fd3 +0x1051:  mov    %eax,(%esp)
08481fd6 +0x1054:  call   0848207e <+0x10fc>
08481fdb +0x1059:  mov    0xc(%ebp),%edx
08481fde +0x105c:  mov    0x18(%ebp),%ecx
08481fe1 +0x105f:  mov    %ecx,0x8(%esp)
08481fe5 +0x1063:  mov    %eax,0x4(%esp)
08481fe9 +0x1067:  mov    %edx,(%esp)
08481fec +0x106a:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08481ff1 +0x106f:  xor    $0x1,%eax
08481ff4 +0x1072:  test   %al,%al
08481ff6 +0x1074:  je     0848200e <+0x108c>
08481ff8 +0x1076:  mov    0x10(%ebp),%eax
08481ffb +0x1079:  mov    %eax,0x14(%ebp)
08481ffe +0x107c:  mov    0x10(%ebp),%eax
08482001 +0x107f:  mov    %eax,(%esp)
08482004 +0x1082:  call   08481f46 <+0xfc4>
08482009 +0x1087:  mov    %eax,0x10(%ebp)
0848200c +0x108a:  jmp    0848201c <+0x109a>
0848200e +0x108c:  mov    0x10(%ebp),%eax
08482011 +0x108f:  mov    %eax,(%esp)
08482014 +0x1092:  call   08481f3b <+0xfb9>
08482019 +0x1097:  mov    %eax,0x10(%ebp)
0848201c +0x109a:  cmpl   $0x0,0x10(%ebp)
08482020 +0x109e:  setne  %al
08482023 +0x10a1:  test   %al,%al
08482025 +0x10a3:  jne    08481fd0 <+0x104e>
08482027 +0x10a5:  mov    0x14(%ebp),%eax
0848202a +0x10a8:  mov    %eax,0x4(%esp)
0848202e +0x10ac:  mov    %ebx,(%esp)
08482031 +0x10af:  call   08481f86 <+0x1004>
08482036 +0x10b4:  mov    %ebx,%eax
08482038 +0x10b6:  add    $0x14,%esp
0848203b +0x10b9:  pop    %ebx
0848203c +0x10ba:  pop    %ebp
0848203d +0x10bb:  ret    $0x4
08482040 +0x10be:  push   %ebp
08482041 +0x10bf:  mov    %esp,%ebp
08482043 +0x10c1:  sub    $0x28,%esp
08482046 +0x10c4:  mov    0x8(%ebp),%eax
08482049 +0x10c7:  mov    %eax,(%esp)
0848204c +0x10ca:  call   0848280c <+0x188a>
08482051 +0x10cf:  mov    %eax,0x4(%esp)
08482055 +0x10d3:  lea    -0x9(%ebp),%eax
08482058 +0x10d6:  mov    %eax,(%esp)
0848205b +0x10d9:  call   08482076 <+0x10f4>
08482060 +0x10de:  leave
08482061 +0x10df:  ret
08482062 +0x10e0:  push   %ebp
08482063 +0x10e1:  mov    %esp,%ebp
08482065 +0x10e3:  mov    0x8(%ebp),%eax
08482068 +0x10e6:  mov    (%eax),%edx
0848206a +0x10e8:  mov    0xc(%ebp),%eax
0848206d +0x10eb:  mov    (%eax),%eax
0848206f +0x10ed:  cmp    %eax,%edx
08482071 +0x10ef:  sete   %al
08482074 +0x10f2:  pop    %ebp
08482075 +0x10f3:  ret
08482076 +0x10f4:  push   %ebp
08482077 +0x10f5:  mov    %esp,%ebp
08482079 +0x10f7:  mov    0xc(%ebp),%eax
0848207c +0x10fa:  pop    %ebp
0848207d +0x10fb:  ret
0848207e +0x10fc:  push   %ebp
0848207f +0x10fd:  mov    %esp,%ebp
08482081 +0x10ff:  sub    $0x28,%esp
08482084 +0x1102:  mov    0x8(%ebp),%eax
08482087 +0x1105:  mov    %eax,(%esp)
0848208a +0x1108:  call   08482817 <+0x1895>
0848208f +0x110d:  mov    %eax,0x4(%esp)
08482093 +0x1111:  lea    -0x9(%ebp),%eax
08482096 +0x1114:  mov    %eax,(%esp)
08482099 +0x1117:  call   08482076 <+0x10f4>
0848209e +0x111c:  leave
0848209f +0x111d:  ret
084820a0 +0x111e:  push   %ebp
084820a1 +0x111f:  mov    %esp,%ebp
084820a3 +0x1121:  push   %esi
084820a4 +0x1122:  push   %ebx
084820a5 +0x1123:  sub    $0x20,%esp
084820a8 +0x1126:  mov    0x8(%ebp),%esi
084820ab +0x1129:  cmpl   $0x0,0x10(%ebp)
084820af +0x112d:  jne    084820f7 <+0x1175>
084820b1 +0x112f:  mov    0xc(%ebp),%eax
084820b4 +0x1132:  mov    %eax,(%esp)
084820b7 +0x1135:  call   08481f94 <+0x1012>
084820bc +0x113a:  cmp    0x14(%ebp),%eax
084820bf +0x113d:  je     084820f7 <+0x1175>
084820c1 +0x113f:  mov    0x14(%ebp),%eax
084820c4 +0x1142:  mov    %eax,(%esp)
084820c7 +0x1145:  call   08482040 <+0x10be>
084820cc +0x114a:  mov    %eax,%ebx
084820ce +0x114c:  mov    0x18(%ebp),%eax
084820d1 +0x114f:  mov    %eax,0x4(%esp)
084820d5 +0x1153:  lea    -0xe(%ebp),%eax
084820d8 +0x1156:  mov    %eax,(%esp)
084820db +0x1159:  call   08482076 <+0x10f4>
084820e0 +0x115e:  mov    0xc(%ebp),%edx
084820e3 +0x1161:  mov    %ebx,0x8(%esp)
084820e7 +0x1165:  mov    %eax,0x4(%esp)
084820eb +0x1169:  mov    %edx,(%esp)
084820ee +0x116c:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
084820f3 +0x1171:  test   %al,%al
084820f5 +0x1173:  je     084820fe <+0x117c>
084820f7 +0x1175:  mov    $0x1,%eax
084820fc +0x117a:  jmp    08482103 <+0x1181>
084820fe +0x117c:  mov    $0x0,%eax
08482103 +0x1181:  mov    %al,-0xd(%ebp)
08482106 +0x1184:  mov    0x18(%ebp),%eax
08482109 +0x1187:  mov    %eax,0x4(%esp)
0848210d +0x118b:  mov    0xc(%ebp),%eax
08482110 +0x118e:  mov    %eax,(%esp)
08482113 +0x1191:  call   08482822 <+0x18a0>
08482118 +0x1196:  mov    %eax,-0xc(%ebp)
0848211b +0x1199:  mov    0xc(%ebp),%eax
0848211e +0x119c:  lea    0x4(%eax),%ecx
08482121 +0x119f:  mov    -0xc(%ebp),%edx
08482124 +0x11a2:  movzbl -0xd(%ebp),%eax
08482128 +0x11a6:  mov    %ecx,0xc(%esp)
0848212c +0x11aa:  mov    0x14(%ebp),%ecx
0848212f +0x11ad:  mov    %ecx,0x8(%esp)
08482133 +0x11b1:  mov    %edx,0x4(%esp)
08482137 +0x11b5:  mov    %eax,(%esp)
0848213a +0x11b8:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0848213f +0x11bd:  mov    0xc(%ebp),%eax
08482142 +0x11c0:  mov    0x14(%eax),%eax
08482145 +0x11c3:  lea    0x1(%eax),%edx
08482148 +0x11c6:  mov    0xc(%ebp),%eax
0848214b +0x11c9:  mov    %edx,0x14(%eax)
0848214e +0x11cc:  mov    -0xc(%ebp),%eax
08482151 +0x11cf:  mov    %eax,0x4(%esp)
08482155 +0x11d3:  mov    %esi,(%esp)
08482158 +0x11d6:  call   08481f86 <+0x1004>
0848215d +0x11db:  mov    %esi,%eax
0848215f +0x11dd:  add    $0x20,%esp
08482162 +0x11e0:  pop    %ebx
08482163 +0x11e1:  pop    %esi
08482164 +0x11e2:  pop    %ebp
08482165 +0x11e3:  ret    $0x4
08482168 +0x11e6:  push   %ebp
08482169 +0x11e7:  mov    %esp,%ebp
0848216b +0x11e9:  sub    $0x18,%esp
0848216e +0x11ec:  mov    0xc(%ebp),%eax
08482171 +0x11ef:  mov    %eax,(%esp)
08482174 +0x11f2:  call   084828a3 <+0x1921>
08482179 +0x11f7:  mov    0x8(%ebp),%edx
0848217c +0x11fa:  mov    (%eax),%eax
0848217e +0x11fc:  mov    %eax,(%edx)
08482180 +0x11fe:  mov    0x10(%ebp),%eax
08482183 +0x1201:  mov    %eax,(%esp)
08482186 +0x1204:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0848218b +0x1209:  movzbl (%eax),%edx
0848218e +0x120c:  mov    0x8(%ebp),%eax
08482191 +0x120f:  mov    %dl,0x4(%eax)
08482194 +0x1212:  leave
08482195 +0x1213:  ret
08482196 +0x1214:  push   %ebp
08482197 +0x1215:  mov    %esp,%ebp
08482199 +0x1217:  sub    $0x18,%esp
0848219c +0x121a:  mov    0x8(%ebp),%eax
0848219f +0x121d:  mov    (%eax),%eax
084821a1 +0x121f:  mov    %eax,(%esp)
084821a4 +0x1222:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
084821a9 +0x1227:  mov    0x8(%ebp),%edx
084821ac +0x122a:  mov    %eax,(%edx)
084821ae +0x122c:  mov    0x8(%ebp),%eax
084821b1 +0x122f:  leave
084821b2 +0x1230:  ret
084821b3 +0x1231:  nop
084821b4 +0x1232:  push   %ebp
084821b5 +0x1233:  mov    %esp,%ebp
084821b7 +0x1235:  sub    $0x18,%esp
084821ba +0x1238:  mov    0xc(%ebp),%eax
084821bd +0x123b:  mov    %eax,(%esp)
084821c0 +0x123e:  call   084828ab <+0x1929>
084821c5 +0x1243:  mov    0x8(%ebp),%edx
084821c8 +0x1246:  mov    (%eax),%eax
084821ca +0x1248:  mov    %eax,(%edx)
084821cc +0x124a:  mov    0x10(%ebp),%eax
084821cf +0x124d:  mov    %eax,(%esp)
084821d2 +0x1250:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
084821d7 +0x1255:  movzbl (%eax),%edx
084821da +0x1258:  mov    0x8(%ebp),%eax
084821dd +0x125b:  mov    %dl,0x4(%eax)
084821e0 +0x125e:  leave
084821e1 +0x125f:  ret
084821e2 +0x1260:  push   %ebp
084821e3 +0x1261:  mov    %esp,%ebp
084821e5 +0x1263:  sub    $0x18,%esp
084821e8 +0x1266:  mov    0x8(%ebp),%eax
084821eb +0x1269:  mov    %eax,(%esp)
084821ee +0x126c:  call   084828b4 <+0x1932>
084821f3 +0x1271:  mov    0x8(%ebp),%eax
084821f6 +0x1274:  movl   $0x0,(%eax)
084821fc +0x127a:  mov    0x8(%ebp),%eax
084821ff +0x127d:  movl   $0x0,0x4(%eax)
08482206 +0x1284:  mov    0x8(%ebp),%eax
08482209 +0x1287:  movl   $0x0,0x8(%eax)
08482210 +0x128e:  leave
08482211 +0x128f:  ret
08482212 +0x1290:  push   %ebp
08482213 +0x1291:  mov    %esp,%ebp
08482215 +0x1293:  sub    $0x18,%esp
08482218 +0x1296:  mov    0x8(%ebp),%eax
0848221b +0x1299:  mov    %eax,(%esp)
0848221e +0x129c:  call   084828c8 <+0x1946>
08482223 +0x12a1:  leave
08482224 +0x12a2:  ret
08482225 +0x12a3:  nop
08482226 +0x12a4:  push   %ebp
08482227 +0x12a5:  mov    %esp,%ebp
08482229 +0x12a7:  sub    $0x18,%esp
0848222c +0x12aa:  cmpl   $0x0,0xc(%ebp)
08482230 +0x12ae:  je     0848224b <+0x12c9>
08482232 +0x12b0:  mov    0x8(%ebp),%eax
08482235 +0x12b3:  mov    0x10(%ebp),%edx
08482238 +0x12b6:  mov    %edx,0x8(%esp)
0848223c +0x12ba:  mov    0xc(%ebp),%edx
0848223f +0x12bd:  mov    %edx,0x4(%esp)
08482243 +0x12c1:  mov    %eax,(%esp)
08482246 +0x12c4:  call   084828ce <+0x194c>
0848224b +0x12c9:  leave
0848224c +0x12ca:  ret
0848224d +0x12cb:  push   %ebp
0848224e +0x12cc:  mov    %esp,%ebp
08482250 +0x12ce:  sub    $0x18,%esp
08482253 +0x12d1:  mov    0xc(%ebp),%eax
08482256 +0x12d4:  mov    %eax,0x4(%esp)
0848225a +0x12d8:  mov    0x8(%ebp),%eax
0848225d +0x12db:  mov    %eax,(%esp)
08482260 +0x12de:  call   084828e1 <+0x195f>
08482265 +0x12e3:  leave
08482266 +0x12e4:  ret
08482267 +0x12e5:  nop
08482268 +0x12e6:  push   %ebp
08482269 +0x12e7:  mov    %esp,%ebp
0848226b +0x12e9:  push   %ebx
0848226c +0x12ea:  sub    $0x14,%esp
0848226f +0x12ed:  mov    0x10(%ebp),%eax
08482272 +0x12f0:  mov    %eax,(%esp)
08482275 +0x12f3:  call   084828e6 <+0x1964>
0848227a +0x12f8:  mov    (%eax),%ebx
0848227c +0x12fa:  mov    0xc(%ebp),%eax
0848227f +0x12fd:  mov    %eax,0x4(%esp)
08482283 +0x1301:  movl   $0x4,(%esp)
0848228a +0x1308:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0848228f +0x130d:  mov    %eax,%edx
08482291 +0x130f:  test   %edx,%edx
08482293 +0x1311:  je     08482297 <+0x1315>
08482295 +0x1313:  mov    %ebx,(%eax)
08482297 +0x1315:  add    $0x14,%esp
0848229a +0x1318:  pop    %ebx
0848229b +0x1319:  pop    %ebp
0848229c +0x131a:  ret
0848229d +0x131b:  push   %ebp
0848229e +0x131c:  mov    %esp,%ebp
084822a0 +0x131e:  push   %ebx
084822a1 +0x131f:  sub    $0x14,%esp
084822a4 +0x1322:  mov    0xc(%ebp),%eax
084822a7 +0x1325:  mov    %eax,(%esp)
084822aa +0x1328:  call   084828ee <+0x196c>
084822af +0x132d:  mov    %eax,%ebx
084822b1 +0x132f:  mov    0x8(%ebp),%eax
084822b4 +0x1332:  mov    %eax,(%esp)
084822b7 +0x1335:  call   084828ee <+0x196c>
084822bc +0x133a:  mov    0x10(%ebp),%edx
084822bf +0x133d:  mov    %edx,0x8(%esp)
084822c3 +0x1341:  mov    %ebx,0x4(%esp)
084822c7 +0x1345:  mov    %eax,(%esp)
084822ca +0x1348:  call   084828f6 <+0x1974>
084822cf +0x134d:  add    $0x14,%esp
084822d2 +0x1350:  pop    %ebx
084822d3 +0x1351:  pop    %ebp
084822d4 +0x1352:  ret
084822d5 +0x1353:  push   %ebp
084822d6 +0x1354:  mov    %esp,%ebp
084822d8 +0x1356:  mov    0x8(%ebp),%eax
084822db +0x1359:  pop    %ebp
084822dc +0x135a:  ret
084822dd +0x135b:  nop
084822de +0x135c:  push   %ebp
084822df +0x135d:  mov    %esp,%ebp
084822e1 +0x135f:  push   %ebx
084822e2 +0x1360:  sub    $0x24,%esp
084822e5 +0x1363:  mov    0x8(%ebp),%eax
084822e8 +0x1366:  mov    %eax,(%esp)
084822eb +0x1369:  call   08482956 <+0x19d4>
084822f0 +0x136e:  mov    %eax,%ebx
084822f2 +0x1370:  mov    0x8(%ebp),%eax
084822f5 +0x1373:  mov    %eax,(%esp)
084822f8 +0x1376:  call   0848293a <+0x19b8>
084822fd +0x137b:  mov    %ebx,%edx
084822ff +0x137d:  sub    %eax,%edx
08482301 +0x137f:  mov    0xc(%ebp),%eax
08482304 +0x1382:  cmp    %eax,%edx
08482306 +0x1384:  setb   %al
08482309 +0x1387:  test   %al,%al
0848230b +0x1389:  je     08482318 <+0x1396>
0848230d +0x138b:  mov    0x10(%ebp),%eax
08482310 +0x138e:  mov    %eax,(%esp)
08482313 +0x1391:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08482318 +0x1396:  mov    0x8(%ebp),%eax
0848231b +0x1399:  mov    %eax,(%esp)
0848231e +0x139c:  call   0848293a <+0x19b8>
08482323 +0x13a1:  mov    %eax,%ebx
08482325 +0x13a3:  mov    0x8(%ebp),%eax
08482328 +0x13a6:  mov    %eax,(%esp)
0848232b +0x13a9:  call   0848293a <+0x19b8>
08482330 +0x13ae:  mov    %eax,-0x10(%ebp)
08482333 +0x13b1:  lea    0xc(%ebp),%eax
08482336 +0x13b4:  mov    %eax,0x4(%esp)
0848233a +0x13b8:  lea    -0x10(%ebp),%eax
0848233d +0x13bb:  mov    %eax,(%esp)
08482340 +0x13be:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08482345 +0x13c3:  mov    (%eax),%eax
08482347 +0x13c5:  lea    (%ebx,%eax,1),%eax
0848234a +0x13c8:  mov    %eax,-0xc(%ebp)
0848234d +0x13cb:  mov    0x8(%ebp),%eax
08482350 +0x13ce:  mov    %eax,(%esp)
08482353 +0x13d1:  call   0848293a <+0x19b8>
08482358 +0x13d6:  cmp    -0xc(%ebp),%eax
0848235b +0x13d9:  ja     0848236d <+0x13eb>
0848235d +0x13db:  mov    0x8(%ebp),%eax
08482360 +0x13de:  mov    %eax,(%esp)
08482363 +0x13e1:  call   08482956 <+0x19d4>
08482368 +0x13e6:  cmp    -0xc(%ebp),%eax
0848236b +0x13e9:  jae    0848237a <+0x13f8>
0848236d +0x13eb:  mov    0x8(%ebp),%eax
08482370 +0x13ee:  mov    %eax,(%esp)
08482373 +0x13f1:  call   08482956 <+0x19d4>
08482378 +0x13f6:  jmp    0848237d <+0x13fb>
0848237a +0x13f8:  mov    -0xc(%ebp),%eax
0848237d +0x13fb:  add    $0x24,%esp
08482380 +0x13fe:  pop    %ebx
08482381 +0x13ff:  pop    %ebp
08482382 +0x1400:  ret
08482383 +0x1401:  nop
08482384 +0x1402:  push   %ebp
08482385 +0x1403:  mov    %esp,%ebp
08482387 +0x1405:  sub    $0x18,%esp
0848238a +0x1408:  cmpl   $0x0,0xc(%ebp)
0848238e +0x140c:  je     084823ac <+0x142a>
08482390 +0x140e:  mov    0x8(%ebp),%eax
08482393 +0x1411:  movl   $0x0,0x8(%esp)
0848239b +0x1419:  mov    0xc(%ebp),%edx
0848239e +0x141c:  mov    %edx,0x4(%esp)
084823a2 +0x1420:  mov    %eax,(%esp)
084823a5 +0x1423:  call   08482972 <+0x19f0>
084823aa +0x1428:  jmp    084823b1 <+0x142f>
084823ac +0x142a:  mov    $0x0,%eax
084823b1 +0x142f:  leave
084823b2 +0x1430:  ret
084823b3 +0x1431:  push   %ebp
084823b4 +0x1432:  mov    %esp,%ebp
084823b6 +0x1434:  sub    $0x28,%esp
084823b9 +0x1437:  lea    -0x10(%ebp),%eax
084823bc +0x143a:  lea    0xc(%ebp),%edx
084823bf +0x143d:  mov    %edx,0x4(%esp)
084823c3 +0x1441:  mov    %eax,(%esp)
084823c6 +0x1444:  call   084829aa <+0x1a28>
084823cb +0x1449:  sub    $0x4,%esp
084823ce +0x144c:  lea    -0xc(%ebp),%eax
084823d1 +0x144f:  lea    0x8(%ebp),%edx
084823d4 +0x1452:  mov    %edx,0x4(%esp)
084823d8 +0x1456:  mov    %eax,(%esp)
084823db +0x1459:  call   084829aa <+0x1a28>
084823e0 +0x145e:  sub    $0x4,%esp
084823e3 +0x1461:  mov    0x14(%ebp),%eax
084823e6 +0x1464:  mov    %eax,0xc(%esp)
084823ea +0x1468:  mov    0x10(%ebp),%eax
084823ed +0x146b:  mov    %eax,0x8(%esp)
084823f1 +0x146f:  mov    -0x10(%ebp),%eax
084823f4 +0x1472:  mov    %eax,0x4(%esp)
084823f8 +0x1476:  mov    -0xc(%ebp),%eax
084823fb +0x1479:  mov    %eax,(%esp)
084823fe +0x147c:  call   084829cf <+0x1a4d>
08482403 +0x1481:  leave
08482404 +0x1482:  ret
08482405 +0x1483:  nop
08482406 +0x1484:  push   %ebp
08482407 +0x1485:  mov    %esp,%ebp
08482409 +0x1487:  pop    %ebp
0848240a +0x1488:  ret
0848240b +0x1489:  push   %ebp
0848240c +0x148a:  mov    %esp,%ebp
0848240e +0x148c:  sub    $0x18,%esp
08482411 +0x148f:  mov    0x14(%ebp),%eax
08482414 +0x1492:  mov    %eax,0xc(%esp)
08482418 +0x1496:  mov    0x10(%ebp),%eax
0848241b +0x1499:  mov    %eax,0x8(%esp)
0848241f +0x149d:  mov    0xc(%ebp),%eax
08482422 +0x14a0:  mov    %eax,0x4(%esp)
08482426 +0x14a4:  mov    0x8(%ebp),%eax
08482429 +0x14a7:  mov    %eax,(%esp)
0848242c +0x14aa:  call   084829f0 <+0x1a6e>
08482431 +0x14af:  mov    0x14(%ebp),%eax
08482434 +0x14b2:  mov    %eax,0x8(%esp)
08482438 +0x14b6:  mov    0xc(%ebp),%eax
0848243b +0x14b9:  mov    %eax,0x4(%esp)
0848243f +0x14bd:  mov    0x8(%ebp),%eax
08482442 +0x14c0:  mov    %eax,(%esp)
08482445 +0x14c3:  call   08482a89 <+0x1b07>
0848244a +0x14c8:  leave
0848244b +0x14c9:  ret
0848244c +0x14ca:  push   %ebp
0848244d +0x14cb:  mov    %esp,%ebp
0848244f +0x14cd:  push   %ebx
08482450 +0x14ce:  sub    $0x24,%esp
08482453 +0x14d1:  mov    0x8(%ebp),%ebx
08482456 +0x14d4:  mov    0xc(%ebp),%eax
08482459 +0x14d7:  mov    (%eax),%edx
0848245b +0x14d9:  mov    0x10(%ebp),%eax
0848245e +0x14dc:  mov    (%eax),%eax
08482460 +0x14de:  shl    $0x2,%eax
08482463 +0x14e1:  lea    (%edx,%eax,1),%eax
08482466 +0x14e4:  mov    %eax,-0xc(%ebp)
08482469 +0x14e7:  lea    -0xc(%ebp),%eax
0848246c +0x14ea:  mov    %eax,0x4(%esp)
08482470 +0x14ee:  mov    %ebx,(%esp)
08482473 +0x14f1:  call   08481c96 <+0xd14>
08482478 +0x14f6:  mov    %ebx,%eax
0848247a +0x14f8:  add    $0x24,%esp
0848247d +0x14fb:  pop    %ebx
0848247e +0x14fc:  pop    %ebp
0848247f +0x14fd:  ret    $0x4
08482482 +0x1500:  push   %ebp
08482483 +0x1501:  mov    %esp,%ebp
08482485 +0x1503:  push   %ebx
08482486 +0x1504:  sub    $0x24,%esp
08482489 +0x1507:  mov    0x8(%ebp),%ebx
0848248c +0x150a:  mov    0xc(%ebp),%eax
0848248f +0x150d:  mov    (%eax),%edx
08482491 +0x150f:  mov    0x10(%ebp),%eax
08482494 +0x1512:  mov    (%eax),%eax
08482496 +0x1514:  shl    $0x2,%eax
08482499 +0x1517:  neg    %eax
0848249b +0x1519:  lea    (%edx,%eax,1),%eax
0848249e +0x151c:  mov    %eax,-0xc(%ebp)
084824a1 +0x151f:  lea    -0xc(%ebp),%eax
084824a4 +0x1522:  mov    %eax,0x4(%esp)
084824a8 +0x1526:  mov    %ebx,(%esp)
084824ab +0x1529:  call   08481c96 <+0xd14>
084824b0 +0x152e:  mov    %ebx,%eax
084824b2 +0x1530:  add    $0x24,%esp
084824b5 +0x1533:  pop    %ebx
084824b6 +0x1534:  pop    %ebp
084824b7 +0x1535:  ret    $0x4
084824ba +0x1538:  push   %ebp
084824bb +0x1539:  mov    %esp,%ebp
084824bd +0x153b:  sub    $0x18,%esp
084824c0 +0x153e:  mov    0xc(%ebp),%eax
084824c3 +0x1541:  mov    (%eax),%edx
084824c5 +0x1543:  mov    0x8(%ebp),%eax
084824c8 +0x1546:  mov    (%eax),%eax
084824ca +0x1548:  mov    %edx,0x4(%esp)
084824ce +0x154c:  mov    %eax,(%esp)
084824d1 +0x154f:  mov    0x14(%ebp),%eax
084824d4 +0x1552:  call   *%eax
084824d6 +0x1554:  test   %al,%al
084824d8 +0x1556:  je     0848251d <+0x159b>
084824da +0x1558:  mov    0x10(%ebp),%eax
084824dd +0x155b:  mov    (%eax),%edx
084824df +0x155d:  mov    0xc(%ebp),%eax
084824e2 +0x1560:  mov    (%eax),%eax
084824e4 +0x1562:  mov    %edx,0x4(%esp)
084824e8 +0x1566:  mov    %eax,(%esp)
084824eb +0x1569:  mov    0x14(%ebp),%eax
084824ee +0x156c:  call   *%eax
084824f0 +0x156e:  test   %al,%al
084824f2 +0x1570:  je     084824f9 <+0x1577>
084824f4 +0x1572:  mov    0xc(%ebp),%eax
084824f7 +0x1575:  jmp    0848255e <+0x15dc>
084824f9 +0x1577:  mov    0x10(%ebp),%eax
084824fc +0x157a:  mov    (%eax),%edx
084824fe +0x157c:  mov    0x8(%ebp),%eax
08482501 +0x157f:  mov    (%eax),%eax
08482503 +0x1581:  mov    %edx,0x4(%esp)
08482507 +0x1585:  mov    %eax,(%esp)
0848250a +0x1588:  mov    0x14(%ebp),%eax
0848250d +0x158b:  call   *%eax
0848250f +0x158d:  test   %al,%al
08482511 +0x158f:  je     08482518 <+0x1596>
08482513 +0x1591:  mov    0x10(%ebp),%eax
08482516 +0x1594:  jmp    0848255e <+0x15dc>
08482518 +0x1596:  mov    0x8(%ebp),%eax
0848251b +0x1599:  jmp    0848255e <+0x15dc>
0848251d +0x159b:  mov    0x10(%ebp),%eax
08482520 +0x159e:  mov    (%eax),%edx
08482522 +0x15a0:  mov    0x8(%ebp),%eax
08482525 +0x15a3:  mov    (%eax),%eax
08482527 +0x15a5:  mov    %edx,0x4(%esp)
0848252b +0x15a9:  mov    %eax,(%esp)
0848252e +0x15ac:  mov    0x14(%ebp),%eax
08482531 +0x15af:  call   *%eax
08482533 +0x15b1:  test   %al,%al
08482535 +0x15b3:  je     0848253c <+0x15ba>
08482537 +0x15b5:  mov    0x8(%ebp),%eax
0848253a +0x15b8:  jmp    0848255e <+0x15dc>
0848253c +0x15ba:  mov    0x10(%ebp),%eax
0848253f +0x15bd:  mov    (%eax),%edx
08482541 +0x15bf:  mov    0xc(%ebp),%eax
08482544 +0x15c2:  mov    (%eax),%eax
08482546 +0x15c4:  mov    %edx,0x4(%esp)
0848254a +0x15c8:  mov    %eax,(%esp)
0848254d +0x15cb:  mov    0x14(%ebp),%eax
08482550 +0x15ce:  call   *%eax
08482552 +0x15d0:  test   %al,%al
08482554 +0x15d2:  je     0848255b <+0x15d9>
08482556 +0x15d4:  mov    0x10(%ebp),%eax
08482559 +0x15d7:  jmp    0848255e <+0x15dc>
0848255b +0x15d9:  mov    0xc(%ebp),%eax
0848255e +0x15dc:  leave
0848255f +0x15dd:  ret
08482560 +0x15de:  push   %ebp
08482561 +0x15df:  mov    %esp,%ebp
08482563 +0x15e1:  push   %ebx
08482564 +0x15e2:  sub    $0x14,%esp
08482567 +0x15e5:  mov    0x8(%ebp),%ebx
0848256a +0x15e8:  jmp    08482577 <+0x15f5>
0848256c +0x15ea:  lea    0xc(%ebp),%eax
0848256f +0x15ed:  mov    %eax,(%esp)
08482572 +0x15f0:  call   084814d2 <+0x550>
08482577 +0x15f5:  lea    0xc(%ebp),%eax
0848257a +0x15f8:  mov    %eax,(%esp)
0848257d +0x15fb:  call   084814c8 <+0x546>
08482582 +0x1600:  mov    (%eax),%eax
08482584 +0x1602:  mov    0x14(%ebp),%edx
08482587 +0x1605:  mov    %edx,0x4(%esp)
0848258b +0x1609:  mov    %eax,(%esp)
0848258e +0x160c:  mov    0x18(%ebp),%eax
08482591 +0x160f:  call   *%eax
08482593 +0x1611:  test   %al,%al
08482595 +0x1613:  jne    0848256c <+0x15ea>
08482597 +0x1615:  lea    0x10(%ebp),%eax
0848259a +0x1618:  mov    %eax,(%esp)
0848259d +0x161b:  call   08482ada <+0x1b58>
084825a2 +0x1620:  jmp    084825af <+0x162d>
084825a4 +0x1622:  lea    0x10(%ebp),%eax
084825a7 +0x1625:  mov    %eax,(%esp)
084825aa +0x1628:  call   08482ada <+0x1b58>
084825af +0x162d:  lea    0x10(%ebp),%eax
084825b2 +0x1630:  mov    %eax,(%esp)
084825b5 +0x1633:  call   084814c8 <+0x546>
084825ba +0x1638:  mov    (%eax),%eax
084825bc +0x163a:  mov    %eax,0x4(%esp)
084825c0 +0x163e:  mov    0x14(%ebp),%eax
084825c3 +0x1641:  mov    %eax,(%esp)
084825c6 +0x1644:  mov    0x18(%ebp),%eax
084825c9 +0x1647:  call   *%eax
084825cb +0x1649:  test   %al,%al
084825cd +0x164b:  jne    084825a4 <+0x1622>
084825cf +0x164d:  lea    0x10(%ebp),%eax
084825d2 +0x1650:  mov    %eax,0x4(%esp)
084825d6 +0x1654:  lea    0xc(%ebp),%eax
084825d9 +0x1657:  mov    %eax,(%esp)
084825dc +0x165a:  call   08482aef <+0x1b6d>
084825e1 +0x165f:  xor    $0x1,%eax
084825e4 +0x1662:  test   %al,%al
084825e6 +0x1664:  je     084825f7 <+0x1675>
084825e8 +0x1666:  mov    0xc(%ebp),%eax
084825eb +0x1669:  mov    %eax,(%ebx)
084825ed +0x166b:  mov    %ebx,%eax
084825ef +0x166d:  add    $0x14,%esp
084825f2 +0x1670:  pop    %ebx
084825f3 +0x1671:  pop    %ebp
084825f4 +0x1672:  ret    $0x4
084825f7 +0x1675:  mov    0x10(%ebp),%eax
084825fa +0x1678:  mov    %eax,0x4(%esp)
084825fe +0x167c:  mov    0xc(%ebp),%eax
08482601 +0x167f:  mov    %eax,(%esp)
08482604 +0x1682:  call   08482b1b <+0x1b99>
08482609 +0x1687:  lea    0xc(%ebp),%eax
0848260c +0x168a:  mov    %eax,(%esp)
0848260f +0x168d:  call   084814d2 <+0x550>
08482614 +0x1692:  nop
08482615 +0x1693:  jmp    08482577 <+0x15f5>
0848261a +0x1698:  push   %ebp
0848261b +0x1699:  mov    %esp,%ebp
0848261d +0x169b:  sub    $0x38,%esp
08482620 +0x169e:  lea    0xc(%ebp),%eax
08482623 +0x16a1:  mov    %eax,0x4(%esp)
08482627 +0x16a5:  lea    0x8(%ebp),%eax
0848262a +0x16a8:  mov    %eax,(%esp)
0848262d +0x16ab:  call   08482b35 <+0x1bb3>
08482632 +0x16b0:  test   %al,%al
08482634 +0x16b2:  jne    0848272a <+0x17a8>
0848263a +0x16b8:  movl   $0x1,-0x1c(%ebp)
08482641 +0x16bf:  lea    -0x20(%ebp),%eax
08482644 +0x16c2:  lea    -0x1c(%ebp),%edx
08482647 +0x16c5:  mov    %edx,0x8(%esp)
0848264b +0x16c9:  lea    0x8(%ebp),%edx
0848264e +0x16cc:  mov    %edx,0x4(%esp)
08482652 +0x16d0:  mov    %eax,(%esp)
08482655 +0x16d3:  call   0848244c <+0x14ca>
0848265a +0x16d8:  sub    $0x4,%esp
0848265d +0x16db:  jmp    0848270e <+0x178c>
08482662 +0x16e0:  lea    -0x20(%ebp),%eax
08482665 +0x16e3:  mov    %eax,(%esp)
08482668 +0x16e6:  call   084814c8 <+0x546>
0848266d +0x16eb:  mov    (%eax),%eax
0848266f +0x16ed:  mov    %eax,-0xc(%ebp)
08482672 +0x16f0:  lea    0x8(%ebp),%eax
08482675 +0x16f3:  mov    %eax,(%esp)
08482678 +0x16f6:  call   084814c8 <+0x546>
0848267d +0x16fb:  mov    (%eax),%eax
0848267f +0x16fd:  mov    %eax,0x4(%esp)
08482683 +0x1701:  mov    -0xc(%ebp),%eax
08482686 +0x1704:  mov    %eax,(%esp)
08482689 +0x1707:  mov    0x10(%ebp),%eax
0848268c +0x170a:  call   *%eax
0848268e +0x170c:  test   %al,%al
08482690 +0x170e:  je     084826ea <+0x1768>
08482692 +0x1710:  movl   $0x1,-0x10(%ebp)
08482699 +0x1717:  lea    -0x14(%ebp),%eax
0848269c +0x171a:  lea    -0x10(%ebp),%edx
0848269f +0x171d:  mov    %edx,0x8(%esp)
084826a3 +0x1721:  lea    -0x20(%ebp),%edx
084826a6 +0x1724:  mov    %edx,0x4(%esp)
084826aa +0x1728:  mov    %eax,(%esp)
084826ad +0x172b:  call   0848244c <+0x14ca>
084826b2 +0x1730:  sub    $0x4,%esp
084826b5 +0x1733:  lea    -0x18(%ebp),%eax
084826b8 +0x1736:  mov    -0x14(%ebp),%edx
084826bb +0x1739:  mov    %edx,0xc(%esp)
084826bf +0x173d:  mov    -0x20(%ebp),%edx
084826c2 +0x1740:  mov    %edx,0x8(%esp)
084826c6 +0x1744:  mov    0x8(%ebp),%edx
084826c9 +0x1747:  mov    %edx,0x4(%esp)
084826cd +0x174b:  mov    %eax,(%esp)
084826d0 +0x174e:  call   08482b61 <+0x1bdf>
084826d5 +0x1753:  sub    $0x4,%esp
084826d8 +0x1756:  lea    0x8(%ebp),%edx
084826db +0x1759:  mov    %edx,(%esp)
084826de +0x175c:  call   084814c8 <+0x546>
084826e3 +0x1761:  mov    -0xc(%ebp),%edx
084826e6 +0x1764:  mov    %edx,(%eax)
084826e8 +0x1766:  jmp    08482703 <+0x1781>
084826ea +0x1768:  mov    0x10(%ebp),%eax
084826ed +0x176b:  mov    %eax,0x8(%esp)
084826f1 +0x176f:  mov    -0xc(%ebp),%eax
084826f4 +0x1772:  mov    %eax,0x4(%esp)
084826f8 +0x1776:  mov    -0x20(%ebp),%eax
084826fb +0x1779:  mov    %eax,(%esp)
084826fe +0x177c:  call   08482bbe <+0x1c3c>
08482703 +0x1781:  lea    -0x20(%ebp),%eax
08482706 +0x1784:  mov    %eax,(%esp)
08482709 +0x1787:  call   084814d2 <+0x550>
0848270e +0x178c:  lea    0xc(%ebp),%eax
08482711 +0x178f:  mov    %eax,0x4(%esp)
08482715 +0x1793:  lea    -0x20(%ebp),%eax
08482718 +0x1796:  mov    %eax,(%esp)
0848271b +0x1799:  call   0848149b <+0x519>
08482720 +0x179e:  test   %al,%al
08482722 +0x17a0:  jne    08482662 <+0x16e0>
08482728 +0x17a6:  jmp    0848272b <+0x17a9>
0848272a +0x17a8:  nop
0848272b +0x17a9:  leave
0848272c +0x17aa:  ret
0848272d +0x17ab:  push   %ebp
0848272e +0x17ac:  mov    %esp,%ebp
08482730 +0x17ae:  sub    $0x28,%esp
08482733 +0x17b1:  mov    0x8(%ebp),%eax
08482736 +0x17b4:  mov    %eax,-0xc(%ebp)
08482739 +0x17b7:  jmp    08482769 <+0x17e7>
0848273b +0x17b9:  lea    -0xc(%ebp),%eax
0848273e +0x17bc:  mov    %eax,(%esp)
08482741 +0x17bf:  call   084814c8 <+0x546>
08482746 +0x17c4:  mov    (%eax),%eax
08482748 +0x17c6:  mov    0x10(%ebp),%edx
0848274b +0x17c9:  mov    %edx,0x8(%esp)
0848274f +0x17cd:  mov    %eax,0x4(%esp)
08482753 +0x17d1:  mov    -0xc(%ebp),%eax
08482756 +0x17d4:  mov    %eax,(%esp)
08482759 +0x17d7:  call   08482bbe <+0x1c3c>
0848275e +0x17dc:  lea    -0xc(%ebp),%eax
08482761 +0x17df:  mov    %eax,(%esp)
08482764 +0x17e2:  call   084814d2 <+0x550>
08482769 +0x17e7:  lea    0xc(%ebp),%eax
0848276c +0x17ea:  mov    %eax,0x4(%esp)
08482770 +0x17ee:  lea    -0xc(%ebp),%eax
08482773 +0x17f1:  mov    %eax,(%esp)
08482776 +0x17f4:  call   0848149b <+0x519>
0848277b +0x17f9:  test   %al,%al
0848277d +0x17fb:  jne    0848273b <+0x17b9>
0848277f +0x17fd:  leave
08482780 +0x17fe:  ret
08482781 +0x17ff:  nop
08482782 +0x1800:  push   %ebp
08482783 +0x1801:  mov    %esp,%ebp
08482785 +0x1803:  sub    $0x18,%esp
08482788 +0x1806:  mov    0x8(%ebp),%eax
0848278b +0x1809:  mov    %eax,(%esp)
0848278e +0x180c:  call   08482c3c <+0x1cba>
08482793 +0x1811:  leave
08482794 +0x1812:  ret
08482795 +0x1813:  nop
08482796 +0x1814:  push   %ebp
08482797 +0x1815:  mov    %esp,%ebp
08482799 +0x1817:  mov    0x8(%ebp),%eax
0848279c +0x181a:  movl   $0x0,0x4(%eax)
084827a3 +0x1821:  mov    0x8(%ebp),%eax
084827a6 +0x1824:  movl   $0x0,0x8(%eax)
084827ad +0x182b:  mov    0x8(%ebp),%eax
084827b0 +0x182e:  lea    0x4(%eax),%edx
084827b3 +0x1831:  mov    0x8(%ebp),%eax
084827b6 +0x1834:  mov    %edx,0xc(%eax)
084827b9 +0x1837:  mov    0x8(%ebp),%eax
084827bc +0x183a:  lea    0x4(%eax),%edx
084827bf +0x183d:  mov    0x8(%ebp),%eax
084827c2 +0x1840:  mov    %edx,0x10(%eax)
084827c5 +0x1843:  pop    %ebp
084827c6 +0x1844:  ret
084827c7 +0x1845:  nop
084827c8 +0x1846:  push   %ebp
084827c9 +0x1847:  mov    %esp,%ebp
084827cb +0x1849:  mov    0x8(%ebp),%eax
084827ce +0x184c:  pop    %ebp
084827cf +0x184d:  ret
084827d0 +0x184e:  push   %ebp
084827d1 +0x184f:  mov    %esp,%ebp
084827d3 +0x1851:  pop    %ebp
084827d4 +0x1852:  ret
084827d5 +0x1853:  nop
084827d6 +0x1854:  push   %ebp
084827d7 +0x1855:  mov    %esp,%ebp
084827d9 +0x1857:  sub    $0x18,%esp
084827dc +0x185a:  mov    0xc(%ebp),%eax
084827df +0x185d:  mov    %eax,(%esp)
084827e2 +0x1860:  call   084827d0 <+0x184e>
084827e7 +0x1865:  leave
084827e8 +0x1866:  ret
084827e9 +0x1867:  nop
084827ea +0x1868:  push   %ebp
084827eb +0x1869:  mov    %esp,%ebp
084827ed +0x186b:  sub    $0x18,%esp
084827f0 +0x186e:  mov    0x8(%ebp),%eax
084827f3 +0x1871:  movl   $0x1,0x8(%esp)
084827fb +0x1879:  mov    0xc(%ebp),%edx
084827fe +0x187c:  mov    %edx,0x4(%esp)
08482802 +0x1880:  mov    %eax,(%esp)
08482805 +0x1883:  call   08482c42 <+0x1cc0>
0848280a +0x1888:  leave
0848280b +0x1889:  ret
0848280c +0x188a:  push   %ebp
0848280d +0x188b:  mov    %esp,%ebp
0848280f +0x188d:  mov    0x8(%ebp),%eax
08482812 +0x1890:  add    $0x10,%eax
08482815 +0x1893:  pop    %ebp
08482816 +0x1894:  ret
08482817 +0x1895:  push   %ebp
08482818 +0x1896:  mov    %esp,%ebp
0848281a +0x1898:  mov    0x8(%ebp),%eax
0848281d +0x189b:  add    $0x10,%eax
08482820 +0x189e:  pop    %ebp
08482821 +0x189f:  ret
08482822 +0x18a0:  push   %ebp
08482823 +0x18a1:  mov    %esp,%ebp
08482825 +0x18a3:  push   %esi
08482826 +0x18a4:  push   %ebx
08482827 +0x18a5:  sub    $0x20,%esp
0848282a +0x18a8:  mov    0x8(%ebp),%eax
0848282d +0x18ab:  mov    %eax,(%esp)
08482830 +0x18ae:  call   08482c56 <+0x1cd4>
08482835 +0x18b3:  mov    %eax,-0xc(%ebp)
08482838 +0x18b6:  mov    0xc(%ebp),%eax
0848283b +0x18b9:  mov    %eax,(%esp)
0848283e +0x18bc:  call   08482c79 <+0x1cf7>
08482843 +0x18c1:  mov    %eax,%ebx
08482845 +0x18c3:  mov    0x8(%ebp),%eax
08482848 +0x18c6:  mov    %eax,(%esp)
0848284b +0x18c9:  call   084827c8 <+0x1846>
08482850 +0x18ce:  mov    %ebx,0x8(%esp)
08482854 +0x18d2:  mov    -0xc(%ebp),%edx
08482857 +0x18d5:  mov    %edx,0x4(%esp)
0848285b +0x18d9:  mov    %eax,(%esp)
0848285e +0x18dc:  call   08482c82 <+0x1d00>
08482863 +0x18e1:  jmp    08482899 <+0x1917>
08482865 +0x18e3:  mov    %eax,(%esp)
08482868 +0x18e6:  call   08725ce0 <__cxa_begin_catch>
0848286d +0x18eb:  mov    -0xc(%ebp),%eax
08482870 +0x18ee:  mov    %eax,0x4(%esp)
08482874 +0x18f2:  mov    0x8(%ebp),%eax
08482877 +0x18f5:  mov    %eax,(%esp)
0848287a +0x18f8:  call   084827ea <+0x1868>
0848287f +0x18fd:  call   08724be0 <__cxa_rethrow>
08482884 +0x1902:  mov    %edx,%ebx
08482886 +0x1904:  mov    %eax,%esi
08482888 +0x1906:  call   08725c30 <__cxa_end_catch>
0848288d +0x190b:  mov    %esi,%eax
0848288f +0x190d:  mov    %ebx,%edx
08482891 +0x190f:  mov    %eax,(%esp)
08482894 +0x1912:  call   08ae3750 <_Unwind_Resume>
08482899 +0x1917:  mov    -0xc(%ebp),%eax
0848289c +0x191a:  add    $0x20,%esp
0848289f +0x191d:  pop    %ebx
084828a0 +0x191e:  pop    %esi
084828a1 +0x191f:  pop    %ebp
084828a2 +0x1920:  ret
084828a3 +0x1921:  push   %ebp
084828a4 +0x1922:  mov    %esp,%ebp
084828a6 +0x1924:  mov    0x8(%ebp),%eax
084828a9 +0x1927:  pop    %ebp
084828aa +0x1928:  ret
084828ab +0x1929:  push   %ebp
084828ac +0x192a:  mov    %esp,%ebp
084828ae +0x192c:  mov    0x8(%ebp),%eax
084828b1 +0x192f:  pop    %ebp
084828b2 +0x1930:  ret
084828b3 +0x1931:  nop
084828b4 +0x1932:  push   %ebp
084828b5 +0x1933:  mov    %esp,%ebp
084828b7 +0x1935:  sub    $0x18,%esp
084828ba +0x1938:  mov    0x8(%ebp),%eax
084828bd +0x193b:  mov    %eax,(%esp)
084828c0 +0x193e:  call   08482cc2 <+0x1d40>
084828c5 +0x1943:  leave
084828c6 +0x1944:  ret
084828c7 +0x1945:  nop
084828c8 +0x1946:  push   %ebp
084828c9 +0x1947:  mov    %esp,%ebp
084828cb +0x1949:  pop    %ebp
084828cc +0x194a:  ret
084828cd +0x194b:  nop
084828ce +0x194c:  push   %ebp
084828cf +0x194d:  mov    %esp,%ebp
084828d1 +0x194f:  sub    $0x18,%esp
084828d4 +0x1952:  mov    0xc(%ebp),%eax
084828d7 +0x1955:  mov    %eax,(%esp)
084828da +0x1958:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084828df +0x195d:  leave
084828e0 +0x195e:  ret
084828e1 +0x195f:  push   %ebp
084828e2 +0x1960:  mov    %esp,%ebp
084828e4 +0x1962:  pop    %ebp
084828e5 +0x1963:  ret
084828e6 +0x1964:  push   %ebp
084828e7 +0x1965:  mov    %esp,%ebp
084828e9 +0x1967:  mov    0x8(%ebp),%eax
084828ec +0x196a:  pop    %ebp
084828ed +0x196b:  ret
084828ee +0x196c:  push   %ebp
084828ef +0x196d:  mov    %esp,%ebp
084828f1 +0x196f:  mov    0x8(%ebp),%eax
084828f4 +0x1972:  pop    %ebp
084828f5 +0x1973:  ret
084828f6 +0x1974:  push   %ebp
084828f7 +0x1975:  mov    %esp,%ebp
084828f9 +0x1977:  push   %esi
084828fa +0x1978:  push   %ebx
084828fb +0x1979:  sub    $0x10,%esp
084828fe +0x197c:  mov    0x10(%ebp),%eax
08482901 +0x197f:  mov    %eax,(%esp)
08482904 +0x1982:  call   08482cc7 <+0x1d45>
08482909 +0x1987:  mov    %eax,%esi
0848290b +0x1989:  mov    0xc(%ebp),%eax
0848290e +0x198c:  mov    %eax,(%esp)
08482911 +0x198f:  call   08482cc7 <+0x1d45>
08482916 +0x1994:  mov    %eax,%ebx
08482918 +0x1996:  mov    0x8(%ebp),%eax
0848291b +0x1999:  mov    %eax,(%esp)
0848291e +0x199c:  call   08482cc7 <+0x1d45>
08482923 +0x19a1:  mov    %esi,0x8(%esp)
08482927 +0x19a5:  mov    %ebx,0x4(%esp)
0848292b +0x19a9:  mov    %eax,(%esp)
0848292e +0x19ac:  call   08482ccf <+0x1d4d>
08482933 +0x19b1:  add    $0x10,%esp
08482936 +0x19b4:  pop    %ebx
08482937 +0x19b5:  pop    %esi
08482938 +0x19b6:  pop    %ebp
08482939 +0x19b7:  ret
0848293a +0x19b8:  push   %ebp
0848293b +0x19b9:  mov    %esp,%ebp
0848293d +0x19bb:  mov    0x8(%ebp),%eax
08482940 +0x19be:  mov    0x4(%eax),%eax
08482943 +0x19c1:  mov    %eax,%edx
08482945 +0x19c3:  mov    0x8(%ebp),%eax
08482948 +0x19c6:  mov    (%eax),%eax
0848294a +0x19c8:  mov    %edx,%ecx
0848294c +0x19ca:  sub    %eax,%ecx
0848294e +0x19cc:  mov    %ecx,%eax
08482950 +0x19ce:  sar    $0x2,%eax
08482953 +0x19d1:  pop    %ebp
08482954 +0x19d2:  ret
08482955 +0x19d3:  nop
08482956 +0x19d4:  push   %ebp
08482957 +0x19d5:  mov    %esp,%ebp
08482959 +0x19d7:  sub    $0x18,%esp
0848295c +0x19da:  mov    0x8(%ebp),%eax
0848295f +0x19dd:  mov    %eax,(%esp)
08482962 +0x19e0:  call   08482cf4 <+0x1d72>
08482967 +0x19e5:  mov    %eax,(%esp)
0848296a +0x19e8:  call   08482cfc <+0x1d7a>
0848296f +0x19ed:  leave
08482970 +0x19ee:  ret
08482971 +0x19ef:  nop
08482972 +0x19f0:  push   %ebp
08482973 +0x19f1:  mov    %esp,%ebp
08482975 +0x19f3:  sub    $0x18,%esp
08482978 +0x19f6:  mov    0x8(%ebp),%eax
0848297b +0x19f9:  mov    %eax,(%esp)
0848297e +0x19fc:  call   08482cfc <+0x1d7a>
08482983 +0x1a01:  cmp    0xc(%ebp),%eax
08482986 +0x1a04:  setb   %al
08482989 +0x1a07:  movzbl %al,%eax
0848298c +0x1a0a:  test   %eax,%eax
0848298e +0x1a0c:  setne  %al
08482991 +0x1a0f:  test   %al,%al
08482993 +0x1a11:  je     0848299a <+0x1a18>
08482995 +0x1a13:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0848299a +0x1a18:  mov    0xc(%ebp),%eax
0848299d +0x1a1b:  shl    $0x2,%eax
084829a0 +0x1a1e:  mov    %eax,(%esp)
084829a3 +0x1a21:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084829a8 +0x1a26:  leave
084829a9 +0x1a27:  ret
084829aa +0x1a28:  push   %ebp
084829ab +0x1a29:  mov    %esp,%ebp
084829ad +0x1a2b:  push   %ebx
084829ae +0x1a2c:  sub    $0x14,%esp
084829b1 +0x1a2f:  mov    0x8(%ebp),%ebx
084829b4 +0x1a32:  mov    0xc(%ebp),%eax
084829b7 +0x1a35:  mov    (%eax),%eax
084829b9 +0x1a37:  mov    %eax,0x4(%esp)
084829bd +0x1a3b:  mov    %ebx,(%esp)
084829c0 +0x1a3e:  call   08482d06 <+0x1d84>
084829c5 +0x1a43:  mov    %ebx,%eax
084829c7 +0x1a45:  add    $0x14,%esp
084829ca +0x1a48:  pop    %ebx
084829cb +0x1a49:  pop    %ebp
084829cc +0x1a4a:  ret    $0x4
084829cf +0x1a4d:  push   %ebp
084829d0 +0x1a4e:  mov    %esp,%ebp
084829d2 +0x1a50:  sub    $0x18,%esp
084829d5 +0x1a53:  mov    0x10(%ebp),%eax
084829d8 +0x1a56:  mov    %eax,0x8(%esp)
084829dc +0x1a5a:  mov    0xc(%ebp),%eax
084829df +0x1a5d:  mov    %eax,0x4(%esp)
084829e3 +0x1a61:  mov    0x8(%ebp),%eax
084829e6 +0x1a64:  mov    %eax,(%esp)
084829e9 +0x1a67:  call   08482d13 <+0x1d91>
084829ee +0x1a6c:  leave
084829ef +0x1a6d:  ret
084829f0 +0x1a6e:  push   %ebp
084829f1 +0x1a6f:  mov    %esp,%ebp
084829f3 +0x1a71:  push   %ebx
084829f4 +0x1a72:  sub    $0x24,%esp
084829f7 +0x1a75:  mov    0x14(%ebp),%eax
084829fa +0x1a78:  mov    %eax,0x8(%esp)
084829fe +0x1a7c:  mov    0xc(%ebp),%eax
08482a01 +0x1a7f:  mov    %eax,0x4(%esp)
08482a05 +0x1a83:  mov    0x8(%ebp),%eax
08482a08 +0x1a86:  mov    %eax,(%esp)
08482a0b +0x1a89:  call   08482d34 <+0x1db2>
08482a10 +0x1a8e:  mov    0xc(%ebp),%eax
08482a13 +0x1a91:  mov    %eax,-0xc(%ebp)
08482a16 +0x1a94:  jmp    08482a6d <+0x1aeb>
08482a18 +0x1a96:  lea    0x8(%ebp),%eax
08482a1b +0x1a99:  mov    %eax,(%esp)
08482a1e +0x1a9c:  call   084814c8 <+0x546>
08482a23 +0x1aa1:  mov    (%eax),%ebx
08482a25 +0x1aa3:  lea    -0xc(%ebp),%eax
08482a28 +0x1aa6:  mov    %eax,(%esp)
08482a2b +0x1aa9:  call   084814c8 <+0x546>
08482a30 +0x1aae:  mov    (%eax),%eax
08482a32 +0x1ab0:  mov    %ebx,0x4(%esp)
08482a36 +0x1ab4:  mov    %eax,(%esp)
08482a39 +0x1ab7:  mov    0x14(%ebp),%eax
08482a3c +0x1aba:  call   *%eax
08482a3e +0x1abc:  test   %al,%al
08482a40 +0x1abe:  je     08482a62 <+0x1ae0>
08482a42 +0x1ac0:  mov    0x14(%ebp),%eax
08482a45 +0x1ac3:  mov    %eax,0xc(%esp)
08482a49 +0x1ac7:  mov    -0xc(%ebp),%eax
08482a4c +0x1aca:  mov    %eax,0x8(%esp)
08482a50 +0x1ace:  mov    0xc(%ebp),%eax
08482a53 +0x1ad1:  mov    %eax,0x4(%esp)
08482a57 +0x1ad5:  mov    0x8(%ebp),%eax
08482a5a +0x1ad8:  mov    %eax,(%esp)
08482a5d +0x1adb:  call   08482dff <+0x1e7d>
08482a62 +0x1ae0:  lea    -0xc(%ebp),%eax
08482a65 +0x1ae3:  mov    %eax,(%esp)
08482a68 +0x1ae6:  call   084814d2 <+0x550>
08482a6d +0x1aeb:  lea    0x10(%ebp),%eax
08482a70 +0x1aee:  mov    %eax,0x4(%esp)
08482a74 +0x1af2:  lea    -0xc(%ebp),%eax
08482a77 +0x1af5:  mov    %eax,(%esp)
08482a7a +0x1af8:  call   08482aef <+0x1b6d>
08482a7f +0x1afd:  test   %al,%al
08482a81 +0x1aff:  jne    08482a18 <+0x1a96>
08482a83 +0x1b01:  add    $0x24,%esp
08482a86 +0x1b04:  pop    %ebx
08482a87 +0x1b05:  pop    %ebp
08482a88 +0x1b06:  ret
08482a89 +0x1b07:  push   %ebp
08482a8a +0x1b08:  mov    %esp,%ebp
08482a8c +0x1b0a:  sub    $0x18,%esp
08482a8f +0x1b0d:  jmp    08482abc <+0x1b3a>
08482a91 +0x1b0f:  lea    0xc(%ebp),%eax
08482a94 +0x1b12:  mov    %eax,(%esp)
08482a97 +0x1b15:  call   08482ada <+0x1b58>
08482a9c +0x1b1a:  mov    0x10(%ebp),%eax
08482a9f +0x1b1d:  mov    %eax,0xc(%esp)
08482aa3 +0x1b21:  mov    0xc(%ebp),%eax
08482aa6 +0x1b24:  mov    %eax,0x8(%esp)
08482aaa +0x1b28:  mov    0xc(%ebp),%eax
08482aad +0x1b2b:  mov    %eax,0x4(%esp)
08482ab1 +0x1b2f:  mov    0x8(%ebp),%eax
08482ab4 +0x1b32:  mov    %eax,(%esp)
08482ab7 +0x1b35:  call   08482dff <+0x1e7d>
08482abc +0x1b3a:  lea    0x8(%ebp),%eax
08482abf +0x1b3d:  mov    %eax,0x4(%esp)
08482ac3 +0x1b41:  lea    0xc(%ebp),%eax
08482ac6 +0x1b44:  mov    %eax,(%esp)
08482ac9 +0x1b47:  call   08481ca5 <+0xd23>
08482ace +0x1b4c:  cmp    $0x1,%eax
08482ad1 +0x1b4f:  setg   %al
08482ad4 +0x1b52:  test   %al,%al
08482ad6 +0x1b54:  jne    08482a91 <+0x1b0f>
08482ad8 +0x1b56:  leave
08482ad9 +0x1b57:  ret
08482ada +0x1b58:  push   %ebp
08482adb +0x1b59:  mov    %esp,%ebp
08482add +0x1b5b:  mov    0x8(%ebp),%eax
08482ae0 +0x1b5e:  mov    (%eax),%eax
08482ae2 +0x1b60:  lea    -0x4(%eax),%edx
08482ae5 +0x1b63:  mov    0x8(%ebp),%eax
08482ae8 +0x1b66:  mov    %edx,(%eax)
08482aea +0x1b68:  mov    0x8(%ebp),%eax
08482aed +0x1b6b:  pop    %ebp
08482aee +0x1b6c:  ret
08482aef +0x1b6d:  push   %ebp
08482af0 +0x1b6e:  mov    %esp,%ebp
08482af2 +0x1b70:  push   %ebx
08482af3 +0x1b71:  sub    $0x14,%esp
08482af6 +0x1b74:  mov    0x8(%ebp),%eax
08482af9 +0x1b77:  mov    %eax,(%esp)
08482afc +0x1b7a:  call   08481ede <+0xf5c>
08482b01 +0x1b7f:  mov    (%eax),%ebx
08482b03 +0x1b81:  mov    0xc(%ebp),%eax
08482b06 +0x1b84:  mov    %eax,(%esp)
08482b09 +0x1b87:  call   08481ede <+0xf5c>
08482b0e +0x1b8c:  mov    (%eax),%eax
08482b10 +0x1b8e:  cmp    %eax,%ebx
08482b12 +0x1b90:  setb   %al
08482b15 +0x1b93:  add    $0x14,%esp
08482b18 +0x1b96:  pop    %ebx
08482b19 +0x1b97:  pop    %ebp
08482b1a +0x1b98:  ret
08482b1b +0x1b99:  push   %ebp
08482b1c +0x1b9a:  mov    %esp,%ebp
08482b1e +0x1b9c:  sub    $0x18,%esp
08482b21 +0x1b9f:  mov    0xc(%ebp),%eax
08482b24 +0x1ba2:  mov    %eax,0x4(%esp)
08482b28 +0x1ba6:  mov    0x8(%ebp),%eax
08482b2b +0x1ba9:  mov    %eax,(%esp)
08482b2e +0x1bac:  call   08482e89 <+0x1f07>
08482b33 +0x1bb1:  leave
08482b34 +0x1bb2:  ret
08482b35 +0x1bb3:  push   %ebp
08482b36 +0x1bb4:  mov    %esp,%ebp
08482b38 +0x1bb6:  push   %ebx
08482b39 +0x1bb7:  sub    $0x14,%esp
08482b3c +0x1bba:  mov    0x8(%ebp),%eax
08482b3f +0x1bbd:  mov    %eax,(%esp)
08482b42 +0x1bc0:  call   08481ede <+0xf5c>
08482b47 +0x1bc5:  mov    (%eax),%ebx
08482b49 +0x1bc7:  mov    0xc(%ebp),%eax
08482b4c +0x1bca:  mov    %eax,(%esp)
08482b4f +0x1bcd:  call   08481ede <+0xf5c>
08482b54 +0x1bd2:  mov    (%eax),%eax
08482b56 +0x1bd4:  cmp    %eax,%ebx
08482b58 +0x1bd6:  sete   %al
08482b5b +0x1bd9:  add    $0x14,%esp
08482b5e +0x1bdc:  pop    %ebx
08482b5f +0x1bdd:  pop    %ebp
08482b60 +0x1bde:  ret
08482b61 +0x1bdf:  push   %ebp
08482b62 +0x1be0:  mov    %esp,%ebp
08482b64 +0x1be2:  push   %ebx
08482b65 +0x1be3:  sub    $0x24,%esp
08482b68 +0x1be6:  mov    0x8(%ebp),%ebx
08482b6b +0x1be9:  lea    -0x10(%ebp),%eax
08482b6e +0x1bec:  mov    0x10(%ebp),%edx
08482b71 +0x1bef:  mov    %edx,0x4(%esp)
08482b75 +0x1bf3:  mov    %eax,(%esp)
08482b78 +0x1bf6:  call   08482eba <+0x1f38>
08482b7d +0x1bfb:  sub    $0x4,%esp
08482b80 +0x1bfe:  lea    -0xc(%ebp),%eax
08482b83 +0x1c01:  mov    0xc(%ebp),%edx
08482b86 +0x1c04:  mov    %edx,0x4(%esp)
08482b8a +0x1c08:  mov    %eax,(%esp)
08482b8d +0x1c0b:  call   08482eba <+0x1f38>
08482b92 +0x1c10:  sub    $0x4,%esp
08482b95 +0x1c13:  mov    0x14(%ebp),%eax
08482b98 +0x1c16:  mov    %eax,0xc(%esp)
08482b9c +0x1c1a:  mov    -0x10(%ebp),%eax
08482b9f +0x1c1d:  mov    %eax,0x8(%esp)
08482ba3 +0x1c21:  mov    -0xc(%ebp),%eax
08482ba6 +0x1c24:  mov    %eax,0x4(%esp)
08482baa +0x1c28:  mov    %ebx,(%esp)
08482bad +0x1c2b:  call   08482ec9 <+0x1f47>
08482bb2 +0x1c30:  sub    $0x4,%esp
08482bb5 +0x1c33:  mov    %ebx,%eax
08482bb7 +0x1c35:  mov    -0x4(%ebp),%ebx
08482bba +0x1c38:  leave
08482bbb +0x1c39:  ret    $0x4
08482bbe +0x1c3c:  push   %ebp
08482bbf +0x1c3d:  mov    %esp,%ebp
08482bc1 +0x1c3f:  push   %ebx
08482bc2 +0x1c40:  sub    $0x24,%esp
08482bc5 +0x1c43:  mov    0x8(%ebp),%eax
08482bc8 +0x1c46:  mov    %eax,-0xc(%ebp)
08482bcb +0x1c49:  lea    -0xc(%ebp),%eax
08482bce +0x1c4c:  mov    %eax,(%esp)
08482bd1 +0x1c4f:  call   08482ada <+0x1b58>
08482bd6 +0x1c54:  jmp    08482c05 <+0x1c83>
08482bd8 +0x1c56:  lea    0x8(%ebp),%eax
08482bdb +0x1c59:  mov    %eax,(%esp)
08482bde +0x1c5c:  call   084814c8 <+0x546>
08482be3 +0x1c61:  mov    %eax,%ebx
08482be5 +0x1c63:  lea    -0xc(%ebp),%eax
08482be8 +0x1c66:  mov    %eax,(%esp)
08482beb +0x1c69:  call   084814c8 <+0x546>
08482bf0 +0x1c6e:  mov    (%eax),%eax
08482bf2 +0x1c70:  mov    %eax,(%ebx)
08482bf4 +0x1c72:  mov    -0xc(%ebp),%eax
08482bf7 +0x1c75:  mov    %eax,0x8(%ebp)
08482bfa +0x1c78:  lea    -0xc(%ebp),%eax
08482bfd +0x1c7b:  mov    %eax,(%esp)
08482c00 +0x1c7e:  call   08482ada <+0x1b58>
08482c05 +0x1c83:  lea    -0xc(%ebp),%eax
08482c08 +0x1c86:  mov    %eax,(%esp)
08482c0b +0x1c89:  call   084814c8 <+0x546>
08482c10 +0x1c8e:  mov    (%eax),%eax
08482c12 +0x1c90:  mov    %eax,0x4(%esp)
08482c16 +0x1c94:  mov    0xc(%ebp),%eax
08482c19 +0x1c97:  mov    %eax,(%esp)
08482c1c +0x1c9a:  mov    0x10(%ebp),%eax
08482c1f +0x1c9d:  call   *%eax
08482c21 +0x1c9f:  test   %al,%al
08482c23 +0x1ca1:  jne    08482bd8 <+0x1c56>
08482c25 +0x1ca3:  lea    0x8(%ebp),%eax
08482c28 +0x1ca6:  mov    %eax,(%esp)
08482c2b +0x1ca9:  call   084814c8 <+0x546>
08482c30 +0x1cae:  mov    0xc(%ebp),%edx
08482c33 +0x1cb1:  mov    %edx,(%eax)
08482c35 +0x1cb3:  add    $0x24,%esp
08482c38 +0x1cb6:  pop    %ebx
08482c39 +0x1cb7:  pop    %ebp
08482c3a +0x1cb8:  ret
08482c3b +0x1cb9:  nop
08482c3c +0x1cba:  push   %ebp
08482c3d +0x1cbb:  mov    %esp,%ebp
08482c3f +0x1cbd:  pop    %ebp
08482c40 +0x1cbe:  ret
08482c41 +0x1cbf:  nop
08482c42 +0x1cc0:  push   %ebp
08482c43 +0x1cc1:  mov    %esp,%ebp
08482c45 +0x1cc3:  sub    $0x18,%esp
08482c48 +0x1cc6:  mov    0xc(%ebp),%eax
08482c4b +0x1cc9:  mov    %eax,(%esp)
08482c4e +0x1ccc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08482c53 +0x1cd1:  leave
08482c54 +0x1cd2:  ret
08482c55 +0x1cd3:  nop
08482c56 +0x1cd4:  push   %ebp
08482c57 +0x1cd5:  mov    %esp,%ebp
08482c59 +0x1cd7:  sub    $0x18,%esp
08482c5c +0x1cda:  mov    0x8(%ebp),%eax
08482c5f +0x1cdd:  movl   $0x0,0x8(%esp)
08482c67 +0x1ce5:  movl   $0x1,0x4(%esp)
08482c6f +0x1ced:  mov    %eax,(%esp)
08482c72 +0x1cf0:  call   08482f28 <+0x1fa6>
08482c77 +0x1cf5:  leave
08482c78 +0x1cf6:  ret
08482c79 +0x1cf7:  push   %ebp
08482c7a +0x1cf8:  mov    %esp,%ebp
08482c7c +0x1cfa:  mov    0x8(%ebp),%eax
08482c7f +0x1cfd:  pop    %ebp
08482c80 +0x1cfe:  ret
08482c81 +0x1cff:  nop
08482c82 +0x1d00:  push   %ebp
08482c83 +0x1d01:  mov    %esp,%ebp
08482c85 +0x1d03:  push   %ebx
08482c86 +0x1d04:  sub    $0x14,%esp
08482c89 +0x1d07:  mov    0x10(%ebp),%eax
08482c8c +0x1d0a:  mov    %eax,(%esp)
08482c8f +0x1d0d:  call   08482c79 <+0x1cf7>
08482c94 +0x1d12:  mov    %eax,%ebx
08482c96 +0x1d14:  mov    0xc(%ebp),%eax
08482c99 +0x1d17:  mov    %eax,0x4(%esp)
08482c9d +0x1d1b:  movl   $0x18,(%esp)
08482ca4 +0x1d22:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08482ca9 +0x1d27:  mov    %eax,%edx
08482cab +0x1d29:  test   %edx,%edx
08482cad +0x1d2b:  je     08482cbb <+0x1d39>
08482caf +0x1d2d:  mov    %ebx,0x4(%esp)
08482cb3 +0x1d31:  mov    %eax,(%esp)
08482cb6 +0x1d34:  call   08482f66 <+0x1fe4>
08482cbb +0x1d39:  add    $0x14,%esp
08482cbe +0x1d3c:  pop    %ebx
08482cbf +0x1d3d:  pop    %ebp
08482cc0 +0x1d3e:  ret
08482cc1 +0x1d3f:  nop
08482cc2 +0x1d40:  push   %ebp
08482cc3 +0x1d41:  mov    %esp,%ebp
08482cc5 +0x1d43:  pop    %ebp
08482cc6 +0x1d44:  ret
08482cc7 +0x1d45:  push   %ebp
08482cc8 +0x1d46:  mov    %esp,%ebp
08482cca +0x1d48:  mov    0x8(%ebp),%eax
08482ccd +0x1d4b:  pop    %ebp
08482cce +0x1d4c:  ret
08482ccf +0x1d4d:  push   %ebp
08482cd0 +0x1d4e:  mov    %esp,%ebp
08482cd2 +0x1d50:  sub    $0x28,%esp
08482cd5 +0x1d53:  movb   $0x1,-0x9(%ebp)
08482cd9 +0x1d57:  mov    0x10(%ebp),%eax
08482cdc +0x1d5a:  mov    %eax,0x8(%esp)
08482ce0 +0x1d5e:  mov    0xc(%ebp),%eax
08482ce3 +0x1d61:  mov    %eax,0x4(%esp)
08482ce7 +0x1d65:  mov    0x8(%ebp),%eax
08482cea +0x1d68:  mov    %eax,(%esp)
08482ced +0x1d6b:  call   08482fae <+0x202c>
08482cf2 +0x1d70:  leave
08482cf3 +0x1d71:  ret
08482cf4 +0x1d72:  push   %ebp
08482cf5 +0x1d73:  mov    %esp,%ebp
08482cf7 +0x1d75:  mov    0x8(%ebp),%eax
08482cfa +0x1d78:  pop    %ebp
08482cfb +0x1d79:  ret
08482cfc +0x1d7a:  push   %ebp
08482cfd +0x1d7b:  mov    %esp,%ebp
08482cff +0x1d7d:  mov    $0x3fffffff,%eax
08482d04 +0x1d82:  pop    %ebp
08482d05 +0x1d83:  ret
08482d06 +0x1d84:  push   %ebp
08482d07 +0x1d85:  mov    %esp,%ebp
08482d09 +0x1d87:  mov    0x8(%ebp),%eax
08482d0c +0x1d8a:  mov    0xc(%ebp),%edx
08482d0f +0x1d8d:  mov    %edx,(%eax)
08482d11 +0x1d8f:  pop    %ebp
08482d12 +0x1d90:  ret
08482d13 +0x1d91:  push   %ebp
08482d14 +0x1d92:  mov    %esp,%ebp
08482d16 +0x1d94:  sub    $0x18,%esp
08482d19 +0x1d97:  mov    0x10(%ebp),%eax
08482d1c +0x1d9a:  mov    %eax,0x8(%esp)
08482d20 +0x1d9e:  mov    0xc(%ebp),%eax
08482d23 +0x1da1:  mov    %eax,0x4(%esp)
08482d27 +0x1da5:  mov    0x8(%ebp),%eax
08482d2a +0x1da8:  mov    %eax,(%esp)
08482d2d +0x1dab:  call   08482ffb <+0x2079>
08482d32 +0x1db0:  leave
08482d33 +0x1db1:  ret
08482d34 +0x1db2:  push   %ebp
08482d35 +0x1db3:  mov    %esp,%ebp
08482d37 +0x1db5:  sub    $0x38,%esp
08482d3a +0x1db8:  lea    0x8(%ebp),%eax
08482d3d +0x1dbb:  mov    %eax,0x4(%esp)
08482d41 +0x1dbf:  lea    0xc(%ebp),%eax
08482d44 +0x1dc2:  mov    %eax,(%esp)
08482d47 +0x1dc5:  call   08481ca5 <+0xd23>
08482d4c +0x1dca:  cmp    $0x1,%eax
08482d4f +0x1dcd:  setle  %al
08482d52 +0x1dd0:  test   %al,%al
08482d54 +0x1dd2:  jne    08482df9 <+0x1e77>
08482d5a +0x1dd8:  lea    0x8(%ebp),%edx
08482d5d +0x1ddb:  mov    %edx,0x4(%esp)
08482d61 +0x1ddf:  lea    0xc(%ebp),%eax
08482d64 +0x1de2:  mov    %eax,(%esp)
08482d67 +0x1de5:  call   08481ca5 <+0xd23>
08482d6c +0x1dea:  mov    %eax,-0xc(%ebp)
08482d6f +0x1ded:  mov    -0xc(%ebp),%eax
08482d72 +0x1df0:  sub    $0x2,%eax
08482d75 +0x1df3:  mov    %eax,%edx
08482d77 +0x1df5:  shr    $0x1f,%edx
08482d7a +0x1df8:  lea    (%edx,%eax,1),%eax
08482d7d +0x1dfb:  sar    %eax
08482d7f +0x1dfd:  mov    %eax,-0x14(%ebp)
08482d82 +0x1e00:  lea    -0x10(%ebp),%eax
08482d85 +0x1e03:  lea    -0x14(%ebp),%edx
08482d88 +0x1e06:  mov    %edx,0x8(%esp)
08482d8c +0x1e0a:  lea    0x8(%ebp),%edx
08482d8f +0x1e0d:  mov    %edx,0x4(%esp)
08482d93 +0x1e11:  mov    %eax,(%esp)
08482d96 +0x1e14:  call   0848244c <+0x14ca>
08482d9b +0x1e19:  sub    $0x4,%esp
08482d9e +0x1e1c:  lea    -0x10(%ebp),%eax
08482da1 +0x1e1f:  mov    %eax,(%esp)
08482da4 +0x1e22:  call   084814c8 <+0x546>
08482da9 +0x1e27:  mov    %eax,(%esp)
08482dac +0x1e2a:  call   08481729 <+0x7a7>
08482db1 +0x1e2f:  mov    (%eax),%eax
08482db3 +0x1e31:  mov    %eax,-0x18(%ebp)
08482db6 +0x1e34:  lea    -0x18(%ebp),%eax
08482db9 +0x1e37:  mov    %eax,(%esp)
08482dbc +0x1e3a:  call   08481729 <+0x7a7>
08482dc1 +0x1e3f:  mov    (%eax),%edx
08482dc3 +0x1e41:  mov    -0x14(%ebp),%eax
08482dc6 +0x1e44:  mov    0x10(%ebp),%ecx
08482dc9 +0x1e47:  mov    %ecx,0x10(%esp)
08482dcd +0x1e4b:  mov    %edx,0xc(%esp)
08482dd1 +0x1e4f:  mov    -0xc(%ebp),%edx
08482dd4 +0x1e52:  mov    %edx,0x8(%esp)
08482dd8 +0x1e56:  mov    %eax,0x4(%esp)
08482ddc +0x1e5a:  mov    0x8(%ebp),%eax
08482ddf +0x1e5d:  mov    %eax,(%esp)
08482de2 +0x1e60:  call   0848301c <+0x209a>
08482de7 +0x1e65:  mov    -0x14(%ebp),%eax
08482dea +0x1e68:  test   %eax,%eax
08482dec +0x1e6a:  je     08482dfc <+0x1e7a>
08482dee +0x1e6c:  mov    -0x14(%ebp),%eax
08482df1 +0x1e6f:  sub    $0x1,%eax
08482df4 +0x1e72:  mov    %eax,-0x14(%ebp)
08482df7 +0x1e75:  jmp    08482d82 <+0x1e00>
08482df9 +0x1e77:  nop
08482dfa +0x1e78:  jmp    08482dfd <+0x1e7b>
08482dfc +0x1e7a:  nop
08482dfd +0x1e7b:  leave
08482dfe +0x1e7c:  ret
08482dff +0x1e7d:  push   %ebp
08482e00 +0x1e7e:  mov    %esp,%ebp
08482e02 +0x1e80:  push   %ebx
08482e03 +0x1e81:  sub    $0x34,%esp
08482e06 +0x1e84:  lea    0x10(%ebp),%eax
08482e09 +0x1e87:  mov    %eax,(%esp)
08482e0c +0x1e8a:  call   084814c8 <+0x546>
08482e11 +0x1e8f:  mov    %eax,(%esp)
08482e14 +0x1e92:  call   08481729 <+0x7a7>
08482e19 +0x1e97:  mov    (%eax),%eax
08482e1b +0x1e99:  mov    %eax,-0xc(%ebp)
08482e1e +0x1e9c:  lea    0x10(%ebp),%eax
08482e21 +0x1e9f:  mov    %eax,(%esp)
08482e24 +0x1ea2:  call   084814c8 <+0x546>
08482e29 +0x1ea7:  mov    %eax,%ebx
08482e2b +0x1ea9:  lea    0x8(%ebp),%eax
08482e2e +0x1eac:  mov    %eax,(%esp)
08482e31 +0x1eaf:  call   084814c8 <+0x546>
08482e36 +0x1eb4:  mov    %eax,(%esp)
08482e39 +0x1eb7:  call   08481729 <+0x7a7>
08482e3e +0x1ebc:  mov    (%eax),%eax
08482e40 +0x1ebe:  mov    %eax,(%ebx)
08482e42 +0x1ec0:  lea    -0xc(%ebp),%eax
08482e45 +0x1ec3:  mov    %eax,(%esp)
08482e48 +0x1ec6:  call   08481729 <+0x7a7>
08482e4d +0x1ecb:  mov    (%eax),%ebx
08482e4f +0x1ecd:  lea    0x8(%ebp),%eax
08482e52 +0x1ed0:  mov    %eax,0x4(%esp)
08482e56 +0x1ed4:  lea    0xc(%ebp),%eax
08482e59 +0x1ed7:  mov    %eax,(%esp)
08482e5c +0x1eda:  call   08481ca5 <+0xd23>
08482e61 +0x1edf:  mov    0x14(%ebp),%edx
08482e64 +0x1ee2:  mov    %edx,0x10(%esp)
08482e68 +0x1ee6:  mov    %ebx,0xc(%esp)
08482e6c +0x1eea:  mov    %eax,0x8(%esp)
08482e70 +0x1eee:  movl   $0x0,0x4(%esp)
08482e78 +0x1ef6:  mov    0x8(%ebp),%eax
08482e7b +0x1ef9:  mov    %eax,(%esp)
08482e7e +0x1efc:  call   0848301c <+0x209a>
08482e83 +0x1f01:  add    $0x34,%esp
08482e86 +0x1f04:  pop    %ebx
08482e87 +0x1f05:  pop    %ebp
08482e88 +0x1f06:  ret
08482e89 +0x1f07:  push   %ebp
08482e8a +0x1f08:  mov    %esp,%ebp
08482e8c +0x1f0a:  push   %ebx
08482e8d +0x1f0b:  sub    $0x14,%esp
08482e90 +0x1f0e:  lea    0xc(%ebp),%eax
08482e93 +0x1f11:  mov    %eax,(%esp)
08482e96 +0x1f14:  call   084814c8 <+0x546>
08482e9b +0x1f19:  mov    %eax,%ebx
08482e9d +0x1f1b:  lea    0x8(%ebp),%eax
08482ea0 +0x1f1e:  mov    %eax,(%esp)
08482ea3 +0x1f21:  call   084814c8 <+0x546>
08482ea8 +0x1f26:  mov    %ebx,0x4(%esp)
08482eac +0x1f2a:  mov    %eax,(%esp)
08482eaf +0x1f2d:  call   0848320d <+0x228b>
08482eb4 +0x1f32:  add    $0x14,%esp
08482eb7 +0x1f35:  pop    %ebx
08482eb8 +0x1f36:  pop    %ebp
08482eb9 +0x1f37:  ret
08482eba +0x1f38:  push   %ebp
08482ebb +0x1f39:  mov    %esp,%ebp
08482ebd +0x1f3b:  mov    0x8(%ebp),%eax
08482ec0 +0x1f3e:  mov    0xc(%ebp),%edx
08482ec3 +0x1f41:  mov    %edx,(%eax)
08482ec5 +0x1f43:  pop    %ebp
08482ec6 +0x1f44:  ret    $0x4
08482ec9 +0x1f47:  push   %ebp
08482eca +0x1f48:  mov    %esp,%ebp
08482ecc +0x1f4a:  push   %edi
08482ecd +0x1f4b:  push   %esi
08482ece +0x1f4c:  push   %ebx
08482ecf +0x1f4d:  sub    $0x2c,%esp
08482ed2 +0x1f50:  mov    0x8(%ebp),%edi
08482ed5 +0x1f53:  mov    0x14(%ebp),%eax
08482ed8 +0x1f56:  mov    %eax,(%esp)
08482edb +0x1f59:  call   08483249 <+0x22c7>
08482ee0 +0x1f5e:  mov    %eax,%esi
08482ee2 +0x1f60:  mov    0x10(%ebp),%eax
08482ee5 +0x1f63:  mov    %eax,(%esp)
08482ee8 +0x1f66:  call   08483249 <+0x22c7>
08482eed +0x1f6b:  mov    %eax,%ebx
08482eef +0x1f6d:  mov    0xc(%ebp),%eax
08482ef2 +0x1f70:  mov    %eax,(%esp)
08482ef5 +0x1f73:  call   08483249 <+0x22c7>
08482efa +0x1f78:  mov    %esi,0x8(%esp)
08482efe +0x1f7c:  mov    %ebx,0x4(%esp)
08482f02 +0x1f80:  mov    %eax,(%esp)
08482f05 +0x1f83:  call   0848325e <+0x22dc>
08482f0a +0x1f88:  mov    %eax,-0x1c(%ebp)
08482f0d +0x1f8b:  lea    -0x1c(%ebp),%eax
08482f10 +0x1f8e:  mov    %eax,0x4(%esp)
08482f14 +0x1f92:  mov    %edi,(%esp)
08482f17 +0x1f95:  call   08481c96 <+0xd14>
08482f1c +0x1f9a:  mov    %edi,%eax
08482f1e +0x1f9c:  add    $0x2c,%esp
08482f21 +0x1f9f:  pop    %ebx
08482f22 +0x1fa0:  pop    %esi
08482f23 +0x1fa1:  pop    %edi
08482f24 +0x1fa2:  pop    %ebp
08482f25 +0x1fa3:  ret    $0x4
08482f28 +0x1fa6:  push   %ebp
08482f29 +0x1fa7:  mov    %esp,%ebp
08482f2b +0x1fa9:  sub    $0x18,%esp
08482f2e +0x1fac:  mov    0x8(%ebp),%eax
08482f31 +0x1faf:  mov    %eax,(%esp)
08482f34 +0x1fb2:  call   08483284 <+0x2302>
08482f39 +0x1fb7:  cmp    0xc(%ebp),%eax
08482f3c +0x1fba:  setb   %al
08482f3f +0x1fbd:  movzbl %al,%eax
08482f42 +0x1fc0:  test   %eax,%eax
08482f44 +0x1fc2:  setne  %al
08482f47 +0x1fc5:  test   %al,%al
08482f49 +0x1fc7:  je     08482f50 <+0x1fce>
08482f4b +0x1fc9:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08482f50 +0x1fce:  mov    0xc(%ebp),%edx
08482f53 +0x1fd1:  mov    %edx,%eax
08482f55 +0x1fd3:  add    %eax,%eax
08482f57 +0x1fd5:  add    %edx,%eax
08482f59 +0x1fd7:  shl    $0x3,%eax
08482f5c +0x1fda:  mov    %eax,(%esp)
08482f5f +0x1fdd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08482f64 +0x1fe2:  leave
08482f65 +0x1fe3:  ret
08482f66 +0x1fe4:  push   %ebp
08482f67 +0x1fe5:  mov    %esp,%ebp
08482f69 +0x1fe7:  sub    $0x18,%esp
08482f6c +0x1fea:  mov    0x8(%ebp),%eax
08482f6f +0x1fed:  movl   $0x0,(%eax)
08482f75 +0x1ff3:  mov    0x8(%ebp),%eax
08482f78 +0x1ff6:  movl   $0x0,0x4(%eax)
08482f7f +0x1ffd:  mov    0x8(%ebp),%eax
08482f82 +0x2000:  movl   $0x0,0x8(%eax)
08482f89 +0x2007:  mov    0x8(%ebp),%eax
08482f8c +0x200a:  movl   $0x0,0xc(%eax)
08482f93 +0x2011:  mov    0xc(%ebp),%eax
08482f96 +0x2014:  mov    %eax,(%esp)
08482f99 +0x2017:  call   08482c79 <+0x1cf7>
08482f9e +0x201c:  mov    0x8(%ebp),%ecx
08482fa1 +0x201f:  mov    0x4(%eax),%edx
08482fa4 +0x2022:  mov    (%eax),%eax
08482fa6 +0x2024:  mov    %eax,0x10(%ecx)
08482fa9 +0x2027:  mov    %edx,0x14(%ecx)
08482fac +0x202a:  leave
08482fad +0x202b:  ret
08482fae +0x202c:  push   %ebp
08482faf +0x202d:  mov    %esp,%ebp
08482fb1 +0x202f:  sub    $0x28,%esp
08482fb4 +0x2032:  mov    0xc(%ebp),%edx
08482fb7 +0x2035:  mov    0x8(%ebp),%eax
08482fba +0x2038:  mov    %edx,%ecx
08482fbc +0x203a:  sub    %eax,%ecx
08482fbe +0x203c:  mov    %ecx,%eax
08482fc0 +0x203e:  sar    $0x2,%eax
08482fc3 +0x2041:  mov    %eax,-0xc(%ebp)
08482fc6 +0x2044:  mov    -0xc(%ebp),%eax
08482fc9 +0x2047:  lea    0x0(,%eax,4),%edx
08482fd0 +0x204e:  mov    -0xc(%ebp),%eax
08482fd3 +0x2051:  shl    $0x2,%eax
08482fd6 +0x2054:  neg    %eax
08482fd8 +0x2056:  add    0x10(%ebp),%eax
08482fdb +0x2059:  mov    %edx,0x8(%esp)
08482fdf +0x205d:  mov    0x8(%ebp),%edx
08482fe2 +0x2060:  mov    %edx,0x4(%esp)
08482fe6 +0x2064:  mov    %eax,(%esp)
08482fe9 +0x2067:  call   0807d880 <_init+0x178>
08482fee +0x206c:  mov    -0xc(%ebp),%eax
08482ff1 +0x206f:  shl    $0x2,%eax
08482ff4 +0x2072:  neg    %eax
08482ff6 +0x2074:  add    0x10(%ebp),%eax
08482ff9 +0x2077:  leave
08482ffa +0x2078:  ret
08482ffb +0x2079:  push   %ebp
08482ffc +0x207a:  mov    %esp,%ebp
08482ffe +0x207c:  sub    $0x18,%esp
08483001 +0x207f:  mov    0x10(%ebp),%eax
08483004 +0x2082:  mov    %eax,0x8(%esp)
08483008 +0x2086:  mov    0xc(%ebp),%eax
0848300b +0x2089:  mov    %eax,0x4(%esp)
0848300f +0x208d:  mov    0x8(%ebp),%eax
08483012 +0x2090:  mov    %eax,(%esp)
08483015 +0x2093:  call   0848328e <+0x230c>
0848301a +0x2098:  leave
0848301b +0x2099:  ret
0848301c +0x209a:  push   %ebp
0848301d +0x209b:  mov    %esp,%ebp
0848301f +0x209d:  push   %ebx
08483020 +0x209e:  sub    $0x54,%esp
08483023 +0x20a1:  mov    0xc(%ebp),%eax
08483026 +0x20a4:  mov    %eax,-0xc(%ebp)
08483029 +0x20a7:  mov    0xc(%ebp),%eax
0848302c +0x20aa:  mov    %eax,-0x30(%ebp)
0848302f +0x20ad:  jmp    08483115 <+0x2193>
08483034 +0x20b2:  mov    -0x30(%ebp),%eax
08483037 +0x20b5:  add    $0x1,%eax
0848303a +0x20b8:  add    %eax,%eax
0848303c +0x20ba:  mov    %eax,-0x30(%ebp)
0848303f +0x20bd:  mov    -0x30(%ebp),%eax
08483042 +0x20c0:  sub    $0x1,%eax
08483045 +0x20c3:  mov    %eax,-0x28(%ebp)
08483048 +0x20c6:  lea    -0x2c(%ebp),%eax
0848304b +0x20c9:  lea    -0x28(%ebp),%edx
0848304e +0x20cc:  mov    %edx,0x8(%esp)
08483052 +0x20d0:  lea    0x8(%ebp),%edx
08483055 +0x20d3:  mov    %edx,0x4(%esp)
08483059 +0x20d7:  mov    %eax,(%esp)
0848305c +0x20da:  call   0848244c <+0x14ca>
08483061 +0x20df:  sub    $0x4,%esp
08483064 +0x20e2:  lea    -0x2c(%ebp),%eax
08483067 +0x20e5:  mov    %eax,(%esp)
0848306a +0x20e8:  call   084814c8 <+0x546>
0848306f +0x20ed:  mov    (%eax),%ebx
08483071 +0x20ef:  lea    -0x24(%ebp),%eax
08483074 +0x20f2:  lea    -0x30(%ebp),%edx
08483077 +0x20f5:  mov    %edx,0x8(%esp)
0848307b +0x20f9:  lea    0x8(%ebp),%edx
0848307e +0x20fc:  mov    %edx,0x4(%esp)
08483082 +0x2100:  mov    %eax,(%esp)
08483085 +0x2103:  call   0848244c <+0x14ca>
0848308a +0x2108:  sub    $0x4,%esp
0848308d +0x210b:  lea    -0x24(%ebp),%eax
08483090 +0x210e:  mov    %eax,(%esp)
08483093 +0x2111:  call   084814c8 <+0x546>
08483098 +0x2116:  mov    (%eax),%eax
0848309a +0x2118:  mov    %ebx,0x4(%esp)
0848309e +0x211c:  mov    %eax,(%esp)
084830a1 +0x211f:  mov    0x18(%ebp),%eax
084830a4 +0x2122:  call   *%eax
084830a6 +0x2124:  test   %al,%al
084830a8 +0x2126:  je     084830b3 <+0x2131>
084830aa +0x2128:  mov    -0x30(%ebp),%eax
084830ad +0x212b:  sub    $0x1,%eax
084830b0 +0x212e:  mov    %eax,-0x30(%ebp)
084830b3 +0x2131:  lea    -0x20(%ebp),%eax
084830b6 +0x2134:  lea    0xc(%ebp),%edx
084830b9 +0x2137:  mov    %edx,0x8(%esp)
084830bd +0x213b:  lea    0x8(%ebp),%edx
084830c0 +0x213e:  mov    %edx,0x4(%esp)
084830c4 +0x2142:  mov    %eax,(%esp)
084830c7 +0x2145:  call   0848244c <+0x14ca>
084830cc +0x214a:  sub    $0x4,%esp
084830cf +0x214d:  lea    -0x20(%ebp),%eax
084830d2 +0x2150:  mov    %eax,(%esp)
084830d5 +0x2153:  call   084814c8 <+0x546>
084830da +0x2158:  mov    %eax,%ebx
084830dc +0x215a:  lea    -0x1c(%ebp),%eax
084830df +0x215d:  lea    -0x30(%ebp),%edx
084830e2 +0x2160:  mov    %edx,0x8(%esp)
084830e6 +0x2164:  lea    0x8(%ebp),%edx
084830e9 +0x2167:  mov    %edx,0x4(%esp)
084830ed +0x216b:  mov    %eax,(%esp)
084830f0 +0x216e:  call   0848244c <+0x14ca>
084830f5 +0x2173:  sub    $0x4,%esp
084830f8 +0x2176:  lea    -0x1c(%ebp),%eax
084830fb +0x2179:  mov    %eax,(%esp)
084830fe +0x217c:  call   084814c8 <+0x546>
08483103 +0x2181:  mov    %eax,(%esp)
08483106 +0x2184:  call   08481729 <+0x7a7>
0848310b +0x2189:  mov    (%eax),%eax
0848310d +0x218b:  mov    %eax,(%ebx)
0848310f +0x218d:  mov    -0x30(%ebp),%eax
08483112 +0x2190:  mov    %eax,0xc(%ebp)
08483115 +0x2193:  mov    0x10(%ebp),%eax
08483118 +0x2196:  sub    $0x1,%eax
0848311b +0x2199:  mov    %eax,%edx
0848311d +0x219b:  shr    $0x1f,%edx
08483120 +0x219e:  lea    (%edx,%eax,1),%eax
08483123 +0x21a1:  sar    %eax
08483125 +0x21a3:  mov    %eax,%edx
08483127 +0x21a5:  mov    -0x30(%ebp),%eax
0848312a +0x21a8:  cmp    %eax,%edx
0848312c +0x21aa:  setg   %al
0848312f +0x21ad:  test   %al,%al
08483131 +0x21af:  jne    08483034 <+0x20b2>
08483137 +0x21b5:  mov    0x10(%ebp),%eax
0848313a +0x21b8:  and    $0x1,%eax
0848313d +0x21bb:  test   %eax,%eax
0848313f +0x21bd:  jne    084831d7 <+0x2255>
08483145 +0x21c3:  mov    0x10(%ebp),%eax
08483148 +0x21c6:  sub    $0x2,%eax
0848314b +0x21c9:  mov    %eax,%edx
0848314d +0x21cb:  shr    $0x1f,%edx
08483150 +0x21ce:  lea    (%edx,%eax,1),%eax
08483153 +0x21d1:  sar    %eax
08483155 +0x21d3:  mov    %eax,%edx
08483157 +0x21d5:  mov    -0x30(%ebp),%eax
0848315a +0x21d8:  cmp    %eax,%edx
0848315c +0x21da:  jne    084831d7 <+0x2255>
0848315e +0x21dc:  mov    -0x30(%ebp),%eax
08483161 +0x21df:  add    $0x1,%eax
08483164 +0x21e2:  add    %eax,%eax
08483166 +0x21e4:  mov    %eax,-0x30(%ebp)
08483169 +0x21e7:  lea    -0x18(%ebp),%eax
0848316c +0x21ea:  lea    0xc(%ebp),%edx
0848316f +0x21ed:  mov    %edx,0x8(%esp)
08483173 +0x21f1:  lea    0x8(%ebp),%edx
08483176 +0x21f4:  mov    %edx,0x4(%esp)
0848317a +0x21f8:  mov    %eax,(%esp)
0848317d +0x21fb:  call   0848244c <+0x14ca>
08483182 +0x2200:  sub    $0x4,%esp
08483185 +0x2203:  lea    -0x18(%ebp),%eax
08483188 +0x2206:  mov    %eax,(%esp)
0848318b +0x2209:  call   084814c8 <+0x546>
08483190 +0x220e:  mov    %eax,%ebx
08483192 +0x2210:  mov    -0x30(%ebp),%eax
08483195 +0x2213:  sub    $0x1,%eax
08483198 +0x2216:  mov    %eax,-0x10(%ebp)
0848319b +0x2219:  lea    -0x14(%ebp),%eax
0848319e +0x221c:  lea    -0x10(%ebp),%edx
084831a1 +0x221f:  mov    %edx,0x8(%esp)
084831a5 +0x2223:  lea    0x8(%ebp),%edx
084831a8 +0x2226:  mov    %edx,0x4(%esp)
084831ac +0x222a:  mov    %eax,(%esp)
084831af +0x222d:  call   0848244c <+0x14ca>
084831b4 +0x2232:  sub    $0x4,%esp
084831b7 +0x2235:  lea    -0x14(%ebp),%eax
084831ba +0x2238:  mov    %eax,(%esp)
084831bd +0x223b:  call   084814c8 <+0x546>
084831c2 +0x2240:  mov    %eax,(%esp)
084831c5 +0x2243:  call   08481729 <+0x7a7>
084831ca +0x2248:  mov    (%eax),%eax
084831cc +0x224a:  mov    %eax,(%ebx)
084831ce +0x224c:  mov    -0x30(%ebp),%eax
084831d1 +0x224f:  sub    $0x1,%eax
084831d4 +0x2252:  mov    %eax,0xc(%ebp)
084831d7 +0x2255:  lea    0x14(%ebp),%eax
084831da +0x2258:  mov    %eax,(%esp)
084831dd +0x225b:  call   08481729 <+0x7a7>
084831e2 +0x2260:  mov    (%eax),%edx
084831e4 +0x2262:  mov    0xc(%ebp),%eax
084831e7 +0x2265:  mov    0x18(%ebp),%ecx
084831ea +0x2268:  mov    %ecx,0x10(%esp)
084831ee +0x226c:  mov    %edx,0xc(%esp)
084831f2 +0x2270:  mov    -0xc(%ebp),%edx
084831f5 +0x2273:  mov    %edx,0x8(%esp)
084831f9 +0x2277:  mov    %eax,0x4(%esp)
084831fd +0x227b:  mov    0x8(%ebp),%eax
08483200 +0x227e:  mov    %eax,(%esp)
08483203 +0x2281:  call   084832c6 <+0x2344>
08483208 +0x2286:  mov    -0x4(%ebp),%ebx
0848320b +0x2289:  leave
0848320c +0x228a:  ret
0848320d +0x228b:  push   %ebp
0848320e +0x228c:  mov    %esp,%ebp
08483210 +0x228e:  sub    $0x28,%esp
08483213 +0x2291:  mov    0x8(%ebp),%eax
08483216 +0x2294:  mov    %eax,(%esp)
08483219 +0x2297:  call   08481729 <+0x7a7>
0848321e +0x229c:  mov    (%eax),%eax
08483220 +0x229e:  mov    %eax,-0xc(%ebp)
08483223 +0x22a1:  mov    0xc(%ebp),%eax
08483226 +0x22a4:  mov    %eax,(%esp)
08483229 +0x22a7:  call   08481729 <+0x7a7>
0848322e +0x22ac:  mov    (%eax),%edx
08483230 +0x22ae:  mov    0x8(%ebp),%eax
08483233 +0x22b1:  mov    %edx,(%eax)
08483235 +0x22b3:  lea    -0xc(%ebp),%eax
08483238 +0x22b6:  mov    %eax,(%esp)
0848323b +0x22b9:  call   08481729 <+0x7a7>
08483240 +0x22be:  mov    (%eax),%edx
08483242 +0x22c0:  mov    0xc(%ebp),%eax
08483245 +0x22c3:  mov    %edx,(%eax)
08483247 +0x22c5:  leave
08483248 +0x22c6:  ret
08483249 +0x22c7:  push   %ebp
0848324a +0x22c8:  mov    %esp,%ebp
0848324c +0x22ca:  sub    $0x18,%esp
0848324f +0x22cd:  lea    0x8(%ebp),%eax
08483252 +0x22d0:  mov    %eax,(%esp)
08483255 +0x22d3:  call   08481ede <+0xf5c>
0848325a +0x22d8:  mov    (%eax),%eax
0848325c +0x22da:  leave
0848325d +0x22db:  ret
0848325e +0x22dc:  push   %ebp
0848325f +0x22dd:  mov    %esp,%ebp
08483261 +0x22df:  sub    $0x28,%esp
08483264 +0x22e2:  movb   $0x1,-0x9(%ebp)
08483268 +0x22e6:  mov    0x10(%ebp),%eax
0848326b +0x22e9:  mov    %eax,0x8(%esp)
0848326f +0x22ed:  mov    0xc(%ebp),%eax
08483272 +0x22f0:  mov    %eax,0x4(%esp)
08483276 +0x22f4:  mov    0x8(%ebp),%eax
08483279 +0x22f7:  mov    %eax,(%esp)
0848327c +0x22fa:  call   084833ec <+0x246a>
08483281 +0x22ff:  leave
08483282 +0x2300:  ret
08483283 +0x2301:  nop
08483284 +0x2302:  push   %ebp
08483285 +0x2303:  mov    %esp,%ebp
08483287 +0x2305:  mov    $0xaaaaaaa,%eax
0848328c +0x230a:  pop    %ebp
0848328d +0x230b:  ret
0848328e +0x230c:  push   %ebp
0848328f +0x230d:  mov    %esp,%ebp
08483291 +0x230f:  push   %ebx
08483292 +0x2310:  sub    $0x14,%esp
08483295 +0x2313:  mov    0xc(%ebp),%eax
08483298 +0x2316:  mov    %eax,(%esp)
0848329b +0x2319:  call   08483439 <+0x24b7>
084832a0 +0x231e:  mov    %eax,%ebx
084832a2 +0x2320:  mov    0x8(%ebp),%eax
084832a5 +0x2323:  mov    %eax,(%esp)
084832a8 +0x2326:  call   08483439 <+0x24b7>
084832ad +0x232b:  mov    0x10(%ebp),%edx
084832b0 +0x232e:  mov    %edx,0x8(%esp)
084832b4 +0x2332:  mov    %ebx,0x4(%esp)
084832b8 +0x2336:  mov    %eax,(%esp)
084832bb +0x2339:  call   0848344c <+0x24ca>
084832c0 +0x233e:  add    $0x14,%esp
084832c3 +0x2341:  pop    %ebx
084832c4 +0x2342:  pop    %ebp
084832c5 +0x2343:  ret
084832c6 +0x2344:  push   %ebp
084832c7 +0x2345:  mov    %esp,%ebp
084832c9 +0x2347:  push   %ebx
084832ca +0x2348:  sub    $0x34,%esp
084832cd +0x234b:  mov    0xc(%ebp),%eax
084832d0 +0x234e:  sub    $0x1,%eax
084832d3 +0x2351:  mov    %eax,%edx
084832d5 +0x2353:  shr    $0x1f,%edx
084832d8 +0x2356:  lea    (%edx,%eax,1),%eax
084832db +0x2359:  sar    %eax
084832dd +0x235b:  mov    %eax,-0x1c(%ebp)
084832e0 +0x235e:  jmp    08483357 <+0x23d5>
084832e2 +0x2360:  lea    -0x14(%ebp),%eax
084832e5 +0x2363:  lea    0xc(%ebp),%edx
084832e8 +0x2366:  mov    %edx,0x8(%esp)
084832ec +0x236a:  lea    0x8(%ebp),%edx
084832ef +0x236d:  mov    %edx,0x4(%esp)
084832f3 +0x2371:  mov    %eax,(%esp)
084832f6 +0x2374:  call   0848244c <+0x14ca>
084832fb +0x2379:  sub    $0x4,%esp
084832fe +0x237c:  lea    -0x14(%ebp),%eax
08483301 +0x237f:  mov    %eax,(%esp)
08483304 +0x2382:  call   084814c8 <+0x546>
08483309 +0x2387:  mov    %eax,%ebx
0848330b +0x2389:  lea    -0x10(%ebp),%eax
0848330e +0x238c:  lea    -0x1c(%ebp),%edx
08483311 +0x238f:  mov    %edx,0x8(%esp)
08483315 +0x2393:  lea    0x8(%ebp),%edx
08483318 +0x2396:  mov    %edx,0x4(%esp)
0848331c +0x239a:  mov    %eax,(%esp)
0848331f +0x239d:  call   0848244c <+0x14ca>
08483324 +0x23a2:  sub    $0x4,%esp
08483327 +0x23a5:  lea    -0x10(%ebp),%eax
0848332a +0x23a8:  mov    %eax,(%esp)
0848332d +0x23ab:  call   084814c8 <+0x546>
08483332 +0x23b0:  mov    %eax,(%esp)
08483335 +0x23b3:  call   08481729 <+0x7a7>
0848333a +0x23b8:  mov    (%eax),%eax
0848333c +0x23ba:  mov    %eax,(%ebx)
0848333e +0x23bc:  mov    -0x1c(%ebp),%eax
08483341 +0x23bf:  mov    %eax,0xc(%ebp)
08483344 +0x23c2:  mov    0xc(%ebp),%eax
08483347 +0x23c5:  sub    $0x1,%eax
0848334a +0x23c8:  mov    %eax,%edx
0848334c +0x23ca:  shr    $0x1f,%edx
0848334f +0x23cd:  lea    (%edx,%eax,1),%eax
08483352 +0x23d0:  sar    %eax
08483354 +0x23d2:  mov    %eax,-0x1c(%ebp)
08483357 +0x23d5:  mov    0xc(%ebp),%eax
0848335a +0x23d8:  cmp    0x10(%ebp),%eax
0848335d +0x23db:  jle    084833a2 <+0x2420>
0848335f +0x23dd:  mov    0x14(%ebp),%ebx
08483362 +0x23e0:  lea    -0x18(%ebp),%eax
08483365 +0x23e3:  lea    -0x1c(%ebp),%edx
08483368 +0x23e6:  mov    %edx,0x8(%esp)
0848336c +0x23ea:  lea    0x8(%ebp),%edx
0848336f +0x23ed:  mov    %edx,0x4(%esp)
08483373 +0x23f1:  mov    %eax,(%esp)
08483376 +0x23f4:  call   0848244c <+0x14ca>
0848337b +0x23f9:  sub    $0x4,%esp
0848337e +0x23fc:  lea    -0x18(%ebp),%eax
08483381 +0x23ff:  mov    %eax,(%esp)
08483384 +0x2402:  call   084814c8 <+0x546>
08483389 +0x2407:  mov    (%eax),%eax
0848338b +0x2409:  mov    %ebx,0x4(%esp)
0848338f +0x240d:  mov    %eax,(%esp)
08483392 +0x2410:  mov    0x18(%ebp),%eax
08483395 +0x2413:  call   *%eax
08483397 +0x2415:  test   %al,%al
08483399 +0x2417:  je     084833a2 <+0x2420>
0848339b +0x2419:  mov    $0x1,%eax
084833a0 +0x241e:  jmp    084833a7 <+0x2425>
084833a2 +0x2420:  mov    $0x0,%eax
084833a7 +0x2425:  test   %al,%al
084833a9 +0x2427:  jne    084832e2 <+0x2360>
084833af +0x242d:  lea    -0xc(%ebp),%eax
084833b2 +0x2430:  lea    0xc(%ebp),%edx
084833b5 +0x2433:  mov    %edx,0x8(%esp)
084833b9 +0x2437:  lea    0x8(%ebp),%edx
084833bc +0x243a:  mov    %edx,0x4(%esp)
084833c0 +0x243e:  mov    %eax,(%esp)
084833c3 +0x2441:  call   0848244c <+0x14ca>
084833c8 +0x2446:  sub    $0x4,%esp
084833cb +0x2449:  lea    -0xc(%ebp),%eax
084833ce +0x244c:  mov    %eax,(%esp)
084833d1 +0x244f:  call   084814c8 <+0x546>
084833d6 +0x2454:  mov    %eax,%ebx
084833d8 +0x2456:  lea    0x14(%ebp),%eax
084833db +0x2459:  mov    %eax,(%esp)
084833de +0x245c:  call   08481729 <+0x7a7>
084833e3 +0x2461:  mov    (%eax),%eax
084833e5 +0x2463:  mov    %eax,(%ebx)
084833e7 +0x2465:  mov    -0x4(%ebp),%ebx
084833ea +0x2468:  leave
084833eb +0x2469:  ret
084833ec +0x246a:  push   %ebp
084833ed +0x246b:  mov    %esp,%ebp
084833ef +0x246d:  sub    $0x28,%esp
084833f2 +0x2470:  mov    0xc(%ebp),%edx
084833f5 +0x2473:  mov    0x8(%ebp),%eax
084833f8 +0x2476:  mov    %edx,%ecx
084833fa +0x2478:  sub    %eax,%ecx
084833fc +0x247a:  mov    %ecx,%eax
084833fe +0x247c:  sar    $0x2,%eax
08483401 +0x247f:  mov    %eax,-0xc(%ebp)
08483404 +0x2482:  mov    -0xc(%ebp),%eax
08483407 +0x2485:  lea    0x0(,%eax,4),%edx
0848340e +0x248c:  mov    -0xc(%ebp),%eax
08483411 +0x248f:  shl    $0x2,%eax
08483414 +0x2492:  neg    %eax
08483416 +0x2494:  add    0x10(%ebp),%eax
08483419 +0x2497:  mov    %edx,0x8(%esp)
0848341d +0x249b:  mov    0x8(%ebp),%edx
08483420 +0x249e:  mov    %edx,0x4(%esp)
08483424 +0x24a2:  mov    %eax,(%esp)
08483427 +0x24a5:  call   0807d880 <_init+0x178>
0848342c +0x24aa:  mov    -0xc(%ebp),%eax
0848342f +0x24ad:  shl    $0x2,%eax
08483432 +0x24b0:  neg    %eax
08483434 +0x24b2:  add    0x10(%ebp),%eax
08483437 +0x24b5:  leave
08483438 +0x24b6:  ret
08483439 +0x24b7:  push   %ebp
0848343a +0x24b8:  mov    %esp,%ebp
0848343c +0x24ba:  sub    $0x18,%esp
0848343f +0x24bd:  lea    0x8(%ebp),%eax
08483442 +0x24c0:  mov    %eax,(%esp)
08483445 +0x24c3:  call   08483490 <+0x250e>
0848344a +0x24c8:  leave
0848344b +0x24c9:  ret
0848344c +0x24ca:  push   %ebp
0848344d +0x24cb:  mov    %esp,%ebp
0848344f +0x24cd:  push   %esi
08483450 +0x24ce:  push   %ebx
08483451 +0x24cf:  sub    $0x10,%esp
08483454 +0x24d2:  mov    0x10(%ebp),%eax
08483457 +0x24d5:  mov    %eax,(%esp)
0848345a +0x24d8:  call   08482cc7 <+0x1d45>
0848345f +0x24dd:  mov    %eax,%esi
08483461 +0x24df:  mov    0xc(%ebp),%eax
08483464 +0x24e2:  mov    %eax,(%esp)
08483467 +0x24e5:  call   08482cc7 <+0x1d45>
0848346c +0x24ea:  mov    %eax,%ebx
0848346e +0x24ec:  mov    0x8(%ebp),%eax
08483471 +0x24ef:  mov    %eax,(%esp)
08483474 +0x24f2:  call   08482cc7 <+0x1d45>
08483479 +0x24f7:  mov    %esi,0x8(%esp)
0848347d +0x24fb:  mov    %ebx,0x4(%esp)
08483481 +0x24ff:  mov    %eax,(%esp)
08483484 +0x2502:  call   0848349a <+0x2518>
08483489 +0x2507:  add    $0x10,%esp
0848348c +0x250a:  pop    %ebx
0848348d +0x250b:  pop    %esi
0848348e +0x250c:  pop    %ebp
0848348f +0x250d:  ret
08483490 +0x250e:  push   %ebp
08483491 +0x250f:  mov    %esp,%ebp
08483493 +0x2511:  mov    0x8(%ebp),%eax
08483496 +0x2514:  mov    (%eax),%eax
08483498 +0x2516:  pop    %ebp
08483499 +0x2517:  ret
0848349a +0x2518:  push   %ebp
0848349b +0x2519:  mov    %esp,%ebp
0848349d +0x251b:  sub    $0x28,%esp
084834a0 +0x251e:  movb   $0x1,-0x9(%ebp)
084834a4 +0x2522:  mov    0x10(%ebp),%eax
084834a7 +0x2525:  mov    %eax,0x8(%esp)
084834ab +0x2529:  mov    0xc(%ebp),%eax
084834ae +0x252c:  mov    %eax,0x4(%esp)
084834b2 +0x2530:  mov    0x8(%ebp),%eax
084834b5 +0x2533:  mov    %eax,(%esp)
084834b8 +0x2536:  call   084834bf <+0x253d>
084834bd +0x253b:  leave
084834be +0x253c:  ret
084834bf +0x253d:  push   %ebp
084834c0 +0x253e:  mov    %esp,%ebp
084834c2 +0x2540:  sub    $0x18,%esp
084834c5 +0x2543:  mov    0xc(%ebp),%edx
084834c8 +0x2546:  mov    0x8(%ebp),%eax
084834cb +0x2549:  mov    %edx,%ecx
084834cd +0x254b:  sub    %eax,%ecx
084834cf +0x254d:  mov    %ecx,%eax
084834d1 +0x254f:  sar    $0x2,%eax
084834d4 +0x2552:  shl    $0x2,%eax
084834d7 +0x2555:  mov    %eax,0x8(%esp)
084834db +0x2559:  mov    0x8(%ebp),%eax
084834de +0x255c:  mov    %eax,0x4(%esp)
084834e2 +0x2560:  mov    0x10(%ebp),%eax
084834e5 +0x2563:  mov    %eax,(%esp)
084834e8 +0x2566:  call   0807d880 <_init+0x178>
084834ed +0x256b:  mov    0xc(%ebp),%edx
084834f0 +0x256e:  mov    0x8(%ebp),%eax
084834f3 +0x2571:  mov    %edx,%ecx
084834f5 +0x2573:  sub    %eax,%ecx
084834f7 +0x2575:  mov    %ecx,%eax
084834f9 +0x2577:  sar    $0x2,%eax
084834fc +0x257a:  shl    $0x2,%eax
084834ff +0x257d:  add    0x10(%ebp),%eax
08483502 +0x2580:  leave
08483503 +0x2581:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8480f82

/* CPowerManager::CPowerManager() */

void CPowerManager::_GLOBAL__I_CPowerManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
