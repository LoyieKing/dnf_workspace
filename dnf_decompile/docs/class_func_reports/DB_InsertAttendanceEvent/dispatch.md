# dispatch

`_ZN24DB_InsertAttendanceEvent8dispatchEiiP6Stream`

`DB_InsertAttendanceEvent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertAttendanceEvent` | `0x08448a48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448a48  _ZN24DB_InsertAttendanceEvent8dispatchEiiP6Stream
#           DB_InsertAttendanceEvent::dispatch(int, int, Stream*)
# range [0x08448a48, 0x08448afd]
08448a48 +0x00:  push   %ebp
08448a49 +0x01:  mov    %esp,%ebp
08448a4b +0x03:  push   %ebx
08448a4c +0x04:  sub    $0x24,%esp
08448a4f +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448a54 +0x0c:  movl   $0x0,0x8(%esp)
08448a5c +0x14:  movl   $0x9,0x4(%esp)
08448a64 +0x1c:  mov    %eax,(%esp)
08448a67 +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08448a6c +0x24:  mov    %eax,-0xc(%ebp)
08448a6f +0x27:  movl   $0x0,-0x10(%ebp)
08448a76 +0x2e:  movl   $0x0,-0x14(%ebp)
08448a7d +0x35:  lea    -0x10(%ebp),%eax
08448a80 +0x38:  mov    %eax,0x4(%esp)
08448a84 +0x3c:  mov    0x14(%ebp),%eax
08448a87 +0x3f:  mov    %eax,(%esp)
08448a8a +0x42:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08448a8f +0x47:  lea    -0x14(%ebp),%eax
08448a92 +0x4a:  mov    %eax,0x4(%esp)
08448a96 +0x4e:  mov    0x14(%ebp),%eax
08448a99 +0x51:  mov    %eax,(%esp)
08448a9c +0x54:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08448aa1 +0x59:  mov    -0x14(%ebp),%ebx
08448aa4 +0x5c:  mov    -0x10(%ebp),%eax
08448aa7 +0x5f:  movl   $0x0,0x4(%esp)
08448aaf +0x67:  mov    %eax,(%esp)
08448ab2 +0x6a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448ab7 +0x6f:  mov    %ebx,0xc(%esp)
08448abb +0x73:  mov    %eax,0x8(%esp)
08448abf +0x77:  movl   $"inSert into event_1207_attendance(m_id, charac_no, occ_date) \t\t\t\t  values(%s, %u, now())",0x4(%esp)
08448ac7 +0x7f:  mov    -0xc(%ebp),%eax
08448aca +0x82:  mov    %eax,(%esp)
08448acd +0x85:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08448ad2 +0x8a:  movl   $0x1,0x4(%esp)
08448ada +0x92:  mov    -0xc(%ebp),%eax
08448add +0x95:  mov    %eax,(%esp)
08448ae0 +0x98:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08448ae5 +0x9d:  xor    $0x1,%eax
08448ae8 +0xa0:  test   %al,%al
08448aea +0xa2:  je     08448af3 <+0xab>
08448aec +0xa4:  mov    $0x0,%eax
08448af1 +0xa9:  jmp    08448af8 <+0xb0>
08448af3 +0xab:  mov    $0x1,%eax
08448af8 +0xb0:  add    $0x24,%esp
08448afb +0xb3:  pop    %ebx
08448afc +0xb4:  pop    %ebp
08448afd +0xb5:  ret
```

## 反编译 C

```c
// DB_InsertAttendanceEvent::dispatch @ 0x8448a48

/* DB_InsertAttendanceEvent::dispatch(int, int, Stream*) */

bool DB_InsertAttendanceEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar1 = local_18;
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into event_1207_attendance(m_id, charac_no, occ_date) \t\t\t\t  values(%s, %u, now())"
                   ,uVar3,uVar1);
  cVar2 = MySQL::exec(local_10,true);
  return cVar2 == '\x01';
}
```
