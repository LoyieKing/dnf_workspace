# _selectPurchaseCount

`_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt`

`DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount(unsigned int, unsigned short&)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCeraShopPurchaseCount` | `0x0844b450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844b450  _ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt
#           DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount(unsigned int, unsigned short&)
# range [0x0844b450, 0x0844b67f]
0844b450 +0x000:  push   %ebp
0844b451 +0x001:  mov    %esp,%ebp
0844b453 +0x003:  push   %esi
0844b454 +0x004:  push   %ebx
0844b455 +0x005:  sub    $0x30,%esp
0844b458 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844b45d +0x00d:  movl   $0x0,0x8(%esp)
0844b465 +0x015:  movl   $0x9,0x4(%esp)
0844b46d +0x01d:  mov    %eax,(%esp)
0844b470 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844b475 +0x025:  mov    %eax,-0x10(%ebp)
0844b478 +0x028:  cmpl   $0x0,-0x10(%ebp)
0844b47c +0x02c:  jne    0844b4aa <+0x5a>
0844b47e +0x02e:  movl   $0x4,(%esp)
0844b485 +0x035:  call   08725800 <__cxa_allocate_exception>
0844b48a +0x03a:  mov    %eax,%edx
0844b48c +0x03c:  movl   $"handle_null",(%edx)
0844b492 +0x042:  movl   $0x0,0x8(%esp)
0844b49a +0x04a:  movl   $&_ZTIPKc,0x4(%esp)
0844b4a2 +0x052:  mov    %eax,(%esp)
0844b4a5 +0x055:  call   08724c50 <__cxa_throw>
0844b4aa +0x05a:  movl   $0x0,0x4(%esp)
0844b4b2 +0x062:  mov    0xc(%ebp),%eax
0844b4b5 +0x065:  mov    %eax,(%esp)
0844b4b8 +0x068:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844b4bd +0x06d:  mov    %eax,0x8(%esp)
0844b4c1 +0x071:  movl   $" seLect purchase_cnt from event_purchase_cnt where m_id = %s ",0x4(%esp)
0844b4c9 +0x079:  mov    -0x10(%ebp),%eax
0844b4cc +0x07c:  mov    %eax,(%esp)
0844b4cf +0x07f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844b4d4 +0x084:  xor    $0x1,%eax
0844b4d7 +0x087:  test   %al,%al
0844b4d9 +0x089:  je     0844b507 <+0xb7>
0844b4db +0x08b:  movl   $0x4,(%esp)
0844b4e2 +0x092:  call   08725800 <__cxa_allocate_exception>
0844b4e7 +0x097:  mov    %eax,%edx
0844b4e9 +0x099:  movl   $"set_query",(%edx)
0844b4ef +0x09f:  movl   $0x0,0x8(%esp)
0844b4f7 +0x0a7:  movl   $&_ZTIPKc,0x4(%esp)
0844b4ff +0x0af:  mov    %eax,(%esp)
0844b502 +0x0b2:  call   08724c50 <__cxa_throw>
0844b507 +0x0b7:  movl   $0x1,0x4(%esp)
0844b50f +0x0bf:  mov    -0x10(%ebp),%eax
0844b512 +0x0c2:  mov    %eax,(%esp)
0844b515 +0x0c5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844b51a +0x0ca:  xor    $0x1,%eax
0844b51d +0x0cd:  test   %al,%al
0844b51f +0x0cf:  je     0844b54d <+0xfd>
0844b521 +0x0d1:  movl   $0x4,(%esp)
0844b528 +0x0d8:  call   08725800 <__cxa_allocate_exception>
0844b52d +0x0dd:  mov    %eax,%edx
0844b52f +0x0df:  movl   $"exec",(%edx)
0844b535 +0x0e5:  movl   $0x0,0x8(%esp)
0844b53d +0x0ed:  movl   $&_ZTIPKc,0x4(%esp)
0844b545 +0x0f5:  mov    %eax,(%esp)
0844b548 +0x0f8:  call   08724c50 <__cxa_throw>
0844b54d +0x0fd:  mov    -0x10(%ebp),%eax
0844b550 +0x100:  mov    %eax,(%esp)
0844b553 +0x103:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844b558 +0x108:  cmp    $0x1,%eax
0844b55b +0x10b:  sete   %al
0844b55e +0x10e:  test   %al,%al
0844b560 +0x110:  je     0844b5f1 <+0x1a1>
0844b566 +0x116:  mov    -0x10(%ebp),%eax
0844b569 +0x119:  mov    %eax,(%esp)
0844b56c +0x11c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844b571 +0x121:  xor    $0x1,%eax
0844b574 +0x124:  test   %al,%al
0844b576 +0x126:  je     0844b5a4 <+0x154>
0844b578 +0x128:  movl   $0x4,(%esp)
0844b57f +0x12f:  call   08725800 <__cxa_allocate_exception>
0844b584 +0x134:  mov    %eax,%edx
0844b586 +0x136:  movl   $"fetch",(%edx)
0844b58c +0x13c:  movl   $0x0,0x8(%esp)
0844b594 +0x144:  movl   $&_ZTIPKc,0x4(%esp)
0844b59c +0x14c:  mov    %eax,(%esp)
0844b59f +0x14f:  call   08724c50 <__cxa_throw>
0844b5a4 +0x154:  mov    0x10(%ebp),%eax
0844b5a7 +0x157:  mov    %eax,0x8(%esp)
0844b5ab +0x15b:  movl   $0x0,0x4(%esp)
0844b5b3 +0x163:  mov    -0x10(%ebp),%eax
0844b5b6 +0x166:  mov    %eax,(%esp)
0844b5b9 +0x169:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0844b5be +0x16e:  xor    $0x1,%eax
0844b5c1 +0x171:  test   %al,%al
0844b5c3 +0x173:  je     0844b5f9 <+0x1a9>
0844b5c5 +0x175:  movl   $0x4,(%esp)
0844b5cc +0x17c:  call   08725800 <__cxa_allocate_exception>
0844b5d1 +0x181:  mov    %eax,%edx
0844b5d3 +0x183:  movl   $"get_ushort",(%edx)
0844b5d9 +0x189:  movl   $0x0,0x8(%esp)
0844b5e1 +0x191:  movl   $&_ZTIPKc,0x4(%esp)
0844b5e9 +0x199:  mov    %eax,(%esp)
0844b5ec +0x19c:  call   08724c50 <__cxa_throw>
0844b5f1 +0x1a1:  mov    0x10(%ebp),%eax
0844b5f4 +0x1a4:  movw   $0x0,(%eax)
0844b5f9 +0x1a9:  mov    $0x1,%ebx
0844b5fe +0x1ae:  jmp    0844b676 <+0x226>
0844b600 +0x1b0:  cmp    $0x1,%edx
0844b603 +0x1b3:  je     0844b60d <+0x1bd>
0844b605 +0x1b5:  mov    %eax,(%esp)
0844b608 +0x1b8:  call   08ae3750 <_Unwind_Resume>
0844b60d +0x1bd:  mov    %eax,(%esp)
0844b610 +0x1c0:  call   08725ce0 <__cxa_begin_catch>
0844b615 +0x1c5:  mov    %eax,-0xc(%ebp)
0844b618 +0x1c8:  movl   $0x5,0xc(%esp)
0844b620 +0x1d0:  movl   $0xbc0b,0x8(%esp)
0844b628 +0x1d8:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRtE19__PRETTY_FUNCTION__,0x4(%esp)
0844b630 +0x1e0:  lea    -0x20(%ebp),%eax
0844b633 +0x1e3:  mov    %eax,(%esp)
0844b636 +0x1e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b63b +0x1eb:  mov    -0xc(%ebp),%eax
0844b63e +0x1ee:  mov    %eax,0x8(%esp)
0844b642 +0x1f2:  movl   $"[PURCAHSE BONUS] select purchase count (error:%s)",0x4(%esp)
0844b64a +0x1fa:  lea    -0x20(%ebp),%eax
0844b64d +0x1fd:  mov    %eax,(%esp)
0844b650 +0x200:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b655 +0x205:  mov    $0x0,%ebx
0844b65a +0x20a:  call   08725c30 <__cxa_end_catch>
0844b65f +0x20f:  jmp    0844b676 <+0x226>
0844b661 +0x211:  mov    %edx,%ebx
0844b663 +0x213:  mov    %eax,%esi
0844b665 +0x215:  call   08725c30 <__cxa_end_catch>
0844b66a +0x21a:  mov    %esi,%eax
0844b66c +0x21c:  mov    %ebx,%edx
0844b66e +0x21e:  mov    %eax,(%esp)
0844b671 +0x221:  call   08ae3750 <_Unwind_Resume>
0844b676 +0x226:  mov    %ebx,%eax
0844b678 +0x228:  add    $0x30,%esp
0844b67b +0x22b:  pop    %ebx
0844b67c +0x22c:  pop    %esi
0844b67d +0x22d:  pop    %ebp
0844b67e +0x22e:  ret
0844b67f +0x22f:  nop
```

## 反编译 C

```c
// DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount @ 0x844b450

/* DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount(unsigned int, unsigned short&) */

undefined4 __thiscall
DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount
          (DB_UpdateCeraShopPurchaseCount *this,uint param_1,ushort *param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
                    /* try { // try from 0844b470 to 0844b5f0 has its CatchHandler @ 0844b600 */
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this_00 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(param_1,0);
  cVar1 = MySQL::set_query(this_00," seLect purchase_cnt from event_purchase_cnt where m_id = %s ",
                           uVar3);
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
  iVar4 = MySQL::get_n_rows(this_00);
  if (iVar4 == 1) {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::get_ushort(this_00,0,param_2);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "get_ushort";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
  }
  else {
    *param_2 = 0;
  }
  return 1;
}
```
