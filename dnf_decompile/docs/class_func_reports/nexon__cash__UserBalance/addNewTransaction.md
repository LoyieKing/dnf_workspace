# addNewTransaction

`_ZN5nexon4cash11UserBalance17addNewTransactionEPNS0_11TransactionE`

`nexon::cash::UserBalance::addNewTransaction(nexon::cash::Transaction*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UserBalance` | `0x081b15ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b15ca  _ZN5nexon4cash11UserBalance17addNewTransactionEPNS0_11TransactionE
#           nexon::cash::UserBalance::addNewTransaction(nexon::cash::Transaction*)
# range [0x081b15ca, 0x081b15f9]
081b15ca +0x00:  push   %ebp
081b15cb +0x01:  mov    %esp,%ebp
081b15cd +0x03:  sub    $0x18,%esp
081b15d0 +0x06:  mov    0xc(%ebp),%eax
081b15d3 +0x09:  mov    %eax,0x4(%esp)
081b15d7 +0x0d:  movl   $" addNewTx: %p\n",(%esp)
081b15de +0x14:  call   0807db60 <_init+0x458>
081b15e3 +0x19:  mov    0x8(%ebp),%eax
081b15e6 +0x1c:  lea    0x8(%eax),%edx
081b15e9 +0x1f:  lea    0xc(%ebp),%eax
081b15ec +0x22:  mov    %eax,0x4(%esp)
081b15f0 +0x26:  mov    %edx,(%esp)
081b15f3 +0x29:  call   081b19a2 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x368>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x368
081b15f8 +0x2e:  leave
081b15f9 +0x2f:  ret
```

## 反编译 C

```c
// nexon::cash::UserBalance::addNewTransaction @ 0x81b15ca

/* nexon::cash::UserBalance::addNewTransaction(nexon::cash::Transaction*) */

void __thiscall nexon::cash::UserBalance::addNewTransaction(UserBalance *this,Transaction *param_1)

{
  printf(" addNewTx: %p\n",param_1);
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::push_back
            ((vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>> *)
             (this + 8),&param_1);
  return;
}
```
