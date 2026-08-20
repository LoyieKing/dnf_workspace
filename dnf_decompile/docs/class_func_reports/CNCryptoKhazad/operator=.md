# operator=

`_ZN14CNCryptoKhazadaSERKS_`

`CNCryptoKhazad::operator=(CNCryptoKhazad const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ab88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ab88  _ZN14CNCryptoKhazadaSERKS_
#           CNCryptoKhazad::operator=(CNCryptoKhazad const&)
# range [0x0809ab88, 0x0809ab8f]
0809ab88 +0x00:  push   %ebp
0809ab89 +0x01:  mov    %esp,%ebp
0809ab8b +0x03:  mov    0x8(%ebp),%eax
0809ab8e +0x06:  pop    %ebp
0809ab8f +0x07:  ret
```

## 反编译 C

```c
// CNCryptoKhazad::operator= @ 0x809ab88

/* CNCryptoKhazad::TEMPNAMEPLACEHOLDERVALUE(CNCryptoKhazad const&) */

CNCryptoKhazad * __thiscall CNCryptoKhazad::operator=(CNCryptoKhazad *this,CNCryptoKhazad *param_1)

{
  return this;
}
```
