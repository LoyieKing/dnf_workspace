# do_unshift

`_ZNKSt7codecvtIcc11__mbstate_tE10do_unshiftERS0_PcS3_RS3_`

`std::codecvt<char, char, __mbstate_t>::do_unshift(__mbstate_t&, char*, char*, char*&) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08725f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725f90  _ZNKSt7codecvtIcc11__mbstate_tE10do_unshiftERS0_PcS3_RS3_
#           std::codecvt<char, char, __mbstate_t>::do_unshift(__mbstate_t&, char*, char*, char*&) const
# range [0x08725f90, 0x08725faf]
08725f90 +0x00:  push   %ebp
08725f91 +0x01:  mov    %esp,%ebp
08725f93 +0x03:  mov    0x18(%ebp),%eax
08725f96 +0x06:  mov    0x10(%ebp),%edx
08725f99 +0x09:  mov    %edx,(%eax)
08725f9b +0x0b:  mov    $0x3,%eax
08725fa0 +0x10:  pop    %ebp
08725fa1 +0x11:  ret
08725fa2 +0x12:  nop
08725fa3 +0x13:  nop
08725fa4 +0x14:  nop
08725fa5 +0x15:  nop
08725fa6 +0x16:  nop
08725fa7 +0x17:  nop
08725fa8 +0x18:  nop
08725fa9 +0x19:  nop
08725faa +0x1a:  nop
08725fab +0x1b:  nop
08725fac +0x1c:  nop
08725fad +0x1d:  nop
08725fae +0x1e:  nop
08725faf +0x1f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8725f90

/* std::codecvt<char, char, __mbstate_t>::do_unshift(__mbstate_t&, char*, char*, char*&) const */

undefined4 __thiscall
std::codecvt<char,char,__mbstate_t>::do_unshift
          (codecvt<char,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}
```
