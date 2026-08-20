# __throw_bad_cast

`_ZSt16__throw_bad_castv`

`std::__throw_bad_cast()`

| 类 | 地址 |
|---|---|
| `std` | `0x086d93c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d93c0  _ZSt16__throw_bad_castv
#           std::__throw_bad_cast()
# range [0x086d93c0, 0x086d93eb]
086d93c0 +0x00:  push   %ebp
086d93c1 +0x01:  mov    %esp,%ebp
086d93c3 +0x03:  sub    $0x18,%esp
086d93c6 +0x06:  movl   $0x4,(%esp)
086d93cd +0x0d:  call   08725800 <__cxa_allocate_exception>
086d93d2 +0x12:  movl   $&_ZTVSt8bad_cast+0x8,(%eax)
086d93d8 +0x18:  movl   $&_ZNSt8bad_castD1Ev,0x8(%esp)
086d93e0 +0x20:  movl   $&_ZTISt8bad_cast,0x4(%esp)
086d93e8 +0x28:  mov    %eax,(%esp)
086d93eb +0x2b:  call   08724c50 <__cxa_throw>
```

## 反编译 C

```c
// std::__throw_bad_cast @ 0x86d93c0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_cast() */

void std::__throw_bad_cast(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = &PTR__bad_cast_0936b478;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_cast::typeinfo,bad_cast::~bad_cast);
}
```
