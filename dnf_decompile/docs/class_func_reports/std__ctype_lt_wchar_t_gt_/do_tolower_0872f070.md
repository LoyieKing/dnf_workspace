# do_tolower

`_ZNKSt5ctypeIwE10do_tolowerEw`

`std::ctype<wchar_t>::do_tolower(wchar_t) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872f070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f070  _ZNKSt5ctypeIwE10do_tolowerEw
#           std::ctype<wchar_t>::do_tolower(wchar_t) const
# range [0x0872f070, 0x0872f08f]
0872f070 +0x00:  push   %ebp
0872f071 +0x01:  mov    %esp,%ebp
0872f073 +0x03:  sub    $0x8,%esp
0872f076 +0x06:  mov    0x8(%ebp),%edx
0872f079 +0x09:  mov    0xc(%ebp),%eax
0872f07c +0x0c:  mov    0x8(%edx),%edx
0872f07f +0x0f:  mov    %eax,0x8(%ebp)
0872f082 +0x12:  mov    %edx,0xc(%ebp)
0872f085 +0x15:  leave
0872f086 +0x16:  jmp    0807da20 <_init+0x318>
0872f08b +0x1b:  nop
0872f08c +0x1c:  nop
0872f08d +0x1d:  nop
0872f08e +0x1e:  nop
0872f08f +0x1f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_tolower @ 0x872f070

/* std::ctype<wchar_t>::do_tolower(wchar_t) const */

void std::ctype<wchar_t>::do_tolower(wchar_t param_1)

{
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(param_1 + L'\b');
  __towlower_l();
  return;
}
```
