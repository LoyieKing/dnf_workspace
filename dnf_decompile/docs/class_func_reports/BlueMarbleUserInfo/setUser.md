# setUser

`_ZN18BlueMarbleUserInfo7setUserEP5CUser`

`BlueMarbleUserInfo::setUser(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b7a  _ZN18BlueMarbleUserInfo7setUserEP5CUser
#           BlueMarbleUserInfo::setUser(CUser*)
# range [0x080d6b7a, 0x080d6b87]
080d6b7a +0x00:  push   %ebp
080d6b7b +0x01:  mov    %esp,%ebp
080d6b7d +0x03:  mov    0x8(%ebp),%eax
080d6b80 +0x06:  mov    0xc(%ebp),%edx
080d6b83 +0x09:  mov    %edx,(%eax)
080d6b85 +0x0b:  pop    %ebp
080d6b86 +0x0c:  ret
080d6b87 +0x0d:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::setUser @ 0x80d6b7a

/* BlueMarbleUserInfo::setUser(CUser*) */

void __thiscall BlueMarbleUserInfo::setUser(BlueMarbleUserInfo *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  return;
}
```
