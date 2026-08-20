# dispatch

`_ZN30DB_DeletePowerWarStatueMessage8dispatchEiiP6Stream`

`DB_DeletePowerWarStatueMessage::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeletePowerWarStatueMessage` | `0x08437d4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437d4e  _ZN30DB_DeletePowerWarStatueMessage8dispatchEiiP6Stream
#           DB_DeletePowerWarStatueMessage::dispatch(int, int, Stream*)
# range [0x08437d4e, 0x08437df3]
08437d4e +0x00:  push   %ebp
08437d4f +0x01:  mov    %esp,%ebp
08437d51 +0x03:  sub    $0x38,%esp
08437d54 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08437d59 +0x0b:  movl   $0x0,0x8(%esp)
08437d61 +0x13:  movl   $0x6,0x4(%esp)
08437d69 +0x1b:  mov    %eax,(%esp)
08437d6c +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437d71 +0x23:  mov    %eax,-0xc(%ebp)
08437d74 +0x26:  movl   $0x0,-0x10(%ebp)
08437d7b +0x2d:  lea    -0x10(%ebp),%eax
08437d7e +0x30:  mov    %eax,0x4(%esp)
08437d82 +0x34:  mov    0x14(%ebp),%eax
08437d85 +0x37:  mov    %eax,(%esp)
08437d88 +0x3a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08437d8d +0x3f:  mov    -0x10(%ebp),%eax
08437d90 +0x42:  mov    %eax,0x8(%esp)
08437d94 +0x46:  movl   $"deLete from event_server_message where server_info = %d and message_index in (1, 2, 3)",0x4(%esp)
08437d9c +0x4e:  mov    -0xc(%ebp),%eax
08437d9f +0x51:  mov    %eax,(%esp)
08437da2 +0x54:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08437da7 +0x59:  movl   $0x1,0x4(%esp)
08437daf +0x61:  mov    -0xc(%ebp),%eax
08437db2 +0x64:  mov    %eax,(%esp)
08437db5 +0x67:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08437dba +0x6c:  xor    $0x1,%eax
08437dbd +0x6f:  test   %al,%al
08437dbf +0x71:  je     08437ded <+0x9f>
08437dc1 +0x73:  movl   $"deLete_power_war_statue_message Query Error",0x10(%esp)
08437dc9 +0x7b:  movl   $0x853d,0xc(%esp)
08437dd1 +0x83:  movl   $&_ZZN30DB_DeletePowerWarStatueMessage8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08437dd9 +0x8b:  movl   $"DBThread.cpp",0x4(%esp)
08437de1 +0x93:  movl   $0x1,(%esp)
08437de8 +0x9a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08437ded +0x9f:  mov    $0x1,%eax
08437df2 +0xa4:  leave
08437df3 +0xa5:  ret
```

## 反编译 C

```c
// DB_DeletePowerWarStatueMessage::dispatch @ 0x8437d4e

/* DB_DeletePowerWarStatueMessage::dispatch(int, int, Stream*) */

undefined4 DB_DeletePowerWarStatueMessage::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  MySQL::set_query(local_10,
                   "deLete from event_server_message where server_info = %d and message_index in (1, 2, 3)"
                   ,local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_DeletePowerWarStatueMessage::dispatch(int, int, Stream*)",0x853d,
               "deLete_power_war_statue_message Query Error");
  }
  return 1;
}
```
