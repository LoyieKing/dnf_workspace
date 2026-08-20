# truncate_dnf_item_info_table

`_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv`

`sync_script::CSyncScript::truncate_dnf_item_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622374` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622374  _ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv
#           sync_script::CSyncScript::truncate_dnf_item_info_table()
# range [0x08622374, 0x08622439]
08622374 +0x00:  push   %ebp
08622375 +0x01:  mov    %esp,%ebp
08622377 +0x03:  sub    $0x28,%esp
0862237a +0x06:  mov    0x8(%ebp),%eax
0862237d +0x09:  movzbl (%eax),%eax
08622380 +0x0c:  xor    $0x1,%eax
08622383 +0x0f:  test   %al,%al
08622385 +0x11:  je     08622391 <+0x1d>
08622387 +0x13:  mov    $0x1,%eax
0862238c +0x18:  jmp    08622437 <+0xc3>
08622391 +0x1d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622396 +0x22:  movl   $0x0,0x8(%esp)
0862239e +0x2a:  movl   $0x5,0x4(%esp)
086223a6 +0x32:  mov    %eax,(%esp)
086223a9 +0x35:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086223ae +0x3a:  mov    %eax,-0xc(%ebp)
086223b1 +0x3d:  movl   $"trUncate table dnf_item_info",0x4(%esp)
086223b9 +0x45:  mov    -0xc(%ebp),%eax
086223bc +0x48:  mov    %eax,(%esp)
086223bf +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086223c4 +0x50:  movl   $0x1,0x4(%esp)
086223cc +0x58:  mov    -0xc(%ebp),%eax
086223cf +0x5b:  mov    %eax,(%esp)
086223d2 +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086223d7 +0x63:  xor    $0x1,%eax
086223da +0x66:  test   %al,%al
086223dc +0x68:  je     086223e5 <+0x71>
086223de +0x6a:  mov    $0x0,%eax
086223e3 +0x6f:  jmp    08622437 <+0xc3>
086223e5 +0x71:  movl   $"trUncate table avatar_select_ability",0x4(%esp)
086223ed +0x79:  mov    -0xc(%ebp),%eax
086223f0 +0x7c:  mov    %eax,(%esp)
086223f3 +0x7f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086223f8 +0x84:  movl   $0x1,0x4(%esp)
08622400 +0x8c:  mov    -0xc(%ebp),%eax
08622403 +0x8f:  mov    %eax,(%esp)
08622406 +0x92:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862240b +0x97:  xor    $0x1,%eax
0862240e +0x9a:  test   %al,%al
08622410 +0x9c:  je     08622419 <+0xa5>
08622412 +0x9e:  mov    $0x0,%eax
08622417 +0xa3:  jmp    08622437 <+0xc3>
08622419 +0xa5:  mov    0x8(%ebp),%eax
0862241c +0xa8:  mov    %eax,(%esp)
0862241f +0xab:  call   08624b0a <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv>  ; sync_script::CSyncScript::truncate_artifact_info_table()
08622424 +0xb0:  xor    $0x1,%eax
08622427 +0xb3:  test   %al,%al
08622429 +0xb5:  je     08622432 <+0xbe>
0862242b +0xb7:  mov    $0x0,%eax
08622430 +0xbc:  jmp    08622437 <+0xc3>
08622432 +0xbe:  mov    $0x1,%eax
08622437 +0xc3:  leave
08622438 +0xc4:  ret
08622439 +0xc5:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_dnf_item_info_table @ 0x8622374

/* sync_script::CSyncScript::truncate_dnf_item_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_dnf_item_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table dnf_item_info");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      MySQL::set_query(this_00,"trUncate table avatar_select_ability");
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        cVar1 = truncate_artifact_info_table(this);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
