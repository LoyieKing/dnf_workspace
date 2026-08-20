# do_length

`_ZNKSt7codecvtIcc11__mbstate_tE9do_lengthERS0_PKcS4_j`

`std::codecvt<char, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08725ff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725ff0  _ZNKSt7codecvtIcc11__mbstate_tE9do_lengthERS0_PKcS4_j
#           std::codecvt<char, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*, unsigned int) const
# range [0x08725ff0, 0x0872600f]
08725ff0 +0x00:  push   %ebp
08725ff1 +0x01:  mov    %esp,%ebp
08725ff3 +0x03:  mov    0x14(%ebp),%eax
08725ff6 +0x06:  mov    0x18(%ebp),%edx
08725ff9 +0x09:  sub    0x10(%ebp),%eax
08725ffc +0x0c:  cmp    %edx,%eax
08725ffe +0x0e:  jbe    08726002 <+0x12>
08726000 +0x10:  mov    %edx,%eax
08726002 +0x12:  pop    %ebp
08726003 +0x13:  ret
08726004 +0x14:  nop
08726005 +0x15:  nop
08726006 +0x16:  nop
08726007 +0x17:  nop
08726008 +0x18:  nop
08726009 +0x19:  nop
0872600a +0x1a:  nop
0872600b +0x1b:  nop
0872600c +0x1c:  nop
0872600d +0x1d:  nop
0872600e +0x1e:  nop
0872600f +0x1f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8725ff0

/* std::codecvt<char, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*, unsigned
   int) const */

uint __thiscall
std::codecvt<char,char,__mbstate_t>::do_length
          (codecvt<char,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          uint param_4)

{
  uint uVar1;
  
  uVar1 = (int)param_3 - (int)param_2;
  if (param_4 < (uint)((int)param_3 - (int)param_2)) {
    uVar1 = param_4;
  }
  return uVar1;
}
```
