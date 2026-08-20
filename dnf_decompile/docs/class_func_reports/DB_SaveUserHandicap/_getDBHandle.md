# _getDBHandle

`_ZN19DB_SaveUserHandicap12_getDBHandleEv`

`DB_SaveUserHandicap::_getDBHandle()`

| 类 | 地址 |
|---|---|
| `DB_SaveUserHandicap` | `0x08427dfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08427dfc  _ZN19DB_SaveUserHandicap12_getDBHandleEv
#           DB_SaveUserHandicap::_getDBHandle()
# range [0x08427dfc, 0x08427e27]
08427dfc +0x00:  push   %ebp
08427dfd +0x01:  mov    %esp,%ebp
08427dff +0x03:  sub    $0x28,%esp
08427e02 +0x06:  movl   $0x1,-0xc(%ebp)
08427e09 +0x0d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08427e0e +0x12:  movl   $0x0,0x8(%esp)
08427e16 +0x1a:  mov    -0xc(%ebp),%edx
08427e19 +0x1d:  mov    %edx,0x4(%esp)
08427e1d +0x21:  mov    %eax,(%esp)
08427e20 +0x24:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08427e25 +0x29:  leave
08427e26 +0x2a:  ret
08427e27 +0x2b:  nop
```

## 反编译 C

```c
// DB_SaveUserHandicap::_getDBHandle @ 0x8427dfc

/* DB_SaveUserHandicap::_getDBHandle() */

void DB_SaveUserHandicap::_getDBHandle(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  return;
}
```
