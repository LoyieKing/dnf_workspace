# dispatch

`_ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream`

`DB_AutoPunishedSecondUserData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AutoPunishedSecondUserData` | `0x0843a462` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a462  _ZN29DB_AutoPunishedSecondUserData8dispatchEiiP6Stream
#           DB_AutoPunishedSecondUserData::dispatch(int, int, Stream*)
# range [0x0843a462, 0x0843a78f]
0843a462 +0x000:  push   %ebp
0843a463 +0x001:  mov    %esp,%ebp
0843a465 +0x003:  push   %esi
0843a466 +0x004:  push   %ebx
0843a467 +0x005:  sub    $0x40,%esp
0843a46a +0x008:  movb   $0x0,-0x19(%ebp)
0843a46e +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843a473 +0x011:  movl   $0x0,0x8(%esp)
0843a47b +0x019:  movl   $0x6,0x4(%esp)
0843a483 +0x021:  mov    %eax,(%esp)
0843a486 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843a48b +0x029:  mov    %eax,-0x18(%ebp)
0843a48e +0x02c:  mov    0x14(%ebp),%eax
0843a491 +0x02f:  mov    %eax,(%esp)
0843a494 +0x032:  call   08453910 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6526>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6526
0843a499 +0x037:  mov    %eax,-0x14(%ebp)
0843a49c +0x03a:  mov    -0x14(%ebp),%eax
0843a49f +0x03d:  mov    (%eax),%eax
0843a4a1 +0x03f:  movl   $0x0,0x4(%esp)
0843a4a9 +0x047:  mov    %eax,(%esp)
0843a4ac +0x04a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843a4b1 +0x04f:  mov    %eax,0x8(%esp)
0843a4b5 +0x053:  movl   $"seLect trade_cnt,trade_gold from auto_punish_second_user where m_id=%s",0x4(%esp)
0843a4bd +0x05b:  mov    -0x18(%ebp),%eax
0843a4c0 +0x05e:  mov    %eax,(%esp)
0843a4c3 +0x061:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843a4c8 +0x066:  movl   $0x1,0x4(%esp)
0843a4d0 +0x06e:  mov    -0x18(%ebp),%eax
0843a4d3 +0x071:  mov    %eax,(%esp)
0843a4d6 +0x074:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843a4db +0x079:  xor    $0x1,%eax
0843a4de +0x07c:  test   %al,%al
0843a4e0 +0x07e:  jne    0843a4f1 <+0x8f>
0843a4e2 +0x080:  mov    -0x18(%ebp),%eax
0843a4e5 +0x083:  mov    %eax,(%esp)
0843a4e8 +0x086:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843a4ed +0x08b:  test   %eax,%eax
0843a4ef +0x08d:  jne    0843a4f8 <+0x96>
0843a4f1 +0x08f:  mov    $0x1,%eax
0843a4f6 +0x094:  jmp    0843a4fd <+0x9b>
0843a4f8 +0x096:  mov    $0x0,%eax
0843a4fd +0x09b:  test   %al,%al
0843a4ff +0x09d:  je     0843a628 <+0x1c6>
0843a505 +0x0a3:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843a50a +0x0a8:  movl   $0x88f1,0x8(%esp)
0843a512 +0x0b0:  movl   $"DBThread.cpp",0x4(%esp)
0843a51a +0x0b8:  mov    %eax,(%esp)
0843a51d +0x0bb:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843a522 +0x0c0:  movl   $0x1,0x8(%esp)
0843a52a +0x0c8:  mov    %eax,0x4(%esp)
0843a52e +0x0cc:  lea    -0x38(%ebp),%eax
0843a531 +0x0cf:  mov    %eax,(%esp)
0843a534 +0x0d2:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843a539 +0x0d7:  lea    -0x38(%ebp),%eax
0843a53c +0x0da:  mov    %eax,(%esp)
0843a53f +0x0dd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a544 +0x0e2:  movl   $0x1ca,0x4(%esp)
0843a54c +0x0ea:  mov    %eax,(%esp)
0843a54f +0x0ed:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a554 +0x0f2:  mov    -0x14(%ebp),%eax
0843a557 +0x0f5:  mov    0xc(%eax),%eax
0843a55a +0x0f8:  mov    %eax,%ebx
0843a55c +0x0fa:  lea    -0x38(%ebp),%eax
0843a55f +0x0fd:  mov    %eax,(%esp)
0843a562 +0x100:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a567 +0x105:  mov    %ebx,0x4(%esp)
0843a56b +0x109:  mov    %eax,(%esp)
0843a56e +0x10c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a573 +0x111:  lea    -0x38(%ebp),%eax
0843a576 +0x114:  mov    %eax,(%esp)
0843a579 +0x117:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843a57e +0x11c:  mov    %eax,(%esp)
0843a581 +0x11f:  call   08453964 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x657a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x657a
0843a586 +0x124:  mov    %eax,-0xc(%ebp)
0843a589 +0x127:  movl   $0x18,0x8(%esp)
0843a591 +0x12f:  movl   $0x0,0x4(%esp)
0843a599 +0x137:  mov    -0xc(%ebp),%eax
0843a59c +0x13a:  mov    %eax,(%esp)
0843a59f +0x13d:  call   0807dcc0 <_init+0x5b8>
0843a5a4 +0x142:  mov    -0x14(%ebp),%eax
0843a5a7 +0x145:  mov    0x10(%eax),%edx
0843a5aa +0x148:  mov    -0xc(%ebp),%eax
0843a5ad +0x14b:  mov    %edx,0x14(%eax)
0843a5b0 +0x14e:  mov    -0x14(%ebp),%eax
0843a5b3 +0x151:  mov    0x8(%eax),%edx
0843a5b6 +0x154:  mov    0x4(%eax),%eax
0843a5b9 +0x157:  mov    -0xc(%ebp),%ecx
0843a5bc +0x15a:  mov    %eax,(%ecx)
0843a5be +0x15c:  mov    %edx,0x4(%ecx)
0843a5c1 +0x15f:  mov    -0xc(%ebp),%eax
0843a5c4 +0x162:  movl   $0x0,0x8(%eax)
0843a5cb +0x169:  movl   $0x0,0xc(%eax)
0843a5d2 +0x170:  mov    -0xc(%ebp),%eax
0843a5d5 +0x173:  movl   $0x1,0x10(%eax)
0843a5dc +0x17a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843a5e1 +0x17f:  lea    -0x38(%ebp),%edx
0843a5e4 +0x182:  mov    %edx,0x8(%esp)
0843a5e8 +0x186:  movl   $0x1,0x4(%esp)
0843a5f0 +0x18e:  mov    %eax,(%esp)
0843a5f3 +0x191:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843a5f8 +0x196:  mov    $0x0,%ebx
0843a5fd +0x19b:  lea    -0x38(%ebp),%eax
0843a600 +0x19e:  mov    %eax,(%esp)
0843a603 +0x1a1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a608 +0x1a6:  jmp    0843a787 <+0x325>
0843a60d +0x1ab:  mov    %edx,%ebx
0843a60f +0x1ad:  mov    %eax,%esi
0843a611 +0x1af:  lea    -0x38(%ebp),%eax
0843a614 +0x1b2:  mov    %eax,(%esp)
0843a617 +0x1b5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a61c +0x1ba:  mov    %esi,%eax
0843a61e +0x1bc:  mov    %ebx,%edx
0843a620 +0x1be:  mov    %eax,(%esp)
0843a623 +0x1c1:  call   08ae3750 <_Unwind_Resume>
0843a628 +0x1c6:  mov    -0x18(%ebp),%eax
0843a62b +0x1c9:  mov    %eax,(%esp)
0843a62e +0x1cc:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843a633 +0x1d1:  lea    -0x20(%ebp),%eax
0843a636 +0x1d4:  mov    %eax,0x8(%esp)
0843a63a +0x1d8:  movl   $0x0,0x4(%esp)
0843a642 +0x1e0:  mov    -0x18(%ebp),%eax
0843a645 +0x1e3:  mov    %eax,(%esp)
0843a648 +0x1e6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843a64d +0x1eb:  lea    -0x28(%ebp),%eax
0843a650 +0x1ee:  mov    %eax,0x8(%esp)
0843a654 +0x1f2:  movl   $0x1,0x4(%esp)
0843a65c +0x1fa:  mov    -0x18(%ebp),%eax
0843a65f +0x1fd:  mov    %eax,(%esp)
0843a662 +0x200:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
0843a667 +0x205:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843a66c +0x20a:  movl   $0x8901,0x8(%esp)
0843a674 +0x212:  movl   $"DBThread.cpp",0x4(%esp)
0843a67c +0x21a:  mov    %eax,(%esp)
0843a67f +0x21d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843a684 +0x222:  movl   $0x1,0x8(%esp)
0843a68c +0x22a:  mov    %eax,0x4(%esp)
0843a690 +0x22e:  lea    -0x30(%ebp),%eax
0843a693 +0x231:  mov    %eax,(%esp)
0843a696 +0x234:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843a69b +0x239:  lea    -0x30(%ebp),%eax
0843a69e +0x23c:  mov    %eax,(%esp)
0843a6a1 +0x23f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a6a6 +0x244:  movl   $0x1ca,0x4(%esp)
0843a6ae +0x24c:  mov    %eax,(%esp)
0843a6b1 +0x24f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a6b6 +0x254:  mov    -0x14(%ebp),%eax
0843a6b9 +0x257:  mov    0xc(%eax),%eax
0843a6bc +0x25a:  mov    %eax,%ebx
0843a6be +0x25c:  lea    -0x30(%ebp),%eax
0843a6c1 +0x25f:  mov    %eax,(%esp)
0843a6c4 +0x262:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a6c9 +0x267:  mov    %ebx,0x4(%esp)
0843a6cd +0x26b:  mov    %eax,(%esp)
0843a6d0 +0x26e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a6d5 +0x273:  lea    -0x30(%ebp),%eax
0843a6d8 +0x276:  mov    %eax,(%esp)
0843a6db +0x279:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843a6e0 +0x27e:  mov    %eax,(%esp)
0843a6e3 +0x281:  call   08453964 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x657a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x657a
0843a6e8 +0x286:  mov    %eax,-0x10(%ebp)
0843a6eb +0x289:  movl   $0x18,0x8(%esp)
0843a6f3 +0x291:  movl   $0x0,0x4(%esp)
0843a6fb +0x299:  mov    -0x10(%ebp),%eax
0843a6fe +0x29c:  mov    %eax,(%esp)
0843a701 +0x29f:  call   0807dcc0 <_init+0x5b8>
0843a706 +0x2a4:  mov    -0x14(%ebp),%eax
0843a709 +0x2a7:  mov    0x10(%eax),%edx
0843a70c +0x2aa:  mov    -0x10(%ebp),%eax
0843a70f +0x2ad:  mov    %edx,0x14(%eax)
0843a712 +0x2b0:  mov    -0x14(%ebp),%eax
0843a715 +0x2b3:  mov    0x8(%eax),%edx
0843a718 +0x2b6:  mov    0x4(%eax),%eax
0843a71b +0x2b9:  mov    -0x10(%ebp),%ecx
0843a71e +0x2bc:  mov    %eax,(%ecx)
0843a720 +0x2be:  mov    %edx,0x4(%ecx)
0843a723 +0x2c1:  mov    -0x28(%ebp),%eax
0843a726 +0x2c4:  mov    -0x24(%ebp),%edx
0843a729 +0x2c7:  mov    -0x10(%ebp),%ecx
0843a72c +0x2ca:  mov    %eax,0x8(%ecx)
0843a72f +0x2cd:  mov    %edx,0xc(%ecx)
0843a732 +0x2d0:  mov    -0x20(%ebp),%eax
0843a735 +0x2d3:  lea    0x1(%eax),%edx
0843a738 +0x2d6:  mov    -0x10(%ebp),%eax
0843a73b +0x2d9:  mov    %edx,0x10(%eax)
0843a73e +0x2dc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843a743 +0x2e1:  lea    -0x30(%ebp),%edx
0843a746 +0x2e4:  mov    %edx,0x8(%esp)
0843a74a +0x2e8:  movl   $0x1,0x4(%esp)
0843a752 +0x2f0:  mov    %eax,(%esp)
0843a755 +0x2f3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843a75a +0x2f8:  mov    $0x1,%ebx
0843a75f +0x2fd:  lea    -0x30(%ebp),%eax
0843a762 +0x300:  mov    %eax,(%esp)
0843a765 +0x303:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a76a +0x308:  jmp    0843a787 <+0x325>
0843a76c +0x30a:  mov    %edx,%ebx
0843a76e +0x30c:  mov    %eax,%esi
0843a770 +0x30e:  lea    -0x30(%ebp),%eax
0843a773 +0x311:  mov    %eax,(%esp)
0843a776 +0x314:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a77b +0x319:  mov    %esi,%eax
0843a77d +0x31b:  mov    %ebx,%edx
0843a77f +0x31d:  mov    %eax,(%esp)
0843a782 +0x320:  call   08ae3750 <_Unwind_Resume>
0843a787 +0x325:  mov    %ebx,%eax
0843a789 +0x327:  add    $0x40,%esp
0843a78c +0x32a:  pop    %ebx
0843a78d +0x32b:  pop    %esi
0843a78e +0x32c:  pop    %ebp
0843a78f +0x32d:  ret
```

## 反编译 C

```c
// DB_AutoPunishedSecondUserData::dispatch @ 0x843a462

/* DB_AutoPunishedSecondUserData::dispatch(int, int, Stream*) */

bool DB_AutoPunishedSecondUserData::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  Stream *in_stack_00000010;
  CStreamGuard local_3c [8];
  CStreamGuard local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_1d;
  MySQL *local_1c;
  SIG_SECOND_USER_DATA *local_18;
  SIG_SECOND_USER_DATA_SET *local_14;
  SIG_SECOND_USER_DATA_SET *local_10;
  
  local_1d = 0;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = Stream::GetOutBuffer<SIG_SECOND_USER_DATA>(in_stack_00000010);
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_1c,"seLect trade_cnt,trade_gold from auto_punish_second_user where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_1c);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_0843a4fd;
    }
  }
  bVar1 = true;
LAB_0843a4fd:
  if (!bVar1) {
    MySQL::fetch(local_1c);
    MySQL::get_uint(local_1c,0,&local_24);
    MySQL::get_ulonglong(local_1c,1,(ulonglong *)&local_2c);
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8901);
    CStreamGuard::CStreamGuard(local_34,pSVar5,true);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843a6b1 to 0843a759 has its CatchHandler @ 0843a76c */
    CStreamGuard::operator<<(pCVar6,0x1ca);
    iVar4 = *(int *)(local_18 + 0xc);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar6,iVar4);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_14 = CStreamGuard::GetInBuffer<SIG_SECOND_USER_DATA_SET>(pCVar6);
    memset(local_14,0,0x18);
    *(undefined4 *)(local_14 + 0x14) = *(undefined4 *)(local_18 + 0x10);
    uVar3 = *(undefined4 *)(local_18 + 8);
    *(undefined4 *)local_14 = *(undefined4 *)(local_18 + 4);
    *(undefined4 *)(local_14 + 4) = uVar3;
    *(undefined4 *)(local_14 + 8) = local_2c;
    *(undefined4 *)(local_14 + 0xc) = local_28;
    *(uint *)(local_14 + 0x10) = local_24 + 1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  else {
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x88f1);
    CStreamGuard::CStreamGuard(local_3c,pSVar5,true);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0843a54f to 0843a5f7 has its CatchHandler @ 0843a60d */
    CStreamGuard::operator<<(pCVar6,0x1ca);
    iVar4 = *(int *)(local_18 + 0xc);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
    CStreamGuard::operator<<(pCVar6,iVar4);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
    local_10 = CStreamGuard::GetInBuffer<SIG_SECOND_USER_DATA_SET>(pCVar6);
    memset(local_10,0,0x18);
    *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(local_18 + 0x10);
    uVar3 = *(undefined4 *)(local_18 + 8);
    *(undefined4 *)local_10 = *(undefined4 *)(local_18 + 4);
    *(undefined4 *)(local_10 + 4) = uVar3;
    *(undefined4 *)(local_10 + 8) = 0;
    *(undefined4 *)(local_10 + 0xc) = 0;
    *(undefined4 *)(local_10 + 0x10) = 1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_3c);
    CStreamGuard::~CStreamGuard(local_3c);
  }
  return !bVar1;
}
```
