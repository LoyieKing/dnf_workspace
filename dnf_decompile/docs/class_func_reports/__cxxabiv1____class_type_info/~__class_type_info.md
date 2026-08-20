# ~__class_type_info

`_ZN10__cxxabiv117__class_type_infoD1Ev`

`__cxxabiv1::__class_type_info::~__class_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x08724990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724990  _ZN10__cxxabiv117__class_type_infoD1Ev
#           __cxxabiv1::__class_type_info::~__class_type_info()
# range [0x08724990, 0x087249bf]
08724990 +0x00:  push   %ebp
08724991 +0x01:  mov    %esp,%ebp
08724993 +0x03:  push   %ebx
08724994 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08724999 +0x09:  add    $0xc481ff,%ebx
0872499f +0x0f:  sub    $0x14,%esp
087249a2 +0x12:  mov    0x8(%ebp),%eax
087249a5 +0x15:  mov    -0x468(%ebx),%edx
087249ab +0x1b:  add    $0x8,%edx
087249ae +0x1e:  mov    %edx,(%eax)
087249b0 +0x20:  mov    %eax,(%esp)
087249b3 +0x23:  call   08724700 <_ZNSt9type_infoD1Ev>  ; std::type_info::~type_info()
087249b8 +0x28:  add    $0x14,%esp
087249bb +0x2b:  pop    %ebx
087249bc +0x2c:  pop    %ebp
087249bd +0x2d:  ret
087249be +0x2e:  nop
087249bf +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::~__class_type_info @ 0x8724990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c730 + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}
```
