# SendMail

`_ZN5CUser8SendMailEb`

`CUser::SendMail(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689f12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689f12  _ZN5CUser8SendMailEb
#           CUser::SendMail(bool)
# range [0x08689f12, 0x0868a2db]
08689f12 +0x000:  push   %ebp
08689f13 +0x001:  mov    %esp,%ebp
08689f15 +0x003:  push   %esi
08689f16 +0x004:  push   %ebx
08689f17 +0x005:  sub    $0x3fe0,%esp
08689f1d +0x00b:  mov    0xc(%ebp),%eax
08689f20 +0x00e:  mov    %al,-0x3fbc(%ebp)
08689f26 +0x014:  mov    0x8(%ebp),%eax
08689f29 +0x017:  movb   $0x1,0x8e3ed(%eax)
08689f30 +0x01e:  mov    0x8(%ebp),%eax
08689f33 +0x021:  movzbl 0x8e3ec(%eax),%eax
08689f3a +0x028:  test   %al,%al
08689f3c +0x02a:  je     08689f59 <+0x47>
08689f3e +0x02c:  movzbl -0x3fbc(%ebp),%eax
08689f45 +0x033:  mov    %eax,0x4(%esp)
08689f49 +0x037:  mov    0x8(%ebp),%eax
08689f4c +0x03a:  mov    %eax,(%esp)
08689f4f +0x03d:  call   0868a2dc <_ZN5CUser13SendMultiMailEb>  ; CUser::SendMultiMail(bool)
08689f54 +0x042:  jmp    0868a2d2 <+0x3c0>
08689f59 +0x047:  movzbl -0x3fbc(%ebp),%eax
08689f60 +0x04e:  xor    $0x1,%eax
08689f63 +0x051:  test   %al,%al
08689f65 +0x053:  je     08689fa7 <+0x95>
08689f67 +0x055:  movl   $0x87,0x8(%esp)
08689f6f +0x05d:  movl   $0x61,0x4(%esp)
08689f77 +0x065:  mov    0x8(%ebp),%eax
08689f7a +0x068:  mov    %eax,(%esp)
08689f7d +0x06b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08689f82 +0x070:  mov    0x8(%ebp),%eax
08689f85 +0x073:  add    $0x8e101,%eax
08689f8a +0x078:  movl   $0x145,0x8(%esp)
08689f92 +0x080:  movl   $0x0,0x4(%esp)
08689f9a +0x088:  mov    %eax,(%esp)
08689f9d +0x08b:  call   0807dcc0 <_init+0x5b8>
08689fa2 +0x090:  jmp    0868a2d2 <+0x3c0>
08689fa7 +0x095:  mov    0x8(%ebp),%eax
08689faa +0x098:  add    $0x8e101,%eax
08689faf +0x09d:  mov    %eax,0x4(%esp)
08689fb3 +0x0a1:  lea    -0x3fb4(%ebp),%eax
08689fb9 +0x0a7:  mov    %eax,(%esp)
08689fbc +0x0aa:  call   08236e06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc4b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc4b0
08689fc1 +0x0af:  mov    0x8(%ebp),%eax
08689fc4 +0x0b2:  lea    0x8e112(%eax),%edx
08689fca +0x0b8:  lea    -0x3fb4(%ebp),%eax
08689fd0 +0x0be:  mov    %eax,0x8(%esp)
08689fd4 +0x0c2:  mov    %edx,0x4(%esp)
08689fd8 +0x0c6:  mov    0x8(%ebp),%eax
08689fdb +0x0c9:  mov    %eax,(%esp)
08689fde +0x0cc:  call   08555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>  ; WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
08689fe3 +0x0d1:  mov    %eax,-0x24(%ebp)
08689fe6 +0x0d4:  cmpl   $0x0,-0x24(%ebp)
08689fea +0x0d8:  je     0868a00e <+0xfc>
08689fec +0x0da:  mov    -0x24(%ebp),%eax
08689fef +0x0dd:  movzbl %al,%eax
08689ff2 +0x0e0:  mov    %eax,0x8(%esp)
08689ff6 +0x0e4:  movl   $0x61,0x4(%esp)
08689ffe +0x0ec:  mov    0x8(%ebp),%eax
0868a001 +0x0ef:  mov    %eax,(%esp)
0868a004 +0x0f2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0868a009 +0x0f7:  jmp    0868a0a5 <+0x193>
0868a00e +0x0fc:  movb   $0x0,-0x1d(%ebp)
0868a012 +0x100:  mov    0x8(%ebp),%eax
0868a015 +0x103:  mov    0x8e13a(%eax),%eax
0868a01b +0x109:  mov    %eax,%ebx
0868a01d +0x10b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868a022 +0x110:  mov    %ebx,0x4(%esp)
0868a026 +0x114:  mov    %eax,(%esp)
0868a029 +0x117:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868a02e +0x11c:  mov    %eax,-0x1c(%ebp)
0868a031 +0x11f:  cmpl   $0x0,-0x1c(%ebp)
0868a035 +0x123:  je     0868a074 <+0x162>
0868a037 +0x125:  mov    -0x1c(%ebp),%eax
0868a03a +0x128:  mov    (%eax),%eax
0868a03c +0x12a:  add    $0x10,%eax
0868a03f +0x12d:  mov    (%eax),%edx
0868a041 +0x12f:  mov    -0x1c(%ebp),%eax
0868a044 +0x132:  mov    %eax,(%esp)
0868a047 +0x135:  call   *%edx
0868a049 +0x137:  xor    $0x1,%eax
0868a04c +0x13a:  test   %al,%al
0868a04e +0x13c:  je     0868a067 <+0x155>
0868a050 +0x13e:  mov    -0x1c(%ebp),%eax
0868a053 +0x141:  mov    %eax,(%esp)
0868a056 +0x144:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0868a05b +0x149:  cmp    $0x1,%eax
0868a05e +0x14c:  jg     0868a067 <+0x155>
0868a060 +0x14e:  mov    $0x1,%eax
0868a065 +0x153:  jmp    0868a06c <+0x15a>
0868a067 +0x155:  mov    $0x0,%eax
0868a06c +0x15a:  test   %al,%al
0868a06e +0x15c:  je     0868a074 <+0x162>
0868a070 +0x15e:  movb   $0x1,-0x1d(%ebp)
0868a074 +0x162:  mov    0x8(%ebp),%eax
0868a077 +0x165:  mov    0x8e13a(%eax),%eax
0868a07d +0x16b:  test   %eax,%eax
0868a07f +0x16d:  jne    0868a085 <+0x173>
0868a081 +0x16f:  movb   $0x1,-0x1d(%ebp)
0868a085 +0x173:  movzbl -0x1d(%ebp),%edx
0868a089 +0x177:  mov    0x8(%ebp),%eax
0868a08c +0x17a:  mov    0x8e12f(%eax),%eax
0868a092 +0x180:  mov    %edx,0x8(%esp)
0868a096 +0x184:  mov    %eax,0x4(%esp)
0868a09a +0x188:  mov    0x8(%ebp),%eax
0868a09d +0x18b:  mov    %eax,(%esp)
0868a0a0 +0x18e:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
0868a0a5 +0x193:  mov    0x8(%ebp),%eax
0868a0a8 +0x196:  mov    %eax,(%esp)
0868a0ab +0x199:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868a0b0 +0x19e:  test   %eax,%eax
0868a0b2 +0x1a0:  setne  %al
0868a0b5 +0x1a3:  test   %al,%al
0868a0b7 +0x1a5:  je     0868a2b2 <+0x3a0>
0868a0bd +0x1ab:  mov    0x8(%ebp),%eax
0868a0c0 +0x1ae:  mov    %eax,(%esp)
0868a0c3 +0x1b1:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0868a0c8 +0x1b6:  mov    %ax,-0x16(%ebp)
0868a0cc +0x1ba:  movl   $0x19,(%esp)
0868a0d3 +0x1c1:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0868a0d8 +0x1c6:  mov    %eax,-0x14(%ebp)
0868a0db +0x1c9:  mov    0x8(%ebp),%eax
0868a0de +0x1cc:  mov    %eax,(%esp)
0868a0e1 +0x1cf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868a0e6 +0x1d4:  mov    %eax,(%esp)
0868a0e9 +0x1d7:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0868a0ee +0x1dc:  mov    %eax,-0x3fc4(%ebp)
0868a0f4 +0x1e2:  fildl  -0x3fc4(%ebp)
0868a0fa +0x1e8:  fildl  -0x14(%ebp)
0868a0fd +0x1eb:  fldl   &data#f224355d(.rodata)
0868a103 +0x1f1:  fmulp  %st,%st(1)
0868a105 +0x1f3:  fstps  -0x3fc0(%ebp)
0868a10b +0x1f9:  flds   -0x3fc0(%ebp)
0868a111 +0x1ff:  fldl   &data#a3841abf(.rodata)
0868a117 +0x205:  faddp  %st,%st(1)
0868a119 +0x207:  fmulp  %st,%st(1)
0868a11b +0x209:  fnstcw -0x3fc6(%ebp)
0868a121 +0x20f:  movzwl -0x3fc6(%ebp),%eax
0868a128 +0x216:  mov    $0xc,%ah
0868a12a +0x218:  mov    %ax,-0x3fc8(%ebp)
0868a131 +0x21f:  fldcw  -0x3fc8(%ebp)
0868a137 +0x225:  fistpll -0x3fd0(%ebp)
0868a13d +0x22b:  fldcw  -0x3fc6(%ebp)
0868a143 +0x231:  mov    -0x3fd0(%ebp),%eax
0868a149 +0x237:  mov    -0x3fcc(%ebp),%edx
0868a14f +0x23d:  mov    %eax,%edx
0868a151 +0x23f:  mov    0x8(%ebp),%eax
0868a154 +0x242:  mov    0x8e12f(%eax),%eax
0868a15a +0x248:  cmp    %eax,%edx
0868a15c +0x24a:  setbe  %al
0868a15f +0x24d:  test   %al,%al
0868a161 +0x24f:  je     0868a2b2 <+0x3a0>
0868a167 +0x255:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0868a16c +0x25a:  movl   $0xa12b,0x8(%esp)
0868a174 +0x262:  movl   $"user.cpp",0x4(%esp)
0868a17c +0x26a:  mov    %eax,(%esp)
0868a17f +0x26d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0868a184 +0x272:  movl   $0x1,0x8(%esp)
0868a18c +0x27a:  mov    %eax,0x4(%esp)
0868a190 +0x27e:  lea    -0x2c(%ebp),%eax
0868a193 +0x281:  mov    %eax,(%esp)
0868a196 +0x284:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0868a19b +0x289:  lea    -0x2c(%ebp),%eax
0868a19e +0x28c:  mov    %eax,(%esp)
0868a1a1 +0x28f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868a1a6 +0x294:  movl   $0x18a,0x4(%esp)
0868a1ae +0x29c:  mov    %eax,(%esp)
0868a1b1 +0x29f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0868a1b6 +0x2a4:  mov    0x8(%ebp),%eax
0868a1b9 +0x2a7:  mov    %eax,(%esp)
0868a1bc +0x2aa:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868a1c1 +0x2af:  mov    %eax,%ebx
0868a1c3 +0x2b1:  lea    -0x2c(%ebp),%eax
0868a1c6 +0x2b4:  mov    %eax,(%esp)
0868a1c9 +0x2b7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0868a1ce +0x2bc:  mov    %ebx,0x4(%esp)
0868a1d2 +0x2c0:  mov    %eax,(%esp)
0868a1d5 +0x2c3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0868a1da +0x2c8:  lea    -0x2c(%ebp),%eax
0868a1dd +0x2cb:  mov    %eax,(%esp)
0868a1e0 +0x2ce:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0868a1e5 +0x2d3:  mov    %eax,(%esp)
0868a1e8 +0x2d6:  call   08236e34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc4de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc4de
0868a1ed +0x2db:  mov    %eax,-0x10(%ebp)
0868a1f0 +0x2de:  movl   $0x24,0x8(%esp)
0868a1f8 +0x2e6:  movl   $0x0,0x4(%esp)
0868a200 +0x2ee:  mov    -0x10(%ebp),%eax
0868a203 +0x2f1:  mov    %eax,(%esp)
0868a206 +0x2f4:  call   0807dcc0 <_init+0x5b8>
0868a20b +0x2f9:  mov    0x8(%ebp),%eax
0868a20e +0x2fc:  mov    %eax,(%esp)
0868a211 +0x2ff:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868a216 +0x304:  mov    -0x10(%ebp),%edx
0868a219 +0x307:  mov    %eax,(%edx)
0868a21b +0x309:  mov    0x8(%ebp),%eax
0868a21e +0x30c:  mov    0x8e10e(%eax),%eax
0868a224 +0x312:  mov    0x8(%ebp),%edx
0868a227 +0x315:  lea    0x8e112(%edx),%ecx
0868a22d +0x31b:  mov    -0x10(%ebp),%edx
0868a230 +0x31e:  add    $0x4,%edx
0868a233 +0x321:  mov    %eax,0x8(%esp)
0868a237 +0x325:  mov    %ecx,0x4(%esp)
0868a23b +0x329:  mov    %edx,(%esp)
0868a23e +0x32c:  call   0807d8d0 <_init+0x1c8>
0868a243 +0x331:  mov    -0x10(%ebp),%eax
0868a246 +0x334:  movb   $0x0,0x21(%eax)
0868a24a +0x338:  movl   $0x14,(%esp)
0868a251 +0x33f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0868a256 +0x344:  mov    %eax,-0xc(%ebp)
0868a259 +0x347:  movzwl -0x16(%ebp),%eax
0868a25d +0x34b:  mov    -0xc(%ebp),%edx
0868a260 +0x34e:  add    $0x78,%edx
0868a263 +0x351:  cmp    %edx,%eax
0868a265 +0x353:  jl     0868a26e <+0x35c>
0868a267 +0x355:  mov    -0x10(%ebp),%eax
0868a26a +0x358:  movb   $0x1,0x21(%eax)
0868a26e +0x35c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0868a273 +0x361:  lea    -0x2c(%ebp),%edx
0868a276 +0x364:  mov    %edx,0x8(%esp)
0868a27a +0x368:  movl   $0x2,0x4(%esp)
0868a282 +0x370:  mov    %eax,(%esp)
0868a285 +0x373:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0868a28a +0x378:  jmp    0868a2a7 <+0x395>
0868a28c +0x37a:  mov    %edx,%ebx
0868a28e +0x37c:  mov    %eax,%esi
0868a290 +0x37e:  lea    -0x2c(%ebp),%eax
0868a293 +0x381:  mov    %eax,(%esp)
0868a296 +0x384:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868a29b +0x389:  mov    %esi,%eax
0868a29d +0x38b:  mov    %ebx,%edx
0868a29f +0x38d:  mov    %eax,(%esp)
0868a2a2 +0x390:  call   08ae3750 <_Unwind_Resume>
0868a2a7 +0x395:  lea    -0x2c(%ebp),%eax
0868a2aa +0x398:  mov    %eax,(%esp)
0868a2ad +0x39b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0868a2b2 +0x3a0:  mov    0x8(%ebp),%eax
0868a2b5 +0x3a3:  add    $0x8e101,%eax
0868a2ba +0x3a8:  movl   $0x145,0x8(%esp)
0868a2c2 +0x3b0:  movl   $0x0,0x4(%esp)
0868a2ca +0x3b8:  mov    %eax,(%esp)
0868a2cd +0x3bb:  call   0807dcc0 <_init+0x5b8>
0868a2d2 +0x3c0:  add    $0x3fe0,%esp
0868a2d8 +0x3c6:  pop    %ebx
0868a2d9 +0x3c7:  pop    %esi
0868a2da +0x3c8:  pop    %ebp
0868a2db +0x3c9:  ret
```

## 反编译 C

```c
// CUser::SendMail @ 0x8689f12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::SendMail(bool) */

void __thiscall CUser::SendMail(CUser *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  CInventory *this_01;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 uVar6;
  uint local_3fd4;
  MSG_CHECK_MAIL_RECEIVER local_3fb8 [16264];
  CStreamGuard local_30 [8];
  uint local_28;
  byte local_21;
  CItem *local_20;
  ushort local_1a;
  int local_18;
  SIG_FIND_FACTORY_HUB *local_14;
  int local_10;
  
  this[0x8e3ed] = (CUser)0x1;
  if (this[0x8e3ec] != (CUser)0x0) {
    SendMultiMail(this,param_1);
    return;
  }
  if (param_1) {
    MSG_CHECK_MAIL_RECEIVER::
    set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)0,MSG_MAILBOX_SEND>
              (local_3fb8,(MSG_MAILBOX_SEND *)(this + 0x8e101));
    local_28 = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                         (this,(char *)(this + 0x8e112),local_3fb8);
    if (local_28 == 0) {
      local_21 = 0;
      iVar3 = *(int *)(this + 0x8e13a);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,iVar3);
      if (local_20 != (CItem *)0x0) {
        cVar2 = (**(code **)(*(int *)local_20 + 0x10))(local_20);
        if ((cVar2 == '\x01') || (iVar3 = CItem::get_rarity(local_20), 1 < iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_21 = 1;
        }
      }
      if (*(int *)(this + 0x8e13a) == 0) {
        local_21 = 1;
      }
      IncrementTradeGold(this,*(uint *)(this + 0x8e12f),(uint)local_21);
    }
    else {
      SendCmdErrorPacket(this,0x61,local_28 & 0xff);
    }
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar3 != 0) {
      local_1a = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
      local_18 = get_rand_int(0x19);
      this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      iVar3 = CInventory::get_money(this_01);
      local_3fd4 = (uint)(longlong)
                         ROUND(((float)_DAT_08cf3990 + (float)_DAT_08cf3988 * (float)local_18) *
                               (float)iVar3);
      if (local_3fd4 <= *(uint *)(this + 0x8e12f)) {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xa12b);
        CStreamGuard::CStreamGuard(local_30,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0868a1b1 to 0868a289 has its CatchHandler @ 0868a28c */
        CStreamGuard::operator<<(pCVar5,0x18a);
        iVar3 = GetUID(this);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
        CStreamGuard::operator<<(pCVar5,iVar3);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_30);
        local_14 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB>(pCVar5);
        memset(local_14,0,0x24);
        uVar6 = get_acc_id(this);
        *(undefined4 *)local_14 = uVar6;
        strncpy((char *)(local_14 + 4),(char *)(this + 0x8e112),*(size_t *)(this + 0x8e10e));
        local_14[0x21] = (SIG_FIND_FACTORY_HUB)0x0;
        local_10 = get_rand_int(0x14);
        if (local_10 + 0x78 <= (int)(uint)local_1a) {
          local_14[0x21] = (SIG_FIND_FACTORY_HUB)0x1;
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
        CStreamGuard::~CStreamGuard(local_30);
      }
    }
    memset(this + 0x8e101,0,0x145);
    return;
  }
  SendCmdErrorPacket(this,0x61,0x87);
  memset(this + 0x8e101,0,0x145);
  return;
}
```
