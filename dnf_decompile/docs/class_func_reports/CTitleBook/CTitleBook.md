# CTitleBook

`_ZN10CTitleBookC1Ev`

`CTitleBook::CTitleBook()`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x0864103c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864103c  _ZN10CTitleBookC1Ev
#           CTitleBook::CTitleBook()
# range [0x0864103c, 0x086410b5]
0864103c +0x00:  push   %ebp
0864103d +0x01:  mov    %esp,%ebp
0864103f +0x03:  sub    $0x18,%esp
08641042 +0x06:  mov    0x8(%ebp),%eax
08641045 +0x09:  mov    %eax,(%esp)
08641048 +0x0c:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0864104d +0x11:  mov    0x8(%ebp),%eax
08641050 +0x14:  movl   $&_ZTV10CTitleBook+0x8,(%eax)
08641056 +0x1a:  mov    0x8(%ebp),%eax
08641059 +0x1d:  movl   $0x0,0x8(%eax)
08641060 +0x24:  mov    0x8(%ebp),%eax
08641063 +0x27:  add    $0xc,%eax
08641066 +0x2a:  mov    %eax,(%esp)
08641069 +0x2d:  call   0848f62a <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x308>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x308
0864106e +0x32:  mov    0x8(%ebp),%eax
08641071 +0x35:  lea    0xc(%eax),%edx
08641074 +0x38:  mov    0x8(%ebp),%eax
08641077 +0x3b:  mov    %edx,0x6b48(%eax)
0864107d +0x41:  mov    0x8(%ebp),%eax
08641080 +0x44:  lea    0x10ba(%eax),%edx
08641086 +0x4a:  mov    0x8(%ebp),%eax
08641089 +0x4d:  mov    %edx,0x6b4c(%eax)
0864108f +0x53:  mov    0x8(%ebp),%eax
08641092 +0x56:  lea    0x4062(%eax),%edx
08641098 +0x5c:  mov    0x8(%ebp),%eax
0864109b +0x5f:  mov    %edx,0x6b50(%eax)
086410a1 +0x65:  mov    0x8(%ebp),%eax
086410a4 +0x68:  lea    0x5cfa(%eax),%edx
086410aa +0x6e:  mov    0x8(%ebp),%eax
086410ad +0x71:  mov    %edx,0x6b54(%eax)
086410b3 +0x77:  leave
086410b4 +0x78:  ret
086410b5 +0x79:  nop
```

## 反编译 C

```c
// CTitleBook::CTitleBook @ 0x864103c

/* CTitleBook::CTitleBook() */

void __thiscall CTitleBook::CTitleBook(CTitleBook *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08ceb948;
  *(undefined4 *)(this + 8) = 0;
  stTitleBook::stTitleBook((stTitleBook *)(this + 0xc));
  *(CTitleBook **)(this + 0x6b48) = this + 0xc;
  *(CTitleBook **)(this + 0x6b4c) = this + 0x10ba;
  *(CTitleBook **)(this + 0x6b50) = this + 0x4062;
  *(CTitleBook **)(this + 0x6b54) = this + 0x5cfa;
  return;
}
```
