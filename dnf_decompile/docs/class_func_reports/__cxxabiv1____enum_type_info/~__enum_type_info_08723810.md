# ~__enum_type_info

`_ZN10__cxxabiv116__enum_type_infoD0Ev`

`__cxxabiv1::__enum_type_info::~__enum_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__enum_type_info` | `0x08723810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08723810  _ZN10__cxxabiv116__enum_type_infoD0Ev
#           __cxxabiv1::__enum_type_info::~__enum_type_info()
# range [0x08723810, 0x0872384f]
08723810 +0x00:  push   %ebp
08723811 +0x01:  mov    %esp,%ebp
08723813 +0x03:  sub    $0x18,%esp
08723816 +0x06:  mov    %ebx,-0x8(%ebp)
08723819 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872381e +0x0e:  add    $0xc4937a,%ebx
08723824 +0x14:  mov    %esi,-0x4(%ebp)
08723827 +0x17:  mov    0x8(%ebp),%esi
0872382a +0x1a:  mov    %esi,(%esp)
0872382d +0x1d:  call   087237e0 <_ZN10__cxxabiv116__enum_type_infoD1Ev>  ; __cxxabiv1::__enum_type_info::~__enum_type_info()
08723832 +0x22:  mov    %esi,(%esp)
08723835 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0872383a +0x2a:  mov    -0x8(%ebp),%ebx
0872383d +0x2d:  mov    -0x4(%ebp),%esi
08723840 +0x30:  mov    %ebp,%esp
08723842 +0x32:  pop    %ebp
08723843 +0x33:  ret
08723844 +0x34:  nop
08723845 +0x35:  nop
08723846 +0x36:  nop
08723847 +0x37:  nop
08723848 +0x38:  nop
08723849 +0x39:  nop
0872384a +0x3a:  nop
0872384b +0x3b:  nop
0872384c +0x3c:  nop
0872384d +0x3d:  nop
0872384e +0x3e:  nop
0872384f +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__enum_type_info::~__enum_type_info @ 0x8723810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__enum_type_info::~__enum_type_info() */

void __thiscall __cxxabiv1::__enum_type_info::~__enum_type_info(__enum_type_info *this)

{
  ~__enum_type_info(this);
  operator_delete(this);
  return;
}
```
