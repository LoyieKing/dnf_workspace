# dispatch

`_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid` | `0x08186492` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08186492  _ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch(int, int, Stream*)
# range [0x08186492, 0x081865f5]
08186492 +0x000:  push   %ebp
08186493 +0x001:  mov    %esp,%ebp
08186495 +0x003:  push   %esi
08186496 +0x004:  push   %ebx
08186497 +0x005:  sub    $0x30,%esp
0818649a +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818649f +0x00d:  movl   $0x0,0x8(%esp)
081864a7 +0x015:  movl   $0x1,0x4(%esp)
081864af +0x01d:  mov    %eax,(%esp)
081864b2 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081864b7 +0x025:  mov    %eax,-0x10(%ebp)
081864ba +0x028:  cmpl   $0x0,-0x10(%ebp)
081864be +0x02c:  jne    081864ec <+0x5a>
081864c0 +0x02e:  movl   $0x4,(%esp)
081864c7 +0x035:  call   08725800 <__cxa_allocate_exception>
081864cc +0x03a:  mov    %eax,%edx
081864ce +0x03c:  movl   $"handle null",(%edx)
081864d4 +0x042:  movl   $0x0,0x8(%esp)
081864dc +0x04a:  movl   $&_ZTIPKc,0x4(%esp)
081864e4 +0x052:  mov    %eax,(%esp)
081864e7 +0x055:  call   08724c50 <__cxa_throw>
081864ec +0x05a:  movl   $"truncate limit_create_character",0x4(%esp)
081864f4 +0x062:  mov    -0x10(%ebp),%eax
081864f7 +0x065:  mov    %eax,(%esp)
081864fa +0x068:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081864ff +0x06d:  xor    $0x1,%eax
08186502 +0x070:  test   %al,%al
08186504 +0x072:  je     08186532 <+0xa0>
08186506 +0x074:  movl   $0x4,(%esp)
0818650d +0x07b:  call   08725800 <__cxa_allocate_exception>
08186512 +0x080:  mov    %eax,%edx
08186514 +0x082:  movl   $"set_query",(%edx)
0818651a +0x088:  movl   $0x0,0x8(%esp)
08186522 +0x090:  movl   $&_ZTIPKc,0x4(%esp)
0818652a +0x098:  mov    %eax,(%esp)
0818652d +0x09b:  call   08724c50 <__cxa_throw>
08186532 +0x0a0:  movl   $0x1,0x4(%esp)
0818653a +0x0a8:  mov    -0x10(%ebp),%eax
0818653d +0x0ab:  mov    %eax,(%esp)
08186540 +0x0ae:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08186545 +0x0b3:  xor    $0x1,%eax
08186548 +0x0b6:  test   %al,%al
0818654a +0x0b8:  je     081865e8 <+0x156>
08186550 +0x0be:  movl   $0x4,(%esp)
08186557 +0x0c5:  call   08725800 <__cxa_allocate_exception>
0818655c +0x0ca:  mov    %eax,%edx
0818655e +0x0cc:  movl   $"exec",(%edx)
08186564 +0x0d2:  movl   $0x0,0x8(%esp)
0818656c +0x0da:  movl   $&_ZTIPKc,0x4(%esp)
08186574 +0x0e2:  mov    %eax,(%esp)
08186577 +0x0e5:  call   08724c50 <__cxa_throw>
0818657c +0x0ea:  cmp    $0x1,%edx
0818657f +0x0ed:  je     08186589 <+0xf7>
08186581 +0x0ef:  mov    %eax,(%esp)
08186584 +0x0f2:  call   08ae3750 <_Unwind_Resume>
08186589 +0x0f7:  mov    %eax,(%esp)
0818658c +0x0fa:  call   08725ce0 <__cxa_begin_catch>
08186591 +0x0ff:  mov    %eax,-0xc(%ebp)
08186594 +0x102:  mov    -0xc(%ebp),%eax
08186597 +0x105:  mov    %eax,0x14(%esp)
0818659b +0x109:  movl   $"[ResetLimitedCreateCharacPerMid] DB_DSP Error,  (error:%s)",0x10(%esp)
081865a3 +0x111:  movl   $0x8e1,0xc(%esp)
081865ab +0x119:  movl   $&_ZZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
081865b3 +0x121:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
081865bb +0x129:  movl   $0x1,(%esp)
081865c2 +0x130:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081865c7 +0x135:  mov    $0x0,%ebx
081865cc +0x13a:  call   08725c30 <__cxa_end_catch>
081865d1 +0x13f:  jmp    081865ed <+0x15b>
081865d3 +0x141:  mov    %edx,%ebx
081865d5 +0x143:  mov    %eax,%esi
081865d7 +0x145:  call   08725c30 <__cxa_end_catch>
081865dc +0x14a:  mov    %esi,%eax
081865de +0x14c:  mov    %ebx,%edx
081865e0 +0x14e:  mov    %eax,(%esp)
081865e3 +0x151:  call   08ae3750 <_Unwind_Resume>
081865e8 +0x156:  mov    $0x1,%ebx
081865ed +0x15b:  mov    %ebx,%eax
081865ef +0x15d:  add    $0x30,%esp
081865f2 +0x160:  pop    %ebx
081865f3 +0x161:  pop    %esi
081865f4 +0x162:  pop    %ebp
081865f5 +0x163:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch @ 0x8186492

/* ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch
          (int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  undefined4 *puVar2;
  
                    /* try { // try from 081864b2 to 0818657b has its CatchHandler @ 0818657c */
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (this == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::set_query(this,"truncate limit_create_character");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::exec(this,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}
```
