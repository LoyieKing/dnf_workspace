# getTodayBoard

`_ZN6CBingo13getTodayBoardEv`

`CBingo::getTodayBoard()`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080caec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caec4  _ZN6CBingo13getTodayBoardEv
#           CBingo::getTodayBoard()
# range [0x080caec4, 0x080caecb]
080caec4 +0x00:  push   %ebp
080caec5 +0x01:  mov    %esp,%ebp
080caec7 +0x03:  mov    0x8(%ebp),%eax
080caeca +0x06:  pop    %ebp
080caecb +0x07:  ret
```

## 反编译 C

```c
// CBingo::getTodayBoard @ 0x80caec4

/* CBingo::getTodayBoard() */

CBingo * __thiscall CBingo::getTodayBoard(CBingo *this)

{
  return this;
}
```
