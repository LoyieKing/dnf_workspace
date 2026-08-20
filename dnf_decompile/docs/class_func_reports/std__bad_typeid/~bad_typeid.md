# ~bad_typeid

`_ZNSt10bad_typeidD1Ev`

`std::bad_typeid::~bad_typeid()`

| 类 | 地址 |
|---|---|
| `std::bad_typeid` | `0x08725ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725ec0  _ZNSt10bad_typeidD1Ev
#           std::bad_typeid::~bad_typeid()
# range [0x08725ec0, 0x08725eef]
08725ec0 +0x00:  push   %ebp
08725ec1 +0x01:  mov    %esp,%ebp
08725ec3 +0x03:  push   %ebx
08725ec4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08725ec9 +0x09:  add    $0xc46ccf,%ebx
08725ecf +0x0f:  sub    $0x14,%esp
08725ed2 +0x12:  mov    0x8(%ebp),%eax
08725ed5 +0x15:  mov    -0x8(%ebx),%edx
08725edb +0x1b:  add    $0x8,%edx
08725ede +0x1e:  mov    %edx,(%eax)
08725ee0 +0x20:  mov    %eax,(%esp)
08725ee3 +0x23:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
08725ee8 +0x28:  add    $0x14,%esp
08725eeb +0x2b:  pop    %ebx
08725eec +0x2c:  pop    %ebp
08725eed +0x2d:  ret
08725eee +0x2e:  nop
08725eef +0x2f:  nop
```

## 反编译 C

```c
// std::bad_typeid::~bad_typeid @ 0x8725ec0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_0936cb90 + 8;
  exception::~exception((exception *)this);
  return;
}
```
