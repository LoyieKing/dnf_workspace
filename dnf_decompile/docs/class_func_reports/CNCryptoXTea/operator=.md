# operator=

`_ZN12CNCryptoXTeaaSERKS_`

`CNCryptoXTea::operator=(CNCryptoXTea const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809da00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809da00  _ZN12CNCryptoXTeaaSERKS_
#           CNCryptoXTea::operator=(CNCryptoXTea const&)
# range [0x0809da00, 0x0809da07]
0809da00 +0x00:  push   %ebp
0809da01 +0x01:  mov    %esp,%ebp
0809da03 +0x03:  mov    0x8(%ebp),%eax
0809da06 +0x06:  pop    %ebp
0809da07 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoXTea::operator= @ 0x809da00

/* CNCryptoXTea::TEMPNAMEPLACEHOLDERVALUE(CNCryptoXTea const&) */

CNCryptoXTea * __thiscall CNCryptoXTea::operator=(CNCryptoXTea *this,CNCryptoXTea *param_1)

{
  return this;
}
```
