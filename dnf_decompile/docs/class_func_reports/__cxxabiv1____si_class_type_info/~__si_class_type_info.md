# ~__si_class_type_info

`_ZN10__cxxabiv120__si_class_type_infoD1Ev`

`__cxxabiv1::__si_class_type_info::~__si_class_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__si_class_type_info` | `0x08724f70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724f70  _ZN10__cxxabiv120__si_class_type_infoD1Ev
#           __cxxabiv1::__si_class_type_info::~__si_class_type_info()
# range [0x08724f70, 0x08724f9f]
08724f70 +0x00:  push   %ebp
08724f71 +0x01:  mov    %esp,%ebp
08724f73 +0x03:  push   %ebx
08724f74 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08724f79 +0x09:  add    $0xc47c1f,%ebx
08724f7f +0x0f:  sub    $0x14,%esp
08724f82 +0x12:  mov    0x8(%ebp),%eax
08724f85 +0x15:  mov    -0x4fc(%ebx),%edx
08724f8b +0x1b:  add    $0x8,%edx
08724f8e +0x1e:  mov    %edx,(%eax)
08724f90 +0x20:  mov    %eax,(%esp)
08724f93 +0x23:  call   08724990 <_ZN10__cxxabiv117__class_type_infoD1Ev>  ; __cxxabiv1::__class_type_info::~__class_type_info()
08724f98 +0x28:  add    $0x14,%esp
08724f9b +0x2b:  pop    %ebx
08724f9c +0x2c:  pop    %ebp
08724f9d +0x2d:  ret
08724f9e +0x2e:  nop
08724f9f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__si_class_type_info::~__si_class_type_info @ 0x8724f70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c69c + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}
```
