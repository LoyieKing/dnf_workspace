# execute

`_ZN5nexon4cash11Transaction7executeEv`

`nexon::cash::Transaction::execute()`

| 类 | 地址 |
|---|---|
| `nexon::cash::Transaction` | `0x081b0336` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0336  _ZN5nexon4cash11Transaction7executeEv
#           nexon::cash::Transaction::execute()
# range [0x081b0336, 0x081b0397]
081b0336 +0x00:  push   %ebp
081b0337 +0x01:  mov    %esp,%ebp
081b0339 +0x03:  sub    $0x18,%esp
081b033c +0x06:  mov    0x8(%ebp),%eax
081b033f +0x09:  mov    0xc(%eax),%eax
081b0342 +0x0c:  mov    %eax,(%esp)
081b0345 +0x0f:  call   081b0522 <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0xfa>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0xfa
081b034a +0x14:  mov    0x8(%ebp),%edx
081b034d +0x17:  mov    0x4(%edx),%edx
081b0350 +0x1a:  cmp    %edx,%eax
081b0352 +0x1c:  setl   %al
081b0355 +0x1f:  test   %al,%al
081b0357 +0x21:  je     081b0360 <+0x2a>
081b0359 +0x23:  mov    $0x3,%eax
081b035e +0x28:  jmp    081b0395 <+0x5f>
081b0360 +0x2a:  mov    0x8(%ebp),%eax
081b0363 +0x2d:  mov    0x4(%eax),%eax
081b0366 +0x30:  mov    %eax,%edx
081b0368 +0x32:  neg    %edx
081b036a +0x34:  mov    0x8(%ebp),%eax
081b036d +0x37:  mov    0xc(%eax),%eax
081b0370 +0x3a:  mov    %edx,0x4(%esp)
081b0374 +0x3e:  mov    %eax,(%esp)
081b0377 +0x41:  call   081b052e <_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E+0x106>  ; global constructors keyed to nexon::cash::TransactionManager::tx_id_+0x106
081b037c +0x46:  call   081b0128 <_ZN5nexon4cash18TransactionManager8instanceEv>  ; nexon::cash::TransactionManager::instance()
081b0381 +0x4b:  mov    0x8(%ebp),%edx
081b0384 +0x4e:  mov    %edx,0x4(%esp)
081b0388 +0x52:  mov    %eax,(%esp)
081b038b +0x55:  call   081b01bc <_ZN5nexon4cash18TransactionManager14addTransactionEPNS0_11TransactionE>  ; nexon::cash::TransactionManager::addTransaction(nexon::cash::Transaction*)
081b0390 +0x5a:  mov    $0x0,%eax
081b0395 +0x5f:  leave
081b0396 +0x60:  ret
081b0397 +0x61:  nop
```

## 反编译 C

```c
// nexon::cash::Transaction::execute @ 0x81b0336

/* nexon::cash::Transaction::execute() */

undefined4 __thiscall nexon::cash::Transaction::execute(Transaction *this)

{
  int iVar1;
  undefined4 uVar2;
  TransactionManager *this_00;
  
  iVar1 = UserBalance::balance(*(UserBalance **)(this + 0xc));
  if (iVar1 < *(int *)(this + 4)) {
    uVar2 = 3;
  }
  else {
    UserBalance::balance(*(UserBalance **)(this + 0xc),-*(int *)(this + 4));
    this_00 = (TransactionManager *)TransactionManager::instance();
    TransactionManager::addTransaction(this_00,this);
    uVar2 = 0;
  }
  return uVar2;
}
```
