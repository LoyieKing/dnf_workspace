# overflow_error

`_ZNSt14overflow_errorC1ERKSs`

`std::overflow_error::overflow_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::overflow_error` | `0x086dd1f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd1f0  _ZNSt14overflow_errorC1ERKSs
#           std::overflow_error::overflow_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd1f0, 0x086dd21f]
086dd1f0 +0x00:  push   %ebp
086dd1f1 +0x01:  mov    %esp,%ebp
086dd1f3 +0x03:  push   %ebx
086dd1f4 +0x04:  sub    $0x14,%esp
086dd1f7 +0x07:  mov    0x8(%ebp),%ebx
086dd1fa +0x0a:  mov    0xc(%ebp),%eax
086dd1fd +0x0d:  mov    %ebx,(%esp)
086dd200 +0x10:  mov    %eax,0x4(%esp)
086dd204 +0x14:  call   086dd180 <_ZNSt13runtime_errorC1ERKSs>  ; std::runtime_error::runtime_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd209 +0x19:  movl   $&_ZTVSt14overflow_error+0x8,(%ebx)
086dd20f +0x1f:  add    $0x14,%esp
086dd212 +0x22:  pop    %ebx
086dd213 +0x23:  pop    %ebp
086dd214 +0x24:  ret
086dd215 +0x25:  nop
086dd216 +0x26:  nop
086dd217 +0x27:  nop
086dd218 +0x28:  nop
086dd219 +0x29:  nop
086dd21a +0x2a:  nop
086dd21b +0x2b:  nop
086dd21c +0x2c:  nop
086dd21d +0x2d:  nop
086dd21e +0x2e:  nop
086dd21f +0x2f:  nop
```

## 反编译 C

```c
// std::overflow_error::overflow_error @ 0x86dd1f0

/* std::overflow_error::overflow_error(std::string const&) */

void __thiscall std::overflow_error::overflow_error(overflow_error *this,string *param_1)

{
  runtime_error::runtime_error((runtime_error *)this,param_1);
  *(undefined ***)this = &PTR__overflow_error_08cfda40;
  return;
}
```
