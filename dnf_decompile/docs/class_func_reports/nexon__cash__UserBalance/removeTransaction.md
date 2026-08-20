# removeTransaction

`_ZN5nexon4cash11UserBalance17removeTransactionEPNS0_11TransactionE`

`nexon::cash::UserBalance::removeTransaction(nexon::cash::Transaction*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UserBalance` | `0x081b1530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b1530  _ZN5nexon4cash11UserBalance17removeTransactionEPNS0_11TransactionE
#           nexon::cash::UserBalance::removeTransaction(nexon::cash::Transaction*)
# range [0x081b1530, 0x081b15c9]
081b1530 +0x00:  push   %ebp
081b1531 +0x01:  mov    %esp,%ebp
081b1533 +0x03:  sub    $0x38,%esp
081b1536 +0x06:  mov    0x8(%ebp),%eax
081b1539 +0x09:  lea    0x8(%eax),%edx
081b153c +0x0c:  lea    -0x18(%ebp),%eax
081b153f +0x0f:  mov    %edx,0x4(%esp)
081b1543 +0x13:  mov    %eax,(%esp)
081b1546 +0x16:  call   081b169c <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x62>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x62
081b154b +0x1b:  sub    $0x4,%esp
081b154e +0x1e:  mov    0x8(%ebp),%eax
081b1551 +0x21:  lea    0x8(%eax),%edx
081b1554 +0x24:  lea    -0x10(%ebp),%eax
081b1557 +0x27:  mov    %edx,0x4(%esp)
081b155b +0x2b:  mov    %eax,(%esp)
081b155e +0x2e:  call   081b169c <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x62>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x62
081b1563 +0x33:  sub    $0x4,%esp
081b1566 +0x36:  mov    0x8(%ebp),%eax
081b1569 +0x39:  lea    0x8(%eax),%edx
081b156c +0x3c:  lea    -0xc(%ebp),%eax
081b156f +0x3f:  mov    %edx,0x4(%esp)
081b1573 +0x43:  mov    %eax,(%esp)
081b1576 +0x46:  call   081b1678 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x3e>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x3e
081b157b +0x4b:  sub    $0x4,%esp
081b157e +0x4e:  lea    -0x14(%ebp),%eax
081b1581 +0x51:  lea    0xc(%ebp),%edx
081b1584 +0x54:  mov    %edx,0xc(%esp)
081b1588 +0x58:  mov    -0x10(%ebp),%edx
081b158b +0x5b:  mov    %edx,0x8(%esp)
081b158f +0x5f:  mov    -0xc(%ebp),%edx
081b1592 +0x62:  mov    %edx,0x4(%esp)
081b1596 +0x66:  mov    %eax,(%esp)
081b1599 +0x69:  call   081b17f3 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x1b9>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x1b9
081b159e +0x6e:  sub    $0x4,%esp
081b15a1 +0x71:  mov    0x8(%ebp),%eax
081b15a4 +0x74:  lea    0x8(%eax),%ecx
081b15a7 +0x77:  lea    -0x1c(%ebp),%eax
081b15aa +0x7a:  mov    -0x18(%ebp),%edx
081b15ad +0x7d:  mov    %edx,0xc(%esp)
081b15b1 +0x81:  mov    -0x14(%ebp),%edx
081b15b4 +0x84:  mov    %edx,0x8(%esp)
081b15b8 +0x88:  mov    %ecx,0x4(%esp)
081b15bc +0x8c:  mov    %eax,(%esp)
081b15bf +0x8f:  call   081b18d8 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x29e>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x29e
081b15c4 +0x94:  sub    $0x4,%esp
081b15c7 +0x97:  leave
081b15c8 +0x98:  ret
081b15c9 +0x99:  nop
```

## 反编译 C

```c
// nexon::cash::UserBalance::removeTransaction @ 0x81b1530

/* nexon::cash::UserBalance::removeTransaction(nexon::cash::Transaction*) */

void nexon::cash::UserBalance::removeTransaction(Transaction *param_1)

{
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::end();
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::end();
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::begin();
  std::
  remove<__gnu_cxx::__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>,nexon::cash::Transaction*>
            (&local_18,local_10,local_14,&stack0x00000008);
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::erase
            (local_20,param_1 + 8,local_18,local_1c);
  return;
}
```
