# ~logic_error

`_ZNSt11logic_errorD0Ev`

`std::logic_error::~logic_error()`

| 类 | 地址 |
|---|---|
| `std::logic_error` | `0x086dd430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd430  _ZNSt11logic_errorD0Ev
#           std::logic_error::~logic_error()
# range [0x086dd430, 0x086dd44f]
086dd430 +0x00:  push   %ebp
086dd431 +0x01:  mov    %esp,%ebp
086dd433 +0x03:  push   %ebx
086dd434 +0x04:  sub    $0x14,%esp
086dd437 +0x07:  mov    0x8(%ebp),%ebx
086dd43a +0x0a:  mov    %ebx,(%esp)
086dd43d +0x0d:  call   086dd3d0 <_ZNSt11logic_errorD1Ev>  ; std::logic_error::~logic_error()
086dd442 +0x12:  mov    %ebx,0x8(%ebp)
086dd445 +0x15:  add    $0x14,%esp
086dd448 +0x18:  pop    %ebx
086dd449 +0x19:  pop    %ebp
086dd44a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086dd44f +0x1f:  nop
```

## 反编译 C

```c
// std::logic_error::~logic_error @ 0x86dd430

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  ~logic_error(this);
  operator_delete(this);
  return;
}
```
