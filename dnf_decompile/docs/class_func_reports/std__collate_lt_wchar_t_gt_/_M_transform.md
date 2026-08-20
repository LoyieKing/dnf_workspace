# _M_transform

`_ZNKSt7collateIwE12_M_transformEPwPKwj`

`std::collate<wchar_t>::_M_transform(wchar_t*, wchar_t const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `std::collate<wchar_t>` | `0x0871f8e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f8e0  _ZNKSt7collateIwE12_M_transformEPwPKwj
#           std::collate<wchar_t>::_M_transform(wchar_t*, wchar_t const*, unsigned int) const
# range [0x0871f8e0, 0x0871f90f]
0871f8e0 +0x00:  push   %ebp
0871f8e1 +0x01:  mov    %esp,%ebp
0871f8e3 +0x03:  push   %ebx
0871f8e4 +0x04:  sub    $0x4,%esp
0871f8e7 +0x07:  mov    0x8(%ebp),%ebx
0871f8ea +0x0a:  mov    0xc(%ebp),%eax
0871f8ed +0x0d:  mov    0x10(%ebp),%edx
0871f8f0 +0x10:  mov    0x14(%ebp),%ecx
0871f8f3 +0x13:  mov    0x8(%ebx),%ebx
0871f8f6 +0x16:  mov    %eax,0x8(%ebp)
0871f8f9 +0x19:  mov    %edx,0xc(%ebp)
0871f8fc +0x1c:  mov    %ecx,0x10(%ebp)
0871f8ff +0x1f:  mov    %ebx,0x14(%ebp)
0871f902 +0x22:  add    $0x4,%esp
0871f905 +0x25:  pop    %ebx
0871f906 +0x26:  pop    %ebp
0871f907 +0x27:  jmp    0807dfd0 <_init+0x8c8>
0871f90c +0x2c:  nop
0871f90d +0x2d:  nop
0871f90e +0x2e:  nop
0871f90f +0x2f:  nop
```

## 反编译 C

```c
// std::collate<wchar_t>::_M_transform @ 0x871f8e0

/* std::collate<wchar_t>::_M_transform(wchar_t*, wchar_t const*, unsigned int) const */

void std::collate<wchar_t>::_M_transform(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  wchar_t wStack00000010;
  
  wStack00000010 = param_1[2];
  __wcsxfrm_l();
  return;
}
```
