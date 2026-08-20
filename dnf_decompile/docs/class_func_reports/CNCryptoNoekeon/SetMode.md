# SetMode

`_ZN15CNCryptoNoekeon7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoNoekeon::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b6d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b6d8  _ZN15CNCryptoNoekeon7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoNoekeon::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809b6d8, 0x0809b6ef]
0809b6d8 +0x00:  push   %ebp
0809b6d9 +0x01:  mov    %esp,%ebp
0809b6db +0x03:  cmpl   $0x0,0xc(%ebp)
0809b6df +0x07:  jne    0809b6e8 <+0x10>
0809b6e1 +0x09:  mov    $0x6fffffff,%eax
0809b6e6 +0x0e:  jmp    0809b6ed <+0x15>
0809b6e8 +0x10:  mov    $0x70000017,%eax
0809b6ed +0x15:  pop    %ebp
0809b6ee +0x16:  ret
0809b6ef +0x17:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::SetMode @ 0x809b6d8

/* CNCryptoNoekeon::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoNoekeon::SetMode(undefined4 this,int param_2)

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
