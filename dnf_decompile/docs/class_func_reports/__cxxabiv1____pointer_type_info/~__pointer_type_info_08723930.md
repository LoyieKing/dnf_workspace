# ~__pointer_type_info

`_ZN10__cxxabiv119__pointer_type_infoD0Ev`

`__cxxabiv1::__pointer_type_info::~__pointer_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pointer_type_info` | `0x08723930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08723930  _ZN10__cxxabiv119__pointer_type_infoD0Ev
#           __cxxabiv1::__pointer_type_info::~__pointer_type_info()
# range [0x08723930, 0x0872396f]
08723930 +0x00:  push   %ebp
08723931 +0x01:  mov    %esp,%ebp
08723933 +0x03:  sub    $0x18,%esp
08723936 +0x06:  mov    %ebx,-0x8(%ebp)
08723939 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872393e +0x0e:  add    $0xc4925a,%ebx
08723944 +0x14:  mov    %esi,-0x4(%ebp)
08723947 +0x17:  mov    0x8(%ebp),%esi
0872394a +0x1a:  mov    %esi,(%esp)
0872394d +0x1d:  call   08723900 <_ZN10__cxxabiv119__pointer_type_infoD1Ev>  ; __cxxabiv1::__pointer_type_info::~__pointer_type_info()
08723952 +0x22:  mov    %esi,(%esp)
08723955 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0872395a +0x2a:  mov    -0x8(%ebp),%ebx
0872395d +0x2d:  mov    -0x4(%ebp),%esi
08723960 +0x30:  mov    %ebp,%esp
08723962 +0x32:  pop    %ebp
08723963 +0x33:  ret
08723964 +0x34:  nop
08723965 +0x35:  nop
08723966 +0x36:  nop
08723967 +0x37:  nop
08723968 +0x38:  nop
08723969 +0x39:  nop
0872396a +0x3a:  nop
0872396b +0x3b:  nop
0872396c +0x3c:  nop
0872396d +0x3d:  nop
0872396e +0x3e:  nop
0872396f +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pointer_type_info::~__pointer_type_info @ 0x8723930

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

void __thiscall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  ~__pointer_type_info(this);
  operator_delete(this);
  return;
}
```
