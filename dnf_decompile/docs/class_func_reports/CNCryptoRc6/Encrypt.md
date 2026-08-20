# Encrypt

`_ZN11CNCryptoRc67EncryptEPhi`

`CNCryptoRc6::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bd06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bd06  _ZN11CNCryptoRc67EncryptEPhi
#           CNCryptoRc6::Encrypt(unsigned char*, int)
# range [0x0809bd06, 0x0809bd0f]
0809bd06 +0x00:  push   %ebp
0809bd07 +0x01:  mov    %esp,%ebp
0809bd09 +0x03:  mov    $0x70000017,%eax
0809bd0e +0x08:  pop    %ebp
0809bd0f +0x09:  ret
```

## 反编译 C

```c
// CNCryptoRc6::Encrypt @ 0x809bd06

/* CNCryptoRc6::Encrypt(unsigned char*, int) */

undefined4 CNCryptoRc6::Encrypt(uchar *param_1,int param_2)

{
  return 0x70000017;
}
```
