# fd

`_ZNSt12__basic_fileIcE2fdEv`

`std::__basic_file<char>::fd()`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722730  _ZNSt12__basic_fileIcE2fdEv
#           std::__basic_file<char>::fd()
# range [0x08722730, 0x0872274f]
08722730 +0x00:  push   %ebp
08722731 +0x01:  mov    %esp,%ebp
08722733 +0x03:  sub    $0x8,%esp
08722736 +0x06:  mov    0x8(%ebp),%eax
08722739 +0x09:  mov    (%eax),%eax
0872273b +0x0b:  mov    %eax,0x8(%ebp)
0872273e +0x0e:  leave
0872273f +0x0f:  jmp    0807e6d0 <_init+0xfc8>
08722744 +0x14:  nop
08722745 +0x15:  nop
08722746 +0x16:  nop
08722747 +0x17:  nop
08722748 +0x18:  nop
08722749 +0x19:  nop
0872274a +0x1a:  nop
0872274b +0x1b:  nop
0872274c +0x1c:  nop
0872274d +0x1d:  nop
0872274e +0x1e:  nop
0872274f +0x1f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::fd @ 0x8722730

/* std::__basic_file<char>::fd() */

void __thiscall std::__basic_file<char>::fd(__basic_file<char> *this)

{
  fileno((FILE *)this->_M_cfile);
  return;
}
```
