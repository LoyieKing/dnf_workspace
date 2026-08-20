# truncate_monster_info_table

`_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv`

`sync_script::CSyncScript::truncate_monster_info_table()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086260dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086260dc  _ZN11sync_script11CSyncScript27truncate_monster_info_tableEv
#           sync_script::CSyncScript::truncate_monster_info_table()
# range [0x086260dc, 0x0862615f]
086260dc +0x00:  push   %ebp
086260dd +0x01:  mov    %esp,%ebp
086260df +0x03:  sub    $0x28,%esp
086260e2 +0x06:  mov    0x8(%ebp),%eax
086260e5 +0x09:  movzbl (%eax),%eax
086260e8 +0x0c:  xor    $0x1,%eax
086260eb +0x0f:  test   %al,%al
086260ed +0x11:  je     086260f6 <+0x1a>
086260ef +0x13:  mov    $0x1,%eax
086260f4 +0x18:  jmp    0862615d <+0x81>
086260f6 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086260fb +0x1f:  movl   $0x0,0x8(%esp)
08626103 +0x27:  movl   $0x5,0x4(%esp)
0862610b +0x2f:  mov    %eax,(%esp)
0862610e +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08626113 +0x37:  mov    %eax,-0xc(%ebp)
08626116 +0x3a:  movl   $"trUncate table dnf_monster_info",0x4(%esp)
0862611e +0x42:  mov    -0xc(%ebp),%eax
08626121 +0x45:  mov    %eax,(%esp)
08626124 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08626129 +0x4d:  xor    $0x1,%eax
0862612c +0x50:  test   %al,%al
0862612e +0x52:  je     08626137 <+0x5b>
08626130 +0x54:  mov    $0x0,%eax
08626135 +0x59:  jmp    0862615d <+0x81>
08626137 +0x5b:  movl   $0x1,0x4(%esp)
0862613f +0x63:  mov    -0xc(%ebp),%eax
08626142 +0x66:  mov    %eax,(%esp)
08626145 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862614a +0x6e:  xor    $0x1,%eax
0862614d +0x71:  test   %al,%al
0862614f +0x73:  je     08626158 <+0x7c>
08626151 +0x75:  mov    $0x0,%eax
08626156 +0x7a:  jmp    0862615d <+0x81>
08626158 +0x7c:  mov    $0x1,%eax
0862615d +0x81:  leave
0862615e +0x82:  ret
0862615f +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_monster_info_table @ 0x86260dc

/* sync_script::CSyncScript::truncate_monster_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_monster_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_monster_info");
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
