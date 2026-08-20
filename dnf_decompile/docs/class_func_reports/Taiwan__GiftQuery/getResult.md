# getResult

`_ZN6Taiwan9GiftQuery9getResultER5MySQL`

`Taiwan::GiftQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::GiftQuery` | `0x081748d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081748d6  _ZN6Taiwan9GiftQuery9getResultER5MySQL
#           Taiwan::GiftQuery::getResult(MySQL&)
# range [0x081748d6, 0x08174ac5]
081748d6 +0x000:  push   %ebp
081748d7 +0x001:  mov    %esp,%ebp
081748d9 +0x003:  push   %esi
081748da +0x004:  push   %ebx
081748db +0x005:  sub    $0x30,%esp
081748de +0x008:  movl   $"select @out_tran, @out_code",0x4(%esp)
081748e6 +0x010:  mov    0xc(%ebp),%eax
081748e9 +0x013:  mov    %eax,(%esp)
081748ec +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081748f1 +0x01b:  xor    $0x1,%eax
081748f4 +0x01e:  test   %al,%al
081748f6 +0x020:  je     08174924 <+0x4e>
081748f8 +0x022:  movl   $0x4,(%esp)
081748ff +0x029:  call   08725800 <__cxa_allocate_exception>
08174904 +0x02e:  mov    %eax,%edx
08174906 +0x030:  movl   $0x1bf,(%edx)
0817490c +0x036:  movl   $0x0,0x8(%esp)
08174914 +0x03e:  movl   $&_ZTIi,0x4(%esp)
0817491c +0x046:  mov    %eax,(%esp)
0817491f +0x049:  call   08724c50 <__cxa_throw>
08174924 +0x04e:  movl   $0x1,0x4(%esp)
0817492c +0x056:  mov    0xc(%ebp),%eax
0817492f +0x059:  mov    %eax,(%esp)
08174932 +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08174937 +0x061:  xor    $0x1,%eax
0817493a +0x064:  test   %al,%al
0817493c +0x066:  je     0817496a <+0x94>
0817493e +0x068:  movl   $0x4,(%esp)
08174945 +0x06f:  call   08725800 <__cxa_allocate_exception>
0817494a +0x074:  mov    %eax,%edx
0817494c +0x076:  movl   $0x1c2,(%edx)
08174952 +0x07c:  movl   $0x0,0x8(%esp)
0817495a +0x084:  movl   $&_ZTIi,0x4(%esp)
08174962 +0x08c:  mov    %eax,(%esp)
08174965 +0x08f:  call   08724c50 <__cxa_throw>
0817496a +0x094:  mov    0xc(%ebp),%eax
0817496d +0x097:  mov    %eax,(%esp)
08174970 +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08174975 +0x09f:  xor    $0x1,%eax
08174978 +0x0a2:  test   %al,%al
0817497a +0x0a4:  je     081749a8 <+0xd2>
0817497c +0x0a6:  movl   $0x4,(%esp)
08174983 +0x0ad:  call   08725800 <__cxa_allocate_exception>
08174988 +0x0b2:  mov    %eax,%edx
0817498a +0x0b4:  movl   $0x1c5,(%edx)
08174990 +0x0ba:  movl   $0x0,0x8(%esp)
08174998 +0x0c2:  movl   $&_ZTIi,0x4(%esp)
081749a0 +0x0ca:  mov    %eax,(%esp)
081749a3 +0x0cd:  call   08724c50 <__cxa_throw>
081749a8 +0x0d2:  mov    0x8(%ebp),%eax
081749ab +0x0d5:  add    $0x24,%eax
081749ae +0x0d8:  mov    %eax,0x8(%esp)
081749b2 +0x0dc:  movl   $0x0,0x4(%esp)
081749ba +0x0e4:  mov    0xc(%ebp),%eax
081749bd +0x0e7:  mov    %eax,(%esp)
081749c0 +0x0ea:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
081749c5 +0x0ef:  xor    $0x1,%eax
081749c8 +0x0f2:  test   %al,%al
081749ca +0x0f4:  je     081749f8 <+0x122>
081749cc +0x0f6:  movl   $0x4,(%esp)
081749d3 +0x0fd:  call   08725800 <__cxa_allocate_exception>
081749d8 +0x102:  mov    %eax,%edx
081749da +0x104:  movl   $0x1c8,(%edx)
081749e0 +0x10a:  movl   $0x0,0x8(%esp)
081749e8 +0x112:  movl   $&_ZTIi,0x4(%esp)
081749f0 +0x11a:  mov    %eax,(%esp)
081749f3 +0x11d:  call   08724c50 <__cxa_throw>
081749f8 +0x122:  mov    0x8(%ebp),%eax
081749fb +0x125:  add    $0x1c,%eax
081749fe +0x128:  mov    %eax,0x8(%esp)
08174a02 +0x12c:  movl   $0x1,0x4(%esp)
08174a0a +0x134:  mov    0xc(%ebp),%eax
08174a0d +0x137:  mov    %eax,(%esp)
08174a10 +0x13a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08174a15 +0x13f:  xor    $0x1,%eax
08174a18 +0x142:  test   %al,%al
08174a1a +0x144:  je     08174a48 <+0x172>
08174a1c +0x146:  movl   $0x4,(%esp)
08174a23 +0x14d:  call   08725800 <__cxa_allocate_exception>
08174a28 +0x152:  mov    %eax,%edx
08174a2a +0x154:  movl   $0x1cb,(%edx)
08174a30 +0x15a:  movl   $0x0,0x8(%esp)
08174a38 +0x162:  movl   $&_ZTIi,0x4(%esp)
08174a40 +0x16a:  mov    %eax,(%esp)
08174a43 +0x16d:  call   08724c50 <__cxa_throw>
08174a48 +0x172:  mov    $0x1,%ebx
08174a4d +0x177:  jmp    08174abd <+0x1e7>
08174a4f +0x179:  cmp    $0x1,%edx
08174a52 +0x17c:  je     08174a5c <+0x186>
08174a54 +0x17e:  mov    %eax,(%esp)
08174a57 +0x181:  call   08ae3750 <_Unwind_Resume>
08174a5c +0x186:  mov    %eax,(%esp)
08174a5f +0x189:  call   08725ce0 <__cxa_begin_catch>
08174a64 +0x18e:  mov    (%eax),%eax
08174a66 +0x190:  mov    %eax,-0xc(%ebp)
08174a69 +0x193:  mov    -0xc(%ebp),%eax
08174a6c +0x196:  mov    %eax,0x14(%esp)
08174a70 +0x19a:  movl   $"[Taiwan, Billing] GiftQuery Error Line:%u\n",0x10(%esp)
08174a78 +0x1a2:  movl   $0x1d1,0xc(%esp)
08174a80 +0x1aa:  movl   $&_ZZN6Taiwan9GiftQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
08174a88 +0x1b2:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08174a90 +0x1ba:  movl   $0x1,(%esp)
08174a97 +0x1c1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08174a9c +0x1c6:  mov    $0x0,%ebx
08174aa1 +0x1cb:  call   08725c30 <__cxa_end_catch>
08174aa6 +0x1d0:  jmp    08174abd <+0x1e7>
08174aa8 +0x1d2:  mov    %edx,%ebx
08174aaa +0x1d4:  mov    %eax,%esi
08174aac +0x1d6:  call   08725c30 <__cxa_end_catch>
08174ab1 +0x1db:  mov    %esi,%eax
08174ab3 +0x1dd:  mov    %ebx,%edx
08174ab5 +0x1df:  mov    %eax,(%esp)
08174ab8 +0x1e2:  call   08ae3750 <_Unwind_Resume>
08174abd +0x1e7:  mov    %ebx,%eax
08174abf +0x1e9:  add    $0x30,%esp
08174ac2 +0x1ec:  pop    %ebx
08174ac3 +0x1ed:  pop    %esi
08174ac4 +0x1ee:  pop    %ebp
08174ac5 +0x1ef:  ret
```

## 反编译 C

```c
// Taiwan::GiftQuery::getResult @ 0x81748d6

/* Taiwan::GiftQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::GiftQuery::getResult(GiftQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 081748ec to 08174a47 has its CatchHandler @ 08174a4f */
  cVar1 = MySQL::set_query(param_1,"select @out_tran, @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1bf;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1c2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1c5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_ulonglong(param_1,0,(ulonglong *)(this + 0x24));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1c8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 0x1c));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1cb;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
