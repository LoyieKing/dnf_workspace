# confirm

`_ZN5nexon4cash11Transaction7confirmEv`

`nexon::cash::Transaction::confirm()`

| 类 | 地址 |
|---|---|
| `nexon::cash::Transaction` | `0x081b0398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0398  _ZN5nexon4cash11Transaction7confirmEv
#           nexon::cash::Transaction::confirm()
# range [0x081b0398, 0x081b03b3]
081b0398 +0x00:  push   %ebp
081b0399 +0x01:  mov    %esp,%ebp
081b039b +0x03:  sub    $0x18,%esp
081b039e +0x06:  call   081b0128 <_ZN5nexon4cash18TransactionManager8instanceEv>  ; nexon::cash::TransactionManager::instance()
081b03a3 +0x0b:  mov    0x8(%ebp),%edx
081b03a6 +0x0e:  mov    %edx,0x4(%esp)
081b03aa +0x12:  mov    %eax,(%esp)
081b03ad +0x15:  call   081b021c <_ZN5nexon4cash18TransactionManager17removeTransactionEPNS0_11TransactionE>  ; nexon::cash::TransactionManager::removeTransaction(nexon::cash::Transaction*)
081b03b2 +0x1a:  leave
081b03b3 +0x1b:  ret
```

## 反编译 C

```c
// nexon::cash::Transaction::confirm @ 0x81b0398

/* nexon::cash::Transaction::confirm() */

void __thiscall nexon::cash::Transaction::confirm(Transaction *this)

{
  TransactionManager *this_00;
  
  this_00 = (TransactionManager *)TransactionManager::instance();
  TransactionManager::removeTransaction(this_00,this);
  return;
}
```
