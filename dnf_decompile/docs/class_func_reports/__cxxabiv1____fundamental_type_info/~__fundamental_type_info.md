# ~__fundamental_type_info

`_ZN10__cxxabiv123__fundamental_type_infoD1Ev`

`__cxxabiv1::__fundamental_type_info::~__fundamental_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__fundamental_type_info` | `0x08722e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722e00  _ZN10__cxxabiv123__fundamental_type_infoD1Ev
#           __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
# range [0x08722e00, 0x08722e2f]
08722e00 +0x00:  push   %ebp
08722e01 +0x01:  mov    %esp,%ebp
08722e03 +0x03:  push   %ebx
08722e04 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08722e09 +0x09:  add    $0xc49d8f,%ebx
08722e0f +0x0f:  sub    $0x14,%esp
08722e12 +0x12:  mov    0x8(%ebp),%eax
08722e15 +0x15:  mov    -0x1f4(%ebx),%edx
08722e1b +0x1b:  add    $0x8,%edx
08722e1e +0x1e:  mov    %edx,(%eax)
08722e20 +0x20:  mov    %eax,(%esp)
08722e23 +0x23:  call   08724700 <_ZNSt9type_infoD1Ev>  ; std::type_info::~type_info()
08722e28 +0x28:  add    $0x14,%esp
08722e2b +0x2b:  pop    %ebx
08722e2c +0x2c:  pop    %ebp
08722e2d +0x2d:  ret
08722e2e +0x2e:  nop
08722e2f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__fundamental_type_info::~__fundamental_type_info @ 0x8722e00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__fundamental_type_info::~__fundamental_type_info() */

void __thiscall
__cxxabiv1::__fundamental_type_info::~__fundamental_type_info(__fundamental_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c9a4 + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}
```
