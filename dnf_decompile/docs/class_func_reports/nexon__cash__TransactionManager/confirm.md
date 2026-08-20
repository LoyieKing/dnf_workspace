# confirm

`_ZN5nexon4cash18TransactionManager7confirmEj`

`nexon::cash::TransactionManager::confirm(unsigned int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TransactionManager` | `0x081b0298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0298  _ZN5nexon4cash18TransactionManager7confirmEj
#           nexon::cash::TransactionManager::confirm(unsigned int)
# range [0x081b0298, 0x081b02eb]
081b0298 +0x00:  push   %ebp
081b0299 +0x01:  mov    %esp,%ebp
081b029b +0x03:  sub    $0x28,%esp
081b029e +0x06:  mov    0xc(%ebp),%eax
081b02a1 +0x09:  mov    %eax,0x4(%esp)
081b02a5 +0x0d:  mov    0x8(%ebp),%eax
081b02a8 +0x10:  mov    %eax,(%esp)
081b02ab +0x13:  call   081b0444 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x1c>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x1c
081b02b0 +0x18:  mov    %eax,-0xc(%ebp)
081b02b3 +0x1b:  cmpl   $0x0,-0xc(%ebp)
081b02b7 +0x1f:  je     081b02e9 <+0x51>
081b02b9 +0x21:  mov    -0xc(%ebp),%eax
081b02bc +0x24:  mov    %eax,(%esp)
081b02bf +0x27:  call   081b0398 <_ZN5nexon4cash11Transaction7confirmEv>  ; nexon::cash::Transaction::confirm()
081b02c4 +0x2c:  mov    -0xc(%ebp),%eax
081b02c7 +0x2f:  mov    %eax,(%esp)
081b02ca +0x32:  call   081b0516 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xee>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xee
081b02cf +0x37:  mov    -0xc(%ebp),%edx
081b02d2 +0x3a:  mov    %edx,0x4(%esp)
081b02d6 +0x3e:  mov    %eax,(%esp)
081b02d9 +0x41:  call   081b1530 <_ZN5nexon4cash11UserBalance17removeTransactionEPNS0_11TransactionE>  ; nexon::cash::UserBalance::removeTransaction(nexon::cash::Transaction*)
081b02de +0x46:  mov    -0xc(%ebp),%eax
081b02e1 +0x49:  mov    %eax,(%esp)
081b02e4 +0x4c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b02e9 +0x51:  leave
081b02ea +0x52:  ret
081b02eb +0x53:  nop
```

## 反编译 C

```c
// nexon::cash::TransactionManager::confirm @ 0x81b0298

/* nexon::cash::TransactionManager::confirm(unsigned int) */

void nexon::cash::TransactionManager::confirm(uint param_1)

{
  Transaction *this;
  Transaction *pTVar1;
  
  this = (Transaction *)getTransaction(param_1);
  if (this != (Transaction *)0x0) {
    Transaction::confirm(this);
    pTVar1 = (Transaction *)Transaction::getUser(this);
    UserBalance::removeTransaction(pTVar1);
    operator_delete(this);
  }
  return;
}
```
