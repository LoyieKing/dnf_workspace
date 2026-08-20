# operator=

`_ZN14CNCryptoAnubisaSERKS_`

`CNCryptoAnubis::operator=(CNCryptoAnubis const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x0809939c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809939c  _ZN14CNCryptoAnubisaSERKS_
#           CNCryptoAnubis::operator=(CNCryptoAnubis const&)
# range [0x0809939c, 0x080993a3]
0809939c +0x00:  push   %ebp
0809939d +0x01:  mov    %esp,%ebp
0809939f +0x03:  mov    0x8(%ebp),%eax
080993a2 +0x06:  pop    %ebp
080993a3 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoAnubis::operator= @ 0x809939c

/* CNCryptoAnubis::TEMPNAMEPLACEHOLDERVALUE(CNCryptoAnubis const&) */

CNCryptoAnubis * __thiscall CNCryptoAnubis::operator=(CNCryptoAnubis *this,CNCryptoAnubis *param_1)

{
  return this;
}
```
