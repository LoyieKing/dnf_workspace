# operator=

`_ZN11CNCryptoRc6aSERKS_`

`CNCryptoRc6::operator=(CNCryptoRc6 const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bc72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bc72  _ZN11CNCryptoRc6aSERKS_
#           CNCryptoRc6::operator=(CNCryptoRc6 const&)
# range [0x0809bc72, 0x0809bc79]
0809bc72 +0x00:  push   %ebp
0809bc73 +0x01:  mov    %esp,%ebp
0809bc75 +0x03:  mov    0x8(%ebp),%eax
0809bc78 +0x06:  pop    %ebp
0809bc79 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoRc6::operator= @ 0x809bc72

/* CNCryptoRc6::TEMPNAMEPLACEHOLDERVALUE(CNCryptoRc6 const&) */

CNCryptoRc6 * __thiscall CNCryptoRc6::operator=(CNCryptoRc6 *this,CNCryptoRc6 *param_1)

{
  return this;
}
```
