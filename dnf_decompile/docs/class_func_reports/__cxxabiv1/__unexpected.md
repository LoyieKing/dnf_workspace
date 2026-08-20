# __unexpected

`_ZN10__cxxabiv112__unexpectedEPFvvE`

`__cxxabiv1::__unexpected(void (*)())`

| 类 | 地址 |
|---|---|
| `__cxxabiv1` | `0x087248b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087248b0  _ZN10__cxxabiv112__unexpectedEPFvvE
#           __cxxabiv1::__unexpected(void (*)())
# range [0x087248b0, 0x087248cf]
087248b0 +0x00:  push   %ebp
087248b1 +0x01:  mov    %esp,%ebp
087248b3 +0x03:  push   %ebx
087248b4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087248b9 +0x09:  add    $0xc482df,%ebx
087248bf +0x0f:  sub    $0x4,%esp
087248c2 +0x12:  call   *0x8(%ebp)
087248c5 +0x15:  call   08724880 <_ZSt9terminatev>  ; std::terminate()
087248ca +0x1a:  nop
087248cb +0x1b:  nop
087248cc +0x1c:  nop
087248cd +0x1d:  nop
087248ce +0x1e:  nop
087248cf +0x1f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__unexpected @ 0x87248b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__unexpected(void (*)()) */

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)(0x87248b9);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}
```
