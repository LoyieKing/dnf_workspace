# BuyItem

`_ZN10secretshop7SHOPPER7BuyItemEii`

`secretshop::SHOPPER::BuyItem(int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::SHOPPER` | `0x08ab13e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab13e8  _ZN10secretshop7SHOPPER7BuyItemEii
#           secretshop::SHOPPER::BuyItem(int, int)
# range [0x08ab13e8, 0x08ab14b7]
08ab13e8 +0x00:  push   %ebp
08ab13e9 +0x01:  mov    %esp,%ebp
08ab13eb +0x03:  sub    $0x48,%esp
08ab13ee +0x06:  lea    -0x18(%ebp),%eax
08ab13f1 +0x09:  mov    %eax,(%esp)
08ab13f4 +0x0c:  call   08ab1694 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xbf>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xbf
08ab13f9 +0x11:  mov    0x8(%ebp),%edx
08ab13fc +0x14:  lea    -0x14(%ebp),%eax
08ab13ff +0x17:  mov    %edx,0x4(%esp)
08ab1403 +0x1b:  mov    %eax,(%esp)
08ab1406 +0x1e:  call   08ab16c6 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xf1>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xf1
08ab140b +0x23:  sub    $0x4,%esp
08ab140e +0x26:  mov    0x8(%ebp),%edx
08ab1411 +0x29:  lea    -0x10(%ebp),%eax
08ab1414 +0x2c:  mov    %edx,0x4(%esp)
08ab1418 +0x30:  mov    %eax,(%esp)
08ab141b +0x33:  call   08ab16a2 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xcd>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xcd
08ab1420 +0x38:  sub    $0x4,%esp
08ab1423 +0x3b:  lea    -0x2c(%ebp),%eax
08ab1426 +0x3e:  lea    0xc(%ebp),%edx
08ab1429 +0x41:  mov    %edx,0xc(%esp)
08ab142d +0x45:  mov    -0x14(%ebp),%edx
08ab1430 +0x48:  mov    %edx,0x8(%esp)
08ab1434 +0x4c:  mov    -0x10(%ebp),%edx
08ab1437 +0x4f:  mov    %edx,0x4(%esp)
08ab143b +0x53:  mov    %eax,(%esp)
08ab143e +0x56:  call   08ab16ec <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x117>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x117
08ab1443 +0x5b:  sub    $0x4,%esp
08ab1446 +0x5e:  mov    -0x2c(%ebp),%eax
08ab1449 +0x61:  mov    %eax,-0x18(%ebp)
08ab144c +0x64:  mov    0x8(%ebp),%edx
08ab144f +0x67:  lea    -0xc(%ebp),%eax
08ab1452 +0x6a:  mov    %edx,0x4(%esp)
08ab1456 +0x6e:  mov    %eax,(%esp)
08ab1459 +0x71:  call   08ab16c6 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0xf1>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0xf1
08ab145e +0x76:  sub    $0x4,%esp
08ab1461 +0x79:  lea    -0xc(%ebp),%eax
08ab1464 +0x7c:  mov    %eax,0x4(%esp)
08ab1468 +0x80:  lea    -0x18(%ebp),%eax
08ab146b +0x83:  mov    %eax,(%esp)
08ab146e +0x86:  call   08ab1740 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x16b>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x16b
08ab1473 +0x8b:  test   %al,%al
08ab1475 +0x8d:  je     08ab148d <+0xa5>
08ab1477 +0x8f:  lea    -0x18(%ebp),%eax
08ab147a +0x92:  mov    %eax,(%esp)
08ab147d +0x95:  call   08ab176c <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x197>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x197
08ab1482 +0x9a:  mov    0x4(%eax),%edx
08ab1485 +0x9d:  add    0x10(%ebp),%edx
08ab1488 +0xa0:  mov    %edx,0x4(%eax)
08ab148b +0xa3:  jmp    08ab14b6 <+0xce>
08ab148d +0xa5:  lea    -0x20(%ebp),%eax
08ab1490 +0xa8:  mov    %eax,(%esp)
08ab1493 +0xab:  call   08ab1606 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x31>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x31
08ab1498 +0xb0:  mov    0xc(%ebp),%eax
08ab149b +0xb3:  mov    %eax,-0x20(%ebp)
08ab149e +0xb6:  mov    0x10(%ebp),%eax
08ab14a1 +0xb9:  mov    %eax,-0x1c(%ebp)
08ab14a4 +0xbc:  mov    0x8(%ebp),%eax
08ab14a7 +0xbf:  lea    -0x20(%ebp),%edx
08ab14aa +0xc2:  mov    %edx,0x4(%esp)
08ab14ae +0xc6:  mov    %eax,(%esp)
08ab14b1 +0xc9:  call   08ab1776 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x1a1>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x1a1
08ab14b6 +0xce:  leave
08ab14b7 +0xcf:  ret
```

## 反编译 C

```c
// secretshop::SHOPPER::BuyItem @ 0x8ab13e8

/* secretshop::SHOPPER::BuyItem(int, int) */

void __thiscall secretshop::SHOPPER::BuyItem(SHOPPER *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_30 [3];
  int local_24;
  int local_20;
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
            (local_30,local_14,local_18,&param_1);
  local_1c = local_30[0];
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    iVar2 = __gnu_cxx::
            __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
            ::operator*((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                         *)&local_1c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_2;
  }
  else {
    BUY_INFO::BUY_INFO((BUY_INFO *)&local_24);
    local_24 = param_1;
    local_20 = param_2;
    std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::push_back
              ((vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>> *)this,
               (BUY_INFO *)&local_24);
  }
  return;
}
```
