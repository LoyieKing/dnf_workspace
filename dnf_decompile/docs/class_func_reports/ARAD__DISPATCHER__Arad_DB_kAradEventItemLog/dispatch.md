# dispatch

`_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kAradEventItemLog` | `0x081851dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081851dc  _ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int, int, Stream*)
# range [0x081851dc, 0x081853b1]
081851dc +0x000:  push   %ebp
081851dd +0x001:  mov    %esp,%ebp
081851df +0x003:  push   %esi
081851e0 +0x004:  push   %ebx
081851e1 +0x005:  sub    $0x30,%esp
081851e4 +0x008:  mov    0x14(%ebp),%eax
081851e7 +0x00b:  mov    %eax,(%esp)
081851ea +0x00e:  call   08186ed4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x89e>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x89e
081851ef +0x013:  mov    %eax,-0x14(%ebp)
081851f2 +0x016:  cmpl   $0x0,-0x14(%ebp)
081851f6 +0x01a:  jne    0818522e <+0x52>
081851f8 +0x01c:  movl   $"EVENT ITEM LOG, SigAradEventItemLog is null.",0x10(%esp)
08185200 +0x024:  movl   $0x643,0xc(%esp)
08185208 +0x02c:  movl   $&_ZZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185210 +0x034:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185218 +0x03c:  movl   $0x1,(%esp)
0818521f +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185224 +0x048:  mov    $0x0,%ebx
08185229 +0x04d:  jmp    081853a8 <+0x1cc>
0818522e +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08185233 +0x057:  movl   $0x0,0x8(%esp)
0818523b +0x05f:  movl   $0x4,0x4(%esp)
08185243 +0x067:  mov    %eax,(%esp)
08185246 +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818524b +0x06f:  mov    %eax,-0x10(%ebp)
0818524e +0x072:  cmpl   $0x0,-0x10(%ebp)
08185252 +0x076:  jne    08185280 <+0xa4>
08185254 +0x078:  movl   $0x4,(%esp)
0818525b +0x07f:  call   08725800 <__cxa_allocate_exception>
08185260 +0x084:  mov    %eax,%edx
08185262 +0x086:  movl   $"handle null",(%edx)
08185268 +0x08c:  movl   $0x0,0x8(%esp)
08185270 +0x094:  movl   $&_ZTIPKc,0x4(%esp)
08185278 +0x09c:  mov    %eax,(%esp)
0818527b +0x09f:  call   08724c50 <__cxa_throw>
08185280 +0x0a4:  mov    -0x14(%ebp),%eax
08185283 +0x0a7:  mov    0x4(%eax),%ebx
08185286 +0x0aa:  mov    -0x14(%ebp),%eax
08185289 +0x0ad:  mov    (%eax),%ecx
0818528b +0x0af:  mov    -0x14(%ebp),%eax
0818528e +0x0b2:  mov    0xc(%eax),%edx
08185291 +0x0b5:  mov    -0x14(%ebp),%eax
08185294 +0x0b8:  mov    0x8(%eax),%eax
08185297 +0x0bb:  mov    %ebx,0x14(%esp)
0818529b +0x0bf:  mov    %ecx,0x10(%esp)
0818529f +0x0c3:  mov    %edx,0xc(%esp)
081852a3 +0x0c7:  mov    %eax,0x8(%esp)
081852a7 +0x0cb:  movl   $" inSert into log_arad_event_stat ( occ_time, m_id, charac_no, item_id, item_cnt )  values ( now(), %u, %u, %u, %d ) ",0x4(%esp)
081852af +0x0d3:  mov    -0x10(%ebp),%eax
081852b2 +0x0d6:  mov    %eax,(%esp)
081852b5 +0x0d9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081852ba +0x0de:  xor    $0x1,%eax
081852bd +0x0e1:  test   %al,%al
081852bf +0x0e3:  je     081852ed <+0x111>
081852c1 +0x0e5:  movl   $0x4,(%esp)
081852c8 +0x0ec:  call   08725800 <__cxa_allocate_exception>
081852cd +0x0f1:  mov    %eax,%edx
081852cf +0x0f3:  movl   $"set_query",(%edx)
081852d5 +0x0f9:  movl   $0x0,0x8(%esp)
081852dd +0x101:  movl   $&_ZTIPKc,0x4(%esp)
081852e5 +0x109:  mov    %eax,(%esp)
081852e8 +0x10c:  call   08724c50 <__cxa_throw>
081852ed +0x111:  movl   $0x1,0x4(%esp)
081852f5 +0x119:  mov    -0x10(%ebp),%eax
081852f8 +0x11c:  mov    %eax,(%esp)
081852fb +0x11f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08185300 +0x124:  xor    $0x1,%eax
08185303 +0x127:  test   %al,%al
08185305 +0x129:  je     081853a3 <+0x1c7>
0818530b +0x12f:  movl   $0x4,(%esp)
08185312 +0x136:  call   08725800 <__cxa_allocate_exception>
08185317 +0x13b:  mov    %eax,%edx
08185319 +0x13d:  movl   $"exec",(%edx)
0818531f +0x143:  movl   $0x0,0x8(%esp)
08185327 +0x14b:  movl   $&_ZTIPKc,0x4(%esp)
0818532f +0x153:  mov    %eax,(%esp)
08185332 +0x156:  call   08724c50 <__cxa_throw>
08185337 +0x15b:  cmp    $0x1,%edx
0818533a +0x15e:  je     08185344 <+0x168>
0818533c +0x160:  mov    %eax,(%esp)
0818533f +0x163:  call   08ae3750 <_Unwind_Resume>
08185344 +0x168:  mov    %eax,(%esp)
08185347 +0x16b:  call   08725ce0 <__cxa_begin_catch>
0818534c +0x170:  mov    %eax,-0xc(%ebp)
0818534f +0x173:  mov    -0xc(%ebp),%eax
08185352 +0x176:  mov    %eax,0x14(%esp)
08185356 +0x17a:  movl   $"[EVENT_LOG] DB_DSP Error, insert log to log_arad_event_stat. (error:%s)",0x10(%esp)
0818535e +0x182:  movl   $0x661,0xc(%esp)
08185366 +0x18a:  movl   $&_ZZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818536e +0x192:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185376 +0x19a:  movl   $0x1,(%esp)
0818537d +0x1a1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185382 +0x1a6:  mov    $0x0,%ebx
08185387 +0x1ab:  call   08725c30 <__cxa_end_catch>
0818538c +0x1b0:  jmp    081853a8 <+0x1cc>
0818538e +0x1b2:  mov    %edx,%ebx
08185390 +0x1b4:  mov    %eax,%esi
08185392 +0x1b6:  call   08725c30 <__cxa_end_catch>
08185397 +0x1bb:  mov    %esi,%eax
08185399 +0x1bd:  mov    %ebx,%edx
0818539b +0x1bf:  mov    %eax,(%esp)
0818539e +0x1c2:  call   08ae3750 <_Unwind_Resume>
081853a3 +0x1c7:  mov    $0x1,%ebx
081853a8 +0x1cc:  mov    %ebx,%eax
081853aa +0x1ce:  add    $0x30,%esp
081853ad +0x1d1:  pop    %ebx
081853ae +0x1d2:  pop    %esi
081853af +0x1d3:  pop    %ebp
081853b0 +0x1d4:  ret
081853b1 +0x1d5:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch @ 0x81851dc

/* ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigAradEventItemLog *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigAradEventItemLog>(in_stack_00000010);
  if (pSVar2 == (SigAradEventItemLog *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int, int, Stream*)"
               ,0x643,"EVENT ITEM LOG, SigAradEventItemLog is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 08185246 to 08185336 has its CatchHandler @ 08185337 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             " inSert into log_arad_event_stat ( occ_time, m_id, charac_no, item_id, item_cnt )  values ( now(), %u, %u, %u, %d ) "
                             ,*(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),
                             *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
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
