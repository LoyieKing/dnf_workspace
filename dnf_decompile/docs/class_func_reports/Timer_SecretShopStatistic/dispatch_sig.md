# dispatch_sig

`_ZN25Timer_SecretShopStatistic12dispatch_sigEiij`

`Timer_SecretShopStatistic::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_SecretShopStatistic` | `0x086397ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086397ce  _ZN25Timer_SecretShopStatistic12dispatch_sigEiij
#           Timer_SecretShopStatistic::dispatch_sig(int, int, unsigned int)
# range [0x086397ce, 0x086397ed]
086397ce +0x00:  push   %ebp
086397cf +0x01:  mov    %esp,%ebp
086397d1 +0x03:  sub    $0x18,%esp
086397d4 +0x06:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
086397d9 +0x0b:  mov    %eax,(%esp)
086397dc +0x0e:  call   085fb53a <_ZN10secretshop11CSecretShop23SendSecretShopStatisticEv>  ; secretshop::CSecretShop::SendSecretShopStatistic()
086397e1 +0x13:  call   086397ee <_ZN25Timer_SecretShopStatistic15RegistNextTimerEv>  ; Timer_SecretShopStatistic::RegistNextTimer()
086397e6 +0x18:  mov    $0x1,%eax
086397eb +0x1d:  leave
086397ec +0x1e:  ret
086397ed +0x1f:  nop
```

## 反编译 C

```c
// Timer_SecretShopStatistic::dispatch_sig @ 0x86397ce

/* Timer_SecretShopStatistic::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_SecretShopStatistic::dispatch_sig(int param_1,int param_2,uint param_3)

{
  secretshop::CSecretShop::SendSecretShopStatistic(GlobalData::s_secret_shop);
  RegistNextTimer();
  return 1;
}
```
