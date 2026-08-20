# ~__forced_unwind

`_ZN10__cxxabiv115__forced_unwindD0Ev`

`__cxxabiv1::__forced_unwind::~__forced_unwind()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__forced_unwind` | `0x08725190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725190  _ZN10__cxxabiv115__forced_unwindD0Ev
#           __cxxabiv1::__forced_unwind::~__forced_unwind()
# range [0x08725190, 0x087251cf]
08725190 +0x00:  push   %ebp
08725191 +0x01:  mov    %esp,%ebp
08725193 +0x03:  sub    $0x18,%esp
08725196 +0x06:  mov    %ebx,-0x8(%ebp)
08725199 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872519e +0x0e:  add    $0xc479fa,%ebx
087251a4 +0x14:  mov    %esi,-0x4(%ebp)
087251a7 +0x17:  mov    0x8(%ebp),%esi
087251aa +0x1a:  mov    %esi,(%esp)
087251ad +0x1d:  call   087250d0 <_ZN10__cxxabiv115__forced_unwindD1Ev>  ; __cxxabiv1::__forced_unwind::~__forced_unwind()
087251b2 +0x22:  mov    %esi,(%esp)
087251b5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087251ba +0x2a:  mov    -0x8(%ebp),%ebx
087251bd +0x2d:  mov    -0x4(%ebp),%esi
087251c0 +0x30:  mov    %ebp,%esp
087251c2 +0x32:  pop    %ebp
087251c3 +0x33:  ret
087251c4 +0x34:  nop
087251c5 +0x35:  nop
087251c6 +0x36:  nop
087251c7 +0x37:  nop
087251c8 +0x38:  nop
087251c9 +0x39:  nop
087251ca +0x3a:  nop
087251cb +0x3b:  nop
087251cc +0x3c:  nop
087251cd +0x3d:  nop
087251ce +0x3e:  nop
087251cf +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__forced_unwind::~__forced_unwind @ 0x8725190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__forced_unwind::~__forced_unwind() */

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  ~__forced_unwind(this);
  operator_delete(this);
  return;
}
```
