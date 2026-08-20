# truncate_aicharacter_info_table

`_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv`

`sync_script::CSyncScript::truncate_aicharacter_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0862630e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862630e  _ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv
#           sync_script::CSyncScript::truncate_aicharacter_info_table()
# range [0x0862630e, 0x08626391]
0862630e +0x00:  push   %ebp
0862630f +0x01:  mov    %esp,%ebp
08626311 +0x03:  sub    $0x28,%esp
08626314 +0x06:  mov    0x8(%ebp),%eax
08626317 +0x09:  movzbl (%eax),%eax
0862631a +0x0c:  xor    $0x1,%eax
0862631d +0x0f:  test   %al,%al
0862631f +0x11:  je     08626328 <+0x1a>
08626321 +0x13:  mov    $0x1,%eax
08626326 +0x18:  jmp    0862638f <+0x81>
08626328 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862632d +0x1f:  movl   $0x0,0x8(%esp)
08626335 +0x27:  movl   $0x5,0x4(%esp)
0862633d +0x2f:  mov    %eax,(%esp)
08626340 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08626345 +0x37:  mov    %eax,-0xc(%ebp)
08626348 +0x3a:  movl   $"trUncate table dnf_aicharacter_info",0x4(%esp)
08626350 +0x42:  mov    -0xc(%ebp),%eax
08626353 +0x45:  mov    %eax,(%esp)
08626356 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862635b +0x4d:  xor    $0x1,%eax
0862635e +0x50:  test   %al,%al
08626360 +0x52:  je     08626369 <+0x5b>
08626362 +0x54:  mov    $0x0,%eax
08626367 +0x59:  jmp    0862638f <+0x81>
08626369 +0x5b:  movl   $0x1,0x4(%esp)
08626371 +0x63:  mov    -0xc(%ebp),%eax
08626374 +0x66:  mov    %eax,(%esp)
08626377 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862637c +0x6e:  xor    $0x1,%eax
0862637f +0x71:  test   %al,%al
08626381 +0x73:  je     0862638a <+0x7c>
08626383 +0x75:  mov    $0x0,%eax
08626388 +0x7a:  jmp    0862638f <+0x81>
0862638a +0x7c:  mov    $0x1,%eax
0862638f +0x81:  leave
08626390 +0x82:  ret
08626391 +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_aicharacter_info_table @ 0x862630e

/* sync_script::CSyncScript::truncate_aicharacter_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_aicharacter_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_aicharacter_info");
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
