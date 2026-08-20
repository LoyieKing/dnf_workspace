# invalid_argument

`_ZNSt16invalid_argumentC1ERKSs`

`std::invalid_argument::invalid_argument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::invalid_argument` | `0x086dd2f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd2f0  _ZNSt16invalid_argumentC1ERKSs
#           std::invalid_argument::invalid_argument(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd2f0, 0x086dd31f]
086dd2f0 +0x00:  push   %ebp
086dd2f1 +0x01:  mov    %esp,%ebp
086dd2f3 +0x03:  push   %ebx
086dd2f4 +0x04:  sub    $0x14,%esp
086dd2f7 +0x07:  mov    0x8(%ebp),%ebx
086dd2fa +0x0a:  mov    0xc(%ebp),%eax
086dd2fd +0x0d:  mov    %ebx,(%esp)
086dd300 +0x10:  mov    %eax,0x4(%esp)
086dd304 +0x14:  call   086dd250 <_ZNSt11logic_errorC1ERKSs>  ; std::logic_error::logic_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd309 +0x19:  movl   $&_ZTVSt16invalid_argument+0x8,(%ebx)
086dd30f +0x1f:  add    $0x14,%esp
086dd312 +0x22:  pop    %ebx
086dd313 +0x23:  pop    %ebp
086dd314 +0x24:  ret
086dd315 +0x25:  nop
086dd316 +0x26:  nop
086dd317 +0x27:  nop
086dd318 +0x28:  nop
086dd319 +0x29:  nop
086dd31a +0x2a:  nop
086dd31b +0x2b:  nop
086dd31c +0x2c:  nop
086dd31d +0x2d:  nop
086dd31e +0x2e:  nop
086dd31f +0x2f:  nop
```

## 反编译 C

```c
// std::invalid_argument::invalid_argument @ 0x86dd2f0

/* std::invalid_argument::invalid_argument(std::string const&) */

void __thiscall std::invalid_argument::invalid_argument(invalid_argument *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__invalid_argument_08bb4180;
  return;
}
```
