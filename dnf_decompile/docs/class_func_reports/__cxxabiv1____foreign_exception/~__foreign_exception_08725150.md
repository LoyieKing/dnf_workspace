# ~__foreign_exception

`_ZN10__cxxabiv119__foreign_exceptionD0Ev`

`__cxxabiv1::__foreign_exception::~__foreign_exception()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__foreign_exception` | `0x08725150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725150  _ZN10__cxxabiv119__foreign_exceptionD0Ev
#           __cxxabiv1::__foreign_exception::~__foreign_exception()
# range [0x08725150, 0x0872518f]
08725150 +0x00:  push   %ebp
08725151 +0x01:  mov    %esp,%ebp
08725153 +0x03:  sub    $0x18,%esp
08725156 +0x06:  mov    %ebx,-0x8(%ebp)
08725159 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872515e +0x0e:  add    $0xc47a3a,%ebx
08725164 +0x14:  mov    %esi,-0x4(%ebp)
08725167 +0x17:  mov    0x8(%ebp),%esi
0872516a +0x1a:  mov    %esi,(%esp)
0872516d +0x1d:  call   087250f0 <_ZN10__cxxabiv119__foreign_exceptionD1Ev>  ; __cxxabiv1::__foreign_exception::~__foreign_exception()
08725172 +0x22:  mov    %esi,(%esp)
08725175 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0872517a +0x2a:  mov    -0x8(%ebp),%ebx
0872517d +0x2d:  mov    -0x4(%ebp),%esi
08725180 +0x30:  mov    %ebp,%esp
08725182 +0x32:  pop    %ebp
08725183 +0x33:  ret
08725184 +0x34:  nop
08725185 +0x35:  nop
08725186 +0x36:  nop
08725187 +0x37:  nop
08725188 +0x38:  nop
08725189 +0x39:  nop
0872518a +0x3a:  nop
0872518b +0x3b:  nop
0872518c +0x3c:  nop
0872518d +0x3d:  nop
0872518e +0x3e:  nop
0872518f +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__foreign_exception::~__foreign_exception @ 0x8725150

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
  operator_delete(this);
  return;
}
```
