# ~CNCryptoSkipjack

`_ZN16CNCryptoSkipjackD0Ev`

`CNCryptoSkipjack::~CNCryptoSkipjack()`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809c99e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c99e  _ZN16CNCryptoSkipjackD0Ev
#           CNCryptoSkipjack::~CNCryptoSkipjack()
# range [0x0809c99e, 0x0809c9bb]
0809c99e +0x00:  push   %ebp
0809c99f +0x01:  mov    %esp,%ebp
0809c9a1 +0x03:  sub    $0x18,%esp
0809c9a4 +0x06:  mov    0x8(%ebp),%eax
0809c9a7 +0x09:  mov    %eax,(%esp)
0809c9aa +0x0c:  call   0809c94a <_ZN16CNCryptoSkipjackD1Ev>  ; CNCryptoSkipjack::~CNCryptoSkipjack()
0809c9af +0x11:  mov    0x8(%ebp),%eax
0809c9b2 +0x14:  mov    %eax,(%esp)
0809c9b5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c9ba +0x1c:  leave
0809c9bb +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoSkipjack::~CNCryptoSkipjack @ 0x809c99e

/* CNCryptoSkipjack::~CNCryptoSkipjack() */

void __thiscall CNCryptoSkipjack::~CNCryptoSkipjack(CNCryptoSkipjack *this)

{
  ~CNCryptoSkipjack(this);
  operator_delete(this);
  return;
}
```
