# getResult

`_ZN6Taiwan12ConfirmQuery9getResultER5MySQL`

`Taiwan::ConfirmQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ConfirmQuery` | `0x08174b44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174b44  _ZN6Taiwan12ConfirmQuery9getResultER5MySQL
#           Taiwan::ConfirmQuery::getResult(MySQL&)
# range [0x08174b44, 0x08174ce1]
08174b44 +0x000:  push   %ebp
08174b45 +0x001:  mov    %esp,%ebp
08174b47 +0x003:  push   %esi
08174b48 +0x004:  push   %ebx
08174b49 +0x005:  sub    $0x30,%esp
08174b4c +0x008:  movl   $"select @out_code",0x4(%esp)
08174b54 +0x010:  mov    0xc(%ebp),%eax
08174b57 +0x013:  mov    %eax,(%esp)
08174b5a +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174b5f +0x01b:  xor    $0x1,%eax
08174b62 +0x01e:  test   %al,%al
08174b64 +0x020:  je     08174b92 <+0x4e>
08174b66 +0x022:  movl   $0x4,(%esp)
08174b6d +0x029:  call   08725800 <__cxa_allocate_exception>
08174b72 +0x02e:  mov    %eax,%edx
08174b74 +0x030:  movl   $0x1ee,(%edx)
08174b7a +0x036:  movl   $0x0,0x8(%esp)
08174b82 +0x03e:  movl   $&_ZTIi,0x4(%esp)
08174b8a +0x046:  mov    %eax,(%esp)
08174b8d +0x049:  call   08724c50 <__cxa_throw>
08174b92 +0x04e:  movl   $0x1,0x4(%esp)
08174b9a +0x056:  mov    0xc(%ebp),%eax
08174b9d +0x059:  mov    %eax,(%esp)
08174ba0 +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08174ba5 +0x061:  xor    $0x1,%eax
08174ba8 +0x064:  test   %al,%al
08174baa +0x066:  je     08174bd8 <+0x94>
08174bac +0x068:  movl   $0x4,(%esp)
08174bb3 +0x06f:  call   08725800 <__cxa_allocate_exception>
08174bb8 +0x074:  mov    %eax,%edx
08174bba +0x076:  movl   $0x1f1,(%edx)
08174bc0 +0x07c:  movl   $0x0,0x8(%esp)
08174bc8 +0x084:  movl   $&_ZTIi,0x4(%esp)
08174bd0 +0x08c:  mov    %eax,(%esp)
08174bd3 +0x08f:  call   08724c50 <__cxa_throw>
08174bd8 +0x094:  mov    0xc(%ebp),%eax
08174bdb +0x097:  mov    %eax,(%esp)
08174bde +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08174be3 +0x09f:  xor    $0x1,%eax
08174be6 +0x0a2:  test   %al,%al
08174be8 +0x0a4:  je     08174c16 <+0xd2>
08174bea +0x0a6:  movl   $0x4,(%esp)
08174bf1 +0x0ad:  call   08725800 <__cxa_allocate_exception>
08174bf6 +0x0b2:  mov    %eax,%edx
08174bf8 +0x0b4:  movl   $0x1f4,(%edx)
08174bfe +0x0ba:  movl   $0x0,0x8(%esp)
08174c06 +0x0c2:  movl   $&_ZTIi,0x4(%esp)
08174c0e +0x0ca:  mov    %eax,(%esp)
08174c11 +0x0cd:  call   08724c50 <__cxa_throw>
08174c16 +0x0d2:  mov    0x8(%ebp),%eax
08174c19 +0x0d5:  mov    %eax,0x8(%esp)
08174c1d +0x0d9:  movl   $0x0,0x4(%esp)
08174c25 +0x0e1:  mov    0xc(%ebp),%eax
08174c28 +0x0e4:  mov    %eax,(%esp)
08174c2b +0x0e7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08174c30 +0x0ec:  xor    $0x1,%eax
08174c33 +0x0ef:  test   %al,%al
08174c35 +0x0f1:  je     08174c63 <+0x11f>
08174c37 +0x0f3:  movl   $0x4,(%esp)
08174c3e +0x0fa:  call   08725800 <__cxa_allocate_exception>
08174c43 +0x0ff:  mov    %eax,%edx
08174c45 +0x101:  movl   $0x1f7,(%edx)
08174c4b +0x107:  movl   $0x0,0x8(%esp)
08174c53 +0x10f:  movl   $&_ZTIi,0x4(%esp)
08174c5b +0x117:  mov    %eax,(%esp)
08174c5e +0x11a:  call   08724c50 <__cxa_throw>
08174c63 +0x11f:  mov    $0x1,%ebx
08174c68 +0x124:  jmp    08174cd8 <+0x194>
08174c6a +0x126:  cmp    $0x1,%edx
08174c6d +0x129:  je     08174c77 <+0x133>
08174c6f +0x12b:  mov    %eax,(%esp)
08174c72 +0x12e:  call   08ae3750 <_Unwind_Resume>
08174c77 +0x133:  mov    %eax,(%esp)
08174c7a +0x136:  call   08725ce0 <__cxa_begin_catch>
08174c7f +0x13b:  mov    (%eax),%eax
08174c81 +0x13d:  mov    %eax,-0xc(%ebp)
08174c84 +0x140:  mov    -0xc(%ebp),%eax
08174c87 +0x143:  mov    %eax,0x14(%esp)
08174c8b +0x147:  movl   $"[Taiwan, Billing] ConfirmQuery Error Line:%u\n",0x10(%esp)
08174c93 +0x14f:  movl   $0x1fd,0xc(%esp)
08174c9b +0x157:  movl   $&_ZZN6Taiwan12ConfirmQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
08174ca3 +0x15f:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08174cab +0x167:  movl   $0x1,(%esp)
08174cb2 +0x16e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08174cb7 +0x173:  mov    $0x0,%ebx
08174cbc +0x178:  call   08725c30 <__cxa_end_catch>
08174cc1 +0x17d:  jmp    08174cd8 <+0x194>
08174cc3 +0x17f:  mov    %edx,%ebx
08174cc5 +0x181:  mov    %eax,%esi
08174cc7 +0x183:  call   08725c30 <__cxa_end_catch>
08174ccc +0x188:  mov    %esi,%eax
08174cce +0x18a:  mov    %ebx,%edx
08174cd0 +0x18c:  mov    %eax,(%esp)
08174cd3 +0x18f:  call   08ae3750 <_Unwind_Resume>
08174cd8 +0x194:  mov    %ebx,%eax
08174cda +0x196:  add    $0x30,%esp
08174cdd +0x199:  pop    %ebx
08174cde +0x19a:  pop    %esi
08174cdf +0x19b:  pop    %ebp
08174ce0 +0x19c:  ret
08174ce1 +0x19d:  nop
```

## 反编译 C

```c
// Taiwan::ConfirmQuery::getResult @ 0x8174b44

/* Taiwan::ConfirmQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::ConfirmQuery::getResult(ConfirmQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174b5a to 08174c62 has its CatchHandler @ 08174c6a */
  cVar1 = MySQL::set_query(param_1,"select @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1ee;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1f1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 500;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(int *)this);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1f7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
