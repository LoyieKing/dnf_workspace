# GetLogTargetDB

`_ZN8WongWork15CLogGameChannel14GetLogTargetDBEv`

`WongWork::CLogGameChannel::GetLogTargetDB()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x085503c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085503c4  _ZN8WongWork15CLogGameChannel14GetLogTargetDBEv
#           WongWork::CLogGameChannel::GetLogTargetDB()
# range [0x085503c4, 0x085503e9]
085503c4 +0x00:  push   %ebp
085503c5 +0x01:  mov    %esp,%ebp
085503c7 +0x03:  sub    $0x18,%esp
085503ca +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
085503cf +0x0b:  movl   $0x0,0x8(%esp)
085503d7 +0x13:  movl   $0x4,0x4(%esp)
085503df +0x1b:  mov    %eax,(%esp)
085503e2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
085503e7 +0x23:  leave
085503e8 +0x24:  ret
085503e9 +0x25:  nop
```

## 反编译 C

```c
// WongWork::CLogGameChannel::GetLogTargetDB @ 0x85503c4

/* WongWork::CLogGameChannel::GetLogTargetDB() */

void WongWork::CLogGameChannel::GetLogTargetDB(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  return;
}
```
