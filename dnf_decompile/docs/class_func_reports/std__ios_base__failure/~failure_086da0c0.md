# ~failure

`_ZNSt8ios_base7failureD0Ev`

`std::ios_base::failure::~failure()`

| 类 | 地址 |
|---|---|
| `std::ios_base::failure` | `0x086da0c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da0c0  _ZNSt8ios_base7failureD0Ev
#           std::ios_base::failure::~failure()
# range [0x086da0c0, 0x086da0df]
086da0c0 +0x00:  push   %ebp
086da0c1 +0x01:  mov    %esp,%ebp
086da0c3 +0x03:  push   %ebx
086da0c4 +0x04:  sub    $0x14,%esp
086da0c7 +0x07:  mov    0x8(%ebp),%ebx
086da0ca +0x0a:  mov    %ebx,(%esp)
086da0cd +0x0d:  call   086da060 <_ZNSt8ios_base7failureD1Ev>  ; std::ios_base::failure::~failure()
086da0d2 +0x12:  mov    %ebx,0x8(%ebp)
086da0d5 +0x15:  add    $0x14,%esp
086da0d8 +0x18:  pop    %ebx
086da0d9 +0x19:  pop    %ebp
086da0da +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086da0df +0x1f:  nop
```

## 反编译 C

```c
// std::ios_base::failure::~failure @ 0x86da0c0

/* std::ios_base::failure::~failure() */

void __thiscall std::ios_base::failure::~failure(failure *this)

{
  ~failure(this);
  operator_delete(this);
  return;
}
```
