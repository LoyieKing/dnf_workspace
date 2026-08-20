# UpdateEventEverlandInfo

`_ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji`

`WongWork::EventEverland::UpdateEventEverlandInfo(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventEverland` | `0x083face3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083face3  _ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji
#           WongWork::EventEverland::UpdateEventEverlandInfo(unsigned int, int)
# range [0x083face3, 0x083fad5f]
083face3 +0x00:  push   %ebp
083face4 +0x01:  mov    %esp,%ebp
083face6 +0x03:  sub    $0x28,%esp
083face9 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083facee +0x0b:  movl   $0x0,0x8(%esp)
083facf6 +0x13:  movl   $0x1,0x4(%esp)
083facfe +0x1b:  mov    %eax,(%esp)
083fad01 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fad06 +0x23:  mov    %eax,-0xc(%ebp)
083fad09 +0x26:  mov    0xc(%ebp),%eax
083fad0c +0x29:  mov    %eax,0x4(%esp)
083fad10 +0x2d:  movl   $0x4,(%esp)
083fad17 +0x34:  call   086c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>  ; WongWork::CWebEvent::GetItemType(int, int)
083fad1c +0x39:  cmp    $0x1,%eax
083fad1f +0x3c:  jne    083fad4b <+0x68>
083fad21 +0x3e:  movl   $0x0,0x4(%esp)
083fad29 +0x46:  mov    0x8(%ebp),%eax
083fad2c +0x49:  mov    %eax,(%esp)
083fad2f +0x4c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fad34 +0x51:  mov    %eax,0x8(%esp)
083fad38 +0x55:  movl   $"upDate event_everland_info set coin_check=unix_timestamp(now()) where id=%s",0x4(%esp)
083fad40 +0x5d:  mov    -0xc(%ebp),%eax
083fad43 +0x60:  mov    %eax,(%esp)
083fad46 +0x63:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fad4b +0x68:  movl   $0x1,0x4(%esp)
083fad53 +0x70:  mov    -0xc(%ebp),%eax
083fad56 +0x73:  mov    %eax,(%esp)
083fad59 +0x76:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fad5e +0x7b:  leave
083fad5f +0x7c:  ret
```

## 反编译 C

```c
// WongWork::EventEverland::UpdateEventEverlandInfo @ 0x83face3

/* WongWork::EventEverland::UpdateEventEverlandInfo(unsigned int, int) */

void WongWork::EventEverland::UpdateEventEverlandInfo(uint param_1,int param_2)

{
  MySQL *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar1 = CWebEvent::GetItemType(4,param_2);
  if (iVar1 == 1) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,
                     "upDate event_everland_info set coin_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  MySQL::exec(this,true);
  return;
}
```
