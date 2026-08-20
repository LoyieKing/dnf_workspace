# dispatch

`_ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream`

`DB_UpdateInventoryCapacity::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateInventoryCapacity` | `0x08444bea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444bea  _ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream
#           DB_UpdateInventoryCapacity::dispatch(int, int, Stream*)
# range [0x08444bea, 0x08444d11]
08444bea +0x000:  push   %ebp
08444beb +0x001:  mov    %esp,%ebp
08444bed +0x003:  push   %esi
08444bee +0x004:  push   %ebx
08444bef +0x005:  sub    $0x30,%esp
08444bf2 +0x008:  movl   $0x0,-0x20(%ebp)
08444bf9 +0x00f:  lea    -0x20(%ebp),%eax
08444bfc +0x012:  mov    %eax,0x4(%esp)
08444c00 +0x016:  mov    0x14(%ebp),%eax
08444c03 +0x019:  mov    %eax,(%esp)
08444c06 +0x01c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08444c0b +0x021:  mov    -0x20(%ebp),%eax
08444c0e +0x024:  mov    %eax,%edx
08444c10 +0x026:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08444c15 +0x02b:  mov    %edx,0x8(%esp)
08444c19 +0x02f:  movl   $0x3,0x4(%esp)
08444c21 +0x037:  mov    %eax,(%esp)
08444c24 +0x03a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08444c29 +0x03f:  mov    %eax,-0xc(%ebp)
08444c2c +0x042:  movl   $0x0,-0x24(%ebp)
08444c33 +0x049:  movl   $0x0,-0x28(%ebp)
08444c3a +0x050:  lea    -0x24(%ebp),%eax
08444c3d +0x053:  mov    %eax,0x4(%esp)
08444c41 +0x057:  mov    0x14(%ebp),%eax
08444c44 +0x05a:  mov    %eax,(%esp)
08444c47 +0x05d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08444c4c +0x062:  lea    -0x28(%ebp),%eax
08444c4f +0x065:  mov    %eax,0x4(%esp)
08444c53 +0x069:  mov    0x14(%ebp),%eax
08444c56 +0x06c:  mov    %eax,(%esp)
08444c59 +0x06f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08444c5e +0x074:  mov    -0x24(%ebp),%edx
08444c61 +0x077:  mov    -0x28(%ebp),%eax
08444c64 +0x07a:  mov    %edx,0xc(%esp)
08444c68 +0x07e:  mov    %eax,0x8(%esp)
08444c6c +0x082:  movl   $"upDate inventory set inventory_capacity=%d where charac_no=%u",0x4(%esp)
08444c74 +0x08a:  mov    -0xc(%ebp),%eax
08444c77 +0x08d:  mov    %eax,(%esp)
08444c7a +0x090:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08444c7f +0x095:  movl   $0x1,0x4(%esp)
08444c87 +0x09d:  mov    -0xc(%ebp),%eax
08444c8a +0x0a0:  mov    %eax,(%esp)
08444c8d +0x0a3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444c92 +0x0a8:  xor    $0x1,%eax
08444c95 +0x0ab:  test   %al,%al
08444c97 +0x0ad:  jne    08444caa <+0xc0>
08444c99 +0x0af:  mov    -0xc(%ebp),%eax
08444c9c +0x0b2:  mov    %eax,(%esp)
08444c9f +0x0b5:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08444ca4 +0x0ba:  or     %edx,%eax
08444ca6 +0x0bc:  test   %eax,%eax
08444ca8 +0x0be:  jne    08444cb1 <+0xc7>
08444caa +0x0c0:  mov    $0x1,%eax
08444caf +0x0c5:  jmp    08444cb6 <+0xcc>
08444cb1 +0x0c7:  mov    $0x0,%eax
08444cb6 +0x0cc:  test   %al,%al
08444cb8 +0x0ce:  je     08444d05 <+0x11b>
08444cba +0x0d0:  mov    -0x24(%ebp),%esi
08444cbd +0x0d3:  mov    -0x28(%ebp),%ebx
08444cc0 +0x0d6:  movl   $0x5,0xc(%esp)
08444cc8 +0x0de:  movl   $0xabc8,0x8(%esp)
08444cd0 +0x0e6:  movl   $&_ZZN26DB_UpdateInventoryCapacity8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08444cd8 +0x0ee:  lea    -0x1c(%ebp),%eax
08444cdb +0x0f1:  mov    %eax,(%esp)
08444cde +0x0f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08444ce3 +0x0f9:  mov    %esi,0xc(%esp)
08444ce7 +0x0fd:  mov    %ebx,0x8(%esp)
08444ceb +0x101:  movl   $"upDate inventory set inventory_capacity=%d where charac_no=%u",0x4(%esp)
08444cf3 +0x109:  lea    -0x1c(%ebp),%eax
08444cf6 +0x10c:  mov    %eax,(%esp)
08444cf9 +0x10f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08444cfe +0x114:  mov    $0x0,%eax
08444d03 +0x119:  jmp    08444d0a <+0x120>
08444d05 +0x11b:  mov    $0x1,%eax
08444d0a +0x120:  add    $0x30,%esp
08444d0d +0x123:  pop    %ebx
08444d0e +0x124:  pop    %esi
08444d0f +0x125:  pop    %ebp
08444d10 +0x126:  ret
08444d11 +0x127:  nop
```

## 反编译 C

```c
// DB_UpdateInventoryCapacity::dispatch @ 0x8444bea

/* DB_UpdateInventoryCapacity::dispatch(int, int, Stream*) */

bool DB_UpdateInventoryCapacity::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  int local_2c;
  uint local_28;
  int local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_24 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,local_24);
  local_28 = 0;
  local_2c = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  MySQL::set_query(local_10,"upDate inventory set inventory_capacity=%d where charac_no=%u",local_2c
                   ,local_28);
  cVar4 = MySQL::exec(local_10,true);
  if ((cVar4 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = local_28;
  iVar2 = local_2c;
  if (bVar1) {
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_UpdateInventoryCapacity::dispatch(int, int, Stream*)",0xabc8
                       ,5);
    cMyTrace::operator()
              (local_20,"upDate inventory set inventory_capacity=%d where charac_no=%u",iVar2,uVar3)
    ;
  }
  return !bVar1;
}
```
