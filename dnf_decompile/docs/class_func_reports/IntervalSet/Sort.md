# Sort

`_ZN11IntervalSet4SortEv`

`IntervalSet::Sort()`

| 类 | 地址 |
|---|---|
| `IntervalSet` | `0x085735dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085735dc  _ZN11IntervalSet4SortEv
#           IntervalSet::Sort()
# range [0x085735dc, 0x0857363b]
085735dc +0x00:  push   %ebp
085735dd +0x01:  mov    %esp,%ebp
085735df +0x03:  push   %ebx
085735e0 +0x04:  sub    $0x14,%esp
085735e3 +0x07:  mov    0x8(%ebp),%eax
085735e6 +0x0a:  mov    %eax,(%esp)
085735e9 +0x0d:  call   085763c0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x584>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x584
085735ee +0x12:  test   %eax,%eax
085735f0 +0x14:  sete   %al
085735f3 +0x17:  test   %al,%al
085735f5 +0x19:  jne    08573635 <+0x59>
085735f7 +0x1b:  mov    0x8(%ebp),%eax
085735fa +0x1e:  mov    %eax,(%esp)
085735fd +0x21:  call   085763c0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x584>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x584
08573602 +0x26:  mov    %eax,%ebx
08573604 +0x28:  mov    0x8(%ebp),%eax
08573607 +0x2b:  movl   $0x0,0x4(%esp)
0857360f +0x33:  mov    %eax,(%esp)
08573612 +0x36:  call   085763dc <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5a0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5a0
08573617 +0x3b:  movl   $&_ZL22CompareIntervalForSortPKvS0_,0xc(%esp)
0857361f +0x43:  movl   $0x8,0x8(%esp)
08573627 +0x4b:  mov    %ebx,0x4(%esp)
0857362b +0x4f:  mov    %eax,(%esp)
0857362e +0x52:  call   0807e870 <_init+0x1168>
08573633 +0x57:  jmp    08573636 <+0x5a>
08573635 +0x59:  nop
08573636 +0x5a:  add    $0x14,%esp
08573639 +0x5d:  pop    %ebx
0857363a +0x5e:  pop    %ebp
0857363b +0x5f:  ret
```

## 反编译 C

```c
// IntervalSet::Sort @ 0x85735dc

/* IntervalSet::Sort() */

void __thiscall IntervalSet::Sort(IntervalSet *this)

{
  int iVar1;
  size_t __nmemb;
  void *__base;
  
  iVar1 = std::vector<Interval,std::allocator<Interval>>::size
                    ((vector<Interval,std::allocator<Interval>> *)this);
  if (iVar1 != 0) {
    __nmemb = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)this);
    __base = (void *)std::vector<Interval,std::allocator<Interval>>::operator[]
                               ((vector<Interval,std::allocator<Interval>> *)this,0);
    qsort(__base,__nmemb,8,CompareIntervalForSort);
  }
  return;
}
```
