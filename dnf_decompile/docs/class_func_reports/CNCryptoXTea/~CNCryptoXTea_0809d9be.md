# ~CNCryptoXTea

`_ZN12CNCryptoXTeaD0Ev`

`CNCryptoXTea::~CNCryptoXTea()`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809d9be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d9be  _ZN12CNCryptoXTeaD0Ev
#           CNCryptoXTea::~CNCryptoXTea()
# range [0x0809d9be, 0x0809d9db]
0809d9be +0x00:  push   %ebp
0809d9bf +0x01:  mov    %esp,%ebp
0809d9c1 +0x03:  sub    $0x18,%esp
0809d9c4 +0x06:  mov    0x8(%ebp),%eax
0809d9c7 +0x09:  mov    %eax,(%esp)
0809d9ca +0x0c:  call   0809d96a <_ZN12CNCryptoXTeaD1Ev>  ; CNCryptoXTea::~CNCryptoXTea()
0809d9cf +0x11:  mov    0x8(%ebp),%eax
0809d9d2 +0x14:  mov    %eax,(%esp)
0809d9d5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d9da +0x1c:  leave
0809d9db +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoXTea::~CNCryptoXTea @ 0x809d9be

/* CNCryptoXTea::~CNCryptoXTea() */

void __thiscall CNCryptoXTea::~CNCryptoXTea(CNCryptoXTea *this)

{
  ~CNCryptoXTea(this);
  operator_delete(this);
  return;
}
```
