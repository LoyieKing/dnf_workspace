# what

`_ZNKSt8bad_cast4whatEv`

`std::bad_cast::what() const`

| 类 | 地址 |
|---|---|
| `std::bad_cast` | `0x08724670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08724670  _ZNKSt8bad_cast4whatEv
#           std::bad_cast::what() const
# range [0x08724670, 0x0872468f]
08724670 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08724675 +0x05:  add    $0xc48523,%ecx
0872467b +0x0b:  push   %ebp
0872467c +0x0c:  mov    %esp,%ebp
0872467e +0x0e:  pop    %ebp
0872467f +0x0f:  lea    -0x66b103(%ecx),%eax
08724685 +0x15:  ret
08724686 +0x16:  nop
08724687 +0x17:  nop
08724688 +0x18:  nop
08724689 +0x19:  nop
0872468a +0x1a:  nop
0872468b +0x1b:  nop
0872468c +0x1c:  nop
0872468d +0x1d:  nop
0872468e +0x1e:  nop
0872468f +0x1f:  nop
```

## 反编译 C

```c
// std::bad_cast::what @ 0x8724670

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}
```
