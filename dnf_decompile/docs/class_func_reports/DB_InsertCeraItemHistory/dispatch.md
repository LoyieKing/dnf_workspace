# dispatch

`_ZN24DB_InsertCeraItemHistory8dispatchEiiP6Stream`

`DB_InsertCeraItemHistory::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertCeraItemHistory` | `0x08445032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08445032  _ZN24DB_InsertCeraItemHistory8dispatchEiiP6Stream
#           DB_InsertCeraItemHistory::dispatch(int, int, Stream*)
# range [0x08445032, 0x08445119]
08445032 +0x00:  push   %ebp
08445033 +0x01:  mov    %esp,%ebp
08445035 +0x03:  push   %ebx
08445036 +0x04:  sub    $0x44,%esp
08445039 +0x07:  movl   $0x0,-0x10(%ebp)
08445040 +0x0e:  movl   $0x0,-0x14(%ebp)
08445047 +0x15:  movl   $0x0,-0x18(%ebp)
0844504e +0x1c:  movb   $0x0,-0x19(%ebp)
08445052 +0x20:  lea    -0x18(%ebp),%eax
08445055 +0x23:  mov    %eax,0x4(%esp)
08445059 +0x27:  mov    0x14(%ebp),%eax
0844505c +0x2a:  mov    %eax,(%esp)
0844505f +0x2d:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08445064 +0x32:  lea    -0x10(%ebp),%eax
08445067 +0x35:  mov    %eax,0x4(%esp)
0844506b +0x39:  mov    0x14(%ebp),%eax
0844506e +0x3c:  mov    %eax,(%esp)
08445071 +0x3f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08445076 +0x44:  lea    -0x14(%ebp),%eax
08445079 +0x47:  mov    %eax,0x4(%esp)
0844507d +0x4b:  mov    0x14(%ebp),%eax
08445080 +0x4e:  mov    %eax,(%esp)
08445083 +0x51:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08445088 +0x56:  lea    -0x19(%ebp),%eax
0844508b +0x59:  mov    %eax,0x4(%esp)
0844508f +0x5d:  mov    0x14(%ebp),%eax
08445092 +0x60:  mov    %eax,(%esp)
08445095 +0x63:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
0844509a +0x68:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844509f +0x6d:  movl   $0x0,0x8(%esp)
084450a7 +0x75:  movl   $0x3,0x4(%esp)
084450af +0x7d:  mov    %eax,(%esp)
084450b2 +0x80:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084450b7 +0x85:  mov    %eax,-0xc(%ebp)
084450ba +0x88:  movzbl -0x19(%ebp),%eax
084450be +0x8c:  movsbl %al,%ebx
084450c1 +0x8f:  mov    -0x14(%ebp),%ecx
084450c4 +0x92:  mov    -0x10(%ebp),%edx
084450c7 +0x95:  mov    -0x18(%ebp),%eax
084450ca +0x98:  mov    %ebx,0x14(%esp)
084450ce +0x9c:  mov    %ecx,0x10(%esp)
084450d2 +0xa0:  mov    %edx,0xc(%esp)
084450d6 +0xa4:  mov    %eax,0x8(%esp)
084450da +0xa8:  movl   $"inSert into user_items_change_history(ui_id,from_charac_no,to_charac_no,occ_date,change_type) values(%u,%u,%u,now(),%u)",0x4(%esp)
084450e2 +0xb0:  mov    -0xc(%ebp),%eax
084450e5 +0xb3:  mov    %eax,(%esp)
084450e8 +0xb6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084450ed +0xbb:  movl   $0x1,0x4(%esp)
084450f5 +0xc3:  mov    -0xc(%ebp),%eax
084450f8 +0xc6:  mov    %eax,(%esp)
084450fb +0xc9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445100 +0xce:  xor    $0x1,%eax
08445103 +0xd1:  test   %al,%al
08445105 +0xd3:  je     0844510e <+0xdc>
08445107 +0xd5:  mov    $0x0,%eax
0844510c +0xda:  jmp    08445113 <+0xe1>
0844510e +0xdc:  mov    $0x1,%eax
08445113 +0xe1:  add    $0x44,%esp
08445116 +0xe4:  pop    %ebx
08445117 +0xe5:  pop    %ebp
08445118 +0xe6:  ret
08445119 +0xe7:  nop
```

## 反编译 C

```c
// DB_InsertCeraItemHistory::dispatch @ 0x8445032

/* DB_InsertCeraItemHistory::dispatch(int, int, Stream*) */

bool DB_InsertCeraItemHistory::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  char local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_1d = '\0';
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1d);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "inSert into user_items_change_history(ui_id,from_charac_no,to_charac_no,occ_date,change_type) values(%u,%u,%u,now(),%u)"
                   ,local_1c,local_14,local_18,(int)local_1d);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
