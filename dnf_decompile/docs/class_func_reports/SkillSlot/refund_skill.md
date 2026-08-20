# refund_skill

`_ZN9SkillSlot12refund_skillEiiiiiiRi`

`SkillSlot::refund_skill(int, int, int, int, int, int, int&)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086069ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086069ba  _ZN9SkillSlot12refund_skillEiiiiiiRi
#           SkillSlot::refund_skill(int, int, int, int, int, int, int&)
# range [0x086069ba, 0x08607149]
086069ba +0x000:  push   %ebp
086069bb +0x001:  mov    %esp,%ebp
086069bd +0x003:  push   %esi
086069be +0x004:  push   %ebx
086069bf +0x005:  sub    $0xa0,%esp
086069c5 +0x00b:  mov    0x24(%ebp),%eax
086069c8 +0x00e:  movl   $0x13,(%eax)
086069ce +0x014:  mov    0x8(%ebp),%eax
086069d1 +0x017:  mov    (%eax),%eax
086069d3 +0x019:  test   %eax,%eax
086069d5 +0x01b:  jne    086069e1 <+0x27>
086069d7 +0x01d:  mov    $0xfffffffc,%ebx
086069dc +0x022:  jmp    0860713e <+0x784>
086069e1 +0x027:  movl   $0x0,-0x50(%ebp)
086069e8 +0x02e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086069ed +0x033:  mov    0xc(%ebp),%edx
086069f0 +0x036:  mov    %edx,0x8(%esp)
086069f4 +0x03a:  mov    0x14(%ebp),%edx
086069f7 +0x03d:  mov    %edx,0x4(%esp)
086069fb +0x041:  mov    %eax,(%esp)
086069fe +0x044:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08606a03 +0x049:  mov    %eax,-0x50(%ebp)
08606a06 +0x04c:  cmpl   $0x0,-0x50(%ebp)
08606a0a +0x050:  jne    08606a16 <+0x5c>
08606a0c +0x052:  mov    $0xffffffff,%ebx
08606a11 +0x057:  jmp    0860713e <+0x784>
08606a16 +0x05c:  mov    -0x50(%ebp),%eax
08606a19 +0x05f:  mov    %eax,(%esp)
08606a1c +0x062:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08606a21 +0x067:  mov    %eax,-0x4c(%ebp)
08606a24 +0x06a:  cmpl   $0x4,-0x4c(%ebp)
08606a28 +0x06e:  jne    08606a3d <+0x83>
08606a2a +0x070:  mov    0x24(%ebp),%eax
08606a2d +0x073:  movl   $0x7,(%eax)
08606a33 +0x079:  mov    $0xfffffffb,%ebx
08606a38 +0x07e:  jmp    0860713e <+0x784>
08606a3d +0x083:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08606a42 +0x088:  mov    %eax,(%esp)
08606a45 +0x08b:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08606a4a +0x090:  test   %al,%al
08606a4c +0x092:  je     08606a78 <+0xbe>
08606a4e +0x094:  mov    0x8(%ebp),%eax
08606a51 +0x097:  mov    (%eax),%eax
08606a53 +0x099:  mov    %eax,(%esp)
08606a56 +0x09c:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08606a5b +0x0a1:  cmp    $0x0,%eax
08606a5e +0x0a4:  setge  %al
08606a61 +0x0a7:  test   %al,%al
08606a63 +0x0a9:  jne    08606a78 <+0xbe>
08606a65 +0x0ab:  mov    0x24(%ebp),%eax
08606a68 +0x0ae:  movl   $0x7,(%eax)
08606a6e +0x0b4:  mov    $0xfffffffd,%ebx
08606a73 +0x0b9:  jmp    0860713e <+0x784>
08606a78 +0x0be:  mov    0x8(%ebp),%eax
08606a7b +0x0c1:  mov    (%eax),%eax
08606a7d +0x0c3:  mov    %eax,(%esp)
08606a80 +0x0c6:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606a85 +0x0cb:  movl   $0x1,0x10(%esp)
08606a8d +0x0d3:  mov    %eax,0xc(%esp)
08606a91 +0x0d7:  mov    -0x4c(%ebp),%eax
08606a94 +0x0da:  mov    %eax,0x8(%esp)
08606a98 +0x0de:  mov    0xc(%ebp),%eax
08606a9b +0x0e1:  mov    %eax,0x4(%esp)
08606a9f +0x0e5:  mov    0x8(%ebp),%eax
08606aa2 +0x0e8:  mov    %eax,(%esp)
08606aa5 +0x0eb:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
08606aaa +0x0f0:  mov    %eax,-0x48(%ebp)
08606aad +0x0f3:  cmpl   $0xffffffff,-0x48(%ebp)
08606ab1 +0x0f7:  jne    08606abd <+0x103>
08606ab3 +0x0f9:  mov    $0xffffffff,%ebx
08606ab8 +0x0fe:  jmp    0860713e <+0x784>
08606abd +0x103:  mov    0x8(%ebp),%eax
08606ac0 +0x106:  mov    (%eax),%eax
08606ac2 +0x108:  mov    %eax,(%esp)
08606ac5 +0x10b:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606aca +0x110:  mov    %eax,0x4(%esp)
08606ace +0x114:  mov    0x8(%ebp),%eax
08606ad1 +0x117:  mov    %eax,(%esp)
08606ad4 +0x11a:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08606ad9 +0x11f:  mov    %eax,-0x44(%ebp)
08606adc +0x122:  cmpl   $0x0,-0x44(%ebp)
08606ae0 +0x126:  jne    08606aec <+0x132>
08606ae2 +0x128:  mov    $0xfffffffc,%ebx
08606ae7 +0x12d:  jmp    0860713e <+0x784>
08606aec +0x132:  mov    -0x48(%ebp),%eax
08606aef +0x135:  add    %eax,%eax
08606af1 +0x137:  add    -0x44(%ebp),%eax
08606af4 +0x13a:  movzbl 0x1(%eax),%eax
08606af8 +0x13e:  movsbl %al,%eax
08606afb +0x141:  sub    0x20(%ebp),%eax
08606afe +0x144:  mov    %eax,-0x40(%ebp)
08606b01 +0x147:  cmpl   $0x0,-0x40(%ebp)
08606b05 +0x14b:  jns    08606b11 <+0x157>
08606b07 +0x14d:  mov    $0xffffffff,%ebx
08606b0c +0x152:  jmp    0860713e <+0x784>
08606b11 +0x157:  mov    0x8(%ebp),%eax
08606b14 +0x15a:  mov    (%eax),%eax
08606b16 +0x15c:  mov    %eax,(%esp)
08606b19 +0x15f:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08606b1e +0x164:  mov    %eax,%ebx
08606b20 +0x166:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08606b25 +0x16b:  mov    %ebx,0x4(%esp)
08606b29 +0x16f:  mov    %eax,(%esp)
08606b2c +0x172:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08606b31 +0x177:  mov    %eax,-0x3c(%ebp)
08606b34 +0x17a:  cmpl   $0x0,-0x3c(%ebp)
08606b38 +0x17e:  je     08606b93 <+0x1d9>
08606b3a +0x180:  movl   $0x0,-0x2c(%ebp)
08606b41 +0x187:  jmp    08606b7b <+0x1c1>
08606b43 +0x189:  mov    -0x3c(%ebp),%eax
08606b46 +0x18c:  lea    0xc(%eax),%edx
08606b49 +0x18f:  mov    -0x2c(%ebp),%eax
08606b4c +0x192:  mov    %eax,0x4(%esp)
08606b50 +0x196:  mov    %edx,(%esp)
08606b53 +0x199:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08606b58 +0x19e:  mov    (%eax),%eax
08606b5a +0x1a0:  cmp    0xc(%ebp),%eax
08606b5d +0x1a3:  sete   %al
08606b60 +0x1a6:  test   %al,%al
08606b62 +0x1a8:  je     08606b77 <+0x1bd>
08606b64 +0x1aa:  mov    0x24(%ebp),%eax
08606b67 +0x1ad:  movl   $0x7,(%eax)
08606b6d +0x1b3:  mov    $0xfffffffb,%ebx
08606b72 +0x1b8:  jmp    0860713e <+0x784>
08606b77 +0x1bd:  addl   $0x1,-0x2c(%ebp)
08606b7b +0x1c1:  mov    -0x3c(%ebp),%eax
08606b7e +0x1c4:  add    $0xc,%eax
08606b81 +0x1c7:  mov    %eax,(%esp)
08606b84 +0x1ca:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08606b89 +0x1cf:  cmp    -0x2c(%ebp),%eax
08606b8c +0x1d2:  seta   %al
08606b8f +0x1d5:  test   %al,%al
08606b91 +0x1d7:  jne    08606b43 <+0x189>
08606b93 +0x1d9:  lea    -0x58(%ebp),%eax
08606b96 +0x1dc:  mov    %eax,(%esp)
08606b99 +0x1df:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08606b9e +0x1e4:  lea    -0x64(%ebp),%eax
08606ba1 +0x1e7:  mov    %eax,(%esp)
08606ba4 +0x1ea:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08606ba9 +0x1ef:  lea    -0x64(%ebp),%eax
08606bac +0x1f2:  mov    %eax,0x10(%esp)
08606bb0 +0x1f6:  mov    0x1c(%ebp),%eax
08606bb3 +0x1f9:  mov    %eax,0xc(%esp)
08606bb7 +0x1fd:  mov    0x18(%ebp),%eax
08606bba +0x200:  mov    %eax,0x8(%esp)
08606bbe +0x204:  mov    0x14(%ebp),%eax
08606bc1 +0x207:  mov    %eax,0x4(%esp)
08606bc5 +0x20b:  mov    0x8(%ebp),%eax
08606bc8 +0x20e:  mov    %eax,(%esp)
08606bcb +0x211:  call   0860714a <_ZN9SkillSlot14get_give_skillEiiiRSt6vectorISt4pairIiiESaIS2_EE>  ; SkillSlot::get_give_skill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08606bd0 +0x216:  shr    $0x1f,%eax
08606bd3 +0x219:  test   %al,%al
08606bd5 +0x21b:  je     08606be1 <+0x227>
08606bd7 +0x21d:  mov    $0xffffffff,%ebx
08606bdc +0x222:  jmp    08607133 <+0x779>
08606be1 +0x227:  movl   $0x0,-0x28(%ebp)
08606be8 +0x22e:  jmp    08606c45 <+0x28b>
08606bea +0x230:  mov    -0x28(%ebp),%eax
08606bed +0x233:  mov    %eax,0x4(%esp)
08606bf1 +0x237:  lea    -0x64(%ebp),%eax
08606bf4 +0x23a:  mov    %eax,(%esp)
08606bf7 +0x23d:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08606bfc +0x242:  mov    0x4(%eax),%edx
08606bff +0x245:  mov    (%eax),%eax
08606c01 +0x247:  mov    %eax,-0x58(%ebp)
08606c04 +0x24a:  mov    %edx,-0x54(%ebp)
08606c07 +0x24d:  mov    -0x58(%ebp),%eax
08606c0a +0x250:  mov    %eax,-0x38(%ebp)
08606c0d +0x253:  mov    -0x54(%ebp),%eax
08606c10 +0x256:  mov    %eax,-0x34(%ebp)
08606c13 +0x259:  mov    -0x48(%ebp),%eax
08606c16 +0x25c:  add    %eax,%eax
08606c18 +0x25e:  add    -0x44(%ebp),%eax
08606c1b +0x261:  movzbl (%eax),%eax
08606c1e +0x264:  movzbl %al,%eax
08606c21 +0x267:  cmp    -0x38(%ebp),%eax
08606c24 +0x26a:  jne    08606c41 <+0x287>
08606c26 +0x26c:  mov    -0x40(%ebp),%eax
08606c29 +0x26f:  cmp    -0x34(%ebp),%eax
08606c2c +0x272:  jge    08606c5c <+0x2a2>
08606c2e +0x274:  mov    0x24(%ebp),%eax
08606c31 +0x277:  movl   $0x7,(%eax)
08606c37 +0x27d:  mov    $0xffffffff,%ebx
08606c3c +0x282:  jmp    08607133 <+0x779>
08606c41 +0x287:  addl   $0x1,-0x28(%ebp)
08606c45 +0x28b:  lea    -0x64(%ebp),%eax
08606c48 +0x28e:  mov    %eax,(%esp)
08606c4b +0x291:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08606c50 +0x296:  cmp    -0x28(%ebp),%eax
08606c53 +0x299:  setg   %al
08606c56 +0x29c:  test   %al,%al
08606c58 +0x29e:  jne    08606bea <+0x230>
08606c5a +0x2a0:  jmp    08606c5d <+0x2a3>
08606c5c +0x2a2:  nop
08606c5d +0x2a3:  lea    -0x70(%ebp),%eax
08606c60 +0x2a6:  mov    %eax,(%esp)
08606c63 +0x2a9:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08606c68 +0x2ae:  mov    0x8(%ebp),%eax
08606c6b +0x2b1:  mov    (%eax),%eax
08606c6d +0x2b3:  mov    %eax,(%esp)
08606c70 +0x2b6:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08606c75 +0x2bb:  mov    %eax,%ebx
08606c77 +0x2bd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08606c7c +0x2c2:  mov    0x10(%eax),%eax
08606c7f +0x2c5:  lea    -0x70(%ebp),%edx
08606c82 +0x2c8:  mov    %edx,0xc(%esp)
08606c86 +0x2cc:  mov    0xc(%ebp),%edx
08606c89 +0x2cf:  mov    %edx,0x8(%esp)
08606c8d +0x2d3:  mov    %ebx,0x4(%esp)
08606c91 +0x2d7:  mov    %eax,(%esp)
08606c94 +0x2da:  call   08352028 <_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE>  ; CSkillList::get_post_learning_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
08606c99 +0x2df:  movl   $0x0,-0x24(%ebp)
08606ca0 +0x2e6:  jmp    08606d21 <+0x367>
08606ca2 +0x2e8:  mov    -0x24(%ebp),%eax
08606ca5 +0x2eb:  mov    %eax,0x4(%esp)
08606ca9 +0x2ef:  lea    -0x70(%ebp),%eax
08606cac +0x2f2:  mov    %eax,(%esp)
08606caf +0x2f5:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08606cb4 +0x2fa:  mov    (%eax),%eax
08606cb6 +0x2fc:  mov    %eax,-0x20(%ebp)
08606cb9 +0x2ff:  mov    -0x24(%ebp),%eax
08606cbc +0x302:  mov    %eax,0x4(%esp)
08606cc0 +0x306:  lea    -0x70(%ebp),%eax
08606cc3 +0x309:  mov    %eax,(%esp)
08606cc6 +0x30c:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08606ccb +0x311:  mov    0x4(%eax),%eax
08606cce +0x314:  mov    %eax,-0x1c(%ebp)
08606cd1 +0x317:  movl   $0x0,-0x18(%ebp)
08606cd8 +0x31e:  jmp    08606d0c <+0x352>
08606cda +0x320:  mov    -0x18(%ebp),%eax
08606cdd +0x323:  add    %eax,%eax
08606cdf +0x325:  add    -0x44(%ebp),%eax
08606ce2 +0x328:  movzbl (%eax),%eax
08606ce5 +0x32b:  movzbl %al,%eax
08606ce8 +0x32e:  cmp    -0x20(%ebp),%eax
08606ceb +0x331:  jne    08606d08 <+0x34e>
08606ced +0x333:  mov    -0x40(%ebp),%eax
08606cf0 +0x336:  cmp    -0x1c(%ebp),%eax
08606cf3 +0x339:  jge    08606d1c <+0x362>
08606cf5 +0x33b:  mov    0x24(%ebp),%eax
08606cf8 +0x33e:  movl   $0x14,(%eax)
08606cfe +0x344:  mov    $0xffffffff,%ebx
08606d03 +0x349:  jmp    0860710b <+0x751>
08606d08 +0x34e:  addl   $0x1,-0x18(%ebp)
08606d0c +0x352:  cmpl   $0xcb,-0x18(%ebp)
08606d13 +0x359:  setle  %al
08606d16 +0x35c:  test   %al,%al
08606d18 +0x35e:  jne    08606cda <+0x320>
08606d1a +0x360:  jmp    08606d1d <+0x363>
08606d1c +0x362:  nop
08606d1d +0x363:  addl   $0x1,-0x24(%ebp)
08606d21 +0x367:  lea    -0x70(%ebp),%eax
08606d24 +0x36a:  mov    %eax,(%esp)
08606d27 +0x36d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08606d2c +0x372:  cmp    -0x24(%ebp),%eax
08606d2f +0x375:  setg   %al
08606d32 +0x378:  test   %al,%al
08606d34 +0x37a:  jne    08606ca2 <+0x2e8>
08606d3a +0x380:  mov    -0x48(%ebp),%eax
08606d3d +0x383:  add    %eax,%eax
08606d3f +0x385:  add    -0x44(%ebp),%eax
08606d42 +0x388:  movzbl 0x1(%eax),%eax
08606d46 +0x38c:  movsbl %al,%eax
08606d49 +0x38f:  mov    %eax,0x8(%esp)
08606d4d +0x393:  mov    -0x40(%ebp),%eax
08606d50 +0x396:  mov    %eax,0x4(%esp)
08606d54 +0x39a:  mov    -0x50(%ebp),%eax
08606d57 +0x39d:  mov    %eax,(%esp)
08606d5a +0x3a0:  call   0835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>  ; CSkill::get_need_sp_sfp_for_level(int, int) const
08606d5f +0x3a5:  mov    %eax,-0x30(%ebp)
08606d62 +0x3a8:  mov    0x1c(%ebp),%eax
08606d65 +0x3ab:  mov    %eax,0x8(%esp)
08606d69 +0x3af:  mov    0x18(%ebp),%eax
08606d6c +0x3b2:  mov    %eax,0x4(%esp)
08606d70 +0x3b6:  mov    -0x50(%ebp),%eax
08606d73 +0x3b9:  mov    %eax,(%esp)
08606d76 +0x3bc:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
08606d7b +0x3c1:  test   %al,%al
08606d7d +0x3c3:  je     08606d9c <+0x3e2>
08606d7f +0x3c5:  mov    -0x50(%ebp),%eax
08606d82 +0x3c8:  mov    %eax,(%esp)
08606d85 +0x3cb:  call   08609358 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x2b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x2b
08606d8a +0x3d0:  mov    %eax,0x4(%esp)
08606d8e +0x3d4:  mov    -0x30(%ebp),%eax
08606d91 +0x3d7:  mov    %eax,(%esp)
08606d94 +0x3da:  call   08a9afa2 <_Z22getSkillSpendSPOnStealii>  ; getSkillSpendSPOnSteal(int, int)
08606d99 +0x3df:  mov    %eax,-0x30(%ebp)
08606d9c +0x3e2:  mov    -0x48(%ebp),%eax
08606d9f +0x3e5:  add    %eax,%eax
08606da1 +0x3e7:  add    -0x44(%ebp),%eax
08606da4 +0x3ea:  mov    -0x48(%ebp),%edx
08606da7 +0x3ed:  add    %edx,%edx
08606da9 +0x3ef:  add    -0x44(%ebp),%edx
08606dac +0x3f2:  movzbl 0x1(%edx),%edx
08606db0 +0x3f6:  mov    %edx,%ecx
08606db2 +0x3f8:  mov    0x20(%ebp),%edx
08606db5 +0x3fb:  mov    %ecx,%ebx
08606db7 +0x3fd:  sub    %dl,%bl
08606db9 +0x3ff:  mov    %ebx,%edx
08606dbb +0x401:  mov    %dl,0x1(%eax)
08606dbe +0x404:  mov    -0x48(%ebp),%eax
08606dc1 +0x407:  add    %eax,%eax
08606dc3 +0x409:  add    -0x44(%ebp),%eax
08606dc6 +0x40c:  movzbl 0x1(%eax),%eax
08606dca +0x410:  test   %al,%al
08606dcc +0x412:  jne    08606dd9 <+0x41f>
08606dce +0x414:  mov    -0x48(%ebp),%eax
08606dd1 +0x417:  add    %eax,%eax
08606dd3 +0x419:  add    -0x44(%ebp),%eax
08606dd6 +0x41c:  movb   $0x0,(%eax)
08606dd9 +0x41f:  mov    -0x50(%ebp),%eax
08606ddc +0x422:  mov    %eax,(%esp)
08606ddf +0x425:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
08606de4 +0x42a:  xor    $0x1,%eax
08606de7 +0x42d:  test   %al,%al
08606de9 +0x42f:  je     08606f5e <+0x5a4>
08606def +0x435:  mov    0x8(%ebp),%eax
08606df2 +0x438:  mov    (%eax),%eax
08606df4 +0x43a:  mov    %eax,(%esp)
08606df7 +0x43d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606dfc +0x442:  mov    %eax,0x4(%esp)
08606e00 +0x446:  mov    0x8(%ebp),%eax
08606e03 +0x449:  mov    %eax,(%esp)
08606e06 +0x44c:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
08606e0b +0x451:  mov    %eax,-0x14(%ebp)
08606e0e +0x454:  mov    0x8(%ebp),%eax
08606e11 +0x457:  mov    (%eax),%eax
08606e13 +0x459:  mov    %eax,(%esp)
08606e16 +0x45c:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606e1b +0x461:  mov    -0x30(%ebp),%edx
08606e1e +0x464:  mov    -0x14(%ebp),%ecx
08606e21 +0x467:  lea    (%ecx,%edx,1),%edx
08606e24 +0x46a:  mov    %eax,0x8(%esp)
08606e28 +0x46e:  mov    %edx,0x4(%esp)
08606e2c +0x472:  mov    0x8(%ebp),%eax
08606e2f +0x475:  mov    %eax,(%esp)
08606e32 +0x478:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
08606e37 +0x47d:  mov    0x8(%ebp),%eax
08606e3a +0x480:  mov    (%eax),%eax
08606e3c +0x482:  mov    %eax,(%esp)
08606e3f +0x485:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606e44 +0x48a:  mov    %eax,%ebx
08606e46 +0x48c:  mov    0x8(%ebp),%eax
08606e49 +0x48f:  mov    (%eax),%eax
08606e4b +0x491:  mov    %eax,(%esp)
08606e4e +0x494:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08606e53 +0x499:  mov    0x8(%ebp),%edx
08606e56 +0x49c:  mov    (%edx),%edx
08606e58 +0x49e:  lea    0x79700(%edx),%ecx
08606e5e +0x4a4:  movl   $0x1,0x14(%esp)
08606e66 +0x4ac:  mov    0x20(%ebp),%edx
08606e69 +0x4af:  mov    %edx,0x10(%esp)
08606e6d +0x4b3:  mov    0xc(%ebp),%edx
08606e70 +0x4b6:  mov    %edx,0xc(%esp)
08606e74 +0x4ba:  mov    %ebx,0x8(%esp)
08606e78 +0x4be:  mov    %eax,0x4(%esp)
08606e7c +0x4c2:  mov    %ecx,(%esp)
08606e7f +0x4c5:  call   08682b6e <_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason>  ; cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason)
08606e84 +0x4ca:  mov    -0x30(%ebp),%eax
08606e87 +0x4cd:  mov    -0x14(%ebp),%edx
08606e8a +0x4d0:  lea    (%edx,%eax,1),%ebx
08606e8d +0x4d3:  mov    0x8(%ebp),%eax
08606e90 +0x4d6:  mov    (%eax),%eax
08606e92 +0x4d8:  mov    %eax,(%esp)
08606e95 +0x4db:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606e9a +0x4e0:  mov    0x8(%ebp),%edx
08606e9d +0x4e3:  mov    (%edx),%edx
08606e9f +0x4e5:  lea    0x79700(%edx),%ecx
08606ea5 +0x4eb:  movl   $0x2,0x10(%esp)
08606ead +0x4f3:  mov    -0x30(%ebp),%edx
08606eb0 +0x4f6:  mov    %edx,0xc(%esp)
08606eb4 +0x4fa:  mov    %ebx,0x8(%esp)
08606eb8 +0x4fe:  mov    %eax,0x4(%esp)
08606ebc +0x502:  mov    %ecx,(%esp)
08606ebf +0x505:  call   08682bae <_ZN15cUserHistoryLog5SPAddEiii12eSPAddReason>  ; cUserHistoryLog::SPAdd(int, int, int, eSPAddReason)
08606ec4 +0x50a:  cmpl   $0x0,0x20(%ebp)
08606ec8 +0x50e:  jle    086070e8 <+0x72e>
08606ece +0x514:  mov    -0x30(%ebp),%eax
08606ed1 +0x517:  mov    %eax,%edx
08606ed3 +0x519:  sar    $0x1f,%edx
08606ed6 +0x51c:  idivl  0x20(%ebp)
08606ed9 +0x51f:  cmp    $0x3e8,%eax
08606ede +0x524:  jle    086070e8 <+0x72e>
08606ee4 +0x52a:  mov    0x8(%ebp),%eax
08606ee7 +0x52d:  mov    (%eax),%eax
08606ee9 +0x52f:  mov    %eax,(%esp)
08606eec +0x532:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08606ef1 +0x537:  mov    %eax,%ebx
08606ef3 +0x539:  mov    0x8(%ebp),%eax
08606ef6 +0x53c:  mov    (%eax),%eax
08606ef8 +0x53e:  mov    %eax,(%esp)
08606efb +0x541:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08606f00 +0x546:  movl   $0x0,0x4(%esp)
08606f08 +0x54e:  mov    %eax,(%esp)
08606f0b +0x551:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08606f10 +0x556:  mov    0x20(%ebp),%edx
08606f13 +0x559:  mov    %edx,0x24(%esp)
08606f17 +0x55d:  mov    -0x30(%ebp),%edx
08606f1a +0x560:  mov    %edx,0x20(%esp)
08606f1e +0x564:  mov    0xc(%ebp),%edx
08606f21 +0x567:  mov    %edx,0x1c(%esp)
08606f25 +0x56b:  mov    %ebx,0x18(%esp)
08606f29 +0x56f:  mov    %eax,0x14(%esp)
08606f2d +0x573:  movl   $"Wrong refund SP skill mId:%s char_no:%d rSkillIdx:%d rSp:%d rCount:%d",0x10(%esp)
08606f35 +0x57b:  movl   $0x921,0xc(%esp)
08606f3d +0x583:  movl   $&_ZZN9SkillSlot12refund_skillEiiiiiiRiE19__PRETTY_FUNCTION__,0x8(%esp)
08606f45 +0x58b:  movl   $"skill_slot.cpp",0x4(%esp)
08606f4d +0x593:  movl   $0x1,(%esp)
08606f54 +0x59a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08606f59 +0x59f:  jmp    086070e8 <+0x72e>
08606f5e +0x5a4:  movb   $0x0,-0xd(%ebp)
08606f62 +0x5a8:  mov    0x8(%ebp),%eax
08606f65 +0x5ab:  mov    (%eax),%eax
08606f67 +0x5ad:  mov    %eax,(%esp)
08606f6a +0x5b0:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606f6f +0x5b5:  cmp    $0xffffffff,%eax
08606f72 +0x5b8:  je     08606f85 <+0x5cb>
08606f74 +0x5ba:  mov    0x8(%ebp),%eax
08606f77 +0x5bd:  mov    (%eax),%eax
08606f79 +0x5bf:  mov    %eax,(%esp)
08606f7c +0x5c2:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606f81 +0x5c7:  test   %eax,%eax
08606f83 +0x5c9:  jne    08606f8c <+0x5d2>
08606f85 +0x5cb:  mov    $0x1,%eax
08606f8a +0x5d0:  jmp    08606f91 <+0x5d7>
08606f8c +0x5d2:  mov    $0x0,%eax
08606f91 +0x5d7:  test   %al,%al
08606f93 +0x5d9:  je     08606f9b <+0x5e1>
08606f95 +0x5db:  movb   $0x2,-0xd(%ebp)
08606f99 +0x5df:  jmp    08606f9f <+0x5e5>
08606f9b +0x5e1:  movb   $0x3,-0xd(%ebp)
08606f9f +0x5e5:  movsbl -0xd(%ebp),%eax
08606fa3 +0x5e9:  mov    %eax,0x4(%esp)
08606fa7 +0x5ed:  mov    0x8(%ebp),%eax
08606faa +0x5f0:  mov    %eax,(%esp)
08606fad +0x5f3:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
08606fb2 +0x5f8:  mov    %eax,-0xc(%ebp)
08606fb5 +0x5fb:  movsbl -0xd(%ebp),%eax
08606fb9 +0x5ff:  mov    -0x30(%ebp),%edx
08606fbc +0x602:  mov    -0xc(%ebp),%ecx
08606fbf +0x605:  lea    (%ecx,%edx,1),%edx
08606fc2 +0x608:  mov    %eax,0x8(%esp)
08606fc6 +0x60c:  mov    %edx,0x4(%esp)
08606fca +0x610:  mov    0x8(%ebp),%eax
08606fcd +0x613:  mov    %eax,(%esp)
08606fd0 +0x616:  call   08603590 <_ZN9SkillSlot23set_remain_sfp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sfp_at_index(int, ENUM_SKILL_TREE_KIND)
08606fd5 +0x61b:  mov    0x8(%ebp),%eax
08606fd8 +0x61e:  mov    (%eax),%eax
08606fda +0x620:  mov    %eax,(%esp)
08606fdd +0x623:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08606fe2 +0x628:  mov    %eax,%ebx
08606fe4 +0x62a:  mov    0x8(%ebp),%eax
08606fe7 +0x62d:  mov    (%eax),%eax
08606fe9 +0x62f:  mov    %eax,(%esp)
08606fec +0x632:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08606ff1 +0x637:  mov    0x8(%ebp),%edx
08606ff4 +0x63a:  mov    (%edx),%edx
08606ff6 +0x63c:  lea    0x79700(%edx),%ecx
08606ffc +0x642:  movl   $0x1,0x14(%esp)
08607004 +0x64a:  mov    0x20(%ebp),%edx
08607007 +0x64d:  mov    %edx,0x10(%esp)
0860700b +0x651:  mov    0xc(%ebp),%edx
0860700e +0x654:  mov    %edx,0xc(%esp)
08607012 +0x658:  mov    %ebx,0x8(%esp)
08607016 +0x65c:  mov    %eax,0x4(%esp)
0860701a +0x660:  mov    %ecx,(%esp)
0860701d +0x663:  call   08682b6e <_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason>  ; cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason)
08607022 +0x668:  mov    -0x30(%ebp),%eax
08607025 +0x66b:  mov    -0xc(%ebp),%edx
08607028 +0x66e:  lea    (%edx,%eax,1),%ebx
0860702b +0x671:  movsbl -0xd(%ebp),%eax
0860702f +0x675:  mov    0x8(%ebp),%edx
08607032 +0x678:  mov    (%edx),%edx
08607034 +0x67a:  lea    0x79700(%edx),%ecx
0860703a +0x680:  movl   $0x2,0x10(%esp)
08607042 +0x688:  mov    -0x30(%ebp),%edx
08607045 +0x68b:  mov    %edx,0xc(%esp)
08607049 +0x68f:  mov    %ebx,0x8(%esp)
0860704d +0x693:  mov    %eax,0x4(%esp)
08607051 +0x697:  mov    %ecx,(%esp)
08607054 +0x69a:  call   08682c22 <_ZN15cUserHistoryLog6SFPAddEiii12eSPAddReason>  ; cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason)
08607059 +0x69f:  cmpl   $0x0,0x20(%ebp)
0860705d +0x6a3:  jle    086070e8 <+0x72e>
08607063 +0x6a9:  mov    -0x30(%ebp),%eax
08607066 +0x6ac:  mov    %eax,%edx
08607068 +0x6ae:  sar    $0x1f,%edx
0860706b +0x6b1:  idivl  0x20(%ebp)
0860706e +0x6b4:  cmp    $0xa,%eax
08607071 +0x6b7:  jle    086070e8 <+0x72e>
08607073 +0x6b9:  mov    0x8(%ebp),%eax
08607076 +0x6bc:  mov    (%eax),%eax
08607078 +0x6be:  mov    %eax,(%esp)
0860707b +0x6c1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08607080 +0x6c6:  mov    %eax,%ebx
08607082 +0x6c8:  mov    0x8(%ebp),%eax
08607085 +0x6cb:  mov    (%eax),%eax
08607087 +0x6cd:  mov    %eax,(%esp)
0860708a +0x6d0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0860708f +0x6d5:  movl   $0x0,0x4(%esp)
08607097 +0x6dd:  mov    %eax,(%esp)
0860709a +0x6e0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0860709f +0x6e5:  mov    0x20(%ebp),%edx
086070a2 +0x6e8:  mov    %edx,0x24(%esp)
086070a6 +0x6ec:  mov    -0x30(%ebp),%edx
086070a9 +0x6ef:  mov    %edx,0x20(%esp)
086070ad +0x6f3:  mov    0xc(%ebp),%edx
086070b0 +0x6f6:  mov    %edx,0x1c(%esp)
086070b4 +0x6fa:  mov    %ebx,0x18(%esp)
086070b8 +0x6fe:  mov    %eax,0x14(%esp)
086070bc +0x702:  movl   $"Wrong refund TP skill mId:%s char_no:%d rSkillIdx:%d rSp:%d rCount:%d",0x10(%esp)
086070c4 +0x70a:  movl   $0x93b,0xc(%esp)
086070cc +0x712:  movl   $&_ZZN9SkillSlot12refund_skillEiiiiiiRiE19__PRETTY_FUNCTION__,0x8(%esp)
086070d4 +0x71a:  movl   $"skill_slot.cpp",0x4(%esp)
086070dc +0x722:  movl   $0x1,(%esp)
086070e3 +0x729:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086070e8 +0x72e:  mov    0x24(%ebp),%eax
086070eb +0x731:  movl   $0x0,(%eax)
086070f1 +0x737:  mov    -0x48(%ebp),%ebx
086070f4 +0x73a:  jmp    0860710b <+0x751>
086070f6 +0x73c:  mov    %edx,%ebx
086070f8 +0x73e:  mov    %eax,%esi
086070fa +0x740:  lea    -0x70(%ebp),%eax
086070fd +0x743:  mov    %eax,(%esp)
08607100 +0x746:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607105 +0x74b:  mov    %esi,%eax
08607107 +0x74d:  mov    %ebx,%edx
08607109 +0x74f:  jmp    08607118 <+0x75e>
0860710b +0x751:  lea    -0x70(%ebp),%eax
0860710e +0x754:  mov    %eax,(%esp)
08607111 +0x757:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607116 +0x75c:  jmp    08607133 <+0x779>
08607118 +0x75e:  mov    %edx,%ebx
0860711a +0x760:  mov    %eax,%esi
0860711c +0x762:  lea    -0x64(%ebp),%eax
0860711f +0x765:  mov    %eax,(%esp)
08607122 +0x768:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08607127 +0x76d:  mov    %esi,%eax
08607129 +0x76f:  mov    %ebx,%edx
0860712b +0x771:  mov    %eax,(%esp)
0860712e +0x774:  call   08ae3750 <_Unwind_Resume>
08607133 +0x779:  lea    -0x64(%ebp),%eax
08607136 +0x77c:  mov    %eax,(%esp)
08607139 +0x77f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0860713e +0x784:  mov    %ebx,%eax
08607140 +0x786:  add    $0xa0,%esp
08607146 +0x78c:  pop    %ebx
08607147 +0x78d:  pop    %esi
08607148 +0x78e:  pop    %ebp
08607149 +0x78f:  ret
```

## 反编译 C

```c
// SkillSlot::refund_skill @ 0x86069ba

/* SkillSlot::refund_skill(int, int, int, int, int, int, int&) */

int __thiscall
SkillSlot::refund_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int *param_7)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_74 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_68 [12];
  uint local_5c;
  uint local_58;
  CSkill *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  *param_7 = 0x13;
  if (*(int *)this == 0) {
    iVar9 = -4;
  }
  else {
    local_54 = (CSkill *)0x0;
    iVar9 = G_CDataManager();
    local_54 = (CSkill *)CDataManager::find_skill(iVar9,param_3);
    if (local_54 == (CSkill *)0x0) {
      iVar9 = -1;
    }
    else {
      local_50 = CSkill::get_group(local_54);
      if (local_50 == 4) {
        *param_7 = 7;
        iVar9 = -5;
      }
      else {
        this_00 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
        if ((cVar2 == '\0') ||
           (iVar9 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this), -1 < iVar9)) {
          uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
          local_4c = get_skillslot_no(this,param_1,local_50,uVar3,1);
          if (local_4c == -1) {
            iVar9 = -1;
          }
          else {
            uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
            local_48 = get_skillslot_buf(this,uVar3);
            if (local_48 == 0) {
              iVar9 = -4;
            }
            else {
              local_44 = *(char *)(local_4c * 2 + local_48 + 1) - param_6;
              if (local_44 < 0) {
                iVar9 = -1;
              }
              else {
                CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
                iVar9 = G_CDataManager();
                local_40 = CDataManager::GetExpertJobScript(iVar9);
                if (local_40 != 0) {
                  local_30 = 0;
                  while (uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::size((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                         *)(local_40 + 0xc)), local_30 < uVar5) {
                    piVar4 = (int *)std::
                                    vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                    operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                *)(local_40 + 0xc),local_30);
                    if (*piVar4 == param_1) {
                      *param_7 = 7;
                      return -5;
                    }
                    local_30 = local_30 + 1;
                  }
                }
                std::pair<int,int>::pair((pair<int,int> *)&local_5c);
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_68)
                ;
                    /* try { // try from 08606bcb to 08606c67 has its CatchHandler @ 08607118 */
                iVar9 = get_give_skill(this,param_3,param_4,param_5,(vector *)local_68);
                if (iVar9 < 0) {
                  iVar9 = -1;
                }
                else {
                  local_2c = 0;
                  while (iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::size(local_68), (int)local_2c < iVar9) {
                    puVar7 = (uint *)std::
                                     vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                     operator[](local_68,local_2c);
                    local_58 = puVar7[1];
                    local_5c = *puVar7;
                    local_3c = local_5c;
                    local_38 = local_58;
                    if (*(byte *)(local_4c * 2 + local_48) == local_5c) {
                      if (local_44 < (int)local_58) {
                        *param_7 = 7;
                        iVar9 = -1;
                        goto LAB_08607133;
                      }
                      break;
                    }
                    local_2c = local_2c + 1;
                  }
                  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                            (local_74);
                  iVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    /* try { // try from 08606c77 to 086070e7 has its CatchHandler @ 086070f6 */
                  iVar6 = G_CDataManager();
                  CSkillList::get_post_learning_skill
                            (*(int *)(iVar6 + 0x10),iVar9,(vector *)param_1);
                  local_28 = 0;
                  while (iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                 ::size(local_74), (int)local_28 < iVar9) {
                    puVar7 = (uint *)std::
                                     vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                     operator[](local_74,local_28);
                    local_24 = *puVar7;
                    iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                            operator[](local_74,local_28);
                    local_20 = *(int *)(iVar9 + 4);
                    for (local_1c = 0; local_1c < 0xcc; local_1c = local_1c + 1) {
                      if (*(byte *)(local_1c * 2 + local_48) == local_24) {
                        if (local_44 < local_20) {
                          *param_7 = 0x14;
                          iVar9 = -1;
                          goto LAB_0860710b;
                        }
                        break;
                      }
                    }
                    local_28 = local_28 + 1;
                  }
                  local_34 = CSkill::get_need_sp_sfp_for_level
                                       (local_54,local_44,
                                        (int)*(char *)(local_4c * 2 + local_48 + 1));
                  cVar2 = CSkill::IsStealable(local_54,param_4,param_5);
                  if (cVar2 != '\0') {
                    iVar9 = CSkill::GetStealSPPenalty(local_54);
                    local_34 = getSkillSpendSPOnSteal(local_34,iVar9);
                  }
                  *(char *)(local_4c * 2 + local_48 + 1) =
                       *(char *)(local_4c * 2 + local_48 + 1) - (char)param_6;
                  if (*(char *)(local_4c * 2 + local_48 + 1) == '\0') {
                    *(undefined1 *)(local_4c * 2 + local_48) = 0;
                  }
                  cVar2 = CSkill::IsSpecialSkill(local_54);
                  if (cVar2 == '\x01') {
                    local_11 = 0;
                    iVar9 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    if ((iVar9 == -1) ||
                       (iVar9 = CUserCharacInfo::GetCurCharacSkillTreeIndex
                                          (*(CUserCharacInfo **)this), iVar9 == 0)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    if (bVar1) {
                      local_11 = '\x02';
                    }
                    else {
                      local_11 = '\x03';
                    }
                    local_10 = get_remain_sfp_at_index(this,local_11);
                    set_remain_sfp_at_index(this,local_10 + local_34,(int)local_11);
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    uVar8 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    cUserHistoryLog::SkillDel
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar8,uVar3,param_1,
                               param_6,1);
                    cUserHistoryLog::SFPAdd
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),(int)local_11,
                               local_10 + local_34,local_34,2);
                    if ((0 < param_6) && (10 < local_34 / param_6)) {
                      uVar3 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
                      uVar5 = CUser::get_acc_id(*(CUser **)this);
                      uVar8 = NumberToString(uVar5,0);
                      LogManager::logFormat
                                (1,"skill_slot.cpp",
                                 "int SkillSlot::refund_skill(int, int, int, int, int, int, int&)",
                                 0x93b,
                                 "Wrong refund TP skill mId:%s char_no:%d rSkillIdx:%d rSp:%d rCount:%d"
                                 ,uVar8,uVar3,param_1,local_34,param_6);
                    }
                  }
                  else {
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    local_18 = get_remain_sp_at_index(this,uVar3);
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    set_remain_sp_at_index(this,local_18 + local_34,uVar3);
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    uVar8 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                    cUserHistoryLog::SkillDel
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar8,uVar3,param_1,
                               param_6,1);
                    iVar9 = local_18 + local_34;
                    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
                    cUserHistoryLog::SPAdd
                              ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar3,iVar9,local_34,2);
                    if ((0 < param_6) && (1000 < local_34 / param_6)) {
                      uVar3 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
                      uVar5 = CUser::get_acc_id(*(CUser **)this);
                      uVar8 = NumberToString(uVar5,0);
                      LogManager::logFormat
                                (1,"skill_slot.cpp",
                                 "int SkillSlot::refund_skill(int, int, int, int, int, int, int&)",
                                 0x921,
                                 "Wrong refund SP skill mId:%s char_no:%d rSkillIdx:%d rSp:%d rCount:%d"
                                 ,uVar8,uVar3,param_1,local_34,param_6);
                    }
                  }
                  *param_7 = 0;
                  iVar9 = local_4c;
LAB_0860710b:
                    /* try { // try from 08607111 to 08607115 has its CatchHandler @ 08607118 */
                  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                            (local_74);
                }
LAB_08607133:
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                          (local_68);
              }
            }
          }
        }
        else {
          *param_7 = 7;
          iVar9 = -3;
        }
      }
    }
  }
  return iVar9;
}
```
