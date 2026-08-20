# ~__vmi_class_type_info

`_ZN10__cxxabiv121__vmi_class_type_infoD0Ev`

`__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__vmi_class_type_info` | `0x08722f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722f90  _ZN10__cxxabiv121__vmi_class_type_infoD0Ev
#           __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
# range [0x08722f90, 0x08722fcf]
08722f90 +0x00:  push   %ebp
08722f91 +0x01:  mov    %esp,%ebp
08722f93 +0x03:  sub    $0x18,%esp
08722f96 +0x06:  mov    %ebx,-0x8(%ebp)
08722f99 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08722f9e +0x0e:  add    $0xc49bfa,%ebx
08722fa4 +0x14:  mov    %esi,-0x4(%ebp)
08722fa7 +0x17:  mov    0x8(%ebp),%esi
08722faa +0x1a:  mov    %esi,(%esp)
08722fad +0x1d:  call   08722f60 <_ZN10__cxxabiv121__vmi_class_type_infoD1Ev>  ; __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
08722fb2 +0x22:  mov    %esi,(%esp)
08722fb5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08722fba +0x2a:  mov    -0x8(%ebp),%ebx
08722fbd +0x2d:  mov    -0x4(%ebp),%esi
08722fc0 +0x30:  mov    %ebp,%esp
08722fc2 +0x32:  pop    %ebp
08722fc3 +0x33:  ret
08722fc4 +0x34:  nop
08722fc5 +0x35:  nop
08722fc6 +0x36:  nop
08722fc7 +0x37:  nop
08722fc8 +0x38:  nop
08722fc9 +0x39:  nop
08722fca +0x3a:  nop
08722fcb +0x3b:  nop
08722fcc +0x3c:  nop
08722fcd +0x3d:  nop
08722fce +0x3e:  nop
08722fcf +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info @ 0x8722f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  ~__vmi_class_type_info(this);
  operator_delete(this);
  return;
}
```
