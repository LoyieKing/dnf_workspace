# getMemoryPoolIndex

`_ZNK10BlueMarble18getMemoryPoolIndexEv`

`BlueMarble::getMemoryPoolIndex() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8c34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8c34  _ZNK10BlueMarble18getMemoryPoolIndexEv
#           BlueMarble::getMemoryPoolIndex() const
# range [0x080d8c34, 0x080d8c3d]
080d8c34 +0x00:  push   %ebp
080d8c35 +0x01:  mov    %esp,%ebp
080d8c37 +0x03:  mov    0x8(%ebp),%eax
080d8c3a +0x06:  mov    (%eax),%eax
080d8c3c +0x08:  pop    %ebp
080d8c3d +0x09:  ret
```

## 反编译 C

```c
// BlueMarble::getMemoryPoolIndex @ 0x80d8c34

/* BlueMarble::getMemoryPoolIndex() const */

undefined4 __thiscall BlueMarble::getMemoryPoolIndex(BlueMarble *this)

{
  return *(undefined4 *)this;
}
```
