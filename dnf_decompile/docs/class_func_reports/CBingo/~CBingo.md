# ~CBingo

`_ZN6CBingoD1Ev`

`CBingo::~CBingo()`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080ca8f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca8f0  _ZN6CBingoD1Ev
#           CBingo::~CBingo()
# range [0x080ca8f0, 0x080ca935]
080ca8f0 +0x00:  push   %ebp
080ca8f1 +0x01:  mov    %esp,%ebp
080ca8f3 +0x03:  push   %esi
080ca8f4 +0x04:  push   %ebx
080ca8f5 +0x05:  sub    $0x10,%esp
080ca8f8 +0x08:  mov    0x8(%ebp),%eax
080ca8fb +0x0b:  add    $0x10,%eax
080ca8fe +0x0e:  mov    %eax,(%esp)
080ca901 +0x11:  call   080ccf4a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d97>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d97
080ca906 +0x16:  jmp    080ca923 <+0x33>
080ca908 +0x18:  mov    %edx,%ebx
080ca90a +0x1a:  mov    %eax,%esi
080ca90c +0x1c:  mov    0x8(%ebp),%eax
080ca90f +0x1f:  mov    %eax,(%esp)
080ca912 +0x22:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ca917 +0x27:  mov    %esi,%eax
080ca919 +0x29:  mov    %ebx,%edx
080ca91b +0x2b:  mov    %eax,(%esp)
080ca91e +0x2e:  call   08ae3750 <_Unwind_Resume>
080ca923 +0x33:  mov    0x8(%ebp),%eax
080ca926 +0x36:  mov    %eax,(%esp)
080ca929 +0x39:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ca92e +0x3e:  add    $0x10,%esp
080ca931 +0x41:  pop    %ebx
080ca932 +0x42:  pop    %esi
080ca933 +0x43:  pop    %ebp
080ca934 +0x44:  ret
080ca935 +0x45:  nop
```

## 反编译 C

```c
// CBingo::~CBingo @ 0x80ca8f0

/* CBingo::~CBingo() */

void __thiscall CBingo::~CBingo(CBingo *this)

{
                    /* try { // try from 080ca901 to 080ca905 has its CatchHandler @ 080ca908 */
  boost::shared_ptr<CMTRand>::~shared_ptr((shared_ptr<CMTRand> *)(this + 0x10));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  return;
}
```
