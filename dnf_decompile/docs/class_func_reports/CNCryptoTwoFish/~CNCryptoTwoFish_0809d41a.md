# ~CNCryptoTwoFish

`_ZN15CNCryptoTwoFishD0Ev`

`CNCryptoTwoFish::~CNCryptoTwoFish()`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d41a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d41a  _ZN15CNCryptoTwoFishD0Ev
#           CNCryptoTwoFish::~CNCryptoTwoFish()
# range [0x0809d41a, 0x0809d437]
0809d41a +0x00:  push   %ebp
0809d41b +0x01:  mov    %esp,%ebp
0809d41d +0x03:  sub    $0x18,%esp
0809d420 +0x06:  mov    0x8(%ebp),%eax
0809d423 +0x09:  mov    %eax,(%esp)
0809d426 +0x0c:  call   0809d3c6 <_ZN15CNCryptoTwoFishD1Ev>  ; CNCryptoTwoFish::~CNCryptoTwoFish()
0809d42b +0x11:  mov    0x8(%ebp),%eax
0809d42e +0x14:  mov    %eax,(%esp)
0809d431 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d436 +0x1c:  leave
0809d437 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoTwoFish::~CNCryptoTwoFish @ 0x809d41a

/* CNCryptoTwoFish::~CNCryptoTwoFish() */

void __thiscall CNCryptoTwoFish::~CNCryptoTwoFish(CNCryptoTwoFish *this)

{
  ~CNCryptoTwoFish(this);
  operator_delete(this);
  return;
}
```
