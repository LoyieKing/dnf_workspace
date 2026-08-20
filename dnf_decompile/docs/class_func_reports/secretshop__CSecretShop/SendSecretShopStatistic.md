# SendSecretShopStatistic

`_ZN10secretshop11CSecretShop23SendSecretShopStatisticEv`

`secretshop::CSecretShop::SendSecretShopStatistic()`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fb53a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb53a  _ZN10secretshop11CSecretShop23SendSecretShopStatisticEv
#           secretshop::CSecretShop::SendSecretShopStatistic()
# range [0x085fb53a, 0x085fb55d]
085fb53a +0x00:  push   %ebp
085fb53b +0x01:  mov    %esp,%ebp
085fb53d +0x03:  sub    $0x18,%esp
085fb540 +0x06:  mov    0x8(%ebp),%eax
085fb543 +0x09:  add    $0x1c,%eax
085fb546 +0x0c:  mov    %eax,(%esp)
085fb549 +0x0f:  call   085fd278 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv>  ; secretshop::CSecretShopStatistic::SendSecretShopStatistic()
085fb54e +0x14:  mov    0x8(%ebp),%eax
085fb551 +0x17:  add    $0x1c,%eax
085fb554 +0x1a:  mov    %eax,(%esp)
085fb557 +0x1d:  call   085fcfec <_ZN10secretshop20CSecretShopStatistic5ClearEv>  ; secretshop::CSecretShopStatistic::Clear()
085fb55c +0x22:  leave
085fb55d +0x23:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::SendSecretShopStatistic @ 0x85fb53a

/* secretshop::CSecretShop::SendSecretShopStatistic() */

void __thiscall secretshop::CSecretShop::SendSecretShopStatistic(CSecretShop *this)

{
  CSecretShopStatistic::SendSecretShopStatistic((CSecretShopStatistic *)(this + 0x1c));
  CSecretShopStatistic::Clear((CSecretShopStatistic *)(this + 0x1c));
  return;
}
```
