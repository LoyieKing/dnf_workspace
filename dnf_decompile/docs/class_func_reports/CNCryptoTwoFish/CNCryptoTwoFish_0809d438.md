# CNCryptoTwoFish

`_ZN15CNCryptoTwoFishC1ERKS_`

`CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d438` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d438  _ZN15CNCryptoTwoFishC1ERKS_
#           CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish const&)
# range [0x0809d438, 0x0809d45b]
0809d438 +0x00:  push   %ebp
0809d439 +0x01:  mov    %esp,%ebp
0809d43b +0x03:  sub    $0x18,%esp
0809d43e +0x06:  mov    0x8(%ebp),%eax
0809d441 +0x09:  movl   $0x4,0x4(%esp)
0809d449 +0x11:  mov    %eax,(%esp)
0809d44c +0x14:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809d451 +0x19:  mov    0x8(%ebp),%eax
0809d454 +0x1c:  movl   $&_ZTV15CNCryptoTwoFish+0x8,(%eax)
0809d45a +0x22:  leave
0809d45b +0x23:  ret
```

## 反编译 C

```c
// CNCryptoTwoFish::CNCryptoTwoFish @ 0x809d438

/* CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish const&) */

void __thiscall CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish *this,CNCryptoTwoFish *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,4);
  *(undefined ***)this = &PTR__CNCryptoTwoFish_08b13b08;
  return;
}
```
