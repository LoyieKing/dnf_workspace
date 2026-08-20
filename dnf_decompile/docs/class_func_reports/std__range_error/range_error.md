# range_error

`_ZNSt11range_errorC1ERKSs`

`std::range_error::range_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::range_error` | `0x086dd220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd220  _ZNSt11range_errorC1ERKSs
#           std::range_error::range_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd220, 0x086dd24f]
086dd220 +0x00:  push   %ebp
086dd221 +0x01:  mov    %esp,%ebp
086dd223 +0x03:  push   %ebx
086dd224 +0x04:  sub    $0x14,%esp
086dd227 +0x07:  mov    0x8(%ebp),%ebx
086dd22a +0x0a:  mov    0xc(%ebp),%eax
086dd22d +0x0d:  mov    %ebx,(%esp)
086dd230 +0x10:  mov    %eax,0x4(%esp)
086dd234 +0x14:  call   086dd180 <_ZNSt13runtime_errorC1ERKSs>  ; std::runtime_error::runtime_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd239 +0x19:  movl   $&_ZTVSt11range_error+0x8,(%ebx)
086dd23f +0x1f:  add    $0x14,%esp
086dd242 +0x22:  pop    %ebx
086dd243 +0x23:  pop    %ebp
086dd244 +0x24:  ret
086dd245 +0x25:  nop
086dd246 +0x26:  nop
086dd247 +0x27:  nop
086dd248 +0x28:  nop
086dd249 +0x29:  nop
086dd24a +0x2a:  nop
086dd24b +0x2b:  nop
086dd24c +0x2c:  nop
086dd24d +0x2d:  nop
086dd24e +0x2e:  nop
086dd24f +0x2f:  nop
```

## 反编译 C

```c
// std::range_error::range_error @ 0x86dd220

/* std::range_error::range_error(std::string const&) */

void __thiscall std::range_error::range_error(range_error *this,string *param_1)

{
  runtime_error::runtime_error((runtime_error *)this,param_1);
  *(undefined ***)this = &PTR__range_error_08cfda70;
  return;
}
```
