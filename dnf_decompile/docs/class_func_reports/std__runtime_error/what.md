# what

`_ZNKSt13runtime_error4whatEv`

`std::runtime_error::what() const`

| 类 | 地址 |
|---|---|
| `std::runtime_error` | `0x086dd170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd170  _ZNKSt13runtime_error4whatEv
#           std::runtime_error::what() const
# range [0x086dd170, 0x086dd17f]
086dd170 +0x00:  push   %ebp
086dd171 +0x01:  mov    %esp,%ebp
086dd173 +0x03:  mov    0x8(%ebp),%eax
086dd176 +0x06:  pop    %ebp
086dd177 +0x07:  mov    0x4(%eax),%eax
086dd17a +0x0a:  ret
086dd17b +0x0b:  nop
086dd17c +0x0c:  nop
086dd17d +0x0d:  nop
086dd17e +0x0e:  nop
086dd17f +0x0f:  nop
```

## 反编译 C

```c
// std::runtime_error::what @ 0x86dd170

/* std::runtime_error::what() const */

undefined4 __thiscall std::runtime_error::what(runtime_error *this)

{
  return *(undefined4 *)(this + 4);
}
```
