# SetCharacLevel

`_ZN5CUser14SetCharacLevelEi`

`CUser::SetCharacLevel(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867a95c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867a95c  _ZN5CUser14SetCharacLevelEi
#           CUser::SetCharacLevel(int)
# range [0x0867a95c, 0x0867b047]
0867a95c +0x000:  push   %ebp
0867a95d +0x001:  mov    %esp,%ebp
0867a95f +0x003:  push   %edi
0867a960 +0x004:  push   %esi
0867a961 +0x005:  push   %ebx
0867a962 +0x006:  sub    $0x9c,%esp
0867a968 +0x00c:  mov    0x8(%ebp),%eax
0867a96b +0x00f:  mov    %eax,(%esp)
0867a96e +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867a973 +0x017:  test   %eax,%eax
0867a975 +0x019:  sete   %al
0867a978 +0x01c:  test   %al,%al
0867a97a +0x01e:  je     0867a986 <+0x2a>
0867a97c +0x020:  mov    $0x0,%eax
0867a981 +0x025:  jmp    0867b03c <+0x6e0>
0867a986 +0x02a:  movl   $0xc8,-0x5c(%ebp)
0867a98d +0x031:  lea    0xc(%ebp),%eax
0867a990 +0x034:  mov    %eax,0x4(%esp)
0867a994 +0x038:  lea    -0x5c(%ebp),%eax
0867a997 +0x03b:  mov    %eax,(%esp)
0867a99a +0x03e:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0867a99f +0x043:  movl   $0x1,-0x58(%ebp)
0867a9a6 +0x04a:  mov    %eax,0x4(%esp)
0867a9aa +0x04e:  lea    -0x58(%ebp),%eax
0867a9ad +0x051:  mov    %eax,(%esp)
0867a9b0 +0x054:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0867a9b5 +0x059:  mov    (%eax),%eax
0867a9b7 +0x05b:  mov    %eax,0xc(%ebp)
0867a9ba +0x05e:  movl   $0x0,-0x3c(%ebp)
0867a9c1 +0x065:  mov    0x8(%ebp),%eax
0867a9c4 +0x068:  mov    %eax,(%esp)
0867a9c7 +0x06b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867a9cc +0x070:  mov    0xc(%ebp),%edx
0867a9cf +0x073:  cmp    %edx,%eax
0867a9d1 +0x075:  setl   %al
0867a9d4 +0x078:  test   %al,%al
0867a9d6 +0x07a:  je     0867a9f1 <+0x95>
0867a9d8 +0x07c:  mov    0xc(%ebp),%ebx
0867a9db +0x07f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867a9e0 +0x084:  mov    %ebx,0x4(%esp)
0867a9e4 +0x088:  mov    %eax,(%esp)
0867a9e7 +0x08b:  call   08360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>  ; CDataManager::GetSpAtLevelUp(int) const
0867a9ec +0x090:  mov    %eax,-0x3c(%ebp)
0867a9ef +0x093:  jmp    0867aa0b <+0xaf>
0867a9f1 +0x095:  mov    0xc(%ebp),%eax
0867a9f4 +0x098:  lea    0x1(%eax),%ebx
0867a9f7 +0x09b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867a9fc +0x0a0:  mov    %ebx,0x4(%esp)
0867aa00 +0x0a4:  mov    %eax,(%esp)
0867aa03 +0x0a7:  call   08360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>  ; CDataManager::GetSpAtLevelUp(int) const
0867aa08 +0x0ac:  mov    %eax,-0x3c(%ebp)
0867aa0b +0x0af:  mov    0xc(%ebp),%ebx
0867aa0e +0x0b2:  mov    0x8(%ebp),%eax
0867aa11 +0x0b5:  mov    %eax,(%esp)
0867aa14 +0x0b8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867aa19 +0x0bd:  mov    %ebx,%edx
0867aa1b +0x0bf:  sub    %eax,%edx
0867aa1d +0x0c1:  mov    %edx,%eax
0867aa1f +0x0c3:  imul   -0x3c(%ebp),%eax
0867aa23 +0x0c7:  mov    %eax,-0x38(%ebp)
0867aa26 +0x0ca:  mov    0xc(%ebp),%ebx
0867aa29 +0x0cd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867aa2e +0x0d2:  mov    %ebx,0x4(%esp)
0867aa32 +0x0d6:  mov    %eax,(%esp)
0867aa35 +0x0d9:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0867aa3a +0x0de:  mov    0x8(%ebp),%edx
0867aa3d +0x0e1:  mov    %eax,0x4(%esp)
0867aa41 +0x0e5:  mov    %edx,(%esp)
0867aa44 +0x0e8:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
0867aa49 +0x0ed:  mov    0x8(%ebp),%eax
0867aa4c +0x0f0:  mov    %eax,(%esp)
0867aa4f +0x0f3:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867aa54 +0x0f8:  movl   $0x0,0x4(%esp)
0867aa5c +0x100:  mov    %eax,(%esp)
0867aa5f +0x103:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0867aa64 +0x108:  add    -0x38(%ebp),%eax
0867aa67 +0x10b:  mov    %eax,-0x54(%ebp)
0867aa6a +0x10e:  movl   $0x3fffffff,-0x50(%ebp)
0867aa71 +0x115:  lea    -0x54(%ebp),%eax
0867aa74 +0x118:  mov    %eax,0x4(%esp)
0867aa78 +0x11c:  lea    -0x50(%ebp),%eax
0867aa7b +0x11f:  mov    %eax,(%esp)
0867aa7e +0x122:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0867aa83 +0x127:  movl   $0x0,-0x4c(%ebp)
0867aa8a +0x12e:  mov    %eax,0x4(%esp)
0867aa8e +0x132:  lea    -0x4c(%ebp),%eax
0867aa91 +0x135:  mov    %eax,(%esp)
0867aa94 +0x138:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0867aa99 +0x13d:  mov    (%eax),%eax
0867aa9b +0x13f:  mov    %eax,-0x34(%ebp)
0867aa9e +0x142:  mov    0x8(%ebp),%eax
0867aaa1 +0x145:  mov    %eax,(%esp)
0867aaa4 +0x148:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867aaa9 +0x14d:  movl   $0x0,0x8(%esp)
0867aab1 +0x155:  mov    -0x34(%ebp),%edx
0867aab4 +0x158:  mov    %edx,0x4(%esp)
0867aab8 +0x15c:  mov    %eax,(%esp)
0867aabb +0x15f:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0867aac0 +0x164:  mov    0x8(%ebp),%eax
0867aac3 +0x167:  mov    %eax,(%esp)
0867aac6 +0x16a:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867aacb +0x16f:  movl   $0x1,0x4(%esp)
0867aad3 +0x177:  mov    %eax,(%esp)
0867aad6 +0x17a:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0867aadb +0x17f:  add    -0x38(%ebp),%eax
0867aade +0x182:  mov    %eax,-0x48(%ebp)
0867aae1 +0x185:  movl   $0x3fffffff,-0x44(%ebp)
0867aae8 +0x18c:  lea    -0x48(%ebp),%eax
0867aaeb +0x18f:  mov    %eax,0x4(%esp)
0867aaef +0x193:  lea    -0x44(%ebp),%eax
0867aaf2 +0x196:  mov    %eax,(%esp)
0867aaf5 +0x199:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0867aafa +0x19e:  movl   $0x0,-0x40(%ebp)
0867ab01 +0x1a5:  mov    %eax,0x4(%esp)
0867ab05 +0x1a9:  lea    -0x40(%ebp),%eax
0867ab08 +0x1ac:  mov    %eax,(%esp)
0867ab0b +0x1af:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0867ab10 +0x1b4:  mov    (%eax),%eax
0867ab12 +0x1b6:  mov    %eax,-0x30(%ebp)
0867ab15 +0x1b9:  mov    0x8(%ebp),%eax
0867ab18 +0x1bc:  mov    %eax,(%esp)
0867ab1b +0x1bf:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867ab20 +0x1c4:  movl   $0x1,0x8(%esp)
0867ab28 +0x1cc:  mov    -0x30(%ebp),%edx
0867ab2b +0x1cf:  mov    %edx,0x4(%esp)
0867ab2f +0x1d3:  mov    %eax,(%esp)
0867ab32 +0x1d6:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0867ab37 +0x1db:  mov    0xc(%ebp),%eax
0867ab3a +0x1de:  cmp    $0x31,%eax
0867ab3d +0x1e1:  jle    0867ac19 <+0x2bd>
0867ab43 +0x1e7:  mov    0x8(%ebp),%eax
0867ab46 +0x1ea:  mov    %eax,(%esp)
0867ab49 +0x1ed:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ab4e +0x1f2:  cmp    $0x32,%eax
0867ab51 +0x1f5:  setg   %al
0867ab54 +0x1f8:  test   %al,%al
0867ab56 +0x1fa:  je     0867abc4 <+0x268>
0867ab58 +0x1fc:  mov    0x8(%ebp),%eax
0867ab5b +0x1ff:  mov    %eax,(%esp)
0867ab5e +0x202:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867ab63 +0x207:  movl   $0x2,0x4(%esp)
0867ab6b +0x20f:  mov    %eax,(%esp)
0867ab6e +0x212:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0867ab73 +0x217:  mov    %eax,-0x24(%ebp)
0867ab76 +0x21a:  mov    0xc(%ebp),%ebx
0867ab79 +0x21d:  mov    0x8(%ebp),%eax
0867ab7c +0x220:  mov    %eax,(%esp)
0867ab7f +0x223:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ab84 +0x228:  mov    %ebx,%edx
0867ab86 +0x22a:  sub    %eax,%edx
0867ab88 +0x22c:  mov    %edx,%eax
0867ab8a +0x22e:  add    %eax,-0x24(%ebp)
0867ab8d +0x231:  mov    0x8(%ebp),%eax
0867ab90 +0x234:  mov    %eax,(%esp)
0867ab93 +0x237:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0867ab98 +0x23c:  movl   $0x3,0x4(%esp)
0867aba0 +0x244:  mov    %eax,(%esp)
0867aba3 +0x247:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0867aba8 +0x24c:  mov    %eax,-0x20(%ebp)
0867abab +0x24f:  mov    0xc(%ebp),%ebx
0867abae +0x252:  mov    0x8(%ebp),%eax
0867abb1 +0x255:  mov    %eax,(%esp)
0867abb4 +0x258:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867abb9 +0x25d:  mov    %ebx,%edx
0867abbb +0x25f:  sub    %eax,%edx
0867abbd +0x261:  mov    %edx,%eax
0867abbf +0x263:  add    %eax,-0x20(%ebp)
0867abc2 +0x266:  jmp    0867abd3 <+0x277>
0867abc4 +0x268:  mov    0xc(%ebp),%eax
0867abc7 +0x26b:  sub    $0x31,%eax
0867abca +0x26e:  mov    %eax,-0x20(%ebp)
0867abcd +0x271:  mov    -0x20(%ebp),%eax
0867abd0 +0x274:  mov    %eax,-0x24(%ebp)
0867abd3 +0x277:  mov    0x8(%ebp),%eax
0867abd6 +0x27a:  mov    %eax,(%esp)
0867abd9 +0x27d:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867abde +0x282:  movl   $0x2,0x8(%esp)
0867abe6 +0x28a:  mov    -0x24(%ebp),%edx
0867abe9 +0x28d:  mov    %edx,0x4(%esp)
0867abed +0x291:  mov    %eax,(%esp)
0867abf0 +0x294:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0867abf5 +0x299:  mov    0x8(%ebp),%eax
0867abf8 +0x29c:  mov    %eax,(%esp)
0867abfb +0x29f:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867ac00 +0x2a4:  movl   $0x3,0x8(%esp)
0867ac08 +0x2ac:  mov    -0x20(%ebp),%edx
0867ac0b +0x2af:  mov    %edx,0x4(%esp)
0867ac0f +0x2b3:  mov    %eax,(%esp)
0867ac12 +0x2b6:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0867ac17 +0x2bb:  jmp    0867ac5f <+0x303>
0867ac19 +0x2bd:  mov    0x8(%ebp),%eax
0867ac1c +0x2c0:  mov    %eax,(%esp)
0867ac1f +0x2c3:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867ac24 +0x2c8:  movl   $0x2,0x8(%esp)
0867ac2c +0x2d0:  movl   $0x0,0x4(%esp)
0867ac34 +0x2d8:  mov    %eax,(%esp)
0867ac37 +0x2db:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0867ac3c +0x2e0:  mov    0x8(%ebp),%eax
0867ac3f +0x2e3:  mov    %eax,(%esp)
0867ac42 +0x2e6:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867ac47 +0x2eb:  movl   $0x3,0x8(%esp)
0867ac4f +0x2f3:  movl   $0x0,0x4(%esp)
0867ac57 +0x2fb:  mov    %eax,(%esp)
0867ac5a +0x2fe:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
0867ac5f +0x303:  mov    0x8(%ebp),%eax
0867ac62 +0x306:  mov    %eax,(%esp)
0867ac65 +0x309:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0867ac6a +0x30e:  movsbl %al,%esi
0867ac6d +0x311:  mov    0x8(%ebp),%eax
0867ac70 +0x314:  mov    %eax,(%esp)
0867ac73 +0x317:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867ac78 +0x31c:  movsbl %al,%ebx
0867ac7b +0x31f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867ac80 +0x324:  mov    0x14(%eax),%edi
0867ac83 +0x327:  mov    0x8(%ebp),%eax
0867ac86 +0x32a:  mov    %eax,(%esp)
0867ac89 +0x32d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0867ac8e +0x332:  imul   $0x7dc,%eax,%eax
0867ac94 +0x338:  lea    (%edi,%eax,1),%eax
0867ac97 +0x33b:  mov    %esi,0x8(%esp)
0867ac9b +0x33f:  mov    %ebx,0x4(%esp)
0867ac9f +0x343:  mov    %eax,(%esp)
0867aca2 +0x346:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
0867aca7 +0x34b:  mov    %eax,-0x2c(%ebp)
0867acaa +0x34e:  jmp    0867ae1f <+0x4c3>
0867acaf +0x353:  mov    0x8(%ebp),%eax
0867acb2 +0x356:  mov    %eax,(%esp)
0867acb5 +0x359:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867acba +0x35e:  mov    0xc(%ebp),%edx
0867acbd +0x361:  cmp    %edx,%eax
0867acbf +0x363:  setl   %al
0867acc2 +0x366:  test   %al,%al
0867acc4 +0x368:  je     0867adba <+0x45e>
0867acca +0x36e:  mov    0x8(%ebp),%eax
0867accd +0x371:  mov    %eax,(%esp)
0867acd0 +0x374:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
0867acd5 +0x379:  mov    -0x2c(%ebp),%edx
0867acd8 +0x37c:  mov    %edx,0x4(%esp)
0867acdc +0x380:  mov    %eax,(%esp)
0867acdf +0x383:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
0867ace4 +0x388:  mov    0x8(%ebp),%eax
0867ace7 +0x38b:  mov    %eax,(%esp)
0867acea +0x38e:  call   08696762 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2fb7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2fb7
0867acef +0x393:  mov    0x8(%ebp),%eax
0867acf2 +0x396:  mov    %eax,(%esp)
0867acf5 +0x399:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867acfa +0x39e:  mov    0x8(%ebp),%edx
0867acfd +0x3a1:  add    $0x79700,%edx
0867ad03 +0x3a7:  movl   $0x1,0x8(%esp)
0867ad0b +0x3af:  mov    %eax,0x4(%esp)
0867ad0f +0x3b3:  mov    %edx,(%esp)
0867ad12 +0x3b6:  call   086845b2 <_ZN15cUserHistoryLog7LevelUpEi14eLevelUpReason>  ; cUserHistoryLog::LevelUp(int, eLevelUpReason)
0867ad17 +0x3bb:  mov    0x8(%ebp),%eax
0867ad1a +0x3be:  mov    %eax,(%esp)
0867ad1d +0x3c1:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ad22 +0x3c6:  mov    0x8(%ebp),%edx
0867ad25 +0x3c9:  add    $0x7121c,%edx
0867ad2b +0x3cf:  mov    %eax,0x4(%esp)
0867ad2f +0x3d3:  mov    %edx,(%esp)
0867ad32 +0x3d6:  call   08694a64 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12b9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12b9
0867ad37 +0x3db:  mov    %eax,-0x1c(%ebp)
0867ad3a +0x3de:  cmpl   $0x0,-0x1c(%ebp)
0867ad3e +0x3e2:  je     0867ae07 <+0x4ab>
0867ad44 +0x3e8:  mov    0x8(%ebp),%eax
0867ad47 +0x3eb:  mov    %eax,(%esp)
0867ad4a +0x3ee:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ad4f +0x3f3:  mov    0x8(%ebp),%edx
0867ad52 +0x3f6:  add    $0x7121c,%edx
0867ad58 +0x3fc:  mov    %eax,0x4(%esp)
0867ad5c +0x400:  mov    %edx,(%esp)
0867ad5f +0x403:  call   08694a64 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12b9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12b9
0867ad64 +0x408:  mov    %eax,%ebx
0867ad66 +0x40a:  mov    0x8(%ebp),%eax
0867ad69 +0x40d:  mov    %eax,(%esp)
0867ad6c +0x410:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867ad71 +0x415:  movl   $0x0,0x10(%esp)
0867ad79 +0x41d:  movl   $0x1,0xc(%esp)
0867ad81 +0x425:  movl   $0xd,0x8(%esp)
0867ad89 +0x42d:  mov    %ebx,0x4(%esp)
0867ad8d +0x431:  mov    %eax,(%esp)
0867ad90 +0x434:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0867ad95 +0x439:  movl   $0x0,0xc(%esp)
0867ad9d +0x441:  movl   $0x0,0x8(%esp)
0867ada5 +0x449:  movl   $0x1,0x4(%esp)
0867adad +0x451:  mov    0x8(%ebp),%eax
0867adb0 +0x454:  mov    %eax,(%esp)
0867adb3 +0x457:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0867adb8 +0x45c:  jmp    0867ae07 <+0x4ab>
0867adba +0x45e:  mov    0x8(%ebp),%eax
0867adbd +0x461:  mov    %eax,(%esp)
0867adc0 +0x464:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
0867adc5 +0x469:  mov    -0x2c(%ebp),%edx
0867adc8 +0x46c:  mov    %edx,0x4(%esp)
0867adcc +0x470:  mov    %eax,(%esp)
0867adcf +0x473:  call   08693d04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x559>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x559
0867add4 +0x478:  mov    0x8(%ebp),%eax
0867add7 +0x47b:  mov    %eax,(%esp)
0867adda +0x47e:  call   08696790 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2fe5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2fe5
0867addf +0x483:  mov    0x8(%ebp),%eax
0867ade2 +0x486:  mov    %eax,(%esp)
0867ade5 +0x489:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867adea +0x48e:  mov    0x8(%ebp),%edx
0867aded +0x491:  add    $0x79700,%edx
0867adf3 +0x497:  movl   $0x0,0x8(%esp)
0867adfb +0x49f:  mov    %eax,0x4(%esp)
0867adff +0x4a3:  mov    %edx,(%esp)
0867ae02 +0x4a6:  call   086845de <_ZN15cUserHistoryLog9LevelDownEi16eLevelDownReason>  ; cUserHistoryLog::LevelDown(int, eLevelDownReason)
0867ae07 +0x4ab:  mov    0x8(%ebp),%eax
0867ae0a +0x4ae:  lea    0x7121c(%eax),%edx
0867ae10 +0x4b4:  mov    0x8(%ebp),%eax
0867ae13 +0x4b7:  mov    %eax,0x4(%esp)
0867ae17 +0x4bb:  mov    %edx,(%esp)
0867ae1a +0x4be:  call   086ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>  ; WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
0867ae1f +0x4c3:  mov    0x8(%ebp),%eax
0867ae22 +0x4c6:  mov    %eax,(%esp)
0867ae25 +0x4c9:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ae2a +0x4ce:  mov    0xc(%ebp),%edx
0867ae2d +0x4d1:  cmp    %edx,%eax
0867ae2f +0x4d3:  setne  %al
0867ae32 +0x4d6:  test   %al,%al
0867ae34 +0x4d8:  jne    0867acaf <+0x353>
0867ae3a +0x4de:  mov    0xc(%ebp),%edx
0867ae3d +0x4e1:  mov    0x8(%ebp),%eax
0867ae40 +0x4e4:  mov    %edx,0x4(%esp)
0867ae44 +0x4e8:  mov    %eax,(%esp)
0867ae47 +0x4eb:  call   08696738 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2f8d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2f8d
0867ae4c +0x4f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867ae51 +0x4f5:  mov    %eax,(%esp)
0867ae54 +0x4f8:  call   0849f516 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x347>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x347
0867ae59 +0x4fd:  mov    %eax,-0x28(%ebp)
0867ae5c +0x500:  mov    0x8(%ebp),%eax
0867ae5f +0x503:  mov    %eax,(%esp)
0867ae62 +0x506:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0867ae67 +0x50b:  test   %eax,%eax
0867ae69 +0x50d:  je     0867ae88 <+0x52c>
0867ae6b +0x50f:  mov    0xc(%ebp),%eax
0867ae6e +0x512:  mov    %eax,0x4(%esp)
0867ae72 +0x516:  mov    -0x28(%ebp),%eax
0867ae75 +0x519:  mov    %eax,(%esp)
0867ae78 +0x51c:  call   0849f47c <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x2ad>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x2ad
0867ae7d +0x521:  test   %al,%al
0867ae7f +0x523:  je     0867ae88 <+0x52c>
0867ae81 +0x525:  mov    $0x1,%eax
0867ae86 +0x52a:  jmp    0867ae8d <+0x531>
0867ae88 +0x52c:  mov    $0x0,%eax
0867ae8d +0x531:  test   %al,%al
0867ae8f +0x533:  je     0867aeab <+0x54f>
0867ae91 +0x535:  mov    0x8(%ebp),%eax
0867ae94 +0x538:  mov    %eax,(%esp)
0867ae97 +0x53b:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0867ae9c +0x540:  mov    %eax,0x4(%esp)
0867aea0 +0x544:  mov    0x8(%ebp),%eax
0867aea3 +0x547:  mov    %eax,(%esp)
0867aea6 +0x54a:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
0867aeab +0x54f:  mov    0xc(%ebp),%eax
0867aeae +0x552:  mov    %eax,0x4(%esp)
0867aeb2 +0x556:  mov    0x8(%ebp),%eax
0867aeb5 +0x559:  mov    %eax,(%esp)
0867aeb8 +0x55c:  call   08679754 <_ZN5CUser23makeGuildLevelUpMessageEi>  ; CUser::makeGuildLevelUpMessage(int)
0867aebd +0x561:  mov    0xc(%ebp),%eax
0867aec0 +0x564:  cmp    $0x46,%eax
0867aec3 +0x567:  jne    0867aef0 <+0x594>
0867aec5 +0x569:  mov    0x8(%ebp),%eax
0867aec8 +0x56c:  mov    %eax,(%esp)
0867aecb +0x56f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867aed0 +0x574:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
0867aed6 +0x57a:  mov    %eax,0x4(%esp)
0867aeda +0x57e:  mov    %edx,(%esp)
0867aedd +0x581:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0867aee2 +0x586:  xor    $0x1,%eax
0867aee5 +0x589:  test   %al,%al
0867aee7 +0x58b:  je     0867aef0 <+0x594>
0867aee9 +0x58d:  mov    $0x1,%eax
0867aeee +0x592:  jmp    0867aef5 <+0x599>
0867aef0 +0x594:  mov    $0x0,%eax
0867aef5 +0x599:  test   %al,%al
0867aef7 +0x59b:  je     0867af66 <+0x60a>
0867aef9 +0x59d:  lea    -0x84(%ebp),%eax
0867aeff +0x5a3:  mov    %eax,(%esp)
0867af02 +0x5a6:  call   08694560 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xdb5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xdb5
0867af07 +0x5ab:  mov    0x8(%ebp),%eax
0867af0a +0x5ae:  mov    %eax,(%esp)
0867af0d +0x5b1:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0867af12 +0x5b6:  movl   $0x1e,0x8(%esp)
0867af1a +0x5be:  mov    %eax,0x4(%esp)
0867af1e +0x5c2:  lea    -0x84(%ebp),%eax
0867af24 +0x5c8:  add    $0xa,%eax
0867af27 +0x5cb:  mov    %eax,(%esp)
0867af2a +0x5ce:  call   0807d8d0 <_init+0x1c8>
0867af2f +0x5d3:  lea    -0x84(%ebp),%ebx
0867af35 +0x5d9:  mov    0x8(%ebp),%eax
0867af38 +0x5dc:  mov    %eax,(%esp)
0867af3b +0x5df:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0867af40 +0x5e4:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
0867af46 +0x5ea:  mov    %eax,0x4(%esp)
0867af4a +0x5ee:  mov    %edx,(%esp)
0867af4d +0x5f1:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0867af52 +0x5f6:  movl   $0x28,0x8(%esp)
0867af5a +0x5fe:  mov    %ebx,0x4(%esp)
0867af5e +0x602:  mov    %eax,(%esp)
0867af61 +0x605:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
0867af66 +0x60a:  mov    0x8(%ebp),%eax
0867af69 +0x60d:  mov    %eax,(%esp)
0867af6c +0x610:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867af71 +0x615:  mov    %eax,%ebx
0867af73 +0x617:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0867af78 +0x61c:  movl   $0x2aff,0x4(%esp)
0867af80 +0x624:  mov    %eax,(%esp)
0867af83 +0x627:  call   086c9076 <_ZN9GameWorld30getDungeonMinimumRequiredLevelEi>  ; GameWorld::getDungeonMinimumRequiredLevel(int)
0867af88 +0x62c:  cmp    %eax,%ebx
0867af8a +0x62e:  sete   %al
0867af8d +0x631:  test   %al,%al
0867af8f +0x633:  je     0867aff7 <+0x69b>
0867af91 +0x635:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867af96 +0x63a:  add    $0x68,%eax
0867af99 +0x63d:  movl   $0x2aff,0x4(%esp)
0867afa1 +0x645:  mov    %eax,(%esp)
0867afa4 +0x648:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
0867afa9 +0x64d:  test   %al,%al
0867afab +0x64f:  je     0867afd3 <+0x677>
0867afad +0x651:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0867afb2 +0x656:  movl   $0x1,0xc(%esp)
0867afba +0x65e:  movl   $0x2aff,0x8(%esp)
0867afc2 +0x666:  mov    0x8(%ebp),%edx
0867afc5 +0x669:  mov    %edx,0x4(%esp)
0867afc9 +0x66d:  mov    %eax,(%esp)
0867afcc +0x670:  call   086c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>  ; GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
0867afd1 +0x675:  jmp    0867aff7 <+0x69b>
0867afd3 +0x677:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0867afd8 +0x67c:  movl   $0x0,0xc(%esp)
0867afe0 +0x684:  movl   $0x2aff,0x8(%esp)
0867afe8 +0x68c:  mov    0x8(%ebp),%edx
0867afeb +0x68f:  mov    %edx,0x4(%esp)
0867afef +0x693:  mov    %eax,(%esp)
0867aff2 +0x696:  call   086c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>  ; GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
0867aff7 +0x69b:  mov    0x8(%ebp),%eax
0867affa +0x69e:  mov    %eax,(%esp)
0867affd +0x6a1:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867b002 +0x6a6:  cmp    $0x3b,%eax
0867b005 +0x6a9:  setg   %al
0867b008 +0x6ac:  test   %al,%al
0867b00a +0x6ae:  je     0867b027 <+0x6cb>
0867b00c +0x6b0:  movl   $0x1,0x8(%esp)
0867b014 +0x6b8:  movl   $0x1,0x4(%esp)
0867b01c +0x6c0:  mov    0x8(%ebp),%eax
0867b01f +0x6c3:  mov    %eax,(%esp)
0867b022 +0x6c6:  call   08656c12 <_ZN5CUser20DimensionInoutUpdateEbb>  ; CUser::DimensionInoutUpdate(bool, bool)
0867b027 +0x6cb:  mov    0x8(%ebp),%eax
0867b02a +0x6ce:  add    $0x796f4,%eax
0867b02f +0x6d3:  mov    %eax,(%esp)
0867b032 +0x6d6:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0867b037 +0x6db:  mov    $0x1,%eax
0867b03c +0x6e0:  add    $0x9c,%esp
0867b042 +0x6e6:  pop    %ebx
0867b043 +0x6e7:  pop    %esi
0867b044 +0x6e8:  pop    %edi
0867b045 +0x6e9:  pop    %ebp
0867b046 +0x6ea:  ret
0867b047 +0x6eb:  nop
```

## 反编译 C

```c
// CUser::SetCharacLevel @ 0x867a95c

/* CUser::SetCharacLevel(int) */

undefined4 __thiscall CUser::SetCharacLevel(CUser *this,int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  CDataManager *pCVar7;
  int iVar8;
  SkillSlot *pSVar9;
  _Additioal_info *p_Var10;
  CInventory *pCVar11;
  uint uVar12;
  char *__src;
  undefined4 uVar13;
  CMonitorServerProxy *this_00;
  GameWorld *pGVar14;
  Packet_Monitor_Max_Level_BroadCast local_88 [10];
  char acStack_7e [30];
  int local_60 [3];
  int local_54 [3];
  int local_48 [4];
  int local_38;
  int local_34;
  _Additioal_info *local_30;
  STExpertJobEtcScript *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar4 == 0) {
    return 0;
  }
  local_60[0] = 200;
  piVar5 = std::min<int>(local_60,&param_1);
  local_60[1] = 1;
  piVar5 = std::max<int>(local_60 + 1,piVar5);
  param_1 = *piVar5;
  local_48[2] = 0;
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  iVar4 = param_1;
  if (iVar6 < param_1) {
    pCVar7 = (CDataManager *)G_CDataManager();
    local_48[2] = CDataManager::GetSpAtLevelUp(pCVar7,iVar4);
  }
  else {
    iVar4 = param_1 + 1;
    pCVar7 = (CDataManager *)G_CDataManager();
    local_48[2] = CDataManager::GetSpAtLevelUp(pCVar7,iVar4);
  }
  iVar4 = param_1;
  iVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  iVar6 = param_1;
  local_48[3] = (iVar4 - iVar8) * local_48[2];
  pCVar7 = (CDataManager *)G_CDataManager();
  iVar4 = CDataManager::get_level_exp(pCVar7,iVar6);
  CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)this,iVar4);
  pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  local_60[2] = SkillSlot::get_remain_sp_at_index(pSVar9,0);
  local_60[2] = local_60[2] + local_48[3];
  local_54[0] = 0x3fffffff;
  piVar5 = std::min<int>(local_54,local_60 + 2);
  local_54[1] = 0;
  piVar5 = std::max<int>(local_54 + 1,piVar5);
  local_38 = *piVar5;
  pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
  SkillSlot::set_remain_sp_at_index(pSVar9,local_38,0);
  pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  local_54[2] = SkillSlot::get_remain_sp_at_index(pSVar9,1);
  local_54[2] = local_54[2] + local_48[3];
  local_48[0] = 0x3fffffff;
  piVar5 = std::min<int>(local_48,local_54 + 2);
  local_48[1] = 0;
  piVar5 = std::max<int>(local_48 + 1,piVar5);
  local_34 = *piVar5;
  pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
  SkillSlot::set_remain_sp_at_index(pSVar9,local_34,1);
  if (param_1 < 0x32) {
    pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sfp_at_index(pSVar9,0,2);
    pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sfp_at_index(pSVar9,0,3);
  }
  else {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar4 < 0x33) {
      local_28 = param_1 + -0x31;
      local_24 = local_28;
    }
    else {
      pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      local_28 = SkillSlot::get_remain_sfp_at_index(pSVar9,2);
      iVar4 = param_1;
      iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      local_28 = local_28 + (iVar4 - iVar6);
      pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      local_24 = SkillSlot::get_remain_sfp_at_index(pSVar9,3);
      iVar4 = param_1;
      iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      local_24 = local_24 + (iVar4 - iVar6);
    }
    pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sfp_at_index(pSVar9,local_28,2);
    pSVar9 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sfp_at_index(pSVar9,local_24,3);
  }
  cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
  cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar4 = G_CDataManager();
  iVar4 = *(int *)(iVar4 + 0x14);
  iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  local_30 = (_Additioal_info *)
             CCharacter::get_growtype_stat
                       ((CCharacter *)(iVar4 + iVar6 * 0x7dc),(int)cVar3,(int)cVar2);
  while (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this), iVar4 != param_1) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar4 < param_1) {
      p_Var10 = (_Additioal_info *)CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this)
      ;
      _Additioal_info::add(p_Var10,local_30);
      CUserCharacInfo::incCurCharacLevel((CUserCharacInfo *)this);
      uVar13 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      cUserHistoryLog::LevelUp((cUserHistoryLog *)(this + 0x79700),uVar13,1);
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      local_20 = WongWork::CUserPremium::GetGoldBonus((CUserPremium *)(this + 0x7121c),iVar4);
      if (local_20 != 0) {
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        uVar13 = WongWork::CUserPremium::GetGoldBonus((CUserPremium *)(this + 0x7121c),iVar4);
        pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        CInventory::gain_money(pCVar11,uVar13,0xd,1,0);
        SendUpdateItemList(this,1,0,0);
      }
    }
    else {
      p_Var10 = (_Additioal_info *)CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this)
      ;
      _Additioal_info::subtract(p_Var10,local_30);
      CUserCharacInfo::decCurCharacLevel((CUserCharacInfo *)this);
      uVar13 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      cUserHistoryLog::LevelDown((cUserHistoryLog *)(this + 0x79700),uVar13,0);
    }
    WongWork::CUserPremium::RecalcAdditionalInfo((CUserPremium *)(this + 0x7121c),this);
  }
  CUserCharacInfo::setCurCharacLevel((CUserCharacInfo *)this,param_1);
  pCVar7 = (CDataManager *)G_CDataManager();
  local_2c = (STExpertJobEtcScript *)CDataManager::GetExpertJobEtcScript(pCVar7);
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
  if ((iVar4 == 0) ||
     (cVar2 = STExpertJobEtcScript::isExpertJobLimitLevel(local_2c,param_1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
    expert_job::CExpertJob::IncreaseExpertJobExp(this,iVar4);
  }
  makeGuildLevelUpMessage(this,param_1);
  if (param_1 == 0x46) {
    uVar12 = get_acc_id(this);
    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar12);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0867aef5;
    }
  }
  bVar1 = false;
LAB_0867aef5:
  if (bVar1) {
    Packet_Monitor_Max_Level_BroadCast::Packet_Monitor_Max_Level_BroadCast(local_88);
    __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    strncpy(acStack_7e,__src,0x1e);
    uVar13 = GetServerGroup(this);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar13);
    CMonitorServerProxy::SendPacket(this_00,(char *)local_88,0x28);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  iVar6 = G_GameWorld();
  iVar6 = GameWorld::getDungeonMinimumRequiredLevel(iVar6);
  if (iVar4 == iVar6) {
    iVar4 = G_CDataManager();
    cVar2 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
    if (cVar2 == '\0') {
      pGVar14 = (GameWorld *)G_GameWorld();
      GameWorld::send_user_dungeon_inout_message(pGVar14,this,0x2aff,false);
    }
    else {
      pGVar14 = (GameWorld *)G_GameWorld();
      GameWorld::send_user_dungeon_inout_message(pGVar14,this,0x2aff,true);
    }
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (0x3b < iVar4) {
    DimensionInoutUpdate(this,true,true);
  }
  CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  return 1;
}
```
