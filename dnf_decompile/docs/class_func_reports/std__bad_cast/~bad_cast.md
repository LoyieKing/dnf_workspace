# ~bad_cast

`_ZNSt8bad_castD1Ev`

`std::bad_cast::~bad_cast()`

| 类 | 地址 |
|---|---|
| `std::bad_cast` | `0x08724690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724690  _ZNSt8bad_castD1Ev
#           std::bad_cast::~bad_cast()
# range [0x08724690, 0x087246bf]
08724690 +0x00:  push   %ebp
08724691 +0x01:  mov    %esp,%ebp
08724693 +0x03:  push   %ebx
08724694 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08724699 +0x09:  add    $0xc484ff,%ebx
0872469f +0x0f:  sub    $0x14,%esp
087246a2 +0x12:  mov    0x8(%ebp),%eax
087246a5 +0x15:  mov    -0x204(%ebx),%edx
087246ab +0x1b:  add    $0x8,%edx
087246ae +0x1e:  mov    %edx,(%eax)
087246b0 +0x20:  mov    %eax,(%esp)
087246b3 +0x23:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
087246b8 +0x28:  add    $0x14,%esp
087246bb +0x2b:  pop    %ebx
087246bc +0x2c:  pop    %ebp
087246bd +0x2d:  ret
087246be +0x2e:  nop
087246bf +0x2f:  nop
```

## 反编译 C

```c
// std::bad_cast::~bad_cast @ 0x8724690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_0936c994 + 8;
  exception::~exception((exception *)this);
  return;
}
```
