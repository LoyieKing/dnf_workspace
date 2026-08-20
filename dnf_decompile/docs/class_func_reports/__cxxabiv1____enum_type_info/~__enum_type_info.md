# ~__enum_type_info

`_ZN10__cxxabiv116__enum_type_infoD1Ev`

`__cxxabiv1::__enum_type_info::~__enum_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__enum_type_info` | `0x087237e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087237e0  _ZN10__cxxabiv116__enum_type_infoD1Ev
#           __cxxabiv1::__enum_type_info::~__enum_type_info()
# range [0x087237e0, 0x0872380f]
087237e0 +0x00:  push   %ebp
087237e1 +0x01:  mov    %esp,%ebp
087237e3 +0x03:  push   %ebx
087237e4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087237e9 +0x09:  add    $0xc493af,%ebx
087237ef +0x0f:  sub    $0x14,%esp
087237f2 +0x12:  mov    0x8(%ebp),%eax
087237f5 +0x15:  mov    -0x30c(%ebx),%edx
087237fb +0x1b:  add    $0x8,%edx
087237fe +0x1e:  mov    %edx,(%eax)
08723800 +0x20:  mov    %eax,(%esp)
08723803 +0x23:  call   08724700 <_ZNSt9type_infoD1Ev>  ; std::type_info::~type_info()
08723808 +0x28:  add    $0x14,%esp
0872380b +0x2b:  pop    %ebx
0872380c +0x2c:  pop    %ebp
0872380d +0x2d:  ret
0872380e +0x2e:  nop
0872380f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__enum_type_info::~__enum_type_info @ 0x87237e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__enum_type_info::~__enum_type_info() */

void __thiscall __cxxabiv1::__enum_type_info::~__enum_type_info(__enum_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c88c + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}
```
