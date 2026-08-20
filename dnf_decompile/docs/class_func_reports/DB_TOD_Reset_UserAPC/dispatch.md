# dispatch

`_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream`

`DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_TOD_Reset_UserAPC` | `0x084400c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084400c8  _ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream
#           DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)
# range [0x084400c8, 0x084403a9]
084400c8 +0x000:  push   %ebp
084400c9 +0x001:  mov    %esp,%ebp
084400cb +0x003:  push   %esi
084400cc +0x004:  push   %ebx
084400cd +0x005:  sub    $0x60,%esp
084400d0 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084400d5 +0x00d:  movl   $0x0,0x8(%esp)
084400dd +0x015:  movl   $0x2,0x4(%esp)
084400e5 +0x01d:  mov    %eax,(%esp)
084400e8 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084400ed +0x025:  mov    %eax,-0x1c(%ebp)
084400f0 +0x028:  movl   $"seLect charac_no from charac_tower_despair_apc limit 10",0x4(%esp)
084400f8 +0x030:  mov    -0x1c(%ebp),%eax
084400fb +0x033:  mov    %eax,(%esp)
084400fe +0x036:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440103 +0x03b:  movl   $0x1,0x4(%esp)
0844010b +0x043:  mov    -0x1c(%ebp),%eax
0844010e +0x046:  mov    %eax,(%esp)
08440111 +0x049:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08440116 +0x04e:  xor    $0x1,%eax
08440119 +0x051:  test   %al,%al
0844011b +0x053:  je     0844015d <+0x95>
0844011d +0x055:  movl   $0x5,0xc(%esp)
08440125 +0x05d:  movl   $0x9ea7,0x8(%esp)
0844012d +0x065:  movl   $&_ZZN20DB_TOD_Reset_UserAPC8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08440135 +0x06d:  lea    -0x4c(%ebp),%eax
08440138 +0x070:  mov    %eax,(%esp)
0844013b +0x073:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440140 +0x078:  movl   $"TOD : load apc from DB",0x4(%esp)
08440148 +0x080:  lea    -0x4c(%ebp),%eax
0844014b +0x083:  mov    %eax,(%esp)
0844014e +0x086:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440153 +0x08b:  mov    $0x0,%ebx
08440158 +0x090:  jmp    084403a1 <+0x2d9>
0844015d +0x095:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08440162 +0x09a:  movl   $0x9eab,0x8(%esp)
0844016a +0x0a2:  movl   $"DBThread.cpp",0x4(%esp)
08440172 +0x0aa:  mov    %eax,(%esp)
08440175 +0x0ad:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844017a +0x0b2:  movl   $0x1,0x8(%esp)
08440182 +0x0ba:  mov    %eax,0x4(%esp)
08440186 +0x0be:  lea    -0x54(%ebp),%eax
08440189 +0x0c1:  mov    %eax,(%esp)
0844018c +0x0c4:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08440191 +0x0c9:  lea    -0x54(%ebp),%eax
08440194 +0x0cc:  mov    %eax,(%esp)
08440197 +0x0cf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844019c +0x0d4:  mov    0xc(%ebp),%edx
0844019f +0x0d7:  mov    %edx,0x4(%esp)
084401a3 +0x0db:  mov    %eax,(%esp)
084401a6 +0x0de:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084401ab +0x0e3:  lea    -0x54(%ebp),%eax
084401ae +0x0e6:  mov    %eax,(%esp)
084401b1 +0x0e9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084401b6 +0x0ee:  mov    0x10(%ebp),%edx
084401b9 +0x0f1:  mov    %edx,0x4(%esp)
084401bd +0x0f5:  mov    %eax,(%esp)
084401c0 +0x0f8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084401c5 +0x0fd:  lea    -0x54(%ebp),%eax
084401c8 +0x100:  mov    %eax,(%esp)
084401cb +0x103:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084401d0 +0x108:  mov    %eax,(%esp)
084401d3 +0x10b:  call   08453cb8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x68ce>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x68ce
084401d8 +0x110:  mov    %eax,-0x18(%ebp)
084401db +0x113:  movl   $0x758,0x8(%esp)
084401e3 +0x11b:  movl   $0x0,0x4(%esp)
084401eb +0x123:  mov    -0x18(%ebp),%eax
084401ee +0x126:  mov    %eax,(%esp)
084401f1 +0x129:  call   0807dcc0 <_init+0x5b8>
084401f6 +0x12e:  mov    -0x1c(%ebp),%eax
084401f9 +0x131:  mov    %eax,(%esp)
084401fc +0x134:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08440201 +0x139:  mov    %eax,-0x14(%ebp)
08440204 +0x13c:  cmpl   $0xa,-0x14(%ebp)
08440208 +0x140:  je     08440251 <+0x189>
0844020a +0x142:  movl   $0x5,0xc(%esp)
08440212 +0x14a:  movl   $0x9eb5,0x8(%esp)
0844021a +0x152:  movl   $&_ZZN20DB_TOD_Reset_UserAPC8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08440222 +0x15a:  lea    -0x3c(%ebp),%eax
08440225 +0x15d:  mov    %eax,(%esp)
08440228 +0x160:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844022d +0x165:  mov    -0x14(%ebp),%eax
08440230 +0x168:  mov    %eax,0x8(%esp)
08440234 +0x16c:  movl   $"TOD : get_n_rows() %d",0x4(%esp)
0844023c +0x174:  lea    -0x3c(%ebp),%eax
0844023f +0x177:  mov    %eax,(%esp)
08440242 +0x17a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08440247 +0x17f:  mov    $0x0,%ebx
0844024c +0x184:  jmp    08440396 <+0x2ce>
08440251 +0x189:  movl   $0x0,-0x10(%ebp)
08440258 +0x190:  jmp    084402dd <+0x215>
0844025d +0x195:  mov    -0x1c(%ebp),%eax
08440260 +0x198:  mov    %eax,(%esp)
08440263 +0x19b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08440268 +0x1a0:  xor    $0x1,%eax
0844026b +0x1a3:  test   %al,%al
0844026d +0x1a5:  je     084402b6 <+0x1ee>
0844026f +0x1a7:  movl   $0x5,0xc(%esp)
08440277 +0x1af:  movl   $0x9ebd,0x8(%esp)
0844027f +0x1b7:  movl   $&_ZZN20DB_TOD_Reset_UserAPC8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08440287 +0x1bf:  lea    -0x2c(%ebp),%eax
0844028a +0x1c2:  mov    %eax,(%esp)
0844028d +0x1c5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08440292 +0x1ca:  mov    -0x10(%ebp),%eax
08440295 +0x1cd:  mov    %eax,0x8(%esp)
08440299 +0x1d1:  movl   $"TOD : db->fetch(), int i=%d",0x4(%esp)
084402a1 +0x1d9:  lea    -0x2c(%ebp),%eax
084402a4 +0x1dc:  mov    %eax,(%esp)
084402a7 +0x1df:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084402ac +0x1e4:  mov    $0x0,%ebx
084402b1 +0x1e9:  jmp    08440396 <+0x2ce>
084402b6 +0x1ee:  mov    -0x10(%ebp),%eax
084402b9 +0x1f1:  imul   $0xbc,%eax,%eax
084402bf +0x1f7:  add    -0x18(%ebp),%eax
084402c2 +0x1fa:  mov    %eax,0x8(%esp)
084402c6 +0x1fe:  movl   $0x0,0x4(%esp)
084402ce +0x206:  mov    -0x1c(%ebp),%eax
084402d1 +0x209:  mov    %eax,(%esp)
084402d4 +0x20c:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
084402d9 +0x211:  addl   $0x1,-0x10(%ebp)
084402dd +0x215:  mov    -0x10(%ebp),%eax
084402e0 +0x218:  cmp    -0x14(%ebp),%eax
084402e3 +0x21b:  jge    084402f2 <+0x22a>
084402e5 +0x21d:  cmpl   $0x9,-0x10(%ebp)
084402e9 +0x221:  jg     084402f2 <+0x22a>
084402eb +0x223:  mov    $0x1,%eax
084402f0 +0x228:  jmp    084402f7 <+0x22f>
084402f2 +0x22a:  mov    $0x0,%eax
084402f7 +0x22f:  test   %al,%al
084402f9 +0x231:  jne    0844025d <+0x195>
084402ff +0x237:  movl   $0x0,-0xc(%ebp)
08440306 +0x23e:  jmp    0844033a <+0x272>
08440308 +0x240:  mov    -0xc(%ebp),%edx
0844030b +0x243:  mov    -0x18(%ebp),%eax
0844030e +0x246:  imul   $0xbc,%edx,%edx
08440314 +0x24c:  mov    (%edx,%eax,1),%eax
08440317 +0x24f:  test   %eax,%eax
08440319 +0x251:  je     08440336 <+0x26e>
0844031b +0x253:  mov    -0xc(%ebp),%eax
0844031e +0x256:  imul   $0xbc,%eax,%eax
08440324 +0x25c:  add    -0x18(%ebp),%eax
08440327 +0x25f:  mov    %eax,0x4(%esp)
0844032b +0x263:  mov    0x8(%ebp),%eax
0844032e +0x266:  mov    %eax,(%esp)
08440331 +0x269:  call   08440548 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo>  ; DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)
08440336 +0x26e:  addl   $0x1,-0xc(%ebp)
0844033a +0x272:  mov    -0xc(%ebp),%eax
0844033d +0x275:  cmp    -0x14(%ebp),%eax
08440340 +0x278:  jge    0844034f <+0x287>
08440342 +0x27a:  cmpl   $0x9,-0xc(%ebp)
08440346 +0x27e:  jg     0844034f <+0x287>
08440348 +0x280:  mov    $0x1,%eax
0844034d +0x285:  jmp    08440354 <+0x28c>
0844034f +0x287:  mov    $0x0,%eax
08440354 +0x28c:  test   %al,%al
08440356 +0x28e:  jne    08440308 <+0x240>
08440358 +0x290:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844035d +0x295:  lea    -0x54(%ebp),%edx
08440360 +0x298:  mov    %edx,0x8(%esp)
08440364 +0x29c:  movl   $0x1,0x4(%esp)
0844036c +0x2a4:  mov    %eax,(%esp)
0844036f +0x2a7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08440374 +0x2ac:  mov    $0x1,%ebx
08440379 +0x2b1:  jmp    08440396 <+0x2ce>
0844037b +0x2b3:  mov    %edx,%ebx
0844037d +0x2b5:  mov    %eax,%esi
0844037f +0x2b7:  lea    -0x54(%ebp),%eax
08440382 +0x2ba:  mov    %eax,(%esp)
08440385 +0x2bd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844038a +0x2c2:  mov    %esi,%eax
0844038c +0x2c4:  mov    %ebx,%edx
0844038e +0x2c6:  mov    %eax,(%esp)
08440391 +0x2c9:  call   08ae3750 <_Unwind_Resume>
08440396 +0x2ce:  lea    -0x54(%ebp),%eax
08440399 +0x2d1:  mov    %eax,(%esp)
0844039c +0x2d4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084403a1 +0x2d9:  mov    %ebx,%eax
084403a3 +0x2db:  add    $0x60,%esp
084403a6 +0x2de:  pop    %ebx
084403a7 +0x2df:  pop    %esi
084403a8 +0x2e0:  pop    %ebp
084403a9 +0x2e1:  ret
```

## 反编译 C

```c
// DB_TOD_Reset_UserAPC::dispatch @ 0x84400c8

/* DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*) */

undefined4 DB_TOD_Reset_UserAPC::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_58 [8];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  MySQL *local_20;
  SIG_TOD_RELOADED_USER_APC *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_20,"seLect charac_no from charac_tower_despair_apc limit 10");
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9eab);
    CStreamGuard::CStreamGuard(local_58,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 084401a6 to 08440373 has its CatchHandler @ 0844037b */
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
    CStreamGuard::operator<<(pCVar4,(int)param_3);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_1c = CStreamGuard::GetInBuffer<SIG_TOD_RELOADED_USER_APC>(pCVar4);
    memset(local_1c,0,0x758);
    local_18 = MySQL::get_n_rows(local_20);
    if (local_18 == 10) {
      local_14 = 0;
LAB_084402dd:
      if ((local_14 < local_18) && (local_14 < 10)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cVar2 = MySQL::fetch(local_20);
        if (cVar2 == '\x01') goto LAB_084402b6;
        cMyTrace::cMyTrace(local_30,"virtual bool DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)"
                           ,0x9ebd,5);
        cMyTrace::operator()(local_30,"TOD : db->fetch(), int i=%d",local_14);
        uVar5 = 0;
      }
      else {
        local_10 = 0;
        while( true ) {
          if ((local_10 < local_18) && (local_10 < 10)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
          if (*(int *)(local_1c + local_10 * 0xbc) != 0) {
            GetAPCUserInfo((DB_TOD_Reset_UserAPC *)param_1,(_APCInfo *)(local_1c + local_10 * 0xbc))
            ;
          }
          local_10 = local_10 + 1;
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_58);
        uVar5 = 1;
      }
      goto LAB_08440396;
    }
    cMyTrace::cMyTrace(local_40,"virtual bool DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)",
                       0x9eb5,5);
    cMyTrace::operator()(local_40,"TOD : get_n_rows() %d",local_18);
    uVar5 = 0;
LAB_08440396:
    CStreamGuard::~CStreamGuard(local_58);
  }
  else {
    cMyTrace::cMyTrace(local_50,"virtual bool DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)",
                       0x9ea7,5);
    cMyTrace::operator()(local_50,"TOD : load apc from DB");
    uVar5 = 0;
  }
  return uVar5;
LAB_084402b6:
  MySQL::get_int(local_20,0,(uint *)(local_1c + local_14 * 0xbc));
  local_14 = local_14 + 1;
  goto LAB_084402dd;
}
```
