# do_max_length

`_ZNKSt7codecvtIcc11__mbstate_tE13do_max_lengthEv`

`std::codecvt<char, char, __mbstate_t>::do_max_length() const`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08726010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726010  _ZNKSt7codecvtIcc11__mbstate_tE13do_max_lengthEv
#           std::codecvt<char, char, __mbstate_t>::do_max_length() const
# range [0x08726010, 0x0872601f]
08726010 +0x00:  push   %ebp
08726011 +0x01:  mov    $0x1,%eax
08726016 +0x06:  mov    %esp,%ebp
08726018 +0x08:  pop    %ebp
08726019 +0x09:  ret
0872601a +0x0a:  nop
0872601b +0x0b:  nop
0872601c +0x0c:  nop
0872601d +0x0d:  nop
0872601e +0x0e:  nop
0872601f +0x0f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8726010

/* std::codecvt<char, char, __mbstate_t>::do_max_length() const */

undefined4 std::codecvt<char,char,__mbstate_t>::do_max_length(void)

{
  return 1;
}
```
