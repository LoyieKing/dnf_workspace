# what

`_ZNKSt9bad_alloc4whatEv`

`std::bad_alloc::what() const`

| 类 | 地址 |
|---|---|
| `std::bad_alloc` | `0x08724540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724540  _ZNKSt9bad_alloc4whatEv
#           std::bad_alloc::what() const
# range [0x08724540, 0x0872455f]
08724540 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08724545 +0x05:  add    $0xc48653,%ecx
0872454b +0x0b:  push   %ebp
0872454c +0x0c:  mov    %esp,%ebp
0872454e +0x0e:  pop    %ebp
0872454f +0x0f:  lea    -0x66b120(%ecx),%eax
08724555 +0x15:  ret
08724556 +0x16:  nop
08724557 +0x17:  nop
08724558 +0x18:  nop
08724559 +0x19:  nop
0872455a +0x1a:  nop
0872455b +0x1b:  nop
0872455c +0x1c:  nop
0872455d +0x1d:  nop
0872455e +0x1e:  nop
0872455f +0x1f:  nop
```

## 反编译 C

```c
// std::bad_alloc::what @ 0x8724540

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}
```
