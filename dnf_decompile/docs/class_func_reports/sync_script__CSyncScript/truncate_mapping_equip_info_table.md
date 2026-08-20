# truncate_mapping_equip_info_table

`_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv`

`sync_script::CSyncScript::truncate_mapping_equip_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0862676c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862676c  _ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv
#           sync_script::CSyncScript::truncate_mapping_equip_info_table()
# range [0x0862676c, 0x086267ef]
0862676c +0x00:  push   %ebp
0862676d +0x01:  mov    %esp,%ebp
0862676f +0x03:  sub    $0x28,%esp
08626772 +0x06:  mov    0x8(%ebp),%eax
08626775 +0x09:  movzbl (%eax),%eax
08626778 +0x0c:  xor    $0x1,%eax
0862677b +0x0f:  test   %al,%al
0862677d +0x11:  je     08626786 <+0x1a>
0862677f +0x13:  mov    $0x1,%eax
08626784 +0x18:  jmp    086267ed <+0x81>
08626786 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862678b +0x1f:  movl   $0x0,0x8(%esp)
08626793 +0x27:  movl   $0x5,0x4(%esp)
0862679b +0x2f:  mov    %eax,(%esp)
0862679e +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086267a3 +0x37:  mov    %eax,-0xc(%ebp)
086267a6 +0x3a:  movl   $"trUncate table equip_mapping_info",0x4(%esp)
086267ae +0x42:  mov    -0xc(%ebp),%eax
086267b1 +0x45:  mov    %eax,(%esp)
086267b4 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086267b9 +0x4d:  xor    $0x1,%eax
086267bc +0x50:  test   %al,%al
086267be +0x52:  je     086267c7 <+0x5b>
086267c0 +0x54:  mov    $0x0,%eax
086267c5 +0x59:  jmp    086267ed <+0x81>
086267c7 +0x5b:  movl   $0x1,0x4(%esp)
086267cf +0x63:  mov    -0xc(%ebp),%eax
086267d2 +0x66:  mov    %eax,(%esp)
086267d5 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086267da +0x6e:  xor    $0x1,%eax
086267dd +0x71:  test   %al,%al
086267df +0x73:  je     086267e8 <+0x7c>
086267e1 +0x75:  mov    $0x0,%eax
086267e6 +0x7a:  jmp    086267ed <+0x81>
086267e8 +0x7c:  mov    $0x1,%eax
086267ed +0x81:  leave
086267ee +0x82:  ret
086267ef +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_mapping_equip_info_table @ 0x862676c

/* sync_script::CSyncScript::truncate_mapping_equip_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_mapping_equip_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table equip_mapping_info");
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
