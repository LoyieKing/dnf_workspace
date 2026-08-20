# checkOverLevelSkill

`_ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi`

`SkillSlot::checkOverLevelSkill(std::vector<stSPReturnInfo_t, std::allocator<stSPReturnInfo_t> >&, ENUM_SKILL_TREE_KIND, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08605d2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08605d2a  _ZN9SkillSlot19checkOverLevelSkillERSt6vectorI16stSPReturnInfo_tSaIS1_EE20ENUM_SKILL_TREE_KINDi
#           SkillSlot::checkOverLevelSkill(std::vector<stSPReturnInfo_t, std::allocator<stSPReturnInfo_t> >&, ENUM_SKILL_TREE_KIND, int)
# range [0x08605d2a, 0x0860658d]
08605d2a +0x000:  push   %ebp
08605d2b +0x001:  mov    %esp,%ebp
08605d2d +0x003:  push   %edi
08605d2e +0x004:  push   %esi
08605d2f +0x005:  push   %ebx
08605d30 +0x006:  sub    $0xcc,%esp
08605d36 +0x00c:  mov    0x8(%ebp),%eax
08605d39 +0x00f:  mov    (%eax),%eax
08605d3b +0x011:  test   %eax,%eax
08605d3d +0x013:  je     08605d50 <+0x26>
08605d3f +0x015:  mov    0x8(%ebp),%eax
08605d42 +0x018:  mov    (%eax),%eax
08605d44 +0x01a:  mov    %eax,(%esp)
08605d47 +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08605d4c +0x022:  test   %eax,%eax
08605d4e +0x024:  jne    08605d57 <+0x2d>
08605d50 +0x026:  mov    $0x1,%eax
08605d55 +0x02b:  jmp    08605d5c <+0x32>
08605d57 +0x02d:  mov    $0x0,%eax
08605d5c +0x032:  test   %al,%al
08605d5e +0x034:  je     08605d6a <+0x40>
08605d60 +0x036:  mov    $0x0,%eax
08605d65 +0x03b:  jmp    08606583 <+0x859>
08605d6a +0x040:  movb   $0x0,-0x51(%ebp)
08605d6e +0x044:  mov    0x10(%ebp),%eax
08605d71 +0x047:  mov    %eax,0x4(%esp)
08605d75 +0x04b:  mov    0x8(%ebp),%eax
08605d78 +0x04e:  mov    %eax,(%esp)
08605d7b +0x051:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08605d80 +0x056:  mov    %eax,-0x50(%ebp)
08605d83 +0x059:  movl   $0x0,-0x4c(%ebp)
08605d8a +0x060:  mov    0x10(%ebp),%eax
08605d8d +0x063:  test   %eax,%eax
08605d8f +0x065:  jne    08605da9 <+0x7f>
08605d91 +0x067:  movl   $0x2,0x4(%esp)
08605d99 +0x06f:  mov    0x8(%ebp),%eax
08605d9c +0x072:  mov    %eax,(%esp)
08605d9f +0x075:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08605da4 +0x07a:  mov    %eax,-0x4c(%ebp)
08605da7 +0x07d:  jmp    08605dc7 <+0x9d>
08605da9 +0x07f:  mov    0x10(%ebp),%eax
08605dac +0x082:  cmp    $0x1,%eax
08605daf +0x085:  jne    08605dc7 <+0x9d>
08605db1 +0x087:  movl   $0x3,0x4(%esp)
08605db9 +0x08f:  mov    0x8(%ebp),%eax
08605dbc +0x092:  mov    %eax,(%esp)
08605dbf +0x095:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08605dc4 +0x09a:  mov    %eax,-0x4c(%ebp)
08605dc7 +0x09d:  mov    0x10(%ebp),%eax
08605dca +0x0a0:  mov    %eax,0x4(%esp)
08605dce +0x0a4:  mov    0x8(%ebp),%eax
08605dd1 +0x0a7:  mov    %eax,(%esp)
08605dd4 +0x0aa:  call   08606812 <_ZNK9SkillSlot17get_cur_remain_spE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_cur_remain_sp(ENUM_SKILL_TREE_KIND) const
08605dd9 +0x0af:  mov    %eax,-0x48(%ebp)
08605ddc +0x0b2:  cmpl   $0x0,-0x50(%ebp)
08605de0 +0x0b6:  je     08605dee <+0xc4>
08605de2 +0x0b8:  cmpl   $0x0,-0x48(%ebp)
08605de6 +0x0bc:  je     08605dee <+0xc4>
08605de8 +0x0be:  cmpl   $0x0,-0x4c(%ebp)
08605dec +0x0c2:  jne    08605df8 <+0xce>
08605dee +0x0c4:  mov    $0x0,%eax
08605df3 +0x0c9:  jmp    08606583 <+0x859>
08605df8 +0x0ce:  movl   $0x0,-0x44(%ebp)
08605dff +0x0d5:  movl   $0x0,-0x40(%ebp)
08605e06 +0x0dc:  movl   $0x0,-0x3c(%ebp)
08605e0d +0x0e3:  mov    0x8(%ebp),%eax
08605e10 +0x0e6:  mov    (%eax),%eax
08605e12 +0x0e8:  mov    %eax,(%esp)
08605e15 +0x0eb:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08605e1a +0x0f0:  mov    %eax,%ebx
08605e1c +0x0f2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08605e21 +0x0f7:  mov    %ebx,0x4(%esp)
08605e25 +0x0fb:  mov    %eax,(%esp)
08605e28 +0x0fe:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08605e2d +0x103:  mov    %eax,-0x3c(%ebp)
08605e30 +0x106:  mov    0x8(%ebp),%eax
08605e33 +0x109:  mov    (%eax),%eax
08605e35 +0x10b:  mov    %eax,(%esp)
08605e38 +0x10e:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08605e3d +0x113:  test   %eax,%eax
08605e3f +0x115:  setne  %al
08605e42 +0x118:  test   %al,%al
08605e44 +0x11a:  je     08605e67 <+0x13d>
08605e46 +0x11c:  mov    0x8(%ebp),%eax
08605e49 +0x11f:  mov    (%eax),%eax
08605e4b +0x121:  mov    %eax,(%esp)
08605e4e +0x124:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08605e53 +0x129:  mov    0x8(%ebp),%edx
08605e56 +0x12c:  mov    (%edx),%edx
08605e58 +0x12e:  mov    %eax,0x4(%esp)
08605e5c +0x132:  mov    %edx,(%esp)
08605e5f +0x135:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08605e64 +0x13a:  mov    %eax,-0x44(%ebp)
08605e67 +0x13d:  movl   $0x0,-0x38(%ebp)
08605e6e +0x144:  jmp    086064db <+0x7b1>
08605e73 +0x149:  mov    -0x38(%ebp),%eax
08605e76 +0x14c:  add    %eax,%eax
08605e78 +0x14e:  add    -0x50(%ebp),%eax
08605e7b +0x151:  movzbl (%eax),%eax
08605e7e +0x154:  test   %al,%al
08605e80 +0x156:  je     086064d0 <+0x7a6>
08605e86 +0x15c:  movl   $0x0,-0x34(%ebp)
08605e8d +0x163:  mov    -0x38(%ebp),%eax
08605e90 +0x166:  add    %eax,%eax
08605e92 +0x168:  add    -0x50(%ebp),%eax
08605e95 +0x16b:  movzbl (%eax),%eax
08605e98 +0x16e:  movzbl %al,%esi
08605e9b +0x171:  mov    0x8(%ebp),%eax
08605e9e +0x174:  mov    (%eax),%eax
08605ea0 +0x176:  mov    %eax,(%esp)
08605ea3 +0x179:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08605ea8 +0x17e:  mov    %eax,%ebx
08605eaa +0x180:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08605eaf +0x185:  mov    %esi,0x8(%esp)
08605eb3 +0x189:  mov    %ebx,0x4(%esp)
08605eb7 +0x18d:  mov    %eax,(%esp)
08605eba +0x190:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08605ebf +0x195:  mov    %eax,-0x34(%ebp)
08605ec2 +0x198:  cmpl   $0x0,-0x34(%ebp)
08605ec6 +0x19c:  jne    08605ed2 <+0x1a8>
08605ec8 +0x19e:  mov    $0x0,%eax
08605ecd +0x1a3:  jmp    08606583 <+0x859>
08605ed2 +0x1a8:  movb   $0x0,-0x2d(%ebp)
08605ed6 +0x1ac:  mov    0x14(%ebp),%eax
08605ed9 +0x1af:  mov    %eax,-0x2c(%ebp)
08605edc +0x1b2:  mov    0x8(%ebp),%eax
08605edf +0x1b5:  mov    (%eax),%eax
08605ee1 +0x1b7:  mov    %eax,(%esp)
08605ee4 +0x1ba:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08605ee9 +0x1bf:  movsbl %al,%ebx
08605eec +0x1c2:  mov    0x8(%ebp),%eax
08605eef +0x1c5:  mov    (%eax),%eax
08605ef1 +0x1c7:  mov    %eax,(%esp)
08605ef4 +0x1ca:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08605ef9 +0x1cf:  movsbl %al,%eax
08605efc +0x1d2:  mov    %ebx,0x8(%esp)
08605f00 +0x1d6:  mov    %eax,0x4(%esp)
08605f04 +0x1da:  mov    -0x34(%ebp),%eax
08605f07 +0x1dd:  mov    %eax,(%esp)
08605f0a +0x1e0:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
08605f0f +0x1e5:  test   %al,%al
08605f11 +0x1e7:  je     08605f25 <+0x1fb>
08605f13 +0x1e9:  movb   $0x1,-0x2d(%ebp)
08605f17 +0x1ed:  mov    -0x34(%ebp),%eax
08605f1a +0x1f0:  mov    %eax,(%esp)
08605f1d +0x1f3:  call   0860934a <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x1d>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x1d
08605f22 +0x1f8:  sub    %eax,-0x2c(%ebp)
08605f25 +0x1fb:  mov    0x8(%ebp),%eax
08605f28 +0x1fe:  mov    (%eax),%eax
08605f2a +0x200:  mov    %eax,(%esp)
08605f2d +0x203:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08605f32 +0x208:  mov    %eax,(%esp)
08605f35 +0x20b:  call   08609398 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x6b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x6b
08605f3a +0x210:  movzwl %ax,%eax
08605f3d +0x213:  add    %eax,-0x2c(%ebp)
08605f40 +0x216:  mov    0x8(%ebp),%eax
08605f43 +0x219:  mov    (%eax),%eax
08605f45 +0x21b:  mov    %eax,(%esp)
08605f48 +0x21e:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08605f4d +0x223:  movsbl %al,%ebx
08605f50 +0x226:  mov    0x8(%ebp),%eax
08605f53 +0x229:  mov    (%eax),%eax
08605f55 +0x22b:  mov    %eax,(%esp)
08605f58 +0x22e:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08605f5d +0x233:  movsbl %al,%eax
08605f60 +0x236:  mov    %ebx,0xc(%esp)
08605f64 +0x23a:  mov    %eax,0x8(%esp)
08605f68 +0x23e:  mov    -0x2c(%ebp),%eax
08605f6b +0x241:  mov    %eax,0x4(%esp)
08605f6f +0x245:  mov    -0x34(%ebp),%eax
08605f72 +0x248:  mov    %eax,(%esp)
08605f75 +0x24b:  call   08350700 <_ZNK6CSkill16getMaxSkillLevelEiii>  ; CSkill::getMaxSkillLevel(int, int, int) const
08605f7a +0x250:  mov    %eax,-0x28(%ebp)
08605f7d +0x253:  cmpl   $0xffffffff,-0x28(%ebp)
08605f81 +0x257:  jne    08605f9f <+0x275>
08605f83 +0x259:  mov    -0x38(%ebp),%eax
08605f86 +0x25c:  add    %eax,%eax
08605f88 +0x25e:  add    -0x50(%ebp),%eax
08605f8b +0x261:  movb   $0x0,(%eax)
08605f8e +0x264:  mov    -0x38(%ebp),%eax
08605f91 +0x267:  add    %eax,%eax
08605f93 +0x269:  add    -0x50(%ebp),%eax
08605f96 +0x26c:  movb   $0x0,0x1(%eax)
08605f9a +0x270:  jmp    086064d7 <+0x7ad>
08605f9f +0x275:  cmpl   $0x0,-0x3c(%ebp)
08605fa3 +0x279:  je     0860606e <+0x344>
08605fa9 +0x27f:  movb   $0x0,-0x1d(%ebp)
08605fad +0x283:  mov    -0x3c(%ebp),%eax
08605fb0 +0x286:  lea    0xc(%eax),%edx
08605fb3 +0x289:  lea    -0x78(%ebp),%eax
08605fb6 +0x28c:  mov    %edx,0x4(%esp)
08605fba +0x290:  mov    %eax,(%esp)
08605fbd +0x293:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08605fc2 +0x298:  sub    $0x4,%esp
08605fc5 +0x29b:  lea    -0x78(%ebp),%eax
08605fc8 +0x29e:  mov    %eax,0x4(%esp)
08605fcc +0x2a2:  lea    -0xa0(%ebp),%eax
08605fd2 +0x2a8:  mov    %eax,(%esp)
08605fd5 +0x2ab:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08605fda +0x2b0:  jmp    0860602f <+0x305>
08605fdc +0x2b2:  lea    -0xa0(%ebp),%eax
08605fe2 +0x2b8:  mov    %eax,(%esp)
08605fe5 +0x2bb:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08605fea +0x2c0:  mov    (%eax),%edx
08605fec +0x2c2:  mov    -0x38(%ebp),%eax
08605fef +0x2c5:  add    %eax,%eax
08605ff1 +0x2c7:  add    -0x50(%ebp),%eax
08605ff4 +0x2ca:  movzbl (%eax),%eax
08605ff7 +0x2cd:  movzbl %al,%eax
08605ffa +0x2d0:  cmp    %eax,%edx
08605ffc +0x2d2:  sete   %al
08605fff +0x2d5:  test   %al,%al
08606001 +0x2d7:  je     08606021 <+0x2f7>
08606003 +0x2d9:  mov    -0x38(%ebp),%eax
08606006 +0x2dc:  add    %eax,%eax
08606008 +0x2de:  add    -0x50(%ebp),%eax
0860600b +0x2e1:  movzbl 0x1(%eax),%eax
0860600f +0x2e5:  movsbl %al,%eax
08606012 +0x2e8:  cmp    -0x44(%ebp),%eax
08606015 +0x2eb:  jne    0860601b <+0x2f1>
08606017 +0x2ed:  addl   $0x1,-0x40(%ebp)
0860601b +0x2f1:  movb   $0x1,-0x1d(%ebp)
0860601f +0x2f5:  jmp    08606064 <+0x33a>
08606021 +0x2f7:  lea    -0xa0(%ebp),%eax
08606027 +0x2fd:  mov    %eax,(%esp)
0860602a +0x300:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0860602f +0x305:  mov    -0x3c(%ebp),%eax
08606032 +0x308:  lea    0xc(%eax),%edx
08606035 +0x30b:  lea    -0x74(%ebp),%eax
08606038 +0x30e:  mov    %edx,0x4(%esp)
0860603c +0x312:  mov    %eax,(%esp)
0860603f +0x315:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08606044 +0x31a:  sub    $0x4,%esp
08606047 +0x31d:  lea    -0x74(%ebp),%eax
0860604a +0x320:  mov    %eax,0x4(%esp)
0860604e +0x324:  lea    -0xa0(%ebp),%eax
08606054 +0x32a:  mov    %eax,(%esp)
08606057 +0x32d:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
0860605c +0x332:  test   %al,%al
0860605e +0x334:  jne    08605fdc <+0x2b2>
08606064 +0x33a:  cmpb   $0x0,-0x1d(%ebp)
08606068 +0x33e:  jne    086064d3 <+0x7a9>
0860606e +0x344:  lea    -0x88(%ebp),%eax
08606074 +0x34a:  mov    %eax,(%esp)
08606077 +0x34d:  call   086093e6 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xb9>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xb9
0860607c +0x352:  mov    -0x34(%ebp),%eax
0860607f +0x355:  lea    0x18(%eax),%edx
08606082 +0x358:  lea    -0xac(%ebp),%eax
08606088 +0x35e:  mov    %edx,0x4(%esp)
0860608c +0x362:  mov    %eax,(%esp)
0860608f +0x365:  call   083ab684 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45650>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45650
08606094 +0x36a:  sub    $0x4,%esp
08606097 +0x36d:  mov    -0xac(%ebp),%eax
0860609d +0x373:  mov    %eax,-0x88(%ebp)
086060a3 +0x379:  jmp    08606121 <+0x3f7>
086060a5 +0x37b:  lea    -0x88(%ebp),%eax
086060ab +0x381:  mov    %eax,(%esp)
086060ae +0x384:  call   086093f4 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xc7>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xc7
086060b3 +0x389:  mov    (%eax),%edx
086060b5 +0x38b:  mov    %edx,-0x84(%ebp)
086060bb +0x391:  mov    0x4(%eax),%edx
086060be +0x394:  mov    %edx,-0x80(%ebp)
086060c1 +0x397:  mov    0x8(%eax),%eax
086060c4 +0x39a:  mov    %eax,-0x7c(%ebp)
086060c7 +0x39d:  mov    -0x7c(%ebp),%ecx
086060ca +0x3a0:  mov    -0x80(%ebp),%edx
086060cd +0x3a3:  mov    -0x84(%ebp),%eax
086060d3 +0x3a9:  mov    0x10(%ebp),%ebx
086060d6 +0x3ac:  mov    %ebx,0x10(%esp)
086060da +0x3b0:  mov    %ecx,0xc(%esp)
086060de +0x3b4:  mov    %edx,0x8(%esp)
086060e2 +0x3b8:  mov    %eax,0x4(%esp)
086060e6 +0x3bc:  mov    0x8(%ebp),%eax
086060e9 +0x3bf:  mov    %eax,(%esp)
086060ec +0x3c2:  call   08604954 <_ZNK9SkillSlot20check_skill_masteredEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::check_skill_mastered(int, int, int, ENUM_SKILL_TREE_KIND) const
086060f1 +0x3c7:  xor    $0x1,%eax
086060f4 +0x3ca:  test   %al,%al
086060f6 +0x3cc:  je     08606101 <+0x3d7>
086060f8 +0x3ce:  movl   $0x0,-0x28(%ebp)
086060ff +0x3d5:  jmp    08606156 <+0x42c>
08606101 +0x3d7:  lea    -0x6c(%ebp),%eax
08606104 +0x3da:  movl   $0x0,0x8(%esp)
0860610c +0x3e2:  lea    -0x88(%ebp),%edx
08606112 +0x3e8:  mov    %edx,0x4(%esp)
08606116 +0x3ec:  mov    %eax,(%esp)
08606119 +0x3ef:  call   08609402 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xd5>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xd5
0860611e +0x3f4:  sub    $0x4,%esp
08606121 +0x3f7:  mov    -0x34(%ebp),%eax
08606124 +0x3fa:  lea    0x18(%eax),%edx
08606127 +0x3fd:  lea    -0x70(%ebp),%eax
0860612a +0x400:  mov    %edx,0x4(%esp)
0860612e +0x404:  mov    %eax,(%esp)
08606131 +0x407:  call   083ab6aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45676>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45676
08606136 +0x40c:  sub    $0x4,%esp
08606139 +0x40f:  lea    -0x70(%ebp),%eax
0860613c +0x412:  mov    %eax,0x4(%esp)
08606140 +0x416:  lea    -0x88(%ebp),%eax
08606146 +0x41c:  mov    %eax,(%esp)
08606149 +0x41f:  call   083d65d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7059c>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7059c
0860614e +0x424:  test   %al,%al
08606150 +0x426:  jne    086060a5 <+0x37b>
08606156 +0x42c:  mov    -0x38(%ebp),%eax
08606159 +0x42f:  add    %eax,%eax
0860615b +0x431:  add    -0x50(%ebp),%eax
0860615e +0x434:  movzbl 0x1(%eax),%eax
08606162 +0x438:  movsbl %al,%eax
08606165 +0x43b:  cmp    -0x28(%ebp),%eax
08606168 +0x43e:  jle    086064d6 <+0x7ac>
0860616e +0x444:  movl   $0x0,-0x24(%ebp)
08606175 +0x44b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860617a +0x450:  mov    0x14(%eax),%ebx
0860617d +0x453:  mov    0x8(%ebp),%eax
08606180 +0x456:  mov    (%eax),%eax
08606182 +0x458:  mov    %eax,(%esp)
08606185 +0x45b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0860618a +0x460:  imul   $0x7dc,%eax,%eax
08606190 +0x466:  add    $0x240,%eax
08606195 +0x46b:  lea    (%ebx,%eax,1),%eax
08606198 +0x46e:  mov    %eax,0x4(%esp)
0860619c +0x472:  lea    -0x94(%ebp),%eax
086061a2 +0x478:  mov    %eax,(%esp)
086061a5 +0x47b:  call   08237302 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9ac
086061aa +0x480:  movb   $0x1,-0x1e(%ebp)
086061ae +0x484:  mov    0x8(%ebp),%eax
086061b1 +0x487:  mov    (%eax),%eax
086061b3 +0x489:  mov    %eax,(%esp)
086061b6 +0x48c:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086061bb +0x491:  test   %al,%al
086061bd +0x493:  sete   %al
086061c0 +0x496:  test   %al,%al
086061c2 +0x498:  je     08606229 <+0x4ff>
086061c4 +0x49a:  mov    0x8(%ebp),%eax
086061c7 +0x49d:  mov    (%eax),%eax
086061c9 +0x49f:  mov    %eax,(%esp)
086061cc +0x4a2:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086061d1 +0x4a7:  movsbl %al,%esi
086061d4 +0x4aa:  mov    0x8(%ebp),%eax
086061d7 +0x4ad:  mov    (%eax),%eax
086061d9 +0x4af:  mov    %eax,(%esp)
086061dc +0x4b2:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
086061e1 +0x4b7:  movsbl %al,%ebx
086061e4 +0x4ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086061e9 +0x4bf:  mov    0x14(%eax),%edi
086061ec +0x4c2:  mov    0x8(%ebp),%eax
086061ef +0x4c5:  mov    (%eax),%eax
086061f1 +0x4c7:  mov    %eax,(%esp)
086061f4 +0x4ca:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086061f9 +0x4cf:  imul   $0x7dc,%eax,%eax
086061ff +0x4d5:  lea    (%edi,%eax,1),%edx
08606202 +0x4d8:  movl   $0x1,0x10(%esp)
0860620a +0x4e0:  lea    -0x94(%ebp),%eax
08606210 +0x4e6:  mov    %eax,0xc(%esp)
08606214 +0x4ea:  mov    %esi,0x8(%esp)
08606218 +0x4ee:  mov    %ebx,0x4(%esp)
0860621c +0x4f2:  mov    %edx,(%esp)
0860621f +0x4f5:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08606224 +0x4fa:  mov    %al,-0x1e(%ebp)
08606227 +0x4fd:  jmp    0860628c <+0x562>
08606229 +0x4ff:  mov    0x8(%ebp),%eax
0860622c +0x502:  mov    (%eax),%eax
0860622e +0x504:  mov    %eax,(%esp)
08606231 +0x507:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08606236 +0x50c:  movsbl %al,%esi
08606239 +0x50f:  mov    0x8(%ebp),%eax
0860623c +0x512:  mov    (%eax),%eax
0860623e +0x514:  mov    %eax,(%esp)
08606241 +0x517:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08606246 +0x51c:  movsbl %al,%ebx
08606249 +0x51f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860624e +0x524:  mov    0x14(%eax),%edi
08606251 +0x527:  mov    0x8(%ebp),%eax
08606254 +0x52a:  mov    (%eax),%eax
08606256 +0x52c:  mov    %eax,(%esp)
08606259 +0x52f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0860625e +0x534:  imul   $0x7dc,%eax,%eax
08606264 +0x53a:  lea    (%edi,%eax,1),%edx
08606267 +0x53d:  movl   $0x0,0x10(%esp)
0860626f +0x545:  lea    -0x94(%ebp),%eax
08606275 +0x54b:  mov    %eax,0xc(%esp)
08606279 +0x54f:  mov    %esi,0x8(%esp)
0860627d +0x553:  mov    %ebx,0x4(%esp)
08606281 +0x557:  mov    %edx,(%esp)
08606284 +0x55a:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08606289 +0x55f:  mov    %al,-0x1e(%ebp)
0860628c +0x562:  movzbl -0x1e(%ebp),%eax
08606290 +0x566:  xor    $0x1,%eax
08606293 +0x569:  test   %al,%al
08606295 +0x56b:  jne    086064c0 <+0x796>
0860629b +0x571:  movl   $0x0,-0x24(%ebp)
086062a2 +0x578:  lea    -0x68(%ebp),%eax
086062a5 +0x57b:  lea    -0x94(%ebp),%edx
086062ab +0x581:  mov    %edx,0x4(%esp)
086062af +0x585:  mov    %eax,(%esp)
086062b2 +0x588:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
086062b7 +0x58d:  sub    $0x4,%esp
086062ba +0x590:  lea    -0x68(%ebp),%eax
086062bd +0x593:  mov    %eax,0x4(%esp)
086062c1 +0x597:  lea    -0xa4(%ebp),%eax
086062c7 +0x59d:  mov    %eax,(%esp)
086062ca +0x5a0:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
086062cf +0x5a5:  lea    -0x64(%ebp),%eax
086062d2 +0x5a8:  lea    -0x94(%ebp),%edx
086062d8 +0x5ae:  mov    %edx,0x4(%esp)
086062dc +0x5b2:  mov    %eax,(%esp)
086062df +0x5b5:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086062e4 +0x5ba:  sub    $0x4,%esp
086062e7 +0x5bd:  lea    -0x64(%ebp),%eax
086062ea +0x5c0:  mov    %eax,0x4(%esp)
086062ee +0x5c4:  lea    -0xa8(%ebp),%eax
086062f4 +0x5ca:  mov    %eax,(%esp)
086062f7 +0x5cd:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
086062fc +0x5d2:  jmp    08606349 <+0x61f>
086062fe +0x5d4:  lea    -0xa4(%ebp),%eax
08606304 +0x5da:  mov    %eax,(%esp)
08606307 +0x5dd:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
0860630c +0x5e2:  mov    (%eax),%edx
0860630e +0x5e4:  mov    -0x38(%ebp),%eax
08606311 +0x5e7:  add    %eax,%eax
08606313 +0x5e9:  add    -0x50(%ebp),%eax
08606316 +0x5ec:  movzbl (%eax),%eax
08606319 +0x5ef:  movzbl %al,%eax
0860631c +0x5f2:  cmp    %eax,%edx
0860631e +0x5f4:  sete   %al
08606321 +0x5f7:  test   %al,%al
08606323 +0x5f9:  je     0860633b <+0x611>
08606325 +0x5fb:  lea    -0xa4(%ebp),%eax
0860632b +0x601:  mov    %eax,(%esp)
0860632e +0x604:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08606333 +0x609:  mov    0x4(%eax),%eax
08606336 +0x60c:  mov    %eax,-0x24(%ebp)
08606339 +0x60f:  jmp    08606365 <+0x63b>
0860633b +0x611:  lea    -0xa4(%ebp),%eax
08606341 +0x617:  mov    %eax,(%esp)
08606344 +0x61a:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
08606349 +0x61f:  lea    -0xa8(%ebp),%eax
0860634f +0x625:  mov    %eax,0x4(%esp)
08606353 +0x629:  lea    -0xa4(%ebp),%eax
08606359 +0x62f:  mov    %eax,(%esp)
0860635c +0x632:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08606361 +0x637:  test   %al,%al
08606363 +0x639:  jne    086062fe <+0x5d4>
08606365 +0x63b:  mov    -0x28(%ebp),%eax
08606368 +0x63e:  cmp    -0x24(%ebp),%eax
0860636b +0x641:  jle    08606372 <+0x648>
0860636d +0x643:  mov    -0x28(%ebp),%eax
08606370 +0x646:  jmp    08606375 <+0x64b>
08606372 +0x648:  mov    -0x24(%ebp),%eax
08606375 +0x64b:  mov    %eax,-0x28(%ebp)
08606378 +0x64e:  mov    -0x38(%ebp),%eax
0860637b +0x651:  add    %eax,%eax
0860637d +0x653:  add    -0x50(%ebp),%eax
08606380 +0x656:  movzbl 0x1(%eax),%eax
08606384 +0x65a:  movsbl %al,%eax
08606387 +0x65d:  cmp    -0x28(%ebp),%eax
0860638a +0x660:  jle    086064c0 <+0x796>
08606390 +0x666:  movl   $0x0,-0x98(%ebp)
0860639a +0x670:  movl   $0x0,-0x9c(%ebp)
086063a4 +0x67a:  movzbl -0x2d(%ebp),%eax
086063a8 +0x67e:  mov    %eax,0x1c(%esp)
086063ac +0x682:  mov    -0x34(%ebp),%eax
086063af +0x685:  mov    %eax,0x18(%esp)
086063b3 +0x689:  mov    -0x38(%ebp),%eax
086063b6 +0x68c:  mov    %eax,0x14(%esp)
086063ba +0x690:  mov    -0x50(%ebp),%eax
086063bd +0x693:  mov    %eax,0x10(%esp)
086063c1 +0x697:  mov    -0x28(%ebp),%eax
086063c4 +0x69a:  mov    %eax,0xc(%esp)
086063c8 +0x69e:  lea    -0x9c(%ebp),%eax
086063ce +0x6a4:  mov    %eax,0x8(%esp)
086063d2 +0x6a8:  lea    -0x98(%ebp),%eax
086063d8 +0x6ae:  mov    %eax,0x4(%esp)
086063dc +0x6b2:  mov    0x8(%ebp),%eax
086063df +0x6b5:  mov    %eax,(%esp)
086063e2 +0x6b8:  call   0860658e <_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb>  ; SkillSlot::calcReturnSpSfpPerOneSkill(int&, int&, int, _Mastered_skill const*, int, CSkill const*, bool) const
086063e7 +0x6bd:  mov    -0x9c(%ebp),%eax
086063ed +0x6c3:  mov    %eax,%ebx
086063ef +0x6c5:  mov    -0x98(%ebp),%eax
086063f5 +0x6cb:  mov    %eax,%ecx
086063f7 +0x6cd:  mov    -0x38(%ebp),%eax
086063fa +0x6d0:  add    %eax,%eax
086063fc +0x6d2:  add    -0x50(%ebp),%eax
086063ff +0x6d5:  movzbl 0x1(%eax),%eax
08606403 +0x6d9:  movsbw %al,%dx
08606407 +0x6dd:  mov    -0x28(%ebp),%eax
0860640a +0x6e0:  mov    %edx,%esi
0860640c +0x6e2:  sub    %ax,%si
0860640f +0x6e5:  mov    %esi,%eax
08606411 +0x6e7:  movzwl %ax,%edx
08606414 +0x6ea:  mov    -0x38(%ebp),%eax
08606417 +0x6ed:  add    %eax,%eax
08606419 +0x6ef:  add    -0x50(%ebp),%eax
0860641c +0x6f2:  movzbl (%eax),%eax
0860641f +0x6f5:  movzbl %al,%eax
08606422 +0x6f8:  mov    %ebx,0x10(%esp)
08606426 +0x6fc:  mov    %ecx,0xc(%esp)
0860642a +0x700:  mov    %edx,0x8(%esp)
0860642e +0x704:  mov    %eax,0x4(%esp)
08606432 +0x708:  lea    -0x60(%ebp),%eax
08606435 +0x70b:  mov    %eax,(%esp)
08606438 +0x70e:  call   086093a8 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x7b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x7b
0860643d +0x713:  lea    -0x60(%ebp),%eax
08606440 +0x716:  mov    %eax,0x4(%esp)
08606444 +0x71a:  mov    0xc(%ebp),%eax
08606447 +0x71d:  mov    %eax,(%esp)
0860644a +0x720:  call   08609478 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x14b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x14b
0860644f +0x725:  mov    -0x4c(%ebp),%eax
08606452 +0x728:  mov    (%eax),%edx
08606454 +0x72a:  mov    -0x9c(%ebp),%eax
0860645a +0x730:  add    %eax,%edx
0860645c +0x732:  mov    -0x4c(%ebp),%eax
0860645f +0x735:  mov    %edx,(%eax)
08606461 +0x737:  mov    -0x48(%ebp),%eax
08606464 +0x73a:  mov    (%eax),%edx
08606466 +0x73c:  mov    -0x98(%ebp),%eax
0860646c +0x742:  add    %eax,%edx
0860646e +0x744:  mov    -0x48(%ebp),%eax
08606471 +0x747:  mov    %edx,(%eax)
08606473 +0x749:  mov    -0x38(%ebp),%eax
08606476 +0x74c:  add    %eax,%eax
08606478 +0x74e:  add    -0x50(%ebp),%eax
0860647b +0x751:  mov    -0x28(%ebp),%edx
0860647e +0x754:  mov    %dl,0x1(%eax)
08606481 +0x757:  mov    -0x38(%ebp),%eax
08606484 +0x75a:  add    %eax,%eax
08606486 +0x75c:  add    -0x50(%ebp),%eax
08606489 +0x75f:  movzbl 0x1(%eax),%eax
0860648d +0x763:  test   %al,%al
0860648f +0x765:  jne    0860649c <+0x772>
08606491 +0x767:  mov    -0x38(%ebp),%eax
08606494 +0x76a:  add    %eax,%eax
08606496 +0x76c:  add    -0x50(%ebp),%eax
08606499 +0x76f:  movb   $0x0,(%eax)
0860649c +0x772:  movb   $0x1,-0x51(%ebp)
086064a0 +0x776:  jmp    086064c0 <+0x796>
086064a2 +0x778:  mov    %edx,%ebx
086064a4 +0x77a:  mov    %eax,%esi
086064a6 +0x77c:  lea    -0x94(%ebp),%eax
086064ac +0x782:  mov    %eax,(%esp)
086064af +0x785:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086064b4 +0x78a:  mov    %esi,%eax
086064b6 +0x78c:  mov    %ebx,%edx
086064b8 +0x78e:  mov    %eax,(%esp)
086064bb +0x791:  call   08ae3750 <_Unwind_Resume>
086064c0 +0x796:  lea    -0x94(%ebp),%eax
086064c6 +0x79c:  mov    %eax,(%esp)
086064c9 +0x79f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086064ce +0x7a4:  jmp    086064d7 <+0x7ad>
086064d0 +0x7a6:  nop
086064d1 +0x7a7:  jmp    086064d7 <+0x7ad>
086064d3 +0x7a9:  nop
086064d4 +0x7aa:  jmp    086064d7 <+0x7ad>
086064d6 +0x7ac:  nop
086064d7 +0x7ad:  addl   $0x1,-0x38(%ebp)
086064db +0x7b1:  cmpl   $0xcb,-0x38(%ebp)
086064e2 +0x7b8:  setle  %al
086064e5 +0x7bb:  test   %al,%al
086064e7 +0x7bd:  jne    08605e73 <+0x149>
086064ed +0x7c3:  cmpl   $0x0,-0x3c(%ebp)
086064f1 +0x7c7:  je     0860657f <+0x855>
086064f7 +0x7cd:  mov    -0x3c(%ebp),%eax
086064fa +0x7d0:  add    $0xc,%eax
086064fd +0x7d3:  mov    %eax,(%esp)
08606500 +0x7d6:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08606505 +0x7db:  mov    -0x40(%ebp),%edx
08606508 +0x7de:  cmp    %edx,%eax
0860650a +0x7e0:  setne  %al
0860650d +0x7e3:  test   %al,%al
0860650f +0x7e5:  je     0860657f <+0x855>
08606511 +0x7e7:  movl   $0x0,-0x1c(%ebp)
08606518 +0x7ee:  jmp    08606567 <+0x83d>
0860651a +0x7f0:  mov    -0x3c(%ebp),%eax
0860651d +0x7f3:  lea    0xc(%eax),%edx
08606520 +0x7f6:  mov    -0x1c(%ebp),%eax
08606523 +0x7f9:  mov    %eax,0x4(%esp)
08606527 +0x7fd:  mov    %edx,(%esp)
0860652a +0x800:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0860652f +0x805:  mov    (%eax),%ebx
08606531 +0x807:  mov    0x8(%ebp),%eax
08606534 +0x80a:  mov    (%eax),%eax
08606536 +0x80c:  mov    %eax,(%esp)
08606539 +0x80f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0860653e +0x814:  mov    0x10(%ebp),%edx
08606541 +0x817:  mov    %edx,0x10(%esp)
08606545 +0x81b:  mov    -0x44(%ebp),%edx
08606548 +0x81e:  mov    %edx,0xc(%esp)
0860654c +0x822:  mov    %ebx,0x8(%esp)
08606550 +0x826:  mov    %eax,0x4(%esp)
08606554 +0x82a:  mov    0x8(%ebp),%eax
08606557 +0x82d:  mov    %eax,(%esp)
0860655a +0x830:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0860655f +0x835:  movb   $0x1,-0x51(%ebp)
08606563 +0x839:  addl   $0x1,-0x1c(%ebp)
08606567 +0x83d:  mov    -0x3c(%ebp),%eax
0860656a +0x840:  add    $0xc,%eax
0860656d +0x843:  mov    %eax,(%esp)
08606570 +0x846:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08606575 +0x84b:  cmp    -0x1c(%ebp),%eax
08606578 +0x84e:  seta   %al
0860657b +0x851:  test   %al,%al
0860657d +0x853:  jne    0860651a <+0x7f0>
0860657f +0x855:  movzbl -0x51(%ebp),%eax
08606583 +0x859:  lea    -0xc(%ebp),%esp
08606586 +0x85c:  add    $0x0,%esp
08606589 +0x85f:  pop    %ebx
0860658a +0x860:  pop    %esi
0860658b +0x861:  pop    %edi
0860658c +0x862:  pop    %ebp
0860658d +0x863:  ret
```

## 反编译 C

```c
// SkillSlot::checkOverLevelSkill @ 0x8605d2a

/* SkillSlot::checkOverLevelSkill(std::vector<stSPReturnInfo_t, std::allocator<stSPReturnInfo_t> >&,
   ENUM_SKILL_TREE_KIND, int) */

undefined1 __thiscall
SkillSlot::checkOverLevelSkill
          (SkillSlot *this,vector<stSPReturnInfo_t,std::allocator<stSPReturnInfo_t>> *param_1,
          int param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  CUserPremium *this_00;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_ac [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a8 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_a4 [4];
  uint local_a0;
  uint local_9c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_98 [12];
  _List_const_iterator<_pre_skill> local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  __normal_iterator local_7c [4];
  __normal_iterator local_78 [4];
  _List_const_iterator local_74 [4];
  _List_const_iterator<_pre_skill> local_70 [4];
  __normal_iterator local_6c [4];
  __normal_iterator local_68 [4];
  stSPReturnInfo_t local_64 [15];
  undefined1 local_55;
  _Mastered_skill *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CSkill *local_38;
  bool local_31;
  int local_30;
  int local_2c;
  int local_28;
  char local_22;
  char local_21;
  uint local_20;
  
  if ((*(int *)this == 0) ||
     (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this), iVar5 == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    local_55 = 0;
  }
  else {
    local_55 = 0;
    local_54 = (_Mastered_skill *)get_skillslot_buf(this,param_3);
    local_50 = (int *)0x0;
    if (param_3 == 0) {
      local_50 = (int *)get_cur_remain_sp(this,2);
    }
    else if (param_3 == 1) {
      local_50 = (int *)get_cur_remain_sp(this,3);
    }
    local_4c = (int *)get_cur_remain_sp(this,param_3);
    if (((local_54 == (_Mastered_skill *)0x0) || (local_4c == (int *)0x0)) ||
       (local_50 == (int *)0x0)) {
      local_55 = 0;
    }
    else {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
      iVar5 = G_CDataManager();
      local_40 = CDataManager::GetExpertJobScript(iVar5);
      iVar5 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
      if (iVar5 != 0) {
        iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
        local_48 = CUser::GetCurExpertJobLevel(*(CUser **)this,iVar5);
      }
      for (local_3c = 0; local_3c < 0xcc; local_3c = local_3c + 1) {
        if (local_54[local_3c * 2] != (_Mastered_skill)0x0) {
          local_38 = (CSkill *)0x0;
          iVar5 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          iVar6 = G_CDataManager();
          local_38 = (CSkill *)CDataManager::find_skill(iVar6,iVar5);
          if (local_38 == (CSkill *)0x0) {
            return 0;
          }
          local_31 = false;
          local_30 = param_4;
          cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
          cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
          cVar2 = CSkill::IsStealable(local_38,(int)cVar3,(int)cVar2);
          if (cVar2 != '\0') {
            local_31 = true;
            iVar5 = CSkill::GetStealLevelPenalty(local_38);
            local_30 = local_30 - iVar5;
          }
          this_00 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
          uVar10 = WongWork::CUserPremium::getOverSkillLevel(this_00);
          local_30 = local_30 + (uVar10 & 0xffff);
          cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
          cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
          local_2c = CSkill::getMaxSkillLevel(local_38,local_30,(int)cVar3,(int)cVar2);
          if (local_2c == -1) {
            local_54[local_3c * 2] = (_Mastered_skill)0x0;
            local_54[local_3c * 2 + 1] = (_Mastered_skill)0x0;
          }
          else {
            if (local_40 != 0) {
              local_21 = '\0';
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
              __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::__normal_iterator<std::pair<int,int>*>(local_a4,local_7c);
              while( true ) {
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                bVar4 = __gnu_cxx::operator!=(local_a4,local_78);
                if (!bVar4) break;
                puVar7 = (uint *)__gnu_cxx::
                                 __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                 ::operator->(local_a4);
                if (*puVar7 == (uint)(byte)local_54[local_3c * 2]) {
                  if ((char)local_54[local_3c * 2 + 1] == local_48) {
                    local_44 = local_44 + 1;
                  }
                  local_21 = '\x01';
                  break;
                }
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator++(local_a4);
              }
              if (local_21 != '\0') goto LAB_086064d7;
            }
            std::_List_const_iterator<_pre_skill>::_List_const_iterator(local_8c);
            std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
            while( true ) {
              std::list<_pre_skill,std::allocator<_pre_skill>>::end();
              cVar2 = std::_List_const_iterator<_pre_skill>::operator!=(local_8c,local_74);
              if (cVar2 == '\0') break;
              puVar8 = (undefined4 *)std::_List_const_iterator<_pre_skill>::operator*(local_8c);
              local_88 = *puVar8;
              local_84 = puVar8[1];
              local_80 = puVar8[2];
              cVar2 = check_skill_mastered(this,local_88,local_84,local_80,param_3);
              if (cVar2 != '\x01') {
                local_2c = 0;
                break;
              }
              std::_List_const_iterator<_pre_skill>::operator++(local_70,(int)local_8c);
            }
            if (local_2c < (char)local_54[local_3c * 2 + 1]) {
              local_28 = 0;
              iVar5 = G_CDataManager();
              iVar5 = *(int *)(iVar5 + 0x14);
              iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                        (local_98,(vector *)(iVar5 + iVar6 * 0x7dc + 0x240));
              local_22 = 1;
              cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
              if (cVar2 == '\0') {
                cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                    /* try { // try from 086061e4 to 0860644e has its CatchHandler @ 086064a2 */
                iVar5 = G_CDataManager();
                iVar5 = *(int *)(iVar5 + 0x14);
                iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                local_22 = CCharacter::get_give_skill
                                     ((CCharacter *)(iVar5 + iVar6 * 0x7dc),(int)cVar3,(int)cVar2,
                                      (vector *)local_98,1);
              }
              else {
                cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
                cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
                iVar5 = G_CDataManager();
                iVar5 = *(int *)(iVar5 + 0x14);
                iVar6 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
                local_22 = CCharacter::get_give_skill
                                     ((CCharacter *)(iVar5 + iVar6 * 0x7dc),(int)cVar3,(int)cVar2,
                                      (vector *)local_98,0);
              }
              if (local_22 == '\x01') {
                local_28 = 0;
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::__normal_iterator<std::pair<int,int>*>(local_a8,local_6c);
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::__normal_iterator<std::pair<int,int>*>(local_ac,local_68);
                while (bVar4 = __gnu_cxx::operator!=(local_a8,local_ac), bVar4) {
                  puVar7 = (uint *)__gnu_cxx::
                                   __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                   ::operator->(local_a8);
                  if (*puVar7 == (uint)(byte)local_54[local_3c * 2]) {
                    iVar5 = __gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_a8);
                    local_28 = *(int *)(iVar5 + 4);
                    break;
                  }
                  __gnu_cxx::
                  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator++(local_a8);
                }
                iVar5 = local_28;
                if (local_28 < local_2c) {
                  iVar5 = local_2c;
                }
                local_2c = iVar5;
                if (iVar5 < (char)local_54[local_3c * 2 + 1]) {
                  local_9c = 0;
                  local_a0 = 0;
                  calcReturnSpSfpPerOneSkill
                            (this,(int *)&local_9c,(int *)&local_a0,iVar5,local_54,local_3c,local_38
                             ,local_31);
                  stSPReturnInfo_t::stSPReturnInfo_t
                            (local_64,(ushort)(byte)local_54[local_3c * 2],
                             (short)(char)local_54[local_3c * 2 + 1] - (short)local_2c,local_9c,
                             local_a0);
                  std::vector<stSPReturnInfo_t,std::allocator<stSPReturnInfo_t>>::push_back
                            (param_1,local_64);
                  *local_50 = *local_50 + local_a0;
                  *local_4c = *local_4c + local_9c;
                  local_54[local_3c * 2 + 1] = SUB41(local_2c,0);
                  if (local_54[local_3c * 2 + 1] == (_Mastered_skill)0x0) {
                    local_54[local_3c * 2] = (_Mastered_skill)0x0;
                  }
                  local_55 = 1;
                }
              }
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_98);
            }
          }
        }
LAB_086064d7:
      }
      if ((local_40 != 0) &&
         (iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (local_40 + 0xc)), iVar5 != local_44)) {
        local_20 = 0;
        while (uVar10 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_40 + 0xc)), local_20 < uVar10) {
          puVar8 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_40 + 0xc),local_20);
          uVar1 = *puVar8;
          uVar9 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          growtype_skill(this,uVar9,uVar1,local_48,param_3);
          local_55 = 1;
          local_20 = local_20 + 1;
        }
      }
    }
  }
  return local_55;
}
```
