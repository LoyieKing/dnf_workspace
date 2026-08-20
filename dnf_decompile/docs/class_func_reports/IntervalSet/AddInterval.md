# AddInterval

`_ZN11IntervalSet11AddIntervalERK8Interval`

`IntervalSet::AddInterval(Interval const&)`

| 类 | 地址 |
|---|---|
| `IntervalSet` | `0x0857337a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857337a  _ZN11IntervalSet11AddIntervalERK8Interval
#           IntervalSet::AddInterval(Interval const&)
# range [0x0857337a, 0x08573393]
0857337a +0x00:  push   %ebp
0857337b +0x01:  mov    %esp,%ebp
0857337d +0x03:  sub    $0x18,%esp
08573380 +0x06:  mov    0x8(%ebp),%eax
08573383 +0x09:  mov    0xc(%ebp),%edx
08573386 +0x0c:  mov    %edx,0x4(%esp)
0857338a +0x10:  mov    %eax,(%esp)
0857338d +0x13:  call   08576060 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x224>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x224
08573392 +0x18:  leave
08573393 +0x19:  ret
```

## 反编译 C

```c
// IntervalSet::AddInterval @ 0x857337a

/* IntervalSet::AddInterval(Interval const&) */

void __thiscall IntervalSet::AddInterval(IntervalSet *this,Interval *param_1)

{
  std::vector<Interval,std::allocator<Interval>>::push_back
            ((vector<Interval,std::allocator<Interval>> *)this,param_1);
  return;
}
```
