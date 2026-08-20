# ~numpunct

`_ZNSt8numpunctIwED0Ev`

`std::numpunct<wchar_t>::~numpunct()`

| 类 | 地址 |
|---|---|
| `std::numpunct<wchar_t>` | `0x087210c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087210c0  _ZNSt8numpunctIwED0Ev
#           std::numpunct<wchar_t>::~numpunct()
# range [0x087210c0, 0x087210df]
087210c0 +0x00:  push   %ebp
087210c1 +0x01:  mov    %esp,%ebp
087210c3 +0x03:  push   %ebx
087210c4 +0x04:  sub    $0x14,%esp
087210c7 +0x07:  mov    0x8(%ebp),%ebx
087210ca +0x0a:  mov    %ebx,(%esp)
087210cd +0x0d:  call   08721070 <_ZNSt8numpunctIwED1Ev>  ; std::numpunct<wchar_t>::~numpunct()
087210d2 +0x12:  mov    %ebx,0x8(%ebp)
087210d5 +0x15:  add    $0x14,%esp
087210d8 +0x18:  pop    %ebx
087210d9 +0x19:  pop    %ebp
087210da +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087210df +0x1f:  nop
```

## 反编译 C

```c
// std::numpunct<wchar_t>::~numpunct @ 0x87210c0

/* std::numpunct<wchar_t>::~numpunct() */

void __thiscall std::numpunct<wchar_t>::~numpunct(numpunct<wchar_t> *this)

{
  ~numpunct(this);
  operator_delete(this);
  return;
}
```
