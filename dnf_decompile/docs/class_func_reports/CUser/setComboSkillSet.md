# setComboSkillSet

`_ZN5CUser16setComboSkillSetEb`

`CUser::setComboSkillSet(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692f0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692f0a  _ZN5CUser16setComboSkillSetEb
#           CUser::setComboSkillSet(bool)
# range [0x08692f0a, 0x08692f25]
08692f0a +0x00:  push   %ebp
08692f0b +0x01:  mov    %esp,%ebp
08692f0d +0x03:  sub    $0x4,%esp
08692f10 +0x06:  mov    0xc(%ebp),%eax
08692f13 +0x09:  mov    %al,-0x4(%ebp)
08692f16 +0x0c:  mov    0x8(%ebp),%eax
08692f19 +0x0f:  movzbl -0x4(%ebp),%edx
08692f1d +0x13:  mov    %dl,0x8ec29(%eax)
08692f23 +0x19:  leave
08692f24 +0x1a:  ret
08692f25 +0x1b:  nop
```

## 反编译 C

```c
// CUser::setComboSkillSet @ 0x8692f0a

/* CUser::setComboSkillSet(bool) */

void __thiscall CUser::setComboSkillSet(CUser *this,bool param_1)

{
  this[0x8ec29] = (CUser)param_1;
  return;
}
```
