# isUpgradable

`_ZNK6CCargo12isUpgradableEi`

`CCargo::isUpgradable(int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c698` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c698  _ZNK6CCargo12isUpgradableEi
#           CCargo::isUpgradable(int) const
# range [0x0850c698, 0x0850c6df]
0850c698 +0x00:  push   %ebp
0850c699 +0x01:  mov    %esp,%ebp
0850c69b +0x03:  mov    0x8(%ebp),%eax
0850c69e +0x06:  mov    0xc(%eax),%eax
0850c6a1 +0x09:  test   %eax,%eax
0850c6a3 +0x0b:  je     0850c6b0 <+0x18>
0850c6a5 +0x0d:  mov    0x8(%ebp),%eax
0850c6a8 +0x10:  mov    0xc(%eax),%eax
0850c6ab +0x13:  cmp    0xc(%ebp),%eax
0850c6ae +0x16:  jle    0850c6b7 <+0x1f>
0850c6b0 +0x18:  mov    $0x0,%eax
0850c6b5 +0x1d:  jmp    0850c6de <+0x46>
0850c6b7 +0x1f:  mov    0x8(%ebp),%eax
0850c6ba +0x22:  mov    0xc(%eax),%eax
0850c6bd +0x25:  cmp    0xc(%ebp),%eax
0850c6c0 +0x28:  jl     0850c6c9 <+0x31>
0850c6c2 +0x2a:  mov    $0x0,%eax
0850c6c7 +0x2f:  jmp    0850c6de <+0x46>
0850c6c9 +0x31:  cmpl   $0x98,0xc(%ebp)
0850c6d0 +0x38:  jle    0850c6d9 <+0x41>
0850c6d2 +0x3a:  mov    $0x0,%eax
0850c6d7 +0x3f:  jmp    0850c6de <+0x46>
0850c6d9 +0x41:  mov    $0x1,%eax
0850c6de +0x46:  pop    %ebp
0850c6df +0x47:  ret
```

## 反编译 C

```c
// CCargo::isUpgradable @ 0x850c698

/* CCargo::isUpgradable(int) const */

undefined4 __thiscall CCargo::isUpgradable(CCargo *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0xc) == 0) || (param_1 < *(int *)(this + 0xc))) {
    uVar1 = 0;
  }
  else if (*(int *)(this + 0xc) < param_1) {
    if (param_1 < 0x99) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
