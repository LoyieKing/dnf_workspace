# PvpResultSet

`_ZN12PvpResultSetC1Ev`

`PvpResultSet::PvpResultSet()`

| 类 | 地址 |
|---|---|
| `PvpResultSet` | `0x085d5f42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5f42  _ZN12PvpResultSetC1Ev
#           PvpResultSet::PvpResultSet()
# range [0x085d5f42, 0x085d5f55]
085d5f42 +0x00:  push   %ebp
085d5f43 +0x01:  mov    %esp,%ebp
085d5f45 +0x03:  sub    $0x4,%esp
085d5f48 +0x06:  mov    0x8(%ebp),%eax
085d5f4b +0x09:  mov    %eax,(%esp)
085d5f4e +0x0c:  call   085d58da <_ZN13PvpResultTypeC1Ev>  ; PvpResultType::PvpResultType()
085d5f53 +0x11:  leave
085d5f54 +0x12:  ret
085d5f55 +0x13:  nop
```

## 反编译 C

```c
// PvpResultSet::PvpResultSet @ 0x85d5f42

/* PvpResultSet::PvpResultSet() */

void __thiscall PvpResultSet::PvpResultSet(PvpResultSet *this)

{
  PvpResultType::PvpResultType((PvpResultType *)this);
  return;
}
```
