# ~__pbase_type_info

`_ZN10__cxxabiv117__pbase_type_infoD1Ev`

`__cxxabiv1::__pbase_type_info::~__pbase_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pbase_type_info` | `0x0872f550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f550  _ZN10__cxxabiv117__pbase_type_infoD1Ev
#           __cxxabiv1::__pbase_type_info::~__pbase_type_info()
# range [0x0872f550, 0x0872f57f]
0872f550 +0x00:  push   %ebp
0872f551 +0x01:  mov    %esp,%ebp
0872f553 +0x03:  push   %ebx
0872f554 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0872f559 +0x09:  add    $0xc3d63f,%ebx
0872f55f +0x0f:  sub    $0x14,%esp
0872f562 +0x12:  mov    0x8(%ebp),%eax
0872f565 +0x15:  mov    -0x4f0(%ebx),%edx
0872f56b +0x1b:  add    $0x8,%edx
0872f56e +0x1e:  mov    %edx,(%eax)
0872f570 +0x20:  mov    %eax,(%esp)
0872f573 +0x23:  call   08724700 <_ZNSt9type_infoD1Ev>  ; std::type_info::~type_info()
0872f578 +0x28:  add    $0x14,%esp
0872f57b +0x2b:  pop    %ebx
0872f57c +0x2c:  pop    %ebp
0872f57d +0x2d:  ret
0872f57e +0x2e:  nop
0872f57f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pbase_type_info::~__pbase_type_info @ 0x872f550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pbase_type_info::~__pbase_type_info() */

void __thiscall __cxxabiv1::__pbase_type_info::~__pbase_type_info(__pbase_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c6a8 + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}
```
