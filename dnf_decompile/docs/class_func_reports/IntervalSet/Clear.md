# Clear

`_ZN11IntervalSet5ClearEv`

`IntervalSet::Clear()`

| 类 | 地址 |
|---|---|
| `IntervalSet` | `0x08573366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08573366  _ZN11IntervalSet5ClearEv
#           IntervalSet::Clear()
# range [0x08573366, 0x08573379]
08573366 +0x00:  push   %ebp
08573367 +0x01:  mov    %esp,%ebp
08573369 +0x03:  sub    $0x18,%esp
0857336c +0x06:  mov    0x8(%ebp),%eax
0857336f +0x09:  mov    %eax,(%esp)
08573372 +0x0c:  call   08576044 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x208>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x208
08573377 +0x11:  leave
08573378 +0x12:  ret
08573379 +0x13:  nop
```

## 反编译 C

```c
// IntervalSet::Clear @ 0x8573366

/* IntervalSet::Clear() */

void __thiscall IntervalSet::Clear(IntervalSet *this)

{
  std::vector<Interval,std::allocator<Interval>>::clear
            ((vector<Interval,std::allocator<Interval>> *)this);
  return;
}
```
