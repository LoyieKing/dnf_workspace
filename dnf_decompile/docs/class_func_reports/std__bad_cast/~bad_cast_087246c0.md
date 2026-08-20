# ~bad_cast

`_ZNSt8bad_castD0Ev`

`std::bad_cast::~bad_cast()`

| 类 | 地址 |
|---|---|
| `std::bad_cast` | `0x087246c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087246c0  _ZNSt8bad_castD0Ev
#           std::bad_cast::~bad_cast()
# range [0x087246c0, 0x087246ff]
087246c0 +0x00:  push   %ebp
087246c1 +0x01:  mov    %esp,%ebp
087246c3 +0x03:  sub    $0x18,%esp
087246c6 +0x06:  mov    %ebx,-0x8(%ebp)
087246c9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087246ce +0x0e:  add    $0xc484ca,%ebx
087246d4 +0x14:  mov    %esi,-0x4(%ebp)
087246d7 +0x17:  mov    0x8(%ebp),%esi
087246da +0x1a:  mov    %esi,(%esp)
087246dd +0x1d:  call   08724690 <_ZNSt8bad_castD1Ev>  ; std::bad_cast::~bad_cast()
087246e2 +0x22:  mov    %esi,(%esp)
087246e5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087246ea +0x2a:  mov    -0x8(%ebp),%ebx
087246ed +0x2d:  mov    -0x4(%ebp),%esi
087246f0 +0x30:  mov    %ebp,%esp
087246f2 +0x32:  pop    %ebp
087246f3 +0x33:  ret
087246f4 +0x34:  nop
087246f5 +0x35:  nop
087246f6 +0x36:  nop
087246f7 +0x37:  nop
087246f8 +0x38:  nop
087246f9 +0x39:  nop
087246fa +0x3a:  nop
087246fb +0x3b:  nop
087246fc +0x3c:  nop
087246fd +0x3d:  nop
087246fe +0x3e:  nop
087246ff +0x3f:  nop
```

## 反编译 C

```c
// std::bad_cast::~bad_cast @ 0x87246c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  ~bad_cast(this);
  operator_delete(this);
  return;
}
```
