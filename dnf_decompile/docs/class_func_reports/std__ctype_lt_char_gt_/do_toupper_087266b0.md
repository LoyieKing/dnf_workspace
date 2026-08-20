# do_toupper

`_ZNKSt5ctypeIcE10do_toupperEPcPKc`

`std::ctype<char>::do_toupper(char*, char const*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x087266b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087266b0  _ZNKSt5ctypeIcE10do_toupperEPcPKc
#           std::ctype<char>::do_toupper(char*, char const*) const
# range [0x087266b0, 0x087266df]
087266b0 +0x00:  push   %ebp
087266b1 +0x01:  mov    %esp,%ebp
087266b3 +0x03:  mov    0xc(%ebp),%edx
087266b6 +0x06:  mov    0x10(%ebp),%eax
087266b9 +0x09:  push   %esi
087266ba +0x0a:  mov    0x8(%ebp),%esi
087266bd +0x0d:  push   %ebx
087266be +0x0e:  cmp    %eax,%edx
087266c0 +0x10:  jae    087266da <+0x2a>
087266c2 +0x12:  lea    0x0(%esi),%esi
087266c8 +0x18:  movzbl (%edx),%ebx
087266cb +0x1b:  mov    0x10(%esi),%ecx
087266ce +0x1e:  mov    (%ecx,%ebx,4),%ecx
087266d1 +0x21:  mov    %cl,(%edx)
087266d3 +0x23:  add    $0x1,%edx
087266d6 +0x26:  cmp    %edx,%eax
087266d8 +0x28:  ja     087266c8 <+0x18>
087266da +0x2a:  pop    %ebx
087266db +0x2b:  pop    %esi
087266dc +0x2c:  pop    %ebp
087266dd +0x2d:  ret
087266de +0x2e:  nop
087266df +0x2f:  nop
```

## 反编译 C

```c
// std::ctype<char>::do_toupper @ 0x87266b0

/* std::ctype<char>::do_toupper(char*, char const*) const */

void __thiscall std::ctype<char>::do_toupper(ctype<char> *this,char *param_1,char *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    *param_1 = (byte)*(undefined4 *)(*(int *)(this + 0x10) + (uint)(byte)*param_1 * 4);
  }
  return;
}
```
