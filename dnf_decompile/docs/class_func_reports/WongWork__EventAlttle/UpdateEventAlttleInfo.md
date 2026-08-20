# UpdateEventAlttleInfo

`_ZN8WongWork11EventAlttle21UpdateEventAlttleInfoEji`

`WongWork::EventAlttle::UpdateEventAlttleInfo(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventAlttle` | `0x083fb530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb530  _ZN8WongWork11EventAlttle21UpdateEventAlttleInfoEji
#           WongWork::EventAlttle::UpdateEventAlttleInfo(unsigned int, int)
# range [0x083fb530, 0x083fb594]
083fb530 +0x00:  push   %ebp
083fb531 +0x01:  mov    %esp,%ebp
083fb533 +0x03:  sub    $0x28,%esp
083fb536 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fb53b +0x0b:  movl   $0x0,0x8(%esp)
083fb543 +0x13:  movl   $0x1,0x4(%esp)
083fb54b +0x1b:  mov    %eax,(%esp)
083fb54e +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fb553 +0x23:  mov    %eax,-0xc(%ebp)
083fb556 +0x26:  movl   $0x0,0x4(%esp)
083fb55e +0x2e:  mov    0x8(%ebp),%eax
083fb561 +0x31:  mov    %eax,(%esp)
083fb564 +0x34:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb569 +0x39:  mov    %eax,0x8(%esp)
083fb56d +0x3d:  movl   $"upDate event_alttle_info set item_check=unix_timestamp(now()) where m_id=%s",0x4(%esp)
083fb575 +0x45:  mov    -0xc(%ebp),%eax
083fb578 +0x48:  mov    %eax,(%esp)
083fb57b +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb580 +0x50:  movl   $0x1,0x4(%esp)
083fb588 +0x58:  mov    -0xc(%ebp),%eax
083fb58b +0x5b:  mov    %eax,(%esp)
083fb58e +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb593 +0x63:  leave
083fb594 +0x64:  ret
```

## 反编译 C

```c
// WongWork::EventAlttle::UpdateEventAlttleInfo @ 0x83fb530

/* WongWork::EventAlttle::UpdateEventAlttleInfo(unsigned int, int) */

void WongWork::EventAlttle::UpdateEventAlttleInfo(uint param_1,int param_2)

{
  MySQL *this;
  undefined4 uVar1;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(this,
                   "upDate event_alttle_info set item_check=unix_timestamp(now()) where m_id=%s",
                   uVar1);
  MySQL::exec(this,true);
  return;
}
```
