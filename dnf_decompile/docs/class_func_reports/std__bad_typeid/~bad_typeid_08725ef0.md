# ~bad_typeid

`_ZNSt10bad_typeidD0Ev`

`std::bad_typeid::~bad_typeid()`

| 类 | 地址 |
|---|---|
| `std::bad_typeid` | `0x08725ef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725ef0  _ZNSt10bad_typeidD0Ev
#           std::bad_typeid::~bad_typeid()
# range [0x08725ef0, 0x08725f2f]
08725ef0 +0x00:  push   %ebp
08725ef1 +0x01:  mov    %esp,%ebp
08725ef3 +0x03:  sub    $0x18,%esp
08725ef6 +0x06:  mov    %ebx,-0x8(%ebp)
08725ef9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08725efe +0x0e:  add    $0xc46c9a,%ebx
08725f04 +0x14:  mov    %esi,-0x4(%ebp)
08725f07 +0x17:  mov    0x8(%ebp),%esi
08725f0a +0x1a:  mov    %esi,(%esp)
08725f0d +0x1d:  call   08725ec0 <_ZNSt10bad_typeidD1Ev>  ; std::bad_typeid::~bad_typeid()
08725f12 +0x22:  mov    %esi,(%esp)
08725f15 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08725f1a +0x2a:  mov    -0x8(%ebp),%ebx
08725f1d +0x2d:  mov    -0x4(%ebp),%esi
08725f20 +0x30:  mov    %ebp,%esp
08725f22 +0x32:  pop    %ebp
08725f23 +0x33:  ret
08725f24 +0x34:  nop
08725f25 +0x35:  nop
08725f26 +0x36:  nop
08725f27 +0x37:  nop
08725f28 +0x38:  nop
08725f29 +0x39:  nop
08725f2a +0x3a:  nop
08725f2b +0x3b:  nop
08725f2c +0x3c:  nop
08725f2d +0x3d:  nop
08725f2e +0x3e:  nop
08725f2f +0x3f:  nop
```

## 反编译 C

```c
// std::bad_typeid::~bad_typeid @ 0x8725ef0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  ~bad_typeid(this);
  operator_delete(this);
  return;
}
```
