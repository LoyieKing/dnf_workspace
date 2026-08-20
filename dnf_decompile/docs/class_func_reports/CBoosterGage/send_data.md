# send_data

`_ZN12CBoosterGage9send_dataEP5CUseri`

`CBoosterGage::send_data(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd246  _ZN12CBoosterGage9send_dataEP5CUseri
#           CBoosterGage::send_data(CUser*, int)
# range [0x080dd246, 0x080dd24d]
080dd246 +0x00:  push   %ebp
080dd247 +0x01:  mov    %esp,%ebp
080dd249 +0x03:  sub    $0x10,%esp
080dd24c +0x06:  leave
080dd24d +0x07:  ret
```

## 反编译 C

```c
// CBoosterGage::send_data @ 0x80dd246

/* CBoosterGage::send_data(CUser*, int) */

void CBoosterGage::send_data(CUser *param_1,int param_2)

{
  return;
}
```
