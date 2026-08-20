# GetEventTableCount

`_ZN11CEventTable18GetEventTableCountEv`

`CEventTable::GetEventTableCount()`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a0d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a0d4  _ZN11CEventTable18GetEventTableCountEv
#           CEventTable::GetEventTableCount()
# range [0x0811a0d4, 0x0811a0dd]
0811a0d4 +0x00:  push   %ebp
0811a0d5 +0x01:  mov    %esp,%ebp
0811a0d7 +0x03:  mov    $0x4f,%eax
0811a0dc +0x08:  pop    %ebp
0811a0dd +0x09:  ret
```

## 反编译 C

```c
// CEventTable::GetEventTableCount @ 0x811a0d4

/* CEventTable::GetEventTableCount() */

undefined4 CEventTable::GetEventTableCount(void)

{
  return 0x4f;
}
```
