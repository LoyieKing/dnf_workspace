# ~bad_exception

`_ZNSt13bad_exceptionD0Ev`

`std::bad_exception::~bad_exception()`

| 类 | 地址 |
|---|---|
| `std::bad_exception` | `0x087251d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087251d0  _ZNSt13bad_exceptionD0Ev
#           std::bad_exception::~bad_exception()
# range [0x087251d0, 0x0872520f]
087251d0 +0x00:  push   %ebp
087251d1 +0x01:  mov    %esp,%ebp
087251d3 +0x03:  sub    $0x18,%esp
087251d6 +0x06:  mov    %ebx,-0x8(%ebp)
087251d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087251de +0x0e:  add    $0xc479ba,%ebx
087251e4 +0x14:  mov    %esi,-0x4(%ebp)
087251e7 +0x17:  mov    0x8(%ebp),%esi
087251ea +0x1a:  mov    %esi,(%esp)
087251ed +0x1d:  call   087250a0 <_ZNSt13bad_exceptionD1Ev>  ; std::bad_exception::~bad_exception()
087251f2 +0x22:  mov    %esi,(%esp)
087251f5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087251fa +0x2a:  mov    -0x8(%ebp),%ebx
087251fd +0x2d:  mov    -0x4(%ebp),%esi
08725200 +0x30:  mov    %ebp,%esp
08725202 +0x32:  pop    %ebp
08725203 +0x33:  ret
08725204 +0x34:  nop
08725205 +0x35:  nop
08725206 +0x36:  nop
08725207 +0x37:  nop
08725208 +0x38:  nop
08725209 +0x39:  nop
0872520a +0x3a:  nop
0872520b +0x3b:  nop
0872520c +0x3c:  nop
0872520d +0x3d:  nop
0872520e +0x3e:  nop
0872520f +0x3f:  nop
```

## 反编译 C

```c
// std::bad_exception::~bad_exception @ 0x87251d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  ~bad_exception(this);
  operator_delete(this);
  return;
}
```
