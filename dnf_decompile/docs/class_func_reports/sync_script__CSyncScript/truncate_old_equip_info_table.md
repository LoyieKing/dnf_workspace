# truncate_old_equip_info_table

`_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv`

`sync_script::CSyncScript::truncate_old_equip_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08624c96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08624c96  _ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv
#           sync_script::CSyncScript::truncate_old_equip_info_table()
# range [0x08624c96, 0x08624d19]
08624c96 +0x00:  push   %ebp
08624c97 +0x01:  mov    %esp,%ebp
08624c99 +0x03:  sub    $0x28,%esp
08624c9c +0x06:  mov    0x8(%ebp),%eax
08624c9f +0x09:  movzbl (%eax),%eax
08624ca2 +0x0c:  xor    $0x1,%eax
08624ca5 +0x0f:  test   %al,%al
08624ca7 +0x11:  je     08624cb0 <+0x1a>
08624ca9 +0x13:  mov    $0x1,%eax
08624cae +0x18:  jmp    08624d17 <+0x81>
08624cb0 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08624cb5 +0x1f:  movl   $0x0,0x8(%esp)
08624cbd +0x27:  movl   $0x5,0x4(%esp)
08624cc5 +0x2f:  mov    %eax,(%esp)
08624cc8 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08624ccd +0x37:  mov    %eax,-0xc(%ebp)
08624cd0 +0x3a:  movl   $"trUncate table dnf_old_equip_info",0x4(%esp)
08624cd8 +0x42:  mov    -0xc(%ebp),%eax
08624cdb +0x45:  mov    %eax,(%esp)
08624cde +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08624ce3 +0x4d:  xor    $0x1,%eax
08624ce6 +0x50:  test   %al,%al
08624ce8 +0x52:  je     08624cf1 <+0x5b>
08624cea +0x54:  mov    $0x0,%eax
08624cef +0x59:  jmp    08624d17 <+0x81>
08624cf1 +0x5b:  movl   $0x1,0x4(%esp)
08624cf9 +0x63:  mov    -0xc(%ebp),%eax
08624cfc +0x66:  mov    %eax,(%esp)
08624cff +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08624d04 +0x6e:  xor    $0x1,%eax
08624d07 +0x71:  test   %al,%al
08624d09 +0x73:  je     08624d12 <+0x7c>
08624d0b +0x75:  mov    $0x0,%eax
08624d10 +0x7a:  jmp    08624d17 <+0x81>
08624d12 +0x7c:  mov    $0x1,%eax
08624d17 +0x81:  leave
08624d18 +0x82:  ret
08624d19 +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_old_equip_info_table @ 0x8624c96

/* sync_script::CSyncScript::truncate_old_equip_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_old_equip_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_old_equip_info");
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
