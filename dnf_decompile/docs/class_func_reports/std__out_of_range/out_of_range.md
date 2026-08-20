# out_of_range

`_ZNSt12out_of_rangeC1ERKSs`

`std::out_of_range::out_of_range(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::out_of_range` | `0x086dd290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd290  _ZNSt12out_of_rangeC1ERKSs
#           std::out_of_range::out_of_range(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd290, 0x086dd2bf]
086dd290 +0x00:  push   %ebp
086dd291 +0x01:  mov    %esp,%ebp
086dd293 +0x03:  push   %ebx
086dd294 +0x04:  sub    $0x14,%esp
086dd297 +0x07:  mov    0x8(%ebp),%ebx
086dd29a +0x0a:  mov    0xc(%ebp),%eax
086dd29d +0x0d:  mov    %ebx,(%esp)
086dd2a0 +0x10:  mov    %eax,0x4(%esp)
086dd2a4 +0x14:  call   086dd250 <_ZNSt11logic_errorC1ERKSs>  ; std::logic_error::logic_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd2a9 +0x19:  movl   $&_ZTVSt12out_of_range+0x8,(%ebx)
086dd2af +0x1f:  add    $0x14,%esp
086dd2b2 +0x22:  pop    %ebx
086dd2b3 +0x23:  pop    %ebp
086dd2b4 +0x24:  ret
086dd2b5 +0x25:  nop
086dd2b6 +0x26:  nop
086dd2b7 +0x27:  nop
086dd2b8 +0x28:  nop
086dd2b9 +0x29:  nop
086dd2ba +0x2a:  nop
086dd2bb +0x2b:  nop
086dd2bc +0x2c:  nop
086dd2bd +0x2d:  nop
086dd2be +0x2e:  nop
086dd2bf +0x2f:  nop
```

## 反编译 C

```c
// std::out_of_range::out_of_range @ 0x86dd290

/* std::out_of_range::out_of_range(std::string const&) */

void __thiscall std::out_of_range::out_of_range(out_of_range *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__out_of_range_08b27f18;
  return;
}
```
