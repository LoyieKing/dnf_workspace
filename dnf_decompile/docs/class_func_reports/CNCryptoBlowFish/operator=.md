# operator=

`_ZN16CNCryptoBlowFishaSERKS_`

`CNCryptoBlowFish::operator=(CNCryptoBlowFish const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x0809998c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809998c  _ZN16CNCryptoBlowFishaSERKS_
#           CNCryptoBlowFish::operator=(CNCryptoBlowFish const&)
# range [0x0809998c, 0x08099993]
0809998c +0x00:  push   %ebp
0809998d +0x01:  mov    %esp,%ebp
0809998f +0x03:  mov    0x8(%ebp),%eax
08099992 +0x06:  pop    %ebp
08099993 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::operator= @ 0x809998c

/* CNCryptoBlowFish::TEMPNAMEPLACEHOLDERVALUE(CNCryptoBlowFish const&) */

CNCryptoBlowFish * __thiscall
CNCryptoBlowFish::operator=(CNCryptoBlowFish *this,CNCryptoBlowFish *param_1)

{
  return this;
}
```
