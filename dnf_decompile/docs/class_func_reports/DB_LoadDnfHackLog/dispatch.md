# dispatch

`_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream`

`DB_LoadDnfHackLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDnfHackLog` | `0x08422242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422242  _ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream
#           DB_LoadDnfHackLog::dispatch(int, int, Stream*)
# range [0x08422242, 0x084224cd]
08422242 +0x000:  push   %ebp
08422243 +0x001:  mov    %esp,%ebp
08422245 +0x003:  push   %esi
08422246 +0x004:  push   %ebx
08422247 +0x005:  sub    $0x50,%esp
0842224a +0x008:  mov    0x8(%ebp),%eax
0842224d +0x00b:  mov    0x14(%ebp),%edx
08422250 +0x00e:  mov    %edx,0xc(%esp)
08422254 +0x012:  mov    0x10(%ebp),%edx
08422257 +0x015:  mov    %edx,0x8(%esp)
0842225b +0x019:  mov    0xc(%ebp),%edx
0842225e +0x01c:  mov    %edx,0x4(%esp)
08422262 +0x020:  mov    %eax,(%esp)
08422265 +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0842226a +0x028:  xor    $0x1,%eax
0842226d +0x02b:  test   %al,%al
0842226f +0x02d:  je     0842227b <+0x39>
08422271 +0x02f:  mov    $0x0,%ebx
08422276 +0x034:  jmp    084224c4 <+0x282>
0842227b +0x039:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08422280 +0x03e:  movl   $0x0,0x8(%esp)
08422288 +0x046:  movl   $0x4,0x4(%esp)
08422290 +0x04e:  mov    %eax,(%esp)
08422293 +0x051:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08422298 +0x056:  mov    %eax,-0x1c(%ebp)
0842229b +0x059:  movl   $0x0,-0x18(%ebp)
084222a2 +0x060:  mov    0x14(%ebp),%eax
084222a5 +0x063:  mov    %eax,(%esp)
084222a8 +0x066:  call   08451bf6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x480c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x480c
084222ad +0x06b:  mov    %eax,-0x10(%ebp)
084222b0 +0x06e:  mov    -0x10(%ebp),%eax
084222b3 +0x071:  mov    (%eax),%eax
084222b5 +0x073:  mov    %eax,-0x18(%ebp)
084222b8 +0x076:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084222bd +0x07b:  movl   $0x5a8e,0x8(%esp)
084222c5 +0x083:  movl   $"DBThread.cpp",0x4(%esp)
084222cd +0x08b:  mov    %eax,(%esp)
084222d0 +0x08e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084222d5 +0x093:  movl   $0x1,0x8(%esp)
084222dd +0x09b:  mov    %eax,0x4(%esp)
084222e1 +0x09f:  lea    -0x24(%ebp),%eax
084222e4 +0x0a2:  mov    %eax,(%esp)
084222e7 +0x0a5:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084222ec +0x0aa:  lea    -0x24(%ebp),%eax
084222ef +0x0ad:  mov    %eax,(%esp)
084222f2 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084222f7 +0x0b5:  movl   $0x106,0x4(%esp)
084222ff +0x0bd:  mov    %eax,(%esp)
08422302 +0x0c0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08422307 +0x0c5:  lea    -0x24(%ebp),%eax
0842230a +0x0c8:  mov    %eax,(%esp)
0842230d +0x0cb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08422312 +0x0d0:  mov    0x10(%ebp),%edx
08422315 +0x0d3:  mov    %edx,0x4(%esp)
08422319 +0x0d7:  mov    %eax,(%esp)
0842231c +0x0da:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08422321 +0x0df:  lea    -0x24(%ebp),%eax
08422324 +0x0e2:  mov    %eax,(%esp)
08422327 +0x0e5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842232c +0x0ea:  mov    %eax,(%esp)
0842232f +0x0ed:  call   08451c4a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4860>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4860
08422334 +0x0f2:  mov    %eax,-0x14(%ebp)
08422337 +0x0f5:  movl   $0x3cf4,0x8(%esp)
0842233f +0x0fd:  movl   $0x0,0x4(%esp)
08422347 +0x105:  mov    -0x14(%ebp),%eax
0842234a +0x108:  mov    %eax,(%esp)
0842234d +0x10b:  call   0807dcc0 <_init+0x5b8>
08422352 +0x110:  mov    -0x14(%ebp),%eax
08422355 +0x113:  mov    -0x18(%ebp),%edx
08422358 +0x116:  mov    %edx,(%eax)
0842235a +0x118:  movl   $0x0,0x4(%esp)
08422362 +0x120:  mov    -0x18(%ebp),%eax
08422365 +0x123:  mov    %eax,(%esp)
08422368 +0x126:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842236d +0x12b:  movl   $0xfa1,0x10(%esp)
08422375 +0x133:  movl   $0x65,0xc(%esp)
0842237d +0x13b:  mov    %eax,0x8(%esp)
08422381 +0x13f:  movl   $"seLect hack_type,cnt from dnf_hack_log where m_id=%s and (hack_type>=%d and hack_type<%d) and occ_date=CAST(DATE_FORMAT(now(), '%%Y-%%m-%%d') AS CHAR)",0x4(%esp)
08422389 +0x147:  mov    -0x1c(%ebp),%eax
0842238c +0x14a:  mov    %eax,(%esp)
0842238f +0x14d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08422394 +0x152:  movl   $0x1,0x4(%esp)
0842239c +0x15a:  mov    -0x1c(%ebp),%eax
0842239f +0x15d:  mov    %eax,(%esp)
084223a2 +0x160:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084223a7 +0x165:  xor    $0x1,%eax
084223aa +0x168:  test   %al,%al
084223ac +0x16a:  je     084223b8 <+0x176>
084223ae +0x16c:  mov    $0x0,%ebx
084223b3 +0x171:  jmp    084224b9 <+0x277>
084223b8 +0x176:  movl   $0x0,-0xc(%ebp)
084223bf +0x17d:  jmp    08422462 <+0x220>
084223c4 +0x182:  movl   $0x0,-0x28(%ebp)
084223cb +0x189:  movl   $0x0,-0x2c(%ebp)
084223d2 +0x190:  mov    -0x1c(%ebp),%eax
084223d5 +0x193:  mov    %eax,(%esp)
084223d8 +0x196:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084223dd +0x19b:  xor    $0x1,%eax
084223e0 +0x19e:  test   %al,%al
084223e2 +0x1a0:  je     084223ee <+0x1ac>
084223e4 +0x1a2:  mov    $0x0,%ebx
084223e9 +0x1a7:  jmp    084224b9 <+0x277>
084223ee +0x1ac:  lea    -0x28(%ebp),%eax
084223f1 +0x1af:  mov    %eax,0x8(%esp)
084223f5 +0x1b3:  movl   $0x0,0x4(%esp)
084223fd +0x1bb:  mov    -0x1c(%ebp),%eax
08422400 +0x1be:  mov    %eax,(%esp)
08422403 +0x1c1:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08422408 +0x1c6:  xor    $0x1,%eax
0842240b +0x1c9:  test   %al,%al
0842240d +0x1cb:  je     08422419 <+0x1d7>
0842240f +0x1cd:  mov    $0x0,%ebx
08422414 +0x1d2:  jmp    084224b9 <+0x277>
08422419 +0x1d7:  mov    -0x28(%ebp),%eax
0842241c +0x1da:  cmp    $0xfa0,%eax
08422421 +0x1df:  ja     0842245d <+0x21b>
08422423 +0x1e1:  lea    -0x2c(%ebp),%eax
08422426 +0x1e4:  mov    %eax,0x8(%esp)
0842242a +0x1e8:  movl   $0x1,0x4(%esp)
08422432 +0x1f0:  mov    -0x1c(%ebp),%eax
08422435 +0x1f3:  mov    %eax,(%esp)
08422438 +0x1f6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842243d +0x1fb:  xor    $0x1,%eax
08422440 +0x1fe:  test   %al,%al
08422442 +0x200:  je     0842244b <+0x209>
08422444 +0x202:  mov    $0x0,%ebx
08422449 +0x207:  jmp    084224b9 <+0x277>
0842244b +0x209:  mov    -0x28(%ebp),%eax
0842244e +0x20c:  lea    -0x65(%eax),%ecx
08422451 +0x20f:  mov    -0x2c(%ebp),%edx
08422454 +0x212:  mov    -0x14(%ebp),%eax
08422457 +0x215:  mov    %edx,0x4(%eax,%ecx,4)
0842245b +0x219:  jmp    0842245e <+0x21c>
0842245d +0x21b:  nop
0842245e +0x21c:  addl   $0x1,-0xc(%ebp)
08422462 +0x220:  mov    -0x1c(%ebp),%eax
08422465 +0x223:  mov    %eax,(%esp)
08422468 +0x226:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842246d +0x22b:  cmp    -0xc(%ebp),%eax
08422470 +0x22e:  seta   %al
08422473 +0x231:  test   %al,%al
08422475 +0x233:  jne    084223c4 <+0x182>
0842247b +0x239:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08422480 +0x23e:  lea    -0x24(%ebp),%edx
08422483 +0x241:  mov    %edx,0x8(%esp)
08422487 +0x245:  movl   $0x1,0x4(%esp)
0842248f +0x24d:  mov    %eax,(%esp)
08422492 +0x250:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08422497 +0x255:  mov    $0x1,%ebx
0842249c +0x25a:  jmp    084224b9 <+0x277>
0842249e +0x25c:  mov    %edx,%ebx
084224a0 +0x25e:  mov    %eax,%esi
084224a2 +0x260:  lea    -0x24(%ebp),%eax
084224a5 +0x263:  mov    %eax,(%esp)
084224a8 +0x266:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084224ad +0x26b:  mov    %esi,%eax
084224af +0x26d:  mov    %ebx,%edx
084224b1 +0x26f:  mov    %eax,(%esp)
084224b4 +0x272:  call   08ae3750 <_Unwind_Resume>
084224b9 +0x277:  lea    -0x24(%ebp),%eax
084224bc +0x27a:  mov    %eax,(%esp)
084224bf +0x27d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084224c4 +0x282:  mov    %ebx,%eax
084224c6 +0x284:  add    $0x50,%esp
084224c9 +0x287:  pop    %ebx
084224ca +0x288:  pop    %esi
084224cb +0x289:  pop    %ebp
084224cc +0x28a:  ret
084224cd +0x28b:  nop
```

## 反编译 C

```c
// DB_LoadDnfHackLog::dispatch @ 0x8422242

/* DB_LoadDnfHackLog::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadDnfHackLog::dispatch(DB_LoadDnfHackLog *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_30;
  uint local_2c;
  CStreamGuard local_28 [8];
  MySQL *local_20;
  uint local_1c;
  SIG_LOAD_DNF_HACK_LOG *local_18;
  SIG_LOAD_DNF_HACK_LOG *local_14;
  uint local_10;
  
  pSVar2 = param_3;
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0,pSVar2);
    local_1c = 0;
    local_14 = Stream::GetOutBuffer<SIG_LOAD_DNF_HACK_LOG>(param_3);
    local_1c = *(uint *)local_14;
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5a8e);
    CStreamGuard::CStreamGuard(local_28,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 08422302 to 08422496 has its CatchHandler @ 0842249e */
    CStreamGuard::operator<<(pCVar3,0x106);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_18 = CStreamGuard::GetInBuffer<SIG_LOAD_DNF_HACK_LOG>(pCVar3);
    memset(local_18,0,0x3cf4);
    *(uint *)local_18 = local_1c;
    uVar5 = NumberToString(local_1c,0);
    MySQL::set_query(local_20,
                     "seLect hack_type,cnt from dnf_hack_log where m_id=%s and (hack_type>=%d and hack_type<%d) and occ_date=CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR)"
                     ,uVar5,0x65,0xfa1);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      local_10 = 0;
      while( true ) {
        uVar4 = MySQL::get_n_rows(local_20);
        if (uVar4 <= local_10) break;
        local_2c = 0;
        local_30 = 0;
        cVar1 = MySQL::fetch(local_20);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_084224b9;
        }
        cVar1 = MySQL::get_uint(local_20,0,&local_2c);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_084224b9;
        }
        if (local_2c < 0xfa1) {
          cVar1 = MySQL::get_uint(local_20,1,&local_30);
          if (cVar1 != '\x01') {
            uVar5 = 0;
            goto LAB_084224b9;
          }
          *(uint *)(local_18 + (local_2c - 0x65) * 4 + 4) = local_30;
        }
        local_10 = local_10 + 1;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
LAB_084224b9:
    CStreamGuard::~CStreamGuard(local_28);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
