# ~CNCryptoShift

`_ZN13CNCryptoShiftD0Ev`

`CNCryptoShift::~CNCryptoShift()`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c4aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c4aa  _ZN13CNCryptoShiftD0Ev
#           CNCryptoShift::~CNCryptoShift()
# range [0x0809c4aa, 0x0809c4c7]
0809c4aa +0x00:  push   %ebp
0809c4ab +0x01:  mov    %esp,%ebp
0809c4ad +0x03:  sub    $0x18,%esp
0809c4b0 +0x06:  mov    0x8(%ebp),%eax
0809c4b3 +0x09:  mov    %eax,(%esp)
0809c4b6 +0x0c:  call   0809c47a <_ZN13CNCryptoShiftD1Ev>  ; CNCryptoShift::~CNCryptoShift()
0809c4bb +0x11:  mov    0x8(%ebp),%eax
0809c4be +0x14:  mov    %eax,(%esp)
0809c4c1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c4c6 +0x1c:  leave
0809c4c7 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoShift::~CNCryptoShift @ 0x809c4aa

/* CNCryptoShift::~CNCryptoShift() */

void __thiscall CNCryptoShift::~CNCryptoShift(CNCryptoShift *this)

{
  ~CNCryptoShift(this);
  operator_delete(this);
  return;
}
```
