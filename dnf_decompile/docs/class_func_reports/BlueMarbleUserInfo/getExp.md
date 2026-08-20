# getExp

`_ZNK18BlueMarbleUserInfo6getExpEv`

`BlueMarbleUserInfo::getExp() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6ca0  _ZNK18BlueMarbleUserInfo6getExpEv
#           BlueMarbleUserInfo::getExp() const
# range [0x080d6ca0, 0x080d6cab]
080d6ca0 +0x00:  push   %ebp
080d6ca1 +0x01:  mov    %esp,%ebp
080d6ca3 +0x03:  mov    0x8(%ebp),%eax
080d6ca6 +0x06:  mov    0x10(%eax),%eax
080d6ca9 +0x09:  pop    %ebp
080d6caa +0x0a:  ret
080d6cab +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getExp @ 0x80d6ca0

/* BlueMarbleUserInfo::getExp() const */

undefined4 __thiscall BlueMarbleUserInfo::getExp(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
