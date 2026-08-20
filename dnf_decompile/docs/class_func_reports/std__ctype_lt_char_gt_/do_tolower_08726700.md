# do_tolower

`_ZNKSt5ctypeIcE10do_tolowerEPcPKc`

`std::ctype<char>::do_tolower(char*, char const*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x08726700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726700  _ZNKSt5ctypeIcE10do_tolowerEPcPKc
#           std::ctype<char>::do_tolower(char*, char const*) const
# range [0x08726700, 0x0872672f]
08726700 +0x00:  push   %ebp
08726701 +0x01:  mov    %esp,%ebp
08726703 +0x03:  mov    0xc(%ebp),%edx
08726706 +0x06:  mov    0x10(%ebp),%eax
08726709 +0x09:  push   %esi
0872670a +0x0a:  mov    0x8(%ebp),%esi
0872670d +0x0d:  push   %ebx
0872670e +0x0e:  cmp    %eax,%edx
08726710 +0x10:  jae    0872672a <+0x2a>
08726712 +0x12:  lea    0x0(%esi),%esi
08726718 +0x18:  movzbl (%edx),%ebx
0872671b +0x1b:  mov    0x14(%esi),%ecx
0872671e +0x1e:  mov    (%ecx,%ebx,4),%ecx
08726721 +0x21:  mov    %cl,(%edx)
08726723 +0x23:  add    $0x1,%edx
08726726 +0x26:  cmp    %edx,%eax
08726728 +0x28:  ja     08726718 <+0x18>
0872672a +0x2a:  pop    %ebx
0872672b +0x2b:  pop    %esi
0872672c +0x2c:  pop    %ebp
0872672d +0x2d:  ret
0872672e +0x2e:  nop
0872672f +0x2f:  nop
```

## 反编译 C

```c
// std::ctype<char>::do_tolower @ 0x8726700

/* std::ctype<char>::do_tolower(char*, char const*) const */

void __thiscall std::ctype<char>::do_tolower(ctype<char> *this,char *param_1,char *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    *param_1 = (byte)*(undefined4 *)(*(int *)(this + 0x14) + (uint)(byte)*param_1 * 4);
  }
  return;
}
```
