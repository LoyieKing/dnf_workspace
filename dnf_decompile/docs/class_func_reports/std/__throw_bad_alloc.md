# __throw_bad_alloc

`_ZSt17__throw_bad_allocv`

`std::__throw_bad_alloc()`

| 类 | 地址 |
|---|---|
| `std` | `0x086d93f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d93f0  _ZSt17__throw_bad_allocv
#           std::__throw_bad_alloc()
# range [0x086d93f0, 0x086d941b]
086d93f0 +0x00:  push   %ebp
086d93f1 +0x01:  mov    %esp,%ebp
086d93f3 +0x03:  sub    $0x18,%esp
086d93f6 +0x06:  movl   $0x4,(%esp)
086d93fd +0x0d:  call   08725800 <__cxa_allocate_exception>
086d9402 +0x12:  movl   $&_ZTVSt9bad_alloc+0x8,(%eax)
086d9408 +0x18:  movl   $&_ZNSt9bad_allocD1Ev,0x8(%esp)
086d9410 +0x20:  movl   $&_ZTISt9bad_alloc,0x4(%esp)
086d9418 +0x28:  mov    %eax,(%esp)
086d941b +0x2b:  call   08724c50 <__cxa_throw>
```

## 反编译 C

```c
// std::__throw_bad_alloc @ 0x86d93f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_alloc() */

void std::__throw_bad_alloc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = &PTR__bad_alloc_0936b458;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_alloc::typeinfo,bad_alloc::~bad_alloc);
}
```
