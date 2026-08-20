# _getGameDB

`_ZN13DB_LoadCharac10_getGameDBEv`

`DB_LoadCharac::_getGameDB()`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x08408c0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08408c0a  _ZN13DB_LoadCharac10_getGameDBEv
#           DB_LoadCharac::_getGameDB()
# range [0x08408c0a, 0x08408c2f]
08408c0a +0x00:  push   %ebp
08408c0b +0x01:  mov    %esp,%ebp
08408c0d +0x03:  sub    $0x18,%esp
08408c10 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08408c15 +0x0b:  movl   $0x0,0x8(%esp)
08408c1d +0x13:  movl   $0x2,0x4(%esp)
08408c25 +0x1b:  mov    %eax,(%esp)
08408c28 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08408c2d +0x23:  leave
08408c2e +0x24:  ret
08408c2f +0x25:  nop
```

## 反编译 C

```c
// DB_LoadCharac::_getGameDB @ 0x8408c0a

/* DB_LoadCharac::_getGameDB() */

void DB_LoadCharac::_getGameDB(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  return;
}
```
