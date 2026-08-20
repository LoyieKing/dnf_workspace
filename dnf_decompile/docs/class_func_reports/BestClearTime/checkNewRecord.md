# checkNewRecord

`_ZN13BestClearTime14checkNewRecordEv`

`BestClearTime::checkNewRecord()`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8b5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8b5c  _ZN13BestClearTime14checkNewRecordEv
#           BestClearTime::checkNewRecord()
# range [0x080c8b5c, 0x080c8b67]
080c8b5c +0x00:  push   %ebp
080c8b5d +0x01:  mov    %esp,%ebp
080c8b5f +0x03:  mov    0x8(%ebp),%eax
080c8b62 +0x06:  movzbl 0x20(%eax),%eax
080c8b66 +0x0a:  pop    %ebp
080c8b67 +0x0b:  ret
```

## 反编译 C

```c
// BestClearTime::checkNewRecord @ 0x80c8b5c

/* BestClearTime::checkNewRecord() */

BestClearTime __thiscall BestClearTime::checkNewRecord(BestClearTime *this)

{
  return this[0x20];
}
```
