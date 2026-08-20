# uncaught_exception

`_ZSt18uncaught_exceptionv`

`std::uncaught_exception()`

| 类 | 地址 |
|---|---|
| `std` | `0x08725c00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725c00  _ZSt18uncaught_exceptionv
#           std::uncaught_exception()
# range [0x08725c00, 0x08725c2f]
08725c00 +0x00:  push   %ebp
08725c01 +0x01:  mov    %esp,%ebp
08725c03 +0x03:  push   %ebx
08725c04 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08725c09 +0x09:  add    $0xc46f8f,%ebx
08725c0f +0x0f:  sub    $0x4,%esp
08725c12 +0x12:  call   08725f50 <__cxa_get_globals>
08725c17 +0x17:  mov    0x4(%eax),%eax
08725c1a +0x1a:  test   %eax,%eax
08725c1c +0x1c:  setne  %al
08725c1f +0x1f:  add    $0x4,%esp
08725c22 +0x22:  pop    %ebx
08725c23 +0x23:  pop    %ebp
08725c24 +0x24:  ret
08725c25 +0x25:  nop
08725c26 +0x26:  nop
08725c27 +0x27:  nop
08725c28 +0x28:  nop
08725c29 +0x29:  nop
08725c2a +0x2a:  nop
08725c2b +0x2b:  nop
08725c2c +0x2c:  nop
08725c2d +0x2d:  nop
08725c2e +0x2e:  nop
08725c2f +0x2f:  nop
```

## 反编译 C

```c
// std::uncaught_exception @ 0x8725c00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exception() */

undefined4 std::uncaught_exception(void)

{
  int iVar1;
  
  iVar1 = __cxa_get_globals(0x8725c09);
  return CONCAT31((int3)((uint)*(int *)(iVar1 + 4) >> 8),*(int *)(iVar1 + 4) != 0);
}
```
