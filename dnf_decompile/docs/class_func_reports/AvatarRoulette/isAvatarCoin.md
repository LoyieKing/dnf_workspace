# isAvatarCoin

`_ZN14AvatarRoulette12isAvatarCoinEm`

`AvatarRoulette::isAvatarCoin(unsigned long)`

| 类 | 地址 |
|---|---|
| `AvatarRoulette` | `0x08911da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08911da0  _ZN14AvatarRoulette12isAvatarCoinEm
#           AvatarRoulette::isAvatarCoin(unsigned long)
# range [0x08911da0, 0x08911daf]
08911da0 +0x00:  push   %ebp
08911da1 +0x01:  mov    %esp,%ebp
08911da3 +0x03:  mov    0x8(%ebp),%eax
08911da6 +0x06:  mov    (%eax),%eax
08911da8 +0x08:  cmp    0xc(%ebp),%eax
08911dab +0x0b:  sete   %al
08911dae +0x0e:  pop    %ebp
08911daf +0x0f:  ret
```

## 反编译 C

```c
// AvatarRoulette::isAvatarCoin @ 0x8911da0

/* AvatarRoulette::isAvatarCoin(unsigned long) */

undefined4 __thiscall AvatarRoulette::isAvatarCoin(AvatarRoulette *this,ulong param_1)

{
  return CONCAT31((int3)(*(ulong *)this >> 8),*(ulong *)this == param_1);
}
```
