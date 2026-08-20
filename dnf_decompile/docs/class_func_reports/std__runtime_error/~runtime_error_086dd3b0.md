# ~runtime_error

`_ZNSt13runtime_errorD0Ev`

`std::runtime_error::~runtime_error()`

| 类 | 地址 |
|---|---|
| `std::runtime_error` | `0x086dd3b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd3b0  _ZNSt13runtime_errorD0Ev
#           std::runtime_error::~runtime_error()
# range [0x086dd3b0, 0x086dd3cf]
086dd3b0 +0x00:  push   %ebp
086dd3b1 +0x01:  mov    %esp,%ebp
086dd3b3 +0x03:  push   %ebx
086dd3b4 +0x04:  sub    $0x14,%esp
086dd3b7 +0x07:  mov    0x8(%ebp),%ebx
086dd3ba +0x0a:  mov    %ebx,(%esp)
086dd3bd +0x0d:  call   086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086dd3c2 +0x12:  mov    %ebx,0x8(%ebp)
086dd3c5 +0x15:  add    $0x14,%esp
086dd3c8 +0x18:  pop    %ebx
086dd3c9 +0x19:  pop    %ebp
086dd3ca +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086dd3cf +0x1f:  nop
```

## 反编译 C

```c
// std::runtime_error::~runtime_error @ 0x86dd3b0

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  ~runtime_error(this);
  operator_delete(this);
  return;
}
```
