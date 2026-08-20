# getUser

`_ZNK18BlueMarbleUserInfo7getUserEv`

`BlueMarbleUserInfo::getUser() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b88  _ZNK18BlueMarbleUserInfo7getUserEv
#           BlueMarbleUserInfo::getUser() const
# range [0x080d6b88, 0x080d6b91]
080d6b88 +0x00:  push   %ebp
080d6b89 +0x01:  mov    %esp,%ebp
080d6b8b +0x03:  mov    0x8(%ebp),%eax
080d6b8e +0x06:  mov    (%eax),%eax
080d6b90 +0x08:  pop    %ebp
080d6b91 +0x09:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::getUser @ 0x80d6b88

/* BlueMarbleUserInfo::getUser() const */

undefined4 __thiscall BlueMarbleUserInfo::getUser(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)this;
}
```
