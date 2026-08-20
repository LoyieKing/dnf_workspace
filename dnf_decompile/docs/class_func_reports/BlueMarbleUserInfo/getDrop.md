# getDrop

`_ZNK18BlueMarbleUserInfo7getDropEv`

`BlueMarbleUserInfo::getDrop() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6d3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6d3c  _ZNK18BlueMarbleUserInfo7getDropEv
#           BlueMarbleUserInfo::getDrop() const
# range [0x080d6d3c, 0x080d6d47]
080d6d3c +0x00:  push   %ebp
080d6d3d +0x01:  mov    %esp,%ebp
080d6d3f +0x03:  mov    0x8(%ebp),%eax
080d6d42 +0x06:  mov    0x18(%eax),%eax
080d6d45 +0x09:  pop    %ebp
080d6d46 +0x0a:  ret
080d6d47 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getDrop @ 0x80d6d3c

/* BlueMarbleUserInfo::getDrop() const */

undefined4 __thiscall BlueMarbleUserInfo::getDrop(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x18);
}
```
