# truncate_creature_info_table

`_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv`

`sync_script::CSyncScript::truncate_creature_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08624390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08624390  _ZN11sync_script11CSyncScript28truncate_creature_info_tableEv
#           sync_script::CSyncScript::truncate_creature_info_table()
# range [0x08624390, 0x08624413]
08624390 +0x00:  push   %ebp
08624391 +0x01:  mov    %esp,%ebp
08624393 +0x03:  sub    $0x28,%esp
08624396 +0x06:  mov    0x8(%ebp),%eax
08624399 +0x09:  movzbl (%eax),%eax
0862439c +0x0c:  xor    $0x1,%eax
0862439f +0x0f:  test   %al,%al
086243a1 +0x11:  je     086243aa <+0x1a>
086243a3 +0x13:  mov    $0x1,%eax
086243a8 +0x18:  jmp    08624411 <+0x81>
086243aa +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086243af +0x1f:  movl   $0x0,0x8(%esp)
086243b7 +0x27:  movl   $0x5,0x4(%esp)
086243bf +0x2f:  mov    %eax,(%esp)
086243c2 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086243c7 +0x37:  mov    %eax,-0xc(%ebp)
086243ca +0x3a:  movl   $"trUncate table dnf_creature_info",0x4(%esp)
086243d2 +0x42:  mov    -0xc(%ebp),%eax
086243d5 +0x45:  mov    %eax,(%esp)
086243d8 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086243dd +0x4d:  xor    $0x1,%eax
086243e0 +0x50:  test   %al,%al
086243e2 +0x52:  je     086243eb <+0x5b>
086243e4 +0x54:  mov    $0x0,%eax
086243e9 +0x59:  jmp    08624411 <+0x81>
086243eb +0x5b:  movl   $0x1,0x4(%esp)
086243f3 +0x63:  mov    -0xc(%ebp),%eax
086243f6 +0x66:  mov    %eax,(%esp)
086243f9 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086243fe +0x6e:  xor    $0x1,%eax
08624401 +0x71:  test   %al,%al
08624403 +0x73:  je     0862440c <+0x7c>
08624405 +0x75:  mov    $0x0,%eax
0862440a +0x7a:  jmp    08624411 <+0x81>
0862440c +0x7c:  mov    $0x1,%eax
08624411 +0x81:  leave
08624412 +0x82:  ret
08624413 +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_creature_info_table @ 0x8624390

/* sync_script::CSyncScript::truncate_creature_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_creature_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_creature_info");
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
