# __do_upcast

`_ZNKSt9type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv`

`std::type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const`

| 类 | 地址 |
|---|---|
| `std::type_info` | `0x08724740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724740  _ZNKSt9type_info11__do_upcastEPKN10__cxxabiv117__class_type_infoEPPv
#           std::type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const
# range [0x08724740, 0x0872474f]
08724740 +0x00:  push   %ebp
08724741 +0x01:  xor    %eax,%eax
08724743 +0x03:  mov    %esp,%ebp
08724745 +0x05:  pop    %ebp
08724746 +0x06:  ret
08724747 +0x07:  nop
08724748 +0x08:  nop
08724749 +0x09:  nop
0872474a +0x0a:  nop
0872474b +0x0b:  nop
0872474c +0x0c:  nop
0872474d +0x0d:  nop
0872474e +0x0e:  nop
0872474f +0x0f:  nop
```

## 反编译 C

```c
// std::type_info::__do_upcast @ 0x8724740

/* std::type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

undefined4 std::type_info::__do_upcast(__class_type_info *param_1,void **param_2)

{
  return 0;
}
```
