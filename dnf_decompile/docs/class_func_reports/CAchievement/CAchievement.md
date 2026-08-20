# CAchievement

`_ZN12CAchievementC1Ev`

`CAchievement::CAchievement()`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828b614` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b614  _ZN12CAchievementC1Ev
#           CAchievement::CAchievement()
# range [0x0828b614, 0x0828b673]
0828b614 +0x00:  push   %ebp
0828b615 +0x01:  mov    %esp,%ebp
0828b617 +0x03:  push   %esi
0828b618 +0x04:  push   %ebx
0828b619 +0x05:  sub    $0x10,%esp
0828b61c +0x08:  mov    0x8(%ebp),%eax
0828b61f +0x0b:  mov    %eax,(%esp)
0828b622 +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0828b627 +0x13:  mov    0x8(%ebp),%eax
0828b62a +0x16:  movl   $&_ZTV12CAchievement+0x8,(%eax)
0828b630 +0x1c:  mov    0x8(%ebp),%eax
0828b633 +0x1f:  movl   $0x0,0x8(%eax)
0828b63a +0x26:  mov    0x8(%ebp),%eax
0828b63d +0x29:  add    $0xc,%eax
0828b640 +0x2c:  mov    %eax,(%esp)
0828b643 +0x2f:  call   0828dd44 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4f1>  ; global constructors keyed to CAchievement::CAchievement()+0x4f1
0828b648 +0x34:  mov    0x8(%ebp),%eax
0828b64b +0x37:  movb   $0x0,0x24(%eax)
0828b64f +0x3b:  mov    0x8(%ebp),%eax
0828b652 +0x3e:  movb   $0x0,0x25(%eax)
0828b656 +0x42:  add    $0x10,%esp
0828b659 +0x45:  pop    %ebx
0828b65a +0x46:  pop    %esi
0828b65b +0x47:  pop    %ebp
0828b65c +0x48:  ret
0828b65d +0x49:  mov    %edx,%ebx
0828b65f +0x4b:  mov    %eax,%esi
0828b661 +0x4d:  mov    0x8(%ebp),%eax
0828b664 +0x50:  mov    %eax,(%esp)
0828b667 +0x53:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0828b66c +0x58:  mov    %esi,%eax
0828b66e +0x5a:  mov    %ebx,%edx
0828b670 +0x5c:  mov    %eax,(%esp)
0828b673 +0x5f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CAchievement::CAchievement @ 0x828b614

/* CAchievement::CAchievement() */

void __thiscall CAchievement::CAchievement(CAchievement *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c16088;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0828b643 to 0828b647 has its CatchHandler @ 0828b65d */
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::map((map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
         *)(this + 0xc));
  this[0x24] = (CAchievement)0x0;
  this[0x25] = (CAchievement)0x0;
  return;
}
```
