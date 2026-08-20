# process_recipe_avatar_items

`_ZN5CUser27process_recipe_avatar_itemsEibtiPK14CStackableItem`

`CUser::process_recipe_avatar_items(int, bool, unsigned short, int, CStackableItem const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868c4f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868c4f4  _ZN5CUser27process_recipe_avatar_itemsEibtiPK14CStackableItem
#           CUser::process_recipe_avatar_items(int, bool, unsigned short, int, CStackableItem const*)
# range [0x0868c4f4, 0x0868d143]
0868c4f4 +0x000:  push   %ebp
0868c4f5 +0x001:  mov    %esp,%ebp
0868c4f7 +0x003:  push   %edi
0868c4f8 +0x004:  push   %esi
0868c4f9 +0x005:  push   %ebx
0868c4fa +0x006:  sub    $0xcabc,%esp
0868c500 +0x00c:  mov    0x10(%ebp),%edx
0868c503 +0x00f:  mov    0x14(%ebp),%eax
0868c506 +0x012:  mov    %dl,-0xca7c(%ebp)
0868c50c +0x018:  mov    %ax,-0xca80(%ebp)
0868c513 +0x01f:  cmpl   $0x0,0x1c(%ebp)
0868c517 +0x023:  jne    0868c523 <+0x2f>
0868c519 +0x025:  mov    $0x11,%ebx
0868c51e +0x02a:  jmp    0868d136 <+0xc42>
0868c523 +0x02f:  cmpb   $0x0,-0xca7c(%ebp)
0868c52a +0x036:  je     0868c536 <+0x42>
0868c52c +0x038:  mov    $0x13,%ebx
0868c531 +0x03d:  jmp    0868d136 <+0xc42>
0868c536 +0x042:  mov    0x1c(%ebp),%eax
0868c539 +0x045:  add    $0x174,%eax
0868c53e +0x04a:  mov    %eax,0x4(%esp)
0868c542 +0x04e:  lea    -0x9c(%ebp),%eax
0868c548 +0x054:  mov    %eax,(%esp)
0868c54b +0x057:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
0868c550 +0x05c:  mov    0x1c(%ebp),%eax
0868c553 +0x05f:  add    $0x180,%eax
0868c558 +0x064:  mov    %eax,0x4(%esp)
0868c55c +0x068:  lea    -0xa8(%ebp),%eax
0868c562 +0x06e:  mov    %eax,(%esp)
0868c565 +0x071:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
0868c56a +0x076:  lea    -0xa8(%ebp),%eax
0868c570 +0x07c:  mov    %eax,(%esp)
0868c573 +0x07f:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0868c578 +0x084:  cmp    $0x1,%eax
0868c57b +0x087:  seta   %al
0868c57e +0x08a:  test   %al,%al
0868c580 +0x08c:  je     0868c58c <+0x98>
0868c582 +0x08e:  mov    $0x11,%ebx
0868c587 +0x093:  jmp    0868d0fa <+0xc06>
0868c58c +0x098:  lea    -0xb4(%ebp),%eax
0868c592 +0x09e:  mov    %eax,(%esp)
0868c595 +0x0a1:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0868c59a +0x0a6:  lea    -0xb4(%ebp),%eax
0868c5a0 +0x0ac:  mov    %eax,(%esp)
0868c5a3 +0x0af:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0868c5a8 +0x0b4:  lea    -0x92c(%ebp),%eax
0868c5ae +0x0ba:  mov    %eax,(%esp)
0868c5b1 +0x0bd:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
0868c5b6 +0x0c2:  lea    -0xca6b(%ebp),%eax
0868c5bc +0x0c8:  mov    %eax,(%esp)
0868c5bf +0x0cb:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
0868c5c4 +0x0d0:  lea    -0xca6b(%ebp),%eax
0868c5ca +0x0d6:  mov    %eax,0x4(%esp)
0868c5ce +0x0da:  lea    -0x92c(%ebp),%eax
0868c5d4 +0x0e0:  mov    %eax,(%esp)
0868c5d7 +0x0e3:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
0868c5dc +0x0e8:  mov    0x8(%ebp),%eax
0868c5df +0x0eb:  mov    %eax,(%esp)
0868c5e2 +0x0ee:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0868c5e7 +0x0f3:  mov    %eax,0x4(%esp)
0868c5eb +0x0f7:  lea    -0x92c(%ebp),%eax
0868c5f1 +0x0fd:  mov    %eax,(%esp)
0868c5f4 +0x100:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
0868c5f9 +0x105:  movzbl -0xca7c(%ebp),%eax
0868c600 +0x10c:  xor    $0x1,%eax
0868c603 +0x10f:  test   %al,%al
0868c605 +0x111:  je     0868c6b7 <+0x1c3>
0868c60b +0x117:  movzwl -0xca80(%ebp),%edx
0868c612 +0x11e:  mov    0xc(%ebp),%eax
0868c615 +0x121:  movl   $0x0,0x14(%esp)
0868c61d +0x129:  movl   $0x8,0x10(%esp)
0868c625 +0x131:  mov    %edx,0xc(%esp)
0868c629 +0x135:  mov    %eax,0x8(%esp)
0868c62d +0x139:  movl   $0x1,0x4(%esp)
0868c635 +0x141:  lea    -0x92c(%ebp),%eax
0868c63b +0x147:  mov    %eax,(%esp)
0868c63e +0x14a:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0868c643 +0x14f:  mov    %al,-0x35(%ebp)
0868c646 +0x152:  movzbl -0x35(%ebp),%eax
0868c64a +0x156:  xor    $0x1,%eax
0868c64d +0x159:  test   %al,%al
0868c64f +0x15b:  je     0868c65b <+0x167>
0868c651 +0x15d:  mov    $0x11,%ebx
0868c656 +0x162:  jmp    0868d0aa <+0xbb6>
0868c65b +0x167:  movl   $0x0,-0x90(%ebp)
0868c665 +0x171:  lea    -0x90(%ebp),%eax
0868c66b +0x177:  mov    %eax,0x4(%esp)
0868c66f +0x17b:  lea    -0xb4(%ebp),%eax
0868c675 +0x181:  mov    %eax,(%esp)
0868c678 +0x184:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0868c67d +0x189:  lea    0xc(%ebp),%eax
0868c680 +0x18c:  mov    %eax,0x4(%esp)
0868c684 +0x190:  lea    -0xb4(%ebp),%eax
0868c68a +0x196:  mov    %eax,(%esp)
0868c68d +0x199:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0868c692 +0x19e:  movzwl -0xca80(%ebp),%eax
0868c699 +0x1a5:  mov    %eax,-0x8c(%ebp)
0868c69f +0x1ab:  lea    -0x8c(%ebp),%eax
0868c6a5 +0x1b1:  mov    %eax,0x4(%esp)
0868c6a9 +0x1b5:  lea    -0xb4(%ebp),%eax
0868c6af +0x1bb:  mov    %eax,(%esp)
0868c6b2 +0x1be:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0868c6b7 +0x1c3:  movl   $0x0,-0x34(%ebp)
0868c6be +0x1ca:  jmp    0868c931 <+0x43d>
0868c6c3 +0x1cf:  movl   $0x0,-0x30(%ebp)
0868c6ca +0x1d6:  mov    -0x34(%ebp),%eax
0868c6cd +0x1d9:  mov    %eax,0x4(%esp)
0868c6d1 +0x1dd:  lea    -0x9c(%ebp),%eax
0868c6d7 +0x1e3:  mov    %eax,(%esp)
0868c6da +0x1e6:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868c6df +0x1eb:  mov    (%eax),%esi
0868c6e1 +0x1ed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868c6e6 +0x1f2:  mov    %esi,0x4(%esp)
0868c6ea +0x1f6:  mov    %eax,(%esp)
0868c6ed +0x1f9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868c6f2 +0x1fe:  mov    %eax,-0x30(%ebp)
0868c6f5 +0x201:  cmpl   $0x0,-0x30(%ebp)
0868c6f9 +0x205:  je     0868c92d <+0x439>
0868c6ff +0x20b:  mov    -0x30(%ebp),%eax
0868c702 +0x20e:  mov    (%eax),%eax
0868c704 +0x210:  add    $0x10,%eax
0868c707 +0x213:  mov    (%eax),%edx
0868c709 +0x215:  mov    -0x30(%ebp),%eax
0868c70c +0x218:  mov    %eax,(%esp)
0868c70f +0x21b:  call   *%edx
0868c711 +0x21d:  test   %al,%al
0868c713 +0x21f:  je     0868c7e9 <+0x2f5>
0868c719 +0x225:  mov    -0x34(%ebp),%eax
0868c71c +0x228:  mov    %eax,0x4(%esp)
0868c720 +0x22c:  lea    -0x9c(%ebp),%eax
0868c726 +0x232:  mov    %eax,(%esp)
0868c729 +0x235:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868c72e +0x23a:  mov    (%eax),%eax
0868c730 +0x23c:  mov    %eax,0x4(%esp)
0868c734 +0x240:  lea    -0x92c(%ebp),%eax
0868c73a +0x246:  mov    %eax,(%esp)
0868c73d +0x249:  call   0850cd1c <_ZNK10CInventory18get_avatar_slot_noEi>  ; CInventory::get_avatar_slot_no(int) const
0868c742 +0x24e:  mov    %eax,-0xe8(%ebp)
0868c748 +0x254:  mov    -0xe8(%ebp),%eax
0868c74e +0x25a:  cmp    $0xffffffff,%eax
0868c751 +0x25d:  jne    0868c75d <+0x269>
0868c753 +0x25f:  mov    $0xd5,%ebx
0868c758 +0x264:  jmp    0868d0aa <+0xbb6>
0868c75d +0x269:  mov    -0xe8(%ebp),%eax
0868c763 +0x26f:  mov    %eax,0x8(%esp)
0868c767 +0x273:  movl   $0x2,0x4(%esp)
0868c76f +0x27b:  mov    0x8(%ebp),%eax
0868c772 +0x27e:  mov    %eax,(%esp)
0868c775 +0x281:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
0868c77a +0x286:  test   %al,%al
0868c77c +0x288:  je     0868c788 <+0x294>
0868c77e +0x28a:  mov    $0xd5,%ebx
0868c783 +0x28f:  jmp    0868d0aa <+0xbb6>
0868c788 +0x294:  movl   $0x1,-0x88(%ebp)
0868c792 +0x29e:  lea    -0x88(%ebp),%eax
0868c798 +0x2a4:  mov    %eax,0x4(%esp)
0868c79c +0x2a8:  lea    -0xb4(%ebp),%eax
0868c7a2 +0x2ae:  mov    %eax,(%esp)
0868c7a5 +0x2b1:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0868c7aa +0x2b6:  lea    -0xe8(%ebp),%eax
0868c7b0 +0x2bc:  mov    %eax,0x4(%esp)
0868c7b4 +0x2c0:  lea    -0xb4(%ebp),%eax
0868c7ba +0x2c6:  mov    %eax,(%esp)
0868c7bd +0x2c9:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0868c7c2 +0x2ce:  movl   $0x1,-0x84(%ebp)
0868c7cc +0x2d8:  lea    -0x84(%ebp),%eax
0868c7d2 +0x2de:  mov    %eax,0x4(%esp)
0868c7d6 +0x2e2:  lea    -0xb4(%ebp),%eax
0868c7dc +0x2e8:  mov    %eax,(%esp)
0868c7df +0x2eb:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0868c7e4 +0x2f0:  jmp    0868c92d <+0x439>
0868c7e9 +0x2f5:  mov    -0x34(%ebp),%eax
0868c7ec +0x2f8:  mov    %eax,0x4(%esp)
0868c7f0 +0x2fc:  lea    -0x9c(%ebp),%eax
0868c7f6 +0x302:  mov    %eax,(%esp)
0868c7f9 +0x305:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868c7fe +0x30a:  mov    (%eax),%eax
0868c800 +0x30c:  mov    %eax,0x4(%esp)
0868c804 +0x310:  lea    -0x92c(%ebp),%eax
0868c80a +0x316:  mov    %eax,(%esp)
0868c80d +0x319:  call   0850cd62 <_ZNK10CInventory17get_inven_slot_noEi>  ; CInventory::get_inven_slot_no(int) const
0868c812 +0x31e:  mov    %eax,-0xec(%ebp)
0868c818 +0x324:  mov    -0xec(%ebp),%eax
0868c81e +0x32a:  cmp    $0xffffffff,%eax
0868c821 +0x32d:  jne    0868c82d <+0x339>
0868c823 +0x32f:  mov    $0xd5,%ebx
0868c828 +0x334:  jmp    0868d0aa <+0xbb6>
0868c82d +0x339:  lea    -0xf8(%ebp),%eax
0868c833 +0x33f:  mov    %eax,(%esp)
0868c836 +0x342:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0868c83b +0x347:  mov    -0x34(%ebp),%eax
0868c83e +0x34a:  mov    %eax,0x4(%esp)
0868c842 +0x34e:  lea    -0x9c(%ebp),%eax
0868c848 +0x354:  mov    %eax,(%esp)
0868c84b +0x357:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868c850 +0x35c:  mov    %eax,0x4(%esp)
0868c854 +0x360:  lea    -0xf8(%ebp),%eax
0868c85a +0x366:  mov    %eax,(%esp)
0868c85d +0x369:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0868c862 +0x36e:  lea    -0xf8(%ebp),%eax
0868c868 +0x374:  mov    %eax,0x4(%esp)
0868c86c +0x378:  lea    -0x92c(%ebp),%eax
0868c872 +0x37e:  mov    %eax,(%esp)
0868c875 +0x381:  call   085058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0868c87a +0x386:  mov    %al,-0x29(%ebp)
0868c87d +0x389:  movzbl -0x29(%ebp),%eax
0868c881 +0x38d:  xor    $0x1,%eax
0868c884 +0x390:  test   %al,%al
0868c886 +0x392:  je     0868c897 <+0x3a3>
0868c888 +0x394:  mov    $0x11,%ebx
0868c88d +0x399:  mov    $0x0,%esi
0868c892 +0x39e:  jmp    0868c917 <+0x423>
0868c897 +0x3a3:  movl   $0x0,-0x80(%ebp)
0868c89e +0x3aa:  lea    -0x80(%ebp),%eax
0868c8a1 +0x3ad:  mov    %eax,0x4(%esp)
0868c8a5 +0x3b1:  lea    -0xb4(%ebp),%eax
0868c8ab +0x3b7:  mov    %eax,(%esp)
0868c8ae +0x3ba:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0868c8b3 +0x3bf:  lea    -0xec(%ebp),%eax
0868c8b9 +0x3c5:  mov    %eax,0x4(%esp)
0868c8bd +0x3c9:  lea    -0xb4(%ebp),%eax
0868c8c3 +0x3cf:  mov    %eax,(%esp)
0868c8c6 +0x3d2:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0868c8cb +0x3d7:  mov    -0x34(%ebp),%eax
0868c8ce +0x3da:  mov    %eax,0x4(%esp)
0868c8d2 +0x3de:  lea    -0x9c(%ebp),%eax
0868c8d8 +0x3e4:  mov    %eax,(%esp)
0868c8db +0x3e7:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868c8e0 +0x3ec:  add    $0x4,%eax
0868c8e3 +0x3ef:  mov    %eax,0x4(%esp)
0868c8e7 +0x3f3:  lea    -0xb4(%ebp),%eax
0868c8ed +0x3f9:  mov    %eax,(%esp)
0868c8f0 +0x3fc:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0868c8f5 +0x401:  mov    $0x1,%esi
0868c8fa +0x406:  jmp    0868c917 <+0x423>
0868c8fc +0x408:  mov    %edx,%ebx
0868c8fe +0x40a:  mov    %eax,%esi
0868c900 +0x40c:  lea    -0xf8(%ebp),%eax
0868c906 +0x412:  mov    %eax,(%esp)
0868c909 +0x415:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868c90e +0x41a:  mov    %esi,%eax
0868c910 +0x41c:  mov    %ebx,%edx
0868c912 +0x41e:  jmp    0868d092 <+0xb9e>
0868c917 +0x423:  lea    -0xf8(%ebp),%eax
0868c91d +0x429:  mov    %eax,(%esp)
0868c920 +0x42c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868c925 +0x431:  test   %esi,%esi
0868c927 +0x433:  je     0868d0aa <+0xbb6>
0868c92d +0x439:  addl   $0x1,-0x34(%ebp)
0868c931 +0x43d:  lea    -0x9c(%ebp),%eax
0868c937 +0x443:  mov    %eax,(%esp)
0868c93a +0x446:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0868c93f +0x44b:  cmp    -0x34(%ebp),%eax
0868c942 +0x44e:  setg   %al
0868c945 +0x451:  test   %al,%al
0868c947 +0x453:  jne    0868c6c3 <+0x1cf>
0868c94d +0x459:  movl   $0x0,0x4(%esp)
0868c955 +0x461:  lea    -0xa8(%ebp),%eax
0868c95b +0x467:  mov    %eax,(%esp)
0868c95e +0x46a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868c963 +0x46f:  mov    (%eax),%ebx
0868c965 +0x471:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868c96a +0x476:  mov    %ebx,0x4(%esp)
0868c96e +0x47a:  mov    %eax,(%esp)
0868c971 +0x47d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868c976 +0x482:  mov    %eax,-0x48(%ebp)
0868c979 +0x485:  cmpl   $0x0,-0x48(%ebp)
0868c97d +0x489:  jne    0868c989 <+0x495>
0868c97f +0x48b:  mov    $0x11,%ebx
0868c984 +0x490:  jmp    0868d0aa <+0xbb6>
0868c989 +0x495:  movb   $0x0,-0x41(%ebp)
0868c98d +0x499:  lea    -0xc0(%ebp),%eax
0868c993 +0x49f:  mov    %eax,(%esp)
0868c996 +0x4a2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868c99b +0x4a7:  mov    0x8(%ebp),%eax
0868c99e +0x4aa:  mov    %eax,(%esp)
0868c9a1 +0x4ad:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0868c9a6 +0x4b2:  mov    %eax,-0x40(%ebp)
0868c9a9 +0x4b5:  lea    -0xc4(%ebp),%eax
0868c9af +0x4bb:  lea    -0xb4(%ebp),%edx
0868c9b5 +0x4c1:  mov    %edx,0x4(%esp)
0868c9b9 +0x4c5:  mov    %eax,(%esp)
0868c9bc +0x4c8:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0868c9c1 +0x4cd:  sub    $0x4,%esp
0868c9c4 +0x4d0:  jmp    0868cbdf <+0x6eb>
0868c9c9 +0x4d5:  lea    -0xc4(%ebp),%eax
0868c9cf +0x4db:  mov    %eax,(%esp)
0868c9d2 +0x4de:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0868c9d7 +0x4e3:  mov    (%eax),%eax
0868c9d9 +0x4e5:  mov    %eax,-0x28(%ebp)
0868c9dc +0x4e8:  lea    -0x78(%ebp),%eax
0868c9df +0x4eb:  movl   $0x0,0x8(%esp)
0868c9e7 +0x4f3:  lea    -0xc4(%ebp),%edx
0868c9ed +0x4f9:  mov    %edx,0x4(%esp)
0868c9f1 +0x4fd:  mov    %eax,(%esp)
0868c9f4 +0x500:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0868c9f9 +0x505:  sub    $0x4,%esp
0868c9fc +0x508:  lea    -0xc4(%ebp),%eax
0868ca02 +0x50e:  mov    %eax,(%esp)
0868ca05 +0x511:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0868ca0a +0x516:  mov    (%eax),%eax
0868ca0c +0x518:  mov    %eax,-0x24(%ebp)
0868ca0f +0x51b:  lea    -0x74(%ebp),%eax
0868ca12 +0x51e:  movl   $0x0,0x8(%esp)
0868ca1a +0x526:  lea    -0xc4(%ebp),%edx
0868ca20 +0x52c:  mov    %edx,0x4(%esp)
0868ca24 +0x530:  mov    %eax,(%esp)
0868ca27 +0x533:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0868ca2c +0x538:  sub    $0x4,%esp
0868ca2f +0x53b:  lea    -0xc4(%ebp),%eax
0868ca35 +0x541:  mov    %eax,(%esp)
0868ca38 +0x544:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0868ca3d +0x549:  mov    (%eax),%eax
0868ca3f +0x54b:  mov    %eax,-0x20(%ebp)
0868ca42 +0x54e:  lea    -0x70(%ebp),%eax
0868ca45 +0x551:  movl   $0x0,0x8(%esp)
0868ca4d +0x559:  lea    -0xc4(%ebp),%edx
0868ca53 +0x55f:  mov    %edx,0x4(%esp)
0868ca57 +0x563:  mov    %eax,(%esp)
0868ca5a +0x566:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0868ca5f +0x56b:  sub    $0x4,%esp
0868ca62 +0x56e:  cmpl   $0x0,-0x28(%ebp)
0868ca66 +0x572:  jne    0868cb0f <+0x61b>
0868ca6c +0x578:  mov    0x8(%ebp),%eax
0868ca6f +0x57b:  mov    %eax,(%esp)
0868ca72 +0x57e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0868ca77 +0x583:  movl   $0x1,0x14(%esp)
0868ca7f +0x58b:  movl   $0x8,0x10(%esp)
0868ca87 +0x593:  mov    -0x20(%ebp),%edx
0868ca8a +0x596:  mov    %edx,0xc(%esp)
0868ca8e +0x59a:  mov    -0x24(%ebp),%edx
0868ca91 +0x59d:  mov    %edx,0x8(%esp)
0868ca95 +0x5a1:  movl   $0x1,0x4(%esp)
0868ca9d +0x5a9:  mov    %eax,(%esp)
0868caa0 +0x5ac:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0868caa5 +0x5b1:  mov    %al,-0x19(%ebp)
0868caa8 +0x5b4:  movzbl -0x19(%ebp),%eax
0868caac +0x5b8:  xor    $0x1,%eax
0868caaf +0x5bb:  test   %al,%al
0868cab1 +0x5bd:  je     0868cbdf <+0x6eb>
0868cab7 +0x5c3:  mov    0x8(%ebp),%eax
0868caba +0x5c6:  mov    %eax,(%esp)
0868cabd +0x5c9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868cac2 +0x5ce:  mov    %eax,%ebx
0868cac4 +0x5d0:  movl   $0x5,0xc(%esp)
0868cacc +0x5d8:  movl   $0xa8c1,0x8(%esp)
0868cad4 +0x5e0:  movl   $&_ZZN5CUser27process_recipe_avatar_itemsEibtiPK14CStackableItemE19__PRETTY_FUNCTION__,0x4(%esp)
0868cadc +0x5e8:  lea    -0x6c(%ebp),%eax
0868cadf +0x5eb:  mov    %eax,(%esp)
0868cae2 +0x5ee:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0868cae7 +0x5f3:  mov    -0x24(%ebp),%eax
0868caea +0x5f6:  mov    %eax,0xc(%esp)
0868caee +0x5fa:  mov    %ebx,0x8(%esp)
0868caf2 +0x5fe:  movl   $"CUser::process_recipe_avatar_items, getCurCharacInvenW()->delete_item failed , %d %d",0x4(%esp)
0868cafa +0x606:  lea    -0x6c(%ebp),%eax
0868cafd +0x609:  mov    %eax,(%esp)
0868cb00 +0x60c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0868cb05 +0x611:  mov    $0x11,%ebx
0868cb0a +0x616:  jmp    0868d082 <+0xb8e>
0868cb0f +0x61b:  cmpl   $0x1,-0x28(%ebp)
0868cb13 +0x61f:  jne    0868cbdf <+0x6eb>
0868cb19 +0x625:  mov    0x8(%ebp),%eax
0868cb1c +0x628:  mov    %eax,(%esp)
0868cb1f +0x62b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868cb24 +0x630:  lea    -0x135(%ebp),%edx
0868cb2a +0x636:  mov    -0x24(%ebp),%ecx
0868cb2d +0x639:  mov    %ecx,0xc(%esp)
0868cb31 +0x63d:  movl   $0x2,0x8(%esp)
0868cb39 +0x645:  mov    %eax,0x4(%esp)
0868cb3d +0x649:  mov    %edx,(%esp)
0868cb40 +0x64c:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0868cb45 +0x651:  sub    $0x4,%esp
0868cb48 +0x654:  movl   $0x1,0x14(%esp)
0868cb50 +0x65c:  movl   $0x3,0x10(%esp)
0868cb58 +0x664:  movl   $0x1,0xc(%esp)
0868cb60 +0x66c:  mov    -0x24(%ebp),%eax
0868cb63 +0x66f:  mov    %eax,0x8(%esp)
0868cb67 +0x673:  movl   $0x2,0x4(%esp)
0868cb6f +0x67b:  mov    -0x40(%ebp),%eax
0868cb72 +0x67e:  mov    %eax,(%esp)
0868cb75 +0x681:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0868cb7a +0x686:  xor    $0x1,%eax
0868cb7d +0x689:  test   %al,%al
0868cb7f +0x68b:  je     0868cb8b <+0x697>
0868cb81 +0x68d:  mov    $0x16,%ebx
0868cb86 +0x692:  jmp    0868d082 <+0xb8e>
0868cb8b +0x697:  mov    -0x12e(%ebp),%ebx
0868cb91 +0x69d:  mov    -0x40(%ebp),%eax
0868cb94 +0x6a0:  mov    %eax,(%esp)
0868cb97 +0x6a3:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0868cb9c +0x6a8:  mov    %ebx,0x4(%esp)
0868cba0 +0x6ac:  mov    %eax,(%esp)
0868cba3 +0x6af:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
0868cba8 +0x6b4:  mov    -0x24(%ebp),%eax
0868cbab +0x6b7:  lea    0xa(%eax),%edx
0868cbae +0x6ba:  mov    -0x12e(%ebp),%eax
0868cbb4 +0x6c0:  movl   $0x0,0x14(%esp)
0868cbbc +0x6c8:  mov    %edx,0x10(%esp)
0868cbc0 +0x6cc:  movl   $0x1,0xc(%esp)
0868cbc8 +0x6d4:  mov    %eax,0x8(%esp)
0868cbcc +0x6d8:  movl   $0x36,0x4(%esp)
0868cbd4 +0x6e0:  mov    -0x40(%ebp),%eax
0868cbd7 +0x6e3:  mov    %eax,(%esp)
0868cbda +0x6e6:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
0868cbdf +0x6eb:  lea    -0x7c(%ebp),%eax
0868cbe2 +0x6ee:  lea    -0xb4(%ebp),%edx
0868cbe8 +0x6f4:  mov    %edx,0x4(%esp)
0868cbec +0x6f8:  mov    %eax,(%esp)
0868cbef +0x6fb:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0868cbf4 +0x700:  sub    $0x4,%esp
0868cbf7 +0x703:  lea    -0x7c(%ebp),%eax
0868cbfa +0x706:  mov    %eax,0x4(%esp)
0868cbfe +0x70a:  lea    -0xc4(%ebp),%eax
0868cc04 +0x710:  mov    %eax,(%esp)
0868cc07 +0x713:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0868cc0c +0x718:  test   %al,%al
0868cc0e +0x71a:  jne    0868c9c9 <+0x4d5>
0868cc14 +0x720:  lea    -0xdc(%ebp),%edx
0868cc1a +0x726:  mov    $0x0,%ecx
0868cc1f +0x72b:  mov    $0x18,%eax
0868cc24 +0x730:  mov    %eax,%ebx
0868cc26 +0x732:  and    $0xfffffffc,%ebx
0868cc29 +0x735:  mov    $0x0,%eax
0868cc2e +0x73a:  mov    %ecx,(%edx,%eax,1)
0868cc31 +0x73d:  add    $0x4,%eax
0868cc34 +0x740:  cmp    %ebx,%eax
0868cc36 +0x742:  jb     0868cc2e <+0x73a>
0868cc38 +0x744:  add    %eax,%edx
0868cc3a +0x746:  mov    0x8(%ebp),%eax
0868cc3d +0x749:  mov    %eax,(%esp)
0868cc40 +0x74c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868cc45 +0x751:  lea    -0xdc(%ebp),%edx
0868cc4b +0x757:  mov    %edx,0x8(%esp)
0868cc4f +0x75b:  mov    %eax,0x4(%esp)
0868cc53 +0x75f:  movl   $0x7,(%esp)
0868cc5a +0x766:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0868cc5f +0x76b:  mov    %eax,%edi
0868cc61 +0x76d:  mov    -0x48(%ebp),%eax
0868cc64 +0x770:  mov    %eax,(%esp)
0868cc67 +0x773:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0868cc6c +0x778:  mov    %eax,%esi
0868cc6e +0x77a:  mov    -0x48(%ebp),%eax
0868cc71 +0x77d:  mov    %eax,(%esp)
0868cc74 +0x780:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0868cc79 +0x785:  mov    %eax,%ebx
0868cc7b +0x787:  mov    0x8(%ebp),%eax
0868cc7e +0x78a:  mov    %eax,(%esp)
0868cc81 +0x78d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0868cc86 +0x792:  movl   $0x0,0x24(%esp)
0868cc8e +0x79a:  movl   $0x0,0x20(%esp)
0868cc96 +0x7a2:  movl   $0x2,0x1c(%esp)
0868cc9e +0x7aa:  mov    %edi,0x18(%esp)
0868cca2 +0x7ae:  movl   $0xffffffff,0x14(%esp)
0868ccaa +0x7b6:  movl   $0x0,0x10(%esp)
0868ccb2 +0x7be:  movl   $0x0,0xc(%esp)
0868ccba +0x7c6:  mov    %esi,0x8(%esp)
0868ccbe +0x7ca:  mov    %ebx,0x4(%esp)
0868ccc2 +0x7ce:  mov    %eax,(%esp)
0868ccc5 +0x7d1:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0868ccca +0x7d6:  mov    %eax,-0x3c(%ebp)
0868cccd +0x7d9:  cmpl   $0xffffffff,-0x3c(%ebp)
0868ccd1 +0x7dd:  jne    0868ccdd <+0x7e9>
0868ccd3 +0x7df:  mov    $0x4,%ebx
0868ccd8 +0x7e4:  jmp    0868d082 <+0xb8e>
0868ccdd +0x7e9:  mov    0x8(%ebp),%eax
0868cce0 +0x7ec:  mov    %eax,(%esp)
0868cce3 +0x7ef:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868cce8 +0x7f4:  lea    -0x172(%ebp),%edx
0868ccee +0x7fa:  mov    -0x3c(%ebp),%ecx
0868ccf1 +0x7fd:  mov    %ecx,0xc(%esp)
0868ccf5 +0x801:  movl   $0x2,0x8(%esp)
0868ccfd +0x809:  mov    %eax,0x4(%esp)
0868cd01 +0x80d:  mov    %edx,(%esp)
0868cd04 +0x810:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0868cd09 +0x815:  sub    $0x4,%esp
0868cd0c +0x818:  mov    0x18(%ebp),%eax
0868cd0f +0x81b:  mov    %eax,0x8(%esp)
0868cd13 +0x81f:  movl   $0x1,0x4(%esp)
0868cd1b +0x827:  lea    -0xc0(%ebp),%eax
0868cd21 +0x82d:  mov    %eax,(%esp)
0868cd24 +0x830:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868cd29 +0x835:  movl   $0x1,0x4(%esp)
0868cd31 +0x83d:  lea    -0xc0(%ebp),%eax
0868cd37 +0x843:  mov    %eax,(%esp)
0868cd3a +0x846:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cd3f +0x84b:  lea    -0xb4(%ebp),%eax
0868cd45 +0x851:  mov    %eax,(%esp)
0868cd48 +0x854:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0868cd4d +0x859:  mov    %eax,-0xca8c(%ebp)
0868cd53 +0x85f:  mov    $0xaaaaaaab,%edx
0868cd58 +0x864:  mov    -0xca8c(%ebp),%eax
0868cd5e +0x86a:  mul    %edx
0868cd60 +0x86c:  mov    %edx,%eax
0868cd62 +0x86e:  shr    %eax
0868cd64 +0x870:  mov    %eax,0x4(%esp)
0868cd68 +0x874:  lea    -0xc0(%ebp),%eax
0868cd6e +0x87a:  mov    %eax,(%esp)
0868cd71 +0x87d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cd76 +0x882:  lea    -0x5c(%ebp),%eax
0868cd79 +0x885:  lea    -0xb4(%ebp),%edx
0868cd7f +0x88b:  mov    %edx,0x4(%esp)
0868cd83 +0x88f:  mov    %eax,(%esp)
0868cd86 +0x892:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0868cd8b +0x897:  sub    $0x4,%esp
0868cd8e +0x89a:  lea    -0x5c(%ebp),%eax
0868cd91 +0x89d:  mov    %eax,0x4(%esp)
0868cd95 +0x8a1:  lea    -0xe0(%ebp),%eax
0868cd9b +0x8a7:  mov    %eax,(%esp)
0868cd9e +0x8aa:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
0868cda3 +0x8af:  lea    -0x58(%ebp),%eax
0868cda6 +0x8b2:  lea    -0xb4(%ebp),%edx
0868cdac +0x8b8:  mov    %edx,0x4(%esp)
0868cdb0 +0x8bc:  mov    %eax,(%esp)
0868cdb3 +0x8bf:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0868cdb8 +0x8c4:  sub    $0x4,%esp
0868cdbb +0x8c7:  lea    -0x58(%ebp),%eax
0868cdbe +0x8ca:  mov    %eax,0x4(%esp)
0868cdc2 +0x8ce:  lea    -0xe4(%ebp),%eax
0868cdc8 +0x8d4:  mov    %eax,(%esp)
0868cdcb +0x8d7:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
0868cdd0 +0x8dc:  jmp    0868ce92 <+0x99e>
0868cdd5 +0x8e1:  lea    -0x54(%ebp),%eax
0868cdd8 +0x8e4:  movl   $0x0,0x8(%esp)
0868cde0 +0x8ec:  lea    -0xe0(%ebp),%edx
0868cde6 +0x8f2:  mov    %edx,0x4(%esp)
0868cdea +0x8f6:  mov    %eax,(%esp)
0868cded +0x8f9:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0868cdf2 +0x8fe:  sub    $0x4,%esp
0868cdf5 +0x901:  lea    -0x54(%ebp),%eax
0868cdf8 +0x904:  mov    %eax,(%esp)
0868cdfb +0x907:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0868ce00 +0x90c:  mov    (%eax),%eax
0868ce02 +0x90e:  mov    %eax,0x4(%esp)
0868ce06 +0x912:  lea    -0xc0(%ebp),%eax
0868ce0c +0x918:  mov    %eax,(%esp)
0868ce0f +0x91b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868ce14 +0x920:  lea    -0x50(%ebp),%eax
0868ce17 +0x923:  movl   $0x0,0x8(%esp)
0868ce1f +0x92b:  lea    -0xe0(%ebp),%edx
0868ce25 +0x931:  mov    %edx,0x4(%esp)
0868ce29 +0x935:  mov    %eax,(%esp)
0868ce2c +0x938:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0868ce31 +0x93d:  sub    $0x4,%esp
0868ce34 +0x940:  lea    -0x50(%ebp),%eax
0868ce37 +0x943:  mov    %eax,(%esp)
0868ce3a +0x946:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0868ce3f +0x94b:  mov    (%eax),%eax
0868ce41 +0x94d:  mov    %eax,0x4(%esp)
0868ce45 +0x951:  lea    -0xc0(%ebp),%eax
0868ce4b +0x957:  mov    %eax,(%esp)
0868ce4e +0x95a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868ce53 +0x95f:  lea    -0x4c(%ebp),%eax
0868ce56 +0x962:  movl   $0x0,0x8(%esp)
0868ce5e +0x96a:  lea    -0xe0(%ebp),%edx
0868ce64 +0x970:  mov    %edx,0x4(%esp)
0868ce68 +0x974:  mov    %eax,(%esp)
0868ce6b +0x977:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0868ce70 +0x97c:  sub    $0x4,%esp
0868ce73 +0x97f:  lea    -0x4c(%ebp),%eax
0868ce76 +0x982:  mov    %eax,(%esp)
0868ce79 +0x985:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0868ce7e +0x98a:  mov    (%eax),%eax
0868ce80 +0x98c:  mov    %eax,0x4(%esp)
0868ce84 +0x990:  lea    -0xc0(%ebp),%eax
0868ce8a +0x996:  mov    %eax,(%esp)
0868ce8d +0x999:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868ce92 +0x99e:  lea    -0xe4(%ebp),%eax
0868ce98 +0x9a4:  mov    %eax,0x4(%esp)
0868ce9c +0x9a8:  lea    -0xe0(%ebp),%eax
0868cea2 +0x9ae:  mov    %eax,(%esp)
0868cea5 +0x9b1:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0868ceaa +0x9b6:  test   %al,%al
0868ceac +0x9b8:  jne    0868cdd5 <+0x8e1>
0868ceb2 +0x9be:  movl   $0x1,0x4(%esp)
0868ceba +0x9c6:  lea    -0xc0(%ebp),%eax
0868cec0 +0x9cc:  mov    %eax,(%esp)
0868cec3 +0x9cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cec8 +0x9d4:  movl   $0x1,0x4(%esp)
0868ced0 +0x9dc:  lea    -0xc0(%ebp),%eax
0868ced6 +0x9e2:  mov    %eax,(%esp)
0868ced9 +0x9e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cede +0x9ea:  mov    -0x3c(%ebp),%eax
0868cee1 +0x9ed:  mov    %eax,0x4(%esp)
0868cee5 +0x9f1:  lea    -0xc0(%ebp),%eax
0868ceeb +0x9f7:  mov    %eax,(%esp)
0868ceee +0x9fa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868cef3 +0x9ff:  mov    -0x170(%ebp),%eax
0868cef9 +0xa05:  mov    %eax,0x4(%esp)
0868cefd +0xa09:  lea    -0xc0(%ebp),%eax
0868cf03 +0xa0f:  mov    %eax,(%esp)
0868cf06 +0xa12:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868cf0b +0xa17:  mov    -0x16b(%ebp),%eax
0868cf11 +0xa1d:  mov    %eax,0x4(%esp)
0868cf15 +0xa21:  lea    -0xc0(%ebp),%eax
0868cf1b +0xa27:  mov    %eax,(%esp)
0868cf1e +0xa2a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868cf23 +0xa2f:  lea    -0x172(%ebp),%eax
0868cf29 +0xa35:  mov    %eax,(%esp)
0868cf2c +0xa38:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0868cf31 +0xa3d:  movzbl %al,%eax
0868cf34 +0xa40:  mov    %eax,0x4(%esp)
0868cf38 +0xa44:  lea    -0xc0(%ebp),%eax
0868cf3e +0xa4a:  mov    %eax,(%esp)
0868cf41 +0xa4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cf46 +0xa52:  movzwl -0x167(%ebp),%eax
0868cf4d +0xa59:  movzwl %ax,%eax
0868cf50 +0xa5c:  mov    %eax,0x4(%esp)
0868cf54 +0xa60:  lea    -0xc0(%ebp),%eax
0868cf5a +0xa66:  mov    %eax,(%esp)
0868cf5d +0xa69:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868cf62 +0xa6e:  lea    -0x172(%ebp),%eax
0868cf68 +0xa74:  add    $0x11,%eax
0868cf6b +0xa77:  mov    %eax,(%esp)
0868cf6e +0xa7a:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0868cf73 +0xa7f:  movzbl %al,%eax
0868cf76 +0xa82:  mov    %eax,0x4(%esp)
0868cf7a +0xa86:  lea    -0xc0(%ebp),%eax
0868cf80 +0xa8c:  mov    %eax,(%esp)
0868cf83 +0xa8f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cf88 +0xa94:  lea    -0x172(%ebp),%eax
0868cf8e +0xa9a:  add    $0x11,%eax
0868cf91 +0xa9d:  mov    %eax,(%esp)
0868cf94 +0xaa0:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0868cf99 +0xaa5:  movzwl %ax,%eax
0868cf9c +0xaa8:  mov    %eax,0x4(%esp)
0868cfa0 +0xaac:  lea    -0xc0(%ebp),%eax
0868cfa6 +0xab2:  mov    %eax,(%esp)
0868cfa9 +0xab5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868cfae +0xaba:  movzbl -0x172(%ebp),%eax
0868cfb5 +0xac1:  test   %al,%al
0868cfb7 +0xac3:  je     0868cfc0 <+0xacc>
0868cfb9 +0xac5:  mov    $0x1,%eax
0868cfbe +0xaca:  jmp    0868cfc5 <+0xad1>
0868cfc0 +0xacc:  mov    $0x0,%eax
0868cfc5 +0xad1:  mov    %al,-0x36(%ebp)
0868cfc8 +0xad4:  movsbl -0x36(%ebp),%eax
0868cfcc +0xad8:  mov    %eax,0x4(%esp)
0868cfd0 +0xadc:  lea    -0xc0(%ebp),%eax
0868cfd6 +0xae2:  mov    %eax,(%esp)
0868cfd9 +0xae5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868cfde +0xaea:  lea    -0x172(%ebp),%eax
0868cfe4 +0xaf0:  mov    %eax,0x4(%esp)
0868cfe8 +0xaf4:  lea    -0xc0(%ebp),%eax
0868cfee +0xafa:  mov    %eax,(%esp)
0868cff1 +0xafd:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0868cff6 +0xb02:  movl   $0x1,0x4(%esp)
0868cffe +0xb0a:  lea    -0xc0(%ebp),%eax
0868d004 +0xb10:  mov    %eax,(%esp)
0868d007 +0xb13:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868d00c +0xb18:  lea    -0xc0(%ebp),%eax
0868d012 +0xb1e:  mov    %eax,0x4(%esp)
0868d016 +0xb22:  mov    0x8(%ebp),%eax
0868d019 +0xb25:  mov    %eax,(%esp)
0868d01c +0xb28:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868d021 +0xb2d:  mov    -0x3c(%ebp),%eax
0868d024 +0xb30:  mov    %eax,0xc(%esp)
0868d028 +0xb34:  movl   $0x1,0x8(%esp)
0868d030 +0xb3c:  movl   $0x1,0x4(%esp)
0868d038 +0xb44:  mov    0x8(%ebp),%eax
0868d03b +0xb47:  mov    %eax,(%esp)
0868d03e +0xb4a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0868d043 +0xb4f:  mov    0x1c(%ebp),%eax
0868d046 +0xb52:  mov    %eax,(%esp)
0868d049 +0xb55:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0868d04e +0xb5a:  mov    0x8(%ebp),%edx
0868d051 +0xb5d:  mov    0x796f8(%edx),%edx
0868d057 +0xb63:  mov    %eax,0x4(%esp)
0868d05b +0xb67:  mov    %edx,(%esp)
0868d05e +0xb6a:  call   084ba174 <_ZN10HistoryLog16WriteCompositionEP8_IO_FILEi>  ; HistoryLog::WriteComposition(_IO_FILE*, int)
0868d063 +0xb6f:  mov    $0x0,%ebx
0868d068 +0xb74:  jmp    0868d082 <+0xb8e>
0868d06a +0xb76:  mov    %edx,%ebx
0868d06c +0xb78:  mov    %eax,%esi
0868d06e +0xb7a:  lea    -0xc0(%ebp),%eax
0868d074 +0xb80:  mov    %eax,(%esp)
0868d077 +0xb83:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868d07c +0xb88:  mov    %esi,%eax
0868d07e +0xb8a:  mov    %ebx,%edx
0868d080 +0xb8c:  jmp    0868d092 <+0xb9e>
0868d082 +0xb8e:  lea    -0xc0(%ebp),%eax
0868d088 +0xb94:  mov    %eax,(%esp)
0868d08b +0xb97:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868d090 +0xb9c:  jmp    0868d0aa <+0xbb6>
0868d092 +0xb9e:  mov    %edx,%ebx
0868d094 +0xba0:  mov    %eax,%esi
0868d096 +0xba2:  lea    -0x92c(%ebp),%eax
0868d09c +0xba8:  mov    %eax,(%esp)
0868d09f +0xbab:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0868d0a4 +0xbb0:  mov    %esi,%eax
0868d0a6 +0xbb2:  mov    %ebx,%edx
0868d0a8 +0xbb4:  jmp    0868d0ba <+0xbc6>
0868d0aa +0xbb6:  lea    -0x92c(%ebp),%eax
0868d0b0 +0xbbc:  mov    %eax,(%esp)
0868d0b3 +0xbbf:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
0868d0b8 +0xbc4:  jmp    0868d0d2 <+0xbde>
0868d0ba +0xbc6:  mov    %edx,%ebx
0868d0bc +0xbc8:  mov    %eax,%esi
0868d0be +0xbca:  lea    -0xb4(%ebp),%eax
0868d0c4 +0xbd0:  mov    %eax,(%esp)
0868d0c7 +0xbd3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0868d0cc +0xbd8:  mov    %esi,%eax
0868d0ce +0xbda:  mov    %ebx,%edx
0868d0d0 +0xbdc:  jmp    0868d0e2 <+0xbee>
0868d0d2 +0xbde:  lea    -0xb4(%ebp),%eax
0868d0d8 +0xbe4:  mov    %eax,(%esp)
0868d0db +0xbe7:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0868d0e0 +0xbec:  jmp    0868d0fa <+0xc06>
0868d0e2 +0xbee:  mov    %edx,%ebx
0868d0e4 +0xbf0:  mov    %eax,%esi
0868d0e6 +0xbf2:  lea    -0xa8(%ebp),%eax
0868d0ec +0xbf8:  mov    %eax,(%esp)
0868d0ef +0xbfb:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868d0f4 +0xc00:  mov    %esi,%eax
0868d0f6 +0xc02:  mov    %ebx,%edx
0868d0f8 +0xc04:  jmp    0868d10a <+0xc16>
0868d0fa +0xc06:  lea    -0xa8(%ebp),%eax
0868d100 +0xc0c:  mov    %eax,(%esp)
0868d103 +0xc0f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868d108 +0xc14:  jmp    0868d128 <+0xc34>
0868d10a +0xc16:  mov    %edx,%ebx
0868d10c +0xc18:  mov    %eax,%esi
0868d10e +0xc1a:  lea    -0x9c(%ebp),%eax
0868d114 +0xc20:  mov    %eax,(%esp)
0868d117 +0xc23:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868d11c +0xc28:  mov    %esi,%eax
0868d11e +0xc2a:  mov    %ebx,%edx
0868d120 +0xc2c:  mov    %eax,(%esp)
0868d123 +0xc2f:  call   08ae3750 <_Unwind_Resume>
0868d128 +0xc34:  lea    -0x9c(%ebp),%eax
0868d12e +0xc3a:  mov    %eax,(%esp)
0868d131 +0xc3d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868d136 +0xc42:  mov    %ebx,%eax
0868d138 +0xc44:  lea    -0xc(%ebp),%esp
0868d13b +0xc47:  add    $0x0,%esp
0868d13e +0xc4a:  pop    %ebx
0868d13f +0xc4b:  pop    %esi
0868d140 +0xc4c:  pop    %edi
0868d141 +0xc4d:  pop    %ebp
0868d142 +0xc4e:  ret
0868d143 +0xc4f:  nop
```

## 反编译 C

```c
// CUser::process_recipe_avatar_items @ 0x868c4f4

/* CUser::process_recipe_avatar_items(int, bool, unsigned short, int, CStackableItem const*) */

undefined4 __thiscall
CUser::process_recipe_avatar_items
          (CUser *this,int param_1,bool param_2,ushort param_3,int param_4,CStackableItem *param_5)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  CInventory *pCVar5;
  pair *ppVar6;
  int iVar7;
  int *piVar8;
  CDataManager *pCVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 unaff_EBX;
  undefined3 in_stack_0000000d;
  undefined2 in_stack_00000012;
  InventoryMemory local_ca6f [49471];
  CInventory local_930 [1978];
  Inven_Item local_176 [2];
  int local_174;
  int local_16f;
  ushort local_16b;
  stAmplifyOption_t asStack_165 [44];
  undefined1 local_139 [7];
  int local_132;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_fc [12];
  int local_f0;
  int local_ec;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_e8 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_e4 [4];
  undefined4 local_e0 [6];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_c8 [4];
  PacketGuard local_c4 [12];
  vector<int,std::allocator<int>> local_b8 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_ac [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_a0 [12];
  int local_94;
  uint local_90 [4];
  __normal_iterator local_80 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_7c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_78 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_74 [4];
  cMyTrace local_70 [16];
  __normal_iterator local_60 [4];
  __normal_iterator local_5c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_58 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_54 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_50 [4];
  CItem *local_4c;
  undefined1 local_45;
  CInventory *local_44;
  int local_40;
  undefined1 local_3a;
  char local_39;
  uint local_38;
  int *local_34;
  char local_2d;
  int local_2c;
  int local_28;
  undefined4 local_24;
  char local_1d;
  
  uVar1 = param_3;
  if (param_5 == (CStackableItem *)0x0) {
    return 0x11;
  }
  if (param_2) {
    return 0x13;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_a0,(vector *)(param_5 + 0x174));
                    /* try { // try from 0868c565 to 0868c569 has its CatchHandler @ 0868d10a */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (local_ac,(vector *)(param_5 + 0x180));
  uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_ac);
  if (1 < uVar4) {
    unaff_EBX = 0x11;
    goto LAB_0868d0fa;
  }
                    /* try { // try from 0868c595 to 0868c599 has its CatchHandler @ 0868d0e2 */
  std::vector<int,std::allocator<int>>::vector(local_b8);
                    /* try { // try from 0868c5a3 to 0868c5b5 has its CatchHandler @ 0868d0ba */
  std::vector<int,std::allocator<int>>::clear(local_b8);
  CInventory::CInventory(local_930);
  InventoryMemory::InventoryMemory(local_ca6f);
  CInventory::SetInventoryMemory(local_930,local_ca6f);
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)this);
                    /* try { // try from 0868c5f4 to 0868c83a has its CatchHandler @ 0868d092 */
  CInventory::setCopy(local_930,pCVar5);
  local_39 = CInventory::delete_item(local_930,1,param_1,uVar1,8,0);
  if (local_39 == '\x01') {
    local_94 = 0;
    std::vector<int,std::allocator<int>>::push_back(local_b8,&local_94);
    std::vector<int,std::allocator<int>>::push_back(local_b8,&param_1);
    local_90[0] = (uint)uVar1;
    std::vector<int,std::allocator<int>>::push_back(local_b8,(int *)local_90);
    local_38 = 0;
    while (iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                             (local_a0), (int)local_38 < iVar7) {
      local_34 = (int *)0x0;
      piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                (local_a0,local_38);
      iVar7 = *piVar8;
      pCVar9 = (CDataManager *)G_CDataManager();
      local_34 = (int *)CDataManager::find_item(pCVar9,iVar7);
      if (local_34 != (int *)0x0) {
        cVar2 = (**(code **)(*local_34 + 0x10))(local_34);
        if (cVar2 == '\0') {
          piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_a0,local_38);
          local_f0 = CInventory::get_inven_slot_no(local_930,*piVar8);
          if (local_f0 == -1) {
            unaff_EBX = 0xd5;
            goto LAB_0868d0aa;
          }
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_fc);
          ppVar6 = (pair *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[](local_a0,local_38);
                    /* try { // try from 0868c85d to 0868c8f4 has its CatchHandler @ 0868c8fc */
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_fc,ppVar6);
          local_2d = CInventory::tryDeleteEventItems(local_930,(vector *)local_fc);
          bVar3 = local_2d == '\x01';
          if (bVar3) {
            local_90[3] = 0;
            std::vector<int,std::allocator<int>>::push_back(local_b8,(int *)(local_90 + 3));
            std::vector<int,std::allocator<int>>::push_back(local_b8,&local_f0);
            iVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_a0,local_38);
            std::vector<int,std::allocator<int>>::push_back(local_b8,(int *)(iVar7 + 4));
          }
          else {
            unaff_EBX = 0x11;
          }
                    /* try { // try from 0868c920 to 0868c99a has its CatchHandler @ 0868d092 */
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_fc);
          if (!bVar3) goto LAB_0868d0aa;
        }
        else {
          piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_a0,local_38);
          local_ec = CInventory::get_avatar_slot_no(local_930,*piVar8);
          if (local_ec == -1) {
            unaff_EBX = 0xd5;
            goto LAB_0868d0aa;
          }
          cVar2 = CheckItemLock(this,2,local_ec);
          if (cVar2 != '\0') {
            unaff_EBX = 0xd5;
            goto LAB_0868d0aa;
          }
          local_90[1] = 1;
          std::vector<int,std::allocator<int>>::push_back(local_b8,(int *)(local_90 + 1));
          std::vector<int,std::allocator<int>>::push_back(local_b8,&local_ec);
          local_90[2] = 1;
          std::vector<int,std::allocator<int>>::push_back(local_b8,(int *)(local_90 + 2));
        }
      }
      local_38 = local_38 + 1;
    }
    piVar8 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_ac,0);
    iVar7 = *piVar8;
    pCVar9 = (CDataManager *)G_CDataManager();
    local_4c = (CItem *)CDataManager::find_item(pCVar9,iVar7);
    if (local_4c != (CItem *)0x0) {
      local_45 = 0;
      PacketGuard::PacketGuard(local_c4);
      local_44 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
                    /* try { // try from 0868c9bc to 0868d062 has its CatchHandler @ 0868d06a */
      std::vector<int,std::allocator<int>>::begin();
LAB_0868cbdf:
      while( true ) {
        do {
          std::vector<int,std::allocator<int>>::end();
          bVar3 = __gnu_cxx::operator!=(local_c8,local_80);
          if (!bVar3) {
            uVar4 = 0;
            do {
              *(undefined4 *)((int)local_e0 + uVar4) = 0;
              uVar4 = uVar4 + 4;
            } while (uVar4 < 0x18);
            uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
            uVar11 = WongWork::CGenUniqueNo::genIPGNo(7,uVar11,local_e0);
            uVar12 = CItem::getUsablePeriod(local_4c);
            uVar13 = CItem::get_index(local_4c);
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
            local_40 = CInventory::AddAvatarItem(pCVar5,uVar13,uVar12,0,0,0xffffffff,uVar11,2,0,0);
            if (local_40 == -1) {
              unaff_EBX = 4;
            }
            else {
              iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
              CInventory::GetInvenSlot((int)local_176,iVar7);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,1,param_4);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
              uVar4 = std::vector<int,std::allocator<int>>::size(local_b8);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,uVar4 / 3);
              std::vector<int,std::allocator<int>>::begin();
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              __normal_iterator<int*>(local_e4,local_60);
              std::vector<int,std::allocator<int>>::end();
              __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
              __normal_iterator<int*>(local_e8,local_5c);
              while (bVar3 = __gnu_cxx::operator!=(local_e4,local_e8), bVar3) {
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++(local_58,(int)local_e4);
                piVar8 = (int *)__gnu_cxx::
                                __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                                operator*(local_58);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,*piVar8);
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++(local_54,(int)local_e4);
                piVar8 = (int *)__gnu_cxx::
                                __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                                operator*(local_54);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c4,*piVar8);
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator++(local_50,(int)local_e4);
                piVar8 = (int *)__gnu_cxx::
                                __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                                operator*(local_50);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,*piVar8);
              }
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,1);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c4,local_40);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_174);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_16f);
              uVar4 = Inven_Item::GetUpgrade(local_176);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,uVar4 & 0xff);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c4,(uint)local_16b);
              uVar4 = stAmplifyOption_t::getAbilityType(asStack_165);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,uVar4 & 0xff);
              uVar4 = stAmplifyOption_t::getAbilityValue(asStack_165);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_c4,uVar4 & 0xffff);
              local_3a = local_176[0] != (Inven_Item)0x0;
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,(int)(char)local_3a);
              InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_c4,local_176);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
              Send(this,local_c4);
              SendUpdateItemList(this,1,1,local_40);
              iVar7 = CItem::get_index((CItem *)param_5);
              HistoryLog::WriteComposition(*(_IO_FILE **)(this + 0x796f8),iVar7);
              unaff_EBX = 0;
            }
            goto LAB_0868d082;
          }
          piVar8 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_c8);
          local_2c = *piVar8;
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_7c,(int)local_c8);
          piVar8 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_c8);
          local_28 = *piVar8;
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_78,(int)local_c8);
          puVar10 = (undefined4 *)
                    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_c8);
          local_24 = *puVar10;
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_74,(int)local_c8);
          if (local_2c == 0) goto code_r0x0868ca6c;
        } while (local_2c != 1);
        iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
        CInventory::GetInvenSlot((int)local_139,iVar7);
        cVar2 = CInventory::delete_item(local_44,2,local_28,1,3,1);
        if (cVar2 != '\x01') break;
        iVar7 = CInventory::GetAvatarItemMgrW(local_44);
        WongWork::CAvatarItemMgr::UnRegistItem(iVar7);
        CInventory::SendAvatarEvent(local_44,0x36,local_132,1,local_28 + 10,0);
      }
      unaff_EBX = 0x16;
      goto LAB_0868d082;
    }
    unaff_EBX = 0x11;
  }
  else {
    unaff_EBX = 0x11;
  }
  goto LAB_0868d0aa;
code_r0x0868ca6c:
  pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
  local_1d = CInventory::delete_item(pCVar5,1,local_28,local_24,8,1);
  if (local_1d != '\x01') goto code_r0x0868cab7;
  goto LAB_0868cbdf;
code_r0x0868cab7:
  uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  cMyTrace::cMyTrace(local_70,
                     "int CUser::process_recipe_avatar_items(int, bool, RequestItemCountType, int, const CStackableItem*)"
                     ,0xa8c1,5);
  cMyTrace::operator()
            (local_70,
             "CUser::process_recipe_avatar_items, getCurCharacInvenW()->delete_item failed , %d %d",
             uVar11,local_28);
  unaff_EBX = 0x11;
LAB_0868d082:
                    /* try { // try from 0868d08b to 0868d08f has its CatchHandler @ 0868d092 */
  PacketGuard::~PacketGuard(local_c4);
LAB_0868d0aa:
                    /* try { // try from 0868d0b3 to 0868d0b7 has its CatchHandler @ 0868d0ba */
  CInventory::~CInventory(local_930);
                    /* try { // try from 0868d0db to 0868d0df has its CatchHandler @ 0868d0e2 */
  std::vector<int,std::allocator<int>>::~vector(local_b8);
LAB_0868d0fa:
                    /* try { // try from 0868d103 to 0868d107 has its CatchHandler @ 0868d10a */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_ac);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_a0);
  return unaff_EBX;
}
```
