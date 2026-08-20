# Transaction

`_ZN5nexon4cash11TransactionC1EPNS0_11UserBalanceEi`

`nexon::cash::Transaction::Transaction(nexon::cash::UserBalance*, int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::Transaction` | `0x081b02ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b02ec  _ZN5nexon4cash11TransactionC1EPNS0_11UserBalanceEi
#           nexon::cash::Transaction::Transaction(nexon::cash::UserBalance*, int)
# range [0x081b02ec, 0x081b0335]
081b02ec +0x00:  push   %ebp
081b02ed +0x01:  mov    %esp,%ebp
081b02ef +0x03:  sub    $0x18,%esp
081b02f2 +0x06:  mov    0x8(%ebp),%eax
081b02f5 +0x09:  movl   $0x0,(%eax)
081b02fb +0x0f:  mov    0x8(%ebp),%eax
081b02fe +0x12:  mov    0x10(%ebp),%edx
081b0301 +0x15:  mov    %edx,0x4(%eax)
081b0304 +0x18:  mov    0x8(%ebp),%eax
081b0307 +0x1b:  movl   $0x0,0x8(%eax)
081b030e +0x22:  mov    0x8(%ebp),%eax
081b0311 +0x25:  mov    0xc(%ebp),%edx
081b0314 +0x28:  mov    %edx,0xc(%eax)
081b0317 +0x2b:  call   081b04cc <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xa4>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xa4
081b031c +0x30:  mov    0x8(%ebp),%edx
081b031f +0x33:  mov    %eax,(%edx)
081b0321 +0x35:  movl   $0x0,(%esp)
081b0328 +0x3c:  call   0807d750 <_init+0x48>
081b032d +0x41:  mov    0x8(%ebp),%edx
081b0330 +0x44:  mov    %eax,0x8(%edx)
081b0333 +0x47:  leave
081b0334 +0x48:  ret
081b0335 +0x49:  nop
```

## 反编译 C

```c
// nexon::cash::Transaction::Transaction @ 0x81b02ec

/* nexon::cash::Transaction::Transaction(nexon::cash::UserBalance*, int) */

void __thiscall
nexon::cash::Transaction::Transaction(Transaction *this,UserBalance *param_1,int param_2)

{
  undefined4 uVar1;
  time_t tVar2;
  
  *(undefined4 *)this = 0;
  *(int *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = 0;
  *(UserBalance **)(this + 0xc) = param_1;
  uVar1 = TransactionManager::getNextTransactionID();
  *(undefined4 *)this = uVar1;
  tVar2 = time((time_t *)0x0);
  *(time_t *)(this + 8) = tVar2;
  return;
}
```
