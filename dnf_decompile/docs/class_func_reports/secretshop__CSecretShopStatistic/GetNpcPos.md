# GetNpcPos

`_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi`

`secretshop::CSecretShopStatistic::GetNpcPos(int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd024  _ZN10secretshop20CSecretShopStatistic9GetNpcPosEi
#           secretshop::CSecretShopStatistic::GetNpcPos(int)
# range [0x085fd024, 0x085fd05d]
085fd024 +0x00:  push   %ebp
085fd025 +0x01:  mov    %esp,%ebp
085fd027 +0x03:  cmpl   $0x3ea,0xc(%ebp)
085fd02e +0x0a:  jne    085fd037 <+0x13>
085fd030 +0x0c:  mov    $0x0,%eax
085fd035 +0x11:  jmp    085fd05c <+0x38>
085fd037 +0x13:  cmpl   $0x3eb,0xc(%ebp)
085fd03e +0x1a:  jne    085fd047 <+0x23>
085fd040 +0x1c:  mov    $0x1,%eax
085fd045 +0x21:  jmp    085fd05c <+0x38>
085fd047 +0x23:  cmpl   $0x3ec,0xc(%ebp)
085fd04e +0x2a:  jne    085fd057 <+0x33>
085fd050 +0x2c:  mov    $0x2,%eax
085fd055 +0x31:  jmp    085fd05c <+0x38>
085fd057 +0x33:  mov    $0x0,%eax
085fd05c +0x38:  pop    %ebp
085fd05d +0x39:  ret
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::GetNpcPos @ 0x85fd024

/* secretshop::CSecretShopStatistic::GetNpcPos(int) */

undefined4 __thiscall
secretshop::CSecretShopStatistic::GetNpcPos(CSecretShopStatistic *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x3ea) {
    uVar1 = 0;
  }
  else if (param_1 == 0x3eb) {
    uVar1 = 1;
  }
  else if (param_1 == 0x3ec) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
