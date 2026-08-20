# isCheckUseSkill

`_ZN6CParty15isCheckUseSkillEii`

`CParty::isCheckUseSkill(int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bb5b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb5b0  _ZN6CParty15isCheckUseSkillEii
#           CParty::isCheckUseSkill(int, int)
# range [0x085bb5b0, 0x085bb629]
085bb5b0 +0x00:  push   %ebp
085bb5b1 +0x01:  mov    %esp,%ebp
085bb5b3 +0x03:  cmpl   $0xa8,0x10(%ebp)
085bb5ba +0x0a:  jg     085bb61c <+0x6c>
085bb5bc +0x0c:  cmpl   $0x0,0xc(%ebp)
085bb5c0 +0x10:  jne    085bb5c8 <+0x18>
085bb5c2 +0x12:  cmpl   $0x2e,0x10(%ebp)
085bb5c6 +0x16:  je     085bb61c <+0x6c>
085bb5c8 +0x18:  cmpl   $0x1,0xc(%ebp)
085bb5cc +0x1c:  jne    085bb5d4 <+0x24>
085bb5ce +0x1e:  cmpl   $0x5,0x10(%ebp)
085bb5d2 +0x22:  je     085bb61c <+0x6c>
085bb5d4 +0x24:  cmpl   $0x2,0xc(%ebp)
085bb5d8 +0x28:  jne    085bb5e0 <+0x30>
085bb5da +0x2a:  cmpl   $0x4,0x10(%ebp)
085bb5de +0x2e:  je     085bb61c <+0x6c>
085bb5e0 +0x30:  cmpl   $0x3,0xc(%ebp)
085bb5e4 +0x34:  jne    085bb5ec <+0x3c>
085bb5e6 +0x36:  cmpl   $0xc,0x10(%ebp)
085bb5ea +0x3a:  je     085bb61c <+0x6c>
085bb5ec +0x3c:  cmpl   $0x4,0xc(%ebp)
085bb5f0 +0x40:  jne    085bb5f8 <+0x48>
085bb5f2 +0x42:  cmpl   $0x1,0x10(%ebp)
085bb5f6 +0x46:  je     085bb61c <+0x6c>
085bb5f8 +0x48:  cmpl   $0x5,0xc(%ebp)
085bb5fc +0x4c:  jne    085bb604 <+0x54>
085bb5fe +0x4e:  cmpl   $0x4,0x10(%ebp)
085bb602 +0x52:  je     085bb61c <+0x6c>
085bb604 +0x54:  cmpl   $0x6,0xc(%ebp)
085bb608 +0x58:  jne    085bb610 <+0x60>
085bb60a +0x5a:  cmpl   $0x1,0x10(%ebp)
085bb60e +0x5e:  je     085bb61c <+0x6c>
085bb610 +0x60:  cmpl   $0x7,0xc(%ebp)
085bb614 +0x64:  jne    085bb623 <+0x73>
085bb616 +0x66:  cmpl   $0x5,0x10(%ebp)
085bb61a +0x6a:  jne    085bb623 <+0x73>
085bb61c +0x6c:  mov    $0x0,%eax
085bb621 +0x71:  jmp    085bb628 <+0x78>
085bb623 +0x73:  mov    $0x1,%eax
085bb628 +0x78:  pop    %ebp
085bb629 +0x79:  ret
```

## 反编译 C

```c
// CParty::isCheckUseSkill @ 0x85bb5b0

/* CParty::isCheckUseSkill(int, int) */

undefined4 __thiscall CParty::isCheckUseSkill(CParty *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((((param_2 < 0xa9) && ((param_1 != 0 || (param_2 != 0x2e)))) &&
        ((param_1 != 1 || (param_2 != 5)))) &&
       ((((param_1 != 2 || (param_2 != 4)) && ((param_1 != 3 || (param_2 != 0xc)))) &&
        ((param_1 != 4 || (param_2 != 1)))))) && ((param_1 != 5 || (param_2 != 4)))) &&
     (((param_1 != 6 || (param_2 != 1)) && ((param_1 != 7 || (param_2 != 5)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
