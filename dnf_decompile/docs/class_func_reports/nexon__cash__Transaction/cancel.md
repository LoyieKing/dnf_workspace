# cancel

`_ZN5nexon4cash11Transaction6cancelEv`

`nexon::cash::Transaction::cancel()`

| 类 | 地址 |
|---|---|
| `nexon::cash::Transaction` | `0x081b03b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b03b4  _ZN5nexon4cash11Transaction6cancelEv
#           nexon::cash::Transaction::cancel()
# range [0x081b03b4, 0x081b03e7]
081b03b4 +0x00:  push   %ebp
081b03b5 +0x01:  mov    %esp,%ebp
081b03b7 +0x03:  sub    $0x18,%esp
081b03ba +0x06:  mov    0x8(%ebp),%eax
081b03bd +0x09:  mov    0x4(%eax),%edx
081b03c0 +0x0c:  mov    0x8(%ebp),%eax
081b03c3 +0x0f:  mov    0xc(%eax),%eax
081b03c6 +0x12:  mov    %edx,0x4(%esp)
081b03ca +0x16:  mov    %eax,(%esp)
081b03cd +0x19:  call   081b052e <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x106>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x106
081b03d2 +0x1e:  call   081b0128 <_ZN5nexon4cash18TransactionManager8instanceEv>  ; nexon::cash::TransactionManager::instance()
081b03d7 +0x23:  mov    0x8(%ebp),%edx
081b03da +0x26:  mov    %edx,0x4(%esp)
081b03de +0x2a:  mov    %eax,(%esp)
081b03e1 +0x2d:  call   081b021c <_ZN5nexon4cash18TransactionManager17removeTransactionEPNS0_11TransactionE>  ; nexon::cash::TransactionManager::removeTransaction(nexon::cash::Transaction*)
081b03e6 +0x32:  leave
081b03e7 +0x33:  ret
```

## 反编译 C

```c
// nexon::cash::Transaction::cancel @ 0x81b03b4

/* nexon::cash::Transaction::cancel() */

void __thiscall nexon::cash::Transaction::cancel(Transaction *this)

{
  TransactionManager *this_00;
  
  UserBalance::balance(*(UserBalance **)(this + 0xc),*(int *)(this + 4));
  this_00 = (TransactionManager *)TransactionManager::instance();
  TransactionManager::removeTransaction(this_00,this);
  return;
}
```
