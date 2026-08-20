# file

`_ZNSt12__basic_fileIcE4fileEv`

`std::__basic_file<char>::file()`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722590  _ZNSt12__basic_fileIcE4fileEv
#           std::__basic_file<char>::file()
# range [0x08722590, 0x0872259f]
08722590 +0x00:  push   %ebp
08722591 +0x01:  mov    %esp,%ebp
08722593 +0x03:  mov    0x8(%ebp),%eax
08722596 +0x06:  pop    %ebp
08722597 +0x07:  mov    (%eax),%eax
08722599 +0x09:  ret
0872259a +0x0a:  nop
0872259b +0x0b:  nop
0872259c +0x0c:  nop
0872259d +0x0d:  nop
0872259e +0x0e:  nop
0872259f +0x0f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::file @ 0x8722590

/* std::__basic_file<char>::file() */

__c_file * __thiscall std::__basic_file<char>::file(__basic_file<char> *this)

{
  return this->_M_cfile;
}
```
