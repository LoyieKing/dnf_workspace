# run

`_ZN10CBingoTest3runEv`

`CBingoTest::run()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080caef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caef4  _ZN10CBingoTest3runEv
#           CBingoTest::run()
# range [0x080caef4, 0x080caf3d]
080caef4 +0x00:  push   %ebp
080caef5 +0x01:  mov    %esp,%ebp
080caef7 +0x03:  sub    $0x18,%esp
080caefa +0x06:  mov    0x8(%ebp),%eax
080caefd +0x09:  mov    %eax,(%esp)
080caf00 +0x0c:  call   080caf7c <_ZN10CBingoTest8getTodayEv>  ; CBingoTest::getToday()
080caf05 +0x11:  mov    0x8(%ebp),%eax
080caf08 +0x14:  mov    %eax,(%esp)
080caf0b +0x17:  call   080cb030 <_ZN10CBingoTest10resetBoardEv>  ; CBingoTest::resetBoard()
080caf10 +0x1c:  mov    0x8(%ebp),%eax
080caf13 +0x1f:  mov    %eax,(%esp)
080caf16 +0x22:  call   080cb036 <_ZN10CBingoTest9resetQuizEv>  ; CBingoTest::resetQuiz()
080caf1b +0x27:  mov    0x8(%ebp),%eax
080caf1e +0x2a:  mov    %eax,(%esp)
080caf21 +0x2d:  call   080cb03c <_ZN10CBingoTest17calBoradMatchLineEv>  ; CBingoTest::calBoradMatchLine()
080caf26 +0x32:  mov    0x8(%ebp),%eax
080caf29 +0x35:  mov    %eax,(%esp)
080caf2c +0x38:  call   080cb06e <_ZN10CBingoTest11calNewValueEv>  ; CBingoTest::calNewValue()
080caf31 +0x3d:  mov    0x8(%ebp),%eax
080caf34 +0x40:  mov    %eax,(%esp)
080caf37 +0x43:  call   080cb07e <_ZN10CBingoTest19getBingoRandomVauleEv>  ; CBingoTest::getBingoRandomVaule()
080caf3c +0x48:  leave
080caf3d +0x49:  ret
```

## 反编译 C

```c
// CBingoTest::run @ 0x80caef4

/* CBingoTest::run() */

void __thiscall CBingoTest::run(CBingoTest *this)

{
  getToday();
  resetBoard();
  resetQuiz();
  calBoradMatchLine();
  calNewValue();
  getBingoRandomVaule(this);
  return;
}
```
