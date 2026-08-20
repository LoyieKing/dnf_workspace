# dispatch

`_ZN21DB_InsertQueueSizeLog8dispatchEiiP6Stream`

`DB_InsertQueueSizeLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertQueueSizeLog` | `0x084225a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084225a8  _ZN21DB_InsertQueueSizeLog8dispatchEiiP6Stream
#           DB_InsertQueueSizeLog::dispatch(int, int, Stream*)
# range [0x084225a8, 0x0842267f]
084225a8 +0x00:  push   %ebp
084225a9 +0x01:  mov    %esp,%ebp
084225ab +0x03:  sub    $0x38,%esp
084225ae +0x06:  movl   $0x0,-0x20(%ebp)
084225b5 +0x0d:  movl   $0x0,-0x24(%ebp)
084225bc +0x14:  lea    -0x20(%ebp),%eax
084225bf +0x17:  mov    %eax,0x4(%esp)
084225c3 +0x1b:  mov    0x14(%ebp),%eax
084225c6 +0x1e:  mov    %eax,(%esp)
084225c9 +0x21:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084225ce +0x26:  lea    -0x24(%ebp),%eax
084225d1 +0x29:  mov    %eax,0x4(%esp)
084225d5 +0x2d:  mov    0x14(%ebp),%eax
084225d8 +0x30:  mov    %eax,(%esp)
084225db +0x33:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084225e0 +0x38:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084225e5 +0x3d:  movl   $0x0,0x8(%esp)
084225ed +0x45:  movl   $0x4,0x4(%esp)
084225f5 +0x4d:  mov    %eax,(%esp)
084225f8 +0x50:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084225fd +0x55:  mov    %eax,-0xc(%ebp)
08422600 +0x58:  mov    -0x20(%ebp),%edx
08422603 +0x5b:  mov    -0x24(%ebp),%eax
08422606 +0x5e:  mov    %edx,0xc(%esp)
0842260a +0x62:  mov    %eax,0x8(%esp)
0842260e +0x66:  movl   $"inSert into dnf_dbq_log(occ_time,channel_no,dbq) values(NOW(),%d,%d)",0x4(%esp)
08422616 +0x6e:  mov    -0xc(%ebp),%eax
08422619 +0x71:  mov    %eax,(%esp)
0842261c +0x74:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08422621 +0x79:  movl   $0x1,0x4(%esp)
08422629 +0x81:  mov    -0xc(%ebp),%eax
0842262c +0x84:  mov    %eax,(%esp)
0842262f +0x87:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08422634 +0x8c:  xor    $0x1,%eax
08422637 +0x8f:  test   %al,%al
08422639 +0x91:  je     08422678 <+0xd0>
0842263b +0x93:  movl   $0x5,0xc(%esp)
08422643 +0x9b:  movl   $0x5ad8,0x8(%esp)
0842264b +0xa3:  movl   $&_ZZN21DB_InsertQueueSizeLog8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08422653 +0xab:  lea    -0x1c(%ebp),%eax
08422656 +0xae:  mov    %eax,(%esp)
08422659 +0xb1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842265e +0xb6:  movl   $"DB_InsertQueueSizeLog, exec ERROR",0x4(%esp)
08422666 +0xbe:  lea    -0x1c(%ebp),%eax
08422669 +0xc1:  mov    %eax,(%esp)
0842266c +0xc4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08422671 +0xc9:  mov    $0x0,%eax
08422676 +0xce:  jmp    0842267d <+0xd5>
08422678 +0xd0:  mov    $0x1,%eax
0842267d +0xd5:  leave
0842267e +0xd6:  ret
0842267f +0xd7:  nop
```

## 反编译 C

```c
// DB_InsertQueueSizeLog::dispatch @ 0x84225a8

/* DB_InsertQueueSizeLog::dispatch(int, int, Stream*) */

bool DB_InsertQueueSizeLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_28;
  int local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_24 = 0;
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(local_10,"inSert into dnf_dbq_log(occ_time,channel_no,dbq) values(NOW(),%d,%d)",
                   local_28,local_24);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_20,"virtual bool DB_InsertQueueSizeLog::dispatch(int, int, Stream*)",
                       0x5ad8,5);
    cMyTrace::operator()(local_20,"DB_InsertQueueSizeLog, exec ERROR");
  }
  return cVar1 == '\x01';
}
```
