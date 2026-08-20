# unexpected

`_ZSt10unexpectedv`

`std::unexpected()`

| 类 | 地址 |
|---|---|
| `std` | `0x087248d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087248d0  _ZSt10unexpectedv
#           std::unexpected()
# range [0x087248d0, 0x087248ff]
087248d0 +0x00:  push   %ebp
087248d1 +0x01:  mov    %esp,%ebp
087248d3 +0x03:  push   %ebx
087248d4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087248d9 +0x09:  add    $0xc482bf,%ebx
087248df +0x0f:  sub    $0x14,%esp
087248e2 +0x12:  mov    -0x604(%ebx),%eax
087248e8 +0x18:  mov    (%eax),%eax
087248ea +0x1a:  mov    %eax,(%esp)
087248ed +0x1d:  call   087248b0 <_ZN10__cxxabiv112__unexpectedEPFvvE>  ; __cxxabiv1::__unexpected(void (*)())
087248f2 +0x22:  nop
087248f3 +0x23:  nop
087248f4 +0x24:  nop
087248f5 +0x25:  nop
087248f6 +0x26:  nop
087248f7 +0x27:  nop
087248f8 +0x28:  nop
087248f9 +0x29:  nop
087248fa +0x2a:  nop
087248fb +0x2b:  nop
087248fc +0x2c:  nop
087248fd +0x2d:  nop
087248fe +0x2e:  nop
087248ff +0x2f:  nop
```

## 反编译 C

```c
// std::unexpected @ 0x87248d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

void std::unexpected(void)

{
                    /* WARNING: Subroutine does not return */
  __cxxabiv1::__unexpected(*(_func_void **)PTR___unexpected_handler_0936c594);
}
```
