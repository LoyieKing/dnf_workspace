# terminate

`_ZSt9terminatev`

`std::terminate()`

| 类 | 地址 |
|---|---|
| `std` | `0x08724880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724880  _ZSt9terminatev
#           std::terminate()
# range [0x08724880, 0x087248af]
08724880 +0x00:  push   %ebp
08724881 +0x01:  mov    %esp,%ebp
08724883 +0x03:  push   %ebx
08724884 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08724889 +0x09:  add    $0xc4830f,%ebx
0872488f +0x0f:  sub    $0x14,%esp
08724892 +0x12:  mov    -0x3f0(%ebx),%eax
08724898 +0x18:  mov    (%eax),%eax
0872489a +0x1a:  mov    %eax,(%esp)
0872489d +0x1d:  call   08724850 <_ZN10__cxxabiv111__terminateEPFvvE>  ; __cxxabiv1::__terminate(void (*)())
087248a2 +0x22:  nop
087248a3 +0x23:  nop
087248a4 +0x24:  nop
087248a5 +0x25:  nop
087248a6 +0x26:  nop
087248a7 +0x27:  nop
087248a8 +0x28:  nop
087248a9 +0x29:  nop
087248aa +0x2a:  nop
087248ab +0x2b:  nop
087248ac +0x2c:  nop
087248ad +0x2d:  nop
087248ae +0x2e:  nop
087248af +0x2f:  nop
```

## 反编译 C

```c
// std::terminate @ 0x8724880

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
                    /* WARNING: Subroutine does not return */
  __cxxabiv1::__terminate(*(_func_void **)PTR___terminate_handler_0936c7a8);
}
```
