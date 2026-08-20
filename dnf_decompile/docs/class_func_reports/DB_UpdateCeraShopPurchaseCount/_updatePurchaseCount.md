# _updatePurchaseCount

`_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt`

`DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount(unsigned int, unsigned short)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCeraShopPurchaseCount` | `0x0844b680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844b680  _ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt
#           DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount(unsigned int, unsigned short)
# range [0x0844b680, 0x0844b807]
0844b680 +0x000:  push   %ebp
0844b681 +0x001:  mov    %esp,%ebp
0844b683 +0x003:  push   %esi
0844b684 +0x004:  push   %ebx
0844b685 +0x005:  sub    $0x40,%esp
0844b688 +0x008:  mov    0x10(%ebp),%eax
0844b68b +0x00b:  mov    %ax,-0x2c(%ebp)
0844b68f +0x00f:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844b694 +0x014:  movl   $0x0,0x8(%esp)
0844b69c +0x01c:  movl   $0x9,0x4(%esp)
0844b6a4 +0x024:  mov    %eax,(%esp)
0844b6a7 +0x027:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844b6ac +0x02c:  mov    %eax,-0x10(%ebp)
0844b6af +0x02f:  cmpl   $0x0,-0x10(%ebp)
0844b6b3 +0x033:  jne    0844b6e1 <+0x61>
0844b6b5 +0x035:  movl   $0x4,(%esp)
0844b6bc +0x03c:  call   08725800 <__cxa_allocate_exception>
0844b6c1 +0x041:  mov    %eax,%edx
0844b6c3 +0x043:  movl   $"handle_null",(%edx)
0844b6c9 +0x049:  movl   $0x0,0x8(%esp)
0844b6d1 +0x051:  movl   $&_ZTIPKc,0x4(%esp)
0844b6d9 +0x059:  mov    %eax,(%esp)
0844b6dc +0x05c:  call   08724c50 <__cxa_throw>
0844b6e1 +0x061:  movl   $0x0,0x4(%esp)
0844b6e9 +0x069:  mov    0xc(%ebp),%eax
0844b6ec +0x06c:  mov    %eax,(%esp)
0844b6ef +0x06f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844b6f4 +0x074:  movzwl -0x2c(%ebp),%edx
0844b6f8 +0x078:  mov    %eax,0xc(%esp)
0844b6fc +0x07c:  mov    %edx,0x8(%esp)
0844b700 +0x080:  movl   $" upDate event_purchase_cnt set purchase_cnt=%d where m_id = %s ",0x4(%esp)
0844b708 +0x088:  mov    -0x10(%ebp),%eax
0844b70b +0x08b:  mov    %eax,(%esp)
0844b70e +0x08e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844b713 +0x093:  xor    $0x1,%eax
0844b716 +0x096:  test   %al,%al
0844b718 +0x098:  je     0844b746 <+0xc6>
0844b71a +0x09a:  movl   $0x4,(%esp)
0844b721 +0x0a1:  call   08725800 <__cxa_allocate_exception>
0844b726 +0x0a6:  mov    %eax,%edx
0844b728 +0x0a8:  movl   $"set_query",(%edx)
0844b72e +0x0ae:  movl   $0x0,0x8(%esp)
0844b736 +0x0b6:  movl   $&_ZTIPKc,0x4(%esp)
0844b73e +0x0be:  mov    %eax,(%esp)
0844b741 +0x0c1:  call   08724c50 <__cxa_throw>
0844b746 +0x0c6:  movl   $0x1,0x4(%esp)
0844b74e +0x0ce:  mov    -0x10(%ebp),%eax
0844b751 +0x0d1:  mov    %eax,(%esp)
0844b754 +0x0d4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844b759 +0x0d9:  xor    $0x1,%eax
0844b75c +0x0dc:  test   %al,%al
0844b75e +0x0de:  je     0844b801 <+0x181>
0844b764 +0x0e4:  movl   $0x4,(%esp)
0844b76b +0x0eb:  call   08725800 <__cxa_allocate_exception>
0844b770 +0x0f0:  mov    %eax,%edx
0844b772 +0x0f2:  movl   $"exec",(%edx)
0844b778 +0x0f8:  movl   $0x0,0x8(%esp)
0844b780 +0x100:  movl   $&_ZTIPKc,0x4(%esp)
0844b788 +0x108:  mov    %eax,(%esp)
0844b78b +0x10b:  call   08724c50 <__cxa_throw>
0844b790 +0x110:  cmp    $0x1,%edx
0844b793 +0x113:  je     0844b79d <+0x11d>
0844b795 +0x115:  mov    %eax,(%esp)
0844b798 +0x118:  call   08ae3750 <_Unwind_Resume>
0844b79d +0x11d:  mov    %eax,(%esp)
0844b7a0 +0x120:  call   08725ce0 <__cxa_begin_catch>
0844b7a5 +0x125:  mov    %eax,-0xc(%ebp)
0844b7a8 +0x128:  movl   $0x5,0xc(%esp)
0844b7b0 +0x130:  movl   $0xbc22,0x8(%esp)
0844b7b8 +0x138:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjtE19__PRETTY_FUNCTION__,0x4(%esp)
0844b7c0 +0x140:  lea    -0x20(%ebp),%eax
0844b7c3 +0x143:  mov    %eax,(%esp)
0844b7c6 +0x146:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b7cb +0x14b:  mov    -0xc(%ebp),%eax
0844b7ce +0x14e:  mov    %eax,0x8(%esp)
0844b7d2 +0x152:  movl   $"[PURCAHSE BONUS] update purchase count (error:%s)",0x4(%esp)
0844b7da +0x15a:  lea    -0x20(%ebp),%eax
0844b7dd +0x15d:  mov    %eax,(%esp)
0844b7e0 +0x160:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b7e5 +0x165:  jmp    0844b7fc <+0x17c>
0844b7e7 +0x167:  mov    %edx,%ebx
0844b7e9 +0x169:  mov    %eax,%esi
0844b7eb +0x16b:  call   08725c30 <__cxa_end_catch>
0844b7f0 +0x170:  mov    %esi,%eax
0844b7f2 +0x172:  mov    %ebx,%edx
0844b7f4 +0x174:  mov    %eax,(%esp)
0844b7f7 +0x177:  call   08ae3750 <_Unwind_Resume>
0844b7fc +0x17c:  call   08725c30 <__cxa_end_catch>
0844b801 +0x181:  add    $0x40,%esp
0844b804 +0x184:  pop    %ebx
0844b805 +0x185:  pop    %esi
0844b806 +0x186:  pop    %ebp
0844b807 +0x187:  ret
```

## 反编译 C

```c
// DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount @ 0x844b680

/* DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount(unsigned int, unsigned short) */

void __thiscall
DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount
          (DB_UpdateCeraShopPurchaseCount *this,uint param_1,ushort param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0844b6a7 to 0844b78f has its CatchHandler @ 0844b790 */
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this_00 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(param_1,0);
  cVar1 = MySQL::set_query(this_00," upDate event_purchase_cnt set purchase_cnt=%d where m_id = %s "
                           ,(uint)param_2,uVar3);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08c59520;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return;
}
```
