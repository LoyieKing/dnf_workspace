# operator=

`_ZN16CNCryptoSkipjackaSERKS_`

`CNCryptoSkipjack::operator=(CNCryptoSkipjack const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809c9e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c9e0  _ZN16CNCryptoSkipjackaSERKS_
#           CNCryptoSkipjack::operator=(CNCryptoSkipjack const&)
# range [0x0809c9e0, 0x0809c9e7]
0809c9e0 +0x00:  push   %ebp
0809c9e1 +0x01:  mov    %esp,%ebp
0809c9e3 +0x03:  mov    0x8(%ebp),%eax
0809c9e6 +0x06:  pop    %ebp
0809c9e7 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoSkipjack::operator= @ 0x809c9e0

/* CNCryptoSkipjack::TEMPNAMEPLACEHOLDERVALUE(CNCryptoSkipjack const&) */

CNCryptoSkipjack * __thiscall
CNCryptoSkipjack::operator=(CNCryptoSkipjack *this,CNCryptoSkipjack *param_1)

{
  return this;
}
```
