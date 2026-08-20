# isComboSkillSet

`_ZN5CUser15isComboSkillSetEv`

`CUser::isComboSkillSet()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692f26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692f26  _ZN5CUser15isComboSkillSetEv
#           CUser::isComboSkillSet()
# range [0x08692f26, 0x08692f35]
08692f26 +0x00:  push   %ebp
08692f27 +0x01:  mov    %esp,%ebp
08692f29 +0x03:  mov    0x8(%ebp),%eax
08692f2c +0x06:  movzbl 0x8ec29(%eax),%eax
08692f33 +0x0d:  pop    %ebp
08692f34 +0x0e:  ret
08692f35 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isComboSkillSet @ 0x8692f26

/* CUser::isComboSkillSet() */

CUser __thiscall CUser::isComboSkillSet(CUser *this)

{
  return this[0x8ec29];
}
```
