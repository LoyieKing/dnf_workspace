# _M_put

`_ZNKSt11__timepunctIwE6_M_putEPwjPKwPK2tm`

`std::__timepunct<wchar_t>::_M_put(wchar_t*, unsigned int, wchar_t const*, tm const*) const`

| 类 | 地址 |
|---|---|
| `std::__timepunct<wchar_t>` | `0x087224d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087224d0  _ZNKSt11__timepunctIwE6_M_putEPwjPKwPK2tm
#           std::__timepunct<wchar_t>::_M_put(wchar_t*, unsigned int, wchar_t const*, tm const*) const
# range [0x087224d0, 0x0872251f]
087224d0 +0x00:  push   %ebp
087224d1 +0x01:  mov    %esp,%ebp
087224d3 +0x03:  push   %ebx
087224d4 +0x04:  sub    $0x24,%esp
087224d7 +0x07:  mov    0x8(%ebp),%eax
087224da +0x0a:  mov    0xc(%ebp),%ebx
087224dd +0x0d:  mov    0xc(%eax),%eax
087224e0 +0x10:  mov    %ebx,(%esp)
087224e3 +0x13:  mov    %eax,0x10(%esp)
087224e7 +0x17:  mov    0x18(%ebp),%eax
087224ea +0x1a:  mov    %eax,0xc(%esp)
087224ee +0x1e:  mov    0x14(%ebp),%eax
087224f1 +0x21:  mov    %eax,0x8(%esp)
087224f5 +0x25:  mov    0x10(%ebp),%eax
087224f8 +0x28:  mov    %eax,0x4(%esp)
087224fc +0x2c:  call   0807e210 <_init+0xb08>
08722501 +0x31:  test   %eax,%eax
08722503 +0x33:  jne    0872250b <+0x3b>
08722505 +0x35:  movl   $0x0,(%ebx)
0872250b +0x3b:  add    $0x24,%esp
0872250e +0x3e:  pop    %ebx
0872250f +0x3f:  pop    %ebp
08722510 +0x40:  ret
08722511 +0x41:  nop
08722512 +0x42:  nop
08722513 +0x43:  nop
08722514 +0x44:  nop
08722515 +0x45:  nop
08722516 +0x46:  nop
08722517 +0x47:  nop
08722518 +0x48:  nop
08722519 +0x49:  nop
0872251a +0x4a:  nop
0872251b +0x4b:  nop
0872251c +0x4c:  nop
0872251d +0x4d:  nop
0872251e +0x4e:  nop
0872251f +0x4f:  nop
```

## 反编译 C

```c
// std::__timepunct<wchar_t>::_M_put @ 0x87224d0

/* std::__timepunct<wchar_t>::_M_put(wchar_t*, unsigned int, wchar_t const*, tm const*) const */

void __thiscall
std::__timepunct<wchar_t>::_M_put
          (__timepunct<wchar_t> *this,wchar_t *param_1,uint param_2,wchar_t *param_3,tm *param_4)

{
  int iVar1;
  
  iVar1 = __wcsftime_l(param_1,param_2,param_3,param_4,*(undefined4 *)(this + 0xc));
  if (iVar1 == 0) {
    *param_1 = L'\0';
  }
  return;
}
```
