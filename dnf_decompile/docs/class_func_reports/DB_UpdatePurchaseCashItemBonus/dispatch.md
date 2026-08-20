# dispatch

`_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream`

`DB_UpdatePurchaseCashItemBonus::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdatePurchaseCashItemBonus` | `0x0843e252` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843e252  _ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream
#           DB_UpdatePurchaseCashItemBonus::dispatch(int, int, Stream*)
# range [0x0843e252, 0x0843e55f]
0843e252 +0x000:  push   %ebp
0843e253 +0x001:  mov    %esp,%ebp
0843e255 +0x003:  push   %esi
0843e256 +0x004:  push   %ebx
0843e257 +0x005:  sub    $0x40,%esp
0843e25a +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843e25f +0x00d:  movl   $0x0,0x8(%esp)
0843e267 +0x015:  movl   $0x9,0x4(%esp)
0843e26f +0x01d:  mov    %eax,(%esp)
0843e272 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843e277 +0x025:  mov    %eax,-0x10(%ebp)
0843e27a +0x028:  movl   $0x0,-0x14(%ebp)
0843e281 +0x02f:  lea    -0x14(%ebp),%eax
0843e284 +0x032:  mov    %eax,0x4(%esp)
0843e288 +0x036:  mov    0x14(%ebp),%eax
0843e28b +0x039:  mov    %eax,(%esp)
0843e28e +0x03c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843e293 +0x041:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0843e298 +0x046:  mov    %eax,(%esp)
0843e29b +0x049:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0843e2a0 +0x04e:  movl   $0x19a,0x4(%esp)
0843e2a8 +0x056:  mov    %eax,(%esp)
0843e2ab +0x059:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
0843e2b0 +0x05e:  mov    %eax,0x4(%esp)
0843e2b4 +0x062:  lea    -0x18(%ebp),%eax
0843e2b7 +0x065:  mov    %eax,(%esp)
0843e2ba +0x068:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0843e2bf +0x06d:  mov    -0x14(%ebp),%eax
0843e2c2 +0x070:  movl   $0x0,0x4(%esp)
0843e2ca +0x078:  mov    %eax,(%esp)
0843e2cd +0x07b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843e2d2 +0x080:  mov    %eax,%ebx
0843e2d4 +0x082:  lea    -0x18(%ebp),%eax
0843e2d7 +0x085:  mov    %eax,(%esp)
0843e2da +0x088:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843e2df +0x08d:  mov    %ebx,0xc(%esp)
0843e2e3 +0x091:  mov    %eax,0x8(%esp)
0843e2e7 +0x095:  movl   $"upDate %s set purchase_cnt = purchase_cnt + 1 where m_id=%s",0x4(%esp)
0843e2ef +0x09d:  mov    -0x10(%ebp),%eax
0843e2f2 +0x0a0:  mov    %eax,(%esp)
0843e2f5 +0x0a3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e2fa +0x0a8:  movl   $0x1,0x4(%esp)
0843e302 +0x0b0:  mov    -0x10(%ebp),%eax
0843e305 +0x0b3:  mov    %eax,(%esp)
0843e308 +0x0b6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e30d +0x0bb:  xor    $0x1,%eax
0843e310 +0x0be:  test   %al,%al
0843e312 +0x0c0:  je     0843e31e <+0xcc>
0843e314 +0x0c2:  mov    $0x0,%ebx
0843e319 +0x0c7:  jmp    0843e54b <+0x2f9>
0843e31e +0x0cc:  mov    -0x10(%ebp),%eax
0843e321 +0x0cf:  mov    %eax,(%esp)
0843e324 +0x0d2:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843e329 +0x0d7:  or     %edx,%eax
0843e32b +0x0d9:  test   %eax,%eax
0843e32d +0x0db:  sete   %al
0843e330 +0x0de:  test   %al,%al
0843e332 +0x0e0:  je     0843e39b <+0x149>
0843e334 +0x0e2:  mov    -0x14(%ebp),%eax
0843e337 +0x0e5:  movl   $0x0,0x4(%esp)
0843e33f +0x0ed:  mov    %eax,(%esp)
0843e342 +0x0f0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843e347 +0x0f5:  mov    %eax,%ebx
0843e349 +0x0f7:  lea    -0x18(%ebp),%eax
0843e34c +0x0fa:  mov    %eax,(%esp)
0843e34f +0x0fd:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843e354 +0x102:  movl   $0x1,0x10(%esp)
0843e35c +0x10a:  mov    %ebx,0xc(%esp)
0843e360 +0x10e:  mov    %eax,0x8(%esp)
0843e364 +0x112:  movl   $"inSert into %s(m_id, purchase_cnt) values(%s, %u)",0x4(%esp)
0843e36c +0x11a:  mov    -0x10(%ebp),%eax
0843e36f +0x11d:  mov    %eax,(%esp)
0843e372 +0x120:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e377 +0x125:  movl   $0x1,0x4(%esp)
0843e37f +0x12d:  mov    -0x10(%ebp),%eax
0843e382 +0x130:  mov    %eax,(%esp)
0843e385 +0x133:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e38a +0x138:  xor    $0x1,%eax
0843e38d +0x13b:  test   %al,%al
0843e38f +0x13d:  je     0843e39b <+0x149>
0843e391 +0x13f:  mov    $0x0,%ebx
0843e396 +0x144:  jmp    0843e54b <+0x2f9>
0843e39b +0x149:  mov    -0x14(%ebp),%eax
0843e39e +0x14c:  movl   $0x0,0x4(%esp)
0843e3a6 +0x154:  mov    %eax,(%esp)
0843e3a9 +0x157:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843e3ae +0x15c:  mov    %eax,%ebx
0843e3b0 +0x15e:  lea    -0x18(%ebp),%eax
0843e3b3 +0x161:  mov    %eax,(%esp)
0843e3b6 +0x164:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0843e3bb +0x169:  mov    %ebx,0xc(%esp)
0843e3bf +0x16d:  mov    %eax,0x8(%esp)
0843e3c3 +0x171:  movl   $"seLect purchase_cnt from %s where m_id=%s",0x4(%esp)
0843e3cb +0x179:  mov    -0x10(%ebp),%eax
0843e3ce +0x17c:  mov    %eax,(%esp)
0843e3d1 +0x17f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e3d6 +0x184:  movl   $0x1,0x4(%esp)
0843e3de +0x18c:  mov    -0x10(%ebp),%eax
0843e3e1 +0x18f:  mov    %eax,(%esp)
0843e3e4 +0x192:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e3e9 +0x197:  xor    $0x1,%eax
0843e3ec +0x19a:  test   %al,%al
0843e3ee +0x19c:  je     0843e3fa <+0x1a8>
0843e3f0 +0x19e:  mov    $0x0,%ebx
0843e3f5 +0x1a3:  jmp    0843e54b <+0x2f9>
0843e3fa +0x1a8:  mov    -0x10(%ebp),%eax
0843e3fd +0x1ab:  mov    %eax,(%esp)
0843e400 +0x1ae:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843e405 +0x1b3:  test   %eax,%eax
0843e407 +0x1b5:  sete   %al
0843e40a +0x1b8:  test   %al,%al
0843e40c +0x1ba:  je     0843e418 <+0x1c6>
0843e40e +0x1bc:  mov    $0x0,%ebx
0843e413 +0x1c1:  jmp    0843e54b <+0x2f9>
0843e418 +0x1c6:  mov    -0x10(%ebp),%eax
0843e41b +0x1c9:  mov    %eax,(%esp)
0843e41e +0x1cc:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843e423 +0x1d1:  xor    $0x1,%eax
0843e426 +0x1d4:  test   %al,%al
0843e428 +0x1d6:  je     0843e434 <+0x1e2>
0843e42a +0x1d8:  mov    $0x0,%ebx
0843e42f +0x1dd:  jmp    0843e54b <+0x2f9>
0843e434 +0x1e2:  movl   $0x0,-0x1c(%ebp)
0843e43b +0x1e9:  lea    -0x1c(%ebp),%eax
0843e43e +0x1ec:  mov    %eax,0x8(%esp)
0843e442 +0x1f0:  movl   $0x0,0x4(%esp)
0843e44a +0x1f8:  mov    -0x10(%ebp),%eax
0843e44d +0x1fb:  mov    %eax,(%esp)
0843e450 +0x1fe:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0843e455 +0x203:  xor    $0x1,%eax
0843e458 +0x206:  test   %al,%al
0843e45a +0x208:  je     0843e466 <+0x214>
0843e45c +0x20a:  mov    $0x0,%ebx
0843e461 +0x20f:  jmp    0843e54b <+0x2f9>
0843e466 +0x214:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843e46b +0x219:  movl   $0x9407,0x8(%esp)
0843e473 +0x221:  movl   $"DBThread.cpp",0x4(%esp)
0843e47b +0x229:  mov    %eax,(%esp)
0843e47e +0x22c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843e483 +0x231:  movl   $0x1,0x8(%esp)
0843e48b +0x239:  mov    %eax,0x4(%esp)
0843e48f +0x23d:  lea    -0x24(%ebp),%eax
0843e492 +0x240:  mov    %eax,(%esp)
0843e495 +0x243:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843e49a +0x248:  lea    -0x24(%ebp),%eax
0843e49d +0x24b:  mov    %eax,(%esp)
0843e4a0 +0x24e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e4a5 +0x253:  movl   $0x23c,0x4(%esp)
0843e4ad +0x25b:  mov    %eax,(%esp)
0843e4b0 +0x25e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e4b5 +0x263:  lea    -0x24(%ebp),%eax
0843e4b8 +0x266:  mov    %eax,(%esp)
0843e4bb +0x269:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e4c0 +0x26e:  mov    0x10(%ebp),%edx
0843e4c3 +0x271:  mov    %edx,0x4(%esp)
0843e4c7 +0x275:  mov    %eax,(%esp)
0843e4ca +0x278:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e4cf +0x27d:  lea    -0x24(%ebp),%eax
0843e4d2 +0x280:  mov    %eax,(%esp)
0843e4d5 +0x283:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843e4da +0x288:  mov    %eax,(%esp)
0843e4dd +0x28b:  call   08453ba6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x67bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x67bc
0843e4e2 +0x290:  mov    %eax,-0xc(%ebp)
0843e4e5 +0x293:  mov    -0x1c(%ebp),%edx
0843e4e8 +0x296:  mov    -0xc(%ebp),%eax
0843e4eb +0x299:  mov    %edx,(%eax)
0843e4ed +0x29b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843e4f2 +0x2a0:  lea    -0x24(%ebp),%edx
0843e4f5 +0x2a3:  mov    %edx,0x8(%esp)
0843e4f9 +0x2a7:  movl   $0x1,0x4(%esp)
0843e501 +0x2af:  mov    %eax,(%esp)
0843e504 +0x2b2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843e509 +0x2b7:  mov    $0x1,%ebx
0843e50e +0x2bc:  lea    -0x24(%ebp),%eax
0843e511 +0x2bf:  mov    %eax,(%esp)
0843e514 +0x2c2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e519 +0x2c7:  jmp    0843e54b <+0x2f9>
0843e51b +0x2c9:  mov    %edx,%ebx
0843e51d +0x2cb:  mov    %eax,%esi
0843e51f +0x2cd:  lea    -0x24(%ebp),%eax
0843e522 +0x2d0:  mov    %eax,(%esp)
0843e525 +0x2d3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e52a +0x2d8:  mov    %esi,%eax
0843e52c +0x2da:  mov    %ebx,%edx
0843e52e +0x2dc:  jmp    0843e530 <+0x2de>
0843e530 +0x2de:  mov    %edx,%ebx
0843e532 +0x2e0:  mov    %eax,%esi
0843e534 +0x2e2:  lea    -0x18(%ebp),%eax
0843e537 +0x2e5:  mov    %eax,(%esp)
0843e53a +0x2e8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0843e53f +0x2ed:  mov    %esi,%eax
0843e541 +0x2ef:  mov    %ebx,%edx
0843e543 +0x2f1:  mov    %eax,(%esp)
0843e546 +0x2f4:  call   08ae3750 <_Unwind_Resume>
0843e54b +0x2f9:  lea    -0x18(%ebp),%eax
0843e54e +0x2fc:  mov    %eax,(%esp)
0843e551 +0x2ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0843e556 +0x304:  mov    %ebx,%eax
0843e558 +0x306:  add    $0x40,%esp
0843e55b +0x309:  pop    %ebx
0843e55c +0x30a:  pop    %esi
0843e55d +0x30b:  pop    %ebp
0843e55e +0x30c:  ret
0843e55f +0x30d:  nop
```

## 反编译 C

```c
// DB_UpdatePurchaseCashItemBonus::dispatch @ 0x843e252

/* DB_UpdatePurchaseCashItemBonus::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdatePurchaseCashItemBonus::dispatch
          (DB_UpdatePurchaseCashItemBonus *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  string *psVar2;
  undefined4 uVar3;
  TCHAR *pTVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  longlong lVar8;
  CStreamGuard local_28 [8];
  uint local_20;
  string local_1c;
  uint local_18;
  MySQL *local_14;
  SIG_PURCHASE_CASHITEM_BONUS *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_18 = 0;
  Stream::operator>>(param_3,&local_18);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  psVar2 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_01,0x19a);
  std::string::string((string *)&local_1c,psVar2);
                    /* try { // try from 0843e2cd to 0843e482 has its CatchHandler @ 0843e530 */
  uVar3 = NumberToString(local_18,0);
  pTVar4 = toTString(&local_1c);
  MySQL::set_query(local_14,"upDate %s set purchase_cnt = purchase_cnt + 1 where m_id=%s",pTVar4,
                   uVar3);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    lVar8 = MySQL::getAffectedRowCount(local_14);
    if (lVar8 == 0) {
      uVar3 = NumberToString(local_18,0);
      pTVar4 = toTString(&local_1c);
      MySQL::set_query(local_14,"inSert into %s(m_id, purchase_cnt) values(%s, %u)",pTVar4,uVar3,1);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        uVar3 = 0;
        goto LAB_0843e54b;
      }
    }
    uVar3 = NumberToString(local_18,0);
    pTVar4 = toTString(&local_1c);
    MySQL::set_query(local_14,"seLect purchase_cnt from %s where m_id=%s",pTVar4,uVar3);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      iVar5 = MySQL::get_n_rows(local_14);
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        cVar1 = MySQL::fetch(local_14);
        if (cVar1 == '\x01') {
          local_20 = 0;
          cVar1 = MySQL::get_uint(local_14,0,&local_20);
          if (cVar1 == '\x01') {
            pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9407);
            CStreamGuard::CStreamGuard(local_28,pSVar6,true);
            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0843e4b0 to 0843e508 has its CatchHandler @ 0843e51b */
            CStreamGuard::operator<<(pCVar7,0x23c);
            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
            CStreamGuard::operator<<(pCVar7,param_2);
            pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_28);
            local_10 = CStreamGuard::GetInBuffer<SIG_PURCHASE_CASHITEM_BONUS>(pCVar7);
            *(uint *)local_10 = local_20;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
            uVar3 = 1;
                    /* try { // try from 0843e514 to 0843e518 has its CatchHandler @ 0843e530 */
            CStreamGuard::~CStreamGuard(local_28);
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
LAB_0843e54b:
  std::string::~string((string *)&local_1c);
  return uVar3;
}
```
