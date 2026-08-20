# GetBuyInfo

`_ZN10secretshop7SHOPPER10GetBuyInfoEi`

`secretshop::SHOPPER::GetBuyInfo(int)`

| 类 | 地址 |
|---|---|
| `secretshop::SHOPPER` | `0x08ab1344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab1344  _ZN10secretshop7SHOPPER10GetBuyInfoEi
#           secretshop::SHOPPER::GetBuyInfo(int)
# range [0x08ab1344, 0x08ab13e7]
08ab1344 +0x00:  push   %ebp
08ab1345 +0x01:  mov    %esp,%ebp
08ab1347 +0x03:  sub    $0x38,%esp
08ab134a +0x06:  lea    -0x18(%ebp),%eax
08ab134d +0x09:  mov    %eax,(%esp)
08ab1350 +0x0c:  call   08ab1694 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xbf>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xbf
08ab1355 +0x11:  mov    0x8(%ebp),%edx
08ab1358 +0x14:  lea    -0x14(%ebp),%eax
08ab135b +0x17:  mov    %edx,0x4(%esp)
08ab135f +0x1b:  mov    %eax,(%esp)
08ab1362 +0x1e:  call   08ab16c6 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xf1>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xf1
08ab1367 +0x23:  sub    $0x4,%esp
08ab136a +0x26:  mov    0x8(%ebp),%edx
08ab136d +0x29:  lea    -0x10(%ebp),%eax
08ab1370 +0x2c:  mov    %edx,0x4(%esp)
08ab1374 +0x30:  mov    %eax,(%esp)
08ab1377 +0x33:  call   08ab16a2 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xcd>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xcd
08ab137c +0x38:  sub    $0x4,%esp
08ab137f +0x3b:  lea    -0x1c(%ebp),%eax
08ab1382 +0x3e:  lea    0xc(%ebp),%edx
08ab1385 +0x41:  mov    %edx,0xc(%esp)
08ab1389 +0x45:  mov    -0x14(%ebp),%edx
08ab138c +0x48:  mov    %edx,0x8(%esp)
08ab1390 +0x4c:  mov    -0x10(%ebp),%edx
08ab1393 +0x4f:  mov    %edx,0x4(%esp)
08ab1397 +0x53:  mov    %eax,(%esp)
08ab139a +0x56:  call   08ab16ec <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x117>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x117
08ab139f +0x5b:  sub    $0x4,%esp
08ab13a2 +0x5e:  mov    -0x1c(%ebp),%eax
08ab13a5 +0x61:  mov    %eax,-0x18(%ebp)
08ab13a8 +0x64:  mov    0x8(%ebp),%edx
08ab13ab +0x67:  lea    -0xc(%ebp),%eax
08ab13ae +0x6a:  mov    %edx,0x4(%esp)
08ab13b2 +0x6e:  mov    %eax,(%esp)
08ab13b5 +0x71:  call   08ab16c6 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xf1>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xf1
08ab13ba +0x76:  sub    $0x4,%esp
08ab13bd +0x79:  lea    -0xc(%ebp),%eax
08ab13c0 +0x7c:  mov    %eax,0x4(%esp)
08ab13c4 +0x80:  lea    -0x18(%ebp),%eax
08ab13c7 +0x83:  mov    %eax,(%esp)
08ab13ca +0x86:  call   08ab1740 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x16b>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x16b
08ab13cf +0x8b:  test   %al,%al
08ab13d1 +0x8d:  je     08ab13e0 <+0x9c>
08ab13d3 +0x8f:  lea    -0x18(%ebp),%eax
08ab13d6 +0x92:  mov    %eax,(%esp)
08ab13d9 +0x95:  call   08ab176c <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x197>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x197
08ab13de +0x9a:  jmp    08ab13e5 <+0xa1>
08ab13e0 +0x9c:  mov    $0x0,%eax
08ab13e5 +0xa1:  leave
08ab13e6 +0xa2:  ret
08ab13e7 +0xa3:  nop
```

## 反编译 C

```c
// secretshop::SHOPPER::GetBuyInfo @ 0x8ab1344

/* secretshop::SHOPPER::GetBuyInfo(int) */

undefined4 secretshop::SHOPPER::GetBuyInfo(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  __gnu_cxx::
  __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
  ::__normal_iterator((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                       *)&local_1c);
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>,int>
            (&local_20,local_14,local_18,&stack0x00000008);
  local_1c = local_20;
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    uVar2 = __gnu_cxx::
            __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
            ::operator*((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                         *)&local_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
