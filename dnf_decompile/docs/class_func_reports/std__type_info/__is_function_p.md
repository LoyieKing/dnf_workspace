# __is_function_p

`_ZNKSt9type_info15__is_function_pEv`

`std::type_info::__is_function_p() const`

| 类 | 地址 |
|---|---|
| `std::type_info` | `0x08724730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724730  _ZNKSt9type_info15__is_function_pEv
#           std::type_info::__is_function_p() const
# range [0x08724730, 0x0872473f]
08724730 +0x00:  push   %ebp
08724731 +0x01:  xor    %eax,%eax
08724733 +0x03:  mov    %esp,%ebp
08724735 +0x05:  pop    %ebp
08724736 +0x06:  ret
08724737 +0x07:  nop
08724738 +0x08:  nop
08724739 +0x09:  nop
0872473a +0x0a:  nop
0872473b +0x0b:  nop
0872473c +0x0c:  nop
0872473d +0x0d:  nop
0872473e +0x0e:  nop
0872473f +0x0f:  nop
```

## 反编译 C

```c
// std::type_info::__is_function_p @ 0x8724730

/* std::type_info::__is_function_p() const */

undefined4 std::type_info::__is_function_p(void)

{
  return 0;
}
```
