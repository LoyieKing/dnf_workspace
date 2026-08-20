# _insertPurchaseCount

`_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj`

`DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCeraShopPurchaseCount` | `0x0844b808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844b808  _ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj
#           DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount(unsigned int)
# range [0x0844b808, 0x0844b981]
0844b808 +0x000:  push   %ebp
0844b809 +0x001:  mov    %esp,%ebp
0844b80b +0x003:  push   %esi
0844b80c +0x004:  push   %ebx
0844b80d +0x005:  sub    $0x30,%esp
0844b810 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844b815 +0x00d:  movl   $0x0,0x8(%esp)
0844b81d +0x015:  movl   $0x9,0x4(%esp)
0844b825 +0x01d:  mov    %eax,(%esp)
0844b828 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844b82d +0x025:  mov    %eax,-0x10(%ebp)
0844b830 +0x028:  cmpl   $0x0,-0x10(%ebp)
0844b834 +0x02c:  jne    0844b862 <+0x5a>
0844b836 +0x02e:  movl   $0x4,(%esp)
0844b83d +0x035:  call   08725800 <__cxa_allocate_exception>
0844b842 +0x03a:  mov    %eax,%edx
0844b844 +0x03c:  movl   $"handle_null",(%edx)
0844b84a +0x042:  movl   $0x0,0x8(%esp)
0844b852 +0x04a:  movl   $&_ZTIPKc,0x4(%esp)
0844b85a +0x052:  mov    %eax,(%esp)
0844b85d +0x055:  call   08724c50 <__cxa_throw>
0844b862 +0x05a:  movl   $0x0,0x4(%esp)
0844b86a +0x062:  mov    0xc(%ebp),%eax
0844b86d +0x065:  mov    %eax,(%esp)
0844b870 +0x068:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844b875 +0x06d:  mov    %eax,0x8(%esp)
0844b879 +0x071:  movl   $" inSert into event_purchase_cnt(m_id, purchase_cnt) values(%s, 1) ",0x4(%esp)
0844b881 +0x079:  mov    -0x10(%ebp),%eax
0844b884 +0x07c:  mov    %eax,(%esp)
0844b887 +0x07f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844b88c +0x084:  xor    $0x1,%eax
0844b88f +0x087:  test   %al,%al
0844b891 +0x089:  je     0844b8bf <+0xb7>
0844b893 +0x08b:  movl   $0x4,(%esp)
0844b89a +0x092:  call   08725800 <__cxa_allocate_exception>
0844b89f +0x097:  mov    %eax,%edx
0844b8a1 +0x099:  movl   $"set_query",(%edx)
0844b8a7 +0x09f:  movl   $0x0,0x8(%esp)
0844b8af +0x0a7:  movl   $&_ZTIPKc,0x4(%esp)
0844b8b7 +0x0af:  mov    %eax,(%esp)
0844b8ba +0x0b2:  call   08724c50 <__cxa_throw>
0844b8bf +0x0b7:  movl   $0x1,0x4(%esp)
0844b8c7 +0x0bf:  mov    -0x10(%ebp),%eax
0844b8ca +0x0c2:  mov    %eax,(%esp)
0844b8cd +0x0c5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844b8d2 +0x0ca:  xor    $0x1,%eax
0844b8d5 +0x0cd:  test   %al,%al
0844b8d7 +0x0cf:  je     0844b97a <+0x172>
0844b8dd +0x0d5:  movl   $0x4,(%esp)
0844b8e4 +0x0dc:  call   08725800 <__cxa_allocate_exception>
0844b8e9 +0x0e1:  mov    %eax,%edx
0844b8eb +0x0e3:  movl   $"exec",(%edx)
0844b8f1 +0x0e9:  movl   $0x0,0x8(%esp)
0844b8f9 +0x0f1:  movl   $&_ZTIPKc,0x4(%esp)
0844b901 +0x0f9:  mov    %eax,(%esp)
0844b904 +0x0fc:  call   08724c50 <__cxa_throw>
0844b909 +0x101:  cmp    $0x1,%edx
0844b90c +0x104:  je     0844b916 <+0x10e>
0844b90e +0x106:  mov    %eax,(%esp)
0844b911 +0x109:  call   08ae3750 <_Unwind_Resume>
0844b916 +0x10e:  mov    %eax,(%esp)
0844b919 +0x111:  call   08725ce0 <__cxa_begin_catch>
0844b91e +0x116:  mov    %eax,-0xc(%ebp)
0844b921 +0x119:  movl   $0x5,0xc(%esp)
0844b929 +0x121:  movl   $0xbc39,0x8(%esp)
0844b931 +0x129:  movl   $&_ZZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEjE19__PRETTY_FUNCTION__,0x4(%esp)
0844b939 +0x131:  lea    -0x20(%ebp),%eax
0844b93c +0x134:  mov    %eax,(%esp)
0844b93f +0x137:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844b944 +0x13c:  mov    -0xc(%ebp),%eax
0844b947 +0x13f:  mov    %eax,0x8(%esp)
0844b94b +0x143:  movl   $"[PURCAHSE BONUS] update purchase count (error:%s)",0x4(%esp)
0844b953 +0x14b:  lea    -0x20(%ebp),%eax
0844b956 +0x14e:  mov    %eax,(%esp)
0844b959 +0x151:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844b95e +0x156:  jmp    0844b975 <+0x16d>
0844b960 +0x158:  mov    %edx,%ebx
0844b962 +0x15a:  mov    %eax,%esi
0844b964 +0x15c:  call   08725c30 <__cxa_end_catch>
0844b969 +0x161:  mov    %esi,%eax
0844b96b +0x163:  mov    %ebx,%edx
0844b96d +0x165:  mov    %eax,(%esp)
0844b970 +0x168:  call   08ae3750 <_Unwind_Resume>
0844b975 +0x16d:  call   08725c30 <__cxa_end_catch>
0844b97a +0x172:  add    $0x30,%esp
0844b97d +0x175:  pop    %ebx
0844b97e +0x176:  pop    %esi
0844b97f +0x177:  pop    %ebp
0844b980 +0x178:  ret
0844b981 +0x179:  nop
```

## 反编译 C

```c
// DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount @ 0x844b808

/* DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount(unsigned int) */

void __thiscall
DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount
          (DB_UpdateCeraShopPurchaseCount *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0844b828 to 0844b908 has its CatchHandler @ 0844b909 */
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this_00 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(param_1,0);
  cVar1 = MySQL::set_query(this_00,
                           " inSert into event_purchase_cnt(m_id, purchase_cnt) values(%s, 1) ",
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
  return;
}
```
