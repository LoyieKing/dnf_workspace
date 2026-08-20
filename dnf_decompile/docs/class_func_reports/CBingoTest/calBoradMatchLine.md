# calBoradMatchLine

`_ZN10CBingoTest17calBoradMatchLineEv`

`CBingoTest::calBoradMatchLine()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080cb03c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cb03c  _ZN10CBingoTest17calBoradMatchLineEv
#           CBingoTest::calBoradMatchLine()
# range [0x080cb03c, 0x080cb06d]
080cb03c +0x00:  push   %ebp
080cb03d +0x01:  mov    %esp,%ebp
080cb03f +0x03:  sub    $0x10,%esp
080cb042 +0x06:  movl   $0x10843f,-0x4(%ebp)
080cb049 +0x0d:  movl   $0x14610c7,-0x4(%ebp)
080cb050 +0x14:  movl   $0x1f9110,-0x4(%ebp)
080cb057 +0x1b:  movl   $0x1576dd5,-0x4(%ebp)
080cb05e +0x22:  movl   $0x1577dd5,-0x4(%ebp)
080cb065 +0x29:  movl   $0x1ffffff,-0x4(%ebp)
080cb06c +0x30:  leave
080cb06d +0x31:  ret
```

## 反编译 C

```c
// CBingoTest::calBoradMatchLine @ 0x80cb03c

/* CBingoTest::calBoradMatchLine() */

void CBingoTest::calBoradMatchLine(void)

{
  return;
}
```
