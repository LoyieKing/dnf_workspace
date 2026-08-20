# is_open

`_ZNKSt12__basic_fileIcE7is_openEv`

`std::__basic_file<char>::is_open() const`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722580  _ZNKSt12__basic_fileIcE7is_openEv
#           std::__basic_file<char>::is_open() const
# range [0x08722580, 0x0872258f]
08722580 +0x00:  push   %ebp
08722581 +0x01:  mov    %esp,%ebp
08722583 +0x03:  mov    0x8(%ebp),%eax
08722586 +0x06:  pop    %ebp
08722587 +0x07:  mov    (%eax),%eax
08722589 +0x09:  test   %eax,%eax
0872258b +0x0b:  setne  %al
0872258e +0x0e:  ret
0872258f +0x0f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::is_open @ 0x8722580

/* std::__basic_file<char>::is_open() const */

undefined4 __thiscall std::__basic_file<char>::is_open(__basic_file<char> *this)

{
  return CONCAT31((int3)((uint)this->_M_cfile >> 8),this->_M_cfile != (__c_file *)0x0);
}
```
