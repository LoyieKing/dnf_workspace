# loadData

`_ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc`

`fair_pvp::CFairPvPScore::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a48f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a48f8  _ZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPc
#           fair_pvp::CFairPvPScore::loadData(CUser*, char*)
# range [0x084a48f8, 0x084a55a7]
084a48f8 +0x000:  push   %ebp
084a48f9 +0x001:  mov    %esp,%ebp
084a48fb +0x003:  push   %edi
084a48fc +0x004:  push   %esi
084a48fd +0x005:  push   %ebx
084a48fe +0x006:  sub    $0x22c,%esp
084a4904 +0x00c:  mov    0x10(%ebp),%eax
084a4907 +0x00f:  mov    %eax,-0x38(%ebp)
084a490a +0x012:  movl   $0x0,-0x34(%ebp)
084a4911 +0x019:  movl   $0x0,-0x34(%ebp)
084a4918 +0x020:  jmp    084a4a1c <+0x124>
084a491d +0x025:  mov    -0x34(%ebp),%eax
084a4920 +0x028:  add    $0x2,%eax
084a4923 +0x02b:  shl    $0x4,%eax
084a4926 +0x02e:  add    -0x38(%ebp),%eax
084a4929 +0x031:  lea    0x14(%eax),%ebx
084a492c +0x034:  mov    -0x34(%ebp),%edx
084a492f +0x037:  mov    -0x38(%ebp),%eax
084a4932 +0x03a:  add    $0x2,%edx
084a4935 +0x03d:  shl    $0x4,%edx
084a4938 +0x040:  movzbl 0x11(%edx,%eax,1),%eax
084a493d +0x045:  movzbl %al,%edx
084a4940 +0x048:  mov    -0x34(%ebp),%ecx
084a4943 +0x04b:  mov    -0x38(%ebp),%eax
084a4946 +0x04e:  add    $0x2,%ecx
084a4949 +0x051:  shl    $0x4,%ecx
084a494c +0x054:  movzbl 0x10(%ecx,%eax,1),%eax
084a4951 +0x059:  movzbl %al,%eax
084a4954 +0x05c:  mov    %edx,0x8(%esp)
084a4958 +0x060:  mov    %eax,0x4(%esp)
084a495c +0x064:  lea    -0x4c(%ebp),%eax
084a495f +0x067:  mov    %eax,(%esp)
084a4962 +0x06a:  call   084a643a <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x422>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x422
084a4967 +0x06f:  lea    -0x60(%ebp),%eax
084a496a +0x072:  mov    %ebx,0x8(%esp)
084a496e +0x076:  lea    -0x4c(%ebp),%edx
084a4971 +0x079:  mov    %edx,0x4(%esp)
084a4975 +0x07d:  mov    %eax,(%esp)
084a4978 +0x080:  call   084a65fd <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x5e5>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x5e5
084a497d +0x085:  sub    $0x4,%esp
084a4980 +0x088:  lea    -0x60(%ebp),%eax
084a4983 +0x08b:  mov    %eax,0x4(%esp)
084a4987 +0x08f:  lea    -0x74(%ebp),%eax
084a498a +0x092:  mov    %eax,(%esp)
084a498d +0x095:  call   084a663c <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x624>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x624
084a4992 +0x09a:  mov    0x8(%ebp),%eax
084a4995 +0x09d:  lea    0x8(%eax),%ecx
084a4998 +0x0a0:  lea    -0x7c(%ebp),%eax
084a499b +0x0a3:  lea    -0x74(%ebp),%edx
084a499e +0x0a6:  mov    %edx,0x8(%esp)
084a49a2 +0x0aa:  mov    %ecx,0x4(%esp)
084a49a6 +0x0ae:  mov    %eax,(%esp)
084a49a9 +0x0b1:  call   084a6684 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x66c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x66c
084a49ae +0x0b6:  sub    $0x4,%esp
084a49b1 +0x0b9:  movzbl -0x78(%ebp),%eax
084a49b5 +0x0bd:  xor    $0x1,%eax
084a49b8 +0x0c0:  test   %al,%al
084a49ba +0x0c2:  je     084a4a18 <+0x120>
084a49bc +0x0c4:  mov    -0x34(%ebp),%edx
084a49bf +0x0c7:  mov    -0x38(%ebp),%eax
084a49c2 +0x0ca:  add    $0x2,%edx
084a49c5 +0x0cd:  shl    $0x4,%edx
084a49c8 +0x0d0:  movzbl 0x11(%edx,%eax,1),%eax
084a49cd +0x0d5:  movzbl %al,%edx
084a49d0 +0x0d8:  mov    -0x34(%ebp),%ecx
084a49d3 +0x0db:  mov    -0x38(%ebp),%eax
084a49d6 +0x0de:  add    $0x2,%ecx
084a49d9 +0x0e1:  shl    $0x4,%ecx
084a49dc +0x0e4:  movzbl 0x10(%ecx,%eax,1),%eax
084a49e1 +0x0e9:  movzbl %al,%eax
084a49e4 +0x0ec:  mov    %edx,0x18(%esp)
084a49e8 +0x0f0:  mov    %eax,0x14(%esp)
084a49ec +0x0f4:  movl   $"job_score_.insert error(%d,%d)",0x10(%esp)
084a49f4 +0x0fc:  movl   $0x20,0xc(%esp)
084a49fc +0x104:  movl   $&_ZZN8fair_pvp13CFairPvPScore8loadDataEP5CUserPcE19__PRETTY_FUNCTION__,0x8(%esp)
084a4a04 +0x10c:  movl   $"FairPvPScore.cpp",0x4(%esp)
084a4a0c +0x114:  movl   $0x1,(%esp)
084a4a13 +0x11b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084a4a18 +0x120:  addl   $0x1,-0x34(%ebp)
084a4a1c +0x124:  mov    -0x38(%ebp),%eax
084a4a1f +0x127:  movzbl 0x2c(%eax),%eax
084a4a23 +0x12b:  movzbl %al,%eax
084a4a26 +0x12e:  cmp    -0x34(%ebp),%eax
084a4a29 +0x131:  jle    084a4a38 <+0x140>
084a4a2b +0x133:  cmpl   $0x63,-0x34(%ebp)
084a4a2f +0x137:  jg     084a4a38 <+0x140>
084a4a31 +0x139:  mov    $0x1,%eax
084a4a36 +0x13e:  jmp    084a4a3d <+0x145>
084a4a38 +0x140:  mov    $0x0,%eax
084a4a3d +0x145:  test   %al,%al
084a4a3f +0x147:  jne    084a491d <+0x25>
084a4a45 +0x14d:  movl   $0x0,-0x34(%ebp)
084a4a4c +0x154:  jmp    084a4a84 <+0x18c>
084a4a4e +0x156:  mov    -0x34(%ebp),%eax
084a4a51 +0x159:  mov    -0x38(%ebp),%edx
084a4a54 +0x15c:  movzbl 0x670(%edx,%eax,1),%eax
084a4a5c +0x164:  test   %al,%al
084a4a5e +0x166:  je     084a4a91 <+0x199>
084a4a60 +0x168:  mov    -0x34(%ebp),%eax
084a4a63 +0x16b:  add    $0x660,%eax
084a4a68 +0x170:  add    -0x38(%ebp),%eax
084a4a6b +0x173:  lea    0x10(%eax),%edx
084a4a6e +0x176:  mov    0x8(%ebp),%eax
084a4a71 +0x179:  add    $0x20,%eax
084a4a74 +0x17c:  mov    %edx,0x4(%esp)
084a4a78 +0x180:  mov    %eax,(%esp)
084a4a7b +0x183:  call   084a66b0 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x698>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x698
084a4a80 +0x188:  addl   $0x1,-0x34(%ebp)
084a4a84 +0x18c:  cmpl   $0x9,-0x34(%ebp)
084a4a88 +0x190:  setle  %al
084a4a8b +0x193:  test   %al,%al
084a4a8d +0x195:  jne    084a4a4e <+0x156>
084a4a8f +0x197:  jmp    084a4a92 <+0x19a>
084a4a91 +0x199:  nop
084a4a92 +0x19a:  movl   $0x0,-0x34(%ebp)
084a4a99 +0x1a1:  jmp    084a4ad8 <+0x1e0>
084a4a9b +0x1a3:  mov    -0x34(%ebp),%edx
084a4a9e +0x1a6:  mov    -0x34(%ebp),%ebx
084a4aa1 +0x1a9:  mov    0x8(%ebp),%ecx
084a4aa4 +0x1ac:  mov    %edx,%eax
084a4aa6 +0x1ae:  add    %eax,%eax
084a4aa8 +0x1b0:  add    %edx,%eax
084a4aaa +0x1b2:  shl    $0x2,%eax
084a4aad +0x1b5:  lea    (%ecx,%eax,1),%eax
084a4ab0 +0x1b8:  lea    0x20(%eax),%ecx
084a4ab3 +0x1bb:  mov    -0x38(%ebp),%edx
084a4ab6 +0x1be:  mov    %ebx,%eax
084a4ab8 +0x1c0:  add    %eax,%eax
084a4aba +0x1c2:  add    %ebx,%eax
084a4abc +0x1c4:  shl    $0x2,%eax
084a4abf +0x1c7:  mov    0x4(%eax,%edx,1),%ebx
084a4ac3 +0x1cb:  mov    %ebx,0x8(%ecx)
084a4ac6 +0x1ce:  mov    0x8(%eax,%edx,1),%ebx
084a4aca +0x1d2:  mov    %ebx,0xc(%ecx)
084a4acd +0x1d5:  mov    0xc(%eax,%edx,1),%eax
084a4ad1 +0x1d9:  mov    %eax,0x10(%ecx)
084a4ad4 +0x1dc:  addl   $0x1,-0x34(%ebp)
084a4ad8 +0x1e0:  cmpl   $0x1,-0x34(%ebp)
084a4adc +0x1e4:  setle  %al
084a4adf +0x1e7:  test   %al,%al
084a4ae1 +0x1e9:  jne    084a4a9b <+0x1a3>
084a4ae3 +0x1eb:  mov    -0x38(%ebp),%eax
084a4ae6 +0x1ee:  mov    0x1c(%eax),%edx
084a4ae9 +0x1f1:  mov    0x8(%ebp),%eax
084a4aec +0x1f4:  mov    %edx,0x40(%eax)
084a4aef +0x1f7:  mov    -0x38(%ebp),%eax
084a4af2 +0x1fa:  mov    0x20(%eax),%edx
084a4af5 +0x1fd:  mov    0x8(%ebp),%eax
084a4af8 +0x200:  mov    %edx,0x44(%eax)
084a4afb +0x203:  mov    -0x38(%ebp),%eax
084a4afe +0x206:  mov    0x24(%eax),%edx
084a4b01 +0x209:  mov    0x8(%ebp),%eax
084a4b04 +0x20c:  mov    %edx,0x48(%eax)
084a4b07 +0x20f:  mov    -0x38(%ebp),%eax
084a4b0a +0x212:  mov    0x28(%eax),%edx
084a4b0d +0x215:  mov    0x8(%ebp),%eax
084a4b10 +0x218:  mov    %edx,0x4c(%eax)
084a4b13 +0x21b:  mov    -0x38(%ebp),%eax
084a4b16 +0x21e:  mov    0x67c(%eax),%edx
084a4b1c +0x224:  mov    0x8(%ebp),%eax
084a4b1f +0x227:  mov    %edx,0x50(%eax)
084a4b22 +0x22a:  mov    -0x38(%ebp),%eax
084a4b25 +0x22d:  mov    0x680(%eax),%eax
084a4b2b +0x233:  mov    %eax,%edx
084a4b2d +0x235:  mov    0x8(%ebp),%eax
084a4b30 +0x238:  mov    %edx,0x54(%eax)
084a4b33 +0x23b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a4b38 +0x240:  mov    %eax,(%esp)
084a4b3b +0x243:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084a4b40 +0x248:  cmp    $0xf,%eax
084a4b43 +0x24b:  je     084a4b57 <+0x25f>
084a4b45 +0x24d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a4b4a +0x252:  mov    %eax,(%esp)
084a4b4d +0x255:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084a4b52 +0x25a:  cmp    $0x10,%eax
084a4b55 +0x25d:  jne    084a4b6b <+0x273>
084a4b57 +0x25f:  mov    -0x38(%ebp),%eax
084a4b5a +0x262:  mov    0x680(%eax),%eax
084a4b60 +0x268:  test   %eax,%eax
084a4b62 +0x26a:  jne    084a4b6b <+0x273>
084a4b64 +0x26c:  mov    $0x1,%eax
084a4b69 +0x271:  jmp    084a4b70 <+0x278>
084a4b6b +0x273:  mov    $0x0,%eax
084a4b70 +0x278:  test   %al,%al
084a4b72 +0x27a:  je     084a4eaa <+0x5b2>
084a4b78 +0x280:  lea    -0x94(%ebp),%eax
084a4b7e +0x286:  mov    %eax,(%esp)
084a4b81 +0x289:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
084a4b86 +0x28e:  mov    0xc(%ebp),%eax
084a4b89 +0x291:  mov    %eax,(%esp)
084a4b8c +0x294:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
084a4b91 +0x299:  mov    0x14(%eax),%ebx
084a4b94 +0x29c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a4b99 +0x2a1:  add    $0x68,%eax
084a4b9c +0x2a4:  mov    %ebx,0x4(%esp)
084a4ba0 +0x2a8:  mov    %eax,(%esp)
084a4ba3 +0x2ab:  call   084a60e2 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0xca>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0xca
084a4ba8 +0x2b0:  mov    %eax,-0x98(%ebp)
084a4bae +0x2b6:  mov    -0x98(%ebp),%eax
084a4bb4 +0x2bc:  test   %eax,%eax
084a4bb6 +0x2be:  jle    084a4bf0 <+0x2f8>
084a4bb8 +0x2c0:  movl   $0xcf0,-0x3c(%ebp)
084a4bbf +0x2c7:  lea    -0x98(%ebp),%eax
084a4bc5 +0x2cd:  mov    %eax,0x8(%esp)
084a4bc9 +0x2d1:  lea    -0x3c(%ebp),%eax
084a4bcc +0x2d4:  mov    %eax,0x4(%esp)
084a4bd0 +0x2d8:  lea    -0x44(%ebp),%eax
084a4bd3 +0x2db:  mov    %eax,(%esp)
084a4bd6 +0x2de:  call   080dae82 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x101f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x101f
084a4bdb +0x2e3:  lea    -0x44(%ebp),%eax
084a4bde +0x2e6:  mov    %eax,0x4(%esp)
084a4be2 +0x2ea:  lea    -0x94(%ebp),%eax
084a4be8 +0x2f0:  mov    %eax,(%esp)
084a4beb +0x2f3:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
084a4bf0 +0x2f8:  mov    0xc(%ebp),%eax
084a4bf3 +0x2fb:  mov    %eax,(%esp)
084a4bf6 +0x2fe:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
084a4bfb +0x303:  mov    %eax,%esi
084a4bfd +0x305:  mov    0xc(%ebp),%eax
084a4c00 +0x308:  mov    %eax,(%esp)
084a4c03 +0x30b:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
084a4c08 +0x310:  movsbl %al,%edi
084a4c0b +0x313:  mov    0xc(%ebp),%eax
084a4c0e +0x316:  mov    %eax,(%esp)
084a4c11 +0x319:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084a4c16 +0x31e:  mov    %eax,%ebx
084a4c18 +0x320:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a4c1d +0x325:  lea    0x68(%eax),%edx
084a4c20 +0x328:  lea    -0x94(%ebp),%eax
084a4c26 +0x32e:  mov    %eax,0x10(%esp)
084a4c2a +0x332:  mov    %esi,0xc(%esp)
084a4c2e +0x336:  mov    %edi,0x8(%esp)
084a4c32 +0x33a:  mov    %ebx,0x4(%esp)
084a4c36 +0x33e:  mov    %edx,(%esp)
084a4c39 +0x341:  call   084a61c4 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x1ac>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x1ac
084a4c3e +0x346:  lea    -0x94(%ebp),%eax
084a4c44 +0x34c:  mov    %eax,(%esp)
084a4c47 +0x34f:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
084a4c4c +0x354:  xor    $0x1,%eax
084a4c4f +0x357:  test   %al,%al
084a4c51 +0x359:  je     084a4e5d <+0x565>
084a4c57 +0x35f:  lea    -0xa4(%ebp),%eax
084a4c5d +0x365:  mov    %eax,(%esp)
084a4c60 +0x368:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
084a4c65 +0x36d:  mov    0xc(%ebp),%eax
084a4c68 +0x370:  mov    %eax,(%esp)
084a4c6b +0x373:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084a4c70 +0x378:  movl   $"game_server_msg_172",0x1c(%esp)
084a4c78 +0x380:  movl   $"game_server_msg_171",0x18(%esp)
084a4c80 +0x388:  movl   $0x1,0x14(%esp)
084a4c88 +0x390:  movl   $0x8,0x10(%esp)
084a4c90 +0x398:  movl   $0x3,0xc(%esp)
084a4c98 +0x3a0:  lea    -0xa4(%ebp),%edx
084a4c9e +0x3a6:  mov    %edx,0x8(%esp)
084a4ca2 +0x3aa:  lea    -0x94(%ebp),%edx
084a4ca8 +0x3b0:  mov    %edx,0x4(%esp)
084a4cac +0x3b4:  mov    %eax,(%esp)
084a4caf +0x3b7:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
084a4cb4 +0x3bc:  mov    %eax,-0x30(%ebp)
084a4cb7 +0x3bf:  cmpl   $0x0,-0x30(%ebp)
084a4cbb +0x3c3:  jle    084a4cd7 <+0x3df>
084a4cbd +0x3c5:  lea    -0xa4(%ebp),%eax
084a4cc3 +0x3cb:  mov    %eax,(%esp)
084a4cc6 +0x3ce:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
084a4ccb +0x3d3:  cmp    $0x2,%eax
084a4cce +0x3d6:  jbe    084a4cd7 <+0x3df>
084a4cd0 +0x3d8:  mov    $0x1,%eax
084a4cd5 +0x3dd:  jmp    084a4cdc <+0x3e4>
084a4cd7 +0x3df:  mov    $0x0,%eax
084a4cdc +0x3e4:  test   %al,%al
084a4cde +0x3e6:  je     084a4e4f <+0x557>
084a4ce4 +0x3ec:  lea    -0xb0(%ebp),%eax
084a4cea +0x3f2:  mov    %eax,(%esp)
084a4ced +0x3f5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a4cf2 +0x3fa:  movl   $0xe,0x8(%esp)
084a4cfa +0x402:  movl   $0x0,0x4(%esp)
084a4d02 +0x40a:  lea    -0xb0(%ebp),%eax
084a4d08 +0x410:  mov    %eax,(%esp)
084a4d0b +0x413:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a4d10 +0x418:  movl   $0x0,0x4(%esp)
084a4d18 +0x420:  lea    -0xb0(%ebp),%eax
084a4d1e +0x426:  mov    %eax,(%esp)
084a4d21 +0x429:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a4d26 +0x42e:  lea    -0xb0(%ebp),%eax
084a4d2c +0x434:  mov    %eax,(%esp)
084a4d2f +0x437:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084a4d34 +0x43c:  mov    %eax,-0xb4(%ebp)
084a4d3a +0x442:  movl   $0x0,-0x2c(%ebp)
084a4d41 +0x449:  mov    -0x2c(%ebp),%eax
084a4d44 +0x44c:  mov    %eax,0x4(%esp)
084a4d48 +0x450:  lea    -0xb0(%ebp),%eax
084a4d4e +0x456:  mov    %eax,(%esp)
084a4d51 +0x459:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a4d56 +0x45e:  movl   $0x0,-0x28(%ebp)
084a4d5d +0x465:  jmp    084a4dab <+0x4b3>
084a4d5f +0x467:  mov    -0x28(%ebp),%eax
084a4d62 +0x46a:  mov    %eax,0x4(%esp)
084a4d66 +0x46e:  lea    -0xa4(%ebp),%eax
084a4d6c +0x474:  mov    %eax,(%esp)
084a4d6f +0x477:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
084a4d74 +0x47c:  mov    (%eax),%ebx
084a4d76 +0x47e:  mov    0xc(%ebp),%eax
084a4d79 +0x481:  mov    %eax,(%esp)
084a4d7c +0x484:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084a4d81 +0x489:  lea    -0xb0(%ebp),%edx
084a4d87 +0x48f:  mov    %edx,0xc(%esp)
084a4d8b +0x493:  mov    %ebx,0x8(%esp)
084a4d8f +0x497:  movl   $0x1,0x4(%esp)
084a4d97 +0x49f:  mov    %eax,(%esp)
084a4d9a +0x4a2:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
084a4d9f +0x4a7:  test   %al,%al
084a4da1 +0x4a9:  je     084a4da7 <+0x4af>
084a4da3 +0x4ab:  addl   $0x1,-0x2c(%ebp)
084a4da7 +0x4af:  addl   $0x3,-0x28(%ebp)
084a4dab +0x4b3:  lea    -0xa4(%ebp),%eax
084a4db1 +0x4b9:  mov    %eax,(%esp)
084a4db4 +0x4bc:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
084a4db9 +0x4c1:  cmp    -0x28(%ebp),%eax
084a4dbc +0x4c4:  seta   %al
084a4dbf +0x4c7:  test   %al,%al
084a4dc1 +0x4c9:  jne    084a4d5f <+0x467>
084a4dc3 +0x4cb:  mov    -0x2c(%ebp),%eax
084a4dc6 +0x4ce:  mov    %eax,0x8(%esp)
084a4dca +0x4d2:  lea    -0xb4(%ebp),%eax
084a4dd0 +0x4d8:  mov    %eax,0x4(%esp)
084a4dd4 +0x4dc:  lea    -0xb0(%ebp),%eax
084a4dda +0x4e2:  mov    %eax,(%esp)
084a4ddd +0x4e5:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
084a4de2 +0x4ea:  movl   $0x1,0x4(%esp)
084a4dea +0x4f2:  lea    -0xb0(%ebp),%eax
084a4df0 +0x4f8:  mov    %eax,(%esp)
084a4df3 +0x4fb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a4df8 +0x500:  lea    -0xb0(%ebp),%eax
084a4dfe +0x506:  mov    %eax,0x4(%esp)
084a4e02 +0x50a:  mov    0xc(%ebp),%eax
084a4e05 +0x50d:  mov    %eax,(%esp)
084a4e08 +0x510:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084a4e0d +0x515:  jmp    084a4e27 <+0x52f>
084a4e0f +0x517:  mov    %edx,%ebx
084a4e11 +0x519:  mov    %eax,%esi
084a4e13 +0x51b:  lea    -0xb0(%ebp),%eax
084a4e19 +0x521:  mov    %eax,(%esp)
084a4e1c +0x524:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a4e21 +0x529:  mov    %esi,%eax
084a4e23 +0x52b:  mov    %ebx,%edx
084a4e25 +0x52d:  jmp    084a4e37 <+0x53f>
084a4e27 +0x52f:  lea    -0xb0(%ebp),%eax
084a4e2d +0x535:  mov    %eax,(%esp)
084a4e30 +0x538:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a4e35 +0x53d:  jmp    084a4e4f <+0x557>
084a4e37 +0x53f:  mov    %edx,%ebx
084a4e39 +0x541:  mov    %eax,%esi
084a4e3b +0x543:  lea    -0xa4(%ebp),%eax
084a4e41 +0x549:  mov    %eax,(%esp)
084a4e44 +0x54c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
084a4e49 +0x551:  mov    %esi,%eax
084a4e4b +0x553:  mov    %ebx,%edx
084a4e4d +0x555:  jmp    084a4e8c <+0x594>
084a4e4f +0x557:  lea    -0xa4(%ebp),%eax
084a4e55 +0x55d:  mov    %eax,(%esp)
084a4e58 +0x560:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
084a4e5d +0x565:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084a4e64 +0x56c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084a4e69 +0x571:  mov    %eax,%edx
084a4e6b +0x573:  mov    0x8(%ebp),%eax
084a4e6e +0x576:  mov    %edx,0x54(%eax)
084a4e71 +0x579:  mov    0x8(%ebp),%eax
084a4e74 +0x57c:  mov    %eax,(%esp)
084a4e77 +0x57f:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
084a4e7c +0x584:  lea    -0x94(%ebp),%eax
084a4e82 +0x58a:  mov    %eax,(%esp)
084a4e85 +0x58d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
084a4e8a +0x592:  jmp    084a4eaa <+0x5b2>
084a4e8c +0x594:  mov    %edx,%ebx
084a4e8e +0x596:  mov    %eax,%esi
084a4e90 +0x598:  lea    -0x94(%ebp),%eax
084a4e96 +0x59e:  mov    %eax,(%esp)
084a4e99 +0x5a1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
084a4e9e +0x5a6:  mov    %esi,%eax
084a4ea0 +0x5a8:  mov    %ebx,%edx
084a4ea2 +0x5aa:  mov    %eax,(%esp)
084a4ea5 +0x5ad:  call   08ae3750 <_Unwind_Resume>
084a4eaa +0x5b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a4eaf +0x5b7:  movzwl 0x49e0(%eax),%eax
084a4eb6 +0x5be:  movzwl %ax,%edx
084a4eb9 +0x5c1:  mov    0x8(%ebp),%eax
084a4ebc +0x5c4:  mov    0x50(%eax),%eax
084a4ebf +0x5c7:  cmp    %eax,%edx
084a4ec1 +0x5c9:  setbe  %al
084a4ec4 +0x5cc:  test   %al,%al
084a4ec6 +0x5ce:  je     084a4ed1 <+0x5d9>
084a4ec8 +0x5d0:  mov    0x8(%ebp),%eax
084a4ecb +0x5d3:  movb   $0x0,0x5a(%eax)
084a4ecf +0x5d7:  jmp    084a4eed <+0x5f5>
084a4ed1 +0x5d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a4ed6 +0x5de:  movzwl 0x49e0(%eax),%eax
084a4edd +0x5e5:  mov    %eax,%edx
084a4edf +0x5e7:  mov    0x8(%ebp),%eax
084a4ee2 +0x5ea:  mov    0x50(%eax),%eax
084a4ee5 +0x5ed:  sub    %al,%dl
084a4ee7 +0x5ef:  mov    0x8(%ebp),%eax
084a4eea +0x5f2:  mov    %dl,0x5a(%eax)
084a4eed +0x5f5:  lea    -0x88(%ebp),%eax
084a4ef3 +0x5fb:  mov    %eax,(%esp)
084a4ef6 +0x5fe:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a4efb +0x603:  movl   $0x152,0x8(%esp)
084a4f03 +0x60b:  movl   $0x0,0x4(%esp)
084a4f0b +0x613:  lea    -0x88(%ebp),%eax
084a4f11 +0x619:  mov    %eax,(%esp)
084a4f14 +0x61c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a4f19 +0x621:  mov    0x8(%ebp),%eax
084a4f1c +0x624:  movzbl 0x5a(%eax),%eax
084a4f20 +0x628:  movzbl %al,%eax
084a4f23 +0x62b:  mov    %eax,0x4(%esp)
084a4f27 +0x62f:  lea    -0x88(%ebp),%eax
084a4f2d +0x635:  mov    %eax,(%esp)
084a4f30 +0x638:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a4f35 +0x63d:  movl   $0x1,0x4(%esp)
084a4f3d +0x645:  lea    -0x88(%ebp),%eax
084a4f43 +0x64b:  mov    %eax,(%esp)
084a4f46 +0x64e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a4f4b +0x653:  lea    -0x88(%ebp),%eax
084a4f51 +0x659:  mov    %eax,0x4(%esp)
084a4f55 +0x65d:  mov    0xc(%ebp),%eax
084a4f58 +0x660:  mov    %eax,(%esp)
084a4f5b +0x663:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084a4f60 +0x668:  mov    -0x38(%ebp),%eax
084a4f63 +0x66b:  movzbl 0x684(%eax),%edx
084a4f6a +0x672:  mov    0x8(%ebp),%eax
084a4f6d +0x675:  mov    %dl,0x5b(%eax)
084a4f70 +0x678:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a4f75 +0x67d:  mov    %eax,(%esp)
084a4f78 +0x680:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084a4f7d +0x685:  cmp    $0xf,%eax
084a4f80 +0x688:  je     084a4f94 <+0x69c>
084a4f82 +0x68a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a4f87 +0x68f:  mov    %eax,(%esp)
084a4f8a +0x692:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084a4f8f +0x697:  cmp    $0x10,%eax
084a4f92 +0x69a:  jne    084a4f9b <+0x6a3>
084a4f94 +0x69c:  mov    $0x1,%eax
084a4f99 +0x6a1:  jmp    084a4fa0 <+0x6a8>
084a4f9b +0x6a3:  mov    $0x0,%eax
084a4fa0 +0x6a8:  test   %al,%al
084a4fa2 +0x6aa:  je     084a5033 <+0x73b>
084a4fa8 +0x6b0:  mov    0x8(%ebp),%eax
084a4fab +0x6b3:  movzbl 0x5b(%eax),%eax
084a4faf +0x6b7:  movzbl %al,%esi
084a4fb2 +0x6ba:  mov    0xc(%ebp),%eax
084a4fb5 +0x6bd:  mov    %eax,(%esp)
084a4fb8 +0x6c0:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
084a4fbd +0x6c5:  mov    %eax,%ebx
084a4fbf +0x6c7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a4fc4 +0x6cc:  add    $0x68,%eax
084a4fc7 +0x6cf:  mov    %ebx,0x4(%esp)
084a4fcb +0x6d3:  mov    %eax,(%esp)
084a4fce +0x6d6:  call   0822adfc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a6
084a4fd3 +0x6db:  cmp    %eax,%esi
084a4fd5 +0x6dd:  setle  %al
084a4fd8 +0x6e0:  test   %al,%al
084a4fda +0x6e2:  je     084a5033 <+0x73b>
084a4fdc +0x6e4:  lea    -0x88(%ebp),%eax
084a4fe2 +0x6ea:  mov    %eax,(%esp)
084a4fe5 +0x6ed:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084a4fea +0x6f2:  movl   $0x161,0x8(%esp)
084a4ff2 +0x6fa:  movl   $0x0,0x4(%esp)
084a4ffa +0x702:  lea    -0x88(%ebp),%eax
084a5000 +0x708:  mov    %eax,(%esp)
084a5003 +0x70b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a5008 +0x710:  movl   $0x1,0x4(%esp)
084a5010 +0x718:  lea    -0x88(%ebp),%eax
084a5016 +0x71e:  mov    %eax,(%esp)
084a5019 +0x721:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a501e +0x726:  lea    -0x88(%ebp),%eax
084a5024 +0x72c:  mov    %eax,0x4(%esp)
084a5028 +0x730:  mov    0xc(%ebp),%eax
084a502b +0x733:  mov    %eax,(%esp)
084a502e +0x736:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084a5033 +0x73b:  mov    0x8(%ebp),%eax
084a5036 +0x73e:  mov    0x54(%eax),%eax
084a5039 +0x741:  test   %eax,%eax
084a503b +0x743:  je     084a5567 <+0xc6f>
084a5041 +0x749:  mov    0x8(%ebp),%eax
084a5044 +0x74c:  mov    0x54(%eax),%eax
084a5047 +0x74f:  cmp    $0x4ddd89ef,%eax
084a504c +0x754:  ja     084a5567 <+0xc6f>
084a5052 +0x75a:  movl   $0x0,-0x24(%ebp)
084a5059 +0x761:  mov    0x8(%ebp),%eax
084a505c +0x764:  mov    0x28(%eax),%eax
084a505f +0x767:  lea    (%eax,%eax,1),%edx
084a5062 +0x76a:  mov    -0x24(%ebp),%eax
084a5065 +0x76d:  lea    (%edx,%eax,1),%eax
084a5068 +0x770:  mov    %eax,-0x24(%ebp)
084a506b +0x773:  mov    0x8(%ebp),%eax
084a506e +0x776:  mov    0x2c(%eax),%edx
084a5071 +0x779:  mov    0x8(%ebp),%eax
084a5074 +0x77c:  mov    0x30(%eax),%eax
084a5077 +0x77f:  add    %eax,%edx
084a5079 +0x781:  mov    -0x24(%ebp),%eax
084a507c +0x784:  lea    (%edx,%eax,1),%eax
084a507f +0x787:  mov    %eax,-0x24(%ebp)
084a5082 +0x78a:  mov    0x8(%ebp),%eax
084a5085 +0x78d:  mov    0x34(%eax),%edx
084a5088 +0x790:  mov    %edx,%eax
084a508a +0x792:  add    %eax,%eax
084a508c +0x794:  lea    (%eax,%edx,1),%edx
084a508f +0x797:  mov    -0x24(%ebp),%eax
084a5092 +0x79a:  lea    (%edx,%eax,1),%eax
084a5095 +0x79d:  mov    %eax,-0x24(%ebp)
084a5098 +0x7a0:  mov    0x8(%ebp),%eax
084a509b +0x7a3:  mov    0x38(%eax),%edx
084a509e +0x7a6:  mov    0x8(%ebp),%eax
084a50a1 +0x7a9:  mov    0x3c(%eax),%eax
084a50a4 +0x7ac:  add    %eax,%edx
084a50a6 +0x7ae:  mov    -0x24(%ebp),%eax
084a50a9 +0x7b1:  lea    (%edx,%eax,1),%eax
084a50ac +0x7b4:  mov    %eax,-0x24(%ebp)
084a50af +0x7b7:  movl   $0x0,-0x20(%ebp)
084a50b6 +0x7be:  mov    0x8(%ebp),%eax
084a50b9 +0x7c1:  mov    0x28(%eax),%edx
084a50bc +0x7c4:  mov    0x8(%ebp),%eax
084a50bf +0x7c7:  mov    0x2c(%eax),%eax
084a50c2 +0x7ca:  add    %eax,%edx
084a50c4 +0x7cc:  mov    0x8(%ebp),%eax
084a50c7 +0x7cf:  mov    0x30(%eax),%eax
084a50ca +0x7d2:  lea    (%edx,%eax,1),%eax
084a50cd +0x7d5:  mov    %eax,-0x20(%ebp)
084a50d0 +0x7d8:  cmpl   $0x9,-0x20(%ebp)
084a50d4 +0x7dc:  jle    084a50e3 <+0x7eb>
084a50d6 +0x7de:  cmpl   $0x31,-0x20(%ebp)
084a50da +0x7e2:  jg     084a50e3 <+0x7eb>
084a50dc +0x7e4:  mov    $0xa,%eax
084a50e1 +0x7e9:  jmp    084a50e8 <+0x7f0>
084a50e3 +0x7eb:  mov    $0x0,%eax
084a50e8 +0x7f0:  add    %eax,-0x24(%ebp)
084a50eb +0x7f3:  cmpl   $0x31,-0x20(%ebp)
084a50ef +0x7f7:  jle    084a50f8 <+0x800>
084a50f1 +0x7f9:  mov    $0x3c,%eax
084a50f6 +0x7fe:  jmp    084a50fd <+0x805>
084a50f8 +0x800:  mov    $0x0,%eax
084a50fd +0x805:  add    %eax,-0x24(%ebp)
084a5100 +0x808:  mov    0x8(%ebp),%eax
084a5103 +0x80b:  mov    0x28(%eax),%eax
084a5106 +0x80e:  cmp    $0x9,%eax
084a5109 +0x811:  jbe    084a511d <+0x825>
084a510b +0x813:  mov    0x8(%ebp),%eax
084a510e +0x816:  mov    0x28(%eax),%eax
084a5111 +0x819:  cmp    $0x31,%eax
084a5114 +0x81c:  ja     084a511d <+0x825>
084a5116 +0x81e:  mov    $0xf,%eax
084a511b +0x823:  jmp    084a5122 <+0x82a>
084a511d +0x825:  mov    $0x0,%eax
084a5122 +0x82a:  add    %eax,-0x24(%ebp)
084a5125 +0x82d:  mov    0x8(%ebp),%eax
084a5128 +0x830:  mov    0x28(%eax),%eax
084a512b +0x833:  cmp    $0x31,%eax
084a512e +0x836:  jbe    084a5137 <+0x83f>
084a5130 +0x838:  mov    $0x5a,%eax
084a5135 +0x83d:  jmp    084a513c <+0x844>
084a5137 +0x83f:  mov    $0x0,%eax
084a513c +0x844:  add    %eax,-0x24(%ebp)
084a513f +0x847:  mov    0x8(%ebp),%eax
084a5142 +0x84a:  mov    0x34(%eax),%edx
084a5145 +0x84d:  mov    0x8(%ebp),%eax
084a5148 +0x850:  mov    0x38(%eax),%eax
084a514b +0x853:  add    %eax,%edx
084a514d +0x855:  mov    0x8(%ebp),%eax
084a5150 +0x858:  mov    0x3c(%eax),%eax
084a5153 +0x85b:  lea    (%edx,%eax,1),%eax
084a5156 +0x85e:  mov    %eax,-0x20(%ebp)
084a5159 +0x861:  cmpl   $0x9,-0x20(%ebp)
084a515d +0x865:  jle    084a516c <+0x874>
084a515f +0x867:  cmpl   $0x31,-0x20(%ebp)
084a5163 +0x86b:  jg     084a516c <+0x874>
084a5165 +0x86d:  mov    $0xa,%eax
084a516a +0x872:  jmp    084a5171 <+0x879>
084a516c +0x874:  mov    $0x0,%eax
084a5171 +0x879:  add    %eax,-0x24(%ebp)
084a5174 +0x87c:  cmpl   $0x31,-0x20(%ebp)
084a5178 +0x880:  jle    084a5181 <+0x889>
084a517a +0x882:  mov    $0x3c,%eax
084a517f +0x887:  jmp    084a5186 <+0x88e>
084a5181 +0x889:  mov    $0x0,%eax
084a5186 +0x88e:  add    %eax,-0x24(%ebp)
084a5189 +0x891:  mov    0x8(%ebp),%eax
084a518c +0x894:  mov    0x34(%eax),%eax
084a518f +0x897:  cmp    $0x9,%eax
084a5192 +0x89a:  jbe    084a51a6 <+0x8ae>
084a5194 +0x89c:  mov    0x8(%ebp),%eax
084a5197 +0x89f:  mov    0x34(%eax),%eax
084a519a +0x8a2:  cmp    $0x31,%eax
084a519d +0x8a5:  ja     084a51a6 <+0x8ae>
084a519f +0x8a7:  mov    $0xf,%eax
084a51a4 +0x8ac:  jmp    084a51ab <+0x8b3>
084a51a6 +0x8ae:  mov    $0x0,%eax
084a51ab +0x8b3:  add    %eax,-0x24(%ebp)
084a51ae +0x8b6:  mov    0x8(%ebp),%eax
084a51b1 +0x8b9:  mov    0x34(%eax),%eax
084a51b4 +0x8bc:  cmp    $0x31,%eax
084a51b7 +0x8bf:  jbe    084a51c0 <+0x8c8>
084a51b9 +0x8c1:  mov    $0x5a,%eax
084a51be +0x8c6:  jmp    084a51c5 <+0x8cd>
084a51c0 +0x8c8:  mov    $0x0,%eax
084a51c5 +0x8cd:  add    %eax,-0x24(%ebp)
084a51c8 +0x8d0:  mov    0x8(%ebp),%eax
084a51cb +0x8d3:  mov    0x28(%eax),%eax
084a51ce +0x8d6:  lea    (%eax,%eax,1),%edx
084a51d1 +0x8d9:  mov    -0x24(%ebp),%eax
084a51d4 +0x8dc:  lea    (%edx,%eax,1),%eax
084a51d7 +0x8df:  mov    %eax,-0x24(%ebp)
084a51da +0x8e2:  mov    0x8(%ebp),%eax
084a51dd +0x8e5:  mov    0x34(%eax),%eax
084a51e0 +0x8e8:  lea    (%eax,%eax,1),%edx
084a51e3 +0x8eb:  mov    -0x24(%ebp),%eax
084a51e6 +0x8ee:  lea    (%edx,%eax,1),%eax
084a51e9 +0x8f1:  mov    %eax,-0x24(%ebp)
084a51ec +0x8f4:  lea    -0x106(%ebp),%eax
084a51f2 +0x8fa:  mov    %eax,(%esp)
084a51f5 +0x8fd:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084a51fa +0x902:  lea    -0x206(%ebp),%edx
084a5200 +0x908:  mov    $0x100,%ebx
084a5205 +0x90d:  mov    $0x0,%eax
084a520a +0x912:  mov    %edx,%ecx
084a520c +0x914:  and    $0x2,%ecx
084a520f +0x917:  test   %ecx,%ecx
084a5211 +0x919:  je     084a521c <+0x924>
084a5213 +0x91b:  mov    %ax,(%edx)
084a5216 +0x91e:  add    $0x2,%edx
084a5219 +0x921:  sub    $0x2,%ebx
084a521c +0x924:  mov    %ebx,%ecx
084a521e +0x926:  shr    $0x2,%ecx
084a5221 +0x929:  mov    %edx,%edi
084a5223 +0x92b:  rep stos %eax,%es:(%edi)
084a5225 +0x92d:  mov    %edi,%edx
084a5227 +0x92f:  mov    %ebx,%ecx
084a5229 +0x931:  and    $0x2,%ecx
084a522c +0x934:  test   %ecx,%ecx
084a522e +0x936:  je     084a5236 <+0x93e>
084a5230 +0x938:  mov    %ax,(%edx)
084a5233 +0x93b:  add    $0x2,%edx
084a5236 +0x93e:  mov    %ebx,%ecx
084a5238 +0x940:  and    $0x1,%ecx
084a523b +0x943:  test   %ecx,%ecx
084a523d +0x945:  je     084a5244 <+0x94c>
084a523f +0x947:  mov    %al,(%edx)
084a5241 +0x949:  add    $0x1,%edx
084a5244 +0x94c:  lea    -0xc9(%ebp),%eax
084a524a +0x952:  mov    $0x15,%edx
084a524f +0x957:  mov    $0x0,%ecx
084a5254 +0x95c:  mov    %eax,%ebx
084a5256 +0x95e:  and    $0x1,%ebx
084a5259 +0x961:  test   %ebx,%ebx
084a525b +0x963:  je     084a5265 <+0x96d>
084a525d +0x965:  mov    %cl,(%eax)
084a525f +0x967:  add    $0x1,%eax
084a5262 +0x96a:  sub    $0x1,%edx
084a5265 +0x96d:  mov    %eax,%ebx
084a5267 +0x96f:  and    $0x2,%ebx
084a526a +0x972:  test   %ebx,%ebx
084a526c +0x974:  je     084a5277 <+0x97f>
084a526e +0x976:  mov    %cx,(%eax)
084a5271 +0x979:  add    $0x2,%eax
084a5274 +0x97c:  sub    $0x2,%edx
084a5277 +0x97f:  mov    %edx,%esi
084a5279 +0x981:  and    $0xfffffffc,%esi
084a527c +0x984:  mov    $0x0,%ebx
084a5281 +0x989:  mov    %ecx,(%eax,%ebx,1)
084a5284 +0x98c:  add    $0x4,%ebx
084a5287 +0x98f:  cmp    %esi,%ebx
084a5289 +0x991:  jb     084a5281 <+0x989>
084a528b +0x993:  add    %ebx,%eax
084a528d +0x995:  mov    %edx,%ebx
084a528f +0x997:  and    $0x2,%ebx
084a5292 +0x99a:  test   %ebx,%ebx
084a5294 +0x99c:  je     084a529c <+0x9a4>
084a5296 +0x99e:  mov    %cx,(%eax)
084a5299 +0x9a1:  add    $0x2,%eax
084a529c +0x9a4:  and    $0x1,%edx
084a529f +0x9a7:  test   %edx,%edx
084a52a1 +0x9a9:  je     084a52a8 <+0x9b0>
084a52a3 +0x9ab:  mov    %cl,(%eax)
084a52a5 +0x9ad:  add    $0x1,%eax
084a52a8 +0x9b0:  movl   $0xcf0,-0x104(%ebp)
084a52b2 +0x9ba:  mov    -0x104(%ebp),%eax
084a52b8 +0x9c0:  mov    %eax,%ebx
084a52ba +0x9c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a52bf +0x9c7:  mov    %ebx,0x4(%esp)
084a52c3 +0x9cb:  mov    %eax,(%esp)
084a52c6 +0x9ce:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a52cb +0x9d3:  mov    %eax,-0x1c(%ebp)
084a52ce +0x9d6:  cmpl   $0x0,-0x1c(%ebp)
084a52d2 +0x9da:  jne    084a52de <+0x9e6>
084a52d4 +0x9dc:  mov    $0x0,%ebx
084a52d9 +0x9e1:  jmp    084a558c <+0xc94>
084a52de +0x9e6:  mov    -0x24(%ebp),%eax
084a52e1 +0x9e9:  add    $0xc8,%eax
084a52e6 +0x9ee:  mov    %eax,-0xff(%ebp)
084a52ec +0x9f4:  mov    -0x1c(%ebp),%eax
084a52ef +0x9f7:  mov    (%eax),%eax
084a52f1 +0x9f9:  add    $0x8,%eax
084a52f4 +0x9fc:  mov    (%eax),%edx
084a52f6 +0x9fe:  lea    -0x106(%ebp),%eax
084a52fc +0xa04:  mov    %eax,0x4(%esp)
084a5300 +0xa08:  mov    -0x1c(%ebp),%eax
084a5303 +0xa0b:  mov    %eax,(%esp)
084a5306 +0xa0e:  call   *%edx
084a5308 +0xa10:  movl   $0x0,0xc(%esp)
084a5310 +0xa18:  movl   $"game_server_msg_171",0x8(%esp)
084a5318 +0xa20:  movl   $0x4,0x4(%esp)
084a5320 +0xa28:  movl   $&g_scriptStringManager_,(%esp)
084a5327 +0xa2f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084a532c +0xa34:  movl   $0x14,0x8(%esp)
084a5334 +0xa3c:  mov    %eax,0x4(%esp)
084a5338 +0xa40:  lea    -0xc9(%ebp),%eax
084a533e +0xa46:  mov    %eax,(%esp)
084a5341 +0xa49:  call   0807d8d0 <_init+0x1c8>
084a5346 +0xa4e:  movl   $0x0,0xc(%esp)
084a534e +0xa56:  movl   $"game_server_msg_177",0x8(%esp)
084a5356 +0xa5e:  movl   $0x4,0x4(%esp)
084a535e +0xa66:  movl   $&g_scriptStringManager_,(%esp)
084a5365 +0xa6d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084a536a +0xa72:  movl   $0xff,0x8(%esp)
084a5372 +0xa7a:  mov    %eax,0x4(%esp)
084a5376 +0xa7e:  lea    -0x206(%ebp),%eax
084a537c +0xa84:  mov    %eax,(%esp)
084a537f +0xa87:  call   0807d8d0 <_init+0x1c8>
084a5384 +0xa8c:  mov    0xc(%ebp),%eax
084a5387 +0xa8f:  mov    %eax,(%esp)
084a538a +0xa92:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084a538f +0xa97:  mov    %eax,%ebx
084a5391 +0xa99:  lea    -0x206(%ebp),%eax
084a5397 +0xa9f:  mov    %eax,(%esp)
084a539a +0xaa2:  call   0807e3b0 <_init+0xca8>
084a539f +0xaa7:  mov    %eax,%esi
084a53a1 +0xaa9:  mov    0xc(%ebp),%eax
084a53a4 +0xaac:  mov    %eax,(%esp)
084a53a7 +0xaaf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084a53ac +0xab4:  movl   $0x0,0x24(%esp)
084a53b4 +0xabc:  movl   $0x1,0x20(%esp)
084a53bc +0xac4:  mov    %ebx,0x1c(%esp)
084a53c0 +0xac8:  movl   $0x0,0x18(%esp)
084a53c8 +0xad0:  mov    %esi,0x14(%esp)
084a53cc +0xad4:  lea    -0x206(%ebp),%edx
084a53d2 +0xada:  mov    %edx,0x10(%esp)
084a53d6 +0xade:  mov    %eax,0xc(%esp)
084a53da +0xae2:  movl   $0x0,0x8(%esp)
084a53e2 +0xaea:  lea    -0x106(%ebp),%eax
084a53e8 +0xaf0:  mov    %eax,0x4(%esp)
084a53ec +0xaf4:  lea    -0xc9(%ebp),%eax
084a53f2 +0xafa:  mov    %eax,(%esp)
084a53f5 +0xafd:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084a53fa +0xb02:  movl   $0x289788,-0x104(%ebp)
084a5404 +0xb0c:  mov    -0x104(%ebp),%eax
084a540a +0xb12:  mov    %eax,%ebx
084a540c +0xb14:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a5411 +0xb19:  mov    %ebx,0x4(%esp)
084a5415 +0xb1d:  mov    %eax,(%esp)
084a5418 +0xb20:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a541d +0xb25:  mov    %eax,-0x1c(%ebp)
084a5420 +0xb28:  cmpl   $0x0,-0x1c(%ebp)
084a5424 +0xb2c:  jne    084a5430 <+0xb38>
084a5426 +0xb2e:  mov    $0x0,%ebx
084a542b +0xb33:  jmp    084a558c <+0xc94>
084a5430 +0xb38:  movl   $0x1,-0xff(%ebp)
084a543a +0xb42:  mov    -0x1c(%ebp),%eax
084a543d +0xb45:  mov    (%eax),%eax
084a543f +0xb47:  add    $0x8,%eax
084a5442 +0xb4a:  mov    (%eax),%edx
084a5444 +0xb4c:  lea    -0x106(%ebp),%eax
084a544a +0xb52:  mov    %eax,0x4(%esp)
084a544e +0xb56:  mov    -0x1c(%ebp),%eax
084a5451 +0xb59:  mov    %eax,(%esp)
084a5454 +0xb5c:  call   *%edx
084a5456 +0xb5e:  movl   $0x0,0xc(%esp)
084a545e +0xb66:  movl   $"game_server_msg_171",0x8(%esp)
084a5466 +0xb6e:  movl   $0x4,0x4(%esp)
084a546e +0xb76:  movl   $&g_scriptStringManager_,(%esp)
084a5475 +0xb7d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084a547a +0xb82:  movl   $0x14,0x8(%esp)
084a5482 +0xb8a:  mov    %eax,0x4(%esp)
084a5486 +0xb8e:  lea    -0xc9(%ebp),%eax
084a548c +0xb94:  mov    %eax,(%esp)
084a548f +0xb97:  call   0807d8d0 <_init+0x1c8>
084a5494 +0xb9c:  movl   $0x0,0xc(%esp)
084a549c +0xba4:  movl   $"game_server_msg_178",0x8(%esp)
084a54a4 +0xbac:  movl   $0x4,0x4(%esp)
084a54ac +0xbb4:  movl   $&g_scriptStringManager_,(%esp)
084a54b3 +0xbbb:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084a54b8 +0xbc0:  movl   $0xff,0x8(%esp)
084a54c0 +0xbc8:  mov    %eax,0x4(%esp)
084a54c4 +0xbcc:  lea    -0x206(%ebp),%eax
084a54ca +0xbd2:  mov    %eax,(%esp)
084a54cd +0xbd5:  call   0807d8d0 <_init+0x1c8>
084a54d2 +0xbda:  mov    0xc(%ebp),%eax
084a54d5 +0xbdd:  mov    %eax,(%esp)
084a54d8 +0xbe0:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084a54dd +0xbe5:  mov    %eax,%ebx
084a54df +0xbe7:  lea    -0x206(%ebp),%eax
084a54e5 +0xbed:  mov    %eax,(%esp)
084a54e8 +0xbf0:  call   0807e3b0 <_init+0xca8>
084a54ed +0xbf5:  mov    %eax,%esi
084a54ef +0xbf7:  mov    0xc(%ebp),%eax
084a54f2 +0xbfa:  mov    %eax,(%esp)
084a54f5 +0xbfd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084a54fa +0xc02:  movl   $0x0,0x24(%esp)
084a5502 +0xc0a:  movl   $0x1,0x20(%esp)
084a550a +0xc12:  mov    %ebx,0x1c(%esp)
084a550e +0xc16:  movl   $0x0,0x18(%esp)
084a5516 +0xc1e:  mov    %esi,0x14(%esp)
084a551a +0xc22:  lea    -0x206(%ebp),%edx
084a5520 +0xc28:  mov    %edx,0x10(%esp)
084a5524 +0xc2c:  mov    %eax,0xc(%esp)
084a5528 +0xc30:  movl   $0x0,0x8(%esp)
084a5530 +0xc38:  lea    -0x106(%ebp),%eax
084a5536 +0xc3e:  mov    %eax,0x4(%esp)
084a553a +0xc42:  lea    -0xc9(%ebp),%eax
084a5540 +0xc48:  mov    %eax,(%esp)
084a5543 +0xc4b:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084a5548 +0xc50:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084a554f +0xc57:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084a5554 +0xc5c:  mov    %eax,%edx
084a5556 +0xc5e:  mov    0x8(%ebp),%eax
084a5559 +0xc61:  mov    %edx,0x54(%eax)
084a555c +0xc64:  mov    0x8(%ebp),%eax
084a555f +0xc67:  mov    %eax,(%esp)
084a5562 +0xc6a:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
084a5567 +0xc6f:  mov    $0x1,%ebx
084a556c +0xc74:  jmp    084a558c <+0xc94>
084a556e +0xc76:  mov    %edx,%ebx
084a5570 +0xc78:  mov    %eax,%esi
084a5572 +0xc7a:  lea    -0x88(%ebp),%eax
084a5578 +0xc80:  mov    %eax,(%esp)
084a557b +0xc83:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a5580 +0xc88:  mov    %esi,%eax
084a5582 +0xc8a:  mov    %ebx,%edx
084a5584 +0xc8c:  mov    %eax,(%esp)
084a5587 +0xc8f:  call   08ae3750 <_Unwind_Resume>
084a558c +0xc94:  lea    -0x88(%ebp),%eax
084a5592 +0xc9a:  mov    %eax,(%esp)
084a5595 +0xc9d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a559a +0xca2:  mov    %ebx,%eax
084a559c +0xca4:  lea    -0xc(%ebp),%esp
084a559f +0xca7:  add    $0x0,%esp
084a55a2 +0xcaa:  pop    %ebx
084a55a3 +0xcab:  pop    %esi
084a55a4 +0xcac:  pop    %edi
084a55a5 +0xcad:  pop    %ebp
084a55a6 +0xcae:  ret
084a55a7 +0xcaf:  nop
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::loadData @ 0x84a48f8

/* WARNING: Removing unreachable block (ram,0x084a523f) */
/* fair_pvp::CFairPvPScore::loadData(CUser*, char*) */

undefined4 __thiscall
fair_pvp::CFairPvPScore::loadData(CFairPvPScore *this,CUser *param_1,char *param_2)

{
  char *pcVar1;
  CFairPvPScore CVar2;
  char cVar3;
  GameWorld *pGVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CInventory *pCVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  CDataManager *pCVar18;
  size_t sVar19;
  undefined4 uVar20;
  uint uVar21;
  bool bVar22;
  byte bVar23;
  char local_20a [256];
  Inven_Item local_10a [2];
  undefined4 local_108;
  int local_103;
  char local_cd;
  char local_cc [20];
  int local_b8;
  PacketGuard local_b4 [12];
  vector<int,std::allocator<int>> local_a8 [12];
  int local_9c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_98 [12];
  PacketGuard local_8c [12];
  pair local_80 [4];
  char local_7c;
  pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT> local_78 [20];
  JobKey local_64 [20];
  JobKey local_50 [8];
  pair<int,int> local_48 [8];
  int local_40;
  char *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  
  bVar23 = 0;
  local_3c = param_2;
  local_38 = 0;
  while( true ) {
    if ((local_38 < (int)(uint)(byte)local_3c[0x2c]) && (local_38 < 100)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if (!bVar22) break;
    JobKey::JobKey(local_50,local_3c[(local_38 + 2) * 0x10 + 0x10],
                   local_3c[(local_38 + 2) * 0x10 + 0x11]);
    std::make_pair<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT&>
              (local_64,(FAIR_PVP_SCORE_MODE_COUNT *)local_50);
    std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>::
    pair<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT>(local_78,local_64);
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::insert(local_80);
    if (local_7c != '\x01') {
      LogManager::logFormat
                (1,"FairPvPScore.cpp",
                 "virtual bool fair_pvp::CFairPvPScore::loadData(CUser*, char*)",0x20,
                 "job_score_.insert error(%d,%d)",(uint)(byte)local_3c[(local_38 + 2) * 0x10 + 0x10]
                 ,(uint)(byte)local_3c[(local_38 + 2) * 0x10 + 0x11]);
    }
    local_38 = local_38 + 1;
  }
  for (local_38 = 0; (local_38 < 10 && (local_3c[local_38 + 0x670] != '\0'));
      local_38 = local_38 + 1) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),
               (uchar *)(local_3c + local_38 + 0x670));
  }
  for (local_38 = 0; local_38 < 2; local_38 = local_38 + 1) {
    iVar5 = local_38 * 0xc;
    *(undefined4 *)(this + local_38 * 0xc + 0x28) = *(undefined4 *)(local_3c + iVar5 + 4);
    *(undefined4 *)(this + local_38 * 0xc + 0x2c) = *(undefined4 *)(local_3c + iVar5 + 8);
    *(undefined4 *)(this + local_38 * 0xc + 0x30) = *(undefined4 *)(local_3c + iVar5 + 0xc);
  }
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(local_3c + 0x1c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(local_3c + 0x20);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(local_3c + 0x24);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(local_3c + 0x28);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(local_3c + 0x67c);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(local_3c + 0x680);
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar4);
  if (iVar5 == 0xf) {
LAB_084a4b57:
    if (*(int *)(local_3c + 0x680) != 0) goto LAB_084a4b6b;
    bVar22 = true;
  }
  else {
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(pGVar4);
    if (iVar5 == 0x10) goto LAB_084a4b57;
LAB_084a4b6b:
    bVar22 = false;
  }
  if (bVar22) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_98);
    CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 084a4b94 to 084a4c64 has its CatchHandler @ 084a4e8c */
    iVar5 = G_CDataManager();
    local_9c = ServerParameterScript::GetTraningSealGive(iVar5 + 0x68);
    if (0 < local_9c) {
      local_40 = 0xcf0;
      std::pair<int,int>::pair<int,int&>(local_48,&local_40,&local_9c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_98,local_48);
    }
    iVar5 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar7 = G_CDataManager();
    ServerParameterScript::GetTraningFirstGive
              ((ServerParameterScript *)(iVar7 + 0x68),iVar6,(int)cVar3,iVar5,(vector *)local_98);
    cVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar3 != '\x01') {
      std::vector<int,std::allocator<int>>::vector(local_a8);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 084a4caf to 084a4cf1 has its CatchHandler @ 084a4e37 */
      local_34 = CInventory::insert_event_items
                           (pCVar8,local_98,local_a8,3,8,1,"game_server_msg_171",
                            "game_server_msg_172");
      if ((local_34 < 1) ||
         (uVar9 = std::vector<int,std::allocator<int>>::size(local_a8), uVar9 < 3)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if (bVar22) {
        PacketGuard::PacketGuard(local_b4);
                    /* try { // try from 084a4d0b to 084a4e0c has its CatchHandler @ 084a4e0f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b4,0,0xe);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b4,0);
        local_b8 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_b4);
        local_30 = 0;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b4,0);
        local_2c = 0;
        while (uVar9 = std::vector<int,std::allocator<int>>::size(local_a8), local_2c < uVar9) {
          puVar10 = (undefined4 *)
                    std::vector<int,std::allocator<int>>::operator[](local_a8,local_2c);
          uVar11 = *puVar10;
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar3 = CInventory::MakeItemPacket(pCVar8,1,uVar11,local_b4);
          if (cVar3 != '\0') {
            local_30 = local_30 + 1;
          }
          local_2c = local_2c + 3;
        }
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b4,&local_b8,local_30);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b4,true);
        CUser::Send(param_1,local_b4);
                    /* try { // try from 084a4e30 to 084a4e34 has its CatchHandler @ 084a4e37 */
        PacketGuard::~PacketGuard(local_b4);
      }
                    /* try { // try from 084a4e58 to 084a4e5c has its CatchHandler @ 084a4e8c */
      std::vector<int,std::allocator<int>>::~vector(local_a8);
    }
    uVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x54) = uVar11;
    charac_expand::CData::alter((CData *)this);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_98);
  }
  iVar5 = G_CDataManager();
  if (*(uint *)(this + 0x50) < (uint)*(ushort *)(iVar5 + 0x49e0)) {
    iVar5 = G_CDataManager();
    this[0x5a] = (CFairPvPScore)
                 ((char)*(undefined2 *)(iVar5 + 0x49e0) - (char)*(undefined4 *)(this + 0x50));
  }
  else {
    this[0x5a] = (CFairPvPScore)0x0;
  }
  PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 084a4f14 to 084a5547 has its CatchHandler @ 084a556e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,0,0x152);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_8c,(uint)(byte)this[0x5a]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
  CUser::Send(param_1,local_8c);
  this[0x5b] = *(CFairPvPScore *)(local_3c + 0x684);
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(pGVar4);
  if (iVar5 == 0xf) {
LAB_084a4f94:
    bVar22 = true;
  }
  else {
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(pGVar4);
    if (iVar5 == 0x10) goto LAB_084a4f94;
    bVar22 = false;
  }
  if (bVar22) {
    CVar2 = this[0x5b];
    iVar5 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    iVar6 = G_CDataManager();
    iVar5 = ServerParameterScript::get_pvp_item_give((ServerParameterScript *)(iVar6 + 0x68),iVar5);
    if ((int)(uint)(byte)CVar2 <= iVar5) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_8c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,0,0x161);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
      CUser::Send(param_1,local_8c);
    }
  }
  if ((*(int *)(this + 0x54) != 0) && (*(uint *)(this + 0x54) < 0x4ddd89f0)) {
    iVar5 = *(int *)(this + 0x28) + *(int *)(this + 0x2c) + *(int *)(this + 0x30);
    if ((iVar5 < 10) || (0x31 < iVar5)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 10;
    }
    if (iVar5 < 0x32) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0x3c;
    }
    if ((*(uint *)(this + 0x28) < 10) || (0x31 < *(uint *)(this + 0x28))) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0xf;
    }
    if (*(uint *)(this + 0x28) < 0x32) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0x5a;
    }
    local_24 = *(int *)(this + 0x34) + *(int *)(this + 0x38) + *(int *)(this + 0x3c);
    if ((local_24 < 10) || (0x31 < local_24)) {
      iVar13 = 0;
    }
    else {
      iVar13 = 10;
    }
    if (local_24 < 0x32) {
      iVar14 = 0;
    }
    else {
      iVar14 = 0x3c;
    }
    if ((*(uint *)(this + 0x34) < 10) || (0x31 < *(uint *)(this + 0x34))) {
      iVar15 = 0;
    }
    else {
      iVar15 = 0xf;
    }
    if (*(uint *)(this + 0x34) < 0x32) {
      iVar16 = 0;
    }
    else {
      iVar16 = 0x5a;
    }
    local_28 = *(int *)(this + 0x34) * 2 +
               *(int *)(this + 0x28) * 2 +
               *(int *)(this + 0x38) + *(int *)(this + 0x3c) +
               *(int *)(this + 0x34) * 3 +
               *(int *)(this + 0x2c) + *(int *)(this + 0x30) + *(int *)(this + 0x28) * 2 + iVar6 +
               iVar5 + iVar7 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16;
    Inven_Item::Inven_Item(local_10a);
    pcVar17 = local_20a;
    uVar9 = 0x100;
    bVar22 = ((uint)pcVar17 & 2) != 0;
    if (bVar22) {
      local_20a[0] = '\0';
      local_20a[1] = '\0';
      pcVar17 = local_20a + 2;
      uVar9 = 0xfe;
    }
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17[2] = '\0';
      pcVar17[3] = '\0';
      pcVar17 = pcVar17 + ((uint)bVar23 * -2 + 1) * 4;
    }
    if (bVar22) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
    }
    pcVar17 = &local_cd;
    uVar9 = 0x15;
    bVar22 = ((uint)pcVar17 & 1) != 0;
    if (bVar22) {
      local_cd = '\0';
      pcVar17 = local_cc;
      uVar9 = 0x14;
    }
    if (((uint)pcVar17 & 2) != 0) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17 = pcVar17 + 2;
      uVar9 = uVar9 - 2;
    }
    uVar21 = 0;
    do {
      pcVar1 = pcVar17 + uVar21;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar21 = uVar21 + 4;
    } while (uVar21 < (uVar9 & 0xfffffffc));
    pcVar17 = pcVar17 + uVar21;
    if ((uVar9 & 2) != 0) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17 = pcVar17 + 2;
    }
    if (!bVar22) {
      *pcVar17 = '\0';
    }
    local_108 = 0xcf0;
    pCVar18 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar18,0xcf0);
    if (local_20 == (int *)0x0) {
      uVar11 = 0;
      local_20 = (int *)0x0;
      goto LAB_084a558c;
    }
    local_103 = local_28 + 200;
    (**(code **)(*local_20 + 8))(local_20,local_10a);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_171",(bool *)0x0);
    strncpy(&local_cd,pcVar17,0x14);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_177",(bool *)0x0);
    strncpy(local_20a,pcVar17,0xff);
    uVar11 = CUser::GetServerGroup(param_1);
    sVar19 = strlen(local_20a);
    uVar20 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_cd,local_10a,0,uVar20,local_20a,sVar19,0,uVar11,1,0);
    local_108 = 0x289788;
    pCVar18 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar18,0x289788);
    if (local_20 == (int *)0x0) {
      uVar11 = 0;
      goto LAB_084a558c;
    }
    local_103 = 1;
    (**(code **)(*local_20 + 8))(local_20,local_10a);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_171",(bool *)0x0);
    strncpy(&local_cd,pcVar17,0x14);
    pcVar17 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_178",(bool *)0x0);
    strncpy(local_20a,pcVar17,0xff);
    uVar11 = CUser::GetServerGroup(param_1);
    sVar19 = strlen(local_20a);
    uVar20 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_cd,local_10a,0,uVar20,local_20a,sVar19,0,uVar11,1,0);
    uVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x54) = uVar11;
    charac_expand::CData::alter((CData *)this);
  }
  uVar11 = 1;
LAB_084a558c:
  PacketGuard::~PacketGuard(local_8c);
  return uVar11;
}
```
