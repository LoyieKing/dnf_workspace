# do_unshift

`_ZNKSt7codecvtIwc11__mbstate_tE10do_unshiftERS0_PcS3_RS3_`

`std::codecvt<wchar_t, char, __mbstate_t>::do_unshift(__mbstate_t&, char*, char*, char*&) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x08726020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726020  _ZNKSt7codecvtIwc11__mbstate_tE10do_unshiftERS0_PcS3_RS3_
#           std::codecvt<wchar_t, char, __mbstate_t>::do_unshift(__mbstate_t&, char*, char*, char*&) const
# range [0x08726020, 0x0872603f]
08726020 +0x00:  push   %ebp
08726021 +0x01:  mov    %esp,%ebp
08726023 +0x03:  mov    0x18(%ebp),%eax
08726026 +0x06:  mov    0x10(%ebp),%edx
08726029 +0x09:  mov    %edx,(%eax)
0872602b +0x0b:  mov    $0x3,%eax
08726030 +0x10:  pop    %ebp
08726031 +0x11:  ret
08726032 +0x12:  nop
08726033 +0x13:  nop
08726034 +0x14:  nop
08726035 +0x15:  nop
08726036 +0x16:  nop
08726037 +0x17:  nop
08726038 +0x18:  nop
08726039 +0x19:  nop
0872603a +0x1a:  nop
0872603b +0x1b:  nop
0872603c +0x1c:  nop
0872603d +0x1d:  nop
0872603e +0x1e:  nop
0872603f +0x1f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x8726020

/* std::codecvt<wchar_t, char, __mbstate_t>::do_unshift(__mbstate_t&, char*, char*, char*&) const */

undefined4 __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_unshift
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}
```
