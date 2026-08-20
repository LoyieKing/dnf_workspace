# domain_error

`_ZNSt12domain_errorC1ERKSs`

`std::domain_error::domain_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::domain_error` | `0x086dd320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd320  _ZNSt12domain_errorC1ERKSs
#           std::domain_error::domain_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd320, 0x086dd34f]
086dd320 +0x00:  push   %ebp
086dd321 +0x01:  mov    %esp,%ebp
086dd323 +0x03:  push   %ebx
086dd324 +0x04:  sub    $0x14,%esp
086dd327 +0x07:  mov    0x8(%ebp),%ebx
086dd32a +0x0a:  mov    0xc(%ebp),%eax
086dd32d +0x0d:  mov    %ebx,(%esp)
086dd330 +0x10:  mov    %eax,0x4(%esp)
086dd334 +0x14:  call   086dd250 <_ZNSt11logic_errorC1ERKSs>  ; std::logic_error::logic_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd339 +0x19:  movl   $&_ZTVSt12domain_error+0x8,(%ebx)
086dd33f +0x1f:  add    $0x14,%esp
086dd342 +0x22:  pop    %ebx
086dd343 +0x23:  pop    %ebp
086dd344 +0x24:  ret
086dd345 +0x25:  nop
086dd346 +0x26:  nop
086dd347 +0x27:  nop
086dd348 +0x28:  nop
086dd349 +0x29:  nop
086dd34a +0x2a:  nop
086dd34b +0x2b:  nop
086dd34c +0x2c:  nop
086dd34d +0x2d:  nop
086dd34e +0x2e:  nop
086dd34f +0x2f:  nop
```

## 反编译 C

```c
// std::domain_error::domain_error @ 0x86dd320

/* std::domain_error::domain_error(std::string const&) */

void __thiscall std::domain_error::domain_error(domain_error *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__domain_error_08cfdae0;
  return;
}
```
