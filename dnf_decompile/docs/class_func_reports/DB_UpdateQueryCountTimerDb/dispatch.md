# dispatch

`_ZN26DB_UpdateQueryCountTimerDb8dispatchEiiP6Stream`

`DB_UpdateQueryCountTimerDb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateQueryCountTimerDb` | `0x0841c5d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c5d4  _ZN26DB_UpdateQueryCountTimerDb8dispatchEiiP6Stream
#           DB_UpdateQueryCountTimerDb::dispatch(int, int, Stream*)
# range [0x0841c5d4, 0x0841c619]
0841c5d4 +0x00:  push   %ebp
0841c5d5 +0x01:  mov    %esp,%ebp
0841c5d7 +0x03:  sub    $0x28,%esp
0841c5da +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c5df +0x0b:  movl   $0x0,0x8(%esp)
0841c5e7 +0x13:  movl   $0x2,0x4(%esp)
0841c5ef +0x1b:  mov    %eax,(%esp)
0841c5f2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c5f7 +0x23:  mov    %eax,-0x10(%ebp)
0841c5fa +0x26:  mov    -0x10(%ebp),%eax
0841c5fd +0x29:  mov    %eax,(%esp)
0841c600 +0x2c:  call   082a4202 <_GLOBAL__I__ZN4CLog5this_E+0x629>  ; global constructors keyed to CLog::this_+0x629
0841c605 +0x31:  mov    %eax,-0xc(%ebp)
0841c608 +0x34:  mov    -0xc(%ebp),%eax
0841c60b +0x37:  mov    %eax,(%esp)
0841c60e +0x3a:  call   085ecee6 <_ZN13CQueryCounter18UpdateQueryCounterEv>  ; CQueryCounter::UpdateQueryCounter()
0841c613 +0x3f:  mov    $0x1,%eax
0841c618 +0x44:  leave
0841c619 +0x45:  ret
```

## 反编译 C

```c
// DB_UpdateQueryCountTimerDb::dispatch @ 0x841c5d4

/* DB_UpdateQueryCountTimerDb::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQueryCountTimerDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  CQueryCounter *this_00;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this_00 = (CQueryCounter *)MySQL::GetQueryCounter(this);
  CQueryCounter::UpdateQueryCounter(this_00);
  return 1;
}
```
