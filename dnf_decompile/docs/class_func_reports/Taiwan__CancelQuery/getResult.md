# getResult

`_ZN6Taiwan11CancelQuery9getResultER5MySQL`

`Taiwan::CancelQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CancelQuery` | `0x08174d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174d60  _ZN6Taiwan11CancelQuery9getResultER5MySQL
#           Taiwan::CancelQuery::getResult(MySQL&)
# range [0x08174d60, 0x08174efd]
08174d60 +0x000:  push   %ebp
08174d61 +0x001:  mov    %esp,%ebp
08174d63 +0x003:  push   %esi
08174d64 +0x004:  push   %ebx
08174d65 +0x005:  sub    $0x30,%esp
08174d68 +0x008:  movl   $"select @out_code",0x4(%esp)
08174d70 +0x010:  mov    0xc(%ebp),%eax
08174d73 +0x013:  mov    %eax,(%esp)
08174d76 +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174d7b +0x01b:  xor    $0x1,%eax
08174d7e +0x01e:  test   %al,%al
08174d80 +0x020:  je     08174dae <+0x4e>
08174d82 +0x022:  movl   $0x4,(%esp)
08174d89 +0x029:  call   08725800 <__cxa_allocate_exception>
08174d8e +0x02e:  mov    %eax,%edx
08174d90 +0x030:  movl   $0x21a,(%edx)
08174d96 +0x036:  movl   $0x0,0x8(%esp)
08174d9e +0x03e:  movl   $&_ZTIi,0x4(%esp)
08174da6 +0x046:  mov    %eax,(%esp)
08174da9 +0x049:  call   08724c50 <__cxa_throw>
08174dae +0x04e:  movl   $0x1,0x4(%esp)
08174db6 +0x056:  mov    0xc(%ebp),%eax
08174db9 +0x059:  mov    %eax,(%esp)
08174dbc +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08174dc1 +0x061:  xor    $0x1,%eax
08174dc4 +0x064:  test   %al,%al
08174dc6 +0x066:  je     08174df4 <+0x94>
08174dc8 +0x068:  movl   $0x4,(%esp)
08174dcf +0x06f:  call   08725800 <__cxa_allocate_exception>
08174dd4 +0x074:  mov    %eax,%edx
08174dd6 +0x076:  movl   $0x21d,(%edx)
08174ddc +0x07c:  movl   $0x0,0x8(%esp)
08174de4 +0x084:  movl   $&_ZTIi,0x4(%esp)
08174dec +0x08c:  mov    %eax,(%esp)
08174def +0x08f:  call   08724c50 <__cxa_throw>
08174df4 +0x094:  mov    0xc(%ebp),%eax
08174df7 +0x097:  mov    %eax,(%esp)
08174dfa +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08174dff +0x09f:  xor    $0x1,%eax
08174e02 +0x0a2:  test   %al,%al
08174e04 +0x0a4:  je     08174e32 <+0xd2>
08174e06 +0x0a6:  movl   $0x4,(%esp)
08174e0d +0x0ad:  call   08725800 <__cxa_allocate_exception>
08174e12 +0x0b2:  mov    %eax,%edx
08174e14 +0x0b4:  movl   $0x220,(%edx)
08174e1a +0x0ba:  movl   $0x0,0x8(%esp)
08174e22 +0x0c2:  movl   $&_ZTIi,0x4(%esp)
08174e2a +0x0ca:  mov    %eax,(%esp)
08174e2d +0x0cd:  call   08724c50 <__cxa_throw>
08174e32 +0x0d2:  mov    0x8(%ebp),%eax
08174e35 +0x0d5:  mov    %eax,0x8(%esp)
08174e39 +0x0d9:  movl   $0x0,0x4(%esp)
08174e41 +0x0e1:  mov    0xc(%ebp),%eax
08174e44 +0x0e4:  mov    %eax,(%esp)
08174e47 +0x0e7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08174e4c +0x0ec:  xor    $0x1,%eax
08174e4f +0x0ef:  test   %al,%al
08174e51 +0x0f1:  je     08174e7f <+0x11f>
08174e53 +0x0f3:  movl   $0x4,(%esp)
08174e5a +0x0fa:  call   08725800 <__cxa_allocate_exception>
08174e5f +0x0ff:  mov    %eax,%edx
08174e61 +0x101:  movl   $0x223,(%edx)
08174e67 +0x107:  movl   $0x0,0x8(%esp)
08174e6f +0x10f:  movl   $&_ZTIi,0x4(%esp)
08174e77 +0x117:  mov    %eax,(%esp)
08174e7a +0x11a:  call   08724c50 <__cxa_throw>
08174e7f +0x11f:  mov    $0x1,%ebx
08174e84 +0x124:  jmp    08174ef4 <+0x194>
08174e86 +0x126:  cmp    $0x1,%edx
08174e89 +0x129:  je     08174e93 <+0x133>
08174e8b +0x12b:  mov    %eax,(%esp)
08174e8e +0x12e:  call   08ae3750 <_Unwind_Resume>
08174e93 +0x133:  mov    %eax,(%esp)
08174e96 +0x136:  call   08725ce0 <__cxa_begin_catch>
08174e9b +0x13b:  mov    (%eax),%eax
08174e9d +0x13d:  mov    %eax,-0xc(%ebp)
08174ea0 +0x140:  mov    -0xc(%ebp),%eax
08174ea3 +0x143:  mov    %eax,0x14(%esp)
08174ea7 +0x147:  movl   $"[Taiwan, Billing] CancelQuery Error Line:%u\n",0x10(%esp)
08174eaf +0x14f:  movl   $0x229,0xc(%esp)
08174eb7 +0x157:  movl   $&_ZZN6Taiwan11CancelQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
08174ebf +0x15f:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08174ec7 +0x167:  movl   $0x1,(%esp)
08174ece +0x16e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08174ed3 +0x173:  mov    $0x0,%ebx
08174ed8 +0x178:  call   08725c30 <__cxa_end_catch>
08174edd +0x17d:  jmp    08174ef4 <+0x194>
08174edf +0x17f:  mov    %edx,%ebx
08174ee1 +0x181:  mov    %eax,%esi
08174ee3 +0x183:  call   08725c30 <__cxa_end_catch>
08174ee8 +0x188:  mov    %esi,%eax
08174eea +0x18a:  mov    %ebx,%edx
08174eec +0x18c:  mov    %eax,(%esp)
08174eef +0x18f:  call   08ae3750 <_Unwind_Resume>
08174ef4 +0x194:  mov    %ebx,%eax
08174ef6 +0x196:  add    $0x30,%esp
08174ef9 +0x199:  pop    %ebx
08174efa +0x19a:  pop    %esi
08174efb +0x19b:  pop    %ebp
08174efc +0x19c:  ret
08174efd +0x19d:  nop
```

## 反编译 C

```c
// Taiwan::CancelQuery::getResult @ 0x8174d60

/* Taiwan::CancelQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::CancelQuery::getResult(CancelQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174d76 to 08174e7e has its CatchHandler @ 08174e86 */
  cVar1 = MySQL::set_query(param_1,"select @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x21a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x21d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x220;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(int *)this);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x223;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
