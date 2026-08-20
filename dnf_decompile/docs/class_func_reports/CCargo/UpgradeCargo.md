# UpgradeCargo

`_ZN6CCargo12UpgradeCargoEi`

`CCargo::UpgradeCargo(int)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c656  _ZN6CCargo12UpgradeCargoEi
#           CCargo::UpgradeCargo(int)
# range [0x0850c656, 0x0850c697]
0850c656 +0x00:  push   %ebp
0850c657 +0x01:  mov    %esp,%ebp
0850c659 +0x03:  mov    0x8(%ebp),%eax
0850c65c +0x06:  mov    0xc(%eax),%eax
0850c65f +0x09:  test   %eax,%eax
0850c661 +0x0b:  je     0850c66e <+0x18>
0850c663 +0x0d:  mov    0x8(%ebp),%eax
0850c666 +0x10:  mov    0xc(%eax),%eax
0850c669 +0x13:  cmp    0xc(%ebp),%eax
0850c66c +0x16:  jle    0850c675 <+0x1f>
0850c66e +0x18:  mov    $0x0,%eax
0850c673 +0x1d:  jmp    0850c695 <+0x3f>
0850c675 +0x1f:  mov    0x8(%ebp),%eax
0850c678 +0x22:  mov    0xc(%eax),%eax
0850c67b +0x25:  cmp    0xc(%ebp),%eax
0850c67e +0x28:  jl     0850c687 <+0x31>
0850c680 +0x2a:  mov    $0x0,%eax
0850c685 +0x2f:  jmp    0850c695 <+0x3f>
0850c687 +0x31:  mov    0x8(%ebp),%eax
0850c68a +0x34:  mov    0xc(%ebp),%edx
0850c68d +0x37:  mov    %edx,0xc(%eax)
0850c690 +0x3a:  mov    $0x1,%eax
0850c695 +0x3f:  pop    %ebp
0850c696 +0x40:  ret
0850c697 +0x41:  nop
```

## 反编译 C

```c
// CCargo::UpgradeCargo @ 0x850c656

/* CCargo::UpgradeCargo(int) */

undefined4 __thiscall CCargo::UpgradeCargo(CCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0xc) == 0) || (param_1 < *(int *)(this + 0xc))) {
    uVar1 = 0;
  }
  else if (*(int *)(this + 0xc) < param_1) {
    *(int *)(this + 0xc) = param_1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
