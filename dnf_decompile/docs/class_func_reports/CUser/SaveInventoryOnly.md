# SaveInventoryOnly

`_ZN5CUser17SaveInventoryOnlyEv`

`CUser::SaveInventoryOnly()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086501c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086501c8  _ZN5CUser17SaveInventoryOnlyEv
#           CUser::SaveInventoryOnly()
# range [0x086501c8, 0x086504d7]
086501c8 +0x000:  push   %ebp
086501c9 +0x001:  mov    %esp,%ebp
086501cb +0x003:  push   %esi
086501cc +0x004:  push   %ebx
086501cd +0x005:  sub    $0x30,%esp
086501d0 +0x008:  mov    0x8(%ebp),%eax
086501d3 +0x00b:  mov    %eax,(%esp)
086501d6 +0x00e:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
086501db +0x013:  test   %al,%al
086501dd +0x015:  je     08650251 <+0x89>
086501df +0x017:  mov    0x8(%ebp),%eax
086501e2 +0x01a:  mov    %eax,(%esp)
086501e5 +0x01d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086501ea +0x022:  mov    %eax,%esi
086501ec +0x024:  mov    0x8(%ebp),%eax
086501ef +0x027:  mov    %eax,(%esp)
086501f2 +0x02a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086501f7 +0x02f:  movl   $0x0,0x4(%esp)
086501ff +0x037:  mov    %eax,(%esp)
08650202 +0x03a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08650207 +0x03f:  mov    %eax,%ebx
08650209 +0x041:  movl   $0x5,0xc(%esp)
08650211 +0x049:  movl   $0x187a,0x8(%esp)
08650219 +0x051:  movl   $&_ZZN5CUser17SaveInventoryOnlyEvE19__PRETTY_FUNCTION__,0x4(%esp)
08650221 +0x059:  lea    -0x1c(%ebp),%eax
08650224 +0x05c:  mov    %eax,(%esp)
08650227 +0x05f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865022c +0x064:  mov    %esi,0xc(%esp)
08650230 +0x068:  mov    %ebx,0x8(%esp)
08650234 +0x06c:  movl   $"Can not save character until loading done(m_id: %s, charac_no: %d",0x4(%esp)
0865023c +0x074:  lea    -0x1c(%ebp),%eax
0865023f +0x077:  mov    %eax,(%esp)
08650242 +0x07a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08650247 +0x07f:  mov    $0x0,%ebx
0865024c +0x084:  jmp    086504cf <+0x307>
08650251 +0x089:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08650256 +0x08e:  mov    %eax,(%esp)
08650259 +0x091:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0865025e +0x096:  cmp    $0x7,%eax
08650261 +0x099:  sete   %al
08650264 +0x09c:  test   %al,%al
08650266 +0x09e:  je     08650272 <+0xaa>
08650268 +0x0a0:  mov    $0x0,%ebx
0865026d +0x0a5:  jmp    086504cf <+0x307>
08650272 +0x0aa:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08650277 +0x0af:  movl   $0x1888,0x8(%esp)
0865027f +0x0b7:  movl   $"user.cpp",0x4(%esp)
08650287 +0x0bf:  mov    %eax,(%esp)
0865028a +0x0c2:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0865028f +0x0c7:  movl   $0x1,0x8(%esp)
08650297 +0x0cf:  mov    %eax,0x4(%esp)
0865029b +0x0d3:  lea    -0x24(%ebp),%eax
0865029e +0x0d6:  mov    %eax,(%esp)
086502a1 +0x0d9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086502a6 +0x0de:  lea    -0x24(%ebp),%eax
086502a9 +0x0e1:  mov    %eax,(%esp)
086502ac +0x0e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086502b1 +0x0e9:  movl   $0x23,0x4(%esp)
086502b9 +0x0f1:  mov    %eax,(%esp)
086502bc +0x0f4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086502c1 +0x0f9:  mov    0x8(%ebp),%eax
086502c4 +0x0fc:  mov    %eax,(%esp)
086502c7 +0x0ff:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086502cc +0x104:  mov    %eax,%ebx
086502ce +0x106:  lea    -0x24(%ebp),%eax
086502d1 +0x109:  mov    %eax,(%esp)
086502d4 +0x10c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086502d9 +0x111:  mov    %ebx,0x4(%esp)
086502dd +0x115:  mov    %eax,(%esp)
086502e0 +0x118:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086502e5 +0x11d:  lea    -0x24(%ebp),%eax
086502e8 +0x120:  mov    %eax,(%esp)
086502eb +0x123:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086502f0 +0x128:  mov    %eax,(%esp)
086502f3 +0x12b:  call   08180dac <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa43>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa43
086502f8 +0x130:  mov    %eax,-0xc(%ebp)
086502fb +0x133:  mov    -0xc(%ebp),%eax
086502fe +0x136:  mov    %eax,0x4(%esp)
08650302 +0x13a:  mov    0x8(%ebp),%eax
08650305 +0x13d:  mov    %eax,(%esp)
08650308 +0x140:  call   0864fd80 <_ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY>  ; CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*)
0865030d +0x145:  mov    -0xc(%ebp),%eax
08650310 +0x148:  movb   $0x2,0x8(%eax)
08650314 +0x14c:  mov    0x8(%ebp),%eax
08650317 +0x14f:  mov    %eax,(%esp)
0865031a +0x152:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865031f +0x157:  movl   $0x0,0x4(%esp)
08650327 +0x15f:  mov    %eax,(%esp)
0865032a +0x162:  call   084fb0a0 <_ZNK10CInventory13GetInvenStartEi>  ; CInventory::GetInvenStart(int) const
0865032f +0x167:  mov    -0xc(%ebp),%edx
08650332 +0x16a:  add    $0x19,%edx
08650335 +0x16d:  movl   $0x53e,0x8(%esp)
0865033d +0x175:  mov    %eax,0x4(%esp)
08650341 +0x179:  mov    %edx,(%esp)
08650344 +0x17c:  call   0807d8a0 <_init+0x198>
08650349 +0x181:  mov    0x8(%ebp),%eax
0865034c +0x184:  mov    %eax,(%esp)
0865034f +0x187:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08650354 +0x18c:  movl   $0x1,0x4(%esp)
0865035c +0x194:  mov    %eax,(%esp)
0865035f +0x197:  call   084fb0a0 <_ZNK10CInventory13GetInvenStartEi>  ; CInventory::GetInvenStart(int) const
08650364 +0x19c:  mov    -0xc(%ebp),%edx
08650367 +0x19f:  add    $0x557,%edx
0865036d +0x1a5:  movl   $0x4a58,0x8(%esp)
08650375 +0x1ad:  mov    %eax,0x4(%esp)
08650379 +0x1b1:  mov    %edx,(%esp)
0865037c +0x1b4:  call   0807d8a0 <_init+0x198>
08650381 +0x1b9:  mov    0x8(%ebp),%eax
08650384 +0x1bc:  mov    %eax,(%esp)
08650387 +0x1bf:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865038c +0x1c4:  mov    %eax,(%esp)
0865038f +0x1c7:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
08650394 +0x1cc:  mov    -0xc(%ebp),%edx
08650397 +0x1cf:  mov    %eax,0x8959(%edx)
0865039d +0x1d5:  mov    0x8(%ebp),%eax
086503a0 +0x1d8:  mov    %eax,(%esp)
086503a3 +0x1db:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086503a8 +0x1e0:  mov    %eax,(%esp)
086503ab +0x1e3:  call   084b4262 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x315>  ; global constructors keyed to game_master::CMacro::Reset()+0x315
086503b0 +0x1e8:  mov    -0xc(%ebp),%edx
086503b3 +0x1eb:  add    $0x895d,%edx
086503b9 +0x1f1:  movl   $0x2438,0x8(%esp)
086503c1 +0x1f9:  mov    %eax,0x4(%esp)
086503c5 +0x1fd:  mov    %edx,(%esp)
086503c8 +0x200:  call   0807d8a0 <_init+0x198>
086503cd +0x205:  mov    0x8(%ebp),%eax
086503d0 +0x208:  mov    %eax,(%esp)
086503d3 +0x20b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086503d8 +0x210:  movl   $0x3,0x4(%esp)
086503e0 +0x218:  mov    %eax,(%esp)
086503e3 +0x21b:  call   084fb0a0 <_ZNK10CInventory13GetInvenStartEi>  ; CInventory::GetInvenStart(int) const
086503e8 +0x220:  mov    -0xc(%ebp),%edx
086503eb +0x223:  add    $0x4faf,%edx
086503f1 +0x229:  movl   $0x39aa,0x8(%esp)
086503f9 +0x231:  mov    %eax,0x4(%esp)
086503fd +0x235:  mov    %edx,(%esp)
08650400 +0x238:  call   0807d8a0 <_init+0x198>
08650405 +0x23d:  mov    0x8(%ebp),%eax
08650408 +0x240:  mov    %eax,(%esp)
0865040b +0x243:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08650410 +0x248:  lea    0x55a(%eax),%edx
08650416 +0x24e:  mov    -0xc(%ebp),%eax
08650419 +0x251:  add    $0x8865,%eax
0865041e +0x256:  movl   $0xf4,0x8(%esp)
08650426 +0x25e:  mov    %edx,0x4(%esp)
0865042a +0x262:  mov    %eax,(%esp)
0865042d +0x265:  call   0807d8a0 <_init+0x198>
08650432 +0x26a:  mov    0x8(%ebp),%eax
08650435 +0x26d:  lea    0x79744(%eax),%edx
0865043b +0x273:  movl   $0x9,0x8(%esp)
08650443 +0x27b:  mov    0x8(%ebp),%eax
08650446 +0x27e:  mov    %eax,0x4(%esp)
0865044a +0x282:  mov    %edx,(%esp)
0865044d +0x285:  call   0832ad30 <_ZN13charac_expand8CDataMgr6updateEP5CUser23ENUM_CHARAC_EXPAND_TYPE>  ; charac_expand::CDataMgr::update(CUser*, ENUM_CHARAC_EXPAND_TYPE)
08650452 +0x28a:  movl   $0x1,0x8(%esp)
0865045a +0x292:  mov    -0xc(%ebp),%eax
0865045d +0x295:  mov    %eax,0x4(%esp)
08650461 +0x299:  mov    0x8(%ebp),%eax
08650464 +0x29c:  mov    %eax,(%esp)
08650467 +0x29f:  call   08677584 <_ZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYi>  ; CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)
0865046c +0x2a4:  movl   $0x2,0x8(%esp)
08650474 +0x2ac:  mov    -0xc(%ebp),%eax
08650477 +0x2af:  mov    %eax,0x4(%esp)
0865047b +0x2b3:  mov    0x8(%ebp),%eax
0865047e +0x2b6:  mov    %eax,(%esp)
08650481 +0x2b9:  call   08677584 <_ZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYi>  ; CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)
08650486 +0x2be:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0865048b +0x2c3:  lea    -0x24(%ebp),%edx
0865048e +0x2c6:  mov    %edx,0x8(%esp)
08650492 +0x2ca:  movl   $0x2,0x4(%esp)
0865049a +0x2d2:  mov    %eax,(%esp)
0865049d +0x2d5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086504a2 +0x2da:  mov    $0x1,%ebx
086504a7 +0x2df:  lea    -0x24(%ebp),%eax
086504aa +0x2e2:  mov    %eax,(%esp)
086504ad +0x2e5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086504b2 +0x2ea:  jmp    086504cf <+0x307>
086504b4 +0x2ec:  mov    %edx,%ebx
086504b6 +0x2ee:  mov    %eax,%esi
086504b8 +0x2f0:  lea    -0x24(%ebp),%eax
086504bb +0x2f3:  mov    %eax,(%esp)
086504be +0x2f6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086504c3 +0x2fb:  mov    %esi,%eax
086504c5 +0x2fd:  mov    %ebx,%edx
086504c7 +0x2ff:  mov    %eax,(%esp)
086504ca +0x302:  call   08ae3750 <_Unwind_Resume>
086504cf +0x307:  mov    %ebx,%eax
086504d1 +0x309:  add    $0x30,%esp
086504d4 +0x30c:  pop    %ebx
086504d5 +0x30d:  pop    %esi
086504d6 +0x30e:  pop    %ebp
086504d7 +0x30f:  ret
```

## 反编译 C

```c
// CUser::SaveInventoryOnly @ 0x86501c8

/* CUser::SaveInventoryOnly() */

undefined4 __thiscall CUser::SaveInventoryOnly(CUser *this)

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
      pSVar6 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"user.cpp",0x1888);
      CStreamGuard::CStreamGuard(local_28,pSVar6,true);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 086502bc to 086504a1 has its CatchHandler @ 086504b4 */
      CStreamGuard::operator<<(pCVar7,0x23);
      iVar5 = GetUID(this);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
      CStreamGuard::operator<<(pCVar7,iVar5);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_28);
      local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_INVENTORY>(pCVar7);
      _GetSaveInvenBase(this,local_10);
      local_10[8] = (SIG_SAVE_INVENTORY)0x2;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pvVar9 = (void *)CInventory::GetInvenStart(pCVar8,0);
      memcpy(local_10 + 0x19,pvVar9,0x53e);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pvVar9 = (void *)CInventory::GetInvenStart(pCVar8,1);
      memcpy(local_10 + 0x557,pvVar9,0x4a58);
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      uVar2 = CCargo::GetCapacity(pCVar10);
      *(undefined4 *)(local_10 + 0x8959) = uVar2;
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      pvVar9 = (void *)CCargo::get_cargo_start(pCVar10);
      memcpy(local_10 + 0x895d,pvVar9,0x2438);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      pvVar9 = (void *)CInventory::GetInvenStart(pCVar8,3);
      memcpy(local_10 + 0x4faf,pvVar9,0x39aa);
      iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      memcpy(local_10 + 0x8865,(void *)(iVar5 + 0x55a),0xf4);
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
    cMyTrace::cMyTrace(local_20,"bool CUser::SaveInventoryOnly()",0x187a,5);
    cMyTrace::operator()
              (local_20,"Can not save character until loading done(m_id: %s, charac_no: %d",uVar4,
               uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
