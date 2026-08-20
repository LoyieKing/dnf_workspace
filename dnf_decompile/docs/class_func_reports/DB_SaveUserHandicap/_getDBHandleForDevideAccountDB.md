# _getDBHandleForDevideAccountDB

`_ZN19DB_SaveUserHandicap30_getDBHandleForDevideAccountDBEv`

`DB_SaveUserHandicap::_getDBHandleForDevideAccountDB()`

| 类 | 地址 |
|---|---|
| `DB_SaveUserHandicap` | `0x08427e28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08427e28  _ZN19DB_SaveUserHandicap30_getDBHandleForDevideAccountDBEv
#           DB_SaveUserHandicap::_getDBHandleForDevideAccountDB()
# range [0x08427e28, 0x08427e53]
08427e28 +0x00:  push   %ebp
08427e29 +0x01:  mov    %esp,%ebp
08427e2b +0x03:  sub    $0x28,%esp
08427e2e +0x06:  movl   $0x1,-0xc(%ebp)
08427e35 +0x0d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08427e3a +0x12:  movl   $0x0,0x8(%esp)
08427e42 +0x1a:  mov    -0xc(%ebp),%edx
08427e45 +0x1d:  mov    %edx,0x4(%esp)
08427e49 +0x21:  mov    %eax,(%esp)
08427e4c +0x24:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08427e51 +0x29:  leave
08427e52 +0x2a:  ret
08427e53 +0x2b:  nop
```

## 反编译 C

```c
// DB_SaveUserHandicap::_getDBHandleForDevideAccountDB @ 0x8427e28

/* DB_SaveUserHandicap::_getDBHandleForDevideAccountDB() */

void DB_SaveUserHandicap::_getDBHandleForDevideAccountDB(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  return;
}
```
