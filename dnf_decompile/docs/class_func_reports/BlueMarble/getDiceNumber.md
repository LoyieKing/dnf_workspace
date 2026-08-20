# getDiceNumber

`_ZNK10BlueMarble13getDiceNumberEv`

`BlueMarble::getDiceNumber() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6fc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6fc4  _ZNK10BlueMarble13getDiceNumberEv
#           BlueMarble::getDiceNumber() const
# range [0x080d6fc4, 0x080d6fcf]
080d6fc4 +0x00:  push   %ebp
080d6fc5 +0x01:  mov    %esp,%ebp
080d6fc7 +0x03:  mov    0x8(%ebp),%eax
080d6fca +0x06:  mov    0x18(%eax),%eax
080d6fcd +0x09:  pop    %ebp
080d6fce +0x0a:  ret
080d6fcf +0x0b:  nop
```

## 反编译 C

```c
// BlueMarble::getDiceNumber @ 0x80d6fc4

/* BlueMarble::getDiceNumber() const */

undefined4 __thiscall BlueMarble::getDiceNumber(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x18);
}
```
