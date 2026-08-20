# dispatch

`_ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream`

`CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `CLocalChina_DB_BreakAwayReset` | `0x08127e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08127e84  _ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream
#           CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)
# range [0x08127e84, 0x08127f41]
08127e84 +0x00:  push   %ebp
08127e85 +0x01:  mov    %esp,%ebp
08127e87 +0x03:  sub    $0x38,%esp
08127e8a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08127e8f +0x0b:  movl   $0x0,0x8(%esp)
08127e97 +0x13:  movl   $0x6,0x4(%esp)
08127e9f +0x1b:  mov    %eax,(%esp)
08127ea2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08127ea7 +0x23:  mov    %eax,-0xc(%ebp)
08127eaa +0x26:  movl   $0x0,-0x10(%ebp)
08127eb1 +0x2d:  lea    -0x10(%ebp),%eax
08127eb4 +0x30:  mov    %eax,0x4(%esp)
08127eb8 +0x34:  mov    0x14(%ebp),%eax
08127ebb +0x37:  mov    %eax,(%esp)
08127ebe +0x3a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08127ec3 +0x3f:  mov    -0x10(%ebp),%eax
08127ec6 +0x42:  movl   $0x0,0x4(%esp)
08127ece +0x4a:  mov    %eax,(%esp)
08127ed1 +0x4d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08127ed6 +0x52:  mov    %eax,0x8(%esp)
08127eda +0x56:  movl   $"UPDATE churn_member_info \t\t\t\t   SET accrue_cera = 0, first_reward_time = 0, last_reward_time = 0, \t\t\t\t\t   add_info = 0, luck_point = 0, last_update_time = 0, second_reward_time = 0, quest_time = 0 \t\t\t\t   WHERE m_id=%s",0x4(%esp)
08127ee2 +0x5e:  mov    -0xc(%ebp),%eax
08127ee5 +0x61:  mov    %eax,(%esp)
08127ee8 +0x64:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08127eed +0x69:  movl   $0x1,0x4(%esp)
08127ef5 +0x71:  mov    -0xc(%ebp),%eax
08127ef8 +0x74:  mov    %eax,(%esp)
08127efb +0x77:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08127f00 +0x7c:  xor    $0x1,%eax
08127f03 +0x7f:  test   %al,%al
08127f05 +0x81:  je     08127f3a <+0xb6>
08127f07 +0x83:  movl   $"[GM]CLocalChina_DB_BreakAwayReset Fail!!",0x10(%esp)
08127f0f +0x8b:  movl   $0x3ff,0xc(%esp)
08127f17 +0x93:  movl   $&_ZZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08127f1f +0x9b:  movl   $"localchina/localchina_DBThread.cpp",0x4(%esp)
08127f27 +0xa3:  movl   $0x1,(%esp)
08127f2e +0xaa:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08127f33 +0xaf:  mov    $0x0,%eax
08127f38 +0xb4:  jmp    08127f3f <+0xbb>
08127f3a +0xb6:  mov    $0x1,%eax
08127f3f +0xbb:  leave
08127f40 +0xbc:  ret
08127f41 +0xbd:  nop
```

## 反编译 C

```c
// CLocalChina_DB_BreakAwayReset::dispatch @ 0x8127e84

/* CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*) */

bool CLocalChina_DB_BreakAwayReset::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "UPDATE churn_member_info \t\t\t\t   SET accrue_cera = 0, first_reward_time = 0, last_reward_time = 0, \t\t\t\t\t   add_info = 0, luck_point = 0, last_update_time = 0, second_reward_time = 0, quest_time = 0 \t\t\t\t   WHERE m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"localchina/localchina_DBThread.cpp",
               "virtual bool CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)",0x3ff,
               "[GM]CLocalChina_DB_BreakAwayReset Fail!!");
  }
  return cVar1 == '\x01';
}
```
