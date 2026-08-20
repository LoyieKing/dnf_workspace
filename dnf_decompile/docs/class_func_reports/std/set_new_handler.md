# set_new_handler

`_ZSt15set_new_handlerPFvvE`

`std::set_new_handler(void (*)())`

| 类 | 地址 |
|---|---|
| `std` | `0x08724520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724520  _ZSt15set_new_handlerPFvvE
#           std::set_new_handler(void (*)())
# range [0x08724520, 0x0872453f]
08724520 +0x00:  push   %ebp
08724521 +0x01:  mov    %esp,%ebp
08724523 +0x03:  push   %ebx
08724524 +0x04:  mov    0x8(%ebp),%ecx
08724527 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0872452c +0x0c:  add    $0xc4866c,%ebx
08724532 +0x12:  mov    -0x454(%ebx),%edx
08724538 +0x18:  mov    (%edx),%eax
0872453a +0x1a:  mov    %ecx,(%edx)
0872453c +0x1c:  pop    %ebx
0872453d +0x1d:  pop    %ebp
0872453e +0x1e:  ret
0872453f +0x1f:  nop
```

## 反编译 C

```c
// std::set_new_handler @ 0x8724520

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

undefined4 std::set_new_handler(_func_void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR___new_handler_0936c744;
  *(_func_void **)PTR___new_handler_0936c744 = param_1;
  return uVar1;
}
```
