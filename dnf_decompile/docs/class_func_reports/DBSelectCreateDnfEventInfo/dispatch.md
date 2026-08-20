# dispatch

`_ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream`

`DBSelectCreateDnfEventInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBSelectCreateDnfEventInfo` | `0x0815bb8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815bb8c  _ZN26DBSelectCreateDnfEventInfo8dispatchEiiP6Stream
#           DBSelectCreateDnfEventInfo::dispatch(int, int, Stream*)
# range [0x0815bb8c, 0x0815bedf]
0815bb8c +0x000:  push   %ebp
0815bb8d +0x001:  mov    %esp,%ebp
0815bb8f +0x003:  push   %edi
0815bb90 +0x004:  push   %esi
0815bb91 +0x005:  push   %ebx
0815bb92 +0x006:  sub    $0x8c,%esp
0815bb98 +0x00c:  movl   $0x0,-0x34(%ebp)
0815bb9f +0x013:  movl   $0x0,-0x38(%ebp)
0815bba6 +0x01a:  movl   $0x0,-0x3c(%ebp)
0815bbad +0x021:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815bbb2 +0x026:  movl   $0x0,0x8(%esp)
0815bbba +0x02e:  movl   $0x9,0x4(%esp)
0815bbc2 +0x036:  mov    %eax,(%esp)
0815bbc5 +0x039:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815bbca +0x03e:  mov    %eax,-0x20(%ebp)
0815bbcd +0x041:  cmpl   $0x0,-0x20(%ebp)
0815bbd1 +0x045:  jne    0815bbff <+0x73>
0815bbd3 +0x047:  movl   $0x4,(%esp)
0815bbda +0x04e:  call   08725800 <__cxa_allocate_exception>
0815bbdf +0x053:  mov    %eax,%edx
0815bbe1 +0x055:  movl   $"handle null",(%edx)
0815bbe7 +0x05b:  movl   $0x0,0x8(%esp)
0815bbef +0x063:  movl   $&_ZTIPKc,0x4(%esp)
0815bbf7 +0x06b:  mov    %eax,(%esp)
0815bbfa +0x06e:  call   08724c50 <__cxa_throw>
0815bbff +0x073:  movl   $"seLect rate, HOUR(CURTIME()), event_day FROM event_create_dnf_info WHERE occ_time=DATE_ADD(CURDATE(), INTERVAL HOUR(CURTIME()) HOUR)",0x4(%esp)
0815bc07 +0x07b:  mov    -0x20(%ebp),%eax
0815bc0a +0x07e:  mov    %eax,(%esp)
0815bc0d +0x081:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815bc12 +0x086:  movl   $0x1,0x4(%esp)
0815bc1a +0x08e:  mov    -0x20(%ebp),%eax
0815bc1d +0x091:  mov    %eax,(%esp)
0815bc20 +0x094:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815bc25 +0x099:  xor    $0x1,%eax
0815bc28 +0x09c:  test   %al,%al
0815bc2a +0x09e:  je     0815bc58 <+0xcc>
0815bc2c +0x0a0:  movl   $0x4,(%esp)
0815bc33 +0x0a7:  call   08725800 <__cxa_allocate_exception>
0815bc38 +0x0ac:  mov    %eax,%edx
0815bc3a +0x0ae:  movl   $"select_exec",(%edx)
0815bc40 +0x0b4:  movl   $0x0,0x8(%esp)
0815bc48 +0x0bc:  movl   $&_ZTIPKc,0x4(%esp)
0815bc50 +0x0c4:  mov    %eax,(%esp)
0815bc53 +0x0c7:  call   08724c50 <__cxa_throw>
0815bc58 +0x0cc:  mov    -0x20(%ebp),%eax
0815bc5b +0x0cf:  mov    %eax,(%esp)
0815bc5e +0x0d2:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815bc63 +0x0d7:  test   %eax,%eax
0815bc65 +0x0d9:  sete   %al
0815bc68 +0x0dc:  test   %al,%al
0815bc6a +0x0de:  je     0815bc98 <+0x10c>
0815bc6c +0x0e0:  movl   $0x4,(%esp)
0815bc73 +0x0e7:  call   08725800 <__cxa_allocate_exception>
0815bc78 +0x0ec:  mov    %eax,%edx
0815bc7a +0x0ee:  movl   $"get_n_rows=0",(%edx)
0815bc80 +0x0f4:  movl   $0x0,0x8(%esp)
0815bc88 +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
0815bc90 +0x104:  mov    %eax,(%esp)
0815bc93 +0x107:  call   08724c50 <__cxa_throw>
0815bc98 +0x10c:  mov    -0x20(%ebp),%eax
0815bc9b +0x10f:  mov    %eax,(%esp)
0815bc9e +0x112:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0815bca3 +0x117:  xor    $0x1,%eax
0815bca6 +0x11a:  test   %al,%al
0815bca8 +0x11c:  je     0815bcd6 <+0x14a>
0815bcaa +0x11e:  movl   $0x4,(%esp)
0815bcb1 +0x125:  call   08725800 <__cxa_allocate_exception>
0815bcb6 +0x12a:  mov    %eax,%edx
0815bcb8 +0x12c:  movl   $"fetch",(%edx)
0815bcbe +0x132:  movl   $0x0,0x8(%esp)
0815bcc6 +0x13a:  movl   $&_ZTIPKc,0x4(%esp)
0815bcce +0x142:  mov    %eax,(%esp)
0815bcd1 +0x145:  call   08724c50 <__cxa_throw>
0815bcd6 +0x14a:  lea    -0x34(%ebp),%eax
0815bcd9 +0x14d:  mov    %eax,0x8(%esp)
0815bcdd +0x151:  movl   $0x0,0x4(%esp)
0815bce5 +0x159:  mov    -0x20(%ebp),%eax
0815bce8 +0x15c:  mov    %eax,(%esp)
0815bceb +0x15f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0815bcf0 +0x164:  xor    $0x1,%eax
0815bcf3 +0x167:  test   %al,%al
0815bcf5 +0x169:  je     0815bd23 <+0x197>
0815bcf7 +0x16b:  movl   $0x4,(%esp)
0815bcfe +0x172:  call   08725800 <__cxa_allocate_exception>
0815bd03 +0x177:  mov    %eax,%edx
0815bd05 +0x179:  movl   $"get_int 0",(%edx)
0815bd0b +0x17f:  movl   $0x0,0x8(%esp)
0815bd13 +0x187:  movl   $&_ZTIPKc,0x4(%esp)
0815bd1b +0x18f:  mov    %eax,(%esp)
0815bd1e +0x192:  call   08724c50 <__cxa_throw>
0815bd23 +0x197:  lea    -0x38(%ebp),%eax
0815bd26 +0x19a:  mov    %eax,0x8(%esp)
0815bd2a +0x19e:  movl   $0x1,0x4(%esp)
0815bd32 +0x1a6:  mov    -0x20(%ebp),%eax
0815bd35 +0x1a9:  mov    %eax,(%esp)
0815bd38 +0x1ac:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0815bd3d +0x1b1:  xor    $0x1,%eax
0815bd40 +0x1b4:  test   %al,%al
0815bd42 +0x1b6:  je     0815bd70 <+0x1e4>
0815bd44 +0x1b8:  movl   $0x4,(%esp)
0815bd4b +0x1bf:  call   08725800 <__cxa_allocate_exception>
0815bd50 +0x1c4:  mov    %eax,%edx
0815bd52 +0x1c6:  movl   $"get_int 1",(%edx)
0815bd58 +0x1cc:  movl   $0x0,0x8(%esp)
0815bd60 +0x1d4:  movl   $&_ZTIPKc,0x4(%esp)
0815bd68 +0x1dc:  mov    %eax,(%esp)
0815bd6b +0x1df:  call   08724c50 <__cxa_throw>
0815bd70 +0x1e4:  lea    -0x3c(%ebp),%eax
0815bd73 +0x1e7:  mov    %eax,0x8(%esp)
0815bd77 +0x1eb:  movl   $0x2,0x4(%esp)
0815bd7f +0x1f3:  mov    -0x20(%ebp),%eax
0815bd82 +0x1f6:  mov    %eax,(%esp)
0815bd85 +0x1f9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0815bd8a +0x1fe:  xor    $0x1,%eax
0815bd8d +0x201:  test   %al,%al
0815bd8f +0x203:  je     0815bdbd <+0x231>
0815bd91 +0x205:  movl   $0x4,(%esp)
0815bd98 +0x20c:  call   08725800 <__cxa_allocate_exception>
0815bd9d +0x211:  mov    %eax,%edx
0815bd9f +0x213:  movl   $"get_int 2",(%edx)
0815bda5 +0x219:  movl   $0x0,0x8(%esp)
0815bdad +0x221:  movl   $&_ZTIPKc,0x4(%esp)
0815bdb5 +0x229:  mov    %eax,(%esp)
0815bdb8 +0x22c:  call   08724c50 <__cxa_throw>
0815bdbd +0x231:  mov    -0x3c(%ebp),%ecx
0815bdc0 +0x234:  mov    -0x38(%ebp),%edx
0815bdc3 +0x237:  mov    -0x34(%ebp),%eax
0815bdc6 +0x23a:  mov    %ecx,0x8(%esp)
0815bdca +0x23e:  mov    %edx,0x4(%esp)
0815bdce +0x242:  mov    %eax,(%esp)
0815bdd1 +0x245:  call   08160ef6 <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii>  ; InterSelectCreateDnfEventInfo::makeRequest(int, int, int)
0815bdd6 +0x24a:  mov    -0x3c(%ebp),%edi
0815bdd9 +0x24d:  mov    -0x34(%ebp),%esi
0815bddc +0x250:  mov    -0x38(%ebp),%ebx
0815bddf +0x253:  movl   $0x0,0xc(%esp)
0815bde7 +0x25b:  movl   $0x20d,0x8(%esp)
0815bdef +0x263:  movl   $&_ZZN26DBSelectCreateDnfEventInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815bdf7 +0x26b:  lea    -0x30(%ebp),%eax
0815bdfa +0x26e:  mov    %eax,(%esp)
0815bdfd +0x271:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815be02 +0x276:  mov    %edi,0x10(%esp)
0815be06 +0x27a:  mov    %esi,0xc(%esp)
0815be0a +0x27e:  mov    %ebx,0x8(%esp)
0815be0e +0x282:  movl   $"[Taiwan, Event] select event_create_dnf_info. hour:%d rate:%d event_day:%d",0x4(%esp)
0815be16 +0x28a:  lea    -0x30(%ebp),%eax
0815be19 +0x28d:  mov    %eax,(%esp)
0815be1c +0x290:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815be21 +0x295:  mov    $0x1,%ebx
0815be26 +0x29a:  jmp    0815bed3 <+0x347>
0815be2b +0x29f:  cmp    $0x1,%edx
0815be2e +0x2a2:  je     0815be38 <+0x2ac>
0815be30 +0x2a4:  mov    %eax,(%esp)
0815be33 +0x2a7:  call   08ae3750 <_Unwind_Resume>
0815be38 +0x2ac:  mov    %eax,(%esp)
0815be3b +0x2af:  call   08725ce0 <__cxa_begin_catch>
0815be40 +0x2b4:  mov    %eax,-0x1c(%ebp)
0815be43 +0x2b7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0815be4a +0x2be:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0815be4f +0x2c3:  mov    %eax,-0x40(%ebp)
0815be52 +0x2c6:  lea    -0x6c(%ebp),%eax
0815be55 +0x2c9:  mov    %eax,0x4(%esp)
0815be59 +0x2cd:  lea    -0x40(%ebp),%eax
0815be5c +0x2d0:  mov    %eax,(%esp)
0815be5f +0x2d3:  call   0807e360 <_init+0xc58>
0815be64 +0x2d8:  mov    -0x64(%ebp),%eax
0815be67 +0x2db:  movl   $0x0,0x8(%esp)
0815be6f +0x2e3:  mov    %eax,0x4(%esp)
0815be73 +0x2e7:  movl   $0xffffffff,(%esp)
0815be7a +0x2ee:  call   08160ef6 <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii>  ; InterSelectCreateDnfEventInfo::makeRequest(int, int, int)
0815be7f +0x2f3:  mov    -0x1c(%ebp),%eax
0815be82 +0x2f6:  mov    %eax,0x14(%esp)
0815be86 +0x2fa:  movl   $"[Taiwan, Event] select event_create_dnf_info. (error:%s)",0x10(%esp)
0815be8e +0x302:  movl   $0x219,0xc(%esp)
0815be96 +0x30a:  movl   $&_ZZN26DBSelectCreateDnfEventInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815be9e +0x312:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815bea6 +0x31a:  movl   $0x1,(%esp)
0815bead +0x321:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815beb2 +0x326:  mov    $0x0,%ebx
0815beb7 +0x32b:  call   08725c30 <__cxa_end_catch>
0815bebc +0x330:  jmp    0815bed3 <+0x347>
0815bebe +0x332:  mov    %edx,%ebx
0815bec0 +0x334:  mov    %eax,%esi
0815bec2 +0x336:  call   08725c30 <__cxa_end_catch>
0815bec7 +0x33b:  mov    %esi,%eax
0815bec9 +0x33d:  mov    %ebx,%edx
0815becb +0x33f:  mov    %eax,(%esp)
0815bece +0x342:  call   08ae3750 <_Unwind_Resume>
0815bed3 +0x347:  mov    %ebx,%eax
0815bed5 +0x349:  add    $0x8c,%esp
0815bedb +0x34f:  pop    %ebx
0815bedc +0x350:  pop    %esi
0815bedd +0x351:  pop    %edi
0815bede +0x352:  pop    %ebp
0815bedf +0x353:  ret
```

## 反编译 C

```c
// DBSelectCreateDnfEventInfo::dispatch @ 0x815bb8c

/* DBSelectCreateDnfEventInfo::dispatch(int, int, Stream*) */

undefined4 DBSelectCreateDnfEventInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_40;
  int local_3c;
  int local_38;
  cMyTrace local_34 [16];
  MySQL *local_24;
  
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
                    /* try { // try from 0815bbc5 to 0815be20 has its CatchHandler @ 0815be2b */
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_24 == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  MySQL::set_query(local_24,
                   "seLect rate, HOUR(CURTIME()), event_day FROM event_create_dnf_info WHERE occ_time=DATE_ADD(CURDATE(), INTERVAL HOUR(CURTIME()) HOUR)"
                  );
  cVar3 = MySQL::exec(local_24,true);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  iVar5 = MySQL::get_n_rows(local_24);
  if (iVar5 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_n_rows=0";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::fetch(local_24);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "fetch";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::get_int(local_24,0,&local_38);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_int 0";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::get_int(local_24,1,&local_3c);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_int 1";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  cVar3 = MySQL::get_int(local_24,2,&local_40);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "get_int 2";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  InterSelectCreateDnfEventInfo::makeRequest(local_38,local_3c,local_40);
  iVar2 = local_38;
  iVar1 = local_3c;
  iVar5 = local_40;
  cMyTrace::cMyTrace(local_34,"virtual bool DBSelectCreateDnfEventInfo::dispatch(int, int, Stream*)"
                     ,0x20d,0);
  cMyTrace::operator()
            (local_34,"[Taiwan, Event] select event_create_dnf_info. hour:%d rate:%d event_day:%d",
             iVar1,iVar2,iVar5);
  return 1;
}
```
