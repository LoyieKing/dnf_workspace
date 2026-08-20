# ~bad_alloc

`_ZNSt9bad_allocD1Ev`

`std::bad_alloc::~bad_alloc()`

| 类 | 地址 |
|---|---|
| `std::bad_alloc` | `0x08724560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724560  _ZNSt9bad_allocD1Ev
#           std::bad_alloc::~bad_alloc()
# range [0x08724560, 0x0872458f]
08724560 +0x00:  push   %ebp
08724561 +0x01:  mov    %esp,%ebp
08724563 +0x03:  push   %ebx
08724564 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08724569 +0x09:  add    $0xc4862f,%ebx
0872456f +0x0f:  sub    $0x14,%esp
08724572 +0x12:  mov    0x8(%ebp),%eax
08724575 +0x15:  mov    -0x1a4(%ebx),%edx
0872457b +0x1b:  add    $0x8,%edx
0872457e +0x1e:  mov    %edx,(%eax)
08724580 +0x20:  mov    %eax,(%esp)
08724583 +0x23:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
08724588 +0x28:  add    $0x14,%esp
0872458b +0x2b:  pop    %ebx
0872458c +0x2c:  pop    %ebp
0872458d +0x2d:  ret
0872458e +0x2e:  nop
0872458f +0x2f:  nop
```

## 反编译 C

```c
// std::bad_alloc::~bad_alloc @ 0x8724560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_0936c9f4 + 8;
  exception::~exception((exception *)this);
  return;
}
```
