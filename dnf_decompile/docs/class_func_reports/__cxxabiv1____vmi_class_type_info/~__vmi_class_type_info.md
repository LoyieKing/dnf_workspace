# ~__vmi_class_type_info

`_ZN10__cxxabiv121__vmi_class_type_infoD1Ev`

`__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__vmi_class_type_info` | `0x08722f60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722f60  _ZN10__cxxabiv121__vmi_class_type_infoD1Ev
#           __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info()
# range [0x08722f60, 0x08722f8f]
08722f60 +0x00:  push   %ebp
08722f61 +0x01:  mov    %esp,%ebp
08722f63 +0x03:  push   %ebx
08722f64 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08722f69 +0x09:  add    $0xc49c2f,%ebx
08722f6f +0x0f:  sub    $0x14,%esp
08722f72 +0x12:  mov    0x8(%ebp),%eax
08722f75 +0x15:  mov    -0x3a4(%ebx),%edx
08722f7b +0x1b:  add    $0x8,%edx
08722f7e +0x1e:  mov    %edx,(%eax)
08722f80 +0x20:  mov    %eax,(%esp)
08722f83 +0x23:  call   08724990 <_ZN10__cxxabiv117__class_type_infoD1Ev>  ; __cxxabiv1::__class_type_info::~__class_type_info()
08722f88 +0x28:  add    $0x14,%esp
08722f8b +0x2b:  pop    %ebx
08722f8c +0x2c:  pop    %ebp
08722f8d +0x2d:  ret
08722f8e +0x2e:  nop
08722f8f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info @ 0x8722f60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c7f4 + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}
```
