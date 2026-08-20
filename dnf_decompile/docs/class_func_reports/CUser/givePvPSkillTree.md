# givePvPSkillTree

`_ZN5CUser16givePvPSkillTreeEibi`

`CUser::givePvPSkillTree(int, bool, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08665400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08665400  _ZN5CUser16givePvPSkillTreeEibi
#           CUser::givePvPSkillTree(int, bool, int)
# range [0x08665400, 0x086657fb]
08665400 +0x000:  push   %ebp
08665401 +0x001:  mov    %esp,%ebp
08665403 +0x003:  push   %edi
08665404 +0x004:  push   %esi
08665405 +0x005:  push   %ebx
08665406 +0x006:  sub    $0x5c,%esp
08665409 +0x009:  mov    0x10(%ebp),%eax
0866540c +0x00c:  mov    %al,-0x3c(%ebp)
0866540f +0x00f:  movl   $0x0,-0x20(%ebp)
08665416 +0x016:  jmp    086657d5 <+0x3d5>
0866541b +0x01b:  mov    0xc(%ebp),%eax
0866541e +0x01e:  mov    %eax,-0x1c(%ebp)
08665421 +0x021:  jmp    086657b8 <+0x3b8>
08665426 +0x026:  movl   $0x0,-0x28(%ebp)
0866542d +0x02d:  movzbl -0x3c(%ebp),%edi
08665431 +0x031:  mov    0x8(%ebp),%eax
08665434 +0x034:  mov    %eax,(%esp)
08665437 +0x037:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866543c +0x03c:  movsbl %al,%esi
0866543f +0x03f:  mov    0x8(%ebp),%eax
08665442 +0x042:  mov    %eax,(%esp)
08665445 +0x045:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866544a +0x04a:  mov    %eax,%ebx
0866544c +0x04c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08665451 +0x051:  lea    0xa800(%eax),%edx
08665457 +0x057:  lea    -0x28(%ebp),%eax
0866545a +0x05a:  mov    %eax,0x18(%esp)
0866545e +0x05e:  mov    %edi,0x14(%esp)
08665462 +0x062:  mov    -0x1c(%ebp),%eax
08665465 +0x065:  mov    %eax,0x10(%esp)
08665469 +0x069:  mov    -0x20(%ebp),%eax
0866546c +0x06c:  mov    %eax,0xc(%esp)
08665470 +0x070:  mov    %esi,0x8(%esp)
08665474 +0x074:  mov    %ebx,0x4(%esp)
08665478 +0x078:  mov    %edx,(%esp)
0866547b +0x07b:  call   08a5db5a <_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE>  ; PvPSkillTreeParameterScript::getPvPSkillTree(int, int, int, int, bool, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >**) const
08665480 +0x080:  test   %al,%al
08665482 +0x082:  je     086657b4 <+0x3b4>
08665488 +0x088:  mov    -0x28(%ebp),%edx
0866548b +0x08b:  lea    -0x2c(%ebp),%eax
0866548e +0x08e:  mov    %edx,0x4(%esp)
08665492 +0x092:  mov    %eax,(%esp)
08665495 +0x095:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0866549a +0x09a:  sub    $0x4,%esp
0866549d +0x09d:  jmp    08665785 <+0x385>
086654a2 +0x0a2:  cmpl   $0x1,0x14(%ebp)
086654a6 +0x0a6:  jne    0866555f <+0x15f>
086654ac +0x0ac:  movzbl -0x3c(%ebp),%eax
086654b0 +0x0b0:  xor    $0x1,%eax
086654b3 +0x0b3:  test   %al,%al
086654b5 +0x0b5:  jne    086654f7 <+0xf7>
086654b7 +0x0b7:  lea    -0x2c(%ebp),%eax
086654ba +0x0ba:  mov    %eax,(%esp)
086654bd +0x0bd:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086654c2 +0x0c2:  mov    (%eax),%ebx
086654c4 +0x0c4:  mov    0x8(%ebp),%eax
086654c7 +0x0c7:  mov    %eax,(%esp)
086654ca +0x0ca:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
086654cf +0x0cf:  movl   $0x0,0x8(%esp)
086654d7 +0x0d7:  mov    %ebx,0x4(%esp)
086654db +0x0db:  mov    %eax,(%esp)
086654de +0x0de:  call   086036ce <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const
086654e3 +0x0e3:  mov    %eax,%ebx
086654e5 +0x0e5:  lea    -0x2c(%ebp),%eax
086654e8 +0x0e8:  mov    %eax,(%esp)
086654eb +0x0eb:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086654f0 +0x0f0:  mov    0x4(%eax),%eax
086654f3 +0x0f3:  cmp    %eax,%ebx
086654f5 +0x0f5:  jge    086654fe <+0xfe>
086654f7 +0x0f7:  mov    $0x1,%eax
086654fc +0x0fc:  jmp    08665503 <+0x103>
086654fe +0x0fe:  mov    $0x0,%eax
08665503 +0x103:  test   %al,%al
08665505 +0x105:  je     0866577a <+0x37a>
0866550b +0x10b:  lea    -0x2c(%ebp),%eax
0866550e +0x10e:  mov    %eax,(%esp)
08665511 +0x111:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08665516 +0x116:  mov    0x4(%eax),%edi
08665519 +0x119:  lea    -0x2c(%ebp),%eax
0866551c +0x11c:  mov    %eax,(%esp)
0866551f +0x11f:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08665524 +0x124:  mov    (%eax),%esi
08665526 +0x126:  mov    0x8(%ebp),%eax
08665529 +0x129:  mov    %eax,(%esp)
0866552c +0x12c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08665531 +0x131:  mov    %eax,%ebx
08665533 +0x133:  mov    0x8(%ebp),%eax
08665536 +0x136:  mov    %eax,(%esp)
08665539 +0x139:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866553e +0x13e:  movl   $0x0,0x10(%esp)
08665546 +0x146:  mov    %edi,0xc(%esp)
0866554a +0x14a:  mov    %esi,0x8(%esp)
0866554e +0x14e:  mov    %ebx,0x4(%esp)
08665552 +0x152:  mov    %eax,(%esp)
08665555 +0x155:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866555a +0x15a:  jmp    0866577a <+0x37a>
0866555f +0x15f:  cmpl   $0x2,0x14(%ebp)
08665563 +0x163:  jne    0866561c <+0x21c>
08665569 +0x169:  movzbl -0x3c(%ebp),%eax
0866556d +0x16d:  xor    $0x1,%eax
08665570 +0x170:  test   %al,%al
08665572 +0x172:  jne    086655b4 <+0x1b4>
08665574 +0x174:  lea    -0x2c(%ebp),%eax
08665577 +0x177:  mov    %eax,(%esp)
0866557a +0x17a:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866557f +0x17f:  mov    (%eax),%ebx
08665581 +0x181:  mov    0x8(%ebp),%eax
08665584 +0x184:  mov    %eax,(%esp)
08665587 +0x187:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866558c +0x18c:  movl   $0x1,0x8(%esp)
08665594 +0x194:  mov    %ebx,0x4(%esp)
08665598 +0x198:  mov    %eax,(%esp)
0866559b +0x19b:  call   086036ce <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const
086655a0 +0x1a0:  mov    %eax,%ebx
086655a2 +0x1a2:  lea    -0x2c(%ebp),%eax
086655a5 +0x1a5:  mov    %eax,(%esp)
086655a8 +0x1a8:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086655ad +0x1ad:  mov    0x4(%eax),%eax
086655b0 +0x1b0:  cmp    %eax,%ebx
086655b2 +0x1b2:  jge    086655bb <+0x1bb>
086655b4 +0x1b4:  mov    $0x1,%eax
086655b9 +0x1b9:  jmp    086655c0 <+0x1c0>
086655bb +0x1bb:  mov    $0x0,%eax
086655c0 +0x1c0:  test   %al,%al
086655c2 +0x1c2:  je     0866577a <+0x37a>
086655c8 +0x1c8:  lea    -0x2c(%ebp),%eax
086655cb +0x1cb:  mov    %eax,(%esp)
086655ce +0x1ce:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086655d3 +0x1d3:  mov    0x4(%eax),%edi
086655d6 +0x1d6:  lea    -0x2c(%ebp),%eax
086655d9 +0x1d9:  mov    %eax,(%esp)
086655dc +0x1dc:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086655e1 +0x1e1:  mov    (%eax),%esi
086655e3 +0x1e3:  mov    0x8(%ebp),%eax
086655e6 +0x1e6:  mov    %eax,(%esp)
086655e9 +0x1e9:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086655ee +0x1ee:  mov    %eax,%ebx
086655f0 +0x1f0:  mov    0x8(%ebp),%eax
086655f3 +0x1f3:  mov    %eax,(%esp)
086655f6 +0x1f6:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086655fb +0x1fb:  movl   $0x1,0x10(%esp)
08665603 +0x203:  mov    %edi,0xc(%esp)
08665607 +0x207:  mov    %esi,0x8(%esp)
0866560b +0x20b:  mov    %ebx,0x4(%esp)
0866560f +0x20f:  mov    %eax,(%esp)
08665612 +0x212:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08665617 +0x217:  jmp    0866577a <+0x37a>
0866561c +0x21c:  cmpl   $0x3,0x14(%ebp)
08665620 +0x220:  jne    0866577a <+0x37a>
08665626 +0x226:  movzbl -0x3c(%ebp),%eax
0866562a +0x22a:  xor    $0x1,%eax
0866562d +0x22d:  test   %al,%al
0866562f +0x22f:  jne    08665671 <+0x271>
08665631 +0x231:  lea    -0x2c(%ebp),%eax
08665634 +0x234:  mov    %eax,(%esp)
08665637 +0x237:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866563c +0x23c:  mov    (%eax),%ebx
0866563e +0x23e:  mov    0x8(%ebp),%eax
08665641 +0x241:  mov    %eax,(%esp)
08665644 +0x244:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
08665649 +0x249:  movl   $0x0,0x8(%esp)
08665651 +0x251:  mov    %ebx,0x4(%esp)
08665655 +0x255:  mov    %eax,(%esp)
08665658 +0x258:  call   086036ce <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const
0866565d +0x25d:  mov    %eax,%ebx
0866565f +0x25f:  lea    -0x2c(%ebp),%eax
08665662 +0x262:  mov    %eax,(%esp)
08665665 +0x265:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866566a +0x26a:  mov    0x4(%eax),%eax
0866566d +0x26d:  cmp    %eax,%ebx
0866566f +0x26f:  jge    08665678 <+0x278>
08665671 +0x271:  mov    $0x1,%eax
08665676 +0x276:  jmp    0866567d <+0x27d>
08665678 +0x278:  mov    $0x0,%eax
0866567d +0x27d:  test   %al,%al
0866567f +0x27f:  je     086656d0 <+0x2d0>
08665681 +0x281:  lea    -0x2c(%ebp),%eax
08665684 +0x284:  mov    %eax,(%esp)
08665687 +0x287:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866568c +0x28c:  mov    0x4(%eax),%edi
0866568f +0x28f:  lea    -0x2c(%ebp),%eax
08665692 +0x292:  mov    %eax,(%esp)
08665695 +0x295:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0866569a +0x29a:  mov    (%eax),%esi
0866569c +0x29c:  mov    0x8(%ebp),%eax
0866569f +0x29f:  mov    %eax,(%esp)
086656a2 +0x2a2:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086656a7 +0x2a7:  mov    %eax,%ebx
086656a9 +0x2a9:  mov    0x8(%ebp),%eax
086656ac +0x2ac:  mov    %eax,(%esp)
086656af +0x2af:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086656b4 +0x2b4:  movl   $0x0,0x10(%esp)
086656bc +0x2bc:  mov    %edi,0xc(%esp)
086656c0 +0x2c0:  mov    %esi,0x8(%esp)
086656c4 +0x2c4:  mov    %ebx,0x4(%esp)
086656c8 +0x2c8:  mov    %eax,(%esp)
086656cb +0x2cb:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
086656d0 +0x2d0:  movzbl -0x3c(%ebp),%eax
086656d4 +0x2d4:  xor    $0x1,%eax
086656d7 +0x2d7:  test   %al,%al
086656d9 +0x2d9:  jne    0866571b <+0x31b>
086656db +0x2db:  lea    -0x2c(%ebp),%eax
086656de +0x2de:  mov    %eax,(%esp)
086656e1 +0x2e1:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
086656e6 +0x2e6:  mov    (%eax),%ebx
086656e8 +0x2e8:  mov    0x8(%ebp),%eax
086656eb +0x2eb:  mov    %eax,(%esp)
086656ee +0x2ee:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
086656f3 +0x2f3:  movl   $0x1,0x8(%esp)
086656fb +0x2fb:  mov    %ebx,0x4(%esp)
086656ff +0x2ff:  mov    %eax,(%esp)
08665702 +0x302:  call   086036ce <_ZNK9SkillSlot9FindSkillEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::FindSkill(int, ENUM_SKILL_TREE_KIND) const
08665707 +0x307:  mov    %eax,%ebx
08665709 +0x309:  lea    -0x2c(%ebp),%eax
0866570c +0x30c:  mov    %eax,(%esp)
0866570f +0x30f:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08665714 +0x314:  mov    0x4(%eax),%eax
08665717 +0x317:  cmp    %eax,%ebx
08665719 +0x319:  jge    08665722 <+0x322>
0866571b +0x31b:  mov    $0x1,%eax
08665720 +0x320:  jmp    08665727 <+0x327>
08665722 +0x322:  mov    $0x0,%eax
08665727 +0x327:  test   %al,%al
08665729 +0x329:  je     0866577a <+0x37a>
0866572b +0x32b:  lea    -0x2c(%ebp),%eax
0866572e +0x32e:  mov    %eax,(%esp)
08665731 +0x331:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08665736 +0x336:  mov    0x4(%eax),%edi
08665739 +0x339:  lea    -0x2c(%ebp),%eax
0866573c +0x33c:  mov    %eax,(%esp)
0866573f +0x33f:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08665744 +0x344:  mov    (%eax),%esi
08665746 +0x346:  mov    0x8(%ebp),%eax
08665749 +0x349:  mov    %eax,(%esp)
0866574c +0x34c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08665751 +0x351:  mov    %eax,%ebx
08665753 +0x353:  mov    0x8(%ebp),%eax
08665756 +0x356:  mov    %eax,(%esp)
08665759 +0x359:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866575e +0x35e:  movl   $0x1,0x10(%esp)
08665766 +0x366:  mov    %edi,0xc(%esp)
0866576a +0x36a:  mov    %esi,0x8(%esp)
0866576e +0x36e:  mov    %ebx,0x4(%esp)
08665772 +0x372:  mov    %eax,(%esp)
08665775 +0x375:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866577a +0x37a:  lea    -0x2c(%ebp),%eax
0866577d +0x37d:  mov    %eax,(%esp)
08665780 +0x380:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08665785 +0x385:  mov    -0x28(%ebp),%edx
08665788 +0x388:  lea    -0x24(%ebp),%eax
0866578b +0x38b:  mov    %edx,0x4(%esp)
0866578f +0x38f:  mov    %eax,(%esp)
08665792 +0x392:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08665797 +0x397:  sub    $0x4,%esp
0866579a +0x39a:  lea    -0x24(%ebp),%eax
0866579d +0x39d:  mov    %eax,0x4(%esp)
086657a1 +0x3a1:  lea    -0x2c(%ebp),%eax
086657a4 +0x3a4:  mov    %eax,(%esp)
086657a7 +0x3a7:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
086657ac +0x3ac:  test   %al,%al
086657ae +0x3ae:  jne    086654a2 <+0xa2>
086657b4 +0x3b4:  addl   $0x1,-0x1c(%ebp)
086657b8 +0x3b8:  mov    0x8(%ebp),%eax
086657bb +0x3bb:  mov    %eax,(%esp)
086657be +0x3be:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
086657c3 +0x3c3:  cmp    -0x1c(%ebp),%eax
086657c6 +0x3c6:  setge  %al
086657c9 +0x3c9:  test   %al,%al
086657cb +0x3cb:  jne    08665426 <+0x26>
086657d1 +0x3d1:  addl   $0x1,-0x20(%ebp)
086657d5 +0x3d5:  mov    0x8(%ebp),%eax
086657d8 +0x3d8:  mov    %eax,(%esp)
086657db +0x3db:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086657e0 +0x3e0:  movsbl %al,%eax
086657e3 +0x3e3:  cmp    -0x20(%ebp),%eax
086657e6 +0x3e6:  setge  %al
086657e9 +0x3e9:  test   %al,%al
086657eb +0x3eb:  jne    0866541b <+0x1b>
086657f1 +0x3f1:  lea    -0xc(%ebp),%esp
086657f4 +0x3f4:  add    $0x0,%esp
086657f7 +0x3f7:  pop    %ebx
086657f8 +0x3f8:  pop    %esi
086657f9 +0x3f9:  pop    %edi
086657fa +0x3fa:  pop    %ebp
086657fb +0x3fb:  ret
```

## 反编译 C

```c
// CUser::givePvPSkillTree @ 0x8665400

/* CUser::givePvPSkillTree(int, bool, int) */

void __thiscall CUser::givePvPSkillTree(CUser *this,int param_1,bool param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  SkillSlot *pSVar7;
  undefined4 uVar8;
  int iVar9;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  vector *local_2c;
  __normal_iterator local_28 [4];
  int local_24;
  int local_20;
  
  local_24 = 0;
  do {
    cVar4 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
    if (cVar4 < local_24) {
      return;
    }
    local_20 = param_1;
    while( true ) {
      iVar9 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      if (iVar9 < local_20) break;
      local_2c = (vector *)0x0;
      cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
      iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar5 = G_CDataManager();
      cVar4 = PvPSkillTreeParameterScript::getPvPSkillTree
                        ((PvPSkillTreeParameterScript *)(iVar5 + 0xa800),iVar9,(int)cVar4,local_24,
                         local_20,param_2,&local_2c);
      if (cVar4 != '\0') {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar3 = __gnu_cxx::operator!=(local_30,local_28);
          if (!bVar3) break;
          if (param_3 == 1) {
            if (param_2) {
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar1 = *puVar6;
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
              iVar9 = SkillSlot::FindSkill(pSVar7,uVar1,0);
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              if (iVar9 < *(int *)(iVar5 + 4)) goto LAB_086654f7;
              bVar3 = false;
            }
            else {
LAB_086654f7:
              bVar3 = true;
            }
            if (bVar3) {
              iVar9 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              uVar1 = *(undefined4 *)(iVar9 + 4);
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar2 = *puVar6;
              uVar8 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
              SkillSlot::growtype_skill(pSVar7,uVar8,uVar2,uVar1,0);
            }
          }
          else if (param_3 == 2) {
            if (param_2) {
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar1 = *puVar6;
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
              iVar9 = SkillSlot::FindSkill(pSVar7,uVar1,1);
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              if (iVar9 < *(int *)(iVar5 + 4)) goto LAB_086655b4;
              bVar3 = false;
            }
            else {
LAB_086655b4:
              bVar3 = true;
            }
            if (bVar3) {
              iVar9 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              uVar1 = *(undefined4 *)(iVar9 + 4);
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar2 = *puVar6;
              uVar8 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
              SkillSlot::growtype_skill(pSVar7,uVar8,uVar2,uVar1,1);
            }
          }
          else if (param_3 == 3) {
            if (param_2) {
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar1 = *puVar6;
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
              iVar9 = SkillSlot::FindSkill(pSVar7,uVar1,0);
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              if (iVar9 < *(int *)(iVar5 + 4)) goto LAB_08665671;
              bVar3 = false;
            }
            else {
LAB_08665671:
              bVar3 = true;
            }
            if (bVar3) {
              iVar9 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              uVar1 = *(undefined4 *)(iVar9 + 4);
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar2 = *puVar6;
              uVar8 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
              SkillSlot::growtype_skill(pSVar7,uVar8,uVar2,uVar1,0);
            }
            if (param_2) {
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar1 = *puVar6;
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
              iVar9 = SkillSlot::FindSkill(pSVar7,uVar1,1);
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              if (iVar9 < *(int *)(iVar5 + 4)) goto LAB_0866571b;
              bVar3 = false;
            }
            else {
LAB_0866571b:
              bVar3 = true;
            }
            if (bVar3) {
              iVar9 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_30);
              uVar1 = *(undefined4 *)(iVar9 + 4);
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                       ::operator->(local_30);
              uVar2 = *puVar6;
              uVar8 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
              pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
              SkillSlot::growtype_skill(pSVar7,uVar8,uVar2,uVar1,1);
            }
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_30);
        }
      }
      local_20 = local_20 + 1;
    }
    local_24 = local_24 + 1;
  } while( true );
}
```
