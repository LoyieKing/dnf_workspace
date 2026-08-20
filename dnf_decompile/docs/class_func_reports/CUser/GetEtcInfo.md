# GetEtcInfo

`_ZNK5CUser10GetEtcInfoEP12SIG_LOAD_ETC`

`CUser::GetEtcInfo(SIG_LOAD_ETC*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867794c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867794c  _ZNK5CUser10GetEtcInfoEP12SIG_LOAD_ETC
#           CUser::GetEtcInfo(SIG_LOAD_ETC*) const
# range [0x0867794c, 0x08677dd7]
0867794c +0x000:  push   %ebp
0867794d +0x001:  mov    %esp,%ebp
0867794f +0x003:  push   %esi
08677950 +0x004:  push   %ebx
08677951 +0x005:  sub    $0x10,%esp
08677954 +0x008:  mov    0xc(%ebp),%eax
08677957 +0x00b:  movl   $0x0,0x8(%eax)
0867795e +0x012:  mov    0xc(%ebp),%eax
08677961 +0x015:  lea    0x340(%eax),%ebx
08677967 +0x01b:  mov    0x8(%ebp),%eax
0867796a +0x01e:  mov    %eax,(%esp)
0867796d +0x021:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
08677972 +0x026:  mov    %ebx,0x4(%esp)
08677976 +0x02a:  mov    %eax,(%esp)
08677979 +0x02d:  call   085d5924 <_ZNK13PvpResultType3GetERS_>  ; PvpResultType::Get(PvpResultType&) const
0867797e +0x032:  mov    0xc(%ebp),%eax
08677981 +0x035:  mov    %eax,0x4(%esp)
08677985 +0x039:  mov    0x8(%ebp),%eax
08677988 +0x03c:  mov    %eax,(%esp)
0867798b +0x03f:  call   08677dd8 <_ZNK5CUser9GetRecordEP12SIG_LOAD_ETC>  ; CUser::GetRecord(SIG_LOAD_ETC*) const
08677990 +0x044:  mov    0x8(%ebp),%eax
08677993 +0x047:  mov    0xc(%ebp),%edx
08677996 +0x04a:  mov    %edx,0x4(%esp)
0867799a +0x04e:  mov    %eax,(%esp)
0867799d +0x051:  call   08677f24 <_ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC>  ; CUserCharacInfo::GetContinuousItemInfo(SIG_LOAD_ETC*) const
086779a2 +0x056:  mov    0xc(%ebp),%eax
086779a5 +0x059:  mov    %eax,0x4(%esp)
086779a9 +0x05d:  mov    0x8(%ebp),%eax
086779ac +0x060:  mov    %eax,(%esp)
086779af +0x063:  call   08688dc4 <_ZNK5CUser17GetLimitItemUsageEP12SIG_LOAD_ETC>  ; CUser::GetLimitItemUsage(SIG_LOAD_ETC*) const
086779b4 +0x068:  mov    0x8(%ebp),%eax
086779b7 +0x06b:  mov    %eax,(%esp)
086779ba +0x06e:  call   085c4b8c <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x1c>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x1c
086779bf +0x073:  mov    0xc(%ebp),%edx
086779c2 +0x076:  mov    %al,0x29fc(%edx)
086779c8 +0x07c:  mov    0x8(%ebp),%eax
086779cb +0x07f:  mov    %eax,(%esp)
086779ce +0x082:  call   08696a72 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32c7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32c7
086779d3 +0x087:  mov    0xc(%ebp),%edx
086779d6 +0x08a:  add    $0x29fd,%edx
086779dc +0x090:  movl   $0x199,0x8(%esp)
086779e4 +0x098:  mov    %eax,0x4(%esp)
086779e8 +0x09c:  mov    %edx,(%esp)
086779eb +0x09f:  call   0807d8a0 <_init+0x198>
086779f0 +0x0a4:  mov    0x8(%ebp),%eax
086779f3 +0x0a7:  mov    %eax,(%esp)
086779f6 +0x0aa:  call   085c4bb0 <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x40>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x40
086779fb +0x0af:  mov    0xc(%ebp),%edx
086779fe +0x0b2:  mov    %al,0x2b96(%edx)
08677a04 +0x0b8:  mov    0x8(%ebp),%eax
08677a07 +0x0bb:  mov    %eax,(%esp)
08677a0a +0x0be:  call   08696a94 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32e9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32e9
08677a0f +0x0c3:  mov    0xc(%ebp),%edx
08677a12 +0x0c6:  add    $0x2b97,%edx
08677a18 +0x0cc:  movl   $0x199,0x8(%esp)
08677a20 +0x0d4:  mov    %eax,0x4(%esp)
08677a24 +0x0d8:  mov    %edx,(%esp)
08677a27 +0x0db:  call   0807d8a0 <_init+0x198>
08677a2c +0x0e0:  mov    0x8(%ebp),%eax
08677a2f +0x0e3:  mov    %eax,(%esp)
08677a32 +0x0e6:  call   08335ba8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x4e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x4e
08677a37 +0x0eb:  mov    0xc(%ebp),%edx
08677a3a +0x0ee:  mov    %ax,0x40c8(%edx)
08677a41 +0x0f5:  mov    0x8(%ebp),%eax
08677a44 +0x0f8:  mov    %eax,(%esp)
08677a47 +0x0fb:  call   08335c14 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0xba>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0xba
08677a4c +0x100:  mov    0xc(%ebp),%edx
08677a4f +0x103:  mov    %ax,0x40ca(%edx)
08677a56 +0x10a:  mov    0x8(%ebp),%eax
08677a59 +0x10d:  mov    %eax,(%esp)
08677a5c +0x110:  call   08335c80 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x126>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x126
08677a61 +0x115:  mov    0xc(%ebp),%edx
08677a64 +0x118:  mov    %ax,0x40cc(%edx)
08677a6b +0x11f:  movl   $0x6,0x4(%esp)
08677a73 +0x127:  mov    0x8(%ebp),%eax
08677a76 +0x12a:  mov    %eax,(%esp)
08677a79 +0x12d:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677a7e +0x132:  mov    (%eax),%edx
08677a80 +0x134:  add    $0x8,%edx
08677a83 +0x137:  mov    (%edx),%ecx
08677a85 +0x139:  mov    0xc(%ebp),%edx
08677a88 +0x13c:  add    $0x40ce,%edx
08677a8e +0x142:  mov    %edx,0x4(%esp)
08677a92 +0x146:  mov    %eax,(%esp)
08677a95 +0x149:  call   *%ecx
08677a97 +0x14b:  mov    0x8(%ebp),%eax
08677a9a +0x14e:  mov    %eax,(%esp)
08677a9d +0x151:  call   084ec216 <_GLOBAL__I__Z7getUserj+0x31c8>  ; global constructors keyed to getUser(unsigned int)+0x31c8
08677aa2 +0x156:  mov    0xc(%ebp),%edx
08677aa5 +0x159:  mov    %al,0xc9ac(%edx)
08677aab +0x15f:  mov    0x8(%ebp),%eax
08677aae +0x162:  mov    %eax,(%esp)
08677ab1 +0x165:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
08677ab6 +0x16a:  mov    0xc(%ebp),%edx
08677ab9 +0x16d:  mov    %al,0xc9ad(%edx)
08677abf +0x173:  mov    0x8(%ebp),%eax
08677ac2 +0x176:  mov    %eax,(%esp)
08677ac5 +0x179:  call   08697578 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3dcd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3dcd
08677aca +0x17e:  mov    0xc(%ebp),%edx
08677acd +0x181:  mov    %al,0xc9ae(%edx)
08677ad3 +0x187:  mov    0x8(%ebp),%eax
08677ad6 +0x18a:  mov    %eax,(%esp)
08677ad9 +0x18d:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
08677ade +0x192:  mov    0xc(%ebp),%edx
08677ae1 +0x195:  mov    %eax,0xc9b3(%edx)
08677ae7 +0x19b:  mov    0x8(%ebp),%eax
08677aea +0x19e:  mov    %eax,(%esp)
08677aed +0x1a1:  call   08110dec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2fe
08677af2 +0x1a6:  mov    %eax,%edx
08677af4 +0x1a8:  mov    0xc(%ebp),%eax
08677af7 +0x1ab:  mov    %dl,0xc9b7(%eax)
08677afd +0x1b1:  mov    0x8(%ebp),%eax
08677b00 +0x1b4:  mov    %eax,(%esp)
08677b03 +0x1b7:  call   08110e6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x37e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x37e
08677b08 +0x1bc:  mov    0xc(%ebp),%edx
08677b0b +0x1bf:  mov    %eax,0xc9b8(%edx)
08677b11 +0x1c5:  mov    0xc(%ebp),%eax
08677b14 +0x1c8:  add    $0xc9bc,%eax
08677b19 +0x1cd:  mov    %eax,(%esp)
08677b1c +0x1d0:  call   0869be6c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x86c1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x86c1
08677b21 +0x1d5:  mov    0xc(%ebp),%eax
08677b24 +0x1d8:  lea    &_ZL14gUnicodeBuffer+0xa57e(%eax),%edx
08677b2a +0x1de:  mov    0xc(%ebp),%eax
08677b2d +0x1e1:  add    $0xc9c0,%eax
08677b32 +0x1e6:  mov    %edx,0x8(%esp)
08677b36 +0x1ea:  mov    %eax,0x4(%esp)
08677b3a +0x1ee:  mov    0x8(%ebp),%eax
08677b3d +0x1f1:  mov    %eax,(%esp)
08677b40 +0x1f4:  call   0864dcf2 <_ZNK5CUser8GetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL>  ; CUser::GetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*) const
08677b45 +0x1f9:  movl   $0x7,0x4(%esp)
08677b4d +0x201:  mov    0x8(%ebp),%eax
08677b50 +0x204:  mov    %eax,(%esp)
08677b53 +0x207:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677b58 +0x20c:  mov    (%eax),%edx
08677b5a +0x20e:  add    $0x8,%edx
08677b5d +0x211:  mov    (%edx),%ecx
08677b5f +0x213:  mov    0xc(%ebp),%edx
08677b62 +0x216:  add    $0xcf1f,%edx
08677b68 +0x21c:  mov    %edx,0x4(%esp)
08677b6c +0x220:  mov    %eax,(%esp)
08677b6f +0x223:  call   *%ecx
08677b71 +0x225:  movl   $0xd,0x4(%esp)
08677b79 +0x22d:  mov    0x8(%ebp),%eax
08677b7c +0x230:  mov    %eax,(%esp)
08677b7f +0x233:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677b84 +0x238:  mov    (%eax),%edx
08677b86 +0x23a:  add    $0x8,%edx
08677b89 +0x23d:  mov    (%edx),%ecx
08677b8b +0x23f:  mov    0xc(%ebp),%edx
08677b8e +0x242:  add    $0xd718,%edx
08677b94 +0x248:  mov    %edx,0x4(%esp)
08677b98 +0x24c:  mov    %eax,(%esp)
08677b9b +0x24f:  call   *%ecx
08677b9d +0x251:  movl   $0x8,0x4(%esp)
08677ba5 +0x259:  mov    0x8(%ebp),%eax
08677ba8 +0x25c:  mov    %eax,(%esp)
08677bab +0x25f:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677bb0 +0x264:  mov    (%eax),%edx
08677bb2 +0x266:  add    $0x8,%edx
08677bb5 +0x269:  mov    (%edx),%ecx
08677bb7 +0x26b:  mov    0xc(%ebp),%edx
08677bba +0x26e:  add    $0xcdd5,%edx
08677bc0 +0x274:  mov    %edx,0x4(%esp)
08677bc4 +0x278:  mov    %eax,(%esp)
08677bc7 +0x27b:  call   *%ecx
08677bc9 +0x27d:  movl   $0xb,0x4(%esp)
08677bd1 +0x285:  mov    0x8(%ebp),%eax
08677bd4 +0x288:  mov    %eax,(%esp)
08677bd7 +0x28b:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677bdc +0x290:  mov    (%eax),%edx
08677bde +0x292:  add    $0x8,%edx
08677be1 +0x295:  mov    (%edx),%ecx
08677be3 +0x297:  mov    0xc(%ebp),%edx
08677be6 +0x29a:  add    $0xd5a7,%edx
08677bec +0x2a0:  mov    %edx,0x4(%esp)
08677bf0 +0x2a4:  mov    %eax,(%esp)
08677bf3 +0x2a7:  call   *%ecx
08677bf5 +0x2a9:  mov    0x8(%ebp),%eax
08677bf8 +0x2ac:  mov    %eax,(%esp)
08677bfb +0x2af:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
08677c00 +0x2b4:  test   %eax,%eax
08677c02 +0x2b6:  setne  %al
08677c05 +0x2b9:  test   %al,%al
08677c07 +0x2bb:  je     08677c3e <+0x2f2>
08677c09 +0x2bd:  mov    0xc(%ebp),%eax
08677c0c +0x2c0:  add    $0x1a8,%eax
08677c11 +0x2c5:  mov    %eax,%esi
08677c13 +0x2c7:  mov    0xc(%ebp),%eax
08677c16 +0x2ca:  add    $0x10,%eax
08677c19 +0x2cd:  mov    %eax,%ebx
08677c1b +0x2cf:  mov    0x8(%ebp),%eax
08677c1e +0x2d2:  mov    %eax,(%esp)
08677c21 +0x2d5:  call   0822f120 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ca
08677c26 +0x2da:  movl   $0x198,0xc(%esp)
08677c2e +0x2e2:  mov    %esi,0x8(%esp)
08677c32 +0x2e6:  mov    %ebx,0x4(%esp)
08677c36 +0x2ea:  mov    %eax,(%esp)
08677c39 +0x2ed:  call   086033cc <_ZNK9SkillSlot14get_skill_slotEPcS0_i>  ; SkillSlot::get_skill_slot(char*, char*, int) const
08677c3e +0x2f2:  movl   $0xa,0x4(%esp)
08677c46 +0x2fa:  mov    0x8(%ebp),%eax
08677c49 +0x2fd:  mov    %eax,(%esp)
08677c4c +0x300:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677c51 +0x305:  mov    (%eax),%edx
08677c53 +0x307:  add    $0x8,%edx
08677c56 +0x30a:  mov    (%edx),%ecx
08677c58 +0x30c:  mov    0xc(%ebp),%edx
08677c5b +0x30f:  add    $0xd6fc,%edx
08677c61 +0x315:  mov    %edx,0x4(%esp)
08677c65 +0x319:  mov    %eax,(%esp)
08677c68 +0x31c:  call   *%ecx
08677c6a +0x31e:  movl   $0x10,0x4(%esp)
08677c72 +0x326:  mov    0x8(%ebp),%eax
08677c75 +0x329:  mov    %eax,(%esp)
08677c78 +0x32c:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677c7d +0x331:  mov    (%eax),%edx
08677c7f +0x333:  add    $0x8,%edx
08677c82 +0x336:  mov    (%edx),%ecx
08677c84 +0x338:  mov    0xc(%ebp),%edx
08677c87 +0x33b:  add    $0xd73c,%edx
08677c8d +0x341:  mov    %edx,0x4(%esp)
08677c91 +0x345:  mov    %eax,(%esp)
08677c94 +0x348:  call   *%ecx
08677c96 +0x34a:  movl   $0xe,0x4(%esp)
08677c9e +0x352:  mov    0x8(%ebp),%eax
08677ca1 +0x355:  mov    %eax,(%esp)
08677ca4 +0x358:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677ca9 +0x35d:  mov    (%eax),%edx
08677cab +0x35f:  add    $0x8,%edx
08677cae +0x362:  mov    (%edx),%ecx
08677cb0 +0x364:  mov    0xc(%ebp),%edx
08677cb3 +0x367:  add    $0x466a,%edx
08677cb9 +0x36d:  mov    %edx,0x4(%esp)
08677cbd +0x371:  mov    %eax,(%esp)
08677cc0 +0x374:  call   *%ecx
08677cc2 +0x376:  movl   $0xf,0x4(%esp)
08677cca +0x37e:  mov    0x8(%ebp),%eax
08677ccd +0x381:  mov    %eax,(%esp)
08677cd0 +0x384:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677cd5 +0x389:  mov    (%eax),%edx
08677cd7 +0x38b:  add    $0x8,%edx
08677cda +0x38e:  mov    (%edx),%ecx
08677cdc +0x390:  mov    0xc(%ebp),%edx
08677cdf +0x393:  add    $0xb1a4,%edx
08677ce5 +0x399:  mov    %edx,0x4(%esp)
08677ce9 +0x39d:  mov    %eax,(%esp)
08677cec +0x3a0:  call   *%ecx
08677cee +0x3a2:  movl   $0x11,0x4(%esp)
08677cf6 +0x3aa:  mov    0x8(%ebp),%eax
08677cf9 +0x3ad:  mov    %eax,(%esp)
08677cfc +0x3b0:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677d01 +0x3b5:  mov    (%eax),%edx
08677d03 +0x3b7:  add    $0x8,%edx
08677d06 +0x3ba:  mov    (%edx),%ecx
08677d08 +0x3bc:  mov    0xc(%ebp),%edx
08677d0b +0x3bf:  add    $0xecc8,%edx
08677d11 +0x3c5:  mov    %edx,0x4(%esp)
08677d15 +0x3c9:  mov    %eax,(%esp)
08677d18 +0x3cc:  call   *%ecx
08677d1a +0x3ce:  movl   $0x12,0x4(%esp)
08677d22 +0x3d6:  mov    0x8(%ebp),%eax
08677d25 +0x3d9:  mov    %eax,(%esp)
08677d28 +0x3dc:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677d2d +0x3e1:  mov    (%eax),%edx
08677d2f +0x3e3:  add    $0x8,%edx
08677d32 +0x3e6:  mov    (%edx),%ecx
08677d34 +0x3e8:  mov    0xc(%ebp),%edx
08677d37 +0x3eb:  add    $0xecd0,%edx
08677d3d +0x3f1:  mov    %edx,0x4(%esp)
08677d41 +0x3f5:  mov    %eax,(%esp)
08677d44 +0x3f8:  call   *%ecx
08677d46 +0x3fa:  mov    0xc(%ebp),%eax
08677d49 +0x3fd:  add    $0xd730,%eax
08677d4e +0x402:  mov    %eax,0x4(%esp)
08677d52 +0x406:  mov    0x8(%ebp),%eax
08677d55 +0x409:  mov    %eax,(%esp)
08677d58 +0x40c:  call   0868ddc2 <_ZNK5CUser19GetAuraAvatarOptionER18stAuraAvatarOption>  ; CUser::GetAuraAvatarOption(stAuraAvatarOption&) const
08677d5d +0x411:  mov    0xc(%ebp),%eax
08677d60 +0x414:  add    $0xeac8,%eax
08677d65 +0x419:  mov    %eax,0x4(%esp)
08677d69 +0x41d:  mov    0x8(%ebp),%eax
08677d6c +0x420:  mov    %eax,(%esp)
08677d6f +0x423:  call   0868f03c <_ZNK5CUser18GetCurCharacOptionER15CharacterOption>  ; CUser::GetCurCharacOption(CharacterOption&) const
08677d74 +0x428:  mov    0xc(%ebp),%eax
08677d77 +0x42b:  add    $&_ZL14gUnicodeBuffer+0xa56d,%eax
08677d7c +0x430:  mov    %eax,0x4(%esp)
08677d80 +0x434:  mov    0x8(%ebp),%eax
08677d83 +0x437:  mov    %eax,(%esp)
08677d86 +0x43a:  call   086910a6 <_ZNK5CUser27GetCharacCashAttendanceInfoER20SIG_ATTENDANCE_EVENT>  ; CUser::GetCharacCashAttendanceInfo(SIG_ATTENDANCE_EVENT&) const
08677d8b +0x43f:  mov    0x8(%ebp),%eax
08677d8e +0x442:  mov    %eax,(%esp)
08677d91 +0x445:  call   08690f42 <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv>  ; CUserCharacInfo::getBlueMarbleEnterCount() const
08677d96 +0x44a:  mov    0xc(%ebp),%edx
08677d99 +0x44d:  mov    %al,&_ZL14gUnicodeBuffer+0xa56c(%edx)
08677d9f +0x453:  movl   $0x13,0x4(%esp)
08677da7 +0x45b:  mov    0x8(%ebp),%eax
08677daa +0x45e:  mov    %eax,(%esp)
08677dad +0x461:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08677db2 +0x466:  mov    (%eax),%edx
08677db4 +0x468:  add    $0x8,%edx
08677db7 +0x46b:  mov    (%edx),%edx
08677db9 +0x46d:  mov    0xc(%ebp),%ecx
08677dbc +0x470:  add    $&_ZL14gUnicodeBuffer+0xa56e,%ecx
08677dc2 +0x476:  mov    %ecx,0x4(%esp)
08677dc6 +0x47a:  mov    %eax,(%esp)
08677dc9 +0x47d:  call   *%edx
08677dcb +0x47f:  mov    $0x1,%eax
08677dd0 +0x484:  add    $0x10,%esp
08677dd3 +0x487:  pop    %ebx
08677dd4 +0x488:  pop    %esi
08677dd5 +0x489:  pop    %ebp
08677dd6 +0x48a:  ret
08677dd7 +0x48b:  nop
```

## 反编译 C

```c
// CUser::GetEtcInfo @ 0x867794c

/* CUser::GetEtcInfo(SIG_LOAD_ETC*) const */

undefined4 __thiscall CUser::GetEtcInfo(CUser *this,SIG_LOAD_ETC *param_1)

{
  SIG_LOAD_ETC SVar1;
  undefined2 uVar2;
  PvpResultType *this_00;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  SkillSlot *this_01;
  
  *(undefined4 *)(param_1 + 8) = 0;
  this_00 = (PvpResultType *)CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
  PvpResultType::Get(this_00,(PvpResultType *)(param_1 + 0x340));
  GetRecord(this,param_1);
  CUserCharacInfo::GetContinuousItemInfo((CUserCharacInfo *)this,param_1);
  GetLimitItemUsage(this,param_1);
  SVar1 = (SIG_LOAD_ETC)CUserCharacInfo::GetOneDayLetheFlag((CUserCharacInfo *)this);
  param_1[0x29fc] = SVar1;
  pvVar3 = (void *)CUserCharacInfo::GetCurCharacBackupSkill((CUserCharacInfo *)this);
  memcpy(param_1 + 0x29fd,pvVar3,0x199);
  SVar1 = (SIG_LOAD_ETC)CUserCharacInfo::GetOneDayLetheFlag2ND((CUserCharacInfo *)this);
  param_1[0x2b96] = SVar1;
  pvVar3 = (void *)CUserCharacInfo::GetCurCharacBackupSkill2ND((CUserCharacInfo *)this);
  memcpy(param_1 + 0x2b97,pvVar3,0x199);
  uVar2 = CUserCharacInfo::GetCurConditionEventStep((CUserCharacInfo *)this);
  *(undefined2 *)(param_1 + 0x40c8) = uVar2;
  uVar2 = CUserCharacInfo::GetCurConditionEventRewardStep((CUserCharacInfo *)this);
  *(undefined2 *)(param_1 + 0x40ca) = uVar2;
  uVar2 = CUserCharacInfo::GetProperDungeonClearCount((CUserCharacInfo *)this);
  *(undefined2 *)(param_1 + 0x40cc) = uVar2;
  piVar4 = (int *)GetCharacExpandDataR(this,6);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0x40ce);
  SVar1 = (SIG_LOAD_ETC)CUserCharacInfo::GetCurVillageAttackCount((CUserCharacInfo *)this);
  param_1[0xc9ac] = SVar1;
  SVar1 = (SIG_LOAD_ETC)CUserCharacInfo::GetCurRevengeDungeonCount((CUserCharacInfo *)this);
  param_1[0xc9ad] = SVar1;
  SVar1 = (SIG_LOAD_ETC)getFlagPresentAvengerTitle(this);
  param_1[0xc9ae] = SVar1;
  uVar5 = getTotalPcRoomPlayTime(this);
  *(undefined4 *)(param_1 + 0xc9b3) = uVar5;
  SVar1 = (SIG_LOAD_ETC)getPcRoomPlayTimeRewardCnt(this);
  param_1[0xc9b7] = SVar1;
  uVar5 = GetCurCharacUsedGiftFatigueQuantity(this);
  *(undefined4 *)(param_1 + 0xc9b8) = uVar5;
  std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc));
  GetSkill(this,(SIG_LOAD_SKILL *)(param_1 + 0xc9c0),(SIG_COMBO_SKILL *)(param_1 + 0x14aaa));
  piVar4 = (int *)GetCharacExpandDataR(this,7);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xcf1f);
  piVar4 = (int *)GetCharacExpandDataR(this,0xd);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xd718);
  piVar4 = (int *)GetCharacExpandDataR(this,8);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xcdd5);
  piVar4 = (int *)GetCharacExpandDataR(this,0xb);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xd5a7);
  iVar6 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
  if (iVar6 != 0) {
    this_01 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillR((CUserCharacInfo *)this);
    SkillSlot::get_skill_slot(this_01,(char *)(param_1 + 0x10),(char *)(param_1 + 0x1a8),0x198);
  }
  piVar4 = (int *)GetCharacExpandDataR(this,10);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xd6fc);
  piVar4 = (int *)GetCharacExpandDataR(this,0x10);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xd73c);
  piVar4 = (int *)GetCharacExpandDataR(this,0xe);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0x466a);
  piVar4 = (int *)GetCharacExpandDataR(this,0xf);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xb1a4);
  piVar4 = (int *)GetCharacExpandDataR(this,0x11);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xecc8);
  piVar4 = (int *)GetCharacExpandDataR(this,0x12);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0xecd0);
  GetAuraAvatarOption(this,(stAuraAvatarOption *)(param_1 + 0xd730));
  GetCurCharacOption(this,(CharacterOption *)(param_1 + 0xeac8));
  GetCharacCashAttendanceInfo(this,(SIG_ATTENDANCE_EVENT *)(param_1 + 0x14a99));
  SVar1 = (SIG_LOAD_ETC)CUserCharacInfo::getBlueMarbleEnterCount((CUserCharacInfo *)this);
  param_1[0x14a98] = SVar1;
  piVar4 = (int *)GetCharacExpandDataR(this,0x13);
  (**(code **)(*piVar4 + 8))(piVar4,param_1 + 0x14a9a);
  return 1;
}
```
