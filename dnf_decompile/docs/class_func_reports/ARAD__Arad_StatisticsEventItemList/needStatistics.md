# needStatistics

`_ZN4ARAD28Arad_StatisticsEventItemList14needStatisticsEm`

`ARAD::Arad_StatisticsEventItemList::needStatistics(unsigned long)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_StatisticsEventItemList` | `0x0819d09a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819d09a  _ZN4ARAD28Arad_StatisticsEventItemList14needStatisticsEm
#           ARAD::Arad_StatisticsEventItemList::needStatistics(unsigned long)
# range [0x0819d09a, 0x0819d12e]
0819d09a +0x00:  push   %ebp
0819d09b +0x01:  mov    %esp,%ebp
0819d09d +0x03:  sub    $0x28,%esp
0819d0a0 +0x06:  mov    0x8(%ebp),%eax
0819d0a3 +0x09:  lea    0x8(%eax),%edx
0819d0a6 +0x0c:  lea    -0x18(%ebp),%eax
0819d0a9 +0x0f:  mov    %edx,0x4(%esp)
0819d0ad +0x13:  mov    %eax,(%esp)
0819d0b0 +0x16:  call   0819d1da <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6b>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6b
0819d0b5 +0x1b:  sub    $0x4,%esp
0819d0b8 +0x1e:  mov    0x8(%ebp),%eax
0819d0bb +0x21:  lea    0x8(%eax),%edx
0819d0be +0x24:  lea    -0x10(%ebp),%eax
0819d0c1 +0x27:  mov    %edx,0x4(%esp)
0819d0c5 +0x2b:  mov    %eax,(%esp)
0819d0c8 +0x2e:  call   0819d1da <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x6b>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x6b
0819d0cd +0x33:  sub    $0x4,%esp
0819d0d0 +0x36:  mov    0x8(%ebp),%eax
0819d0d3 +0x39:  lea    0x8(%eax),%edx
0819d0d6 +0x3c:  lea    -0xc(%ebp),%eax
0819d0d9 +0x3f:  mov    %edx,0x4(%esp)
0819d0dd +0x43:  mov    %eax,(%esp)
0819d0e0 +0x46:  call   0819d1b6 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x47>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x47
0819d0e5 +0x4b:  sub    $0x4,%esp
0819d0e8 +0x4e:  lea    -0x14(%ebp),%eax
0819d0eb +0x51:  lea    0xc(%ebp),%edx
0819d0ee +0x54:  mov    %edx,0xc(%esp)
0819d0f2 +0x58:  mov    -0x10(%ebp),%edx
0819d0f5 +0x5b:  mov    %edx,0x8(%esp)
0819d0f9 +0x5f:  mov    -0xc(%ebp),%edx
0819d0fc +0x62:  mov    %edx,0x4(%esp)
0819d100 +0x66:  mov    %eax,(%esp)
0819d103 +0x69:  call   0819d200 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0x91>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0x91
0819d108 +0x6e:  sub    $0x4,%esp
0819d10b +0x71:  lea    -0x18(%ebp),%eax
0819d10e +0x74:  mov    %eax,0x4(%esp)
0819d112 +0x78:  lea    -0x14(%ebp),%eax
0819d115 +0x7b:  mov    %eax,(%esp)
0819d118 +0x7e:  call   0819d254 <_GLOBAL__I__ZN4ARAD28Arad_StatisticsEventItemListC2Ev+0xe5>  ; global constructors keyed to ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList()+0xe5
0819d11d +0x83:  test   %al,%al
0819d11f +0x85:  je     0819d128 <+0x8e>
0819d121 +0x87:  mov    $0x1,%eax
0819d126 +0x8c:  jmp    0819d12d <+0x93>
0819d128 +0x8e:  mov    $0x0,%eax
0819d12d +0x93:  leave
0819d12e +0x94:  ret
```

## 反编译 C

```c
// ARAD::Arad_StatisticsEventItemList::needStatistics @ 0x819d09a

/* ARAD::Arad_StatisticsEventItemList::needStatistics(unsigned long) */

bool ARAD::Arad_StatisticsEventItemList::needStatistics(ulong param_1)

{
  bool bVar1;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  std::vector<unsigned_long,std::allocator<unsigned_long>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<unsigned_long*,std::vector<unsigned_long,std::allocator<unsigned_long>>>,unsigned_long>
            (local_18,local_10,local_14,&stack0x00000008);
  bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
  return bVar1;
}
```
