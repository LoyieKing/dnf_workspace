# _getDBHandleForDevideAccountDB

`_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv`

`DB_MouseRegister::_getDBHandleForDevideAccountDB()`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08422938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422938  _ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv
#           DB_MouseRegister::_getDBHandleForDevideAccountDB()
# range [0x08422938, 0x08422963]
08422938 +0x00:  push   %ebp
08422939 +0x01:  mov    %esp,%ebp
0842293b +0x03:  sub    $0x28,%esp
0842293e +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08422943 +0x0b:  movl   $0x0,0x8(%esp)
0842294b +0x13:  movl   $0x6,0x4(%esp)
08422953 +0x1b:  mov    %eax,(%esp)
08422956 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842295b +0x23:  mov    %eax,-0xc(%ebp)
0842295e +0x26:  mov    -0xc(%ebp),%eax
08422961 +0x29:  leave
08422962 +0x2a:  ret
08422963 +0x2b:  nop
```

## 反编译 C

```c
// DB_MouseRegister::_getDBHandleForDevideAccountDB @ 0x8422938

/* DB_MouseRegister::_getDBHandleForDevideAccountDB() */

undefined4 DB_MouseRegister::_getDBHandleForDevideAccountDB(void)

{
  undefined4 uVar1;
  
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  return uVar1;
}
```
