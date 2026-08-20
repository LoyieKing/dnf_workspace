# isIntendDamage

`_ZN10AttackInfo14isIntendDamageEv`

`AttackInfo::isIntendDamage()`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x08890760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08890760  _ZN10AttackInfo14isIntendDamageEv
#           AttackInfo::isIntendDamage()
# range [0x08890760, 0x08890799]
08890760 +0x00:  push   %ebp
08890761 +0x01:  mov    %esp,%ebp
08890763 +0x03:  mov    0x8(%ebp),%eax
08890766 +0x06:  mov    0x14(%eax),%eax
08890769 +0x09:  test   %eax,%eax
0889076b +0x0b:  jne    0889078c <+0x2c>
0889076d +0x0d:  mov    0x8(%ebp),%eax
08890770 +0x10:  flds   (%eax)
08890772 +0x12:  fldz
08890774 +0x14:  fxch   %st(1)
08890776 +0x16:  fucompp
08890778 +0x18:  fnstsw %ax
0889077a +0x1a:  sahf
0889077b +0x1b:  seta   %al
0889077e +0x1e:  test   %al,%al
08890780 +0x20:  jne    0889078c <+0x2c>
08890782 +0x22:  mov    0x8(%ebp),%eax
08890785 +0x25:  mov    0x8(%eax),%eax
08890788 +0x28:  test   %eax,%eax
0889078a +0x2a:  jle    08890793 <+0x33>
0889078c +0x2c:  mov    $0x1,%eax
08890791 +0x31:  jmp    08890798 <+0x38>
08890793 +0x33:  mov    $0x0,%eax
08890798 +0x38:  pop    %ebp
08890799 +0x39:  ret
```

## 反编译 C

```c
// AttackInfo::isIntendDamage @ 0x8890760

/* AttackInfo::isIntendDamage() */

undefined4 __thiscall AttackInfo::isIntendDamage(AttackInfo *this)

{
  undefined4 uVar1;
  
  if (((*(int *)(this + 0x14) != 0) || (0.0 < *(float *)this)) || (0 < *(int *)(this + 8))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
