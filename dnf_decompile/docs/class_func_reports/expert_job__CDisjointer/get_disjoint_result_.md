# get_disjoint_result_

`_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser`

`expert_job::CDisjointer::get_disjoint_result_(CItem*, Inven_Item*, int, DisJointResult&, bool, CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d234a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d234a  _ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser
#           expert_job::CDisjointer::get_disjoint_result_(CItem*, Inven_Item*, int, DisJointResult&, bool, CUser*)
# range [0x085d234a, 0x085d2a15]
085d234a +0x000:  push   %ebp
085d234b +0x001:  mov    %esp,%ebp
085d234d +0x003:  push   %ebx
085d234e +0x004:  sub    $0xd4,%esp
085d2354 +0x00a:  mov    0x18(%ebp),%eax
085d2357 +0x00d:  mov    %al,-0xac(%ebp)
085d235d +0x013:  mov    0x8(%ebp),%eax
085d2360 +0x016:  mov    %eax,(%esp)
085d2363 +0x019:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
085d2368 +0x01e:  mov    %eax,-0x54(%ebp)
085d236b +0x021:  mov    0x8(%ebp),%eax
085d236e +0x024:  mov    %eax,(%esp)
085d2371 +0x027:  call   08473612 <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x5d>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x5d
085d2376 +0x02c:  mov    %eax,-0x50(%ebp)
085d2379 +0x02f:  mov    0x8(%ebp),%eax
085d237c +0x032:  mov    %eax,(%esp)
085d237f +0x035:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085d2384 +0x03a:  mov    %eax,-0x4c(%ebp)
085d2387 +0x03d:  mov    0x8(%ebp),%eax
085d238a +0x040:  mov    %eax,(%esp)
085d238d +0x043:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085d2392 +0x048:  mov    %eax,-0x48(%ebp)
085d2395 +0x04b:  movb   $0x0,-0x41(%ebp)
085d2399 +0x04f:  cmpl   $0x0,0xc(%ebp)
085d239d +0x053:  je     085d23c3 <+0x79>
085d239f +0x055:  mov    0xc(%ebp),%eax
085d23a2 +0x058:  add    $0x11,%eax
085d23a5 +0x05b:  mov    %eax,(%esp)
085d23a8 +0x05e:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
085d23ad +0x063:  xor    $0x1,%eax
085d23b0 +0x066:  test   %al,%al
085d23b2 +0x068:  je     085d23bb <+0x71>
085d23b4 +0x06a:  mov    $0x1,%eax
085d23b9 +0x06f:  jmp    085d23c0 <+0x76>
085d23bb +0x071:  mov    $0x0,%eax
085d23c0 +0x076:  mov    %al,-0x41(%ebp)
085d23c3 +0x079:  movzbl -0x41(%ebp),%ecx
085d23c7 +0x07d:  mov    0x10(%ebp),%eax
085d23ca +0x080:  movzbl %al,%edx
085d23cd +0x083:  mov    -0x4c(%ebp),%eax
085d23d0 +0x086:  movzbl %al,%eax
085d23d3 +0x089:  mov    %ecx,0xc(%esp)
085d23d7 +0x08d:  mov    %edx,0x8(%esp)
085d23db +0x091:  mov    %eax,0x4(%esp)
085d23df +0x095:  lea    -0x63(%ebp),%eax
085d23e2 +0x098:  mov    %eax,(%esp)
085d23e5 +0x09b:  call   085d3b9e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x93>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x93
085d23ea +0x0a0:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d23ef +0x0a5:  lea    0x1bc(%eax),%ecx
085d23f5 +0x0ab:  lea    -0x68(%ebp),%eax
085d23f8 +0x0ae:  lea    -0x63(%ebp),%edx
085d23fb +0x0b1:  mov    %edx,0x8(%esp)
085d23ff +0x0b5:  mov    %ecx,0x4(%esp)
085d2403 +0x0b9:  mov    %eax,(%esp)
085d2406 +0x0bc:  call   085d3fae <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x4a3>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x4a3
085d240b +0x0c1:  sub    $0x4,%esp
085d240e +0x0c4:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d2413 +0x0c9:  lea    0x1bc(%eax),%edx
085d2419 +0x0cf:  lea    -0x60(%ebp),%eax
085d241c +0x0d2:  mov    %edx,0x4(%esp)
085d2420 +0x0d6:  mov    %eax,(%esp)
085d2423 +0x0d9:  call   085d3fda <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x4cf>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x4cf
085d2428 +0x0de:  sub    $0x4,%esp
085d242b +0x0e1:  lea    -0x60(%ebp),%eax
085d242e +0x0e4:  mov    %eax,0x4(%esp)
085d2432 +0x0e8:  lea    -0x68(%ebp),%eax
085d2435 +0x0eb:  mov    %eax,(%esp)
085d2438 +0x0ee:  call   085d40c6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5bb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5bb
085d243d +0x0f3:  test   %al,%al
085d243f +0x0f5:  je     085d245b <+0x111>
085d2441 +0x0f7:  cmpb   $0x0,-0x41(%ebp)
085d2445 +0x0fb:  je     085d2451 <+0x107>
085d2447 +0x0fd:  mov    $0xd3,%eax
085d244c +0x102:  jmp    085d2a11 <+0x6c7>
085d2451 +0x107:  mov    $0x11,%eax
085d2456 +0x10c:  jmp    085d2a11 <+0x6c7>
085d245b +0x111:  lea    -0x68(%ebp),%eax
085d245e +0x114:  mov    %eax,(%esp)
085d2461 +0x117:  call   085d4014 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x509>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x509
085d2466 +0x11c:  add    $0x4,%eax
085d2469 +0x11f:  mov    %eax,-0x40(%ebp)
085d246c +0x122:  fildl  -0x50(%ebp)
085d246f +0x125:  flds   "蠱�?"
085d2475 +0x12b:  fmulp  %st,%st(1)
085d2477 +0x12d:  fnstcw -0xb2(%ebp)
085d247d +0x133:  movzwl -0xb2(%ebp),%eax
085d2484 +0x13a:  mov    $0xc,%ah
085d2486 +0x13c:  mov    %ax,-0xb4(%ebp)
085d248d +0x143:  fldcw  -0xb4(%ebp)
085d2493 +0x149:  fistpl -0x50(%ebp)
085d2496 +0x14c:  fldcw  -0xb2(%ebp)
085d249c +0x152:  mov    -0x40(%ebp),%eax
085d249f +0x155:  mov    0x4(%eax),%eax
085d24a2 +0x158:  mov    %eax,-0x3c(%ebp)
085d24a5 +0x15b:  mov    -0x40(%ebp),%eax
085d24a8 +0x15e:  mov    (%eax),%eax
085d24aa +0x160:  mov    %eax,%edx
085d24ac +0x162:  mov    0x14(%ebp),%eax
085d24af +0x165:  mov    %edx,0x14(%eax)
085d24b2 +0x168:  mov    0x8(%ebp),%eax
085d24b5 +0x16b:  mov    (%eax),%eax
085d24b7 +0x16d:  add    $0x4c,%eax
085d24ba +0x170:  mov    (%eax),%edx
085d24bc +0x172:  mov    0x8(%ebp),%eax
085d24bf +0x175:  mov    %eax,(%esp)
085d24c2 +0x178:  call   *%edx
085d24c4 +0x17a:  movzbl %al,%eax
085d24c7 +0x17d:  mov    %eax,0xc(%esp)
085d24cb +0x181:  movl   $0x0,0x8(%esp)
085d24d3 +0x189:  movl   $0x0,0x4(%esp)
085d24db +0x191:  mov    -0x50(%ebp),%eax
085d24de +0x194:  mov    %eax,(%esp)
085d24e1 +0x197:  call   0898c86e <_Z16getItemSellPriceiiib>  ; getItemSellPrice(int, int, int, bool)
085d24e6 +0x19c:  imul   $0x3e8,%eax,%ebx
085d24ec +0x1a2:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d24f1 +0x1a7:  mov    0x1d4(%eax),%eax
085d24f7 +0x1ad:  mov    %eax,-0xbc(%ebp)
085d24fd +0x1b3:  mov    %ebx,%edx
085d24ff +0x1b5:  mov    %edx,%eax
085d2501 +0x1b7:  sar    $0x1f,%edx
085d2504 +0x1ba:  idivl  -0xbc(%ebp)
085d250a +0x1c0:  mov    %eax,-0x38(%ebp)
085d250d +0x1c3:  fildl  -0x38(%ebp)
085d2510 +0x1c6:  fmuls  -0x3c(%ebp)
085d2513 +0x1c9:  flds   &data#5ba0bb00(.rodata)
085d2519 +0x1cf:  fdivrp %st,%st(1)
085d251b +0x1d1:  fnstcw -0xb2(%ebp)
085d2521 +0x1d7:  movzwl -0xb2(%ebp),%eax
085d2528 +0x1de:  mov    $0xc,%ah
085d252a +0x1e0:  mov    %ax,-0xb4(%ebp)
085d2531 +0x1e7:  fldcw  -0xb4(%ebp)
085d2537 +0x1ed:  fistpl -0xb0(%ebp)
085d253d +0x1f3:  fldcw  -0xb2(%ebp)
085d2543 +0x1f9:  mov    -0xb0(%ebp),%edx
085d2549 +0x1ff:  mov    0x14(%ebp),%eax
085d254c +0x202:  mov    %edx,(%eax)
085d254e +0x204:  mov    0x14(%ebp),%eax
085d2551 +0x207:  mov    (%eax),%eax
085d2553 +0x209:  test   %eax,%eax
085d2555 +0x20b:  jg     085d2560 <+0x216>
085d2557 +0x20d:  mov    0x14(%ebp),%eax
085d255a +0x210:  movl   $0x1,(%eax)
085d2560 +0x216:  mov    0x14(%ebp),%eax
085d2563 +0x219:  movl   $0x0,0x18(%eax)
085d256a +0x220:  mov    0x14(%ebp),%eax
085d256d +0x223:  movl   $0x0,0x4(%eax)
085d2574 +0x22a:  mov    -0x40(%ebp),%eax
085d2577 +0x22d:  mov    0x20(%eax),%eax
085d257a +0x230:  imul   $0x64,%eax,%eax
085d257d +0x233:  mov    %eax,-0x34(%ebp)
085d2580 +0x236:  movl   $0x0,-0x30(%ebp)
085d2587 +0x23d:  cmpb   $0x0,-0xac(%ebp)
085d258e +0x244:  je     085d26c6 <+0x37c>
085d2594 +0x24a:  mov    0x10(%ebp),%eax
085d2597 +0x24d:  add    $0x1,%eax
085d259a +0x250:  mov    %al,-0x59(%ebp)
085d259d +0x253:  call   085d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>  ; expert_job::CDisjointer::GetEtcScript()
085d25a2 +0x258:  lea    0x18(%eax),%ecx
085d25a5 +0x25b:  lea    -0x6c(%ebp),%eax
085d25a8 +0x25e:  lea    -0x59(%ebp),%edx
085d25ab +0x261:  mov    %edx,0x8(%esp)
085d25af +0x265:  mov    %ecx,0x4(%esp)
085d25b3 +0x269:  mov    %eax,(%esp)
085d25b6 +0x26c:  call   085d40da <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5cf>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5cf
085d25bb +0x271:  sub    $0x4,%esp
085d25be +0x274:  call   085d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>  ; expert_job::CDisjointer::GetEtcScript()
085d25c3 +0x279:  lea    0x18(%eax),%edx
085d25c6 +0x27c:  lea    -0x58(%ebp),%eax
085d25c9 +0x27f:  mov    %edx,0x4(%esp)
085d25cd +0x283:  mov    %eax,(%esp)
085d25d0 +0x286:  call   085d4106 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5fb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5fb
085d25d5 +0x28b:  sub    $0x4,%esp
085d25d8 +0x28e:  lea    -0x58(%ebp),%eax
085d25db +0x291:  mov    %eax,0x4(%esp)
085d25df +0x295:  lea    -0x6c(%ebp),%eax
085d25e2 +0x298:  mov    %eax,(%esp)
085d25e5 +0x29b:  call   085d412c <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x621>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x621
085d25ea +0x2a0:  test   %al,%al
085d25ec +0x2a2:  je     085d2603 <+0x2b9>
085d25ee +0x2a4:  lea    -0x6c(%ebp),%eax
085d25f1 +0x2a7:  mov    %eax,(%esp)
085d25f4 +0x2aa:  call   085d4140 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x635>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x635
085d25f9 +0x2af:  movzbl 0x1(%eax),%eax
085d25fd +0x2b3:  movzbl %al,%eax
085d2600 +0x2b6:  mov    %eax,-0x30(%ebp)
085d2603 +0x2b9:  mov    -0x30(%ebp),%eax
085d2606 +0x2bc:  imul   $0x64,%eax,%eax
085d2609 +0x2bf:  mov    %eax,-0x30(%ebp)
085d260c +0x2c2:  mov    -0x30(%ebp),%eax
085d260f +0x2c5:  add    %eax,-0x34(%ebp)
085d2612 +0x2c8:  cmpl   $0x0,0x1c(%ebp)
085d2616 +0x2cc:  je     085d26c6 <+0x37c>
085d261c +0x2d2:  mov    0x1c(%ebp),%eax
085d261f +0x2d5:  mov    %eax,(%esp)
085d2622 +0x2d8:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085d2627 +0x2dd:  cmp    $0x2,%eax
085d262a +0x2e0:  jle    085d2642 <+0x2f8>
085d262c +0x2e2:  mov    0x1c(%ebp),%eax
085d262f +0x2e5:  mov    %eax,(%esp)
085d2632 +0x2e8:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d2637 +0x2ed:  test   %eax,%eax
085d2639 +0x2ef:  je     085d2642 <+0x2f8>
085d263b +0x2f1:  mov    $0x1,%eax
085d2640 +0x2f6:  jmp    085d2647 <+0x2fd>
085d2642 +0x2f8:  mov    $0x0,%eax
085d2647 +0x2fd:  test   %al,%al
085d2649 +0x2ff:  je     085d26c6 <+0x37c>
085d264b +0x301:  mov    0x1c(%ebp),%eax
085d264e +0x304:  mov    %eax,(%esp)
085d2651 +0x307:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085d2656 +0x30c:  mov    %eax,-0x2c(%ebp)
085d2659 +0x30f:  mov    0x1c(%ebp),%eax
085d265c +0x312:  mov    %eax,(%esp)
085d265f +0x315:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085d2664 +0x31a:  mov    %eax,0x4(%esp)
085d2668 +0x31e:  mov    0x1c(%ebp),%eax
085d266b +0x321:  mov    %eax,(%esp)
085d266e +0x324:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
085d2673 +0x329:  mov    %eax,0x8(%esp)
085d2677 +0x32d:  movl   $0x3,0x4(%esp)
085d267f +0x335:  mov    -0x2c(%ebp),%eax
085d2682 +0x338:  mov    %eax,(%esp)
085d2685 +0x33b:  call   0850cae2 <_ZNK10CInventory34GetExpertJobSelfDisjointBigWinRateE20ENUM_EXPERT_JOB_TYPEi>  ; CInventory::GetExpertJobSelfDisjointBigWinRate(ENUM_EXPERT_JOB_TYPE, int) const
085d268a +0x340:  fstps  -0x28(%ebp)
085d268d +0x343:  flds   -0x28(%ebp)
085d2690 +0x346:  flds   &data#0932e4cd(.rodata)
085d2696 +0x34c:  fmulp  %st,%st(1)
085d2698 +0x34e:  fstps  -0x28(%ebp)
085d269b +0x351:  fildl  -0x34(%ebp)
085d269e +0x354:  fadds  -0x28(%ebp)
085d26a1 +0x357:  fnstcw -0xb2(%ebp)
085d26a7 +0x35d:  movzwl -0xb2(%ebp),%eax
085d26ae +0x364:  mov    $0xc,%ah
085d26b0 +0x366:  mov    %ax,-0xb4(%ebp)
085d26b7 +0x36d:  fldcw  -0xb4(%ebp)
085d26bd +0x373:  fistpl -0x34(%ebp)
085d26c0 +0x376:  fldcw  -0xb2(%ebp)
085d26c6 +0x37c:  movl   $0x2710,(%esp)
085d26cd +0x383:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d26d2 +0x388:  cmp    -0x34(%ebp),%eax
085d26d5 +0x38b:  setl   %al
085d26d8 +0x38e:  test   %al,%al
085d26da +0x390:  je     085d2792 <+0x448>
085d26e0 +0x396:  lea    -0x80(%ebp),%eax
085d26e3 +0x399:  mov    %eax,(%esp)
085d26e6 +0x39c:  call   085d3bd6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0xcb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0xcb
085d26eb +0x3a1:  movl   $0xffffffff,-0x80(%ebp)
085d26f2 +0x3a8:  movl   $0x2710,(%esp)
085d26f9 +0x3af:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d26fe +0x3b4:  mov    -0x40(%ebp),%edx
085d2701 +0x3b7:  lea    0x14(%edx),%ecx
085d2704 +0x3ba:  mov    -0x48(%ebp),%edx
085d2707 +0x3bd:  mov    %edx,0xc(%esp)
085d270b +0x3c1:  lea    -0x80(%ebp),%edx
085d270e +0x3c4:  mov    %edx,0x8(%esp)
085d2712 +0x3c8:  mov    %eax,0x4(%esp)
085d2716 +0x3cc:  mov    %ecx,(%esp)
085d2719 +0x3cf:  call   0896d6ab <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i>  ; expert_job::get_additional_item(std::vector<stItemSelectRate, std::allocator<stItemSelectRate> > const&, int, stItemSelectRate&, int)
085d271e +0x3d4:  mov    -0x80(%ebp),%eax
085d2721 +0x3d7:  cmp    $0xffffffff,%eax
085d2724 +0x3da:  je     085d2849 <+0x4ff>
085d272a +0x3e0:  mov    -0x80(%ebp),%edx
085d272d +0x3e3:  mov    0x14(%ebp),%eax
085d2730 +0x3e6:  mov    %edx,0x18(%eax)
085d2733 +0x3e9:  fildl  -0x48(%ebp)
085d2736 +0x3ec:  flds   -0x78(%ebp)
085d2739 +0x3ef:  fdivrp %st,%st(1)
085d273b +0x3f1:  fstps  -0x24(%ebp)
085d273e +0x3f4:  flds   -0x24(%ebp)
085d2741 +0x3f7:  fnstcw -0xb2(%ebp)
085d2747 +0x3fd:  movzwl -0xb2(%ebp),%eax
085d274e +0x404:  mov    $0xc,%ah
085d2750 +0x406:  mov    %ax,-0xb4(%ebp)
085d2757 +0x40d:  fldcw  -0xb4(%ebp)
085d275d +0x413:  fistpl -0xb0(%ebp)
085d2763 +0x419:  fldcw  -0xb2(%ebp)
085d2769 +0x41f:  mov    -0xb0(%ebp),%edx
085d276f +0x425:  mov    0x14(%ebp),%eax
085d2772 +0x428:  mov    %edx,0x4(%eax)
085d2775 +0x42b:  mov    0x14(%ebp),%eax
085d2778 +0x42e:  mov    0x4(%eax),%eax
085d277b +0x431:  test   %eax,%eax
085d277d +0x433:  jg     085d2849 <+0x4ff>
085d2783 +0x439:  mov    0x14(%ebp),%eax
085d2786 +0x43c:  movl   $0x1,0x4(%eax)
085d278d +0x443:  jmp    085d2849 <+0x4ff>
085d2792 +0x448:  lea    -0x94(%ebp),%eax
085d2798 +0x44e:  mov    %eax,(%esp)
085d279b +0x451:  call   085d3bd6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0xcb>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0xcb
085d27a0 +0x456:  movl   $0xffffffff,-0x94(%ebp)
085d27aa +0x460:  movl   $0x2710,(%esp)
085d27b1 +0x467:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d27b6 +0x46c:  mov    -0x40(%ebp),%edx
085d27b9 +0x46f:  lea    0x8(%edx),%ecx
085d27bc +0x472:  mov    -0x48(%ebp),%edx
085d27bf +0x475:  mov    %edx,0xc(%esp)
085d27c3 +0x479:  lea    -0x94(%ebp),%edx
085d27c9 +0x47f:  mov    %edx,0x8(%esp)
085d27cd +0x483:  mov    %eax,0x4(%esp)
085d27d1 +0x487:  mov    %ecx,(%esp)
085d27d4 +0x48a:  call   0896d6ab <_ZN10expert_job19get_additional_itemERKSt6vectorI16stItemSelectRateSaIS1_EEiRS1_i>  ; expert_job::get_additional_item(std::vector<stItemSelectRate, std::allocator<stItemSelectRate> > const&, int, stItemSelectRate&, int)
085d27d9 +0x48f:  mov    -0x94(%ebp),%eax
085d27df +0x495:  cmp    $0xffffffff,%eax
085d27e2 +0x498:  je     085d2849 <+0x4ff>
085d27e4 +0x49a:  mov    -0x94(%ebp),%edx
085d27ea +0x4a0:  mov    0x14(%ebp),%eax
085d27ed +0x4a3:  mov    %edx,0x18(%eax)
085d27f0 +0x4a6:  fildl  -0x48(%ebp)
085d27f3 +0x4a9:  flds   -0x8c(%ebp)
085d27f9 +0x4af:  fdivrp %st,%st(1)
085d27fb +0x4b1:  fstps  -0x20(%ebp)
085d27fe +0x4b4:  flds   -0x20(%ebp)
085d2801 +0x4b7:  fnstcw -0xb2(%ebp)
085d2807 +0x4bd:  movzwl -0xb2(%ebp),%eax
085d280e +0x4c4:  mov    $0xc,%ah
085d2810 +0x4c6:  mov    %ax,-0xb4(%ebp)
085d2817 +0x4cd:  fldcw  -0xb4(%ebp)
085d281d +0x4d3:  fistpl -0xb0(%ebp)
085d2823 +0x4d9:  fldcw  -0xb2(%ebp)
085d2829 +0x4df:  mov    -0xb0(%ebp),%edx
085d282f +0x4e5:  mov    0x14(%ebp),%eax
085d2832 +0x4e8:  mov    %edx,0x4(%eax)
085d2835 +0x4eb:  mov    0x14(%ebp),%eax
085d2838 +0x4ee:  mov    0x4(%eax),%eax
085d283b +0x4f1:  test   %eax,%eax
085d283d +0x4f3:  jg     085d2849 <+0x4ff>
085d283f +0x4f5:  mov    0x14(%ebp),%eax
085d2842 +0x4f8:  movl   $0x1,0x4(%eax)
085d2849 +0x4ff:  cmpb   $0x0,-0xac(%ebp)
085d2850 +0x506:  je     085d2a0c <+0x6c2>
085d2856 +0x50c:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d285b +0x511:  add    $0x30,%eax
085d285e +0x514:  mov    %eax,-0x1c(%ebp)
085d2861 +0x517:  mov    -0x1c(%ebp),%eax
085d2864 +0x51a:  mov    (%eax),%eax
085d2866 +0x51c:  mov    %eax,-0x18(%ebp)
085d2869 +0x51f:  cmpl   $0x1,-0x4c(%ebp)
085d286d +0x523:  jle    085d2887 <+0x53d>
085d286f +0x525:  movl   $0x64,(%esp)
085d2876 +0x52c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d287b +0x531:  cmp    -0x18(%ebp),%eax
085d287e +0x534:  jge    085d2887 <+0x53d>
085d2880 +0x536:  mov    $0x1,%eax
085d2885 +0x53b:  jmp    085d288c <+0x542>
085d2887 +0x53d:  mov    $0x0,%eax
085d288c +0x542:  test   %al,%al
085d288e +0x544:  je     085d28ac <+0x562>
085d2890 +0x546:  mov    -0x1c(%ebp),%eax
085d2893 +0x549:  mov    0x8(%eax),%eax
085d2896 +0x54c:  mov    %eax,%edx
085d2898 +0x54e:  mov    0x14(%ebp),%eax
085d289b +0x551:  mov    %edx,0x8(%eax)
085d289e +0x554:  mov    -0x1c(%ebp),%eax
085d28a1 +0x557:  mov    0x4(%eax),%eax
085d28a4 +0x55a:  mov    %eax,%edx
085d28a6 +0x55c:  mov    0x14(%ebp),%eax
085d28a9 +0x55f:  mov    %edx,0x1c(%eax)
085d28ac +0x562:  cmpl   $0x0,0x1c(%ebp)
085d28b0 +0x566:  je     085d2a0c <+0x6c2>
085d28b6 +0x56c:  mov    0x1c(%ebp),%eax
085d28b9 +0x56f:  mov    %eax,(%esp)
085d28bc +0x572:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085d28c1 +0x577:  cmp    $0x2,%eax
085d28c4 +0x57a:  jle    085d28dc <+0x592>
085d28c6 +0x57c:  mov    0x1c(%ebp),%eax
085d28c9 +0x57f:  mov    %eax,(%esp)
085d28cc +0x582:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d28d1 +0x587:  test   %eax,%eax
085d28d3 +0x589:  je     085d28dc <+0x592>
085d28d5 +0x58b:  mov    $0x1,%eax
085d28da +0x590:  jmp    085d28e1 <+0x597>
085d28dc +0x592:  mov    $0x0,%eax
085d28e1 +0x597:  test   %al,%al
085d28e3 +0x599:  je     085d2a0c <+0x6c2>
085d28e9 +0x59f:  mov    0x1c(%ebp),%eax
085d28ec +0x5a2:  mov    %eax,(%esp)
085d28ef +0x5a5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085d28f4 +0x5aa:  mov    %eax,-0x14(%ebp)
085d28f7 +0x5ad:  mov    0x1c(%ebp),%eax
085d28fa +0x5b0:  mov    %eax,(%esp)
085d28fd +0x5b3:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085d2902 +0x5b8:  mov    %eax,0x4(%esp)
085d2906 +0x5bc:  mov    0x1c(%ebp),%eax
085d2909 +0x5bf:  mov    %eax,(%esp)
085d290c +0x5c2:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
085d2911 +0x5c7:  mov    %eax,0x8(%esp)
085d2915 +0x5cb:  movl   $0x3,0x4(%esp)
085d291d +0x5d3:  mov    -0x14(%ebp),%eax
085d2920 +0x5d6:  mov    %eax,(%esp)
085d2923 +0x5d9:  call   0850cb94 <_ZNK10CInventory39GetExpertJobSelfDisjointResultVariationE20ENUM_EXPERT_JOB_TYPEi>  ; CInventory::GetExpertJobSelfDisjointResultVariation(ENUM_EXPERT_JOB_TYPE, int) const
085d2928 +0x5de:  fstps  -0x10(%ebp)
085d292b +0x5e1:  flds   -0x10(%ebp)
085d292e +0x5e4:  flds   &data#0932e4cd(.rodata)
085d2934 +0x5ea:  fdivrp %st,%st(1)
085d2936 +0x5ec:  fstps  -0x10(%ebp)
085d2939 +0x5ef:  movl   $0x0,-0xa8(%ebp)
085d2943 +0x5f9:  movl   $0x0,-0xa4(%ebp)
085d294d +0x603:  movl   $0x0,-0xa0(%ebp)
085d2957 +0x60d:  movl   $0x0,-0x9c(%ebp)
085d2961 +0x617:  movl   $0x0,-0x98(%ebp)
085d296b +0x621:  movl   $0x0,-0xc(%ebp)
085d2972 +0x628:  jmp    085d29fd <+0x6b3>
085d2977 +0x62d:  mov    -0xc(%ebp),%eax
085d297a +0x630:  mov    -0xc(%ebp),%ecx
085d297d +0x633:  mov    0x14(%ebp),%edx
085d2980 +0x636:  mov    (%edx,%ecx,4),%edx
085d2983 +0x639:  mov    %edx,-0xa8(%ebp,%eax,4)
085d298a +0x640:  mov    -0xc(%ebp),%edx
085d298d +0x643:  mov    -0xc(%ebp),%eax
085d2990 +0x646:  mov    -0xa8(%ebp,%eax,4),%eax
085d2997 +0x64d:  mov    %eax,-0xb0(%ebp)
085d299d +0x653:  fildl  -0xb0(%ebp)
085d29a3 +0x659:  fmuls  -0x10(%ebp)
085d29a6 +0x65c:  fnstcw -0xb2(%ebp)
085d29ac +0x662:  movzwl -0xb2(%ebp),%eax
085d29b3 +0x669:  mov    $0xc,%ah
085d29b5 +0x66b:  mov    %ax,-0xb4(%ebp)
085d29bc +0x672:  fldcw  -0xb4(%ebp)
085d29c2 +0x678:  fistpl -0xb0(%ebp)
085d29c8 +0x67e:  fldcw  -0xb2(%ebp)
085d29ce +0x684:  mov    -0xb0(%ebp),%eax
085d29d4 +0x68a:  mov    %eax,-0xa8(%ebp,%edx,4)
085d29db +0x691:  mov    -0xc(%ebp),%edx
085d29de +0x694:  mov    -0xc(%ebp),%ecx
085d29e1 +0x697:  mov    0x14(%ebp),%eax
085d29e4 +0x69a:  mov    (%eax,%ecx,4),%ecx
085d29e7 +0x69d:  mov    -0xc(%ebp),%eax
085d29ea +0x6a0:  mov    -0xa8(%ebp,%eax,4),%eax
085d29f1 +0x6a7:  add    %eax,%ecx
085d29f3 +0x6a9:  mov    0x14(%ebp),%eax
085d29f6 +0x6ac:  mov    %ecx,(%eax,%edx,4)
085d29f9 +0x6af:  addl   $0x1,-0xc(%ebp)
085d29fd +0x6b3:  cmpl   $0x4,-0xc(%ebp)
085d2a01 +0x6b7:  setle  %al
085d2a04 +0x6ba:  test   %al,%al
085d2a06 +0x6bc:  jne    085d2977 <+0x62d>
085d2a0c +0x6c2:  mov    $0x0,%eax
085d2a11 +0x6c7:  mov    -0x4(%ebp),%ebx
085d2a14 +0x6ca:  leave
085d2a15 +0x6cb:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::get_disjoint_result_ @ 0x85d234a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expert_job::CDisjointer::get_disjoint_result_(CItem*, Inven_Item*, int, DisJointResult&, bool,
   CUser*) */

undefined4
expert_job::CDisjointer::get_disjoint_result_
          (CItem *param_1,Inven_Item *param_2,int param_3,DisJointResult *param_4,bool param_5,
          CUser *param_6)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longdouble lVar7;
  int local_ac [5];
  int local_98 [2];
  float local_90;
  int local_84 [2];
  float local_7c;
  _Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_char>> local_70 [4];
  DisjointMachineGrade local_6c [5];
  DisjointMachineGrade local_67 [3];
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  local_64 [7];
  char local_5d;
  map<unsigned_char,unsigned_char,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_char>>>
  local_5c [4];
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  bool local_45;
  undefined4 *local_44;
  float local_40;
  int local_3c;
  int local_38;
  uint local_34;
  CInventory *local_30;
  float local_2c;
  float local_28;
  float local_24;
  int *local_20;
  int local_1c;
  CInventory *local_18;
  int local_10;
  
  local_58 = CItem::get_index(param_1);
  local_54 = CItem::GetSellPrice(param_1);
  local_50 = CItem::get_rarity(param_1);
  local_4c = CItem::get_grade(param_1);
  local_45 = false;
  if (param_2 != (Inven_Item *)0x0) {
    cVar2 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_2 + 0x11));
    local_45 = cVar2 != '\x01';
  }
  DisjointMachineGrade::DisjointMachineGrade(local_67,(uchar)local_50,(uchar)param_3,local_45);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::find(local_6c);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::end(local_64);
  cVar2 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::operator==
                    ((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                     local_6c,(_Rb_tree_iterator *)local_64);
  if (cVar2 == '\0') {
    iVar5 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::
            operator->((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                       local_6c);
    local_44 = (undefined4 *)(iVar5 + 4);
    local_54 = (int)ROUND(_DAT_08cc080c * (float)local_54);
    local_40 = *(float *)(iVar5 + 8);
    *(undefined4 *)(param_4 + 0x14) = *local_44;
    bVar3 = (bool)(**(code **)(*(int *)param_1 + 0x4c))(param_1);
    iVar5 = getItemSellPrice(local_54,0,0,bVar3);
    iVar6 = GetScript();
    local_3c = (iVar5 * 1000) / *(int *)(iVar6 + 0x1d4);
    *(int *)param_4 = (int)ROUND(((float)local_3c * local_40) / _DAT_08cc0810);
    if (*(int *)param_4 < 1) {
      *(undefined4 *)param_4 = 1;
    }
    *(undefined4 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 4) = 0;
    local_38 = local_44[8] * 100;
    local_34 = 0;
    if (param_5) {
      local_5d = (uchar)param_3 + '\x01';
      GetEtcScript();
      std::
      map<unsigned_char,unsigned_char,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_char>>>
      ::find((uchar *)local_70);
      GetEtcScript();
      std::
      map<unsigned_char,unsigned_char,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,unsigned_char>>>
      ::end(local_5c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_char>>::operator!=
                        (local_70,(_Rb_tree_iterator *)local_5c);
      if (cVar2 != '\0') {
        iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,unsigned_char>>::operator->
                          (local_70);
        local_34 = (uint)*(byte *)(iVar5 + 1);
      }
      local_34 = local_34 * 100;
      local_38 = local_38 + local_34;
      if (param_6 != (CUser *)0x0) {
        iVar5 = CUser::get_state(param_6);
        if ((iVar5 < 3) ||
           (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_6), iVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_30 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_6);
          iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_6);
          uVar4 = CUser::GetCurExpertJobLevel(param_6,iVar5);
          lVar7 = (longdouble)CInventory::GetExpertJobSelfDisjointBigWinRate(local_30,3,uVar4);
          local_2c = _DAT_08cc0814 * (float)lVar7;
          local_38 = (int)ROUND((float)local_38 + local_2c);
        }
      }
    }
    iVar5 = get_rand_int(10000);
    if (iVar5 < local_38) {
      stItemSelectRate::stItemSelectRate((stItemSelectRate *)local_84);
      local_84[0] = -1;
      iVar5 = get_rand_int(10000);
      get_additional_item((vector *)(local_44 + 5),iVar5,(stItemSelectRate *)local_84,local_4c);
      if (local_84[0] != -1) {
        *(int *)(param_4 + 0x18) = local_84[0];
        local_28 = (float)local_4c / local_7c;
        *(int *)(param_4 + 4) = (int)ROUND(local_28);
        if (*(int *)(param_4 + 4) < 1) {
          *(undefined4 *)(param_4 + 4) = 1;
        }
      }
    }
    else {
      stItemSelectRate::stItemSelectRate((stItemSelectRate *)local_98);
      local_98[0] = -1;
      iVar5 = get_rand_int(10000);
      get_additional_item((vector *)(local_44 + 2),iVar5,(stItemSelectRate *)local_98,local_4c);
      if (local_98[0] != -1) {
        *(int *)(param_4 + 0x18) = local_98[0];
        local_24 = (float)local_4c / local_90;
        *(int *)(param_4 + 4) = (int)ROUND(local_24);
        if (*(int *)(param_4 + 4) < 1) {
          *(undefined4 *)(param_4 + 4) = 1;
        }
      }
    }
    if (param_5) {
      iVar5 = GetScript();
      local_20 = (int *)(iVar5 + 0x30);
      local_1c = *local_20;
      if ((local_50 < 2) || (iVar5 = get_rand_int(100), local_1c <= iVar5)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(int *)(param_4 + 8) = local_20[2];
        *(int *)(param_4 + 0x1c) = local_20[1];
      }
      if (param_6 != (CUser *)0x0) {
        iVar5 = CUser::get_state(param_6);
        if ((iVar5 < 3) ||
           (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_6), iVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_6);
          iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_6);
          uVar4 = CUser::GetCurExpertJobLevel(param_6,iVar5);
          lVar7 = (longdouble)CInventory::GetExpertJobSelfDisjointResultVariation(local_18,3,uVar4);
          fVar1 = (float)lVar7 / _DAT_08cc0814;
          local_ac[0] = 0;
          local_ac[1] = 0;
          local_ac[2] = 0;
          local_ac[3] = 0;
          local_ac[4] = 0;
          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
            local_ac[local_10] = *(int *)(param_4 + local_10 * 4);
            local_ac[local_10] = (int)ROUND((float)local_ac[local_10] * fVar1);
            *(int *)(param_4 + local_10 * 4) = *(int *)(param_4 + local_10 * 4) + local_ac[local_10]
            ;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else if (local_45 == false) {
    uVar4 = 0x11;
  }
  else {
    uVar4 = 0xd3;
  }
  return uVar4;
}
```
