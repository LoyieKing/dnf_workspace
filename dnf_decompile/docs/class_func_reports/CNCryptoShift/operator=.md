# operator=

`_ZN13CNCryptoShiftaSERKS_`

`CNCryptoShift::operator=(CNCryptoShift const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c4ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c4ec  _ZN13CNCryptoShiftaSERKS_
#           CNCryptoShift::operator=(CNCryptoShift const&)
# range [0x0809c4ec, 0x0809c4f3]
0809c4ec +0x00:  push   %ebp
0809c4ed +0x01:  mov    %esp,%ebp
0809c4ef +0x03:  mov    0x8(%ebp),%eax
0809c4f2 +0x06:  pop    %ebp
0809c4f3 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoShift::operator= @ 0x809c4ec

/* CNCryptoShift::TEMPNAMEPLACEHOLDERVALUE(CNCryptoShift const&) */

CNCryptoShift * __thiscall CNCryptoShift::operator=(CNCryptoShift *this,CNCryptoShift *param_1)

{
  return this;
}
```
