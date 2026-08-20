# ~CNCryptoShift

`_ZN13CNCryptoShiftD1Ev`

`CNCryptoShift::~CNCryptoShift()`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c47a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c47a  _ZN13CNCryptoShiftD1Ev
#           CNCryptoShift::~CNCryptoShift()
# range [0x0809c47a, 0x0809c4a9]
0809c47a +0x00:  push   %ebp
0809c47b +0x01:  mov    %esp,%ebp
0809c47d +0x03:  sub    $0x18,%esp
0809c480 +0x06:  mov    0x8(%ebp),%eax
0809c483 +0x09:  movl   $&_ZTV13CNCryptoShift+0x8,(%eax)
0809c489 +0x0f:  mov    0x8(%ebp),%eax
0809c48c +0x12:  mov    %eax,(%esp)
0809c48f +0x15:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809c494 +0x1a:  mov    $0x0,%eax
0809c499 +0x1f:  test   %al,%al
0809c49b +0x21:  je     0809c4a8 <+0x2e>
0809c49d +0x23:  mov    0x8(%ebp),%eax
0809c4a0 +0x26:  mov    %eax,(%esp)
0809c4a3 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c4a8 +0x2e:  leave
0809c4a9 +0x2f:  ret
```

## 反编译 C

```c
// CNCryptoShift::~CNCryptoShift @ 0x809c47a

/* WARNING: Removing unreachable block (ram,0x0809c49d) */
/* CNCryptoShift::~CNCryptoShift() */

void __thiscall CNCryptoShift::~CNCryptoShift(CNCryptoShift *this)

{
  *(undefined ***)this = &PTR__CNCryptoShift_08b139e8;
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
