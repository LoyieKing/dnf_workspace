# try_refund_skill

`_ZN9SkillSlot16try_refund_skillEiiiiiiRi`

`SkillSlot::try_refund_skill(int, int, int, int, int, int, int&)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086078f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086078f4  _ZN9SkillSlot16try_refund_skillEiiiiiiRi
#           SkillSlot::try_refund_skill(int, int, int, int, int, int, int&)
# range [0x086078f4, 0x08607db9]
086078f4 +0x000:  push   %ebp
086078f5 +0x001:  mov    %esp,%ebp
086078f7 +0x003:  push   %esi
086078f8 +0x004:  push   %ebx
086078f9 +0x005:  add    $0xffffff80,%esp
086078fc +0x008:  mov    0x24(%ebp),%eax
086078ff +0x00b:  movl   $0x13,(%eax)
08607905 +0x011:  mov    0x8(%ebp),%eax
08607908 +0x014:  mov    (%eax),%eax
0860790a +0x016:  test   %eax,%eax
0860790c +0x018:  jne    08607918 <+0x24>
0860790e +0x01a:  mov    $0xfffffffc,%ebx
08607913 +0x01f:  jmp    08607db1 <+0x4bd>
08607918 +0x024:  movl   $0x0,-0x44(%ebp)
0860791f +0x02b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08607924 +0x030:  mov    0xc(%ebp),%edx
08607927 +0x033:  mov    %edx,0x8(%esp)
0860792b +0x037:  mov    0x14(%ebp),%edx
0860792e +0x03a:  mov    %edx,0x4(%esp)
08607932 +0x03e:  mov    %eax,(%esp)
08607935 +0x041:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0860793a +0x046:  mov    %eax,-0x44(%ebp)
0860793d +0x049:  cmpl   $0x0,-0x44(%ebp)
08607941 +0x04d:  jne    0860794d <+0x59>
08607943 +0x04f:  mov    $0xffffffff,%ebx
08607948 +0x054:  jmp    08607db1 <+0x4bd>
0860794d +0x059:  mov    -0x44(%ebp),%eax
08607950 +0x05c:  mov    %eax,(%esp)
08607953 +0x05f:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08607958 +0x064:  mov    %eax,-0x40(%ebp)
0860795b +0x067:  cmpl   $0x4,-0x40(%ebp)
0860795f +0x06b:  jne    08607974 <+0x80>
08607961 +0x06d:  mov    0x24(%ebp),%eax
08607964 +0x070:  movl   $0x7,(%eax)
0860796a +0x076:  mov    $0xfffffffb,%ebx
0860796f +0x07b:  jmp    08607db1 <+0x4bd>
08607974 +0x080:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08607979 +0x085:  mov    %eax,(%esp)
0860797c +0x088:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08607981 +0x08d:  test   %al,%al
08607983 +0x08f:  je     086079af <+0xbb>
08607985 +0x091:  mov    0x8(%ebp),%eax
08607988 +0x094:  mov    (%eax),%eax
0860798a +0x096:  mov    %eax,(%esp)
0860798d +0x099:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08607992 +0x09e:  cmp    $0x0,%eax
08607995 +0x0a1:  setge  %al
08607998 +0x0a4:  test   %al,%al
0860799a +0x0a6:  jne    086079af <+0xbb>
0860799c +0x0a8:  mov    0x24(%ebp),%eax
0860799f +0x0ab:  movl   $0x7,(%eax)
086079a5 +0x0b1:  mov    $0xfffffffd,%ebx
086079aa +0x0b6:  jmp    08607db1 <+0x4bd>
086079af +0x0bb:  mov    0x8(%ebp),%eax
086079b2 +0x0be:  lea    0x376(%eax),%edx
086079b8 +0x0c4:  movl   $0x1,0x10(%esp)
086079c0 +0x0cc:  mov    -0x40(%ebp),%eax
086079c3 +0x0cf:  mov    %eax,0xc(%esp)
086079c7 +0x0d3:  mov    0xc(%ebp),%eax
086079ca +0x0d6:  mov    %eax,0x8(%esp)
086079ce +0x0da:  mov    %edx,0x4(%esp)
086079d2 +0x0de:  mov    0x8(%ebp),%eax
086079d5 +0x0e1:  mov    %eax,(%esp)
086079d8 +0x0e4:  call   08607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>  ; SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const
086079dd +0x0e9:  mov    %eax,-0x3c(%ebp)
086079e0 +0x0ec:  cmpl   $0xffffffff,-0x3c(%ebp)
086079e4 +0x0f0:  jne    086079f0 <+0xfc>
086079e6 +0x0f2:  mov    $0xffffffff,%ebx
086079eb +0x0f7:  jmp    08607db1 <+0x4bd>
086079f0 +0x0fc:  mov    -0x3c(%ebp),%edx
086079f3 +0x0ff:  mov    0x8(%ebp),%eax
086079f6 +0x102:  add    $0x1b8,%edx
086079fc +0x108:  movzbl 0x7(%eax,%edx,2),%eax
08607a01 +0x10d:  movsbl %al,%eax
08607a04 +0x110:  sub    0x20(%ebp),%eax
08607a07 +0x113:  mov    %eax,-0x38(%ebp)
08607a0a +0x116:  cmpl   $0x0,-0x38(%ebp)
08607a0e +0x11a:  jns    08607a1a <+0x126>
08607a10 +0x11c:  mov    $0xffffffff,%ebx
08607a15 +0x121:  jmp    08607db1 <+0x4bd>
08607a1a +0x126:  mov    0x8(%ebp),%eax
08607a1d +0x129:  mov    (%eax),%eax
08607a1f +0x12b:  mov    %eax,(%esp)
08607a22 +0x12e:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08607a27 +0x133:  mov    %eax,%ebx
08607a29 +0x135:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08607a2e +0x13a:  mov    %ebx,0x4(%esp)
08607a32 +0x13e:  mov    %eax,(%esp)
08607a35 +0x141:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08607a3a +0x146:  mov    %eax,-0x34(%ebp)
08607a3d +0x149:  cmpl   $0x0,-0x34(%ebp)
08607a41 +0x14d:  je     08607a9c <+0x1a8>
08607a43 +0x14f:  movl   $0x0,-0x20(%ebp)
08607a4a +0x156:  jmp    08607a84 <+0x190>
08607a4c +0x158:  mov    -0x34(%ebp),%eax
08607a4f +0x15b:  lea    0xc(%eax),%edx
08607a52 +0x15e:  mov    -0x20(%ebp),%eax
08607a55 +0x161:  mov    %eax,0x4(%esp)
08607a59 +0x165:  mov    %edx,(%esp)
08607a5c +0x168:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08607a61 +0x16d:  mov    (%eax),%eax
08607a63 +0x16f:  cmp    0xc(%ebp),%eax
08607a66 +0x172:  sete   %al
08607a69 +0x175:  test   %al,%al
08607a6b +0x177:  je     08607a80 <+0x18c>
08607a6d +0x179:  mov    0x24(%ebp),%eax
08607a70 +0x17c:  movl   $0x7,(%eax)
08607a76 +0x182:  mov    $0xfffffffb,%ebx
08607a7b +0x187:  jmp    08607db1 <+0x4bd>
08607a80 +0x18c:  addl   $0x1,-0x20(%ebp)
08607a84 +0x190:  mov    -0x34(%ebp),%eax
08607a87 +0x193:  add    $0xc,%eax
08607a8a +0x196:  mov    %eax,(%esp)
08607a8d +0x199:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08607a92 +0x19e:  cmp    -0x20(%ebp),%eax
08607a95 +0x1a1:  seta   %al
08607a98 +0x1a4:  test   %al,%al
08607a9a +0x1a6:  jne    08607a4c <+0x158>
08607a9c +0x1a8:  lea    -0x4c(%ebp),%eax
08607a9f +0x1ab:  mov    %eax,(%esp)
08607aa2 +0x1ae:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08607aa7 +0x1b3:  lea    -0x58(%ebp),%eax
08607aaa +0x1b6:  mov    %eax,(%esp)
08607aad +0x1b9:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08607ab2 +0x1be:  lea    -0x58(%ebp),%eax
08607ab5 +0x1c1:  mov    %eax,0x10(%esp)
08607ab9 +0x1c5:  mov    0x1c(%ebp),%eax
08607abc +0x1c8:  mov    %eax,0xc(%esp)
08607ac0 +0x1cc:  mov    0x18(%ebp),%eax
08607ac3 +0x1cf:  mov    %eax,0x8(%esp)
08607ac7 +0x1d3:  mov    0x14(%ebp),%eax
08607aca +0x1d6:  mov    %eax,0x4(%esp)
08607ace +0x1da:  mov    0x8(%ebp),%eax
08607ad1 +0x1dd:  mov    %eax,(%esp)
08607ad4 +0x1e0:  call   0860714a <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE>  ; SkillSlot::get_give_skill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08607ad9 +0x1e5:  shr    $0x1f,%eax
08607adc +0x1e8:  test   %al,%al
08607ade +0x1ea:  je     08607aea <+0x1f6>
08607ae0 +0x1ec:  mov    $0xffffffff,%ebx
08607ae5 +0x1f1:  jmp    08607da6 <+0x4b2>
08607aea +0x1f6:  movl   $0x0,-0x1c(%ebp)
08607af1 +0x1fd:  jmp    08607b54 <+0x260>
08607af3 +0x1ff:  mov    -0x1c(%ebp),%eax
08607af6 +0x202:  mov    %eax,0x4(%esp)
08607afa +0x206:  lea    -0x58(%ebp),%eax
08607afd +0x209:  mov    %eax,(%esp)
08607b00 +0x20c:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08607b05 +0x211:  mov    0x4(%eax),%edx
08607b08 +0x214:  mov    (%eax),%eax
08607b0a +0x216:  mov    %eax,-0x4c(%ebp)
08607b0d +0x219:  mov    %edx,-0x48(%ebp)
08607b10 +0x21c:  mov    -0x4c(%ebp),%eax
08607b13 +0x21f:  mov    %eax,-0x30(%ebp)
08607b16 +0x222:  mov    -0x48(%ebp),%eax
08607b19 +0x225:  mov    %eax,-0x2c(%ebp)
08607b1c +0x228:  mov    -0x3c(%ebp),%edx
08607b1f +0x22b:  mov    0x8(%ebp),%eax
08607b22 +0x22e:  add    $0x1b8,%edx
08607b28 +0x234:  movzbl 0x6(%eax,%edx,2),%eax
08607b2d +0x239:  movzbl %al,%eax
08607b30 +0x23c:  cmp    -0x30(%ebp),%eax
08607b33 +0x23f:  jne    08607b50 <+0x25c>
08607b35 +0x241:  mov    -0x38(%ebp),%eax
08607b38 +0x244:  cmp    -0x2c(%ebp),%eax
08607b3b +0x247:  jge    08607b6b <+0x277>
08607b3d +0x249:  mov    0x24(%ebp),%eax
08607b40 +0x24c:  movl   $0x7,(%eax)
08607b46 +0x252:  mov    $0xffffffff,%ebx
08607b4b +0x257:  jmp    08607da6 <+0x4b2>
08607b50 +0x25c:  addl   $0x1,-0x1c(%ebp)
08607b54 +0x260:  lea    -0x58(%ebp),%eax
08607b57 +0x263:  mov    %eax,(%esp)
08607b5a +0x266:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08607b5f +0x26b:  cmp    -0x1c(%ebp),%eax
08607b62 +0x26e:  setg   %al
08607b65 +0x271:  test   %al,%al
08607b67 +0x273:  jne    08607af3 <+0x1ff>
08607b69 +0x275:  jmp    08607b6c <+0x278>
08607b6b +0x277:  nop
08607b6c +0x278:  lea    -0x64(%ebp),%eax
08607b6f +0x27b:  mov    %eax,(%esp)
08607b72 +0x27e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08607b77 +0x283:  mov    0x8(%ebp),%eax
08607b7a +0x286:  mov    (%eax),%eax
08607b7c +0x288:  mov    %eax,(%esp)
08607b7f +0x28b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08607b84 +0x290:  mov    %eax,%ebx
08607b86 +0x292:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08607b8b +0x297:  mov    0x10(%eax),%eax
08607b8e +0x29a:  lea    -0x64(%ebp),%edx
08607b91 +0x29d:  mov    %edx,0xc(%esp)
08607b95 +0x2a1:  mov    0xc(%ebp),%edx
08607b98 +0x2a4:  mov    %edx,0x8(%esp)
08607b9c +0x2a8:  mov    %ebx,0x4(%esp)
08607ba0 +0x2ac:  mov    %eax,(%esp)
08607ba3 +0x2af:  call   08352028 <_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE>  ; CSkillList::get_post_learning_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08607ba8 +0x2b4:  movl   $0x0,-0x18(%ebp)
08607baf +0x2bb:  jmp    08607c39 <+0x345>
08607bb4 +0x2c0:  mov    -0x18(%ebp),%eax
08607bb7 +0x2c3:  mov    %eax,0x4(%esp)
08607bbb +0x2c7:  lea    -0x64(%ebp),%eax
08607bbe +0x2ca:  mov    %eax,(%esp)
08607bc1 +0x2cd:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08607bc6 +0x2d2:  mov    (%eax),%eax
08607bc8 +0x2d4:  mov    %eax,-0x14(%ebp)
08607bcb +0x2d7:  mov    -0x18(%ebp),%eax
08607bce +0x2da:  mov    %eax,0x4(%esp)
08607bd2 +0x2de:  lea    -0x64(%ebp),%eax
08607bd5 +0x2e1:  mov    %eax,(%esp)
08607bd8 +0x2e4:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08607bdd +0x2e9:  mov    0x4(%eax),%eax
08607be0 +0x2ec:  mov    %eax,-0x10(%ebp)
08607be3 +0x2ef:  movl   $0x0,-0xc(%ebp)
08607bea +0x2f6:  jmp    08607c24 <+0x330>
08607bec +0x2f8:  mov    -0xc(%ebp),%edx
08607bef +0x2fb:  mov    0x8(%ebp),%eax
08607bf2 +0x2fe:  add    $0x1b8,%edx
08607bf8 +0x304:  movzbl 0x6(%eax,%edx,2),%eax
08607bfd +0x309:  movzbl %al,%eax
08607c00 +0x30c:  cmp    -0x14(%ebp),%eax
08607c03 +0x30f:  jne    08607c20 <+0x32c>
08607c05 +0x311:  mov    -0x38(%ebp),%eax
08607c08 +0x314:  cmp    -0x10(%ebp),%eax
08607c0b +0x317:  jge    08607c34 <+0x340>
08607c0d +0x319:  mov    0x24(%ebp),%eax
08607c10 +0x31c:  movl   $0x14,(%eax)
08607c16 +0x322:  mov    $0xffffffff,%ebx
08607c1b +0x327:  jmp    08607d7e <+0x48a>
08607c20 +0x32c:  addl   $0x1,-0xc(%ebp)
08607c24 +0x330:  cmpl   $0xcb,-0xc(%ebp)
08607c2b +0x337:  setle  %al
08607c2e +0x33a:  test   %al,%al
08607c30 +0x33c:  jne    08607bec <+0x2f8>
08607c32 +0x33e:  jmp    08607c35 <+0x341>
08607c34 +0x340:  nop
08607c35 +0x341:  addl   $0x1,-0x18(%ebp)
08607c39 +0x345:  lea    -0x64(%ebp),%eax
08607c3c +0x348:  mov    %eax,(%esp)
08607c3f +0x34b:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08607c44 +0x350:  cmp    -0x18(%ebp),%eax
08607c47 +0x353:  setg   %al
08607c4a +0x356:  test   %al,%al
08607c4c +0x358:  jne    08607bb4 <+0x2c0>
08607c52 +0x35e:  mov    -0x3c(%ebp),%edx
08607c55 +0x361:  mov    0x8(%ebp),%eax
08607c58 +0x364:  add    $0x1b8,%edx
08607c5e +0x36a:  movzbl 0x7(%eax,%edx,2),%eax
08607c63 +0x36f:  movsbl %al,%eax
08607c66 +0x372:  mov    %eax,0x8(%esp)
08607c6a +0x376:  mov    -0x38(%ebp),%eax
08607c6d +0x379:  mov    %eax,0x4(%esp)
08607c71 +0x37d:  mov    -0x44(%ebp),%eax
08607c74 +0x380:  mov    %eax,(%esp)
08607c77 +0x383:  call   0835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>  ; CSkill::get_need_sp_sfp_for_level(int, int) const
08607c7c +0x388:  mov    %eax,-0x28(%ebp)
08607c7f +0x38b:  mov    0x1c(%ebp),%eax
08607c82 +0x38e:  mov    %eax,0x8(%esp)
08607c86 +0x392:  mov    0x18(%ebp),%eax
08607c89 +0x395:  mov    %eax,0x4(%esp)
08607c8d +0x399:  mov    -0x44(%ebp),%eax
08607c90 +0x39c:  mov    %eax,(%esp)
08607c93 +0x39f:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
08607c98 +0x3a4:  test   %al,%al
08607c9a +0x3a6:  je     08607cb9 <+0x3c5>
08607c9c +0x3a8:  mov    -0x44(%ebp),%eax
08607c9f +0x3ab:  mov    %eax,(%esp)
08607ca2 +0x3ae:  call   08609358 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x2b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x2b
08607ca7 +0x3b3:  mov    %eax,0x4(%esp)
08607cab +0x3b7:  mov    -0x28(%ebp),%eax
08607cae +0x3ba:  mov    %eax,(%esp)
08607cb1 +0x3bd:  call   08a9afa2 <_Z22getSkillSpendSPOnStealii>  ; getSkillSpendSPOnSteal(int, int)
08607cb6 +0x3c2:  mov    %eax,-0x28(%ebp)
08607cb9 +0x3c5:  mov    -0x3c(%ebp),%ecx
08607cbc +0x3c8:  mov    -0x3c(%ebp),%edx
08607cbf +0x3cb:  mov    0x8(%ebp),%eax
08607cc2 +0x3ce:  add    $0x1b8,%edx
08607cc8 +0x3d4:  movzbl 0x7(%eax,%edx,2),%eax
08607ccd +0x3d9:  mov    %eax,%edx
08607ccf +0x3db:  mov    0x20(%ebp),%eax
08607cd2 +0x3de:  mov    %edx,%ebx
08607cd4 +0x3e0:  sub    %al,%bl
08607cd6 +0x3e2:  mov    %ebx,%eax
08607cd8 +0x3e4:  mov    %eax,%edx
08607cda +0x3e6:  mov    0x8(%ebp),%eax
08607cdd +0x3e9:  add    $0x1b8,%ecx
08607ce3 +0x3ef:  mov    %dl,0x7(%eax,%ecx,2)
08607ce7 +0x3f3:  mov    -0x3c(%ebp),%edx
08607cea +0x3f6:  mov    0x8(%ebp),%eax
08607ced +0x3f9:  add    $0x1b8,%edx
08607cf3 +0x3ff:  movzbl 0x7(%eax,%edx,2),%eax
08607cf8 +0x404:  test   %al,%al
08607cfa +0x406:  jne    08607d0d <+0x419>
08607cfc +0x408:  mov    -0x3c(%ebp),%edx
08607cff +0x40b:  mov    0x8(%ebp),%eax
08607d02 +0x40e:  add    $0x1b8,%edx
08607d08 +0x414:  movb   $0x0,0x6(%eax,%edx,2)
08607d0d +0x419:  mov    -0x44(%ebp),%eax
08607d10 +0x41c:  mov    %eax,(%esp)
08607d13 +0x41f:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
08607d18 +0x424:  xor    $0x1,%eax
08607d1b +0x427:  test   %al,%al
08607d1d +0x429:  je     08607d3e <+0x44a>
08607d1f +0x42b:  mov    0x8(%ebp),%eax
08607d22 +0x42e:  mov    %eax,(%esp)
08607d25 +0x431:  call   08607efe <_ZN9SkillSlot18get_temp_remain_spEv>  ; SkillSlot::get_temp_remain_sp()
08607d2a +0x436:  mov    %eax,-0x24(%ebp)
08607d2d +0x439:  mov    -0x24(%ebp),%eax
08607d30 +0x43c:  mov    (%eax),%eax
08607d32 +0x43e:  mov    %eax,%edx
08607d34 +0x440:  add    -0x28(%ebp),%edx
08607d37 +0x443:  mov    -0x24(%ebp),%eax
08607d3a +0x446:  mov    %edx,(%eax)
08607d3c +0x448:  jmp    08607d5b <+0x467>
08607d3e +0x44a:  mov    0x8(%ebp),%eax
08607d41 +0x44d:  mov    %eax,(%esp)
08607d44 +0x450:  call   08607f1c <_ZN9SkillSlot19get_temp_remain_sfpEv>  ; SkillSlot::get_temp_remain_sfp()
08607d49 +0x455:  mov    %eax,-0x24(%ebp)
08607d4c +0x458:  mov    -0x24(%ebp),%eax
08607d4f +0x45b:  mov    (%eax),%eax
08607d51 +0x45d:  mov    %eax,%edx
08607d53 +0x45f:  add    -0x28(%ebp),%edx
08607d56 +0x462:  mov    -0x24(%ebp),%eax
08607d59 +0x465:  mov    %edx,(%eax)
08607d5b +0x467:  mov    0x24(%ebp),%eax
08607d5e +0x46a:  movl   $0x0,(%eax)
08607d64 +0x470:  mov    -0x3c(%ebp),%ebx
08607d67 +0x473:  jmp    08607d7e <+0x48a>
08607d69 +0x475:  mov    %edx,%ebx
08607d6b +0x477:  mov    %eax,%esi
08607d6d +0x479:  lea    -0x64(%ebp),%eax
08607d70 +0x47c:  mov    %eax,(%esp)
08607d73 +0x47f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607d78 +0x484:  mov    %esi,%eax
08607d7a +0x486:  mov    %ebx,%edx
08607d7c +0x488:  jmp    08607d8b <+0x497>
08607d7e +0x48a:  lea    -0x64(%ebp),%eax
08607d81 +0x48d:  mov    %eax,(%esp)
08607d84 +0x490:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607d89 +0x495:  jmp    08607da6 <+0x4b2>
08607d8b +0x497:  mov    %edx,%ebx
08607d8d +0x499:  mov    %eax,%esi
08607d8f +0x49b:  lea    -0x58(%ebp),%eax
08607d92 +0x49e:  mov    %eax,(%esp)
08607d95 +0x4a1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607d9a +0x4a6:  mov    %esi,%eax
08607d9c +0x4a8:  mov    %ebx,%edx
08607d9e +0x4aa:  mov    %eax,(%esp)
08607da1 +0x4ad:  call   08ae3750 <_Unwind_Resume>
08607da6 +0x4b2:  lea    -0x58(%ebp),%eax
08607da9 +0x4b5:  mov    %eax,(%esp)
08607dac +0x4b8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607db1 +0x4bd:  mov    %ebx,%eax
08607db3 +0x4bf:  sub    $0xffffff80,%esp
08607db6 +0x4c2:  pop    %ebx
08607db7 +0x4c3:  pop    %esi
08607db8 +0x4c4:  pop    %ebp
08607db9 +0x4c5:  ret
```

## 反编译 C

```c
// SkillSlot::try_refund_skill @ 0x86078f4

/* SkillSlot::try_refund_skill(int, int, int, int, int, int, int&) */

int __thiscall
SkillSlot::try_refund_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int *param_7)

{
  char cVar1;
  GameWorld *this_00;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_68 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_5c [12];
  uint local_50;
  uint local_4c;
  CSkill *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  *param_7 = 0x13;
  if (*(int *)this == 0) {
    iVar6 = -4;
  }
  else {
    local_48 = (CSkill *)0x0;
    iVar6 = G_CDataManager();
    local_48 = (CSkill *)CDataManager::find_skill(iVar6,param_3);
    if (local_48 == (CSkill *)0x0) {
      iVar6 = -1;
    }
    else {
      local_44 = CSkill::get_group(local_48);
      if (local_44 == 4) {
        *param_7 = 7;
        iVar6 = -5;
      }
      else {
        this_00 = (GameWorld *)G_GameWorld();
        cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
        if ((cVar1 == '\0') ||
           (iVar6 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this), -1 < iVar6)) {
          local_40 = get_skillslot_no(this,(_Mastered_skill *)(this + 0x376),param_1,local_44,true);
          if (local_40 == -1) {
            iVar6 = -1;
          }
          else {
            local_3c = (char)this[(local_40 + 0x1b8) * 2 + 7] - param_6;
            if (local_3c < 0) {
              iVar6 = -1;
            }
            else {
              CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
              iVar6 = G_CDataManager();
              local_38 = CDataManager::GetExpertJobScript(iVar6);
              if (local_38 != 0) {
                local_24 = 0;
                while (uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                               size((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *
                                    )(local_38 + 0xc)), local_24 < uVar3) {
                  piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                  ::operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                *)(local_38 + 0xc),local_24);
                  if (*piVar2 == param_1) {
                    *param_7 = 7;
                    return -5;
                  }
                  local_24 = local_24 + 1;
                }
              }
              std::pair<int,int>::pair((pair<int,int> *)&local_50);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_5c);
                    /* try { // try from 08607ad4 to 08607b76 has its CatchHandler @ 08607d8b */
              iVar6 = get_give_skill(this,param_3,param_4,param_5,(vector *)local_5c);
              if (iVar6 < 0) {
                iVar6 = -1;
              }
              else {
                local_20 = 0;
                while (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                               size(local_5c), (int)local_20 < iVar6) {
                  puVar5 = (uint *)std::
                                   vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                   operator[](local_5c,local_20);
                  local_4c = puVar5[1];
                  local_50 = *puVar5;
                  local_34 = local_50;
                  local_30 = local_4c;
                  if ((byte)this[(local_40 + 0x1b8) * 2 + 6] == local_50) {
                    if (local_3c < (int)local_4c) {
                      *param_7 = 7;
                      iVar6 = -1;
                      goto LAB_08607da6;
                    }
                    break;
                  }
                  local_20 = local_20 + 1;
                }
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_68)
                ;
                iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    /* try { // try from 08607b86 to 08607cb5 has its CatchHandler @ 08607d69 */
                iVar4 = G_CDataManager();
                CSkillList::get_post_learning_skill(*(int *)(iVar4 + 0x10),iVar6,(vector *)param_1);
                local_1c = 0;
                while (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                               size(local_68), (int)local_1c < iVar6) {
                  puVar5 = (uint *)std::
                                   vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                   operator[](local_68,local_1c);
                  local_18 = *puVar5;
                  iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_68,local_1c);
                  local_14 = *(int *)(iVar6 + 4);
                  for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
                    if ((byte)this[(local_10 + 0x1b8) * 2 + 6] == local_18) {
                      if (local_3c < local_14) {
                        *param_7 = 0x14;
                        iVar6 = -1;
                        goto LAB_08607d7e;
                      }
                      break;
                    }
                  }
                  local_1c = local_1c + 1;
                }
                local_2c = CSkill::get_need_sp_sfp_for_level
                                     (local_48,local_3c,(int)(char)this[(local_40 + 0x1b8) * 2 + 7])
                ;
                cVar1 = CSkill::IsStealable(local_48,param_4,param_5);
                if (cVar1 != '\0') {
                  iVar6 = CSkill::GetStealSPPenalty(local_48);
                  local_2c = getSkillSpendSPOnSteal(local_2c,iVar6);
                }
                this[(local_40 + 0x1b8) * 2 + 7] =
                     (SkillSlot)((char)this[(local_40 + 0x1b8) * 2 + 7] - (char)param_6);
                if (this[(local_40 + 0x1b8) * 2 + 7] == (SkillSlot)0x0) {
                  this[(local_40 + 0x1b8) * 2 + 6] = (SkillSlot)0x0;
                }
                cVar1 = CSkill::IsSpecialSkill(local_48);
                if (cVar1 == '\x01') {
                  local_28 = (int *)get_temp_remain_sfp(this);
                  *local_28 = *local_28 + local_2c;
                }
                else {
                  local_28 = (int *)get_temp_remain_sp(this);
                  *local_28 = *local_28 + local_2c;
                }
                *param_7 = 0;
                iVar6 = local_40;
LAB_08607d7e:
                    /* try { // try from 08607d84 to 08607d88 has its CatchHandler @ 08607d8b */
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                          (local_68);
              }
LAB_08607da6:
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_5c);
            }
          }
        }
        else {
          *param_7 = 7;
          iVar6 = -3;
        }
      }
    }
  }
  return iVar6;
}
```
