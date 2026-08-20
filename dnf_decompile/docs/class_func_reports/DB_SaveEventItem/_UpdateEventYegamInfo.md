# _UpdateEventYegamInfo

`_ZN16DB_SaveEventItem21_UpdateEventYegamInfoEii`

`DB_SaveEventItem::_UpdateEventYegamInfo(int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveEventItem` | `0x0841a5ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a5ea  _ZN16DB_SaveEventItem21_UpdateEventYegamInfoEii
#           DB_SaveEventItem::_UpdateEventYegamInfo(int, int)
# range [0x0841a5ea, 0x0841a661]
0841a5ea +0x00:  push   %ebp
0841a5eb +0x01:  mov    %esp,%ebp
0841a5ed +0x03:  sub    $0x28,%esp
0841a5f0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841a5f5 +0x0b:  movl   $0x0,0x8(%esp)
0841a5fd +0x13:  movl   $0x1,0x4(%esp)
0841a605 +0x1b:  mov    %eax,(%esp)
0841a608 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841a60d +0x23:  mov    %eax,-0xc(%ebp)
0841a610 +0x26:  cmpl   $0x1,0x10(%ebp)
0841a614 +0x2a:  jne    0841a632 <+0x48>
0841a616 +0x2c:  mov    0xc(%ebp),%eax
0841a619 +0x2f:  mov    %eax,0x8(%esp)
0841a61d +0x33:  movl   $"upDate event_yegam_info set coin_check=unix_timestamp(now()) where id=%d",0x4(%esp)
0841a625 +0x3b:  mov    -0xc(%ebp),%eax
0841a628 +0x3e:  mov    %eax,(%esp)
0841a62b +0x41:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a630 +0x46:  jmp    0841a64c <+0x62>
0841a632 +0x48:  mov    0xc(%ebp),%eax
0841a635 +0x4b:  mov    %eax,0x8(%esp)
0841a639 +0x4f:  movl   $"upDate event_yegam_info set item_check=unix_timestamp(now()) where id=%d and item!=0",0x4(%esp)
0841a641 +0x57:  mov    -0xc(%ebp),%eax
0841a644 +0x5a:  mov    %eax,(%esp)
0841a647 +0x5d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a64c +0x62:  movl   $0x1,0x4(%esp)
0841a654 +0x6a:  mov    -0xc(%ebp),%eax
0841a657 +0x6d:  mov    %eax,(%esp)
0841a65a +0x70:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a65f +0x75:  leave
0841a660 +0x76:  ret
0841a661 +0x77:  nop
```

## 反编译 C

```c
// DB_SaveEventItem::_UpdateEventYegamInfo @ 0x841a5ea

/* DB_SaveEventItem::_UpdateEventYegamInfo(int, int) */

void __thiscall
DB_SaveEventItem::_UpdateEventYegamInfo(DB_SaveEventItem *this,int param_1,int param_2)

{
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (param_2 == 1) {
    MySQL::set_query(this_00,
                     "upDate event_yegam_info set coin_check=unix_timestamp(now()) where id=%d",
                     param_1);
  }
  else {
    MySQL::set_query(this_00,
                     "upDate event_yegam_info set item_check=unix_timestamp(now()) where id=%d and item!=0"
                     ,param_1);
  }
  MySQL::exec(this_00,true);
  return;
}
```
