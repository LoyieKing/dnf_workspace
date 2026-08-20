# calNewValue

`_ZN10CBingoTest11calNewValueEv`

`CBingoTest::calNewValue()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080cb06e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cb06e  _ZN10CBingoTest11calNewValueEv
#           CBingoTest::calNewValue()
# range [0x080cb06e, 0x080cb07d]
080cb06e +0x00:  push   %ebp
080cb06f +0x01:  mov    %esp,%ebp
080cb071 +0x03:  sub    $0x10,%esp
080cb074 +0x06:  movl   $0x0,-0x4(%ebp)
080cb07b +0x0d:  leave
080cb07c +0x0e:  ret
080cb07d +0x0f:  nop
```

## 反编译 C

```c
// CBingoTest::calNewValue @ 0x80cb06e

/* CBingoTest::calNewValue() */

void CBingoTest::calNewValue(void)

{
  return;
}
```
