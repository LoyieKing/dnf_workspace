# getBoardZone

`_ZNK18BlueMarbleUserInfo12getBoardZoneEv`

`BlueMarbleUserInfo::getBoardZone() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c04  _ZNK18BlueMarbleUserInfo12getBoardZoneEv
#           BlueMarbleUserInfo::getBoardZone() const
# range [0x080d6c04, 0x080d6c0f]
080d6c04 +0x00:  push   %ebp
080d6c05 +0x01:  mov    %esp,%ebp
080d6c07 +0x03:  mov    0x8(%ebp),%eax
080d6c0a +0x06:  mov    0x8(%eax),%eax
080d6c0d +0x09:  pop    %ebp
080d6c0e +0x0a:  ret
080d6c0f +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getBoardZone @ 0x80d6c04

/* BlueMarbleUserInfo::getBoardZone() const */

undefined4 __thiscall BlueMarbleUserInfo::getBoardZone(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 8);
}
```
