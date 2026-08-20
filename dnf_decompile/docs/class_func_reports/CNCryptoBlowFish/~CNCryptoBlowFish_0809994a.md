# ~CNCryptoBlowFish

`_ZN16CNCryptoBlowFishD0Ev`

`CNCryptoBlowFish::~CNCryptoBlowFish()`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x0809994a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809994a  _ZN16CNCryptoBlowFishD0Ev
#           CNCryptoBlowFish::~CNCryptoBlowFish()
# range [0x0809994a, 0x08099967]
0809994a +0x00:  push   %ebp
0809994b +0x01:  mov    %esp,%ebp
0809994d +0x03:  sub    $0x18,%esp
08099950 +0x06:  mov    0x8(%ebp),%eax
08099953 +0x09:  mov    %eax,(%esp)
08099956 +0x0c:  call   080998f8 <_ZN16CNCryptoBlowFishD1Ev>  ; CNCryptoBlowFish::~CNCryptoBlowFish()
0809995b +0x11:  mov    0x8(%ebp),%eax
0809995e +0x14:  mov    %eax,(%esp)
08099961 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099966 +0x1c:  leave
08099967 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::~CNCryptoBlowFish @ 0x809994a

/* CNCryptoBlowFish::~CNCryptoBlowFish() */

void __thiscall CNCryptoBlowFish::~CNCryptoBlowFish(CNCryptoBlowFish *this)

{
  ~CNCryptoBlowFish(this);
  operator_delete(this);
  return;
}
```
