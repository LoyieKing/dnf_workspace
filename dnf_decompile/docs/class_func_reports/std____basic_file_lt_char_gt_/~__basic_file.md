# ~__basic_file

`_ZNSt12__basic_fileIcED1Ev`

`std::__basic_file<char>::~__basic_file()`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722720  _ZNSt12__basic_fileIcED1Ev
#           std::__basic_file<char>::~__basic_file()
# range [0x08722720, 0x0872272f]
08722720 +0x00:  push   %ebp
08722721 +0x01:  mov    %esp,%ebp
08722723 +0x03:  sub    $0x8,%esp
08722726 +0x06:  leave
08722727 +0x07:  jmp    08722690 <_ZNSt12__basic_fileIcE5closeEv>  ; std::__basic_file<char>::close()
0872272c +0x0c:  nop
0872272d +0x0d:  nop
0872272e +0x0e:  nop
0872272f +0x0f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::~__basic_file @ 0x8722720

/* std::__basic_file<char>::~__basic_file() */

void __thiscall std::__basic_file<char>::~__basic_file(__basic_file<char> *this)

{
  close(this);
  return;
}
```
