# use_stackable

`_ZN5CUser13use_stackableEsiii`

`CUser::use_stackable(short, int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865e0ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865e0ae  _ZN5CUser13use_stackableEsiii
#           CUser::use_stackable(short, int, int, int)
# range [0x0865e0ae, 0x0865e993]
0865e0ae +0x000:  push   %ebp
0865e0af +0x001:  mov    %esp,%ebp
0865e0b1 +0x003:  push   %esi
0865e0b2 +0x004:  push   %ebx
0865e0b3 +0x005:  sub    $0x120,%esp
0865e0b9 +0x00b:  mov    0xc(%ebp),%eax
0865e0bc +0x00e:  mov    %ax,-0xfc(%ebp)
0865e0c3 +0x015:  movl   $0x0,-0x10(%ebp)
0865e0ca +0x01c:  mov    0x8(%ebp),%eax
0865e0cd +0x01f:  mov    %eax,(%esp)
0865e0d0 +0x022:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865e0d5 +0x027:  test   %al,%al
0865e0d7 +0x029:  je     0865e0e0 <+0x32>
0865e0d9 +0x02b:  movl   $0x13,-0x10(%ebp)
0865e0e0 +0x032:  movswl -0xfc(%ebp),%esi
0865e0e7 +0x039:  mov    0x10(%ebp),%eax
0865e0ea +0x03c:  mov    %eax,(%esp)
0865e0ed +0x03f:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
0865e0f2 +0x044:  mov    %eax,%ebx
0865e0f4 +0x046:  mov    0x8(%ebp),%eax
0865e0f7 +0x049:  mov    %eax,(%esp)
0865e0fa +0x04c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865e0ff +0x051:  lea    -0xe9(%ebp),%edx
0865e105 +0x057:  mov    %esi,0xc(%esp)
0865e109 +0x05b:  mov    %ebx,0x8(%esp)
0865e10d +0x05f:  mov    %eax,0x4(%esp)
0865e111 +0x063:  mov    %edx,(%esp)
0865e114 +0x066:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0865e119 +0x06b:  sub    $0x4,%esp
0865e11c +0x06e:  mov    -0xe7(%ebp),%eax
0865e122 +0x074:  mov    %eax,%ebx
0865e124 +0x076:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865e129 +0x07b:  mov    %ebx,0x4(%esp)
0865e12d +0x07f:  mov    %eax,(%esp)
0865e130 +0x082:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0865e135 +0x087:  mov    %eax,-0xc(%ebp)
0865e138 +0x08a:  cmpl   $0x0,-0xc(%ebp)
0865e13c +0x08e:  jne    0865e147 <+0x99>
0865e13e +0x090:  movl   $0x17,-0x10(%ebp)
0865e145 +0x097:  jmp    0865e160 <+0xb2>
0865e147 +0x099:  mov    -0xc(%ebp),%eax
0865e14a +0x09c:  mov    %eax,(%esp)
0865e14d +0x09f:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0865e152 +0x0a4:  xor    $0x1,%eax
0865e155 +0x0a7:  test   %al,%al
0865e157 +0x0a9:  je     0865e160 <+0xb2>
0865e159 +0x0ab:  movl   $0x17,-0x10(%ebp)
0865e160 +0x0b2:  cmpl   $0x0,-0x10(%ebp)
0865e164 +0x0b6:  jne    0865e27f <+0x1d1>
0865e16a +0x0bc:  mov    -0xc(%ebp),%eax
0865e16d +0x0bf:  mov    %eax,0x4(%esp)
0865e171 +0x0c3:  mov    0x8(%ebp),%eax
0865e174 +0x0c6:  mov    %eax,(%esp)
0865e177 +0x0c9:  call   085d18e2 <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem>  ; expert_job::CAlchemist::CheckUsableStackableItem(CUser*, CItem const*)
0865e17c +0x0ce:  xor    $0x1,%eax
0865e17f +0x0d1:  test   %al,%al
0865e181 +0x0d3:  je     0865e27f <+0x1d1>
0865e187 +0x0d9:  lea    -0xa0(%ebp),%eax
0865e18d +0x0df:  mov    %eax,(%esp)
0865e190 +0x0e2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865e195 +0x0e7:  movl   $0x2f,0x8(%esp)
0865e19d +0x0ef:  movl   $0x1,0x4(%esp)
0865e1a5 +0x0f7:  lea    -0xa0(%ebp),%eax
0865e1ab +0x0fd:  mov    %eax,(%esp)
0865e1ae +0x100:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865e1b3 +0x105:  movl   $0x0,0x4(%esp)
0865e1bb +0x10d:  lea    -0xa0(%ebp),%eax
0865e1c1 +0x113:  mov    %eax,(%esp)
0865e1c4 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e1c9 +0x11b:  movl   $0x7,0x4(%esp)
0865e1d1 +0x123:  lea    -0xa0(%ebp),%eax
0865e1d7 +0x129:  mov    %eax,(%esp)
0865e1da +0x12c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e1df +0x131:  mov    0x10(%ebp),%eax
0865e1e2 +0x134:  mov    %eax,0x4(%esp)
0865e1e6 +0x138:  lea    -0xa0(%ebp),%eax
0865e1ec +0x13e:  mov    %eax,(%esp)
0865e1ef +0x141:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e1f4 +0x146:  mov    0x14(%ebp),%eax
0865e1f7 +0x149:  mov    %eax,0x4(%esp)
0865e1fb +0x14d:  lea    -0xa0(%ebp),%eax
0865e201 +0x153:  mov    %eax,(%esp)
0865e204 +0x156:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e209 +0x15b:  mov    0x18(%ebp),%eax
0865e20c +0x15e:  mov    %eax,0x4(%esp)
0865e210 +0x162:  lea    -0xa0(%ebp),%eax
0865e216 +0x168:  mov    %eax,(%esp)
0865e219 +0x16b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e21e +0x170:  movl   $0x1,0x4(%esp)
0865e226 +0x178:  lea    -0xa0(%ebp),%eax
0865e22c +0x17e:  mov    %eax,(%esp)
0865e22f +0x181:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865e234 +0x186:  lea    -0xa0(%ebp),%eax
0865e23a +0x18c:  mov    %eax,0x4(%esp)
0865e23e +0x190:  mov    0x8(%ebp),%eax
0865e241 +0x193:  mov    %eax,(%esp)
0865e244 +0x196:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865e249 +0x19b:  mov    $0x1,%ebx
0865e24e +0x1a0:  lea    -0xa0(%ebp),%eax
0865e254 +0x1a6:  mov    %eax,(%esp)
0865e257 +0x1a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865e25c +0x1ae:  jmp    0865e987 <+0x8d9>
0865e261 +0x1b3:  mov    %edx,%ebx
0865e263 +0x1b5:  mov    %eax,%esi
0865e265 +0x1b7:  lea    -0xa0(%ebp),%eax
0865e26b +0x1bd:  mov    %eax,(%esp)
0865e26e +0x1c0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865e273 +0x1c5:  mov    %esi,%eax
0865e275 +0x1c7:  mov    %ebx,%edx
0865e277 +0x1c9:  mov    %eax,(%esp)
0865e27a +0x1cc:  call   08ae3750 <_Unwind_Resume>
0865e27f +0x1d1:  cmpl   $0x0,-0x10(%ebp)
0865e283 +0x1d5:  jne    0865e39e <+0x2f0>
0865e289 +0x1db:  mov    -0xe7(%ebp),%eax
0865e28f +0x1e1:  mov    %eax,0x4(%esp)
0865e293 +0x1e5:  mov    0x8(%ebp),%eax
0865e296 +0x1e8:  mov    %eax,(%esp)
0865e299 +0x1eb:  call   0865e994 <_ZNK5CUser17CheckCoolTimeItemEm>  ; CUser::CheckCoolTimeItem(unsigned long) const
0865e29e +0x1f0:  test   %al,%al
0865e2a0 +0x1f2:  je     0865e39e <+0x2f0>
0865e2a6 +0x1f8:  lea    -0xac(%ebp),%eax
0865e2ac +0x1fe:  mov    %eax,(%esp)
0865e2af +0x201:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865e2b4 +0x206:  movl   $0x2f,0x8(%esp)
0865e2bc +0x20e:  movl   $0x1,0x4(%esp)
0865e2c4 +0x216:  lea    -0xac(%ebp),%eax
0865e2ca +0x21c:  mov    %eax,(%esp)
0865e2cd +0x21f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865e2d2 +0x224:  movl   $0x0,0x4(%esp)
0865e2da +0x22c:  lea    -0xac(%ebp),%eax
0865e2e0 +0x232:  mov    %eax,(%esp)
0865e2e3 +0x235:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e2e8 +0x23a:  movl   $0x13,0x4(%esp)
0865e2f0 +0x242:  lea    -0xac(%ebp),%eax
0865e2f6 +0x248:  mov    %eax,(%esp)
0865e2f9 +0x24b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e2fe +0x250:  mov    0x10(%ebp),%eax
0865e301 +0x253:  mov    %eax,0x4(%esp)
0865e305 +0x257:  lea    -0xac(%ebp),%eax
0865e30b +0x25d:  mov    %eax,(%esp)
0865e30e +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e313 +0x265:  mov    0x14(%ebp),%eax
0865e316 +0x268:  mov    %eax,0x4(%esp)
0865e31a +0x26c:  lea    -0xac(%ebp),%eax
0865e320 +0x272:  mov    %eax,(%esp)
0865e323 +0x275:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e328 +0x27a:  mov    0x18(%ebp),%eax
0865e32b +0x27d:  mov    %eax,0x4(%esp)
0865e32f +0x281:  lea    -0xac(%ebp),%eax
0865e335 +0x287:  mov    %eax,(%esp)
0865e338 +0x28a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e33d +0x28f:  movl   $0x1,0x4(%esp)
0865e345 +0x297:  lea    -0xac(%ebp),%eax
0865e34b +0x29d:  mov    %eax,(%esp)
0865e34e +0x2a0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865e353 +0x2a5:  lea    -0xac(%ebp),%eax
0865e359 +0x2ab:  mov    %eax,0x4(%esp)
0865e35d +0x2af:  mov    0x8(%ebp),%eax
0865e360 +0x2b2:  mov    %eax,(%esp)
0865e363 +0x2b5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865e368 +0x2ba:  mov    $0x1,%ebx
0865e36d +0x2bf:  lea    -0xac(%ebp),%eax
0865e373 +0x2c5:  mov    %eax,(%esp)
0865e376 +0x2c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865e37b +0x2cd:  jmp    0865e987 <+0x8d9>
0865e380 +0x2d2:  mov    %edx,%ebx
0865e382 +0x2d4:  mov    %eax,%esi
0865e384 +0x2d6:  lea    -0xac(%ebp),%eax
0865e38a +0x2dc:  mov    %eax,(%esp)
0865e38d +0x2df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865e392 +0x2e4:  mov    %esi,%eax
0865e394 +0x2e6:  mov    %ebx,%edx
0865e396 +0x2e8:  mov    %eax,(%esp)
0865e399 +0x2eb:  call   08ae3750 <_Unwind_Resume>
0865e39e +0x2f0:  cmpl   $0x0,-0x10(%ebp)
0865e3a2 +0x2f4:  jne    0865e3d4 <+0x326>
0865e3a4 +0x2f6:  movswl -0xfc(%ebp),%ebx
0865e3ab +0x2fd:  mov    0x8(%ebp),%eax
0865e3ae +0x300:  mov    %eax,(%esp)
0865e3b1 +0x303:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865e3b6 +0x308:  mov    0x10(%ebp),%edx
0865e3b9 +0x30b:  mov    %edx,0xc(%esp)
0865e3bd +0x30f:  movl   $0x1,0x8(%esp)
0865e3c5 +0x317:  mov    %ebx,0x4(%esp)
0865e3c9 +0x31b:  mov    %eax,(%esp)
0865e3cc +0x31e:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
0865e3d1 +0x323:  mov    %eax,-0x10(%ebp)
0865e3d4 +0x326:  cmpl   $0x0,-0x10(%ebp)
0865e3d8 +0x32a:  jne    0865e3ef <+0x341>
0865e3da +0x32c:  lea    -0xe9(%ebp),%eax
0865e3e0 +0x332:  mov    %eax,0x4(%esp)
0865e3e4 +0x336:  mov    0x8(%ebp),%eax
0865e3e7 +0x339:  mov    %eax,(%esp)
0865e3ea +0x33c:  call   08146c20 <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item>  ; Global::CBossTowerFunc::UseItem(CUser*, Inven_Item const&)
0865e3ef +0x341:  cmpl   $0x0,-0x10(%ebp)
0865e3f3 +0x345:  jne    0865e411 <+0x363>
0865e3f5 +0x347:  mov    -0xc(%ebp),%edx
0865e3f8 +0x34a:  mov    -0xe7(%ebp),%eax
0865e3fe +0x350:  mov    %edx,0x8(%esp)
0865e402 +0x354:  mov    %eax,0x4(%esp)
0865e406 +0x358:  mov    0x8(%ebp),%eax
0865e409 +0x35b:  mov    %eax,(%esp)
0865e40c +0x35e:  call   0865ea62 <_ZN5CUser22_processContinuousItemEjP14CStackableItem>  ; CUser::_processContinuousItem(unsigned int, CStackableItem*)
0865e411 +0x363:  cmpl   $0x0,-0x10(%ebp)
0865e415 +0x367:  jne    0865e433 <+0x385>
0865e417 +0x369:  mov    -0xe7(%ebp),%eax
0865e41d +0x36f:  mov    -0xc(%ebp),%edx
0865e420 +0x372:  mov    %edx,0x8(%esp)
0865e424 +0x376:  mov    %eax,0x4(%esp)
0865e428 +0x37a:  mov    0x8(%ebp),%eax
0865e42b +0x37d:  mov    %eax,(%esp)
0865e42e +0x380:  call   085d1712 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem>  ; expert_job::CAlchemist::OnUseStackableItem(CUser*, unsigned long, CItem const*)
0865e433 +0x385:  cmpl   $0x0,-0x10(%ebp)
0865e437 +0x389:  jne    0865e74b <+0x69d>
0865e43d +0x38f:  mov    -0xe7(%ebp),%eax
0865e443 +0x395:  cmp    $0x1e70,%eax
0865e448 +0x39a:  je     0865e561 <+0x4b3>
0865e44e +0x3a0:  cmp    $0x1e70,%eax
0865e453 +0x3a5:  ja     0865e4a4 <+0x3f6>
0865e455 +0x3a7:  cmp    $0x1ddd,%eax
0865e45a +0x3ac:  ja     0865e482 <+0x3d4>
0865e45c +0x3ae:  cmp    $0x1ddc,%eax
0865e461 +0x3b3:  jae    0865e702 <+0x654>
0865e467 +0x3b9:  cmp    $0x1d20,%eax
0865e46c +0x3be:  je     0865e669 <+0x5bb>
0865e472 +0x3c4:  cmp    $0x1d5e,%eax
0865e477 +0x3c9:  je     0865e6b7 <+0x609>
0865e47d +0x3cf:  jmp    0865e74b <+0x69d>
0865e482 +0x3d4:  cmp    $0x1e6e,%eax
0865e487 +0x3d9:  je     0865e531 <+0x483>
0865e48d +0x3df:  cmp    $0x1e6e,%eax
0865e492 +0x3e4:  ja     0865e549 <+0x49b>
0865e498 +0x3ea:  cmp    $0x1e6d,%eax
0865e49d +0x3ef:  je     0865e519 <+0x46b>
0865e49f +0x3f1:  jmp    0865e74b <+0x69d>
0865e4a4 +0x3f6:  cmp    $0x1f8f,%eax
0865e4a9 +0x3fb:  je     0865e5c1 <+0x513>
0865e4af +0x401:  cmp    $0x1f8f,%eax
0865e4b4 +0x406:  ja     0865e4dc <+0x42e>
0865e4b6 +0x408:  cmp    $0x1e72,%eax
0865e4bb +0x40d:  je     0865e591 <+0x4e3>
0865e4c1 +0x413:  cmp    $0x1e72,%eax
0865e4c6 +0x418:  jb     0865e579 <+0x4cb>
0865e4cc +0x41e:  cmp    $0x1e73,%eax
0865e4d1 +0x423:  je     0865e5a9 <+0x4fb>
0865e4d7 +0x429:  jmp    0865e74b <+0x69d>
0865e4dc +0x42e:  cmp    $0x27ac5a,%eax
0865e4e1 +0x433:  je     0865e5c1 <+0x513>
0865e4e7 +0x439:  cmp    $0x27ac5a,%eax
0865e4ec +0x43e:  ja     0865e4fe <+0x450>
0865e4ee +0x440:  cmp    $0x201d,%eax
0865e4f3 +0x445:  je     0865e61b <+0x56d>
0865e4f9 +0x44b:  jmp    0865e74b <+0x69d>
0865e4fe +0x450:  cmp    $0x27addd,%eax
0865e503 +0x455:  je     0865e5c1 <+0x513>
0865e509 +0x45b:  cmp    $0x292090de,%eax
0865e50e +0x460:  je     0865e5c1 <+0x513>
0865e514 +0x466:  jmp    0865e74b <+0x69d>
0865e519 +0x46b:  movl   $0x1e74,0x4(%esp)
0865e521 +0x473:  mov    0x8(%ebp),%eax
0865e524 +0x476:  mov    %eax,(%esp)
0865e527 +0x479:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e52c +0x47e:  jmp    0865e74b <+0x69d>
0865e531 +0x483:  movl   $0x1e75,0x4(%esp)
0865e539 +0x48b:  mov    0x8(%ebp),%eax
0865e53c +0x48e:  mov    %eax,(%esp)
0865e53f +0x491:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e544 +0x496:  jmp    0865e74b <+0x69d>
0865e549 +0x49b:  movl   $0x1e76,0x4(%esp)
0865e551 +0x4a3:  mov    0x8(%ebp),%eax
0865e554 +0x4a6:  mov    %eax,(%esp)
0865e557 +0x4a9:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e55c +0x4ae:  jmp    0865e74b <+0x69d>
0865e561 +0x4b3:  movl   $0x1e77,0x4(%esp)
0865e569 +0x4bb:  mov    0x8(%ebp),%eax
0865e56c +0x4be:  mov    %eax,(%esp)
0865e56f +0x4c1:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e574 +0x4c6:  jmp    0865e74b <+0x69d>
0865e579 +0x4cb:  movl   $0x1e78,0x4(%esp)
0865e581 +0x4d3:  mov    0x8(%ebp),%eax
0865e584 +0x4d6:  mov    %eax,(%esp)
0865e587 +0x4d9:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e58c +0x4de:  jmp    0865e74b <+0x69d>
0865e591 +0x4e3:  movl   $0x1e79,0x4(%esp)
0865e599 +0x4eb:  mov    0x8(%ebp),%eax
0865e59c +0x4ee:  mov    %eax,(%esp)
0865e59f +0x4f1:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e5a4 +0x4f6:  jmp    0865e74b <+0x69d>
0865e5a9 +0x4fb:  movl   $0x1e7a,0x4(%esp)
0865e5b1 +0x503:  mov    0x8(%ebp),%eax
0865e5b4 +0x506:  mov    %eax,(%esp)
0865e5b7 +0x509:  call   0865defc <_Z12SendLV70BuffP5CUserm>  ; SendLV70Buff(CUser*, unsigned long)
0865e5bc +0x50e:  jmp    0865e74b <+0x69d>
0865e5c1 +0x513:  mov    0x8(%ebp),%eax
0865e5c4 +0x516:  mov    %eax,(%esp)
0865e5c7 +0x519:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865e5cc +0x51e:  movzwl %ax,%eax
0865e5cf +0x521:  sub    $0x1e,%eax
0865e5d2 +0x524:  mov    %eax,-0x88(%ebp)
0865e5d8 +0x52a:  movl   $0x0,-0x84(%ebp)
0865e5e2 +0x534:  lea    -0x88(%ebp),%eax
0865e5e8 +0x53a:  mov    %eax,0x4(%esp)
0865e5ec +0x53e:  lea    -0x84(%ebp),%eax
0865e5f2 +0x544:  mov    %eax,(%esp)
0865e5f5 +0x547:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0865e5fa +0x54c:  mov    (%eax),%edx
0865e5fc +0x54e:  mov    0x8(%ebp),%eax
0865e5ff +0x551:  mov    %edx,0x4(%esp)
0865e603 +0x555:  mov    %eax,(%esp)
0865e606 +0x558:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0865e60b +0x55d:  mov    0x8(%ebp),%eax
0865e60e +0x560:  mov    %eax,(%esp)
0865e611 +0x563:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0865e616 +0x568:  jmp    0865e74b <+0x69d>
0865e61b +0x56d:  mov    0x8(%ebp),%eax
0865e61e +0x570:  mov    %eax,(%esp)
0865e621 +0x573:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865e626 +0x578:  movzwl %ax,%eax
0865e629 +0x57b:  sub    $0x14,%eax
0865e62c +0x57e:  mov    %eax,-0x80(%ebp)
0865e62f +0x581:  movl   $0x0,-0x7c(%ebp)
0865e636 +0x588:  lea    -0x80(%ebp),%eax
0865e639 +0x58b:  mov    %eax,0x4(%esp)
0865e63d +0x58f:  lea    -0x7c(%ebp),%eax
0865e640 +0x592:  mov    %eax,(%esp)
0865e643 +0x595:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0865e648 +0x59a:  mov    (%eax),%edx
0865e64a +0x59c:  mov    0x8(%ebp),%eax
0865e64d +0x59f:  mov    %edx,0x4(%esp)
0865e651 +0x5a3:  mov    %eax,(%esp)
0865e654 +0x5a6:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0865e659 +0x5ab:  mov    0x8(%ebp),%eax
0865e65c +0x5ae:  mov    %eax,(%esp)
0865e65f +0x5b1:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0865e664 +0x5b6:  jmp    0865e74b <+0x69d>
0865e669 +0x5bb:  mov    0x8(%ebp),%eax
0865e66c +0x5be:  mov    %eax,(%esp)
0865e66f +0x5c1:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865e674 +0x5c6:  movzwl %ax,%eax
0865e677 +0x5c9:  sub    $0x28,%eax
0865e67a +0x5cc:  mov    %eax,-0x78(%ebp)
0865e67d +0x5cf:  movl   $0x0,-0x74(%ebp)
0865e684 +0x5d6:  lea    -0x78(%ebp),%eax
0865e687 +0x5d9:  mov    %eax,0x4(%esp)
0865e68b +0x5dd:  lea    -0x74(%ebp),%eax
0865e68e +0x5e0:  mov    %eax,(%esp)
0865e691 +0x5e3:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0865e696 +0x5e8:  mov    (%eax),%edx
0865e698 +0x5ea:  mov    0x8(%ebp),%eax
0865e69b +0x5ed:  mov    %edx,0x4(%esp)
0865e69f +0x5f1:  mov    %eax,(%esp)
0865e6a2 +0x5f4:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0865e6a7 +0x5f9:  mov    0x8(%ebp),%eax
0865e6aa +0x5fc:  mov    %eax,(%esp)
0865e6ad +0x5ff:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0865e6b2 +0x604:  jmp    0865e74b <+0x69d>
0865e6b7 +0x609:  mov    0x8(%ebp),%eax
0865e6ba +0x60c:  mov    %eax,(%esp)
0865e6bd +0x60f:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865e6c2 +0x614:  movzwl %ax,%eax
0865e6c5 +0x617:  sub    $0xa,%eax
0865e6c8 +0x61a:  mov    %eax,-0x70(%ebp)
0865e6cb +0x61d:  movl   $0x0,-0x6c(%ebp)
0865e6d2 +0x624:  lea    -0x70(%ebp),%eax
0865e6d5 +0x627:  mov    %eax,0x4(%esp)
0865e6d9 +0x62b:  lea    -0x6c(%ebp),%eax
0865e6dc +0x62e:  mov    %eax,(%esp)
0865e6df +0x631:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0865e6e4 +0x636:  mov    (%eax),%edx
0865e6e6 +0x638:  mov    0x8(%ebp),%eax
0865e6e9 +0x63b:  mov    %edx,0x4(%esp)
0865e6ed +0x63f:  mov    %eax,(%esp)
0865e6f0 +0x642:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0865e6f5 +0x647:  mov    0x8(%ebp),%eax
0865e6f8 +0x64a:  mov    %eax,(%esp)
0865e6fb +0x64d:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0865e700 +0x652:  jmp    0865e74b <+0x69d>
0865e702 +0x654:  mov    0x8(%ebp),%eax
0865e705 +0x657:  mov    %eax,(%esp)
0865e708 +0x65a:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865e70d +0x65f:  movzwl %ax,%eax
0865e710 +0x662:  sub    $0x6,%eax
0865e713 +0x665:  mov    %eax,-0x68(%ebp)
0865e716 +0x668:  movl   $0x0,-0x64(%ebp)
0865e71d +0x66f:  lea    -0x68(%ebp),%eax
0865e720 +0x672:  mov    %eax,0x4(%esp)
0865e724 +0x676:  lea    -0x64(%ebp),%eax
0865e727 +0x679:  mov    %eax,(%esp)
0865e72a +0x67c:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0865e72f +0x681:  mov    (%eax),%edx
0865e731 +0x683:  mov    0x8(%ebp),%eax
0865e734 +0x686:  mov    %edx,0x4(%esp)
0865e738 +0x68a:  mov    %eax,(%esp)
0865e73b +0x68d:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0865e740 +0x692:  mov    0x8(%ebp),%eax
0865e743 +0x695:  mov    %eax,(%esp)
0865e746 +0x698:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0865e74b +0x69d:  lea    -0x94(%ebp),%eax
0865e751 +0x6a3:  mov    %eax,(%esp)
0865e754 +0x6a6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865e759 +0x6ab:  movl   $0x2f,0x8(%esp)
0865e761 +0x6b3:  movl   $0x1,0x4(%esp)
0865e769 +0x6bb:  lea    -0x94(%ebp),%eax
0865e76f +0x6c1:  mov    %eax,(%esp)
0865e772 +0x6c4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865e777 +0x6c9:  cmpl   $0x0,-0x10(%ebp)
0865e77b +0x6cd:  jne    0865e840 <+0x792>
0865e781 +0x6d3:  movl   $0x1,0x4(%esp)
0865e789 +0x6db:  lea    -0x94(%ebp),%eax
0865e78f +0x6e1:  mov    %eax,(%esp)
0865e792 +0x6e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e797 +0x6e9:  movswl -0xfc(%ebp),%eax
0865e79e +0x6f0:  mov    %eax,0x4(%esp)
0865e7a2 +0x6f4:  lea    -0x94(%ebp),%eax
0865e7a8 +0x6fa:  mov    %eax,(%esp)
0865e7ab +0x6fd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865e7b0 +0x702:  mov    0x10(%ebp),%eax
0865e7b3 +0x705:  mov    %eax,0x4(%esp)
0865e7b7 +0x709:  lea    -0x94(%ebp),%eax
0865e7bd +0x70f:  mov    %eax,(%esp)
0865e7c0 +0x712:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e7c5 +0x717:  mov    0x14(%ebp),%eax
0865e7c8 +0x71a:  mov    %eax,0x4(%esp)
0865e7cc +0x71e:  lea    -0x94(%ebp),%eax
0865e7d2 +0x724:  mov    %eax,(%esp)
0865e7d5 +0x727:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e7da +0x72c:  mov    0x18(%ebp),%eax
0865e7dd +0x72f:  mov    %eax,0x4(%esp)
0865e7e1 +0x733:  lea    -0x94(%ebp),%eax
0865e7e7 +0x739:  mov    %eax,(%esp)
0865e7ea +0x73c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e7ef +0x741:  movl   $0x1,0x4(%esp)
0865e7f7 +0x749:  lea    -0x94(%ebp),%eax
0865e7fd +0x74f:  mov    %eax,(%esp)
0865e800 +0x752:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865e805 +0x757:  lea    -0x94(%ebp),%eax
0865e80b +0x75d:  mov    %eax,0x4(%esp)
0865e80f +0x761:  mov    0x8(%ebp),%eax
0865e812 +0x764:  mov    %eax,(%esp)
0865e815 +0x767:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865e81a +0x76c:  mov    -0xc(%ebp),%edx
0865e81d +0x76f:  mov    -0xe7(%ebp),%eax
0865e823 +0x775:  mov    %edx,0x8(%esp)
0865e827 +0x779:  mov    %eax,0x4(%esp)
0865e82b +0x77d:  mov    0x8(%ebp),%eax
0865e82e +0x780:  mov    %eax,(%esp)
0865e831 +0x783:  call   08196ed7 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem>  ; ARAD::ARAD_ITEM::arad_secret_shop_event_item(CUser*, unsigned long, CStackableItem*)
0865e836 +0x788:  mov    $0x1,%ebx
0865e83b +0x78d:  jmp    0865e979 <+0x8cb>
0865e840 +0x792:  movl   $0x0,0x4(%esp)
0865e848 +0x79a:  lea    -0x94(%ebp),%eax
0865e84e +0x7a0:  mov    %eax,(%esp)
0865e851 +0x7a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e856 +0x7a8:  mov    -0x10(%ebp),%eax
0865e859 +0x7ab:  mov    %eax,0x4(%esp)
0865e85d +0x7af:  lea    -0x94(%ebp),%eax
0865e863 +0x7b5:  mov    %eax,(%esp)
0865e866 +0x7b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e86b +0x7bd:  mov    0x10(%ebp),%eax
0865e86e +0x7c0:  mov    %eax,0x4(%esp)
0865e872 +0x7c4:  lea    -0x94(%ebp),%eax
0865e878 +0x7ca:  mov    %eax,(%esp)
0865e87b +0x7cd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865e880 +0x7d2:  mov    0x14(%ebp),%eax
0865e883 +0x7d5:  mov    %eax,0x4(%esp)
0865e887 +0x7d9:  lea    -0x94(%ebp),%eax
0865e88d +0x7df:  mov    %eax,(%esp)
0865e890 +0x7e2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e895 +0x7e7:  mov    0x18(%ebp),%eax
0865e898 +0x7ea:  mov    %eax,0x4(%esp)
0865e89c +0x7ee:  lea    -0x94(%ebp),%eax
0865e8a2 +0x7f4:  mov    %eax,(%esp)
0865e8a5 +0x7f7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865e8aa +0x7fc:  movl   $0x1,0x4(%esp)
0865e8b2 +0x804:  lea    -0x94(%ebp),%eax
0865e8b8 +0x80a:  mov    %eax,(%esp)
0865e8bb +0x80d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865e8c0 +0x812:  lea    -0x94(%ebp),%eax
0865e8c6 +0x818:  mov    %eax,0x4(%esp)
0865e8ca +0x81c:  mov    0x8(%ebp),%eax
0865e8cd +0x81f:  mov    %eax,(%esp)
0865e8d0 +0x822:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865e8d5 +0x827:  movswl -0xfc(%ebp),%ebx
0865e8dc +0x82e:  mov    0x8(%ebp),%eax
0865e8df +0x831:  mov    %eax,(%esp)
0865e8e2 +0x834:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865e8e7 +0x839:  lea    -0x5d(%ebp),%edx
0865e8ea +0x83c:  mov    %ebx,0xc(%esp)
0865e8ee +0x840:  movl   $0x1,0x8(%esp)
0865e8f6 +0x848:  mov    %eax,0x4(%esp)
0865e8fa +0x84c:  mov    %edx,(%esp)
0865e8fd +0x84f:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0865e902 +0x854:  sub    $0x4,%esp
0865e905 +0x857:  mov    -0x5b(%ebp),%esi
0865e908 +0x85a:  movswl -0xfc(%ebp),%ebx
0865e90f +0x861:  movl   $0x5,0xc(%esp)
0865e917 +0x869:  movl   $0x38b5,0x8(%esp)
0865e91f +0x871:  movl   $&_ZZN5CUser13use_stackableEsiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0865e927 +0x879:  lea    -0x20(%ebp),%eax
0865e92a +0x87c:  mov    %eax,(%esp)
0865e92d +0x87f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865e932 +0x884:  mov    %esi,0x10(%esp)
0865e936 +0x888:  mov    %ebx,0xc(%esp)
0865e93a +0x88c:  mov    -0x10(%ebp),%eax
0865e93d +0x88f:  mov    %eax,0x8(%esp)
0865e941 +0x893:  movl   $"CUser::use_stackable\tError:%d\tSlot_no:%d\tItem_no:%d",0x4(%esp)
0865e949 +0x89b:  lea    -0x20(%ebp),%eax
0865e94c +0x89e:  mov    %eax,(%esp)
0865e94f +0x8a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865e954 +0x8a6:  mov    $0x0,%ebx
0865e959 +0x8ab:  jmp    0865e979 <+0x8cb>
0865e95b +0x8ad:  mov    %edx,%ebx
0865e95d +0x8af:  mov    %eax,%esi
0865e95f +0x8b1:  lea    -0x94(%ebp),%eax
0865e965 +0x8b7:  mov    %eax,(%esp)
0865e968 +0x8ba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865e96d +0x8bf:  mov    %esi,%eax
0865e96f +0x8c1:  mov    %ebx,%edx
0865e971 +0x8c3:  mov    %eax,(%esp)
0865e974 +0x8c6:  call   08ae3750 <_Unwind_Resume>
0865e979 +0x8cb:  lea    -0x94(%ebp),%eax
0865e97f +0x8d1:  mov    %eax,(%esp)
0865e982 +0x8d4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865e987 +0x8d9:  mov    %ebx,%eax
0865e989 +0x8db:  lea    -0x8(%ebp),%esp
0865e98c +0x8de:  add    $0x0,%esp
0865e98f +0x8e1:  pop    %ebx
0865e990 +0x8e2:  pop    %esi
0865e991 +0x8e3:  pop    %ebp
0865e992 +0x8e4:  ret
0865e993 +0x8e5:  nop
```

## 反编译 C

```c
// CUser::use_stackable @ 0x865e0ae

/* CUser::use_stackable(short, int, int, int) */

bool __thiscall CUser::use_stackable(CUser *this,short param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CInventory *this_01;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  Inven_Item local_ed [2];
  ulong local_eb;
  PacketGuard local_b0 [12];
  PacketGuard local_a4 [12];
  PacketGuard local_98 [12];
  int local_8c [3];
  int local_80;
  int local_7c [3];
  int local_70;
  int local_6c [2];
  undefined1 local_61 [2];
  undefined4 local_5f;
  cMyTrace local_24 [16];
  int local_14;
  CItem *local_10;
  
  local_14 = 0;
  cVar2 = CheckInTrade(this);
  if (cVar2 != '\0') {
    local_14 = 0x13;
  }
  GetInvenTypeFromItemSpace(param_2);
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenSlot((int)local_ed,iVar3);
  uVar1 = local_eb;
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (CItem *)CDataManager::find_item(this_00,uVar1);
  if (local_10 == (CItem *)0x0) {
    local_14 = 0x17;
  }
  else {
    cVar2 = CItem::is_stackable(local_10);
    if (cVar2 != '\x01') {
      local_14 = 0x17;
    }
  }
  if ((local_14 == 0) &&
     (cVar2 = expert_job::CAlchemist::CheckUsableStackableItem(this,local_10), cVar2 != '\x01')) {
    PacketGuard::PacketGuard(local_a4);
                    /* try { // try from 0865e1ae to 0865e248 has its CatchHandler @ 0865e261 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a4,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a4,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,param_3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a4,param_4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a4,true);
    Send(this,local_a4);
    PacketGuard::~PacketGuard(local_a4);
    return true;
  }
  if ((local_14 == 0) && (cVar2 = CheckCoolTimeItem(this,local_eb), cVar2 != '\0')) {
    PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 0865e2cd to 0865e367 has its CatchHandler @ 0865e380 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,param_3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,param_4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
    Send(this,local_b0);
    PacketGuard::~PacketGuard(local_b0);
    return true;
  }
  if (local_14 == 0) {
    this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_14 = CInventory::use_item(this_01,(int)param_1,1,param_2);
  }
  if (local_14 == 0) {
    Global::CBossTowerFunc::UseItem(this,local_ed);
  }
  if (local_14 == 0) {
    _processContinuousItem(this,local_eb,(CStackableItem *)local_10);
  }
  if (local_14 == 0) {
    expert_job::CAlchemist::OnUseStackableItem(this,local_eb,local_10);
  }
  if (local_14 == 0) {
    if (local_eb == 0x1e70) {
      SendLV70Buff(this,0x1e77);
    }
    else if (local_eb < 0x1e71) {
      if (local_eb < 0x1dde) {
        if (local_eb < 0x1ddc) {
          if (local_eb == 0x1d20) {
            uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
            local_7c[0] = (uVar4 & 0xffff) - 0x28;
            local_7c[1] = 0;
            piVar5 = std::max<int>(local_7c + 1,local_7c);
            CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,*piVar5);
            SendFatigue(this);
          }
          else if (local_eb == 0x1d5e) {
            uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
            local_7c[2] = (uVar4 & 0xffff) - 10;
            local_70 = 0;
            piVar5 = std::max<int>(&local_70,local_7c + 2);
            CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,*piVar5);
            SendFatigue(this);
          }
        }
        else {
          uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
          local_6c[0] = (uVar4 & 0xffff) - 6;
          local_6c[1] = 0;
          piVar5 = std::max<int>(local_6c + 1,local_6c);
          CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,*piVar5);
          SendFatigue(this);
        }
      }
      else if (local_eb == 0x1e6e) {
        SendLV70Buff(this,0x1e75);
      }
      else if (local_eb < 0x1e6f) {
        if (local_eb == 0x1e6d) {
          SendLV70Buff(this,0x1e74);
        }
      }
      else {
        SendLV70Buff(this,0x1e76);
      }
    }
    else {
      if (local_eb != 0x1f8f) {
        if (local_eb < 0x1f90) {
          if (local_eb == 0x1e72) {
            SendLV70Buff(this,0x1e79);
          }
          else if (local_eb < 0x1e72) {
            SendLV70Buff(this,0x1e78);
          }
          else if (local_eb == 0x1e73) {
            SendLV70Buff(this,0x1e7a);
          }
          goto LAB_0865e74b;
        }
        if (local_eb != 0x27ac5a) {
          if (local_eb < 0x27ac5b) {
            if (local_eb == 0x201d) {
              uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
              local_8c[2] = (uVar4 & 0xffff) - 0x14;
              local_80 = 0;
              piVar5 = std::max<int>(&local_80,local_8c + 2);
              CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,*piVar5);
              SendFatigue(this);
            }
            goto LAB_0865e74b;
          }
          if ((local_eb != 0x27addd) && (local_eb != 0x292090de)) goto LAB_0865e74b;
        }
      }
      uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
      local_8c[0] = (uVar4 & 0xffff) - 0x1e;
      local_8c[1] = 0;
      piVar5 = std::max<int>(local_8c + 1,local_8c);
      CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,*piVar5);
      SendFatigue(this);
    }
  }
LAB_0865e74b:
  PacketGuard::PacketGuard(local_98);
                    /* try { // try from 0865e772 to 0865e953 has its CatchHandler @ 0865e95b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_98,1,0x2f);
  bVar6 = local_14 != 0;
  if (bVar6) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,local_14);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_98,param_3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_98,param_4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
    Send(this,local_98);
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetInvenSlot((int)local_61,iVar3);
    cMyTrace::cMyTrace(local_24,"bool CUser::use_stackable(short int, int, int, int)",0x38b5,5);
    cMyTrace::operator()
              (local_24,"CUser::use_stackable\tError:%d\tSlot_no:%d\tItem_no:%d",local_14,
               (int)param_1,local_5f);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_98,(int)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_98,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_98,param_3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_98,param_4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_98,true);
    Send(this,local_98);
    ARAD::ARAD_ITEM::arad_secret_shop_event_item(this,local_eb,(CStackableItem *)local_10);
  }
  PacketGuard::~PacketGuard(local_98);
  return !bVar6;
}
```
