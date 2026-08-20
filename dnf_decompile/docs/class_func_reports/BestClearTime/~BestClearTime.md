# ~BestClearTime

`_ZN13BestClearTimeD1Ev`

`BestClearTime::~BestClearTime()`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8596` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8596  _ZN13BestClearTimeD1Ev
#           BestClearTime::~BestClearTime()
# range [0x080c8596, 0x080c85f7]
080c8596 +0x00:  push   %ebp
080c8597 +0x01:  mov    %esp,%ebp
080c8599 +0x03:  push   %esi
080c859a +0x04:  push   %ebx
080c859b +0x05:  sub    $0x10,%esp
080c859e +0x08:  mov    0x8(%ebp),%eax
080c85a1 +0x0b:  movl   $&_ZTV13BestClearTime+0x8,(%eax)
080c85a7 +0x11:  mov    0x8(%ebp),%eax
080c85aa +0x14:  add    $0x8,%eax
080c85ad +0x17:  mov    %eax,(%esp)
080c85b0 +0x1a:  call   080c8cc8 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x120>  ; global constructors keyed to BestClearTime::BestClearTime()+0x120
080c85b5 +0x1f:  jmp    080c85d2 <+0x3c>
080c85b7 +0x21:  mov    %edx,%ebx
080c85b9 +0x23:  mov    %eax,%esi
080c85bb +0x25:  mov    0x8(%ebp),%eax
080c85be +0x28:  mov    %eax,(%esp)
080c85c1 +0x2b:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
080c85c6 +0x30:  mov    %esi,%eax
080c85c8 +0x32:  mov    %ebx,%edx
080c85ca +0x34:  mov    %eax,(%esp)
080c85cd +0x37:  call   08ae3750 <_Unwind_Resume>
080c85d2 +0x3c:  mov    0x8(%ebp),%eax
080c85d5 +0x3f:  mov    %eax,(%esp)
080c85d8 +0x42:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
080c85dd +0x47:  mov    $0x0,%eax
080c85e2 +0x4c:  test   %al,%al
080c85e4 +0x4e:  je     080c85f1 <+0x5b>
080c85e6 +0x50:  mov    0x8(%ebp),%eax
080c85e9 +0x53:  mov    %eax,(%esp)
080c85ec +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c85f1 +0x5b:  add    $0x10,%esp
080c85f4 +0x5e:  pop    %ebx
080c85f5 +0x5f:  pop    %esi
080c85f6 +0x60:  pop    %ebp
080c85f7 +0x61:  ret
```

## 反编译 C

```c
// BestClearTime::~BestClearTime @ 0x80c8596

/* WARNING: Removing unreachable block (ram,0x080c85e6) */
/* BestClearTime::~BestClearTime() */

void __thiscall BestClearTime::~BestClearTime(BestClearTime *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b26828;
                    /* try { // try from 080c85b0 to 080c85b4 has its CatchHandler @ 080c85b7 */
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::~map((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
