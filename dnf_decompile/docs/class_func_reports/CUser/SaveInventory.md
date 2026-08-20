# SaveInventory

`_ZN5CUser13SaveInventoryEv`

`CUser::SaveInventory()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fe52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fe52  _ZN5CUser13SaveInventoryEv
#           CUser::SaveInventory()
# range [0x0864fe52, 0x086501c7]
0864fe52 +0x000:  push   %ebp
0864fe53 +0x001:  mov    %esp,%ebp
0864fe55 +0x003:  push   %esi
0864fe56 +0x004:  push   %ebx
0864fe57 +0x005:  sub    $0x30,%esp
0864fe5a +0x008:  mov    0x8(%ebp),%eax
0864fe5d +0x00b:  mov    %eax,(%esp)
0864fe60 +0x00e:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
0864fe65 +0x013:  test   %al,%al
0864fe67 +0x015:  je     0864fedb <+0x89>
0864fe69 +0x017:  mov    0x8(%ebp),%eax
0864fe6c +0x01a:  mov    %eax,(%esp)
0864fe6f +0x01d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0864fe74 +0x022:  mov    %eax,%esi
0864fe76 +0x024:  mov    0x8(%ebp),%eax
0864fe79 +0x027:  mov    %eax,(%esp)
0864fe7c +0x02a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864fe81 +0x02f:  movl   $0x0,0x4(%esp)
0864fe89 +0x037:  mov    %eax,(%esp)
0864fe8c +0x03a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0864fe91 +0x03f:  mov    %eax,%ebx
0864fe93 +0x041:  movl   $0x5,0xc(%esp)
0864fe9b +0x049:  movl   $0x181a,0x8(%esp)
0864fea3 +0x051:  movl   $&_ZZN5CUser13SaveInventoryEvE19__PRETTY_FUNCTION__,0x4(%esp)
0864feab +0x059:  lea    -0x1c(%ebp),%eax
0864feae +0x05c:  mov    %eax,(%esp)
0864feb1 +0x05f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864feb6 +0x064:  mov    %esi,0xc(%esp)
0864feba +0x068:  mov    %ebx,0x8(%esp)
0864febe +0x06c:  movl   $"Can not save character until loading done(m_id: %s, charac_no: %d",0x4(%esp)
0864fec6 +0x074:  lea    -0x1c(%ebp),%eax
0864fec9 +0x077:  mov    %eax,(%esp)
0864fecc +0x07a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864fed1 +0x07f:  mov    $0x0,%ebx
0864fed6 +0x084:  jmp    086501bf <+0x36d>
0864fedb +0x089:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0864fee0 +0x08e:  mov    %eax,(%esp)
0864fee3 +0x091:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0864fee8 +0x096:  cmp    $0x7,%eax
0864feeb +0x099:  sete   %al
0864feee +0x09c:  test   %al,%al
0864fef0 +0x09e:  je     0864fefc <+0xaa>
0864fef2 +0x0a0:  mov    $0x0,%ebx
0864fef7 +0x0a5:  jmp    086501bf <+0x36d>
0864fefc +0x0aa:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0864ff01 +0x0af:  movl   $0x1828,0x8(%esp)
0864ff09 +0x0b7:  movl   $"user.cpp",0x4(%esp)
0864ff11 +0x0bf:  mov    %eax,(%esp)
0864ff14 +0x0c2:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0864ff19 +0x0c7:  movl   $0x1,0x8(%esp)
0864ff21 +0x0cf:  mov    %eax,0x4(%esp)
0864ff25 +0x0d3:  lea    -0x24(%ebp),%eax
0864ff28 +0x0d6:  mov    %eax,(%esp)
0864ff2b +0x0d9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0864ff30 +0x0de:  lea    -0x24(%ebp),%eax
0864ff33 +0x0e1:  mov    %eax,(%esp)
0864ff36 +0x0e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864ff3b +0x0e9:  movl   $0x23,0x4(%esp)
0864ff43 +0x0f1:  mov    %eax,(%esp)
0864ff46 +0x0f4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864ff4b +0x0f9:  mov    0x8(%ebp),%eax
0864ff4e +0x0fc:  mov    %eax,(%esp)
0864ff51 +0x0ff:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0864ff56 +0x104:  mov    %eax,%ebx
0864ff58 +0x106:  lea    -0x24(%ebp),%eax
0864ff5b +0x109:  mov    %eax,(%esp)
0864ff5e +0x10c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0864ff63 +0x111:  mov    %ebx,0x4(%esp)
0864ff67 +0x115:  mov    %eax,(%esp)
0864ff6a +0x118:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0864ff6f +0x11d:  lea    -0x24(%ebp),%eax
0864ff72 +0x120:  mov    %eax,(%esp)
0864ff75 +0x123:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0864ff7a +0x128:  mov    %eax,(%esp)
0864ff7d +0x12b:  call   08180dac <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa43>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa43
0864ff82 +0x130:  mov    %eax,-0xc(%ebp)
0864ff85 +0x133:  movl   $0xad99,0x8(%esp)
0864ff8d +0x13b:  movl   $0x0,0x4(%esp)
0864ff95 +0x143:  mov    -0xc(%ebp),%eax
0864ff98 +0x146:  mov    %eax,(%esp)
0864ff9b +0x149:  call   0807dcc0 <_init+0x5b8>
0864ffa0 +0x14e:  mov    -0xc(%ebp),%eax
0864ffa3 +0x151:  mov    %eax,0x4(%esp)
0864ffa7 +0x155:  mov    0x8(%ebp),%eax
0864ffaa +0x158:  mov    %eax,(%esp)
0864ffad +0x15b:  call   0864fd80 <_ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY>  ; CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*)
0864ffb2 +0x160:  mov    -0xc(%ebp),%eax
0864ffb5 +0x163:  movb   $0x0,0x8(%eax)
0864ffb9 +0x167:  mov    0x8(%ebp),%eax
0864ffbc +0x16a:  mov    %eax,(%esp)
0864ffbf +0x16d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864ffc4 +0x172:  movl   $0x0,0x4(%esp)
0864ffcc +0x17a:  mov    %eax,(%esp)
0864ffcf +0x17d:  call   084fb0a0 <_ZNK10CInventory13GetInvenStartEi>  ; CInventory::GetInvenStart(int) const
0864ffd4 +0x182:  mov    -0xc(%ebp),%edx
0864ffd7 +0x185:  add    $0x19,%edx
0864ffda +0x188:  movl   $0x53e,0x8(%esp)
0864ffe2 +0x190:  mov    %eax,0x4(%esp)
0864ffe6 +0x194:  mov    %edx,(%esp)
0864ffe9 +0x197:  call   0807d8a0 <_init+0x198>
0864ffee +0x19c:  mov    0x8(%ebp),%eax
0864fff1 +0x19f:  mov    %eax,(%esp)
0864fff4 +0x1a2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864fff9 +0x1a7:  movl   $0x1,0x4(%esp)
08650001 +0x1af:  mov    %eax,(%esp)
08650004 +0x1b2:  call   084fb0a0 <_ZNK10CInventory13GetInvenStartEi>  ; CInventory::GetInvenStart(int) const
08650009 +0x1b7:  mov    -0xc(%ebp),%edx
0865000c +0x1ba:  add    $0x557,%edx
08650012 +0x1c0:  movl   $0x4a58,0x8(%esp)
0865001a +0x1c8:  mov    %eax,0x4(%esp)
0865001e +0x1cc:  mov    %edx,(%esp)
08650021 +0x1cf:  call   0807d8a0 <_init+0x198>
08650026 +0x1d4:  mov    0x8(%ebp),%eax
08650029 +0x1d7:  mov    %eax,(%esp)
0865002c +0x1da:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08650031 +0x1df:  movl   $0x3,0x4(%esp)
08650039 +0x1e7:  mov    %eax,(%esp)
0865003c +0x1ea:  call   084fb0a0 <_ZNK10CInventory13GetInvenStartEi>  ; CInventory::GetInvenStart(int) const
08650041 +0x1ef:  mov    -0xc(%ebp),%edx
08650044 +0x1f2:  add    $0x4faf,%edx
0865004a +0x1f8:  movl   $0x39aa,0x8(%esp)
08650052 +0x200:  mov    %eax,0x4(%esp)
08650056 +0x204:  mov    %edx,(%esp)
08650059 +0x207:  call   0807d8a0 <_init+0x198>
0865005e +0x20c:  mov    0x8(%ebp),%eax
08650061 +0x20f:  mov    %eax,(%esp)
08650064 +0x212:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08650069 +0x217:  lea    0x55a(%eax),%edx
0865006f +0x21d:  mov    -0xc(%ebp),%eax
08650072 +0x220:  add    $0x8865,%eax
08650077 +0x225:  movl   $0xf4,0x8(%esp)
0865007f +0x22d:  mov    %edx,0x4(%esp)
08650083 +0x231:  mov    %eax,(%esp)
08650086 +0x234:  call   0807d8a0 <_init+0x198>
0865008b +0x239:  mov    -0xc(%ebp),%eax
0865008e +0x23c:  lea    0x557(%eax),%edx
08650094 +0x242:  mov    -0xc(%ebp),%eax
08650097 +0x245:  add    $0x19,%eax
0865009a +0x248:  mov    %edx,0x4(%esp)
0865009e +0x24c:  mov    %eax,(%esp)
086500a1 +0x24f:  call   0850a096 <_ZN10CInventory12RemoveKCItemEP10Inven_ItemS1_>  ; CInventory::RemoveKCItem(Inven_Item*, Inven_Item*)
086500a6 +0x254:  mov    0x8(%ebp),%eax
086500a9 +0x257:  mov    %eax,(%esp)
086500ac +0x25a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086500b1 +0x25f:  cmp    $0xa,%eax
086500b4 +0x262:  sete   %al
086500b7 +0x265:  test   %al,%al
086500b9 +0x267:  je     086500d6 <+0x284>
086500bb +0x269:  mov    -0xc(%ebp),%eax
086500be +0x26c:  lea    0x557(%eax),%edx
086500c4 +0x272:  mov    -0xc(%ebp),%eax
086500c7 +0x275:  add    $0x19,%eax
086500ca +0x278:  mov    %edx,0x4(%esp)
086500ce +0x27c:  mov    %eax,(%esp)
086500d1 +0x27f:  call   0850a2bc <_ZN10CInventory12RemoveFPItemEP10Inven_ItemS1_>  ; CInventory::RemoveFPItem(Inven_Item*, Inven_Item*)
086500d6 +0x284:  mov    0x8(%ebp),%eax
086500d9 +0x287:  mov    %eax,(%esp)
086500dc +0x28a:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086500e1 +0x28f:  mov    %eax,(%esp)
086500e4 +0x292:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
086500e9 +0x297:  mov    -0xc(%ebp),%edx
086500ec +0x29a:  mov    %eax,0x8959(%edx)
086500f2 +0x2a0:  mov    0x8(%ebp),%eax
086500f5 +0x2a3:  mov    %eax,(%esp)
086500f8 +0x2a6:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086500fd +0x2ab:  mov    %eax,(%esp)
08650100 +0x2ae:  call   084b4262 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x315>  ; global constructors keyed to game_master::CMacro::Reset()+0x315
08650105 +0x2b3:  mov    -0xc(%ebp),%edx
08650108 +0x2b6:  add    $0x895d,%edx
0865010e +0x2bc:  movl   $0x2438,0x8(%esp)
08650116 +0x2c4:  mov    %eax,0x4(%esp)
0865011a +0x2c8:  mov    %edx,(%esp)
0865011d +0x2cb:  call   0807d8a0 <_init+0x198>
08650122 +0x2d0:  mov    0x8(%ebp),%eax
08650125 +0x2d3:  lea    0x79744(%eax),%edx
0865012b +0x2d9:  movl   $0x9,0x8(%esp)
08650133 +0x2e1:  mov    0x8(%ebp),%eax
08650136 +0x2e4:  mov    %eax,0x4(%esp)
0865013a +0x2e8:  mov    %edx,(%esp)
0865013d +0x2eb:  call   0832ad30 <_ZN13charac_expand8CDataMgr6updateEP5CUser23ENUM_CHARAC_EXPAND_TYPE>  ; charac_expand::CDataMgr::update(CUser*, ENUM_CHARAC_EXPAND_TYPE)
08650142 +0x2f0:  movl   $0x1,0x8(%esp)
0865014a +0x2f8:  mov    -0xc(%ebp),%eax
0865014d +0x2fb:  mov    %eax,0x4(%esp)
08650151 +0x2ff:  mov    0x8(%ebp),%eax
08650154 +0x302:  mov    %eax,(%esp)
08650157 +0x305:  call   08677584 <_ZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYi>  ; CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)
0865015c +0x30a:  movl   $0x2,0x8(%esp)
08650164 +0x312:  mov    -0xc(%ebp),%eax
08650167 +0x315:  mov    %eax,0x4(%esp)
0865016b +0x319:  mov    0x8(%ebp),%eax
0865016e +0x31c:  mov    %eax,(%esp)
08650171 +0x31f:  call   08677584 <_ZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYi>  ; CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)
08650176 +0x324:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0865017b +0x329:  lea    -0x24(%ebp),%edx
0865017e +0x32c:  mov    %edx,0x8(%esp)
08650182 +0x330:  movl   $0x2,0x4(%esp)
0865018a +0x338:  mov    %eax,(%esp)
0865018d +0x33b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08650192 +0x340:  mov    $0x1,%ebx
08650197 +0x345:  lea    -0x24(%ebp),%eax
0865019a +0x348:  mov    %eax,(%esp)
0865019d +0x34b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086501a2 +0x350:  jmp    086501bf <+0x36d>
086501a4 +0x352:  mov    %edx,%ebx
086501a6 +0x354:  mov    %eax,%esi
086501a8 +0x356:  lea    -0x24(%ebp),%eax
086501ab +0x359:  mov    %eax,(%esp)
086501ae +0x35c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086501b3 +0x361:  mov    %esi,%eax
086501b5 +0x363:  mov    %ebx,%edx
086501b7 +0x365:  mov    %eax,(%esp)
086501ba +0x368:  call   08ae3750 <_Unwind_Resume>
086501bf +0x36d:  mov    %ebx,%eax
086501c1 +0x36f:  add    $0x30,%esp
086501c4 +0x372:  pop    %ebx
086501c5 +0x373:  pop    %esi
086501c6 +0x374:  pop    %ebp
086501c7 +0x375:  ret
```

## 反编译 C

```c
// CUser::SaveInventory @ 0x864fe52

/* CUser::SaveInventory() */

undefined4 __thiscall CUser::SaveInventory(CUser *this)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  GameWorld *this_00;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  CInventory *pCVar8;
  void *pvVar9;
  CCargo *pCVar10;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_SAVE_INVENTORY *local_10;
  
  cVar1 = isLocked4DataLoad(this);
  if (cVar1 == '\0') {
    this_00 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(this_00);
    if (iVar5 == 7) {
      uVar2 = 0;
    }
    else {
      pSVar6 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"user.cpp",0x1828);
      CStreamGuard::CStreamGuard(local_28,pSVar6,true);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0864ff46 to 08650191 has its CatchHandler @ 086501a4 */
      CStreamGuard::operator<<(pCVar7,0x23);
      iVar5 = GetUID(this);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
      CStreamGuard::operator<<(pCVar7,iVar5);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_28);
      local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_INVENTORY>(pCVar7);
      memset(local_10,0,0xad99);
      _GetSaveInvenBase(this,local_10);
      local_10[8] = (SIG_SAVE_INVENTORY)0x0;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pvVar9 = (void *)CInventory::GetInvenStart(pCVar8,0);
      memcpy(local_10 + 0x19,pvVar9,0x53e);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pvVar9 = (void *)CInventory::GetInvenStart(pCVar8,1);
      memcpy(local_10 + 0x557,pvVar9,0x4a58);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pvVar9 = (void *)CInventory::GetInvenStart(pCVar8,3);
      memcpy(local_10 + 0x4faf,pvVar9,0x39aa);
      iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      memcpy(local_10 + 0x8865,(void *)(iVar5 + 0x55a),0xf4);
      CInventory::RemoveKCItem((Inven_Item *)(local_10 + 0x19),(Inven_Item *)(local_10 + 0x557));
      iVar5 = get_state(this);
      if (iVar5 == 10) {
        CInventory::RemoveFPItem((Inven_Item *)(local_10 + 0x19),(Inven_Item *)(local_10 + 0x557));
      }
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      uVar2 = CCargo::GetCapacity(pCVar10);
      *(undefined4 *)(local_10 + 0x8959) = uVar2;
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      pvVar9 = (void *)CCargo::get_cargo_start(pCVar10);
      memcpy(local_10 + 0x895d,pvVar9,0x2438);
      charac_expand::CDataMgr::update((CDataMgr *)(this + 0x79744),this,9);
      removeRentalItemInfoFromInvenBuf(this,local_10,1);
      removeRentalItemInfoFromInvenBuf(this,local_10,2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
      uVar2 = 1;
      CStreamGuard::~CStreamGuard(local_28);
    }
  }
  else {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar3 = get_acc_id(this);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_20,"bool CUser::SaveInventory()",0x181a,5);
    cMyTrace::operator()
              (local_20,"Can not save character until loading done(m_id: %s, charac_no: %d",uVar4,
               uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
