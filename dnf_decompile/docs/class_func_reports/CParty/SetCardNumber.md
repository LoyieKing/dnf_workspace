# SetCardNumber

`_ZN6CParty13SetCardNumberEP5CUserc22eClearRewardCardType_t`

`CParty::SetCardNumber(CUser*, char, eClearRewardCardType_t)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b415a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b415a  _ZN6CParty13SetCardNumberEP5CUserc22eClearRewardCardType_t
#           CParty::SetCardNumber(CUser*, char, eClearRewardCardType_t)
# range [0x085b415a, 0x085b44d5]
085b415a +0x000:  push   %ebp
085b415b +0x001:  mov    %esp,%ebp
085b415d +0x003:  push   %ebx
085b415e +0x004:  sub    $0x74,%esp
085b4161 +0x007:  mov    0x10(%ebp),%eax
085b4164 +0x00a:  mov    %al,-0x1c(%ebp)
085b4167 +0x00d:  mov    0xc(%ebp),%eax
085b416a +0x010:  mov    %eax,0x4(%esp)
085b416e +0x014:  mov    0x8(%ebp),%eax
085b4171 +0x017:  mov    %eax,(%esp)
085b4174 +0x01a:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
085b4179 +0x01f:  mov    %eax,-0x18(%ebp)
085b417c +0x022:  cmpl   $0xffffffff,-0x18(%ebp)
085b4180 +0x026:  je     085b44cb <+0x371>
085b4186 +0x02c:  cmpb   $0x3,-0x1c(%ebp)
085b418a +0x030:  jg     085b44cb <+0x371>
085b4190 +0x036:  mov    -0x18(%ebp),%eax
085b4193 +0x039:  movsbl %al,%eax
085b4196 +0x03c:  mov    0x14(%ebp),%edx
085b4199 +0x03f:  mov    %edx,0x8(%esp)
085b419d +0x043:  mov    %eax,0x4(%esp)
085b41a1 +0x047:  mov    0x8(%ebp),%eax
085b41a4 +0x04a:  mov    %eax,(%esp)
085b41a7 +0x04d:  call   085b401c <_ZN6CParty23HaveAlreadySelectedCardEc22eClearRewardCardType_t>  ; CParty::HaveAlreadySelectedCard(char, eClearRewardCardType_t)
085b41ac +0x052:  test   %al,%al
085b41ae +0x054:  je     085b41ba <+0x60>
085b41b0 +0x056:  mov    $0x0,%eax
085b41b5 +0x05b:  jmp    085b44d0 <+0x376>
085b41ba +0x060:  mov    0x14(%ebp),%ecx
085b41bd +0x063:  movsbl -0x1c(%ebp),%eax
085b41c1 +0x067:  mov    0x8(%ebp),%edx
085b41c4 +0x06a:  shl    $0x2,%ecx
085b41c7 +0x06d:  add    %ecx,%edx
085b41c9 +0x06f:  lea    (%edx,%eax,1),%eax
085b41cc +0x072:  add    $0x200,%eax
085b41d1 +0x077:  movzbl 0x4(%eax),%eax
085b41d5 +0x07b:  cmp    $0xff,%al
085b41d7 +0x07d:  jne    085b44cb <+0x371>
085b41dd +0x083:  mov    -0x18(%ebp),%eax
085b41e0 +0x086:  mov    %eax,0xc(%esp)
085b41e4 +0x08a:  mov    0x14(%ebp),%eax
085b41e7 +0x08d:  mov    %eax,0x8(%esp)
085b41eb +0x091:  mov    0xc(%ebp),%eax
085b41ee +0x094:  mov    %eax,0x4(%esp)
085b41f2 +0x098:  mov    0x8(%ebp),%eax
085b41f5 +0x09b:  mov    %eax,(%esp)
085b41f8 +0x09e:  call   085b407c <_ZN6CParty24_checkGoldCardSelectableEP5CUser22eClearRewardCardType_ti>  ; CParty::_checkGoldCardSelectable(CUser*, eClearRewardCardType_t, int)
085b41fd +0x0a3:  xor    $0x1,%eax
085b4200 +0x0a6:  test   %al,%al
085b4202 +0x0a8:  je     085b420e <+0xb4>
085b4204 +0x0aa:  mov    $0x0,%eax
085b4209 +0x0af:  jmp    085b44d0 <+0x376>
085b420e +0x0b4:  mov    0x14(%ebp),%ebx
085b4211 +0x0b7:  movsbl -0x1c(%ebp),%edx
085b4215 +0x0bb:  mov    -0x18(%ebp),%eax
085b4218 +0x0be:  mov    0x8(%ebp),%ecx
085b421b +0x0c1:  shl    $0x2,%ebx
085b421e +0x0c4:  add    %ebx,%ecx
085b4220 +0x0c6:  lea    (%ecx,%edx,1),%edx
085b4223 +0x0c9:  add    $0x200,%edx
085b4229 +0x0cf:  mov    %al,0x4(%edx)
085b422c +0x0d2:  cmpl   $0x1,0x14(%ebp)
085b4230 +0x0d6:  jne    085b44c4 <+0x36a>
085b4236 +0x0dc:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b423b +0x0e1:  movl   $0x41,0x4(%esp)
085b4243 +0x0e9:  mov    %eax,(%esp)
085b4246 +0x0ec:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b424b +0x0f1:  mov    (%eax),%edx
085b424d +0x0f3:  add    $0x34,%edx
085b4250 +0x0f6:  mov    (%edx),%edx
085b4252 +0x0f8:  movl   $0x0,0x4(%esp)
085b425a +0x100:  mov    %eax,(%esp)
085b425d +0x103:  call   *%edx
085b425f +0x105:  xor    $0x1,%eax
085b4262 +0x108:  test   %al,%al
085b4264 +0x10a:  je     085b440e <+0x2b4>
085b426a +0x110:  mov    -0x18(%ebp),%ebx
085b426d +0x113:  mov    0xc(%ebp),%eax
085b4270 +0x116:  mov    %eax,(%esp)
085b4273 +0x119:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085b4278 +0x11e:  mov    %eax,%edx
085b427a +0x120:  mov    0x8(%ebp),%ecx
085b427d +0x123:  imul   $0x7a,%ebx,%eax
085b4280 +0x126:  lea    (%ecx,%eax,1),%eax
085b4283 +0x129:  add    $0x79d,%eax
085b4288 +0x12e:  mov    0x10(%eax),%ecx
085b428b +0x131:  mov    %ecx,0x4(%esp)
085b428f +0x135:  mov    0x14(%eax),%ecx
085b4292 +0x138:  mov    %ecx,0x8(%esp)
085b4296 +0x13c:  mov    0x18(%eax),%ecx
085b4299 +0x13f:  mov    %ecx,0xc(%esp)
085b429d +0x143:  mov    0x1c(%eax),%ecx
085b42a0 +0x146:  mov    %ecx,0x10(%esp)
085b42a4 +0x14a:  mov    0x20(%eax),%ecx
085b42a7 +0x14d:  mov    %ecx,0x14(%esp)
085b42ab +0x151:  mov    0x24(%eax),%ecx
085b42ae +0x154:  mov    %ecx,0x18(%esp)
085b42b2 +0x158:  mov    0x28(%eax),%ecx
085b42b5 +0x15b:  mov    %ecx,0x1c(%esp)
085b42b9 +0x15f:  mov    0x2c(%eax),%ecx
085b42bc +0x162:  mov    %ecx,0x20(%esp)
085b42c0 +0x166:  mov    0x30(%eax),%ecx
085b42c3 +0x169:  mov    %ecx,0x24(%esp)
085b42c7 +0x16d:  mov    0x34(%eax),%ecx
085b42ca +0x170:  mov    %ecx,0x28(%esp)
085b42ce +0x174:  mov    0x38(%eax),%ecx
085b42d1 +0x177:  mov    %ecx,0x2c(%esp)
085b42d5 +0x17b:  mov    0x3c(%eax),%ecx
085b42d8 +0x17e:  mov    %ecx,0x30(%esp)
085b42dc +0x182:  mov    0x40(%eax),%ecx
085b42df +0x185:  mov    %ecx,0x34(%esp)
085b42e3 +0x189:  mov    0x44(%eax),%ecx
085b42e6 +0x18c:  mov    %ecx,0x38(%esp)
085b42ea +0x190:  mov    0x48(%eax),%ecx
085b42ed +0x193:  mov    %ecx,0x3c(%esp)
085b42f1 +0x197:  movzbl 0x4c(%eax),%eax
085b42f5 +0x19b:  mov    %al,0x40(%esp)
085b42f9 +0x19f:  mov    %edx,(%esp)
085b42fc +0x1a2:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
085b4301 +0x1a7:  cmp    $0xffffffff,%eax
085b4304 +0x1aa:  sete   %al
085b4307 +0x1ad:  test   %al,%al
085b4309 +0x1af:  je     085b4340 <+0x1e6>
085b430b +0x1b1:  mov    -0x18(%ebp),%eax
085b430e +0x1b4:  mov    0x8(%ebp),%edx
085b4311 +0x1b7:  imul   $0x7a,%eax,%eax
085b4314 +0x1ba:  lea    (%edx,%eax,1),%eax
085b4317 +0x1bd:  add    $0x79d,%eax
085b431c +0x1c2:  movl   $0x0,0x12(%eax)
085b4323 +0x1c9:  mov    -0x18(%ebp),%eax
085b4326 +0x1cc:  mov    0x8(%ebp),%edx
085b4329 +0x1cf:  imul   $0x7a,%eax,%eax
085b432c +0x1d2:  lea    (%edx,%eax,1),%eax
085b432f +0x1d5:  add    $0x79d,%eax
085b4334 +0x1da:  movl   $0x0,0x17(%eax)
085b433b +0x1e1:  jmp    085b440e <+0x2b4>
085b4340 +0x1e6:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b4345 +0x1eb:  movl   $0x40,0x4(%esp)
085b434d +0x1f3:  mov    %eax,(%esp)
085b4350 +0x1f6:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b4355 +0x1fb:  mov    (%eax),%edx
085b4357 +0x1fd:  add    $0x34,%edx
085b435a +0x200:  mov    (%edx),%edx
085b435c +0x202:  movl   $0x0,0x4(%esp)
085b4364 +0x20a:  mov    %eax,(%esp)
085b4367 +0x20d:  call   *%edx
085b4369 +0x20f:  test   %al,%al
085b436b +0x211:  jne    085b438b <+0x231>
085b436d +0x213:  mov    0x8(%ebp),%eax
085b4370 +0x216:  mov    %eax,(%esp)
085b4373 +0x219:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
085b4378 +0x21e:  test   %al,%al
085b437a +0x220:  jne    085b438b <+0x231>
085b437c +0x222:  mov    0x8(%ebp),%eax
085b437f +0x225:  mov    %eax,(%esp)
085b4382 +0x228:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
085b4387 +0x22d:  test   %al,%al
085b4389 +0x22f:  je     085b43d5 <+0x27b>
085b438b +0x231:  mov    -0x18(%ebp),%eax
085b438e +0x234:  mov    0x8(%ebp),%edx
085b4391 +0x237:  imul   $0x7a,%eax,%eax
085b4394 +0x23a:  lea    (%edx,%eax,1),%eax
085b4397 +0x23d:  add    $0x79d,%eax
085b439c +0x242:  movzbl 0x11(%eax),%eax
085b43a0 +0x246:  cmp    $0x1,%al
085b43a2 +0x248:  jne    085b43d5 <+0x27b>
085b43a4 +0x24a:  mov    0xc(%ebp),%eax
085b43a7 +0x24d:  mov    %eax,(%esp)
085b43aa +0x250:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085b43af +0x255:  movl   $0x2,0x8(%esp)
085b43b7 +0x25d:  movl   $0x1,0x4(%esp)
085b43bf +0x265:  mov    %eax,(%esp)
085b43c2 +0x268:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
085b43c7 +0x26d:  xor    $0x1,%eax
085b43ca +0x270:  test   %al,%al
085b43cc +0x272:  je     085b43d5 <+0x27b>
085b43ce +0x274:  mov    $0x1,%eax
085b43d3 +0x279:  jmp    085b43da <+0x280>
085b43d5 +0x27b:  mov    $0x0,%eax
085b43da +0x280:  test   %al,%al
085b43dc +0x282:  je     085b440e <+0x2b4>
085b43de +0x284:  mov    -0x18(%ebp),%eax
085b43e1 +0x287:  mov    0x8(%ebp),%edx
085b43e4 +0x28a:  imul   $0x7a,%eax,%eax
085b43e7 +0x28d:  lea    (%edx,%eax,1),%eax
085b43ea +0x290:  add    $0x79d,%eax
085b43ef +0x295:  movl   $0x0,0x12(%eax)
085b43f6 +0x29c:  mov    -0x18(%ebp),%eax
085b43f9 +0x29f:  mov    0x8(%ebp),%edx
085b43fc +0x2a2:  imul   $0x7a,%eax,%eax
085b43ff +0x2a5:  lea    (%edx,%eax,1),%eax
085b4402 +0x2a8:  add    $0x79d,%eax
085b4407 +0x2ad:  movl   $0x0,0x17(%eax)
085b440e +0x2b4:  cmpl   $0x0,0xc(%ebp)
085b4412 +0x2b8:  je     085b44c4 <+0x36a>
085b4418 +0x2be:  movl   $0x0,0xc(%esp)
085b4420 +0x2c6:  movl   $0x0,0x8(%esp)
085b4428 +0x2ce:  movl   $0x8,0x4(%esp)
085b4430 +0x2d6:  mov    0xc(%ebp),%eax
085b4433 +0x2d9:  mov    %eax,(%esp)
085b4436 +0x2dc:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085b443b +0x2e1:  mov    -0x18(%ebp),%eax
085b443e +0x2e4:  mov    0x8(%ebp),%edx
085b4441 +0x2e7:  imul   $0x7a,%eax,%eax
085b4444 +0x2ea:  lea    (%edx,%eax,1),%eax
085b4447 +0x2ed:  add    $0x79d,%eax
085b444c +0x2f2:  mov    0x12(%eax),%eax
085b444f +0x2f5:  mov    %eax,-0x14(%ebp)
085b4452 +0x2f8:  cmpl   $0x0,-0x14(%ebp)
085b4456 +0x2fc:  je     085b44c4 <+0x36a>
085b4458 +0x2fe:  mov    -0x14(%ebp),%ebx
085b445b +0x301:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b4460 +0x306:  mov    %ebx,0x4(%esp)
085b4464 +0x30a:  mov    %eax,(%esp)
085b4467 +0x30d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085b446c +0x312:  mov    %eax,-0x10(%ebp)
085b446f +0x315:  cmpl   $0x0,-0x10(%ebp)
085b4473 +0x319:  je     085b44c4 <+0x36a>
085b4475 +0x31b:  mov    -0x10(%ebp),%eax
085b4478 +0x31e:  mov    %eax,(%esp)
085b447b +0x321:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085b4480 +0x326:  mov    %eax,-0xc(%ebp)
085b4483 +0x329:  cmpl   $0x0,-0xc(%ebp)
085b4487 +0x32d:  je     085b44a1 <+0x347>
085b4489 +0x32f:  cmpl   $0x1,-0xc(%ebp)
085b448d +0x333:  je     085b44a1 <+0x347>
085b448f +0x335:  cmpl   $0x2,-0xc(%ebp)
085b4493 +0x339:  je     085b44a1 <+0x347>
085b4495 +0x33b:  cmpl   $0x3,-0xc(%ebp)
085b4499 +0x33f:  je     085b44a1 <+0x347>
085b449b +0x341:  cmpl   $0x4,-0xc(%ebp)
085b449f +0x345:  jne    085b44c4 <+0x36a>
085b44a1 +0x347:  movl   $0x0,0xc(%esp)
085b44a9 +0x34f:  movl   $0x0,0x8(%esp)
085b44b1 +0x357:  movl   $0x15,0x4(%esp)
085b44b9 +0x35f:  mov    0xc(%ebp),%eax
085b44bc +0x362:  mov    %eax,(%esp)
085b44bf +0x365:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085b44c4 +0x36a:  mov    $0x1,%eax
085b44c9 +0x36f:  jmp    085b44d0 <+0x376>
085b44cb +0x371:  mov    $0x0,%eax
085b44d0 +0x376:  add    $0x74,%esp
085b44d3 +0x379:  pop    %ebx
085b44d4 +0x37a:  pop    %ebp
085b44d5 +0x37b:  ret
```

## 反编译 C

```c
// CParty::SetCardNumber @ 0x85b415a

/* CParty::SetCardNumber(CUser*, char, eClearRewardCardType_t) */

undefined4 __thiscall
CParty::SetCardNumber(CParty *this,CUserCharacInfo *param_1,char param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  CInventory *pCVar7;
  CDataManager *this_00;
  CItem *this_01;
  
  iVar3 = GetMemberSlotNo(this,(CUser *)param_1);
  if ((iVar3 == -1) || ('\x03' < param_2)) {
    return 0;
  }
  cVar2 = HaveAlreadySelectedCard(this,(int)(char)SUB41(iVar3,0),param_4);
  if (cVar2 != '\0') {
    return 0;
  }
  if (this[(int)param_2 + param_4 * 4 + 0x204] != (CParty)0xff) {
    return 0;
  }
  cVar2 = _checkGoldCardSelectable(this,param_1,param_4,iVar3);
  if (cVar2 != '\x01') {
    return 0;
  }
  this[(int)param_2 + param_4 * 4 + 0x204] = SUB41(iVar3,0);
  if (param_4 != 1) {
    return 1;
  }
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x41);
  cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
  if (cVar2 == '\x01') goto LAB_085b440e;
  uVar5 = CUserCharacInfo::getCurCharacInvenR(param_1);
  iVar6 = CInventory::tryInsertItemIntoInventory
                    (uVar5,*(undefined4 *)(this + iVar3 * 0x7a + 0x7ad),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7b1),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7b5),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7b9),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7bd),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7c1),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7c5),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7c9),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7cd),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7d1),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7d5),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7d9),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7dd),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7e1),
                     *(undefined4 *)(this + iVar3 * 0x7a + 0x7e5),this[iVar3 * 0x7a + 0x7e9]);
  if (iVar6 == -1) {
    *(undefined4 *)(this + iVar3 * 0x7a + 0x7af) = 0;
    *(undefined4 *)(this + iVar3 * 0x7a + 0x7b4) = 0;
    goto LAB_085b440e;
  }
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x40);
  cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
  if ((((cVar2 == '\0') && (cVar2 = IsReturnUserParty(this), cVar2 == '\0')) &&
      (cVar2 = IsEventCharacParty(this), cVar2 == '\0')) ||
     (this[iVar3 * 0x7a + 0x7ae] != (CParty)0x1)) {
LAB_085b43d5:
    bVar1 = false;
  }
  else {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(param_1);
    cVar2 = CInventory::check_empty_count(pCVar7,1,2);
    if (cVar2 == '\x01') goto LAB_085b43d5;
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined4 *)(this + iVar3 * 0x7a + 0x7af) = 0;
    *(undefined4 *)(this + iVar3 * 0x7a + 0x7b4) = 0;
  }
LAB_085b440e:
  if (param_1 != (CUserCharacInfo *)0x0) {
    APSystem::CUserProc::ClearActionAndSendtoUser(param_1,8,0,0);
    iVar3 = *(int *)(this + iVar3 * 0x7a + 0x7af);
    if (iVar3 != 0) {
      this_00 = (CDataManager *)G_CDataManager();
      this_01 = (CItem *)CDataManager::find_item(this_00,iVar3);
      if ((this_01 != (CItem *)0x0) &&
         (((iVar3 = CItem::get_rarity(this_01), iVar3 == 0 || (iVar3 == 1)) ||
          ((iVar3 == 2 || ((iVar3 == 3 || (iVar3 == 4)))))))) {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x15,0,0);
      }
    }
  }
  return 1;
}
```
