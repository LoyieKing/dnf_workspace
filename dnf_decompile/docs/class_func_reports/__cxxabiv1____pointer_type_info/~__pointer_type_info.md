# ~__pointer_type_info

`_ZN10__cxxabiv119__pointer_type_infoD1Ev`

`__cxxabiv1::__pointer_type_info::~__pointer_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pointer_type_info` | `0x08723900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08723900  _ZN10__cxxabiv119__pointer_type_infoD1Ev
#           __cxxabiv1::__pointer_type_info::~__pointer_type_info()
# range [0x08723900, 0x0872392f]
08723900 +0x00:  push   %ebp
08723901 +0x01:  mov    %esp,%ebp
08723903 +0x03:  push   %ebx
08723904 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08723909 +0x09:  add    $0xc4928f,%ebx
0872390f +0x0f:  sub    $0x14,%esp
08723912 +0x12:  mov    0x8(%ebp),%eax
08723915 +0x15:  mov    -0xec(%ebx),%edx
0872391b +0x1b:  add    $0x8,%edx
0872391e +0x1e:  mov    %edx,(%eax)
08723920 +0x20:  mov    %eax,(%esp)
08723923 +0x23:  call   0872f550 <_ZN10__cxxabiv117__pbase_type_infoD1Ev>  ; __cxxabiv1::__pbase_type_info::~__pbase_type_info()
08723928 +0x28:  add    $0x14,%esp
0872392b +0x2b:  pop    %ebx
0872392c +0x2c:  pop    %ebp
0872392d +0x2d:  ret
0872392e +0x2e:  nop
0872392f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pointer_type_info::~__pointer_type_info @ 0x8723900

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

void __thiscall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936caac + 8;
  __pbase_type_info::~__pbase_type_info((__pbase_type_info *)this);
  return;
}
```
