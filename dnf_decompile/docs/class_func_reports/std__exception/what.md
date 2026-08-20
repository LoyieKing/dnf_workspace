# what

`_ZNKSt9exception4whatEv`

`std::exception::what() const`

| 类 | 地址 |
|---|---|
| `std::exception` | `0x08725110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725110  _ZNKSt9exception4whatEv
#           std::exception::what() const
# range [0x08725110, 0x0872512f]
08725110 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08725115 +0x05:  add    $0xc47a83,%ecx
0872511b +0x0b:  push   %ebp
0872511c +0x0c:  mov    %esp,%ebp
0872511e +0x0e:  pop    %ebp
0872511f +0x0f:  lea    -0x66b057(%ecx),%eax
08725125 +0x15:  ret
08725126 +0x16:  nop
08725127 +0x17:  nop
08725128 +0x18:  nop
08725129 +0x19:  nop
0872512a +0x1a:  nop
0872512b +0x1b:  nop
0872512c +0x1c:  nop
0872512d +0x1d:  nop
0872512e +0x1e:  nop
0872512f +0x1f:  nop
```

## 反编译 C

```c
// std::exception::what @ 0x8725110

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}
```
