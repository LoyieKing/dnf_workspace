# ~type_info

`_ZNSt9type_infoD0Ev`

`std::type_info::~type_info()`

| 类 | 地址 |
|---|---|
| `std::type_info` | `0x087247a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087247a0  _ZNSt9type_infoD0Ev
#           std::type_info::~type_info()
# range [0x087247a0, 0x087247df]
087247a0 +0x00:  push   %ebp
087247a1 +0x01:  mov    %esp,%ebp
087247a3 +0x03:  sub    $0x18,%esp
087247a6 +0x06:  mov    %ebx,-0x8(%ebp)
087247a9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087247ae +0x0e:  add    $0xc483ea,%ebx
087247b4 +0x14:  mov    %esi,-0x4(%ebp)
087247b7 +0x17:  mov    0x8(%ebp),%esi
087247ba +0x1a:  mov    %esi,(%esp)
087247bd +0x1d:  call   08724700 <_ZNSt9type_infoD1Ev>  ; std::type_info::~type_info()
087247c2 +0x22:  mov    %esi,(%esp)
087247c5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087247ca +0x2a:  mov    -0x8(%ebp),%ebx
087247cd +0x2d:  mov    -0x4(%ebp),%esi
087247d0 +0x30:  mov    %ebp,%esp
087247d2 +0x32:  pop    %ebp
087247d3 +0x33:  ret
087247d4 +0x34:  nop
087247d5 +0x35:  nop
087247d6 +0x36:  nop
087247d7 +0x37:  nop
087247d8 +0x38:  nop
087247d9 +0x39:  nop
087247da +0x3a:  nop
087247db +0x3b:  nop
087247dc +0x3c:  nop
087247dd +0x3d:  nop
087247de +0x3e:  nop
087247df +0x3f:  nop
```

## 反编译 C

```c
// std::type_info::~type_info @ 0x87247a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  operator_delete(this);
  return;
}
```
