# cancel

`_ZN5nexon4cash18TransactionManager6cancelEj`

`nexon::cash::TransactionManager::cancel(unsigned int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TransactionManager` | `0x081b0244` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0244  _ZN5nexon4cash18TransactionManager6cancelEj
#           nexon::cash::TransactionManager::cancel(unsigned int)
# range [0x081b0244, 0x081b0297]
081b0244 +0x00:  push   %ebp
081b0245 +0x01:  mov    %esp,%ebp
081b0247 +0x03:  sub    $0x28,%esp
081b024a +0x06:  mov    0xc(%ebp),%eax
081b024d +0x09:  mov    %eax,0x4(%esp)
081b0251 +0x0d:  mov    0x8(%ebp),%eax
081b0254 +0x10:  mov    %eax,(%esp)
081b0257 +0x13:  call   081b0444 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x1c>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x1c
081b025c +0x18:  mov    %eax,-0xc(%ebp)
081b025f +0x1b:  cmpl   $0x0,-0xc(%ebp)
081b0263 +0x1f:  je     081b0295 <+0x51>
081b0265 +0x21:  mov    -0xc(%ebp),%eax
081b0268 +0x24:  mov    %eax,(%esp)
081b026b +0x27:  call   081b03b4 <_ZN5nexon4cash11Transaction6cancelEv>  ; nexon::cash::Transaction::cancel()
081b0270 +0x2c:  mov    -0xc(%ebp),%eax
081b0273 +0x2f:  mov    %eax,(%esp)
081b0276 +0x32:  call   081b0516 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xee>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xee
081b027b +0x37:  mov    -0xc(%ebp),%edx
081b027e +0x3a:  mov    %edx,0x4(%esp)
081b0282 +0x3e:  mov    %eax,(%esp)
081b0285 +0x41:  call   081b1530 <_ZN5nexon4cash11UserBalance17removeTransactionEPNS0_11TransactionE>  ; nexon::cash::UserBalance::removeTransaction(nexon::cash::Transaction*)
081b028a +0x46:  mov    -0xc(%ebp),%eax
081b028d +0x49:  mov    %eax,(%esp)
081b0290 +0x4c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b0295 +0x51:  leave
081b0296 +0x52:  ret
081b0297 +0x53:  nop
```

## 反编译 C

```c
// nexon::cash::TransactionManager::cancel @ 0x81b0244

/* nexon::cash::TransactionManager::cancel(unsigned int) */

void nexon::cash::TransactionManager::cancel(uint param_1)

{
  Transaction *this;
  Transaction *pTVar1;
  
  this = (Transaction *)getTransaction(param_1);
  if (this != (Transaction *)0x0) {
    Transaction::cancel(this);
    pTVar1 = (Transaction *)Transaction::getUser(this);
    UserBalance::removeTransaction(pTVar1);
    operator_delete(this);
  }
  return;
}
```
