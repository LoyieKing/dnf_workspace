# getResult

`_ZN6Taiwan13PurchaseQuery9getResultER5MySQL`

`Taiwan::PurchaseQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::PurchaseQuery` | `0x0817460e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817460e  _ZN6Taiwan13PurchaseQuery9getResultER5MySQL
#           Taiwan::PurchaseQuery::getResult(MySQL&)
# range [0x0817460e, 0x081747fd]
0817460e +0x000:  push   %ebp
0817460f +0x001:  mov    %esp,%ebp
08174611 +0x003:  push   %esi
08174612 +0x004:  push   %ebx
08174613 +0x005:  sub    $0x30,%esp
08174616 +0x008:  movl   $"select @out_tran, @out_code",0x4(%esp)
0817461e +0x010:  mov    0xc(%ebp),%eax
08174621 +0x013:  mov    %eax,(%esp)
08174624 +0x016:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174629 +0x01b:  xor    $0x1,%eax
0817462c +0x01e:  test   %al,%al
0817462e +0x020:  je     0817465c <+0x4e>
08174630 +0x022:  movl   $0x4,(%esp)
08174637 +0x029:  call   08725800 <__cxa_allocate_exception>
0817463c +0x02e:  mov    %eax,%edx
0817463e +0x030:  movl   $0x187,(%edx)
08174644 +0x036:  movl   $0x0,0x8(%esp)
0817464c +0x03e:  movl   $&_ZTIi,0x4(%esp)
08174654 +0x046:  mov    %eax,(%esp)
08174657 +0x049:  call   08724c50 <__cxa_throw>
0817465c +0x04e:  movl   $0x1,0x4(%esp)
08174664 +0x056:  mov    0xc(%ebp),%eax
08174667 +0x059:  mov    %eax,(%esp)
0817466a +0x05c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0817466f +0x061:  xor    $0x1,%eax
08174672 +0x064:  test   %al,%al
08174674 +0x066:  je     081746a2 <+0x94>
08174676 +0x068:  movl   $0x4,(%esp)
0817467d +0x06f:  call   08725800 <__cxa_allocate_exception>
08174682 +0x074:  mov    %eax,%edx
08174684 +0x076:  movl   $0x18a,(%edx)
0817468a +0x07c:  movl   $0x0,0x8(%esp)
08174692 +0x084:  movl   $&_ZTIi,0x4(%esp)
0817469a +0x08c:  mov    %eax,(%esp)
0817469d +0x08f:  call   08724c50 <__cxa_throw>
081746a2 +0x094:  mov    0xc(%ebp),%eax
081746a5 +0x097:  mov    %eax,(%esp)
081746a8 +0x09a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
081746ad +0x09f:  xor    $0x1,%eax
081746b0 +0x0a2:  test   %al,%al
081746b2 +0x0a4:  je     081746e0 <+0xd2>
081746b4 +0x0a6:  movl   $0x4,(%esp)
081746bb +0x0ad:  call   08725800 <__cxa_allocate_exception>
081746c0 +0x0b2:  mov    %eax,%edx
081746c2 +0x0b4:  movl   $0x18d,(%edx)
081746c8 +0x0ba:  movl   $0x0,0x8(%esp)
081746d0 +0x0c2:  movl   $&_ZTIi,0x4(%esp)
081746d8 +0x0ca:  mov    %eax,(%esp)
081746db +0x0cd:  call   08724c50 <__cxa_throw>
081746e0 +0x0d2:  mov    0x8(%ebp),%eax
081746e3 +0x0d5:  add    $0x1c,%eax
081746e6 +0x0d8:  mov    %eax,0x8(%esp)
081746ea +0x0dc:  movl   $0x0,0x4(%esp)
081746f2 +0x0e4:  mov    0xc(%ebp),%eax
081746f5 +0x0e7:  mov    %eax,(%esp)
081746f8 +0x0ea:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
081746fd +0x0ef:  xor    $0x1,%eax
08174700 +0x0f2:  test   %al,%al
08174702 +0x0f4:  je     08174730 <+0x122>
08174704 +0x0f6:  movl   $0x4,(%esp)
0817470b +0x0fd:  call   08725800 <__cxa_allocate_exception>
08174710 +0x102:  mov    %eax,%edx
08174712 +0x104:  movl   $0x190,(%edx)
08174718 +0x10a:  movl   $0x0,0x8(%esp)
08174720 +0x112:  movl   $&_ZTIi,0x4(%esp)
08174728 +0x11a:  mov    %eax,(%esp)
0817472b +0x11d:  call   08724c50 <__cxa_throw>
08174730 +0x122:  mov    0x8(%ebp),%eax
08174733 +0x125:  add    $0x24,%eax
08174736 +0x128:  mov    %eax,0x8(%esp)
0817473a +0x12c:  movl   $0x1,0x4(%esp)
08174742 +0x134:  mov    0xc(%ebp),%eax
08174745 +0x137:  mov    %eax,(%esp)
08174748 +0x13a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0817474d +0x13f:  xor    $0x1,%eax
08174750 +0x142:  test   %al,%al
08174752 +0x144:  je     08174780 <+0x172>
08174754 +0x146:  movl   $0x4,(%esp)
0817475b +0x14d:  call   08725800 <__cxa_allocate_exception>
08174760 +0x152:  mov    %eax,%edx
08174762 +0x154:  movl   $0x193,(%edx)
08174768 +0x15a:  movl   $0x0,0x8(%esp)
08174770 +0x162:  movl   $&_ZTIi,0x4(%esp)
08174778 +0x16a:  mov    %eax,(%esp)
0817477b +0x16d:  call   08724c50 <__cxa_throw>
08174780 +0x172:  mov    $0x1,%ebx
08174785 +0x177:  jmp    081747f5 <+0x1e7>
08174787 +0x179:  cmp    $0x1,%edx
0817478a +0x17c:  je     08174794 <+0x186>
0817478c +0x17e:  mov    %eax,(%esp)
0817478f +0x181:  call   08ae3750 <_Unwind_Resume>
08174794 +0x186:  mov    %eax,(%esp)
08174797 +0x189:  call   08725ce0 <__cxa_begin_catch>
0817479c +0x18e:  mov    (%eax),%eax
0817479e +0x190:  mov    %eax,-0xc(%ebp)
081747a1 +0x193:  mov    -0xc(%ebp),%eax
081747a4 +0x196:  mov    %eax,0x14(%esp)
081747a8 +0x19a:  movl   $"[Taiwan, Billing] PurchaseQuery Error Line:%u\n",0x10(%esp)
081747b0 +0x1a2:  movl   $0x199,0xc(%esp)
081747b8 +0x1aa:  movl   $&_ZZN6Taiwan13PurchaseQuery9getResultER5MySQLE12__FUNCTION__,0x8(%esp)
081747c0 +0x1b2:  movl   $"localtaiwan/System/TaiwanCash.cpp",0x4(%esp)
081747c8 +0x1ba:  movl   $0x1,(%esp)
081747cf +0x1c1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081747d4 +0x1c6:  mov    $0x0,%ebx
081747d9 +0x1cb:  call   08725c30 <__cxa_end_catch>
081747de +0x1d0:  jmp    081747f5 <+0x1e7>
081747e0 +0x1d2:  mov    %edx,%ebx
081747e2 +0x1d4:  mov    %eax,%esi
081747e4 +0x1d6:  call   08725c30 <__cxa_end_catch>
081747e9 +0x1db:  mov    %esi,%eax
081747eb +0x1dd:  mov    %ebx,%edx
081747ed +0x1df:  mov    %eax,(%esp)
081747f0 +0x1e2:  call   08ae3750 <_Unwind_Resume>
081747f5 +0x1e7:  mov    %ebx,%eax
081747f7 +0x1e9:  add    $0x30,%esp
081747fa +0x1ec:  pop    %ebx
081747fb +0x1ed:  pop    %esi
081747fc +0x1ee:  pop    %ebp
081747fd +0x1ef:  ret
```

## 反编译 C

```c
// Taiwan::PurchaseQuery::getResult @ 0x817460e

/* Taiwan::PurchaseQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::PurchaseQuery::getResult(PurchaseQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174624 to 0817477f has its CatchHandler @ 08174787 */
  cVar1 = MySQL::set_query(param_1,"select @out_tran, @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x187;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x18a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x18d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_ulonglong(param_1,0,(ulonglong *)(this + 0x1c));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 400;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 0x24));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x193;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}
```
