# underflow_error

`_ZNSt15underflow_errorC1ERKSs`

`std::underflow_error::underflow_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::underflow_error` | `0x086dd1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd1c0  _ZNSt15underflow_errorC1ERKSs
#           std::underflow_error::underflow_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd1c0, 0x086dd1ef]
086dd1c0 +0x00:  push   %ebp
086dd1c1 +0x01:  mov    %esp,%ebp
086dd1c3 +0x03:  push   %ebx
086dd1c4 +0x04:  sub    $0x14,%esp
086dd1c7 +0x07:  mov    0x8(%ebp),%ebx
086dd1ca +0x0a:  mov    0xc(%ebp),%eax
086dd1cd +0x0d:  mov    %ebx,(%esp)
086dd1d0 +0x10:  mov    %eax,0x4(%esp)
086dd1d4 +0x14:  call   086dd180 <_ZNSt13runtime_errorC1ERKSs>  ; std::runtime_error::runtime_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
086dd1d9 +0x19:  movl   $&_ZTVSt15underflow_error+0x8,(%ebx)
086dd1df +0x1f:  add    $0x14,%esp
086dd1e2 +0x22:  pop    %ebx
086dd1e3 +0x23:  pop    %ebp
086dd1e4 +0x24:  ret
086dd1e5 +0x25:  nop
086dd1e6 +0x26:  nop
086dd1e7 +0x27:  nop
086dd1e8 +0x28:  nop
086dd1e9 +0x29:  nop
086dd1ea +0x2a:  nop
086dd1eb +0x2b:  nop
086dd1ec +0x2c:  nop
086dd1ed +0x2d:  nop
086dd1ee +0x2e:  nop
086dd1ef +0x2f:  nop
```

## 反编译 C

```c
// std::underflow_error::underflow_error @ 0x86dd1c0

/* std::underflow_error::underflow_error(std::string const&) */

void __thiscall std::underflow_error::underflow_error(underflow_error *this,string *param_1)

{
  runtime_error::runtime_error((runtime_error *)this,param_1);
  *(undefined ***)this = &PTR__underflow_error_08cfda08;
  return;
}
```
