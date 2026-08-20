# operator=

`_ZN11CNCryptoTeaaSERKS_`

`CNCryptoTea::operator=(CNCryptoTea const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d042` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d042  _ZN11CNCryptoTeaaSERKS_
#           CNCryptoTea::operator=(CNCryptoTea const&)
# range [0x0809d042, 0x0809d049]
0809d042 +0x00:  push   %ebp
0809d043 +0x01:  mov    %esp,%ebp
0809d045 +0x03:  mov    0x8(%ebp),%eax
0809d048 +0x06:  pop    %ebp
0809d049 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoTea::operator= @ 0x809d042

/* CNCryptoTea::TEMPNAMEPLACEHOLDERVALUE(CNCryptoTea const&) */

CNCryptoTea * __thiscall CNCryptoTea::operator=(CNCryptoTea *this,CNCryptoTea *param_1)

{
  return this;
}
```
