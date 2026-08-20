# do_in

`_ZNKSt7codecvtIcc11__mbstate_tE5do_inERS0_PKcS4_RS4_PcS6_RS6_`

`std::codecvt<char, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08725fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725fb0  _ZNKSt7codecvtIcc11__mbstate_tE5do_inERS0_PKcS4_RS4_PcS6_RS6_
#           std::codecvt<char, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&) const
# range [0x08725fb0, 0x08725fcf]
08725fb0 +0x00:  push   %ebp
08725fb1 +0x01:  mov    %esp,%ebp
08725fb3 +0x03:  mov    0x10(%ebp),%edx
08725fb6 +0x06:  mov    0x18(%ebp),%eax
08725fb9 +0x09:  mov    %edx,(%eax)
08725fbb +0x0b:  mov    0x24(%ebp),%eax
08725fbe +0x0e:  mov    0x1c(%ebp),%edx
08725fc1 +0x11:  mov    %edx,(%eax)
08725fc3 +0x13:  mov    $0x3,%eax
08725fc8 +0x18:  pop    %ebp
08725fc9 +0x19:  ret
08725fca +0x1a:  nop
08725fcb +0x1b:  nop
08725fcc +0x1c:  nop
08725fcd +0x1d:  nop
08725fce +0x1e:  nop
08725fcf +0x1f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8725fb0

/* std::codecvt<char, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char
   const*&, char*, char*, char*&) const */

undefined4 __thiscall
std::codecvt<char,char,__mbstate_t>::do_in
          (codecvt<char,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,char *param_5,char *param_6,char **param_7)

{
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}
```
