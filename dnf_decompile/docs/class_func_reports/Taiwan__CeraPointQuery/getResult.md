# getResult

`_ZN6Taiwan14CeraPointQuery9getResultER5MySQL`

`Taiwan::CeraPointQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CeraPointQuery` | `0x081752cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081752cc  _ZN6Taiwan14CeraPointQuery9getResultER5MySQL
#           Taiwan::CeraPointQuery::getResult(MySQL&)
# range [0x081752cc, 0x0817546b]
081752cc +0x000:  push   %ebp
081752cd +0x001:  mov    %esp,%ebp
081752cf +0x003:  push   %esi
081752d0 +0x004:  push   %ebx
081752d1 +0x005:  sub    $0x30,%esp
081752d4 +0x008:  movl   $"select @out_code",0x4(%esp)
081752dc +0x010:  mov    0xc(%ebp),%eax
081752df +0x013:  mov    %eax,(%esp)
081752e2 +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081752e7 +0x01b:  xor    $0x1,%eax
081752ea +0x01e:  test   %al,%al
081752ec +0x020:  je     0817531a <+0x4e>
081752ee +0x022:  movl   $0x4,(%esp)
081752f5 +0x029:  call   08725800 <__cxa_allocate_exception>
081752fa +0x02e:  mov    %eax,%edx
081752fc +0x030:  movl   $0x282,(%edx)
08175302 +0x036:  movl   $0x0,0x8(%esp)
0817530a +0x03e:  movl   $&_ZTIi,0x4(%esp)
08175312 +0x046:  mov    %eax,(%esp)
08175315 +0x049:  call   08724c50 <__cxa_throw>
0817531a +0x04e:  movl   $0x1,0x4(%esp)
08175322 +0x056:  mov    0xc(%ebp),%eax
08175325 +0x059:  mov    %eax,(%esp)
08175328 +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0817532d +0x061:  xor    $0x1,%eax
08175330 +0x064:  test   %al,%al
08175332 +0x066:  je     08175360 <+0x94>
08175334 +0x068:  movl   $0x4,(%esp)
0817533b +0x06f:  call   08725800 <__cxa_allocate_exception>
08175340 +0x074:  mov    %eax,%edx
08175342 +0x076:  movl   $0x285,(%edx)
08175348 +0x07c:  movl   $0x0,0x8(%esp)
08175350 +0x084:  movl   $&_ZTIi,0x4(%esp)
08175358 +0x08c:  mov    %eax,(%esp)
0817535b +0x08f:  call   08724c50 <__cxa_throw>
08175360 +0x094:  mov    0xc(%ebp),%eax
08175363 +0x097:  mov    %eax,(%esp)
08175366 +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0817536b +0x09f:  xor    $0x1,%eax
0817536e +0x0a2:  test   %al,%al
08175370 +0x0a4:  je     0817539e <+0xd2>
08175372 +0x0a6:  movl   $0x4,(%esp)
08175379 +0x0ad:  call   08725800 <__cxa_allocate_exception>
0817537e +0x0b2:  mov    %eax,%edx
08175380 +0x0b4:  movl   $0x288,(%edx)
08175386 +0x0ba:  movl   $0x0,0x8(%esp)
0817538e +0x0c2:  movl   $&_ZTIi,0x4(%esp)
08175396 +0x0ca:  mov    %eax,(%esp)
08175399 +0x0cd:  call   08724c50 <__cxa_throw>
0817539e +0x0d2:  mov    0x8(%ebp),%eax
081753a1 +0x0d5:  add    $0x18,%eax
081753a4 +0x0d8:  mov    %eax,0x8(%esp)
081753a8 +0x0dc:  movl   $0x0,0x4(%esp)
081753b0 +0x0e4:  mov    0xc(%ebp),%eax
081753b3 +0x0e7:  mov    %eax,(%esp)
081753b6 +0x0ea:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
081753bb +0x0ef:  xor    $0x1,%eax
081753be +0x0f2:  test   %al,%al
081753c0 +0x0f4:  je     081753ee <+0x122>
081753c2 +0x0f6:  movl   $0x4,(%esp)
081753c9 +0x0fd:  call   08725800 <__cxa_allocate_exception>
081753ce +0x102:  mov    %eax,%edx
081753d0 +0x104:  movl   $0x28b,(%edx)
081753d6 +0x10a:  movl   $0x0,0x8(%esp)
081753de +0x112:  movl   $&_ZTIi,0x4(%esp)
081753e6 +0x11a:  mov    %eax,(%esp)
081753e9 +0x11d:  call   08724c50 <__cxa_throw>
081753ee +0x122:  mov    $0x1,%ebx
081753f3 +0x127:  jmp    08175463 <+0x197>
081753f5 +0x129:  cmp    $0x1,%edx
081753f8 +0x12c:  je     08175402 <+0x136>
081753fa +0x12e:  mov    %eax,(%esp)
081753fd +0x131:  call   08ae3750 <_Unwind_Resume>
08175402 +0x136:  mov    %eax,(%esp)
08175405 +0x139:  call   08725ce0 <__cxa_begin_catch>
0817540a +0x13e:  mov    (%eax),%eax
0817540c +0x140:  mov    %eax,-0xc(%ebp)
0817540f +0x143:  mov    -0xc(%ebp),%eax
08175412 +0x146:  mov    %eax,0x14(%esp)
08175416 +0x14a:  movl   $"[Taiwan, Billing] ChargePointQuery Error Line:%u\n",0x10(%esp)
0817541e +0x152:  movl   $0x291,0xc(%esp)
08175426 +0x15a:  movl   $&_ZZN6Taiwan14CeraPointQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
0817542e +0x162:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08175436 +0x16a:  movl   $0x1,(%esp)
0817543d +0x171:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08175442 +0x176:  mov    $0x0,%ebx
08175447 +0x17b:  call   08725c30 <__cxa_end_catch>
0817544c +0x180:  jmp    08175463 <+0x197>
0817544e +0x182:  mov    %edx,%ebx
08175450 +0x184:  mov    %eax,%esi
08175452 +0x186:  call   08725c30 <__cxa_end_catch>
08175457 +0x18b:  mov    %esi,%eax
08175459 +0x18d:  mov    %ebx,%edx
0817545b +0x18f:  mov    %eax,(%esp)
0817545e +0x192:  call   08ae3750 <_Unwind_Resume>
08175463 +0x197:  mov    %ebx,%eax
08175465 +0x199:  add    $0x30,%esp
08175468 +0x19c:  pop    %ebx
08175469 +0x19d:  pop    %esi
0817546a +0x19e:  pop    %ebp
0817546b +0x19f:  ret
```

## 反编译 C

```c
// Taiwan::CeraPointQuery::getResult @ 0x81752cc

/* Taiwan::CeraPointQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::CeraPointQuery::getResult(CeraPointQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 081752e2 to 081753ed has its CatchHandler @ 081753f5 */
  cVar1 = MySQL::set_query(param_1,"select @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x282;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x285;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x288;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(int *)(this + 0x18));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x28b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
