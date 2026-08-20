# PvpUserTable

`_ZN12PvpUserTableC1Ev`

`PvpUserTable::PvpUserTable()`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d48f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d48f0  _ZN12PvpUserTableC1Ev
#           PvpUserTable::PvpUserTable()
# range [0x085d48f0, 0x085d4903]
085d48f0 +0x00:  push   %ebp
085d48f1 +0x01:  mov    %esp,%ebp
085d48f3 +0x03:  sub    $0x18,%esp
085d48f6 +0x06:  mov    0x8(%ebp),%eax
085d48f9 +0x09:  mov    %eax,(%esp)
085d48fc +0x0c:  call   085d490a <_ZN12PvpUserTable5ClearEv>  ; PvpUserTable::Clear()
085d4901 +0x11:  leave
085d4902 +0x12:  ret
085d4903 +0x13:  nop
```

## 反编译 C

```c
// PvpUserTable::PvpUserTable @ 0x85d48f0

/* PvpUserTable::PvpUserTable() */

void __thiscall PvpUserTable::PvpUserTable(PvpUserTable *this)

{
  Clear(this);
  return;
}
```
