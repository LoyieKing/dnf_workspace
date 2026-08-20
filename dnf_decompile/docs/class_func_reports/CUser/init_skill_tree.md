# init_skill_tree

`_ZN5CUser15init_skill_treeE20ENUM_SKILL_TREE_KIND`

`CUser::init_skill_tree(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866bce8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866bce8  _ZN5CUser15init_skill_treeE20ENUM_SKILL_TREE_KIND
#           CUser::init_skill_tree(ENUM_SKILL_TREE_KIND)
# range [0x0866bce8, 0x0866c04d]
0866bce8 +0x000:  push   %ebp
0866bce9 +0x001:  mov    %esp,%ebp
0866bceb +0x003:  push   %edi
0866bcec +0x004:  push   %esi
0866bced +0x005:  push   %ebx
0866bcee +0x006:  sub    $0xfc,%esp
0866bcf4 +0x00c:  mov    0x8(%ebp),%eax
0866bcf7 +0x00f:  mov    %eax,(%esp)
0866bcfa +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0866bcff +0x017:  test   %eax,%eax
0866bd01 +0x019:  setne  %al
0866bd04 +0x01c:  test   %al,%al
0866bd06 +0x01e:  je     0866c043 <+0x35b>
0866bd0c +0x024:  mov    0x8(%ebp),%eax
0866bd0f +0x027:  mov    %eax,(%esp)
0866bd12 +0x02a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bd17 +0x02f:  mov    0xc(%ebp),%edx
0866bd1a +0x032:  mov    %edx,0x4(%esp)
0866bd1e +0x036:  mov    %eax,(%esp)
0866bd21 +0x039:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
0866bd26 +0x03e:  mov    0x8(%ebp),%eax
0866bd29 +0x041:  mov    %eax,(%esp)
0866bd2c +0x044:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bd31 +0x049:  mov    0x8(%ebp),%edx
0866bd34 +0x04c:  mov    %edx,0x4(%esp)
0866bd38 +0x050:  mov    %eax,(%esp)
0866bd3b +0x053:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0866bd40 +0x058:  mov    0xc(%ebp),%eax
0866bd43 +0x05b:  cmp    $0xffffffff,%eax
0866bd46 +0x05e:  je     0866bd4f <+0x67>
0866bd48 +0x060:  mov    0xc(%ebp),%eax
0866bd4b +0x063:  test   %eax,%eax
0866bd4d +0x065:  jne    0866bd78 <+0x90>
0866bd4f +0x067:  mov    0x8(%ebp),%eax
0866bd52 +0x06a:  mov    %eax,(%esp)
0866bd55 +0x06d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bd5a +0x072:  mov    %eax,%ebx
0866bd5c +0x074:  mov    0x8(%ebp),%eax
0866bd5f +0x077:  mov    %eax,(%esp)
0866bd62 +0x07a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bd67 +0x07f:  add    $0x46,%eax
0866bd6a +0x082:  mov    %ebx,0x4(%esp)
0866bd6e +0x086:  mov    %eax,(%esp)
0866bd71 +0x089:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0866bd76 +0x08e:  jmp    0866bda1 <+0xb9>
0866bd78 +0x090:  mov    0x8(%ebp),%eax
0866bd7b +0x093:  mov    %eax,(%esp)
0866bd7e +0x096:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bd83 +0x09b:  mov    %eax,%ebx
0866bd85 +0x09d:  mov    0x8(%ebp),%eax
0866bd88 +0x0a0:  mov    %eax,(%esp)
0866bd8b +0x0a3:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bd90 +0x0a8:  add    $0x1de,%eax
0866bd95 +0x0ad:  mov    %ebx,0x4(%esp)
0866bd99 +0x0b1:  mov    %eax,(%esp)
0866bd9c +0x0b4:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0866bda1 +0x0b9:  lea    -0x40(%ebp),%eax
0866bda4 +0x0bc:  mov    %eax,(%esp)
0866bda7 +0x0bf:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866bdac +0x0c4:  lea    -0x48(%ebp),%eax
0866bdaf +0x0c7:  mov    %eax,(%esp)
0866bdb2 +0x0ca:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0866bdb7 +0x0cf:  mov    0x8(%ebp),%eax
0866bdba +0x0d2:  mov    %eax,(%esp)
0866bdbd +0x0d5:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866bdc2 +0x0da:  movsbl %al,%esi
0866bdc5 +0x0dd:  mov    0x8(%ebp),%eax
0866bdc8 +0x0e0:  mov    %eax,(%esp)
0866bdcb +0x0e3:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866bdd0 +0x0e8:  movsbl %al,%ebx
0866bdd3 +0x0eb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866bdd8 +0x0f0:  mov    0x14(%eax),%edi
0866bddb +0x0f3:  mov    0x8(%ebp),%eax
0866bdde +0x0f6:  mov    %eax,(%esp)
0866bde1 +0x0f9:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bde6 +0x0fe:  imul   $0x7dc,%eax,%eax
0866bdec +0x104:  lea    (%edi,%eax,1),%edx
0866bdef +0x107:  movl   $0x0,0x10(%esp)
0866bdf7 +0x10f:  lea    -0x40(%ebp),%eax
0866bdfa +0x112:  mov    %eax,0xc(%esp)
0866bdfe +0x116:  mov    %esi,0x8(%esp)
0866be02 +0x11a:  mov    %ebx,0x4(%esp)
0866be06 +0x11e:  mov    %edx,(%esp)
0866be09 +0x121:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
0866be0e +0x126:  mov    %al,-0x29(%ebp)
0866be11 +0x129:  movzbl -0x29(%ebp),%eax
0866be15 +0x12d:  xor    $0x1,%eax
0866be18 +0x130:  test   %al,%al
0866be1a +0x132:  je     0866be5c <+0x174>
0866be1c +0x134:  mov    0x8(%ebp),%eax
0866be1f +0x137:  mov    %eax,(%esp)
0866be22 +0x13a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0866be27 +0x13f:  mov    %eax,0x14(%esp)
0866be2b +0x143:  movl   $"User %s - CUser::init_skill_tree",0x10(%esp)
0866be33 +0x14b:  movl   $0x5328,0xc(%esp)
0866be3b +0x153:  movl   $&_ZZN5CUser15init_skill_treeE20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
0866be43 +0x15b:  movl   $"user.cpp",0x4(%esp)
0866be4b +0x163:  movl   $0x1,(%esp)
0866be52 +0x16a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0866be57 +0x16f:  jmp    0866c038 <+0x350>
0866be5c +0x174:  movl   $0x0,-0x20(%ebp)
0866be63 +0x17b:  jmp    0866becb <+0x1e3>
0866be65 +0x17d:  mov    -0x20(%ebp),%eax
0866be68 +0x180:  mov    %eax,0x4(%esp)
0866be6c +0x184:  lea    -0x40(%ebp),%eax
0866be6f +0x187:  mov    %eax,(%esp)
0866be72 +0x18a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0866be77 +0x18f:  mov    0x4(%eax),%edx
0866be7a +0x192:  mov    (%eax),%eax
0866be7c +0x194:  mov    %eax,-0x48(%ebp)
0866be7f +0x197:  mov    %edx,-0x44(%ebp)
0866be82 +0x19a:  mov    -0x48(%ebp),%eax
0866be85 +0x19d:  mov    %eax,-0x34(%ebp)
0866be88 +0x1a0:  mov    -0x44(%ebp),%eax
0866be8b +0x1a3:  mov    %eax,-0x30(%ebp)
0866be8e +0x1a6:  mov    0x8(%ebp),%eax
0866be91 +0x1a9:  mov    %eax,(%esp)
0866be94 +0x1ac:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866be99 +0x1b1:  mov    %eax,%ebx
0866be9b +0x1b3:  mov    0x8(%ebp),%eax
0866be9e +0x1b6:  mov    %eax,(%esp)
0866bea1 +0x1b9:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bea6 +0x1be:  mov    0xc(%ebp),%edx
0866bea9 +0x1c1:  mov    %edx,0x10(%esp)
0866bead +0x1c5:  mov    -0x30(%ebp),%edx
0866beb0 +0x1c8:  mov    %edx,0xc(%esp)
0866beb4 +0x1cc:  mov    -0x34(%ebp),%edx
0866beb7 +0x1cf:  mov    %edx,0x8(%esp)
0866bebb +0x1d3:  mov    %ebx,0x4(%esp)
0866bebf +0x1d7:  mov    %eax,(%esp)
0866bec2 +0x1da:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866bec7 +0x1df:  addl   $0x1,-0x20(%ebp)
0866becb +0x1e3:  lea    -0x40(%ebp),%eax
0866bece +0x1e6:  mov    %eax,(%esp)
0866bed1 +0x1e9:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866bed6 +0x1ee:  cmp    -0x20(%ebp),%eax
0866bed9 +0x1f1:  setg   %al
0866bedc +0x1f4:  test   %al,%al
0866bede +0x1f6:  jne    0866be65 <+0x17d>
0866bee0 +0x1f8:  mov    0x8(%ebp),%eax
0866bee3 +0x1fb:  mov    %eax,(%esp)
0866bee6 +0x1fe:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0866beeb +0x203:  mov    %eax,%ebx
0866beed +0x205:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866bef2 +0x20a:  mov    %ebx,0x4(%esp)
0866bef6 +0x20e:  mov    %eax,(%esp)
0866bef9 +0x211:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0866befe +0x216:  mov    %eax,-0x28(%ebp)
0866bf01 +0x219:  cmpl   $0x0,-0x28(%ebp)
0866bf05 +0x21d:  je     0866bf9b <+0x2b3>
0866bf0b +0x223:  movl   $0x0,-0x1c(%ebp)
0866bf12 +0x22a:  jmp    0866bf7f <+0x297>
0866bf14 +0x22c:  mov    0x8(%ebp),%eax
0866bf17 +0x22f:  mov    %eax,(%esp)
0866bf1a +0x232:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0866bf1f +0x237:  mov    %eax,0x4(%esp)
0866bf23 +0x23b:  mov    0x8(%ebp),%eax
0866bf26 +0x23e:  mov    %eax,(%esp)
0866bf29 +0x241:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0866bf2e +0x246:  mov    %eax,%esi
0866bf30 +0x248:  mov    -0x28(%ebp),%eax
0866bf33 +0x24b:  lea    0xc(%eax),%edx
0866bf36 +0x24e:  mov    -0x1c(%ebp),%eax
0866bf39 +0x251:  mov    %eax,0x4(%esp)
0866bf3d +0x255:  mov    %edx,(%esp)
0866bf40 +0x258:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0866bf45 +0x25d:  mov    (%eax),%edi
0866bf47 +0x25f:  mov    0x8(%ebp),%eax
0866bf4a +0x262:  mov    %eax,(%esp)
0866bf4d +0x265:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bf52 +0x26a:  mov    %eax,%ebx
0866bf54 +0x26c:  mov    0x8(%ebp),%eax
0866bf57 +0x26f:  mov    %eax,(%esp)
0866bf5a +0x272:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bf5f +0x277:  movl   $0x1,0x10(%esp)
0866bf67 +0x27f:  mov    %esi,0xc(%esp)
0866bf6b +0x283:  mov    %edi,0x8(%esp)
0866bf6f +0x287:  mov    %ebx,0x4(%esp)
0866bf73 +0x28b:  mov    %eax,(%esp)
0866bf76 +0x28e:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866bf7b +0x293:  addl   $0x1,-0x1c(%ebp)
0866bf7f +0x297:  mov    -0x28(%ebp),%eax
0866bf82 +0x29a:  add    $0xc,%eax
0866bf85 +0x29d:  mov    %eax,(%esp)
0866bf88 +0x2a0:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866bf8d +0x2a5:  cmp    -0x1c(%ebp),%eax
0866bf90 +0x2a8:  seta   %al
0866bf93 +0x2ab:  test   %al,%al
0866bf95 +0x2ad:  jne    0866bf14 <+0x22c>
0866bf9b +0x2b3:  lea    -0xdc(%ebp),%eax
0866bfa1 +0x2b9:  mov    %eax,(%esp)
0866bfa4 +0x2bc:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
0866bfa9 +0x2c1:  movl   $0x0,-0x24(%ebp)
0866bfb0 +0x2c8:  mov    0xc(%ebp),%eax
0866bfb3 +0x2cb:  cmp    $0xffffffff,%eax
0866bfb6 +0x2ce:  je     0866bfbf <+0x2d7>
0866bfb8 +0x2d0:  mov    0xc(%ebp),%eax
0866bfbb +0x2d3:  test   %eax,%eax
0866bfbd +0x2d5:  jne    0866bfc8 <+0x2e0>
0866bfbf +0x2d7:  movl   $0x1,-0x24(%ebp)
0866bfc6 +0x2de:  jmp    0866bfcf <+0x2e7>
0866bfc8 +0x2e0:  movl   $0x2,-0x24(%ebp)
0866bfcf +0x2e7:  movl   $0x0,0xc(%esp)
0866bfd7 +0x2ef:  mov    -0x24(%ebp),%eax
0866bfda +0x2f2:  mov    %eax,0x8(%esp)
0866bfde +0x2f6:  mov    0x8(%ebp),%eax
0866bfe1 +0x2f9:  mov    %eax,0x4(%esp)
0866bfe5 +0x2fd:  lea    -0xdc(%ebp),%eax
0866bfeb +0x303:  mov    %eax,(%esp)
0866bfee +0x306:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
0866bff3 +0x30b:  jmp    0866c00d <+0x325>
0866bff5 +0x30d:  mov    %edx,%ebx
0866bff7 +0x30f:  mov    %eax,%esi
0866bff9 +0x311:  lea    -0xdc(%ebp),%eax
0866bfff +0x317:  mov    %eax,(%esp)
0866c002 +0x31a:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0866c007 +0x31f:  mov    %esi,%eax
0866c009 +0x321:  mov    %ebx,%edx
0866c00b +0x323:  jmp    0866c01d <+0x335>
0866c00d +0x325:  lea    -0xdc(%ebp),%eax
0866c013 +0x32b:  mov    %eax,(%esp)
0866c016 +0x32e:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0866c01b +0x333:  jmp    0866c038 <+0x350>
0866c01d +0x335:  mov    %edx,%ebx
0866c01f +0x337:  mov    %eax,%esi
0866c021 +0x339:  lea    -0x40(%ebp),%eax
0866c024 +0x33c:  mov    %eax,(%esp)
0866c027 +0x33f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866c02c +0x344:  mov    %esi,%eax
0866c02e +0x346:  mov    %ebx,%edx
0866c030 +0x348:  mov    %eax,(%esp)
0866c033 +0x34b:  call   08ae3750 <_Unwind_Resume>
0866c038 +0x350:  lea    -0x40(%ebp),%eax
0866c03b +0x353:  mov    %eax,(%esp)
0866c03e +0x356:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866c043 +0x35b:  add    $0xfc,%esp
0866c049 +0x361:  pop    %ebx
0866c04a +0x362:  pop    %esi
0866c04b +0x363:  pop    %edi
0866c04c +0x364:  pop    %ebp
0866c04d +0x365:  ret
```

## 反编译 C

```c
// CUser::init_skill_tree @ 0x866bce8

/* CUser::init_skill_tree(ENUM_SKILL_TREE_KIND) */

void __thiscall CUser::init_skill_tree(CUser *this,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  SkillSlot *pSVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  CSkillChanger local_e0 [148];
  undefined4 local_4c;
  undefined4 local_48;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  char local_2d;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 != 0) {
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::clear_all_skills(pSVar4,param_2);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_parent(pSVar4,this);
    if ((param_2 == -1) || (param_2 == 0)) {
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar5 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar5 + 0x46),iVar3);
    }
    else {
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar5 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar5 + 0x1de),iVar3);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_44);
    std::pair<int,int>::pair((pair<int,int> *)&local_4c);
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                    /* try { // try from 0866bdd3 to 0866bf7a has its CatchHandler @ 0866c01d */
    iVar3 = G_CDataManager();
    iVar3 = *(int *)(iVar3 + 0x14);
    iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    local_2d = CCharacter::get_give_skill
                         ((CCharacter *)(iVar3 + iVar5 * 0x7dc),(int)cVar2,(int)cVar1,
                          (vector *)local_44,0);
    if (local_2d == '\x01') {
      local_24 = 0;
      while( true ) {
        iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_44);
        if (iVar3 <= (int)local_24) break;
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (local_44,local_24);
        local_48 = puVar8[1];
        local_4c = *puVar8;
        local_38 = local_4c;
        local_34 = local_48;
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
        SkillSlot::growtype_skill(pSVar4,uVar6,local_38,local_34,param_2);
        local_24 = local_24 + 1;
      }
      CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
      iVar3 = G_CDataManager();
      local_2c = CDataManager::GetExpertJobScript(iVar3);
      if (local_2c != 0) {
        local_20 = 0;
        while( true ) {
          uVar10 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_2c + 0xc));
          if (uVar10 <= local_20) break;
          iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
          uVar7 = GetCurExpertJobLevel(this,iVar3);
          puVar8 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_2c + 0xc),local_20);
          uVar6 = *puVar8;
          uVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar4,uVar9,uVar6,uVar7,1);
          local_20 = local_20 + 1;
        }
      }
      WongWork::CSkillChanger::CSkillChanger(local_e0);
      if ((param_2 == -1) || (param_2 == 0)) {
        local_28 = 1;
      }
      else {
        local_28 = 2;
      }
                    /* try { // try from 0866bfee to 0866bff2 has its CatchHandler @ 0866bff5 */
      WongWork::CSkillChanger::SkillInitialize(local_e0,this,local_28,false);
      WongWork::CSkillChanger::~CSkillChanger(local_e0);
    }
    else {
      uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      LogManager::logFormat
                (1,"user.cpp","void CUser::init_skill_tree(ENUM_SKILL_TREE_KIND)",0x5328,
                 "User %s - CUser::init_skill_tree",uVar6);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_44);
  }
  return;
}
```
