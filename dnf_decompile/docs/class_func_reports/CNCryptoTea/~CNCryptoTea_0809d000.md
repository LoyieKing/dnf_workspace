# ~CNCryptoTea

`_ZN11CNCryptoTeaD0Ev`

`CNCryptoTea::~CNCryptoTea()`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d000  _ZN11CNCryptoTeaD0Ev
#           CNCryptoTea::~CNCryptoTea()
# range [0x0809d000, 0x0809d01d]
0809d000 +0x00:  push   %ebp
0809d001 +0x01:  mov    %esp,%ebp
0809d003 +0x03:  sub    $0x18,%esp
0809d006 +0x06:  mov    0x8(%ebp),%eax
0809d009 +0x09:  mov    %eax,(%esp)
0809d00c +0x0c:  call   0809cf76 <_ZN11CNCryptoTeaD1Ev>  ; CNCryptoTea::~CNCryptoTea()
0809d011 +0x11:  mov    0x8(%ebp),%eax
0809d014 +0x14:  mov    %eax,(%esp)
0809d017 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d01c +0x1c:  leave
0809d01d +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoTea::~CNCryptoTea @ 0x809d000

/* CNCryptoTea::~CNCryptoTea() */

void __thiscall CNCryptoTea::~CNCryptoTea(CNCryptoTea *this)

{
  ~CNCryptoTea(this);
  operator_delete(this);
  return;
}
```
