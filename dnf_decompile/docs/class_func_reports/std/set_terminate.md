# set_terminate

`_ZSt13set_terminatePFvvE`

`std::set_terminate(void (*)())`

| 类 | 地址 |
|---|---|
| `std` | `0x08724810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724810  _ZSt13set_terminatePFvvE
#           std::set_terminate(void (*)())
# range [0x08724810, 0x0872482f]
08724810 +0x00:  push   %ebp
08724811 +0x01:  mov    %esp,%ebp
08724813 +0x03:  push   %ebx
08724814 +0x04:  mov    0x8(%ebp),%ecx
08724817 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0872481c +0x0c:  add    $0xc4837c,%ebx
08724822 +0x12:  mov    -0x3f0(%ebx),%edx
08724828 +0x18:  mov    (%edx),%eax
0872482a +0x1a:  mov    %ecx,(%edx)
0872482c +0x1c:  pop    %ebx
0872482d +0x1d:  pop    %ebp
0872482e +0x1e:  ret
0872482f +0x1f:  nop
```

## 反编译 C

```c
// std::set_terminate @ 0x8724810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

undefined4 std::set_terminate(_func_void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR___terminate_handler_0936c7a8;
  *(_func_void **)PTR___terminate_handler_0936c7a8 = param_1;
  return uVar1;
}
```
