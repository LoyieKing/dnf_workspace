# dispatch

`_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream`

`DB_InsertLevelDungeonPlay::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertLevelDungeonPlay` | `0x0842cc98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842cc98  _ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream
#           DB_InsertLevelDungeonPlay::dispatch(int, int, Stream*)
# range [0x0842cc98, 0x0842cdf5]
0842cc98 +0x000:  push   %ebp
0842cc99 +0x001:  mov    %esp,%ebp
0842cc9b +0x003:  sub    $0x48,%esp
0842cc9e +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842cca3 +0x00b:  movl   $0x0,0x8(%esp)
0842ccab +0x013:  movl   $0x4,0x4(%esp)
0842ccb3 +0x01b:  mov    %eax,(%esp)
0842ccb6 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842ccbb +0x023:  mov    %eax,-0x10(%ebp)
0842ccbe +0x026:  movl   $0x0,-0x14(%ebp)
0842ccc5 +0x02d:  movl   $0x0,-0x18(%ebp)
0842cccc +0x034:  movl   $0x0,-0x1c(%ebp)
0842ccd3 +0x03b:  movl   $0x0,-0x20(%ebp)
0842ccda +0x042:  lea    -0x14(%ebp),%eax
0842ccdd +0x045:  mov    %eax,0x4(%esp)
0842cce1 +0x049:  mov    0x14(%ebp),%eax
0842cce4 +0x04c:  mov    %eax,(%esp)
0842cce7 +0x04f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842ccec +0x054:  movl   $0x0,-0xc(%ebp)
0842ccf3 +0x05b:  jmp    0842cdde <+0x146>
0842ccf8 +0x060:  lea    -0x18(%ebp),%eax
0842ccfb +0x063:  mov    %eax,0x4(%esp)
0842ccff +0x067:  mov    0x14(%ebp),%eax
0842cd02 +0x06a:  mov    %eax,(%esp)
0842cd05 +0x06d:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842cd0a +0x072:  lea    -0x1c(%ebp),%eax
0842cd0d +0x075:  mov    %eax,0x4(%esp)
0842cd11 +0x079:  mov    0x14(%ebp),%eax
0842cd14 +0x07c:  mov    %eax,(%esp)
0842cd17 +0x07f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842cd1c +0x084:  lea    -0x20(%ebp),%eax
0842cd1f +0x087:  mov    %eax,0x4(%esp)
0842cd23 +0x08b:  mov    0x14(%ebp),%eax
0842cd26 +0x08e:  mov    %eax,(%esp)
0842cd29 +0x091:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842cd2e +0x096:  mov    -0x18(%ebp),%ecx
0842cd31 +0x099:  mov    -0x20(%ebp),%edx
0842cd34 +0x09c:  mov    -0x1c(%ebp),%eax
0842cd37 +0x09f:  mov    %ecx,0x10(%esp)
0842cd3b +0x0a3:  mov    %edx,0xc(%esp)
0842cd3f +0x0a7:  mov    %eax,0x8(%esp)
0842cd43 +0x0ab:  movl   $"upDate log_level_dungeon_play_count set total_charac_count=total_charac_count+%d,total_dungeon_play_count=total_dungeon_play_count+%d where level=%d",0x4(%esp)
0842cd4b +0x0b3:  mov    -0x10(%ebp),%eax
0842cd4e +0x0b6:  mov    %eax,(%esp)
0842cd51 +0x0b9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842cd56 +0x0be:  movl   $0x1,0x4(%esp)
0842cd5e +0x0c6:  mov    -0x10(%ebp),%eax
0842cd61 +0x0c9:  mov    %eax,(%esp)
0842cd64 +0x0cc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842cd69 +0x0d1:  xor    $0x1,%eax
0842cd6c +0x0d4:  test   %al,%al
0842cd6e +0x0d6:  jne    0842cd81 <+0xe9>
0842cd70 +0x0d8:  mov    -0x10(%ebp),%eax
0842cd73 +0x0db:  mov    %eax,(%esp)
0842cd76 +0x0de:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842cd7b +0x0e3:  or     %edx,%eax
0842cd7d +0x0e5:  test   %eax,%eax
0842cd7f +0x0e7:  jne    0842cd88 <+0xf0>
0842cd81 +0x0e9:  mov    $0x1,%eax
0842cd86 +0x0ee:  jmp    0842cd8d <+0xf5>
0842cd88 +0x0f0:  mov    $0x0,%eax
0842cd8d +0x0f5:  test   %al,%al
0842cd8f +0x0f7:  je     0842cdda <+0x142>
0842cd91 +0x0f9:  mov    -0x20(%ebp),%ecx
0842cd94 +0x0fc:  mov    -0x1c(%ebp),%edx
0842cd97 +0x0ff:  mov    -0x18(%ebp),%eax
0842cd9a +0x102:  mov    %ecx,0x10(%esp)
0842cd9e +0x106:  mov    %edx,0xc(%esp)
0842cda2 +0x10a:  mov    %eax,0x8(%esp)
0842cda6 +0x10e:  movl   $"inSert into log_level_dungeon_play_count (level,total_charac_count,total_dungeon_play_count) values(%d,%d,%d)",0x4(%esp)
0842cdae +0x116:  mov    -0x10(%ebp),%eax
0842cdb1 +0x119:  mov    %eax,(%esp)
0842cdb4 +0x11c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842cdb9 +0x121:  movl   $0x1,0x4(%esp)
0842cdc1 +0x129:  mov    -0x10(%ebp),%eax
0842cdc4 +0x12c:  mov    %eax,(%esp)
0842cdc7 +0x12f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842cdcc +0x134:  xor    $0x1,%eax
0842cdcf +0x137:  test   %al,%al
0842cdd1 +0x139:  je     0842cdda <+0x142>
0842cdd3 +0x13b:  mov    $0x0,%eax
0842cdd8 +0x140:  jmp    0842cdf4 <+0x15c>
0842cdda +0x142:  addl   $0x1,-0xc(%ebp)
0842cdde +0x146:  mov    -0x14(%ebp),%eax
0842cde1 +0x149:  cmp    %eax,-0xc(%ebp)
0842cde4 +0x14c:  setl   %al
0842cde7 +0x14f:  test   %al,%al
0842cde9 +0x151:  jne    0842ccf8 <+0x60>
0842cdef +0x157:  mov    $0x1,%eax
0842cdf4 +0x15c:  leave
0842cdf5 +0x15d:  ret
```

## 反编译 C

```c
// DB_InsertLevelDungeonPlay::dispatch @ 0x842cc98

/* DB_InsertLevelDungeonPlay::dispatch(int, int, Stream*) */

undefined4 DB_InsertLevelDungeonPlay::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = 0;
  do {
    if (local_18 <= local_10) {
      return 1;
    }
    Stream::operator>>(in_stack_00000010,&local_1c);
    Stream::operator>>(in_stack_00000010,&local_20);
    Stream::operator>>(in_stack_00000010,&local_24);
    MySQL::set_query(local_14,
                     "upDate log_level_dungeon_play_count set total_charac_count=total_charac_count+%d,total_dungeon_play_count=total_dungeon_play_count+%d where level=%d"
                     ,local_20,local_24,local_1c);
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (lVar3 = MySQL::getAffectedRowCount(local_14), lVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      MySQL::set_query(local_14,
                       "inSert into log_level_dungeon_play_count (level,total_charac_count,total_dungeon_play_count) values(%d,%d,%d)"
                       ,local_1c,local_20,local_24);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
