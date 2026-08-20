# GetNpcIndex

`_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi`

`secretshop::CSecretShopStatistic::GetNpcIndex(int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd05e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd05e  _ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi
#           secretshop::CSecretShopStatistic::GetNpcIndex(int)
# range [0x085fd05e, 0x085fd08f]
085fd05e +0x00:  push   %ebp
085fd05f +0x01:  mov    %esp,%ebp
085fd061 +0x03:  cmpl   $0x0,0xc(%ebp)
085fd065 +0x07:  jne    085fd06e <+0x10>
085fd067 +0x09:  mov    $0x3ea,%eax
085fd06c +0x0e:  jmp    085fd08d <+0x2f>
085fd06e +0x10:  cmpl   $0x1,0xc(%ebp)
085fd072 +0x14:  jne    085fd07b <+0x1d>
085fd074 +0x16:  mov    $0x3eb,%eax
085fd079 +0x1b:  jmp    085fd08d <+0x2f>
085fd07b +0x1d:  cmpl   $0x2,0xc(%ebp)
085fd07f +0x21:  jne    085fd088 <+0x2a>
085fd081 +0x23:  mov    $0x3ec,%eax
085fd086 +0x28:  jmp    085fd08d <+0x2f>
085fd088 +0x2a:  mov    $0x3ea,%eax
085fd08d +0x2f:  pop    %ebp
085fd08e +0x30:  ret
085fd08f +0x31:  nop
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::GetNpcIndex @ 0x85fd05e

/* secretshop::CSecretShopStatistic::GetNpcIndex(int) */

undefined4 __thiscall
secretshop::CSecretShopStatistic::GetNpcIndex(CSecretShopStatistic *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x3ea;
  }
  else if (param_1 == 1) {
    uVar1 = 0x3eb;
  }
  else if (param_1 == 2) {
    uVar1 = 0x3ec;
  }
  else {
    uVar1 = 0x3ea;
  }
  return uVar1;
}
```
