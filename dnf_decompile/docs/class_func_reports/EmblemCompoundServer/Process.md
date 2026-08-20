# Process

`_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE`

`EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*)`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x08191afa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191afa  _ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE
#           EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*)
# range [0x08191afa, 0x081921b5]
08191afa +0x000:  push   %ebp
08191afb +0x001:  mov    %esp,%ebp
08191afd +0x003:  push   %esi
08191afe +0x004:  push   %ebx
08191aff +0x005:  sub    $0xe0,%esp
08191b05 +0x00b:  mov    0x10(%ebp),%eax
08191b08 +0x00e:  movzwl 0x14(%eax),%eax
08191b0c +0x012:  movzwl %ax,%edx
08191b0f +0x015:  mov    0x10(%ebp),%eax
08191b12 +0x018:  movzwl 0x2(%eax),%eax
08191b16 +0x01c:  cwtl
08191b17 +0x01d:  mov    %edx,0x8(%esp)
08191b1b +0x021:  mov    %eax,0x4(%esp)
08191b1f +0x025:  mov    0x8(%ebp),%eax
08191b22 +0x028:  mov    %eax,(%esp)
08191b25 +0x02b:  call   081919e8 <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit>  ; EmblemCompoundServer::GetEmblemRandomIndex(int, unsigned short)
08191b2a +0x030:  mov    %eax,-0x1c(%ebp)
08191b2d +0x033:  cmpl   $0x0,-0x1c(%ebp)
08191b31 +0x037:  jne    08191b58 <+0x5e>
08191b33 +0x039:  movl   $0x13,0x8(%esp)
08191b3b +0x041:  movl   $0x24e,0x4(%esp)
08191b43 +0x049:  mov    0xc(%ebp),%eax
08191b46 +0x04c:  mov    %eax,(%esp)
08191b49 +0x04f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191b4e +0x054:  mov    $0x0,%ebx
08191b53 +0x059:  jmp    081921aa <+0x6b0>
08191b58 +0x05e:  mov    -0x1c(%ebp),%ebx
08191b5b +0x061:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08191b60 +0x066:  mov    %ebx,0x4(%esp)
08191b64 +0x06a:  mov    %eax,(%esp)
08191b67 +0x06d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08191b6c +0x072:  mov    %eax,-0x18(%ebp)
08191b6f +0x075:  cmpl   $0x0,-0x18(%ebp)
08191b73 +0x079:  je     08191b8c <+0x92>
08191b75 +0x07b:  mov    -0x18(%ebp),%eax
08191b78 +0x07e:  mov    (%eax),%eax
08191b7a +0x080:  add    $0xc,%eax
08191b7d +0x083:  mov    (%eax),%edx
08191b7f +0x085:  mov    -0x18(%ebp),%eax
08191b82 +0x088:  mov    %eax,(%esp)
08191b85 +0x08b:  call   *%edx
08191b87 +0x08d:  cmp    $0x14,%eax
08191b8a +0x090:  je     08191b93 <+0x99>
08191b8c +0x092:  mov    $0x1,%eax
08191b91 +0x097:  jmp    08191b98 <+0x9e>
08191b93 +0x099:  mov    $0x0,%eax
08191b98 +0x09e:  test   %al,%al
08191b9a +0x0a0:  je     08191bdb <+0xe1>
08191b9c +0x0a2:  movl   $0x16,0x8(%esp)
08191ba4 +0x0aa:  movl   $0x24e,0x4(%esp)
08191bac +0x0b2:  mov    0xc(%ebp),%eax
08191baf +0x0b5:  mov    %eax,(%esp)
08191bb2 +0x0b8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191bb7 +0x0bd:  mov    -0x1c(%ebp),%eax
08191bba +0x0c0:  mov    %eax,0x8(%esp)
08191bbe +0x0c4:  mov    0xc(%ebp),%eax
08191bc1 +0x0c7:  mov    %eax,0x4(%esp)
08191bc5 +0x0cb:  movl   $"EMBLEM COMPOUND",(%esp)
08191bcc +0x0d2:  call   08197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>  ; ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
08191bd1 +0x0d7:  mov    $0x0,%ebx
08191bd6 +0x0dc:  jmp    081921aa <+0x6b0>
08191bdb +0x0e1:  mov    0x10(%ebp),%eax
08191bde +0x0e4:  movzwl 0x2(%eax),%eax
08191be2 +0x0e8:  cwtl
08191be3 +0x0e9:  mov    %eax,-0x34(%ebp)
08191be6 +0x0ec:  mov    0x8(%ebp),%eax
08191be9 +0x0ef:  lea    0x4(%eax),%edx
08191bec +0x0f2:  lea    -0x34(%ebp),%eax
08191bef +0x0f5:  mov    %eax,0x4(%esp)
08191bf3 +0x0f9:  mov    %edx,(%esp)
08191bf6 +0x0fc:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
08191bfb +0x101:  mov    (%eax),%ebx
08191bfd +0x103:  mov    0xc(%ebp),%eax
08191c00 +0x106:  mov    %eax,(%esp)
08191c03 +0x109:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08191c08 +0x10e:  movl   $0x1,0xc(%esp)
08191c10 +0x116:  movl   $0x23,0x8(%esp)
08191c18 +0x11e:  mov    %ebx,0x4(%esp)
08191c1c +0x122:  mov    %eax,(%esp)
08191c1f +0x125:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08191c24 +0x12a:  xor    $0x1,%eax
08191c27 +0x12d:  test   %al,%al
08191c29 +0x12f:  je     08191cce <+0x1d4>
08191c2f +0x135:  movl   $0xa,0x8(%esp)
08191c37 +0x13d:  movl   $0x24e,0x4(%esp)
08191c3f +0x145:  mov    0xc(%ebp),%eax
08191c42 +0x148:  mov    %eax,(%esp)
08191c45 +0x14b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191c4a +0x150:  mov    0xc(%ebp),%eax
08191c4d +0x153:  mov    %eax,(%esp)
08191c50 +0x156:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08191c55 +0x15b:  mov    %eax,%ebx
08191c57 +0x15d:  mov    0x10(%ebp),%eax
08191c5a +0x160:  movzwl 0x2(%eax),%eax
08191c5e +0x164:  cwtl
08191c5f +0x165:  mov    %eax,-0x30(%ebp)
08191c62 +0x168:  mov    0x8(%ebp),%eax
08191c65 +0x16b:  lea    0x4(%eax),%edx
08191c68 +0x16e:  lea    -0x30(%ebp),%eax
08191c6b +0x171:  mov    %eax,0x4(%esp)
08191c6f +0x175:  mov    %edx,(%esp)
08191c72 +0x178:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
08191c77 +0x17d:  mov    (%eax),%esi
08191c79 +0x17f:  mov    0xc(%ebp),%eax
08191c7c +0x182:  mov    %eax,(%esp)
08191c7f +0x185:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08191c84 +0x18a:  mov    %eax,(%esp)
08191c87 +0x18d:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08191c8c +0x192:  mov    %ebx,0x1c(%esp)
08191c90 +0x196:  mov    %esi,0x18(%esp)
08191c94 +0x19a:  mov    %eax,0x14(%esp)
08191c98 +0x19e:  movl   $"EMBLEM COMPOUND : [money:%d] [need:%d] [charac_no:%d]",0x10(%esp)
08191ca0 +0x1a6:  movl   $0x24e,0xc(%esp)
08191ca8 +0x1ae:  movl   $&_ZZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundEE19__PRETTY_FUNCTION__,0x8(%esp)
08191cb0 +0x1b6:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
08191cb8 +0x1be:  movl   $0x1,(%esp)
08191cbf +0x1c5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08191cc4 +0x1ca:  mov    $0x0,%ebx
08191cc9 +0x1cf:  jmp    081921aa <+0x6b0>
08191cce +0x1d4:  mov    0x10(%ebp),%eax
08191cd1 +0x1d7:  movzwl (%eax),%eax
08191cd4 +0x1da:  movzwl %ax,%ebx
08191cd7 +0x1dd:  mov    0xc(%ebp),%eax
08191cda +0x1e0:  mov    %eax,(%esp)
08191cdd +0x1e3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08191ce2 +0x1e8:  movl   $0x1,0x14(%esp)
08191cea +0x1f0:  movl   $0x8,0x10(%esp)
08191cf2 +0x1f8:  movl   $0x1,0xc(%esp)
08191cfa +0x200:  mov    %ebx,0x8(%esp)
08191cfe +0x204:  movl   $0x1,0x4(%esp)
08191d06 +0x20c:  mov    %eax,(%esp)
08191d09 +0x20f:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08191d0e +0x214:  xor    $0x1,%eax
08191d11 +0x217:  test   %al,%al
08191d13 +0x219:  je     08191d5a <+0x260>
08191d15 +0x21b:  movl   $0x1,0x8(%esp)
08191d1d +0x223:  movl   $0x24e,0x4(%esp)
08191d25 +0x22b:  mov    0xc(%ebp),%eax
08191d28 +0x22e:  mov    %eax,(%esp)
08191d2b +0x231:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191d30 +0x236:  mov    0x10(%ebp),%eax
08191d33 +0x239:  movzwl (%eax),%eax
08191d36 +0x23c:  movzwl %ax,%eax
08191d39 +0x23f:  mov    %eax,0x8(%esp)
08191d3d +0x243:  mov    0xc(%ebp),%eax
08191d40 +0x246:  mov    %eax,0x4(%esp)
08191d44 +0x24a:  movl   $"EMBLEM COMPOUND",(%esp)
08191d4b +0x251:  call   08197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>  ; ARAD::PRINT_ERROR::delete_item(char*, CUser*, unsigned short)
08191d50 +0x256:  mov    $0x0,%ebx
08191d55 +0x25b:  jmp    081921aa <+0x6b0>
08191d5a +0x260:  mov    0x10(%ebp),%eax
08191d5d +0x263:  movzwl 0x8(%eax),%eax
08191d61 +0x267:  movzwl %ax,%ebx
08191d64 +0x26a:  mov    0xc(%ebp),%eax
08191d67 +0x26d:  mov    %eax,(%esp)
08191d6a +0x270:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08191d6f +0x275:  movl   $0x1,0x14(%esp)
08191d77 +0x27d:  movl   $0x8,0x10(%esp)
08191d7f +0x285:  movl   $0x1,0xc(%esp)
08191d87 +0x28d:  mov    %ebx,0x8(%esp)
08191d8b +0x291:  movl   $0x1,0x4(%esp)
08191d93 +0x299:  mov    %eax,(%esp)
08191d96 +0x29c:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08191d9b +0x2a1:  xor    $0x1,%eax
08191d9e +0x2a4:  test   %al,%al
08191da0 +0x2a6:  je     08191de8 <+0x2ee>
08191da2 +0x2a8:  movl   $0x1,0x8(%esp)
08191daa +0x2b0:  movl   $0x24e,0x4(%esp)
08191db2 +0x2b8:  mov    0xc(%ebp),%eax
08191db5 +0x2bb:  mov    %eax,(%esp)
08191db8 +0x2be:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191dbd +0x2c3:  mov    0x10(%ebp),%eax
08191dc0 +0x2c6:  movzwl 0x8(%eax),%eax
08191dc4 +0x2ca:  movzwl %ax,%eax
08191dc7 +0x2cd:  mov    %eax,0x8(%esp)
08191dcb +0x2d1:  mov    0xc(%ebp),%eax
08191dce +0x2d4:  mov    %eax,0x4(%esp)
08191dd2 +0x2d8:  movl   $"EMBLEM COMPOUND",(%esp)
08191dd9 +0x2df:  call   08197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>  ; ARAD::PRINT_ERROR::delete_item(char*, CUser*, unsigned short)
08191dde +0x2e4:  mov    $0x0,%ebx
08191de3 +0x2e9:  jmp    081921aa <+0x6b0>
08191de8 +0x2ee:  lea    -0x89(%ebp),%eax
08191dee +0x2f4:  mov    %eax,(%esp)
08191df1 +0x2f7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08191df6 +0x2fc:  mov    -0x18(%ebp),%eax
08191df9 +0x2ff:  mov    %eax,(%esp)
08191dfc +0x302:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08191e01 +0x307:  mov    %eax,-0x87(%ebp)
08191e07 +0x30d:  mov    -0x18(%ebp),%eax
08191e0a +0x310:  mov    (%eax),%eax
08191e0c +0x312:  add    $0x8,%eax
08191e0f +0x315:  mov    (%eax),%edx
08191e11 +0x317:  lea    -0x89(%ebp),%eax
08191e17 +0x31d:  mov    %eax,0x4(%esp)
08191e1b +0x321:  mov    -0x18(%ebp),%eax
08191e1e +0x324:  mov    %eax,(%esp)
08191e21 +0x327:  call   *%edx
08191e23 +0x329:  movl   $0x1,0x4(%esp)
08191e2b +0x331:  lea    -0x89(%ebp),%eax
08191e31 +0x337:  mov    %eax,(%esp)
08191e34 +0x33a:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08191e39 +0x33f:  mov    0xc(%ebp),%eax
08191e3c +0x342:  mov    %eax,(%esp)
08191e3f +0x345:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08191e44 +0x34a:  movl   $0x1,0x4c(%esp)
08191e4c +0x352:  movl   $0x1,0x48(%esp)
08191e54 +0x35a:  movl   $0x9,0x44(%esp)
08191e5c +0x362:  mov    -0x89(%ebp),%edx
08191e62 +0x368:  mov    %edx,0x4(%esp)
08191e66 +0x36c:  mov    -0x85(%ebp),%edx
08191e6c +0x372:  mov    %edx,0x8(%esp)
08191e70 +0x376:  mov    -0x81(%ebp),%edx
08191e76 +0x37c:  mov    %edx,0xc(%esp)
08191e7a +0x380:  mov    -0x7d(%ebp),%edx
08191e7d +0x383:  mov    %edx,0x10(%esp)
08191e81 +0x387:  mov    -0x79(%ebp),%edx
08191e84 +0x38a:  mov    %edx,0x14(%esp)
08191e88 +0x38e:  mov    -0x75(%ebp),%edx
08191e8b +0x391:  mov    %edx,0x18(%esp)
08191e8f +0x395:  mov    -0x71(%ebp),%edx
08191e92 +0x398:  mov    %edx,0x1c(%esp)
08191e96 +0x39c:  mov    -0x6d(%ebp),%edx
08191e99 +0x39f:  mov    %edx,0x20(%esp)
08191e9d +0x3a3:  mov    -0x69(%ebp),%edx
08191ea0 +0x3a6:  mov    %edx,0x24(%esp)
08191ea4 +0x3aa:  mov    -0x65(%ebp),%edx
08191ea7 +0x3ad:  mov    %edx,0x28(%esp)
08191eab +0x3b1:  mov    -0x61(%ebp),%edx
08191eae +0x3b4:  mov    %edx,0x2c(%esp)
08191eb2 +0x3b8:  mov    -0x5d(%ebp),%edx
08191eb5 +0x3bb:  mov    %edx,0x30(%esp)
08191eb9 +0x3bf:  mov    -0x59(%ebp),%edx
08191ebc +0x3c2:  mov    %edx,0x34(%esp)
08191ec0 +0x3c6:  mov    -0x55(%ebp),%edx
08191ec3 +0x3c9:  mov    %edx,0x38(%esp)
08191ec7 +0x3cd:  mov    -0x51(%ebp),%edx
08191eca +0x3d0:  mov    %edx,0x3c(%esp)
08191ece +0x3d4:  movzbl -0x4d(%ebp),%edx
08191ed2 +0x3d8:  mov    %dl,0x40(%esp)
08191ed6 +0x3dc:  mov    %eax,(%esp)
08191ed9 +0x3df:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08191ede +0x3e4:  mov    %ax,-0x12(%ebp)
08191ee2 +0x3e8:  movzwl -0x12(%ebp),%eax
08191ee6 +0x3ec:  not    %eax
08191ee8 +0x3ee:  shr    $0xf,%ax
08191eec +0x3f2:  test   %al,%al
08191eee +0x3f4:  jne    08191faf <+0x4b5>
08191ef4 +0x3fa:  movl   $0x0,0xc(%esp)
08191efc +0x402:  movl   $"game_server_msg_122",0x8(%esp)
08191f04 +0x40a:  movl   $0x4,0x4(%esp)
08191f0c +0x412:  movl   $&g_scriptStringManager_,(%esp)
08191f13 +0x419:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08191f18 +0x41e:  mov    %eax,-0x10(%ebp)
08191f1b +0x421:  movl   $0x0,0xc(%esp)
08191f23 +0x429:  movl   $"game_server_msg_123",0x8(%esp)
08191f2b +0x431:  movl   $0x4,0x4(%esp)
08191f33 +0x439:  movl   $&g_scriptStringManager_,(%esp)
08191f3a +0x440:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08191f3f +0x445:  mov    %eax,-0xc(%ebp)
08191f42 +0x448:  mov    0xc(%ebp),%eax
08191f45 +0x44b:  mov    %eax,(%esp)
08191f48 +0x44e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08191f4d +0x453:  mov    %eax,%ebx
08191f4f +0x455:  mov    -0xc(%ebp),%eax
08191f52 +0x458:  mov    %eax,(%esp)
08191f55 +0x45b:  call   0807e3b0 <_init+0xca8>
08191f5a +0x460:  mov    %eax,%esi
08191f5c +0x462:  mov    0xc(%ebp),%eax
08191f5f +0x465:  mov    %eax,(%esp)
08191f62 +0x468:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08191f67 +0x46d:  movl   $0x0,0x24(%esp)
08191f6f +0x475:  movl   $0x0,0x20(%esp)
08191f77 +0x47d:  mov    %ebx,0x1c(%esp)
08191f7b +0x481:  movl   $0x0,0x18(%esp)
08191f83 +0x489:  mov    %esi,0x14(%esp)
08191f87 +0x48d:  mov    -0xc(%ebp),%edx
08191f8a +0x490:  mov    %edx,0x10(%esp)
08191f8e +0x494:  mov    %eax,0xc(%esp)
08191f92 +0x498:  movl   $0x0,0x8(%esp)
08191f9a +0x4a0:  lea    -0x89(%ebp),%eax
08191fa0 +0x4a6:  mov    %eax,0x4(%esp)
08191fa4 +0x4aa:  mov    -0x10(%ebp),%eax
08191fa7 +0x4ad:  mov    %eax,(%esp)
08191faa +0x4b0:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08191faf +0x4b5:  mov    0x10(%ebp),%eax
08191fb2 +0x4b8:  mov    -0x1c(%ebp),%edx
08191fb5 +0x4bb:  mov    %edx,0x10(%eax)
08191fb8 +0x4be:  lea    -0x40(%ebp),%eax
08191fbb +0x4c1:  mov    %eax,(%esp)
08191fbe +0x4c4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08191fc3 +0x4c9:  lea    -0x40(%ebp),%eax
08191fc6 +0x4cc:  mov    %eax,(%esp)
08191fc9 +0x4cf:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08191fce +0x4d4:  movl   $0x24e,0x8(%esp)
08191fd6 +0x4dc:  movl   $0x1,0x4(%esp)
08191fde +0x4e4:  lea    -0x40(%ebp),%eax
08191fe1 +0x4e7:  mov    %eax,(%esp)
08191fe4 +0x4ea:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08191fe9 +0x4ef:  movl   $0x1,0x4(%esp)
08191ff1 +0x4f7:  lea    -0x40(%ebp),%eax
08191ff4 +0x4fa:  mov    %eax,(%esp)
08191ff7 +0x4fd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08191ffc +0x502:  mov    0xc(%ebp),%eax
08191fff +0x505:  mov    %eax,(%esp)
08192002 +0x508:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08192007 +0x50d:  mov    %eax,(%esp)
0819200a +0x510:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0819200f +0x515:  mov    %eax,0x4(%esp)
08192013 +0x519:  lea    -0x40(%ebp),%eax
08192016 +0x51c:  mov    %eax,(%esp)
08192019 +0x51f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819201e +0x524:  mov    0x10(%ebp),%eax
08192021 +0x527:  movzwl (%eax),%eax
08192024 +0x52a:  movzwl %ax,%eax
08192027 +0x52d:  mov    %eax,0x4(%esp)
0819202b +0x531:  lea    -0x40(%ebp),%eax
0819202e +0x534:  mov    %eax,(%esp)
08192031 +0x537:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08192036 +0x53c:  mov    0x10(%ebp),%eax
08192039 +0x53f:  movzwl 0x8(%eax),%eax
0819203d +0x543:  movzwl %ax,%eax
08192040 +0x546:  mov    %eax,0x4(%esp)
08192044 +0x54a:  lea    -0x40(%ebp),%eax
08192047 +0x54d:  mov    %eax,(%esp)
0819204a +0x550:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0819204f +0x555:  mov    0x10(%ebp),%eax
08192052 +0x558:  movzwl 0x2(%eax),%eax
08192056 +0x55c:  movswl %ax,%ebx
08192059 +0x55f:  call   08193776 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x3de>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x3de
0819205e +0x564:  mov    %ebx,0x4(%esp)
08192062 +0x568:  mov    %eax,(%esp)
08192065 +0x56b:  call   08191ad6 <_ZN20EmblemCompoundServer18IsResultSelectableEi>  ; EmblemCompoundServer::IsResultSelectable(int)
0819206a +0x570:  movzbl %al,%eax
0819206d +0x573:  mov    %eax,0x4(%esp)
08192071 +0x577:  lea    -0x40(%ebp),%eax
08192074 +0x57a:  mov    %eax,(%esp)
08192077 +0x57d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819207c +0x582:  mov    0x10(%ebp),%eax
0819207f +0x585:  mov    0x10(%eax),%eax
08192082 +0x588:  mov    %eax,0x4(%esp)
08192086 +0x58c:  lea    -0x40(%ebp),%eax
08192089 +0x58f:  mov    %eax,(%esp)
0819208c +0x592:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08192091 +0x597:  movl   $0x1,0x4(%esp)
08192099 +0x59f:  lea    -0x40(%ebp),%eax
0819209c +0x5a2:  mov    %eax,(%esp)
0819209f +0x5a5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081920a4 +0x5aa:  lea    -0x40(%ebp),%eax
081920a7 +0x5ad:  mov    %eax,0x4(%esp)
081920ab +0x5b1:  mov    0xc(%ebp),%eax
081920ae +0x5b4:  mov    %eax,(%esp)
081920b1 +0x5b7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081920b6 +0x5bc:  cmpw   $0x0,-0x12(%ebp)
081920bb +0x5c1:  js     081920e0 <+0x5e6>
081920bd +0x5c3:  movswl -0x12(%ebp),%eax
081920c1 +0x5c7:  mov    %eax,0xc(%esp)
081920c5 +0x5cb:  movl   $0x0,0x8(%esp)
081920cd +0x5d3:  movl   $0x1,0x4(%esp)
081920d5 +0x5db:  mov    0xc(%ebp),%eax
081920d8 +0x5de:  mov    %eax,(%esp)
081920db +0x5e1:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081920e0 +0x5e6:  mov    0x10(%ebp),%eax
081920e3 +0x5e9:  movzwl 0x2(%eax),%eax
081920e7 +0x5ed:  movswl %ax,%ebx
081920ea +0x5f0:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
081920ef +0x5f5:  mov    %ebx,0x4(%esp)
081920f3 +0x5f9:  mov    %eax,(%esp)
081920f6 +0x5fc:  call   081933b4 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x1c>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x1c
081920fb +0x601:  lea    -0x4c(%ebp),%eax
081920fe +0x604:  mov    %eax,(%esp)
08192101 +0x607:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08192106 +0x60c:  lea    -0x24(%ebp),%eax
08192109 +0x60f:  lea    -0x89(%ebp),%edx
0819210f +0x615:  add    $0x7,%edx
08192112 +0x618:  mov    %edx,0x8(%esp)
08192116 +0x61c:  lea    -0x89(%ebp),%edx
0819211c +0x622:  add    $0x2,%edx
0819211f +0x625:  mov    %edx,0x4(%esp)
08192123 +0x629:  mov    %eax,(%esp)
08192126 +0x62c:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0819212b +0x631:  sub    $0x4,%esp
0819212e +0x634:  lea    -0x24(%ebp),%eax
08192131 +0x637:  mov    %eax,0x4(%esp)
08192135 +0x63b:  lea    -0x2c(%ebp),%eax
08192138 +0x63e:  mov    %eax,(%esp)
0819213b +0x641:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
08192140 +0x646:  lea    -0x2c(%ebp),%eax
08192143 +0x649:  mov    %eax,0x4(%esp)
08192147 +0x64d:  lea    -0x4c(%ebp),%eax
0819214a +0x650:  mov    %eax,(%esp)
0819214d +0x653:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08192152 +0x658:  lea    -0x4c(%ebp),%eax
08192155 +0x65b:  mov    %eax,(%esp)
08192158 +0x65e:  call   081931dc <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE>  ; AvatarConvertServer::StatisticsEmblemCreate(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0819215d +0x663:  mov    $0x1,%ebx
08192162 +0x668:  lea    -0x4c(%ebp),%eax
08192165 +0x66b:  mov    %eax,(%esp)
08192168 +0x66e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0819216d +0x673:  jmp    0819219f <+0x6a5>
0819216f +0x675:  mov    %edx,%ebx
08192171 +0x677:  mov    %eax,%esi
08192173 +0x679:  lea    -0x4c(%ebp),%eax
08192176 +0x67c:  mov    %eax,(%esp)
08192179 +0x67f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0819217e +0x684:  mov    %esi,%eax
08192180 +0x686:  mov    %ebx,%edx
08192182 +0x688:  jmp    08192184 <+0x68a>
08192184 +0x68a:  mov    %edx,%ebx
08192186 +0x68c:  mov    %eax,%esi
08192188 +0x68e:  lea    -0x40(%ebp),%eax
0819218b +0x691:  mov    %eax,(%esp)
0819218e +0x694:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08192193 +0x699:  mov    %esi,%eax
08192195 +0x69b:  mov    %ebx,%edx
08192197 +0x69d:  mov    %eax,(%esp)
0819219a +0x6a0:  call   08ae3750 <_Unwind_Resume>
0819219f +0x6a5:  lea    -0x40(%ebp),%eax
081921a2 +0x6a8:  mov    %eax,(%esp)
081921a5 +0x6ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081921aa +0x6b0:  mov    %ebx,%eax
081921ac +0x6b2:  lea    -0x8(%ebp),%esp
081921af +0x6b5:  add    $0x0,%esp
081921b2 +0x6b8:  pop    %ebx
081921b3 +0x6b9:  pop    %esi
081921b4 +0x6ba:  pop    %ebp
081921b5 +0x6bb:  ret
```

## 反编译 C

```c
// EmblemCompoundServer::Process @ 0x8191afa

/* EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*) */

undefined4 __thiscall
EmblemCompoundServer::Process
          (EmblemCompoundServer *this,CUser *param_1,SigAradEmblemCompound *param_2)

{
  undefined2 uVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  CDataManager *this_00;
  undefined4 *puVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  size_t sVar10;
  uint uVar11;
  CCompoundEmblemStatistic *this_01;
  undefined4 uVar12;
  undefined2 local_8d;
  undefined2 uStack_8b;
  undefined2 uStack_89;
  undefined2 uStack_87;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined1 local_51;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  PacketGuard local_44 [12];
  int local_38;
  int local_34;
  pair<int,int> local_30 [8];
  ulong local_28 [2];
  int local_20;
  CItem *local_1c;
  short local_16;
  undefined4 local_14;
  char *local_10;
  
  iVar5 = GetEmblemRandomIndex(this,(int)*(short *)(param_2 + 2),*(ushort *)(param_2 + 0x14));
  local_20 = iVar5;
  if (iVar5 != 0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = (CItem *)CDataManager::find_item(this_00,iVar5);
    if ((local_1c == (CItem *)0x0) ||
       (iVar5 = (**(code **)(*(int *)local_1c + 0xc))(local_1c), iVar5 != 0x14)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      CUser::SendCmdErrorPacket(param_1,0x24e,0x16);
      ARAD::PRINT_ERROR::find_item("EMBLEM COMPOUND",param_1,local_20);
      uVar12 = 0;
    }
    else {
      local_38 = (int)*(short *)(param_2 + 2);
      puVar6 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          (this + 4),&local_38);
      uVar12 = *puVar6;
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar4 = CInventory::use_money(pCVar7,uVar12,0x23,1);
      if (cVar4 == '\x01') {
        uVar1 = *(undefined2 *)param_2;
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar4 = CInventory::delete_item(pCVar7,1,uVar1,1,8,1);
        if (cVar4 == '\x01') {
          uVar1 = *(undefined2 *)(param_2 + 8);
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar4 = CInventory::delete_item(pCVar7,1,uVar1,1,8,1);
          if (cVar4 == '\x01') {
            Inven_Item::Inven_Item((Inven_Item *)&local_8d);
            uVar12 = CItem::get_index(local_1c);
            uStack_8b = (undefined2)uVar12;
            uStack_89 = (undefined2)((uint)uVar12 >> 0x10);
            (**(code **)(*(int *)local_1c + 8))(local_1c,&local_8d);
            Inven_Item::set_add_info((Inven_Item *)&local_8d,1);
            uVar12 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_16 = CInventory::insertItemIntoInventory
                                 (uVar12,CONCAT22(uStack_8b,local_8d),CONCAT22(uStack_87,uStack_89),
                                  local_85,local_81,local_7d,local_79,local_75,local_71,local_6d,
                                  local_69,local_65,local_61,local_5d,local_59,local_55,local_51,9,1
                                  ,1);
            if (local_16 < 0) {
              local_14 = RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_122",(bool *)0x0);
              local_10 = (char *)RDARScriptStringManager::findString
                                           ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                            "game_server_msg_123",(bool *)0x0);
              uVar12 = CUser::GetServerGroup(param_1);
              sVar10 = strlen(local_10);
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (local_14,&local_8d,0,uVar8,local_10,sVar10,0,uVar12,0,0);
            }
            *(int *)(param_2 + 0x10) = local_20;
            PacketGuard::PacketGuard(local_44);
                    /* try { // try from 08191fc9 to 08192105 has its CatchHandler @ 08192184 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,1,0x24e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar5 = CInventory::get_money(pCVar7);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,iVar5);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,(uint)*(ushort *)param_2);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_44,(uint)*(ushort *)(param_2 + 8));
            iVar5 = ARAD::Singleton<EmblemCompoundServer>::Get();
            uVar11 = IsResultSelectable(iVar5);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,uVar11 & 0xff);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,*(int *)(param_2 + 0x10));
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
            CUser::Send(param_1,local_44);
            if (-1 < local_16) {
              CUser::SendUpdateItem(param_1,1,0,(int)local_16);
            }
            sVar2 = *(short *)(param_2 + 2);
            this_01 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
            CCompoundEmblemStatistic::increaseCount(this_01,(int)sVar2);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
                    /* try { // try from 08192126 to 0819215c has its CatchHandler @ 0819216f */
            std::make_pair<unsigned_long&,int&>(local_28,(int *)&uStack_8b);
            std::pair<int,int>::pair<unsigned_long,int>(local_30,(pair *)local_28);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_50,local_30);
            AvatarConvertServer::StatisticsEmblemCreate((vector *)local_50);
            uVar12 = 1;
                    /* try { // try from 08192168 to 0819216c has its CatchHandler @ 08192184 */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
            PacketGuard::~PacketGuard(local_44);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x24e,1);
            ARAD::PRINT_ERROR::delete_item("EMBLEM COMPOUND",param_1,*(ushort *)(param_2 + 8));
            uVar12 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x24e,1);
          ARAD::PRINT_ERROR::delete_item("EMBLEM COMPOUND",param_1,*(ushort *)param_2);
          uVar12 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,10);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        local_34 = (int)*(short *)(param_2 + 2);
        puVar6 = (undefined4 *)
                 std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                 operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            (this + 4),&local_34);
        uVar12 = *puVar6;
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar9 = CInventory::get_money(pCVar7);
        LogManager::logFormat
                  (1,"localjapan/Arad_EmblemReformServer.cpp",
                   "bool EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*)",0x24e,
                   "EMBLEM COMPOUND : [money:%d] [need:%d] [charac_no:%d]",uVar9,uVar12,uVar8);
        uVar12 = 0;
      }
    }
    return uVar12;
  }
  CUser::SendCmdErrorPacket(param_1,0x24e,0x13);
  return 0;
}
```
