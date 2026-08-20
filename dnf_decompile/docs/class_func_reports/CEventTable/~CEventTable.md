# ~CEventTable

`_ZN11CEventTableD1Ev`

`CEventTable::~CEventTable()`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a0ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a0ce  _ZN11CEventTableD1Ev
#           CEventTable::~CEventTable()
# range [0x0811a0ce, 0x0811a0d3]
0811a0ce +0x00:  push   %ebp
0811a0cf +0x01:  mov    %esp,%ebp
0811a0d1 +0x03:  pop    %ebp
0811a0d2 +0x04:  ret
0811a0d3 +0x05:  nop
```

## 反编译 C

```c
// CEventTable::~CEventTable @ 0x811a0ce

/* CEventTable::~CEventTable() */

void __thiscall CEventTable::~CEventTable(CEventTable *this)

{
  return;
}
```
