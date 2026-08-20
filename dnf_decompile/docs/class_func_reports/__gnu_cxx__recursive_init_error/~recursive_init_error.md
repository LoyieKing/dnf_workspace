# ~recursive_init_error

`_ZN9__gnu_cxx20recursive_init_errorD1Ev`

`__gnu_cxx::recursive_init_error::~recursive_init_error()`

| 类 | 地址 |
|---|---|
| `__gnu_cxx::recursive_init_error` | `0x08725420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725420  _ZN9__gnu_cxx20recursive_init_errorD1Ev
#           __gnu_cxx::recursive_init_error::~recursive_init_error()
# range [0x08725420, 0x0872544f]
08725420 +0x00:  push   %ebp
08725421 +0x01:  mov    %esp,%ebp
08725423 +0x03:  push   %ebx
08725424 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08725429 +0x09:  add    $0xc4776f,%ebx
0872542f +0x0f:  sub    $0x14,%esp
08725432 +0x12:  mov    0x8(%ebp),%eax
08725435 +0x15:  mov    -0x1b8(%ebx),%edx
0872543b +0x1b:  add    $0x8,%edx
0872543e +0x1e:  mov    %edx,(%eax)
08725440 +0x20:  mov    %eax,(%esp)
08725443 +0x23:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
08725448 +0x28:  add    $0x14,%esp
0872544b +0x2b:  pop    %ebx
0872544c +0x2c:  pop    %ebp
0872544d +0x2d:  ret
0872544e +0x2e:  nop
0872544f +0x2f:  nop
```

## 反编译 C

```c
// __gnu_cxx::recursive_init_error::~recursive_init_error @ 0x8725420

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __gnu_cxx::recursive_init_error::~recursive_init_error() */

void __thiscall __gnu_cxx::recursive_init_error::~recursive_init_error(recursive_init_error *this)

{
  *(undefined **)this = PTR_vtable_0936c9e0 + 8;
  std::exception::~exception((exception *)this);
  return;
}
```
