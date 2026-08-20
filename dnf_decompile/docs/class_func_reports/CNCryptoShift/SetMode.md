# SetMode

`_ZN13CNCryptoShift7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoShift::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c4f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c4f4  _ZN13CNCryptoShift7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoShift::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809c4f4, 0x0809c4fd]
0809c4f4 +0x00:  push   %ebp
0809c4f5 +0x01:  mov    %esp,%ebp
0809c4f7 +0x03:  mov    $0x70000017,%eax
0809c4fc +0x08:  pop    %ebp
0809c4fd +0x09:  ret
```

## 反编译 C

```c
// CNCryptoShift::SetMode @ 0x809c4f4

/* CNCryptoShift::SetMode(CRYPTO_MODE_TYPE) */

undefined4 CNCryptoShift::SetMode(void)

{
  return 0x70000017;
}
```
