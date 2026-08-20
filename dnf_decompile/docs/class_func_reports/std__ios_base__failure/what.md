# what

`_ZNKSt8ios_base7failure4whatEv`

`std::ios_base::failure::what() const`

| 类 | 地址 |
|---|---|
| `std::ios_base::failure` | `0x086da050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da050  _ZNKSt8ios_base7failure4whatEv
#           std::ios_base::failure::what() const
# range [0x086da050, 0x086da05f]
086da050 +0x00:  push   %ebp
086da051 +0x01:  mov    %esp,%ebp
086da053 +0x03:  mov    0x8(%ebp),%eax
086da056 +0x06:  pop    %ebp
086da057 +0x07:  mov    0x4(%eax),%eax
086da05a +0x0a:  ret
086da05b +0x0b:  nop
086da05c +0x0c:  nop
086da05d +0x0d:  nop
086da05e +0x0e:  nop
086da05f +0x0f:  nop
```

## 反编译 C

```c
// std::ios_base::failure::what @ 0x86da050

/* std::ios_base::failure::what() const */

undefined4 __thiscall std::ios_base::failure::what(failure *this)

{
  return *(undefined4 *)(this + 4);
}
```
