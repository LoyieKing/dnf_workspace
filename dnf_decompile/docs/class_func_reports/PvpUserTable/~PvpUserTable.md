# ~PvpUserTable

`_ZN12PvpUserTableD1Ev`

`PvpUserTable::~PvpUserTable()`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4904  _ZN12PvpUserTableD1Ev
#           PvpUserTable::~PvpUserTable()
# range [0x085d4904, 0x085d4909]
085d4904 +0x00:  push   %ebp
085d4905 +0x01:  mov    %esp,%ebp
085d4907 +0x03:  pop    %ebp
085d4908 +0x04:  ret
085d4909 +0x05:  nop
```

## 反编译 C

```c
// PvpUserTable::~PvpUserTable @ 0x85d4904

/* PvpUserTable::~PvpUserTable() */

void __thiscall PvpUserTable::~PvpUserTable(PvpUserTable *this)

{
  return;
}
```
