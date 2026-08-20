# SetMode

`_ZN11CNCryptoRc67SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoRc6::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bc7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bc7a  _ZN11CNCryptoRc67SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoRc6::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809bc7a, 0x0809bc83]
0809bc7a +0x00:  push   %ebp
0809bc7b +0x01:  mov    %esp,%ebp
0809bc7d +0x03:  mov    $0x70000017,%eax
0809bc82 +0x08:  pop    %ebp
0809bc83 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoRc6::SetMode @ 0x809bc7a

/* CNCryptoRc6::SetMode(CRYPTO_MODE_TYPE) */

undefined4 CNCryptoRc6::SetMode(void)

{
  return 0x70000017;
}
```
