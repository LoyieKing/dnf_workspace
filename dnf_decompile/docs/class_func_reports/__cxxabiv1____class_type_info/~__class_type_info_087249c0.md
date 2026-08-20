# ~__class_type_info

`_ZN10__cxxabiv117__class_type_infoD0Ev`

`__cxxabiv1::__class_type_info::~__class_type_info()`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__class_type_info` | `0x087249c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087249c0  _ZN10__cxxabiv117__class_type_infoD0Ev
#           __cxxabiv1::__class_type_info::~__class_type_info()
# range [0x087249c0, 0x087249ff]
087249c0 +0x00:  push   %ebp
087249c1 +0x01:  mov    %esp,%ebp
087249c3 +0x03:  sub    $0x18,%esp
087249c6 +0x06:  mov    %ebx,-0x8(%ebp)
087249c9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087249ce +0x0e:  add    $0xc481ca,%ebx
087249d4 +0x14:  mov    %esi,-0x4(%ebp)
087249d7 +0x17:  mov    0x8(%ebp),%esi
087249da +0x1a:  mov    %esi,(%esp)
087249dd +0x1d:  call   08724990 <_ZN10__cxxabiv117__class_type_infoD1Ev>  ; __cxxabiv1::__class_type_info::~__class_type_info()
087249e2 +0x22:  mov    %esi,(%esp)
087249e5 +0x25:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087249ea +0x2a:  mov    -0x8(%ebp),%ebx
087249ed +0x2d:  mov    -0x4(%ebp),%esi
087249f0 +0x30:  mov    %ebp,%esp
087249f2 +0x32:  pop    %ebp
087249f3 +0x33:  ret
087249f4 +0x34:  nop
087249f5 +0x35:  nop
087249f6 +0x36:  nop
087249f7 +0x37:  nop
087249f8 +0x38:  nop
087249f9 +0x39:  nop
087249fa +0x3a:  nop
087249fb +0x3b:  nop
087249fc +0x3c:  nop
087249fd +0x3d:  nop
087249fe +0x3e:  nop
087249ff +0x3f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__class_type_info::~__class_type_info @ 0x87249c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__class_type_info::~__class_type_info() */

void __thiscall __cxxabiv1::__class_type_info::~__class_type_info(__class_type_info *this)

{
  ~__class_type_info(this);
  operator_delete(this);
  return;
}
```
