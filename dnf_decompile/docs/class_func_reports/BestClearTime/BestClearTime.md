# BestClearTime

`_ZN13BestClearTimeC1Ev`

`BestClearTime::BestClearTime()`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c851c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c851c  _ZN13BestClearTimeC1Ev
#           BestClearTime::BestClearTime()
# range [0x080c851c, 0x080c8595]
080c851c +0x00:  push   %ebp
080c851d +0x01:  mov    %esp,%ebp
080c851f +0x03:  push   %esi
080c8520 +0x04:  push   %ebx
080c8521 +0x05:  sub    $0x10,%esp
080c8524 +0x08:  mov    0x8(%ebp),%eax
080c8527 +0x0b:  mov    %eax,(%esp)
080c852a +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
080c852f +0x13:  mov    0x8(%ebp),%eax
080c8532 +0x16:  movl   $&_ZTV13BestClearTime+0x8,(%eax)
080c8538 +0x1c:  mov    0x8(%ebp),%eax
080c853b +0x1f:  add    $0x8,%eax
080c853e +0x22:  mov    %eax,(%esp)
080c8541 +0x25:  call   080c8cdc <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x134>  ; global constructors keyed to BestClearTime::BestClearTime()+0x134
080c8546 +0x2a:  mov    0x8(%ebp),%eax
080c8549 +0x2d:  add    $0x8,%eax
080c854c +0x30:  mov    %eax,(%esp)
080c854f +0x33:  call   080c8d56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1ae>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1ae
080c8554 +0x38:  mov    0x8(%ebp),%eax
080c8557 +0x3b:  movb   $0x0,0x20(%eax)
080c855b +0x3f:  add    $0x10,%esp
080c855e +0x42:  pop    %ebx
080c855f +0x43:  pop    %esi
080c8560 +0x44:  pop    %ebp
080c8561 +0x45:  ret
080c8562 +0x46:  mov    %edx,%ebx
080c8564 +0x48:  mov    %eax,%esi
080c8566 +0x4a:  mov    0x8(%ebp),%eax
080c8569 +0x4d:  add    $0x8,%eax
080c856c +0x50:  mov    %eax,(%esp)
080c856f +0x53:  call   080c8cc8 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x120>  ; global constructors keyed to BestClearTime::BestClearTime()+0x120
080c8574 +0x58:  mov    %esi,%eax
080c8576 +0x5a:  mov    %ebx,%edx
080c8578 +0x5c:  jmp    080c857a <+0x5e>
080c857a +0x5e:  mov    %edx,%ebx
080c857c +0x60:  mov    %eax,%esi
080c857e +0x62:  mov    0x8(%ebp),%eax
080c8581 +0x65:  mov    %eax,(%esp)
080c8584 +0x68:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
080c8589 +0x6d:  mov    %esi,%eax
080c858b +0x6f:  mov    %ebx,%edx
080c858d +0x71:  mov    %eax,(%esp)
080c8590 +0x74:  call   08ae3750 <_Unwind_Resume>
080c8595 +0x79:  nop
```

## 反编译 C

```c
// BestClearTime::BestClearTime @ 0x80c851c

/* BestClearTime::BestClearTime() */

void __thiscall BestClearTime::BestClearTime(BestClearTime *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b26828;
                    /* try { // try from 080c8541 to 080c8545 has its CatchHandler @ 080c857a */
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::map((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
         *)(this + 8));
                    /* try { // try from 080c854f to 080c8553 has its CatchHandler @ 080c8562 */
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::clear((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
           *)(this + 8));
  this[0x20] = (BestClearTime)0x0;
  return;
}
```
