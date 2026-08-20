# onBloodRewardTimer

`_ZN6CParty18onBloodRewardTimerE13TIMER_MESSAGE`

`CParty::onBloodRewardTimer(TIMER_MESSAGE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b6a48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b6a48  _ZN6CParty18onBloodRewardTimerE13TIMER_MESSAGE
#           CParty::onBloodRewardTimer(TIMER_MESSAGE)
# range [0x085b6a48, 0x085b75d3]
085b6a48 +0x000:  push   %ebp
085b6a49 +0x001:  mov    %esp,%ebp
085b6a4b +0x003:  push   %edi
085b6a4c +0x004:  push   %esi
085b6a4d +0x005:  push   %ebx
085b6a4e +0x006:  sub    $0x1cc,%esp
085b6a54 +0x00c:  mov    0xc(%ebp),%eax
085b6a57 +0x00f:  mov    %eax,0x4(%esp)
085b6a5b +0x013:  mov    0x8(%ebp),%eax
085b6a5e +0x016:  mov    %eax,(%esp)
085b6a61 +0x019:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b6a66 +0x01e:  test   %eax,%eax
085b6a68 +0x020:  sete   %al
085b6a6b +0x023:  test   %al,%al
085b6a6d +0x025:  je     085b6a79 <+0x31>
085b6a6f +0x027:  mov    $0x0,%eax
085b6a74 +0x02c:  jmp    085b75c8 <+0xb80>
085b6a79 +0x031:  mov    0x8(%ebp),%eax
085b6a7c +0x034:  add    $0xb24,%eax
085b6a81 +0x039:  mov    %eax,(%esp)
085b6a84 +0x03c:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
085b6a89 +0x041:  test   %eax,%eax
085b6a8b +0x043:  sete   %al
085b6a8e +0x046:  test   %al,%al
085b6a90 +0x048:  je     085b6a9c <+0x54>
085b6a92 +0x04a:  mov    $0x0,%eax
085b6a97 +0x04f:  jmp    085b75c8 <+0xb80>
085b6a9c +0x054:  cmpl   $0x23,0xc(%ebp)
085b6aa0 +0x058:  jne    085b6ceb <+0x2a3>
085b6aa6 +0x05e:  mov    0x8(%ebp),%eax
085b6aa9 +0x061:  add    $0xb24,%eax
085b6aae +0x066:  mov    %eax,(%esp)
085b6ab1 +0x069:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
085b6ab6 +0x06e:  cmp    $0x2,%eax
085b6ab9 +0x071:  setle  %al
085b6abc +0x074:  test   %al,%al
085b6abe +0x076:  je     085b6aca <+0x82>
085b6ac0 +0x078:  mov    $0x0,%eax
085b6ac5 +0x07d:  jmp    085b75c8 <+0xb80>
085b6aca +0x082:  movl   $0x0,-0x38(%ebp)
085b6ad1 +0x089:  jmp    085b6c68 <+0x220>
085b6ad6 +0x08e:  mov    -0x38(%ebp),%eax
085b6ad9 +0x091:  mov    %eax,0x4(%esp)
085b6add +0x095:  mov    0x8(%ebp),%eax
085b6ae0 +0x098:  mov    %eax,(%esp)
085b6ae3 +0x09b:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b6ae8 +0x0a0:  test   %eax,%eax
085b6aea +0x0a2:  je     085b6b05 <+0xbd>
085b6aec +0x0a4:  mov    -0x38(%ebp),%eax
085b6aef +0x0a7:  mov    %eax,0x4(%esp)
085b6af3 +0x0ab:  mov    0x8(%ebp),%eax
085b6af6 +0x0ae:  mov    %eax,(%esp)
085b6af9 +0x0b1:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b6afe +0x0b6:  xor    $0x1,%eax
085b6b01 +0x0b9:  test   %al,%al
085b6b03 +0x0bb:  je     085b6b0c <+0xc4>
085b6b05 +0x0bd:  mov    $0x1,%eax
085b6b0a +0x0c2:  jmp    085b6b11 <+0xc9>
085b6b0c +0x0c4:  mov    $0x0,%eax
085b6b11 +0x0c9:  test   %al,%al
085b6b13 +0x0cb:  jne    085b6c63 <+0x21b>
085b6b19 +0x0d1:  mov    0x8(%ebp),%eax
085b6b1c +0x0d4:  add    $0xddc,%eax
085b6b21 +0x0d9:  movl   $0x3,0x4(%esp)
085b6b29 +0x0e1:  mov    %eax,(%esp)
085b6b2c +0x0e4:  call   085bf11a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x678>  ; global constructors keyed to CParty::cMember::cMember()+0x678
085b6b31 +0x0e9:  mov    %eax,%edi
085b6b33 +0x0eb:  mov    0x8(%ebp),%eax
085b6b36 +0x0ee:  add    $0xddc,%eax
085b6b3b +0x0f3:  movl   $0x3,0x4(%esp)
085b6b43 +0x0fb:  mov    %eax,(%esp)
085b6b46 +0x0fe:  call   085bf100 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x65e>  ; global constructors keyed to CParty::cMember::cMember()+0x65e
085b6b4b +0x103:  mov    %eax,-0x17c(%ebp)
085b6b51 +0x109:  mov    0x8(%ebp),%eax
085b6b54 +0x10c:  add    $0xddc,%eax
085b6b59 +0x111:  movl   $0x2,0x4(%esp)
085b6b61 +0x119:  mov    %eax,(%esp)
085b6b64 +0x11c:  call   085bf11a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x678>  ; global constructors keyed to CParty::cMember::cMember()+0x678
085b6b69 +0x121:  mov    %eax,-0x178(%ebp)
085b6b6f +0x127:  mov    0x8(%ebp),%eax
085b6b72 +0x12a:  add    $0xddc,%eax
085b6b77 +0x12f:  movl   $0x2,0x4(%esp)
085b6b7f +0x137:  mov    %eax,(%esp)
085b6b82 +0x13a:  call   085bf100 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x65e>  ; global constructors keyed to CParty::cMember::cMember()+0x65e
085b6b87 +0x13f:  mov    %eax,-0x174(%ebp)
085b6b8d +0x145:  mov    0x8(%ebp),%eax
085b6b90 +0x148:  add    $0xddc,%eax
085b6b95 +0x14d:  movl   $0x1,0x4(%esp)
085b6b9d +0x155:  mov    %eax,(%esp)
085b6ba0 +0x158:  call   085bf11a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x678>  ; global constructors keyed to CParty::cMember::cMember()+0x678
085b6ba5 +0x15d:  mov    %eax,-0x170(%ebp)
085b6bab +0x163:  mov    0x8(%ebp),%eax
085b6bae +0x166:  add    $0xddc,%eax
085b6bb3 +0x16b:  movl   $0x1,0x4(%esp)
085b6bbb +0x173:  mov    %eax,(%esp)
085b6bbe +0x176:  call   085bf100 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x65e>  ; global constructors keyed to CParty::cMember::cMember()+0x65e
085b6bc3 +0x17b:  mov    %eax,-0x16c(%ebp)
085b6bc9 +0x181:  mov    0x8(%ebp),%eax
085b6bcc +0x184:  add    $0xddc,%eax
085b6bd1 +0x189:  movl   $0x0,0x4(%esp)
085b6bd9 +0x191:  mov    %eax,(%esp)
085b6bdc +0x194:  call   085bf11a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x678>  ; global constructors keyed to CParty::cMember::cMember()+0x678
085b6be1 +0x199:  mov    %eax,%esi
085b6be3 +0x19b:  mov    0x8(%ebp),%eax
085b6be6 +0x19e:  add    $0xddc,%eax
085b6beb +0x1a3:  movl   $0x0,0x4(%esp)
085b6bf3 +0x1ab:  mov    %eax,(%esp)
085b6bf6 +0x1ae:  call   085bf100 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x65e>  ; global constructors keyed to CParty::cMember::cMember()+0x65e
085b6bfb +0x1b3:  mov    %eax,%ebx
085b6bfd +0x1b5:  mov    0x8(%ebp),%eax
085b6c00 +0x1b8:  add    $0xddc,%eax
085b6c05 +0x1bd:  mov    %eax,(%esp)
085b6c08 +0x1c0:  call   085bf0e6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x644>  ; global constructors keyed to CParty::cMember::cMember()+0x644
085b6c0d +0x1c5:  mov    %edi,0x28(%esp)
085b6c11 +0x1c9:  mov    -0x17c(%ebp),%edx
085b6c17 +0x1cf:  mov    %edx,0x24(%esp)
085b6c1b +0x1d3:  mov    -0x178(%ebp),%edx
085b6c21 +0x1d9:  mov    %edx,0x20(%esp)
085b6c25 +0x1dd:  mov    -0x174(%ebp),%edx
085b6c2b +0x1e3:  mov    %edx,0x1c(%esp)
085b6c2f +0x1e7:  mov    -0x170(%ebp),%edx
085b6c35 +0x1ed:  mov    %edx,0x18(%esp)
085b6c39 +0x1f1:  mov    -0x16c(%ebp),%edx
085b6c3f +0x1f7:  mov    %edx,0x14(%esp)
085b6c43 +0x1fb:  mov    %esi,0x10(%esp)
085b6c47 +0x1ff:  mov    %ebx,0xc(%esp)
085b6c4b +0x203:  mov    %eax,0x8(%esp)
085b6c4f +0x207:  mov    -0x38(%ebp),%eax
085b6c52 +0x20a:  mov    %eax,0x4(%esp)
085b6c56 +0x20e:  mov    0x8(%ebp),%eax
085b6c59 +0x211:  mov    %eax,(%esp)
085b6c5c +0x214:  call   085b8bf8 <_ZN6CParty22BloodClearRewardPacketEiiiPK10Inven_ItemiS2_iS2_iS2_>  ; CParty::BloodClearRewardPacket(int, int, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*)
085b6c61 +0x219:  jmp    085b6c64 <+0x21c>
085b6c63 +0x21b:  nop
085b6c64 +0x21c:  addl   $0x1,-0x38(%ebp)
085b6c68 +0x220:  cmpl   $0x3,-0x38(%ebp)
085b6c6c +0x224:  setle  %al
085b6c6f +0x227:  test   %al,%al
085b6c71 +0x229:  jne    085b6ad6 <+0x8e>
085b6c77 +0x22f:  mov    0x8(%ebp),%eax
085b6c7a +0x232:  add    $0xb24,%eax
085b6c7f +0x237:  movl   $0x4,0x4(%esp)
085b6c87 +0x23f:  mov    %eax,(%esp)
085b6c8a +0x242:  call   085bf0b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x616>  ; global constructors keyed to CParty::cMember::cMember()+0x616
085b6c8f +0x247:  movl   $0x24,0x4(%esp)
085b6c97 +0x24f:  mov    0x8(%ebp),%eax
085b6c9a +0x252:  mov    %eax,(%esp)
085b6c9d +0x255:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b6ca2 +0x25a:  mov    %eax,%esi
085b6ca4 +0x25c:  mov    0x8(%ebp),%eax
085b6ca7 +0x25f:  mov    %eax,(%esp)
085b6caa +0x262:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b6caf +0x267:  mov    %eax,%ebx
085b6cb1 +0x269:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b6cb6 +0x26e:  movl   $0x24,0x18(%esp)
085b6cbe +0x276:  mov    %esi,0x14(%esp)
085b6cc2 +0x27a:  movl   $0x8,0x10(%esp)
085b6cca +0x282:  movl   $0x24,0xc(%esp)
085b6cd2 +0x28a:  mov    %ebx,0x8(%esp)
085b6cd6 +0x28e:  movl   $0x1,0x4(%esp)
085b6cde +0x296:  mov    %eax,(%esp)
085b6ce1 +0x299:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b6ce6 +0x29e:  jmp    085b75c3 <+0xb7b>
085b6ceb +0x2a3:  cmpl   $0x24,0xc(%ebp)
085b6cef +0x2a7:  jne    085b7441 <+0x9f9>
085b6cf5 +0x2ad:  mov    0x8(%ebp),%eax
085b6cf8 +0x2b0:  add    $0xb24,%eax
085b6cfd +0x2b5:  mov    %eax,(%esp)
085b6d00 +0x2b8:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
085b6d05 +0x2bd:  cmp    $0x3,%eax
085b6d08 +0x2c0:  setle  %al
085b6d0b +0x2c3:  test   %al,%al
085b6d0d +0x2c5:  je     085b6d19 <+0x2d1>
085b6d0f +0x2c7:  mov    $0x0,%eax
085b6d14 +0x2cc:  jmp    085b75c8 <+0xb80>
085b6d19 +0x2d1:  movl   $0x0,-0x34(%ebp)
085b6d20 +0x2d8:  jmp    085b7391 <+0x949>
085b6d25 +0x2dd:  mov    -0x34(%ebp),%eax
085b6d28 +0x2e0:  mov    %eax,0x4(%esp)
085b6d2c +0x2e4:  mov    0x8(%ebp),%eax
085b6d2f +0x2e7:  mov    %eax,(%esp)
085b6d32 +0x2ea:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b6d37 +0x2ef:  test   %eax,%eax
085b6d39 +0x2f1:  je     085b6d54 <+0x30c>
085b6d3b +0x2f3:  mov    -0x34(%ebp),%eax
085b6d3e +0x2f6:  mov    %eax,0x4(%esp)
085b6d42 +0x2fa:  mov    0x8(%ebp),%eax
085b6d45 +0x2fd:  mov    %eax,(%esp)
085b6d48 +0x300:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b6d4d +0x305:  xor    $0x1,%eax
085b6d50 +0x308:  test   %al,%al
085b6d52 +0x30a:  je     085b6d5b <+0x313>
085b6d54 +0x30c:  mov    $0x1,%eax
085b6d59 +0x311:  jmp    085b6d60 <+0x318>
085b6d5b +0x313:  mov    $0x0,%eax
085b6d60 +0x318:  test   %al,%al
085b6d62 +0x31a:  jne    085b738c <+0x944>
085b6d68 +0x320:  movl   $0x0,-0x2c(%ebp)
085b6d6f +0x327:  jmp    085b7271 <+0x829>
085b6d74 +0x32c:  mov    0x8(%ebp),%eax
085b6d77 +0x32f:  lea    0xddc(%eax),%edx
085b6d7d +0x335:  mov    -0x34(%ebp),%eax
085b6d80 +0x338:  mov    %eax,0x4(%esp)
085b6d84 +0x33c:  mov    %edx,(%esp)
085b6d87 +0x33f:  call   085bf11a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x678>  ; global constructors keyed to CParty::cMember::cMember()+0x678
085b6d8c +0x344:  mov    %eax,-0x28(%ebp)
085b6d8f +0x347:  mov    -0x2c(%ebp),%eax
085b6d92 +0x34a:  imul   $0x3d,%eax,%eax
085b6d95 +0x34d:  add    -0x28(%ebp),%eax
085b6d98 +0x350:  mov    0x2(%eax),%eax
085b6d9b +0x353:  cmp    $0xffffffff,%eax
085b6d9e +0x356:  je     085b726c <+0x824>
085b6da4 +0x35c:  movl   $0xffffffff,-0x24(%ebp)
085b6dab +0x363:  mov    -0x2c(%ebp),%eax
085b6dae +0x366:  imul   $0x3d,%eax,%eax
085b6db1 +0x369:  add    -0x28(%ebp),%eax
085b6db4 +0x36c:  mov    0x2(%eax),%eax
085b6db7 +0x36f:  test   %eax,%eax
085b6db9 +0x371:  jne    085b6f23 <+0x4db>
085b6dbf +0x377:  mov    -0x2c(%ebp),%eax
085b6dc2 +0x37a:  imul   $0x3d,%eax,%eax
085b6dc5 +0x37d:  add    -0x28(%ebp),%eax
085b6dc8 +0x380:  mov    %eax,(%esp)
085b6dcb +0x383:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b6dd0 +0x388:  mov    %eax,%ebx
085b6dd2 +0x38a:  mov    -0x34(%ebp),%edx
085b6dd5 +0x38d:  mov    0x8(%ebp),%ecx
085b6dd8 +0x390:  mov    %edx,%eax
085b6dda +0x392:  add    %eax,%eax
085b6ddc +0x394:  add    %edx,%eax
085b6dde +0x396:  shl    $0x3,%eax
085b6de1 +0x399:  lea    (%ecx,%eax,1),%eax
085b6de4 +0x39c:  add    $0x78,%eax
085b6de7 +0x39f:  mov    (%eax),%eax
085b6de9 +0x3a1:  mov    %eax,(%esp)
085b6dec +0x3a4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085b6df1 +0x3a9:  movl   $0x0,0x10(%esp)
085b6df9 +0x3b1:  movl   $0x1,0xc(%esp)
085b6e01 +0x3b9:  movl   $0x5,0x8(%esp)
085b6e09 +0x3c1:  mov    %ebx,0x4(%esp)
085b6e0d +0x3c5:  mov    %eax,(%esp)
085b6e10 +0x3c8:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085b6e15 +0x3cd:  mov    %eax,-0x20(%ebp)
085b6e18 +0x3d0:  mov    -0x2c(%ebp),%eax
085b6e1b +0x3d3:  imul   $0x3d,%eax,%eax
085b6e1e +0x3d6:  add    -0x28(%ebp),%eax
085b6e21 +0x3d9:  mov    %eax,(%esp)
085b6e24 +0x3dc:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b6e29 +0x3e1:  cmp    -0x20(%ebp),%eax
085b6e2c +0x3e4:  setg   %al
085b6e2f +0x3e7:  test   %al,%al
085b6e31 +0x3e9:  je     085b6e78 <+0x430>
085b6e33 +0x3eb:  mov    -0x20(%ebp),%ebx
085b6e36 +0x3ee:  mov    -0x2c(%ebp),%eax
085b6e39 +0x3f1:  imul   $0x3d,%eax,%eax
085b6e3c +0x3f4:  add    -0x28(%ebp),%eax
085b6e3f +0x3f7:  mov    %eax,(%esp)
085b6e42 +0x3fa:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b6e47 +0x3ff:  mov    %eax,%ecx
085b6e49 +0x401:  mov    -0x34(%ebp),%edx
085b6e4c +0x404:  mov    0x8(%ebp),%esi
085b6e4f +0x407:  mov    %edx,%eax
085b6e51 +0x409:  add    %eax,%eax
085b6e53 +0x40b:  add    %edx,%eax
085b6e55 +0x40d:  shl    $0x3,%eax
085b6e58 +0x410:  lea    (%esi,%eax,1),%eax
085b6e5b +0x413:  add    $0x78,%eax
085b6e5e +0x416:  mov    (%eax),%eax
085b6e60 +0x418:  mov    %ebx,0xc(%esp)
085b6e64 +0x41c:  mov    %ecx,0x8(%esp)
085b6e68 +0x420:  movl   $0x0,0x4(%esp)
085b6e70 +0x428:  mov    %eax,(%esp)
085b6e73 +0x42b:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
085b6e78 +0x430:  movl   $0x0,-0x24(%ebp)
085b6e7f +0x437:  mov    0x8(%ebp),%eax
085b6e82 +0x43a:  mov    0xcac(%eax),%eax
085b6e88 +0x440:  movzbl 0x89f(%eax),%eax
085b6e8f +0x447:  cmp    $0x1,%al
085b6e91 +0x449:  jne    085b6ecf <+0x487>
085b6e93 +0x44b:  mov    -0x20(%ebp),%esi
085b6e96 +0x44e:  mov    -0x34(%ebp),%edx
085b6e99 +0x451:  mov    0x8(%ebp),%ecx
085b6e9c +0x454:  mov    %edx,%eax
085b6e9e +0x456:  add    %eax,%eax
085b6ea0 +0x458:  add    %edx,%eax
085b6ea2 +0x45a:  shl    $0x3,%eax
085b6ea5 +0x45d:  lea    (%ecx,%eax,1),%eax
085b6ea8 +0x460:  add    $0x78,%eax
085b6eab +0x463:  mov    (%eax),%ebx
085b6ead +0x465:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085b6eb2 +0x46a:  mov    %esi,0xc(%esp)
085b6eb6 +0x46e:  mov    %ebx,0x8(%esp)
085b6eba +0x472:  movl   $0xb,0x4(%esp)
085b6ec2 +0x47a:  mov    %eax,(%esp)
085b6ec5 +0x47d:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085b6eca +0x482:  jmp    085b6fe0 <+0x598>
085b6ecf +0x487:  mov    0x8(%ebp),%eax
085b6ed2 +0x48a:  mov    0xcac(%eax),%eax
085b6ed8 +0x490:  movzbl 0x89f(%eax),%eax
085b6edf +0x497:  cmp    $0x2,%al
085b6ee1 +0x499:  jne    085b6fe0 <+0x598>
085b6ee7 +0x49f:  mov    -0x20(%ebp),%esi
085b6eea +0x4a2:  mov    -0x34(%ebp),%edx
085b6eed +0x4a5:  mov    0x8(%ebp),%ecx
085b6ef0 +0x4a8:  mov    %edx,%eax
085b6ef2 +0x4aa:  add    %eax,%eax
085b6ef4 +0x4ac:  add    %edx,%eax
085b6ef6 +0x4ae:  shl    $0x3,%eax
085b6ef9 +0x4b1:  lea    (%ecx,%eax,1),%eax
085b6efc +0x4b4:  add    $0x78,%eax
085b6eff +0x4b7:  mov    (%eax),%ebx
085b6f01 +0x4b9:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
085b6f06 +0x4be:  mov    %esi,0xc(%esp)
085b6f0a +0x4c2:  mov    %ebx,0x8(%esp)
085b6f0e +0x4c6:  movl   $0xc,0x4(%esp)
085b6f16 +0x4ce:  mov    %eax,(%esp)
085b6f19 +0x4d1:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
085b6f1e +0x4d6:  jmp    085b6fe0 <+0x598>
085b6f23 +0x4db:  mov    -0x2c(%ebp),%eax
085b6f26 +0x4de:  imul   $0x3d,%eax,%eax
085b6f29 +0x4e1:  mov    %eax,%ebx
085b6f2b +0x4e3:  add    -0x28(%ebp),%ebx
085b6f2e +0x4e6:  mov    -0x34(%ebp),%edx
085b6f31 +0x4e9:  mov    0x8(%ebp),%ecx
085b6f34 +0x4ec:  mov    %edx,%eax
085b6f36 +0x4ee:  add    %eax,%eax
085b6f38 +0x4f0:  add    %edx,%eax
085b6f3a +0x4f2:  shl    $0x3,%eax
085b6f3d +0x4f5:  lea    (%ecx,%eax,1),%eax
085b6f40 +0x4f8:  add    $0x78,%eax
085b6f43 +0x4fb:  mov    (%eax),%eax
085b6f45 +0x4fd:  mov    %eax,(%esp)
085b6f48 +0x500:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085b6f4d +0x505:  movl   $0x1,0x4c(%esp)
085b6f55 +0x50d:  movl   $0x1,0x48(%esp)
085b6f5d +0x515:  movl   $0xb,0x44(%esp)
085b6f65 +0x51d:  mov    (%ebx),%edx
085b6f67 +0x51f:  mov    %edx,0x4(%esp)
085b6f6b +0x523:  mov    0x4(%ebx),%edx
085b6f6e +0x526:  mov    %edx,0x8(%esp)
085b6f72 +0x52a:  mov    0x8(%ebx),%edx
085b6f75 +0x52d:  mov    %edx,0xc(%esp)
085b6f79 +0x531:  mov    0xc(%ebx),%edx
085b6f7c +0x534:  mov    %edx,0x10(%esp)
085b6f80 +0x538:  mov    0x10(%ebx),%edx
085b6f83 +0x53b:  mov    %edx,0x14(%esp)
085b6f87 +0x53f:  mov    0x14(%ebx),%edx
085b6f8a +0x542:  mov    %edx,0x18(%esp)
085b6f8e +0x546:  mov    0x18(%ebx),%edx
085b6f91 +0x549:  mov    %edx,0x1c(%esp)
085b6f95 +0x54d:  mov    0x1c(%ebx),%edx
085b6f98 +0x550:  mov    %edx,0x20(%esp)
085b6f9c +0x554:  mov    0x20(%ebx),%edx
085b6f9f +0x557:  mov    %edx,0x24(%esp)
085b6fa3 +0x55b:  mov    0x24(%ebx),%edx
085b6fa6 +0x55e:  mov    %edx,0x28(%esp)
085b6faa +0x562:  mov    0x28(%ebx),%edx
085b6fad +0x565:  mov    %edx,0x2c(%esp)
085b6fb1 +0x569:  mov    0x2c(%ebx),%edx
085b6fb4 +0x56c:  mov    %edx,0x30(%esp)
085b6fb8 +0x570:  mov    0x30(%ebx),%edx
085b6fbb +0x573:  mov    %edx,0x34(%esp)
085b6fbf +0x577:  mov    0x34(%ebx),%edx
085b6fc2 +0x57a:  mov    %edx,0x38(%esp)
085b6fc6 +0x57e:  mov    0x38(%ebx),%edx
085b6fc9 +0x581:  mov    %edx,0x3c(%esp)
085b6fcd +0x585:  movzbl 0x3c(%ebx),%edx
085b6fd1 +0x589:  mov    %dl,0x40(%esp)
085b6fd5 +0x58d:  mov    %eax,(%esp)
085b6fd8 +0x590:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085b6fdd +0x595:  mov    %eax,-0x24(%ebp)
085b6fe0 +0x598:  cmpl   $0x0,-0x24(%ebp)
085b6fe4 +0x59c:  js     085b70fd <+0x6b5>
085b6fea +0x5a2:  lea    -0x4c(%ebp),%eax
085b6fed +0x5a5:  mov    %eax,(%esp)
085b6ff0 +0x5a8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b6ff5 +0x5ad:  movl   $0xe,0x8(%esp)
085b6ffd +0x5b5:  movl   $0x0,0x4(%esp)
085b7005 +0x5bd:  lea    -0x4c(%ebp),%eax
085b7008 +0x5c0:  mov    %eax,(%esp)
085b700b +0x5c3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b7010 +0x5c8:  mov    -0x2c(%ebp),%eax
085b7013 +0x5cb:  imul   $0x3d,%eax,%eax
085b7016 +0x5ce:  add    -0x28(%ebp),%eax
085b7019 +0x5d1:  mov    %eax,(%esp)
085b701c +0x5d4:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
085b7021 +0x5d9:  mov    %eax,0x4(%esp)
085b7025 +0x5dd:  lea    -0x4c(%ebp),%eax
085b7028 +0x5e0:  mov    %eax,(%esp)
085b702b +0x5e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b7030 +0x5e8:  movl   $0x1,0x4(%esp)
085b7038 +0x5f0:  lea    -0x4c(%ebp),%eax
085b703b +0x5f3:  mov    %eax,(%esp)
085b703e +0x5f6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b7043 +0x5fb:  mov    -0x2c(%ebp),%eax
085b7046 +0x5fe:  imul   $0x3d,%eax,%eax
085b7049 +0x601:  add    -0x28(%ebp),%eax
085b704c +0x604:  mov    %eax,(%esp)
085b704f +0x607:  call   083481e2 <_ZNK10Inven_Item12GetItemSpaceEv>  ; Inven_Item::GetItemSpace() const
085b7054 +0x60c:  mov    %eax,(%esp)
085b7057 +0x60f:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
085b705c +0x614:  mov    %eax,%ebx
085b705e +0x616:  mov    -0x34(%ebp),%edx
085b7061 +0x619:  mov    0x8(%ebp),%ecx
085b7064 +0x61c:  mov    %edx,%eax
085b7066 +0x61e:  add    %eax,%eax
085b7068 +0x620:  add    %edx,%eax
085b706a +0x622:  shl    $0x3,%eax
085b706d +0x625:  lea    (%ecx,%eax,1),%eax
085b7070 +0x628:  add    $0x78,%eax
085b7073 +0x62b:  mov    (%eax),%eax
085b7075 +0x62d:  mov    %eax,(%esp)
085b7078 +0x630:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085b707d +0x635:  lea    -0x4c(%ebp),%edx
085b7080 +0x638:  mov    %edx,0xc(%esp)
085b7084 +0x63c:  mov    -0x24(%ebp),%edx
085b7087 +0x63f:  mov    %edx,0x8(%esp)
085b708b +0x643:  mov    %ebx,0x4(%esp)
085b708f +0x647:  mov    %eax,(%esp)
085b7092 +0x64a:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
085b7097 +0x64f:  movl   $0x1,0x4(%esp)
085b709f +0x657:  lea    -0x4c(%ebp),%eax
085b70a2 +0x65a:  mov    %eax,(%esp)
085b70a5 +0x65d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b70aa +0x662:  mov    -0x34(%ebp),%edx
085b70ad +0x665:  mov    0x8(%ebp),%ecx
085b70b0 +0x668:  mov    %edx,%eax
085b70b2 +0x66a:  add    %eax,%eax
085b70b4 +0x66c:  add    %edx,%eax
085b70b6 +0x66e:  shl    $0x3,%eax
085b70b9 +0x671:  lea    (%ecx,%eax,1),%eax
085b70bc +0x674:  add    $0x78,%eax
085b70bf +0x677:  mov    (%eax),%eax
085b70c1 +0x679:  lea    -0x4c(%ebp),%edx
085b70c4 +0x67c:  mov    %edx,0x4(%esp)
085b70c8 +0x680:  mov    %eax,(%esp)
085b70cb +0x683:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b70d0 +0x688:  jmp    085b70ed <+0x6a5>
085b70d2 +0x68a:  mov    %edx,%ebx
085b70d4 +0x68c:  mov    %eax,%esi
085b70d6 +0x68e:  lea    -0x4c(%ebp),%eax
085b70d9 +0x691:  mov    %eax,(%esp)
085b70dc +0x694:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b70e1 +0x699:  mov    %esi,%eax
085b70e3 +0x69b:  mov    %ebx,%edx
085b70e5 +0x69d:  mov    %eax,(%esp)
085b70e8 +0x6a0:  call   08ae3750 <_Unwind_Resume>
085b70ed +0x6a5:  lea    -0x4c(%ebp),%eax
085b70f0 +0x6a8:  mov    %eax,(%esp)
085b70f3 +0x6ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b70f8 +0x6b0:  jmp    085b726d <+0x825>
085b70fd +0x6b5:  mov    -0x2c(%ebp),%eax
085b7100 +0x6b8:  imul   $0x3d,%eax,%eax
085b7103 +0x6bb:  add    -0x28(%ebp),%eax
085b7106 +0x6be:  mov    0x2(%eax),%eax
085b7109 +0x6c1:  cmp    $0x4e3,%eax
085b710e +0x6c6:  je     085b7127 <+0x6df>
085b7110 +0x6c8:  mov    -0x2c(%ebp),%eax
085b7113 +0x6cb:  imul   $0x3d,%eax,%eax
085b7116 +0x6ce:  add    -0x28(%ebp),%eax
085b7119 +0x6d1:  mov    0x2(%eax),%eax
085b711c +0x6d4:  cmp    $0x4e4,%eax
085b7121 +0x6d9:  jne    085b726d <+0x825>
085b7127 +0x6df:  mov    -0x2c(%ebp),%eax
085b712a +0x6e2:  imul   $0x3d,%eax,%eax
085b712d +0x6e5:  add    -0x28(%ebp),%eax
085b7130 +0x6e8:  mov    0x2(%eax),%eax
085b7133 +0x6eb:  mov    %eax,%ebx
085b7135 +0x6ed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b713a +0x6f2:  mov    %ebx,0x4(%esp)
085b713e +0x6f6:  mov    %eax,(%esp)
085b7141 +0x6f9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085b7146 +0x6fe:  mov    %eax,-0x1c(%ebp)
085b7149 +0x701:  cmpl   $0x0,-0x1c(%ebp)
085b714d +0x705:  je     085b726d <+0x825>
085b7153 +0x70b:  movl   $0x0,0xc(%esp)
085b715b +0x713:  movl   $"game_server_msg_153",0x8(%esp)
085b7163 +0x71b:  movl   $0x4,0x4(%esp)
085b716b +0x723:  movl   $&g_scriptStringManager_,(%esp)
085b7172 +0x72a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085b7177 +0x72f:  movl   $0x14,0x8(%esp)
085b717f +0x737:  mov    %eax,0x4(%esp)
085b7183 +0x73b:  lea    -0x61(%ebp),%eax
085b7186 +0x73e:  mov    %eax,(%esp)
085b7189 +0x741:  call   0807d8d0 <_init+0x1c8>
085b718e +0x746:  movl   $0x0,0xc(%esp)
085b7196 +0x74e:  movl   $"game_server_msg_154",0x8(%esp)
085b719e +0x756:  movl   $0x4,0x4(%esp)
085b71a6 +0x75e:  movl   $&g_scriptStringManager_,(%esp)
085b71ad +0x765:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085b71b2 +0x76a:  movl   $0xff,0x8(%esp)
085b71ba +0x772:  mov    %eax,0x4(%esp)
085b71be +0x776:  lea    -0x161(%ebp),%eax
085b71c4 +0x77c:  mov    %eax,(%esp)
085b71c7 +0x77f:  call   0807d8d0 <_init+0x1c8>
085b71cc +0x784:  mov    -0x34(%ebp),%edx
085b71cf +0x787:  mov    0x8(%ebp),%ecx
085b71d2 +0x78a:  mov    %edx,%eax
085b71d4 +0x78c:  add    %eax,%eax
085b71d6 +0x78e:  add    %edx,%eax
085b71d8 +0x790:  shl    $0x3,%eax
085b71db +0x793:  lea    (%ecx,%eax,1),%eax
085b71de +0x796:  add    $0x78,%eax
085b71e1 +0x799:  mov    (%eax),%eax
085b71e3 +0x79b:  mov    %eax,(%esp)
085b71e6 +0x79e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085b71eb +0x7a3:  mov    %eax,%ebx
085b71ed +0x7a5:  lea    -0x161(%ebp),%eax
085b71f3 +0x7ab:  mov    %eax,(%esp)
085b71f6 +0x7ae:  call   0807e3b0 <_init+0xca8>
085b71fb +0x7b3:  mov    %eax,%esi
085b71fd +0x7b5:  mov    -0x34(%ebp),%edx
085b7200 +0x7b8:  mov    0x8(%ebp),%ecx
085b7203 +0x7bb:  mov    %edx,%eax
085b7205 +0x7bd:  add    %eax,%eax
085b7207 +0x7bf:  add    %edx,%eax
085b7209 +0x7c1:  shl    $0x3,%eax
085b720c +0x7c4:  lea    (%ecx,%eax,1),%eax
085b720f +0x7c7:  add    $0x78,%eax
085b7212 +0x7ca:  mov    (%eax),%eax
085b7214 +0x7cc:  mov    %eax,(%esp)
085b7217 +0x7cf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085b721c +0x7d4:  mov    -0x2c(%ebp),%edx
085b721f +0x7d7:  imul   $0x3d,%edx,%edx
085b7222 +0x7da:  add    -0x28(%ebp),%edx
085b7225 +0x7dd:  movl   $0x0,0x24(%esp)
085b722d +0x7e5:  movl   $0x0,0x20(%esp)
085b7235 +0x7ed:  mov    %ebx,0x1c(%esp)
085b7239 +0x7f1:  movl   $0x8,0x18(%esp)
085b7241 +0x7f9:  mov    %esi,0x14(%esp)
085b7245 +0x7fd:  lea    -0x161(%ebp),%ecx
085b724b +0x803:  mov    %ecx,0x10(%esp)
085b724f +0x807:  mov    %eax,0xc(%esp)
085b7253 +0x80b:  movl   $0x0,0x8(%esp)
085b725b +0x813:  mov    %edx,0x4(%esp)
085b725f +0x817:  lea    -0x61(%ebp),%eax
085b7262 +0x81a:  mov    %eax,(%esp)
085b7265 +0x81d:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
085b726a +0x822:  jmp    085b726d <+0x825>
085b726c +0x824:  nop
085b726d +0x825:  addl   $0x1,-0x2c(%ebp)
085b7271 +0x829:  mov    0x8(%ebp),%eax
085b7274 +0x82c:  lea    0xddc(%eax),%edx
085b727a +0x832:  mov    -0x34(%ebp),%eax
085b727d +0x835:  mov    %eax,0x4(%esp)
085b7281 +0x839:  mov    %edx,(%esp)
085b7284 +0x83c:  call   085bf100 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x65e>  ; global constructors keyed to CParty::cMember::cMember()+0x65e
085b7289 +0x841:  cmp    -0x2c(%ebp),%eax
085b728c +0x844:  setg   %al
085b728f +0x847:  test   %al,%al
085b7291 +0x849:  jne    085b6d74 <+0x32c>
085b7297 +0x84f:  movl   $0x0,-0x3c(%ebp)
085b729e +0x856:  mov    0x8(%ebp),%eax
085b72a1 +0x859:  lea    0xddc(%eax),%edx
085b72a7 +0x85f:  mov    -0x34(%ebp),%eax
085b72aa +0x862:  mov    %eax,0x4(%esp)
085b72ae +0x866:  mov    %edx,(%esp)
085b72b1 +0x869:  call   085bf132 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x690>  ; global constructors keyed to CParty::cMember::cMember()+0x690
085b72b6 +0x86e:  mov    %eax,-0x30(%ebp)
085b72b9 +0x871:  cmpl   $0xf4240,-0x30(%ebp)
085b72c0 +0x878:  jbe    085b72fc <+0x8b4>
085b72c2 +0x87a:  mov    -0x30(%ebp),%eax
085b72c5 +0x87d:  mov    %eax,0x14(%esp)
085b72c9 +0x881:  movl   $"BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP!! (%u)\n",0x10(%esp)
085b72d1 +0x889:  movl   $0x3bd4,0xc(%esp)
085b72d9 +0x891:  movl   $&_ZZN6CParty18onBloodRewardTimerE13TIMER_MESSAGEE19__PRETTY_FUNCTION__,0x8(%esp)
085b72e1 +0x899:  movl   $"party.cpp",0x4(%esp)
085b72e9 +0x8a1:  movl   $0x1,(%esp)
085b72f0 +0x8a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b72f5 +0x8ad:  movl   $0xf4240,-0x30(%ebp)
085b72fc +0x8b4:  movl   $0x0,-0x40(%ebp)
085b7303 +0x8bb:  mov    -0x30(%ebp),%ecx
085b7306 +0x8be:  mov    -0x34(%ebp),%edx
085b7309 +0x8c1:  mov    0x8(%ebp),%ebx
085b730c +0x8c4:  mov    %edx,%eax
085b730e +0x8c6:  add    %eax,%eax
085b7310 +0x8c8:  add    %edx,%eax
085b7312 +0x8ca:  shl    $0x3,%eax
085b7315 +0x8cd:  lea    (%ebx,%eax,1),%eax
085b7318 +0x8d0:  add    $0x78,%eax
085b731b +0x8d3:  mov    (%eax),%eax
085b731d +0x8d5:  movl   $0x0,0x18(%esp)
085b7325 +0x8dd:  movl   $0x0,0x14(%esp)
085b732d +0x8e5:  movl   $0x2,0x10(%esp)
085b7335 +0x8ed:  lea    -0x40(%ebp),%edx
085b7338 +0x8f0:  mov    %edx,0xc(%esp)
085b733c +0x8f4:  lea    -0x3c(%ebp),%edx
085b733f +0x8f7:  mov    %edx,0x8(%esp)
085b7343 +0x8fb:  mov    %ecx,0x4(%esp)
085b7347 +0x8ff:  mov    %eax,(%esp)
085b734a +0x902:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
085b734f +0x907:  test   %al,%al
085b7351 +0x909:  je     085b738d <+0x945>
085b7353 +0x90b:  mov    -0x34(%ebp),%edx
085b7356 +0x90e:  mov    0x8(%ebp),%ecx
085b7359 +0x911:  mov    %edx,%eax
085b735b +0x913:  add    %eax,%eax
085b735d +0x915:  add    %edx,%eax
085b735f +0x917:  shl    $0x3,%eax
085b7362 +0x91a:  lea    (%ecx,%eax,1),%eax
085b7365 +0x91d:  add    $0x78,%eax
085b7368 +0x920:  mov    (%eax),%eax
085b736a +0x922:  movl   $0x1,0xc(%esp)
085b7372 +0x92a:  movl   $0x2,0x8(%esp)
085b737a +0x932:  movl   $0x2,0x4(%esp)
085b7382 +0x93a:  mov    %eax,(%esp)
085b7385 +0x93d:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
085b738a +0x942:  jmp    085b738d <+0x945>
085b738c +0x944:  nop
085b738d +0x945:  addl   $0x1,-0x34(%ebp)
085b7391 +0x949:  cmpl   $0x3,-0x34(%ebp)
085b7395 +0x94d:  setle  %al
085b7398 +0x950:  test   %al,%al
085b739a +0x952:  jne    085b6d25 <+0x2dd>
085b73a0 +0x958:  mov    0x8(%ebp),%eax
085b73a3 +0x95b:  add    $0xb24,%eax
085b73a8 +0x960:  movl   $0x5,0x4(%esp)
085b73b0 +0x968:  mov    %eax,(%esp)
085b73b3 +0x96b:  call   085bf0b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x616>  ; global constructors keyed to CParty::cMember::cMember()+0x616
085b73b8 +0x970:  movl   $0x2,0x4(%esp)
085b73c0 +0x978:  mov    0x8(%ebp),%eax
085b73c3 +0x97b:  mov    %eax,(%esp)
085b73c6 +0x97e:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085b73cb +0x983:  movl   $0x25,0x4(%esp)
085b73d3 +0x98b:  mov    0x8(%ebp),%eax
085b73d6 +0x98e:  mov    %eax,(%esp)
085b73d9 +0x991:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b73de +0x996:  mov    %eax,%esi
085b73e0 +0x998:  mov    0x8(%ebp),%eax
085b73e3 +0x99b:  mov    %eax,(%esp)
085b73e6 +0x99e:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b73eb +0x9a3:  mov    %eax,%ebx
085b73ed +0x9a5:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b73f2 +0x9aa:  movl   $0x25,0x18(%esp)
085b73fa +0x9b2:  mov    %esi,0x14(%esp)
085b73fe +0x9b6:  movl   $0x3c,0x10(%esp)
085b7406 +0x9be:  movl   $0x25,0xc(%esp)
085b740e +0x9c6:  mov    %ebx,0x8(%esp)
085b7412 +0x9ca:  movl   $0x1,0x4(%esp)
085b741a +0x9d2:  mov    %eax,(%esp)
085b741d +0x9d5:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b7422 +0x9da:  mov    0x8(%ebp),%eax
085b7425 +0x9dd:  mov    %eax,(%esp)
085b7428 +0x9e0:  call   085ac59c <_ZN6CParty26checkInoutConditionDungeonEv>  ; CParty::checkInoutConditionDungeon()
085b742d +0x9e5:  mov    %eax,0x4(%esp)
085b7431 +0x9e9:  mov    0x8(%ebp),%eax
085b7434 +0x9ec:  mov    %eax,(%esp)
085b7437 +0x9ef:  call   085ac95e <_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE>  ; CParty::sendInoutConditionDungeon(RetryFailReason::T)
085b743c +0x9f4:  jmp    085b75c3 <+0xb7b>
085b7441 +0x9f9:  cmpl   $0x25,0xc(%ebp)
085b7445 +0x9fd:  jne    085b7493 <+0xa4b>
085b7447 +0x9ff:  mov    0x8(%ebp),%eax
085b744a +0xa02:  mov    %eax,(%esp)
085b744d +0xa05:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
085b7452 +0xa0a:  cmp    $0x2,%al
085b7454 +0xa0c:  setne  %al
085b7457 +0xa0f:  test   %al,%al
085b7459 +0xa11:  je     085b7465 <+0xa1d>
085b745b +0xa13:  mov    $0x0,%eax
085b7460 +0xa18:  jmp    085b75c8 <+0xb80>
085b7465 +0xa1d:  mov    0x8(%ebp),%eax
085b7468 +0xa20:  mov    %eax,(%esp)
085b746b +0xa23:  call   084699da <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xbd>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xbd
085b7470 +0xa28:  cmp    $0x3,%al
085b7472 +0xa2a:  sete   %al
085b7475 +0xa2d:  test   %al,%al
085b7477 +0xa2f:  je     085b7483 <+0xa3b>
085b7479 +0xa31:  mov    $0x0,%eax
085b747e +0xa36:  jmp    085b75c8 <+0xb80>
085b7483 +0xa3b:  mov    0x8(%ebp),%eax
085b7486 +0xa3e:  mov    %eax,(%esp)
085b7489 +0xa41:  call   085b8f92 <_ZN6CParty18finishBloodDungeonEv>  ; CParty::finishBloodDungeon()
085b748e +0xa46:  jmp    085b75c3 <+0xb7b>
085b7493 +0xa4b:  cmpl   $0x22,0xc(%ebp)
085b7497 +0xa4f:  jne    085b75c3 <+0xb7b>
085b749d +0xa55:  mov    0x8(%ebp),%eax
085b74a0 +0xa58:  add    $0xb24,%eax
085b74a5 +0xa5d:  mov    %eax,(%esp)
085b74a8 +0xa60:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
085b74ad +0xa65:  cmp    $0x1,%eax
085b74b0 +0xa68:  setle  %al
085b74b3 +0xa6b:  test   %al,%al
085b74b5 +0xa6d:  je     085b74c1 <+0xa79>
085b74b7 +0xa6f:  mov    $0x0,%eax
085b74bc +0xa74:  jmp    085b75c8 <+0xb80>
085b74c1 +0xa79:  mov    0x8(%ebp),%eax
085b74c4 +0xa7c:  mov    %eax,(%esp)
085b74c7 +0xa7f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b74cc +0xa84:  test   %eax,%eax
085b74ce +0xa86:  setle  %al
085b74d1 +0xa89:  test   %al,%al
085b74d3 +0xa8b:  je     085b74df <+0xa97>
085b74d5 +0xa8d:  mov    $0x0,%eax
085b74da +0xa92:  jmp    085b75c8 <+0xb80>
085b74df +0xa97:  mov    0x8(%ebp),%eax
085b74e2 +0xa9a:  mov    %eax,(%esp)
085b74e5 +0xa9d:  call   085b2b52 <_ZN6CParty19check_allmember_dieEv>  ; CParty::check_allmember_die()
085b74ea +0xaa2:  test   %al,%al
085b74ec +0xaa4:  je     085b7564 <+0xb1c>
085b74ee +0xaa6:  mov    0x8(%ebp),%eax
085b74f1 +0xaa9:  add    $0xb24,%eax
085b74f6 +0xaae:  mov    %eax,(%esp)
085b74f9 +0xab1:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085b74fe +0xab6:  test   %al,%al
085b7500 +0xab8:  je     085b7531 <+0xae9>
085b7502 +0xaba:  mov    0x8(%ebp),%eax
085b7505 +0xabd:  add    $0xb24,%eax
085b750a +0xac2:  mov    %eax,(%esp)
085b750d +0xac5:  call   0822cfa6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2650>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2650
085b7512 +0xaca:  test   %al,%al
085b7514 +0xacc:  je     085b7531 <+0xae9>
085b7516 +0xace:  mov    0x8(%ebp),%eax
085b7519 +0xad1:  add    $0xddc,%eax
085b751e +0xad6:  mov    %eax,(%esp)
085b7521 +0xad9:  call   085bf21c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x77a>  ; global constructors keyed to CParty::cMember::cMember()+0x77a
085b7526 +0xade:  test   %al,%al
085b7528 +0xae0:  je     085b7531 <+0xae9>
085b752a +0xae2:  mov    $0x1,%eax
085b752f +0xae7:  jmp    085b7536 <+0xaee>
085b7531 +0xae9:  mov    $0x0,%eax
085b7536 +0xaee:  test   %al,%al
085b7538 +0xaf0:  je     085b754f <+0xb07>
085b753a +0xaf2:  movl   $0x1,0x4(%esp)
085b7542 +0xafa:  mov    0x8(%ebp),%eax
085b7545 +0xafd:  mov    %eax,(%esp)
085b7548 +0xb00:  call   085b75d4 <_ZN6CParty22beginBloodClearProcessEb>  ; CParty::beginBloodClearProcess(bool)
085b754d +0xb05:  jmp    085b75c3 <+0xb7b>
085b754f +0xb07:  movl   $0x0,0x4(%esp)
085b7557 +0xb0f:  mov    0x8(%ebp),%eax
085b755a +0xb12:  mov    %eax,(%esp)
085b755d +0xb15:  call   085b75d4 <_ZN6CParty22beginBloodClearProcessEb>  ; CParty::beginBloodClearProcess(bool)
085b7562 +0xb1a:  jmp    085b75c3 <+0xb7b>
085b7564 +0xb1c:  mov    0x8(%ebp),%eax
085b7567 +0xb1f:  add    $0xb24,%eax
085b756c +0xb24:  mov    %eax,(%esp)
085b756f +0xb27:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085b7574 +0xb2c:  test   %al,%al
085b7576 +0xb2e:  je     085b75a7 <+0xb5f>
085b7578 +0xb30:  mov    0x8(%ebp),%eax
085b757b +0xb33:  add    $0xb24,%eax
085b7580 +0xb38:  mov    %eax,(%esp)
085b7583 +0xb3b:  call   0822cfa6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2650>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2650
085b7588 +0xb40:  test   %al,%al
085b758a +0xb42:  je     085b75a7 <+0xb5f>
085b758c +0xb44:  mov    0x8(%ebp),%eax
085b758f +0xb47:  add    $0xddc,%eax
085b7594 +0xb4c:  mov    %eax,(%esp)
085b7597 +0xb4f:  call   085bf21c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x77a>  ; global constructors keyed to CParty::cMember::cMember()+0x77a
085b759c +0xb54:  test   %al,%al
085b759e +0xb56:  je     085b75a7 <+0xb5f>
085b75a0 +0xb58:  mov    $0x1,%eax
085b75a5 +0xb5d:  jmp    085b75ac <+0xb64>
085b75a7 +0xb5f:  mov    $0x0,%eax
085b75ac +0xb64:  test   %al,%al
085b75ae +0xb66:  je     085b75c3 <+0xb7b>
085b75b0 +0xb68:  movl   $0x1,0x4(%esp)
085b75b8 +0xb70:  mov    0x8(%ebp),%eax
085b75bb +0xb73:  mov    %eax,(%esp)
085b75be +0xb76:  call   085b75d4 <_ZN6CParty22beginBloodClearProcessEb>  ; CParty::beginBloodClearProcess(bool)
085b75c3 +0xb7b:  mov    $0x1,%eax
085b75c8 +0xb80:  add    $0x1cc,%esp
085b75ce +0xb86:  pop    %ebx
085b75cf +0xb87:  pop    %esi
085b75d0 +0xb88:  pop    %edi
085b75d1 +0xb89:  pop    %ebp
085b75d2 +0xb8a:  ret
085b75d3 +0xb8b:  nop
```

## 反编译 C

```c
// CParty::onBloodRewardTimer @ 0x85b6a48

/* CParty::onBloodRewardTimer(TIMER_MESSAGE) */

undefined4 __thiscall CParty::onBloodRewardTimer(CParty *this,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Inven_Item *pIVar4;
  Inven_Item *pIVar5;
  int iVar6;
  Inven_Item *pIVar7;
  int iVar8;
  Inven_Item *pIVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TimerQueue *pTVar14;
  CInventory *pCVar15;
  CCirculationStatistic *pCVar16;
  CDataManager *this_00;
  char *pcVar17;
  size_t sVar18;
  undefined4 *puVar19;
  char local_165 [256];
  char local_65 [21];
  PacketGuard local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar3 = gen_timer_key(this,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(this + 0xb24));
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 == 0x23) {
    iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(this + 0xb24));
    if (iVar3 < 3) {
      return 0;
    }
    for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
      iVar3 = get_user(this,local_3c);
      if ((iVar3 == 0) || (cVar2 = checkValidUser(this,local_3c), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        pIVar4 = (Inven_Item *)
                 CBattle_Field::CBloodClearRewardData::getRewardItem
                           ((CBloodClearRewardData *)(this + 0xddc),3);
        iVar3 = CBattle_Field::CBloodClearRewardData::getRewardItemCount
                          ((CBloodClearRewardData *)(this + 0xddc),3);
        pIVar5 = (Inven_Item *)
                 CBattle_Field::CBloodClearRewardData::getRewardItem
                           ((CBloodClearRewardData *)(this + 0xddc),2);
        iVar6 = CBattle_Field::CBloodClearRewardData::getRewardItemCount
                          ((CBloodClearRewardData *)(this + 0xddc),2);
        pIVar7 = (Inven_Item *)
                 CBattle_Field::CBloodClearRewardData::getRewardItem
                           ((CBloodClearRewardData *)(this + 0xddc),1);
        iVar8 = CBattle_Field::CBloodClearRewardData::getRewardItemCount
                          ((CBloodClearRewardData *)(this + 0xddc),1);
        pIVar9 = (Inven_Item *)
                 CBattle_Field::CBloodClearRewardData::getRewardItem
                           ((CBloodClearRewardData *)(this + 0xddc),0);
        iVar10 = CBattle_Field::CBloodClearRewardData::getRewardItemCount
                           ((CBloodClearRewardData *)(this + 0xddc),0);
        iVar11 = CBattle_Field::CBloodClearRewardData::getCurrentBloodRound
                           ((CBloodClearRewardData *)(this + 0xddc));
        BloodClearRewardPacket
                  (this,local_3c,iVar11,iVar10,pIVar9,iVar8,pIVar7,iVar6,pIVar5,iVar3,pIVar4);
      }
    }
    CBattle_Field::setBloodState((CBattle_Field *)(this + 0xb24),4);
    uVar12 = gen_timer_key(this,0x24);
    uVar13 = GetPartyIndex(this);
    pTVar14 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar14,1,uVar13,0x24,8,uVar12,0x24);
  }
  else if (param_2 == 0x24) {
    iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(this + 0xb24));
    if (iVar3 < 4) {
      return 0;
    }
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      iVar3 = get_user(this,local_38);
      if ((iVar3 == 0) || (cVar2 = checkValidUser(this,local_38), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_30 = 0;
        while (iVar3 = CBattle_Field::CBloodClearRewardData::getRewardItemCount
                                 ((CBloodClearRewardData *)(this + 0xddc),local_38),
              local_30 < iVar3) {
          local_2c = CBattle_Field::CBloodClearRewardData::getRewardItem
                               ((CBloodClearRewardData *)(this + 0xddc),local_38);
          if (*(int *)(local_30 * 0x3d + local_2c + 2) != -1) {
            local_28 = 0xffffffff;
            if (*(int *)(local_30 * 0x3d + local_2c + 2) == 0) {
              uVar12 = Inven_Item::get_add_info((Inven_Item *)(local_30 * 0x3d + local_2c));
              pCVar15 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenW
                                  (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
              local_24 = CInventory::gain_money(pCVar15,uVar12,5,1,0);
              iVar6 = Inven_Item::get_add_info((Inven_Item *)(local_30 * 0x3d + local_2c));
              iVar3 = local_24;
              if (local_24 < iVar6) {
                uVar12 = Inven_Item::get_add_info((Inven_Item *)(local_30 * 0x3d + local_2c));
                CUser::SendMoneyFullReason
                          (*(CUser **)(this + local_38 * 0x18 + 0x78),0,uVar12,iVar3);
              }
              iVar3 = local_24;
              local_28 = 0;
              if (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\x01') {
                uVar12 = *(undefined4 *)(this + local_38 * 0x18 + 0x78);
                pCVar16 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                CCirculationStatistic::AddCirculationStatistic(pCVar16,0xb,uVar12,iVar3);
              }
              else if (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\x02') {
                uVar12 = *(undefined4 *)(this + local_38 * 0x18 + 0x78);
                pCVar16 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                CCirculationStatistic::AddCirculationStatistic(pCVar16,0xc,uVar12,iVar3);
              }
            }
            else {
              puVar19 = (undefined4 *)(local_30 * 0x3d + local_2c);
              uVar12 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
              local_28 = CInventory::insertItemIntoInventory
                                   (uVar12,*puVar19,puVar19[1],puVar19[2],puVar19[3],puVar19[4],
                                    puVar19[5],puVar19[6],puVar19[7],puVar19[8],puVar19[9],
                                    puVar19[10],puVar19[0xb],puVar19[0xc],puVar19[0xd],puVar19[0xe],
                                    *(undefined1 *)(puVar19 + 0xf),0xb,1,1);
            }
            if (local_28 < 0) {
              if ((*(int *)(local_30 * 0x3d + local_2c + 2) == 0x4e3) ||
                 (*(int *)(local_30 * 0x3d + local_2c + 2) == 0x4e4)) {
                iVar3 = *(int *)(local_30 * 0x3d + local_2c + 2);
                this_00 = (CDataManager *)G_CDataManager();
                local_20 = CDataManager::find_item(this_00,iVar3);
                if (local_20 != 0) {
                  pcVar17 = (char *)RDARScriptStringManager::findString
                                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                               "game_server_msg_153",(bool *)0x0);
                  strncpy(local_65,pcVar17,0x14);
                  pcVar17 = (char *)RDARScriptStringManager::findString
                                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                               "game_server_msg_154",(bool *)0x0);
                  strncpy(local_165,pcVar17,0xff);
                  uVar12 = CUser::GetServerGroup(*(CUser **)(this + local_38 * 0x18 + 0x78));
                  sVar18 = strlen(local_165);
                  uVar13 = CUserCharacInfo::getCurCharacNo
                                     (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
                  WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                            (local_65,local_30 * 0x3d + local_2c,0,uVar13,local_165,sVar18,8,uVar12,
                             0,0);
                }
              }
            }
            else {
              PacketGuard::PacketGuard(local_50);
                    /* try { // try from 085b700b to 085b70cf has its CatchHandler @ 085b70d2 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
              iVar3 = Inven_Item::GetItemSpace((Inven_Item *)(local_30 * 0x3d + local_2c));
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar3);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
              uVar12 = Inven_Item::GetItemSpace((Inven_Item *)(local_30 * 0x3d + local_2c));
              uVar12 = GetInvenTypeFromItemSpace(uVar12);
              pCVar15 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenR
                                  (*(CUserCharacInfo **)(this + local_38 * 0x18 + 0x78));
              CInventory::MakeItemPacket(pCVar15,uVar12,local_28,local_50);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
              CUser::Send(*(CUser **)(this + local_38 * 0x18 + 0x78),local_50);
              PacketGuard::~PacketGuard(local_50);
            }
          }
          local_30 = local_30 + 1;
        }
        local_40 = 0;
        local_34 = CBattle_Field::CBloodClearRewardData::getRewardExp
                             ((CBloodClearRewardData *)(this + 0xddc),local_38);
        if (1000000 < local_34) {
          LogManager::logFormat
                    (1,"party.cpp","bool CParty::onBloodRewardTimer(TIMER_MESSAGE)",0x3bd4,
                     "BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP!! (%u)\n",local_34);
          local_34 = 1000000;
        }
        local_44 = 0;
        cVar2 = CUser::gain_exp_sp(*(CUser **)(this + local_38 * 0x18 + 0x78),local_34,&local_40,
                                   &local_44,2,0,0);
        if (cVar2 != '\0') {
          CUser::SendNotiPacket(*(CUser **)(this + local_38 * 0x18 + 0x78),2,2,1);
        }
      }
    }
    CBattle_Field::setBloodState((CBattle_Field *)(this + 0xb24),5);
    SetEPLPState(this,'\x02');
    uVar12 = gen_timer_key(this,0x25);
    uVar13 = GetPartyIndex(this);
    pTVar14 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar14,1,uVar13,0x25,0x3c,uVar12,0x25);
    uVar12 = checkInoutConditionDungeon(this);
    sendInoutConditionDungeon(this,uVar12);
  }
  else if (param_2 == 0x25) {
    cVar2 = GetEPLPState(this);
    if (cVar2 != '\x02') {
      return 0;
    }
    cVar2 = GetSelectedEPLPCmd(this);
    if (cVar2 == '\x03') {
      return 0;
    }
    finishBloodDungeon(this);
  }
  else if (param_2 == 0x22) {
    iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(this + 0xb24));
    if (iVar3 < 2) {
      return 0;
    }
    iVar3 = get_member_count(this);
    if (iVar3 < 1) {
      return 0;
    }
    cVar2 = check_allmember_die(this);
    if (cVar2 == '\0') {
      cVar2 = CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
      if (((cVar2 == '\0') ||
          (cVar2 = CBattle_Field::check_end_point((CBattle_Field *)(this + 0xb24)), cVar2 == '\0'))
         || (cVar2 = CBattle_Field::CBloodClearRewardData::isBloodClear
                               ((CBloodClearRewardData *)(this + 0xddc)), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        beginBloodClearProcess(this,true);
      }
    }
    else {
      cVar2 = CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
      if (((cVar2 == '\0') ||
          (cVar2 = CBattle_Field::check_end_point((CBattle_Field *)(this + 0xb24)), cVar2 == '\0'))
         || (cVar2 = CBattle_Field::CBloodClearRewardData::isBloodClear
                               ((CBloodClearRewardData *)(this + 0xddc)), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        beginBloodClearProcess(this,true);
      }
      else {
        beginBloodClearProcess(this,false);
      }
    }
  }
  return 1;
}
```
