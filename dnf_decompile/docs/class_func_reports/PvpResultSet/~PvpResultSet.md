# ~PvpResultSet

`_ZN12PvpResultSetD1Ev`

`PvpResultSet::~PvpResultSet()`

| 类 | 地址 |
|---|---|
| `PvpResultSet` | `0x085d5f56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5f56  _ZN12PvpResultSetD1Ev
#           PvpResultSet::~PvpResultSet()
# range [0x085d5f56, 0x085d5f69]
085d5f56 +0x00:  push   %ebp
085d5f57 +0x01:  mov    %esp,%ebp
085d5f59 +0x03:  sub    $0x4,%esp
085d5f5c +0x06:  mov    0x8(%ebp),%eax
085d5f5f +0x09:  mov    %eax,(%esp)
085d5f62 +0x0c:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
085d5f67 +0x11:  leave
085d5f68 +0x12:  ret
085d5f69 +0x13:  nop
```

## 反编译 C

```c
// PvpResultSet::~PvpResultSet @ 0x85d5f56

/* PvpResultSet::~PvpResultSet() */

void __thiscall PvpResultSet::~PvpResultSet(PvpResultSet *this)

{
  PvpResultType::~PvpResultType((PvpResultType *)this);
  return;
}
```
