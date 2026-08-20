# getBlueMarbleMap

`_ZNK10BlueMarble16getBlueMarbleMapEv`

`BlueMarble::getBlueMarbleMap() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6e7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6e7c  _ZNK10BlueMarble16getBlueMarbleMapEv
#           BlueMarble::getBlueMarbleMap() const
# range [0x080d6e7c, 0x080d6e87]
080d6e7c +0x00:  push   %ebp
080d6e7d +0x01:  mov    %esp,%ebp
080d6e7f +0x03:  mov    0x8(%ebp),%eax
080d6e82 +0x06:  mov    0x1c(%eax),%eax
080d6e85 +0x09:  pop    %ebp
080d6e86 +0x0a:  ret
080d6e87 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarble::getBlueMarbleMap @ 0x80d6e7c

/* BlueMarble::getBlueMarbleMap() const */

undefined4 __thiscall BlueMarble::getBlueMarbleMap(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x1c);
}
```
