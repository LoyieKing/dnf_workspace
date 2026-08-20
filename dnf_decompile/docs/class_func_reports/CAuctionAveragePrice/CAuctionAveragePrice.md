# CAuctionAveragePrice

`_ZN20CAuctionAveragePriceC1Ev`

`CAuctionAveragePrice::CAuctionAveragePrice()`

| 类 | 地址 |
|---|---|
| `CAuctionAveragePrice` | `0x082f5a94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f5a94  _ZN20CAuctionAveragePriceC1Ev
#           CAuctionAveragePrice::CAuctionAveragePrice()
# range [0x082f5a94, 0x082f5aa7]
082f5a94 +0x00:  push   %ebp
082f5a95 +0x01:  mov    %esp,%ebp
082f5a97 +0x03:  sub    $0x18,%esp
082f5a9a +0x06:  mov    0x8(%ebp),%eax
082f5a9d +0x09:  mov    %eax,(%esp)
082f5aa0 +0x0c:  call   082f5f70 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x6d>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x6d
082f5aa5 +0x11:  leave
082f5aa6 +0x12:  ret
082f5aa7 +0x13:  nop
```

## 反编译 C

```c
// CAuctionAveragePrice::CAuctionAveragePrice @ 0x82f5a94

/* CAuctionAveragePrice::CAuctionAveragePrice() */

void __thiscall CAuctionAveragePrice::CAuctionAveragePrice(CAuctionAveragePrice *this)

{
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::map((map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
         *)this);
  return;
}
```
