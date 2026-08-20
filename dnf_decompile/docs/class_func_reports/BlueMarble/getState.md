# getState

`_ZNK10BlueMarble8getStateEv`

`BlueMarble::getState() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6dc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6dc8  _ZNK10BlueMarble8getStateEv
#           BlueMarble::getState() const
# range [0x080d6dc8, 0x080d6dd3]
080d6dc8 +0x00:  push   %ebp
080d6dc9 +0x01:  mov    %esp,%ebp
080d6dcb +0x03:  mov    0x8(%ebp),%eax
080d6dce +0x06:  mov    0x10(%eax),%eax
080d6dd1 +0x09:  pop    %ebp
080d6dd2 +0x0a:  ret
080d6dd3 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarble::getState @ 0x80d6dc8

/* BlueMarble::getState() const */

undefined4 __thiscall BlueMarble::getState(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
