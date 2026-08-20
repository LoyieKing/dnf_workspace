# __terminate

`_ZN10__cxxabiv111__terminateEPFvvE`

`__cxxabiv1::__terminate(void (*)())`

| 类 | 地址 |
|---|---|
| `__cxxabiv1` | `0x08724850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724850  _ZN10__cxxabiv111__terminateEPFvvE
#           __cxxabiv1::__terminate(void (*)())
# range [0x08724850, 0x0872487f]
08724850 +0x00:  push   %ebp
08724851 +0x01:  mov    %esp,%ebp
08724853 +0x03:  push   %ebx
08724854 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08724859 +0x09:  add    $0xc4833f,%ebx
0872485f +0x0f:  sub    $0x14,%esp
08724862 +0x12:  call   *0x8(%ebp)
08724865 +0x15:  call   0807e170 <_init+0xa68>
0872486a +0x1a:  mov    %eax,(%esp)
0872486d +0x1d:  call   08725ce0 <__cxa_begin_catch>
08724872 +0x22:  jmp    08724865 <+0x15>
08724874 +0x24:  nop
08724875 +0x25:  nop
08724876 +0x26:  nop
08724877 +0x27:  nop
08724878 +0x28:  nop
08724879 +0x29:  nop
0872487a +0x2a:  nop
0872487b +0x2b:  nop
0872487c +0x2c:  nop
0872487d +0x2d:  nop
0872487e +0x2e:  nop
0872487f +0x2f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__terminate @ 0x8724850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__terminate(void (*)()) */

void __cxxabiv1::__terminate(_func_void *param_1)

{
                    /* try { // try from 08724862 to 08724864 has its CatchHandler @ 0872486a */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}
```
