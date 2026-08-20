# truncate_exp_level_ref_table

`_ZN11sync_script11CSyncScript28truncate_exp_level_ref_tableEv`

`sync_script::CSyncScript::truncate_exp_level_ref_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622866  _ZN11sync_script11CSyncScript28truncate_exp_level_ref_tableEv
#           sync_script::CSyncScript::truncate_exp_level_ref_table()
# range [0x08622866, 0x086228db]
08622866 +0x00:  push   %ebp
08622867 +0x01:  mov    %esp,%ebp
08622869 +0x03:  sub    $0x28,%esp
0862286c +0x06:  mov    0x8(%ebp),%eax
0862286f +0x09:  movzbl (%eax),%eax
08622872 +0x0c:  xor    $0x1,%eax
08622875 +0x0f:  test   %al,%al
08622877 +0x11:  je     08622880 <+0x1a>
08622879 +0x13:  mov    $0x1,%eax
0862287e +0x18:  jmp    086228d9 <+0x73>
08622880 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622885 +0x1f:  movl   $0x0,0x8(%esp)
0862288d +0x27:  movl   $0x5,0x4(%esp)
08622895 +0x2f:  mov    %eax,(%esp)
08622898 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0862289d +0x37:  mov    %eax,-0xc(%ebp)
086228a0 +0x3a:  movl   $"trUncate table exp_level_ref",0x4(%esp)
086228a8 +0x42:  mov    -0xc(%ebp),%eax
086228ab +0x45:  mov    %eax,(%esp)
086228ae +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086228b3 +0x4d:  movl   $0x1,0x4(%esp)
086228bb +0x55:  mov    -0xc(%ebp),%eax
086228be +0x58:  mov    %eax,(%esp)
086228c1 +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086228c6 +0x60:  xor    $0x1,%eax
086228c9 +0x63:  test   %al,%al
086228cb +0x65:  je     086228d4 <+0x6e>
086228cd +0x67:  mov    $0x0,%eax
086228d2 +0x6c:  jmp    086228d9 <+0x73>
086228d4 +0x6e:  mov    $0x1,%eax
086228d9 +0x73:  leave
086228da +0x74:  ret
086228db +0x75:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_exp_level_ref_table @ 0x8622866

/* sync_script::CSyncScript::truncate_exp_level_ref_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_exp_level_ref_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table exp_level_ref");
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
