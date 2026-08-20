# set_unexpected

`_ZSt14set_unexpectedPFvvE`

`std::set_unexpected(void (*)())`

| 类 | 地址 |
|---|---|
| `std` | `0x08724830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724830  _ZSt14set_unexpectedPFvvE
#           std::set_unexpected(void (*)())
# range [0x08724830, 0x0872484f]
08724830 +0x00:  push   %ebp
08724831 +0x01:  mov    %esp,%ebp
08724833 +0x03:  push   %ebx
08724834 +0x04:  mov    0x8(%ebp),%ecx
08724837 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0872483c +0x0c:  add    $0xc4835c,%ebx
08724842 +0x12:  mov    -0x604(%ebx),%edx
08724848 +0x18:  mov    (%edx),%eax
0872484a +0x1a:  mov    %ecx,(%edx)
0872484c +0x1c:  pop    %ebx
0872484d +0x1d:  pop    %ebp
0872484e +0x1e:  ret
0872484f +0x1f:  nop
```

## 反编译 C

```c
// std::set_unexpected @ 0x8724830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

undefined4 std::set_unexpected(_func_void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR___unexpected_handler_0936c594;
  *(_func_void **)PTR___unexpected_handler_0936c594 = param_1;
  return uVar1;
}
```
