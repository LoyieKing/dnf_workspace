# _CheckAlreadyGetYegamItem

`_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii`

`DB_SaveEventItem::_CheckAlreadyGetYegamItem(int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveEventItem` | `0x0841a51a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a51a  _ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii
#           DB_SaveEventItem::_CheckAlreadyGetYegamItem(int, int)
# range [0x0841a51a, 0x0841a5e9]
0841a51a +0x00:  push   %ebp
0841a51b +0x01:  mov    %esp,%ebp
0841a51d +0x03:  sub    $0x28,%esp
0841a520 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841a525 +0x0b:  movl   $0x0,0x8(%esp)
0841a52d +0x13:  movl   $0x1,0x4(%esp)
0841a535 +0x1b:  mov    %eax,(%esp)
0841a538 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841a53d +0x23:  mov    %eax,-0xc(%ebp)
0841a540 +0x26:  cmpl   $0x1,0x10(%ebp)
0841a544 +0x2a:  jne    0841a562 <+0x48>
0841a546 +0x2c:  mov    0xc(%ebp),%eax
0841a549 +0x2f:  mov    %eax,0x8(%esp)
0841a54d +0x33:  movl   $"seLect coin_check from event_yegam_info where id=%d",0x4(%esp)
0841a555 +0x3b:  mov    -0xc(%ebp),%eax
0841a558 +0x3e:  mov    %eax,(%esp)
0841a55b +0x41:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a560 +0x46:  jmp    0841a57c <+0x62>
0841a562 +0x48:  mov    0xc(%ebp),%eax
0841a565 +0x4b:  mov    %eax,0x8(%esp)
0841a569 +0x4f:  movl   $"seLect item_check from event_yegam_info where id=%d",0x4(%esp)
0841a571 +0x57:  mov    -0xc(%ebp),%eax
0841a574 +0x5a:  mov    %eax,(%esp)
0841a577 +0x5d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a57c +0x62:  movl   $0x1,0x4(%esp)
0841a584 +0x6a:  mov    -0xc(%ebp),%eax
0841a587 +0x6d:  mov    %eax,(%esp)
0841a58a +0x70:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a58f +0x75:  xor    $0x1,%eax
0841a592 +0x78:  test   %al,%al
0841a594 +0x7a:  je     0841a59d <+0x83>
0841a596 +0x7c:  mov    $0x0,%eax
0841a59b +0x81:  jmp    0841a5e8 <+0xce>
0841a59d +0x83:  movl   $0x0,-0x10(%ebp)
0841a5a4 +0x8a:  lea    -0x10(%ebp),%eax
0841a5a7 +0x8d:  mov    %eax,0x8(%esp)
0841a5ab +0x91:  movl   $0x0,0x4(%esp)
0841a5b3 +0x99:  mov    -0xc(%ebp),%eax
0841a5b6 +0x9c:  mov    %eax,(%esp)
0841a5b9 +0x9f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841a5be +0xa4:  xor    $0x1,%eax
0841a5c1 +0xa7:  test   %al,%al
0841a5c3 +0xa9:  jne    0841a5cc <+0xb2>
0841a5c5 +0xab:  mov    -0x10(%ebp),%eax
0841a5c8 +0xae:  test   %eax,%eax
0841a5ca +0xb0:  jne    0841a5d3 <+0xb9>
0841a5cc +0xb2:  mov    $0x1,%eax
0841a5d1 +0xb7:  jmp    0841a5d8 <+0xbe>
0841a5d3 +0xb9:  mov    $0x0,%eax
0841a5d8 +0xbe:  test   %al,%al
0841a5da +0xc0:  je     0841a5e3 <+0xc9>
0841a5dc +0xc2:  mov    $0x0,%eax
0841a5e1 +0xc7:  jmp    0841a5e8 <+0xce>
0841a5e3 +0xc9:  mov    $0x1,%eax
0841a5e8 +0xce:  leave
0841a5e9 +0xcf:  ret
```

## 反编译 C

```c
// DB_SaveEventItem::_CheckAlreadyGetYegamItem @ 0x841a51a

/* DB_SaveEventItem::_CheckAlreadyGetYegamItem(int, int) */

undefined4 __thiscall
DB_SaveEventItem::_CheckAlreadyGetYegamItem(DB_SaveEventItem *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (param_2 == 1) {
    MySQL::set_query(local_10,"seLect coin_check from event_yegam_info where id=%d",param_1);
  }
  else {
    MySQL::set_query(local_10,"seLect item_check from event_yegam_info where id=%d",param_1);
  }
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
