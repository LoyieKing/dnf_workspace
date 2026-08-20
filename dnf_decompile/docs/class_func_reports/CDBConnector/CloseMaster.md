# CloseMaster

`_ZN12CDBConnector11CloseMasterEv`

`CDBConnector::CloseMaster()`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec6bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec6bc  _ZN12CDBConnector11CloseMasterEv
#           CDBConnector::CloseMaster()
# range [0x080ec6bc, 0x080ec6d9]
080ec6bc +0x00:  push   %ebp
080ec6bd +0x01:  mov    %esp,%ebp
080ec6bf +0x03:  sub    $0x18,%esp
080ec6c2 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080ec6c7 +0x0b:  movl   $0x0,0x4(%esp)
080ec6cf +0x13:  mov    %eax,(%esp)
080ec6d2 +0x16:  call   083f4ee0 <_ZN5DBMgr5CloseE18ENUM_DB_HANDLE_IDX>  ; DBMgr::Close(ENUM_DB_HANDLE_IDX)
080ec6d7 +0x1b:  leave
080ec6d8 +0x1c:  ret
080ec6d9 +0x1d:  nop
```

## 反编译 C

```c
// CDBConnector::CloseMaster @ 0x80ec6bc

/* CDBConnector::CloseMaster() */

void CDBConnector::CloseMaster(void)

{
  DBMgr::Close(GlobalData::s_db_mgr,0);
  return;
}
```
