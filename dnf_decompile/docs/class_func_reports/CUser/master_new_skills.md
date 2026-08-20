# master_new_skills

`_ZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KIND`

`CUser::master_new_skills(_Mastered_skill*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866b53e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866b53e  _ZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KIND
#           CUser::master_new_skills(_Mastered_skill*, ENUM_SKILL_TREE_KIND)
# range [0x0866b53e, 0x0866bce7]
0866b53e +0x000:  push   %ebp
0866b53f +0x001:  mov    %esp,%ebp
0866b541 +0x003:  push   %edi
0866b542 +0x004:  push   %esi
0866b543 +0x005:  push   %ebx
0866b544 +0x006:  sub    $0xac,%esp
0866b54a +0x00c:  movl   $0x0,-0x54(%ebp)
0866b551 +0x013:  movl   $0x0,-0x58(%ebp)
0866b558 +0x01a:  mov    0x8(%ebp),%eax
0866b55b +0x01d:  mov    %eax,(%esp)
0866b55e +0x020:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b563 +0x025:  lea    -0x58(%ebp),%edx
0866b566 +0x028:  mov    %edx,0xc(%esp)
0866b56a +0x02c:  lea    -0x54(%ebp),%edx
0866b56d +0x02f:  mov    %edx,0x8(%esp)
0866b571 +0x033:  mov    0xc(%ebp),%edx
0866b574 +0x036:  mov    %edx,0x4(%esp)
0866b578 +0x03a:  mov    %eax,(%esp)
0866b57b +0x03d:  call   086055ec <_ZNK9SkillSlot10calcUsedSPEPK15_Mastered_skillRiS3_>  ; SkillSlot::calcUsedSP(_Mastered_skill const*, int&, int&) const
0866b580 +0x042:  mov    0x8(%ebp),%eax
0866b583 +0x045:  mov    %eax,(%esp)
0866b586 +0x048:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b58b +0x04d:  mov    0x10(%ebp),%edx
0866b58e +0x050:  mov    %edx,0x4(%esp)
0866b592 +0x054:  mov    %eax,(%esp)
0866b595 +0x057:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866b59a +0x05c:  mov    -0x54(%ebp),%edx
0866b59d +0x05f:  cmp    %edx,%eax
0866b59f +0x061:  setl   %al
0866b5a2 +0x064:  test   %al,%al
0866b5a4 +0x066:  je     0866b5ca <+0x8c>
0866b5a6 +0x068:  mov    0x8(%ebp),%eax
0866b5a9 +0x06b:  mov    %eax,(%esp)
0866b5ac +0x06e:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b5b1 +0x073:  mov    0x10(%ebp),%edx
0866b5b4 +0x076:  mov    %edx,0x8(%esp)
0866b5b8 +0x07a:  movl   $0x0,0x4(%esp)
0866b5c0 +0x082:  mov    %eax,(%esp)
0866b5c3 +0x085:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866b5c8 +0x08a:  jmp    0866b609 <+0xcb>
0866b5ca +0x08c:  mov    0x8(%ebp),%eax
0866b5cd +0x08f:  mov    %eax,(%esp)
0866b5d0 +0x092:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b5d5 +0x097:  mov    0x10(%ebp),%edx
0866b5d8 +0x09a:  mov    %edx,0x4(%esp)
0866b5dc +0x09e:  mov    %eax,(%esp)
0866b5df +0x0a1:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866b5e4 +0x0a6:  mov    -0x54(%ebp),%edx
0866b5e7 +0x0a9:  mov    %eax,%esi
0866b5e9 +0x0ab:  sub    %edx,%esi
0866b5eb +0x0ad:  mov    0x8(%ebp),%eax
0866b5ee +0x0b0:  mov    %eax,(%esp)
0866b5f1 +0x0b3:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b5f6 +0x0b8:  mov    0x10(%ebp),%edx
0866b5f9 +0x0bb:  mov    %edx,0x8(%esp)
0866b5fd +0x0bf:  mov    %esi,0x4(%esp)
0866b601 +0x0c3:  mov    %eax,(%esp)
0866b604 +0x0c6:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866b609 +0x0cb:  mov    0x10(%ebp),%eax
0866b60c +0x0ce:  cmp    $0xffffffff,%eax
0866b60f +0x0d1:  je     0866b61c <+0xde>
0866b611 +0x0d3:  mov    0x10(%ebp),%eax
0866b614 +0x0d6:  test   %eax,%eax
0866b616 +0x0d8:  jne    0866b6f5 <+0x1b7>
0866b61c +0x0de:  mov    0x8(%ebp),%eax
0866b61f +0x0e1:  mov    %eax,(%esp)
0866b622 +0x0e4:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b627 +0x0e9:  movl   $0x2,0x4(%esp)
0866b62f +0x0f1:  mov    %eax,(%esp)
0866b632 +0x0f4:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b637 +0x0f9:  mov    -0x58(%ebp),%edx
0866b63a +0x0fc:  cmp    %edx,%eax
0866b63c +0x0fe:  setl   %al
0866b63f +0x101:  test   %al,%al
0866b641 +0x103:  je     0866b668 <+0x12a>
0866b643 +0x105:  mov    0x8(%ebp),%eax
0866b646 +0x108:  mov    %eax,(%esp)
0866b649 +0x10b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b64e +0x110:  movl   $0x2,0x8(%esp)
0866b656 +0x118:  movl   $0x0,0x4(%esp)
0866b65e +0x120:  mov    %eax,(%esp)
0866b661 +0x123:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866b666 +0x128:  jmp    0866b6a9 <+0x16b>
0866b668 +0x12a:  mov    0x8(%ebp),%eax
0866b66b +0x12d:  mov    %eax,(%esp)
0866b66e +0x130:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b673 +0x135:  movl   $0x2,0x4(%esp)
0866b67b +0x13d:  mov    %eax,(%esp)
0866b67e +0x140:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b683 +0x145:  mov    -0x58(%ebp),%edx
0866b686 +0x148:  mov    %eax,%esi
0866b688 +0x14a:  sub    %edx,%esi
0866b68a +0x14c:  mov    0x8(%ebp),%eax
0866b68d +0x14f:  mov    %eax,(%esp)
0866b690 +0x152:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b695 +0x157:  movl   $0x2,0x8(%esp)
0866b69d +0x15f:  mov    %esi,0x4(%esp)
0866b6a1 +0x163:  mov    %eax,(%esp)
0866b6a4 +0x166:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866b6a9 +0x16b:  mov    -0x58(%ebp),%esi
0866b6ac +0x16e:  mov    0x8(%ebp),%eax
0866b6af +0x171:  mov    %eax,(%esp)
0866b6b2 +0x174:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b6b7 +0x179:  movl   $0x2,0x4(%esp)
0866b6bf +0x181:  mov    %eax,(%esp)
0866b6c2 +0x184:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b6c7 +0x189:  mov    0x8(%ebp),%edx
0866b6ca +0x18c:  add    $0x79700,%edx
0866b6d0 +0x192:  movl   $0x1,0x10(%esp)
0866b6d8 +0x19a:  mov    %esi,0xc(%esp)
0866b6dc +0x19e:  movl   $0x2,0x8(%esp)
0866b6e4 +0x1a6:  mov    %eax,0x4(%esp)
0866b6e8 +0x1aa:  mov    %edx,(%esp)
0866b6eb +0x1ad:  call   08682c5c <_ZN15cUserHistoryLog6SFPSubEiii12eSPSubReason>  ; cUserHistoryLog::SFPSub(int, int, int, eSPSubReason)
0866b6f0 +0x1b2:  jmp    0866b7c9 <+0x28b>
0866b6f5 +0x1b7:  mov    0x8(%ebp),%eax
0866b6f8 +0x1ba:  mov    %eax,(%esp)
0866b6fb +0x1bd:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b700 +0x1c2:  movl   $0x3,0x4(%esp)
0866b708 +0x1ca:  mov    %eax,(%esp)
0866b70b +0x1cd:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b710 +0x1d2:  mov    -0x58(%ebp),%edx
0866b713 +0x1d5:  cmp    %edx,%eax
0866b715 +0x1d7:  setl   %al
0866b718 +0x1da:  test   %al,%al
0866b71a +0x1dc:  je     0866b741 <+0x203>
0866b71c +0x1de:  mov    0x8(%ebp),%eax
0866b71f +0x1e1:  mov    %eax,(%esp)
0866b722 +0x1e4:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b727 +0x1e9:  movl   $0x3,0x8(%esp)
0866b72f +0x1f1:  movl   $0x0,0x4(%esp)
0866b737 +0x1f9:  mov    %eax,(%esp)
0866b73a +0x1fc:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866b73f +0x201:  jmp    0866b782 <+0x244>
0866b741 +0x203:  mov    0x8(%ebp),%eax
0866b744 +0x206:  mov    %eax,(%esp)
0866b747 +0x209:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b74c +0x20e:  movl   $0x3,0x4(%esp)
0866b754 +0x216:  mov    %eax,(%esp)
0866b757 +0x219:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b75c +0x21e:  mov    -0x58(%ebp),%edx
0866b75f +0x221:  mov    %eax,%esi
0866b761 +0x223:  sub    %edx,%esi
0866b763 +0x225:  mov    0x8(%ebp),%eax
0866b766 +0x228:  mov    %eax,(%esp)
0866b769 +0x22b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b76e +0x230:  movl   $0x3,0x8(%esp)
0866b776 +0x238:  mov    %esi,0x4(%esp)
0866b77a +0x23c:  mov    %eax,(%esp)
0866b77d +0x23f:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0866b782 +0x244:  mov    -0x58(%ebp),%esi
0866b785 +0x247:  mov    0x8(%ebp),%eax
0866b788 +0x24a:  mov    %eax,(%esp)
0866b78b +0x24d:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b790 +0x252:  movl   $0x3,0x4(%esp)
0866b798 +0x25a:  mov    %eax,(%esp)
0866b79b +0x25d:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b7a0 +0x262:  mov    0x8(%ebp),%edx
0866b7a3 +0x265:  add    $0x79700,%edx
0866b7a9 +0x26b:  movl   $0x1,0x10(%esp)
0866b7b1 +0x273:  mov    %esi,0xc(%esp)
0866b7b5 +0x277:  movl   $0x3,0x8(%esp)
0866b7bd +0x27f:  mov    %eax,0x4(%esp)
0866b7c1 +0x283:  mov    %edx,(%esp)
0866b7c4 +0x286:  call   08682c5c <_ZN15cUserHistoryLog6SFPSubEiii12eSPSubReason>  ; cUserHistoryLog::SFPSub(int, int, int, eSPSubReason)
0866b7c9 +0x28b:  mov    -0x54(%ebp),%edi
0866b7cc +0x28e:  mov    0x10(%ebp),%esi
0866b7cf +0x291:  mov    0x8(%ebp),%eax
0866b7d2 +0x294:  mov    %eax,(%esp)
0866b7d5 +0x297:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b7da +0x29c:  mov    0x10(%ebp),%edx
0866b7dd +0x29f:  mov    %edx,0x4(%esp)
0866b7e1 +0x2a3:  mov    %eax,(%esp)
0866b7e4 +0x2a6:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866b7e9 +0x2ab:  mov    0x8(%ebp),%edx
0866b7ec +0x2ae:  add    $0x79700,%edx
0866b7f2 +0x2b4:  movl   $0x1,0x10(%esp)
0866b7fa +0x2bc:  mov    %edi,0xc(%esp)
0866b7fe +0x2c0:  mov    %esi,0x8(%esp)
0866b802 +0x2c4:  mov    %eax,0x4(%esp)
0866b806 +0x2c8:  mov    %edx,(%esp)
0866b809 +0x2cb:  call   08682be8 <_ZN15cUserHistoryLog5SPSubEiii12eSPSubReason>  ; cUserHistoryLog::SPSub(int, int, int, eSPSubReason)
0866b80e +0x2d0:  mov    0xc(%ebp),%esi
0866b811 +0x2d3:  mov    0x8(%ebp),%eax
0866b814 +0x2d6:  mov    %eax,(%esp)
0866b817 +0x2d9:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b81c +0x2de:  mov    0x10(%ebp),%edx
0866b81f +0x2e1:  mov    %edx,0xc(%esp)
0866b823 +0x2e5:  movl   $0x198,0x8(%esp)
0866b82b +0x2ed:  mov    %esi,0x4(%esp)
0866b82f +0x2f1:  mov    %eax,(%esp)
0866b832 +0x2f4:  call   08603420 <_ZN9SkillSlot23set_skill_slot_at_indexEPci20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_skill_slot_at_index(char*, int, ENUM_SKILL_TREE_KIND)
0866b837 +0x2f9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0866b83c +0x2fe:  mov    %eax,(%esp)
0866b83f +0x301:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
0866b844 +0x306:  test   %al,%al
0866b846 +0x308:  je     0866b852 <+0x314>
0866b848 +0x30a:  mov    $0x1,%ebx
0866b84d +0x30f:  jmp    0866bcda <+0x79c>
0866b852 +0x314:  mov    0x8(%ebp),%eax
0866b855 +0x317:  mov    %eax,(%esp)
0866b858 +0x31a:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866b85d +0x31f:  test   %al,%al
0866b85f +0x321:  setne  %al
0866b862 +0x324:  test   %al,%al
0866b864 +0x326:  je     0866ba98 <+0x55a>
0866b86a +0x32c:  lea    -0x64(%ebp),%eax
0866b86d +0x32f:  mov    %eax,(%esp)
0866b870 +0x332:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866b875 +0x337:  lea    -0x6c(%ebp),%eax
0866b878 +0x33a:  mov    %eax,(%esp)
0866b87b +0x33d:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0866b880 +0x342:  mov    0x8(%ebp),%eax
0866b883 +0x345:  mov    %eax,(%esp)
0866b886 +0x348:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866b88b +0x34d:  movsbl %al,%edi
0866b88e +0x350:  mov    0x8(%ebp),%eax
0866b891 +0x353:  mov    %eax,(%esp)
0866b894 +0x356:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866b899 +0x35b:  movsbl %al,%esi
0866b89c +0x35e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866b8a1 +0x363:  mov    0x14(%eax),%eax
0866b8a4 +0x366:  mov    %eax,-0x90(%ebp)
0866b8aa +0x36c:  mov    0x8(%ebp),%eax
0866b8ad +0x36f:  mov    %eax,(%esp)
0866b8b0 +0x372:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866b8b5 +0x377:  imul   $0x7dc,%eax,%eax
0866b8bb +0x37d:  mov    -0x90(%ebp),%edx
0866b8c1 +0x383:  add    %eax,%edx
0866b8c3 +0x385:  movl   $0x0,0x10(%esp)
0866b8cb +0x38d:  lea    -0x64(%ebp),%eax
0866b8ce +0x390:  mov    %eax,0xc(%esp)
0866b8d2 +0x394:  mov    %edi,0x8(%esp)
0866b8d6 +0x398:  mov    %esi,0x4(%esp)
0866b8da +0x39c:  mov    %edx,(%esp)
0866b8dd +0x39f:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
0866b8e2 +0x3a4:  mov    %al,-0x45(%ebp)
0866b8e5 +0x3a7:  movzbl -0x45(%ebp),%eax
0866b8e9 +0x3ab:  xor    $0x1,%eax
0866b8ec +0x3ae:  test   %al,%al
0866b8ee +0x3b0:  je     0866b8ff <+0x3c1>
0866b8f0 +0x3b2:  mov    $0x0,%ebx
0866b8f5 +0x3b7:  mov    $0x0,%esi
0866b8fa +0x3bc:  jmp    0866ba80 <+0x542>
0866b8ff +0x3c1:  movl   $0x0,-0x44(%ebp)
0866b906 +0x3c8:  jmp    0866ba45 <+0x507>
0866b90b +0x3cd:  mov    -0x44(%ebp),%eax
0866b90e +0x3d0:  mov    %eax,0x4(%esp)
0866b912 +0x3d4:  lea    -0x64(%ebp),%eax
0866b915 +0x3d7:  mov    %eax,(%esp)
0866b918 +0x3da:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0866b91d +0x3df:  mov    0x4(%eax),%edx
0866b920 +0x3e2:  mov    (%eax),%eax
0866b922 +0x3e4:  mov    %eax,-0x6c(%ebp)
0866b925 +0x3e7:  mov    %edx,-0x68(%ebp)
0866b928 +0x3ea:  mov    -0x6c(%ebp),%eax
0866b92b +0x3ed:  mov    %eax,-0x50(%ebp)
0866b92e +0x3f0:  mov    -0x68(%ebp),%eax
0866b931 +0x3f3:  mov    %eax,-0x4c(%ebp)
0866b934 +0x3f6:  movl   $0x0,-0x40(%ebp)
0866b93b +0x3fd:  mov    0x8(%ebp),%eax
0866b93e +0x400:  mov    %eax,(%esp)
0866b941 +0x403:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866b946 +0x408:  mov    %eax,%esi
0866b948 +0x40a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866b94d +0x40f:  mov    -0x50(%ebp),%edx
0866b950 +0x412:  mov    %edx,0x8(%esp)
0866b954 +0x416:  mov    %esi,0x4(%esp)
0866b958 +0x41a:  mov    %eax,(%esp)
0866b95b +0x41d:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0866b960 +0x422:  mov    %eax,-0x40(%ebp)
0866b963 +0x425:  cmpl   $0x0,-0x40(%ebp)
0866b967 +0x429:  jne    0866b9ba <+0x47c>
0866b969 +0x42b:  mov    0x8(%ebp),%eax
0866b96c +0x42e:  mov    %eax,(%esp)
0866b96f +0x431:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866b974 +0x436:  mov    -0x50(%ebp),%edx
0866b977 +0x439:  mov    %edx,0x18(%esp)
0866b97b +0x43d:  mov    %eax,0x14(%esp)
0866b97f +0x441:  movl   $"G_CDataManager()->find_skill( %d, %d )",0x10(%esp)
0866b987 +0x449:  movl   $0x52bd,0xc(%esp)
0866b98f +0x451:  movl   $&_ZZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
0866b997 +0x459:  movl   $"user.cpp",0x4(%esp)
0866b99f +0x461:  movl   $0x1,(%esp)
0866b9a6 +0x468:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0866b9ab +0x46d:  mov    $0x0,%ebx
0866b9b0 +0x472:  mov    $0x0,%esi
0866b9b5 +0x477:  jmp    0866ba80 <+0x542>
0866b9ba +0x47c:  mov    -0x40(%ebp),%eax
0866b9bd +0x47f:  mov    %eax,(%esp)
0866b9c0 +0x482:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
0866b9c5 +0x487:  mov    %eax,-0x3c(%ebp)
0866b9c8 +0x48a:  movl   $0x0,-0x38(%ebp)
0866b9cf +0x491:  mov    0x8(%ebp),%eax
0866b9d2 +0x494:  mov    %eax,(%esp)
0866b9d5 +0x497:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b9da +0x49c:  movl   $0x1,0x10(%esp)
0866b9e2 +0x4a4:  mov    0x10(%ebp),%edx
0866b9e5 +0x4a7:  mov    %edx,0xc(%esp)
0866b9e9 +0x4ab:  mov    -0x3c(%ebp),%edx
0866b9ec +0x4ae:  mov    %edx,0x8(%esp)
0866b9f0 +0x4b2:  mov    -0x50(%ebp),%edx
0866b9f3 +0x4b5:  mov    %edx,0x4(%esp)
0866b9f7 +0x4b9:  mov    %eax,(%esp)
0866b9fa +0x4bc:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
0866b9ff +0x4c1:  mov    %eax,-0x38(%ebp)
0866ba02 +0x4c4:  cmpl   $0x0,-0x38(%ebp)
0866ba06 +0x4c8:  jns    0866ba41 <+0x503>
0866ba08 +0x4ca:  mov    0x8(%ebp),%eax
0866ba0b +0x4cd:  mov    %eax,(%esp)
0866ba0e +0x4d0:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866ba13 +0x4d5:  mov    %eax,%esi
0866ba15 +0x4d7:  mov    0x8(%ebp),%eax
0866ba18 +0x4da:  mov    %eax,(%esp)
0866ba1b +0x4dd:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866ba20 +0x4e2:  mov    0x10(%ebp),%edx
0866ba23 +0x4e5:  mov    %edx,0x10(%esp)
0866ba27 +0x4e9:  mov    -0x4c(%ebp),%edx
0866ba2a +0x4ec:  mov    %edx,0xc(%esp)
0866ba2e +0x4f0:  mov    -0x50(%ebp),%edx
0866ba31 +0x4f3:  mov    %edx,0x8(%esp)
0866ba35 +0x4f7:  mov    %esi,0x4(%esp)
0866ba39 +0x4fb:  mov    %eax,(%esp)
0866ba3c +0x4fe:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866ba41 +0x503:  addl   $0x1,-0x44(%ebp)
0866ba45 +0x507:  lea    -0x64(%ebp),%eax
0866ba48 +0x50a:  mov    %eax,(%esp)
0866ba4b +0x50d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866ba50 +0x512:  cmp    -0x44(%ebp),%eax
0866ba53 +0x515:  setg   %al
0866ba56 +0x518:  test   %al,%al
0866ba58 +0x51a:  jne    0866b90b <+0x3cd>
0866ba5e +0x520:  mov    $0x1,%esi
0866ba63 +0x525:  jmp    0866ba80 <+0x542>
0866ba65 +0x527:  mov    %edx,%ebx
0866ba67 +0x529:  mov    %eax,%esi
0866ba69 +0x52b:  lea    -0x64(%ebp),%eax
0866ba6c +0x52e:  mov    %eax,(%esp)
0866ba6f +0x531:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866ba74 +0x536:  mov    %esi,%eax
0866ba76 +0x538:  mov    %ebx,%edx
0866ba78 +0x53a:  mov    %eax,(%esp)
0866ba7b +0x53d:  call   08ae3750 <_Unwind_Resume>
0866ba80 +0x542:  lea    -0x64(%ebp),%eax
0866ba83 +0x545:  mov    %eax,(%esp)
0866ba86 +0x548:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866ba8b +0x54d:  test   %esi,%esi
0866ba8d +0x54f:  je     0866bcda <+0x79c>
0866ba93 +0x555:  jmp    0866bcd5 <+0x797>
0866ba98 +0x55a:  mov    0x8(%ebp),%eax
0866ba9b +0x55d:  mov    %eax,(%esp)
0866ba9e +0x560:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866baa3 +0x565:  test   %al,%al
0866baa5 +0x567:  setne  %al
0866baa8 +0x56a:  test   %al,%al
0866baaa +0x56c:  je     0866bcd5 <+0x797>
0866bab0 +0x572:  lea    -0x78(%ebp),%eax
0866bab3 +0x575:  mov    %eax,(%esp)
0866bab6 +0x578:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866babb +0x57d:  lea    -0x80(%ebp),%eax
0866babe +0x580:  mov    %eax,(%esp)
0866bac1 +0x583:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0866bac6 +0x588:  mov    0x8(%ebp),%eax
0866bac9 +0x58b:  mov    %eax,(%esp)
0866bacc +0x58e:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866bad1 +0x593:  movsbl %al,%edi
0866bad4 +0x596:  mov    0x8(%ebp),%eax
0866bad7 +0x599:  mov    %eax,(%esp)
0866bada +0x59c:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866badf +0x5a1:  movsbl %al,%esi
0866bae2 +0x5a4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866bae7 +0x5a9:  mov    0x14(%eax),%eax
0866baea +0x5ac:  mov    %eax,-0x8c(%ebp)
0866baf0 +0x5b2:  mov    0x8(%ebp),%eax
0866baf3 +0x5b5:  mov    %eax,(%esp)
0866baf6 +0x5b8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bafb +0x5bd:  imul   $0x7dc,%eax,%eax
0866bb01 +0x5c3:  mov    -0x8c(%ebp),%edx
0866bb07 +0x5c9:  add    %eax,%edx
0866bb09 +0x5cb:  movl   $0x1,0x10(%esp)
0866bb11 +0x5d3:  lea    -0x78(%ebp),%eax
0866bb14 +0x5d6:  mov    %eax,0xc(%esp)
0866bb18 +0x5da:  mov    %edi,0x8(%esp)
0866bb1c +0x5de:  mov    %esi,0x4(%esp)
0866bb20 +0x5e2:  mov    %edx,(%esp)
0866bb23 +0x5e5:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
0866bb28 +0x5ea:  mov    %al,-0x29(%ebp)
0866bb2b +0x5ed:  movzbl -0x29(%ebp),%eax
0866bb2f +0x5f1:  xor    $0x1,%eax
0866bb32 +0x5f4:  test   %al,%al
0866bb34 +0x5f6:  je     0866bb45 <+0x607>
0866bb36 +0x5f8:  mov    $0x0,%ebx
0866bb3b +0x5fd:  mov    $0x0,%esi
0866bb40 +0x602:  jmp    0866bcc6 <+0x788>
0866bb45 +0x607:  movl   $0x0,-0x28(%ebp)
0866bb4c +0x60e:  jmp    0866bc8b <+0x74d>
0866bb51 +0x613:  mov    -0x28(%ebp),%eax
0866bb54 +0x616:  mov    %eax,0x4(%esp)
0866bb58 +0x61a:  lea    -0x78(%ebp),%eax
0866bb5b +0x61d:  mov    %eax,(%esp)
0866bb5e +0x620:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0866bb63 +0x625:  mov    0x4(%eax),%edx
0866bb66 +0x628:  mov    (%eax),%eax
0866bb68 +0x62a:  mov    %eax,-0x80(%ebp)
0866bb6b +0x62d:  mov    %edx,-0x7c(%ebp)
0866bb6e +0x630:  mov    -0x80(%ebp),%eax
0866bb71 +0x633:  mov    %eax,-0x34(%ebp)
0866bb74 +0x636:  mov    -0x7c(%ebp),%eax
0866bb77 +0x639:  mov    %eax,-0x30(%ebp)
0866bb7a +0x63c:  movl   $0x0,-0x24(%ebp)
0866bb81 +0x643:  mov    0x8(%ebp),%eax
0866bb84 +0x646:  mov    %eax,(%esp)
0866bb87 +0x649:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bb8c +0x64e:  mov    %eax,%esi
0866bb8e +0x650:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866bb93 +0x655:  mov    -0x34(%ebp),%edx
0866bb96 +0x658:  mov    %edx,0x8(%esp)
0866bb9a +0x65c:  mov    %esi,0x4(%esp)
0866bb9e +0x660:  mov    %eax,(%esp)
0866bba1 +0x663:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0866bba6 +0x668:  mov    %eax,-0x24(%ebp)
0866bba9 +0x66b:  cmpl   $0x0,-0x24(%ebp)
0866bbad +0x66f:  jne    0866bc00 <+0x6c2>
0866bbaf +0x671:  mov    0x8(%ebp),%eax
0866bbb2 +0x674:  mov    %eax,(%esp)
0866bbb5 +0x677:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bbba +0x67c:  mov    -0x34(%ebp),%edx
0866bbbd +0x67f:  mov    %edx,0x18(%esp)
0866bbc1 +0x683:  mov    %eax,0x14(%esp)
0866bbc5 +0x687:  movl   $"G_CDataManager()->find_skill( %d, %d )",0x10(%esp)
0866bbcd +0x68f:  movl   $0x52e0,0xc(%esp)
0866bbd5 +0x697:  movl   $&_ZZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
0866bbdd +0x69f:  movl   $"user.cpp",0x4(%esp)
0866bbe5 +0x6a7:  movl   $0x1,(%esp)
0866bbec +0x6ae:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0866bbf1 +0x6b3:  mov    $0x0,%ebx
0866bbf6 +0x6b8:  mov    $0x0,%esi
0866bbfb +0x6bd:  jmp    0866bcc6 <+0x788>
0866bc00 +0x6c2:  mov    -0x24(%ebp),%eax
0866bc03 +0x6c5:  mov    %eax,(%esp)
0866bc06 +0x6c8:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
0866bc0b +0x6cd:  mov    %eax,-0x20(%ebp)
0866bc0e +0x6d0:  movl   $0x0,-0x1c(%ebp)
0866bc15 +0x6d7:  mov    0x8(%ebp),%eax
0866bc18 +0x6da:  mov    %eax,(%esp)
0866bc1b +0x6dd:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866bc20 +0x6e2:  movl   $0x1,0x10(%esp)
0866bc28 +0x6ea:  mov    0x10(%ebp),%edx
0866bc2b +0x6ed:  mov    %edx,0xc(%esp)
0866bc2f +0x6f1:  mov    -0x20(%ebp),%edx
0866bc32 +0x6f4:  mov    %edx,0x8(%esp)
0866bc36 +0x6f8:  mov    -0x34(%ebp),%edx
0866bc39 +0x6fb:  mov    %edx,0x4(%esp)
0866bc3d +0x6ff:  mov    %eax,(%esp)
0866bc40 +0x702:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
0866bc45 +0x707:  mov    %eax,-0x1c(%ebp)
0866bc48 +0x70a:  cmpl   $0x0,-0x1c(%ebp)
0866bc4c +0x70e:  jns    0866bc87 <+0x749>
0866bc4e +0x710:  mov    0x8(%ebp),%eax
0866bc51 +0x713:  mov    %eax,(%esp)
0866bc54 +0x716:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866bc59 +0x71b:  mov    %eax,%esi
0866bc5b +0x71d:  mov    0x8(%ebp),%eax
0866bc5e +0x720:  mov    %eax,(%esp)
0866bc61 +0x723:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866bc66 +0x728:  mov    0x10(%ebp),%edx
0866bc69 +0x72b:  mov    %edx,0x10(%esp)
0866bc6d +0x72f:  mov    -0x30(%ebp),%edx
0866bc70 +0x732:  mov    %edx,0xc(%esp)
0866bc74 +0x736:  mov    -0x34(%ebp),%edx
0866bc77 +0x739:  mov    %edx,0x8(%esp)
0866bc7b +0x73d:  mov    %esi,0x4(%esp)
0866bc7f +0x741:  mov    %eax,(%esp)
0866bc82 +0x744:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866bc87 +0x749:  addl   $0x1,-0x28(%ebp)
0866bc8b +0x74d:  lea    -0x78(%ebp),%eax
0866bc8e +0x750:  mov    %eax,(%esp)
0866bc91 +0x753:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866bc96 +0x758:  cmp    -0x28(%ebp),%eax
0866bc99 +0x75b:  setg   %al
0866bc9c +0x75e:  test   %al,%al
0866bc9e +0x760:  jne    0866bb51 <+0x613>
0866bca4 +0x766:  mov    $0x1,%esi
0866bca9 +0x76b:  jmp    0866bcc6 <+0x788>
0866bcab +0x76d:  mov    %edx,%ebx
0866bcad +0x76f:  mov    %eax,%esi
0866bcaf +0x771:  lea    -0x78(%ebp),%eax
0866bcb2 +0x774:  mov    %eax,(%esp)
0866bcb5 +0x777:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866bcba +0x77c:  mov    %esi,%eax
0866bcbc +0x77e:  mov    %ebx,%edx
0866bcbe +0x780:  mov    %eax,(%esp)
0866bcc1 +0x783:  call   08ae3750 <_Unwind_Resume>
0866bcc6 +0x788:  lea    -0x78(%ebp),%eax
0866bcc9 +0x78b:  mov    %eax,(%esp)
0866bccc +0x78e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0866bcd1 +0x793:  test   %esi,%esi
0866bcd3 +0x795:  je     0866bcda <+0x79c>
0866bcd5 +0x797:  mov    $0x1,%ebx
0866bcda +0x79c:  mov    %ebx,%eax
0866bcdc +0x79e:  add    $0xac,%esp
0866bce2 +0x7a4:  pop    %ebx
0866bce3 +0x7a5:  pop    %esi
0866bce4 +0x7a6:  pop    %edi
0866bce5 +0x7a7:  pop    %ebp
0866bce6 +0x7a8:  ret
0866bce7 +0x7a9:  nop
```

## 反编译 C

```c
// CUser::master_new_skills @ 0x866b53e

/* CUser::master_new_skills(_Mastered_skill*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall CUser::master_new_skills(CUser *this,_Mastered_skill *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  SkillSlot *pSVar4;
  int iVar5;
  undefined4 uVar6;
  GameWorld *this_00;
  int iVar7;
  undefined4 *puVar8;
  undefined4 unaff_EBX;
  undefined4 local_84;
  undefined4 local_80;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_68 [12];
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_49;
  uint local_48;
  CSkill *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_2d;
  uint local_2c;
  CSkill *local_28;
  undefined4 local_24;
  int local_20;
  
  local_58 = 0;
  local_5c = 0;
  pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  SkillSlot::calcUsedSP(pSVar4,param_1,&local_58,&local_5c);
  pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  iVar5 = SkillSlot::get_remain_sp_at_index(pSVar4,param_3);
  if (iVar5 < local_58) {
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp_at_index(pSVar4,0,param_3);
  }
  else {
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar5 = SkillSlot::get_remain_sp_at_index(pSVar4,param_3);
    iVar5 = iVar5 - local_58;
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp_at_index(pSVar4,iVar5,param_3);
  }
  if ((param_3 == -1) || (param_3 == 0)) {
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,2);
    if (iVar5 < local_5c) {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar4,0,2);
    }
    else {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,2);
      iVar5 = iVar5 - local_5c;
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar4,iVar5,2);
    }
    iVar5 = local_5c;
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    uVar6 = SkillSlot::get_remain_sfp_at_index(pSVar4,2);
    cUserHistoryLog::SFPSub((cUserHistoryLog *)(this + 0x79700),uVar6,2,iVar5,1);
  }
  else {
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,3);
    if (iVar5 < local_5c) {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar4,0,3);
    }
    else {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,3);
      iVar5 = iVar5 - local_5c;
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sfp_at_index(pSVar4,iVar5,3);
    }
    iVar5 = local_5c;
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    uVar6 = SkillSlot::get_remain_sfp_at_index(pSVar4,3);
    cUserHistoryLog::SFPSub((cUserHistoryLog *)(this + 0x79700),uVar6,3,iVar5,1);
  }
  iVar5 = local_58;
  pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  uVar6 = SkillSlot::get_remain_sp_at_index(pSVar4,param_3);
  cUserHistoryLog::SPSub((cUserHistoryLog *)(this + 0x79700),uVar6,param_3,iVar5,1);
  pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
  SkillSlot::set_skill_slot_at_index(pSVar4,param_1,0x198,param_3);
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
  if (cVar2 != '\0') {
    return 1;
  }
  cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
    if (cVar2 == '\0') {
      return 1;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_7c);
    std::pair<int,int>::pair((pair<int,int> *)&local_84);
    cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
    cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                    /* try { // try from 0866bae2 to 0866bc86 has its CatchHandler @ 0866bcab */
    iVar5 = G_CDataManager();
    iVar5 = *(int *)(iVar5 + 0x14);
    iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    local_2d = CCharacter::get_give_skill
                         ((CCharacter *)(iVar5 + iVar7 * 0x7dc),(int)cVar3,(int)cVar2,
                          (vector *)local_7c,1);
    if (local_2d == '\x01') {
      local_2c = 0;
      while (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               (local_7c), (int)local_2c < iVar5) {
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (local_7c,local_2c);
        local_80 = puVar8[1];
        local_84 = *puVar8;
        local_28 = (CSkill *)0x0;
        local_38 = local_84;
        local_34 = local_80;
        iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        iVar7 = G_CDataManager();
        local_28 = (CSkill *)CDataManager::find_skill(iVar7,iVar5);
        if (local_28 == (CSkill *)0x0) {
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          LogManager::logFormat
                    (1,"user.cpp",
                     "bool CUser::master_new_skills(_Mastered_skill*, ENUM_SKILL_TREE_KIND)",0x52e0,
                     "G_CDataManager()->find_skill( %d, %d )",uVar6,local_38);
          unaff_EBX = 0;
          bVar1 = false;
          goto LAB_0866bcc6;
        }
        local_24 = CSkill::get_group(local_28);
        local_20 = 0;
        pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        local_20 = SkillSlot::get_skillslot_no(pSVar4,local_38,local_24,param_3,1);
        if (local_20 < 0) {
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar4,uVar6,local_38,local_34,param_3);
        }
        local_2c = local_2c + 1;
      }
      bVar1 = true;
    }
    else {
      unaff_EBX = 0;
      bVar1 = false;
    }
LAB_0866bcc6:
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_7c);
  }
  else {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_68);
    std::pair<int,int>::pair((pair<int,int> *)&local_70);
    cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
    cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                    /* try { // try from 0866b89c to 0866ba40 has its CatchHandler @ 0866ba65 */
    iVar5 = G_CDataManager();
    iVar5 = *(int *)(iVar5 + 0x14);
    iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    local_49 = CCharacter::get_give_skill
                         ((CCharacter *)(iVar5 + iVar7 * 0x7dc),(int)cVar3,(int)cVar2,
                          (vector *)local_68,0);
    if (local_49 == '\x01') {
      local_48 = 0;
      while (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               (local_68), (int)local_48 < iVar5) {
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           (local_68,local_48);
        local_6c = puVar8[1];
        local_70 = *puVar8;
        local_44 = (CSkill *)0x0;
        local_54 = local_70;
        local_50 = local_6c;
        iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        iVar7 = G_CDataManager();
        local_44 = (CSkill *)CDataManager::find_skill(iVar7,iVar5);
        if (local_44 == (CSkill *)0x0) {
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          LogManager::logFormat
                    (1,"user.cpp",
                     "bool CUser::master_new_skills(_Mastered_skill*, ENUM_SKILL_TREE_KIND)",0x52bd,
                     "G_CDataManager()->find_skill( %d, %d )",uVar6,local_54);
          unaff_EBX = 0;
          bVar1 = false;
          goto LAB_0866ba80;
        }
        local_40 = CSkill::get_group(local_44);
        local_3c = 0;
        pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
        local_3c = SkillSlot::get_skillslot_no(pSVar4,local_54,local_40,param_3,1);
        if (local_3c < 0) {
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar4,uVar6,local_54,local_50,param_3);
        }
        local_48 = local_48 + 1;
      }
      bVar1 = true;
    }
    else {
      unaff_EBX = 0;
      bVar1 = false;
    }
LAB_0866ba80:
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_68);
  }
  if (bVar1) {
    return 1;
  }
  return unaff_EBX;
}
```
