# what

`_ZNKSt11logic_error4whatEv`

`std::logic_error::what() const`

| 类 | 地址 |
|---|---|
| `std::logic_error` | `0x086dd160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd160  _ZNKSt11logic_error4whatEv
#           std::logic_error::what() const
# range [0x086dd160, 0x086dd16f]
086dd160 +0x00:  push   %ebp
086dd161 +0x01:  mov    %esp,%ebp
086dd163 +0x03:  mov    0x8(%ebp),%eax
086dd166 +0x06:  pop    %ebp
086dd167 +0x07:  mov    0x4(%eax),%eax
086dd16a +0x0a:  ret
086dd16b +0x0b:  nop
086dd16c +0x0c:  nop
086dd16d +0x0d:  nop
086dd16e +0x0e:  nop
086dd16f +0x0f:  nop
```

## 反编译 C

```c
// std::logic_error::what @ 0x86dd160

/* std::logic_error::what() const */

undefined4 __thiscall std::logic_error::what(logic_error *this)

{
  return *(undefined4 *)(this + 4);
}
```
