# length_error

`_ZNSt12length_errorC1ERKSs`

`std::length_error::length_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::length_error` | `0x086dd2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd2c0  _ZNSt12length_errorC1ERKSs
#           std::length_error::length_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd2c0, 0x086dd2ef]
086dd2c0 +0x00:  push   %ebp
086dd2c1 +0x01:  mov    %esp,%ebp
086dd2c3 +0x03:  push   %ebx
086dd2c4 +0x04:  sub    $0x14,%esp
086dd2c7 +0x07:  mov    0x8(%ebp),%ebx
086dd2ca +0x0a:  mov    0xc(%ebp),%eax
086dd2cd +0x0d:  mov    %ebx,(%esp)
086dd2d0 +0x10:  mov    %eax,0x4(%esp)
086dd2d4 +0x14:  call   086dd250 <_ZNSt11logic_errorC1ERKSs>  ; std::logic_error::logic_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd2d9 +0x19:  movl   $&_ZTVSt12length_error+0x8,(%ebx)
086dd2df +0x1f:  add    $0x14,%esp
086dd2e2 +0x22:  pop    %ebx
086dd2e3 +0x23:  pop    %ebp
086dd2e4 +0x24:  ret
086dd2e5 +0x25:  nop
086dd2e6 +0x26:  nop
086dd2e7 +0x27:  nop
086dd2e8 +0x28:  nop
086dd2e9 +0x29:  nop
086dd2ea +0x2a:  nop
086dd2eb +0x2b:  nop
086dd2ec +0x2c:  nop
086dd2ed +0x2d:  nop
086dd2ee +0x2e:  nop
086dd2ef +0x2f:  nop
```

## 反编译 C

```c
// std::length_error::length_error @ 0x86dd2c0

/* std::length_error::length_error(std::string const&) */

void __thiscall std::length_error::length_error(length_error *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__length_error_08cfdaa8;
  return;
}
```
