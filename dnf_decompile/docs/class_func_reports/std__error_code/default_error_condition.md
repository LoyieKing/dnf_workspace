# default_error_condition

`_ZNKSt10error_code23default_error_conditionEv`

`std::error_code::default_error_condition() const`

| 类 | 地址 |
|---|---|
| `std::error_code` | `0x086df630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df630  _ZNKSt10error_code23default_error_conditionEv
#           std::error_code::default_error_condition() const
# range [0x086df630, 0x086df65f]
086df630 +0x00:  push   %ebp
086df631 +0x01:  mov    %esp,%ebp
086df633 +0x03:  push   %ebx
086df634 +0x04:  sub    $0x14,%esp
086df637 +0x07:  mov    0xc(%ebp),%edx
086df63a +0x0a:  mov    0x8(%ebp),%ebx
086df63d +0x0d:  mov    0x4(%edx),%eax
086df640 +0x10:  mov    (%edx),%edx
086df642 +0x12:  mov    (%eax),%ecx
086df644 +0x14:  mov    %eax,0x4(%esp)
086df648 +0x18:  mov    %ebx,(%esp)
086df64b +0x1b:  mov    %edx,0x8(%esp)
086df64f +0x1f:  call   *0x10(%ecx)
086df652 +0x22:  mov    %ebx,%eax
086df654 +0x24:  mov    -0x4(%ebp),%ebx
086df657 +0x27:  sub    $0x4,%esp
086df65a +0x2a:  leave
086df65b +0x2b:  ret    $0x4
086df65e +0x2e:  nop
086df65f +0x2f:  nop
```

## 反编译 C

```c
// std::error_code::default_error_condition @ 0x86df630

/* std::error_code::default_error_condition() const */

undefined4 std::error_code::default_error_condition(void)

{
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  
  (**(code **)(**(int **)(in_stack_00000008 + 4) + 0x10))();
  return in_stack_00000004;
}
```
