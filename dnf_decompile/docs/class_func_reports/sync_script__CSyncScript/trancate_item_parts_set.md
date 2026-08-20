# trancate_item_parts_set

`_ZN11sync_script11CSyncScript23trancate_item_parts_setEv`

`sync_script::CSyncScript::trancate_item_parts_set()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622c66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622c66  _ZN11sync_script11CSyncScript23trancate_item_parts_setEv
#           sync_script::CSyncScript::trancate_item_parts_set()
# range [0x08622c66, 0x08622cdb]
08622c66 +0x00:  push   %ebp
08622c67 +0x01:  mov    %esp,%ebp
08622c69 +0x03:  sub    $0x28,%esp
08622c6c +0x06:  mov    0x8(%ebp),%eax
08622c6f +0x09:  movzbl (%eax),%eax
08622c72 +0x0c:  xor    $0x1,%eax
08622c75 +0x0f:  test   %al,%al
08622c77 +0x11:  je     08622c80 <+0x1a>
08622c79 +0x13:  mov    $0x1,%eax
08622c7e +0x18:  jmp    08622cd9 <+0x73>
08622c80 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622c85 +0x1f:  movl   $0x0,0x8(%esp)
08622c8d +0x27:  movl   $0x5,0x4(%esp)
08622c95 +0x2f:  mov    %eax,(%esp)
08622c98 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622c9d +0x37:  mov    %eax,-0xc(%ebp)
08622ca0 +0x3a:  movl   $"trUncate table item_part_set",0x4(%esp)
08622ca8 +0x42:  mov    -0xc(%ebp),%eax
08622cab +0x45:  mov    %eax,(%esp)
08622cae +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622cb3 +0x4d:  movl   $0x1,0x4(%esp)
08622cbb +0x55:  mov    -0xc(%ebp),%eax
08622cbe +0x58:  mov    %eax,(%esp)
08622cc1 +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622cc6 +0x60:  xor    $0x1,%eax
08622cc9 +0x63:  test   %al,%al
08622ccb +0x65:  je     08622cd4 <+0x6e>
08622ccd +0x67:  mov    $0x0,%eax
08622cd2 +0x6c:  jmp    08622cd9 <+0x73>
08622cd4 +0x6e:  mov    $0x1,%eax
08622cd9 +0x73:  leave
08622cda +0x74:  ret
08622cdb +0x75:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::trancate_item_parts_set @ 0x8622c66

/* sync_script::CSyncScript::trancate_item_parts_set() */

undefined4 __thiscall sync_script::CSyncScript::trancate_item_parts_set(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table item_part_set");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
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
