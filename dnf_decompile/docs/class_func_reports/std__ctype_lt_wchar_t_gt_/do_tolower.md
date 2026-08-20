# do_tolower

`_ZNKSt5ctypeIwE10do_tolowerEPwPKw`

`std::ctype<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872f030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f030  _ZNKSt5ctypeIwE10do_tolowerEPwPKw
#           std::ctype<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const
# range [0x0872f030, 0x0872f06f]
0872f030 +0x00:  push   %ebp
0872f031 +0x01:  mov    %esp,%ebp
0872f033 +0x03:  push   %edi
0872f034 +0x04:  push   %esi
0872f035 +0x05:  push   %ebx
0872f036 +0x06:  sub    $0x1c,%esp
0872f039 +0x09:  mov    0xc(%ebp),%ebx
0872f03c +0x0c:  mov    0x10(%ebp),%esi
0872f03f +0x0f:  mov    0x8(%ebp),%edi
0872f042 +0x12:  cmp    %esi,%ebx
0872f044 +0x14:  jae    0872f062 <+0x32>
0872f046 +0x16:  xchg   %ax,%ax
0872f048 +0x18:  mov    0x8(%edi),%eax
0872f04b +0x1b:  mov    %eax,0x4(%esp)
0872f04f +0x1f:  mov    (%ebx),%eax
0872f051 +0x21:  mov    %eax,(%esp)
0872f054 +0x24:  call   0807da20 <_init+0x318>
0872f059 +0x29:  mov    %eax,(%ebx)
0872f05b +0x2b:  add    $0x4,%ebx
0872f05e +0x2e:  cmp    %ebx,%esi
0872f060 +0x30:  ja     0872f048 <+0x18>
0872f062 +0x32:  add    $0x1c,%esp
0872f065 +0x35:  mov    %esi,%eax
0872f067 +0x37:  pop    %ebx
0872f068 +0x38:  pop    %esi
0872f069 +0x39:  pop    %edi
0872f06a +0x3a:  pop    %ebp
0872f06b +0x3b:  ret
0872f06c +0x3c:  nop
0872f06d +0x3d:  nop
0872f06e +0x3e:  nop
0872f06f +0x3f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_tolower @ 0x872f030

/* std::ctype<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_tolower(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    wVar1 = __towlower_l(*param_1,*(undefined4 *)(this + 8));
    *param_1 = wVar1;
  }
  return param_2;
}
```
