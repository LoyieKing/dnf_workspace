# dispatch

`_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream`

`DB_CancelRestingUserRestrict::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CancelRestingUserRestrict` | `0x0843712e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843712e  _ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream
#           DB_CancelRestingUserRestrict::dispatch(int, int, Stream*)
# range [0x0843712e, 0x0843741d]
0843712e +0x000:  push   %ebp
0843712f +0x001:  mov    %esp,%ebp
08437131 +0x003:  push   %edi
08437132 +0x004:  push   %esi
08437133 +0x005:  push   %ebx
08437134 +0x006:  sub    $0x18c,%esp
0843713a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843713f +0x011:  movl   $0x0,0x8(%esp)
08437147 +0x019:  movl   $0x1,0x4(%esp)
0843714f +0x021:  mov    %eax,(%esp)
08437152 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437157 +0x029:  mov    %eax,-0x24(%ebp)
0843715a +0x02c:  mov    0x14(%ebp),%eax
0843715d +0x02f:  mov    %eax,(%esp)
08437160 +0x032:  call   084534c0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x60d6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x60d6
08437165 +0x037:  mov    %eax,-0x20(%ebp)
08437168 +0x03a:  mov    -0x20(%ebp),%eax
0843716b +0x03d:  mov    (%eax),%eax
0843716d +0x03f:  movl   $0x0,0x4(%esp)
08437175 +0x047:  mov    %eax,(%esp)
08437178 +0x04a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843717d +0x04f:  mov    %eax,0x8(%esp)
08437181 +0x053:  movl   $"upDate member_punish_info set apply_flag = 0 where m_id = %s and punish_type = 10",0x4(%esp)
08437189 +0x05b:  mov    -0x24(%ebp),%eax
0843718c +0x05e:  mov    %eax,(%esp)
0843718f +0x061:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08437194 +0x066:  movl   $0x1,0x4(%esp)
0843719c +0x06e:  mov    -0x24(%ebp),%eax
0843719f +0x071:  mov    %eax,(%esp)
084371a2 +0x074:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084371a7 +0x079:  xor    $0x1,%eax
084371aa +0x07c:  test   %al,%al
084371ac +0x07e:  je     084371b8 <+0x8a>
084371ae +0x080:  mov    $0x0,%ebx
084371b3 +0x085:  jmp    08437411 <+0x2e3>
084371b8 +0x08a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084371bd +0x08f:  movl   $0x835c,0x8(%esp)
084371c5 +0x097:  movl   $"DBThread.cpp",0x4(%esp)
084371cd +0x09f:  mov    %eax,(%esp)
084371d0 +0x0a2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084371d5 +0x0a7:  movl   $0x1,0x8(%esp)
084371dd +0x0af:  mov    %eax,0x4(%esp)
084371e1 +0x0b3:  lea    -0x3c(%ebp),%eax
084371e4 +0x0b6:  mov    %eax,(%esp)
084371e7 +0x0b9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084371ec +0x0be:  lea    -0x3c(%ebp),%eax
084371ef +0x0c1:  mov    %eax,(%esp)
084371f2 +0x0c4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084371f7 +0x0c9:  movl   $0x195,0x4(%esp)
084371ff +0x0d1:  mov    %eax,(%esp)
08437202 +0x0d4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437207 +0x0d9:  lea    -0x3c(%ebp),%eax
0843720a +0x0dc:  mov    %eax,(%esp)
0843720d +0x0df:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437212 +0x0e4:  mov    0x10(%ebp),%edx
08437215 +0x0e7:  mov    %edx,0x4(%esp)
08437219 +0x0eb:  mov    %eax,(%esp)
0843721c +0x0ee:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437221 +0x0f3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08437226 +0x0f8:  lea    -0x3c(%ebp),%edx
08437229 +0x0fb:  mov    %edx,0x8(%esp)
0843722d +0x0ff:  movl   $0x1,0x4(%esp)
08437235 +0x107:  mov    %eax,(%esp)
08437238 +0x10a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843723d +0x10f:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08437242 +0x114:  movl   $0x0,0x8(%esp)
0843724a +0x11c:  movl   $0x1,0x4(%esp)
08437252 +0x124:  mov    %eax,(%esp)
08437255 +0x127:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843725a +0x12c:  mov    %eax,-0x1c(%ebp)
0843725d +0x12f:  lea    -0x177(%ebp),%edx
08437263 +0x135:  mov    $0xff,%ebx
08437268 +0x13a:  mov    $0x0,%eax
0843726d +0x13f:  mov    %edx,%ecx
0843726f +0x141:  and    $0x1,%ecx
08437272 +0x144:  test   %ecx,%ecx
08437274 +0x146:  je     0843727e <+0x150>
08437276 +0x148:  mov    %al,(%edx)
08437278 +0x14a:  add    $0x1,%edx
0843727b +0x14d:  sub    $0x1,%ebx
0843727e +0x150:  mov    %edx,%ecx
08437280 +0x152:  and    $0x2,%ecx
08437283 +0x155:  test   %ecx,%ecx
08437285 +0x157:  je     08437290 <+0x162>
08437287 +0x159:  mov    %ax,(%edx)
0843728a +0x15c:  add    $0x2,%edx
0843728d +0x15f:  sub    $0x2,%ebx
08437290 +0x162:  mov    %ebx,%ecx
08437292 +0x164:  shr    $0x2,%ecx
08437295 +0x167:  mov    %edx,%edi
08437297 +0x169:  rep stos %eax,%es:(%edi)
08437299 +0x16b:  mov    %edi,%edx
0843729b +0x16d:  mov    %ebx,%ecx
0843729d +0x16f:  and    $0x2,%ecx
084372a0 +0x172:  test   %ecx,%ecx
084372a2 +0x174:  je     084372aa <+0x17c>
084372a4 +0x176:  mov    %ax,(%edx)
084372a7 +0x179:  add    $0x2,%edx
084372aa +0x17c:  mov    %ebx,%ecx
084372ac +0x17e:  and    $0x1,%ecx
084372af +0x181:  test   %ecx,%ecx
084372b1 +0x183:  je     084372b8 <+0x18a>
084372b3 +0x185:  mov    %al,(%edx)
084372b5 +0x187:  add    $0x1,%edx
084372b8 +0x18a:  movl   $0x1b,0x8(%esp)
084372c0 +0x192:  movl   $"|*|휴면 제재 해제|*|보안팀",0x4(%esp)
084372c8 +0x19a:  lea    -0x177(%ebp),%eax
084372ce +0x1a0:  mov    %eax,(%esp)
084372d1 +0x1a3:  call   0807d8a0 <_init+0x198>
084372d6 +0x1a8:  movl   $0x0,-0x46(%ebp)
084372dd +0x1af:  movl   $0x0,-0x42(%ebp)
084372e4 +0x1b6:  movw   $0x0,-0x3e(%ebp)
084372ea +0x1bc:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084372f1 +0x1c3:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084372f6 +0x1c8:  mov    %eax,-0x4c(%ebp)
084372f9 +0x1cb:  lea    -0x78(%ebp),%eax
084372fc +0x1ce:  mov    %eax,0x4(%esp)
08437300 +0x1d2:  lea    -0x4c(%ebp),%eax
08437303 +0x1d5:  mov    %eax,(%esp)
08437306 +0x1d8:  call   0807e360 <_init+0xc58>
0843730b +0x1dd:  lea    -0x78(%ebp),%eax
0843730e +0x1e0:  mov    %eax,0xc(%esp)
08437312 +0x1e4:  movl   $"%Y",0x8(%esp)
0843731a +0x1ec:  movl   $0xa,0x4(%esp)
08437322 +0x1f4:  lea    -0x46(%ebp),%eax
08437325 +0x1f7:  mov    %eax,(%esp)
08437328 +0x1fa:  call   0807dbc0 <_init+0x4b8>
0843732d +0x1ff:  mov    -0x20(%ebp),%eax
08437330 +0x202:  mov    (%eax),%eax
08437332 +0x204:  movl   $0x0,0x4(%esp)
0843733a +0x20c:  mov    %eax,(%esp)
0843733d +0x20f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08437342 +0x214:  movl   $0xa,0x14(%esp)
0843734a +0x21c:  mov    %eax,0x10(%esp)
0843734e +0x220:  lea    -0x177(%ebp),%eax
08437354 +0x226:  mov    %eax,0xc(%esp)
08437358 +0x22a:  lea    -0x46(%ebp),%eax
0843735b +0x22d:  mov    %eax,0x8(%esp)
0843735f +0x231:  movl   $"upDate member_punish_info_history_%s set apply_flag = 0 , reason = '%s' where m_id = %s and punish_type = %d and apply_flag = 1",0x4(%esp)
08437367 +0x239:  mov    -0x1c(%ebp),%eax
0843736a +0x23c:  mov    %eax,(%esp)
0843736d +0x23f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08437372 +0x244:  movl   $0x1,0x4(%esp)
0843737a +0x24c:  mov    -0x1c(%ebp),%eax
0843737d +0x24f:  mov    %eax,(%esp)
08437380 +0x252:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08437385 +0x257:  xor    $0x1,%eax
08437388 +0x25a:  test   %al,%al
0843738a +0x25c:  je     08437393 <+0x265>
0843738c +0x25e:  mov    $0x0,%ebx
08437391 +0x263:  jmp    08437406 <+0x2d8>
08437393 +0x265:  mov    -0x20(%ebp),%eax
08437396 +0x268:  mov    (%eax),%eax
08437398 +0x26a:  movl   $0x0,0x4(%esp)
084373a0 +0x272:  mov    %eax,(%esp)
084373a3 +0x275:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084373a8 +0x27a:  mov    %eax,%ebx
084373aa +0x27c:  movl   $0x0,0xc(%esp)
084373b2 +0x284:  movl   $0x8381,0x8(%esp)
084373ba +0x28c:  movl   $&_ZZN28DB_CancelRestingUserRestrict8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084373c2 +0x294:  lea    -0x34(%ebp),%eax
084373c5 +0x297:  mov    %eax,(%esp)
084373c8 +0x29a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084373cd +0x29f:  mov    %ebx,0x8(%esp)
084373d1 +0x2a3:  movl   $"CANCEL OK - Resting User Restrict (mid:%s)",0x4(%esp)
084373d9 +0x2ab:  lea    -0x34(%ebp),%eax
084373dc +0x2ae:  mov    %eax,(%esp)
084373df +0x2b1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084373e4 +0x2b6:  mov    $0x1,%ebx
084373e9 +0x2bb:  jmp    08437406 <+0x2d8>
084373eb +0x2bd:  mov    %edx,%ebx
084373ed +0x2bf:  mov    %eax,%esi
084373ef +0x2c1:  lea    -0x3c(%ebp),%eax
084373f2 +0x2c4:  mov    %eax,(%esp)
084373f5 +0x2c7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084373fa +0x2cc:  mov    %esi,%eax
084373fc +0x2ce:  mov    %ebx,%edx
084373fe +0x2d0:  mov    %eax,(%esp)
08437401 +0x2d3:  call   08ae3750 <_Unwind_Resume>
08437406 +0x2d8:  lea    -0x3c(%ebp),%eax
08437409 +0x2db:  mov    %eax,(%esp)
0843740c +0x2de:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437411 +0x2e3:  mov    %ebx,%eax
08437413 +0x2e5:  add    $0x18c,%esp
08437419 +0x2eb:  pop    %ebx
0843741a +0x2ec:  pop    %esi
0843741b +0x2ed:  pop    %edi
0843741c +0x2ee:  pop    %ebp
0843741d +0x2ef:  ret
```

## 反编译 C

```c
// DB_CancelRestingUserRestrict::dispatch @ 0x843712e

/* DB_CancelRestingUserRestrict::dispatch(int, int, Stream*) */

bool __thiscall
DB_CancelRestingUserRestrict::dispatch
          (DB_CancelRestingUserRestrict *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  undefined1 local_17b [255];
  tm local_7c;
  time_t local_50;
  char local_4a [10];
  CStreamGuard local_40 [8];
  cMyTrace local_38 [16];
  MySQL *local_28;
  SIG_RESTING_USER_RESTRICT *local_24;
  MySQL *local_20;
  
  bVar9 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_24 = Stream::GetOutBuffer<SIG_RESTING_USER_RESTRICT>(param_3);
  uVar2 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_28,
                   "upDate member_punish_info set apply_flag = 0 where m_id = %s and punish_type = 10"
                   ,uVar2);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x835c);
    CStreamGuard::CStreamGuard(local_40,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 08437202 to 084373e3 has its CatchHandler @ 084373eb */
    CStreamGuard::operator<<(pCVar4,0x195);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar4,param_2);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    puVar6 = (undefined4 *)local_17b;
    uVar7 = 0xff;
    bVar8 = ((uint)puVar6 & 1) != 0;
    if (bVar8) {
      local_17b[0] = 0;
      puVar6 = (undefined4 *)(local_17b + 1);
      uVar7 = 0xfe;
    }
    if (((uint)puVar6 & 2) != 0) {
      *(undefined2 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    }
    if ((uVar7 & 2) != 0) {
      *(undefined2 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
    }
    if (!bVar8) {
      *(undefined1 *)puVar6 = 0;
    }
    memcpy(local_17b,&DAT_08c53b62,0x1b);
    local_4a[0] = '\0';
    local_4a[1] = '\0';
    local_4a[2] = '\0';
    local_4a[3] = '\0';
    local_4a[4] = '\0';
    local_4a[5] = '\0';
    local_4a[6] = '\0';
    local_4a[7] = '\0';
    local_4a[8] = '\0';
    local_4a[9] = '\0';
    local_50 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_50,&local_7c);
    strftime(local_4a,10,"%Y",&local_7c);
    uVar2 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_20,
                     "upDate member_punish_info_history_%s set apply_flag = 0 , reason = \'%s\' where m_id = %s and punish_type = %d and apply_flag = 1"
                     ,local_4a,local_17b,uVar2,10);
    cVar1 = MySQL::exec(local_20,true);
    bVar8 = cVar1 == '\x01';
    if (bVar8) {
      uVar2 = NumberToString(*(uint *)local_24,0);
      cMyTrace::cMyTrace(local_38,
                         "virtual bool DB_CancelRestingUserRestrict::dispatch(int, int, Stream*)",
                         0x8381,0);
      cMyTrace::operator()(local_38,"CANCEL OK - Resting User Restrict (mid:%s)",uVar2);
    }
    CStreamGuard::~CStreamGuard(local_40);
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}
```
