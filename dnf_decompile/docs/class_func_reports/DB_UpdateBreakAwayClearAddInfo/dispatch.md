# dispatch

`_ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream`

`DB_UpdateBreakAwayClearAddInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayClearAddInfo` | `0x0843848c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843848c  _ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream
#           DB_UpdateBreakAwayClearAddInfo::dispatch(int, int, Stream*)
# range [0x0843848c, 0x08438569]
0843848c +0x00:  push   %ebp
0843848d +0x01:  mov    %esp,%ebp
0843848f +0x03:  sub    $0x38,%esp
08438492 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08438497 +0x0b:  movl   $0x0,0x8(%esp)
0843849f +0x13:  movl   $0x6,0x4(%esp)
084384a7 +0x1b:  mov    %eax,(%esp)
084384aa +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084384af +0x23:  mov    %eax,-0xc(%ebp)
084384b2 +0x26:  movl   $0x0,-0x10(%ebp)
084384b9 +0x2d:  lea    -0x10(%ebp),%eax
084384bc +0x30:  mov    %eax,0x4(%esp)
084384c0 +0x34:  mov    0x14(%ebp),%eax
084384c3 +0x37:  mov    %eax,(%esp)
084384c6 +0x3a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084384cb +0x3f:  mov    -0x10(%ebp),%eax
084384ce +0x42:  movl   $0x0,0x4(%esp)
084384d6 +0x4a:  mov    %eax,(%esp)
084384d9 +0x4d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084384de +0x52:  mov    %eax,0x8(%esp)
084384e2 +0x56:  movl   $"upDate churn_member_info set add_info=-1 where m_id=%s",0x4(%esp)
084384ea +0x5e:  mov    -0xc(%ebp),%eax
084384ed +0x61:  mov    %eax,(%esp)
084384f0 +0x64:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084384f5 +0x69:  movl   $0x1,0x4(%esp)
084384fd +0x71:  mov    -0xc(%ebp),%eax
08438500 +0x74:  mov    %eax,(%esp)
08438503 +0x77:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438508 +0x7c:  xor    $0x1,%eax
0843850b +0x7f:  test   %al,%al
0843850d +0x81:  jne    08438520 <+0x94>
0843850f +0x83:  mov    -0xc(%ebp),%eax
08438512 +0x86:  mov    %eax,(%esp)
08438515 +0x89:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843851a +0x8e:  or     %edx,%eax
0843851c +0x90:  test   %eax,%eax
0843851e +0x92:  jne    08438527 <+0x9b>
08438520 +0x94:  mov    $0x1,%eax
08438525 +0x99:  jmp    0843852c <+0xa0>
08438527 +0x9b:  mov    $0x0,%eax
0843852c +0xa0:  test   %al,%al
0843852e +0xa2:  je     08438563 <+0xd7>
08438530 +0xa4:  movl   $"BREAK_AWAY : ADD INFO UPDATE ERROR!!",0x10(%esp)
08438538 +0xac:  movl   $0x85f4,0xc(%esp)
08438540 +0xb4:  movl   $&_ZZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08438548 +0xbc:  movl   $"DBThread.cpp",0x4(%esp)
08438550 +0xc4:  movl   $0x1,(%esp)
08438557 +0xcb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0843855c +0xd0:  mov    $0x0,%eax
08438561 +0xd5:  jmp    08438568 <+0xdc>
08438563 +0xd7:  mov    $0x1,%eax
08438568 +0xdc:  leave
08438569 +0xdd:  ret
```

## 反编译 C

```c
// DB_UpdateBreakAwayClearAddInfo::dispatch @ 0x843848c

/* DB_UpdateBreakAwayClearAddInfo::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayClearAddInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate churn_member_info set add_info=-1 where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_UpdateBreakAwayClearAddInfo::dispatch(int, int, Stream*)",0x85f4,
               "BREAK_AWAY : ADD INFO UPDATE ERROR!!");
  }
  return !bVar1;
}
```
