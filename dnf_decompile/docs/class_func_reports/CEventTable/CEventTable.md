# CEventTable

`_ZN11CEventTableC1Ev`

`CEventTable::CEventTable()`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a0c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a0c8  _ZN11CEventTableC1Ev
#           CEventTable::CEventTable()
# range [0x0811a0c8, 0x0811a0cd]
0811a0c8 +0x00:  push   %ebp
0811a0c9 +0x01:  mov    %esp,%ebp
0811a0cb +0x03:  pop    %ebp
0811a0cc +0x04:  ret
0811a0cd +0x05:  nop
```

## 反编译 C

```c
// CEventTable::CEventTable @ 0x811a0c8

/* CEventTable::CEventTable() */

void __thiscall CEventTable::CEventTable(CEventTable *this)

{
  return;
}
```
