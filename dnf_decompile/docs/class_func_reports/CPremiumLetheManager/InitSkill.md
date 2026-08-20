# InitSkill

`_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND`

`CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c421e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c421e  _ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND
#           CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)
# range [0x085c421e, 0x085c46e7]
085c421e +0x000:  push   %ebp
085c421f +0x001:  mov    %esp,%ebp
085c4221 +0x003:  push   %edi
085c4222 +0x004:  push   %esi
085c4223 +0x005:  push   %ebx
085c4224 +0x006:  sub    $0x12c,%esp
085c422a +0x00c:  mov    0x10(%ebp),%eax
085c422d +0x00f:  mov    %al,-0x10c(%ebp)
085c4233 +0x015:  mov    0xc(%ebp),%eax
085c4236 +0x018:  mov    %eax,(%esp)
085c4239 +0x01b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c423e +0x020:  mov    0x14(%ebp),%edx
085c4241 +0x023:  mov    %edx,0x4(%esp)
085c4245 +0x027:  mov    %eax,(%esp)
085c4248 +0x02a:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
085c424d +0x02f:  mov    0xc(%ebp),%eax
085c4250 +0x032:  mov    %eax,(%esp)
085c4253 +0x035:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c4258 +0x03a:  mov    0xc(%ebp),%edx
085c425b +0x03d:  mov    %edx,0x4(%esp)
085c425f +0x041:  mov    %eax,(%esp)
085c4262 +0x044:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
085c4267 +0x049:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085c426c +0x04e:  mov    %eax,(%esp)
085c426f +0x051:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
085c4274 +0x056:  test   %al,%al
085c4276 +0x058:  je     085c43b8 <+0x19a>
085c427c +0x05e:  movl   $0x0,-0x28(%ebp)
085c4283 +0x065:  mov    0x14(%ebp),%eax
085c4286 +0x068:  cmp    $0xffffffff,%eax
085c4289 +0x06b:  je     085c4292 <+0x74>
085c428b +0x06d:  mov    0x14(%ebp),%eax
085c428e +0x070:  test   %eax,%eax
085c4290 +0x072:  jne    085c429b <+0x7d>
085c4292 +0x074:  movl   $0x1,-0x28(%ebp)
085c4299 +0x07b:  jmp    085c42a2 <+0x84>
085c429b +0x07d:  movl   $0x2,-0x28(%ebp)
085c42a2 +0x084:  mov    -0x28(%ebp),%eax
085c42a5 +0x087:  mov    %eax,0xc(%esp)
085c42a9 +0x08b:  movl   $0x1,0x8(%esp)
085c42b1 +0x093:  movl   $0x0,0x4(%esp)
085c42b9 +0x09b:  mov    0xc(%ebp),%eax
085c42bc +0x09e:  mov    %eax,(%esp)
085c42bf +0x0a1:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
085c42c4 +0x0a6:  mov    0xc(%ebp),%eax
085c42c7 +0x0a9:  mov    %eax,(%esp)
085c42ca +0x0ac:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085c42cf +0x0b1:  mov    %eax,%esi
085c42d1 +0x0b3:  mov    0xc(%ebp),%eax
085c42d4 +0x0b6:  mov    %eax,(%esp)
085c42d7 +0x0b9:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
085c42dc +0x0be:  movsbl %al,%eax
085c42df +0x0c1:  mov    %eax,-0x110(%ebp)
085c42e5 +0x0c7:  mov    0xc(%ebp),%eax
085c42e8 +0x0ca:  mov    %eax,(%esp)
085c42eb +0x0cd:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
085c42f0 +0x0d2:  movsbl %al,%edi
085c42f3 +0x0d5:  mov    0xc(%ebp),%eax
085c42f6 +0x0d8:  mov    %eax,(%esp)
085c42f9 +0x0db:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085c42fe +0x0e0:  mov    %eax,%ebx
085c4300 +0x0e2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c4305 +0x0e7:  add    $0xa800,%eax
085c430a +0x0ec:  movl   $0x0,0x14(%esp)
085c4312 +0x0f4:  mov    %esi,0x10(%esp)
085c4316 +0x0f8:  mov    -0x110(%ebp),%edx
085c431c +0x0fe:  mov    %edx,0xc(%esp)
085c4320 +0x102:  mov    %edi,0x8(%esp)
085c4324 +0x106:  mov    %ebx,0x4(%esp)
085c4328 +0x10a:  mov    %eax,(%esp)
085c432b +0x10d:  call   08a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>  ; PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const
085c4330 +0x112:  mov    %eax,-0x24(%ebp)
085c4333 +0x115:  mov    0xc(%ebp),%eax
085c4336 +0x118:  mov    %eax,(%esp)
085c4339 +0x11b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c433e +0x120:  mov    0x14(%ebp),%edx
085c4341 +0x123:  mov    %edx,0x8(%esp)
085c4345 +0x127:  mov    -0x24(%ebp),%edx
085c4348 +0x12a:  mov    %edx,0x4(%esp)
085c434c +0x12e:  mov    %eax,(%esp)
085c434f +0x131:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
085c4354 +0x136:  cmpb   $0x0,-0x10c(%ebp)
085c435b +0x13d:  je     085c46db <+0x4bd>
085c4361 +0x143:  mov    0xc(%ebp),%eax
085c4364 +0x146:  mov    %eax,(%esp)
085c4367 +0x149:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
085c436c +0x14e:  mov    0xc(%ebp),%eax
085c436f +0x151:  mov    %eax,(%esp)
085c4372 +0x154:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c4377 +0x159:  mov    %eax,%ebx
085c4379 +0x15b:  movl   $0x0,0xc(%esp)
085c4381 +0x163:  movl   $0xb1,0x8(%esp)
085c4389 +0x16b:  movl   $&_ZZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
085c4391 +0x173:  lea    -0x5c(%ebp),%eax
085c4394 +0x176:  mov    %eax,(%esp)
085c4397 +0x179:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c439c +0x17e:  mov    %ebx,0x8(%esp)
085c43a0 +0x182:  movl   $"ONE_DAY_LETHE : SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",0x4(%esp)
085c43a8 +0x18a:  lea    -0x5c(%ebp),%eax
085c43ab +0x18d:  mov    %eax,(%esp)
085c43ae +0x190:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c43b3 +0x195:  jmp    085c46dc <+0x4be>
085c43b8 +0x19a:  mov    0x14(%ebp),%eax
085c43bb +0x19d:  cmp    $0xffffffff,%eax
085c43be +0x1a0:  je     085c43c7 <+0x1a9>
085c43c0 +0x1a2:  mov    0x14(%ebp),%eax
085c43c3 +0x1a5:  test   %eax,%eax
085c43c5 +0x1a7:  jne    085c43f0 <+0x1d2>
085c43c7 +0x1a9:  mov    0xc(%ebp),%eax
085c43ca +0x1ac:  mov    %eax,(%esp)
085c43cd +0x1af:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085c43d2 +0x1b4:  mov    %eax,%ebx
085c43d4 +0x1b6:  mov    0xc(%ebp),%eax
085c43d7 +0x1b9:  mov    %eax,(%esp)
085c43da +0x1bc:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c43df +0x1c1:  add    $0x46,%eax
085c43e2 +0x1c4:  mov    %ebx,0x4(%esp)
085c43e6 +0x1c8:  mov    %eax,(%esp)
085c43e9 +0x1cb:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
085c43ee +0x1d0:  jmp    085c4419 <+0x1fb>
085c43f0 +0x1d2:  mov    0xc(%ebp),%eax
085c43f3 +0x1d5:  mov    %eax,(%esp)
085c43f6 +0x1d8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085c43fb +0x1dd:  mov    %eax,%ebx
085c43fd +0x1df:  mov    0xc(%ebp),%eax
085c4400 +0x1e2:  mov    %eax,(%esp)
085c4403 +0x1e5:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c4408 +0x1ea:  add    $0x1de,%eax
085c440d +0x1ef:  mov    %ebx,0x4(%esp)
085c4411 +0x1f3:  mov    %eax,(%esp)
085c4414 +0x1f6:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
085c4419 +0x1fb:  lea    -0x68(%ebp),%eax
085c441c +0x1fe:  mov    %eax,(%esp)
085c441f +0x201:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
085c4424 +0x206:  lea    -0x70(%ebp),%eax
085c4427 +0x209:  mov    %eax,(%esp)
085c442a +0x20c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
085c442f +0x211:  mov    0xc(%ebp),%eax
085c4432 +0x214:  mov    %eax,(%esp)
085c4435 +0x217:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
085c443a +0x21c:  movsbl %al,%esi
085c443d +0x21f:  mov    0xc(%ebp),%eax
085c4440 +0x222:  mov    %eax,(%esp)
085c4443 +0x225:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
085c4448 +0x22a:  movsbl %al,%ebx
085c444b +0x22d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c4450 +0x232:  mov    0x14(%eax),%edi
085c4453 +0x235:  mov    0xc(%ebp),%eax
085c4456 +0x238:  mov    %eax,(%esp)
085c4459 +0x23b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085c445e +0x240:  imul   $0x7dc,%eax,%eax
085c4464 +0x246:  lea    (%edi,%eax,1),%edx
085c4467 +0x249:  movl   $0x0,0x10(%esp)
085c446f +0x251:  lea    -0x68(%ebp),%eax
085c4472 +0x254:  mov    %eax,0xc(%esp)
085c4476 +0x258:  mov    %esi,0x8(%esp)
085c447a +0x25c:  mov    %ebx,0x4(%esp)
085c447e +0x260:  mov    %edx,(%esp)
085c4481 +0x263:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
085c4486 +0x268:  mov    %al,-0x31(%ebp)
085c4489 +0x26b:  movzbl -0x31(%ebp),%eax
085c448d +0x26f:  xor    $0x1,%eax
085c4490 +0x272:  test   %al,%al
085c4492 +0x274:  jne    085c46ce <+0x4b0>
085c4498 +0x27a:  movl   $0x0,-0x20(%ebp)
085c449f +0x281:  jmp    085c4507 <+0x2e9>
085c44a1 +0x283:  mov    -0x20(%ebp),%eax
085c44a4 +0x286:  mov    %eax,0x4(%esp)
085c44a8 +0x28a:  lea    -0x68(%ebp),%eax
085c44ab +0x28d:  mov    %eax,(%esp)
085c44ae +0x290:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085c44b3 +0x295:  mov    0x4(%eax),%edx
085c44b6 +0x298:  mov    (%eax),%eax
085c44b8 +0x29a:  mov    %eax,-0x70(%ebp)
085c44bb +0x29d:  mov    %edx,-0x6c(%ebp)
085c44be +0x2a0:  mov    -0x70(%ebp),%eax
085c44c1 +0x2a3:  mov    %eax,-0x3c(%ebp)
085c44c4 +0x2a6:  mov    -0x6c(%ebp),%eax
085c44c7 +0x2a9:  mov    %eax,-0x38(%ebp)
085c44ca +0x2ac:  mov    0xc(%ebp),%eax
085c44cd +0x2af:  mov    %eax,(%esp)
085c44d0 +0x2b2:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085c44d5 +0x2b7:  mov    %eax,%ebx
085c44d7 +0x2b9:  mov    0xc(%ebp),%eax
085c44da +0x2bc:  mov    %eax,(%esp)
085c44dd +0x2bf:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c44e2 +0x2c4:  mov    0x14(%ebp),%edx
085c44e5 +0x2c7:  mov    %edx,0x10(%esp)
085c44e9 +0x2cb:  mov    -0x38(%ebp),%edx
085c44ec +0x2ce:  mov    %edx,0xc(%esp)
085c44f0 +0x2d2:  mov    -0x3c(%ebp),%edx
085c44f3 +0x2d5:  mov    %edx,0x8(%esp)
085c44f7 +0x2d9:  mov    %ebx,0x4(%esp)
085c44fb +0x2dd:  mov    %eax,(%esp)
085c44fe +0x2e0:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
085c4503 +0x2e5:  addl   $0x1,-0x20(%ebp)
085c4507 +0x2e9:  lea    -0x68(%ebp),%eax
085c450a +0x2ec:  mov    %eax,(%esp)
085c450d +0x2ef:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085c4512 +0x2f4:  cmp    -0x20(%ebp),%eax
085c4515 +0x2f7:  setg   %al
085c4518 +0x2fa:  test   %al,%al
085c451a +0x2fc:  jne    085c44a1 <+0x283>
085c451c +0x2fe:  mov    0xc(%ebp),%eax
085c451f +0x301:  mov    %eax,(%esp)
085c4522 +0x304:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
085c4527 +0x309:  mov    %eax,%ebx
085c4529 +0x30b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c452e +0x310:  mov    %ebx,0x4(%esp)
085c4532 +0x314:  mov    %eax,(%esp)
085c4535 +0x317:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
085c453a +0x31c:  mov    %eax,-0x30(%ebp)
085c453d +0x31f:  cmpl   $0x0,-0x30(%ebp)
085c4541 +0x323:  je     085c45d6 <+0x3b8>
085c4547 +0x329:  movl   $0x0,-0x1c(%ebp)
085c454e +0x330:  jmp    085c45ba <+0x39c>
085c4550 +0x332:  mov    0xc(%ebp),%eax
085c4553 +0x335:  mov    %eax,(%esp)
085c4556 +0x338:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085c455b +0x33d:  mov    %eax,0x4(%esp)
085c455f +0x341:  mov    0xc(%ebp),%eax
085c4562 +0x344:  mov    %eax,(%esp)
085c4565 +0x347:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
085c456a +0x34c:  mov    %eax,%esi
085c456c +0x34e:  mov    -0x30(%ebp),%eax
085c456f +0x351:  lea    0xc(%eax),%edx
085c4572 +0x354:  mov    -0x1c(%ebp),%eax
085c4575 +0x357:  mov    %eax,0x4(%esp)
085c4579 +0x35b:  mov    %edx,(%esp)
085c457c +0x35e:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085c4581 +0x363:  mov    (%eax),%edi
085c4583 +0x365:  mov    0xc(%ebp),%eax
085c4586 +0x368:  mov    %eax,(%esp)
085c4589 +0x36b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085c458e +0x370:  mov    %eax,%ebx
085c4590 +0x372:  mov    0xc(%ebp),%eax
085c4593 +0x375:  mov    %eax,(%esp)
085c4596 +0x378:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
085c459b +0x37d:  mov    0x14(%ebp),%edx
085c459e +0x380:  mov    %edx,0x10(%esp)
085c45a2 +0x384:  mov    %esi,0xc(%esp)
085c45a6 +0x388:  mov    %edi,0x8(%esp)
085c45aa +0x38c:  mov    %ebx,0x4(%esp)
085c45ae +0x390:  mov    %eax,(%esp)
085c45b1 +0x393:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
085c45b6 +0x398:  addl   $0x1,-0x1c(%ebp)
085c45ba +0x39c:  mov    -0x30(%ebp),%eax
085c45bd +0x39f:  add    $0xc,%eax
085c45c0 +0x3a2:  mov    %eax,(%esp)
085c45c3 +0x3a5:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085c45c8 +0x3aa:  cmp    -0x1c(%ebp),%eax
085c45cb +0x3ad:  seta   %al
085c45ce +0x3b0:  test   %al,%al
085c45d0 +0x3b2:  jne    085c4550 <+0x332>
085c45d6 +0x3b8:  lea    -0x104(%ebp),%eax
085c45dc +0x3be:  mov    %eax,(%esp)
085c45df +0x3c1:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
085c45e4 +0x3c6:  movl   $0x0,-0x2c(%ebp)
085c45eb +0x3cd:  mov    0x14(%ebp),%eax
085c45ee +0x3d0:  cmp    $0xffffffff,%eax
085c45f1 +0x3d3:  je     085c45fa <+0x3dc>
085c45f3 +0x3d5:  mov    0x14(%ebp),%eax
085c45f6 +0x3d8:  test   %eax,%eax
085c45f8 +0x3da:  jne    085c4603 <+0x3e5>
085c45fa +0x3dc:  movl   $0x1,-0x2c(%ebp)
085c4601 +0x3e3:  jmp    085c460a <+0x3ec>
085c4603 +0x3e5:  movl   $0x2,-0x2c(%ebp)
085c460a +0x3ec:  movl   $0x0,0xc(%esp)
085c4612 +0x3f4:  mov    -0x2c(%ebp),%eax
085c4615 +0x3f7:  mov    %eax,0x8(%esp)
085c4619 +0x3fb:  mov    0xc(%ebp),%eax
085c461c +0x3fe:  mov    %eax,0x4(%esp)
085c4620 +0x402:  lea    -0x104(%ebp),%eax
085c4626 +0x408:  mov    %eax,(%esp)
085c4629 +0x40b:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
085c462e +0x410:  cmpb   $0x0,-0x10c(%ebp)
085c4635 +0x417:  je     085c46a3 <+0x485>
085c4637 +0x419:  mov    0xc(%ebp),%eax
085c463a +0x41c:  mov    %eax,(%esp)
085c463d +0x41f:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
085c4642 +0x424:  mov    0xc(%ebp),%eax
085c4645 +0x427:  mov    %eax,(%esp)
085c4648 +0x42a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c464d +0x42f:  mov    %eax,%ebx
085c464f +0x431:  movl   $0x0,0xc(%esp)
085c4657 +0x439:  movl   $0xf7,0x8(%esp)
085c465f +0x441:  movl   $&_ZZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
085c4667 +0x449:  lea    -0x4c(%ebp),%eax
085c466a +0x44c:  mov    %eax,(%esp)
085c466d +0x44f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c4672 +0x454:  mov    %ebx,0x8(%esp)
085c4676 +0x458:  movl   $"ONE_DAY_LETHE : SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",0x4(%esp)
085c467e +0x460:  lea    -0x4c(%ebp),%eax
085c4681 +0x463:  mov    %eax,(%esp)
085c4684 +0x466:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c4689 +0x46b:  jmp    085c46a3 <+0x485>
085c468b +0x46d:  mov    %edx,%ebx
085c468d +0x46f:  mov    %eax,%esi
085c468f +0x471:  lea    -0x104(%ebp),%eax
085c4695 +0x477:  mov    %eax,(%esp)
085c4698 +0x47a:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
085c469d +0x47f:  mov    %esi,%eax
085c469f +0x481:  mov    %ebx,%edx
085c46a1 +0x483:  jmp    085c46b3 <+0x495>
085c46a3 +0x485:  lea    -0x104(%ebp),%eax
085c46a9 +0x48b:  mov    %eax,(%esp)
085c46ac +0x48e:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
085c46b1 +0x493:  jmp    085c46ce <+0x4b0>
085c46b3 +0x495:  mov    %edx,%ebx
085c46b5 +0x497:  mov    %eax,%esi
085c46b7 +0x499:  lea    -0x68(%ebp),%eax
085c46ba +0x49c:  mov    %eax,(%esp)
085c46bd +0x49f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085c46c2 +0x4a4:  mov    %esi,%eax
085c46c4 +0x4a6:  mov    %ebx,%edx
085c46c6 +0x4a8:  mov    %eax,(%esp)
085c46c9 +0x4ab:  call   08ae3750 <_Unwind_Resume>
085c46ce +0x4b0:  lea    -0x68(%ebp),%eax
085c46d1 +0x4b3:  mov    %eax,(%esp)
085c46d4 +0x4b6:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085c46d9 +0x4bb:  jmp    085c46dc <+0x4be>
085c46db +0x4bd:  nop
085c46dc +0x4be:  add    $0x12c,%esp
085c46e2 +0x4c4:  pop    %ebx
085c46e3 +0x4c5:  pop    %esi
085c46e4 +0x4c6:  pop    %edi
085c46e5 +0x4c7:  pop    %ebp
085c46e6 +0x4c8:  ret
085c46e7 +0x4c9:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::InitSkill @ 0x85c421e

/* CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND) */

void __thiscall
CPremiumLetheManager::InitSkill(undefined4 this,CUserCharacInfo *param_1,char param_2,int param_4)

{
  char cVar1;
  char cVar2;
  SkillSlot *pSVar3;
  GameWorld *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  CSkillChanger local_108 [148];
  undefined4 local_74;
  undefined4 local_70;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_6c [12];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
  SkillSlot::clear_all_skills(pSVar3,param_4);
  pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
  SkillSlot::set_parent(pSVar3,(CUser *)param_1);
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
  if (cVar1 == '\0') {
    if ((param_4 == -1) || (param_4 == 0)) {
      iVar4 = CUserCharacInfo::get_charac_job(param_1);
      iVar5 = CUserCharacInfo::getCurCharacSkillW(param_1);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar5 + 0x46),iVar4);
    }
    else {
      iVar4 = CUserCharacInfo::get_charac_job(param_1);
      iVar5 = CUserCharacInfo::getCurCharacSkillW(param_1);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar5 + 0x1de),iVar4);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
    std::pair<int,int>::pair((pair<int,int> *)&local_74);
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(param_1);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(param_1);
                    /* try { // try from 085c444b to 085c45b5 has its CatchHandler @ 085c46b3 */
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job(param_1);
    local_35 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar4 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_6c,0);
    if (local_35 == '\x01') {
      local_24 = 0;
      while( true ) {
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_6c);
        if (iVar4 <= (int)local_24) break;
        puVar9 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (local_6c,local_24);
        local_70 = puVar9[1];
        local_74 = *puVar9;
        local_40 = local_74;
        local_3c = local_70;
        uVar7 = CUserCharacInfo::get_charac_job(param_1);
        pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
        SkillSlot::growtype_skill(pSVar3,uVar7,local_40,local_3c,param_4);
        local_24 = local_24 + 1;
      }
      CUserCharacInfo::GetCurCharacExpertJobType(param_1);
      iVar4 = G_CDataManager();
      local_34 = CDataManager::GetExpertJobScript(iVar4);
      if (local_34 != 0) {
        local_20 = 0;
        while( true ) {
          uVar11 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_34 + 0xc));
          if (uVar11 <= local_20) break;
          iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp(param_1);
          uVar8 = CUser::GetCurExpertJobLevel((CUser *)param_1,iVar4);
          puVar9 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_34 + 0xc),local_20);
          uVar7 = *puVar9;
          uVar10 = CUserCharacInfo::get_charac_job(param_1);
          pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
          SkillSlot::growtype_skill(pSVar3,uVar10,uVar7,uVar8,param_4);
          local_20 = local_20 + 1;
        }
      }
      WongWork::CSkillChanger::CSkillChanger(local_108);
      if ((param_4 == -1) || (param_4 == 0)) {
        local_30 = 1;
      }
      else {
        local_30 = 2;
      }
                    /* try { // try from 085c4629 to 085c4688 has its CatchHandler @ 085c468b */
      WongWork::CSkillChanger::SkillInitialize(local_108,(CUser *)param_1,local_30,false);
      if (param_2 != '\0') {
        CUser::send_skill_info((CUser *)param_1);
        uVar7 = CUserCharacInfo::getCurCharacName(param_1);
        cMyTrace::cMyTrace(local_50,
                           "void CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)"
                           ,0xf7,0);
        cMyTrace::operator()
                  (local_50,"ONE_DAY_LETHE : SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar7
                  );
      }
      WongWork::CSkillChanger::~CSkillChanger(local_108);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
  }
  else {
    if ((param_4 == -1) || (param_4 == 0)) {
      local_2c = 1;
    }
    else {
      local_2c = 2;
    }
    CUser::givePvPSkillTree((CUser *)param_1,0,true,local_2c);
    iVar4 = CUserCharacInfo::get_pvp_grade(param_1);
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(param_1);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(param_1);
    iVar5 = CUserCharacInfo::get_charac_job(param_1);
    iVar6 = G_CDataManager();
    local_28 = PvPSkillTreeParameterScript::getPvPSkillPoint
                         ((PvPSkillTreeParameterScript *)(iVar6 + 0xa800),iVar5,(int)cVar2,
                          (int)cVar1,iVar4,false);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(param_1);
    SkillSlot::set_remain_sp_at_index(pSVar3,local_28,param_4);
    if (param_2 != '\0') {
      CUser::send_skill_info((CUser *)param_1);
      uVar7 = CUserCharacInfo::getCurCharacName(param_1);
      cMyTrace::cMyTrace(local_60,
                         "void CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)",
                         0xb1,0);
      cMyTrace::operator()
                (local_60,"ONE_DAY_LETHE : SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar7);
    }
  }
  return;
}
```
