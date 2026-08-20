# resetBoard

`_ZN10CBingoTest10resetBoardEv`

`CBingoTest::resetBoard()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080cb030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cb030  _ZN10CBingoTest10resetBoardEv
#           CBingoTest::resetBoard()
# range [0x080cb030, 0x080cb035]
080cb030 +0x00:  push   %ebp
080cb031 +0x01:  mov    %esp,%ebp
080cb033 +0x03:  pop    %ebp
080cb034 +0x04:  ret
080cb035 +0x05:  nop
```

## 反编译 C

```c
// CBingoTest::resetBoard @ 0x80cb030

/* CBingoTest::resetBoard() */

void CBingoTest::resetBoard(void)

{
  return;
}
```
