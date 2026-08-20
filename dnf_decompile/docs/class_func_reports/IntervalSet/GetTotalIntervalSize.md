# GetTotalIntervalSize

`_ZN11IntervalSet20GetTotalIntervalSizeEv`

`IntervalSet::GetTotalIntervalSize()`

| 类 | 地址 |
|---|---|
| `IntervalSet` | `0x0857363c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857363c  _ZN11IntervalSet20GetTotalIntervalSizeEv
#           IntervalSet::GetTotalIntervalSize()
# range [0x0857363c, 0x085736bd]
0857363c +0x00:  push   %ebp
0857363d +0x01:  mov    %esp,%ebp
0857363f +0x03:  sub    $0x38,%esp
08573642 +0x06:  lea    -0x14(%ebp),%eax
08573645 +0x09:  mov    %eax,(%esp)
08573648 +0x0c:  call   085760d4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x298>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x298
0857364d +0x11:  movl   $0x0,-0xc(%ebp)
08573654 +0x18:  mov    0x8(%ebp),%edx
08573657 +0x1b:  lea    -0x1c(%ebp),%eax
0857365a +0x1e:  mov    %edx,0x4(%esp)
0857365e +0x22:  mov    %eax,(%esp)
08573661 +0x25:  call   085760e2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2a6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2a6
08573666 +0x2a:  sub    $0x4,%esp
08573669 +0x2d:  mov    -0x1c(%ebp),%eax
0857366c +0x30:  mov    %eax,-0x14(%ebp)
0857366f +0x33:  jmp    0857368d <+0x51>
08573671 +0x35:  lea    -0x14(%ebp),%eax
08573674 +0x38:  mov    %eax,(%esp)
08573677 +0x3b:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
0857367c +0x40:  mov    0x4(%eax),%eax
0857367f +0x43:  add    %eax,-0xc(%ebp)
08573682 +0x46:  lea    -0x14(%ebp),%eax
08573685 +0x49:  mov    %eax,(%esp)
08573688 +0x4c:  call   085763aa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x56e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x56e
0857368d +0x51:  mov    0x8(%ebp),%edx
08573690 +0x54:  lea    -0x10(%ebp),%eax
08573693 +0x57:  mov    %edx,0x4(%esp)
08573697 +0x5b:  mov    %eax,(%esp)
0857369a +0x5e:  call   08576106 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2ca
0857369f +0x63:  sub    $0x4,%esp
085736a2 +0x66:  lea    -0x10(%ebp),%eax
085736a5 +0x69:  mov    %eax,0x4(%esp)
085736a9 +0x6d:  lea    -0x14(%ebp),%eax
085736ac +0x70:  mov    %eax,(%esp)
085736af +0x73:  call   0857612c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2f0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2f0
085736b4 +0x78:  test   %al,%al
085736b6 +0x7a:  jne    08573671 <+0x35>
085736b8 +0x7c:  mov    -0xc(%ebp),%eax
085736bb +0x7f:  leave
085736bc +0x80:  ret
085736bd +0x81:  nop
```

## 反编译 C

```c
// IntervalSet::GetTotalIntervalSize @ 0x857363c

/* IntervalSet::GetTotalIntervalSize() */

int IntervalSet::GetTotalIntervalSize(void)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
  __normal_iterator(local_18);
  local_10 = 0;
  std::vector<Interval,std::allocator<Interval>>::begin();
  while( true ) {
    std::vector<Interval,std::allocator<Interval>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator*(local_18);
    local_10 = local_10 + *(int *)(iVar2 + 4);
    __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
    operator++(local_18);
  }
  return local_10;
}
```
