# removeTransaction

`_ZN5nexon4cash18TransactionManager17removeTransactionEPNS0_11TransactionE`

`nexon::cash::TransactionManager::removeTransaction(nexon::cash::Transaction*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TransactionManager` | `0x081b021c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b021c  _ZN5nexon4cash18TransactionManager17removeTransactionEPNS0_11TransactionE
#           nexon::cash::TransactionManager::removeTransaction(nexon::cash::Transaction*)
# range [0x081b021c, 0x081b0243]
081b021c +0x00:  push   %ebp
081b021d +0x01:  mov    %esp,%ebp
081b021f +0x03:  sub    $0x28,%esp
081b0222 +0x06:  mov    0xc(%ebp),%eax
081b0225 +0x09:  mov    %eax,(%esp)
081b0228 +0x0c:  call   081b050c <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xe4>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xe4
081b022d +0x11:  mov    %eax,-0xc(%ebp)
081b0230 +0x14:  mov    0x8(%ebp),%eax
081b0233 +0x17:  lea    -0xc(%ebp),%edx
081b0236 +0x1a:  mov    %edx,0x4(%esp)
081b023a +0x1e:  mov    %eax,(%esp)
081b023d +0x21:  call   081b06f8 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x2d0>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x2d0
081b0242 +0x26:  leave
081b0243 +0x27:  ret
```

## 反编译 C

```c
// nexon::cash::TransactionManager::removeTransaction @ 0x81b021c

/* nexon::cash::TransactionManager::removeTransaction(nexon::cash::Transaction*) */

void __thiscall
nexon::cash::TransactionManager::removeTransaction(TransactionManager *this,Transaction *param_1)

{
  Transaction::id(param_1);
  std::
  map<unsigned_int,nexon::cash::Transaction*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,nexon::cash::Transaction*>>>
  ::erase((uint *)this);
  return;
}
```
