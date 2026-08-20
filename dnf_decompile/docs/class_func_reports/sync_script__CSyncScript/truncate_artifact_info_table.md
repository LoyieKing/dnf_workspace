# truncate_artifact_info_table

`_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv`

`sync_script::CSyncScript::truncate_artifact_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08624b0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08624b0a  _ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv
#           sync_script::CSyncScript::truncate_artifact_info_table()
# range [0x08624b0a, 0x08624b8d]
08624b0a +0x00:  push   %ebp
08624b0b +0x01:  mov    %esp,%ebp
08624b0d +0x03:  sub    $0x28,%esp
08624b10 +0x06:  mov    0x8(%ebp),%eax
08624b13 +0x09:  movzbl (%eax),%eax
08624b16 +0x0c:  xor    $0x1,%eax
08624b19 +0x0f:  test   %al,%al
08624b1b +0x11:  je     08624b24 <+0x1a>
08624b1d +0x13:  mov    $0x1,%eax
08624b22 +0x18:  jmp    08624b8b <+0x81>
08624b24 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08624b29 +0x1f:  movl   $0x0,0x8(%esp)
08624b31 +0x27:  movl   $0x5,0x4(%esp)
08624b39 +0x2f:  mov    %eax,(%esp)
08624b3c +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08624b41 +0x37:  mov    %eax,-0xc(%ebp)
08624b44 +0x3a:  movl   $"trUncate table dnf_artifact_info",0x4(%esp)
08624b4c +0x42:  mov    -0xc(%ebp),%eax
08624b4f +0x45:  mov    %eax,(%esp)
08624b52 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08624b57 +0x4d:  xor    $0x1,%eax
08624b5a +0x50:  test   %al,%al
08624b5c +0x52:  je     08624b65 <+0x5b>
08624b5e +0x54:  mov    $0x0,%eax
08624b63 +0x59:  jmp    08624b8b <+0x81>
08624b65 +0x5b:  movl   $0x1,0x4(%esp)
08624b6d +0x63:  mov    -0xc(%ebp),%eax
08624b70 +0x66:  mov    %eax,(%esp)
08624b73 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08624b78 +0x6e:  xor    $0x1,%eax
08624b7b +0x71:  test   %al,%al
08624b7d +0x73:  je     08624b86 <+0x7c>
08624b7f +0x75:  mov    $0x0,%eax
08624b84 +0x7a:  jmp    08624b8b <+0x81>
08624b86 +0x7c:  mov    $0x1,%eax
08624b8b +0x81:  leave
08624b8c +0x82:  ret
08624b8d +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_artifact_info_table @ 0x8624b0a

/* sync_script::CSyncScript::truncate_artifact_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_artifact_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_artifact_info");
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
