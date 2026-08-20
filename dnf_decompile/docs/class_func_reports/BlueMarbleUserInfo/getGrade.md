# getGrade

`_ZNK18BlueMarbleUserInfo8getGradeEv`

`BlueMarbleUserInfo::getGrade() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c1e  _ZNK18BlueMarbleUserInfo8getGradeEv
#           BlueMarbleUserInfo::getGrade() const
# range [0x080d6c1e, 0x080d6c29]
080d6c1e +0x00:  push   %ebp
080d6c1f +0x01:  mov    %esp,%ebp
080d6c21 +0x03:  mov    0x8(%ebp),%eax
080d6c24 +0x06:  mov    0xc(%eax),%eax
080d6c27 +0x09:  pop    %ebp
080d6c28 +0x0a:  ret
080d6c29 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getGrade @ 0x80d6c1e

/* BlueMarbleUserInfo::getGrade() const */

undefined4 __thiscall BlueMarbleUserInfo::getGrade(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
