# SetMode

`_ZN14CNCryptoKhazad7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoKhazad::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ab90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ab90  _ZN14CNCryptoKhazad7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoKhazad::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809ab90, 0x0809aba7]
0809ab90 +0x00:  push   %ebp
0809ab91 +0x01:  mov    %esp,%ebp
0809ab93 +0x03:  cmpl   $0x0,0xc(%ebp)
0809ab97 +0x07:  jne    0809aba0 <+0x10>
0809ab99 +0x09:  mov    $0x6fffffff,%eax
0809ab9e +0x0e:  jmp    0809aba5 <+0x15>
0809aba0 +0x10:  mov    $0x70000017,%eax
0809aba5 +0x15:  pop    %ebp
0809aba6 +0x16:  ret
0809aba7 +0x17:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::SetMode @ 0x809ab90

/* CNCryptoKhazad::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoKhazad::SetMode(undefined4 this,int param_2)

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
