# __throw_bad_typeid

`_ZSt18__throw_bad_typeidv`

`std::__throw_bad_typeid()`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9390  _ZSt18__throw_bad_typeidv
#           std::__throw_bad_typeid()
# range [0x086d9390, 0x086d93bb]
086d9390 +0x00:  push   %ebp
086d9391 +0x01:  mov    %esp,%ebp
086d9393 +0x03:  sub    $0x18,%esp
086d9396 +0x06:  movl   $0x4,(%esp)
086d939d +0x0d:  call   08725800 <__cxa_allocate_exception>
086d93a2 +0x12:  movl   $&_ZTVSt10bad_typeid+0x8,(%eax)
086d93a8 +0x18:  movl   $&_ZNSt10bad_typeidD1Ev,0x8(%esp)
086d93b0 +0x20:  movl   $&_ZTISt10bad_typeid,0x4(%esp)
086d93b8 +0x28:  mov    %eax,(%esp)
086d93bb +0x2b:  call   08724c50 <__cxa_throw>
```

## 反编译 C

```c
// std::__throw_bad_typeid @ 0x86d9390

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_typeid() */

void std::__throw_bad_typeid(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = &PTR__bad_typeid_0936b600;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_typeid::typeinfo,bad_typeid::~bad_typeid);
}
```
