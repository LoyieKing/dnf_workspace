# dispatch

`_ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream`

`DB_UpdateBreakAwayDungeonClearCnt::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayDungeonClearCnt` | `0x084383ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084383ba  _ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream
#           DB_UpdateBreakAwayDungeonClearCnt::dispatch(int, int, Stream*)
# range [0x084383ba, 0x0843848b]
084383ba +0x00:  push   %ebp
084383bb +0x01:  mov    %esp,%ebp
084383bd +0x03:  sub    $0x28,%esp
084383c0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084383c5 +0x0b:  movl   $0x0,0x8(%esp)
084383cd +0x13:  movl   $0x6,0x4(%esp)
084383d5 +0x1b:  mov    %eax,(%esp)
084383d8 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084383dd +0x23:  mov    %eax,-0xc(%ebp)
084383e0 +0x26:  movl   $0x0,-0x10(%ebp)
084383e7 +0x2d:  movl   $0x0,-0x14(%ebp)
084383ee +0x34:  lea    -0x10(%ebp),%eax
084383f1 +0x37:  mov    %eax,0x4(%esp)
084383f5 +0x3b:  mov    0x14(%ebp),%eax
084383f8 +0x3e:  mov    %eax,(%esp)
084383fb +0x41:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08438400 +0x46:  lea    -0x14(%ebp),%eax
08438403 +0x49:  mov    %eax,0x4(%esp)
08438407 +0x4d:  mov    0x14(%ebp),%eax
0843840a +0x50:  mov    %eax,(%esp)
0843840d +0x53:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08438412 +0x58:  mov    -0x10(%ebp),%eax
08438415 +0x5b:  movl   $0x0,0x4(%esp)
0843841d +0x63:  mov    %eax,(%esp)
08438420 +0x66:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08438425 +0x6b:  mov    -0x14(%ebp),%edx
08438428 +0x6e:  mov    %eax,0xc(%esp)
0843842c +0x72:  mov    %edx,0x8(%esp)
08438430 +0x76:  movl   $"upDate churn_member_info set add_info=%d where m_id=%s",0x4(%esp)
08438438 +0x7e:  mov    -0xc(%ebp),%eax
0843843b +0x81:  mov    %eax,(%esp)
0843843e +0x84:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08438443 +0x89:  movl   $0x1,0x4(%esp)
0843844b +0x91:  mov    -0xc(%ebp),%eax
0843844e +0x94:  mov    %eax,(%esp)
08438451 +0x97:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08438456 +0x9c:  xor    $0x1,%eax
08438459 +0x9f:  test   %al,%al
0843845b +0xa1:  jne    0843846e <+0xb4>
0843845d +0xa3:  mov    -0xc(%ebp),%eax
08438460 +0xa6:  mov    %eax,(%esp)
08438463 +0xa9:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08438468 +0xae:  or     %edx,%eax
0843846a +0xb0:  test   %eax,%eax
0843846c +0xb2:  jne    08438475 <+0xbb>
0843846e +0xb4:  mov    $0x1,%eax
08438473 +0xb9:  jmp    0843847a <+0xc0>
08438475 +0xbb:  mov    $0x0,%eax
0843847a +0xc0:  test   %al,%al
0843847c +0xc2:  je     08438485 <+0xcb>
0843847e +0xc4:  mov    $0x0,%eax
08438483 +0xc9:  jmp    0843848a <+0xd0>
08438485 +0xcb:  mov    $0x1,%eax
0843848a +0xd0:  leave
0843848b +0xd1:  ret
```

## 反编译 C

```c
// DB_UpdateBreakAwayDungeonClearCnt::dispatch @ 0x84383ba

/* DB_UpdateBreakAwayDungeonClearCnt::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayDungeonClearCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate churn_member_info set add_info=%d where m_id=%s",local_18,uVar3)
  ;
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
