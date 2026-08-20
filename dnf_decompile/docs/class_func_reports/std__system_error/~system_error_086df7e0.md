# ~system_error

`_ZNSt12system_errorD0Ev`

`std::system_error::~system_error()`

| 类 | 地址 |
|---|---|
| `std::system_error` | `0x086df7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df7e0  _ZNSt12system_errorD0Ev
#           std::system_error::~system_error()
# range [0x086df7e0, 0x086df7ff]
086df7e0 +0x00:  push   %ebp
086df7e1 +0x01:  mov    %esp,%ebp
086df7e3 +0x03:  push   %ebx
086df7e4 +0x04:  sub    $0x14,%esp
086df7e7 +0x07:  mov    0x8(%ebp),%ebx
086df7ea +0x0a:  mov    %ebx,(%esp)
086df7ed +0x0d:  call   086df7c0 <_ZNSt12system_errorD1Ev>  ; std::system_error::~system_error()
086df7f2 +0x12:  mov    %ebx,0x8(%ebp)
086df7f5 +0x15:  add    $0x14,%esp
086df7f8 +0x18:  pop    %ebx
086df7f9 +0x19:  pop    %ebp
086df7fa +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086df7ff +0x1f:  nop
```

## 反编译 C

```c
// std::system_error::~system_error @ 0x86df7e0

/* std::system_error::~system_error() */

void __thiscall std::system_error::~system_error(system_error *this)

{
  ~system_error(this);
  operator_delete(this);
  return;
}
```
