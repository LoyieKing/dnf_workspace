# ~ios_base

`_ZNSt8ios_baseD0Ev`

`std::ios_base::~ios_base()`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x087270d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087270d0  _ZNSt8ios_baseD0Ev
#           std::ios_base::~ios_base()
# range [0x087270d0, 0x087270ef]
087270d0 +0x00:  push   %ebp
087270d1 +0x01:  mov    %esp,%ebp
087270d3 +0x03:  push   %ebx
087270d4 +0x04:  sub    $0x14,%esp
087270d7 +0x07:  mov    0x8(%ebp),%ebx
087270da +0x0a:  mov    %ebx,(%esp)
087270dd +0x0d:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
087270e2 +0x12:  mov    %ebx,0x8(%ebp)
087270e5 +0x15:  add    $0x14,%esp
087270e8 +0x18:  pop    %ebx
087270e9 +0x19:  pop    %ebp
087270ea +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087270ef +0x1f:  nop
```

## 反编译 C

```c
// std::ios_base::~ios_base @ 0x87270d0

/* std::ios_base::~ios_base() */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  ~ios_base(this);
  operator_delete(this);
  return;
}
```
