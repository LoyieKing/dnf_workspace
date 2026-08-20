# ~bad_exception

`_ZNSt13bad_exceptionD1Ev`

`std::bad_exception::~bad_exception()`

| 类 | 地址 |
|---|---|
| `std::bad_exception` | `0x087250a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087250a0  _ZNSt13bad_exceptionD1Ev
#           std::bad_exception::~bad_exception()
# range [0x087250a0, 0x087250cf]
087250a0 +0x00:  push   %ebp
087250a1 +0x01:  mov    %esp,%ebp
087250a3 +0x03:  push   %ebx
087250a4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087250a9 +0x09:  add    $0xc47aef,%ebx
087250af +0x0f:  sub    $0x14,%esp
087250b2 +0x12:  mov    0x8(%ebp),%eax
087250b5 +0x15:  mov    -0x2c8(%ebx),%edx
087250bb +0x1b:  add    $0x8,%edx
087250be +0x1e:  mov    %edx,(%eax)
087250c0 +0x20:  mov    %eax,(%esp)
087250c3 +0x23:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
087250c8 +0x28:  add    $0x14,%esp
087250cb +0x2b:  pop    %ebx
087250cc +0x2c:  pop    %ebp
087250cd +0x2d:  ret
087250ce +0x2e:  nop
087250cf +0x2f:  nop
```

## 反编译 C

```c
// std::bad_exception::~bad_exception @ 0x87250a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(undefined **)this = PTR_vtable_0936c8d0 + 8;
  exception::~exception((exception *)this);
  return;
}
```
