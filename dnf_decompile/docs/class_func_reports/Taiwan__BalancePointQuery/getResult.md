# getResult

`_ZN6Taiwan17BalancePointQuery9getResultER5MySQL`

`Taiwan::BalancePointQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalancePointQuery` | `0x081742fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081742fc  _ZN6Taiwan17BalancePointQuery9getResultER5MySQL
#           Taiwan::BalancePointQuery::getResult(MySQL&)
# range [0x081742fc, 0x0817454b]
081742fc +0x000:  push   %ebp
081742fd +0x001:  mov    %esp,%ebp
081742ff +0x003:  push   %esi
08174300 +0x004:  push   %ebx
08174301 +0x005:  sub    $0x30,%esp
08174304 +0x008:  movl   $"select @out_balance, @out_point, @out_result",0x4(%esp)
0817430c +0x010:  mov    0xc(%ebp),%eax
0817430f +0x013:  mov    %eax,(%esp)
08174312 +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174317 +0x01b:  xor    $0x1,%eax
0817431a +0x01e:  test   %al,%al
0817431c +0x020:  je     0817434a <+0x4e>
0817431e +0x022:  movl   $0x4,(%esp)
08174325 +0x029:  call   08725800 <__cxa_allocate_exception>
0817432a +0x02e:  mov    %eax,%edx
0817432c +0x030:  movl   $0x14b,(%edx)
08174332 +0x036:  movl   $0x0,0x8(%esp)
0817433a +0x03e:  movl   $&_ZTIi,0x4(%esp)
08174342 +0x046:  mov    %eax,(%esp)
08174345 +0x049:  call   08724c50 <__cxa_throw>
0817434a +0x04e:  movl   $0x1,0x4(%esp)
08174352 +0x056:  mov    0xc(%ebp),%eax
08174355 +0x059:  mov    %eax,(%esp)
08174358 +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0817435d +0x061:  xor    $0x1,%eax
08174360 +0x064:  test   %al,%al
08174362 +0x066:  je     08174390 <+0x94>
08174364 +0x068:  movl   $0x4,(%esp)
0817436b +0x06f:  call   08725800 <__cxa_allocate_exception>
08174370 +0x074:  mov    %eax,%edx
08174372 +0x076:  movl   $0x14e,(%edx)
08174378 +0x07c:  movl   $0x0,0x8(%esp)
08174380 +0x084:  movl   $&_ZTIi,0x4(%esp)
08174388 +0x08c:  mov    %eax,(%esp)
0817438b +0x08f:  call   08724c50 <__cxa_throw>
08174390 +0x094:  mov    0xc(%ebp),%eax
08174393 +0x097:  mov    %eax,(%esp)
08174396 +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0817439b +0x09f:  xor    $0x1,%eax
0817439e +0x0a2:  test   %al,%al
081743a0 +0x0a4:  je     081743ce <+0xd2>
081743a2 +0x0a6:  movl   $0x4,(%esp)
081743a9 +0x0ad:  call   08725800 <__cxa_allocate_exception>
081743ae +0x0b2:  mov    %eax,%edx
081743b0 +0x0b4:  movl   $0x151,(%edx)
081743b6 +0x0ba:  movl   $0x0,0x8(%esp)
081743be +0x0c2:  movl   $&_ZTIi,0x4(%esp)
081743c6 +0x0ca:  mov    %eax,(%esp)
081743c9 +0x0cd:  call   08724c50 <__cxa_throw>
081743ce +0x0d2:  movl   $0x0,-0x10(%ebp)
081743d5 +0x0d9:  mov    0x8(%ebp),%eax
081743d8 +0x0dc:  lea    0x4(%eax),%edx
081743db +0x0df:  mov    -0x10(%ebp),%eax
081743de +0x0e2:  addl   $0x1,-0x10(%ebp)
081743e2 +0x0e6:  mov    %edx,0x8(%esp)
081743e6 +0x0ea:  mov    %eax,0x4(%esp)
081743ea +0x0ee:  mov    0xc(%ebp),%eax
081743ed +0x0f1:  mov    %eax,(%esp)
081743f0 +0x0f4:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
081743f5 +0x0f9:  xor    $0x1,%eax
081743f8 +0x0fc:  test   %al,%al
081743fa +0x0fe:  je     08174428 <+0x12c>
081743fc +0x100:  movl   $0x4,(%esp)
08174403 +0x107:  call   08725800 <__cxa_allocate_exception>
08174408 +0x10c:  mov    %eax,%edx
0817440a +0x10e:  movl   $0x155,(%edx)
08174410 +0x114:  movl   $0x0,0x8(%esp)
08174418 +0x11c:  movl   $&_ZTIi,0x4(%esp)
08174420 +0x124:  mov    %eax,(%esp)
08174423 +0x127:  call   08724c50 <__cxa_throw>
08174428 +0x12c:  mov    0x8(%ebp),%eax
0817442b +0x12f:  lea    0x8(%eax),%edx
0817442e +0x132:  mov    -0x10(%ebp),%eax
08174431 +0x135:  addl   $0x1,-0x10(%ebp)
08174435 +0x139:  mov    %edx,0x8(%esp)
08174439 +0x13d:  mov    %eax,0x4(%esp)
0817443d +0x141:  mov    0xc(%ebp),%eax
08174440 +0x144:  mov    %eax,(%esp)
08174443 +0x147:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08174448 +0x14c:  xor    $0x1,%eax
0817444b +0x14f:  test   %al,%al
0817444d +0x151:  je     0817447b <+0x17f>
0817444f +0x153:  movl   $0x4,(%esp)
08174456 +0x15a:  call   08725800 <__cxa_allocate_exception>
0817445b +0x15f:  mov    %eax,%edx
0817445d +0x161:  movl   $0x158,(%edx)
08174463 +0x167:  movl   $0x0,0x8(%esp)
0817446b +0x16f:  movl   $&_ZTIi,0x4(%esp)
08174473 +0x177:  mov    %eax,(%esp)
08174476 +0x17a:  call   08724c50 <__cxa_throw>
0817447b +0x17f:  mov    0x8(%ebp),%eax
0817447e +0x182:  lea    0xc(%eax),%edx
08174481 +0x185:  mov    -0x10(%ebp),%eax
08174484 +0x188:  addl   $0x1,-0x10(%ebp)
08174488 +0x18c:  mov    %edx,0x8(%esp)
0817448c +0x190:  mov    %eax,0x4(%esp)
08174490 +0x194:  mov    0xc(%ebp),%eax
08174493 +0x197:  mov    %eax,(%esp)
08174496 +0x19a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0817449b +0x19f:  xor    $0x1,%eax
0817449e +0x1a2:  test   %al,%al
081744a0 +0x1a4:  je     081744ce <+0x1d2>
081744a2 +0x1a6:  movl   $0x4,(%esp)
081744a9 +0x1ad:  call   08725800 <__cxa_allocate_exception>
081744ae +0x1b2:  mov    %eax,%edx
081744b0 +0x1b4:  movl   $0x15b,(%edx)
081744b6 +0x1ba:  movl   $0x0,0x8(%esp)
081744be +0x1c2:  movl   $&_ZTIi,0x4(%esp)
081744c6 +0x1ca:  mov    %eax,(%esp)
081744c9 +0x1cd:  call   08724c50 <__cxa_throw>
081744ce +0x1d2:  mov    $0x1,%ebx
081744d3 +0x1d7:  jmp    08174543 <+0x247>
081744d5 +0x1d9:  cmp    $0x1,%edx
081744d8 +0x1dc:  je     081744e2 <+0x1e6>
081744da +0x1de:  mov    %eax,(%esp)
081744dd +0x1e1:  call   08ae3750 <_Unwind_Resume>
081744e2 +0x1e6:  mov    %eax,(%esp)
081744e5 +0x1e9:  call   08725ce0 <__cxa_begin_catch>
081744ea +0x1ee:  mov    (%eax),%eax
081744ec +0x1f0:  mov    %eax,-0xc(%ebp)
081744ef +0x1f3:  mov    -0xc(%ebp),%eax
081744f2 +0x1f6:  mov    %eax,0x14(%esp)
081744f6 +0x1fa:  movl   $"[Taiwan, Billing] BalanceQuery Error Line:%u\n",0x10(%esp)
081744fe +0x202:  movl   $0x161,0xc(%esp)
08174506 +0x20a:  movl   $&_ZZN6Taiwan17BalancePointQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
0817450e +0x212:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08174516 +0x21a:  movl   $0x1,(%esp)
0817451d +0x221:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08174522 +0x226:  mov    $0x0,%ebx
08174527 +0x22b:  call   08725c30 <__cxa_end_catch>
0817452c +0x230:  jmp    08174543 <+0x247>
0817452e +0x232:  mov    %edx,%ebx
08174530 +0x234:  mov    %eax,%esi
08174532 +0x236:  call   08725c30 <__cxa_end_catch>
08174537 +0x23b:  mov    %esi,%eax
08174539 +0x23d:  mov    %ebx,%edx
0817453b +0x23f:  mov    %eax,(%esp)
0817453e +0x242:  call   08ae3750 <_Unwind_Resume>
08174543 +0x247:  mov    %ebx,%eax
08174545 +0x249:  add    $0x30,%esp
08174548 +0x24c:  pop    %ebx
08174549 +0x24d:  pop    %esi
0817454a +0x24e:  pop    %ebp
0817454b +0x24f:  ret
```

## 反编译 C

```c
// Taiwan::BalancePointQuery::getResult @ 0x81742fc

/* Taiwan::BalancePointQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::BalancePointQuery::getResult(BalancePointQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174312 to 081744cd has its CatchHandler @ 081744d5 */
  cVar1 = MySQL::set_query(param_1,"select @out_balance, @out_point, @out_result");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x14b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x14e;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x151;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(uint *)(this + 4));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x155;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(uint *)(this + 8));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x158;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,2,(int *)(this + 0xc));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x15b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
