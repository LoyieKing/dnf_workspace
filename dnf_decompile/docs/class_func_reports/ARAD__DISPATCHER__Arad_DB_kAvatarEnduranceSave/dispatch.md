# dispatch

`_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave` | `0x081862d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081862d0  _ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int, int, Stream*)
# range [0x081862d0, 0x08186491]
081862d0 +0x000:  push   %ebp
081862d1 +0x001:  mov    %esp,%ebp
081862d3 +0x003:  push   %esi
081862d4 +0x004:  push   %ebx
081862d5 +0x005:  sub    $0x30,%esp
081862d8 +0x008:  mov    0x14(%ebp),%eax
081862db +0x00b:  mov    %eax,(%esp)
081862de +0x00e:  call   081870cc <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0xa96>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0xa96
081862e3 +0x013:  mov    %eax,-0x14(%ebp)
081862e6 +0x016:  cmpl   $0x0,-0x14(%ebp)
081862ea +0x01a:  jne    08186322 <+0x52>
081862ec +0x01c:  movl   $"SigAradAvatarEnduranceSave is null.",0x10(%esp)
081862f4 +0x024:  movl   $0x876,0xc(%esp)
081862fc +0x02c:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08186304 +0x034:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
0818630c +0x03c:  movl   $0x1,(%esp)
08186313 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08186318 +0x048:  mov    $0x0,%ebx
0818631d +0x04d:  jmp    08186488 <+0x1b8>
08186322 +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08186327 +0x057:  movl   $0x0,0x8(%esp)
0818632f +0x05f:  movl   $0x3,0x4(%esp)
08186337 +0x067:  mov    %eax,(%esp)
0818633a +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818633f +0x06f:  mov    %eax,-0x10(%ebp)
08186342 +0x072:  cmpl   $0x0,-0x10(%ebp)
08186346 +0x076:  jne    08186374 <+0xa4>
08186348 +0x078:  movl   $0x4,(%esp)
0818634f +0x07f:  call   08725800 <__cxa_allocate_exception>
08186354 +0x084:  mov    %eax,%edx
08186356 +0x086:  movl   $"handle null",(%edx)
0818635c +0x08c:  movl   $0x0,0x8(%esp)
08186364 +0x094:  movl   $&_ZTIPKc,0x4(%esp)
0818636c +0x09c:  mov    %eax,(%esp)
0818636f +0x09f:  call   08724c50 <__cxa_throw>
08186374 +0x0a4:  mov    -0x14(%ebp),%eax
08186377 +0x0a7:  mov    (%eax),%edx
08186379 +0x0a9:  mov    -0x14(%ebp),%eax
0818637c +0x0ac:  mov    0x4(%eax),%eax
0818637f +0x0af:  mov    %edx,0xc(%esp)
08186383 +0x0b3:  mov    %eax,0x8(%esp)
08186387 +0x0b7:  movl   $"upDate user_items set emblem_endurance=%d where ui_id=%d",0x4(%esp)
0818638f +0x0bf:  mov    -0x10(%ebp),%eax
08186392 +0x0c2:  mov    %eax,(%esp)
08186395 +0x0c5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818639a +0x0ca:  xor    $0x1,%eax
0818639d +0x0cd:  test   %al,%al
0818639f +0x0cf:  je     081863cd <+0xfd>
081863a1 +0x0d1:  movl   $0x4,(%esp)
081863a8 +0x0d8:  call   08725800 <__cxa_allocate_exception>
081863ad +0x0dd:  mov    %eax,%edx
081863af +0x0df:  movl   $"set_query",(%edx)
081863b5 +0x0e5:  movl   $0x0,0x8(%esp)
081863bd +0x0ed:  movl   $&_ZTIPKc,0x4(%esp)
081863c5 +0x0f5:  mov    %eax,(%esp)
081863c8 +0x0f8:  call   08724c50 <__cxa_throw>
081863cd +0x0fd:  movl   $0x1,0x4(%esp)
081863d5 +0x105:  mov    -0x10(%ebp),%eax
081863d8 +0x108:  mov    %eax,(%esp)
081863db +0x10b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081863e0 +0x110:  xor    $0x1,%eax
081863e3 +0x113:  test   %al,%al
081863e5 +0x115:  je     08186483 <+0x1b3>
081863eb +0x11b:  movl   $0x4,(%esp)
081863f2 +0x122:  call   08725800 <__cxa_allocate_exception>
081863f7 +0x127:  mov    %eax,%edx
081863f9 +0x129:  movl   $"exec",(%edx)
081863ff +0x12f:  movl   $0x0,0x8(%esp)
08186407 +0x137:  movl   $&_ZTIPKc,0x4(%esp)
0818640f +0x13f:  mov    %eax,(%esp)
08186412 +0x142:  call   08724c50 <__cxa_throw>
08186417 +0x147:  cmp    $0x1,%edx
0818641a +0x14a:  je     08186424 <+0x154>
0818641c +0x14c:  mov    %eax,(%esp)
0818641f +0x14f:  call   08ae3750 <_Unwind_Resume>
08186424 +0x154:  mov    %eax,(%esp)
08186427 +0x157:  call   08725ce0 <__cxa_begin_catch>
0818642c +0x15c:  mov    %eax,-0xc(%ebp)
0818642f +0x15f:  mov    -0xc(%ebp),%eax
08186432 +0x162:  mov    %eax,0x14(%esp)
08186436 +0x166:  movl   $"[SigAradAvatarEnduranceSave] DB_DSP Error,  (error:%s)",0x10(%esp)
0818643e +0x16e:  movl   $0x88a,0xc(%esp)
08186446 +0x176:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818644e +0x17e:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08186456 +0x186:  movl   $0x1,(%esp)
0818645d +0x18d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08186462 +0x192:  mov    $0x0,%ebx
08186467 +0x197:  call   08725c30 <__cxa_end_catch>
0818646c +0x19c:  jmp    08186488 <+0x1b8>
0818646e +0x19e:  mov    %edx,%ebx
08186470 +0x1a0:  mov    %eax,%esi
08186472 +0x1a2:  call   08725c30 <__cxa_end_catch>
08186477 +0x1a7:  mov    %esi,%eax
08186479 +0x1a9:  mov    %ebx,%edx
0818647b +0x1ab:  mov    %eax,(%esp)
0818647e +0x1ae:  call   08ae3750 <_Unwind_Resume>
08186483 +0x1b3:  mov    $0x1,%ebx
08186488 +0x1b8:  mov    %ebx,%eax
0818648a +0x1ba:  add    $0x30,%esp
0818648d +0x1bd:  pop    %ebx
0818648e +0x1be:  pop    %esi
0818648f +0x1bf:  pop    %ebp
08186490 +0x1c0:  ret
08186491 +0x1c1:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch @ 0x81862d0

/* ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigAradAvatarEnduranceSave *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigAradAvatarEnduranceSave>(in_stack_00000010);
  if (pSVar2 == (SigAradAvatarEnduranceSave *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int, int, Stream*)"
               ,0x876,"SigAradAvatarEnduranceSave is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0818633a to 08186416 has its CatchHandler @ 08186417 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,"upDate user_items set emblem_endurance=%d where ui_id=%d",
                             *(undefined4 *)(pSVar2 + 4),*(undefined4 *)pSVar2);
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
