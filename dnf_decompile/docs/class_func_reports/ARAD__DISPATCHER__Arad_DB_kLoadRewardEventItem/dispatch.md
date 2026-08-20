# dispatch

`_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem` | `0x08185574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08185574  _ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch(int, int, Stream*)
# range [0x08185574, 0x081858dd]
08185574 +0x000:  push   %ebp
08185575 +0x001:  mov    %esp,%ebp
08185577 +0x003:  push   %esi
08185578 +0x004:  push   %ebx
08185579 +0x005:  sub    $0xa0,%esp
0818557f +0x00b:  mov    0x14(%ebp),%eax
08185582 +0x00e:  mov    %eax,(%esp)
08185585 +0x011:  call   08186f7c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x946>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x946
0818558a +0x016:  mov    %eax,-0x1c(%ebp)
0818558d +0x019:  cmpl   $0x0,-0x1c(%ebp)
08185591 +0x01d:  jne    081855c9 <+0x55>
08185593 +0x01f:  movl   $"SigRewardEventItem is null.",0x10(%esp)
0818559b +0x027:  movl   $0x796,0xc(%esp)
081855a3 +0x02f:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
081855ab +0x037:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
081855b3 +0x03f:  movl   $0x1,(%esp)
081855ba +0x046:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081855bf +0x04b:  mov    $0x0,%ebx
081855c4 +0x050:  jmp    081858d1 <+0x35d>
081855c9 +0x055:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
081855ce +0x05a:  movl   $0x0,0x8(%esp)
081855d6 +0x062:  movl   $0x9,0x4(%esp)
081855de +0x06a:  mov    %eax,(%esp)
081855e1 +0x06d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081855e6 +0x072:  mov    %eax,-0x18(%ebp)
081855e9 +0x075:  cmpl   $0x0,-0x18(%ebp)
081855ed +0x079:  jne    0818561b <+0xa7>
081855ef +0x07b:  movl   $0x4,(%esp)
081855f6 +0x082:  call   08725800 <__cxa_allocate_exception>
081855fb +0x087:  mov    %eax,%edx
081855fd +0x089:  movl   $"handle null",(%edx)
08185603 +0x08f:  movl   $0x0,0x8(%esp)
0818560b +0x097:  movl   $&_ZTIPKc,0x4(%esp)
08185613 +0x09f:  mov    %eax,(%esp)
08185616 +0x0a2:  call   08724c50 <__cxa_throw>
0818561b +0x0a7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08185622 +0x0ae:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08185627 +0x0b3:  mov    %eax,-0x14(%ebp)
0818562a +0x0b6:  mov    -0x1c(%ebp),%eax
0818562d +0x0b9:  mov    (%eax),%eax
0818562f +0x0bb:  mov    -0x14(%ebp),%edx
08185632 +0x0be:  mov    %edx,0xc(%esp)
08185636 +0x0c2:  mov    %eax,0x8(%esp)
0818563a +0x0c6:  movl   $" seLect event_id, charac_no from event_reward_item_arad  where (m_id = %u and end_date > from_unixtime(%u))  order by occ_date desc limit 10 ",0x4(%esp)
08185642 +0x0ce:  mov    -0x18(%ebp),%eax
08185645 +0x0d1:  mov    %eax,(%esp)
08185648 +0x0d4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818564d +0x0d9:  xor    $0x1,%eax
08185650 +0x0dc:  test   %al,%al
08185652 +0x0de:  je     08185680 <+0x10c>
08185654 +0x0e0:  movl   $0x4,(%esp)
0818565b +0x0e7:  call   08725800 <__cxa_allocate_exception>
08185660 +0x0ec:  mov    %eax,%edx
08185662 +0x0ee:  movl   $"set_query",(%edx)
08185668 +0x0f4:  movl   $0x0,0x8(%esp)
08185670 +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
08185678 +0x104:  mov    %eax,(%esp)
0818567b +0x107:  call   08724c50 <__cxa_throw>
08185680 +0x10c:  movl   $0x1,0x4(%esp)
08185688 +0x114:  mov    -0x18(%ebp),%eax
0818568b +0x117:  mov    %eax,(%esp)
0818568e +0x11a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08185693 +0x11f:  xor    $0x1,%eax
08185696 +0x122:  test   %al,%al
08185698 +0x124:  je     081856c6 <+0x152>
0818569a +0x126:  movl   $0x4,(%esp)
081856a1 +0x12d:  call   08725800 <__cxa_allocate_exception>
081856a6 +0x132:  mov    %eax,%edx
081856a8 +0x134:  movl   $"exec",(%edx)
081856ae +0x13a:  movl   $0x0,0x8(%esp)
081856b6 +0x142:  movl   $&_ZTIPKc,0x4(%esp)
081856be +0x14a:  mov    %eax,(%esp)
081856c1 +0x14d:  call   08724c50 <__cxa_throw>
081856c6 +0x152:  movl   $0x0,-0x10(%ebp)
081856cd +0x159:  lea    -0x7a(%ebp),%eax
081856d0 +0x15c:  mov    %eax,(%esp)
081856d3 +0x15f:  call   08186686 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x50>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x50
081856d8 +0x164:  jmp    0818579f <+0x22b>
081856dd +0x169:  mov    -0x10(%ebp),%edx
081856e0 +0x16c:  lea    -0x7a(%ebp),%eax
081856e3 +0x16f:  shl    $0x2,%edx
081856e6 +0x172:  add    %edx,%eax
081856e8 +0x174:  add    $0x6,%eax
081856eb +0x177:  mov    %eax,0x8(%esp)
081856ef +0x17b:  movl   $0x0,0x4(%esp)
081856f7 +0x183:  mov    -0x18(%ebp),%eax
081856fa +0x186:  mov    %eax,(%esp)
081856fd +0x189:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08185702 +0x18e:  xor    $0x1,%eax
08185705 +0x191:  test   %al,%al
08185707 +0x193:  je     08185735 <+0x1c1>
08185709 +0x195:  movl   $0x4,(%esp)
08185710 +0x19c:  call   08725800 <__cxa_allocate_exception>
08185715 +0x1a1:  mov    %eax,%edx
08185717 +0x1a3:  movl   $"EventCode",(%edx)
0818571d +0x1a9:  movl   $0x0,0x8(%esp)
08185725 +0x1b1:  movl   $&_ZTIPKc,0x4(%esp)
0818572d +0x1b9:  mov    %eax,(%esp)
08185730 +0x1bc:  call   08724c50 <__cxa_throw>
08185735 +0x1c1:  mov    -0x10(%ebp),%edx
08185738 +0x1c4:  lea    -0x7a(%ebp),%eax
0818573b +0x1c7:  add    $0x8,%edx
0818573e +0x1ca:  shl    $0x2,%edx
08185741 +0x1cd:  add    %edx,%eax
08185743 +0x1cf:  add    $0xe,%eax
08185746 +0x1d2:  addl   $0x1,-0x10(%ebp)
0818574a +0x1d6:  mov    %eax,0x8(%esp)
0818574e +0x1da:  movl   $0x1,0x4(%esp)
08185756 +0x1e2:  mov    -0x18(%ebp),%eax
08185759 +0x1e5:  mov    %eax,(%esp)
0818575c +0x1e8:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08185761 +0x1ed:  xor    $0x1,%eax
08185764 +0x1f0:  test   %al,%al
08185766 +0x1f2:  je     08185794 <+0x220>
08185768 +0x1f4:  movl   $0x4,(%esp)
0818576f +0x1fb:  call   08725800 <__cxa_allocate_exception>
08185774 +0x200:  mov    %eax,%edx
08185776 +0x202:  movl   $"Character",(%edx)
0818577c +0x208:  movl   $0x0,0x8(%esp)
08185784 +0x210:  movl   $&_ZTIPKc,0x4(%esp)
0818578c +0x218:  mov    %eax,(%esp)
0818578f +0x21b:  call   08724c50 <__cxa_throw>
08185794 +0x220:  movzwl -0x76(%ebp),%eax
08185798 +0x224:  add    $0x1,%eax
0818579b +0x227:  mov    %ax,-0x76(%ebp)
0818579f +0x22b:  mov    -0x18(%ebp),%eax
081857a2 +0x22e:  mov    %eax,(%esp)
081857a5 +0x231:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
081857aa +0x236:  test   %al,%al
081857ac +0x238:  jne    081856dd <+0x169>
081857b2 +0x23e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081857b7 +0x243:  movl   $0x7b8,0x8(%esp)
081857bf +0x24b:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
081857c7 +0x253:  mov    %eax,(%esp)
081857ca +0x256:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081857cf +0x25b:  movl   $0x1,0x8(%esp)
081857d7 +0x263:  mov    %eax,0x4(%esp)
081857db +0x267:  lea    -0x24(%ebp),%eax
081857de +0x26a:  mov    %eax,(%esp)
081857e1 +0x26d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081857e6 +0x272:  mov    0x10(%ebp),%eax
081857e9 +0x275:  mov    %eax,0x8(%esp)
081857ed +0x279:  movl   $0x26,0x4(%esp)
081857f5 +0x281:  lea    -0x24(%ebp),%eax
081857f8 +0x284:  mov    %eax,(%esp)
081857fb +0x287:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08185800 +0x28c:  lea    -0x24(%ebp),%eax
08185803 +0x28f:  mov    %eax,(%esp)
08185806 +0x292:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0818580b +0x297:  movl   $0x56,0x8(%esp)
08185813 +0x29f:  lea    -0x7a(%ebp),%edx
08185816 +0x2a2:  mov    %edx,0x4(%esp)
0818581a +0x2a6:  mov    %eax,(%esp)
0818581d +0x2a9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08185822 +0x2ae:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08185827 +0x2b3:  lea    -0x24(%ebp),%edx
0818582a +0x2b6:  mov    %edx,0x8(%esp)
0818582e +0x2ba:  movl   $0x1,0x4(%esp)
08185836 +0x2c2:  mov    %eax,(%esp)
08185839 +0x2c5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0818583e +0x2ca:  mov    %eax,%ebx
08185840 +0x2cc:  lea    -0x24(%ebp),%eax
08185843 +0x2cf:  mov    %eax,(%esp)
08185846 +0x2d2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0818584b +0x2d7:  jmp    081858d1 <+0x35d>
08185850 +0x2dc:  mov    %edx,%ebx
08185852 +0x2de:  mov    %eax,%esi
08185854 +0x2e0:  lea    -0x24(%ebp),%eax
08185857 +0x2e3:  mov    %eax,(%esp)
0818585a +0x2e6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0818585f +0x2eb:  mov    %esi,%eax
08185861 +0x2ed:  mov    %ebx,%edx
08185863 +0x2ef:  jmp    08185865 <+0x2f1>
08185865 +0x2f1:  cmp    $0x1,%edx
08185868 +0x2f4:  je     08185872 <+0x2fe>
0818586a +0x2f6:  mov    %eax,(%esp)
0818586d +0x2f9:  call   08ae3750 <_Unwind_Resume>
08185872 +0x2fe:  mov    %eax,(%esp)
08185875 +0x301:  call   08725ce0 <__cxa_begin_catch>
0818587a +0x306:  mov    %eax,-0xc(%ebp)
0818587d +0x309:  mov    -0xc(%ebp),%eax
08185880 +0x30c:  mov    %eax,0x14(%esp)
08185884 +0x310:  movl   $"[SigRewardEventItem] DB_DSP Error,  (error:%s)",0x10(%esp)
0818588c +0x318:  movl   $0x7c0,0xc(%esp)
08185894 +0x320:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818589c +0x328:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
081858a4 +0x330:  movl   $0x1,(%esp)
081858ab +0x337:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081858b0 +0x33c:  mov    $0x0,%ebx
081858b5 +0x341:  call   08725c30 <__cxa_end_catch>
081858ba +0x346:  jmp    081858d1 <+0x35d>
081858bc +0x348:  mov    %edx,%ebx
081858be +0x34a:  mov    %eax,%esi
081858c0 +0x34c:  call   08725c30 <__cxa_end_catch>
081858c5 +0x351:  mov    %esi,%eax
081858c7 +0x353:  mov    %ebx,%edx
081858c9 +0x355:  mov    %eax,(%esp)
081858cc +0x358:  call   08ae3750 <_Unwind_Resume>
081858d1 +0x35d:  mov    %ebx,%eax
081858d3 +0x35f:  add    $0xa0,%esp
081858d9 +0x365:  pop    %ebx
081858da +0x366:  pop    %esi
081858db +0x367:  pop    %ebp
081858dc +0x368:  ret
081858dd +0x369:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch @ 0x8185574

/* ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch
          (Arad_DB_kLoadRewardEventItem *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  Stream *pSVar4;
  CStreamGuard *this_00;
  undefined4 uVar5;
  SigLoadRewardEventItem local_7e [4];
  short local_7a;
  uint auStack_78 [20];
  CStreamGuard local_28 [8];
  SigLoadRewardEventItem *local_20;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_20 = Stream::GetOutBuffer<arad::SigLoadRewardEventItem>(param_3);
  if (local_20 == (SigLoadRewardEventItem *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch(int, int, Stream*)"
               ,0x796,"SigRewardEventItem is null.");
    uVar5 = 0;
  }
  else {
                    /* try { // try from 081855e1 to 081857ce has its CatchHandler @ 08185865 */
    local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    if (local_1c == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    cVar2 = MySQL::set_query(local_1c,
                             " seLect event_id, charac_no from event_reward_item_arad  where (m_id = %u and end_date > from_unixtime(%u))  order by occ_date desc limit 10 "
                             ,*(undefined4 *)local_20,local_18);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_14 = 0;
    arad::SigLoadRewardEventItem::SigLoadRewardEventItem(local_7e);
    while( true ) {
      cVar2 = MySQL::fetch(local_1c);
      if (cVar2 == '\0') break;
      cVar2 = MySQL::get_int(local_1c,0,(int *)(auStack_78 + local_14));
      if (cVar2 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "EventCode";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
      iVar1 = local_14 + 10;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_uint(local_1c,1,auStack_78 + iVar1);
      if (cVar2 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "Character";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
      local_7a = local_7a + 1;
    }
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_DatabaseDispatcher.cpp",
                                 0x7b8);
    CStreamGuard::CStreamGuard(local_28,pSVar4,true);
                    /* try { // try from 081857fb to 0818583d has its CatchHandler @ 08185850 */
    make_internal_stream_jpn(local_28,0x26,param_2);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    CStreamGuard::put_binary(this_00,local_7e,0x56);
    uVar5 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
                    /* try { // try from 08185846 to 0818584a has its CatchHandler @ 08185865 */
    CStreamGuard::~CStreamGuard(local_28);
  }
  return uVar5;
}
```
