# dispatch

`_ZN18CheckStayTimeEvent8dispatchEiiP6Stream`

`CheckStayTimeEvent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `CheckStayTimeEvent` | `0x0815b362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b362  _ZN18CheckStayTimeEvent8dispatchEiiP6Stream
#           CheckStayTimeEvent::dispatch(int, int, Stream*)
# range [0x0815b362, 0x0815b6ab]
0815b362 +0x000:  push   %ebp
0815b363 +0x001:  mov    %esp,%ebp
0815b365 +0x003:  push   %esi
0815b366 +0x004:  push   %ebx
0815b367 +0x005:  sub    $0x30,%esp
0815b36a +0x008:  mov    0x14(%ebp),%eax
0815b36d +0x00b:  mov    %eax,(%esp)
0815b370 +0x00e:  call   0815ea22 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc96>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc96
0815b375 +0x013:  mov    %eax,-0x14(%ebp)
0815b378 +0x016:  cmpl   $0x0,-0x14(%ebp)
0815b37c +0x01a:  jne    0815b3aa <+0x48>
0815b37e +0x01c:  movl   $0x4,(%esp)
0815b385 +0x023:  call   08725800 <__cxa_allocate_exception>
0815b38a +0x028:  mov    %eax,%edx
0815b38c +0x02a:  movl   $"context null",(%edx)
0815b392 +0x030:  movl   $0x0,0x8(%esp)
0815b39a +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815b3a2 +0x040:  mov    %eax,(%esp)
0815b3a5 +0x043:  call   08724c50 <__cxa_throw>
0815b3aa +0x048:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815b3af +0x04d:  movl   $0x0,0x8(%esp)
0815b3b7 +0x055:  movl   $0x9,0x4(%esp)
0815b3bf +0x05d:  mov    %eax,(%esp)
0815b3c2 +0x060:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815b3c7 +0x065:  mov    %eax,-0x10(%ebp)
0815b3ca +0x068:  cmpl   $0x0,-0x10(%ebp)
0815b3ce +0x06c:  jne    0815b3fc <+0x9a>
0815b3d0 +0x06e:  movl   $0x4,(%esp)
0815b3d7 +0x075:  call   08725800 <__cxa_allocate_exception>
0815b3dc +0x07a:  mov    %eax,%edx
0815b3de +0x07c:  movl   $"handle null",(%edx)
0815b3e4 +0x082:  movl   $0x0,0x8(%esp)
0815b3ec +0x08a:  movl   $&_ZTIPKc,0x4(%esp)
0815b3f4 +0x092:  mov    %eax,(%esp)
0815b3f7 +0x095:  call   08724c50 <__cxa_throw>
0815b3fc +0x09a:  mov    -0x14(%ebp),%eax
0815b3ff +0x09d:  mov    (%eax),%eax
0815b401 +0x09f:  movl   $0x0,0x4(%esp)
0815b409 +0x0a7:  mov    %eax,(%esp)
0815b40c +0x0aa:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815b411 +0x0af:  mov    %eax,0x8(%esp)
0815b415 +0x0b3:  movl   $"seLect reward_flag from event_stay_time_charac where m_id=%s",0x4(%esp)
0815b41d +0x0bb:  mov    -0x10(%ebp),%eax
0815b420 +0x0be:  mov    %eax,(%esp)
0815b423 +0x0c1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815b428 +0x0c6:  movl   $0x1,0x4(%esp)
0815b430 +0x0ce:  mov    -0x10(%ebp),%eax
0815b433 +0x0d1:  mov    %eax,(%esp)
0815b436 +0x0d4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815b43b +0x0d9:  xor    $0x1,%eax
0815b43e +0x0dc:  test   %al,%al
0815b440 +0x0de:  je     0815b46e <+0x10c>
0815b442 +0x0e0:  movl   $0x4,(%esp)
0815b449 +0x0e7:  call   08725800 <__cxa_allocate_exception>
0815b44e +0x0ec:  mov    %eax,%edx
0815b450 +0x0ee:  movl   $"select_exec",(%edx)
0815b456 +0x0f4:  movl   $0x0,0x8(%esp)
0815b45e +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
0815b466 +0x104:  mov    %eax,(%esp)
0815b469 +0x107:  call   08724c50 <__cxa_throw>
0815b46e +0x10c:  mov    -0x10(%ebp),%eax
0815b471 +0x10f:  mov    %eax,(%esp)
0815b474 +0x112:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815b479 +0x117:  test   %eax,%eax
0815b47b +0x119:  sete   %al
0815b47e +0x11c:  test   %al,%al
0815b480 +0x11e:  je     0815b50f <+0x1ad>
0815b486 +0x124:  mov    -0x14(%ebp),%eax
0815b489 +0x127:  mov    (%eax),%eax
0815b48b +0x129:  movl   $0x0,0x4(%esp)
0815b493 +0x131:  mov    %eax,(%esp)
0815b496 +0x134:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815b49b +0x139:  mov    %eax,0x8(%esp)
0815b49f +0x13d:  movl   $"inSert into event_stay_time_charac values('%s', 1, 1, now())",0x4(%esp)
0815b4a7 +0x145:  mov    -0x10(%ebp),%eax
0815b4aa +0x148:  mov    %eax,(%esp)
0815b4ad +0x14b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815b4b2 +0x150:  movl   $0x1,0x4(%esp)
0815b4ba +0x158:  mov    -0x10(%ebp),%eax
0815b4bd +0x15b:  mov    %eax,(%esp)
0815b4c0 +0x15e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815b4c5 +0x163:  xor    $0x1,%eax
0815b4c8 +0x166:  test   %al,%al
0815b4ca +0x168:  je     0815b4f8 <+0x196>
0815b4cc +0x16a:  movl   $0x4,(%esp)
0815b4d3 +0x171:  call   08725800 <__cxa_allocate_exception>
0815b4d8 +0x176:  mov    %eax,%edx
0815b4da +0x178:  movl   $"insert_exec",(%edx)
0815b4e0 +0x17e:  movl   $0x0,0x8(%esp)
0815b4e8 +0x186:  movl   $&_ZTIPKc,0x4(%esp)
0815b4f0 +0x18e:  mov    %eax,(%esp)
0815b4f3 +0x191:  call   08724c50 <__cxa_throw>
0815b4f8 +0x196:  mov    0x10(%ebp),%eax
0815b4fb +0x199:  mov    %eax,0x4(%esp)
0815b4ff +0x19d:  mov    0x8(%ebp),%eax
0815b502 +0x1a0:  mov    %eax,(%esp)
0815b505 +0x1a3:  call   0815b6ac <_ZN18CheckStayTimeEvent16sendStayTimeDataEi>  ; CheckStayTimeEvent::sendStayTimeData(int)
0815b50a +0x1a8:  jmp    0815b630 <+0x2ce>
0815b50f +0x1ad:  mov    -0x10(%ebp),%eax
0815b512 +0x1b0:  mov    %eax,(%esp)
0815b515 +0x1b3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0815b51a +0x1b8:  xor    $0x1,%eax
0815b51d +0x1bb:  test   %al,%al
0815b51f +0x1bd:  je     0815b54d <+0x1eb>
0815b521 +0x1bf:  movl   $0x4,(%esp)
0815b528 +0x1c6:  call   08725800 <__cxa_allocate_exception>
0815b52d +0x1cb:  mov    %eax,%edx
0815b52f +0x1cd:  movl   $"fetch",(%edx)
0815b535 +0x1d3:  movl   $0x0,0x8(%esp)
0815b53d +0x1db:  movl   $&_ZTIPKc,0x4(%esp)
0815b545 +0x1e3:  mov    %eax,(%esp)
0815b548 +0x1e6:  call   08724c50 <__cxa_throw>
0815b54d +0x1eb:  movl   $0x0,-0x18(%ebp)
0815b554 +0x1f2:  lea    -0x18(%ebp),%eax
0815b557 +0x1f5:  mov    %eax,0x8(%esp)
0815b55b +0x1f9:  movl   $0x0,0x4(%esp)
0815b563 +0x201:  mov    -0x10(%ebp),%eax
0815b566 +0x204:  mov    %eax,(%esp)
0815b569 +0x207:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0815b56e +0x20c:  xor    $0x1,%eax
0815b571 +0x20f:  test   %al,%al
0815b573 +0x211:  je     0815b5a1 <+0x23f>
0815b575 +0x213:  movl   $0x4,(%esp)
0815b57c +0x21a:  call   08725800 <__cxa_allocate_exception>
0815b581 +0x21f:  mov    %eax,%edx
0815b583 +0x221:  movl   $"get_int",(%edx)
0815b589 +0x227:  movl   $0x0,0x8(%esp)
0815b591 +0x22f:  movl   $&_ZTIPKc,0x4(%esp)
0815b599 +0x237:  mov    %eax,(%esp)
0815b59c +0x23a:  call   08724c50 <__cxa_throw>
0815b5a1 +0x23f:  mov    -0x18(%ebp),%eax
0815b5a4 +0x242:  test   %eax,%eax
0815b5a6 +0x244:  jne    0815b630 <+0x2ce>
0815b5ac +0x24a:  mov    -0x14(%ebp),%eax
0815b5af +0x24d:  mov    (%eax),%eax
0815b5b1 +0x24f:  movl   $0x0,0x4(%esp)
0815b5b9 +0x257:  mov    %eax,(%esp)
0815b5bc +0x25a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815b5c1 +0x25f:  mov    %eax,0x8(%esp)
0815b5c5 +0x263:  movl   $"upDate event_stay_time_charac set reward_flag=1, reward_count=reward_count+1, mod_date=now() where m_id = %s",0x4(%esp)
0815b5cd +0x26b:  mov    -0x10(%ebp),%eax
0815b5d0 +0x26e:  mov    %eax,(%esp)
0815b5d3 +0x271:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815b5d8 +0x276:  movl   $0x1,0x4(%esp)
0815b5e0 +0x27e:  mov    -0x10(%ebp),%eax
0815b5e3 +0x281:  mov    %eax,(%esp)
0815b5e6 +0x284:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815b5eb +0x289:  xor    $0x1,%eax
0815b5ee +0x28c:  test   %al,%al
0815b5f0 +0x28e:  je     0815b61e <+0x2bc>
0815b5f2 +0x290:  movl   $0x4,(%esp)
0815b5f9 +0x297:  call   08725800 <__cxa_allocate_exception>
0815b5fe +0x29c:  mov    %eax,%edx
0815b600 +0x29e:  movl   $"update_exec",(%edx)
0815b606 +0x2a4:  movl   $0x0,0x8(%esp)
0815b60e +0x2ac:  movl   $&_ZTIPKc,0x4(%esp)
0815b616 +0x2b4:  mov    %eax,(%esp)
0815b619 +0x2b7:  call   08724c50 <__cxa_throw>
0815b61e +0x2bc:  mov    0x10(%ebp),%eax
0815b621 +0x2bf:  mov    %eax,0x4(%esp)
0815b625 +0x2c3:  mov    0x8(%ebp),%eax
0815b628 +0x2c6:  mov    %eax,(%esp)
0815b62b +0x2c9:  call   0815b6ac <_ZN18CheckStayTimeEvent16sendStayTimeDataEi>  ; CheckStayTimeEvent::sendStayTimeData(int)
0815b630 +0x2ce:  mov    $0x1,%ebx
0815b635 +0x2d3:  jmp    0815b6a3 <+0x341>
0815b637 +0x2d5:  cmp    $0x1,%edx
0815b63a +0x2d8:  je     0815b644 <+0x2e2>
0815b63c +0x2da:  mov    %eax,(%esp)
0815b63f +0x2dd:  call   08ae3750 <_Unwind_Resume>
0815b644 +0x2e2:  mov    %eax,(%esp)
0815b647 +0x2e5:  call   08725ce0 <__cxa_begin_catch>
0815b64c +0x2ea:  mov    %eax,-0xc(%ebp)
0815b64f +0x2ed:  mov    -0xc(%ebp),%eax
0815b652 +0x2f0:  mov    %eax,0x14(%esp)
0815b656 +0x2f4:  movl   $"[Taiwan, Event] select event_stay_time_charac. (error:%s)",0x10(%esp)
0815b65e +0x2fc:  movl   $0x18a,0xc(%esp)
0815b666 +0x304:  movl   $&_ZZN18CheckStayTimeEvent8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815b66e +0x30c:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815b676 +0x314:  movl   $0x1,(%esp)
0815b67d +0x31b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815b682 +0x320:  mov    $0x0,%ebx
0815b687 +0x325:  call   08725c30 <__cxa_end_catch>
0815b68c +0x32a:  jmp    0815b6a3 <+0x341>
0815b68e +0x32c:  mov    %edx,%ebx
0815b690 +0x32e:  mov    %eax,%esi
0815b692 +0x330:  call   08725c30 <__cxa_end_catch>
0815b697 +0x335:  mov    %esi,%eax
0815b699 +0x337:  mov    %ebx,%edx
0815b69b +0x339:  mov    %eax,(%esp)
0815b69e +0x33c:  call   08ae3750 <_Unwind_Resume>
0815b6a3 +0x341:  mov    %ebx,%eax
0815b6a5 +0x343:  add    $0x30,%esp
0815b6a8 +0x346:  pop    %ebx
0815b6a9 +0x347:  pop    %esi
0815b6aa +0x348:  pop    %ebp
0815b6ab +0x349:  ret
```

## 反编译 C

```c
// CheckStayTimeEvent::dispatch @ 0x815b362

/* CheckStayTimeEvent::dispatch(int, int, Stream*) */

undefined4 __thiscall
CheckStayTimeEvent::dispatch(CheckStayTimeEvent *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_1c;
  SigStayTimeEvent *local_18;
  MySQL *local_14;
  
                    /* try { // try from 0815b370 to 0815b62f has its CatchHandler @ 0815b637 */
  local_18 = Stream::GetOutBuffer<Taiwan::SigStayTimeEvent>(param_3);
  if (local_18 == (SigStayTimeEvent *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,"seLect reward_flag from event_stay_time_charac where m_id=%s",uVar3);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 == 0) {
    uVar3 = NumberToString(*(uint *)local_18,0);
    MySQL::set_query(local_14,"inSert into event_stay_time_charac values(\'%s\', 1, 1, now())",uVar3
                    );
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    sendStayTimeData(this,param_2);
  }
  else {
    cVar1 = MySQL::fetch(local_14);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    local_1c = 0;
    cVar1 = MySQL::get_int(local_14,0,&local_1c);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "get_int";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    if (local_1c == 0) {
      uVar3 = NumberToString(*(uint *)local_18,0);
      MySQL::set_query(local_14,
                       "upDate event_stay_time_charac set reward_flag=1, reward_count=reward_count+1, mod_date=now() where m_id = %s"
                       ,uVar3);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "update_exec";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      sendStayTimeData(this,param_2);
    }
  }
  return 1;
}
```
