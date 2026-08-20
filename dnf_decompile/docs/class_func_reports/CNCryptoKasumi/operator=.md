# operator=

`_ZN14CNCryptoKasumiaSERKS_`

`CNCryptoKasumi::operator=(CNCryptoKasumi const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a5e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a5e4  _ZN14CNCryptoKasumiaSERKS_
#           CNCryptoKasumi::operator=(CNCryptoKasumi const&)
# range [0x0809a5e4, 0x0809a5eb]
0809a5e4 +0x00:  push   %ebp
0809a5e5 +0x01:  mov    %esp,%ebp
0809a5e7 +0x03:  mov    0x8(%ebp),%eax
0809a5ea +0x06:  pop    %ebp
0809a5eb +0x07:  ret
```

## 反编译 C

```c
// CNCryptoKasumi::operator= @ 0x809a5e4

/* CNCryptoKasumi::TEMPNAMEPLACEHOLDERVALUE(CNCryptoKasumi const&) */

CNCryptoKasumi * __thiscall CNCryptoKasumi::operator=(CNCryptoKasumi *this,CNCryptoKasumi *param_1)

{
  return this;
}
```
