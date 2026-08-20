# dispatch_sig

`_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci`

`Inter_LoadEtc::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c0264` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c0264  _ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci
#           Inter_LoadEtc::dispatch_sig(CUser*, char*, int)
# range [0x084c0264, 0x084c266d]
084c0264 +0x0000:  push   %ebp
084c0265 +0x0001:  mov    %esp,%ebp
084c0267 +0x0003:  push   %edi
084c0268 +0x0004:  push   %esi
084c0269 +0x0005:  push   %ebx
084c026a +0x0006:  sub    $0x15c,%esp
084c0270 +0x000c:  mov    0xc(%ebp),%eax
084c0273 +0x000f:  mov    %eax,(%esp)
084c0276 +0x0012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c027b +0x0017:  test   %eax,%eax
084c027d +0x0019:  sete   %al
084c0280 +0x001c:  test   %al,%al
084c0282 +0x001e:  je     084c028e <+0x2a>
084c0284 +0x0020:  mov    $0xa7b,%ebx
084c0289 +0x0025:  jmp    084c2661 <+0x23fd>
084c028e +0x002a:  mov    0xc(%ebp),%eax
084c0291 +0x002d:  mov    %eax,(%esp)
084c0294 +0x0030:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c0299 +0x0035:  test   %eax,%eax
084c029b +0x0037:  sete   %al
084c029e +0x003a:  test   %al,%al
084c02a0 +0x003c:  je     084c02ac <+0x48>
084c02a2 +0x003e:  mov    $0xa7f,%ebx
084c02a7 +0x0043:  jmp    084c2661 <+0x23fd>
084c02ac +0x0048:  mov    0x10(%ebp),%eax
084c02af +0x004b:  mov    %eax,-0x60(%ebp)
084c02b2 +0x004e:  mov    -0x60(%ebp),%eax
084c02b5 +0x0051:  mov    0x8(%eax),%eax
084c02b8 +0x0054:  cmp    $0x1,%eax
084c02bb +0x0057:  jne    084c02c7 <+0x63>
084c02bd +0x0059:  mov    $0xa96,%ebx
084c02c2 +0x005e:  jmp    084c2661 <+0x23fd>
084c02c7 +0x0063:  mov    -0x60(%ebp),%eax
084c02ca +0x0066:  mov    0x354(%eax),%ebx
084c02d0 +0x006c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c02d5 +0x0071:  mov    %ebx,0x4(%esp)
084c02d9 +0x0075:  mov    %eax,(%esp)
084c02dc +0x0078:  call   0819ede0 <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x1c>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x1c
084c02e1 +0x007d:  xor    $0x1,%eax
084c02e4 +0x0080:  test   %al,%al
084c02e6 +0x0082:  je     084c032b <+0xc7>
084c02e8 +0x0084:  mov    -0x60(%ebp),%eax
084c02eb +0x0087:  mov    0x354(%eax),%eax
084c02f1 +0x008d:  mov    %eax,0x14(%esp)
084c02f5 +0x0091:  movl   $"Inter_LoadEtc::dispatch_sig pvp_grade = %d",0x10(%esp)
084c02fd +0x0099:  movl   $0xa9b,0xc(%esp)
084c0305 +0x00a1:  movl   $&_ZZN13Inter_LoadEtc12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c030d +0x00a9:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c0315 +0x00b1:  movl   $0x1,(%esp)
084c031c +0x00b8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c0321 +0x00bd:  mov    $0xa9c,%ebx
084c0326 +0x00c2:  jmp    084c2661 <+0x23fd>
084c032b +0x00c7:  lea    -0x90(%ebp),%eax
084c0331 +0x00cd:  mov    %eax,(%esp)
084c0334 +0x00d0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c0339 +0x00d5:  mov    -0x60(%ebp),%eax
084c033c +0x00d8:  mov    %eax,0x8(%esp)
084c0340 +0x00dc:  mov    0xc(%ebp),%eax
084c0343 +0x00df:  mov    %eax,0x4(%esp)
084c0347 +0x00e3:  mov    0x8(%ebp),%eax
084c034a +0x00e6:  mov    %eax,(%esp)
084c034d +0x00e9:  call   084c2964 <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC>  ; Inter_LoadEtc::SetPvpRecord(CUser*, SIG_LOAD_ETC*)
084c0352 +0x00ee:  mov    %al,-0x61(%ebp)
084c0355 +0x00f1:  movzbl -0x61(%ebp),%eax
084c0359 +0x00f5:  xor    $0x1,%eax
084c035c +0x00f8:  test   %al,%al
084c035e +0x00fa:  je     084c036a <+0x106>
084c0360 +0x00fc:  mov    $0xaa2,%ebx
084c0365 +0x0101:  jmp    084c2653 <+0x23ef>
084c036a +0x0106:  mov    -0x60(%ebp),%eax
084c036d +0x0109:  mov    %eax,0x8(%esp)
084c0371 +0x010d:  mov    0xc(%ebp),%eax
084c0374 +0x0110:  mov    %eax,0x4(%esp)
084c0378 +0x0114:  mov    0x8(%ebp),%eax
084c037b +0x0117:  mov    %eax,(%esp)
084c037e +0x011a:  call   084c2a98 <_ZN13Inter_LoadEtc13SetRankRecordEP5CUserP12SIG_LOAD_ETC>  ; Inter_LoadEtc::SetRankRecord(CUser*, SIG_LOAD_ETC*)
084c0383 +0x011f:  mov    %al,-0x61(%ebp)
084c0386 +0x0122:  movzbl -0x61(%ebp),%eax
084c038a +0x0126:  xor    $0x1,%eax
084c038d +0x0129:  test   %al,%al
084c038f +0x012b:  je     084c039b <+0x137>
084c0391 +0x012d:  mov    $0xaa5,%ebx
084c0396 +0x0132:  jmp    084c2653 <+0x23ef>
084c039b +0x0137:  mov    0xc(%ebp),%eax
084c039e +0x013a:  mov    %eax,(%esp)
084c03a1 +0x013d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c03a6 +0x0142:  mov    0x7b(%eax),%esi
084c03a9 +0x0145:  mov    -0x60(%ebp),%eax
084c03ac +0x0148:  mov    0x4(%eax),%ebx
084c03af +0x014b:  movl   $0x0,0xc(%esp)
084c03b7 +0x0153:  movl   $0xac5,0x8(%esp)
084c03bf +0x015b:  movl   $&_ZZN13Inter_LoadEtc12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c03c7 +0x0163:  lea    -0x84(%ebp),%eax
084c03cd +0x0169:  mov    %eax,(%esp)
084c03d0 +0x016c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c03d5 +0x0171:  mov    %esi,0xc(%esp)
084c03d9 +0x0175:  mov    %ebx,0x8(%esp)
084c03dd +0x0179:  movl   $"CharLastPlayTick char(%d) t(%d)",0x4(%esp)
084c03e5 +0x0181:  lea    -0x84(%ebp),%eax
084c03eb +0x0187:  mov    %eax,(%esp)
084c03ee +0x018a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c03f3 +0x018f:  mov    0xc(%ebp),%eax
084c03f6 +0x0192:  mov    %eax,(%esp)
084c03f9 +0x0195:  call   0867cbe4 <_ZN5CUser18ProcPremiumFatigueEv>  ; CUser::ProcPremiumFatigue()
084c03fe +0x019a:  mov    0xc(%ebp),%eax
084c0401 +0x019d:  mov    %eax,(%esp)
084c0404 +0x01a0:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
084c0409 +0x01a5:  mov    0xc(%ebp),%edx
084c040c +0x01a8:  mov    %edx,0x4(%esp)
084c0410 +0x01ac:  mov    %eax,(%esp)
084c0413 +0x01af:  call   086ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>  ; WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
084c0418 +0x01b4:  mov    0xc(%ebp),%eax
084c041b +0x01b7:  mov    %eax,0x4(%esp)
084c041f +0x01bb:  mov    0x8(%ebp),%eax
084c0422 +0x01be:  mov    %eax,(%esp)
084c0425 +0x01c1:  call   084c311a <_ZN13Inter_LoadEtc10SetFatigueEP5CUser>  ; Inter_LoadEtc::SetFatigue(CUser*)
084c042a +0x01c6:  mov    %al,-0x61(%ebp)
084c042d +0x01c9:  movzbl -0x61(%ebp),%eax
084c0431 +0x01cd:  xor    $0x1,%eax
084c0434 +0x01d0:  test   %al,%al
084c0436 +0x01d2:  je     084c0442 <+0x1de>
084c0438 +0x01d4:  mov    $0xacf,%ebx
084c043d +0x01d9:  jmp    084c2653 <+0x23ef>
084c0442 +0x01de:  mov    0xc(%ebp),%eax
084c0445 +0x01e1:  mov    %eax,0x4(%esp)
084c0449 +0x01e5:  mov    0x8(%ebp),%eax
084c044c +0x01e8:  mov    %eax,(%esp)
084c044f +0x01eb:  call   084e866c <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser>  ; Inter_LoadEtc::verifyCharacVillage(CUser*)
084c0454 +0x01f0:  mov    0xc(%ebp),%eax
084c0457 +0x01f3:  mov    %eax,0x4(%esp)
084c045b +0x01f7:  mov    0x8(%ebp),%eax
084c045e +0x01fa:  mov    %eax,(%esp)
084c0461 +0x01fd:  call   084c2b82 <_ZN13Inter_LoadEtc10SendResultEP5CUser>  ; Inter_LoadEtc::SendResult(CUser*)
084c0466 +0x0202:  mov    %al,-0x61(%ebp)
084c0469 +0x0205:  movzbl -0x61(%ebp),%eax
084c046d +0x0209:  xor    $0x1,%eax
084c0470 +0x020c:  test   %al,%al
084c0472 +0x020e:  je     084c047e <+0x21a>
084c0474 +0x0210:  mov    $0xae6,%ebx
084c0479 +0x0215:  jmp    084c2653 <+0x23ef>
084c047e +0x021a:  movl   $0x0,0x8(%esp)
084c0486 +0x0222:  movl   $0x0,0x4(%esp)
084c048e +0x022a:  mov    0xc(%ebp),%eax
084c0491 +0x022d:  mov    %eax,(%esp)
084c0494 +0x0230:  call   0864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>  ; CUser::SendRestrictedGoods(bool, int)
084c0499 +0x0235:  mov    -0x60(%ebp),%eax
084c049c +0x0238:  add    $0x230c,%eax
084c04a1 +0x023d:  mov    %eax,0x4(%esp)
084c04a5 +0x0241:  mov    0xc(%ebp),%eax
084c04a8 +0x0244:  mov    %eax,(%esp)
084c04ab +0x0247:  call   08658ff6 <_ZN5CUser20LoadCoolTimeItemInfoEP20CONTINUOUS_ITEM_INFO>  ; CUser::LoadCoolTimeItemInfo(CONTINUOUS_ITEM_INFO*)
084c04b0 +0x024c:  mov    -0x60(%ebp),%eax
084c04b3 +0x024f:  add    $0x24a4,%eax
084c04b8 +0x0254:  mov    %eax,0x4(%esp)
084c04bc +0x0258:  mov    0xc(%ebp),%eax
084c04bf +0x025b:  mov    %eax,(%esp)
084c04c2 +0x025e:  call   086590f0 <_ZN5CUser18LoadEffectItemInfoEP20CONTINUOUS_ITEM_INFO>  ; CUser::LoadEffectItemInfo(CONTINUOUS_ITEM_INFO*)
084c04c7 +0x0263:  movl   $0x6,0x4(%esp)
084c04cf +0x026b:  mov    0xc(%ebp),%eax
084c04d2 +0x026e:  mov    %eax,(%esp)
084c04d5 +0x0271:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c04da +0x0276:  mov    (%eax),%edx
084c04dc +0x0278:  add    $0x4,%edx
084c04df +0x027b:  mov    (%edx),%ecx
084c04e1 +0x027d:  mov    -0x60(%ebp),%edx
084c04e4 +0x0280:  add    $0x40ce,%edx
084c04ea +0x0286:  mov    %edx,0x8(%esp)
084c04ee +0x028a:  mov    0xc(%ebp),%edx
084c04f1 +0x028d:  mov    %edx,0x4(%esp)
084c04f5 +0x0291:  mov    %eax,(%esp)
084c04f8 +0x0294:  call   *%ecx
084c04fa +0x0296:  movl   $0x8,0x4(%esp)
084c0502 +0x029e:  mov    0xc(%ebp),%eax
084c0505 +0x02a1:  mov    %eax,(%esp)
084c0508 +0x02a4:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c050d +0x02a9:  mov    (%eax),%edx
084c050f +0x02ab:  add    $0x4,%edx
084c0512 +0x02ae:  mov    (%edx),%ecx
084c0514 +0x02b0:  mov    -0x60(%ebp),%edx
084c0517 +0x02b3:  add    $0xcdd5,%edx
084c051d +0x02b9:  mov    %edx,0x8(%esp)
084c0521 +0x02bd:  mov    0xc(%ebp),%edx
084c0524 +0x02c0:  mov    %edx,0x4(%esp)
084c0528 +0x02c4:  mov    %eax,(%esp)
084c052b +0x02c7:  call   *%ecx
084c052d +0x02c9:  movl   $0xd,0x4(%esp)
084c0535 +0x02d1:  mov    0xc(%ebp),%eax
084c0538 +0x02d4:  mov    %eax,(%esp)
084c053b +0x02d7:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0540 +0x02dc:  mov    (%eax),%edx
084c0542 +0x02de:  add    $0x4,%edx
084c0545 +0x02e1:  mov    (%edx),%ecx
084c0547 +0x02e3:  mov    -0x60(%ebp),%edx
084c054a +0x02e6:  add    $0xd718,%edx
084c0550 +0x02ec:  mov    %edx,0x8(%esp)
084c0554 +0x02f0:  mov    0xc(%ebp),%edx
084c0557 +0x02f3:  mov    %edx,0x4(%esp)
084c055b +0x02f7:  mov    %eax,(%esp)
084c055e +0x02fa:  call   *%ecx
084c0560 +0x02fc:  mov    -0x60(%ebp),%eax
084c0563 +0x02ff:  mov    0xc(%eax),%eax
084c0566 +0x0302:  mov    %eax,0x4(%esp)
084c056a +0x0306:  mov    0xc(%ebp),%eax
084c056d +0x0309:  mov    %eax,(%esp)
084c0570 +0x030c:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084c0575 +0x0311:  mov    %eax,-0x5c(%ebp)
084c0578 +0x0314:  mov    -0x60(%ebp),%eax
084c057b +0x0317:  mov    0xc(%eax),%eax
084c057e +0x031a:  test   %eax,%eax
084c0580 +0x031c:  je     084c05d1 <+0x36d>
084c0582 +0x031e:  cmpl   $0xffffffff,-0x5c(%ebp)
084c0586 +0x0322:  je     084c05d1 <+0x36d>
084c0588 +0x0324:  mov    0xc(%ebp),%eax
084c058b +0x0327:  mov    %eax,(%esp)
084c058e +0x032a:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
084c0593 +0x032f:  test   %eax,%eax
084c0595 +0x0331:  setne  %al
084c0598 +0x0334:  test   %al,%al
084c059a +0x0336:  je     084c05d1 <+0x36d>
084c059c +0x0338:  mov    -0x60(%ebp),%eax
084c059f +0x033b:  add    $0x1a8,%eax
084c05a4 +0x0340:  mov    %eax,%esi
084c05a6 +0x0342:  mov    -0x60(%ebp),%eax
084c05a9 +0x0345:  add    $0x10,%eax
084c05ac +0x0348:  mov    %eax,%ebx
084c05ae +0x034a:  mov    0xc(%ebp),%eax
084c05b1 +0x034d:  mov    %eax,(%esp)
084c05b4 +0x0350:  call   084ebeb4 <_GLOBAL__I__Z7getUserj+0x2e66>  ; global constructors keyed to getUser(unsigned int)+0x2e66
084c05b9 +0x0355:  movl   $0x198,0xc(%esp)
084c05c1 +0x035d:  mov    %esi,0x8(%esp)
084c05c5 +0x0361:  mov    %ebx,0x4(%esp)
084c05c9 +0x0365:  mov    %eax,(%esp)
084c05cc +0x0368:  call   08603378 <_ZN9SkillSlot14set_skill_slotEPcS0_i>  ; SkillSlot::set_skill_slot(char*, char*, int)
084c05d1 +0x036d:  cmpl   $0xffffffff,-0x5c(%ebp)
084c05d5 +0x0371:  jne    084c05e1 <+0x37d>
084c05d7 +0x0373:  mov    -0x60(%ebp),%eax
084c05da +0x0376:  movb   $0x0,0xd6fb(%eax)
084c05e1 +0x037d:  movl   $0xb,0x4(%esp)
084c05e9 +0x0385:  mov    0xc(%ebp),%eax
084c05ec +0x0388:  mov    %eax,(%esp)
084c05ef +0x038b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c05f4 +0x0390:  mov    (%eax),%edx
084c05f6 +0x0392:  add    $0x4,%edx
084c05f9 +0x0395:  mov    (%edx),%ecx
084c05fb +0x0397:  mov    -0x60(%ebp),%edx
084c05fe +0x039a:  add    $0xd5a7,%edx
084c0604 +0x03a0:  mov    %edx,0x8(%esp)
084c0608 +0x03a4:  mov    0xc(%ebp),%edx
084c060b +0x03a7:  mov    %edx,0x4(%esp)
084c060f +0x03ab:  mov    %eax,(%esp)
084c0612 +0x03ae:  call   *%ecx
084c0614 +0x03b0:  movl   $0xa,0x4(%esp)
084c061c +0x03b8:  mov    0xc(%ebp),%eax
084c061f +0x03bb:  mov    %eax,(%esp)
084c0622 +0x03be:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0627 +0x03c3:  mov    (%eax),%edx
084c0629 +0x03c5:  add    $0x4,%edx
084c062c +0x03c8:  mov    (%edx),%ecx
084c062e +0x03ca:  mov    -0x60(%ebp),%edx
084c0631 +0x03cd:  add    $0xd6fc,%edx
084c0637 +0x03d3:  mov    %edx,0x8(%esp)
084c063b +0x03d7:  mov    0xc(%ebp),%edx
084c063e +0x03da:  mov    %edx,0x4(%esp)
084c0642 +0x03de:  mov    %eax,(%esp)
084c0645 +0x03e1:  call   *%ecx
084c0647 +0x03e3:  movl   $0x10,0x4(%esp)
084c064f +0x03eb:  mov    0xc(%ebp),%eax
084c0652 +0x03ee:  mov    %eax,(%esp)
084c0655 +0x03f1:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c065a +0x03f6:  mov    (%eax),%edx
084c065c +0x03f8:  add    $0x4,%edx
084c065f +0x03fb:  mov    (%edx),%ecx
084c0661 +0x03fd:  mov    -0x60(%ebp),%edx
084c0664 +0x0400:  add    $0xd73c,%edx
084c066a +0x0406:  mov    %edx,0x8(%esp)
084c066e +0x040a:  mov    0xc(%ebp),%edx
084c0671 +0x040d:  mov    %edx,0x4(%esp)
084c0675 +0x0411:  mov    %eax,(%esp)
084c0678 +0x0414:  call   *%ecx
084c067a +0x0416:  movl   $0xe,0x4(%esp)
084c0682 +0x041e:  mov    0xc(%ebp),%eax
084c0685 +0x0421:  mov    %eax,(%esp)
084c0688 +0x0424:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c068d +0x0429:  mov    (%eax),%edx
084c068f +0x042b:  add    $0x4,%edx
084c0692 +0x042e:  mov    (%edx),%ecx
084c0694 +0x0430:  mov    -0x60(%ebp),%edx
084c0697 +0x0433:  add    $0x466a,%edx
084c069d +0x0439:  mov    %edx,0x8(%esp)
084c06a1 +0x043d:  mov    0xc(%ebp),%edx
084c06a4 +0x0440:  mov    %edx,0x4(%esp)
084c06a8 +0x0444:  mov    %eax,(%esp)
084c06ab +0x0447:  call   *%ecx
084c06ad +0x0449:  movl   $0xf,0x4(%esp)
084c06b5 +0x0451:  mov    0xc(%ebp),%eax
084c06b8 +0x0454:  mov    %eax,(%esp)
084c06bb +0x0457:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c06c0 +0x045c:  mov    (%eax),%edx
084c06c2 +0x045e:  add    $0x4,%edx
084c06c5 +0x0461:  mov    (%edx),%ecx
084c06c7 +0x0463:  mov    -0x60(%ebp),%edx
084c06ca +0x0466:  add    $0xb1a4,%edx
084c06d0 +0x046c:  mov    %edx,0x8(%esp)
084c06d4 +0x0470:  mov    0xc(%ebp),%edx
084c06d7 +0x0473:  mov    %edx,0x4(%esp)
084c06db +0x0477:  mov    %eax,(%esp)
084c06de +0x047a:  call   *%ecx
084c06e0 +0x047c:  movl   $0x11,0x4(%esp)
084c06e8 +0x0484:  mov    0xc(%ebp),%eax
084c06eb +0x0487:  mov    %eax,(%esp)
084c06ee +0x048a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c06f3 +0x048f:  mov    (%eax),%edx
084c06f5 +0x0491:  add    $0x4,%edx
084c06f8 +0x0494:  mov    (%edx),%ecx
084c06fa +0x0496:  mov    -0x60(%ebp),%edx
084c06fd +0x0499:  add    $0xecc8,%edx
084c0703 +0x049f:  mov    %edx,0x8(%esp)
084c0707 +0x04a3:  mov    0xc(%ebp),%edx
084c070a +0x04a6:  mov    %edx,0x4(%esp)
084c070e +0x04aa:  mov    %eax,(%esp)
084c0711 +0x04ad:  call   *%ecx
084c0713 +0x04af:  movl   $0x12,0x4(%esp)
084c071b +0x04b7:  mov    0xc(%ebp),%eax
084c071e +0x04ba:  mov    %eax,(%esp)
084c0721 +0x04bd:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0726 +0x04c2:  mov    (%eax),%edx
084c0728 +0x04c4:  add    $0x4,%edx
084c072b +0x04c7:  mov    (%edx),%ecx
084c072d +0x04c9:  mov    -0x60(%ebp),%edx
084c0730 +0x04cc:  add    $0xecd0,%edx
084c0736 +0x04d2:  mov    %edx,0x8(%esp)
084c073a +0x04d6:  mov    0xc(%ebp),%edx
084c073d +0x04d9:  mov    %edx,0x4(%esp)
084c0741 +0x04dd:  mov    %eax,(%esp)
084c0744 +0x04e0:  call   *%ecx
084c0746 +0x04e2:  movl   $0x13,0x4(%esp)
084c074e +0x04ea:  mov    0xc(%ebp),%eax
084c0751 +0x04ed:  mov    %eax,(%esp)
084c0754 +0x04f0:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0759 +0x04f5:  mov    (%eax),%edx
084c075b +0x04f7:  add    $0x4,%edx
084c075e +0x04fa:  mov    (%edx),%ecx
084c0760 +0x04fc:  mov    -0x60(%ebp),%edx
084c0763 +0x04ff:  add    $&_ZL14gUnicodeBuffer+0xa56e,%edx
084c0769 +0x0505:  mov    %edx,0x8(%esp)
084c076d +0x0509:  mov    0xc(%ebp),%edx
084c0770 +0x050c:  mov    %edx,0x4(%esp)
084c0774 +0x0510:  mov    %eax,(%esp)
084c0777 +0x0513:  call   *%ecx
084c0779 +0x0515:  mov    -0x60(%ebp),%eax
084c077c +0x0518:  mov    0xc9a8(%eax),%eax
084c0782 +0x051e:  test   %eax,%eax
084c0784 +0x0520:  jne    084c07a1 <+0x53d>
084c0786 +0x0522:  movl   $0xf,0x4(%esp)
084c078e +0x052a:  mov    0xc(%ebp),%eax
084c0791 +0x052d:  mov    %eax,(%esp)
084c0794 +0x0530:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0799 +0x0535:  mov    %eax,(%esp)
084c079c +0x0538:  call   0828c976 <_ZN12CAchievement6adjustEv>  ; CAchievement::adjust()
084c07a1 +0x053d:  mov    0xc(%ebp),%eax
084c07a4 +0x0540:  add    $0xe0,%eax
084c07a9 +0x0545:  mov    %eax,(%esp)
084c07ac +0x0548:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
084c07b1 +0x054d:  test   %eax,%eax
084c07b3 +0x054f:  sete   %al
084c07b6 +0x0552:  test   %al,%al
084c07b8 +0x0554:  je     084c086c <+0x608>
084c07be +0x055a:  mov    0xc(%ebp),%eax
084c07c1 +0x055d:  mov    %eax,(%esp)
084c07c4 +0x0560:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c07c9 +0x0565:  mov    %eax,-0x13c(%ebp)
084c07cf +0x056b:  mov    0xc(%ebp),%eax
084c07d2 +0x056e:  mov    %eax,(%esp)
084c07d5 +0x0571:  call   084ecb0a <_GLOBAL__I__Z7getUserj+0x3abc>  ; global constructors keyed to getUser(unsigned int)+0x3abc
084c07da +0x0576:  movzbl %al,%eax
084c07dd +0x0579:  mov    %eax,-0x138(%ebp)
084c07e3 +0x057f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c07e8 +0x0584:  mov    0x1b0(%eax),%edi
084c07ee +0x058a:  mov    0xc(%ebp),%eax
084c07f1 +0x058d:  add    $0xe0,%eax
084c07f6 +0x0592:  mov    %eax,(%esp)
084c07f9 +0x0595:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
084c07fe +0x059a:  movzwl %ax,%esi
084c0801 +0x059d:  mov    0xc(%ebp),%eax
084c0804 +0x05a0:  lea    0xe0(%eax),%edx
084c080a +0x05a6:  movl   $0x10,0x8(%esp)
084c0812 +0x05ae:  lea    -0xa0(%ebp),%eax
084c0818 +0x05b4:  mov    %eax,0x4(%esp)
084c081c +0x05b8:  mov    %edx,(%esp)
084c081f +0x05bb:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c0824 +0x05c0:  mov    %eax,%ebx
084c0826 +0x05c2:  mov    0xc(%ebp),%eax
084c0829 +0x05c5:  mov    %eax,(%esp)
084c082c +0x05c8:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
084c0831 +0x05cd:  mov    %eax,%edx
084c0833 +0x05cf:  mov    0xc(%ebp),%eax
084c0836 +0x05d2:  add    $0x79700,%eax
084c083b +0x05d7:  mov    -0x13c(%ebp),%ecx
084c0841 +0x05dd:  mov    %ecx,0x18(%esp)
084c0845 +0x05e1:  mov    -0x138(%ebp),%ecx
084c084b +0x05e7:  mov    %ecx,0x14(%esp)
084c084f +0x05eb:  mov    %edi,0x10(%esp)
084c0853 +0x05ef:  mov    %esi,0xc(%esp)
084c0857 +0x05f3:  mov    %ebx,0x8(%esp)
084c085b +0x05f7:  mov    %edx,0x4(%esp)
084c085f +0x05fb:  mov    %eax,(%esp)
084c0862 +0x05fe:  call   08683d86 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi>  ; cUserHistoryLog::Login(char const*, char const*, int, int, unsigned char, int)
084c0867 +0x0603:  jmp    084c093d <+0x6d9>
084c086c +0x0608:  movl   $0x0,-0xb0(%ebp)
084c0876 +0x0612:  movl   $0x0,-0xac(%ebp)
084c0880 +0x061c:  movl   $0x0,-0xa8(%ebp)
084c088a +0x0626:  movl   $0x0,-0xa4(%ebp)
084c0894 +0x0630:  mov    0xc(%ebp),%eax
084c0897 +0x0633:  mov    %eax,(%esp)
084c089a +0x0636:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c089f +0x063b:  mov    %eax,-0x134(%ebp)
084c08a5 +0x0641:  mov    0xc(%ebp),%eax
084c08a8 +0x0644:  mov    %eax,(%esp)
084c08ab +0x0647:  call   084ecb0a <_GLOBAL__I__Z7getUserj+0x3abc>  ; global constructors keyed to getUser(unsigned int)+0x3abc
084c08b0 +0x064c:  movzbl %al,%eax
084c08b3 +0x064f:  mov    %eax,-0x130(%ebp)
084c08b9 +0x0655:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c08be +0x065a:  mov    0x1b0(%eax),%edi
084c08c4 +0x0660:  mov    0xc(%ebp),%eax
084c08c7 +0x0663:  add    $0xe0,%eax
084c08cc +0x0668:  mov    %eax,(%esp)
084c08cf +0x066b:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
084c08d4 +0x0670:  movzwl %ax,%esi
084c08d7 +0x0673:  mov    0xc(%ebp),%eax
084c08da +0x0676:  lea    0xe0(%eax),%edx
084c08e0 +0x067c:  movl   $0x10,0x8(%esp)
084c08e8 +0x0684:  lea    -0xb0(%ebp),%eax
084c08ee +0x068a:  mov    %eax,0x4(%esp)
084c08f2 +0x068e:  mov    %edx,(%esp)
084c08f5 +0x0691:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c08fa +0x0696:  mov    %eax,%ebx
084c08fc +0x0698:  mov    0xc(%ebp),%eax
084c08ff +0x069b:  mov    %eax,(%esp)
084c0902 +0x069e:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
084c0907 +0x06a3:  mov    %eax,%edx
084c0909 +0x06a5:  mov    0xc(%ebp),%eax
084c090c +0x06a8:  add    $0x79700,%eax
084c0911 +0x06ad:  mov    -0x134(%ebp),%ecx
084c0917 +0x06b3:  mov    %ecx,0x18(%esp)
084c091b +0x06b7:  mov    -0x130(%ebp),%ecx
084c0921 +0x06bd:  mov    %ecx,0x14(%esp)
084c0925 +0x06c1:  mov    %edi,0x10(%esp)
084c0929 +0x06c5:  mov    %esi,0xc(%esp)
084c092d +0x06c9:  mov    %ebx,0x8(%esp)
084c0931 +0x06cd:  mov    %edx,0x4(%esp)
084c0935 +0x06d1:  mov    %eax,(%esp)
084c0938 +0x06d4:  call   08683d86 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi>  ; cUserHistoryLog::Login(char const*, char const*, int, int, unsigned char, int)
084c093d +0x06d9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c0944 +0x06e0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c0949 +0x06e5:  mov    0xc(%ebp),%edx
084c094c +0x06e8:  mov    %eax,0x4(%esp)
084c0950 +0x06ec:  mov    %edx,(%esp)
084c0953 +0x06ef:  call   084ec118 <_GLOBAL__I__Z7getUserj+0x30ca>  ; global constructors keyed to getUser(unsigned int)+0x30ca
084c0958 +0x06f4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c095f +0x06fb:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c0964 +0x0700:  mov    0xc(%ebp),%edx
084c0967 +0x0703:  mov    %eax,0x4(%esp)
084c096b +0x0707:  mov    %edx,(%esp)
084c096e +0x070a:  call   084ec12c <_GLOBAL__I__Z7getUserj+0x30de>  ; global constructors keyed to getUser(unsigned int)+0x30de
084c0973 +0x070f:  lea    -0x90(%ebp),%eax
084c0979 +0x0715:  mov    %eax,0xc(%esp)
084c097d +0x0719:  mov    -0x60(%ebp),%eax
084c0980 +0x071c:  mov    %eax,0x8(%esp)
084c0984 +0x0720:  mov    0xc(%ebp),%eax
084c0987 +0x0723:  mov    %eax,0x4(%esp)
084c098b +0x0727:  lea    -0x128(%ebp),%eax
084c0991 +0x072d:  mov    %eax,(%esp)
084c0994 +0x0730:  call   084eef48 <_GLOBAL__I__Z7getUserj+0x5efa>  ; global constructors keyed to getUser(unsigned int)+0x5efa
084c0999 +0x0735:  movb   $0x0,-0x57(%ebp)
084c099d +0x0739:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c09a2 +0x073e:  mov    %eax,(%esp)
084c09a5 +0x0741:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
084c09aa +0x0746:  test   %al,%al
084c09ac +0x0748:  je     084c0a2c <+0x7c8>
084c09ae +0x074a:  mov    -0x60(%ebp),%eax
084c09b1 +0x074d:  movzbl 0xcdd1(%eax),%ebx
084c09b8 +0x0754:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c09bd +0x0759:  movzbl 0xa850(%eax),%eax
084c09c4 +0x0760:  cmp    %al,%bl
084c09c6 +0x0762:  setne  %al
084c09c9 +0x0765:  test   %al,%al
084c09cb +0x0767:  je     084c0a2c <+0x7c8>
084c09cd +0x0769:  mov    0xc(%ebp),%eax
084c09d0 +0x076c:  mov    %eax,(%esp)
084c09d3 +0x076f:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
084c09d8 +0x0774:  mov    %eax,%ebx
084c09da +0x0776:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c09df +0x077b:  movzbl 0xa850(%eax),%eax
084c09e6 +0x0782:  movzbl %al,%esi
084c09e9 +0x0785:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c09ee +0x078a:  add    $0xa800,%eax
084c09f3 +0x078f:  mov    %esi,0x4(%esp)
084c09f7 +0x0793:  mov    %eax,(%esp)
084c09fa +0x0796:  call   084e913a <_GLOBAL__I__Z7getUserj+0xec>  ; global constructors keyed to getUser(unsigned int)+0xec
084c09ff +0x079b:  cmp    %eax,%ebx
084c0a01 +0x079d:  setl   %al
084c0a04 +0x07a0:  test   %al,%al
084c0a06 +0x07a2:  je     084c0a2c <+0x7c8>
084c0a08 +0x07a4:  mov    -0x60(%ebp),%eax
084c0a0b +0x07a7:  add    $0xc9c0,%eax
084c0a10 +0x07ac:  movl   $0x414,0x8(%esp)
084c0a18 +0x07b4:  movl   $0x0,0x4(%esp)
084c0a20 +0x07bc:  mov    %eax,(%esp)
084c0a23 +0x07bf:  call   0807dcc0 <_init+0x5b8>
084c0a28 +0x07c4:  movb   $0x1,-0x57(%ebp)
084c0a2c +0x07c8:  mov    -0x60(%ebp),%eax
084c0a2f +0x07cb:  lea    &_ZL14gUnicodeBuffer+0xa57e(%eax),%edx
084c0a35 +0x07d1:  mov    -0x60(%ebp),%eax
084c0a38 +0x07d4:  add    $0xc9c0,%eax
084c0a3d +0x07d9:  mov    %edx,0x8(%esp)
084c0a41 +0x07dd:  mov    %eax,0x4(%esp)
084c0a45 +0x07e1:  mov    0xc(%ebp),%eax
084c0a48 +0x07e4:  mov    %eax,(%esp)
084c0a4b +0x07e7:  call   0864db20 <_ZN5CUser8SetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL>  ; CUser::SetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*)
084c0a50 +0x07ec:  xor    $0x1,%eax
084c0a53 +0x07ef:  test   %al,%al
084c0a55 +0x07f1:  je     084c0a6c <+0x808>
084c0a57 +0x07f3:  mov    0xc(%ebp),%eax
084c0a5a +0x07f6:  mov    %eax,(%esp)
084c0a5d +0x07f9:  call   084ebf24 <_GLOBAL__I__Z7getUserj+0x2ed6>  ; global constructors keyed to getUser(unsigned int)+0x2ed6
084c0a62 +0x07fe:  mov    $0xb91,%ebx
084c0a67 +0x0803:  jmp    084c2625 <+0x23c1>
084c0a6c +0x0808:  mov    0xc(%ebp),%eax
084c0a6f +0x080b:  mov    %eax,(%esp)
084c0a72 +0x080e:  call   084ebf24 <_GLOBAL__I__Z7getUserj+0x2ed6>  ; global constructors keyed to getUser(unsigned int)+0x2ed6
084c0a77 +0x0813:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c0a7c +0x0818:  mov    %eax,(%esp)
084c0a7f +0x081b:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
084c0a84 +0x0820:  test   %al,%al
084c0a86 +0x0822:  je     084c0be4 <+0x980>
084c0a8c +0x0828:  mov    -0x60(%ebp),%eax
084c0a8f +0x082b:  movzbl 0xcdd4(%eax),%eax
084c0a96 +0x0832:  test   %al,%al
084c0a98 +0x0834:  jne    084c0aab <+0x847>
084c0a9a +0x0836:  mov    -0x60(%ebp),%eax
084c0a9d +0x0839:  mov    0xd59f(%eax),%eax
084c0aa3 +0x083f:  test   %eax,%eax
084c0aa5 +0x0841:  jne    084c0ba6 <+0x942>
084c0aab +0x0847:  movl   $0x3,0xc(%esp)
084c0ab3 +0x084f:  movl   $0x0,0x8(%esp)
084c0abb +0x0857:  movl   $0x0,0x4(%esp)
084c0ac3 +0x085f:  mov    0xc(%ebp),%eax
084c0ac6 +0x0862:  mov    %eax,(%esp)
084c0ac9 +0x0865:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
084c0ace +0x086a:  movl   $0x3,0xc(%esp)
084c0ad6 +0x0872:  movl   $0x1,0x8(%esp)
084c0ade +0x087a:  movl   $0x0,0x4(%esp)
084c0ae6 +0x0882:  mov    0xc(%ebp),%eax
084c0ae9 +0x0885:  mov    %eax,(%esp)
084c0aec +0x0888:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
084c0af1 +0x088d:  mov    0xc(%ebp),%eax
084c0af4 +0x0890:  mov    %eax,(%esp)
084c0af7 +0x0893:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
084c0afc +0x0898:  mov    %eax,%esi
084c0afe +0x089a:  mov    0xc(%ebp),%eax
084c0b01 +0x089d:  mov    %eax,(%esp)
084c0b04 +0x08a0:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
084c0b09 +0x08a5:  movsbl %al,%eax
084c0b0c +0x08a8:  mov    %eax,-0x12c(%ebp)
084c0b12 +0x08ae:  mov    0xc(%ebp),%eax
084c0b15 +0x08b1:  mov    %eax,(%esp)
084c0b18 +0x08b4:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
084c0b1d +0x08b9:  movsbl %al,%edi
084c0b20 +0x08bc:  mov    0xc(%ebp),%eax
084c0b23 +0x08bf:  mov    %eax,(%esp)
084c0b26 +0x08c2:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084c0b2b +0x08c7:  mov    %eax,%ebx
084c0b2d +0x08c9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c0b32 +0x08ce:  add    $0xa800,%eax
084c0b37 +0x08d3:  movl   $0x1,0x14(%esp)
084c0b3f +0x08db:  mov    %esi,0x10(%esp)
084c0b43 +0x08df:  mov    -0x12c(%ebp),%edx
084c0b49 +0x08e5:  mov    %edx,0xc(%esp)
084c0b4d +0x08e9:  mov    %edi,0x8(%esp)
084c0b51 +0x08ed:  mov    %ebx,0x4(%esp)
084c0b55 +0x08f1:  mov    %eax,(%esp)
084c0b58 +0x08f4:  call   08a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>  ; PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const
084c0b5d +0x08f9:  mov    %eax,-0x50(%ebp)
084c0b60 +0x08fc:  mov    0xc(%ebp),%eax
084c0b63 +0x08ff:  mov    %eax,(%esp)
084c0b66 +0x0902:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
084c0b6b +0x0907:  movl   $0x0,0x8(%esp)
084c0b73 +0x090f:  mov    -0x50(%ebp),%edx
084c0b76 +0x0912:  mov    %edx,0x4(%esp)
084c0b7a +0x0916:  mov    %eax,(%esp)
084c0b7d +0x0919:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
084c0b82 +0x091e:  mov    0xc(%ebp),%eax
084c0b85 +0x0921:  mov    %eax,(%esp)
084c0b88 +0x0924:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
084c0b8d +0x0929:  movl   $0x1,0x8(%esp)
084c0b95 +0x0931:  mov    -0x50(%ebp),%edx
084c0b98 +0x0934:  mov    %edx,0x4(%esp)
084c0b9c +0x0938:  mov    %eax,(%esp)
084c0b9f +0x093b:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
084c0ba4 +0x0940:  jmp    084c0be4 <+0x980>
084c0ba6 +0x0942:  mov    -0x60(%ebp),%eax
084c0ba9 +0x0945:  add    $0xc9cc,%eax
084c0bae +0x094a:  movl   $0x0,0x8(%esp)
084c0bb6 +0x0952:  mov    %eax,0x4(%esp)
084c0bba +0x0956:  mov    0xc(%ebp),%eax
084c0bbd +0x0959:  mov    %eax,(%esp)
084c0bc0 +0x095c:  call   084bff8e <_Z15SetPvPSkillTreeP5CUserPK15_Mastered_skill20ENUM_SKILL_TREE_KIND>  ; SetPvPSkillTree(CUser*, _Mastered_skill const*, ENUM_SKILL_TREE_KIND)
084c0bc5 +0x0961:  mov    -0x60(%ebp),%eax
084c0bc8 +0x0964:  add    $0xcb68,%eax
084c0bcd +0x0969:  movl   $0x1,0x8(%esp)
084c0bd5 +0x0971:  mov    %eax,0x4(%esp)
084c0bd9 +0x0975:  mov    0xc(%ebp),%eax
084c0bdc +0x0978:  mov    %eax,(%esp)
084c0bdf +0x097b:  call   084bff8e <_Z15SetPvPSkillTreeP5CUserPK15_Mastered_skill20ENUM_SKILL_TREE_KIND>  ; SetPvPSkillTree(CUser*, _Mastered_skill const*, ENUM_SKILL_TREE_KIND)
084c0be4 +0x0980:  mov    0x8(%ebp),%eax
084c0be7 +0x0983:  mov    %eax,0x4(%esp)
084c0beb +0x0987:  lea    -0x128(%ebp),%eax
084c0bf1 +0x098d:  mov    %eax,(%esp)
084c0bf4 +0x0990:  call   084ef4a6 <_GLOBAL__I__Z7getUserj+0x6458>  ; global constructors keyed to getUser(unsigned int)+0x6458
084c0bf9 +0x0995:  test   %eax,%eax
084c0bfb +0x0997:  setne  %al
084c0bfe +0x099a:  test   %al,%al
084c0c00 +0x099c:  je     084c0c0c <+0x9a8>
084c0c02 +0x099e:  mov    $0xbcc,%ebx
084c0c07 +0x09a3:  jmp    084c2625 <+0x23c1>
084c0c0c +0x09a8:  movl   $0x2,0x4(%esp)
084c0c14 +0x09b0:  mov    0xc(%ebp),%eax
084c0c17 +0x09b3:  mov    %eax,(%esp)
084c0c1a +0x09b6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0c1f +0x09bb:  mov    %eax,(%esp)
084c0c22 +0x09be:  call   0849aaa4 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x1c>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x1c
084c0c27 +0x09c3:  mov    %eax,%ebx
084c0c29 +0x09c5:  movl   $0xe,0x4(%esp)
084c0c31 +0x09cd:  mov    0xc(%ebp),%eax
084c0c34 +0x09d0:  mov    %eax,(%esp)
084c0c37 +0x09d3:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0c3c +0x09d8:  mov    %ebx,0x4(%esp)
084c0c40 +0x09dc:  mov    %eax,(%esp)
084c0c43 +0x09df:  call   086411ba <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE>  ; CTitleBook::getItemLockList(std::vector<item_lock::stItemLockRef, std::allocator<item_lock::stItemLockRef> >&)
084c0c48 +0x09e4:  movl   $0x2,0x4(%esp)
084c0c50 +0x09ec:  mov    0xc(%ebp),%eax
084c0c53 +0x09ef:  mov    %eax,(%esp)
084c0c56 +0x09f2:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0c5b +0x09f7:  mov    0xc(%ebp),%edx
084c0c5e +0x09fa:  mov    %edx,0x4(%esp)
084c0c62 +0x09fe:  mov    %eax,(%esp)
084c0c65 +0x0a01:  call   08542e98 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser>  ; item_lock::CItemLock::VerifyItemLock(CUser*)
084c0c6a +0x0a06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c0c6f +0x0a0b:  mov    0xc(%ebp),%edx
084c0c72 +0x0a0e:  mov    %edx,0x4(%esp)
084c0c76 +0x0a12:  mov    %eax,(%esp)
084c0c79 +0x0a15:  call   08296d30 <_ZN12CGameManager17insert_game_worldEP5CUser>  ; CGameManager::insert_game_world(CUser*)
084c0c7e +0x0a1a:  mov    %al,-0x56(%ebp)
084c0c81 +0x0a1d:  movzbl -0x56(%ebp),%eax
084c0c85 +0x0a21:  xor    $0x1,%eax
084c0c88 +0x0a24:  test   %al,%al
084c0c8a +0x0a26:  je     084c0c96 <+0xa32>
084c0c8c +0x0a28:  mov    $0xc14,%ebx
084c0c91 +0x0a2d:  jmp    084c2625 <+0x23c1>
084c0c96 +0x0a32:  mov    0xc(%ebp),%eax
084c0c99 +0x0a35:  mov    %eax,(%esp)
084c0c9c +0x0a38:  call   0868ac24 <_ZN5CUser12sendCharacQpEv>  ; CUser::sendCharacQp()
084c0ca1 +0x0a3d:  mov    0xc(%ebp),%eax
084c0ca4 +0x0a40:  mov    %eax,(%esp)
084c0ca7 +0x0a43:  call   0868af2c <_ZN5CUser20sendCharacQuestPieceEv>  ; CUser::sendCharacQuestPiece()
084c0cac +0x0a48:  movl   $0x11,0x4(%esp)
084c0cb4 +0x0a50:  mov    0xc(%ebp),%eax
084c0cb7 +0x0a53:  mov    %eax,(%esp)
084c0cba +0x0a56:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c0cbf +0x0a5b:  movl   $0x0,0x8(%esp)
084c0cc7 +0x0a63:  mov    0xc(%ebp),%edx
084c0cca +0x0a66:  mov    %edx,0x4(%esp)
084c0cce +0x0a6a:  mov    %eax,(%esp)
084c0cd1 +0x0a6d:  call   080dd246 <_ZN12CBoosterGage9send_dataEP5CUseri>  ; CBoosterGage::send_data(CUser*, int)
084c0cd6 +0x0a72:  mov    0xc(%ebp),%eax
084c0cd9 +0x0a75:  mov    %eax,(%esp)
084c0cdc +0x0a78:  call   0868b00a <_ZN5CUser23SendItemMakingSkillInfoEv>  ; CUser::SendItemMakingSkillInfo()
084c0ce1 +0x0a7d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c0ce6 +0x0a82:  mov    %eax,(%esp)
084c0ce9 +0x0a85:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
084c0cee +0x0a8a:  test   %al,%al
084c0cf0 +0x0a8c:  je     084c0d6a <+0xb06>
084c0cf2 +0x0a8e:  mov    -0x60(%ebp),%eax
084c0cf5 +0x0a91:  movzbl 0xcdd4(%eax),%eax
084c0cfc +0x0a98:  test   %al,%al
084c0cfe +0x0a9a:  jne    084c0d13 <+0xaaf>
084c0d00 +0x0a9c:  mov    -0x60(%ebp),%eax
084c0d03 +0x0a9f:  mov    0xd59f(%eax),%eax
084c0d09 +0x0aa5:  test   %eax,%eax
084c0d0b +0x0aa7:  je     084c0d13 <+0xaaf>
084c0d0d +0x0aa9:  cmpb   $0x0,-0x57(%ebp)
084c0d11 +0x0aad:  je     084c0d6a <+0xb06>
084c0d13 +0x0aaf:  lea    -0x90(%ebp),%eax
084c0d19 +0x0ab5:  mov    %eax,(%esp)
084c0d1c +0x0ab8:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084c0d21 +0x0abd:  movl   $0x154,0x8(%esp)
084c0d29 +0x0ac5:  movl   $0x0,0x4(%esp)
084c0d31 +0x0acd:  lea    -0x90(%ebp),%eax
084c0d37 +0x0ad3:  mov    %eax,(%esp)
084c0d3a +0x0ad6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c0d3f +0x0adb:  movl   $0x1,0x4(%esp)
084c0d47 +0x0ae3:  lea    -0x90(%ebp),%eax
084c0d4d +0x0ae9:  mov    %eax,(%esp)
084c0d50 +0x0aec:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c0d55 +0x0af1:  lea    -0x90(%ebp),%eax
084c0d5b +0x0af7:  mov    %eax,0x4(%esp)
084c0d5f +0x0afb:  mov    0xc(%ebp),%eax
084c0d62 +0x0afe:  mov    %eax,(%esp)
084c0d65 +0x0b01:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c0d6a +0x0b06:  mov    0xc(%ebp),%eax
084c0d6d +0x0b09:  mov    %eax,(%esp)
084c0d70 +0x0b0c:  call   0868a99a <_ZN5CUser18CheckMaxLuckyLevelEv>  ; CUser::CheckMaxLuckyLevel()
084c0d75 +0x0b11:  mov    -0x60(%ebp),%eax
084c0d78 +0x0b14:  movzwl 0x40c8(%eax),%eax
084c0d7f +0x0b1b:  movswl %ax,%edx
084c0d82 +0x0b1e:  mov    0xc(%ebp),%eax
084c0d85 +0x0b21:  mov    %edx,0x4(%esp)
084c0d89 +0x0b25:  mov    %eax,(%esp)
084c0d8c +0x0b28:  call   084ec256 <_GLOBAL__I__Z7getUserj+0x3208>  ; global constructors keyed to getUser(unsigned int)+0x3208
084c0d91 +0x0b2d:  mov    -0x60(%ebp),%eax
084c0d94 +0x0b30:  movzwl 0x40ca(%eax),%eax
084c0d9b +0x0b37:  movswl %ax,%edx
084c0d9e +0x0b3a:  mov    0xc(%ebp),%eax
084c0da1 +0x0b3d:  mov    %edx,0x4(%esp)
084c0da5 +0x0b41:  mov    %eax,(%esp)
084c0da8 +0x0b44:  call   084ec29c <_GLOBAL__I__Z7getUserj+0x324e>  ; global constructors keyed to getUser(unsigned int)+0x324e
084c0dad +0x0b49:  mov    -0x60(%ebp),%eax
084c0db0 +0x0b4c:  movzbl 0xc9ad(%eax),%eax
084c0db7 +0x0b53:  movzbl %al,%ecx
084c0dba +0x0b56:  mov    -0x60(%ebp),%eax
084c0dbd +0x0b59:  movzbl 0xc9ac(%eax),%eax
084c0dc4 +0x0b60:  movzbl %al,%edx
084c0dc7 +0x0b63:  mov    0xc(%ebp),%eax
084c0dca +0x0b66:  mov    %ecx,0x8(%esp)
084c0dce +0x0b6a:  mov    %edx,0x4(%esp)
084c0dd2 +0x0b6e:  mov    %eax,(%esp)
084c0dd5 +0x0b71:  call   084ec1a0 <_GLOBAL__I__Z7getUserj+0x3152>  ; global constructors keyed to getUser(unsigned int)+0x3152
084c0dda +0x0b76:  mov    -0x60(%ebp),%eax
084c0ddd +0x0b79:  movzwl 0x40cc(%eax),%eax
084c0de4 +0x0b80:  test   %ax,%ax
084c0de7 +0x0b83:  jns    084c0df5 <+0xb91>
084c0de9 +0x0b85:  mov    -0x60(%ebp),%eax
084c0dec +0x0b88:  movw   $0x0,0x40cc(%eax)
084c0df5 +0x0b91:  mov    -0x60(%ebp),%eax
084c0df8 +0x0b94:  movzwl 0x40cc(%eax),%eax
084c0dff +0x0b9b:  movswl %ax,%edx
084c0e02 +0x0b9e:  mov    0xc(%ebp),%eax
084c0e05 +0x0ba1:  mov    %edx,0x4(%esp)
084c0e09 +0x0ba5:  mov    %eax,(%esp)
084c0e0c +0x0ba8:  call   084ec2e2 <_GLOBAL__I__Z7getUserj+0x3294>  ; global constructors keyed to getUser(unsigned int)+0x3294
084c0e11 +0x0bad:  mov    -0x60(%ebp),%eax
084c0e14 +0x0bb0:  mov    0xc9b8(%eax),%eax
084c0e1a +0x0bb6:  mov    %eax,0x4(%esp)
084c0e1e +0x0bba:  mov    0xc(%ebp),%eax
084c0e21 +0x0bbd:  mov    %eax,(%esp)
084c0e24 +0x0bc0:  call   084ed04e <_GLOBAL__I__Z7getUserj+0x4000>  ; global constructors keyed to getUser(unsigned int)+0x4000
084c0e29 +0x0bc5:  mov    0xc(%ebp),%eax
084c0e2c +0x0bc8:  mov    %eax,(%esp)
084c0e2f +0x0bcb:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c0e34 +0x0bd0:  test   %eax,%eax
084c0e36 +0x0bd2:  setne  %al
084c0e39 +0x0bd5:  test   %al,%al
084c0e3b +0x0bd7:  je     084c120d <+0xfa9>
084c0e41 +0x0bdd:  mov    0xc(%ebp),%eax
084c0e44 +0x0be0:  movl   $0x0,0x4(%esp)
084c0e4c +0x0be8:  mov    %eax,(%esp)
084c0e4f +0x0beb:  call   084ebefa <_GLOBAL__I__Z7getUserj+0x2eac>  ; global constructors keyed to getUser(unsigned int)+0x2eac
084c0e54 +0x0bf0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c0e59 +0x0bf5:  mov    0x37c(%eax),%eax
084c0e5f +0x0bfb:  mov    %eax,-0x4c(%ebp)
084c0e62 +0x0bfe:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084c0e67 +0x0c03:  movl   $0xd,0x4(%esp)
084c0e6f +0x0c0b:  mov    %eax,(%esp)
084c0e72 +0x0c0e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084c0e77 +0x0c13:  mov    %eax,-0x48(%ebp)
084c0e7a +0x0c16:  mov    -0x48(%ebp),%eax
084c0e7d +0x0c19:  mov    (%eax),%eax
084c0e7f +0x0c1b:  add    $0x34,%eax
084c0e82 +0x0c1e:  mov    (%eax),%edx
084c0e84 +0x0c20:  mov    -0x48(%ebp),%eax
084c0e87 +0x0c23:  movl   $0x0,0x4(%esp)
084c0e8f +0x0c2b:  mov    %eax,(%esp)
084c0e92 +0x0c2e:  call   *%edx
084c0e94 +0x0c30:  test   %al,%al
084c0e96 +0x0c32:  je     084c0ea6 <+0xc42>
084c0e98 +0x0c34:  mov    -0x48(%ebp),%eax
084c0e9b +0x0c37:  mov    %eax,(%esp)
084c0e9e +0x0c3a:  call   0832c0b8 <_ZNK16CCoinRefillEvent16getLastEventTimeEv>  ; CCoinRefillEvent::getLastEventTime() const
084c0ea3 +0x0c3f:  mov    %eax,-0x4c(%ebp)
084c0ea6 +0x0c42:  mov    -0x60(%ebp),%eax
084c0ea9 +0x0c45:  movzbl &_ZL14gUnicodeBuffer+0xa56c(%eax),%eax
084c0eb0 +0x0c4c:  movzbl %al,%edx
084c0eb3 +0x0c4f:  mov    0xc(%ebp),%eax
084c0eb6 +0x0c52:  mov    %edx,0x4(%esp)
084c0eba +0x0c56:  mov    %eax,(%esp)
084c0ebd +0x0c59:  call   08690ef4 <_ZN15CUserCharacInfo23setBlueMarbleEnterCountEh>  ; CUserCharacInfo::setBlueMarbleEnterCount(unsigned char)
084c0ec2 +0x0c5e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c0ec9 +0x0c65:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c0ece +0x0c6a:  mov    %eax,%ebx
084c0ed0 +0x0c6c:  mov    0xc(%ebp),%eax
084c0ed3 +0x0c6f:  mov    %eax,(%esp)
084c0ed6 +0x0c72:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c0edb +0x0c77:  mov    0x7b(%eax),%eax
084c0ede +0x0c7a:  mov    %ebx,0x8(%esp)
084c0ee2 +0x0c7e:  mov    %eax,0x4(%esp)
084c0ee6 +0x0c82:  mov    -0x4c(%ebp),%eax
084c0ee9 +0x0c85:  mov    %eax,(%esp)
084c0eec +0x0c88:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c0ef1 +0x0c8d:  test   %al,%al
084c0ef3 +0x0c8f:  je     084c1188 <+0xf24>
084c0ef9 +0x0c95:  mov    0xc(%ebp),%eax
084c0efc +0x0c98:  movl   $0x1,0x4(%esp)
084c0f04 +0x0ca0:  mov    %eax,(%esp)
084c0f07 +0x0ca3:  call   084ebefa <_GLOBAL__I__Z7getUserj+0x2eac>  ; global constructors keyed to getUser(unsigned int)+0x2eac
084c0f0c +0x0ca8:  movl   $0x1,0x4(%esp)
084c0f14 +0x0cb0:  mov    0xc(%ebp),%eax
084c0f17 +0x0cb3:  mov    %eax,(%esp)
084c0f1a +0x0cb6:  call   08657f10 <_ZN5CUser11RecoverCoinEj>  ; CUser::RecoverCoin(unsigned int)
084c0f1f +0x0cbb:  mov    0xc(%ebp),%eax
084c0f22 +0x0cbe:  mov    %eax,(%esp)
084c0f25 +0x0cc1:  call   08656caa <_ZN5CUser12AddDailyItemEv>  ; CUser::AddDailyItem()
084c0f2a +0x0cc6:  mov    0xc(%ebp),%eax
084c0f2d +0x0cc9:  mov    %eax,(%esp)
084c0f30 +0x0ccc:  call   084ec23a <_GLOBAL__I__Z7getUserj+0x31ec>  ; global constructors keyed to getUser(unsigned int)+0x31ec
084c0f35 +0x0cd1:  mov    0xc(%ebp),%eax
084c0f38 +0x0cd4:  mov    %eax,(%esp)
084c0f3b +0x0cd7:  call   084ec280 <_GLOBAL__I__Z7getUserj+0x3232>  ; global constructors keyed to getUser(unsigned int)+0x3232
084c0f40 +0x0cdc:  mov    0xc(%ebp),%eax
084c0f43 +0x0cdf:  mov    %eax,(%esp)
084c0f46 +0x0ce2:  call   084ec2c6 <_GLOBAL__I__Z7getUserj+0x3278>  ; global constructors keyed to getUser(unsigned int)+0x3278
084c0f4b +0x0ce7:  mov    0xc(%ebp),%eax
084c0f4e +0x0cea:  mov    %eax,(%esp)
084c0f51 +0x0ced:  call   084ec61e <_GLOBAL__I__Z7getUserj+0x35d0>  ; global constructors keyed to getUser(unsigned int)+0x35d0
084c0f56 +0x0cf2:  mov    0xc(%ebp),%eax
084c0f59 +0x0cf5:  mov    %eax,(%esp)
084c0f5c +0x0cf8:  call   08162338 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5a6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5a6
084c0f61 +0x0cfd:  test   %al,%al
084c0f63 +0x0cff:  je     084c0f7b <+0xd17>
084c0f65 +0x0d01:  mov    0xc(%ebp),%eax
084c0f68 +0x0d04:  mov    %eax,(%esp)
084c0f6b +0x0d07:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
084c0f70 +0x0d0c:  test   %al,%al
084c0f72 +0x0d0e:  jne    084c0f7b <+0xd17>
084c0f74 +0x0d10:  mov    $0x1,%eax
084c0f79 +0x0d15:  jmp    084c0f80 <+0xd1c>
084c0f7b +0x0d17:  mov    $0x0,%eax
084c0f80 +0x0d1c:  test   %al,%al
084c0f82 +0x0d1e:  je     084c0fbe <+0xd5a>
084c0f84 +0x0d20:  mov    0xc(%ebp),%eax
084c0f87 +0x0d23:  mov    %eax,(%esp)
084c0f8a +0x0d26:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084c0f8f +0x0d2b:  movl   $0x0,0x14(%esp)
084c0f97 +0x0d33:  movl   $0x0,0x10(%esp)
084c0f9f +0x0d3b:  movl   $0x1,0xc(%esp)
084c0fa7 +0x0d43:  movl   $0x1a1,0x8(%esp)
084c0faf +0x0d4b:  mov    0xc(%ebp),%edx
084c0fb2 +0x0d4e:  mov    %edx,0x4(%esp)
084c0fb6 +0x0d52:  mov    %eax,(%esp)
084c0fb9 +0x0d55:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084c0fbe +0x0d5a:  mov    0xc(%ebp),%eax
084c0fc1 +0x0d5d:  mov    %eax,(%esp)
084c0fc4 +0x0d60:  call   084ed086 <_GLOBAL__I__Z7getUserj+0x4038>  ; global constructors keyed to getUser(unsigned int)+0x4038
084c0fc9 +0x0d65:  mov    0xc(%ebp),%eax
084c0fcc +0x0d68:  mov    %eax,(%esp)
084c0fcf +0x0d6b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c0fd4 +0x0d70:  mov    %eax,-0x44(%ebp)
084c0fd7 +0x0d73:  mov    0xc(%ebp),%eax
084c0fda +0x0d76:  mov    %eax,(%esp)
084c0fdd +0x0d79:  call   08162338 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5a6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5a6
084c0fe2 +0x0d7e:  test   %al,%al
084c0fe4 +0x0d80:  je     084c0ffc <+0xd98>
084c0fe6 +0x0d82:  mov    0xc(%ebp),%eax
084c0fe9 +0x0d85:  mov    %eax,(%esp)
084c0fec +0x0d88:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
084c0ff1 +0x0d8d:  test   %al,%al
084c0ff3 +0x0d8f:  jne    084c0ffc <+0xd98>
084c0ff5 +0x0d91:  mov    $0x1,%eax
084c0ffa +0x0d96:  jmp    084c1001 <+0xd9d>
084c0ffc +0x0d98:  mov    $0x0,%eax
084c1001 +0x0d9d:  test   %al,%al
084c1003 +0x0d9f:  je     084c1094 <+0xe30>
084c1009 +0x0da5:  movl   $0x0,-0x40(%ebp)
084c1010 +0x0dac:  movl   $0x0,-0x3c(%ebp)
084c1017 +0x0db3:  cmpl   $0x3c,-0x44(%ebp)
084c101b +0x0db7:  jle    084c102d <+0xdc9>
084c101d +0x0db9:  movl   $0x3,-0x40(%ebp)
084c1024 +0x0dc0:  movl   $0xc,-0x3c(%ebp)
084c102b +0x0dc7:  jmp    084c1041 <+0xddd>
084c102d +0x0dc9:  cmpl   $0x32,-0x44(%ebp)
084c1031 +0x0dcd:  jle    084c1041 <+0xddd>
084c1033 +0x0dcf:  movl   $0x1,-0x40(%ebp)
084c103a +0x0dd6:  movl   $0xb,-0x3c(%ebp)
084c1041 +0x0ddd:  movl   $0x0,-0x38(%ebp)
084c1048 +0x0de4:  jmp    084c1087 <+0xe23>
084c104a +0x0de6:  mov    0xc(%ebp),%eax
084c104d +0x0de9:  mov    %eax,(%esp)
084c1050 +0x0dec:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084c1055 +0x0df1:  movl   $0x0,0x14(%esp)
084c105d +0x0df9:  mov    -0x3c(%ebp),%edx
084c1060 +0x0dfc:  mov    %edx,0x10(%esp)
084c1064 +0x0e00:  movl   $0x1,0xc(%esp)
084c106c +0x0e08:  movl   $0x1a3,0x8(%esp)
084c1074 +0x0e10:  mov    0xc(%ebp),%edx
084c1077 +0x0e13:  mov    %edx,0x4(%esp)
084c107b +0x0e17:  mov    %eax,(%esp)
084c107e +0x0e1a:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084c1083 +0x0e1f:  addl   $0x1,-0x38(%ebp)
084c1087 +0x0e23:  mov    -0x38(%ebp),%eax
084c108a +0x0e26:  cmp    -0x40(%ebp),%eax
084c108d +0x0e29:  setb   %al
084c1090 +0x0e2c:  test   %al,%al
084c1092 +0x0e2e:  jne    084c104a <+0xde6>
084c1094 +0x0e30:  mov    0xc(%ebp),%eax
084c1097 +0x0e33:  mov    %eax,(%esp)
084c109a +0x0e36:  call   08162338 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5a6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5a6
084c109f +0x0e3b:  test   %al,%al
084c10a1 +0x0e3d:  je     084c10b9 <+0xe55>
084c10a3 +0x0e3f:  mov    0xc(%ebp),%eax
084c10a6 +0x0e42:  mov    %eax,(%esp)
084c10a9 +0x0e45:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
084c10ae +0x0e4a:  test   %al,%al
084c10b0 +0x0e4c:  jne    084c10b9 <+0xe55>
084c10b2 +0x0e4e:  mov    $0x1,%eax
084c10b7 +0x0e53:  jmp    084c10be <+0xe5a>
084c10b9 +0x0e55:  mov    $0x0,%eax
084c10be +0x0e5a:  test   %al,%al
084c10c0 +0x0e5c:  je     084c117d <+0xf19>
084c10c6 +0x0e62:  movl   $0x0,-0x34(%ebp)
084c10cd +0x0e69:  movl   $0x0,-0x30(%ebp)
084c10d4 +0x0e70:  cmpl   $0x32,-0x44(%ebp)
084c10d8 +0x0e74:  jle    084c10ea <+0xe86>
084c10da +0x0e76:  movl   $0x5,-0x34(%ebp)
084c10e1 +0x0e7d:  movl   $0x4,-0x30(%ebp)
084c10e8 +0x0e84:  jmp    084c112a <+0xec6>
084c10ea +0x0e86:  cmpl   $0x28,-0x44(%ebp)
084c10ee +0x0e8a:  jle    084c1100 <+0xe9c>
084c10f0 +0x0e8c:  movl   $0x3,-0x34(%ebp)
084c10f7 +0x0e93:  movl   $0x3,-0x30(%ebp)
084c10fe +0x0e9a:  jmp    084c112a <+0xec6>
084c1100 +0x0e9c:  cmpl   $0x1e,-0x44(%ebp)
084c1104 +0x0ea0:  jle    084c1116 <+0xeb2>
084c1106 +0x0ea2:  movl   $0x2,-0x34(%ebp)
084c110d +0x0ea9:  movl   $0x2,-0x30(%ebp)
084c1114 +0x0eb0:  jmp    084c112a <+0xec6>
084c1116 +0x0eb2:  cmpl   $0x14,-0x44(%ebp)
084c111a +0x0eb6:  jle    084c112a <+0xec6>
084c111c +0x0eb8:  movl   $0x1,-0x34(%ebp)
084c1123 +0x0ebf:  movl   $0x1,-0x30(%ebp)
084c112a +0x0ec6:  movl   $0x0,-0x2c(%ebp)
084c1131 +0x0ecd:  jmp    084c1170 <+0xf0c>
084c1133 +0x0ecf:  mov    0xc(%ebp),%eax
084c1136 +0x0ed2:  mov    %eax,(%esp)
084c1139 +0x0ed5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084c113e +0x0eda:  movl   $0x0,0x14(%esp)
084c1146 +0x0ee2:  mov    -0x30(%ebp),%edx
084c1149 +0x0ee5:  mov    %edx,0x10(%esp)
084c114d +0x0ee9:  movl   $0x1,0xc(%esp)
084c1155 +0x0ef1:  movl   $0x1a3,0x8(%esp)
084c115d +0x0ef9:  mov    0xc(%ebp),%edx
084c1160 +0x0efc:  mov    %edx,0x4(%esp)
084c1164 +0x0f00:  mov    %eax,(%esp)
084c1167 +0x0f03:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084c116c +0x0f08:  addl   $0x1,-0x2c(%ebp)
084c1170 +0x0f0c:  mov    -0x2c(%ebp),%eax
084c1173 +0x0f0f:  cmp    -0x34(%ebp),%eax
084c1176 +0x0f12:  setb   %al
084c1179 +0x0f15:  test   %al,%al
084c117b +0x0f17:  jne    084c1133 <+0xecf>
084c117d +0x0f19:  mov    0xc(%ebp),%eax
084c1180 +0x0f1c:  mov    %eax,(%esp)
084c1183 +0x0f1f:  call   08690ed8 <_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv>  ; CUserCharacInfo::resetBlueMarbleEnterCount()
084c1188 +0x0f24:  mov    0xc(%ebp),%eax
084c118b +0x0f27:  mov    %eax,(%esp)
084c118e +0x0f2a:  call   08690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>  ; CUser::sendBlueMarbleEnterCount()
084c1193 +0x0f2f:  mov    0xc(%ebp),%eax
084c1196 +0x0f32:  mov    %eax,(%esp)
084c1199 +0x0f35:  call   086568fc <_ZN5CUser12SendOpenflagEv>  ; CUser::SendOpenflag()
084c119e +0x0f3a:  mov    0xc(%ebp),%eax
084c11a1 +0x0f3d:  mov    %eax,(%esp)
084c11a4 +0x0f40:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c11a9 +0x0f45:  mov    0x7b(%eax),%eax
084c11ac +0x0f48:  movl   $0x0,0x1c(%esp)
084c11b4 +0x0f50:  movl   $"game_server_msg_131",0x18(%esp)
084c11bc +0x0f58:  movl   $"game_server_msg_53",0x14(%esp)
084c11c4 +0x0f60:  movl   $0x27addd,0x10(%esp)
084c11cc +0x0f68:  movl   $0x4b578af0,0xc(%esp)
084c11d4 +0x0f70:  movl   $0x4b4515f0,0x8(%esp)
084c11dc +0x0f78:  mov    %eax,0x4(%esp)
084c11e0 +0x0f7c:  mov    0xc(%ebp),%eax
084c11e3 +0x0f7f:  mov    %eax,(%esp)
084c11e6 +0x0f82:  call   084bfb84 <_Z10RewardItemP5CUserllljPKcS2_j>  ; RewardItem(CUser*, long, long, long, unsigned int, char const*, char const*, unsigned int)
084c11eb +0x0f87:  mov    0xc(%ebp),%eax
084c11ee +0x0f8a:  mov    %eax,(%esp)
084c11f1 +0x0f8d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c11f6 +0x0f92:  mov    0x7b(%eax),%eax
084c11f9 +0x0f95:  test   %eax,%eax
084c11fb +0x0f97:  setne  %al
084c11fe +0x0f9a:  test   %al,%al
084c1200 +0x0f9c:  je     084c120d <+0xfa9>
084c1202 +0x0f9e:  mov    0xc(%ebp),%eax
084c1205 +0x0fa1:  mov    %eax,(%esp)
084c1208 +0x0fa4:  call   0868fc46 <_ZN5CUser12initAllSkillEv>  ; CUser::initAllSkill()
084c120d +0x0fa9:  mov    0xc(%ebp),%eax
084c1210 +0x0fac:  mov    %eax,(%esp)
084c1213 +0x0faf:  call   08656abc <_ZN5CUser18SendRevengeDungeonEv>  ; CUser::SendRevengeDungeon()
084c1218 +0x0fb4:  mov    0xc(%ebp),%eax
084c121b +0x0fb7:  mov    %eax,(%esp)
084c121e +0x0fba:  call   086818fc <_ZN5CUser22SendConditionEventInfoEv>  ; CUser::SendConditionEventInfo()
084c1223 +0x0fbf:  mov    0xc(%ebp),%eax
084c1226 +0x0fc2:  mov    %eax,(%esp)
084c1229 +0x0fc5:  call   08681820 <_ZN5CUser27SendProperDungeonClearCountEv>  ; CUser::SendProperDungeonClearCount()
084c122e +0x0fca:  mov    0xc(%ebp),%eax
084c1231 +0x0fcd:  mov    %eax,0x8(%esp)
084c1235 +0x0fd1:  mov    -0x60(%ebp),%eax
084c1238 +0x0fd4:  mov    &_ZL14gUnicodeBuffer+0xa630(%eax),%eax
084c123e +0x0fda:  mov    %eax,0x4(%esp)
084c1242 +0x0fde:  mov    0x8(%ebp),%eax
084c1245 +0x0fe1:  mov    %eax,(%esp)
084c1248 +0x0fe4:  call   084e8428 <_ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser>  ; Inter_LoadEtc::processSeriaRoomAniDecoEvent(seriaRoom_AniDeco, CUser&)
084c124d +0x0fe9:  mov    0xc(%ebp),%eax
084c1250 +0x0fec:  mov    %eax,0x4(%esp)
084c1254 +0x0ff0:  mov    0x8(%ebp),%eax
084c1257 +0x0ff3:  mov    %eax,(%esp)
084c125a +0x0ff6:  call   084e84f6 <_ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser>  ; Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&)
084c125f +0x0ffb:  movl   $0x270f,0x4(%esp)
084c1267 +0x1003:  mov    0xc(%ebp),%eax
084c126a +0x1006:  mov    %eax,(%esp)
084c126d +0x1009:  call   086afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>  ; WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
084c1272 +0x100e:  movl   $0x1,-0x28(%ebp)
084c1279 +0x1015:  jmp    084c12bb <+0x1057>
084c127b +0x1017:  mov    -0x28(%ebp),%eax
084c127e +0x101a:  mov    %eax,(%esp)
084c1281 +0x101d:  call   084e927f <_GLOBAL__I__Z7getUserj+0x231>  ; global constructors keyed to getUser(unsigned int)+0x231
084c1286 +0x1022:  test   %al,%al
084c1288 +0x1024:  je     084c12b7 <+0x1053>
084c128a +0x1026:  mov    -0x28(%ebp),%eax
084c128d +0x1029:  mov    %eax,(%esp)
084c1290 +0x102c:  call   084e9294 <_GLOBAL__I__Z7getUserj+0x246>  ; global constructors keyed to getUser(unsigned int)+0x246
084c1295 +0x1031:  movswl %ax,%edx
084c1298 +0x1034:  mov    -0x28(%ebp),%eax
084c129b +0x1037:  cwtl
084c129c +0x1038:  mov    0xc(%ebp),%ecx
084c129f +0x103b:  mov    %ecx,0xc(%esp)
084c12a3 +0x103f:  mov    %edx,0x8(%esp)
084c12a7 +0x1043:  mov    %eax,0x4(%esp)
084c12ab +0x1047:  movl   $0x1,(%esp)
084c12b2 +0x104e:  call   084cf2de <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser>  ; Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*)
084c12b7 +0x1053:  addl   $0x1,-0x28(%ebp)
084c12bb +0x1057:  cmpl   $0x1,-0x28(%ebp)
084c12bf +0x105b:  setle  %al
084c12c2 +0x105e:  test   %al,%al
084c12c4 +0x1060:  jne    084c127b <+0x1017>
084c12c6 +0x1062:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084c12cb +0x1067:  mov    %eax,(%esp)
084c12ce +0x106a:  call   0837501a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefe6
084c12d3 +0x106f:  mov    %al,-0x55(%ebp)
084c12d6 +0x1072:  lea    -0x90(%ebp),%eax
084c12dc +0x1078:  mov    %eax,(%esp)
084c12df +0x107b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084c12e4 +0x1080:  movl   $0xbc,0x8(%esp)
084c12ec +0x1088:  movl   $0x0,0x4(%esp)
084c12f4 +0x1090:  lea    -0x90(%ebp),%eax
084c12fa +0x1096:  mov    %eax,(%esp)
084c12fd +0x1099:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c1302 +0x109e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c1307 +0x10a3:  mov    %eax,(%esp)
084c130a +0x10a6:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084c130f +0x10ab:  test   %al,%al
084c1311 +0x10ad:  je     084c132b <+0x10c7>
084c1313 +0x10af:  movl   $0x63,0x4(%esp)
084c131b +0x10b7:  lea    -0x90(%ebp),%eax
084c1321 +0x10bd:  mov    %eax,(%esp)
084c1324 +0x10c0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c1329 +0x10c5:  jmp    084c1341 <+0x10dd>
084c132b +0x10c7:  movsbl -0x55(%ebp),%eax
084c132f +0x10cb:  mov    %eax,0x4(%esp)
084c1333 +0x10cf:  lea    -0x90(%ebp),%eax
084c1339 +0x10d5:  mov    %eax,(%esp)
084c133c +0x10d8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c1341 +0x10dd:  movl   $0x1,0x4(%esp)
084c1349 +0x10e5:  lea    -0x90(%ebp),%eax
084c134f +0x10eb:  mov    %eax,(%esp)
084c1352 +0x10ee:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c1357 +0x10f3:  lea    -0x90(%ebp),%eax
084c135d +0x10f9:  mov    %eax,0x4(%esp)
084c1361 +0x10fd:  mov    0xc(%ebp),%eax
084c1364 +0x1100:  mov    %eax,(%esp)
084c1367 +0x1103:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c136c +0x1108:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084c1371 +0x110d:  mov    %eax,(%esp)
084c1374 +0x1110:  call   0847f1b0 <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv>  ; CPowerManager::CheckCompleteDBLoadStatueInfo()
084c1379 +0x1115:  test   %al,%al
084c137b +0x1117:  je     084c1391 <+0x112d>
084c137d +0x1119:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084c1382 +0x111e:  mov    0xc(%ebp),%edx
084c1385 +0x1121:  mov    %edx,0x4(%esp)
084c1389 +0x1125:  mov    %eax,(%esp)
084c138c +0x1128:  call   0847f200 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser>  ; CPowerManager::SendPowerWarUserStatueInfo(CUser*)
084c1391 +0x112d:  lea    -0x90(%ebp),%eax
084c1397 +0x1133:  mov    %eax,(%esp)
084c139a +0x1136:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084c139f +0x113b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084c13a4 +0x1140:  mov    0xc(%ebp),%edx
084c13a7 +0x1143:  mov    %edx,0x8(%esp)
084c13ab +0x1147:  lea    -0x90(%ebp),%edx
084c13b1 +0x114d:  mov    %edx,0x4(%esp)
084c13b5 +0x1151:  mov    %eax,(%esp)
084c13b8 +0x1154:  call   08115de2 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser>  ; CEventManager::MakeNotiEventInfo(PacketGuard&, CUser*)
084c13bd +0x1159:  lea    -0x90(%ebp),%eax
084c13c3 +0x115f:  mov    %eax,0x4(%esp)
084c13c7 +0x1163:  mov    0xc(%ebp),%eax
084c13ca +0x1166:  mov    %eax,(%esp)
084c13cd +0x1169:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c13d2 +0x116e:  lea    -0x128(%ebp),%eax
084c13d8 +0x1174:  mov    %eax,(%esp)
084c13db +0x1177:  call   084eefd4 <_GLOBAL__I__Z7getUserj+0x5f86>  ; global constructors keyed to getUser(unsigned int)+0x5f86
084c13e0 +0x117c:  mov    0xc(%ebp),%eax
084c13e3 +0x117f:  mov    %eax,(%esp)
084c13e6 +0x1182:  call   086781b4 <_ZN5CUser20SendDungeonClearListEv>  ; CUser::SendDungeonClearList()
084c13eb +0x1187:  movl   $0xb,0x4(%esp)
084c13f3 +0x118f:  mov    0xc(%ebp),%eax
084c13f6 +0x1192:  mov    %eax,(%esp)
084c13f9 +0x1195:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084c13fe +0x119a:  mov    0xc(%ebp),%eax
084c1401 +0x119d:  mov    %eax,0x4(%esp)
084c1405 +0x11a1:  mov    0x8(%ebp),%eax
084c1408 +0x11a4:  mov    %eax,(%esp)
084c140b +0x11a7:  call   084c2760 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser>  ; Inter_LoadEtc::_checkUserDisadvantage(CUser*)
084c1410 +0x11ac:  mov    0xc(%ebp),%eax
084c1413 +0x11af:  mov    %eax,(%esp)
084c1416 +0x11b2:  call   086800c6 <_ZN5CUser17onSelectCharacterEv>  ; CUser::onSelectCharacter()
084c141b +0x11b7:  mov    0xc(%ebp),%eax
084c141e +0x11ba:  mov    %eax,(%esp)
084c1421 +0x11bd:  call   084ecf94 <_GLOBAL__I__Z7getUserj+0x3f46>  ; global constructors keyed to getUser(unsigned int)+0x3f46
084c1426 +0x11c2:  test   %al,%al
084c1428 +0x11c4:  je     084c1440 <+0x11dc>
084c142a +0x11c6:  mov    0xc(%ebp),%eax
084c142d +0x11c9:  mov    %eax,(%esp)
084c1430 +0x11cc:  call   084ecfc0 <_GLOBAL__I__Z7getUserj+0x3f72>  ; global constructors keyed to getUser(unsigned int)+0x3f72
084c1435 +0x11d1:  test   %al,%al
084c1437 +0x11d3:  je     084c1440 <+0x11dc>
084c1439 +0x11d5:  mov    $0x1,%eax
084c143e +0x11da:  jmp    084c1445 <+0x11e1>
084c1440 +0x11dc:  mov    $0x0,%eax
084c1445 +0x11e1:  test   %al,%al
084c1447 +0x11e3:  je     084c1479 <+0x1215>
084c1449 +0x11e5:  mov    0xc(%ebp),%eax
084c144c +0x11e8:  mov    %eax,(%esp)
084c144f +0x11eb:  call   084ecfc0 <_GLOBAL__I__Z7getUserj+0x3f72>  ; global constructors keyed to getUser(unsigned int)+0x3f72
084c1454 +0x11f0:  movzbl %al,%eax
084c1457 +0x11f3:  mov    %eax,0x4(%esp)
084c145b +0x11f7:  mov    0xc(%ebp),%eax
084c145e +0x11fa:  mov    %eax,(%esp)
084c1461 +0x11fd:  call   08688328 <_ZN5CUser17AddSecuRewardItemEh>  ; CUser::AddSecuRewardItem(unsigned char)
084c1466 +0x1202:  movl   $0x0,0x4(%esp)
084c146e +0x120a:  mov    0xc(%ebp),%eax
084c1471 +0x120d:  mov    %eax,(%esp)
084c1474 +0x1210:  call   084ecfd0 <_GLOBAL__I__Z7getUserj+0x3f82>  ; global constructors keyed to getUser(unsigned int)+0x3f82
084c1479 +0x1215:  mov    0xc(%ebp),%eax
084c147c +0x1218:  mov    %eax,(%esp)
084c147f +0x121b:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c1484 +0x1220:  mov    %eax,(%esp)
084c1487 +0x1223:  call   084ebdca <_GLOBAL__I__Z7getUserj+0x2d7c>  ; global constructors keyed to getUser(unsigned int)+0x2d7c
084c148c +0x1228:  test   %al,%al
084c148e +0x122a:  je     084c14aa <+0x1246>
084c1490 +0x122c:  mov    0xc(%ebp),%eax
084c1493 +0x122f:  mov    %eax,(%esp)
084c1496 +0x1232:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c149b +0x1237:  mov    0xc(%ebp),%edx
084c149e +0x123a:  mov    %edx,0x4(%esp)
084c14a2 +0x123e:  mov    %eax,(%esp)
084c14a5 +0x1241:  call   0859981e <_ZN8Sanicova4CPad22SendChagePwdRewardMailEP5CUser>  ; Sanicova::CPad::SendChagePwdRewardMail(CUser*)
084c14aa +0x1246:  mov    0xc(%ebp),%eax
084c14ad +0x1249:  mov    %eax,(%esp)
084c14b0 +0x124c:  call   08680bd2 <_ZN5CUser22discard_mouse_registerEv>  ; CUser::discard_mouse_register()
084c14b5 +0x1251:  mov    0xc(%ebp),%eax
084c14b8 +0x1254:  mov    %eax,(%esp)
084c14bb +0x1257:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c14c0 +0x125c:  cmp    $0x27,%eax
084c14c3 +0x125f:  setg   %al
084c14c6 +0x1262:  test   %al,%al
084c14c8 +0x1264:  je     084c14ee <+0x128a>
084c14ca +0x1266:  mov    0xc(%ebp),%eax
084c14cd +0x1269:  mov    %eax,(%esp)
084c14d0 +0x126c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c14d5 +0x1271:  mov    %eax,%ebx
084c14d7 +0x1273:  mov    0xc(%ebp),%eax
084c14da +0x1276:  mov    %eax,(%esp)
084c14dd +0x1279:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c14e2 +0x127e:  mov    %ebx,0x4(%esp)
084c14e6 +0x1282:  mov    %eax,(%esp)
084c14e9 +0x1285:  call   084318c4 <_ZN22DB_LoadBloodBestRecord11makeRequestEij>  ; DB_LoadBloodBestRecord::makeRequest(int, unsigned int)
084c14ee +0x128a:  mov    0xc(%ebp),%eax
084c14f1 +0x128d:  mov    %eax,(%esp)
084c14f4 +0x1290:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c14f9 +0x1295:  cmp    $0x3b,%eax
084c14fc +0x1298:  setg   %al
084c14ff +0x129b:  test   %al,%al
084c1501 +0x129d:  je     084c1527 <+0x12c3>
084c1503 +0x129f:  mov    0xc(%ebp),%eax
084c1506 +0x12a2:  mov    %eax,(%esp)
084c1509 +0x12a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c150e +0x12aa:  mov    %eax,%ebx
084c1510 +0x12ac:  mov    0xc(%ebp),%eax
084c1513 +0x12af:  mov    %eax,(%esp)
084c1516 +0x12b2:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c151b +0x12b7:  mov    %ebx,0x4(%esp)
084c151f +0x12bb:  mov    %eax,(%esp)
084c1522 +0x12be:  call   08431d8c <_ZN16DB_LoadDimension11makeRequestEij>  ; DB_LoadDimension::makeRequest(int, unsigned int)
084c1527 +0x12c3:  mov    0xc(%ebp),%eax
084c152a +0x12c6:  mov    %eax,(%esp)
084c152d +0x12c9:  call   084ec64e <_GLOBAL__I__Z7getUserj+0x3600>  ; global constructors keyed to getUser(unsigned int)+0x3600
084c1532 +0x12ce:  test   %al,%al
084c1534 +0x12d0:  je     084c1541 <+0x12dd>
084c1536 +0x12d2:  mov    0xc(%ebp),%eax
084c1539 +0x12d5:  mov    %eax,(%esp)
084c153c +0x12d8:  call   084d8e68 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser>  ; Inter_LoadEtc::giveBreakAwayReward(CUser*)
084c1541 +0x12dd:  mov    0xc(%ebp),%eax
084c1544 +0x12e0:  mov    %eax,(%esp)
084c1547 +0x12e3:  call   0822fc6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5318>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5318
084c154c +0x12e8:  test   %eax,%eax
084c154e +0x12ea:  setg   %al
084c1551 +0x12ed:  test   %al,%al
084c1553 +0x12ef:  je     084c162d <+0x13c9>
084c1559 +0x12f5:  mov    0xc(%ebp),%eax
084c155c +0x12f8:  mov    %eax,(%esp)
084c155f +0x12fb:  call   084ec62e <_GLOBAL__I__Z7getUserj+0x35e0>  ; global constructors keyed to getUser(unsigned int)+0x35e0
084c1564 +0x1300:  mov    %eax,%ebx
084c1566 +0x1302:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c156d +0x1309:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c1572 +0x130e:  mov    %ebx,%ecx
084c1574 +0x1310:  sub    %eax,%ecx
084c1576 +0x1312:  mov    %ecx,%eax
084c1578 +0x1314:  mov    %eax,-0x24(%ebp)
084c157b +0x1317:  cmpl   $0x0,-0x24(%ebp)
084c157f +0x131b:  jg     084c1599 <+0x1335>
084c1581 +0x131d:  movl   $0xffffffff,0x4(%esp)
084c1589 +0x1325:  mov    0xc(%ebp),%eax
084c158c +0x1328:  mov    %eax,(%esp)
084c158f +0x132b:  call   0822fc5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5306>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5306
084c1594 +0x1330:  jmp    084c162d <+0x13c9>
084c1599 +0x1335:  lea    -0x90(%ebp),%eax
084c159f +0x133b:  mov    %eax,(%esp)
084c15a2 +0x133e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084c15a7 +0x1343:  movl   $0x136,0x8(%esp)
084c15af +0x134b:  movl   $0x0,0x4(%esp)
084c15b7 +0x1353:  lea    -0x90(%ebp),%eax
084c15bd +0x1359:  mov    %eax,(%esp)
084c15c0 +0x135c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c15c5 +0x1361:  mov    -0x24(%ebp),%eax
084c15c8 +0x1364:  mov    %eax,0x4(%esp)
084c15cc +0x1368:  lea    -0x90(%ebp),%eax
084c15d2 +0x136e:  mov    %eax,(%esp)
084c15d5 +0x1371:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c15da +0x1376:  mov    0xc(%ebp),%eax
084c15dd +0x1379:  mov    %eax,(%esp)
084c15e0 +0x137c:  call   0822fc6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5318>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5318
084c15e5 +0x1381:  mov    $0x3,%edx
084c15ea +0x1386:  mov    %edx,%ecx
084c15ec +0x1388:  sub    %eax,%ecx
084c15ee +0x138a:  mov    %ecx,%eax
084c15f0 +0x138c:  mov    %eax,0x4(%esp)
084c15f4 +0x1390:  lea    -0x90(%ebp),%eax
084c15fa +0x1396:  mov    %eax,(%esp)
084c15fd +0x1399:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c1602 +0x139e:  movl   $0x1,0x4(%esp)
084c160a +0x13a6:  lea    -0x90(%ebp),%eax
084c1610 +0x13ac:  mov    %eax,(%esp)
084c1613 +0x13af:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c1618 +0x13b4:  lea    -0x90(%ebp),%eax
084c161e +0x13ba:  mov    %eax,0x4(%esp)
084c1622 +0x13be:  mov    0xc(%ebp),%eax
084c1625 +0x13c1:  mov    %eax,(%esp)
084c1628 +0x13c4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c162d +0x13c9:  mov    0xc(%ebp),%eax
084c1630 +0x13cc:  mov    %eax,(%esp)
084c1633 +0x13cf:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c1638 +0x13d4:  mov    %eax,%ebx
084c163a +0x13d6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c163f +0x13db:  movl   $0x2aff,0x4(%esp)
084c1647 +0x13e3:  mov    %eax,(%esp)
084c164a +0x13e6:  call   086c9076 <_ZN9GameWorld30getDungeonMinimumRequiredLevelEi>  ; GameWorld::getDungeonMinimumRequiredLevel(int)
084c164f +0x13eb:  cmp    %eax,%ebx
084c1651 +0x13ed:  jl     084c166e <+0x140a>
084c1653 +0x13ef:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c1658 +0x13f4:  mov    %eax,(%esp)
084c165b +0x13f7:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
084c1660 +0x13fc:  xor    $0x1,%eax
084c1663 +0x13ff:  test   %al,%al
084c1665 +0x1401:  je     084c166e <+0x140a>
084c1667 +0x1403:  mov    $0x1,%eax
084c166c +0x1408:  jmp    084c1673 <+0x140f>
084c166e +0x140a:  mov    $0x0,%eax
084c1673 +0x140f:  test   %al,%al
084c1675 +0x1411:  je     084c16dd <+0x1479>
084c1677 +0x1413:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c167c +0x1418:  add    $0x68,%eax
084c167f +0x141b:  movl   $0x2aff,0x4(%esp)
084c1687 +0x1423:  mov    %eax,(%esp)
084c168a +0x1426:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
084c168f +0x142b:  test   %al,%al
084c1691 +0x142d:  je     084c16b9 <+0x1455>
084c1693 +0x142f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c1698 +0x1434:  movl   $0x1,0xc(%esp)
084c16a0 +0x143c:  movl   $0x2aff,0x8(%esp)
084c16a8 +0x1444:  mov    0xc(%ebp),%edx
084c16ab +0x1447:  mov    %edx,0x4(%esp)
084c16af +0x144b:  mov    %eax,(%esp)
084c16b2 +0x144e:  call   086c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>  ; GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
084c16b7 +0x1453:  jmp    084c16dd <+0x1479>
084c16b9 +0x1455:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c16be +0x145a:  movl   $0x0,0xc(%esp)
084c16c6 +0x1462:  movl   $0x2aff,0x8(%esp)
084c16ce +0x146a:  mov    0xc(%ebp),%edx
084c16d1 +0x146d:  mov    %edx,0x4(%esp)
084c16d5 +0x1471:  mov    %eax,(%esp)
084c16d8 +0x1474:  call   086c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>  ; GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
084c16dd +0x1479:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c16e2 +0x147e:  mov    %eax,(%esp)
084c16e5 +0x1481:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
084c16ea +0x1486:  mov    0xc(%ebp),%edx
084c16ed +0x1489:  mov    %edx,0x4(%esp)
084c16f1 +0x148d:  mov    %eax,(%esp)
084c16f4 +0x1490:  call   082f85ea <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEP5CUser>  ; CAutoMarketConditionsControl::SendNotiSetDurability(CUser*)
084c16f9 +0x1495:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
084c16fe +0x149a:  mov    %eax,(%esp)
084c1701 +0x149d:  call   08234fca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa674>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa674
084c1706 +0x14a2:  test   %eax,%eax
084c1708 +0x14a4:  setne  %al
084c170b +0x14a7:  test   %al,%al
084c170d +0x14a9:  je     084c175f <+0x14fb>
084c170f +0x14ab:  lea    -0x90(%ebp),%eax
084c1715 +0x14b1:  mov    %eax,(%esp)
084c1718 +0x14b4:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084c171d +0x14b9:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
084c1722 +0x14be:  lea    -0x90(%ebp),%edx
084c1728 +0x14c4:  mov    %edx,0x4(%esp)
084c172c +0x14c8:  mov    %eax,(%esp)
084c172f +0x14cb:  call   084b7ec4 <_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard>  ; CGlobalEffectManager::makeGlobalEffectInfo(PacketGuard&) const
084c1734 +0x14d0:  movl   $0x1,0x4(%esp)
084c173c +0x14d8:  lea    -0x90(%ebp),%eax
084c1742 +0x14de:  mov    %eax,(%esp)
084c1745 +0x14e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c174a +0x14e6:  lea    -0x90(%ebp),%eax
084c1750 +0x14ec:  mov    %eax,0x4(%esp)
084c1754 +0x14f0:  mov    0xc(%ebp),%eax
084c1757 +0x14f3:  mov    %eax,(%esp)
084c175a +0x14f6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c175f +0x14fb:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c1764 +0x1500:  mov    %eax,(%esp)
084c1767 +0x1503:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
084c176c +0x1508:  mov    %eax,-0x54(%ebp)
084c176f +0x150b:  cmpl   $0x0,-0x54(%ebp)
084c1773 +0x150f:  je     084c19de <+0x177a>
084c1779 +0x1515:  mov    -0x54(%ebp),%eax
084c177c +0x1518:  mov    %eax,(%esp)
084c177f +0x151b:  call   084ed182 <_GLOBAL__I__Z7getUserj+0x4134>  ; global constructors keyed to getUser(unsigned int)+0x4134
084c1784 +0x1520:  test   %al,%al
084c1786 +0x1522:  je     084c19ae <+0x174a>
084c178c +0x1528:  mov    -0x54(%ebp),%eax
084c178f +0x152b:  mov    %eax,(%esp)
084c1792 +0x152e:  call   084ed18e <_GLOBAL__I__Z7getUserj+0x4140>  ; global constructors keyed to getUser(unsigned int)+0x4140
084c1797 +0x1533:  mov    %eax,-0x20(%ebp)
084c179a +0x1536:  cmpl   $0x0,-0x20(%ebp)
084c179e +0x153a:  je     084c19b8 <+0x1754>
084c17a4 +0x1540:  mov    -0x20(%ebp),%eax
084c17a7 +0x1543:  movzbl (%eax),%edx
084c17aa +0x1546:  mov    -0x60(%ebp),%eax
084c17ad +0x1549:  mov    %dl,0x2d38(%eax)
084c17b3 +0x154f:  mov    -0x20(%ebp),%eax
084c17b6 +0x1552:  movzbl (%eax),%eax
084c17b9 +0x1555:  movzbl %al,%ebx
084c17bc +0x1558:  mov    -0x20(%ebp),%eax
084c17bf +0x155b:  add    $0x4,%eax
084c17c2 +0x155e:  mov    %eax,(%esp)
084c17c5 +0x1561:  call   084f13da <_GLOBAL__I__Z7getUserj+0x838c>  ; global constructors keyed to getUser(unsigned int)+0x838c
084c17ca +0x1566:  cmp    %eax,%ebx
084c17cc +0x1568:  sete   %al
084c17cf +0x156b:  test   %al,%al
084c17d1 +0x156d:  je     084c19b8 <+0x1754>
084c17d7 +0x1573:  mov    -0x20(%ebp),%eax
084c17da +0x1576:  lea    0x4(%eax),%edx
084c17dd +0x1579:  lea    -0x74(%ebp),%eax
084c17e0 +0x157c:  mov    %edx,0x4(%esp)
084c17e4 +0x1580:  mov    %eax,(%esp)
084c17e7 +0x1583:  call   084f13fc <_GLOBAL__I__Z7getUserj+0x83ae>  ; global constructors keyed to getUser(unsigned int)+0x83ae
084c17ec +0x1588:  sub    $0x4,%esp
084c17ef +0x158b:  lea    -0x74(%ebp),%eax
084c17f2 +0x158e:  mov    %eax,0x4(%esp)
084c17f6 +0x1592:  lea    -0xb4(%ebp),%eax
084c17fc +0x1598:  mov    %eax,(%esp)
084c17ff +0x159b:  call   084f1420 <_GLOBAL__I__Z7getUserj+0x83d2>  ; global constructors keyed to getUser(unsigned int)+0x83d2
084c1804 +0x15a0:  mov    -0x20(%ebp),%eax
084c1807 +0x15a3:  lea    0x4(%eax),%edx
084c180a +0x15a6:  lea    -0x70(%ebp),%eax
084c180d +0x15a9:  mov    %edx,0x4(%esp)
084c1811 +0x15ad:  mov    %eax,(%esp)
084c1814 +0x15b0:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
084c1819 +0x15b5:  sub    $0x4,%esp
084c181c +0x15b8:  lea    -0x70(%ebp),%eax
084c181f +0x15bb:  mov    %eax,0x4(%esp)
084c1823 +0x15bf:  lea    -0xb8(%ebp),%eax
084c1829 +0x15c5:  mov    %eax,(%esp)
084c182c +0x15c8:  call   084f1420 <_GLOBAL__I__Z7getUserj+0x83d2>  ; global constructors keyed to getUser(unsigned int)+0x83d2
084c1831 +0x15cd:  movl   $0x0,-0x1c(%ebp)
084c1838 +0x15d4:  jmp    084c198c <+0x1728>
084c183d +0x15d9:  mov    -0x1c(%ebp),%ebx
084c1840 +0x15dc:  lea    -0xb4(%ebp),%eax
084c1846 +0x15e2:  mov    %eax,(%esp)
084c1849 +0x15e5:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c184e +0x15ea:  movzbl 0x1(%eax),%eax
084c1852 +0x15ee:  mov    -0x60(%ebp),%ecx
084c1855 +0x15f1:  imul   $0x58,%ebx,%edx
084c1858 +0x15f4:  lea    (%ecx,%edx,1),%edx
084c185b +0x15f7:  add    $0x2d3d,%edx
084c1861 +0x15fd:  mov    %al,(%edx)
084c1863 +0x15ff:  mov    -0x1c(%ebp),%ebx
084c1866 +0x1602:  lea    -0xb4(%ebp),%eax
084c186c +0x1608:  mov    %eax,(%esp)
084c186f +0x160b:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c1874 +0x1610:  movzbl (%eax),%eax
084c1877 +0x1613:  mov    -0x60(%ebp),%ecx
084c187a +0x1616:  imul   $0x58,%ebx,%edx
084c187d +0x1619:  lea    (%ecx,%edx,1),%edx
084c1880 +0x161c:  add    $0x2d3c,%edx
084c1886 +0x1622:  mov    %al,(%edx)
084c1888 +0x1624:  mov    -0x1c(%ebp),%ebx
084c188b +0x1627:  lea    -0xb4(%ebp),%eax
084c1891 +0x162d:  mov    %eax,(%esp)
084c1894 +0x1630:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c1899 +0x1635:  mov    0x3c(%eax),%eax
084c189c +0x1638:  mov    -0x60(%ebp),%ecx
084c189f +0x163b:  imul   $0x58,%ebx,%edx
084c18a2 +0x163e:  lea    (%ecx,%edx,1),%edx
084c18a5 +0x1641:  add    $0x2d60,%edx
084c18ab +0x1647:  mov    %eax,0x18(%edx)
084c18ae +0x164a:  lea    -0xb4(%ebp),%eax
084c18b4 +0x1650:  mov    %eax,(%esp)
084c18b7 +0x1653:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c18bc +0x1658:  add    $0x40,%eax
084c18bf +0x165b:  mov    -0x1c(%ebp),%edx
084c18c2 +0x165e:  imul   $0x58,%edx,%edx
084c18c5 +0x1661:  add    $0x2d70,%edx
084c18cb +0x1667:  add    -0x60(%ebp),%edx
084c18ce +0x166a:  add    $0xc,%edx
084c18d1 +0x166d:  movl   $0x13,0x8(%esp)
084c18d9 +0x1675:  mov    %eax,0x4(%esp)
084c18dd +0x1679:  mov    %edx,(%esp)
084c18e0 +0x167c:  call   0807d8d0 <_init+0x1c8>
084c18e5 +0x1681:  mov    -0x1c(%ebp),%ebx
084c18e8 +0x1684:  lea    -0xb4(%ebp),%eax
084c18ee +0x168a:  mov    %eax,(%esp)
084c18f1 +0x168d:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c18f6 +0x1692:  mov    0x4(%eax),%eax
084c18f9 +0x1695:  mov    -0x60(%ebp),%ecx
084c18fc +0x1698:  imul   $0x58,%ebx,%edx
084c18ff +0x169b:  lea    (%ecx,%edx,1),%edx
084c1902 +0x169e:  add    $0x2d30,%edx
084c1908 +0x16a4:  mov    %eax,0x10(%edx)
084c190b +0x16a7:  lea    -0xb4(%ebp),%eax
084c1911 +0x16ad:  mov    %eax,(%esp)
084c1914 +0x16b0:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c1919 +0x16b5:  add    $0x8,%eax
084c191c +0x16b8:  mov    -0x1c(%ebp),%edx
084c191f +0x16bb:  imul   $0x58,%edx,%edx
084c1922 +0x16be:  add    $0x2d30,%edx
084c1928 +0x16c4:  add    -0x60(%ebp),%edx
084c192b +0x16c7:  add    $0x14,%edx
084c192e +0x16ca:  movl   $0x31,0x8(%esp)
084c1936 +0x16d2:  mov    %eax,0x4(%esp)
084c193a +0x16d6:  mov    %edx,(%esp)
084c193d +0x16d9:  call   0807d8d0 <_init+0x1c8>
084c1942 +0x16de:  mov    -0x1c(%ebp),%ebx
084c1945 +0x16e1:  lea    -0xb4(%ebp),%eax
084c194b +0x16e7:  mov    %eax,(%esp)
084c194e +0x16ea:  call   084f14c0 <_GLOBAL__I__Z7getUserj+0x8472>  ; global constructors keyed to getUser(unsigned int)+0x8472
084c1953 +0x16ef:  mov    0x54(%eax),%eax
084c1956 +0x16f2:  mov    -0x60(%ebp),%ecx
084c1959 +0x16f5:  imul   $0x58,%ebx,%edx
084c195c +0x16f8:  lea    (%ecx,%edx,1),%edx
084c195f +0x16fb:  add    $0x2d80,%edx
084c1965 +0x1701:  mov    %eax,0x10(%edx)
084c1968 +0x1704:  addl   $0x1,-0x1c(%ebp)
084c196c +0x1708:  lea    -0x6c(%ebp),%eax
084c196f +0x170b:  movl   $0x0,0x8(%esp)
084c1977 +0x1713:  lea    -0xb4(%ebp),%edx
084c197d +0x1719:  mov    %edx,0x4(%esp)
084c1981 +0x171d:  mov    %eax,(%esp)
084c1984 +0x1720:  call   084f148c <_GLOBAL__I__Z7getUserj+0x843e>  ; global constructors keyed to getUser(unsigned int)+0x843e
084c1989 +0x1725:  sub    $0x4,%esp
084c198c +0x1728:  lea    -0xb8(%ebp),%eax
084c1992 +0x172e:  mov    %eax,0x4(%esp)
084c1996 +0x1732:  lea    -0xb4(%ebp),%eax
084c199c +0x1738:  mov    %eax,(%esp)
084c199f +0x173b:  call   084f1460 <_GLOBAL__I__Z7getUserj+0x8412>  ; global constructors keyed to getUser(unsigned int)+0x8412
084c19a4 +0x1740:  test   %al,%al
084c19a6 +0x1742:  jne    084c183d <+0x15d9>
084c19ac +0x1748:  jmp    084c19b8 <+0x1754>
084c19ae +0x174a:  mov    -0x60(%ebp),%eax
084c19b1 +0x174d:  movb   $0x0,0x2d38(%eax)
084c19b8 +0x1754:  mov    -0x60(%ebp),%eax
084c19bb +0x1757:  add    $0x2d38,%eax
084c19c0 +0x175c:  movl   $0x0,0xc(%esp)
084c19c8 +0x1764:  mov    %eax,0x8(%esp)
084c19cc +0x1768:  mov    0xc(%ebp),%eax
084c19cf +0x176b:  mov    %eax,0x4(%esp)
084c19d3 +0x176f:  mov    -0x54(%ebp),%eax
084c19d6 +0x1772:  mov    %eax,(%esp)
084c19d9 +0x1775:  call   086008d8 <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc>  ; CSharedServerMessageManager::SendServerMessageInfo(CUser*, SIG_EVENT_SERVER_MESSAGE*, char)
084c19de +0x177a:  mov    -0x60(%ebp),%eax
084c19e1 +0x177d:  add    $0x2638,%eax
084c19e6 +0x1782:  mov    %eax,0x4(%esp)
084c19ea +0x1786:  mov    0xc(%ebp),%eax
084c19ed +0x1789:  mov    %eax,(%esp)
084c19f0 +0x178c:  call   086888f8 <_ZN5CUser12SetLimitInfoEP19SIG_LIMIT_ITEM_INFO>  ; CUser::SetLimitInfo(SIG_LIMIT_ITEM_INFO*)
084c19f5 +0x1791:  mov    0xc(%ebp),%eax
084c19f8 +0x1794:  mov    %eax,(%esp)
084c19fb +0x1797:  call   0868152c <_ZN5CUser23SendLoginToPCRoomServerEv>  ; CUser::SendLoginToPCRoomServer()
084c1a00 +0x179c:  movl   $0x7,0x4(%esp)
084c1a08 +0x17a4:  mov    0xc(%ebp),%eax
084c1a0b +0x17a7:  mov    %eax,(%esp)
084c1a0e +0x17aa:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c1a13 +0x17af:  mov    (%eax),%edx
084c1a15 +0x17b1:  add    $0x4,%edx
084c1a18 +0x17b4:  mov    (%edx),%ecx
084c1a1a +0x17b6:  mov    -0x60(%ebp),%edx
084c1a1d +0x17b9:  add    $0xcf1f,%edx
084c1a23 +0x17bf:  mov    %edx,0x8(%esp)
084c1a27 +0x17c3:  mov    0xc(%ebp),%edx
084c1a2a +0x17c6:  mov    %edx,0x4(%esp)
084c1a2e +0x17ca:  mov    %eax,(%esp)
084c1a31 +0x17cd:  call   *%ecx
084c1a33 +0x17cf:  mov    0xc(%ebp),%eax
084c1a36 +0x17d2:  mov    %eax,(%esp)
084c1a39 +0x17d5:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
084c1a3e +0x17da:  test   %eax,%eax
084c1a40 +0x17dc:  jne    084c1a52 <+0x17ee>
084c1a42 +0x17de:  mov    0xc(%ebp),%eax
084c1a45 +0x17e1:  mov    %eax,(%esp)
084c1a48 +0x17e4:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
084c1a4d +0x17e9:  cmp    $0xffffffff,%eax
084c1a50 +0x17ec:  jne    084c1a59 <+0x17f5>
084c1a52 +0x17ee:  mov    $0x1,%eax
084c1a57 +0x17f3:  jmp    084c1a5e <+0x17fa>
084c1a59 +0x17f5:  mov    $0x0,%eax
084c1a5e +0x17fa:  test   %al,%al
084c1a60 +0x17fc:  je     084c1b53 <+0x18ef>
084c1a66 +0x1802:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c1a6b +0x1807:  movl   $0xed7,0x8(%esp)
084c1a73 +0x180f:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c1a7b +0x1817:  mov    %eax,(%esp)
084c1a7e +0x181a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c1a83 +0x181f:  movl   $0x1,0x8(%esp)
084c1a8b +0x1827:  mov    %eax,0x4(%esp)
084c1a8f +0x182b:  lea    -0xc0(%ebp),%eax
084c1a95 +0x1831:  mov    %eax,(%esp)
084c1a98 +0x1834:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c1a9d +0x1839:  lea    -0xc0(%ebp),%eax
084c1aa3 +0x183f:  mov    %eax,(%esp)
084c1aa6 +0x1842:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1aab +0x1847:  movl   $0x180,0x4(%esp)
084c1ab3 +0x184f:  mov    %eax,(%esp)
084c1ab6 +0x1852:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1abb +0x1857:  mov    0xc(%ebp),%eax
084c1abe +0x185a:  mov    %eax,(%esp)
084c1ac1 +0x185d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c1ac6 +0x1862:  mov    %eax,%ebx
084c1ac8 +0x1864:  lea    -0xc0(%ebp),%eax
084c1ace +0x186a:  mov    %eax,(%esp)
084c1ad1 +0x186d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1ad6 +0x1872:  mov    %ebx,0x4(%esp)
084c1ada +0x1876:  mov    %eax,(%esp)
084c1add +0x1879:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1ae2 +0x187e:  mov    0xc(%ebp),%eax
084c1ae5 +0x1881:  mov    %eax,(%esp)
084c1ae8 +0x1884:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c1aed +0x1889:  mov    %eax,%ebx
084c1aef +0x188b:  lea    -0xc0(%ebp),%eax
084c1af5 +0x1891:  mov    %eax,(%esp)
084c1af8 +0x1894:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1afd +0x1899:  mov    %ebx,0x4(%esp)
084c1b01 +0x189d:  mov    %eax,(%esp)
084c1b04 +0x18a0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084c1b09 +0x18a5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c1b0e +0x18aa:  lea    -0xc0(%ebp),%edx
084c1b14 +0x18b0:  mov    %edx,0x8(%esp)
084c1b18 +0x18b4:  movl   $0x2,0x4(%esp)
084c1b20 +0x18bc:  mov    %eax,(%esp)
084c1b23 +0x18bf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c1b28 +0x18c4:  jmp    084c1b45 <+0x18e1>
084c1b2a +0x18c6:  mov    %edx,%ebx
084c1b2c +0x18c8:  mov    %eax,%esi
084c1b2e +0x18ca:  lea    -0xc0(%ebp),%eax
084c1b34 +0x18d0:  mov    %eax,(%esp)
084c1b37 +0x18d3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1b3c +0x18d8:  mov    %esi,%eax
084c1b3e +0x18da:  mov    %ebx,%edx
084c1b40 +0x18dc:  jmp    084c260d <+0x23a9>
084c1b45 +0x18e1:  lea    -0xc0(%ebp),%eax
084c1b4b +0x18e7:  mov    %eax,(%esp)
084c1b4e +0x18ea:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1b53 +0x18ef:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c1b58 +0x18f4:  mov    %eax,(%esp)
084c1b5b +0x18f7:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084c1b60 +0x18fc:  mov    %eax,(%esp)
084c1b63 +0x18ff:  call   084e997c <_GLOBAL__I__Z7getUserj+0x92e>  ; global constructors keyed to getUser(unsigned int)+0x92e
084c1b68 +0x1904:  xor    $0x1,%eax
084c1b6b +0x1907:  test   %al,%al
084c1b6d +0x1909:  je     084c1bff <+0x199b>
084c1b73 +0x190f:  lea    -0x90(%ebp),%eax
084c1b79 +0x1915:  mov    %eax,(%esp)
084c1b7c +0x1918:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084c1b81 +0x191d:  movl   $0xe1,0x8(%esp)
084c1b89 +0x1925:  movl   $0x0,0x4(%esp)
084c1b91 +0x192d:  lea    -0x90(%ebp),%eax
084c1b97 +0x1933:  mov    %eax,(%esp)
084c1b9a +0x1936:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c1b9f +0x193b:  movl   $0x0,0x4(%esp)
084c1ba7 +0x1943:  lea    -0x90(%ebp),%eax
084c1bad +0x1949:  mov    %eax,(%esp)
084c1bb0 +0x194c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c1bb5 +0x1951:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c1bba +0x1956:  mov    %eax,(%esp)
084c1bbd +0x1959:  call   08179fa6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x24>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x24
084c1bc2 +0x195e:  lea    -0x90(%ebp),%edx
084c1bc8 +0x1964:  mov    %edx,0x4(%esp)
084c1bcc +0x1968:  mov    %eax,(%esp)
084c1bcf +0x196b:  call   085132ca <_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard>  ; CItemLimitEditionMgr::makeItemLimitEditionInfo(PacketGuard&) const
084c1bd4 +0x1970:  movl   $0x1,0x4(%esp)
084c1bdc +0x1978:  lea    -0x90(%ebp),%eax
084c1be2 +0x197e:  mov    %eax,(%esp)
084c1be5 +0x1981:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c1bea +0x1986:  lea    -0x90(%ebp),%eax
084c1bf0 +0x198c:  mov    %eax,0x4(%esp)
084c1bf4 +0x1990:  mov    0xc(%ebp),%eax
084c1bf7 +0x1993:  mov    %eax,(%esp)
084c1bfa +0x1996:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c1bff +0x199b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c1c04 +0x19a0:  movl   $0xf20,0x8(%esp)
084c1c0c +0x19a8:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c1c14 +0x19b0:  mov    %eax,(%esp)
084c1c17 +0x19b3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c1c1c +0x19b8:  movl   $0x1,0x8(%esp)
084c1c24 +0x19c0:  mov    %eax,0x4(%esp)
084c1c28 +0x19c4:  lea    -0xc8(%ebp),%eax
084c1c2e +0x19ca:  mov    %eax,(%esp)
084c1c31 +0x19cd:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c1c36 +0x19d2:  lea    -0xc8(%ebp),%eax
084c1c3c +0x19d8:  mov    %eax,(%esp)
084c1c3f +0x19db:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1c44 +0x19e0:  movl   $0x1a7,0x4(%esp)
084c1c4c +0x19e8:  mov    %eax,(%esp)
084c1c4f +0x19eb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1c54 +0x19f0:  mov    0xc(%ebp),%eax
084c1c57 +0x19f3:  mov    %eax,(%esp)
084c1c5a +0x19f6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c1c5f +0x19fb:  mov    %eax,%ebx
084c1c61 +0x19fd:  lea    -0xc8(%ebp),%eax
084c1c67 +0x1a03:  mov    %eax,(%esp)
084c1c6a +0x1a06:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1c6f +0x1a0b:  mov    %ebx,0x4(%esp)
084c1c73 +0x1a0f:  mov    %eax,(%esp)
084c1c76 +0x1a12:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1c7b +0x1a17:  mov    0xc(%ebp),%eax
084c1c7e +0x1a1a:  mov    %eax,(%esp)
084c1c81 +0x1a1d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c1c86 +0x1a22:  mov    %eax,%ebx
084c1c88 +0x1a24:  lea    -0xc8(%ebp),%eax
084c1c8e +0x1a2a:  mov    %eax,(%esp)
084c1c91 +0x1a2d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1c96 +0x1a32:  mov    %ebx,0x4(%esp)
084c1c9a +0x1a36:  mov    %eax,(%esp)
084c1c9d +0x1a39:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084c1ca2 +0x1a3e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c1ca7 +0x1a43:  lea    -0xc8(%ebp),%edx
084c1cad +0x1a49:  mov    %edx,0x8(%esp)
084c1cb1 +0x1a4d:  movl   $0x2,0x4(%esp)
084c1cb9 +0x1a55:  mov    %eax,(%esp)
084c1cbc +0x1a58:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c1cc1 +0x1a5d:  jmp    084c1cde <+0x1a7a>
084c1cc3 +0x1a5f:  mov    %edx,%ebx
084c1cc5 +0x1a61:  mov    %eax,%esi
084c1cc7 +0x1a63:  lea    -0xc8(%ebp),%eax
084c1ccd +0x1a69:  mov    %eax,(%esp)
084c1cd0 +0x1a6c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1cd5 +0x1a71:  mov    %esi,%eax
084c1cd7 +0x1a73:  mov    %ebx,%edx
084c1cd9 +0x1a75:  jmp    084c260d <+0x23a9>
084c1cde +0x1a7a:  lea    -0xc8(%ebp),%eax
084c1ce4 +0x1a80:  mov    %eax,(%esp)
084c1ce7 +0x1a83:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1cec +0x1a88:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c1cf1 +0x1a8d:  mov    %eax,(%esp)
084c1cf4 +0x1a90:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084c1cf9 +0x1a95:  test   %al,%al
084c1cfb +0x1a97:  je     084c1e16 <+0x1bb2>
084c1d01 +0x1a9d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c1d06 +0x1aa2:  movl   $0xf2a,0x8(%esp)
084c1d0e +0x1aaa:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c1d16 +0x1ab2:  mov    %eax,(%esp)
084c1d19 +0x1ab5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c1d1e +0x1aba:  movl   $0x1,0x8(%esp)
084c1d26 +0x1ac2:  mov    %eax,0x4(%esp)
084c1d2a +0x1ac6:  lea    -0xd0(%ebp),%eax
084c1d30 +0x1acc:  mov    %eax,(%esp)
084c1d33 +0x1acf:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c1d38 +0x1ad4:  lea    -0xd0(%ebp),%eax
084c1d3e +0x1ada:  mov    %eax,(%esp)
084c1d41 +0x1add:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1d46 +0x1ae2:  movl   $0x1d5,0x4(%esp)
084c1d4e +0x1aea:  mov    %eax,(%esp)
084c1d51 +0x1aed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1d56 +0x1af2:  mov    0xc(%ebp),%eax
084c1d59 +0x1af5:  mov    %eax,(%esp)
084c1d5c +0x1af8:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c1d61 +0x1afd:  mov    %eax,%ebx
084c1d63 +0x1aff:  lea    -0xd0(%ebp),%eax
084c1d69 +0x1b05:  mov    %eax,(%esp)
084c1d6c +0x1b08:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1d71 +0x1b0d:  mov    %ebx,0x4(%esp)
084c1d75 +0x1b11:  mov    %eax,(%esp)
084c1d78 +0x1b14:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1d7d +0x1b19:  mov    0xc(%ebp),%eax
084c1d80 +0x1b1c:  mov    %eax,(%esp)
084c1d83 +0x1b1f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c1d88 +0x1b24:  movsbl %al,%ebx
084c1d8b +0x1b27:  lea    -0xd0(%ebp),%eax
084c1d91 +0x1b2d:  mov    %eax,(%esp)
084c1d94 +0x1b30:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1d99 +0x1b35:  mov    %ebx,0x4(%esp)
084c1d9d +0x1b39:  mov    %eax,(%esp)
084c1da0 +0x1b3c:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
084c1da5 +0x1b41:  mov    0xc(%ebp),%eax
084c1da8 +0x1b44:  mov    %eax,(%esp)
084c1dab +0x1b47:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c1db0 +0x1b4c:  mov    %eax,%ebx
084c1db2 +0x1b4e:  lea    -0xd0(%ebp),%eax
084c1db8 +0x1b54:  mov    %eax,(%esp)
084c1dbb +0x1b57:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1dc0 +0x1b5c:  mov    %ebx,0x4(%esp)
084c1dc4 +0x1b60:  mov    %eax,(%esp)
084c1dc7 +0x1b63:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084c1dcc +0x1b68:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c1dd1 +0x1b6d:  lea    -0xd0(%ebp),%edx
084c1dd7 +0x1b73:  mov    %edx,0x8(%esp)
084c1ddb +0x1b77:  movl   $0x2,0x4(%esp)
084c1de3 +0x1b7f:  mov    %eax,(%esp)
084c1de6 +0x1b82:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c1deb +0x1b87:  jmp    084c1e08 <+0x1ba4>
084c1ded +0x1b89:  mov    %edx,%ebx
084c1def +0x1b8b:  mov    %eax,%esi
084c1df1 +0x1b8d:  lea    -0xd0(%ebp),%eax
084c1df7 +0x1b93:  mov    %eax,(%esp)
084c1dfa +0x1b96:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1dff +0x1b9b:  mov    %esi,%eax
084c1e01 +0x1b9d:  mov    %ebx,%edx
084c1e03 +0x1b9f:  jmp    084c260d <+0x23a9>
084c1e08 +0x1ba4:  lea    -0xd0(%ebp),%eax
084c1e0e +0x1baa:  mov    %eax,(%esp)
084c1e11 +0x1bad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1e16 +0x1bb2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c1e1b +0x1bb7:  mov    %eax,(%esp)
084c1e1e +0x1bba:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084c1e23 +0x1bbf:  test   %al,%al
084c1e25 +0x1bc1:  je     084c1f40 <+0x1cdc>
084c1e2b +0x1bc7:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c1e30 +0x1bcc:  movl   $0xf36,0x8(%esp)
084c1e38 +0x1bd4:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c1e40 +0x1bdc:  mov    %eax,(%esp)
084c1e43 +0x1bdf:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c1e48 +0x1be4:  movl   $0x1,0x8(%esp)
084c1e50 +0x1bec:  mov    %eax,0x4(%esp)
084c1e54 +0x1bf0:  lea    -0xd8(%ebp),%eax
084c1e5a +0x1bf6:  mov    %eax,(%esp)
084c1e5d +0x1bf9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c1e62 +0x1bfe:  lea    -0xd8(%ebp),%eax
084c1e68 +0x1c04:  mov    %eax,(%esp)
084c1e6b +0x1c07:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1e70 +0x1c0c:  movl   $0x1e0,0x4(%esp)
084c1e78 +0x1c14:  mov    %eax,(%esp)
084c1e7b +0x1c17:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1e80 +0x1c1c:  mov    0xc(%ebp),%eax
084c1e83 +0x1c1f:  mov    %eax,(%esp)
084c1e86 +0x1c22:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c1e8b +0x1c27:  mov    %eax,%ebx
084c1e8d +0x1c29:  lea    -0xd8(%ebp),%eax
084c1e93 +0x1c2f:  mov    %eax,(%esp)
084c1e96 +0x1c32:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1e9b +0x1c37:  mov    %ebx,0x4(%esp)
084c1e9f +0x1c3b:  mov    %eax,(%esp)
084c1ea2 +0x1c3e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1ea7 +0x1c43:  mov    0xc(%ebp),%eax
084c1eaa +0x1c46:  mov    %eax,(%esp)
084c1ead +0x1c49:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c1eb2 +0x1c4e:  movsbl %al,%ebx
084c1eb5 +0x1c51:  lea    -0xd8(%ebp),%eax
084c1ebb +0x1c57:  mov    %eax,(%esp)
084c1ebe +0x1c5a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1ec3 +0x1c5f:  mov    %ebx,0x4(%esp)
084c1ec7 +0x1c63:  mov    %eax,(%esp)
084c1eca +0x1c66:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
084c1ecf +0x1c6b:  mov    0xc(%ebp),%eax
084c1ed2 +0x1c6e:  mov    %eax,(%esp)
084c1ed5 +0x1c71:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c1eda +0x1c76:  mov    %eax,%ebx
084c1edc +0x1c78:  lea    -0xd8(%ebp),%eax
084c1ee2 +0x1c7e:  mov    %eax,(%esp)
084c1ee5 +0x1c81:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1eea +0x1c86:  mov    %ebx,0x4(%esp)
084c1eee +0x1c8a:  mov    %eax,(%esp)
084c1ef1 +0x1c8d:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084c1ef6 +0x1c92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c1efb +0x1c97:  lea    -0xd8(%ebp),%edx
084c1f01 +0x1c9d:  mov    %edx,0x8(%esp)
084c1f05 +0x1ca1:  movl   $0x2,0x4(%esp)
084c1f0d +0x1ca9:  mov    %eax,(%esp)
084c1f10 +0x1cac:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c1f15 +0x1cb1:  jmp    084c1f32 <+0x1cce>
084c1f17 +0x1cb3:  mov    %edx,%ebx
084c1f19 +0x1cb5:  mov    %eax,%esi
084c1f1b +0x1cb7:  lea    -0xd8(%ebp),%eax
084c1f21 +0x1cbd:  mov    %eax,(%esp)
084c1f24 +0x1cc0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1f29 +0x1cc5:  mov    %esi,%eax
084c1f2b +0x1cc7:  mov    %ebx,%edx
084c1f2d +0x1cc9:  jmp    084c260d <+0x23a9>
084c1f32 +0x1cce:  lea    -0xd8(%ebp),%eax
084c1f38 +0x1cd4:  mov    %eax,(%esp)
084c1f3b +0x1cd7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c1f40 +0x1cdc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c1f45 +0x1ce1:  mov    %eax,(%esp)
084c1f48 +0x1ce4:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c1f4d +0x1ce9:  cmp    $0xe,%eax
084c1f50 +0x1cec:  sete   %al
084c1f53 +0x1cef:  test   %al,%al
084c1f55 +0x1cf1:  je     084c219c <+0x1f38>
084c1f5b +0x1cf7:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
084c1f60 +0x1cfc:  cmp    $0x1,%al
084c1f62 +0x1cfe:  sete   %al
084c1f65 +0x1d01:  test   %al,%al
084c1f67 +0x1d03:  je     084c2087 <+0x1e23>
084c1f6d +0x1d09:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c1f72 +0x1d0e:  movl   $0xf44,0x8(%esp)
084c1f7a +0x1d16:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c1f82 +0x1d1e:  mov    %eax,(%esp)
084c1f85 +0x1d21:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c1f8a +0x1d26:  movl   $0x1,0x8(%esp)
084c1f92 +0x1d2e:  mov    %eax,0x4(%esp)
084c1f96 +0x1d32:  lea    -0xe0(%ebp),%eax
084c1f9c +0x1d38:  mov    %eax,(%esp)
084c1f9f +0x1d3b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c1fa4 +0x1d40:  lea    -0xe0(%ebp),%eax
084c1faa +0x1d46:  mov    %eax,(%esp)
084c1fad +0x1d49:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1fb2 +0x1d4e:  movl   $0x1e6,0x4(%esp)
084c1fba +0x1d56:  mov    %eax,(%esp)
084c1fbd +0x1d59:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1fc2 +0x1d5e:  mov    0xc(%ebp),%eax
084c1fc5 +0x1d61:  mov    %eax,(%esp)
084c1fc8 +0x1d64:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c1fcd +0x1d69:  mov    %eax,%ebx
084c1fcf +0x1d6b:  lea    -0xe0(%ebp),%eax
084c1fd5 +0x1d71:  mov    %eax,(%esp)
084c1fd8 +0x1d74:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c1fdd +0x1d79:  mov    %ebx,0x4(%esp)
084c1fe1 +0x1d7d:  mov    %eax,(%esp)
084c1fe4 +0x1d80:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c1fe9 +0x1d85:  mov    0xc(%ebp),%eax
084c1fec +0x1d88:  mov    %eax,(%esp)
084c1fef +0x1d8b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c1ff4 +0x1d90:  movsbl %al,%ebx
084c1ff7 +0x1d93:  lea    -0xe0(%ebp),%eax
084c1ffd +0x1d99:  mov    %eax,(%esp)
084c2000 +0x1d9c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c2005 +0x1da1:  mov    %ebx,0x4(%esp)
084c2009 +0x1da5:  mov    %eax,(%esp)
084c200c +0x1da8:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
084c2011 +0x1dad:  mov    0xc(%ebp),%eax
084c2014 +0x1db0:  mov    %eax,(%esp)
084c2017 +0x1db3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c201c +0x1db8:  mov    %eax,%ebx
084c201e +0x1dba:  lea    -0xe0(%ebp),%eax
084c2024 +0x1dc0:  mov    %eax,(%esp)
084c2027 +0x1dc3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c202c +0x1dc8:  mov    %ebx,0x4(%esp)
084c2030 +0x1dcc:  mov    %eax,(%esp)
084c2033 +0x1dcf:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084c2038 +0x1dd4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c203d +0x1dd9:  lea    -0xe0(%ebp),%edx
084c2043 +0x1ddf:  mov    %edx,0x8(%esp)
084c2047 +0x1de3:  movl   $0x2,0x4(%esp)
084c204f +0x1deb:  mov    %eax,(%esp)
084c2052 +0x1dee:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c2057 +0x1df3:  jmp    084c2074 <+0x1e10>
084c2059 +0x1df5:  mov    %edx,%ebx
084c205b +0x1df7:  mov    %eax,%esi
084c205d +0x1df9:  lea    -0xe0(%ebp),%eax
084c2063 +0x1dff:  mov    %eax,(%esp)
084c2066 +0x1e02:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c206b +0x1e07:  mov    %esi,%eax
084c206d +0x1e09:  mov    %ebx,%edx
084c206f +0x1e0b:  jmp    084c260d <+0x23a9>
084c2074 +0x1e10:  lea    -0xe0(%ebp),%eax
084c207a +0x1e16:  mov    %eax,(%esp)
084c207d +0x1e19:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c2082 +0x1e1e:  jmp    084c219c <+0x1f38>
084c2087 +0x1e23:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c208c +0x1e28:  movl   $0xf4d,0x8(%esp)
084c2094 +0x1e30:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c209c +0x1e38:  mov    %eax,(%esp)
084c209f +0x1e3b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c20a4 +0x1e40:  movl   $0x1,0x8(%esp)
084c20ac +0x1e48:  mov    %eax,0x4(%esp)
084c20b0 +0x1e4c:  lea    -0xe8(%ebp),%eax
084c20b6 +0x1e52:  mov    %eax,(%esp)
084c20b9 +0x1e55:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c20be +0x1e5a:  lea    -0xe8(%ebp),%eax
084c20c4 +0x1e60:  mov    %eax,(%esp)
084c20c7 +0x1e63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c20cc +0x1e68:  movl   $0x1e8,0x4(%esp)
084c20d4 +0x1e70:  mov    %eax,(%esp)
084c20d7 +0x1e73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c20dc +0x1e78:  mov    0xc(%ebp),%eax
084c20df +0x1e7b:  mov    %eax,(%esp)
084c20e2 +0x1e7e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c20e7 +0x1e83:  mov    %eax,%ebx
084c20e9 +0x1e85:  lea    -0xe8(%ebp),%eax
084c20ef +0x1e8b:  mov    %eax,(%esp)
084c20f2 +0x1e8e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c20f7 +0x1e93:  mov    %ebx,0x4(%esp)
084c20fb +0x1e97:  mov    %eax,(%esp)
084c20fe +0x1e9a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c2103 +0x1e9f:  mov    0xc(%ebp),%eax
084c2106 +0x1ea2:  mov    %eax,(%esp)
084c2109 +0x1ea5:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c210e +0x1eaa:  movsbl %al,%ebx
084c2111 +0x1ead:  lea    -0xe8(%ebp),%eax
084c2117 +0x1eb3:  mov    %eax,(%esp)
084c211a +0x1eb6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c211f +0x1ebb:  mov    %ebx,0x4(%esp)
084c2123 +0x1ebf:  mov    %eax,(%esp)
084c2126 +0x1ec2:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
084c212b +0x1ec7:  mov    0xc(%ebp),%eax
084c212e +0x1eca:  mov    %eax,(%esp)
084c2131 +0x1ecd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c2136 +0x1ed2:  mov    %eax,%ebx
084c2138 +0x1ed4:  lea    -0xe8(%ebp),%eax
084c213e +0x1eda:  mov    %eax,(%esp)
084c2141 +0x1edd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c2146 +0x1ee2:  mov    %ebx,0x4(%esp)
084c214a +0x1ee6:  mov    %eax,(%esp)
084c214d +0x1ee9:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084c2152 +0x1eee:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c2157 +0x1ef3:  lea    -0xe8(%ebp),%edx
084c215d +0x1ef9:  mov    %edx,0x8(%esp)
084c2161 +0x1efd:  movl   $0x2,0x4(%esp)
084c2169 +0x1f05:  mov    %eax,(%esp)
084c216c +0x1f08:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c2171 +0x1f0d:  jmp    084c218e <+0x1f2a>
084c2173 +0x1f0f:  mov    %edx,%ebx
084c2175 +0x1f11:  mov    %eax,%esi
084c2177 +0x1f13:  lea    -0xe8(%ebp),%eax
084c217d +0x1f19:  mov    %eax,(%esp)
084c2180 +0x1f1c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c2185 +0x1f21:  mov    %esi,%eax
084c2187 +0x1f23:  mov    %ebx,%edx
084c2189 +0x1f25:  jmp    084c260d <+0x23a9>
084c218e +0x1f2a:  lea    -0xe8(%ebp),%eax
084c2194 +0x1f30:  mov    %eax,(%esp)
084c2197 +0x1f33:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c219c +0x1f38:  mov    0xc(%ebp),%eax
084c219f +0x1f3b:  mov    %eax,(%esp)
084c21a2 +0x1f3e:  call   086624f8 <_ZN5CUser15send_RedeemInfoEv>  ; CUser::send_RedeemInfo()
084c21a7 +0x1f43:  cmpl   $0x0,0xc(%ebp)
084c21ab +0x1f47:  je     084c21c1 <+0x1f5d>
084c21ad +0x1f49:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
084c21b2 +0x1f4e:  mov    0xc(%ebp),%edx
084c21b5 +0x1f51:  mov    %edx,0x4(%esp)
084c21b9 +0x1f55:  mov    %eax,(%esp)
084c21bc +0x1f58:  call   08125cb8 <_ZN21CDailyScheduleManager29CheckAndSendToOneUserScheduleER5CUser>  ; CDailyScheduleManager::CheckAndSendToOneUserSchedule(CUser&)
084c21c1 +0x1f5d:  mov    0xc(%ebp),%eax
084c21c4 +0x1f60:  mov    %eax,(%esp)
084c21c7 +0x1f63:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
084c21cc +0x1f68:  mov    0xc(%ebp),%eax
084c21cf +0x1f6b:  mov    %eax,(%esp)
084c21d2 +0x1f6e:  call   08691ec4 <_ZN5CUser17processReturnUserEv>  ; CUser::processReturnUser()
084c21d7 +0x1f73:  mov    0xc(%ebp),%eax
084c21da +0x1f76:  mov    %eax,(%esp)
084c21dd +0x1f79:  call   08122398 <_ZN8APSystem9CUserProc19SendActionListStateEP5CUser>  ; APSystem::CUserProc::SendActionListState(CUser*)
084c21e2 +0x1f7e:  mov    -0x60(%ebp),%eax
084c21e5 +0x1f81:  movzbl 0xc9ae(%eax),%eax
084c21ec +0x1f88:  movzbl %al,%eax
084c21ef +0x1f8b:  mov    %eax,0x4(%esp)
084c21f3 +0x1f8f:  mov    0xc(%ebp),%eax
084c21f6 +0x1f92:  mov    %eax,(%esp)
084c21f9 +0x1f95:  call   084ed016 <_GLOBAL__I__Z7getUserj+0x3fc8>  ; global constructors keyed to getUser(unsigned int)+0x3fc8
084c21fe +0x1f9a:  mov    0xc(%ebp),%eax
084c2201 +0x1f9d:  mov    %eax,(%esp)
084c2204 +0x1fa0:  call   0868b552 <_ZN5CUser25VerifyPresentAvengerTitleEv>  ; CUser::VerifyPresentAvengerTitle()
084c2209 +0x1fa5:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c2210 +0x1fac:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c2215 +0x1fb1:  mov    %eax,%ebx
084c2217 +0x1fb3:  lea    -0x62(%ebp),%eax
084c221a +0x1fb6:  mov    %eax,(%esp)
084c221d +0x1fb9:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084c2222 +0x1fbe:  lea    -0x62(%ebp),%eax
084c2225 +0x1fc1:  mov    %eax,0x8(%esp)
084c2229 +0x1fc5:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
084c2231 +0x1fcd:  lea    -0x68(%ebp),%eax
084c2234 +0x1fd0:  mov    %eax,(%esp)
084c2237 +0x1fd3:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084c223c +0x1fd8:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
084c2241 +0x1fdd:  lea    -0x68(%ebp),%edx
084c2244 +0x1fe0:  mov    %edx,0x4(%esp)
084c2248 +0x1fe4:  mov    %eax,(%esp)
084c224b +0x1fe7:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
084c2250 +0x1fec:  mov    %ebx,0x8(%esp)
084c2254 +0x1ff0:  movl   $0x8e,0x4(%esp)
084c225c +0x1ff8:  mov    %eax,(%esp)
084c225f +0x1ffb:  call   081956b0 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj>  ; ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int)
084c2264 +0x2000:  mov    %eax,%ebx
084c2266 +0x2002:  lea    -0x68(%ebp),%eax
084c2269 +0x2005:  mov    %eax,(%esp)
084c226c +0x2008:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c2271 +0x200d:  jmp    084c22a0 <+0x203c>
084c2273 +0x200f:  mov    %edx,%ebx
084c2275 +0x2011:  mov    %eax,%esi
084c2277 +0x2013:  lea    -0x68(%ebp),%eax
084c227a +0x2016:  mov    %eax,(%esp)
084c227d +0x2019:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084c2282 +0x201e:  mov    %esi,%eax
084c2284 +0x2020:  mov    %ebx,%edx
084c2286 +0x2022:  jmp    084c2288 <+0x2024>
084c2288 +0x2024:  mov    %edx,%ebx
084c228a +0x2026:  mov    %eax,%esi
084c228c +0x2028:  lea    -0x62(%ebp),%eax
084c228f +0x202b:  mov    %eax,(%esp)
084c2292 +0x202e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c2297 +0x2033:  mov    %esi,%eax
084c2299 +0x2035:  mov    %ebx,%edx
084c229b +0x2037:  jmp    084c260d <+0x23a9>
084c22a0 +0x203c:  lea    -0x62(%ebp),%eax
084c22a3 +0x203f:  mov    %eax,(%esp)
084c22a6 +0x2042:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084c22ab +0x2047:  test   %bl,%bl
084c22ad +0x2049:  je     084c22e2 <+0x207e>
084c22af +0x204b:  lea    -0xf4(%ebp),%eax
084c22b5 +0x2051:  mov    %eax,(%esp)
084c22b8 +0x2054:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
084c22bd +0x2059:  lea    -0xf4(%ebp),%eax
084c22c3 +0x205f:  mov    %eax,0xc(%esp)
084c22c7 +0x2063:  movl   $0x8e,0x8(%esp)
084c22cf +0x206b:  movl   $0x0,0x4(%esp)
084c22d7 +0x2073:  mov    0xc(%ebp),%eax
084c22da +0x2076:  mov    %eax,(%esp)
084c22dd +0x2079:  call   081978dd <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage>  ; ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&)
084c22e2 +0x207e:  mov    0xc(%ebp),%eax
084c22e5 +0x2081:  mov    %eax,0x4(%esp)
084c22e9 +0x2085:  mov    0x8(%ebp),%eax
084c22ec +0x2088:  mov    %eax,(%esp)
084c22ef +0x208b:  call   084c266e <_ZN13Inter_LoadEtc18RequestDBEventAradEP5CUser>  ; Inter_LoadEtc::RequestDBEventArad(CUser*)
084c22f4 +0x2090:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c22f9 +0x2095:  mov    %eax,(%esp)
084c22fc +0x2098:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084c2301 +0x209d:  mov    -0x60(%ebp),%edx
084c2304 +0x20a0:  mov    0xc9bc(%edx),%edx
084c230a +0x20a6:  mov    %edx,0xc(%esp)
084c230e +0x20aa:  mov    0xc(%ebp),%edx
084c2311 +0x20ad:  mov    %edx,0x8(%esp)
084c2315 +0x20b1:  movl   $0x191,0x4(%esp)
084c231d +0x20b9:  mov    %eax,(%esp)
084c2320 +0x20bc:  call   0810bde0 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE>  ; EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>)
084c2325 +0x20c1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c232a +0x20c6:  mov    %eax,(%esp)
084c232d +0x20c9:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084c2332 +0x20ce:  mov    -0x60(%ebp),%edx
084c2335 +0x20d1:  mov    0xc9bc(%edx),%edx
084c233b +0x20d7:  mov    %edx,0xc(%esp)
084c233f +0x20db:  mov    0xc(%ebp),%edx
084c2342 +0x20de:  mov    %edx,0x8(%esp)
084c2346 +0x20e2:  movl   $0x192,0x4(%esp)
084c234e +0x20ea:  mov    %eax,(%esp)
084c2351 +0x20ed:  call   0810bde0 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE>  ; EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>)
084c2356 +0x20f2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c235b +0x20f7:  mov    %eax,(%esp)
084c235e +0x20fa:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084c2363 +0x20ff:  mov    -0x60(%ebp),%edx
084c2366 +0x2102:  mov    0xc9bc(%edx),%edx
084c236c +0x2108:  mov    %edx,0xc(%esp)
084c2370 +0x210c:  mov    0xc(%ebp),%edx
084c2373 +0x210f:  mov    %edx,0x8(%esp)
084c2377 +0x2113:  movl   $0x19c,0x4(%esp)
084c237f +0x211b:  mov    %eax,(%esp)
084c2382 +0x211e:  call   0810bde0 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE>  ; EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>)
084c2387 +0x2123:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c238c +0x2128:  mov    0x8cbc(%eax),%eax
084c2392 +0x212e:  mov    %eax,(%esp)
084c2395 +0x2131:  call   08513076 <_ZNK9CItemShop18GetOneADayItemListEv>  ; CItemShop::GetOneADayItemList() const
084c239a +0x2136:  mov    %eax,0x4(%esp)
084c239e +0x213a:  mov    0xc(%ebp),%eax
084c23a1 +0x213d:  mov    %eax,(%esp)
084c23a4 +0x2140:  call   0868aaea <_ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::SendOneADayItemShopIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
084c23a9 +0x2145:  mov    0xc(%ebp),%eax
084c23ac +0x2148:  mov    %eax,(%esp)
084c23af +0x214b:  call   084ebede <_GLOBAL__I__Z7getUserj+0x2e90>  ; global constructors keyed to getUser(unsigned int)+0x2e90
084c23b4 +0x2150:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c23b9 +0x2155:  mov    %eax,(%esp)
084c23bc +0x2158:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084c23c1 +0x215d:  movl   $0x0,0x8(%esp)
084c23c9 +0x2165:  mov    0xc(%ebp),%edx
084c23cc +0x2168:  mov    %edx,0x4(%esp)
084c23d0 +0x216c:  mov    %eax,(%esp)
084c23d3 +0x216f:  call   0810c40e <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb>  ; EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool)
084c23d8 +0x2174:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c23dd +0x2179:  mov    %eax,(%esp)
084c23e0 +0x217c:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084c23e5 +0x2181:  mov    0xc(%ebp),%edx
084c23e8 +0x2184:  mov    %edx,0x4(%esp)
084c23ec +0x2188:  mov    %eax,(%esp)
084c23ef +0x218b:  call   0810cb2c <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser>  ; EventClassify::CEventScriptMng::send_event_init_record_data(CUser*)
084c23f4 +0x2190:  mov    -0x60(%ebp),%eax
084c23f7 +0x2193:  movzbl 0xc9b7(%eax),%eax
084c23fe +0x219a:  movzbl %al,%esi
084c2401 +0x219d:  mov    -0x60(%ebp),%eax
084c2404 +0x21a0:  mov    0xc9b3(%eax),%ebx
084c240a +0x21a6:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c2411 +0x21ad:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c2416 +0x21b2:  mov    %esi,0xc(%esp)
084c241a +0x21b6:  mov    %ebx,0x8(%esp)
084c241e +0x21ba:  mov    %eax,0x4(%esp)
084c2422 +0x21be:  mov    0xc(%ebp),%eax
084c2425 +0x21c1:  mov    %eax,(%esp)
084c2428 +0x21c4:  call   0868f808 <_ZN5CUser21setPcRoomPlayTimeDataEjjh>  ; CUser::setPcRoomPlayTimeData(unsigned int, unsigned int, unsigned char)
084c242d +0x21c9:  mov    -0x60(%ebp),%eax
084c2430 +0x21cc:  lea    0xd730(%eax),%edx
084c2436 +0x21d2:  mov    0xc(%ebp),%eax
084c2439 +0x21d5:  mov    %edx,0x4(%esp)
084c243d +0x21d9:  mov    %eax,(%esp)
084c2440 +0x21dc:  call   084ec4c0 <_GLOBAL__I__Z7getUserj+0x3472>  ; global constructors keyed to getUser(unsigned int)+0x3472
084c2445 +0x21e1:  mov    0xc(%ebp),%eax
084c2448 +0x21e4:  mov    %eax,(%esp)
084c244b +0x21e7:  call   0868dea4 <_ZN5CUser23send_aura_avatar_optionEv>  ; CUser::send_aura_avatar_option()
084c2450 +0x21ec:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
084c2455 +0x21f1:  mov    0xc(%ebp),%edx
084c2458 +0x21f4:  mov    %edx,0x4(%esp)
084c245c +0x21f8:  mov    %eax,(%esp)
084c245f +0x21fb:  call   081a9500 <_ZN4ARAD23Arad_ServerStateManager9sendStateEP5CUser>  ; ARAD::Arad_ServerStateManager::sendState(CUser*)
084c2464 +0x2200:  mov    -0x60(%ebp),%eax
084c2467 +0x2203:  lea    0xeac8(%eax),%edx
084c246d +0x2209:  mov    0xc(%ebp),%eax
084c2470 +0x220c:  mov    %edx,0x4(%esp)
084c2474 +0x2210:  mov    %eax,(%esp)
084c2477 +0x2213:  call   084ec4f2 <_GLOBAL__I__Z7getUserj+0x34a4>  ; global constructors keyed to getUser(unsigned int)+0x34a4
084c247c +0x2218:  mov    0xc(%ebp),%eax
084c247f +0x221b:  mov    %eax,(%esp)
084c2482 +0x221e:  call   0868f0e8 <_ZN5CUser16sendCharacOptionEv>  ; CUser::sendCharacOption()
084c2487 +0x2223:  mov    -0x60(%ebp),%eax
084c248a +0x2226:  mov    0xc(%eax),%eax
084c248d +0x2229:  test   %eax,%eax
084c248f +0x222b:  je     084c249c <+0x2238>
084c2491 +0x222d:  mov    0xc(%ebp),%eax
084c2494 +0x2230:  mov    %eax,(%esp)
084c2497 +0x2233:  call   086903f8 <_ZN5CUser17SendTagCharacInfoEv>  ; CUser::SendTagCharacInfo()
084c249c +0x2238:  mov    0xc(%ebp),%eax
084c249f +0x223b:  mov    %eax,(%esp)
084c24a2 +0x223e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c24a7 +0x2243:  movb   $0x0,0x14bc(%eax)
084c24ae +0x224a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c24b3 +0x224f:  mov    %eax,(%esp)
084c24b6 +0x2252:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
084c24bb +0x2257:  mov    0xc(%ebp),%edx
084c24be +0x225a:  mov    %edx,0x4(%esp)
084c24c2 +0x225e:  mov    %eax,(%esp)
084c24c5 +0x2261:  call   080ebf2e <_ZN20CraneMinigameManager25SendCraneItemNeedMaterialEP5CUser>  ; CraneMinigameManager::SendCraneItemNeedMaterial(CUser*)
084c24ca +0x2266:  mov    -0x60(%ebp),%eax
084c24cd +0x2269:  lea    &_ZL14gUnicodeBuffer+0xa56d(%eax),%edx
084c24d3 +0x226f:  mov    0xc(%ebp),%eax
084c24d6 +0x2272:  mov    %eax,0x8(%esp)
084c24da +0x2276:  mov    %edx,0x4(%esp)
084c24de +0x227a:  mov    0x8(%ebp),%eax
084c24e1 +0x227d:  mov    %eax,(%esp)
084c24e4 +0x2280:  call   084e807e <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser>  ; Inter_LoadEtc::processAttendAnceEvent(SIG_ATTENDANCE_EVENT*, CUser&)
084c24e9 +0x2285:  mov    0xc(%ebp),%eax
084c24ec +0x2288:  mov    %eax,(%esp)
084c24ef +0x228b:  call   086910b2 <_ZN5CUser17SendMaxEquipLevelEv>  ; CUser::SendMaxEquipLevel()
084c24f4 +0x2290:  mov    0xc(%ebp),%eax
084c24f7 +0x2293:  mov    %eax,0x4(%esp)
084c24fb +0x2297:  mov    0x8(%ebp),%eax
084c24fe +0x229a:  mov    %eax,(%esp)
084c2501 +0x229d:  call   084e834a <_ZN13Inter_LoadEtc24processGrowthWeaponEventER5CUser>  ; Inter_LoadEtc::processGrowthWeaponEvent(CUser&)
084c2506 +0x22a2:  mov    0xc(%ebp),%eax
084c2509 +0x22a5:  mov    %eax,0x4(%esp)
084c250d +0x22a9:  mov    0x8(%ebp),%eax
084c2510 +0x22ac:  mov    %eax,(%esp)
084c2513 +0x22af:  call   084e83c2 <_ZN13Inter_LoadEtc26processGrowthCreatureEventER5CUser>  ; Inter_LoadEtc::processGrowthCreatureEvent(CUser&)
084c2518 +0x22b4:  mov    0xc(%ebp),%eax
084c251b +0x22b7:  mov    %eax,(%esp)
084c251e +0x22ba:  call   08691470 <_ZN5CUser16sendBingoAddDataEv>  ; CUser::sendBingoAddData()
084c2523 +0x22bf:  mov    0xc(%ebp),%eax
084c2526 +0x22c2:  mov    %eax,(%esp)
084c2529 +0x22c5:  call   086467ee <_ZN5CUser34requestCubePremiumInfoIfContractedEv>  ; CUser::requestCubePremiumInfoIfContracted()
084c252e +0x22ca:  mov    0xc(%ebp),%eax
084c2531 +0x22cd:  mov    %eax,(%esp)
084c2534 +0x22d0:  call   080e0d90 <_ZN19CerashopAddRestrict7Manager26LoadRequestBuyRestrictItemEP5CUser>  ; CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser*)
084c2539 +0x22d5:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084c253e +0x22da:  movl   $0x9e,0x4(%esp)
084c2546 +0x22e2:  mov    %eax,(%esp)
084c2549 +0x22e5:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084c254e +0x22ea:  mov    (%eax),%edx
084c2550 +0x22ec:  add    $0x34,%edx
084c2553 +0x22ef:  mov    (%edx),%edx
084c2555 +0x22f1:  movl   $0x0,0x4(%esp)
084c255d +0x22f9:  mov    %eax,(%esp)
084c2560 +0x22fc:  call   *%edx
084c2562 +0x22fe:  test   %al,%al
084c2564 +0x2300:  je     084c258a <+0x2326>
084c2566 +0x2302:  mov    0xc(%ebp),%eax
084c2569 +0x2305:  mov    %eax,(%esp)
084c256c +0x2308:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c2571 +0x230d:  mov    %eax,%ebx
084c2573 +0x230f:  mov    0xc(%ebp),%eax
084c2576 +0x2312:  mov    %eax,(%esp)
084c2579 +0x2315:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c257e +0x231a:  mov    %ebx,0x4(%esp)
084c2582 +0x231e:  mov    %eax,(%esp)
084c2585 +0x2321:  call   0844d0a6 <_ZN26DB_LoadEventLevelupSupport11makeRequestEii>  ; DB_LoadEventLevelupSupport::makeRequest(int, int)
084c258a +0x2326:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
084c258f +0x232b:  mov    0xc(%ebp),%edx
084c2592 +0x232e:  mov    %edx,0x4(%esp)
084c2596 +0x2332:  mov    %eax,(%esp)
084c2599 +0x2335:  call   0816709e <_ZN16HeroMissionEvent13loadEventDataEP5CUser>  ; HeroMissionEvent::loadEventData(CUser*)
084c259e +0x233a:  mov    0xc(%ebp),%eax
084c25a1 +0x233d:  mov    %eax,(%esp)
084c25a4 +0x2340:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
084c25a9 +0x2345:  mov    %eax,(%esp)
084c25ac +0x2348:  call   08173008 <_ZN6Taiwan14GarenaAuthData10getGcaTypeEv>  ; Taiwan::GarenaAuthData::getGcaType()
084c25b1 +0x234d:  movzwl %ax,%eax
084c25b4 +0x2350:  mov    %eax,(%esp)
084c25b7 +0x2353:  call   0817305a <_ZN6Taiwan15GarenaCyberCafeEt>  ; Taiwan::GarenaCyberCafe(unsigned short)
084c25bc +0x2358:  test   %al,%al
084c25be +0x235a:  je     084c25cb <+0x2367>
084c25c0 +0x235c:  mov    0xc(%ebp),%eax
084c25c3 +0x235f:  mov    %eax,(%esp)
084c25c6 +0x2362:  call   08471c74 <_ZN6Taiwan16GarenaAuthPCRoomEP5CUser>  ; Taiwan::GarenaAuthPCRoom(CUser*)
084c25cb +0x2367:  mov    0xc(%ebp),%eax
084c25ce +0x236a:  mov    %eax,(%esp)
084c25d1 +0x236d:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
084c25d6 +0x2372:  mov    %eax,(%esp)
084c25d9 +0x2375:  call   08173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>  ; Taiwan::GarenaAuthData::getMobileAuth()
084c25de +0x237a:  test   %al,%al
084c25e0 +0x237c:  je     084c25ed <+0x2389>
084c25e2 +0x237e:  mov    0xc(%ebp),%eax
084c25e5 +0x2381:  mov    %eax,(%esp)
084c25e8 +0x2384:  call   0815c586 <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser>  ; DBSelectMobileAuthRewardTw::makeRequest(CUser*)
084c25ed +0x2389:  mov    0xc(%ebp),%eax
084c25f0 +0x238c:  mov    %eax,(%esp)
084c25f3 +0x238f:  call   0864a9da <_ZN5CUser15unlock4DataLoadEv>  ; CUser::unlock4DataLoad()
084c25f8 +0x2394:  xor    $0x1,%eax
084c25fb +0x2397:  test   %al,%al
084c25fd +0x2399:  je     084c2606 <+0x23a2>
084c25ff +0x239b:  mov    $0x1139,%ebx
084c2604 +0x23a0:  jmp    084c2625 <+0x23c1>
084c2606 +0x23a2:  mov    $0x0,%ebx
084c260b +0x23a7:  jmp    084c2625 <+0x23c1>
084c260d +0x23a9:  mov    %edx,%ebx
084c260f +0x23ab:  mov    %eax,%esi
084c2611 +0x23ad:  lea    -0x128(%ebp),%eax
084c2617 +0x23b3:  mov    %eax,(%esp)
084c261a +0x23b6:  call   084efc92 <_GLOBAL__I__Z7getUserj+0x6c44>  ; global constructors keyed to getUser(unsigned int)+0x6c44
084c261f +0x23bb:  mov    %esi,%eax
084c2621 +0x23bd:  mov    %ebx,%edx
084c2623 +0x23bf:  jmp    084c2635 <+0x23d1>
084c2625 +0x23c1:  lea    -0x128(%ebp),%eax
084c262b +0x23c7:  mov    %eax,(%esp)
084c262e +0x23ca:  call   084efc92 <_GLOBAL__I__Z7getUserj+0x6c44>  ; global constructors keyed to getUser(unsigned int)+0x6c44
084c2633 +0x23cf:  jmp    084c2653 <+0x23ef>
084c2635 +0x23d1:  mov    %edx,%ebx
084c2637 +0x23d3:  mov    %eax,%esi
084c2639 +0x23d5:  lea    -0x90(%ebp),%eax
084c263f +0x23db:  mov    %eax,(%esp)
084c2642 +0x23de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c2647 +0x23e3:  mov    %esi,%eax
084c2649 +0x23e5:  mov    %ebx,%edx
084c264b +0x23e7:  mov    %eax,(%esp)
084c264e +0x23ea:  call   08ae3750 <_Unwind_Resume>
084c2653 +0x23ef:  lea    -0x90(%ebp),%eax
084c2659 +0x23f5:  mov    %eax,(%esp)
084c265c +0x23f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c2661 +0x23fd:  mov    %ebx,%eax
084c2663 +0x23ff:  lea    -0xc(%ebp),%esp
084c2666 +0x2402:  add    $0x0,%esp
084c2669 +0x2405:  pop    %ebx
084c266a +0x2406:  pop    %esi
084c266b +0x2407:  pop    %edi
084c266c +0x2408:  pop    %ebp
084c266d +0x2409:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::dispatch_sig @ 0x84c0264

/* Inter_LoadEtc::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadEtc::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  SIG_LOAD_ETC SVar1;
  undefined4 uVar2;
  char cVar3;
  uchar uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  CDataManager *pCVar10;
  CUserPremium *this;
  int *piVar11;
  SIG_LOAD_ETC *pSVar12;
  SIG_LOAD_ETC *pSVar13;
  SkillSlot *pSVar14;
  CAchievement *this_00;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  GameWorld *pGVar20;
  int iVar21;
  CItemLock *pCVar22;
  vector *pvVar23;
  CTitleBook *this_01;
  CGameManager *pCVar24;
  CUser *pCVar25;
  CHackAnalyzer *pCVar26;
  CPad *this_02;
  CAutoMarketConditionsControl *this_03;
  Stream *pSVar27;
  CStreamGuard *pCVar28;
  CItemLimitEditionMgr *pCVar29;
  Arad_DataManager *this_04;
  Arad_EventPeriodDataManager *pAVar30;
  CEventScriptMng *pCVar31;
  uint uVar32;
  CraneMinigameManager *this_05;
  HeroMissionEvent *this_06;
  GarenaAuthData *pGVar33;
  undefined4 uVar34;
  CSkillTreeParam local_12c [52];
  AradServerStateMessage local_f8 [12];
  CStreamGuard local_ec [8];
  CStreamGuard local_e4 [8];
  CStreamGuard local_dc [8];
  CStreamGuard local_d4 [8];
  CStreamGuard local_cc [8];
  CStreamGuard local_c4 [8];
  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_bc [4];
  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_b8 [4];
  char local_b4 [32];
  PacketGuard local_94 [12];
  cMyTrace local_88 [16];
  __normal_iterator local_78 [4];
  __normal_iterator local_74 [4];
  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_70 [4];
  string local_6c [6];
  allocator<char> local_66;
  char local_65;
  SIG_LOAD_ETC *local_64;
  int local_60;
  char local_5b;
  char local_5a;
  char local_59;
  CSharedServerMessageManager *local_58;
  undefined4 local_54;
  int local_50;
  CCoinRefillEvent *local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int local_28;
  SIG_LOAD_ETC *local_24;
  int local_20;
  
  iVar9 = CUser::get_state((CUser *)param_2);
  if (iVar9 == 0) {
    return 0xa7b;
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar9 == 0) {
    return 0xa7f;
  }
  local_64 = (SIG_LOAD_ETC *)param_3;
  if (*(int *)(param_3 + 8) == 1) {
    return 0xa96;
  }
  iVar9 = *(int *)(param_3 + 0x354);
  pCVar10 = (CDataManager *)G_CDataManager();
  cVar3 = CDataManager::IsAvailablePvPChannel(pCVar10,iVar9);
  if (cVar3 != '\x01') {
    LogManager::logFormat
              (1,"InterDispatcher.cpp","virtual int Inter_LoadEtc::dispatch_sig(CUser*, char*, int)"
               ,0xa9b,"Inter_LoadEtc::dispatch_sig pvp_grade = %d",*(undefined4 *)(local_64 + 0x354)
              );
    return 0xa9c;
  }
  PacketGuard::PacketGuard(local_94);
                    /* try { // try from 084c034d to 084c0998 has its CatchHandler @ 084c2635 */
  local_65 = SetPvpRecord((Inter_LoadEtc *)param_1,(CUser *)param_2,local_64);
  if (local_65 != '\x01') {
    uVar34 = 0xaa2;
    goto LAB_084c2653;
  }
  local_65 = SetRankRecord((Inter_LoadEtc *)param_1,(CUser *)param_2,local_64);
  if (local_65 != '\x01') {
    uVar34 = 0xaa5;
    goto LAB_084c2653;
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  uVar34 = *(undefined4 *)(iVar9 + 0x7b);
  uVar2 = *(undefined4 *)(local_64 + 4);
  cMyTrace::cMyTrace(local_88,"virtual int Inter_LoadEtc::dispatch_sig(CUser*, char*, int)",0xac5,0)
  ;
  cMyTrace::operator()(local_88,"CharLastPlayTick char(%d) t(%d)",uVar2,uVar34);
  CUser::ProcPremiumFatigue((CUser *)param_2);
  this = (CUserPremium *)CUser::GetPremiumInfo((CUser *)param_2);
  WongWork::CUserPremium::RecalcAdditionalInfo(this,(CUser *)param_2);
  local_65 = SetFatigue((Inter_LoadEtc *)param_1,(CUser *)param_2);
  if (local_65 != '\x01') {
    uVar34 = 0xacf;
    goto LAB_084c2653;
  }
  verifyCharacVillage((Inter_LoadEtc *)param_1,(CUser *)param_2);
  local_65 = SendResult((Inter_LoadEtc *)param_1,(CUser *)param_2);
  if (local_65 != '\x01') {
    uVar34 = 0xae6;
    goto LAB_084c2653;
  }
  CUser::SendRestrictedGoods((CUser *)param_2,false,0);
  CUser::LoadCoolTimeItemInfo((CUser *)param_2,(CONTINUOUS_ITEM_INFO *)(local_64 + 0x230c));
  CUser::LoadEffectItemInfo((CUser *)param_2,(CONTINUOUS_ITEM_INFO *)(local_64 + 0x24a4));
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,6);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0x40ce);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,8);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xcdd5);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xd);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd718);
  local_60 = CUser::get_charac_idx((CUser *)param_2,*(uint *)(local_64 + 0xc));
  if (((*(int *)(local_64 + 0xc) != 0) && (local_60 != -1)) &&
     (iVar9 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)param_2), iVar9 != 0)) {
    pSVar12 = local_64 + 0x1a8;
    pSVar13 = local_64 + 0x10;
    pSVar14 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillW((CUserCharacInfo *)param_2);
    SkillSlot::set_skill_slot(pSVar14,(char *)pSVar13,(char *)pSVar12,0x198);
  }
  if (local_60 == -1) {
    local_64[0xd6fb] = (SIG_LOAD_ETC)0x0;
  }
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xb);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd5a7);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,10);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd6fc);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x10);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd73c);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xe);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0x466a);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xf);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xb1a4);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x11);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xecc8);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x12);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xecd0);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x13);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0x14a9a);
  if (*(int *)(local_64 + 0xc9a8) == 0) {
    this_00 = (CAchievement *)CUser::GetCharacExpandData((CUser *)param_2,0xf);
    CAchievement::adjust(this_00);
  }
  iVar9 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(param_2 + 0xe0));
  if (iVar9 == 0) {
    iVar15 = CUser::GetServerGroup((CUser *)param_2);
    uVar4 = CUser::GetLogInOutState((CUser *)param_2);
    iVar9 = G_CEnvironment();
    iVar9 = *(int *)(iVar9 + 0x1b0);
    uVar16 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_2 + 0xe0));
    pcVar17 = (char *)CNetwork<4096,450000>::GetPeerIP2
                                ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_b4 + 0x10,0x10);
    pcVar18 = (char *)CUser::getWebAddress((CUser *)param_2);
    cUserHistoryLog::Login
              ((cUserHistoryLog *)(param_2 + 0x79700),pcVar18,pcVar17,uVar16 & 0xffff,iVar9,uVar4,
               iVar15);
  }
  else {
    local_b4[0] = '\0';
    local_b4[1] = '\0';
    local_b4[2] = '\0';
    local_b4[3] = '\0';
    local_b4[4] = '\0';
    local_b4[5] = '\0';
    local_b4[6] = '\0';
    local_b4[7] = '\0';
    local_b4[8] = '\0';
    local_b4[9] = '\0';
    local_b4[10] = '\0';
    local_b4[0xb] = '\0';
    local_b4[0xc] = '\0';
    local_b4[0xd] = '\0';
    local_b4[0xe] = '\0';
    local_b4[0xf] = '\0';
    iVar15 = CUser::GetServerGroup((CUser *)param_2);
    uVar4 = CUser::GetLogInOutState((CUser *)param_2);
    iVar9 = G_CEnvironment();
    iVar9 = *(int *)(iVar9 + 0x1b0);
    uVar16 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_2 + 0xe0));
    pcVar17 = (char *)CNetwork<4096,450000>::GetPeerIP2
                                ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_b4,0x10);
    pcVar18 = (char *)CUser::getWebAddress((CUser *)param_2);
    cUserHistoryLog::Login
              ((cUserHistoryLog *)(param_2 + 0x79700),pcVar18,pcVar17,uVar16 & 0xffff,iVar9,uVar4,
               iVar15);
  }
  lVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::SetLoginTick((CUserCharacInfo *)param_2,lVar19);
  lVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::SetCharacStartPlayTick((CUserCharacInfo *)param_2,lVar19);
  CSkillTreeParam::CSkillTreeParam(local_12c,(CUser *)param_2,local_64,local_94);
  local_5b = '\0';
                    /* try { // try from 084c099d to 084c1a82 has its CatchHandler @ 084c260d */
  pGVar20 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar20);
  if ((cVar3 != '\0') &&
     (SVar1 = local_64[0xcdd1], iVar9 = G_CDataManager(), SVar1 != *(SIG_LOAD_ETC *)(iVar9 + 0xa850)
     )) {
    iVar9 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_2);
    G_CDataManager();
    iVar15 = G_CDataManager();
    iVar15 = PvPSkillTreeParameterScript::getInitSkillTreeGrade(iVar15 + 0xa800);
    if (iVar9 < iVar15) {
      memset(local_64 + 0xc9c0,0,0x414);
      local_5b = '\x01';
    }
  }
  cVar3 = CUser::SetSkill((CUser *)param_2,(SIG_LOAD_SKILL *)(local_64 + 0xc9c0),
                          (SIG_COMBO_SKILL *)(local_64 + 0x14aaa));
  if (cVar3 == '\x01') {
    CUserCharacInfo::disableSaveSkill((CUserCharacInfo *)param_2);
    pGVar20 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar20);
    if (cVar3 != '\0') {
      if ((local_64[0xcdd4] == (SIG_LOAD_ETC)0x0) && (*(int *)(local_64 + 0xd59f) != 0)) {
        SetPvPSkillTree(param_2,local_64 + 0xc9cc,0);
        SetPvPSkillTree(param_2,local_64 + 0xcb68,1);
      }
      else {
        CUser::givePvPSkillTree((CUser *)param_2,0,false,3);
        CUser::givePvPSkillTree((CUser *)param_2,0,true,3);
        iVar9 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_2);
        cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_2);
        cVar5 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2);
        iVar15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        iVar21 = G_CDataManager();
        local_54 = PvPSkillTreeParameterScript::getPvPSkillPoint
                             ((PvPSkillTreeParameterScript *)(iVar21 + 0xa800),iVar15,(int)cVar5,
                              (int)cVar3,iVar9,true);
        pSVar14 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_2);
        SkillSlot::set_remain_sp_at_index(pSVar14,local_54,0);
        pSVar14 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_2);
        SkillSlot::set_remain_sp_at_index(pSVar14,local_54,1);
      }
    }
    iVar9 = CSkillTreeParam::SetSkillTree(local_12c,(Inter_LoadEtc *)param_1);
    if (iVar9 == 0) {
      pCVar22 = (CItemLock *)CUser::GetCharacExpandData((CUser *)param_2,2);
      pvVar23 = (vector *)item_lock::CItemLock::GetItemLockRefVec(pCVar22);
      this_01 = (CTitleBook *)CUser::GetCharacExpandData((CUser *)param_2,0xe);
      CTitleBook::getItemLockList(this_01,pvVar23);
      pCVar22 = (CItemLock *)CUser::GetCharacExpandData((CUser *)param_2,2);
      item_lock::CItemLock::VerifyItemLock(pCVar22,(CUser *)param_2);
      pCVar24 = (CGameManager *)G_CGameManager();
      local_5a = CGameManager::insert_game_world(pCVar24,(CUser *)param_2);
      if (local_5a == '\x01') {
        CUser::sendCharacQp((CUser *)param_2);
        CUser::sendCharacQuestPiece((CUser *)param_2);
        pCVar25 = (CUser *)CUser::GetCharacExpandData((CUser *)param_2,0x11);
        CBoosterGage::send_data(pCVar25,(int)param_2);
        CUser::SendItemMakingSkillInfo((CUser *)param_2);
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar20);
        if ((cVar3 != '\0') &&
           (((local_64[0xcdd4] != (SIG_LOAD_ETC)0x0 || (*(int *)(local_64 + 0xd59f) == 0)) ||
            (local_5b != '\0')))) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x154);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
          CUser::Send((CUser *)param_2,local_94);
        }
        CUser::CheckMaxLuckyLevel();
        CUserCharacInfo::SetCurConditionEventStep
                  ((CUserCharacInfo *)param_2,*(short *)(local_64 + 0x40c8));
        CUserCharacInfo::SetCurConditionEventRewardStep
                  ((CUserCharacInfo *)param_2,*(short *)(local_64 + 0x40ca));
        CUserCharacInfo::SetCurCharacRevengeData
                  ((CUserCharacInfo *)param_2,(uchar)local_64[0xc9ac],(uchar)local_64[0xc9ad]);
        if (*(short *)(local_64 + 0x40cc) < 0) {
          *(undefined2 *)(local_64 + 0x40cc) = 0;
        }
        CUserCharacInfo::SetProperDungeonClearCount
                  ((CUserCharacInfo *)param_2,*(short *)(local_64 + 0x40cc));
        CUser::SetCurCharacUsedGiftFatigueQuantity((CUser *)param_2,*(uint *)(local_64 + 0xc9b8));
        iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        if (iVar9 != 0) {
          CUserCharacInfo::SetFirstTimeLogin((CUserCharacInfo *)param_2,false);
          iVar9 = G_CEnvironment();
          local_50 = *(int *)(iVar9 + 0x37c);
          local_4c = (CCoinRefillEvent *)
                     CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xd);
          cVar3 = (**(code **)(*(int *)local_4c + 0x34))(local_4c,0);
          if (cVar3 != '\0') {
            local_50 = CCoinRefillEvent::getLastEventTime(local_4c);
          }
          CUserCharacInfo::setBlueMarbleEnterCount
                    ((CUserCharacInfo *)param_2,(uchar)local_64[0x14a98]);
          lVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          cVar3 = CheckDailyScheduleTime(local_50,*(long *)(iVar9 + 0x7b),lVar19);
          if (cVar3 != '\0') {
            CUserCharacInfo::SetFirstTimeLogin((CUserCharacInfo *)param_2,true);
            CUser::RecoverCoin((CUser *)param_2,1);
            CUser::AddDailyItem((CUser *)param_2);
            CUserCharacInfo::ClearCurConditionEventStep((CUserCharacInfo *)param_2);
            CUserCharacInfo::ClearCurConditionEventRewardStep((CUserCharacInfo *)param_2);
            CUserCharacInfo::ClearProperDungeonClearCount((CUserCharacInfo *)param_2);
            CUser::SetFirstLogin((CUser *)param_2);
            cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
            if ((cVar3 == '\0') ||
               (cVar3 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_2),
               cVar3 != '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pCVar26 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar26,param_2,0x1a1,1,0,0);
            }
            CUser::ResetCurCharacUsedGiftFatigueQuantity((CUser *)param_2);
            local_48 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
            cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
            if ((cVar3 == '\0') ||
               (cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_2),
               cVar3 != '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              local_44 = 0;
              local_40 = 0;
              if (local_48 < 0x3d) {
                if (0x32 < local_48) {
                  local_44 = 1;
                  local_40 = 0xb;
                }
              }
              else {
                local_44 = 3;
                local_40 = 0xc;
              }
              for (local_3c = 0; local_3c < local_44; local_3c = local_3c + 1) {
                pCVar26 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar26,param_2,0x1a3,1,local_40,0);
              }
            }
            cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
            if ((cVar3 == '\0') ||
               (cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2),
               cVar3 != '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              local_38 = 0;
              local_34 = 0;
              if (local_48 < 0x33) {
                if (local_48 < 0x29) {
                  if (local_48 < 0x1f) {
                    if (0x14 < local_48) {
                      local_38 = 1;
                      local_34 = 1;
                    }
                  }
                  else {
                    local_38 = 2;
                    local_34 = 2;
                  }
                }
                else {
                  local_38 = 3;
                  local_34 = 3;
                }
              }
              else {
                local_38 = 5;
                local_34 = 4;
              }
              for (local_30 = 0; local_30 < local_38; local_30 = local_30 + 1) {
                pCVar26 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar26,param_2,0x1a3,1,local_34,0);
              }
            }
            CUserCharacInfo::resetBlueMarbleEnterCount((CUserCharacInfo *)param_2);
          }
          CUser::sendBlueMarbleEnterCount((CUser *)param_2);
          CUser::SendOpenflag((CUser *)param_2);
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          RewardItem((CUser *)param_2,*(long *)(iVar9 + 0x7b),0x4b4515f0,0x4b578af0,0x27addd,
                     "game_server_msg_53","game_server_msg_131",0);
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          if (*(int *)(iVar9 + 0x7b) != 0) {
            CUser::initAllSkill((CUser *)param_2);
          }
        }
        CUser::SendRevengeDungeon((CUser *)param_2);
        CUser::SendConditionEventInfo((CUser *)param_2);
        CUser::SendProperDungeonClearCount((CUser *)param_2);
        processSeriaRoomAniDecoEvent
                  ((Inter_LoadEtc *)param_1,*(undefined4 *)(local_64 + 0x14b5c),param_2);
        processCheckInvalidExpPerLevel((Inter_LoadEtc *)param_1,(CUser *)param_2);
        WongWork::CHandlePremium::handlePremiumEffect(param_2,9999);
        for (local_2c = 1; local_2c < 2; local_2c = local_2c + 1) {
          cVar3 = CServerEvent::IsEventing(local_2c);
          if (cVar3 != '\0') {
            sVar7 = CServerEvent::GetEventInterval(local_2c);
            Inter_MonitorServerEventStart::SendEventNotiPacket
                      (true,(short)local_2c,sVar7,(CUser *)param_2);
          }
        }
        local_59 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xbc);
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar20);
        if (cVar3 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(int)local_59);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,99);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
        CUser::Send((CUser *)param_2,local_94);
        cVar3 = CPowerManager::CheckCompleteDBLoadStatueInfo(GlobalData::s_power_manager);
        if (cVar3 != '\0') {
          CPowerManager::SendPowerWarUserStatueInfo(GlobalData::s_power_manager,(CUser *)param_2);
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
        CEventManager::MakeNotiEventInfo(GlobalData::s_event_manager,local_94,(CUser *)param_2);
        CUser::Send((CUser *)param_2,local_94);
        CSkillTreeParam::SendSkillPointReturnInfo(local_12c);
        CUser::SendDungeonClearList((CUser *)param_2);
        CUser::EnableCharacInfo((CUser *)param_2,0xb);
        _checkUserDisadvantage((Inter_LoadEtc *)param_1,(CUser *)param_2);
        CUser::onSelectCharacter((CUser *)param_2);
        cVar3 = CUser::NeedSecuReward((CUser *)param_2);
        if ((cVar3 == '\0') || (cVar3 = CUser::getRewardType((CUser *)param_2), cVar3 == '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          CUser::getRewardType((CUser *)param_2);
          CUser::AddSecuRewardItem((uchar)param_2);
          CUser::setRewardType((CUser *)param_2,'\0');
        }
        this_02 = (CPad *)CUser::getPad((CUser *)param_2);
        cVar3 = Sanicova::CPad::getChangedPwd(this_02);
        if (cVar3 != '\0') {
          pCVar25 = (CUser *)CUser::getPad((CUser *)param_2);
          Sanicova::CPad::SendChagePwdRewardMail(pCVar25);
        }
        CUser::discard_mouse_register((CUser *)param_2);
        iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        if (0x27 < iVar9) {
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar9 = CUser::GetUID((CUser *)param_2);
          DB_LoadBloodBestRecord::makeRequest(iVar9,uVar16);
        }
        iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        if (0x3b < iVar9) {
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar9 = CUser::GetUID((CUser *)param_2);
          DB_LoadDimension::makeRequest(iVar9,uVar16);
        }
        cVar3 = CUser::isBreakAwayRewardData((CUser *)param_2);
        if (cVar3 != '\0') {
          giveBreakAwayReward((CUser *)param_2);
        }
        iVar9 = CUser::getBreakAwayDungeonClearCnt((CUser *)param_2);
        if (0 < iVar9) {
          iVar9 = CUser::getBreakAwayQuestTime((CUser *)param_2);
          local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_28 = iVar9 - local_28;
          if (local_28 < 1) {
            CUser::setBreakAwayDungeonClearCnt((CUser *)param_2,-1);
          }
          else {
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x136);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_28);
            iVar9 = CUser::getBreakAwayDungeonClearCnt((CUser *)param_2);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,3 - iVar9);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
            CUser::Send((CUser *)param_2,local_94);
          }
        }
        iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        iVar15 = G_GameWorld();
        iVar15 = GameWorld::getDungeonMinimumRequiredLevel(iVar15);
        if (iVar9 < iVar15) {
LAB_084c166e:
          bVar6 = false;
        }
        else {
          pGVar20 = (GameWorld *)G_GameWorld();
          cVar3 = GameWorld::IsPVPChannel(pGVar20);
          if (cVar3 == '\x01') goto LAB_084c166e;
          bVar6 = true;
        }
        if (bVar6) {
          iVar9 = G_CDataManager();
          cVar3 = ServerParameterScript::isDungeonOpen(iVar9 + 0x68);
          if (cVar3 == '\0') {
            pGVar20 = (GameWorld *)G_GameWorld();
            GameWorld::send_user_dungeon_inout_message(pGVar20,(CUser *)param_2,0x2aff,false);
          }
          else {
            pGVar20 = (GameWorld *)G_GameWorld();
            GameWorld::send_user_dungeon_inout_message(pGVar20,(CUser *)param_2,0x2aff,true);
          }
        }
        pCVar10 = (CDataManager *)G_CDataManager();
        this_03 = (CAutoMarketConditionsControl *)
                  CDataManager::GetAutoMarketContitionsControl(pCVar10);
        CAutoMarketConditionsControl::SendNotiSetDurability(this_03,(CUser *)param_2);
        iVar9 = CGlobalEffectManager::getEffectNum(GlobalData::s_globalEffectManager_);
        if (iVar9 != 0) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
          CGlobalEffectManager::makeGlobalEffectInfo(GlobalData::s_globalEffectManager_,local_94);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
          CUser::Send((CUser *)param_2,local_94);
        }
        pCVar24 = (CGameManager *)G_CGameManager();
        local_58 = (CSharedServerMessageManager *)
                   CGameManager::GetSharedServerMessageManager(pCVar24);
        if (local_58 != (CSharedServerMessageManager *)0x0) {
          cVar3 = CSharedServerMessageManager::IsSetServerMessage(local_58);
          if (cVar3 == '\0') {
            local_64[0x2d38] = (SIG_LOAD_ETC)0x0;
          }
          else {
            local_24 = (SIG_LOAD_ETC *)CSharedServerMessageManager::GetCurServerMessage(local_58);
            if (local_24 != (SIG_LOAD_ETC *)0x0) {
              local_64[0x2d38] = *local_24;
              SVar1 = *local_24;
              uVar16 = std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::size
                                 ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)
                                  (local_24 + 4));
              if ((byte)SVar1 == uVar16) {
                std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
                __gnu_cxx::
                __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                ::__normal_iterator<stSERVER_MESSAGE*>(local_b8,local_78);
                std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
                __gnu_cxx::
                __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                ::__normal_iterator<stSERVER_MESSAGE*>(local_bc,local_74);
                local_20 = 0;
                while (bVar6 = __gnu_cxx::operator!=(local_b8,local_bc), iVar9 = local_20, bVar6) {
                  iVar21 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  iVar15 = local_20;
                  local_64[iVar9 * 0x58 + 0x2d3d] = *(SIG_LOAD_ETC *)(iVar21 + 1);
                  pSVar12 = (SIG_LOAD_ETC *)
                            __gnu_cxx::
                            __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                            ::operator*(local_b8);
                  iVar9 = local_20;
                  local_64[iVar15 * 0x58 + 0x2d3c] = *pSVar12;
                  iVar15 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  *(undefined4 *)(local_64 + iVar9 * 0x58 + 0x2d78) = *(undefined4 *)(iVar15 + 0x3c)
                  ;
                  iVar9 = __gnu_cxx::
                          __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                          ::operator*(local_b8);
                  strncpy((char *)(local_64 + local_20 * 0x58 + 0x2d7c),(char *)(iVar9 + 0x40),0x13)
                  ;
                  iVar9 = local_20;
                  iVar15 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  *(undefined4 *)(local_64 + iVar9 * 0x58 + 0x2d40) = *(undefined4 *)(iVar15 + 4);
                  iVar9 = __gnu_cxx::
                          __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                          ::operator*(local_b8);
                  strncpy((char *)(local_64 + local_20 * 0x58 + 0x2d44),(char *)(iVar9 + 8),0x31);
                  iVar9 = local_20;
                  iVar15 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  *(undefined4 *)(local_64 + iVar9 * 0x58 + 0x2d90) = *(undefined4 *)(iVar15 + 0x54)
                  ;
                  local_20 = local_20 + 1;
                  __gnu_cxx::
                  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                  ::operator++(local_70,(int)local_b8);
                }
              }
            }
          }
          CSharedServerMessageManager::SendServerMessageInfo
                    (local_58,(CUser *)param_2,(SIG_EVENT_SERVER_MESSAGE *)(local_64 + 0x2d38),'\0')
          ;
        }
        CUser::SetLimitInfo((CUser *)param_2,(SIG_LIMIT_ITEM_INFO *)(local_64 + 0x2638));
        CUser::SendLoginToPCRoomServer((CUser *)param_2);
        piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,7);
        (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xcf1f);
        iVar9 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
        if ((iVar9 == 0) &&
           (iVar9 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_2),
           iVar9 != -1)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pSVar27 = (Stream *)
                    StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xed7);
          CStreamGuard::CStreamGuard(local_c4,pSVar27,true);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
                    /* try { // try from 084c1ab6 to 084c1b27 has its CatchHandler @ 084c1b2a */
          CStreamGuard::operator<<(pCVar28,0x180);
          iVar9 = CUser::GetUID((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
          CStreamGuard::operator<<(pCVar28,iVar9);
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
          CStreamGuard::operator<<(pCVar28,uVar16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_c4);
                    /* try { // try from 084c1b4e to 084c1c1b has its CatchHandler @ 084c260d */
          CStreamGuard::~CStreamGuard(local_c4);
        }
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar29 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar10);
        cVar3 = CItemLimitEditionMgr::empty(pCVar29);
        if (cVar3 != '\x01') {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xe1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
          pCVar10 = (CDataManager *)G_CDataManager();
          pCVar29 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar10);
          CItemLimitEditionMgr::makeItemLimitEditionInfo(pCVar29,local_94);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
          CUser::Send((CUser *)param_2,local_94);
        }
        pSVar27 = (Stream *)
                  StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf20);
        CStreamGuard::CStreamGuard(local_cc,pSVar27,true);
        pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
                    /* try { // try from 084c1c4f to 084c1cc0 has its CatchHandler @ 084c1cc3 */
        CStreamGuard::operator<<(pCVar28,0x1a7);
        iVar9 = CUser::GetUID((CUser *)param_2);
        pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
        CStreamGuard::operator<<(pCVar28,iVar9);
        uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
        CStreamGuard::operator<<(pCVar28,uVar16);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_cc);
                    /* try { // try from 084c1ce7 to 084c1d1d has its CatchHandler @ 084c260d */
        CStreamGuard::~CStreamGuard(local_cc);
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar20);
        if (cVar3 != '\0') {
          pSVar27 = (Stream *)
                    StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf2a);
          CStreamGuard::CStreamGuard(local_d4,pSVar27,true);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
                    /* try { // try from 084c1d51 to 084c1dea has its CatchHandler @ 084c1ded */
          CStreamGuard::operator<<(pCVar28,0x1d5);
          iVar9 = CUser::GetUID((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
          CStreamGuard::operator<<(pCVar28,iVar9);
          cVar3 = CUser::GetServerGroup((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
          CStreamGuard::operator<<(pCVar28,cVar3);
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
          CStreamGuard::operator<<(pCVar28,uVar16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_d4);
                    /* try { // try from 084c1e11 to 084c1e47 has its CatchHandler @ 084c260d */
          CStreamGuard::~CStreamGuard(local_d4);
        }
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar20);
        if (cVar3 != '\0') {
          pSVar27 = (Stream *)
                    StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf36);
          CStreamGuard::CStreamGuard(local_dc,pSVar27,true);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
                    /* try { // try from 084c1e7b to 084c1f14 has its CatchHandler @ 084c1f17 */
          CStreamGuard::operator<<(pCVar28,0x1e0);
          iVar9 = CUser::GetUID((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
          CStreamGuard::operator<<(pCVar28,iVar9);
          cVar3 = CUser::GetServerGroup((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
          CStreamGuard::operator<<(pCVar28,cVar3);
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
          CStreamGuard::operator<<(pCVar28,uVar16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_dc);
                    /* try { // try from 084c1f3b to 084c1f89 has its CatchHandler @ 084c260d */
          CStreamGuard::~CStreamGuard(local_dc);
        }
        pGVar20 = (GameWorld *)G_GameWorld();
        iVar9 = GameWorld::GetChannelType(pGVar20);
        if (iVar9 == 0xe) {
          cVar3 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
          if (cVar3 == '\x01') {
            pSVar27 = (Stream *)
                      StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf44);
            CStreamGuard::CStreamGuard(local_e4,pSVar27,true);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
                    /* try { // try from 084c1fbd to 084c2056 has its CatchHandler @ 084c2059 */
            CStreamGuard::operator<<(pCVar28,0x1e6);
            iVar9 = CUser::GetUID((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
            CStreamGuard::operator<<(pCVar28,iVar9);
            cVar3 = CUser::GetServerGroup((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
            CStreamGuard::operator<<(pCVar28,cVar3);
            uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
            CStreamGuard::operator<<(pCVar28,uVar16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_e4);
                    /* try { // try from 084c207d to 084c20a3 has its CatchHandler @ 084c260d */
            CStreamGuard::~CStreamGuard(local_e4);
          }
          else {
            pSVar27 = (Stream *)
                      StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf4d);
            CStreamGuard::CStreamGuard(local_ec,pSVar27,true);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
                    /* try { // try from 084c20d7 to 084c2170 has its CatchHandler @ 084c2173 */
            CStreamGuard::operator<<(pCVar28,0x1e8);
            iVar9 = CUser::GetUID((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
            CStreamGuard::operator<<(pCVar28,iVar9);
            cVar3 = CUser::GetServerGroup((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
            CStreamGuard::operator<<(pCVar28,cVar3);
            uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
            CStreamGuard::operator<<(pCVar28,uVar16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_ec);
                    /* try { // try from 084c2197 to 084c2208 has its CatchHandler @ 084c260d */
            CStreamGuard::~CStreamGuard(local_ec);
          }
        }
        CUser::send_RedeemInfo((CUser *)param_2);
        if (param_2 != (char *)0x0) {
          CDailyScheduleManager::CheckAndSendToOneUserSchedule
                    (GlobalData::s_DailyScheduleManager,(CUser *)param_2);
        }
        CUser::send_MissionList((CUser *)param_2);
        CUser::processReturnUser((CUser *)param_2);
        APSystem::CUserProc::SendActionListState((CUser *)param_2);
        CUser::setFlagPresentAvengerTitle((CUser *)param_2,(bool)local_64[0xc9ae]);
        CUser::VerifyPresentAvengerTitle((CUser *)param_2);
        uVar34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::allocator<char>::allocator();
                    /* try { // try from 084c2237 to 084c223b has its CatchHandler @ 084c2288 */
        std::string::string(local_6c,"Arad_EventPeriodDataManager",(allocator *)&local_66);
                    /* try { // try from 084c223c to 084c2263 has its CatchHandler @ 084c2273 */
        this_04 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
        pAVar30 = (Arad_EventPeriodDataManager *)
                  ARAD::Arad_DataManager::findGameScript(this_04,(string)local_6c);
        cVar3 = ARAD::Arad_EventPeriodDataManager::isApplied(pAVar30,0x8e,uVar34);
                    /* try { // try from 084c226c to 084c2270 has its CatchHandler @ 084c2288 */
        std::string::~string(local_6c);
        std::allocator<char>::~allocator(&local_66);
        if (cVar3 != '\0') {
          AradServerStateMessage::AradServerStateMessage(local_f8);
                    /* try { // try from 084c22dd to 084c25f7 has its CatchHandler @ 084c260d */
          ARAD::notifyOpenMessageDialog((CUser *)param_2,0,0x8e,local_f8);
        }
        RequestDBEventArad((Inter_LoadEtc *)param_1,(CUser *)param_2);
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::process_account_first_login
                  (pCVar31,0x191,param_2,*(undefined4 *)(local_64 + 0xc9bc));
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::process_account_first_login
                  (pCVar31,0x192,param_2,*(undefined4 *)(local_64 + 0xc9bc));
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::process_account_first_login
                  (pCVar31,0x19c,param_2,*(undefined4 *)(local_64 + 0xc9bc));
        iVar9 = G_CDataManager();
        pvVar23 = (vector *)CItemShop::GetOneADayItemList(*(CItemShop **)(iVar9 + 0x8cbc));
        CUser::SendOneADayItemShopIndex((CUser *)param_2,pvVar23);
        CUserCharacInfo::reset_is_end_lethe_at_login((CUserCharacInfo *)param_2);
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::send_event_init_data(pCVar31,(CUser *)param_2,false);
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::send_event_init_record_data(pCVar31,(CUser *)param_2);
        SVar1 = local_64[0xc9b7];
        uVar16 = *(uint *)(local_64 + 0xc9b3);
        uVar32 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        CUser::setPcRoomPlayTimeData((CUser *)param_2,uVar32,uVar16,(uchar)SVar1);
        CUserCharacInfo::set_aura_avatar_option
                  ((CUserCharacInfo *)param_2,(stAuraAvatarOption *)(local_64 + 0xd730));
        CUser::send_aura_avatar_option((CUser *)param_2);
        ARAD::Arad_ServerStateManager::sendState(GlobalData::s_serverStateManager_,(CUser *)param_2)
        ;
        CUserCharacInfo::setCharacOption
                  ((CUserCharacInfo *)param_2,(CharacterOption *)(local_64 + 0xeac8));
        CUser::sendCharacOption((CUser *)param_2);
        if (*(int *)(local_64 + 0xc) != 0) {
          CUser::SendTagCharacInfo((CUser *)param_2);
        }
        iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        *(undefined1 *)(iVar9 + 0x14bc) = 0;
        pCVar24 = (CGameManager *)G_CGameManager();
        this_05 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar24);
        CraneMinigameManager::SendCraneItemNeedMaterial(this_05,(CUser *)param_2);
        processAttendAnceEvent
                  ((Inter_LoadEtc *)param_1,(SIG_ATTENDANCE_EVENT *)(local_64 + 0x14a99),
                   (CUser *)param_2);
        CUser::SendMaxEquipLevel((CUser *)param_2);
        processGrowthWeaponEvent((Inter_LoadEtc *)param_1,(CUser *)param_2);
        processGrowthCreatureEvent((Inter_LoadEtc *)param_1,(CUser *)param_2);
        CUser::sendBingoAddData((CUser *)param_2);
        CUser::requestCubePremiumInfoIfContracted((CUser *)param_2);
        CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem((CUser *)param_2);
        piVar11 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9e);
        cVar3 = (**(code **)(*piVar11 + 0x34))(piVar11,0);
        if (cVar3 != '\0') {
          iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar15 = CUser::GetUID((CUser *)param_2);
          DB_LoadEventLevelupSupport::makeRequest(iVar15,iVar9);
        }
        this_06 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
        HeroMissionEvent::loadEventData(this_06,(CUser *)param_2);
        pGVar33 = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
        uVar8 = Taiwan::GarenaAuthData::getGcaType(pGVar33);
        cVar3 = Taiwan::GarenaCyberCafe(uVar8);
        if (cVar3 != '\0') {
          Taiwan::GarenaAuthPCRoom((CUser *)param_2);
        }
        pGVar33 = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
        cVar3 = Taiwan::GarenaAuthData::getMobileAuth(pGVar33);
        if (cVar3 != '\0') {
          DBSelectMobileAuthRewardTw::makeRequest((CUser *)param_2);
        }
        cVar3 = CUser::unlock4DataLoad((CUser *)param_2);
        if (cVar3 == '\x01') {
          uVar34 = 0;
        }
        else {
          uVar34 = 0x1139;
        }
      }
      else {
        uVar34 = 0xc14;
      }
    }
    else {
      uVar34 = 0xbcc;
    }
  }
  else {
    CUserCharacInfo::disableSaveSkill((CUserCharacInfo *)param_2);
    uVar34 = 0xb91;
  }
                    /* try { // try from 084c262e to 084c2632 has its CatchHandler @ 084c2635 */
  CSkillTreeParam::~CSkillTreeParam(local_12c);
LAB_084c2653:
  PacketGuard::~PacketGuard(local_94);
  return uVar34;
}
```
