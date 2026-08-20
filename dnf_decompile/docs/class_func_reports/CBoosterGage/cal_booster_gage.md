# cal_booster_gage

`_ZN12CBoosterGage16cal_booster_gageEmP5CUser`

`CBoosterGage::cal_booster_gage(unsigned long, CUser*)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd134  _ZN12CBoosterGage16cal_booster_gageEmP5CUser
#           CBoosterGage::cal_booster_gage(unsigned long, CUser*)
# range [0x080dd134, 0x080dd141]
080dd134 +0x00:  push   %ebp
080dd135 +0x01:  mov    %esp,%ebp
080dd137 +0x03:  sub    $0x10,%esp
080dd13a +0x06:  mov    $0x0,%eax
080dd13f +0x0b:  leave
080dd140 +0x0c:  ret
080dd141 +0x0d:  nop
```

## 反编译 C

```c
// CBoosterGage::cal_booster_gage @ 0x80dd134

/* CBoosterGage::cal_booster_gage(unsigned long, CUser*) */

undefined4 CBoosterGage::cal_booster_gage(ulong param_1,CUser *param_2)

{
  return 0;
}
```
