# dispatch

`_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream`

`DB_SelectLevelUpReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SelectLevelUpReward` | `0x084423cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084423cc  _ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream
#           DB_SelectLevelUpReward::dispatch(int, int, Stream*)
# range [0x084423cc, 0x08442719]
084423cc +0x000:  push   %ebp
084423cd +0x001:  mov    %esp,%ebp
084423cf +0x003:  push   %esi
084423d0 +0x004:  push   %ebx
084423d1 +0x005:  sub    $0x40,%esp
084423d4 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084423d9 +0x00d:  movl   $0x0,0x8(%esp)
084423e1 +0x015:  movl   $0x2,0x4(%esp)
084423e9 +0x01d:  mov    %eax,(%esp)
084423ec +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084423f1 +0x025:  mov    %eax,-0x10(%ebp)
084423f4 +0x028:  movl   $0x0,-0x14(%ebp)
084423fb +0x02f:  movl   $0x0,-0x18(%ebp)
08442402 +0x036:  lea    -0x14(%ebp),%eax
08442405 +0x039:  mov    %eax,0x4(%esp)
08442409 +0x03d:  mov    0x14(%ebp),%eax
0844240c +0x040:  mov    %eax,(%esp)
0844240f +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08442414 +0x048:  lea    -0x18(%ebp),%eax
08442417 +0x04b:  mov    %eax,0x4(%esp)
0844241b +0x04f:  mov    0x14(%ebp),%eax
0844241e +0x052:  mov    %eax,(%esp)
08442421 +0x055:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08442426 +0x05a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0844242b +0x05f:  mov    %eax,(%esp)
0844242e +0x062:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08442433 +0x067:  movl   $0x194,0x4(%esp)
0844243b +0x06f:  mov    %eax,(%esp)
0844243e +0x072:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
08442443 +0x077:  mov    %eax,0x4(%esp)
08442447 +0x07b:  lea    -0x1c(%ebp),%eax
0844244a +0x07e:  mov    %eax,(%esp)
0844244d +0x081:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08442452 +0x086:  mov    -0x14(%ebp),%ebx
08442455 +0x089:  lea    -0x1c(%ebp),%eax
08442458 +0x08c:  mov    %eax,(%esp)
0844245b +0x08f:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08442460 +0x094:  mov    %ebx,0xc(%esp)
08442464 +0x098:  mov    %eax,0x8(%esp)
08442468 +0x09c:  movl   $"seLect  recv_level from %s where charac_no = %u",0x4(%esp)
08442470 +0x0a4:  mov    -0x10(%ebp),%eax
08442473 +0x0a7:  mov    %eax,(%esp)
08442476 +0x0aa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844247b +0x0af:  movl   $0x1,0x4(%esp)
08442483 +0x0b7:  mov    -0x10(%ebp),%eax
08442486 +0x0ba:  mov    %eax,(%esp)
08442489 +0x0bd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844248e +0x0c2:  xor    $0x1,%eax
08442491 +0x0c5:  test   %al,%al
08442493 +0x0c7:  je     0844249f <+0xd3>
08442495 +0x0c9:  mov    $0x0,%ebx
0844249a +0x0ce:  jmp    08442705 <+0x339>
0844249f +0x0d3:  mov    -0x10(%ebp),%eax
084424a2 +0x0d6:  mov    %eax,(%esp)
084424a5 +0x0d9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084424aa +0x0de:  mov    %eax,-0xc(%ebp)
084424ad +0x0e1:  movb   $0x0,-0x1d(%ebp)
084424b1 +0x0e5:  cmpl   $0x0,-0xc(%ebp)
084424b5 +0x0e9:  je     084425b3 <+0x1e7>
084424bb +0x0ef:  mov    -0x10(%ebp),%eax
084424be +0x0f2:  mov    %eax,(%esp)
084424c1 +0x0f5:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084424c6 +0x0fa:  xor    $0x1,%eax
084424c9 +0x0fd:  test   %al,%al
084424cb +0x0ff:  je     084424d7 <+0x10b>
084424cd +0x101:  mov    $0x0,%ebx
084424d2 +0x106:  jmp    08442705 <+0x339>
084424d7 +0x10b:  lea    -0x1d(%ebp),%eax
084424da +0x10e:  mov    %eax,0x8(%esp)
084424de +0x112:  movl   $0x0,0x4(%esp)
084424e6 +0x11a:  mov    -0x10(%ebp),%eax
084424e9 +0x11d:  mov    %eax,(%esp)
084424ec +0x120:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
084424f1 +0x125:  xor    $0x1,%eax
084424f4 +0x128:  test   %al,%al
084424f6 +0x12a:  je     08442502 <+0x136>
084424f8 +0x12c:  mov    $0x0,%ebx
084424fd +0x131:  jmp    08442705 <+0x339>
08442502 +0x136:  movzbl -0x1d(%ebp),%eax
08442506 +0x13a:  movzbl %al,%edx
08442509 +0x13d:  mov    -0x18(%ebp),%eax
0844250c +0x140:  cmp    %eax,%edx
0844250e +0x142:  jne    0844255f <+0x193>
08442510 +0x144:  movzbl -0x1d(%ebp),%eax
08442514 +0x148:  movzbl %al,%ecx
08442517 +0x14b:  mov    -0x18(%ebp),%edx
0844251a +0x14e:  mov    -0x14(%ebp),%eax
0844251d +0x151:  mov    %ecx,0x1c(%esp)
08442521 +0x155:  mov    %edx,0x18(%esp)
08442525 +0x159:  mov    %eax,0x14(%esp)
08442529 +0x15d:  movl   $"DB_SelectLevelUpReward error char:%u lv:%u recv_lv:%u",0x10(%esp)
08442531 +0x165:  movl   $0xa2a5,0xc(%esp)
08442539 +0x16d:  movl   $&_ZZN22DB_SelectLevelUpReward8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08442541 +0x175:  movl   $"DBThread.cpp",0x4(%esp)
08442549 +0x17d:  movl   $0x1,(%esp)
08442550 +0x184:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08442555 +0x189:  mov    $0x0,%ebx
0844255a +0x18e:  jmp    08442705 <+0x339>
0844255f +0x193:  mov    -0x14(%ebp),%esi
08442562 +0x196:  mov    -0x18(%ebp),%ebx
08442565 +0x199:  lea    -0x1c(%ebp),%eax
08442568 +0x19c:  mov    %eax,(%esp)
0844256b +0x19f:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08442570 +0x1a4:  mov    %esi,0x10(%esp)
08442574 +0x1a8:  mov    %ebx,0xc(%esp)
08442578 +0x1ac:  mov    %eax,0x8(%esp)
0844257c +0x1b0:  movl   $"upDate %s set recv_level=%u,occ_time=now() where charac_no=%u",0x4(%esp)
08442584 +0x1b8:  mov    -0x10(%ebp),%eax
08442587 +0x1bb:  mov    %eax,(%esp)
0844258a +0x1be:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844258f +0x1c3:  movl   $0x1,0x4(%esp)
08442597 +0x1cb:  mov    -0x10(%ebp),%eax
0844259a +0x1ce:  mov    %eax,(%esp)
0844259d +0x1d1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084425a2 +0x1d6:  xor    $0x1,%eax
084425a5 +0x1d9:  test   %al,%al
084425a7 +0x1db:  je     08442607 <+0x23b>
084425a9 +0x1dd:  mov    $0x0,%ebx
084425ae +0x1e2:  jmp    08442705 <+0x339>
084425b3 +0x1e7:  mov    -0x18(%ebp),%esi
084425b6 +0x1ea:  mov    -0x14(%ebp),%ebx
084425b9 +0x1ed:  lea    -0x1c(%ebp),%eax
084425bc +0x1f0:  mov    %eax,(%esp)
084425bf +0x1f3:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
084425c4 +0x1f8:  mov    %esi,0x10(%esp)
084425c8 +0x1fc:  mov    %ebx,0xc(%esp)
084425cc +0x200:  mov    %eax,0x8(%esp)
084425d0 +0x204:  movl   $"inSert into %s(charac_no,recv_level,occ_time) values (%u,%u,now() )",0x4(%esp)
084425d8 +0x20c:  mov    -0x10(%ebp),%eax
084425db +0x20f:  mov    %eax,(%esp)
084425de +0x212:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084425e3 +0x217:  movl   $0x1,0x4(%esp)
084425eb +0x21f:  mov    -0x10(%ebp),%eax
084425ee +0x222:  mov    %eax,(%esp)
084425f1 +0x225:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084425f6 +0x22a:  xor    $0x1,%eax
084425f9 +0x22d:  test   %al,%al
084425fb +0x22f:  je     08442607 <+0x23b>
084425fd +0x231:  mov    $0x0,%ebx
08442602 +0x236:  jmp    08442705 <+0x339>
08442607 +0x23b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844260c +0x240:  movl   $0xa2ba,0x8(%esp)
08442614 +0x248:  movl   $"DBThread.cpp",0x4(%esp)
0844261c +0x250:  mov    %eax,(%esp)
0844261f +0x253:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08442624 +0x258:  movl   $0x1,0x8(%esp)
0844262c +0x260:  mov    %eax,0x4(%esp)
08442630 +0x264:  lea    -0x28(%ebp),%eax
08442633 +0x267:  mov    %eax,(%esp)
08442636 +0x26a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844263b +0x26f:  lea    -0x28(%ebp),%eax
0844263e +0x272:  mov    %eax,(%esp)
08442641 +0x275:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442646 +0x27a:  mov    0xc(%ebp),%edx
08442649 +0x27d:  mov    %edx,0x4(%esp)
0844264d +0x281:  mov    %eax,(%esp)
08442650 +0x284:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442655 +0x289:  lea    -0x28(%ebp),%eax
08442658 +0x28c:  mov    %eax,(%esp)
0844265b +0x28f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08442660 +0x294:  mov    0x10(%ebp),%edx
08442663 +0x297:  mov    %edx,0x4(%esp)
08442667 +0x29b:  mov    %eax,(%esp)
0844266a +0x29e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844266f +0x2a3:  mov    -0x18(%ebp),%ebx
08442672 +0x2a6:  lea    -0x28(%ebp),%eax
08442675 +0x2a9:  mov    %eax,(%esp)
08442678 +0x2ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844267d +0x2b1:  mov    %ebx,0x4(%esp)
08442681 +0x2b5:  mov    %eax,(%esp)
08442684 +0x2b8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08442689 +0x2bd:  movzbl -0x1d(%ebp),%eax
0844268d +0x2c1:  movzbl %al,%ebx
08442690 +0x2c4:  lea    -0x28(%ebp),%eax
08442693 +0x2c7:  mov    %eax,(%esp)
08442696 +0x2ca:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844269b +0x2cf:  mov    %ebx,0x4(%esp)
0844269f +0x2d3:  mov    %eax,(%esp)
084426a2 +0x2d6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084426a7 +0x2db:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084426ac +0x2e0:  lea    -0x28(%ebp),%edx
084426af +0x2e3:  mov    %edx,0x8(%esp)
084426b3 +0x2e7:  movl   $0x1,0x4(%esp)
084426bb +0x2ef:  mov    %eax,(%esp)
084426be +0x2f2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084426c3 +0x2f7:  mov    $0x1,%ebx
084426c8 +0x2fc:  lea    -0x28(%ebp),%eax
084426cb +0x2ff:  mov    %eax,(%esp)
084426ce +0x302:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084426d3 +0x307:  jmp    08442705 <+0x339>
084426d5 +0x309:  mov    %edx,%ebx
084426d7 +0x30b:  mov    %eax,%esi
084426d9 +0x30d:  lea    -0x28(%ebp),%eax
084426dc +0x310:  mov    %eax,(%esp)
084426df +0x313:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084426e4 +0x318:  mov    %esi,%eax
084426e6 +0x31a:  mov    %ebx,%edx
084426e8 +0x31c:  jmp    084426ea <+0x31e>
084426ea +0x31e:  mov    %edx,%ebx
084426ec +0x320:  mov    %eax,%esi
084426ee +0x322:  lea    -0x1c(%ebp),%eax
084426f1 +0x325:  mov    %eax,(%esp)
084426f4 +0x328:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084426f9 +0x32d:  mov    %esi,%eax
084426fb +0x32f:  mov    %ebx,%edx
084426fd +0x331:  mov    %eax,(%esp)
08442700 +0x334:  call   08ae3750 <_Unwind_Resume>
08442705 +0x339:  lea    -0x1c(%ebp),%eax
08442708 +0x33c:  mov    %eax,(%esp)
0844270b +0x33f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08442710 +0x344:  mov    %ebx,%eax
08442712 +0x346:  add    $0x40,%esp
08442715 +0x349:  pop    %ebx
08442716 +0x34a:  pop    %esi
08442717 +0x34b:  pop    %ebp
08442718 +0x34c:  ret
08442719 +0x34d:  nop
```

## 反编译 C

```c
// DB_SelectLevelUpReward::dispatch @ 0x84423cc

/* DB_SelectLevelUpReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SelectLevelUpReward::dispatch
          (DB_SelectLevelUpReward *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  string *psVar3;
  TCHAR *pTVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 uVar7;
  uint uVar8;
  CStreamGuard local_2c [11];
  byte local_21;
  string local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(param_3,&local_18);
  Stream::operator>>(param_3,(int *)&local_1c);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  psVar3 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_01,0x194);
  std::string::string((string *)&local_20,psVar3);
  uVar8 = local_18;
                    /* try { // try from 0844245b to 08442623 has its CatchHandler @ 084426ea */
  pTVar4 = toTString(&local_20);
  MySQL::set_query(local_14,"seLect  recv_level from %s where charac_no = %u",pTVar4,uVar8);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    uVar7 = 0;
    goto LAB_08442705;
  }
  local_10 = MySQL::get_n_rows(local_14);
  uVar1 = local_18;
  uVar8 = local_1c;
  local_21 = 0;
  if (local_10 == 0) {
    pTVar4 = toTString(&local_20);
    MySQL::set_query(local_14,"inSert into %s(charac_no,recv_level,occ_time) values (%u,%u,now() )",
                     pTVar4,uVar1,uVar8);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
  }
  else {
    cVar2 = MySQL::fetch(local_14);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
    cVar2 = MySQL::get_ubyte(local_14,0,&local_21);
    uVar1 = local_18;
    uVar8 = local_1c;
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
    if (local_21 == local_1c) {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_SelectLevelUpReward::dispatch(int, int, Stream*)"
                 ,0xa2a5,"DB_SelectLevelUpReward error char:%u lv:%u recv_lv:%u",local_18,local_1c,
                 (uint)local_21);
      uVar7 = 0;
      goto LAB_08442705;
    }
    pTVar4 = toTString(&local_20);
    MySQL::set_query(local_14,"upDate %s set recv_level=%u,occ_time=now() where charac_no=%u",pTVar4
                     ,uVar8,uVar1);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
  }
  pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa2ba);
  CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08442650 to 084426c2 has its CatchHandler @ 084426d5 */
  CStreamGuard::operator<<(pCVar6,param_1);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar6,param_2);
  uVar8 = local_1c;
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar6,uVar8);
  uVar8 = (uint)local_21;
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar6,uVar8);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
  uVar7 = 1;
                    /* try { // try from 084426ce to 084426d2 has its CatchHandler @ 084426ea */
  CStreamGuard::~CStreamGuard(local_2c);
LAB_08442705:
  std::string::~string((string *)&local_20);
  return uVar7;
}
```
