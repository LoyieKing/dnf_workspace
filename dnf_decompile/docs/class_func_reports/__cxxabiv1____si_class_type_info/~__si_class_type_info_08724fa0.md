# ~__si_class_type_info

`_ZN10__cxxabiv120__si_class_type_infoD0Ev`

`__cxxabiv1::__si_class_type_info::~__si_class_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__si_class_type_info` | `0x08724fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724fa0  _ZN10__cxxabiv120__si_class_type_infoD0Ev
#           __cxxabiv1::__si_class_type_info::~__si_class_type_info()
# range [0x08724fa0, 0x08724fdf]
08724fa0 +0x00:  push   %ebp
08724fa1 +0x01:  mov    %esp,%ebp
08724fa3 +0x03:  sub    $0x18,%esp
08724fa6 +0x06:  mov    %ebx,-0x8(%ebp)
08724fa9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08724fae +0x0e:  add    $0xc47bea,%ebx
08724fb4 +0x14:  mov    %esi,-0x4(%ebp)
08724fb7 +0x17:  mov    0x8(%ebp),%esi
08724fba +0x1a:  mov    %esi,(%esp)
08724fbd +0x1d:  call   08724f70 <_ZN10__cxxabiv120__si_class_type_infoD1Ev>  ; __cxxabiv1::__si_class_type_info::~__si_class_type_info()
08724fc2 +0x22:  mov    %esi,(%esp)
08724fc5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08724fca +0x2a:  mov    -0x8(%ebp),%ebx
08724fcd +0x2d:  mov    -0x4(%ebp),%esi
08724fd0 +0x30:  mov    %ebp,%esp
08724fd2 +0x32:  pop    %ebp
08724fd3 +0x33:  ret
08724fd4 +0x34:  nop
08724fd5 +0x35:  nop
08724fd6 +0x36:  nop
08724fd7 +0x37:  nop
08724fd8 +0x38:  nop
08724fd9 +0x39:  nop
08724fda +0x3a:  nop
08724fdb +0x3b:  nop
08724fdc +0x3c:  nop
08724fdd +0x3d:  nop
08724fde +0x3e:  nop
08724fdf +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__si_class_type_info::~__si_class_type_info @ 0x8724fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__si_class_type_info::~__si_class_type_info() */

void __thiscall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__si_class_type_info *this)

{
  ~__si_class_type_info(this);
  operator_delete(this);
  return;
}
```
