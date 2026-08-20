# master_new_skill

`_ZN9SkillSlot16master_new_skillEiiiiii`

`SkillSlot::master_new_skill(int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08603a74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603a74  _ZN9SkillSlot16master_new_skillEiiiiii
#           SkillSlot::master_new_skill(int, int, int, int, int, int)
# range [0x08603a74, 0x086040bb]
08603a74 +0x000:  push   %ebp
08603a75 +0x001:  mov    %esp,%ebp
08603a77 +0x003:  push   %ebx
08603a78 +0x004:  sub    $0x74,%esp
08603a7b +0x007:  movl   $0x0,-0x30(%ebp)
08603a82 +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08603a87 +0x013:  mov    0xc(%ebp),%edx
08603a8a +0x016:  mov    %edx,0x8(%esp)
08603a8e +0x01a:  mov    0x14(%ebp),%edx
08603a91 +0x01d:  mov    %edx,0x4(%esp)
08603a95 +0x021:  mov    %eax,(%esp)
08603a98 +0x024:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08603a9d +0x029:  mov    %eax,-0x30(%ebp)
08603aa0 +0x02c:  cmpl   $0x0,-0x30(%ebp)
08603aa4 +0x030:  jne    08603ab0 <+0x3c>
08603aa6 +0x032:  mov    $0xffffffff,%eax
08603aab +0x037:  jmp    086040b6 <+0x642>
08603ab0 +0x03c:  mov    -0x30(%ebp),%eax
08603ab3 +0x03f:  mov    %eax,(%esp)
08603ab6 +0x042:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08603abb +0x047:  mov    %eax,-0x2c(%ebp)
08603abe +0x04a:  mov    0x8(%ebp),%eax
08603ac1 +0x04d:  mov    (%eax),%eax
08603ac3 +0x04f:  test   %eax,%eax
08603ac5 +0x051:  jne    08603ad1 <+0x5d>
08603ac7 +0x053:  mov    $0xfffffffc,%eax
08603acc +0x058:  jmp    086040b6 <+0x642>
08603ad1 +0x05d:  mov    0x8(%ebp),%eax
08603ad4 +0x060:  mov    (%eax),%eax
08603ad6 +0x062:  mov    %eax,(%esp)
08603ad9 +0x065:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603ade +0x06a:  movl   $0x1,0x10(%esp)
08603ae6 +0x072:  mov    %eax,0xc(%esp)
08603aea +0x076:  mov    -0x2c(%ebp),%eax
08603aed +0x079:  mov    %eax,0x8(%esp)
08603af1 +0x07d:  mov    0xc(%ebp),%eax
08603af4 +0x080:  mov    %eax,0x4(%esp)
08603af8 +0x084:  mov    0x8(%ebp),%eax
08603afb +0x087:  mov    %eax,(%esp)
08603afe +0x08a:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
08603b03 +0x08f:  mov    %eax,-0x28(%ebp)
08603b06 +0x092:  movl   $0x0,-0x20(%ebp)
08603b0d +0x099:  mov    0x8(%ebp),%eax
08603b10 +0x09c:  mov    (%eax),%eax
08603b12 +0x09e:  mov    %eax,(%esp)
08603b15 +0x0a1:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603b1a +0x0a6:  mov    %eax,0x4(%esp)
08603b1e +0x0aa:  mov    0x8(%ebp),%eax
08603b21 +0x0ad:  mov    %eax,(%esp)
08603b24 +0x0b0:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08603b29 +0x0b5:  mov    %eax,-0x1c(%ebp)
08603b2c +0x0b8:  cmpl   $0x0,-0x1c(%ebp)
08603b30 +0x0bc:  jne    08603b3c <+0xc8>
08603b32 +0x0be:  mov    $0xfffffffc,%eax
08603b37 +0x0c3:  jmp    086040b6 <+0x642>
08603b3c +0x0c8:  cmpl   $0xffffffff,-0x28(%ebp)
08603b40 +0x0cc:  je     08603b6b <+0xf7>
08603b42 +0x0ce:  mov    -0x28(%ebp),%eax
08603b45 +0x0d1:  add    %eax,%eax
08603b47 +0x0d3:  add    -0x1c(%ebp),%eax
08603b4a +0x0d6:  movzbl 0x1(%eax),%eax
08603b4e +0x0da:  movsbl %al,%eax
08603b51 +0x0dd:  mov    %eax,-0x20(%ebp)
08603b54 +0x0e0:  mov    -0x28(%ebp),%eax
08603b57 +0x0e3:  add    %eax,%eax
08603b59 +0x0e5:  add    -0x1c(%ebp),%eax
08603b5c +0x0e8:  movzbl 0x1(%eax),%eax
08603b60 +0x0ec:  movsbl %al,%eax
08603b63 +0x0ef:  add    0x20(%ebp),%eax
08603b66 +0x0f2:  mov    %eax,-0x24(%ebp)
08603b69 +0x0f5:  jmp    08603b78 <+0x104>
08603b6b +0x0f7:  movl   $0x0,-0x20(%ebp)
08603b72 +0x0fe:  mov    0x20(%ebp),%eax
08603b75 +0x101:  mov    %eax,-0x24(%ebp)
08603b78 +0x104:  movb   $0x0,-0x15(%ebp)
08603b7c +0x108:  mov    0x1c(%ebp),%eax
08603b7f +0x10b:  mov    %eax,0x8(%esp)
08603b83 +0x10f:  mov    0x18(%ebp),%eax
08603b86 +0x112:  mov    %eax,0x4(%esp)
08603b8a +0x116:  mov    -0x30(%ebp),%eax
08603b8d +0x119:  mov    %eax,(%esp)
08603b90 +0x11c:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
08603b95 +0x121:  test   %al,%al
08603b97 +0x123:  je     08603bfd <+0x189>
08603b99 +0x125:  mov    0x8(%ebp),%eax
08603b9c +0x128:  mov    (%eax),%eax
08603b9e +0x12a:  mov    %eax,(%esp)
08603ba1 +0x12d:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08603ba6 +0x132:  movl   $0x163,0x4(%esp)
08603bae +0x13a:  mov    %eax,(%esp)
08603bb1 +0x13d:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
08603bb6 +0x142:  xor    $0x1,%eax
08603bb9 +0x145:  test   %al,%al
08603bbb +0x147:  jmp    08603bd8 <+0x164>
08603bbd +0x149:  mov    0x8(%ebp),%eax
08603bc0 +0x14c:  mov    (%eax),%eax
08603bc2 +0x14e:  mov    %eax,(%esp)
08603bc5 +0x151:  call   086627e0 <_ZNK5CUser29is_clear_stealingSkillMissionEv>  ; CUser::is_clear_stealingSkillMission() const
08603bca +0x156:  xor    $0x1,%eax
08603bcd +0x159:  test   %al,%al
08603bcf +0x15b:  je     08603bd8 <+0x164>
08603bd1 +0x15d:  mov    $0x1,%eax
08603bd6 +0x162:  jmp    08603bdd <+0x169>
08603bd8 +0x164:  mov    $0x0,%eax
08603bdd +0x169:  test   %al,%al
08603bdf +0x16b:  je     08603beb <+0x177>
08603be1 +0x16d:  mov    $0xffffffff,%eax
08603be6 +0x172:  jmp    086040b6 <+0x642>
08603beb +0x177:  movb   $0x1,-0x15(%ebp)
08603bef +0x17b:  mov    -0x30(%ebp),%eax
08603bf2 +0x17e:  mov    %eax,(%esp)
08603bf5 +0x181:  call   0860934a <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x1d>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x1d
08603bfa +0x186:  sub    %eax,0x10(%ebp)
08603bfd +0x189:  mov    0x8(%ebp),%eax
08603c00 +0x18c:  mov    (%eax),%eax
08603c02 +0x18e:  mov    %eax,(%esp)
08603c05 +0x191:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08603c0a +0x196:  mov    %eax,(%esp)
08603c0d +0x199:  call   08609398 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x6b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x6b
08603c12 +0x19e:  movzwl %ax,%eax
08603c15 +0x1a1:  add    %eax,0x10(%ebp)
08603c18 +0x1a4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08603c1d +0x1a9:  mov    %eax,(%esp)
08603c20 +0x1ac:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08603c25 +0x1b1:  test   %al,%al
08603c27 +0x1b3:  je     08603c8b <+0x217>
08603c29 +0x1b5:  mov    -0x30(%ebp),%eax
08603c2c +0x1b8:  mov    0x198(%eax),%ebx
08603c32 +0x1be:  mov    0x8(%ebp),%eax
08603c35 +0x1c1:  mov    (%eax),%eax
08603c37 +0x1c3:  mov    %eax,(%esp)
08603c3a +0x1c6:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08603c3f +0x1cb:  cmp    %eax,%ebx
08603c41 +0x1cd:  setg   %al
08603c44 +0x1d0:  test   %al,%al
08603c46 +0x1d2:  je     08603c52 <+0x1de>
08603c48 +0x1d4:  mov    $0xfffffffd,%eax
08603c4d +0x1d9:  jmp    086040b6 <+0x642>
08603c52 +0x1de:  mov    -0x24(%ebp),%eax
08603c55 +0x1e1:  mov    %eax,0x10(%esp)
08603c59 +0x1e5:  mov    0x1c(%ebp),%eax
08603c5c +0x1e8:  mov    %eax,0xc(%esp)
08603c60 +0x1ec:  mov    0x18(%ebp),%eax
08603c63 +0x1ef:  mov    %eax,0x8(%esp)
08603c67 +0x1f3:  movl   $0x46,0x4(%esp)
08603c6f +0x1fb:  mov    -0x30(%ebp),%eax
08603c72 +0x1fe:  mov    %eax,(%esp)
08603c75 +0x201:  call   0835039e <_ZNK6CSkill9can_learnEiiii>  ; CSkill::can_learn(int, int, int, int) const
08603c7a +0x206:  xor    $0x1,%eax
08603c7d +0x209:  test   %al,%al
08603c7f +0x20b:  je     08603cc3 <+0x24f>
08603c81 +0x20d:  mov    $0xfffffffd,%eax
08603c86 +0x212:  jmp    086040b6 <+0x642>
08603c8b +0x217:  mov    -0x24(%ebp),%eax
08603c8e +0x21a:  mov    %eax,0x10(%esp)
08603c92 +0x21e:  mov    0x1c(%ebp),%eax
08603c95 +0x221:  mov    %eax,0xc(%esp)
08603c99 +0x225:  mov    0x18(%ebp),%eax
08603c9c +0x228:  mov    %eax,0x8(%esp)
08603ca0 +0x22c:  mov    0x10(%ebp),%eax
08603ca3 +0x22f:  mov    %eax,0x4(%esp)
08603ca7 +0x233:  mov    -0x30(%ebp),%eax
08603caa +0x236:  mov    %eax,(%esp)
08603cad +0x239:  call   0835039e <_ZNK6CSkill9can_learnEiiii>  ; CSkill::can_learn(int, int, int, int) const
08603cb2 +0x23e:  xor    $0x1,%eax
08603cb5 +0x241:  test   %al,%al
08603cb7 +0x243:  je     08603cc3 <+0x24f>
08603cb9 +0x245:  mov    $0xfffffffd,%eax
08603cbe +0x24a:  jmp    086040b6 <+0x642>
08603cc3 +0x24f:  mov    0x1c(%ebp),%eax
08603cc6 +0x252:  mov    %eax,0x8(%esp)
08603cca +0x256:  mov    0x18(%ebp),%eax
08603ccd +0x259:  mov    %eax,0x4(%esp)
08603cd1 +0x25d:  mov    -0x30(%ebp),%eax
08603cd4 +0x260:  mov    %eax,(%esp)
08603cd7 +0x263:  call   083505be <_ZNK6CSkill27get_second_growtype_fitnessEii>  ; CSkill::get_second_growtype_fitness(int, int) const
08603cdc +0x268:  mov    %eax,-0x14(%ebp)
08603cdf +0x26b:  cmpl   $0x0,-0x14(%ebp)
08603ce3 +0x26f:  jne    08603cfa <+0x286>
08603ce5 +0x271:  mov    0x18(%ebp),%eax
08603ce8 +0x274:  mov    %eax,0x4(%esp)
08603cec +0x278:  mov    -0x30(%ebp),%eax
08603cef +0x27b:  mov    %eax,(%esp)
08603cf2 +0x27e:  call   08609378 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x4b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x4b
08603cf7 +0x283:  mov    %eax,-0x14(%ebp)
08603cfa +0x286:  mov    -0x24(%ebp),%eax
08603cfd +0x289:  mov    %eax,0x8(%esp)
08603d01 +0x28d:  mov    -0x20(%ebp),%eax
08603d04 +0x290:  mov    %eax,0x4(%esp)
08603d08 +0x294:  mov    -0x30(%ebp),%eax
08603d0b +0x297:  mov    %eax,(%esp)
08603d0e +0x29a:  call   0835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>  ; CSkill::get_need_sp_sfp_for_level(int, int) const
08603d13 +0x29f:  mov    %eax,-0x10(%ebp)
08603d16 +0x2a2:  cmpl   $0x0,-0x10(%ebp)
08603d1a +0x2a6:  jns    08603d26 <+0x2b2>
08603d1c +0x2a8:  mov    $0xfffffffc,%eax
08603d21 +0x2ad:  jmp    086040b6 <+0x642>
08603d26 +0x2b2:  cmpl   $0x0,-0x14(%ebp)
08603d2a +0x2b6:  jle    08603d54 <+0x2e0>
08603d2c +0x2b8:  mov    $0x64,%eax
08603d31 +0x2bd:  sub    -0x14(%ebp),%eax
08603d34 +0x2c0:  mov    %eax,%ecx
08603d36 +0x2c2:  imul   -0x10(%ebp),%ecx
08603d3a +0x2c6:  mov    $0x51eb851f,%edx
08603d3f +0x2cb:  mov    %ecx,%eax
08603d41 +0x2cd:  imul   %edx
08603d43 +0x2cf:  sar    $0x5,%edx
08603d46 +0x2d2:  mov    %ecx,%eax
08603d48 +0x2d4:  sar    $0x1f,%eax
08603d4b +0x2d7:  mov    %edx,%ecx
08603d4d +0x2d9:  sub    %eax,%ecx
08603d4f +0x2db:  mov    %ecx,%eax
08603d51 +0x2dd:  mov    %eax,-0x10(%ebp)
08603d54 +0x2e0:  cmpb   $0x0,-0x15(%ebp)
08603d58 +0x2e4:  je     08603d77 <+0x303>
08603d5a +0x2e6:  mov    -0x30(%ebp),%eax
08603d5d +0x2e9:  mov    %eax,(%esp)
08603d60 +0x2ec:  call   08609358 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x2b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x2b
08603d65 +0x2f1:  mov    %eax,0x4(%esp)
08603d69 +0x2f5:  mov    -0x10(%ebp),%eax
08603d6c +0x2f8:  mov    %eax,(%esp)
08603d6f +0x2fb:  call   08a9afa2 <_Z22getSkillSpendSPOnStealii>  ; getSkillSpendSPOnSteal(int, int)
08603d74 +0x300:  mov    %eax,-0x10(%ebp)
08603d77 +0x303:  cmpl   $0x0,-0x10(%ebp)
08603d7b +0x307:  jns    08603d84 <+0x310>
08603d7d +0x309:  movl   $0x0,-0x10(%ebp)
08603d84 +0x310:  mov    -0x30(%ebp),%eax
08603d87 +0x313:  mov    %eax,(%esp)
08603d8a +0x316:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
08603d8f +0x31b:  test   %al,%al
08603d91 +0x31d:  je     08603df6 <+0x382>
08603d93 +0x31f:  mov    0x8(%ebp),%eax
08603d96 +0x322:  mov    (%eax),%eax
08603d98 +0x324:  mov    %eax,(%esp)
08603d9b +0x327:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603da0 +0x32c:  cmp    $0xffffffff,%eax
08603da3 +0x32f:  je     08603db6 <+0x342>
08603da5 +0x331:  mov    0x8(%ebp),%eax
08603da8 +0x334:  mov    (%eax),%eax
08603daa +0x336:  mov    %eax,(%esp)
08603dad +0x339:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603db2 +0x33e:  test   %eax,%eax
08603db4 +0x340:  jne    08603dbd <+0x349>
08603db6 +0x342:  mov    $0x1,%eax
08603dbb +0x347:  jmp    08603dc2 <+0x34e>
08603dbd +0x349:  mov    $0x0,%eax
08603dc2 +0x34e:  test   %al,%al
08603dc4 +0x350:  je     08603dde <+0x36a>
08603dc6 +0x352:  movl   $0x2,0x4(%esp)
08603dce +0x35a:  mov    0x8(%ebp),%eax
08603dd1 +0x35d:  mov    %eax,(%esp)
08603dd4 +0x360:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08603dd9 +0x365:  mov    %eax,-0xc(%ebp)
08603ddc +0x368:  jmp    08603e15 <+0x3a1>
08603dde +0x36a:  movl   $0x3,0x4(%esp)
08603de6 +0x372:  mov    0x8(%ebp),%eax
08603de9 +0x375:  mov    %eax,(%esp)
08603dec +0x378:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08603df1 +0x37d:  mov    %eax,-0xc(%ebp)
08603df4 +0x380:  jmp    08603e15 <+0x3a1>
08603df6 +0x382:  mov    0x8(%ebp),%eax
08603df9 +0x385:  mov    (%eax),%eax
08603dfb +0x387:  mov    %eax,(%esp)
08603dfe +0x38a:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603e03 +0x38f:  mov    %eax,0x4(%esp)
08603e07 +0x393:  mov    0x8(%ebp),%eax
08603e0a +0x396:  mov    %eax,(%esp)
08603e0d +0x399:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08603e12 +0x39e:  mov    %eax,-0xc(%ebp)
08603e15 +0x3a1:  cmpl   $0x0,-0xc(%ebp)
08603e19 +0x3a5:  jne    08603e25 <+0x3b1>
08603e1b +0x3a7:  mov    $0xffffffff,%eax
08603e20 +0x3ac:  jmp    086040b6 <+0x642>
08603e25 +0x3b1:  mov    -0xc(%ebp),%eax
08603e28 +0x3b4:  mov    (%eax),%eax
08603e2a +0x3b6:  cmp    -0x10(%ebp),%eax
08603e2d +0x3b9:  jge    08603e39 <+0x3c5>
08603e2f +0x3bb:  mov    $0xfffffffe,%eax
08603e34 +0x3c0:  jmp    086040b6 <+0x642>
08603e39 +0x3c5:  lea    -0x48(%ebp),%eax
08603e3c +0x3c8:  mov    %eax,(%esp)
08603e3f +0x3cb:  call   086093e6 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xb9>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xb9
08603e44 +0x3d0:  mov    -0x30(%ebp),%eax
08603e47 +0x3d3:  lea    0x18(%eax),%edx
08603e4a +0x3d6:  lea    -0x4c(%ebp),%eax
08603e4d +0x3d9:  mov    %edx,0x4(%esp)
08603e51 +0x3dd:  mov    %eax,(%esp)
08603e54 +0x3e0:  call   083ab684 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45650>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45650
08603e59 +0x3e5:  sub    $0x4,%esp
08603e5c +0x3e8:  mov    -0x4c(%ebp),%eax
08603e5f +0x3eb:  mov    %eax,-0x48(%ebp)
08603e62 +0x3ee:  jmp    08603ece <+0x45a>
08603e64 +0x3f0:  lea    -0x48(%ebp),%eax
08603e67 +0x3f3:  mov    %eax,(%esp)
08603e6a +0x3f6:  call   086093f4 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xc7>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xc7
08603e6f +0x3fb:  mov    (%eax),%edx
08603e71 +0x3fd:  mov    %edx,-0x44(%ebp)
08603e74 +0x400:  mov    0x4(%eax),%edx
08603e77 +0x403:  mov    %edx,-0x40(%ebp)
08603e7a +0x406:  mov    0x8(%eax),%eax
08603e7d +0x409:  mov    %eax,-0x3c(%ebp)
08603e80 +0x40c:  mov    -0x3c(%ebp),%ecx
08603e83 +0x40f:  mov    -0x40(%ebp),%edx
08603e86 +0x412:  mov    -0x44(%ebp),%eax
08603e89 +0x415:  mov    %ecx,0xc(%esp)
08603e8d +0x419:  mov    %edx,0x8(%esp)
08603e91 +0x41d:  mov    %eax,0x4(%esp)
08603e95 +0x421:  mov    0x8(%ebp),%eax
08603e98 +0x424:  mov    %eax,(%esp)
08603e9b +0x427:  call   08604898 <_ZNK9SkillSlot20check_skill_masteredEiii>  ; SkillSlot::check_skill_mastered(int, int, int) const
08603ea0 +0x42c:  xor    $0x1,%eax
08603ea3 +0x42f:  test   %al,%al
08603ea5 +0x431:  je     08603eb1 <+0x43d>
08603ea7 +0x433:  mov    $0xfffffffd,%eax
08603eac +0x438:  jmp    086040b6 <+0x642>
08603eb1 +0x43d:  lea    -0x34(%ebp),%eax
08603eb4 +0x440:  movl   $0x0,0x8(%esp)
08603ebc +0x448:  lea    -0x48(%ebp),%edx
08603ebf +0x44b:  mov    %edx,0x4(%esp)
08603ec3 +0x44f:  mov    %eax,(%esp)
08603ec6 +0x452:  call   08609402 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xd5>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xd5
08603ecb +0x457:  sub    $0x4,%esp
08603ece +0x45a:  mov    -0x30(%ebp),%eax
08603ed1 +0x45d:  lea    0x18(%eax),%edx
08603ed4 +0x460:  lea    -0x38(%ebp),%eax
08603ed7 +0x463:  mov    %edx,0x4(%esp)
08603edb +0x467:  mov    %eax,(%esp)
08603ede +0x46a:  call   083ab6aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45676>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45676
08603ee3 +0x46f:  sub    $0x4,%esp
08603ee6 +0x472:  lea    -0x38(%ebp),%eax
08603ee9 +0x475:  mov    %eax,0x4(%esp)
08603eed +0x479:  lea    -0x48(%ebp),%eax
08603ef0 +0x47c:  mov    %eax,(%esp)
08603ef3 +0x47f:  call   083d65d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7059c>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7059c
08603ef8 +0x484:  test   %al,%al
08603efa +0x486:  jne    08603e64 <+0x3f0>
08603f00 +0x48c:  cmpl   $0xffffffff,-0x28(%ebp)
08603f04 +0x490:  je     08603fc5 <+0x551>
08603f0a +0x496:  mov    -0x28(%ebp),%eax
08603f0d +0x499:  add    %eax,%eax
08603f0f +0x49b:  add    -0x1c(%ebp),%eax
08603f12 +0x49e:  mov    -0x24(%ebp),%edx
08603f15 +0x4a1:  mov    %dl,0x1(%eax)
08603f18 +0x4a4:  mov    -0xc(%ebp),%eax
08603f1b +0x4a7:  mov    (%eax),%eax
08603f1d +0x4a9:  mov    %eax,%edx
08603f1f +0x4ab:  sub    -0x10(%ebp),%edx
08603f22 +0x4ae:  mov    -0xc(%ebp),%eax
08603f25 +0x4b1:  mov    %edx,(%eax)
08603f27 +0x4b3:  mov    0x8(%ebp),%eax
08603f2a +0x4b6:  mov    (%eax),%eax
08603f2c +0x4b8:  test   %eax,%eax
08603f2e +0x4ba:  je     08603fbd <+0x549>
08603f34 +0x4c0:  mov    0x8(%ebp),%eax
08603f37 +0x4c3:  mov    (%eax),%eax
08603f39 +0x4c5:  mov    %eax,(%esp)
08603f3c +0x4c8:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603f41 +0x4cd:  mov    %eax,%ebx
08603f43 +0x4cf:  mov    0x8(%ebp),%eax
08603f46 +0x4d2:  mov    (%eax),%eax
08603f48 +0x4d4:  mov    %eax,(%esp)
08603f4b +0x4d7:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08603f50 +0x4dc:  mov    0x8(%ebp),%edx
08603f53 +0x4df:  mov    (%edx),%edx
08603f55 +0x4e1:  lea    0x79700(%edx),%ecx
08603f5b +0x4e7:  movl   $0x0,0x14(%esp)
08603f63 +0x4ef:  mov    -0x24(%ebp),%edx
08603f66 +0x4f2:  mov    %edx,0x10(%esp)
08603f6a +0x4f6:  mov    0xc(%ebp),%edx
08603f6d +0x4f9:  mov    %edx,0xc(%esp)
08603f71 +0x4fd:  mov    %ebx,0x8(%esp)
08603f75 +0x501:  mov    %eax,0x4(%esp)
08603f79 +0x505:  mov    %ecx,(%esp)
08603f7c +0x508:  call   08682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>  ; cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason)
08603f81 +0x50d:  mov    -0xc(%ebp),%eax
08603f84 +0x510:  mov    (%eax),%ebx
08603f86 +0x512:  mov    0x8(%ebp),%eax
08603f89 +0x515:  mov    (%eax),%eax
08603f8b +0x517:  mov    %eax,(%esp)
08603f8e +0x51a:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603f93 +0x51f:  mov    0x8(%ebp),%edx
08603f96 +0x522:  mov    (%edx),%edx
08603f98 +0x524:  lea    0x79700(%edx),%ecx
08603f9e +0x52a:  movl   $0x0,0x10(%esp)
08603fa6 +0x532:  mov    -0x10(%ebp),%edx
08603fa9 +0x535:  mov    %edx,0xc(%esp)
08603fad +0x539:  mov    %ebx,0x8(%esp)
08603fb1 +0x53d:  mov    %eax,0x4(%esp)
08603fb5 +0x541:  mov    %ecx,(%esp)
08603fb8 +0x544:  call   08682be8 <_ZN15cUserHistoryLog5SPSubEiii12eSPSubReason>  ; cUserHistoryLog::SPSub(int, int, int, eSPSubReason)
08603fbd +0x549:  mov    -0x28(%ebp),%eax
08603fc0 +0x54c:  jmp    086040b6 <+0x642>
08603fc5 +0x551:  mov    -0xc(%ebp),%eax
08603fc8 +0x554:  mov    (%eax),%eax
08603fca +0x556:  mov    %eax,%edx
08603fcc +0x558:  sub    -0x10(%ebp),%edx
08603fcf +0x55b:  mov    -0xc(%ebp),%eax
08603fd2 +0x55e:  mov    %edx,(%eax)
08603fd4 +0x560:  mov    0x8(%ebp),%eax
08603fd7 +0x563:  mov    (%eax),%eax
08603fd9 +0x565:  mov    %eax,(%esp)
08603fdc +0x568:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603fe1 +0x56d:  mov    %eax,%ebx
08603fe3 +0x56f:  mov    -0x30(%ebp),%eax
08603fe6 +0x572:  mov    %eax,(%esp)
08603fe9 +0x575:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
08603fee +0x57a:  movzbl %al,%eax
08603ff1 +0x57d:  mov    0x20(%ebp),%edx
08603ff4 +0x580:  mov    %edx,0x14(%esp)
08603ff8 +0x584:  mov    %ebx,0x10(%esp)
08603ffc +0x588:  mov    %eax,0xc(%esp)
08604000 +0x58c:  mov    -0x2c(%ebp),%eax
08604003 +0x58f:  mov    %eax,0x8(%esp)
08604007 +0x593:  mov    0xc(%ebp),%eax
0860400a +0x596:  mov    %eax,0x4(%esp)
0860400e +0x59a:  mov    0x8(%ebp),%eax
08604011 +0x59d:  mov    %eax,(%esp)
08604014 +0x5a0:  call   08604324 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi>  ; SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int)
08604019 +0x5a5:  mov    %eax,-0x28(%ebp)
0860401c +0x5a8:  mov    0x8(%ebp),%eax
0860401f +0x5ab:  mov    (%eax),%eax
08604021 +0x5ad:  test   %eax,%eax
08604023 +0x5af:  je     086040b3 <+0x63f>
08604029 +0x5b5:  mov    0x8(%ebp),%eax
0860402c +0x5b8:  mov    (%eax),%eax
0860402e +0x5ba:  mov    %eax,(%esp)
08604031 +0x5bd:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08604036 +0x5c2:  mov    %eax,%ebx
08604038 +0x5c4:  mov    0x8(%ebp),%eax
0860403b +0x5c7:  mov    (%eax),%eax
0860403d +0x5c9:  mov    %eax,(%esp)
08604040 +0x5cc:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08604045 +0x5d1:  mov    0x8(%ebp),%edx
08604048 +0x5d4:  mov    (%edx),%edx
0860404a +0x5d6:  lea    0x79700(%edx),%ecx
08604050 +0x5dc:  movl   $0x0,0x14(%esp)
08604058 +0x5e4:  mov    0x20(%ebp),%edx
0860405b +0x5e7:  mov    %edx,0x10(%esp)
0860405f +0x5eb:  mov    0xc(%ebp),%edx
08604062 +0x5ee:  mov    %edx,0xc(%esp)
08604066 +0x5f2:  mov    %ebx,0x8(%esp)
0860406a +0x5f6:  mov    %eax,0x4(%esp)
0860406e +0x5fa:  mov    %ecx,(%esp)
08604071 +0x5fd:  call   08682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>  ; cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason)
08604076 +0x602:  mov    0x8(%ebp),%eax
08604079 +0x605:  mov    0x4(%eax),%ebx
0860407c +0x608:  mov    0x8(%ebp),%eax
0860407f +0x60b:  mov    (%eax),%eax
08604081 +0x60d:  mov    %eax,(%esp)
08604084 +0x610:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08604089 +0x615:  mov    0x8(%ebp),%edx
0860408c +0x618:  mov    (%edx),%edx
0860408e +0x61a:  lea    0x79700(%edx),%ecx
08604094 +0x620:  movl   $0x0,0x10(%esp)
0860409c +0x628:  mov    -0x10(%ebp),%edx
0860409f +0x62b:  mov    %edx,0xc(%esp)
086040a3 +0x62f:  mov    %ebx,0x8(%esp)
086040a7 +0x633:  mov    %eax,0x4(%esp)
086040ab +0x637:  mov    %ecx,(%esp)
086040ae +0x63a:  call   08682be8 <_ZN15cUserHistoryLog5SPSubEiii12eSPSubReason>  ; cUserHistoryLog::SPSub(int, int, int, eSPSubReason)
086040b3 +0x63f:  mov    -0x28(%ebp),%eax
086040b6 +0x642:  mov    -0x4(%ebp),%ebx
086040b9 +0x645:  leave
086040ba +0x646:  ret
086040bb +0x647:  nop
```

## 反编译 C

```c
// SkillSlot::master_new_skill @ 0x8603a74

/* WARNING: Removing unreachable block (ram,0x08603be1) */
/* SkillSlot::master_new_skill(int, int, int, int, int, int) */

int __thiscall
SkillSlot::master_new_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  UserQuest *this_00;
  CUserPremium *this_01;
  uint uVar6;
  GameWorld *this_02;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  _List_const_iterator<_pre_skill> local_4c [4];
  int local_48;
  int local_44;
  int local_40;
  _List_const_iterator local_3c [4];
  _List_const_iterator<_pre_skill> local_38 [4];
  CSkill *local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int *local_10;
  
  local_34 = (CSkill *)0x0;
  iVar4 = G_CDataManager();
  local_34 = (CSkill *)CDataManager::find_skill(iVar4,param_3);
  if (local_34 == (CSkill *)0x0) {
    local_2c = -1;
  }
  else {
    local_30 = CSkill::get_group(local_34);
    if (*(int *)this == 0) {
      local_2c = -4;
    }
    else {
      uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      local_2c = get_skillslot_no(this,param_1,local_30,uVar5,1);
      local_24 = 0;
      uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      local_20 = get_skillslot_buf(this,uVar5);
      if (local_20 == 0) {
        local_2c = -4;
      }
      else {
        if (local_2c == -1) {
          local_24 = 0;
          local_28 = param_6;
        }
        else {
          local_24 = (int)*(char *)(local_2c * 2 + local_20 + 1);
          local_28 = *(char *)(local_2c * 2 + local_20 + 1) + param_6;
        }
        local_19 = '\0';
        cVar2 = CSkill::IsStealable(local_34,param_4,param_5);
        if (cVar2 != '\0') {
          this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)this);
          UserQuest::isClearQuest(this_00,0x163);
          local_19 = '\x01';
          iVar4 = CSkill::GetStealLevelPenalty(local_34);
          param_2 = param_2 - iVar4;
        }
        this_01 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
        uVar6 = WongWork::CUserPremium::getOverSkillLevel(this_01);
        this_02 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::IsPvPSkilTreeChannel(this_02);
        if (cVar2 == '\0') {
          cVar2 = CSkill::can_learn(local_34,param_2 + (uVar6 & 0xffff),param_4,param_5,local_28);
          if (cVar2 != '\x01') {
            return -3;
          }
        }
        else {
          iVar4 = *(int *)(local_34 + 0x198);
          iVar7 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this);
          if (iVar7 < iVar4) {
            return -3;
          }
          cVar2 = CSkill::can_learn(local_34,0x46,param_4,param_5,local_28);
          if (cVar2 != '\x01') {
            return -3;
          }
        }
        local_18 = CSkill::get_second_growtype_fitness(local_34,param_4,param_5);
        if (local_18 == 0) {
          local_18 = CSkill::get_fitness(local_34,param_4);
        }
        local_14 = CSkill::get_need_sp_sfp_for_level(local_34,local_24,local_28);
        if (local_14 < 0) {
          local_2c = -4;
        }
        else {
          if (0 < local_18) {
            local_14 = ((100 - local_18) * local_14) / 100;
          }
          if (local_19 != '\0') {
            iVar4 = CSkill::GetStealSPPenalty(local_34);
            local_14 = getSkillSpendSPOnSteal(local_14,iVar4);
          }
          if (local_14 < 0) {
            local_14 = 0;
          }
          cVar2 = CSkill::IsSpecialSkill(local_34);
          if (cVar2 == '\0') {
            uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
            local_10 = (int *)get_cur_remain_sp(this,uVar5);
          }
          else {
            iVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
            if ((iVar4 == -1) ||
               (iVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this),
               iVar4 == 0)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              local_10 = (int *)get_cur_remain_sp(this,2);
            }
            else {
              local_10 = (int *)get_cur_remain_sp(this,3);
            }
          }
          if (local_10 == (int *)0x0) {
            local_2c = -1;
          }
          else if (*local_10 < local_14) {
            local_2c = -2;
          }
          else {
            std::_List_const_iterator<_pre_skill>::_List_const_iterator(local_4c);
            std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
            while( true ) {
              std::list<_pre_skill,std::allocator<_pre_skill>>::end();
              cVar2 = std::_List_const_iterator<_pre_skill>::operator!=(local_4c,local_3c);
              if (cVar2 == '\0') break;
              piVar8 = (int *)std::_List_const_iterator<_pre_skill>::operator*(local_4c);
              local_48 = *piVar8;
              local_44 = piVar8[1];
              local_40 = piVar8[2];
              cVar2 = check_skill_mastered(this,local_48,local_44,local_40);
              if (cVar2 != '\x01') {
                return -3;
              }
              std::_List_const_iterator<_pre_skill>::operator++(local_38,(int)local_4c);
            }
            if (local_2c == -1) {
              *local_10 = *local_10 - local_14;
              uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
              uVar3 = CSkill::is_active_skill(local_34);
              local_2c = insert_skill(this,param_1,local_30,uVar3,uVar5,param_6);
              if (*(int *)this != 0) {
                uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                uVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                cUserHistoryLog::SkillAdd
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar9,uVar5,param_1,param_6,0
                          );
                uVar5 = *(undefined4 *)(this + 4);
                uVar9 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                cUserHistoryLog::SPSub
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar9,uVar5,local_14,0);
              }
            }
            else {
              *(char *)(local_2c * 2 + local_20 + 1) = (char)local_28;
              *local_10 = *local_10 - local_14;
              if (*(int *)this != 0) {
                uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                uVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                cUserHistoryLog::SkillAdd
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar9,uVar5,param_1,local_28,
                           0);
                iVar4 = *local_10;
                uVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                cUserHistoryLog::SPSub
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar5,iVar4,local_14,0);
              }
            }
          }
        }
      }
    }
  }
  return local_2c;
}
```
