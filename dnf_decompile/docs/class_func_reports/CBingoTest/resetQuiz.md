# resetQuiz

`_ZN10CBingoTest9resetQuizEv`

`CBingoTest::resetQuiz()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080cb036` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cb036  _ZN10CBingoTest9resetQuizEv
#           CBingoTest::resetQuiz()
# range [0x080cb036, 0x080cb03b]
080cb036 +0x00:  push   %ebp
080cb037 +0x01:  mov    %esp,%ebp
080cb039 +0x03:  pop    %ebp
080cb03a +0x04:  ret
080cb03b +0x05:  nop
```

## 反编译 C

```c
// CBingoTest::resetQuiz @ 0x80cb036

/* CBingoTest::resetQuiz() */

void CBingoTest::resetQuiz(void)

{
  return;
}
```
