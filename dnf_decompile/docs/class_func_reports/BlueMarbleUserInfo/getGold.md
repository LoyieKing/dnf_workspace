# getGold

`_ZNK18BlueMarbleUserInfo7getGoldEv`

`BlueMarbleUserInfo::getGold() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6cee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6cee  _ZNK18BlueMarbleUserInfo7getGoldEv
#           BlueMarbleUserInfo::getGold() const
# range [0x080d6cee, 0x080d6cf9]
080d6cee +0x00:  push   %ebp
080d6cef +0x01:  mov    %esp,%ebp
080d6cf1 +0x03:  mov    0x8(%ebp),%eax
080d6cf4 +0x06:  mov    0x14(%eax),%eax
080d6cf7 +0x09:  pop    %ebp
080d6cf8 +0x0a:  ret
080d6cf9 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getGold @ 0x80d6cee

/* BlueMarbleUserInfo::getGold() const */

undefined4 __thiscall BlueMarbleUserInfo::getGold(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x14);
}
```
