# operator=

`_ZN16CNCryptoRijndaelaSERKS_`

`CNCryptoRijndael::operator=(CNCryptoRijndael const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c10a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c10a  _ZN16CNCryptoRijndaelaSERKS_
#           CNCryptoRijndael::operator=(CNCryptoRijndael const&)
# range [0x0809c10a, 0x0809c111]
0809c10a +0x00:  push   %ebp
0809c10b +0x01:  mov    %esp,%ebp
0809c10d +0x03:  mov    0x8(%ebp),%eax
0809c110 +0x06:  pop    %ebp
0809c111 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::operator= @ 0x809c10a

/* CNCryptoRijndael::TEMPNAMEPLACEHOLDERVALUE(CNCryptoRijndael const&) */

CNCryptoRijndael * __thiscall
CNCryptoRijndael::operator=(CNCryptoRijndael *this,CNCryptoRijndael *param_1)

{
  return this;
}
```
