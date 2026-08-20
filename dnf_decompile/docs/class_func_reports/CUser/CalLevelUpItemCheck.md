# CalLevelUpItemCheck

`_ZN5CUser19CalLevelUpItemCheckEm`

`CUser::CalLevelUpItemCheck(unsigned long)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689d06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689d06  _ZN5CUser19CalLevelUpItemCheckEm
#           CUser::CalLevelUpItemCheck(unsigned long)
# range [0x08689d06, 0x08689d73]
08689d06 +0x00:  push   %ebp
08689d07 +0x01:  mov    %esp,%ebp
08689d09 +0x03:  sub    $0x28,%esp
08689d0c +0x06:  mov    0x8(%ebp),%eax
08689d0f +0x09:  mov    %eax,(%esp)
08689d12 +0x0c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08689d17 +0x11:  mov    %eax,-0xc(%ebp)
08689d1a +0x14:  mov    0xc(%ebp),%eax
08689d1d +0x17:  cmp    $0x28d2bc,%eax
08689d22 +0x1c:  je     08689d42 <+0x3c>
08689d24 +0x1e:  cmp    $0x28d2bc,%eax
08689d29 +0x23:  ja     08689d34 <+0x2e>
08689d2b +0x25:  cmp    $0x1f71,%eax
08689d30 +0x2a:  je     08689d55 <+0x4f>
08689d32 +0x2c:  jmp    08689d6c <+0x66>
08689d34 +0x2e:  cmp    $0x989a13,%eax
08689d39 +0x33:  je     08689d42 <+0x3c>
08689d3b +0x35:  cmp    $0x292090e1,%eax
08689d40 +0x3a:  jne    08689d6c <+0x66>
08689d42 +0x3c:  cmpl   $0x0,-0xc(%ebp)
08689d46 +0x40:  jle    08689d68 <+0x62>
08689d48 +0x42:  cmpl   $0x54,-0xc(%ebp)
08689d4c +0x46:  jg     08689d6b <+0x65>
08689d4e +0x48:  mov    $0x1,%eax
08689d53 +0x4d:  jmp    08689d71 <+0x6b>
08689d55 +0x4f:  cmpl   $0x12,-0xc(%ebp)
08689d59 +0x53:  jle    08689d6c <+0x66>
08689d5b +0x55:  cmpl   $0x3b,-0xc(%ebp)
08689d5f +0x59:  jg     08689d6c <+0x66>
08689d61 +0x5b:  mov    $0x1,%eax
08689d66 +0x60:  jmp    08689d71 <+0x6b>
08689d68 +0x62:  nop
08689d69 +0x63:  jmp    08689d6c <+0x66>
08689d6b +0x65:  nop
08689d6c +0x66:  mov    $0x0,%eax
08689d71 +0x6b:  leave
08689d72 +0x6c:  ret
08689d73 +0x6d:  nop
```

## 反编译 C

```c
// CUser::CalLevelUpItemCheck @ 0x8689d06

/* CUser::CalLevelUpItemCheck(unsigned long) */

undefined4 __thiscall CUser::CalLevelUpItemCheck(CUser *this,ulong param_1)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (param_1 != 0x28d2bc) {
    if (param_1 < 0x28d2bd) {
      if (param_1 != 0x1f71) {
        return 0;
      }
      if (iVar1 < 0x13) {
        return 0;
      }
      if (0x3b < iVar1) {
        return 0;
      }
      return 1;
    }
    if ((param_1 != 0x989a13) && (param_1 != 0x292090e1)) {
      return 0;
    }
  }
  if ((0 < iVar1) && (iVar1 < 0x55)) {
    return 1;
  }
  return 0;
}
```
