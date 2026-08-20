# ~__pbase_type_info

`_ZN10__cxxabiv117__pbase_type_infoD0Ev`

`__cxxabiv1::__pbase_type_info::~__pbase_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pbase_type_info` | `0x0872f580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f580  _ZN10__cxxabiv117__pbase_type_infoD0Ev
#           __cxxabiv1::__pbase_type_info::~__pbase_type_info()
# range [0x0872f580, 0x0872f5bf]
0872f580 +0x00:  push   %ebp
0872f581 +0x01:  mov    %esp,%ebp
0872f583 +0x03:  sub    $0x18,%esp
0872f586 +0x06:  mov    %ebx,-0x8(%ebp)
0872f589 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0872f58e +0x0e:  add    $0xc3d60a,%ebx
0872f594 +0x14:  mov    %esi,-0x4(%ebp)
0872f597 +0x17:  mov    0x8(%ebp),%esi
0872f59a +0x1a:  mov    %esi,(%esp)
0872f59d +0x1d:  call   0872f550 <_ZN10__cxxabiv117__pbase_type_infoD1Ev>  ; __cxxabiv1::__pbase_type_info::~__pbase_type_info()
0872f5a2 +0x22:  mov    %esi,(%esp)
0872f5a5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0872f5aa +0x2a:  mov    -0x8(%ebp),%ebx
0872f5ad +0x2d:  mov    -0x4(%ebp),%esi
0872f5b0 +0x30:  mov    %ebp,%esp
0872f5b2 +0x32:  pop    %ebp
0872f5b3 +0x33:  ret
0872f5b4 +0x34:  nop
0872f5b5 +0x35:  nop
0872f5b6 +0x36:  nop
0872f5b7 +0x37:  nop
0872f5b8 +0x38:  nop
0872f5b9 +0x39:  nop
0872f5ba +0x3a:  nop
0872f5bb +0x3b:  nop
0872f5bc +0x3c:  nop
0872f5bd +0x3d:  nop
0872f5be +0x3e:  nop
0872f5bf +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pbase_type_info::~__pbase_type_info @ 0x872f580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pbase_type_info::~__pbase_type_info() */

void __thiscall __cxxabiv1::__pbase_type_info::~__pbase_type_info(__pbase_type_info *this)

{
  ~__pbase_type_info(this);
  operator_delete(this);
  return;
}
```
