# SetMode

`_ZN16CNCryptoSkipjack7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoSkipjack::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809c9e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c9e8  _ZN16CNCryptoSkipjack7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoSkipjack::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809c9e8, 0x0809c9ff]
0809c9e8 +0x00:  push   %ebp
0809c9e9 +0x01:  mov    %esp,%ebp
0809c9eb +0x03:  cmpl   $0x0,0xc(%ebp)
0809c9ef +0x07:  jne    0809c9f8 <+0x10>
0809c9f1 +0x09:  mov    $0x6fffffff,%eax
0809c9f6 +0x0e:  jmp    0809c9fd <+0x15>
0809c9f8 +0x10:  mov    $0x70000017,%eax
0809c9fd +0x15:  pop    %ebp
0809c9fe +0x16:  ret
0809c9ff +0x17:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::SetMode @ 0x809c9e8

/* CNCryptoSkipjack::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoSkipjack::SetMode(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000017;
  }
  return uVar1;
}
```
