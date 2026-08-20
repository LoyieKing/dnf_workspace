# SetMode

`_ZN14CNCryptoAnubis7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoAnubis::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x080993a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080993a4  _ZN14CNCryptoAnubis7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoAnubis::SetMode(CRYPTO_MODE_TYPE)
# range [0x080993a4, 0x080993bb]
080993a4 +0x00:  push   %ebp
080993a5 +0x01:  mov    %esp,%ebp
080993a7 +0x03:  cmpl   $0x0,0xc(%ebp)
080993ab +0x07:  jne    080993b4 <+0x10>
080993ad +0x09:  mov    $0x6fffffff,%eax
080993b2 +0x0e:  jmp    080993b9 <+0x15>
080993b4 +0x10:  mov    $0x70000017,%eax
080993b9 +0x15:  pop    %ebp
080993ba +0x16:  ret
080993bb +0x17:  nop
```

## 反编译 C

```c
// CNCryptoAnubis::SetMode @ 0x80993a4

/* CNCryptoAnubis::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoAnubis::SetMode(undefined4 this,int param_2)

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
