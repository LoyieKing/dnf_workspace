# TruncateDescTable

`_ZN8APSystem11CSyncScript17TruncateDescTableEv`

`APSystem::CSyncScript::TruncateDescTable()`

| 类 | 地址 |
|---|---|
| `APSystem::CSyncScript` | `0x0812262a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812262a  _ZN8APSystem11CSyncScript17TruncateDescTableEv
#           APSystem::CSyncScript::TruncateDescTable()
# range [0x0812262a, 0x0812268b]
0812262a +0x00:  push   %ebp
0812262b +0x01:  mov    %esp,%ebp
0812262d +0x03:  sub    $0x28,%esp
08122630 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08122635 +0x0b:  movl   $0x0,0x8(%esp)
0812263d +0x13:  movl   $0x2,0x4(%esp)
08122645 +0x1b:  mov    %eax,(%esp)
08122648 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0812264d +0x23:  mov    %eax,-0xc(%ebp)
08122650 +0x26:  movl   $"trUncate table charac_action_point_desc",0x4(%esp)
08122658 +0x2e:  mov    -0xc(%ebp),%eax
0812265b +0x31:  mov    %eax,(%esp)
0812265e +0x34:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08122663 +0x39:  movl   $0x1,0x4(%esp)
0812266b +0x41:  mov    -0xc(%ebp),%eax
0812266e +0x44:  mov    %eax,(%esp)
08122671 +0x47:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08122676 +0x4c:  xor    $0x1,%eax
08122679 +0x4f:  test   %al,%al
0812267b +0x51:  je     08122684 <+0x5a>
0812267d +0x53:  mov    $0x0,%eax
08122682 +0x58:  jmp    08122689 <+0x5f>
08122684 +0x5a:  mov    $0x1,%eax
08122689 +0x5f:  leave
0812268a +0x60:  ret
0812268b +0x61:  nop
```

## 反编译 C

```c
// APSystem::CSyncScript::TruncateDescTable @ 0x812262a

/* APSystem::CSyncScript::TruncateDescTable() */

bool APSystem::CSyncScript::TruncateDescTable(void)

{
  char cVar1;
  MySQL *this;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this,"trUncate table charac_action_point_desc");
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
