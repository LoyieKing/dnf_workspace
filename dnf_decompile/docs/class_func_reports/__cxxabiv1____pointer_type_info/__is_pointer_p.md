# __is_pointer_p

`_ZNK10__cxxabiv119__pointer_type_info14__is_pointer_pEv`

`__cxxabiv1::__pointer_type_info::__is_pointer_p() const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__pointer_type_info` | `0x08723850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08723850  _ZNK10__cxxabiv119__pointer_type_info14__is_pointer_pEv
#           __cxxabiv1::__pointer_type_info::__is_pointer_p() const
# range [0x08723850, 0x0872385f]
08723850 +0x00:  push   %ebp
08723851 +0x01:  mov    $0x1,%eax
08723856 +0x06:  mov    %esp,%ebp
08723858 +0x08:  pop    %ebp
08723859 +0x09:  ret
0872385a +0x0a:  nop
0872385b +0x0b:  nop
0872385c +0x0c:  nop
0872385d +0x0d:  nop
0872385e +0x0e:  nop
0872385f +0x0f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__pointer_type_info::__is_pointer_p @ 0x8723850

/* __cxxabiv1::__pointer_type_info::__is_pointer_p() const */

undefined4 __cxxabiv1::__pointer_type_info::__is_pointer_p(void)

{
  return 1;
}
```
