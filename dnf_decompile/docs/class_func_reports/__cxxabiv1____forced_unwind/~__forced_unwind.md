# ~__forced_unwind

`_ZN10__cxxabiv115__forced_unwindD1Ev`

`__cxxabiv1::__forced_unwind::~__forced_unwind()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__forced_unwind` | `0x087250d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087250d0  _ZN10__cxxabiv115__forced_unwindD1Ev
#           __cxxabiv1::__forced_unwind::~__forced_unwind()
# range [0x087250d0, 0x087250ef]
087250d0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
087250d5 +0x05:  add    $0xc47ac3,%ecx
087250db +0x0b:  push   %ebp
087250dc +0x0c:  mov    %esp,%ebp
087250de +0x0e:  mov    -0x5a4(%ecx),%eax
087250e4 +0x14:  lea    0x8(%eax),%edx
087250e7 +0x17:  mov    0x8(%ebp),%eax
087250ea +0x1a:  mov    %edx,(%eax)
087250ec +0x1c:  pop    %ebp
087250ed +0x1d:  ret
087250ee +0x1e:  nop
087250ef +0x1f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__forced_unwind::~__forced_unwind @ 0x87250d0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* __cxxabiv1::__forced_unwind::~__forced_unwind() */

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  *(undefined **)this = PTR_vtable_0936c5f4 + 8;
  return;
}
```
