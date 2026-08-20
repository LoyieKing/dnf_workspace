# __basic_file

`_ZNSt12__basic_fileIcEC1EP15pthread_mutex_t`

`std::__basic_file<char>::__basic_file(pthread_mutex_t*)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722560  _ZNSt12__basic_fileIcEC1EP15pthread_mutex_t
#           std::__basic_file<char>::__basic_file(pthread_mutex_t*)
# range [0x08722560, 0x0872257f]
08722560 +0x00:  push   %ebp
08722561 +0x01:  mov    %esp,%ebp
08722563 +0x03:  mov    0x8(%ebp),%eax
08722566 +0x06:  movl   $0x0,(%eax)
0872256c +0x0c:  movb   $0x0,0x4(%eax)
08722570 +0x10:  pop    %ebp
08722571 +0x11:  ret
08722572 +0x12:  nop
08722573 +0x13:  nop
08722574 +0x14:  nop
08722575 +0x15:  nop
08722576 +0x16:  nop
08722577 +0x17:  nop
08722578 +0x18:  nop
08722579 +0x19:  nop
0872257a +0x1a:  nop
0872257b +0x1b:  nop
0872257c +0x1c:  nop
0872257d +0x1d:  nop
0872257e +0x1e:  nop
0872257f +0x1f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::__basic_file @ 0x8722560

/* std::__basic_file<char>::__basic_file(pthread_mutex_t*) */

void std::__basic_file<char>::__basic_file(pthread_mutex_t *param_1)

{
  (param_1->__data).__lock = 0;
  param_1->__size[4] = '\0';
  return;
}
```
