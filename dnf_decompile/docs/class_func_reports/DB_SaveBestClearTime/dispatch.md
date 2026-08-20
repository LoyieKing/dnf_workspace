# dispatch

`_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream`

`DB_SaveBestClearTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveBestClearTime` | `0x08447cc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08447cc4  _ZN20DB_SaveBestClearTime8dispatchEiiP6Stream
#           DB_SaveBestClearTime::dispatch(int, int, Stream*)
# range [0x08447cc4, 0x08447ea5]
08447cc4 +0x000:  push   %ebp
08447cc5 +0x001:  mov    %esp,%ebp
08447cc7 +0x003:  sub    $0x38,%esp
08447cca +0x006:  mov    0x14(%ebp),%eax
08447ccd +0x009:  mov    %eax,(%esp)
08447cd0 +0x00c:  call   084545d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x71e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x71e8
08447cd5 +0x011:  mov    %eax,-0x14(%ebp)
08447cd8 +0x014:  cmpl   $0x0,-0x14(%ebp)
08447cdc +0x018:  jne    08447ce8 <+0x24>
08447cde +0x01a:  mov    $0x0,%eax
08447ce3 +0x01f:  jmp    08447ea4 <+0x1e0>
08447ce8 +0x024:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08447ced +0x029:  movl   $0x0,0x8(%esp)
08447cf5 +0x031:  movl   $0x2,0x4(%esp)
08447cfd +0x039:  mov    %eax,(%esp)
08447d00 +0x03c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08447d05 +0x041:  mov    %eax,-0x10(%ebp)
08447d08 +0x044:  movb   $0x0,-0x9(%ebp)
08447d0c +0x048:  movl   $0x0,-0x18(%ebp)
08447d13 +0x04f:  mov    -0x14(%ebp),%eax
08447d16 +0x052:  add    $0x8,%eax
08447d19 +0x055:  lea    -0x18(%ebp),%edx
08447d1c +0x058:  mov    %edx,0x10(%esp)
08447d20 +0x05c:  movl   $0x5dc0,0xc(%esp)
08447d28 +0x064:  mov    %eax,0x8(%esp)
08447d2c +0x068:  movl   $0x0,0x4(%esp)
08447d34 +0x070:  mov    -0x10(%ebp),%eax
08447d37 +0x073:  mov    %eax,(%esp)
08447d3a +0x076:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
08447d3f +0x07b:  mov    %al,-0x9(%ebp)
08447d42 +0x07e:  movzbl -0x9(%ebp),%eax
08447d46 +0x082:  xor    $0x1,%eax
08447d49 +0x085:  test   %al,%al
08447d4b +0x087:  je     08447d94 <+0xd0>
08447d4d +0x089:  mov    -0x14(%ebp),%eax
08447d50 +0x08c:  mov    (%eax),%eax
08447d52 +0x08e:  mov    %eax,0x18(%esp)
08447d56 +0x092:  movl   $0x0,0x14(%esp)
08447d5e +0x09a:  movl   $"DB_SaveBestClearTime::dispatch compress_zip(%u) ERROR charac_no=%u",0x10(%esp)
08447d66 +0x0a2:  movl   $0xb28d,0xc(%esp)
08447d6e +0x0aa:  movl   $&_ZZN20DB_SaveBestClearTime8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08447d76 +0x0b2:  movl   $"DBThread.cpp",0x4(%esp)
08447d7e +0x0ba:  movl   $0x1,(%esp)
08447d85 +0x0c1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447d8a +0x0c6:  mov    $0x0,%eax
08447d8f +0x0cb:  jmp    08447ea4 <+0x1e0>
08447d94 +0x0d0:  mov    -0x14(%ebp),%eax
08447d97 +0x0d3:  mov    (%eax),%edx
08447d99 +0x0d5:  mov    -0x18(%ebp),%eax
08447d9c +0x0d8:  mov    %edx,0xc(%esp)
08447da0 +0x0dc:  mov    %eax,0x8(%esp)
08447da4 +0x0e0:  movl   $"upDate charac_option set best_clear_time = '%s' where charac_no=%u",0x4(%esp)
08447dac +0x0e8:  mov    -0x10(%ebp),%eax
08447daf +0x0eb:  mov    %eax,(%esp)
08447db2 +0x0ee:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447db7 +0x0f3:  movl   $0x1,0x4(%esp)
08447dbf +0x0fb:  mov    -0x10(%ebp),%eax
08447dc2 +0x0fe:  mov    %eax,(%esp)
08447dc5 +0x101:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08447dca +0x106:  xor    $0x1,%eax
08447dcd +0x109:  test   %al,%al
08447dcf +0x10b:  je     08447e10 <+0x14c>
08447dd1 +0x10d:  mov    -0x14(%ebp),%eax
08447dd4 +0x110:  mov    (%eax),%eax
08447dd6 +0x112:  mov    %eax,0x14(%esp)
08447dda +0x116:  movl   $"DB_SaveBestClearTime->upDate Query ERROR charac_no=%u",0x10(%esp)
08447de2 +0x11e:  movl   $0xb299,0xc(%esp)
08447dea +0x126:  movl   $&_ZZN20DB_SaveBestClearTime8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08447df2 +0x12e:  movl   $"DBThread.cpp",0x4(%esp)
08447dfa +0x136:  movl   $0x1,(%esp)
08447e01 +0x13d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447e06 +0x142:  mov    $0x0,%eax
08447e0b +0x147:  jmp    08447ea4 <+0x1e0>
08447e10 +0x14c:  mov    -0x10(%ebp),%eax
08447e13 +0x14f:  mov    %eax,(%esp)
08447e16 +0x152:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08447e1b +0x157:  or     %edx,%eax
08447e1d +0x159:  test   %eax,%eax
08447e1f +0x15b:  sete   %al
08447e22 +0x15e:  test   %al,%al
08447e24 +0x160:  je     08447e9f <+0x1db>
08447e26 +0x162:  mov    -0x18(%ebp),%edx
08447e29 +0x165:  mov    -0x14(%ebp),%eax
08447e2c +0x168:  mov    (%eax),%eax
08447e2e +0x16a:  mov    %edx,0xc(%esp)
08447e32 +0x16e:  mov    %eax,0x8(%esp)
08447e36 +0x172:  movl   $"inSert into charac_option(charac_no, best_clear_time) values(%u, '%s')",0x4(%esp)
08447e3e +0x17a:  mov    -0x10(%ebp),%eax
08447e41 +0x17d:  mov    %eax,(%esp)
08447e44 +0x180:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447e49 +0x185:  movl   $0x1,0x4(%esp)
08447e51 +0x18d:  mov    -0x10(%ebp),%eax
08447e54 +0x190:  mov    %eax,(%esp)
08447e57 +0x193:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08447e5c +0x198:  xor    $0x1,%eax
08447e5f +0x19b:  test   %al,%al
08447e61 +0x19d:  je     08447e9f <+0x1db>
08447e63 +0x19f:  mov    -0x14(%ebp),%eax
08447e66 +0x1a2:  mov    (%eax),%eax
08447e68 +0x1a4:  mov    %eax,0x14(%esp)
08447e6c +0x1a8:  movl   $"DB_SaveBestClearTime->inSert Query ERROR charac_no=%u",0x10(%esp)
08447e74 +0x1b0:  movl   $0xb2a6,0xc(%esp)
08447e7c +0x1b8:  movl   $&_ZZN20DB_SaveBestClearTime8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08447e84 +0x1c0:  movl   $"DBThread.cpp",0x4(%esp)
08447e8c +0x1c8:  movl   $0x1,(%esp)
08447e93 +0x1cf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447e98 +0x1d4:  mov    $0x0,%eax
08447e9d +0x1d9:  jmp    08447ea4 <+0x1e0>
08447e9f +0x1db:  mov    $0x1,%eax
08447ea4 +0x1e0:  leave
08447ea5 +0x1e1:  ret
```

## 反编译 C

```c
// DB_SaveBestClearTime::dispatch @ 0x8447cc4

/* DB_SaveBestClearTime::dispatch(int, int, Stream*) */

undefined4 DB_SaveBestClearTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  char *local_1c;
  SIG_BEST_CLEAR_TIME *local_18;
  MySQL *local_14;
  char local_d;
  
  local_18 = Stream::GetOutBuffer<SIG_BEST_CLEAR_TIME>(in_stack_00000010);
  if (local_18 == (SIG_BEST_CLEAR_TIME *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_d = 0;
    local_1c = (char *)0x0;
    local_d = put_compressed_blob_data(local_14,0,(char *)(local_18 + 8),24000,&local_1c);
    if (local_d == '\x01') {
      MySQL::set_query(local_14,
                       "upDate charac_option set best_clear_time = \'%s\' where charac_no=%u",
                       local_1c,*(undefined4 *)local_18);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 == '\x01') {
        lVar3 = MySQL::getAffectedRowCount(local_14);
        if (lVar3 == 0) {
          MySQL::set_query(local_14,
                           "inSert into charac_option(charac_no, best_clear_time) values(%u, \'%s\')"
                           ,*(undefined4 *)local_18,local_1c);
          cVar1 = MySQL::exec(local_14,true);
          if (cVar1 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "virtual bool DB_SaveBestClearTime::dispatch(int, int, Stream*)",0xb2a6,
                       "DB_SaveBestClearTime->inSert Query ERROR charac_no=%u",
                       *(undefined4 *)local_18);
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_SaveBestClearTime::dispatch(int, int, Stream*)"
                   ,0xb299,"DB_SaveBestClearTime->upDate Query ERROR charac_no=%u",
                   *(undefined4 *)local_18);
        uVar2 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_SaveBestClearTime::dispatch(int, int, Stream*)",
                 0xb28d,"DB_SaveBestClearTime::dispatch compress_zip(%u) ERROR charac_no=%u",0,
                 *(undefined4 *)local_18);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
