# what

`_ZNKSt10bad_typeid4whatEv`

`std::bad_typeid::what() const`

| 类 | 地址 |
|---|---|
| `std::bad_typeid` | `0x08725ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08725ea0  _ZNKSt10bad_typeid4whatEv
#           std::bad_typeid::what() const
# range [0x08725ea0, 0x08725ebf]
08725ea0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08725ea5 +0x05:  add    $0xc46cf3,%ecx
08725eab +0x0b:  push   %ebp
08725eac +0x0c:  mov    %esp,%ebp
08725eae +0x0e:  pop    %ebp
08725eaf +0x0f:  lea    -0x66af75(%ecx),%eax
08725eb5 +0x15:  ret
08725eb6 +0x16:  nop
08725eb7 +0x17:  nop
08725eb8 +0x18:  nop
08725eb9 +0x19:  nop
08725eba +0x1a:  nop
08725ebb +0x1b:  nop
08725ebc +0x1c:  nop
08725ebd +0x1d:  nop
08725ebe +0x1e:  nop
08725ebf +0x1f:  nop
```

## 反编译 C

```c
// std::bad_typeid::what @ 0x8725ea0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}
```
