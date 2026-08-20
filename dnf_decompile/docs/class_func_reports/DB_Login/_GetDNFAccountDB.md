# _GetDNFAccountDB

`_ZN8DB_Login16_GetDNFAccountDBEv`

`DB_Login::_GetDNFAccountDB()`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08411bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08411bae  _ZN8DB_Login16_GetDNFAccountDBEv
#           DB_Login::_GetDNFAccountDB()
# range [0x08411bae, 0x08411bd9]
08411bae +0x00:  push   %ebp
08411baf +0x01:  mov    %esp,%ebp
08411bb1 +0x03:  sub    $0x28,%esp
08411bb4 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08411bb9 +0x0b:  movl   $0x0,0x8(%esp)
08411bc1 +0x13:  movl   $0x1,0x4(%esp)
08411bc9 +0x1b:  mov    %eax,(%esp)
08411bcc +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08411bd1 +0x23:  mov    %eax,-0xc(%ebp)
08411bd4 +0x26:  mov    -0xc(%ebp),%eax
08411bd7 +0x29:  leave
08411bd8 +0x2a:  ret
08411bd9 +0x2b:  nop
```

## 反编译 C

```c
// DB_Login::_GetDNFAccountDB @ 0x8411bae

/* DB_Login::_GetDNFAccountDB() */

undefined4 DB_Login::_GetDNFAccountDB(void)

{
  undefined4 uVar1;
  
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  return uVar1;
}
```
