# IsSaveStomach

`_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE`

`user_creature::CStomach::IsSaveStomach(user_creature::CREATURE_STATE)`

| 类 | 地址 |
|---|---|
| `user_creature::CStomach` | `0x08336dee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336dee  _ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE
#           user_creature::CStomach::IsSaveStomach(user_creature::CREATURE_STATE)
# range [0x08336dee, 0x08336e4b]
08336dee +0x00:  push   %ebp
08336def +0x01:  mov    %esp,%ebp
08336df1 +0x03:  sub    $0x10,%esp
08336df4 +0x06:  movb   $0x1,-0x1(%ebp)
08336df8 +0x0a:  mov    0xc(%ebp),%eax
08336dfb +0x0d:  cmp    $0x1,%eax
08336dfe +0x10:  je     08336e0c <+0x1e>
08336e00 +0x12:  cmp    $0x1,%eax
08336e03 +0x15:  jl     08336e46 <+0x58>
08336e05 +0x17:  cmp    $0x3,%eax
08336e08 +0x1a:  jg     08336e46 <+0x58>
08336e0a +0x1c:  jmp    08336e28 <+0x3a>
08336e0c +0x1e:  mov    0x8(%ebp),%eax
08336e0f +0x21:  flds   0x4(%eax)
08336e12 +0x24:  fldz
08336e14 +0x26:  fucompp
08336e16 +0x28:  fnstsw %ax
08336e18 +0x2a:  test   $0x5,%ah
08336e1b +0x2d:  sete   %al
08336e1e +0x30:  test   %al,%al
08336e20 +0x32:  je     08336e45 <+0x57>
08336e22 +0x34:  movb   $0x0,-0x1(%ebp)
08336e26 +0x38:  jmp    08336e46 <+0x58>
08336e28 +0x3a:  mov    0x8(%ebp),%eax
08336e2b +0x3d:  flds   0x4(%eax)
08336e2e +0x40:  flds   &data#e466c33b(.rodata)
08336e34 +0x46:  fxch   %st(1)
08336e36 +0x48:  fucompp
08336e38 +0x4a:  fnstsw %ax
08336e3a +0x4c:  sahf
08336e3b +0x4d:  jne    08336e46 <+0x58>
08336e3d +0x4f:  jp     08336e46 <+0x58>
08336e3f +0x51:  movb   $0x0,-0x1(%ebp)
08336e43 +0x55:  jmp    08336e46 <+0x58>
08336e45 +0x57:  nop
08336e46 +0x58:  movzbl -0x1(%ebp),%eax
08336e4a +0x5c:  leave
08336e4b +0x5d:  ret
```

## 反编译 C

```c
// user_creature::CStomach::IsSaveStomach @ 0x8336dee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CStomach::IsSaveStomach(user_creature::CREATURE_STATE) */

undefined1 __thiscall user_creature::CStomach::IsSaveStomach(CStomach *this,int param_2)

{
  undefined1 local_5;
  
  local_5 = 1;
  if (param_2 == 1) {
    if (*(float *)(this + 4) <= 0.0) {
      local_5 = 0;
    }
  }
  else if ((((0 < param_2) && (param_2 < 4)) && (*(float *)(this + 4) == _DAT_08c2f450)) &&
          (!NAN(*(float *)(this + 4)) && !NAN(_DAT_08c2f450))) {
    local_5 = 0;
  }
  return local_5;
}
```
