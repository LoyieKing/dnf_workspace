# operator=

`_ZN15CNCryptoNoekeonaSERKS_`

`CNCryptoNoekeon::operator=(CNCryptoNoekeon const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b6d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b6d0  _ZN15CNCryptoNoekeonaSERKS_
#           CNCryptoNoekeon::operator=(CNCryptoNoekeon const&)
# range [0x0809b6d0, 0x0809b6d7]
0809b6d0 +0x00:  push   %ebp
0809b6d1 +0x01:  mov    %esp,%ebp
0809b6d3 +0x03:  mov    0x8(%ebp),%eax
0809b6d6 +0x06:  pop    %ebp
0809b6d7 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoNoekeon::operator= @ 0x809b6d0

/* CNCryptoNoekeon::TEMPNAMEPLACEHOLDERVALUE(CNCryptoNoekeon const&) */

CNCryptoNoekeon * __thiscall
CNCryptoNoekeon::operator=(CNCryptoNoekeon *this,CNCryptoNoekeon *param_1)

{
  return this;
}
```
