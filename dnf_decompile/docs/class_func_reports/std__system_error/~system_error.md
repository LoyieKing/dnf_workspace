# ~system_error

`_ZNSt12system_errorD1Ev`

`std::system_error::~system_error()`

| 类 | 地址 |
|---|---|
| `std::system_error` | `0x086df7c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df7c0  _ZNSt12system_errorD1Ev
#           std::system_error::~system_error()
# range [0x086df7c0, 0x086df7df]
086df7c0 +0x00:  push   %ebp
086df7c1 +0x01:  mov    %esp,%ebp
086df7c3 +0x03:  sub    $0x8,%esp
086df7c6 +0x06:  mov    0x8(%ebp),%eax
086df7c9 +0x09:  movl   $&_ZTVSt12system_error+0x8,(%eax)
086df7cf +0x0f:  leave
086df7d0 +0x10:  jmp    086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086df7d5 +0x15:  nop
086df7d6 +0x16:  nop
086df7d7 +0x17:  nop
086df7d8 +0x18:  nop
086df7d9 +0x19:  nop
086df7da +0x1a:  nop
086df7db +0x1b:  nop
086df7dc +0x1c:  nop
086df7dd +0x1d:  nop
086df7de +0x1e:  nop
086df7df +0x1f:  nop
```

## 反编译 C

```c
// std::system_error::~system_error @ 0x86df7c0

/* std::system_error::~system_error() */

void __thiscall std::system_error::~system_error(system_error *this)

{
  *(undefined ***)this = &PTR__system_error_08cfe570;
  runtime_error::~runtime_error((runtime_error *)this);
  return;
}
```
