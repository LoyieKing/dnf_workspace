# dispatch

`_ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream`

`DB_UpdateBreakAwayRuckPoint::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayRuckPoint` | `0x08438300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08438300  _ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream
#           DB_UpdateBreakAwayRuckPoint::dispatch(int, int, Stream*)
# range [0x08438300, 0x084383b9]
08438300 +0x00:  push   %ebp
08438301 +0x01:  mov    %esp,%ebp
08438303 +0x03:  sub    $0x28,%esp
08438306 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843830b +0x0b:  movl   $0x0,0x8(%esp)
08438313 +0x13:  movl   $0x6,0x4(%esp)
0843831b +0x1b:  mov    %eax,(%esp)
0843831e +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08438323 +0x23:  mov    %eax,-0x10(%ebp)
08438326 +0x26:  movl   $0x0,-0x14(%ebp)
0843832d +0x2d:  movl   $0x0,-0xc(%ebp)
08438334 +0x34:  lea    -0x14(%ebp),%eax
08438337 +0x37:  mov    %eax,0x4(%esp)
0843833b +0x3b:  mov    0x14(%ebp),%eax
0843833e +0x3e:  mov    %eax,(%esp)
08438341 +0x41:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08438346 +0x46:  mov    -0x14(%ebp),%eax
08438349 +0x49:  movl   $0x0,0x4(%esp)
08438351 +0x51:  mov    %eax,(%esp)
08438354 +0x54:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08438359 +0x59:  mov    %eax,0x8(%esp)
0843835d +0x5d:  movl   $"upDate churn_member_info set luck_point=0 where m_id=%s",0x4(%esp)
08438365 +0x65:  mov    -0x10(%ebp),%eax
08438368 +0x68:  mov    %eax,(%esp)
0843836b +0x6b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438370 +0x70:  movl   $0x1,0x4(%esp)
08438378 +0x78:  mov    -0x10(%ebp),%eax
0843837b +0x7b:  mov    %eax,(%esp)
0843837e +0x7e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438383 +0x83:  xor    $0x1,%eax
08438386 +0x86:  test   %al,%al
08438388 +0x88:  jne    0843839b <+0x9b>
0843838a +0x8a:  mov    -0x10(%ebp),%eax
0843838d +0x8d:  mov    %eax,(%esp)
08438390 +0x90:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08438395 +0x95:  or     %edx,%eax
08438397 +0x97:  test   %eax,%eax
08438399 +0x99:  jne    084383a2 <+0xa2>
0843839b +0x9b:  mov    $0x1,%eax
084383a0 +0xa0:  jmp    084383a7 <+0xa7>
084383a2 +0xa2:  mov    $0x0,%eax
084383a7 +0xa7:  test   %al,%al
084383a9 +0xa9:  je     084383b2 <+0xb2>
084383ab +0xab:  mov    $0x0,%eax
084383b0 +0xb0:  jmp    084383b7 <+0xb7>
084383b2 +0xb2:  mov    $0x1,%eax
084383b7 +0xb7:  leave
084383b8 +0xb8:  ret
084383b9 +0xb9:  nop
```

## 反编译 C

```c
// DB_UpdateBreakAwayRuckPoint::dispatch @ 0x8438300

/* DB_UpdateBreakAwayRuckPoint::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayRuckPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_18;
  MySQL *local_14;
  undefined4 local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = 0;
  local_10 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar3 = NumberToString(local_18,0);
  MySQL::set_query(local_14,"upDate churn_member_info set luck_point=0 where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_14), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
