# setGrade

`_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE`

`BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c10  _ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE
#           BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T)
# range [0x080d6c10, 0x080d6c1d]
080d6c10 +0x00:  push   %ebp
080d6c11 +0x01:  mov    %esp,%ebp
080d6c13 +0x03:  mov    0x8(%ebp),%eax
080d6c16 +0x06:  mov    0xc(%ebp),%edx
080d6c19 +0x09:  mov    %edx,0xc(%eax)
080d6c1c +0x0c:  pop    %ebp
080d6c1d +0x0d:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::setGrade @ 0x80d6c10

/* BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T) */

void __thiscall BlueMarbleUserInfo::setGrade(BlueMarbleUserInfo *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc) = param_2;
  return;
}
```
