# SetMode

`_ZN14CNCryptoMulti27SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoMulti2::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b134  _ZN14CNCryptoMulti27SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoMulti2::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809b134, 0x0809b14b]
0809b134 +0x00:  push   %ebp
0809b135 +0x01:  mov    %esp,%ebp
0809b137 +0x03:  cmpl   $0x0,0xc(%ebp)
0809b13b +0x07:  jne    0809b144 <+0x10>
0809b13d +0x09:  mov    $0x6fffffff,%eax
0809b142 +0x0e:  jmp    0809b149 <+0x15>
0809b144 +0x10:  mov    $0x70000017,%eax
0809b149 +0x15:  pop    %ebp
0809b14a +0x16:  ret
0809b14b +0x17:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::SetMode @ 0x809b134

/* CNCryptoMulti2::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoMulti2::SetMode(undefined4 this,int param_2)

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
