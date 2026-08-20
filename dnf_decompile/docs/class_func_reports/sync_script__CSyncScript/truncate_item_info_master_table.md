# truncate_item_info_master_table

`_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv`

`sync_script::CSyncScript::truncate_item_info_master_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625696` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625696  _ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv
#           sync_script::CSyncScript::truncate_item_info_master_table()
# range [0x08625696, 0x08625719]
08625696 +0x00:  push   %ebp
08625697 +0x01:  mov    %esp,%ebp
08625699 +0x03:  sub    $0x28,%esp
0862569c +0x06:  mov    0x8(%ebp),%eax
0862569f +0x09:  movzbl (%eax),%eax
086256a2 +0x0c:  xor    $0x1,%eax
086256a5 +0x0f:  test   %al,%al
086256a7 +0x11:  je     086256b0 <+0x1a>
086256a9 +0x13:  mov    $0x1,%eax
086256ae +0x18:  jmp    08625717 <+0x81>
086256b0 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086256b5 +0x1f:  movl   $0x0,0x8(%esp)
086256bd +0x27:  movl   $0x5,0x4(%esp)
086256c5 +0x2f:  mov    %eax,(%esp)
086256c8 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086256cd +0x37:  mov    %eax,-0xc(%ebp)
086256d0 +0x3a:  movl   $"trUncate table dnf_item_info_master",0x4(%esp)
086256d8 +0x42:  mov    -0xc(%ebp),%eax
086256db +0x45:  mov    %eax,(%esp)
086256de +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086256e3 +0x4d:  xor    $0x1,%eax
086256e6 +0x50:  test   %al,%al
086256e8 +0x52:  je     086256f1 <+0x5b>
086256ea +0x54:  mov    $0x0,%eax
086256ef +0x59:  jmp    08625717 <+0x81>
086256f1 +0x5b:  movl   $0x1,0x4(%esp)
086256f9 +0x63:  mov    -0xc(%ebp),%eax
086256fc +0x66:  mov    %eax,(%esp)
086256ff +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08625704 +0x6e:  xor    $0x1,%eax
08625707 +0x71:  test   %al,%al
08625709 +0x73:  je     08625712 <+0x7c>
0862570b +0x75:  mov    $0x0,%eax
08625710 +0x7a:  jmp    08625717 <+0x81>
08625712 +0x7c:  mov    $0x1,%eax
08625717 +0x81:  leave
08625718 +0x82:  ret
08625719 +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_item_info_master_table @ 0x8625696

/* sync_script::CSyncScript::truncate_item_info_master_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_item_info_master_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_item_info_master");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
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
    uVar2 = 1;
  }
  return uVar2;
}
```
