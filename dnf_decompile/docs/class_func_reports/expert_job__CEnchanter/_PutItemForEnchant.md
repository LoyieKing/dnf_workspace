# _PutItemForEnchant

`_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti`

`expert_job::CEnchanter::_PutItemForEnchant(CUser*, int, stItemPos_t*, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849d344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849d344  _ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti
#           expert_job::CEnchanter::_PutItemForEnchant(CUser*, int, stItemPos_t*, int)
# range [0x0849d344, 0x0849d767]
0849d344 +0x000:  push   %ebp
0849d345 +0x001:  mov    %esp,%ebp
0849d347 +0x003:  push   %esi
0849d348 +0x004:  push   %ebx
0849d349 +0x005:  sub    $0x30,%esp
0849d34c +0x008:  mov    0xc(%ebp),%eax
0849d34f +0x00b:  mov    %eax,(%esp)
0849d352 +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849d357 +0x013:  test   %eax,%eax
0849d359 +0x015:  sete   %al
0849d35c +0x018:  test   %al,%al
0849d35e +0x01a:  je     0849d36a <+0x26>
0849d360 +0x01c:  mov    $0x3,%ebx
0849d365 +0x021:  jmp    0849d75f <+0x41b>
0849d36a +0x026:  mov    0xc(%ebp),%eax
0849d36d +0x029:  mov    %eax,(%esp)
0849d370 +0x02c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849d375 +0x031:  mov    %eax,%esi
0849d377 +0x033:  mov    0x8(%ebp),%eax
0849d37a +0x036:  mov    0x2c(%eax),%eax
0849d37d +0x039:  mov    %eax,(%esp)
0849d380 +0x03c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849d385 +0x041:  cmp    %ax,%si
0849d388 +0x044:  setne  %al
0849d38b +0x047:  test   %al,%al
0849d38d +0x049:  je     0849d3f0 <+0xac>
0849d38f +0x04b:  cmpl   $0x2,0x10(%ebp)
0849d393 +0x04f:  jne    0849d3ae <+0x6a>
0849d395 +0x051:  mov    0x8(%ebp),%eax
0849d398 +0x054:  mov    %eax,(%esp)
0849d39b +0x057:  call   0849f324 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x155>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x155
0849d3a0 +0x05c:  xor    $0x1,%eax
0849d3a3 +0x05f:  test   %al,%al
0849d3a5 +0x061:  je     0849d3ae <+0x6a>
0849d3a7 +0x063:  mov    $0x1,%eax
0849d3ac +0x068:  jmp    0849d3b3 <+0x6f>
0849d3ae +0x06a:  mov    $0x0,%eax
0849d3b3 +0x06f:  test   %al,%al
0849d3b5 +0x071:  je     0849d3e6 <+0xa2>
0849d3b7 +0x073:  mov    0xc(%ebp),%eax
0849d3ba +0x076:  mov    %eax,(%esp)
0849d3bd +0x079:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849d3c2 +0x07e:  mov    %eax,%esi
0849d3c4 +0x080:  mov    0x8(%ebp),%eax
0849d3c7 +0x083:  mov    0x28(%eax),%eax
0849d3ca +0x086:  mov    %eax,(%esp)
0849d3cd +0x089:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849d3d2 +0x08e:  cmp    %ax,%si
0849d3d5 +0x091:  setne  %al
0849d3d8 +0x094:  test   %al,%al
0849d3da +0x096:  je     0849d3f0 <+0xac>
0849d3dc +0x098:  mov    $0x3,%ebx
0849d3e1 +0x09d:  jmp    0849d75f <+0x41b>
0849d3e6 +0x0a2:  mov    $0x3,%ebx
0849d3eb +0x0a7:  jmp    0849d75f <+0x41b>
0849d3f0 +0x0ac:  mov    0x10(%ebp),%eax
0849d3f3 +0x0af:  cmp    $0x1,%eax
0849d3f6 +0x0b2:  je     0849d48c <+0x148>
0849d3fc +0x0b8:  cmp    $0x2,%eax
0849d3ff +0x0bb:  je     0849d530 <+0x1ec>
0849d405 +0x0c1:  test   %eax,%eax
0849d407 +0x0c3:  jne    0849d5d1 <+0x28d>
0849d40d +0x0c9:  cmpl   $0x0,0x18(%ebp)
0849d411 +0x0cd:  jns    0849d41d <+0xd9>
0849d413 +0x0cf:  mov    $0x5f,%ebx
0849d418 +0x0d4:  jmp    0849d75f <+0x41b>
0849d41d +0x0d9:  mov    0x8(%ebp),%eax
0849d420 +0x0dc:  mov    0x38(%eax),%eax
0849d423 +0x0df:  test   %eax,%eax
0849d425 +0x0e1:  jle    0849d431 <+0xed>
0849d427 +0x0e3:  mov    $0x14,%ebx
0849d42c +0x0e8:  jmp    0849d75f <+0x41b>
0849d431 +0x0ed:  mov    0x8(%ebp),%eax
0849d434 +0x0f0:  mov    0x28(%eax),%eax
0849d437 +0x0f3:  mov    0x18(%ebp),%edx
0849d43a +0x0f6:  mov    %edx,0x4(%esp)
0849d43e +0x0fa:  mov    %eax,(%esp)
0849d441 +0x0fd:  call   0866af1c <_ZN5CUser10CheckMoneyEi>  ; CUser::CheckMoney(int)
0849d446 +0x102:  xor    $0x1,%eax
0849d449 +0x105:  test   %al,%al
0849d44b +0x107:  je     0849d457 <+0x113>
0849d44d +0x109:  mov    $0x5f,%ebx
0849d452 +0x10e:  jmp    0849d75f <+0x41b>
0849d457 +0x113:  mov    0xc(%ebp),%eax
0849d45a +0x116:  mov    %eax,(%esp)
0849d45d +0x119:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849d462 +0x11e:  mov    %eax,(%esp)
0849d465 +0x121:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0849d46a +0x126:  cmp    0x18(%ebp),%eax
0849d46d +0x129:  setl   %al
0849d470 +0x12c:  test   %al,%al
0849d472 +0x12e:  je     0849d47e <+0x13a>
0849d474 +0x130:  mov    $0x16,%ebx
0849d479 +0x135:  jmp    0849d75f <+0x41b>
0849d47e +0x13a:  mov    0x8(%ebp),%eax
0849d481 +0x13d:  mov    0x18(%ebp),%edx
0849d484 +0x140:  mov    %edx,0x38(%eax)
0849d487 +0x143:  jmp    0849d5d1 <+0x28d>
0849d48c +0x148:  mov    0x8(%ebp),%eax
0849d48f +0x14b:  add    $0x8,%eax
0849d492 +0x14e:  mov    %eax,(%esp)
0849d495 +0x151:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849d49a +0x156:  xor    $0x1,%eax
0849d49d +0x159:  test   %al,%al
0849d49f +0x15b:  je     0849d4ab <+0x167>
0849d4a1 +0x15d:  mov    $0x14,%ebx
0849d4a6 +0x162:  jmp    0849d75f <+0x41b>
0849d4ab +0x167:  movl   $0x0,-0x10(%ebp)
0849d4b2 +0x16e:  mov    0x14(%ebp),%eax
0849d4b5 +0x171:  movzwl 0x1(%eax),%eax
0849d4b9 +0x175:  movzwl %ax,%edx
0849d4bc +0x178:  mov    0x14(%ebp),%eax
0849d4bf +0x17b:  movzbl (%eax),%eax
0849d4c2 +0x17e:  movzbl %al,%eax
0849d4c5 +0x181:  mov    0x8(%ebp),%ecx
0849d4c8 +0x184:  add    $0x8,%ecx
0849d4cb +0x187:  mov    %edx,0xc(%esp)
0849d4cf +0x18b:  mov    %eax,0x8(%esp)
0849d4d3 +0x18f:  mov    0xc(%ebp),%eax
0849d4d6 +0x192:  mov    %eax,0x4(%esp)
0849d4da +0x196:  mov    %ecx,(%esp)
0849d4dd +0x199:  call   0849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>  ; expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short)
0849d4e2 +0x19e:  mov    %eax,-0x10(%ebp)
0849d4e5 +0x1a1:  cmpl   $0x0,-0x10(%ebp)
0849d4e9 +0x1a5:  setne  %al
0849d4ec +0x1a8:  test   %al,%al
0849d4ee +0x1aa:  je     0849d4f8 <+0x1b4>
0849d4f0 +0x1ac:  mov    -0x10(%ebp),%ebx
0849d4f3 +0x1af:  jmp    0849d75f <+0x41b>
0849d4f8 +0x1b4:  mov    0x8(%ebp),%eax
0849d4fb +0x1b7:  add    $0x8,%eax
0849d4fe +0x1ba:  movl   $0x0,0x8(%esp)
0849d506 +0x1c2:  movl   $0x0,0x4(%esp)
0849d50e +0x1ca:  mov    %eax,(%esp)
0849d511 +0x1cd:  call   0849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>  ; expert_job::ExpertJobMaterial::CheckType(bool, int)
0849d516 +0x1d2:  mov    %eax,-0x10(%ebp)
0849d519 +0x1d5:  cmpl   $0x0,-0x10(%ebp)
0849d51d +0x1d9:  setne  %al
0849d520 +0x1dc:  test   %al,%al
0849d522 +0x1de:  je     0849d5d0 <+0x28c>
0849d528 +0x1e4:  mov    -0x10(%ebp),%ebx
0849d52b +0x1e7:  jmp    0849d75f <+0x41b>
0849d530 +0x1ec:  mov    0x8(%ebp),%eax
0849d533 +0x1ef:  add    $0x18,%eax
0849d536 +0x1f2:  mov    %eax,(%esp)
0849d539 +0x1f5:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849d53e +0x1fa:  xor    $0x1,%eax
0849d541 +0x1fd:  test   %al,%al
0849d543 +0x1ff:  je     0849d54f <+0x20b>
0849d545 +0x201:  mov    $0x14,%ebx
0849d54a +0x206:  jmp    0849d75f <+0x41b>
0849d54f +0x20b:  movl   $0x0,-0xc(%ebp)
0849d556 +0x212:  mov    0x14(%ebp),%eax
0849d559 +0x215:  movzwl 0x1(%eax),%eax
0849d55d +0x219:  movzwl %ax,%edx
0849d560 +0x21c:  mov    0x14(%ebp),%eax
0849d563 +0x21f:  movzbl (%eax),%eax
0849d566 +0x222:  movzbl %al,%eax
0849d569 +0x225:  mov    0x8(%ebp),%ecx
0849d56c +0x228:  add    $0x18,%ecx
0849d56f +0x22b:  mov    %edx,0xc(%esp)
0849d573 +0x22f:  mov    %eax,0x8(%esp)
0849d577 +0x233:  mov    0xc(%ebp),%eax
0849d57a +0x236:  mov    %eax,0x4(%esp)
0849d57e +0x23a:  mov    %ecx,(%esp)
0849d581 +0x23d:  call   0849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>  ; expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short)
0849d586 +0x242:  mov    %eax,-0xc(%ebp)
0849d589 +0x245:  cmpl   $0x0,-0xc(%ebp)
0849d58d +0x249:  setne  %al
0849d590 +0x24c:  test   %al,%al
0849d592 +0x24e:  je     0849d59c <+0x258>
0849d594 +0x250:  mov    -0xc(%ebp),%ebx
0849d597 +0x253:  jmp    0849d75f <+0x41b>
0849d59c +0x258:  mov    0x8(%ebp),%eax
0849d59f +0x25b:  add    $0x18,%eax
0849d5a2 +0x25e:  movl   $0x2,0x8(%esp)
0849d5aa +0x266:  movl   $0x1,0x4(%esp)
0849d5b2 +0x26e:  mov    %eax,(%esp)
0849d5b5 +0x271:  call   0849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>  ; expert_job::ExpertJobMaterial::CheckType(bool, int)
0849d5ba +0x276:  mov    %eax,-0xc(%ebp)
0849d5bd +0x279:  cmpl   $0x0,-0xc(%ebp)
0849d5c1 +0x27d:  setne  %al
0849d5c4 +0x280:  test   %al,%al
0849d5c6 +0x282:  je     0849d5d1 <+0x28d>
0849d5c8 +0x284:  mov    -0xc(%ebp),%ebx
0849d5cb +0x287:  jmp    0849d75f <+0x41b>
0849d5d0 +0x28c:  nop
0849d5d1 +0x28d:  mov    0x8(%ebp),%eax
0849d5d4 +0x290:  mov    0x28(%eax),%eax
0849d5d7 +0x293:  test   %eax,%eax
0849d5d9 +0x295:  je     0849d5f4 <+0x2b0>
0849d5db +0x297:  mov    0x8(%ebp),%eax
0849d5de +0x29a:  mov    0x28(%eax),%eax
0849d5e1 +0x29d:  mov    %eax,(%esp)
0849d5e4 +0x2a0:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849d5e9 +0x2a5:  test   %eax,%eax
0849d5eb +0x2a7:  je     0849d5f4 <+0x2b0>
0849d5ed +0x2a9:  mov    $0x1,%eax
0849d5f2 +0x2ae:  jmp    0849d5f9 <+0x2b5>
0849d5f4 +0x2b0:  mov    $0x0,%eax
0849d5f9 +0x2b5:  test   %al,%al
0849d5fb +0x2b7:  je     0849d75a <+0x416>
0849d601 +0x2bd:  lea    -0x1c(%ebp),%eax
0849d604 +0x2c0:  mov    %eax,(%esp)
0849d607 +0x2c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849d60c +0x2c8:  movl   $0x9d,0x8(%esp)
0849d614 +0x2d0:  movl   $0x0,0x4(%esp)
0849d61c +0x2d8:  lea    -0x1c(%ebp),%eax
0849d61f +0x2db:  mov    %eax,(%esp)
0849d622 +0x2de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849d627 +0x2e3:  mov    0x10(%ebp),%eax
0849d62a +0x2e6:  mov    %eax,0x4(%esp)
0849d62e +0x2ea:  lea    -0x1c(%ebp),%eax
0849d631 +0x2ed:  mov    %eax,(%esp)
0849d634 +0x2f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849d639 +0x2f5:  mov    0x10(%ebp),%eax
0849d63c +0x2f8:  cmp    $0x1,%eax
0849d63f +0x2fb:  je     0849d661 <+0x31d>
0849d641 +0x2fd:  cmp    $0x2,%eax
0849d644 +0x300:  je     0849d678 <+0x334>
0849d646 +0x302:  test   %eax,%eax
0849d648 +0x304:  jne    0849d68d <+0x349>
0849d64a +0x306:  mov    0x8(%ebp),%eax
0849d64d +0x309:  mov    0x38(%eax),%eax
0849d650 +0x30c:  mov    %eax,0x4(%esp)
0849d654 +0x310:  lea    -0x1c(%ebp),%eax
0849d657 +0x313:  mov    %eax,(%esp)
0849d65a +0x316:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849d65f +0x31b:  jmp    0849d68d <+0x349>
0849d661 +0x31d:  mov    0x8(%ebp),%eax
0849d664 +0x320:  mov    0x10(%eax),%eax
0849d667 +0x323:  mov    %eax,0x4(%esp)
0849d66b +0x327:  lea    -0x1c(%ebp),%eax
0849d66e +0x32a:  mov    %eax,(%esp)
0849d671 +0x32d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849d676 +0x332:  jmp    0849d68d <+0x349>
0849d678 +0x334:  mov    0x8(%ebp),%eax
0849d67b +0x337:  mov    0x20(%eax),%eax
0849d67e +0x33a:  mov    %eax,0x4(%esp)
0849d682 +0x33e:  lea    -0x1c(%ebp),%eax
0849d685 +0x341:  mov    %eax,(%esp)
0849d688 +0x344:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849d68d +0x349:  movl   $0x1,0x4(%esp)
0849d695 +0x351:  lea    -0x1c(%ebp),%eax
0849d698 +0x354:  mov    %eax,(%esp)
0849d69b +0x357:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849d6a0 +0x35c:  mov    0xc(%ebp),%eax
0849d6a3 +0x35f:  mov    %eax,(%esp)
0849d6a6 +0x362:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849d6ab +0x367:  mov    %eax,%esi
0849d6ad +0x369:  mov    0x8(%ebp),%eax
0849d6b0 +0x36c:  mov    0x28(%eax),%eax
0849d6b3 +0x36f:  mov    %eax,(%esp)
0849d6b6 +0x372:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849d6bb +0x377:  cmp    %ax,%si
0849d6be +0x37a:  sete   %al
0849d6c1 +0x37d:  test   %al,%al
0849d6c3 +0x37f:  je     0849d714 <+0x3d0>
0849d6c5 +0x381:  mov    0x8(%ebp),%eax
0849d6c8 +0x384:  mov    0x2c(%eax),%eax
0849d6cb +0x387:  test   %eax,%eax
0849d6cd +0x389:  je     0849d6e8 <+0x3a4>
0849d6cf +0x38b:  mov    0x8(%ebp),%eax
0849d6d2 +0x38e:  mov    0x2c(%eax),%eax
0849d6d5 +0x391:  mov    %eax,(%esp)
0849d6d8 +0x394:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849d6dd +0x399:  test   %eax,%eax
0849d6df +0x39b:  je     0849d6e8 <+0x3a4>
0849d6e1 +0x39d:  mov    $0x1,%eax
0849d6e6 +0x3a2:  jmp    0849d6ed <+0x3a9>
0849d6e8 +0x3a4:  mov    $0x0,%eax
0849d6ed +0x3a9:  test   %al,%al
0849d6ef +0x3ab:  je     0849d708 <+0x3c4>
0849d6f1 +0x3ad:  mov    0x8(%ebp),%eax
0849d6f4 +0x3b0:  mov    0x2c(%eax),%eax
0849d6f7 +0x3b3:  lea    -0x1c(%ebp),%edx
0849d6fa +0x3b6:  mov    %edx,0x4(%esp)
0849d6fe +0x3ba:  mov    %eax,(%esp)
0849d701 +0x3bd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849d706 +0x3c2:  jmp    0849d729 <+0x3e5>
0849d708 +0x3c4:  mov    $0x3,%ebx
0849d70d +0x3c9:  mov    $0x0,%esi
0849d712 +0x3ce:  jmp    0849d74b <+0x407>
0849d714 +0x3d0:  mov    0x8(%ebp),%eax
0849d717 +0x3d3:  mov    0x28(%eax),%eax
0849d71a +0x3d6:  lea    -0x1c(%ebp),%edx
0849d71d +0x3d9:  mov    %edx,0x4(%esp)
0849d721 +0x3dd:  mov    %eax,(%esp)
0849d724 +0x3e0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849d729 +0x3e5:  mov    $0x1,%esi
0849d72e +0x3ea:  jmp    0849d74b <+0x407>
0849d730 +0x3ec:  mov    %edx,%ebx
0849d732 +0x3ee:  mov    %eax,%esi
0849d734 +0x3f0:  lea    -0x1c(%ebp),%eax
0849d737 +0x3f3:  mov    %eax,(%esp)
0849d73a +0x3f6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849d73f +0x3fb:  mov    %esi,%eax
0849d741 +0x3fd:  mov    %ebx,%edx
0849d743 +0x3ff:  mov    %eax,(%esp)
0849d746 +0x402:  call   08ae3750 <_Unwind_Resume>
0849d74b +0x407:  lea    -0x1c(%ebp),%eax
0849d74e +0x40a:  mov    %eax,(%esp)
0849d751 +0x40d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849d756 +0x412:  test   %esi,%esi
0849d758 +0x414:  je     0849d75f <+0x41b>
0849d75a +0x416:  mov    $0x0,%ebx
0849d75f +0x41b:  mov    %ebx,%eax
0849d761 +0x41d:  add    $0x30,%esp
0849d764 +0x420:  pop    %ebx
0849d765 +0x421:  pop    %esi
0849d766 +0x422:  pop    %ebp
0849d767 +0x423:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::_PutItemForEnchant @ 0x849d344

/* expert_job::CEnchanter::_PutItemForEnchant(CUser*, int, stItemPos_t*, int) */

int __thiscall
expert_job::CEnchanter::_PutItemForEnchant
          (CEnchanter *this,CUser *param_1,int param_2,stItemPos_t *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  CInventory *this_00;
  int unaff_EBX;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    return 3;
  }
  sVar3 = CUser::get_unique_id(param_1);
  sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
  if (sVar3 != sVar4) {
    if ((param_2 == 2) && (cVar2 = IsUseOtherUserMonsterCard(this), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      return 3;
    }
    sVar3 = CUser::get_unique_id(param_1);
    sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x28));
    if (sVar3 != sVar4) {
      return 3;
    }
  }
  if (param_2 == 1) {
    cVar2 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(this + 8));
    if (cVar2 != '\x01') {
      return 0x14;
    }
    local_14 = 0;
    local_14 = ExpertJobMaterial::SetData
                         ((ExpertJobMaterial *)(this + 8),param_1,(ushort)(byte)*param_3,
                          *(ushort *)(param_3 + 1));
    if (local_14 != 0) {
      return local_14;
    }
    iVar5 = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 8),false,0);
    local_14 = iVar5;
joined_r0x0849d522:
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  else {
    if (param_2 == 2) {
      cVar2 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(this + 0x18));
      if (cVar2 != '\x01') {
        return 0x14;
      }
      local_10 = 0;
      local_10 = ExpertJobMaterial::SetData
                           ((ExpertJobMaterial *)(this + 0x18),param_1,(ushort)(byte)*param_3,
                            *(ushort *)(param_3 + 1));
      if (local_10 != 0) {
        return local_10;
      }
      iVar5 = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 0x18),true,2);
      local_10 = iVar5;
      goto joined_r0x0849d522;
    }
    if (param_2 == 0) {
      if (param_4 < 0) {
        return 0x5f;
      }
      if (0 < *(int *)(this + 0x38)) {
        return 0x14;
      }
      cVar2 = CUser::CheckMoney(*(CUser **)(this + 0x28),param_4);
      if (cVar2 != '\x01') {
        return 0x5f;
      }
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar5 = CInventory::get_money(this_00);
      if (iVar5 < param_4) {
        return 0x16;
      }
      *(int *)(this + 0x38) = param_4;
    }
  }
  if ((*(int *)(this + 0x28) == 0) ||
     (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x28)), iVar5 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0849d622 to 0849d728 has its CatchHandler @ 0849d730 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x9d);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,param_2);
  if (param_2 == 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(this + 0x10));
  }
  else if (param_2 == 2) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(this + 0x20));
  }
  else if (param_2 == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(this + 0x38));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  sVar3 = CUser::get_unique_id(param_1);
  sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x28));
  if (sVar3 == sVar4) {
    if ((*(int *)(this + 0x2c) == 0) ||
       (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      unaff_EBX = 3;
      bVar1 = false;
      goto LAB_0849d74b;
    }
    CUser::Send(*(CUser **)(this + 0x2c),local_20);
  }
  else {
    CUser::Send(*(CUser **)(this + 0x28),local_20);
  }
  bVar1 = true;
LAB_0849d74b:
  PacketGuard::~PacketGuard(local_20);
  if (bVar1) {
    return 0;
  }
  return unaff_EBX;
}
```
