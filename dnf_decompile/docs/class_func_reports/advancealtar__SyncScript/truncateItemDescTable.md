# truncateItemDescTable

`_ZN12advancealtar10SyncScript21truncateItemDescTableEv`

`advancealtar::SyncScript::truncateItemDescTable()`

| 类 | 地址 |
|---|---|
| `advancealtar::SyncScript` | `0x08133e44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133e44  _ZN12advancealtar10SyncScript21truncateItemDescTableEv
#           advancealtar::SyncScript::truncateItemDescTable()
# range [0x08133e44, 0x08133ea5]
08133e44 +0x00:  push   %ebp
08133e45 +0x01:  mov    %esp,%ebp
08133e47 +0x03:  sub    $0x28,%esp
08133e4a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08133e4f +0x0b:  movl   $0x0,0x8(%esp)
08133e57 +0x13:  movl   $0x3,0x4(%esp)
08133e5f +0x1b:  mov    %eax,(%esp)
08133e62 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08133e67 +0x23:  mov    %eax,-0xc(%ebp)
08133e6a +0x26:  movl   $"trUncate table charac_advance_altar_item_desc",0x4(%esp)
08133e72 +0x2e:  mov    -0xc(%ebp),%eax
08133e75 +0x31:  mov    %eax,(%esp)
08133e78 +0x34:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08133e7d +0x39:  movl   $0x1,0x4(%esp)
08133e85 +0x41:  mov    -0xc(%ebp),%eax
08133e88 +0x44:  mov    %eax,(%esp)
08133e8b +0x47:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08133e90 +0x4c:  xor    $0x1,%eax
08133e93 +0x4f:  test   %al,%al
08133e95 +0x51:  je     08133e9e <+0x5a>
08133e97 +0x53:  mov    $0x0,%eax
08133e9c +0x58:  jmp    08133ea3 <+0x5f>
08133e9e +0x5a:  mov    $0x1,%eax
08133ea3 +0x5f:  leave
08133ea4 +0x60:  ret
08133ea5 +0x61:  nop
```

## 反编译 C

```c
// advancealtar::SyncScript::truncateItemDescTable @ 0x8133e44

/* advancealtar::SyncScript::truncateItemDescTable() */

bool advancealtar::SyncScript::truncateItemDescTable(void)

{
  char cVar1;
  MySQL *this;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this,"trUncate table charac_advance_altar_item_desc");
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
