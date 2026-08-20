# SetMode

`_ZN16CNCryptoBlowFish7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoBlowFish::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099994  _ZN16CNCryptoBlowFish7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoBlowFish::SetMode(CRYPTO_MODE_TYPE)
# range [0x08099994, 0x080999a7]
08099994 +0x00:  push   %ebp
08099995 +0x01:  mov    %esp,%ebp
08099997 +0x03:  mov    0x8(%ebp),%eax
0809999a +0x06:  mov    0xc(%ebp),%edx
0809999d +0x09:  mov    %edx,0xc(%eax)
080999a0 +0x0c:  mov    $0x6fffffff,%eax
080999a5 +0x11:  pop    %ebp
080999a6 +0x12:  ret
080999a7 +0x13:  nop
```

## 反编译 C

```c
// CNCryptoBlowFish::SetMode @ 0x8099994

/* CNCryptoBlowFish::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoBlowFish::SetMode(CNCryptoBlowFish *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc) = param_2;
  return 0x6fffffff;
}
```
