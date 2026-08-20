# dispatch

`_ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream`

`CLocalChina_DB_LastDay_BreakAway::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `CLocalChina_DB_LastDay_BreakAway` | `0x0812801a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812801a  _ZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6Stream
#           CLocalChina_DB_LastDay_BreakAway::dispatch(int, int, Stream*)
# range [0x0812801a, 0x08128151]
0812801a +0x000:  push   %ebp
0812801b +0x001:  mov    %esp,%ebp
0812801d +0x003:  sub    $0x38,%esp
08128020 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08128025 +0x00b:  movl   $0x0,0x8(%esp)
0812802d +0x013:  movl   $0x6,0x4(%esp)
08128035 +0x01b:  mov    %eax,(%esp)
08128038 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0812803d +0x023:  mov    %eax,-0xc(%ebp)
08128040 +0x026:  movl   $0x0,-0x10(%ebp)
08128047 +0x02d:  movl   $0x0,-0x14(%ebp)
0812804e +0x034:  movl   $0x0,-0x18(%ebp)
08128055 +0x03b:  lea    -0x10(%ebp),%eax
08128058 +0x03e:  mov    %eax,0x4(%esp)
0812805c +0x042:  mov    0x14(%ebp),%eax
0812805f +0x045:  mov    %eax,(%esp)
08128062 +0x048:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08128067 +0x04d:  lea    -0x18(%ebp),%eax
0812806a +0x050:  mov    %eax,0x4(%esp)
0812806e +0x054:  mov    0x14(%ebp),%eax
08128071 +0x057:  mov    %eax,(%esp)
08128074 +0x05a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08128079 +0x05f:  lea    -0x14(%ebp),%eax
0812807c +0x062:  mov    %eax,0x4(%esp)
08128080 +0x066:  mov    0x14(%ebp),%eax
08128083 +0x069:  mov    %eax,(%esp)
08128086 +0x06c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0812808b +0x071:  mov    -0x18(%ebp),%eax
0812808e +0x074:  test   %eax,%eax
08128090 +0x076:  je     08128099 <+0x7f>
08128092 +0x078:  cmp    $0x1,%eax
08128095 +0x07b:  je     081280cc <+0xb2>
08128097 +0x07d:  jmp    081280fd <+0xe3>
08128099 +0x07f:  mov    -0x10(%ebp),%eax
0812809c +0x082:  movl   $0x0,0x4(%esp)
081280a4 +0x08a:  mov    %eax,(%esp)
081280a7 +0x08d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081280ac +0x092:  mov    -0x14(%ebp),%edx
081280af +0x095:  mov    %eax,0xc(%esp)
081280b3 +0x099:  mov    %edx,0x8(%esp)
081280b7 +0x09d:  movl   $"UPDATE churn_member_info \t\t\t\t  SET quest_time = UNIX_TIMESTAMP(SUBDATE(FROM_UNIXTIME(quest_time), INTERVAL %d DAY)) \t\t\t\t   WHERE m_id=%s",0x4(%esp)
081280bf +0x0a5:  mov    -0xc(%ebp),%eax
081280c2 +0x0a8:  mov    %eax,(%esp)
081280c5 +0x0ab:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081280ca +0x0b0:  jmp    081280fd <+0xe3>
081280cc +0x0b2:  mov    -0x10(%ebp),%eax
081280cf +0x0b5:  movl   $0x0,0x4(%esp)
081280d7 +0x0bd:  mov    %eax,(%esp)
081280da +0x0c0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081280df +0x0c5:  mov    -0x14(%ebp),%edx
081280e2 +0x0c8:  mov    %eax,0xc(%esp)
081280e6 +0x0cc:  mov    %edx,0x8(%esp)
081280ea +0x0d0:  movl   $"UPDATE churn_member_info \t\t\t\t  SET last_reward_time = UNIX_TIMESTAMP(SUBDATE(FROM_UNIXTIME(last_reward_time), INTERVAL %d DAY)) \t\t\t\t   WHERE m_id=%s",0x4(%esp)
081280f2 +0x0d8:  mov    -0xc(%ebp),%eax
081280f5 +0x0db:  mov    %eax,(%esp)
081280f8 +0x0de:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081280fd +0x0e3:  movl   $0x1,0x4(%esp)
08128105 +0x0eb:  mov    -0xc(%ebp),%eax
08128108 +0x0ee:  mov    %eax,(%esp)
0812810b +0x0f1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08128110 +0x0f6:  xor    $0x1,%eax
08128113 +0x0f9:  test   %al,%al
08128115 +0x0fb:  je     0812814a <+0x130>
08128117 +0x0fd:  movl   $"[GM]CLocalChina_DB_LastDay_BreakAway Fail!!",0x10(%esp)
0812811f +0x105:  movl   $0x42f,0xc(%esp)
08128127 +0x10d:  movl   $&_ZZN32CLocalChina_DB_LastDay_BreakAway8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0812812f +0x115:  movl   $"localchina/localchina_DBThread.cpp",0x4(%esp)
08128137 +0x11d:  movl   $0x1,(%esp)
0812813e +0x124:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08128143 +0x129:  mov    $0x0,%eax
08128148 +0x12e:  jmp    0812814f <+0x135>
0812814a +0x130:  mov    $0x1,%eax
0812814f +0x135:  leave
08128150 +0x136:  ret
08128151 +0x137:  nop
```

## 反编译 C

```c
// CLocalChina_DB_LastDay_BreakAway::dispatch @ 0x812801a

/* CLocalChina_DB_LastDay_BreakAway::dispatch(int, int, Stream*) */

bool CLocalChina_DB_LastDay_BreakAway::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_18);
  if (local_1c == 0) {
    uVar2 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "UPDATE churn_member_info \t\t\t\t  SET quest_time = UNIX_TIMESTAMP(SUBDATE(FROM_UNIXTIME(quest_time), INTERVAL %d DAY)) \t\t\t\t   WHERE m_id=%s"
                     ,local_18,uVar2);
  }
  else if (local_1c == 1) {
    uVar2 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "UPDATE churn_member_info \t\t\t\t  SET last_reward_time = UNIX_TIMESTAMP(SUBDATE(FROM_UNIXTIME(last_reward_time), INTERVAL %d DAY)) \t\t\t\t   WHERE m_id=%s"
                     ,local_18,uVar2);
  }
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"localchina/localchina_DBThread.cpp",
               "virtual bool CLocalChina_DB_LastDay_BreakAway::dispatch(int, int, Stream*)",0x42f,
               "[GM]CLocalChina_DB_LastDay_BreakAway Fail!!");
  }
  return cVar1 == '\x01';
}
```
