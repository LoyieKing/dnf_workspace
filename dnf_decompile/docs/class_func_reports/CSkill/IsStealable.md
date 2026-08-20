# IsStealable

`_ZNK6CSkill11IsStealableEii`

`CSkill::IsStealable(int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x083504ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083504ec  _ZNK6CSkill11IsStealableEii
#           CSkill::IsStealable(int, int) const
# range [0x083504ec, 0x08350579]
083504ec +0x00:  push   %ebp
083504ed +0x01:  mov    %esp,%ebp
083504ef +0x03:  sub    $0x10,%esp
083504f2 +0x06:  mov    0x8(%ebp),%eax
083504f5 +0x09:  movzbl 0x114(%eax),%eax
083504fc +0x10:  xor    $0x1,%eax
083504ff +0x13:  test   %al,%al
08350501 +0x15:  je     0835050a <+0x1e>
08350503 +0x17:  mov    $0x0,%eax
08350508 +0x1c:  jmp    08350577 <+0x8b>
0835050a +0x1e:  movl   $0x0,-0x8(%ebp)
08350511 +0x25:  jmp    08350530 <+0x44>
08350513 +0x27:  mov    -0x8(%ebp),%edx
08350516 +0x2a:  mov    0x8(%ebp),%eax
08350519 +0x2d:  add    $0x30,%edx
0835051c +0x30:  mov    0xc(%eax,%edx,4),%eax
08350520 +0x34:  cmp    0xc(%ebp),%eax
08350523 +0x37:  jne    0835052c <+0x40>
08350525 +0x39:  mov    $0x0,%eax
0835052a +0x3e:  jmp    08350577 <+0x8b>
0835052c +0x40:  addl   $0x1,-0x8(%ebp)
08350530 +0x44:  cmpl   $0x5,-0x8(%ebp)
08350534 +0x48:  setle  %al
08350537 +0x4b:  test   %al,%al
08350539 +0x4d:  jne    08350513 <+0x27>
0835053b +0x4f:  cmpl   $0x0,0x10(%ebp)
0835053f +0x53:  jle    08350572 <+0x86>
08350541 +0x55:  movl   $0x0,-0x4(%ebp)
08350548 +0x5c:  jmp    08350567 <+0x7b>
0835054a +0x5e:  mov    -0x4(%ebp),%edx
0835054d +0x61:  mov    0x8(%ebp),%eax
08350550 +0x64:  add    $0x2c,%edx
08350553 +0x67:  mov    0x4(%eax,%edx,4),%eax
08350557 +0x6b:  cmp    0x10(%ebp),%eax
0835055a +0x6e:  jne    08350563 <+0x77>
0835055c +0x70:  mov    $0x0,%eax
08350561 +0x75:  jmp    08350577 <+0x8b>
08350563 +0x77:  addl   $0x1,-0x4(%ebp)
08350567 +0x7b:  cmpl   $0x1,-0x4(%ebp)
0835056b +0x7f:  setle  %al
0835056e +0x82:  test   %al,%al
08350570 +0x84:  jne    0835054a <+0x5e>
08350572 +0x86:  mov    $0x1,%eax
08350577 +0x8b:  leave
08350578 +0x8c:  ret
08350579 +0x8d:  nop
```

## 反编译 C

```c
// CSkill::IsStealable @ 0x83504ec

/* CSkill::IsStealable(int, int) const */

undefined4 __thiscall CSkill::IsStealable(CSkill *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (this[0x114] == (CSkill)0x1) {
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      if (*(int *)(this + (local_c + 0x30) * 4 + 0xc) == param_1) {
        return 0;
      }
    }
    if (0 < param_2) {
      for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
        if (*(int *)(this + (local_8 + 0x2c) * 4 + 4) == param_2) {
          return 0;
        }
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
