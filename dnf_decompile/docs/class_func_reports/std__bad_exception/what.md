# what

`_ZNKSt13bad_exception4whatEv`

`std::bad_exception::what() const`

| 类 | 地址 |
|---|---|
| `std::bad_exception` | `0x08725130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725130  _ZNKSt13bad_exception4whatEv
#           std::bad_exception::what() const
# range [0x08725130, 0x0872514f]
08725130 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08725135 +0x05:  add    $0xc47a63,%ecx
0872513b +0x0b:  push   %ebp
0872513c +0x0c:  mov    %esp,%ebp
0872513e +0x0e:  pop    %ebp
0872513f +0x0f:  lea    -0x66b048(%ecx),%eax
08725145 +0x15:  ret
08725146 +0x16:  nop
08725147 +0x17:  nop
08725148 +0x18:  nop
08725149 +0x19:  nop
0872514a +0x1a:  nop
0872514b +0x1b:  nop
0872514c +0x1c:  nop
0872514d +0x1d:  nop
0872514e +0x1e:  nop
0872514f +0x1f:  nop
```

## 反编译 C

```c
// std::bad_exception::what @ 0x8725130

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}
```
