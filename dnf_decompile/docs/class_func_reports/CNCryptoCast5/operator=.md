# operator=

`_ZN13CNCryptoCast5aSERKS_`

`CNCryptoCast5::operator=(CNCryptoCast5 const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a040  _ZN13CNCryptoCast5aSERKS_
#           CNCryptoCast5::operator=(CNCryptoCast5 const&)
# range [0x0809a040, 0x0809a047]
0809a040 +0x00:  push   %ebp
0809a041 +0x01:  mov    %esp,%ebp
0809a043 +0x03:  mov    0x8(%ebp),%eax
0809a046 +0x06:  pop    %ebp
0809a047 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoCast5::operator= @ 0x809a040

/* CNCryptoCast5::TEMPNAMEPLACEHOLDERVALUE(CNCryptoCast5 const&) */

CNCryptoCast5 * __thiscall CNCryptoCast5::operator=(CNCryptoCast5 *this,CNCryptoCast5 *param_1)

{
  return this;
}
```
