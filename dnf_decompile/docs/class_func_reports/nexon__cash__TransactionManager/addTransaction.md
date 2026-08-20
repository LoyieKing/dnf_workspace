# addTransaction

`_ZN5nexon4cash18TransactionManager14addTransactionEPNS0_11TransactionE`

`nexon::cash::TransactionManager::addTransaction(nexon::cash::Transaction*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TransactionManager` | `0x081b01bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b01bc  _ZN5nexon4cash18TransactionManager14addTransactionEPNS0_11TransactionE
#           nexon::cash::TransactionManager::addTransaction(nexon::cash::Transaction*)
# range [0x081b01bc, 0x081b021b]
081b01bc +0x00:  push   %ebp
081b01bd +0x01:  mov    %esp,%ebp
081b01bf +0x03:  sub    $0x38,%esp
081b01c2 +0x06:  mov    0xc(%ebp),%eax
081b01c5 +0x09:  mov    %eax,(%esp)
081b01c8 +0x0c:  call   081b050c <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xe4>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xe4
081b01cd +0x11:  mov    %eax,-0xc(%ebp)
081b01d0 +0x14:  lea    -0x14(%ebp),%eax
081b01d3 +0x17:  lea    0xc(%ebp),%edx
081b01d6 +0x1a:  mov    %edx,0x8(%esp)
081b01da +0x1e:  lea    -0xc(%ebp),%edx
081b01dd +0x21:  mov    %edx,0x4(%esp)
081b01e1 +0x25:  mov    %eax,(%esp)
081b01e4 +0x28:  call   081b0655 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x22d>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x22d
081b01e9 +0x2d:  sub    $0x4,%esp
081b01ec +0x30:  lea    -0x14(%ebp),%eax
081b01ef +0x33:  mov    %eax,0x4(%esp)
081b01f3 +0x37:  lea    -0x1c(%ebp),%eax
081b01f6 +0x3a:  mov    %eax,(%esp)
081b01f9 +0x3d:  call   081b069c <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x274>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x274
081b01fe +0x42:  mov    0x8(%ebp),%edx
081b0201 +0x45:  lea    -0x24(%ebp),%eax
081b0204 +0x48:  lea    -0x1c(%ebp),%ecx
081b0207 +0x4b:  mov    %ecx,0x8(%esp)
081b020b +0x4f:  mov    %edx,0x4(%esp)
081b020f +0x53:  mov    %eax,(%esp)
081b0212 +0x56:  call   081b06cc <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x2a4>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x2a4
081b0217 +0x5b:  sub    $0x4,%esp
081b021a +0x5e:  leave
081b021b +0x5f:  ret
```

## 反编译 C

```c
// nexon::cash::TransactionManager::addTransaction @ 0x81b01bc

/* nexon::cash::TransactionManager::addTransaction(nexon::cash::Transaction*) */

void __thiscall
nexon::cash::TransactionManager::addTransaction(TransactionManager *this,Transaction *param_1)

{
  pair local_28 [8];
  pair<unsigned_int_const,nexon::cash::Transaction*> local_20 [8];
  uint local_18 [2];
  Transaction *local_10 [3];
  
  local_10[0] = (Transaction *)Transaction::id(param_1);
  std::make_pair<unsigned_int,nexon::cash::Transaction*&>(local_18,local_10);
  std::pair<unsigned_int_const,nexon::cash::Transaction*>::
  pair<unsigned_int,nexon::cash::Transaction*>(local_20,(pair *)local_18);
  std::
  map<unsigned_int,nexon::cash::Transaction*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,nexon::cash::Transaction*>>>
  ::insert(local_28);
  return;
}
```
