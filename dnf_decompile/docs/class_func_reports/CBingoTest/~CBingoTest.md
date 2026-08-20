# ~CBingoTest

`_ZN10CBingoTestD1Ev`

`CBingoTest::~CBingoTest()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080caee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caee0  _ZN10CBingoTestD1Ev
#           CBingoTest::~CBingoTest()
# range [0x080caee0, 0x080caef3]
080caee0 +0x00:  push   %ebp
080caee1 +0x01:  mov    %esp,%ebp
080caee3 +0x03:  sub    $0x18,%esp
080caee6 +0x06:  mov    0x8(%ebp),%eax
080caee9 +0x09:  mov    %eax,(%esp)
080caeec +0x0c:  call   080ca8f0 <_ZN6CBingoD1Ev>  ; CBingo::~CBingo()
080caef1 +0x11:  leave
080caef2 +0x12:  ret
080caef3 +0x13:  nop
```

## 反编译 C

```c
// CBingoTest::~CBingoTest @ 0x80caee0

/* CBingoTest::~CBingoTest() */

void __thiscall CBingoTest::~CBingoTest(CBingoTest *this)

{
  CBingo::~CBingo((CBingo *)this);
  return;
}
```
