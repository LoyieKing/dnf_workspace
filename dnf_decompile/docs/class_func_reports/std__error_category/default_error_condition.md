# default_error_condition

`_ZNKSt14error_category23default_error_conditionEi`

`std::error_category::default_error_condition(int) const`

| 类 | 地址 |
|---|---|
| `std::error_category` | `0x086df580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df580  _ZNKSt14error_category23default_error_conditionEi
#           std::error_category::default_error_condition(int) const
# range [0x086df580, 0x086df59f]
086df580 +0x00:  push   %ebp
086df581 +0x01:  mov    %esp,%ebp
086df583 +0x03:  mov    0x8(%ebp),%eax
086df586 +0x06:  mov    0x10(%ebp),%edx
086df589 +0x09:  mov    %edx,(%eax)
086df58b +0x0b:  mov    0xc(%ebp),%edx
086df58e +0x0e:  mov    %edx,0x4(%eax)
086df591 +0x11:  pop    %ebp
086df592 +0x12:  ret    $0x4
086df595 +0x15:  nop
086df596 +0x16:  nop
086df597 +0x17:  nop
086df598 +0x18:  nop
086df599 +0x19:  nop
086df59a +0x1a:  nop
086df59b +0x1b:  nop
086df59c +0x1c:  nop
086df59d +0x1d:  nop
086df59e +0x1e:  nop
086df59f +0x1f:  nop
```

## 反编译 C

```c
// std::error_category::default_error_condition @ 0x86df580

/* std::error_category::default_error_condition(int) const */

void std::error_category::default_error_condition(int param_1)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)param_1 = in_stack_0000000c;
  *(undefined4 *)(param_1 + 4) = in_stack_00000008;
  return;
}
```
