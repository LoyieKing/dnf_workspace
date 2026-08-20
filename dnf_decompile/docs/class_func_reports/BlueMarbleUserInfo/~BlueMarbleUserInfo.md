# ~BlueMarbleUserInfo

`_ZN18BlueMarbleUserInfoD1Ev`

`BlueMarbleUserInfo::~BlueMarbleUserInfo()`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b02  _ZN18BlueMarbleUserInfoD1Ev
#           BlueMarbleUserInfo::~BlueMarbleUserInfo()
# range [0x080d6b02, 0x080d6b07]
080d6b02 +0x00:  push   %ebp
080d6b03 +0x01:  mov    %esp,%ebp
080d6b05 +0x03:  pop    %ebp
080d6b06 +0x04:  ret
080d6b07 +0x05:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::~BlueMarbleUserInfo @ 0x80d6b02

/* BlueMarbleUserInfo::~BlueMarbleUserInfo() */

void __thiscall BlueMarbleUserInfo::~BlueMarbleUserInfo(BlueMarbleUserInfo *this)

{
  return;
}
```
