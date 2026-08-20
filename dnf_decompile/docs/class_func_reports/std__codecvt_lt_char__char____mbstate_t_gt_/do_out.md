# do_out

`_ZNKSt7codecvtIcc11__mbstate_tE6do_outERS0_PKcS4_RS4_PcS6_RS6_`

`std::codecvt<char, char, __mbstate_t>::do_out(__mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08725f70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725f70  _ZNKSt7codecvtIcc11__mbstate_tE6do_outERS0_PKcS4_RS4_PcS6_RS6_
#           std::codecvt<char, char, __mbstate_t>::do_out(__mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&) const
# range [0x08725f70, 0x08725f8f]
08725f70 +0x00:  push   %ebp
08725f71 +0x01:  mov    %esp,%ebp
08725f73 +0x03:  mov    0x10(%ebp),%edx
08725f76 +0x06:  mov    0x18(%ebp),%eax
08725f79 +0x09:  mov    %edx,(%eax)
08725f7b +0x0b:  mov    0x24(%ebp),%eax
08725f7e +0x0e:  mov    0x1c(%ebp),%edx
08725f81 +0x11:  mov    %edx,(%eax)
08725f83 +0x13:  mov    $0x3,%eax
08725f88 +0x18:  pop    %ebp
08725f89 +0x19:  ret
08725f8a +0x1a:  nop
08725f8b +0x1b:  nop
08725f8c +0x1c:  nop
08725f8d +0x1d:  nop
08725f8e +0x1e:  nop
08725f8f +0x1f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8725f70

/* std::codecvt<char, char, __mbstate_t>::do_out(__mbstate_t&, char const*, char const*, char
   const*&, char*, char*, char*&) const */

undefined4 __thiscall
std::codecvt<char,char,__mbstate_t>::do_out
          (codecvt<char,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,char *param_5,char *param_6,char **param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}
```
