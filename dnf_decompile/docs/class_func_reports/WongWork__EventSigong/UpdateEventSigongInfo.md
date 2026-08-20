# UpdateEventSigongInfo

`_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji`

`WongWork::EventSigong::UpdateEventSigongInfo(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventSigong` | `0x083fa7a5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fa7a5  _ZN8WongWork11EventSigong21UpdateEventSigongInfoEji
#           WongWork::EventSigong::UpdateEventSigongInfo(unsigned int, int)
# range [0x083fa7a5, 0x083fa854]
083fa7a5 +0x00:  push   %ebp
083fa7a6 +0x01:  mov    %esp,%ebp
083fa7a8 +0x03:  sub    $0x28,%esp
083fa7ab +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fa7b0 +0x0b:  movl   $0x0,0x8(%esp)
083fa7b8 +0x13:  movl   $0x1,0x4(%esp)
083fa7c0 +0x1b:  mov    %eax,(%esp)
083fa7c3 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fa7c8 +0x23:  mov    %eax,-0xc(%ebp)
083fa7cb +0x26:  mov    0xc(%ebp),%eax
083fa7ce +0x29:  mov    %eax,0x4(%esp)
083fa7d2 +0x2d:  movl   $0x3,(%esp)
083fa7d9 +0x34:  call   086c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>  ; WongWork::CWebEvent::GetItemType(int, int)
083fa7de +0x39:  cmp    $0x1,%eax
083fa7e1 +0x3c:  je     083fa7ea <+0x45>
083fa7e3 +0x3e:  cmp    $0x2,%eax
083fa7e6 +0x41:  je     083fa816 <+0x71>
083fa7e8 +0x43:  jmp    083fa840 <+0x9b>
083fa7ea +0x45:  movl   $0x0,0x4(%esp)
083fa7f2 +0x4d:  mov    0x8(%ebp),%eax
083fa7f5 +0x50:  mov    %eax,(%esp)
083fa7f8 +0x53:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa7fd +0x58:  mov    %eax,0x8(%esp)
083fa801 +0x5c:  movl   $"upDate event_sigong_info set item1_check=unix_timestamp(now()) where id=%s",0x4(%esp)
083fa809 +0x64:  mov    -0xc(%ebp),%eax
083fa80c +0x67:  mov    %eax,(%esp)
083fa80f +0x6a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa814 +0x6f:  jmp    083fa840 <+0x9b>
083fa816 +0x71:  movl   $0x0,0x4(%esp)
083fa81e +0x79:  mov    0x8(%ebp),%eax
083fa821 +0x7c:  mov    %eax,(%esp)
083fa824 +0x7f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa829 +0x84:  mov    %eax,0x8(%esp)
083fa82d +0x88:  movl   $"upDate event_sigong_info set item2_check=unix_timestamp(now()) where id=%s",0x4(%esp)
083fa835 +0x90:  mov    -0xc(%ebp),%eax
083fa838 +0x93:  mov    %eax,(%esp)
083fa83b +0x96:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa840 +0x9b:  movl   $0x1,0x4(%esp)
083fa848 +0xa3:  mov    -0xc(%ebp),%eax
083fa84b +0xa6:  mov    %eax,(%esp)
083fa84e +0xa9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fa853 +0xae:  leave
083fa854 +0xaf:  ret
```

## 反编译 C

```c
// WongWork::EventSigong::UpdateEventSigongInfo @ 0x83fa7a5

/* WongWork::EventSigong::UpdateEventSigongInfo(unsigned int, int) */

void WongWork::EventSigong::UpdateEventSigongInfo(uint param_1,int param_2)

{
  MySQL *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar1 = CWebEvent::GetItemType(3,param_2);
  if (iVar1 == 1) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,
                     "upDate event_sigong_info set item1_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,
                     "upDate event_sigong_info set item2_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  MySQL::exec(this,true);
  return;
}
```
