# GetLastGrade

`_ZNK11RefPvpGrade12GetLastGradeEv`

`RefPvpGrade::GetLastGrade() const`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d478e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d478e  _ZNK11RefPvpGrade12GetLastGradeEv
#           RefPvpGrade::GetLastGrade() const
# range [0x085d478e, 0x085d4797]
085d478e +0x00:  push   %ebp
085d478f +0x01:  mov    %esp,%ebp
085d4791 +0x03:  mov    0x8(%ebp),%eax
085d4794 +0x06:  mov    (%eax),%eax
085d4796 +0x08:  pop    %ebp
085d4797 +0x09:  ret
```

## 反编译 C

```c
// RefPvpGrade::GetLastGrade @ 0x85d478e

/* RefPvpGrade::GetLastGrade() const */

undefined4 __thiscall RefPvpGrade::GetLastGrade(RefPvpGrade *this)

{
  return *(undefined4 *)this;
}
```
