# ~facet

`_ZNSt6locale5facetD0Ev`

`std::locale::facet::~facet()`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x086dae20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dae20  _ZNSt6locale5facetD0Ev
#           std::locale::facet::~facet()
# range [0x086dae20, 0x086dae7f]
086dae20 +0x00:  push   %ebp
086dae21 +0x01:  mov    %esp,%ebp
086dae23 +0x03:  sub    $0x8,%esp
086dae26 +0x06:  mov    0x8(%ebp),%eax
086dae29 +0x09:  movl   $&_ZTVNSt6locale5facetE+0x8,(%eax)
086dae2f +0x0f:  leave
086dae30 +0x10:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086dae35 +0x15:  nop
086dae36 +0x16:  nop
086dae37 +0x17:  nop
086dae38 +0x18:  nop
086dae39 +0x19:  nop
086dae3a +0x1a:  nop
086dae3b +0x1b:  nop
086dae3c +0x1c:  nop
086dae3d +0x1d:  nop
086dae3e +0x1e:  nop
086dae3f +0x1f:  nop
086dae40 +0x20:  push   %ebp
086dae41 +0x21:  mov    %esp,%ebp
086dae43 +0x23:  sub    $0x8,%esp
086dae46 +0x26:  mov    0x8(%ebp),%eax
086dae49 +0x29:  movl   $&_ZTVN9__gnu_cxx24__concurrence_lock_errorE+0x8,(%eax)
086dae4f +0x2f:  leave
086dae50 +0x30:  jmp    08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086dae55 +0x35:  nop
086dae56 +0x36:  nop
086dae57 +0x37:  nop
086dae58 +0x38:  nop
086dae59 +0x39:  nop
086dae5a +0x3a:  nop
086dae5b +0x3b:  nop
086dae5c +0x3c:  nop
086dae5d +0x3d:  nop
086dae5e +0x3e:  nop
086dae5f +0x3f:  nop
086dae60 +0x40:  push   %ebp
086dae61 +0x41:  mov    %esp,%ebp
086dae63 +0x43:  sub    $0x8,%esp
086dae66 +0x46:  mov    0x8(%ebp),%eax
086dae69 +0x49:  movl   $&_ZTVN9__gnu_cxx26__concurrence_unlock_errorE+0x8,(%eax)
086dae6f +0x4f:  leave
086dae70 +0x50:  jmp    08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086dae75 +0x55:  nop
086dae76 +0x56:  nop
086dae77 +0x57:  nop
086dae78 +0x58:  nop
086dae79 +0x59:  nop
086dae7a +0x5a:  nop
086dae7b +0x5b:  nop
086dae7c +0x5c:  nop
086dae7d +0x5d:  nop
086dae7e +0x5e:  nop
086dae7f +0x5f:  nop
```

## 反编译 C

```c
// std::locale::facet::~facet @ 0x86dae20

/* std::locale::facet::~facet() */

void __thiscall std::locale::facet::~facet(facet *this)

{
  *(undefined ***)this = &PTR__facet_08cfe028;
  operator_delete(this);
  return;
}
```
