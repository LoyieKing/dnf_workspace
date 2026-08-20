# SetMode

`_ZN13CNCryptoCast57SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoCast5::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a048` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a048  _ZN13CNCryptoCast57SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoCast5::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809a048, 0x0809a05f]
0809a048 +0x00:  push   %ebp
0809a049 +0x01:  mov    %esp,%ebp
0809a04b +0x03:  cmpl   $0x0,0xc(%ebp)
0809a04f +0x07:  jne    0809a058 <+0x10>
0809a051 +0x09:  mov    $0x6fffffff,%eax
0809a056 +0x0e:  jmp    0809a05d <+0x15>
0809a058 +0x10:  mov    $0x70000017,%eax
0809a05d +0x15:  pop    %ebp
0809a05e +0x16:  ret
0809a05f +0x17:  nop
```

## 反编译 C

```c
// CNCryptoCast5::SetMode @ 0x809a048

/* CNCryptoCast5::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoCast5::SetMode(undefined4 this,int param_2)

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
