# Decrypt

`_ZN11CNCryptoRc67DecryptEPhi`

`CNCryptoRc6::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bd10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bd10  _ZN11CNCryptoRc67DecryptEPhi
#           CNCryptoRc6::Decrypt(unsigned char*, int)
# range [0x0809bd10, 0x0809bd19]
0809bd10 +0x00:  push   %ebp
0809bd11 +0x01:  mov    %esp,%ebp
0809bd13 +0x03:  mov    $0x70000017,%eax
0809bd18 +0x08:  pop    %ebp
0809bd19 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoRc6::Decrypt @ 0x809bd10

/* CNCryptoRc6::Decrypt(unsigned char*, int) */

undefined4 CNCryptoRc6::Decrypt(uchar *param_1,int param_2)

{
  return 0x70000017;
}
```
