# getResult

`_ZN6Taiwan11ChargeQuery9getResultER5MySQL`

`Taiwan::ChargeQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ChargeQuery` | `0x08174fc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174fc6  _ZN6Taiwan11ChargeQuery9getResultER5MySQL
#           Taiwan::ChargeQuery::getResult(MySQL&)
# range [0x08174fc6, 0x081751b5]
08174fc6 +0x000:  push   %ebp
08174fc7 +0x001:  mov    %esp,%ebp
08174fc9 +0x003:  push   %esi
08174fca +0x004:  push   %ebx
08174fcb +0x005:  sub    $0x30,%esp
08174fce +0x008:  movl   $"select @out_tran, @out_code",0x4(%esp)
08174fd6 +0x010:  mov    0xc(%ebp),%eax
08174fd9 +0x013:  mov    %eax,(%esp)
08174fdc +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174fe1 +0x01b:  xor    $0x1,%eax
08174fe4 +0x01e:  test   %al,%al
08174fe6 +0x020:  je     08175014 <+0x4e>
08174fe8 +0x022:  movl   $0x4,(%esp)
08174fef +0x029:  call   08725800 <__cxa_allocate_exception>
08174ff4 +0x02e:  mov    %eax,%edx
08174ff6 +0x030:  movl   $0x24c,(%edx)
08174ffc +0x036:  movl   $0x0,0x8(%esp)
08175004 +0x03e:  movl   $&_ZTIi,0x4(%esp)
0817500c +0x046:  mov    %eax,(%esp)
0817500f +0x049:  call   08724c50 <__cxa_throw>
08175014 +0x04e:  movl   $0x1,0x4(%esp)
0817501c +0x056:  mov    0xc(%ebp),%eax
0817501f +0x059:  mov    %eax,(%esp)
08175022 +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08175027 +0x061:  xor    $0x1,%eax
0817502a +0x064:  test   %al,%al
0817502c +0x066:  je     0817505a <+0x94>
0817502e +0x068:  movl   $0x4,(%esp)
08175035 +0x06f:  call   08725800 <__cxa_allocate_exception>
0817503a +0x074:  mov    %eax,%edx
0817503c +0x076:  movl   $0x24f,(%edx)
08175042 +0x07c:  movl   $0x0,0x8(%esp)
0817504a +0x084:  movl   $&_ZTIi,0x4(%esp)
08175052 +0x08c:  mov    %eax,(%esp)
08175055 +0x08f:  call   08724c50 <__cxa_throw>
0817505a +0x094:  mov    0xc(%ebp),%eax
0817505d +0x097:  mov    %eax,(%esp)
08175060 +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08175065 +0x09f:  xor    $0x1,%eax
08175068 +0x0a2:  test   %al,%al
0817506a +0x0a4:  je     08175098 <+0xd2>
0817506c +0x0a6:  movl   $0x4,(%esp)
08175073 +0x0ad:  call   08725800 <__cxa_allocate_exception>
08175078 +0x0b2:  mov    %eax,%edx
0817507a +0x0b4:  movl   $0x252,(%edx)
08175080 +0x0ba:  movl   $0x0,0x8(%esp)
08175088 +0x0c2:  movl   $&_ZTIi,0x4(%esp)
08175090 +0x0ca:  mov    %eax,(%esp)
08175093 +0x0cd:  call   08724c50 <__cxa_throw>
08175098 +0x0d2:  mov    0x8(%ebp),%eax
0817509b +0x0d5:  add    $0x1c,%eax
0817509e +0x0d8:  mov    %eax,0x8(%esp)
081750a2 +0x0dc:  movl   $0x0,0x4(%esp)
081750aa +0x0e4:  mov    0xc(%ebp),%eax
081750ad +0x0e7:  mov    %eax,(%esp)
081750b0 +0x0ea:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
081750b5 +0x0ef:  xor    $0x1,%eax
081750b8 +0x0f2:  test   %al,%al
081750ba +0x0f4:  je     081750e8 <+0x122>
081750bc +0x0f6:  movl   $0x4,(%esp)
081750c3 +0x0fd:  call   08725800 <__cxa_allocate_exception>
081750c8 +0x102:  mov    %eax,%edx
081750ca +0x104:  movl   $0x255,(%edx)
081750d0 +0x10a:  movl   $0x0,0x8(%esp)
081750d8 +0x112:  movl   $&_ZTIi,0x4(%esp)
081750e0 +0x11a:  mov    %eax,(%esp)
081750e3 +0x11d:  call   08724c50 <__cxa_throw>
081750e8 +0x122:  mov    0x8(%ebp),%eax
081750eb +0x125:  add    $0x14,%eax
081750ee +0x128:  mov    %eax,0x8(%esp)
081750f2 +0x12c:  movl   $0x1,0x4(%esp)
081750fa +0x134:  mov    0xc(%ebp),%eax
081750fd +0x137:  mov    %eax,(%esp)
08175100 +0x13a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08175105 +0x13f:  xor    $0x1,%eax
08175108 +0x142:  test   %al,%al
0817510a +0x144:  je     08175138 <+0x172>
0817510c +0x146:  movl   $0x4,(%esp)
08175113 +0x14d:  call   08725800 <__cxa_allocate_exception>
08175118 +0x152:  mov    %eax,%edx
0817511a +0x154:  movl   $0x258,(%edx)
08175120 +0x15a:  movl   $0x0,0x8(%esp)
08175128 +0x162:  movl   $&_ZTIi,0x4(%esp)
08175130 +0x16a:  mov    %eax,(%esp)
08175133 +0x16d:  call   08724c50 <__cxa_throw>
08175138 +0x172:  mov    $0x1,%ebx
0817513d +0x177:  jmp    081751ad <+0x1e7>
0817513f +0x179:  cmp    $0x1,%edx
08175142 +0x17c:  je     0817514c <+0x186>
08175144 +0x17e:  mov    %eax,(%esp)
08175147 +0x181:  call   08ae3750 <_Unwind_Resume>
0817514c +0x186:  mov    %eax,(%esp)
0817514f +0x189:  call   08725ce0 <__cxa_begin_catch>
08175154 +0x18e:  mov    (%eax),%eax
08175156 +0x190:  mov    %eax,-0xc(%ebp)
08175159 +0x193:  mov    -0xc(%ebp),%eax
0817515c +0x196:  mov    %eax,0x14(%esp)
08175160 +0x19a:  movl   $"[Taiwan, Billing] ChargeQuery Error Line:%u\n",0x10(%esp)
08175168 +0x1a2:  movl   $0x25e,0xc(%esp)
08175170 +0x1aa:  movl   $&_ZZN6Taiwan11ChargeQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
08175178 +0x1b2:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
08175180 +0x1ba:  movl   $0x1,(%esp)
08175187 +0x1c1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817518c +0x1c6:  mov    $0x0,%ebx
08175191 +0x1cb:  call   08725c30 <__cxa_end_catch>
08175196 +0x1d0:  jmp    081751ad <+0x1e7>
08175198 +0x1d2:  mov    %edx,%ebx
0817519a +0x1d4:  mov    %eax,%esi
0817519c +0x1d6:  call   08725c30 <__cxa_end_catch>
081751a1 +0x1db:  mov    %esi,%eax
081751a3 +0x1dd:  mov    %ebx,%edx
081751a5 +0x1df:  mov    %eax,(%esp)
081751a8 +0x1e2:  call   08ae3750 <_Unwind_Resume>
081751ad +0x1e7:  mov    %ebx,%eax
081751af +0x1e9:  add    $0x30,%esp
081751b2 +0x1ec:  pop    %ebx
081751b3 +0x1ed:  pop    %esi
081751b4 +0x1ee:  pop    %ebp
081751b5 +0x1ef:  ret
```

## 反编译 C

```c
// Taiwan::ChargeQuery::getResult @ 0x8174fc6

/* Taiwan::ChargeQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::ChargeQuery::getResult(ChargeQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174fdc to 08175137 has its CatchHandler @ 0817513f */
  cVar1 = MySQL::set_query(param_1,"select @out_tran, @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x24c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x24f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x252;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_ulonglong(param_1,0,(ulonglong *)(this + 0x1c));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x255;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 0x14));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 600;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
