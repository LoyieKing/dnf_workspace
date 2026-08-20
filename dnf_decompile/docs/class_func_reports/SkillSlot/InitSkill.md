# InitSkill

`_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND`

`SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08608120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08608120  _ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND
#           SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)
# range [0x08608120, 0x086085f9]
08608120 +0x000:  push   %ebp
08608121 +0x001:  mov    %esp,%ebp
08608123 +0x003:  push   %edi
08608124 +0x004:  push   %esi
08608125 +0x005:  push   %ebx
08608126 +0x006:  sub    $0x12c,%esp
0860812c +0x00c:  mov    0xc(%ebp),%eax
0860812f +0x00f:  mov    %al,-0x10c(%ebp)
08608135 +0x015:  mov    0x8(%ebp),%eax
08608138 +0x018:  mov    (%eax),%eax
0860813a +0x01a:  test   %eax,%eax
0860813c +0x01c:  jne    08608148 <+0x28>
0860813e +0x01e:  mov    $0x0,%ebx
08608143 +0x023:  jmp    086085ed <+0x4cd>
08608148 +0x028:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0860814d +0x02d:  mov    %eax,(%esp)
08608150 +0x030:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08608155 +0x035:  test   %al,%al
08608157 +0x037:  je     086082ba <+0x19a>
0860815d +0x03d:  movl   $0x0,-0x28(%ebp)
08608164 +0x044:  mov    0x10(%ebp),%eax
08608167 +0x047:  cmp    $0xffffffff,%eax
0860816a +0x04a:  je     08608173 <+0x53>
0860816c +0x04c:  mov    0x10(%ebp),%eax
0860816f +0x04f:  test   %eax,%eax
08608171 +0x051:  jne    0860817c <+0x5c>
08608173 +0x053:  movl   $0x1,-0x28(%ebp)
0860817a +0x05a:  jmp    08608183 <+0x63>
0860817c +0x05c:  movl   $0x2,-0x28(%ebp)
08608183 +0x063:  mov    0x8(%ebp),%eax
08608186 +0x066:  mov    (%eax),%eax
08608188 +0x068:  mov    -0x28(%ebp),%edx
0860818b +0x06b:  mov    %edx,0xc(%esp)
0860818f +0x06f:  movl   $0x1,0x8(%esp)
08608197 +0x077:  movl   $0x0,0x4(%esp)
0860819f +0x07f:  mov    %eax,(%esp)
086081a2 +0x082:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
086081a7 +0x087:  mov    0x8(%ebp),%eax
086081aa +0x08a:  mov    (%eax),%eax
086081ac +0x08c:  mov    %eax,(%esp)
086081af +0x08f:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
086081b4 +0x094:  mov    %eax,%esi
086081b6 +0x096:  mov    0x8(%ebp),%eax
086081b9 +0x099:  mov    (%eax),%eax
086081bb +0x09b:  mov    %eax,(%esp)
086081be +0x09e:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086081c3 +0x0a3:  movsbl %al,%eax
086081c6 +0x0a6:  mov    %eax,-0x110(%ebp)
086081cc +0x0ac:  mov    0x8(%ebp),%eax
086081cf +0x0af:  mov    (%eax),%eax
086081d1 +0x0b1:  mov    %eax,(%esp)
086081d4 +0x0b4:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
086081d9 +0x0b9:  movsbl %al,%edi
086081dc +0x0bc:  mov    0x8(%ebp),%eax
086081df +0x0bf:  mov    (%eax),%eax
086081e1 +0x0c1:  mov    %eax,(%esp)
086081e4 +0x0c4:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086081e9 +0x0c9:  mov    %eax,%ebx
086081eb +0x0cb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086081f0 +0x0d0:  add    $0xa800,%eax
086081f5 +0x0d5:  movl   $0x0,0x14(%esp)
086081fd +0x0dd:  mov    %esi,0x10(%esp)
08608201 +0x0e1:  mov    -0x110(%ebp),%edx
08608207 +0x0e7:  mov    %edx,0xc(%esp)
0860820b +0x0eb:  mov    %edi,0x8(%esp)
0860820f +0x0ef:  mov    %ebx,0x4(%esp)
08608213 +0x0f3:  mov    %eax,(%esp)
08608216 +0x0f6:  call   08a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>  ; PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const
0860821b +0x0fb:  mov    %eax,-0x24(%ebp)
0860821e +0x0fe:  mov    0x10(%ebp),%eax
08608221 +0x101:  mov    %eax,0x8(%esp)
08608225 +0x105:  mov    -0x24(%ebp),%eax
08608228 +0x108:  mov    %eax,0x4(%esp)
0860822c +0x10c:  mov    0x8(%ebp),%eax
0860822f +0x10f:  mov    %eax,(%esp)
08608232 +0x112:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
08608237 +0x117:  cmpb   $0x0,-0x10c(%ebp)
0860823e +0x11e:  je     08608296 <+0x176>
08608240 +0x120:  mov    0x8(%ebp),%eax
08608243 +0x123:  mov    (%eax),%eax
08608245 +0x125:  mov    %eax,(%esp)
08608248 +0x128:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0860824d +0x12d:  mov    0x8(%ebp),%eax
08608250 +0x130:  mov    (%eax),%eax
08608252 +0x132:  mov    %eax,(%esp)
08608255 +0x135:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0860825a +0x13a:  mov    %eax,%ebx
0860825c +0x13c:  movl   $0x0,0xc(%esp)
08608264 +0x144:  movl   $0xb47,0x8(%esp)
0860826c +0x14c:  movl   $&_ZZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
08608274 +0x154:  lea    -0x5c(%ebp),%eax
08608277 +0x157:  mov    %eax,(%esp)
0860827a +0x15a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0860827f +0x15f:  mov    %ebx,0x8(%esp)
08608283 +0x163:  movl   $"SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",0x4(%esp)
0860828b +0x16b:  lea    -0x5c(%ebp),%eax
0860828e +0x16e:  mov    %eax,(%esp)
08608291 +0x171:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08608296 +0x176:  movl   $0x1,0x8(%esp)
0860829e +0x17e:  mov    0x10(%ebp),%eax
086082a1 +0x181:  mov    %eax,0x4(%esp)
086082a5 +0x185:  mov    0x8(%ebp),%eax
086082a8 +0x188:  mov    %eax,(%esp)
086082ab +0x18b:  call   086085fa <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi>  ; SkillSlot::InitSkillHistoryLog(ENUM_SKILL_TREE_KIND, int)
086082b0 +0x190:  mov    $0x1,%ebx
086082b5 +0x195:  jmp    086085ed <+0x4cd>
086082ba +0x19a:  mov    0x10(%ebp),%eax
086082bd +0x19d:  cmp    $0xffffffff,%eax
086082c0 +0x1a0:  je     086082c9 <+0x1a9>
086082c2 +0x1a2:  mov    0x10(%ebp),%eax
086082c5 +0x1a5:  test   %eax,%eax
086082c7 +0x1a7:  jne    086082ea <+0x1ca>
086082c9 +0x1a9:  mov    0x8(%ebp),%eax
086082cc +0x1ac:  mov    (%eax),%eax
086082ce +0x1ae:  mov    %eax,(%esp)
086082d1 +0x1b1:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086082d6 +0x1b6:  mov    0x8(%ebp),%edx
086082d9 +0x1b9:  add    $0x46,%edx
086082dc +0x1bc:  mov    %eax,0x4(%esp)
086082e0 +0x1c0:  mov    %edx,(%esp)
086082e3 +0x1c3:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
086082e8 +0x1c8:  jmp    0860830c <+0x1ec>
086082ea +0x1ca:  mov    0x8(%ebp),%eax
086082ed +0x1cd:  mov    (%eax),%eax
086082ef +0x1cf:  mov    %eax,(%esp)
086082f2 +0x1d2:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086082f7 +0x1d7:  mov    0x8(%ebp),%edx
086082fa +0x1da:  add    $0x1de,%edx
08608300 +0x1e0:  mov    %eax,0x4(%esp)
08608304 +0x1e4:  mov    %edx,(%esp)
08608307 +0x1e7:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0860830c +0x1ec:  lea    -0x68(%ebp),%eax
0860830f +0x1ef:  mov    %eax,(%esp)
08608312 +0x1f2:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08608317 +0x1f7:  lea    -0x70(%ebp),%eax
0860831a +0x1fa:  mov    %eax,(%esp)
0860831d +0x1fd:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08608322 +0x202:  mov    0x8(%ebp),%eax
08608325 +0x205:  mov    (%eax),%eax
08608327 +0x207:  mov    %eax,(%esp)
0860832a +0x20a:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0860832f +0x20f:  movsbl %al,%esi
08608332 +0x212:  mov    0x8(%ebp),%eax
08608335 +0x215:  mov    (%eax),%eax
08608337 +0x217:  mov    %eax,(%esp)
0860833a +0x21a:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0860833f +0x21f:  movsbl %al,%ebx
08608342 +0x222:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08608347 +0x227:  mov    0x14(%eax),%edi
0860834a +0x22a:  mov    0x8(%ebp),%eax
0860834d +0x22d:  mov    (%eax),%eax
0860834f +0x22f:  mov    %eax,(%esp)
08608352 +0x232:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08608357 +0x237:  imul   $0x7dc,%eax,%eax
0860835d +0x23d:  lea    (%edi,%eax,1),%edx
08608360 +0x240:  movl   $0x0,0x10(%esp)
08608368 +0x248:  lea    -0x68(%ebp),%eax
0860836b +0x24b:  mov    %eax,0xc(%esp)
0860836f +0x24f:  mov    %esi,0x8(%esp)
08608373 +0x253:  mov    %ebx,0x4(%esp)
08608377 +0x257:  mov    %edx,(%esp)
0860837a +0x25a:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
0860837f +0x25f:  mov    %al,-0x31(%ebp)
08608382 +0x262:  movzbl -0x31(%ebp),%eax
08608386 +0x266:  xor    $0x1,%eax
08608389 +0x269:  test   %al,%al
0860838b +0x26b:  je     08608397 <+0x277>
0860838d +0x26d:  mov    $0x0,%ebx
08608392 +0x272:  jmp    086085e2 <+0x4c2>
08608397 +0x277:  movl   $0x0,-0x20(%ebp)
0860839e +0x27e:  jmp    086083fe <+0x2de>
086083a0 +0x280:  mov    -0x20(%ebp),%eax
086083a3 +0x283:  mov    %eax,0x4(%esp)
086083a7 +0x287:  lea    -0x68(%ebp),%eax
086083aa +0x28a:  mov    %eax,(%esp)
086083ad +0x28d:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086083b2 +0x292:  mov    0x4(%eax),%edx
086083b5 +0x295:  mov    (%eax),%eax
086083b7 +0x297:  mov    %eax,-0x70(%ebp)
086083ba +0x29a:  mov    %edx,-0x6c(%ebp)
086083bd +0x29d:  mov    -0x70(%ebp),%eax
086083c0 +0x2a0:  mov    %eax,-0x3c(%ebp)
086083c3 +0x2a3:  mov    -0x6c(%ebp),%eax
086083c6 +0x2a6:  mov    %eax,-0x38(%ebp)
086083c9 +0x2a9:  mov    0x8(%ebp),%eax
086083cc +0x2ac:  mov    (%eax),%eax
086083ce +0x2ae:  mov    %eax,(%esp)
086083d1 +0x2b1:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086083d6 +0x2b6:  mov    0x10(%ebp),%edx
086083d9 +0x2b9:  mov    %edx,0x10(%esp)
086083dd +0x2bd:  mov    -0x38(%ebp),%edx
086083e0 +0x2c0:  mov    %edx,0xc(%esp)
086083e4 +0x2c4:  mov    -0x3c(%ebp),%edx
086083e7 +0x2c7:  mov    %edx,0x8(%esp)
086083eb +0x2cb:  mov    %eax,0x4(%esp)
086083ef +0x2cf:  mov    0x8(%ebp),%eax
086083f2 +0x2d2:  mov    %eax,(%esp)
086083f5 +0x2d5:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
086083fa +0x2da:  addl   $0x1,-0x20(%ebp)
086083fe +0x2de:  lea    -0x68(%ebp),%eax
08608401 +0x2e1:  mov    %eax,(%esp)
08608404 +0x2e4:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08608409 +0x2e9:  cmp    -0x20(%ebp),%eax
0860840c +0x2ec:  setg   %al
0860840f +0x2ef:  test   %al,%al
08608411 +0x2f1:  jne    086083a0 <+0x280>
08608413 +0x2f3:  mov    0x8(%ebp),%eax
08608416 +0x2f6:  mov    (%eax),%eax
08608418 +0x2f8:  mov    %eax,(%esp)
0860841b +0x2fb:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08608420 +0x300:  mov    %eax,%ebx
08608422 +0x302:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08608427 +0x307:  mov    %ebx,0x4(%esp)
0860842b +0x30b:  mov    %eax,(%esp)
0860842e +0x30e:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08608433 +0x313:  mov    %eax,-0x30(%ebp)
08608436 +0x316:  cmpl   $0x0,-0x30(%ebp)
0860843a +0x31a:  je     086084c7 <+0x3a7>
08608440 +0x320:  movl   $0x0,-0x1c(%ebp)
08608447 +0x327:  jmp    086084af <+0x38f>
08608449 +0x329:  mov    0x8(%ebp),%eax
0860844c +0x32c:  mov    (%eax),%eax
0860844e +0x32e:  mov    %eax,(%esp)
08608451 +0x331:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08608456 +0x336:  mov    0x8(%ebp),%edx
08608459 +0x339:  mov    (%edx),%edx
0860845b +0x33b:  mov    %eax,0x4(%esp)
0860845f +0x33f:  mov    %edx,(%esp)
08608462 +0x342:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08608467 +0x347:  mov    %eax,%ebx
08608469 +0x349:  mov    -0x30(%ebp),%eax
0860846c +0x34c:  lea    0xc(%eax),%edx
0860846f +0x34f:  mov    -0x1c(%ebp),%eax
08608472 +0x352:  mov    %eax,0x4(%esp)
08608476 +0x356:  mov    %edx,(%esp)
08608479 +0x359:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0860847e +0x35e:  mov    (%eax),%esi
08608480 +0x360:  mov    0x8(%ebp),%eax
08608483 +0x363:  mov    (%eax),%eax
08608485 +0x365:  mov    %eax,(%esp)
08608488 +0x368:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0860848d +0x36d:  mov    0x10(%ebp),%edx
08608490 +0x370:  mov    %edx,0x10(%esp)
08608494 +0x374:  mov    %ebx,0xc(%esp)
08608498 +0x378:  mov    %esi,0x8(%esp)
0860849c +0x37c:  mov    %eax,0x4(%esp)
086084a0 +0x380:  mov    0x8(%ebp),%eax
086084a3 +0x383:  mov    %eax,(%esp)
086084a6 +0x386:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
086084ab +0x38b:  addl   $0x1,-0x1c(%ebp)
086084af +0x38f:  mov    -0x30(%ebp),%eax
086084b2 +0x392:  add    $0xc,%eax
086084b5 +0x395:  mov    %eax,(%esp)
086084b8 +0x398:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
086084bd +0x39d:  cmp    -0x1c(%ebp),%eax
086084c0 +0x3a0:  seta   %al
086084c3 +0x3a3:  test   %al,%al
086084c5 +0x3a5:  jne    08608449 <+0x329>
086084c7 +0x3a7:  lea    -0x104(%ebp),%eax
086084cd +0x3ad:  mov    %eax,(%esp)
086084d0 +0x3b0:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
086084d5 +0x3b5:  movl   $0x0,-0x2c(%ebp)
086084dc +0x3bc:  mov    0x10(%ebp),%eax
086084df +0x3bf:  cmp    $0xffffffff,%eax
086084e2 +0x3c2:  je     086084eb <+0x3cb>
086084e4 +0x3c4:  mov    0x10(%ebp),%eax
086084e7 +0x3c7:  test   %eax,%eax
086084e9 +0x3c9:  jne    086084f4 <+0x3d4>
086084eb +0x3cb:  movl   $0x1,-0x2c(%ebp)
086084f2 +0x3d2:  jmp    086084fb <+0x3db>
086084f4 +0x3d4:  movl   $0x2,-0x2c(%ebp)
086084fb +0x3db:  mov    0x8(%ebp),%eax
086084fe +0x3de:  mov    (%eax),%eax
08608500 +0x3e0:  movl   $0x0,0xc(%esp)
08608508 +0x3e8:  mov    -0x2c(%ebp),%edx
0860850b +0x3eb:  mov    %edx,0x8(%esp)
0860850f +0x3ef:  mov    %eax,0x4(%esp)
08608513 +0x3f3:  lea    -0x104(%ebp),%eax
08608519 +0x3f9:  mov    %eax,(%esp)
0860851c +0x3fc:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
08608521 +0x401:  cmpb   $0x0,-0x10c(%ebp)
08608528 +0x408:  je     08608580 <+0x460>
0860852a +0x40a:  mov    0x8(%ebp),%eax
0860852d +0x40d:  mov    (%eax),%eax
0860852f +0x40f:  mov    %eax,(%esp)
08608532 +0x412:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08608537 +0x417:  mov    0x8(%ebp),%eax
0860853a +0x41a:  mov    (%eax),%eax
0860853c +0x41c:  mov    %eax,(%esp)
0860853f +0x41f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08608544 +0x424:  mov    %eax,%ebx
08608546 +0x426:  movl   $0x0,0xc(%esp)
0860854e +0x42e:  movl   $0xb86,0x8(%esp)
08608556 +0x436:  movl   $&_ZZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
0860855e +0x43e:  lea    -0x4c(%ebp),%eax
08608561 +0x441:  mov    %eax,(%esp)
08608564 +0x444:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08608569 +0x449:  mov    %ebx,0x8(%esp)
0860856d +0x44d:  movl   $"SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",0x4(%esp)
08608575 +0x455:  lea    -0x4c(%ebp),%eax
08608578 +0x458:  mov    %eax,(%esp)
0860857b +0x45b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08608580 +0x460:  movl   $0x0,0x8(%esp)
08608588 +0x468:  mov    0x10(%ebp),%eax
0860858b +0x46b:  mov    %eax,0x4(%esp)
0860858f +0x46f:  mov    0x8(%ebp),%eax
08608592 +0x472:  mov    %eax,(%esp)
08608595 +0x475:  call   086085fa <_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi>  ; SkillSlot::InitSkillHistoryLog(ENUM_SKILL_TREE_KIND, int)
0860859a +0x47a:  mov    $0x1,%ebx
0860859f +0x47f:  lea    -0x104(%ebp),%eax
086085a5 +0x485:  mov    %eax,(%esp)
086085a8 +0x488:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
086085ad +0x48d:  jmp    086085e2 <+0x4c2>
086085af +0x48f:  mov    %edx,%ebx
086085b1 +0x491:  mov    %eax,%esi
086085b3 +0x493:  lea    -0x104(%ebp),%eax
086085b9 +0x499:  mov    %eax,(%esp)
086085bc +0x49c:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
086085c1 +0x4a1:  mov    %esi,%eax
086085c3 +0x4a3:  mov    %ebx,%edx
086085c5 +0x4a5:  jmp    086085c7 <+0x4a7>
086085c7 +0x4a7:  mov    %edx,%ebx
086085c9 +0x4a9:  mov    %eax,%esi
086085cb +0x4ab:  lea    -0x68(%ebp),%eax
086085ce +0x4ae:  mov    %eax,(%esp)
086085d1 +0x4b1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086085d6 +0x4b6:  mov    %esi,%eax
086085d8 +0x4b8:  mov    %ebx,%edx
086085da +0x4ba:  mov    %eax,(%esp)
086085dd +0x4bd:  call   08ae3750 <_Unwind_Resume>
086085e2 +0x4c2:  lea    -0x68(%ebp),%eax
086085e5 +0x4c5:  mov    %eax,(%esp)
086085e8 +0x4c8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086085ed +0x4cd:  mov    %ebx,%eax
086085ef +0x4cf:  add    $0x12c,%esp
086085f5 +0x4d5:  pop    %ebx
086085f6 +0x4d6:  pop    %esi
086085f7 +0x4d7:  pop    %edi
086085f8 +0x4d8:  pop    %ebp
086085f9 +0x4d9:  ret
```

## 反编译 C

```c
// SkillSlot::InitSkill @ 0x8608120

/* SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall SkillSlot::InitSkill(SkillSlot *this,char param_1,int param_3)

{
  char cVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
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
  
  if (*(int *)this == 0) {
    uVar10 = 0;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar1 == '\0') {
      if ((param_3 == -1) || (param_3 == 0)) {
        iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
        addSkillOnCreateCharacter((_Mastered_skill *)(this + 0x46),iVar3);
      }
      else {
        iVar3 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
        addSkillOnCreateCharacter((_Mastered_skill *)(this + 0x1de),iVar3);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
      std::pair<int,int>::pair((pair<int,int> *)&local_74);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                    /* try { // try from 08608342 to 086084aa has its CatchHandler @ 086085c7 */
      iVar3 = G_CDataManager();
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      local_35 = CCharacter::get_give_skill
                           ((CCharacter *)(iVar3 + iVar4 * 0x7dc),(int)cVar2,(int)cVar1,
                            (vector *)local_6c,0);
      if (local_35 == '\x01') {
        local_24 = 0;
        while( true ) {
          iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_6c)
          ;
          if (iVar3 <= (int)local_24) break;
          puVar7 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             (local_6c,local_24);
          local_70 = puVar7[1];
          local_74 = *puVar7;
          local_40 = local_74;
          local_3c = local_70;
          uVar10 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          growtype_skill(this,uVar10,local_40,local_3c,param_3);
          local_24 = local_24 + 1;
        }
        CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
        iVar3 = G_CDataManager();
        local_34 = CDataManager::GetExpertJobScript(iVar3);
        if (local_34 != 0) {
          local_20 = 0;
          while( true ) {
            uVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (local_34 + 0xc));
            if (uVar9 <= local_20) break;
            iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
            uVar6 = CUser::GetCurExpertJobLevel(*(CUser **)this,iVar3);
            puVar7 = (undefined4 *)
                     std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (local_34 + 0xc),local_20);
            uVar10 = *puVar7;
            uVar8 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
            growtype_skill(this,uVar8,uVar10,uVar6,param_3);
            local_20 = local_20 + 1;
          }
        }
        WongWork::CSkillChanger::CSkillChanger(local_108);
        if ((param_3 == -1) || (param_3 == 0)) {
          local_30 = 1;
        }
        else {
          local_30 = 2;
        }
                    /* try { // try from 0860851c to 08608599 has its CatchHandler @ 086085af */
        WongWork::CSkillChanger::SkillInitialize(local_108,*(CUser **)this,local_30,false);
        if (param_1 != '\0') {
          CUser::send_skill_info(*(CUser **)this);
          uVar10 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
          cMyTrace::cMyTrace(local_50,"bool SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)",0xb86,
                             0);
          cMyTrace::operator()(local_50,"SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar10);
        }
        InitSkillHistoryLog(this,param_3,0);
        uVar10 = 1;
        WongWork::CSkillChanger::~CSkillChanger(local_108);
      }
      else {
        uVar10 = 0;
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
    }
    else {
      if ((param_3 == -1) || (param_3 == 0)) {
        local_2c = 1;
      }
      else {
        local_2c = 2;
      }
      CUser::givePvPSkillTree(*(CUser **)this,0,true,local_2c);
      iVar3 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this);
      cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      iVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      local_28 = PvPSkillTreeParameterScript::getPvPSkillPoint
                           ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar4,(int)cVar2,
                            (int)cVar1,iVar3,false);
      set_remain_sp_at_index(this,local_28,param_3);
      if (param_1 != '\0') {
        CUser::send_skill_info(*(CUser **)this);
        uVar10 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
        cMyTrace::cMyTrace(local_60,"bool SkillSlot::InitSkill(bool, ENUM_SKILL_TREE_KIND)",0xb47,0)
        ;
        cMyTrace::operator()(local_60,"SUCCESS_INIT_SKILL and SEND_SKILL_INFO, char(%s)",uVar10);
      }
      InitSkillHistoryLog(this,param_3,1);
      uVar10 = 1;
    }
  }
  return uVar10;
}
```
