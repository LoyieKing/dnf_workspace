# dispatch

`_ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream`

`DB_UpdateBreakAwayUvList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBreakAwayUvList` | `0x08438842` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08438842  _ZN24DB_UpdateBreakAwayUvList8dispatchEiiP6Stream
#           DB_UpdateBreakAwayUvList::dispatch(int, int, Stream*)
# range [0x08438842, 0x0843891f]
08438842 +0x00:  push   %ebp
08438843 +0x01:  mov    %esp,%ebp
08438845 +0x03:  sub    $0x38,%esp
08438848 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843884d +0x0b:  movl   $0x0,0x8(%esp)
08438855 +0x13:  movl   $0x6,0x4(%esp)
0843885d +0x1b:  mov    %eax,(%esp)
08438860 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08438865 +0x23:  mov    %eax,-0x14(%ebp)
08438868 +0x26:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0843886f +0x2d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08438874 +0x32:  mov    %eax,-0x10(%ebp)
08438877 +0x35:  movl   $0x0,-0x18(%ebp)
0843887e +0x3c:  lea    -0x18(%ebp),%eax
08438881 +0x3f:  mov    %eax,0x4(%esp)
08438885 +0x43:  mov    0x14(%ebp),%eax
08438888 +0x46:  mov    %eax,(%esp)
0843888b +0x49:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08438890 +0x4e:  mov    0x14(%ebp),%eax
08438893 +0x51:  mov    %eax,(%esp)
08438896 +0x54:  call   084536e8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x62fe>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x62fe
0843889b +0x59:  mov    %eax,-0xc(%ebp)
0843889e +0x5c:  mov    -0x18(%ebp),%eax
084388a1 +0x5f:  movl   $0x0,0x4(%esp)
084388a9 +0x67:  mov    %eax,(%esp)
084388ac +0x6a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084388b1 +0x6f:  mov    -0xc(%ebp),%edx
084388b4 +0x72:  mov    %eax,0x10(%esp)
084388b8 +0x76:  mov    -0x10(%ebp),%eax
084388bb +0x79:  mov    %eax,0xc(%esp)
084388bf +0x7d:  mov    %edx,0x8(%esp)
084388c3 +0x81:  movl   $"upDate churn_member_info set play_info ='%s', last_update_time=%u where m_id=%s",0x4(%esp)
084388cb +0x89:  mov    -0x14(%ebp),%eax
084388ce +0x8c:  mov    %eax,(%esp)
084388d1 +0x8f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084388d6 +0x94:  movl   $0x1,0x4(%esp)
084388de +0x9c:  mov    -0x14(%ebp),%eax
084388e1 +0x9f:  mov    %eax,(%esp)
084388e4 +0xa2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084388e9 +0xa7:  xor    $0x1,%eax
084388ec +0xaa:  test   %al,%al
084388ee +0xac:  jne    08438901 <+0xbf>
084388f0 +0xae:  mov    -0x14(%ebp),%eax
084388f3 +0xb1:  mov    %eax,(%esp)
084388f6 +0xb4:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084388fb +0xb9:  or     %edx,%eax
084388fd +0xbb:  test   %eax,%eax
084388ff +0xbd:  jne    08438908 <+0xc6>
08438901 +0xbf:  mov    $0x1,%eax
08438906 +0xc4:  jmp    0843890d <+0xcb>
08438908 +0xc6:  mov    $0x0,%eax
0843890d +0xcb:  test   %al,%al
0843890f +0xcd:  je     08438918 <+0xd6>
08438911 +0xcf:  mov    $0x0,%eax
08438916 +0xd4:  jmp    0843891d <+0xdb>
08438918 +0xd6:  mov    $0x1,%eax
0843891d +0xdb:  leave
0843891e +0xdc:  ret
0843891f +0xdd:  nop
```

## 反编译 C

```c
// DB_UpdateBreakAwayUvList::dispatch @ 0x8438842

/* DB_UpdateBreakAwayUvList::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayUvList::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_1c;
  MySQL *local_18;
  undefined4 local_14;
  SIG_BREAK_AWAY_UV_LIST *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = Stream::GetOutBuffer<SIG_BREAK_AWAY_UV_LIST>(in_stack_00000010);
  uVar3 = NumberToString(local_1c,0);
  MySQL::set_query(local_18,
                   "upDate churn_member_info set play_info =\'%s\', last_update_time=%u where m_id=%s"
                   ,local_10,local_14,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_18), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
