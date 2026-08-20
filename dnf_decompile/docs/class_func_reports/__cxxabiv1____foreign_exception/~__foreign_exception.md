# ~__foreign_exception

`_ZN10__cxxabiv119__foreign_exceptionD1Ev`

`__cxxabiv1::__foreign_exception::~__foreign_exception()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__foreign_exception` | `0x087250f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087250f0  _ZN10__cxxabiv119__foreign_exceptionD1Ev
#           __cxxabiv1::__foreign_exception::~__foreign_exception()
# range [0x087250f0, 0x0872510f]
087250f0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
087250f5 +0x05:  add    $0xc47aa3,%ecx
087250fb +0x0b:  push   %ebp
087250fc +0x0c:  mov    %esp,%ebp
087250fe +0x0e:  mov    -0x4e8(%ecx),%eax
08725104 +0x14:  lea    0x8(%eax),%edx
08725107 +0x17:  mov    0x8(%ebp),%eax
0872510a +0x1a:  mov    %edx,(%eax)
0872510c +0x1c:  pop    %ebp
0872510d +0x1d:  ret
0872510e +0x1e:  nop
0872510f +0x1f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__foreign_exception::~__foreign_exception @ 0x87250f0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  *(undefined **)this = PTR_vtable_0936c6b0 + 8;
  return;
}
```
