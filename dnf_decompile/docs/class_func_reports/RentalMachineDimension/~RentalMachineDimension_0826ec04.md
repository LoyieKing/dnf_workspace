# ~RentalMachineDimension

`_ZN22RentalMachineDimensionD0Ev`

`RentalMachineDimension::~RentalMachineDimension()`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826ec04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ec04  _ZN22RentalMachineDimensionD0Ev
#           RentalMachineDimension::~RentalMachineDimension()
# range [0x0826ec04, 0x0826ec21]
0826ec04 +0x00:  push   %ebp
0826ec05 +0x01:  mov    %esp,%ebp
0826ec07 +0x03:  sub    $0x18,%esp
0826ec0a +0x06:  mov    0x8(%ebp),%eax
0826ec0d +0x09:  mov    %eax,(%esp)
0826ec10 +0x0c:  call   0826eba2 <_ZN22RentalMachineDimensionD1Ev>  ; RentalMachineDimension::~RentalMachineDimension()
0826ec15 +0x11:  mov    0x8(%ebp),%eax
0826ec18 +0x14:  mov    %eax,(%esp)
0826ec1b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826ec20 +0x1c:  leave
0826ec21 +0x1d:  ret
```

## 反编译 C

```c
// RentalMachineDimension::~RentalMachineDimension @ 0x826ec04

/* RentalMachineDimension::~RentalMachineDimension() */

void __thiscall RentalMachineDimension::~RentalMachineDimension(RentalMachineDimension *this)

{
  ~RentalMachineDimension(this);
  operator_delete(this);
  return;
}
```
