# truncate_town_info_table

`_ZN11sync_script11CSyncScript24truncate_town_info_tableEv`

`sync_script::CSyncScript::truncate_town_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0862653a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862653a  _ZN11sync_script11CSyncScript24truncate_town_info_tableEv
#           sync_script::CSyncScript::truncate_town_info_table()
# range [0x0862653a, 0x086265bd]
0862653a +0x00:  push   %ebp
0862653b +0x01:  mov    %esp,%ebp
0862653d +0x03:  sub    $0x28,%esp
08626540 +0x06:  mov    0x8(%ebp),%eax
08626543 +0x09:  movzbl (%eax),%eax
08626546 +0x0c:  xor    $0x1,%eax
08626549 +0x0f:  test   %al,%al
0862654b +0x11:  je     08626554 <+0x1a>
0862654d +0x13:  mov    $0x1,%eax
08626552 +0x18:  jmp    086265bb <+0x81>
08626554 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08626559 +0x1f:  movl   $0x0,0x8(%esp)
08626561 +0x27:  movl   $0x5,0x4(%esp)
08626569 +0x2f:  mov    %eax,(%esp)
0862656c +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08626571 +0x37:  mov    %eax,-0xc(%ebp)
08626574 +0x3a:  movl   $"trUncate table dnf_town_info",0x4(%esp)
0862657c +0x42:  mov    -0xc(%ebp),%eax
0862657f +0x45:  mov    %eax,(%esp)
08626582 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08626587 +0x4d:  xor    $0x1,%eax
0862658a +0x50:  test   %al,%al
0862658c +0x52:  je     08626595 <+0x5b>
0862658e +0x54:  mov    $0x0,%eax
08626593 +0x59:  jmp    086265bb <+0x81>
08626595 +0x5b:  movl   $0x1,0x4(%esp)
0862659d +0x63:  mov    -0xc(%ebp),%eax
086265a0 +0x66:  mov    %eax,(%esp)
086265a3 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086265a8 +0x6e:  xor    $0x1,%eax
086265ab +0x71:  test   %al,%al
086265ad +0x73:  je     086265b6 <+0x7c>
086265af +0x75:  mov    $0x0,%eax
086265b4 +0x7a:  jmp    086265bb <+0x81>
086265b6 +0x7c:  mov    $0x1,%eax
086265bb +0x81:  leave
086265bc +0x82:  ret
086265bd +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_town_info_table @ 0x862653a

/* sync_script::CSyncScript::truncate_town_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_town_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_town_info");
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
