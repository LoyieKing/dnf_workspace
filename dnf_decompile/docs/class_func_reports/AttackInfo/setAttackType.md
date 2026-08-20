# setAttackType

`_ZN10AttackInfo13setAttackTypeENS_15ENUM_ATTACKTYPEE`

`AttackInfo::setAttackType(AttackInfo::ENUM_ATTACKTYPE)`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x088908b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088908b8  _ZN10AttackInfo13setAttackTypeENS_15ENUM_ATTACKTYPEE
#           AttackInfo::setAttackType(AttackInfo::ENUM_ATTACKTYPE)
# range [0x088908b8, 0x088908c5]
088908b8 +0x00:  push   %ebp
088908b9 +0x01:  mov    %esp,%ebp
088908bb +0x03:  mov    0x8(%ebp),%eax
088908be +0x06:  mov    0xc(%ebp),%edx
088908c1 +0x09:  mov    %edx,0x10(%eax)
088908c4 +0x0c:  pop    %ebp
088908c5 +0x0d:  ret
```

## 反编译 C

```c
// AttackInfo::setAttackType @ 0x88908b8

/* AttackInfo::setAttackType(AttackInfo::ENUM_ATTACKTYPE) */

void __thiscall AttackInfo::setAttackType(AttackInfo *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x10) = param_2;
  return;
}
```
