# getItem

`_ZNK18BlueMarbleUserInfo7getItemEv`

`BlueMarbleUserInfo::getItem() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c52  _ZNK18BlueMarbleUserInfo7getItemEv
#           BlueMarbleUserInfo::getItem() const
# range [0x080d6c52, 0x080d6c5d]
080d6c52 +0x00:  push   %ebp
080d6c53 +0x01:  mov    %esp,%ebp
080d6c55 +0x03:  mov    0x8(%ebp),%eax
080d6c58 +0x06:  mov    0x20(%eax),%eax
080d6c5b +0x09:  pop    %ebp
080d6c5c +0x0a:  ret
080d6c5d +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getItem @ 0x80d6c52

/* BlueMarbleUserInfo::getItem() const */

undefined4 __thiscall BlueMarbleUserInfo::getItem(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x20);
}
```
