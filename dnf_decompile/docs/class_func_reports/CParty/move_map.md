# move_map

`_ZN6CParty8move_mapER12MSG_MOVE_MAP`

`CParty::move_map(MSG_MOVE_MAP&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8f4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8f4e  _ZN6CParty8move_mapER12MSG_MOVE_MAP
#           CParty::move_map(MSG_MOVE_MAP&)
# range [0x085a8f4e, 0x085a9329]
085a8f4e +0x000:  push   %ebp
085a8f4f +0x001:  mov    %esp,%ebp
085a8f51 +0x003:  push   %esi
085a8f52 +0x004:  push   %ebx
085a8f53 +0x005:  sub    $0x50,%esp
085a8f56 +0x008:  lea    -0x30(%ebp),%eax
085a8f59 +0x00b:  mov    %eax,(%esp)
085a8f5c +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a8f61 +0x013:  movl   $0x0,-0x24(%ebp)
085a8f68 +0x01a:  mov    0x8(%ebp),%eax
085a8f6b +0x01d:  movzbl 0x6a(%eax),%eax
085a8f6f +0x021:  cmp    $0x2,%al
085a8f71 +0x023:  je     085a8f98 <+0x4a>
085a8f73 +0x025:  movl   $0x13,0x8(%esp)
085a8f7b +0x02d:  movl   $0x30,0x4(%esp)
085a8f83 +0x035:  mov    0x8(%ebp),%eax
085a8f86 +0x038:  mov    %eax,(%esp)
085a8f89 +0x03b:  call   0859d1aa <_ZN6CParty23send_to_party_cmd_errorE14ENUM_CMDPACKETh>  ; CParty::send_to_party_cmd_error(ENUM_CMDPACKET, unsigned char)
085a8f8e +0x040:  mov    $0x0,%ebx
085a8f93 +0x045:  jmp    085a9315 <+0x3c7>
085a8f98 +0x04a:  mov    0x8(%ebp),%eax
085a8f9b +0x04d:  mov    0xcac(%eax),%eax
085a8fa1 +0x053:  mov    %eax,-0x20(%ebp)
085a8fa4 +0x056:  cmpl   $0x0,-0x20(%ebp)
085a8fa8 +0x05a:  je     085a8fc0 <+0x72>
085a8faa +0x05c:  mov    -0x20(%ebp),%eax
085a8fad +0x05f:  mov    %eax,(%esp)
085a8fb0 +0x062:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085a8fb5 +0x067:  test   %al,%al
085a8fb7 +0x069:  je     085a8fc0 <+0x72>
085a8fb9 +0x06b:  mov    $0x1,%eax
085a8fbe +0x070:  jmp    085a8fc5 <+0x77>
085a8fc0 +0x072:  mov    $0x0,%eax
085a8fc5 +0x077:  test   %al,%al
085a8fc7 +0x079:  je     085a8fea <+0x9c>
085a8fc9 +0x07b:  mov    0xc(%ebp),%eax
085a8fcc +0x07e:  movzbl 0x39(%eax),%eax
085a8fd0 +0x082:  movsbl %al,%eax
085a8fd3 +0x085:  mov    0x8(%ebp),%edx
085a8fd6 +0x088:  add    $0xb24,%edx
085a8fdc +0x08e:  mov    %eax,0x4(%esp)
085a8fe0 +0x092:  mov    %edx,(%esp)
085a8fe3 +0x095:  call   082a43cc <_GLOBAL__I__ZN4CLog5this_E+0x7f3>  ; global constructors keyed to CLog::this_+0x7f3
085a8fe8 +0x09a:  jmp    085a9023 <+0xd5>
085a8fea +0x09c:  mov    0x8(%ebp),%eax
085a8fed +0x09f:  add    $0xb24,%eax
085a8ff2 +0x0a4:  mov    %eax,(%esp)
085a8ff5 +0x0a7:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
085a8ffa +0x0ac:  test   %al,%al
085a8ffc +0x0ae:  je     085a9023 <+0xd5>
085a8ffe +0x0b0:  movl   $0x13,0x8(%esp)
085a9006 +0x0b8:  movl   $0x30,0x4(%esp)
085a900e +0x0c0:  mov    0x8(%ebp),%eax
085a9011 +0x0c3:  mov    %eax,(%esp)
085a9014 +0x0c6:  call   0859d1aa <_ZN6CParty23send_to_party_cmd_errorE14ENUM_CMDPACKETh>  ; CParty::send_to_party_cmd_error(ENUM_CMDPACKET, unsigned char)
085a9019 +0x0cb:  mov    $0x0,%ebx
085a901e +0x0d0:  jmp    085a9315 <+0x3c7>
085a9023 +0x0d5:  mov    0x8(%ebp),%eax
085a9026 +0x0d8:  add    $0xb24,%eax
085a902b +0x0dd:  mov    %eax,(%esp)
085a902e +0x0e0:  call   085bf32c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x88a>  ; global constructors keyed to CParty::cMember::cMember()+0x88a
085a9033 +0x0e5:  mov    %eax,-0x1c(%ebp)
085a9036 +0x0e8:  mov    0x8(%ebp),%eax
085a9039 +0x0eb:  add    $0xb24,%eax
085a903e +0x0f0:  mov    %eax,(%esp)
085a9041 +0x0f3:  call   085bf382 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x8e0>  ; global constructors keyed to CParty::cMember::cMember()+0x8e0
085a9046 +0x0f8:  mov    %eax,-0x18(%ebp)
085a9049 +0x0fb:  mov    0x8(%ebp),%eax
085a904c +0x0fe:  lea    0xb24(%eax),%edx
085a9052 +0x104:  mov    -0x18(%ebp),%eax
085a9055 +0x107:  mov    %eax,0x8(%esp)
085a9059 +0x10b:  mov    -0x1c(%ebp),%eax
085a905c +0x10e:  mov    %eax,0x4(%esp)
085a9060 +0x112:  mov    %edx,(%esp)
085a9063 +0x115:  call   085bf260 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7be>  ; global constructors keyed to CParty::cMember::cMember()+0x7be
085a9068 +0x11a:  mov    %eax,-0x14(%ebp)
085a906b +0x11d:  mov    0xc(%ebp),%eax
085a906e +0x120:  movzbl 0x17(%eax),%eax
085a9072 +0x124:  cmp    $0x1,%al
085a9074 +0x126:  jne    085a90a3 <+0x155>
085a9076 +0x128:  mov    0xc(%ebp),%eax
085a9079 +0x12b:  movzbl 0xe(%eax),%eax
085a907d +0x12f:  movsbl %al,%edx
085a9080 +0x132:  mov    0xc(%ebp),%eax
085a9083 +0x135:  movzbl 0xd(%eax),%eax
085a9087 +0x139:  movsbl %al,%eax
085a908a +0x13c:  mov    0x8(%ebp),%ecx
085a908d +0x13f:  add    $0xb24,%ecx
085a9093 +0x145:  mov    %edx,0x8(%esp)
085a9097 +0x149:  mov    %eax,0x4(%esp)
085a909b +0x14d:  mov    %ecx,(%esp)
085a909e +0x150:  call   0830e32e <_ZN13CBattle_Field15checkLayeredMapEii>  ; CBattle_Field::checkLayeredMap(int, int)
085a90a3 +0x155:  mov    0xc(%ebp),%eax
085a90a6 +0x158:  movzbl 0xe(%eax),%eax
085a90aa +0x15c:  movsbl %al,%edx
085a90ad +0x15f:  mov    0xc(%ebp),%eax
085a90b0 +0x162:  movzbl 0xd(%eax),%eax
085a90b4 +0x166:  movsbl %al,%eax
085a90b7 +0x169:  mov    0x8(%ebp),%ecx
085a90ba +0x16c:  add    $0xb24,%ecx
085a90c0 +0x172:  mov    %edx,0x8(%esp)
085a90c4 +0x176:  mov    %eax,0x4(%esp)
085a90c8 +0x17a:  mov    %ecx,(%esp)
085a90cb +0x17d:  call   085bf260 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7be>  ; global constructors keyed to CParty::cMember::cMember()+0x7be
085a90d0 +0x182:  mov    %eax,-0x10(%ebp)
085a90d3 +0x185:  mov    0xc(%ebp),%eax
085a90d6 +0x188:  mov    0x13(%eax),%ecx
085a90d9 +0x18b:  mov    0xc(%ebp),%eax
085a90dc +0x18e:  mov    0xf(%eax),%edx
085a90df +0x191:  mov    0x8(%ebp),%eax
085a90e2 +0x194:  mov    0x70(%eax),%eax
085a90e5 +0x197:  mov    0x8(%ebp),%ebx
085a90e8 +0x19a:  lea    0x1abc(%ebx),%esi
085a90ee +0x1a0:  mov    -0x14(%ebp),%ebx
085a90f1 +0x1a3:  mov    %ebx,0x14(%esp)
085a90f5 +0x1a7:  mov    %ecx,0x10(%esp)
085a90f9 +0x1ab:  mov    %edx,0xc(%esp)
085a90fd +0x1af:  mov    0x8(%ebp),%edx
085a9100 +0x1b2:  mov    %edx,0x8(%esp)
085a9104 +0x1b6:  mov    %eax,0x4(%esp)
085a9108 +0x1ba:  mov    %esi,(%esp)
085a910b +0x1bd:  call   0827a96e <_ZN24Secu_HackLogCheckByParty28CheckMoveMapFitInPathHackCntEP5CUserP6CPartyjji>  ; Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt(CUser*, CParty*, unsigned int, unsigned int, int)
085a9110 +0x1c2:  movb   $0x0,-0x31(%ebp)
085a9114 +0x1c6:  mov    0xc(%ebp),%eax
085a9117 +0x1c9:  movzbl 0xe(%eax),%eax
085a911b +0x1cd:  movsbl %al,%edx
085a911e +0x1d0:  mov    0xc(%ebp),%eax
085a9121 +0x1d3:  movzbl 0xd(%eax),%eax
085a9125 +0x1d7:  movsbl %al,%eax
085a9128 +0x1da:  mov    0x8(%ebp),%ecx
085a912b +0x1dd:  lea    0xb24(%ecx),%ebx
085a9131 +0x1e3:  lea    -0x31(%ebp),%ecx
085a9134 +0x1e6:  mov    %ecx,0xc(%esp)
085a9138 +0x1ea:  mov    %edx,0x8(%esp)
085a913c +0x1ee:  mov    %eax,0x4(%esp)
085a9140 +0x1f2:  mov    %ebx,(%esp)
085a9143 +0x1f5:  call   08308ae6 <_ZN13CBattle_Field7MoveMapEiiRb>  ; CBattle_Field::MoveMap(int, int, bool&)
085a9148 +0x1fa:  mov    %eax,-0x24(%ebp)
085a914b +0x1fd:  cmpl   $0x0,-0x24(%ebp)
085a914f +0x201:  jle    085a9178 <+0x22a>
085a9151 +0x203:  mov    -0x24(%ebp),%eax
085a9154 +0x206:  movzbl %al,%eax
085a9157 +0x209:  mov    %eax,0x8(%esp)
085a915b +0x20d:  movl   $0x30,0x4(%esp)
085a9163 +0x215:  mov    0x8(%ebp),%eax
085a9166 +0x218:  mov    %eax,(%esp)
085a9169 +0x21b:  call   0859d1aa <_ZN6CParty23send_to_party_cmd_errorE14ENUM_CMDPACKETh>  ; CParty::send_to_party_cmd_error(ENUM_CMDPACKET, unsigned char)
085a916e +0x220:  mov    $0x0,%ebx
085a9173 +0x225:  jmp    085a9315 <+0x3c7>
085a9178 +0x22a:  mov    0xc(%ebp),%eax
085a917b +0x22d:  mov    %eax,0x4(%esp)
085a917f +0x231:  mov    0x8(%ebp),%eax
085a9182 +0x234:  mov    %eax,(%esp)
085a9185 +0x237:  call   085a83a2 <_ZN6CParty19checkMoveMapHackCntER12MSG_MOVE_MAP>  ; CParty::checkMoveMapHackCnt(MSG_MOVE_MAP&)
085a918a +0x23c:  mov    0x8(%ebp),%eax
085a918d +0x23f:  mov    0xcac(%eax),%eax
085a9193 +0x245:  movzbl 0x89f(%eax),%eax
085a919a +0x24c:  test   %al,%al
085a919c +0x24e:  jle    085a91c0 <+0x272>
085a919e +0x250:  mov    0x8(%ebp),%eax
085a91a1 +0x253:  lea    0xb24(%eax),%edx
085a91a7 +0x259:  lea    -0x30(%ebp),%eax
085a91aa +0x25c:  mov    %eax,0x8(%esp)
085a91ae +0x260:  movl   $0xd3,0x4(%esp)
085a91b6 +0x268:  mov    %edx,(%esp)
085a91b9 +0x26b:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a91be +0x270:  jmp    085a91e0 <+0x292>
085a91c0 +0x272:  mov    0x8(%ebp),%eax
085a91c3 +0x275:  lea    0xb24(%eax),%edx
085a91c9 +0x27b:  lea    -0x30(%ebp),%eax
085a91cc +0x27e:  mov    %eax,0x8(%esp)
085a91d0 +0x282:  movl   $0x1d,0x4(%esp)
085a91d8 +0x28a:  mov    %edx,(%esp)
085a91db +0x28d:  call   083090a4 <_ZN13CBattle_Field10MakePacketEiPv>  ; CBattle_Field::MakePacket(int, void*)
085a91e0 +0x292:  lea    -0x30(%ebp),%eax
085a91e3 +0x295:  mov    %eax,0x4(%esp)
085a91e7 +0x299:  mov    0x8(%ebp),%eax
085a91ea +0x29c:  mov    %eax,(%esp)
085a91ed +0x29f:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a91f2 +0x2a4:  mov    0x8(%ebp),%eax
085a91f5 +0x2a7:  mov    %eax,(%esp)
085a91f8 +0x2aa:  call   085a932a <_ZN6CParty19check_passive_skillEv>  ; CParty::check_passive_skill()
085a91fd +0x2af:  mov    0x8(%ebp),%eax
085a9200 +0x2b2:  mov    %eax,(%esp)
085a9203 +0x2b5:  call   085b1fe0 <_ZN6CParty21send_loadingcheck_msgEv>  ; CParty::send_loadingcheck_msg()
085a9208 +0x2ba:  mov    0x8(%ebp),%eax
085a920b +0x2bd:  mov    %eax,(%esp)
085a920e +0x2c0:  call   085a8e0e <_ZN6CParty21resetFinishLoadingVarEv>  ; CParty::resetFinishLoadingVar()
085a9213 +0x2c5:  movzbl -0x31(%ebp),%eax
085a9217 +0x2c9:  movzbl %al,%eax
085a921a +0x2cc:  mov    %eax,0x8(%esp)
085a921e +0x2d0:  mov    0xc(%ebp),%eax
085a9221 +0x2d3:  mov    %eax,0x4(%esp)
085a9225 +0x2d7:  mov    0x8(%ebp),%eax
085a9228 +0x2da:  mov    %eax,(%esp)
085a922b +0x2dd:  call   085a8e3c <_ZN6CParty30changePartyMemberInfoOnMoveMapER12MSG_MOVE_MAPb>  ; CParty::changePartyMemberInfoOnMoveMap(MSG_MOVE_MAP&, bool)
085a9230 +0x2e2:  mov    0x8(%ebp),%eax
085a9233 +0x2e5:  mov    %eax,(%esp)
085a9236 +0x2e8:  call   085b4ae2 <_ZN6CParty18_getMemberLevelGapEv>  ; CParty::_getMemberLevelGap()
085a923b +0x2ed:  mov    %eax,-0xc(%ebp)
085a923e +0x2f0:  mov    0x8(%ebp),%eax
085a9241 +0x2f3:  mov    %eax,(%esp)
085a9244 +0x2f6:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a9249 +0x2fb:  cmp    $0x1,%eax
085a924c +0x2fe:  setg   %al
085a924f +0x301:  test   %al,%al
085a9251 +0x303:  je     085a929e <+0x350>
085a9253 +0x305:  cmpl   $0x6,-0xc(%ebp)
085a9257 +0x309:  jle    085a9281 <+0x333>
085a9259 +0x30b:  mov    0x8(%ebp),%eax
085a925c +0x30e:  mov    %eax,(%esp)
085a925f +0x311:  call   085b62c0 <_ZN6CParty12GetPartyTypeEv>  ; CParty::GetPartyType()
085a9264 +0x316:  mov    %eax,%ebx
085a9266 +0x318:  call   0860e765 <_Z30GetInstanceCommonStatisticsMgrv>  ; GetInstanceCommonStatisticsMgr()
085a926b +0x31d:  mov    %ebx,0x8(%esp)
085a926f +0x321:  movl   $0x0,0x4(%esp)
085a9277 +0x329:  mov    %eax,(%esp)
085a927a +0x32c:  call   0860e838 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi>  ; CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int)
085a927f +0x331:  jmp    085a929e <+0x350>
085a9281 +0x333:  call   0860e765 <_Z30GetInstanceCommonStatisticsMgrv>  ; GetInstanceCommonStatisticsMgr()
085a9286 +0x338:  movl   $0x3,0x8(%esp)
085a928e +0x340:  movl   $0x0,0x4(%esp)
085a9296 +0x348:  mov    %eax,(%esp)
085a9299 +0x34b:  call   0860e838 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi>  ; CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int)
085a929e +0x350:  movzbl -0x31(%ebp),%eax
085a92a2 +0x354:  movzbl %al,%eax
085a92a5 +0x357:  mov    %eax,0x4(%esp)
085a92a9 +0x35b:  mov    0x8(%ebp),%eax
085a92ac +0x35e:  mov    %eax,(%esp)
085a92af +0x361:  call   085a8ee0 <_ZN6CParty25changeBattleDataOnMoveMapEb>  ; CParty::changeBattleDataOnMoveMap(bool)
085a92b4 +0x366:  mov    0x8(%ebp),%eax
085a92b7 +0x369:  mov    %eax,(%esp)
085a92ba +0x36c:  call   085bdc76 <_ZN6CParty22getDungeonDropTestFlagEv>  ; CParty::getDungeonDropTestFlag()
085a92bf +0x371:  test   %al,%al
085a92c1 +0x373:  je     085a92f3 <+0x3a5>
085a92c3 +0x375:  movzbl -0x31(%ebp),%eax
085a92c7 +0x379:  xor    $0x1,%eax
085a92ca +0x37c:  test   %al,%al
085a92cc +0x37e:  je     085a92f3 <+0x3a5>
085a92ce +0x380:  mov    0x8(%ebp),%eax
085a92d1 +0x383:  add    $0xb24,%eax
085a92d6 +0x388:  mov    %eax,(%esp)
085a92d9 +0x38b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
085a92de +0x390:  mov    0x8(%ebp),%edx
085a92e1 +0x393:  add    $0x1af4,%edx
085a92e7 +0x399:  mov    %eax,0x4(%esp)
085a92eb +0x39d:  mov    %edx,(%esp)
085a92ee +0x3a0:  call   084b472c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x7df>  ; global constructors keyed to game_master::CMacro::Reset()+0x7df
085a92f3 +0x3a5:  mov    $0x1,%ebx
085a92f8 +0x3aa:  jmp    085a9315 <+0x3c7>
085a92fa +0x3ac:  mov    %edx,%ebx
085a92fc +0x3ae:  mov    %eax,%esi
085a92fe +0x3b0:  lea    -0x30(%ebp),%eax
085a9301 +0x3b3:  mov    %eax,(%esp)
085a9304 +0x3b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a9309 +0x3bb:  mov    %esi,%eax
085a930b +0x3bd:  mov    %ebx,%edx
085a930d +0x3bf:  mov    %eax,(%esp)
085a9310 +0x3c2:  call   08ae3750 <_Unwind_Resume>
085a9315 +0x3c7:  lea    -0x30(%ebp),%eax
085a9318 +0x3ca:  mov    %eax,(%esp)
085a931b +0x3cd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a9320 +0x3d2:  mov    %ebx,%eax
085a9322 +0x3d4:  add    $0x50,%esp
085a9325 +0x3d7:  pop    %ebx
085a9326 +0x3d8:  pop    %esi
085a9327 +0x3d9:  pop    %ebp
085a9328 +0x3da:  ret
085a9329 +0x3db:  nop
```

## 反编译 C

```c
// CParty::move_map @ 0x85a8f4e

/* CParty::move_map(MSG_MOVE_MAP&) */

undefined4 __thiscall CParty::move_map(CParty *this,MSG_MOVE_MAP *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  MapInfo *pMVar5;
  undefined4 uVar6;
  bool *pbVar7;
  bool local_35;
  PacketGuard local_34 [12];
  uint local_28;
  CDungeon *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_34);
  local_28 = 0;
  if (this[0x6a] != (CParty)0x2) {
                    /* try { // try from 085a8f89 to 085a92f2 has its CatchHandler @ 085a92fa */
    send_to_party_cmd_error(this,0x30,0x13);
    uVar6 = 0;
    goto LAB_085a9315;
  }
  local_24 = *(CDungeon **)(this + 0xcac);
  if (local_24 == (CDungeon *)0x0) {
LAB_085a8fc0:
    bVar1 = false;
  }
  else {
    cVar2 = CDungeon::IsEnterEachMap(local_24);
    if (cVar2 == '\0') goto LAB_085a8fc0;
    bVar1 = true;
  }
  if (bVar1) {
    CBattle_Field::SetCurSeatNo((CBattle_Field *)(this + 0xb24),(int)(char)param_1[0x39]);
  }
  else {
    cVar2 = CBattle_Field::IsClearDungeon((CBattle_Field *)(this + 0xb24));
    if (cVar2 != '\0') {
      send_to_party_cmd_error(this,0x30,0x13);
      uVar6 = 0;
      goto LAB_085a9315;
    }
  }
  local_20 = CBattle_Field::GetCurPosX((CBattle_Field *)(this + 0xb24));
  local_1c = CBattle_Field::GetCurPosY((CBattle_Field *)(this + 0xb24));
  local_18 = CBattle_Field::get_map_index((CBattle_Field *)(this + 0xb24),local_20,local_1c);
  if (param_1[0x17] == (MSG_MOVE_MAP)0x1) {
    CBattle_Field::checkLayeredMap
              ((CBattle_Field *)(this + 0xb24),(int)(char)param_1[0xd],(int)(char)param_1[0xe]);
  }
  local_14 = CBattle_Field::get_map_index
                       ((CBattle_Field *)(this + 0xb24),(int)(char)param_1[0xd],
                        (int)(char)param_1[0xe]);
  iVar3 = *(int *)(param_1 + 0x13);
  uVar6 = local_18;
  Secu_HackLogCheckByParty::CheckMoveMapFitInPathHackCnt
            ((CUser *)(this + 0x1abc),*(CParty **)(this + 0x70),(uint)this,*(uint *)(param_1 + 0xf),
             iVar3);
  local_35 = false;
  pbVar7 = &local_35;
  local_28 = CBattle_Field::MoveMap
                       ((CBattle_Field *)(this + 0xb24),(int)(char)param_1[0xd],
                        (int)(char)param_1[0xe],pbVar7);
  if ((int)local_28 < 1) {
    checkMoveMapHackCnt(this,param_1);
    if (*(char *)(*(int *)(this + 0xcac) + 0x89f) < '\x01') {
      CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0x1d,local_34);
    }
    else {
      CBattle_Field::MakePacket((CBattle_Field *)(this + 0xb24),0xd3,local_34);
    }
    send_to_party(this,local_34);
    check_passive_skill();
    send_loadingcheck_msg(this);
    resetFinishLoadingVar(this);
    changePartyMemberInfoOnMoveMap(this,param_1,local_35);
    local_10 = _getMemberLevelGap(this);
    iVar3 = get_member_count(this);
    if (1 < iVar3) {
      if (local_10 < 7) {
        uVar6 = GetInstanceCommonStatisticsMgr();
        CCommonStatisticsMgr::IncreaseQuantity(uVar6,0,3);
      }
      else {
        uVar6 = GetPartyType(this);
        uVar4 = GetInstanceCommonStatisticsMgr();
        CCommonStatisticsMgr::IncreaseQuantity(uVar4,0,uVar6);
      }
    }
    changeBattleDataOnMoveMap(this,local_35);
    cVar2 = getDungeonDropTestFlag(this);
    if ((cVar2 != '\0') && (local_35 != true)) {
      pMVar5 = (MapInfo *)CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(this + 0xb24));
      std::vector<MapInfo,std::allocator<MapInfo>>::push_back
                ((vector<MapInfo,std::allocator<MapInfo>> *)(this + 0x1af4),pMVar5);
    }
    uVar6 = 1;
  }
  else {
    send_to_party_cmd_error(this,0x30,local_28 & 0xff,pbVar7,iVar3,uVar6);
    uVar6 = 0;
  }
LAB_085a9315:
  PacketGuard::~PacketGuard(local_34);
  return uVar6;
}
```
