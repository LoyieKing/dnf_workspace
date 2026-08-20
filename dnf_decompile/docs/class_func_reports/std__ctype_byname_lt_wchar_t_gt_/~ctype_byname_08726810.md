# ~ctype_byname

`_ZNSt12ctype_bynameIwED0Ev`

`std::ctype_byname<wchar_t>::~ctype_byname()`

| 类 | 地址 |
|---|---|
| `std::ctype_byname<wchar_t>` | `0x08726810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726810  _ZNSt12ctype_bynameIwED0Ev
#           std::ctype_byname<wchar_t>::~ctype_byname()
# range [0x08726810, 0x0872682f]
08726810 +0x00:  push   %ebp
08726811 +0x01:  mov    %esp,%ebp
08726813 +0x03:  push   %ebx
08726814 +0x04:  sub    $0x14,%esp
08726817 +0x07:  mov    0x8(%ebp),%ebx
0872681a +0x0a:  mov    %ebx,(%esp)
0872681d +0x0d:  call   087267f0 <_ZNSt12ctype_bynameIwED1Ev>  ; std::ctype_byname<wchar_t>::~ctype_byname()
08726822 +0x12:  mov    %ebx,0x8(%ebp)
08726825 +0x15:  add    $0x14,%esp
08726828 +0x18:  pop    %ebx
08726829 +0x19:  pop    %ebp
0872682a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0872682f +0x1f:  nop
```

## 反编译 C

```c
// std::ctype_byname<wchar_t>::~ctype_byname @ 0x8726810

/* std::ctype_byname<wchar_t>::~ctype_byname() */

void __thiscall std::ctype_byname<wchar_t>::~ctype_byname(ctype_byname<wchar_t> *this)

{
  ~ctype_byname(this);
  operator_delete(this);
  return;
}
```
