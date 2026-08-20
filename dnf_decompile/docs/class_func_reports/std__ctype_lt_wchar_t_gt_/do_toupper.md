# do_toupper

`_ZNKSt5ctypeIwE10do_toupperEPwPKw`

`std::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872f090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f090  _ZNKSt5ctypeIwE10do_toupperEPwPKw
#           std::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const
# range [0x0872f090, 0x0872f0cf]
0872f090 +0x00:  push   %ebp
0872f091 +0x01:  mov    %esp,%ebp
0872f093 +0x03:  push   %edi
0872f094 +0x04:  push   %esi
0872f095 +0x05:  push   %ebx
0872f096 +0x06:  sub    $0x1c,%esp
0872f099 +0x09:  mov    0xc(%ebp),%ebx
0872f09c +0x0c:  mov    0x10(%ebp),%esi
0872f09f +0x0f:  mov    0x8(%ebp),%edi
0872f0a2 +0x12:  cmp    %esi,%ebx
0872f0a4 +0x14:  jae    0872f0c2 <+0x32>
0872f0a6 +0x16:  xchg   %ax,%ax
0872f0a8 +0x18:  mov    0x8(%edi),%eax
0872f0ab +0x1b:  mov    %eax,0x4(%esp)
0872f0af +0x1f:  mov    (%ebx),%eax
0872f0b1 +0x21:  mov    %eax,(%esp)
0872f0b4 +0x24:  call   0807dff0 <_init+0x8e8>
0872f0b9 +0x29:  mov    %eax,(%ebx)
0872f0bb +0x2b:  add    $0x4,%ebx
0872f0be +0x2e:  cmp    %ebx,%esi
0872f0c0 +0x30:  ja     0872f0a8 <+0x18>
0872f0c2 +0x32:  add    $0x1c,%esp
0872f0c5 +0x35:  mov    %esi,%eax
0872f0c7 +0x37:  pop    %ebx
0872f0c8 +0x38:  pop    %esi
0872f0c9 +0x39:  pop    %edi
0872f0ca +0x3a:  pop    %ebp
0872f0cb +0x3b:  ret
0872f0cc +0x3c:  nop
0872f0cd +0x3d:  nop
0872f0ce +0x3e:  nop
0872f0cf +0x3f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_toupper @ 0x872f090

/* std::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    wVar1 = __towupper_l(*param_1,*(undefined4 *)(this + 8));
    *param_1 = wVar1;
  }
  return param_2;
}
```
