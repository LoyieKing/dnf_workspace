# getMaxBoardSize

`_ZNK10BlueMarble15getMaxBoardSizeEv`

`BlueMarble::getMaxBoardSize() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6ecc  _ZNK10BlueMarble15getMaxBoardSizeEv
#           BlueMarble::getMaxBoardSize() const
# range [0x080d6ecc, 0x080d6ed7]
080d6ecc +0x00:  push   %ebp
080d6ecd +0x01:  mov    %esp,%ebp
080d6ecf +0x03:  mov    0x8(%ebp),%eax
080d6ed2 +0x06:  mov    0x3c(%eax),%eax
080d6ed5 +0x09:  pop    %ebp
080d6ed6 +0x0a:  ret
080d6ed7 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarble::getMaxBoardSize @ 0x80d6ecc

/* BlueMarble::getMaxBoardSize() const */

undefined4 __thiscall BlueMarble::getMaxBoardSize(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x3c);
}
```
