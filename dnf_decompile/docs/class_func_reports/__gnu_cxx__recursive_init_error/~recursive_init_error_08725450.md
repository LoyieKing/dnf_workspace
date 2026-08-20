# ~recursive_init_error

`_ZN9__gnu_cxx20recursive_init_errorD0Ev`

`__gnu_cxx::recursive_init_error::~recursive_init_error()`

| 类 | 地址 |
|---|---|
| `__gnu_cxx::recursive_init_error` | `0x08725450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725450  _ZN9__gnu_cxx20recursive_init_errorD0Ev
#           __gnu_cxx::recursive_init_error::~recursive_init_error()
# range [0x08725450, 0x0872548f]
08725450 +0x00:  push   %ebp
08725451 +0x01:  mov    %esp,%ebp
08725453 +0x03:  sub    $0x18,%esp
08725456 +0x06:  mov    %ebx,-0x8(%ebp)
08725459 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872545e +0x0e:  add    $0xc4773a,%ebx
08725464 +0x14:  mov    %esi,-0x4(%ebp)
08725467 +0x17:  mov    0x8(%ebp),%esi
0872546a +0x1a:  mov    %esi,(%esp)
0872546d +0x1d:  call   08725420 <_ZN9__gnu_cxx20recursive_init_errorD1Ev>  ; __gnu_cxx::recursive_init_error::~recursive_init_error()
08725472 +0x22:  mov    %esi,(%esp)
08725475 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0872547a +0x2a:  mov    -0x8(%ebp),%ebx
0872547d +0x2d:  mov    -0x4(%ebp),%esi
08725480 +0x30:  mov    %ebp,%esp
08725482 +0x32:  pop    %ebp
08725483 +0x33:  ret
08725484 +0x34:  nop
08725485 +0x35:  nop
08725486 +0x36:  nop
08725487 +0x37:  nop
08725488 +0x38:  nop
08725489 +0x39:  nop
0872548a +0x3a:  nop
0872548b +0x3b:  nop
0872548c +0x3c:  nop
0872548d +0x3d:  nop
0872548e +0x3e:  nop
0872548f +0x3f:  nop
```

## 反编译 C

```c
// __gnu_cxx::recursive_init_error::~recursive_init_error @ 0x8725450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __gnu_cxx::recursive_init_error::~recursive_init_error() */

void __thiscall __gnu_cxx::recursive_init_error::~recursive_init_error(recursive_init_error *this)

{
  ~recursive_init_error(this);
  operator_delete(this);
  return;
}
```
