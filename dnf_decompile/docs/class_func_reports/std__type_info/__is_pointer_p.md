# __is_pointer_p

`_ZNKSt9type_info14__is_pointer_pEv`

`std::type_info::__is_pointer_p() const`

| 类 | 地址 |
|---|---|
| `std::type_info` | `0x08724720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724720  _ZNKSt9type_info14__is_pointer_pEv
#           std::type_info::__is_pointer_p() const
# range [0x08724720, 0x0872472f]
08724720 +0x00:  push   %ebp
08724721 +0x01:  xor    %eax,%eax
08724723 +0x03:  mov    %esp,%ebp
08724725 +0x05:  pop    %ebp
08724726 +0x06:  ret
08724727 +0x07:  nop
08724728 +0x08:  nop
08724729 +0x09:  nop
0872472a +0x0a:  nop
0872472b +0x0b:  nop
0872472c +0x0c:  nop
0872472d +0x0d:  nop
0872472e +0x0e:  nop
0872472f +0x0f:  nop
```

## 反编译 C

```c
// std::type_info::__is_pointer_p @ 0x8724720

/* std::type_info::__is_pointer_p() const */

undefined4 std::type_info::__is_pointer_p(void)

{
  return 0;
}
```
