# IncrementValue

`_ZN13user_creature8CStomach14IncrementValueEf`

`user_creature::CStomach::IncrementValue(float)`

| 类 | 地址 |
|---|---|
| `user_creature::CStomach` | `0x08336e66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336e66  _ZN13user_creature8CStomach14IncrementValueEf
#           user_creature::CStomach::IncrementValue(float)
# range [0x08336e66, 0x08336ead]
08336e66 +0x00:  push   %ebp
08336e67 +0x01:  mov    %esp,%ebp
08336e69 +0x03:  sub    $0x4,%esp
08336e6c +0x06:  mov    0x8(%ebp),%eax
08336e6f +0x09:  flds   0x4(%eax)
08336e72 +0x0c:  fadds  0xc(%ebp)
08336e75 +0x0f:  mov    0x8(%ebp),%eax
08336e78 +0x12:  fstps  0x4(%eax)
08336e7b +0x15:  mov    0x8(%ebp),%eax
08336e7e +0x18:  flds   0x4(%eax)
08336e81 +0x1b:  flds   &data#e466c33b(.rodata)
08336e87 +0x21:  fxch   %st(1)
08336e89 +0x23:  fucompp
08336e8b +0x25:  fnstsw %ax
08336e8d +0x27:  sahf
08336e8e +0x28:  seta   %al
08336e91 +0x2b:  test   %al,%al
08336e93 +0x2d:  je     08336ea0 <+0x3a>
08336e95 +0x2f:  mov    0x8(%ebp),%eax
08336e98 +0x32:  mov    $0x42c80000,%edx
08336e9d +0x37:  mov    %edx,0x4(%eax)
08336ea0 +0x3a:  mov    0x8(%ebp),%eax
08336ea3 +0x3d:  mov    0x4(%eax),%eax
08336ea6 +0x40:  mov    %eax,-0x4(%ebp)
08336ea9 +0x43:  flds   -0x4(%ebp)
08336eac +0x46:  leave
08336ead +0x47:  ret
```

## 反编译 C

```c
// user_creature::CStomach::IncrementValue @ 0x8336e66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CStomach::IncrementValue(float) */

longdouble __thiscall user_creature::CStomach::IncrementValue(CStomach *this,float param_1)

{
  *(float *)(this + 4) = *(float *)(this + 4) + param_1;
  if (_DAT_08c2f450 < *(float *)(this + 4)) {
    *(undefined4 *)(this + 4) = 0x42c80000;
  }
  return (longdouble)*(float *)(this + 4);
}
```
