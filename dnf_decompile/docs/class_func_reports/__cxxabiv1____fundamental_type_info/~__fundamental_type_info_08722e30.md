# ~__fundamental_type_info

`_ZN10__cxxabiv123__fundamental_type_infoD0Ev`

`__cxxabiv1::__fundamental_type_info::~__fundamental_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__fundamental_type_info` | `0x08722e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722e30  _ZN10__cxxabiv123__fundamental_type_infoD0Ev
#           __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
# range [0x08722e30, 0x08722e6f]
08722e30 +0x00:  push   %ebp
08722e31 +0x01:  mov    %esp,%ebp
08722e33 +0x03:  sub    $0x18,%esp
08722e36 +0x06:  mov    %ebx,-0x8(%ebp)
08722e39 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08722e3e +0x0e:  add    $0xc49d5a,%ebx
08722e44 +0x14:  mov    %esi,-0x4(%ebp)
08722e47 +0x17:  mov    0x8(%ebp),%esi
08722e4a +0x1a:  mov    %esi,(%esp)
08722e4d +0x1d:  call   08722e00 <_ZN10__cxxabiv123__fundamental_type_infoD1Ev>  ; __cxxabiv1::__fundamental_type_info::~__fundamental_type_info()
08722e52 +0x22:  mov    %esi,(%esp)
08722e55 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08722e5a +0x2a:  mov    -0x8(%ebp),%ebx
08722e5d +0x2d:  mov    -0x4(%ebp),%esi
08722e60 +0x30:  mov    %ebp,%esp
08722e62 +0x32:  pop    %ebp
08722e63 +0x33:  ret
08722e64 +0x34:  nop
08722e65 +0x35:  nop
08722e66 +0x36:  nop
08722e67 +0x37:  nop
08722e68 +0x38:  nop
08722e69 +0x39:  nop
08722e6a +0x3a:  nop
08722e6b +0x3b:  nop
08722e6c +0x3c:  nop
08722e6d +0x3d:  nop
08722e6e +0x3e:  nop
08722e6f +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__fundamental_type_info::~__fundamental_type_info @ 0x8722e30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__fundamental_type_info::~__fundamental_type_info() */

void __thiscall
__cxxabiv1::__fundamental_type_info::~__fundamental_type_info(__fundamental_type_info *this)

{
  ~__fundamental_type_info(this);
  operator_delete(this);
  return;
}
```
