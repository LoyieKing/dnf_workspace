# _getGameDB

`_ZN8DB_Login10_getGameDBE18ENUM_DB_HANDLE_IDX`

`DB_Login::_getGameDB(ENUM_DB_HANDLE_IDX)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0840f4f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840f4f8  _ZN8DB_Login10_getGameDBE18ENUM_DB_HANDLE_IDX
#           DB_Login::_getGameDB(ENUM_DB_HANDLE_IDX)
# range [0x0840f4f8, 0x0840f51b]
0840f4f8 +0x00:  push   %ebp
0840f4f9 +0x01:  mov    %esp,%ebp
0840f4fb +0x03:  sub    $0x18,%esp
0840f4fe +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840f503 +0x0b:  movl   $0x0,0x8(%esp)
0840f50b +0x13:  mov    0xc(%ebp),%edx
0840f50e +0x16:  mov    %edx,0x4(%esp)
0840f512 +0x1a:  mov    %eax,(%esp)
0840f515 +0x1d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840f51a +0x22:  leave
0840f51b +0x23:  ret
```

## 反编译 C

```c
// DB_Login::_getGameDB @ 0x840f4f8

/* DB_Login::_getGameDB(ENUM_DB_HANDLE_IDX) */

void __thiscall DB_Login::_getGameDB(undefined4 this,undefined4 param_2)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,param_2,0);
  return;
}
```
