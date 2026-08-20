# dispatch

`_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime` | `0x081853b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081853b2  _ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int, int, Stream*)
# range [0x081853b2, 0x08185573]
081853b2 +0x000:  push   %ebp
081853b3 +0x001:  mov    %esp,%ebp
081853b5 +0x003:  push   %esi
081853b6 +0x004:  push   %ebx
081853b7 +0x005:  sub    $0x30,%esp
081853ba +0x008:  mov    0x14(%ebp),%eax
081853bd +0x00b:  mov    %eax,(%esp)
081853c0 +0x00e:  call   08186f28 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x8f2>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x8f2
081853c5 +0x013:  mov    %eax,-0x14(%ebp)
081853c8 +0x016:  cmpl   $0x0,-0x14(%ebp)
081853cc +0x01a:  jne    08185404 <+0x52>
081853ce +0x01c:  movl   $"SigSetCharacCreateTime is null.",0x10(%esp)
081853d6 +0x024:  movl   $0x773,0xc(%esp)
081853de +0x02c:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
081853e6 +0x034:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
081853ee +0x03c:  movl   $0x1,(%esp)
081853f5 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081853fa +0x048:  mov    $0x0,%ebx
081853ff +0x04d:  jmp    0818556a <+0x1b8>
08185404 +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08185409 +0x057:  movl   $0x0,0x8(%esp)
08185411 +0x05f:  movl   $0x2,0x4(%esp)
08185419 +0x067:  mov    %eax,(%esp)
0818541c +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08185421 +0x06f:  mov    %eax,-0x10(%ebp)
08185424 +0x072:  cmpl   $0x0,-0x10(%ebp)
08185428 +0x076:  jne    08185456 <+0xa4>
0818542a +0x078:  movl   $0x4,(%esp)
08185431 +0x07f:  call   08725800 <__cxa_allocate_exception>
08185436 +0x084:  mov    %eax,%edx
08185438 +0x086:  movl   $"handle null",(%edx)
0818543e +0x08c:  movl   $0x0,0x8(%esp)
08185446 +0x094:  movl   $&_ZTIPKc,0x4(%esp)
0818544e +0x09c:  mov    %eax,(%esp)
08185451 +0x09f:  call   08724c50 <__cxa_throw>
08185456 +0x0a4:  mov    -0x14(%ebp),%eax
08185459 +0x0a7:  mov    (%eax),%edx
0818545b +0x0a9:  mov    -0x14(%ebp),%eax
0818545e +0x0ac:  mov    0x4(%eax),%eax
08185461 +0x0af:  mov    %edx,0xc(%esp)
08185465 +0x0b3:  mov    %eax,0x8(%esp)
08185469 +0x0b7:  movl   $" upDate charac_info set create_time = from_unixtime(%u)  where charac_no = %u ",0x4(%esp)
08185471 +0x0bf:  mov    -0x10(%ebp),%eax
08185474 +0x0c2:  mov    %eax,(%esp)
08185477 +0x0c5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818547c +0x0ca:  xor    $0x1,%eax
0818547f +0x0cd:  test   %al,%al
08185481 +0x0cf:  je     081854af <+0xfd>
08185483 +0x0d1:  movl   $0x4,(%esp)
0818548a +0x0d8:  call   08725800 <__cxa_allocate_exception>
0818548f +0x0dd:  mov    %eax,%edx
08185491 +0x0df:  movl   $"set_query",(%edx)
08185497 +0x0e5:  movl   $0x0,0x8(%esp)
0818549f +0x0ed:  movl   $&_ZTIPKc,0x4(%esp)
081854a7 +0x0f5:  mov    %eax,(%esp)
081854aa +0x0f8:  call   08724c50 <__cxa_throw>
081854af +0x0fd:  movl   $0x1,0x4(%esp)
081854b7 +0x105:  mov    -0x10(%ebp),%eax
081854ba +0x108:  mov    %eax,(%esp)
081854bd +0x10b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081854c2 +0x110:  xor    $0x1,%eax
081854c5 +0x113:  test   %al,%al
081854c7 +0x115:  je     08185565 <+0x1b3>
081854cd +0x11b:  movl   $0x4,(%esp)
081854d4 +0x122:  call   08725800 <__cxa_allocate_exception>
081854d9 +0x127:  mov    %eax,%edx
081854db +0x129:  movl   $"exec",(%edx)
081854e1 +0x12f:  movl   $0x0,0x8(%esp)
081854e9 +0x137:  movl   $&_ZTIPKc,0x4(%esp)
081854f1 +0x13f:  mov    %eax,(%esp)
081854f4 +0x142:  call   08724c50 <__cxa_throw>
081854f9 +0x147:  cmp    $0x1,%edx
081854fc +0x14a:  je     08185506 <+0x154>
081854fe +0x14c:  mov    %eax,(%esp)
08185501 +0x14f:  call   08ae3750 <_Unwind_Resume>
08185506 +0x154:  mov    %eax,(%esp)
08185509 +0x157:  call   08725ce0 <__cxa_begin_catch>
0818550e +0x15c:  mov    %eax,-0xc(%ebp)
08185511 +0x15f:  mov    -0xc(%ebp),%eax
08185514 +0x162:  mov    %eax,0x14(%esp)
08185518 +0x166:  movl   $"[SetCharacCreateTime] DB_DSP Error,  (error:%s)",0x10(%esp)
08185520 +0x16e:  movl   $0x788,0xc(%esp)
08185528 +0x176:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185530 +0x17e:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185538 +0x186:  movl   $0x1,(%esp)
0818553f +0x18d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185544 +0x192:  mov    $0x0,%ebx
08185549 +0x197:  call   08725c30 <__cxa_end_catch>
0818554e +0x19c:  jmp    0818556a <+0x1b8>
08185550 +0x19e:  mov    %edx,%ebx
08185552 +0x1a0:  mov    %eax,%esi
08185554 +0x1a2:  call   08725c30 <__cxa_end_catch>
08185559 +0x1a7:  mov    %esi,%eax
0818555b +0x1a9:  mov    %ebx,%edx
0818555d +0x1ab:  mov    %eax,(%esp)
08185560 +0x1ae:  call   08ae3750 <_Unwind_Resume>
08185565 +0x1b3:  mov    $0x1,%ebx
0818556a +0x1b8:  mov    %ebx,%eax
0818556c +0x1ba:  add    $0x30,%esp
0818556f +0x1bd:  pop    %ebx
08185570 +0x1be:  pop    %esi
08185571 +0x1bf:  pop    %ebp
08185572 +0x1c0:  ret
08185573 +0x1c1:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch @ 0x81853b2

/* ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigSetCharacCreateTime *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigSetCharacCreateTime>(in_stack_00000010);
  if (pSVar2 == (SigSetCharacCreateTime *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int, int, Stream*)"
               ,0x773,"SigSetCharacCreateTime is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0818541c to 081854f8 has its CatchHandler @ 081854f9 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             " upDate charac_info set create_time = from_unixtime(%u)  where charac_no = %u "
                             ,*(undefined4 *)(pSVar2 + 4),*(undefined4 *)pSVar2);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
