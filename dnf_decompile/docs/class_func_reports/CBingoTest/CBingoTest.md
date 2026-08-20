# CBingoTest

`_ZN10CBingoTestC1Ev`

`CBingoTest::CBingoTest()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080caecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caecc  _ZN10CBingoTestC1Ev
#           CBingoTest::CBingoTest()
# range [0x080caecc, 0x080caedf]
080caecc +0x00:  push   %ebp
080caecd +0x01:  mov    %esp,%ebp
080caecf +0x03:  sub    $0x18,%esp
080caed2 +0x06:  mov    0x8(%ebp),%eax
080caed5 +0x09:  mov    %eax,(%esp)
080caed8 +0x0c:  call   080ca82c <_ZN6CBingoC1Ev>  ; CBingo::CBingo()
080caedd +0x11:  leave
080caede +0x12:  ret
080caedf +0x13:  nop
```

## 反编译 C

```c
// CBingoTest::CBingoTest @ 0x80caecc

/* CBingoTest::CBingoTest() */

void __thiscall CBingoTest::CBingoTest(CBingoTest *this)

{
  CBingo::CBingo((CBingo *)this);
  return;
}
```
