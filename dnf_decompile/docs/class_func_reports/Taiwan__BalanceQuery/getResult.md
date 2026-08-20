# getResult

`_ZN6Taiwan12BalanceQuery9getResultER5MySQL`

`Taiwan::BalanceQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalanceQuery` | `0x08174092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174092  _ZN6Taiwan12BalanceQuery9getResultER5MySQL
#           Taiwan::BalanceQuery::getResult(MySQL&)
# range [0x08174092, 0x0817428f]
08174092 +0x000:  push   %ebp
08174093 +0x001:  mov    %esp,%ebp
08174095 +0x003:  push   %esi
08174096 +0x004:  push   %ebx
08174097 +0x005:  sub    $0x30,%esp
0817409a +0x008:  movl   $"select @out_balance, @out_result",0x4(%esp)
081740a2 +0x010:  mov    0xc(%ebp),%eax
081740a5 +0x013:  mov    %eax,(%esp)
081740a8 +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081740ad +0x01b:  xor    $0x1,%eax
081740b0 +0x01e:  test   %al,%al
081740b2 +0x020:  je     081740e0 <+0x4e>
081740b4 +0x022:  movl   $0x4,(%esp)
081740bb +0x029:  call   08725800 <__cxa_allocate_exception>
081740c0 +0x02e:  mov    %eax,%edx
081740c2 +0x030:  movl   $0x116,(%edx)
081740c8 +0x036:  movl   $0x0,0x8(%esp)
081740d0 +0x03e:  movl   $&_ZTIi,0x4(%esp)
081740d8 +0x046:  mov    %eax,(%esp)
081740db +0x049:  call   08724c50 <__cxa_throw>
081740e0 +0x04e:  movl   $0x1,0x4(%esp)
081740e8 +0x056:  mov    0xc(%ebp),%eax
081740eb +0x059:  mov    %eax,(%esp)
081740ee +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081740f3 +0x061:  xor    $0x1,%eax
081740f6 +0x064:  test   %al,%al
081740f8 +0x066:  je     08174126 <+0x94>
081740fa +0x068:  movl   $0x4,(%esp)
08174101 +0x06f:  call   08725800 <__cxa_allocate_exception>
08174106 +0x074:  mov    %eax,%edx
08174108 +0x076:  movl   $0x119,(%edx)
0817410e +0x07c:  movl   $0x0,0x8(%esp)
08174116 +0x084:  movl   $&_ZTIi,0x4(%esp)
0817411e +0x08c:  mov    %eax,(%esp)
08174121 +0x08f:  call   08724c50 <__cxa_throw>
08174126 +0x094:  mov    0xc(%ebp),%eax
08174129 +0x097:  mov    %eax,(%esp)
0817412c +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08174131 +0x09f:  xor    $0x1,%eax
08174134 +0x0a2:  test   %al,%al
08174136 +0x0a4:  je     08174164 <+0xd2>
08174138 +0x0a6:  movl   $0x4,(%esp)
0817413f +0x0ad:  call   08725800 <__cxa_allocate_exception>
08174144 +0x0b2:  mov    %eax,%edx
08174146 +0x0b4:  movl   $0x11c,(%edx)
0817414c +0x0ba:  movl   $0x0,0x8(%esp)
08174154 +0x0c2:  movl   $&_ZTIi,0x4(%esp)
0817415c +0x0ca:  mov    %eax,(%esp)
0817415f +0x0cd:  call   08724c50 <__cxa_throw>
08174164 +0x0d2:  movl   $0x0,-0x10(%ebp)
0817416b +0x0d9:  mov    0x8(%ebp),%eax
0817416e +0x0dc:  lea    0x4(%eax),%edx
08174171 +0x0df:  mov    -0x10(%ebp),%eax
08174174 +0x0e2:  addl   $0x1,-0x10(%ebp)
08174178 +0x0e6:  mov    %edx,0x8(%esp)
0817417c +0x0ea:  mov    %eax,0x4(%esp)
08174180 +0x0ee:  mov    0xc(%ebp),%eax
08174183 +0x0f1:  mov    %eax,(%esp)
08174186 +0x0f4:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0817418b +0x0f9:  xor    $0x1,%eax
0817418e +0x0fc:  test   %al,%al
08174190 +0x0fe:  je     081741be <+0x12c>
08174192 +0x100:  movl   $0x4,(%esp)
08174199 +0x107:  call   08725800 <__cxa_allocate_exception>
0817419e +0x10c:  mov    %eax,%edx
081741a0 +0x10e:  movl   $0x120,(%edx)
081741a6 +0x114:  movl   $0x0,0x8(%esp)
081741ae +0x11c:  movl   $&_ZTIi,0x4(%esp)
081741b6 +0x124:  mov    %eax,(%esp)
081741b9 +0x127:  call   08724c50 <__cxa_throw>
081741be +0x12c:  mov    0x8(%ebp),%eax
081741c1 +0x12f:  lea    0x8(%eax),%edx
081741c4 +0x132:  mov    -0x10(%ebp),%eax
081741c7 +0x135:  addl   $0x1,-0x10(%ebp)
081741cb +0x139:  mov    %edx,0x8(%esp)
081741cf +0x13d:  mov    %eax,0x4(%esp)
081741d3 +0x141:  mov    0xc(%ebp),%eax
081741d6 +0x144:  mov    %eax,(%esp)
081741d9 +0x147:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
081741de +0x14c:  xor    $0x1,%eax
081741e1 +0x14f:  test   %al,%al
081741e3 +0x151:  je     08174211 <+0x17f>
081741e5 +0x153:  movl   $0x4,(%esp)
081741ec +0x15a:  call   08725800 <__cxa_allocate_exception>
081741f1 +0x15f:  mov    %eax,%edx
081741f3 +0x161:  movl   $0x123,(%edx)
081741f9 +0x167:  movl   $0x0,0x8(%esp)
08174201 +0x16f:  movl   $&_ZTIi,0x4(%esp)
08174209 +0x177:  mov    %eax,(%esp)
0817420c +0x17a:  call   08724c50 <__cxa_throw>
08174211 +0x17f:  mov    $0x1,%ebx
08174216 +0x184:  jmp    08174286 <+0x1f4>
08174218 +0x186:  cmp    $0x1,%edx
0817421b +0x189:  je     08174225 <+0x193>
0817421d +0x18b:  mov    %eax,(%esp)
08174220 +0x18e:  call   08ae3750 <_Unwind_Resume>
08174225 +0x193:  mov    %eax,(%esp)
08174228 +0x196:  call   08725ce0 <__cxa_begin_catch>
0817422d +0x19b:  mov    (%eax),%eax
0817422f +0x19d:  mov    %eax,-0xc(%ebp)
08174232 +0x1a0:  mov    -0xc(%ebp),%eax
08174235 +0x1a3:  mov    %eax,0x14(%esp)
08174239 +0x1a7:  movl   $"[Taiwan, Billing] BalanceQuery Error Line:%u\n",0x10(%esp)
08174241 +0x1af:  movl   $0x129,0xc(%esp)
08174249 +0x1b7:  movl   $&_ZZN6Taiwan12BalanceQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
08174251 +0x1bf:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08174259 +0x1c7:  movl   $0x1,(%esp)
08174260 +0x1ce:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08174265 +0x1d3:  mov    $0x0,%ebx
0817426a +0x1d8:  call   08725c30 <__cxa_end_catch>
0817426f +0x1dd:  jmp    08174286 <+0x1f4>
08174271 +0x1df:  mov    %edx,%ebx
08174273 +0x1e1:  mov    %eax,%esi
08174275 +0x1e3:  call   08725c30 <__cxa_end_catch>
0817427a +0x1e8:  mov    %esi,%eax
0817427c +0x1ea:  mov    %ebx,%edx
0817427e +0x1ec:  mov    %eax,(%esp)
08174281 +0x1ef:  call   08ae3750 <_Unwind_Resume>
08174286 +0x1f4:  mov    %ebx,%eax
08174288 +0x1f6:  add    $0x30,%esp
0817428b +0x1f9:  pop    %ebx
0817428c +0x1fa:  pop    %esi
0817428d +0x1fb:  pop    %ebp
0817428e +0x1fc:  ret
0817428f +0x1fd:  nop
```

## 反编译 C

```c
// Taiwan::BalanceQuery::getResult @ 0x8174092

/* Taiwan::BalanceQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::BalanceQuery::getResult(BalanceQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 081740a8 to 08174210 has its CatchHandler @ 08174218 */
  cVar1 = MySQL::set_query(param_1,"select @out_balance, @out_result");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x116;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x119;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x11c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(uint *)(this + 4));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x120;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 8));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x123;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
